#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CF740
// Address: 0x2cf740 - 0x2d14f0
void sub_002CF740_0x2cf740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF740_0x2cf740");
#endif

    switch (ctx->pc) {
        case 0x2cf740u: goto label_2cf740;
        case 0x2cf744u: goto label_2cf744;
        case 0x2cf748u: goto label_2cf748;
        case 0x2cf74cu: goto label_2cf74c;
        case 0x2cf750u: goto label_2cf750;
        case 0x2cf754u: goto label_2cf754;
        case 0x2cf758u: goto label_2cf758;
        case 0x2cf75cu: goto label_2cf75c;
        case 0x2cf760u: goto label_2cf760;
        case 0x2cf764u: goto label_2cf764;
        case 0x2cf768u: goto label_2cf768;
        case 0x2cf76cu: goto label_2cf76c;
        case 0x2cf770u: goto label_2cf770;
        case 0x2cf774u: goto label_2cf774;
        case 0x2cf778u: goto label_2cf778;
        case 0x2cf77cu: goto label_2cf77c;
        case 0x2cf780u: goto label_2cf780;
        case 0x2cf784u: goto label_2cf784;
        case 0x2cf788u: goto label_2cf788;
        case 0x2cf78cu: goto label_2cf78c;
        case 0x2cf790u: goto label_2cf790;
        case 0x2cf794u: goto label_2cf794;
        case 0x2cf798u: goto label_2cf798;
        case 0x2cf79cu: goto label_2cf79c;
        case 0x2cf7a0u: goto label_2cf7a0;
        case 0x2cf7a4u: goto label_2cf7a4;
        case 0x2cf7a8u: goto label_2cf7a8;
        case 0x2cf7acu: goto label_2cf7ac;
        case 0x2cf7b0u: goto label_2cf7b0;
        case 0x2cf7b4u: goto label_2cf7b4;
        case 0x2cf7b8u: goto label_2cf7b8;
        case 0x2cf7bcu: goto label_2cf7bc;
        case 0x2cf7c0u: goto label_2cf7c0;
        case 0x2cf7c4u: goto label_2cf7c4;
        case 0x2cf7c8u: goto label_2cf7c8;
        case 0x2cf7ccu: goto label_2cf7cc;
        case 0x2cf7d0u: goto label_2cf7d0;
        case 0x2cf7d4u: goto label_2cf7d4;
        case 0x2cf7d8u: goto label_2cf7d8;
        case 0x2cf7dcu: goto label_2cf7dc;
        case 0x2cf7e0u: goto label_2cf7e0;
        case 0x2cf7e4u: goto label_2cf7e4;
        case 0x2cf7e8u: goto label_2cf7e8;
        case 0x2cf7ecu: goto label_2cf7ec;
        case 0x2cf7f0u: goto label_2cf7f0;
        case 0x2cf7f4u: goto label_2cf7f4;
        case 0x2cf7f8u: goto label_2cf7f8;
        case 0x2cf7fcu: goto label_2cf7fc;
        case 0x2cf800u: goto label_2cf800;
        case 0x2cf804u: goto label_2cf804;
        case 0x2cf808u: goto label_2cf808;
        case 0x2cf80cu: goto label_2cf80c;
        case 0x2cf810u: goto label_2cf810;
        case 0x2cf814u: goto label_2cf814;
        case 0x2cf818u: goto label_2cf818;
        case 0x2cf81cu: goto label_2cf81c;
        case 0x2cf820u: goto label_2cf820;
        case 0x2cf824u: goto label_2cf824;
        case 0x2cf828u: goto label_2cf828;
        case 0x2cf82cu: goto label_2cf82c;
        case 0x2cf830u: goto label_2cf830;
        case 0x2cf834u: goto label_2cf834;
        case 0x2cf838u: goto label_2cf838;
        case 0x2cf83cu: goto label_2cf83c;
        case 0x2cf840u: goto label_2cf840;
        case 0x2cf844u: goto label_2cf844;
        case 0x2cf848u: goto label_2cf848;
        case 0x2cf84cu: goto label_2cf84c;
        case 0x2cf850u: goto label_2cf850;
        case 0x2cf854u: goto label_2cf854;
        case 0x2cf858u: goto label_2cf858;
        case 0x2cf85cu: goto label_2cf85c;
        case 0x2cf860u: goto label_2cf860;
        case 0x2cf864u: goto label_2cf864;
        case 0x2cf868u: goto label_2cf868;
        case 0x2cf86cu: goto label_2cf86c;
        case 0x2cf870u: goto label_2cf870;
        case 0x2cf874u: goto label_2cf874;
        case 0x2cf878u: goto label_2cf878;
        case 0x2cf87cu: goto label_2cf87c;
        case 0x2cf880u: goto label_2cf880;
        case 0x2cf884u: goto label_2cf884;
        case 0x2cf888u: goto label_2cf888;
        case 0x2cf88cu: goto label_2cf88c;
        case 0x2cf890u: goto label_2cf890;
        case 0x2cf894u: goto label_2cf894;
        case 0x2cf898u: goto label_2cf898;
        case 0x2cf89cu: goto label_2cf89c;
        case 0x2cf8a0u: goto label_2cf8a0;
        case 0x2cf8a4u: goto label_2cf8a4;
        case 0x2cf8a8u: goto label_2cf8a8;
        case 0x2cf8acu: goto label_2cf8ac;
        case 0x2cf8b0u: goto label_2cf8b0;
        case 0x2cf8b4u: goto label_2cf8b4;
        case 0x2cf8b8u: goto label_2cf8b8;
        case 0x2cf8bcu: goto label_2cf8bc;
        case 0x2cf8c0u: goto label_2cf8c0;
        case 0x2cf8c4u: goto label_2cf8c4;
        case 0x2cf8c8u: goto label_2cf8c8;
        case 0x2cf8ccu: goto label_2cf8cc;
        case 0x2cf8d0u: goto label_2cf8d0;
        case 0x2cf8d4u: goto label_2cf8d4;
        case 0x2cf8d8u: goto label_2cf8d8;
        case 0x2cf8dcu: goto label_2cf8dc;
        case 0x2cf8e0u: goto label_2cf8e0;
        case 0x2cf8e4u: goto label_2cf8e4;
        case 0x2cf8e8u: goto label_2cf8e8;
        case 0x2cf8ecu: goto label_2cf8ec;
        case 0x2cf8f0u: goto label_2cf8f0;
        case 0x2cf8f4u: goto label_2cf8f4;
        case 0x2cf8f8u: goto label_2cf8f8;
        case 0x2cf8fcu: goto label_2cf8fc;
        case 0x2cf900u: goto label_2cf900;
        case 0x2cf904u: goto label_2cf904;
        case 0x2cf908u: goto label_2cf908;
        case 0x2cf90cu: goto label_2cf90c;
        case 0x2cf910u: goto label_2cf910;
        case 0x2cf914u: goto label_2cf914;
        case 0x2cf918u: goto label_2cf918;
        case 0x2cf91cu: goto label_2cf91c;
        case 0x2cf920u: goto label_2cf920;
        case 0x2cf924u: goto label_2cf924;
        case 0x2cf928u: goto label_2cf928;
        case 0x2cf92cu: goto label_2cf92c;
        case 0x2cf930u: goto label_2cf930;
        case 0x2cf934u: goto label_2cf934;
        case 0x2cf938u: goto label_2cf938;
        case 0x2cf93cu: goto label_2cf93c;
        case 0x2cf940u: goto label_2cf940;
        case 0x2cf944u: goto label_2cf944;
        case 0x2cf948u: goto label_2cf948;
        case 0x2cf94cu: goto label_2cf94c;
        case 0x2cf950u: goto label_2cf950;
        case 0x2cf954u: goto label_2cf954;
        case 0x2cf958u: goto label_2cf958;
        case 0x2cf95cu: goto label_2cf95c;
        case 0x2cf960u: goto label_2cf960;
        case 0x2cf964u: goto label_2cf964;
        case 0x2cf968u: goto label_2cf968;
        case 0x2cf96cu: goto label_2cf96c;
        case 0x2cf970u: goto label_2cf970;
        case 0x2cf974u: goto label_2cf974;
        case 0x2cf978u: goto label_2cf978;
        case 0x2cf97cu: goto label_2cf97c;
        case 0x2cf980u: goto label_2cf980;
        case 0x2cf984u: goto label_2cf984;
        case 0x2cf988u: goto label_2cf988;
        case 0x2cf98cu: goto label_2cf98c;
        case 0x2cf990u: goto label_2cf990;
        case 0x2cf994u: goto label_2cf994;
        case 0x2cf998u: goto label_2cf998;
        case 0x2cf99cu: goto label_2cf99c;
        case 0x2cf9a0u: goto label_2cf9a0;
        case 0x2cf9a4u: goto label_2cf9a4;
        case 0x2cf9a8u: goto label_2cf9a8;
        case 0x2cf9acu: goto label_2cf9ac;
        case 0x2cf9b0u: goto label_2cf9b0;
        case 0x2cf9b4u: goto label_2cf9b4;
        case 0x2cf9b8u: goto label_2cf9b8;
        case 0x2cf9bcu: goto label_2cf9bc;
        case 0x2cf9c0u: goto label_2cf9c0;
        case 0x2cf9c4u: goto label_2cf9c4;
        case 0x2cf9c8u: goto label_2cf9c8;
        case 0x2cf9ccu: goto label_2cf9cc;
        case 0x2cf9d0u: goto label_2cf9d0;
        case 0x2cf9d4u: goto label_2cf9d4;
        case 0x2cf9d8u: goto label_2cf9d8;
        case 0x2cf9dcu: goto label_2cf9dc;
        case 0x2cf9e0u: goto label_2cf9e0;
        case 0x2cf9e4u: goto label_2cf9e4;
        case 0x2cf9e8u: goto label_2cf9e8;
        case 0x2cf9ecu: goto label_2cf9ec;
        case 0x2cf9f0u: goto label_2cf9f0;
        case 0x2cf9f4u: goto label_2cf9f4;
        case 0x2cf9f8u: goto label_2cf9f8;
        case 0x2cf9fcu: goto label_2cf9fc;
        case 0x2cfa00u: goto label_2cfa00;
        case 0x2cfa04u: goto label_2cfa04;
        case 0x2cfa08u: goto label_2cfa08;
        case 0x2cfa0cu: goto label_2cfa0c;
        case 0x2cfa10u: goto label_2cfa10;
        case 0x2cfa14u: goto label_2cfa14;
        case 0x2cfa18u: goto label_2cfa18;
        case 0x2cfa1cu: goto label_2cfa1c;
        case 0x2cfa20u: goto label_2cfa20;
        case 0x2cfa24u: goto label_2cfa24;
        case 0x2cfa28u: goto label_2cfa28;
        case 0x2cfa2cu: goto label_2cfa2c;
        case 0x2cfa30u: goto label_2cfa30;
        case 0x2cfa34u: goto label_2cfa34;
        case 0x2cfa38u: goto label_2cfa38;
        case 0x2cfa3cu: goto label_2cfa3c;
        case 0x2cfa40u: goto label_2cfa40;
        case 0x2cfa44u: goto label_2cfa44;
        case 0x2cfa48u: goto label_2cfa48;
        case 0x2cfa4cu: goto label_2cfa4c;
        case 0x2cfa50u: goto label_2cfa50;
        case 0x2cfa54u: goto label_2cfa54;
        case 0x2cfa58u: goto label_2cfa58;
        case 0x2cfa5cu: goto label_2cfa5c;
        case 0x2cfa60u: goto label_2cfa60;
        case 0x2cfa64u: goto label_2cfa64;
        case 0x2cfa68u: goto label_2cfa68;
        case 0x2cfa6cu: goto label_2cfa6c;
        case 0x2cfa70u: goto label_2cfa70;
        case 0x2cfa74u: goto label_2cfa74;
        case 0x2cfa78u: goto label_2cfa78;
        case 0x2cfa7cu: goto label_2cfa7c;
        case 0x2cfa80u: goto label_2cfa80;
        case 0x2cfa84u: goto label_2cfa84;
        case 0x2cfa88u: goto label_2cfa88;
        case 0x2cfa8cu: goto label_2cfa8c;
        case 0x2cfa90u: goto label_2cfa90;
        case 0x2cfa94u: goto label_2cfa94;
        case 0x2cfa98u: goto label_2cfa98;
        case 0x2cfa9cu: goto label_2cfa9c;
        case 0x2cfaa0u: goto label_2cfaa0;
        case 0x2cfaa4u: goto label_2cfaa4;
        case 0x2cfaa8u: goto label_2cfaa8;
        case 0x2cfaacu: goto label_2cfaac;
        case 0x2cfab0u: goto label_2cfab0;
        case 0x2cfab4u: goto label_2cfab4;
        case 0x2cfab8u: goto label_2cfab8;
        case 0x2cfabcu: goto label_2cfabc;
        case 0x2cfac0u: goto label_2cfac0;
        case 0x2cfac4u: goto label_2cfac4;
        case 0x2cfac8u: goto label_2cfac8;
        case 0x2cfaccu: goto label_2cfacc;
        case 0x2cfad0u: goto label_2cfad0;
        case 0x2cfad4u: goto label_2cfad4;
        case 0x2cfad8u: goto label_2cfad8;
        case 0x2cfadcu: goto label_2cfadc;
        case 0x2cfae0u: goto label_2cfae0;
        case 0x2cfae4u: goto label_2cfae4;
        case 0x2cfae8u: goto label_2cfae8;
        case 0x2cfaecu: goto label_2cfaec;
        case 0x2cfaf0u: goto label_2cfaf0;
        case 0x2cfaf4u: goto label_2cfaf4;
        case 0x2cfaf8u: goto label_2cfaf8;
        case 0x2cfafcu: goto label_2cfafc;
        case 0x2cfb00u: goto label_2cfb00;
        case 0x2cfb04u: goto label_2cfb04;
        case 0x2cfb08u: goto label_2cfb08;
        case 0x2cfb0cu: goto label_2cfb0c;
        case 0x2cfb10u: goto label_2cfb10;
        case 0x2cfb14u: goto label_2cfb14;
        case 0x2cfb18u: goto label_2cfb18;
        case 0x2cfb1cu: goto label_2cfb1c;
        case 0x2cfb20u: goto label_2cfb20;
        case 0x2cfb24u: goto label_2cfb24;
        case 0x2cfb28u: goto label_2cfb28;
        case 0x2cfb2cu: goto label_2cfb2c;
        case 0x2cfb30u: goto label_2cfb30;
        case 0x2cfb34u: goto label_2cfb34;
        case 0x2cfb38u: goto label_2cfb38;
        case 0x2cfb3cu: goto label_2cfb3c;
        case 0x2cfb40u: goto label_2cfb40;
        case 0x2cfb44u: goto label_2cfb44;
        case 0x2cfb48u: goto label_2cfb48;
        case 0x2cfb4cu: goto label_2cfb4c;
        case 0x2cfb50u: goto label_2cfb50;
        case 0x2cfb54u: goto label_2cfb54;
        case 0x2cfb58u: goto label_2cfb58;
        case 0x2cfb5cu: goto label_2cfb5c;
        case 0x2cfb60u: goto label_2cfb60;
        case 0x2cfb64u: goto label_2cfb64;
        case 0x2cfb68u: goto label_2cfb68;
        case 0x2cfb6cu: goto label_2cfb6c;
        case 0x2cfb70u: goto label_2cfb70;
        case 0x2cfb74u: goto label_2cfb74;
        case 0x2cfb78u: goto label_2cfb78;
        case 0x2cfb7cu: goto label_2cfb7c;
        case 0x2cfb80u: goto label_2cfb80;
        case 0x2cfb84u: goto label_2cfb84;
        case 0x2cfb88u: goto label_2cfb88;
        case 0x2cfb8cu: goto label_2cfb8c;
        case 0x2cfb90u: goto label_2cfb90;
        case 0x2cfb94u: goto label_2cfb94;
        case 0x2cfb98u: goto label_2cfb98;
        case 0x2cfb9cu: goto label_2cfb9c;
        case 0x2cfba0u: goto label_2cfba0;
        case 0x2cfba4u: goto label_2cfba4;
        case 0x2cfba8u: goto label_2cfba8;
        case 0x2cfbacu: goto label_2cfbac;
        case 0x2cfbb0u: goto label_2cfbb0;
        case 0x2cfbb4u: goto label_2cfbb4;
        case 0x2cfbb8u: goto label_2cfbb8;
        case 0x2cfbbcu: goto label_2cfbbc;
        case 0x2cfbc0u: goto label_2cfbc0;
        case 0x2cfbc4u: goto label_2cfbc4;
        case 0x2cfbc8u: goto label_2cfbc8;
        case 0x2cfbccu: goto label_2cfbcc;
        case 0x2cfbd0u: goto label_2cfbd0;
        case 0x2cfbd4u: goto label_2cfbd4;
        case 0x2cfbd8u: goto label_2cfbd8;
        case 0x2cfbdcu: goto label_2cfbdc;
        case 0x2cfbe0u: goto label_2cfbe0;
        case 0x2cfbe4u: goto label_2cfbe4;
        case 0x2cfbe8u: goto label_2cfbe8;
        case 0x2cfbecu: goto label_2cfbec;
        case 0x2cfbf0u: goto label_2cfbf0;
        case 0x2cfbf4u: goto label_2cfbf4;
        case 0x2cfbf8u: goto label_2cfbf8;
        case 0x2cfbfcu: goto label_2cfbfc;
        case 0x2cfc00u: goto label_2cfc00;
        case 0x2cfc04u: goto label_2cfc04;
        case 0x2cfc08u: goto label_2cfc08;
        case 0x2cfc0cu: goto label_2cfc0c;
        case 0x2cfc10u: goto label_2cfc10;
        case 0x2cfc14u: goto label_2cfc14;
        case 0x2cfc18u: goto label_2cfc18;
        case 0x2cfc1cu: goto label_2cfc1c;
        case 0x2cfc20u: goto label_2cfc20;
        case 0x2cfc24u: goto label_2cfc24;
        case 0x2cfc28u: goto label_2cfc28;
        case 0x2cfc2cu: goto label_2cfc2c;
        case 0x2cfc30u: goto label_2cfc30;
        case 0x2cfc34u: goto label_2cfc34;
        case 0x2cfc38u: goto label_2cfc38;
        case 0x2cfc3cu: goto label_2cfc3c;
        case 0x2cfc40u: goto label_2cfc40;
        case 0x2cfc44u: goto label_2cfc44;
        case 0x2cfc48u: goto label_2cfc48;
        case 0x2cfc4cu: goto label_2cfc4c;
        case 0x2cfc50u: goto label_2cfc50;
        case 0x2cfc54u: goto label_2cfc54;
        case 0x2cfc58u: goto label_2cfc58;
        case 0x2cfc5cu: goto label_2cfc5c;
        case 0x2cfc60u: goto label_2cfc60;
        case 0x2cfc64u: goto label_2cfc64;
        case 0x2cfc68u: goto label_2cfc68;
        case 0x2cfc6cu: goto label_2cfc6c;
        case 0x2cfc70u: goto label_2cfc70;
        case 0x2cfc74u: goto label_2cfc74;
        case 0x2cfc78u: goto label_2cfc78;
        case 0x2cfc7cu: goto label_2cfc7c;
        case 0x2cfc80u: goto label_2cfc80;
        case 0x2cfc84u: goto label_2cfc84;
        case 0x2cfc88u: goto label_2cfc88;
        case 0x2cfc8cu: goto label_2cfc8c;
        case 0x2cfc90u: goto label_2cfc90;
        case 0x2cfc94u: goto label_2cfc94;
        case 0x2cfc98u: goto label_2cfc98;
        case 0x2cfc9cu: goto label_2cfc9c;
        case 0x2cfca0u: goto label_2cfca0;
        case 0x2cfca4u: goto label_2cfca4;
        case 0x2cfca8u: goto label_2cfca8;
        case 0x2cfcacu: goto label_2cfcac;
        case 0x2cfcb0u: goto label_2cfcb0;
        case 0x2cfcb4u: goto label_2cfcb4;
        case 0x2cfcb8u: goto label_2cfcb8;
        case 0x2cfcbcu: goto label_2cfcbc;
        case 0x2cfcc0u: goto label_2cfcc0;
        case 0x2cfcc4u: goto label_2cfcc4;
        case 0x2cfcc8u: goto label_2cfcc8;
        case 0x2cfcccu: goto label_2cfccc;
        case 0x2cfcd0u: goto label_2cfcd0;
        case 0x2cfcd4u: goto label_2cfcd4;
        case 0x2cfcd8u: goto label_2cfcd8;
        case 0x2cfcdcu: goto label_2cfcdc;
        case 0x2cfce0u: goto label_2cfce0;
        case 0x2cfce4u: goto label_2cfce4;
        case 0x2cfce8u: goto label_2cfce8;
        case 0x2cfcecu: goto label_2cfcec;
        case 0x2cfcf0u: goto label_2cfcf0;
        case 0x2cfcf4u: goto label_2cfcf4;
        case 0x2cfcf8u: goto label_2cfcf8;
        case 0x2cfcfcu: goto label_2cfcfc;
        case 0x2cfd00u: goto label_2cfd00;
        case 0x2cfd04u: goto label_2cfd04;
        case 0x2cfd08u: goto label_2cfd08;
        case 0x2cfd0cu: goto label_2cfd0c;
        case 0x2cfd10u: goto label_2cfd10;
        case 0x2cfd14u: goto label_2cfd14;
        case 0x2cfd18u: goto label_2cfd18;
        case 0x2cfd1cu: goto label_2cfd1c;
        case 0x2cfd20u: goto label_2cfd20;
        case 0x2cfd24u: goto label_2cfd24;
        case 0x2cfd28u: goto label_2cfd28;
        case 0x2cfd2cu: goto label_2cfd2c;
        case 0x2cfd30u: goto label_2cfd30;
        case 0x2cfd34u: goto label_2cfd34;
        case 0x2cfd38u: goto label_2cfd38;
        case 0x2cfd3cu: goto label_2cfd3c;
        case 0x2cfd40u: goto label_2cfd40;
        case 0x2cfd44u: goto label_2cfd44;
        case 0x2cfd48u: goto label_2cfd48;
        case 0x2cfd4cu: goto label_2cfd4c;
        case 0x2cfd50u: goto label_2cfd50;
        case 0x2cfd54u: goto label_2cfd54;
        case 0x2cfd58u: goto label_2cfd58;
        case 0x2cfd5cu: goto label_2cfd5c;
        case 0x2cfd60u: goto label_2cfd60;
        case 0x2cfd64u: goto label_2cfd64;
        case 0x2cfd68u: goto label_2cfd68;
        case 0x2cfd6cu: goto label_2cfd6c;
        case 0x2cfd70u: goto label_2cfd70;
        case 0x2cfd74u: goto label_2cfd74;
        case 0x2cfd78u: goto label_2cfd78;
        case 0x2cfd7cu: goto label_2cfd7c;
        case 0x2cfd80u: goto label_2cfd80;
        case 0x2cfd84u: goto label_2cfd84;
        case 0x2cfd88u: goto label_2cfd88;
        case 0x2cfd8cu: goto label_2cfd8c;
        case 0x2cfd90u: goto label_2cfd90;
        case 0x2cfd94u: goto label_2cfd94;
        case 0x2cfd98u: goto label_2cfd98;
        case 0x2cfd9cu: goto label_2cfd9c;
        case 0x2cfda0u: goto label_2cfda0;
        case 0x2cfda4u: goto label_2cfda4;
        case 0x2cfda8u: goto label_2cfda8;
        case 0x2cfdacu: goto label_2cfdac;
        case 0x2cfdb0u: goto label_2cfdb0;
        case 0x2cfdb4u: goto label_2cfdb4;
        case 0x2cfdb8u: goto label_2cfdb8;
        case 0x2cfdbcu: goto label_2cfdbc;
        case 0x2cfdc0u: goto label_2cfdc0;
        case 0x2cfdc4u: goto label_2cfdc4;
        case 0x2cfdc8u: goto label_2cfdc8;
        case 0x2cfdccu: goto label_2cfdcc;
        case 0x2cfdd0u: goto label_2cfdd0;
        case 0x2cfdd4u: goto label_2cfdd4;
        case 0x2cfdd8u: goto label_2cfdd8;
        case 0x2cfddcu: goto label_2cfddc;
        case 0x2cfde0u: goto label_2cfde0;
        case 0x2cfde4u: goto label_2cfde4;
        case 0x2cfde8u: goto label_2cfde8;
        case 0x2cfdecu: goto label_2cfdec;
        case 0x2cfdf0u: goto label_2cfdf0;
        case 0x2cfdf4u: goto label_2cfdf4;
        case 0x2cfdf8u: goto label_2cfdf8;
        case 0x2cfdfcu: goto label_2cfdfc;
        case 0x2cfe00u: goto label_2cfe00;
        case 0x2cfe04u: goto label_2cfe04;
        case 0x2cfe08u: goto label_2cfe08;
        case 0x2cfe0cu: goto label_2cfe0c;
        case 0x2cfe10u: goto label_2cfe10;
        case 0x2cfe14u: goto label_2cfe14;
        case 0x2cfe18u: goto label_2cfe18;
        case 0x2cfe1cu: goto label_2cfe1c;
        case 0x2cfe20u: goto label_2cfe20;
        case 0x2cfe24u: goto label_2cfe24;
        case 0x2cfe28u: goto label_2cfe28;
        case 0x2cfe2cu: goto label_2cfe2c;
        case 0x2cfe30u: goto label_2cfe30;
        case 0x2cfe34u: goto label_2cfe34;
        case 0x2cfe38u: goto label_2cfe38;
        case 0x2cfe3cu: goto label_2cfe3c;
        case 0x2cfe40u: goto label_2cfe40;
        case 0x2cfe44u: goto label_2cfe44;
        case 0x2cfe48u: goto label_2cfe48;
        case 0x2cfe4cu: goto label_2cfe4c;
        case 0x2cfe50u: goto label_2cfe50;
        case 0x2cfe54u: goto label_2cfe54;
        case 0x2cfe58u: goto label_2cfe58;
        case 0x2cfe5cu: goto label_2cfe5c;
        case 0x2cfe60u: goto label_2cfe60;
        case 0x2cfe64u: goto label_2cfe64;
        case 0x2cfe68u: goto label_2cfe68;
        case 0x2cfe6cu: goto label_2cfe6c;
        case 0x2cfe70u: goto label_2cfe70;
        case 0x2cfe74u: goto label_2cfe74;
        case 0x2cfe78u: goto label_2cfe78;
        case 0x2cfe7cu: goto label_2cfe7c;
        case 0x2cfe80u: goto label_2cfe80;
        case 0x2cfe84u: goto label_2cfe84;
        case 0x2cfe88u: goto label_2cfe88;
        case 0x2cfe8cu: goto label_2cfe8c;
        case 0x2cfe90u: goto label_2cfe90;
        case 0x2cfe94u: goto label_2cfe94;
        case 0x2cfe98u: goto label_2cfe98;
        case 0x2cfe9cu: goto label_2cfe9c;
        case 0x2cfea0u: goto label_2cfea0;
        case 0x2cfea4u: goto label_2cfea4;
        case 0x2cfea8u: goto label_2cfea8;
        case 0x2cfeacu: goto label_2cfeac;
        case 0x2cfeb0u: goto label_2cfeb0;
        case 0x2cfeb4u: goto label_2cfeb4;
        case 0x2cfeb8u: goto label_2cfeb8;
        case 0x2cfebcu: goto label_2cfebc;
        case 0x2cfec0u: goto label_2cfec0;
        case 0x2cfec4u: goto label_2cfec4;
        case 0x2cfec8u: goto label_2cfec8;
        case 0x2cfeccu: goto label_2cfecc;
        case 0x2cfed0u: goto label_2cfed0;
        case 0x2cfed4u: goto label_2cfed4;
        case 0x2cfed8u: goto label_2cfed8;
        case 0x2cfedcu: goto label_2cfedc;
        case 0x2cfee0u: goto label_2cfee0;
        case 0x2cfee4u: goto label_2cfee4;
        case 0x2cfee8u: goto label_2cfee8;
        case 0x2cfeecu: goto label_2cfeec;
        case 0x2cfef0u: goto label_2cfef0;
        case 0x2cfef4u: goto label_2cfef4;
        case 0x2cfef8u: goto label_2cfef8;
        case 0x2cfefcu: goto label_2cfefc;
        case 0x2cff00u: goto label_2cff00;
        case 0x2cff04u: goto label_2cff04;
        case 0x2cff08u: goto label_2cff08;
        case 0x2cff0cu: goto label_2cff0c;
        case 0x2cff10u: goto label_2cff10;
        case 0x2cff14u: goto label_2cff14;
        case 0x2cff18u: goto label_2cff18;
        case 0x2cff1cu: goto label_2cff1c;
        case 0x2cff20u: goto label_2cff20;
        case 0x2cff24u: goto label_2cff24;
        case 0x2cff28u: goto label_2cff28;
        case 0x2cff2cu: goto label_2cff2c;
        case 0x2cff30u: goto label_2cff30;
        case 0x2cff34u: goto label_2cff34;
        case 0x2cff38u: goto label_2cff38;
        case 0x2cff3cu: goto label_2cff3c;
        case 0x2cff40u: goto label_2cff40;
        case 0x2cff44u: goto label_2cff44;
        case 0x2cff48u: goto label_2cff48;
        case 0x2cff4cu: goto label_2cff4c;
        case 0x2cff50u: goto label_2cff50;
        case 0x2cff54u: goto label_2cff54;
        case 0x2cff58u: goto label_2cff58;
        case 0x2cff5cu: goto label_2cff5c;
        case 0x2cff60u: goto label_2cff60;
        case 0x2cff64u: goto label_2cff64;
        case 0x2cff68u: goto label_2cff68;
        case 0x2cff6cu: goto label_2cff6c;
        case 0x2cff70u: goto label_2cff70;
        case 0x2cff74u: goto label_2cff74;
        case 0x2cff78u: goto label_2cff78;
        case 0x2cff7cu: goto label_2cff7c;
        case 0x2cff80u: goto label_2cff80;
        case 0x2cff84u: goto label_2cff84;
        case 0x2cff88u: goto label_2cff88;
        case 0x2cff8cu: goto label_2cff8c;
        case 0x2cff90u: goto label_2cff90;
        case 0x2cff94u: goto label_2cff94;
        case 0x2cff98u: goto label_2cff98;
        case 0x2cff9cu: goto label_2cff9c;
        case 0x2cffa0u: goto label_2cffa0;
        case 0x2cffa4u: goto label_2cffa4;
        case 0x2cffa8u: goto label_2cffa8;
        case 0x2cffacu: goto label_2cffac;
        case 0x2cffb0u: goto label_2cffb0;
        case 0x2cffb4u: goto label_2cffb4;
        case 0x2cffb8u: goto label_2cffb8;
        case 0x2cffbcu: goto label_2cffbc;
        case 0x2cffc0u: goto label_2cffc0;
        case 0x2cffc4u: goto label_2cffc4;
        case 0x2cffc8u: goto label_2cffc8;
        case 0x2cffccu: goto label_2cffcc;
        case 0x2cffd0u: goto label_2cffd0;
        case 0x2cffd4u: goto label_2cffd4;
        case 0x2cffd8u: goto label_2cffd8;
        case 0x2cffdcu: goto label_2cffdc;
        case 0x2cffe0u: goto label_2cffe0;
        case 0x2cffe4u: goto label_2cffe4;
        case 0x2cffe8u: goto label_2cffe8;
        case 0x2cffecu: goto label_2cffec;
        case 0x2cfff0u: goto label_2cfff0;
        case 0x2cfff4u: goto label_2cfff4;
        case 0x2cfff8u: goto label_2cfff8;
        case 0x2cfffcu: goto label_2cfffc;
        case 0x2d0000u: goto label_2d0000;
        case 0x2d0004u: goto label_2d0004;
        case 0x2d0008u: goto label_2d0008;
        case 0x2d000cu: goto label_2d000c;
        case 0x2d0010u: goto label_2d0010;
        case 0x2d0014u: goto label_2d0014;
        case 0x2d0018u: goto label_2d0018;
        case 0x2d001cu: goto label_2d001c;
        case 0x2d0020u: goto label_2d0020;
        case 0x2d0024u: goto label_2d0024;
        case 0x2d0028u: goto label_2d0028;
        case 0x2d002cu: goto label_2d002c;
        case 0x2d0030u: goto label_2d0030;
        case 0x2d0034u: goto label_2d0034;
        case 0x2d0038u: goto label_2d0038;
        case 0x2d003cu: goto label_2d003c;
        case 0x2d0040u: goto label_2d0040;
        case 0x2d0044u: goto label_2d0044;
        case 0x2d0048u: goto label_2d0048;
        case 0x2d004cu: goto label_2d004c;
        case 0x2d0050u: goto label_2d0050;
        case 0x2d0054u: goto label_2d0054;
        case 0x2d0058u: goto label_2d0058;
        case 0x2d005cu: goto label_2d005c;
        case 0x2d0060u: goto label_2d0060;
        case 0x2d0064u: goto label_2d0064;
        case 0x2d0068u: goto label_2d0068;
        case 0x2d006cu: goto label_2d006c;
        case 0x2d0070u: goto label_2d0070;
        case 0x2d0074u: goto label_2d0074;
        case 0x2d0078u: goto label_2d0078;
        case 0x2d007cu: goto label_2d007c;
        case 0x2d0080u: goto label_2d0080;
        case 0x2d0084u: goto label_2d0084;
        case 0x2d0088u: goto label_2d0088;
        case 0x2d008cu: goto label_2d008c;
        case 0x2d0090u: goto label_2d0090;
        case 0x2d0094u: goto label_2d0094;
        case 0x2d0098u: goto label_2d0098;
        case 0x2d009cu: goto label_2d009c;
        case 0x2d00a0u: goto label_2d00a0;
        case 0x2d00a4u: goto label_2d00a4;
        case 0x2d00a8u: goto label_2d00a8;
        case 0x2d00acu: goto label_2d00ac;
        case 0x2d00b0u: goto label_2d00b0;
        case 0x2d00b4u: goto label_2d00b4;
        case 0x2d00b8u: goto label_2d00b8;
        case 0x2d00bcu: goto label_2d00bc;
        case 0x2d00c0u: goto label_2d00c0;
        case 0x2d00c4u: goto label_2d00c4;
        case 0x2d00c8u: goto label_2d00c8;
        case 0x2d00ccu: goto label_2d00cc;
        case 0x2d00d0u: goto label_2d00d0;
        case 0x2d00d4u: goto label_2d00d4;
        case 0x2d00d8u: goto label_2d00d8;
        case 0x2d00dcu: goto label_2d00dc;
        case 0x2d00e0u: goto label_2d00e0;
        case 0x2d00e4u: goto label_2d00e4;
        case 0x2d00e8u: goto label_2d00e8;
        case 0x2d00ecu: goto label_2d00ec;
        case 0x2d00f0u: goto label_2d00f0;
        case 0x2d00f4u: goto label_2d00f4;
        case 0x2d00f8u: goto label_2d00f8;
        case 0x2d00fcu: goto label_2d00fc;
        case 0x2d0100u: goto label_2d0100;
        case 0x2d0104u: goto label_2d0104;
        case 0x2d0108u: goto label_2d0108;
        case 0x2d010cu: goto label_2d010c;
        case 0x2d0110u: goto label_2d0110;
        case 0x2d0114u: goto label_2d0114;
        case 0x2d0118u: goto label_2d0118;
        case 0x2d011cu: goto label_2d011c;
        case 0x2d0120u: goto label_2d0120;
        case 0x2d0124u: goto label_2d0124;
        case 0x2d0128u: goto label_2d0128;
        case 0x2d012cu: goto label_2d012c;
        case 0x2d0130u: goto label_2d0130;
        case 0x2d0134u: goto label_2d0134;
        case 0x2d0138u: goto label_2d0138;
        case 0x2d013cu: goto label_2d013c;
        case 0x2d0140u: goto label_2d0140;
        case 0x2d0144u: goto label_2d0144;
        case 0x2d0148u: goto label_2d0148;
        case 0x2d014cu: goto label_2d014c;
        case 0x2d0150u: goto label_2d0150;
        case 0x2d0154u: goto label_2d0154;
        case 0x2d0158u: goto label_2d0158;
        case 0x2d015cu: goto label_2d015c;
        case 0x2d0160u: goto label_2d0160;
        case 0x2d0164u: goto label_2d0164;
        case 0x2d0168u: goto label_2d0168;
        case 0x2d016cu: goto label_2d016c;
        case 0x2d0170u: goto label_2d0170;
        case 0x2d0174u: goto label_2d0174;
        case 0x2d0178u: goto label_2d0178;
        case 0x2d017cu: goto label_2d017c;
        case 0x2d0180u: goto label_2d0180;
        case 0x2d0184u: goto label_2d0184;
        case 0x2d0188u: goto label_2d0188;
        case 0x2d018cu: goto label_2d018c;
        case 0x2d0190u: goto label_2d0190;
        case 0x2d0194u: goto label_2d0194;
        case 0x2d0198u: goto label_2d0198;
        case 0x2d019cu: goto label_2d019c;
        case 0x2d01a0u: goto label_2d01a0;
        case 0x2d01a4u: goto label_2d01a4;
        case 0x2d01a8u: goto label_2d01a8;
        case 0x2d01acu: goto label_2d01ac;
        case 0x2d01b0u: goto label_2d01b0;
        case 0x2d01b4u: goto label_2d01b4;
        case 0x2d01b8u: goto label_2d01b8;
        case 0x2d01bcu: goto label_2d01bc;
        case 0x2d01c0u: goto label_2d01c0;
        case 0x2d01c4u: goto label_2d01c4;
        case 0x2d01c8u: goto label_2d01c8;
        case 0x2d01ccu: goto label_2d01cc;
        case 0x2d01d0u: goto label_2d01d0;
        case 0x2d01d4u: goto label_2d01d4;
        case 0x2d01d8u: goto label_2d01d8;
        case 0x2d01dcu: goto label_2d01dc;
        case 0x2d01e0u: goto label_2d01e0;
        case 0x2d01e4u: goto label_2d01e4;
        case 0x2d01e8u: goto label_2d01e8;
        case 0x2d01ecu: goto label_2d01ec;
        case 0x2d01f0u: goto label_2d01f0;
        case 0x2d01f4u: goto label_2d01f4;
        case 0x2d01f8u: goto label_2d01f8;
        case 0x2d01fcu: goto label_2d01fc;
        case 0x2d0200u: goto label_2d0200;
        case 0x2d0204u: goto label_2d0204;
        case 0x2d0208u: goto label_2d0208;
        case 0x2d020cu: goto label_2d020c;
        case 0x2d0210u: goto label_2d0210;
        case 0x2d0214u: goto label_2d0214;
        case 0x2d0218u: goto label_2d0218;
        case 0x2d021cu: goto label_2d021c;
        case 0x2d0220u: goto label_2d0220;
        case 0x2d0224u: goto label_2d0224;
        case 0x2d0228u: goto label_2d0228;
        case 0x2d022cu: goto label_2d022c;
        case 0x2d0230u: goto label_2d0230;
        case 0x2d0234u: goto label_2d0234;
        case 0x2d0238u: goto label_2d0238;
        case 0x2d023cu: goto label_2d023c;
        case 0x2d0240u: goto label_2d0240;
        case 0x2d0244u: goto label_2d0244;
        case 0x2d0248u: goto label_2d0248;
        case 0x2d024cu: goto label_2d024c;
        case 0x2d0250u: goto label_2d0250;
        case 0x2d0254u: goto label_2d0254;
        case 0x2d0258u: goto label_2d0258;
        case 0x2d025cu: goto label_2d025c;
        case 0x2d0260u: goto label_2d0260;
        case 0x2d0264u: goto label_2d0264;
        case 0x2d0268u: goto label_2d0268;
        case 0x2d026cu: goto label_2d026c;
        case 0x2d0270u: goto label_2d0270;
        case 0x2d0274u: goto label_2d0274;
        case 0x2d0278u: goto label_2d0278;
        case 0x2d027cu: goto label_2d027c;
        case 0x2d0280u: goto label_2d0280;
        case 0x2d0284u: goto label_2d0284;
        case 0x2d0288u: goto label_2d0288;
        case 0x2d028cu: goto label_2d028c;
        case 0x2d0290u: goto label_2d0290;
        case 0x2d0294u: goto label_2d0294;
        case 0x2d0298u: goto label_2d0298;
        case 0x2d029cu: goto label_2d029c;
        case 0x2d02a0u: goto label_2d02a0;
        case 0x2d02a4u: goto label_2d02a4;
        case 0x2d02a8u: goto label_2d02a8;
        case 0x2d02acu: goto label_2d02ac;
        case 0x2d02b0u: goto label_2d02b0;
        case 0x2d02b4u: goto label_2d02b4;
        case 0x2d02b8u: goto label_2d02b8;
        case 0x2d02bcu: goto label_2d02bc;
        case 0x2d02c0u: goto label_2d02c0;
        case 0x2d02c4u: goto label_2d02c4;
        case 0x2d02c8u: goto label_2d02c8;
        case 0x2d02ccu: goto label_2d02cc;
        case 0x2d02d0u: goto label_2d02d0;
        case 0x2d02d4u: goto label_2d02d4;
        case 0x2d02d8u: goto label_2d02d8;
        case 0x2d02dcu: goto label_2d02dc;
        case 0x2d02e0u: goto label_2d02e0;
        case 0x2d02e4u: goto label_2d02e4;
        case 0x2d02e8u: goto label_2d02e8;
        case 0x2d02ecu: goto label_2d02ec;
        case 0x2d02f0u: goto label_2d02f0;
        case 0x2d02f4u: goto label_2d02f4;
        case 0x2d02f8u: goto label_2d02f8;
        case 0x2d02fcu: goto label_2d02fc;
        case 0x2d0300u: goto label_2d0300;
        case 0x2d0304u: goto label_2d0304;
        case 0x2d0308u: goto label_2d0308;
        case 0x2d030cu: goto label_2d030c;
        case 0x2d0310u: goto label_2d0310;
        case 0x2d0314u: goto label_2d0314;
        case 0x2d0318u: goto label_2d0318;
        case 0x2d031cu: goto label_2d031c;
        case 0x2d0320u: goto label_2d0320;
        case 0x2d0324u: goto label_2d0324;
        case 0x2d0328u: goto label_2d0328;
        case 0x2d032cu: goto label_2d032c;
        case 0x2d0330u: goto label_2d0330;
        case 0x2d0334u: goto label_2d0334;
        case 0x2d0338u: goto label_2d0338;
        case 0x2d033cu: goto label_2d033c;
        case 0x2d0340u: goto label_2d0340;
        case 0x2d0344u: goto label_2d0344;
        case 0x2d0348u: goto label_2d0348;
        case 0x2d034cu: goto label_2d034c;
        case 0x2d0350u: goto label_2d0350;
        case 0x2d0354u: goto label_2d0354;
        case 0x2d0358u: goto label_2d0358;
        case 0x2d035cu: goto label_2d035c;
        case 0x2d0360u: goto label_2d0360;
        case 0x2d0364u: goto label_2d0364;
        case 0x2d0368u: goto label_2d0368;
        case 0x2d036cu: goto label_2d036c;
        case 0x2d0370u: goto label_2d0370;
        case 0x2d0374u: goto label_2d0374;
        case 0x2d0378u: goto label_2d0378;
        case 0x2d037cu: goto label_2d037c;
        case 0x2d0380u: goto label_2d0380;
        case 0x2d0384u: goto label_2d0384;
        case 0x2d0388u: goto label_2d0388;
        case 0x2d038cu: goto label_2d038c;
        case 0x2d0390u: goto label_2d0390;
        case 0x2d0394u: goto label_2d0394;
        case 0x2d0398u: goto label_2d0398;
        case 0x2d039cu: goto label_2d039c;
        case 0x2d03a0u: goto label_2d03a0;
        case 0x2d03a4u: goto label_2d03a4;
        case 0x2d03a8u: goto label_2d03a8;
        case 0x2d03acu: goto label_2d03ac;
        case 0x2d03b0u: goto label_2d03b0;
        case 0x2d03b4u: goto label_2d03b4;
        case 0x2d03b8u: goto label_2d03b8;
        case 0x2d03bcu: goto label_2d03bc;
        case 0x2d03c0u: goto label_2d03c0;
        case 0x2d03c4u: goto label_2d03c4;
        case 0x2d03c8u: goto label_2d03c8;
        case 0x2d03ccu: goto label_2d03cc;
        case 0x2d03d0u: goto label_2d03d0;
        case 0x2d03d4u: goto label_2d03d4;
        case 0x2d03d8u: goto label_2d03d8;
        case 0x2d03dcu: goto label_2d03dc;
        case 0x2d03e0u: goto label_2d03e0;
        case 0x2d03e4u: goto label_2d03e4;
        case 0x2d03e8u: goto label_2d03e8;
        case 0x2d03ecu: goto label_2d03ec;
        case 0x2d03f0u: goto label_2d03f0;
        case 0x2d03f4u: goto label_2d03f4;
        case 0x2d03f8u: goto label_2d03f8;
        case 0x2d03fcu: goto label_2d03fc;
        case 0x2d0400u: goto label_2d0400;
        case 0x2d0404u: goto label_2d0404;
        case 0x2d0408u: goto label_2d0408;
        case 0x2d040cu: goto label_2d040c;
        case 0x2d0410u: goto label_2d0410;
        case 0x2d0414u: goto label_2d0414;
        case 0x2d0418u: goto label_2d0418;
        case 0x2d041cu: goto label_2d041c;
        case 0x2d0420u: goto label_2d0420;
        case 0x2d0424u: goto label_2d0424;
        case 0x2d0428u: goto label_2d0428;
        case 0x2d042cu: goto label_2d042c;
        case 0x2d0430u: goto label_2d0430;
        case 0x2d0434u: goto label_2d0434;
        case 0x2d0438u: goto label_2d0438;
        case 0x2d043cu: goto label_2d043c;
        case 0x2d0440u: goto label_2d0440;
        case 0x2d0444u: goto label_2d0444;
        case 0x2d0448u: goto label_2d0448;
        case 0x2d044cu: goto label_2d044c;
        case 0x2d0450u: goto label_2d0450;
        case 0x2d0454u: goto label_2d0454;
        case 0x2d0458u: goto label_2d0458;
        case 0x2d045cu: goto label_2d045c;
        case 0x2d0460u: goto label_2d0460;
        case 0x2d0464u: goto label_2d0464;
        case 0x2d0468u: goto label_2d0468;
        case 0x2d046cu: goto label_2d046c;
        case 0x2d0470u: goto label_2d0470;
        case 0x2d0474u: goto label_2d0474;
        case 0x2d0478u: goto label_2d0478;
        case 0x2d047cu: goto label_2d047c;
        case 0x2d0480u: goto label_2d0480;
        case 0x2d0484u: goto label_2d0484;
        case 0x2d0488u: goto label_2d0488;
        case 0x2d048cu: goto label_2d048c;
        case 0x2d0490u: goto label_2d0490;
        case 0x2d0494u: goto label_2d0494;
        case 0x2d0498u: goto label_2d0498;
        case 0x2d049cu: goto label_2d049c;
        case 0x2d04a0u: goto label_2d04a0;
        case 0x2d04a4u: goto label_2d04a4;
        case 0x2d04a8u: goto label_2d04a8;
        case 0x2d04acu: goto label_2d04ac;
        case 0x2d04b0u: goto label_2d04b0;
        case 0x2d04b4u: goto label_2d04b4;
        case 0x2d04b8u: goto label_2d04b8;
        case 0x2d04bcu: goto label_2d04bc;
        case 0x2d04c0u: goto label_2d04c0;
        case 0x2d04c4u: goto label_2d04c4;
        case 0x2d04c8u: goto label_2d04c8;
        case 0x2d04ccu: goto label_2d04cc;
        case 0x2d04d0u: goto label_2d04d0;
        case 0x2d04d4u: goto label_2d04d4;
        case 0x2d04d8u: goto label_2d04d8;
        case 0x2d04dcu: goto label_2d04dc;
        case 0x2d04e0u: goto label_2d04e0;
        case 0x2d04e4u: goto label_2d04e4;
        case 0x2d04e8u: goto label_2d04e8;
        case 0x2d04ecu: goto label_2d04ec;
        case 0x2d04f0u: goto label_2d04f0;
        case 0x2d04f4u: goto label_2d04f4;
        case 0x2d04f8u: goto label_2d04f8;
        case 0x2d04fcu: goto label_2d04fc;
        case 0x2d0500u: goto label_2d0500;
        case 0x2d0504u: goto label_2d0504;
        case 0x2d0508u: goto label_2d0508;
        case 0x2d050cu: goto label_2d050c;
        case 0x2d0510u: goto label_2d0510;
        case 0x2d0514u: goto label_2d0514;
        case 0x2d0518u: goto label_2d0518;
        case 0x2d051cu: goto label_2d051c;
        case 0x2d0520u: goto label_2d0520;
        case 0x2d0524u: goto label_2d0524;
        case 0x2d0528u: goto label_2d0528;
        case 0x2d052cu: goto label_2d052c;
        case 0x2d0530u: goto label_2d0530;
        case 0x2d0534u: goto label_2d0534;
        case 0x2d0538u: goto label_2d0538;
        case 0x2d053cu: goto label_2d053c;
        case 0x2d0540u: goto label_2d0540;
        case 0x2d0544u: goto label_2d0544;
        case 0x2d0548u: goto label_2d0548;
        case 0x2d054cu: goto label_2d054c;
        case 0x2d0550u: goto label_2d0550;
        case 0x2d0554u: goto label_2d0554;
        case 0x2d0558u: goto label_2d0558;
        case 0x2d055cu: goto label_2d055c;
        case 0x2d0560u: goto label_2d0560;
        case 0x2d0564u: goto label_2d0564;
        case 0x2d0568u: goto label_2d0568;
        case 0x2d056cu: goto label_2d056c;
        case 0x2d0570u: goto label_2d0570;
        case 0x2d0574u: goto label_2d0574;
        case 0x2d0578u: goto label_2d0578;
        case 0x2d057cu: goto label_2d057c;
        case 0x2d0580u: goto label_2d0580;
        case 0x2d0584u: goto label_2d0584;
        case 0x2d0588u: goto label_2d0588;
        case 0x2d058cu: goto label_2d058c;
        case 0x2d0590u: goto label_2d0590;
        case 0x2d0594u: goto label_2d0594;
        case 0x2d0598u: goto label_2d0598;
        case 0x2d059cu: goto label_2d059c;
        case 0x2d05a0u: goto label_2d05a0;
        case 0x2d05a4u: goto label_2d05a4;
        case 0x2d05a8u: goto label_2d05a8;
        case 0x2d05acu: goto label_2d05ac;
        case 0x2d05b0u: goto label_2d05b0;
        case 0x2d05b4u: goto label_2d05b4;
        case 0x2d05b8u: goto label_2d05b8;
        case 0x2d05bcu: goto label_2d05bc;
        case 0x2d05c0u: goto label_2d05c0;
        case 0x2d05c4u: goto label_2d05c4;
        case 0x2d05c8u: goto label_2d05c8;
        case 0x2d05ccu: goto label_2d05cc;
        case 0x2d05d0u: goto label_2d05d0;
        case 0x2d05d4u: goto label_2d05d4;
        case 0x2d05d8u: goto label_2d05d8;
        case 0x2d05dcu: goto label_2d05dc;
        case 0x2d05e0u: goto label_2d05e0;
        case 0x2d05e4u: goto label_2d05e4;
        case 0x2d05e8u: goto label_2d05e8;
        case 0x2d05ecu: goto label_2d05ec;
        case 0x2d05f0u: goto label_2d05f0;
        case 0x2d05f4u: goto label_2d05f4;
        case 0x2d05f8u: goto label_2d05f8;
        case 0x2d05fcu: goto label_2d05fc;
        case 0x2d0600u: goto label_2d0600;
        case 0x2d0604u: goto label_2d0604;
        case 0x2d0608u: goto label_2d0608;
        case 0x2d060cu: goto label_2d060c;
        case 0x2d0610u: goto label_2d0610;
        case 0x2d0614u: goto label_2d0614;
        case 0x2d0618u: goto label_2d0618;
        case 0x2d061cu: goto label_2d061c;
        case 0x2d0620u: goto label_2d0620;
        case 0x2d0624u: goto label_2d0624;
        case 0x2d0628u: goto label_2d0628;
        case 0x2d062cu: goto label_2d062c;
        case 0x2d0630u: goto label_2d0630;
        case 0x2d0634u: goto label_2d0634;
        case 0x2d0638u: goto label_2d0638;
        case 0x2d063cu: goto label_2d063c;
        case 0x2d0640u: goto label_2d0640;
        case 0x2d0644u: goto label_2d0644;
        case 0x2d0648u: goto label_2d0648;
        case 0x2d064cu: goto label_2d064c;
        case 0x2d0650u: goto label_2d0650;
        case 0x2d0654u: goto label_2d0654;
        case 0x2d0658u: goto label_2d0658;
        case 0x2d065cu: goto label_2d065c;
        case 0x2d0660u: goto label_2d0660;
        case 0x2d0664u: goto label_2d0664;
        case 0x2d0668u: goto label_2d0668;
        case 0x2d066cu: goto label_2d066c;
        case 0x2d0670u: goto label_2d0670;
        case 0x2d0674u: goto label_2d0674;
        case 0x2d0678u: goto label_2d0678;
        case 0x2d067cu: goto label_2d067c;
        case 0x2d0680u: goto label_2d0680;
        case 0x2d0684u: goto label_2d0684;
        case 0x2d0688u: goto label_2d0688;
        case 0x2d068cu: goto label_2d068c;
        case 0x2d0690u: goto label_2d0690;
        case 0x2d0694u: goto label_2d0694;
        case 0x2d0698u: goto label_2d0698;
        case 0x2d069cu: goto label_2d069c;
        case 0x2d06a0u: goto label_2d06a0;
        case 0x2d06a4u: goto label_2d06a4;
        case 0x2d06a8u: goto label_2d06a8;
        case 0x2d06acu: goto label_2d06ac;
        case 0x2d06b0u: goto label_2d06b0;
        case 0x2d06b4u: goto label_2d06b4;
        case 0x2d06b8u: goto label_2d06b8;
        case 0x2d06bcu: goto label_2d06bc;
        case 0x2d06c0u: goto label_2d06c0;
        case 0x2d06c4u: goto label_2d06c4;
        case 0x2d06c8u: goto label_2d06c8;
        case 0x2d06ccu: goto label_2d06cc;
        case 0x2d06d0u: goto label_2d06d0;
        case 0x2d06d4u: goto label_2d06d4;
        case 0x2d06d8u: goto label_2d06d8;
        case 0x2d06dcu: goto label_2d06dc;
        case 0x2d06e0u: goto label_2d06e0;
        case 0x2d06e4u: goto label_2d06e4;
        case 0x2d06e8u: goto label_2d06e8;
        case 0x2d06ecu: goto label_2d06ec;
        case 0x2d06f0u: goto label_2d06f0;
        case 0x2d06f4u: goto label_2d06f4;
        case 0x2d06f8u: goto label_2d06f8;
        case 0x2d06fcu: goto label_2d06fc;
        case 0x2d0700u: goto label_2d0700;
        case 0x2d0704u: goto label_2d0704;
        case 0x2d0708u: goto label_2d0708;
        case 0x2d070cu: goto label_2d070c;
        case 0x2d0710u: goto label_2d0710;
        case 0x2d0714u: goto label_2d0714;
        case 0x2d0718u: goto label_2d0718;
        case 0x2d071cu: goto label_2d071c;
        case 0x2d0720u: goto label_2d0720;
        case 0x2d0724u: goto label_2d0724;
        case 0x2d0728u: goto label_2d0728;
        case 0x2d072cu: goto label_2d072c;
        case 0x2d0730u: goto label_2d0730;
        case 0x2d0734u: goto label_2d0734;
        case 0x2d0738u: goto label_2d0738;
        case 0x2d073cu: goto label_2d073c;
        case 0x2d0740u: goto label_2d0740;
        case 0x2d0744u: goto label_2d0744;
        case 0x2d0748u: goto label_2d0748;
        case 0x2d074cu: goto label_2d074c;
        case 0x2d0750u: goto label_2d0750;
        case 0x2d0754u: goto label_2d0754;
        case 0x2d0758u: goto label_2d0758;
        case 0x2d075cu: goto label_2d075c;
        case 0x2d0760u: goto label_2d0760;
        case 0x2d0764u: goto label_2d0764;
        case 0x2d0768u: goto label_2d0768;
        case 0x2d076cu: goto label_2d076c;
        case 0x2d0770u: goto label_2d0770;
        case 0x2d0774u: goto label_2d0774;
        case 0x2d0778u: goto label_2d0778;
        case 0x2d077cu: goto label_2d077c;
        case 0x2d0780u: goto label_2d0780;
        case 0x2d0784u: goto label_2d0784;
        case 0x2d0788u: goto label_2d0788;
        case 0x2d078cu: goto label_2d078c;
        case 0x2d0790u: goto label_2d0790;
        case 0x2d0794u: goto label_2d0794;
        case 0x2d0798u: goto label_2d0798;
        case 0x2d079cu: goto label_2d079c;
        case 0x2d07a0u: goto label_2d07a0;
        case 0x2d07a4u: goto label_2d07a4;
        case 0x2d07a8u: goto label_2d07a8;
        case 0x2d07acu: goto label_2d07ac;
        case 0x2d07b0u: goto label_2d07b0;
        case 0x2d07b4u: goto label_2d07b4;
        case 0x2d07b8u: goto label_2d07b8;
        case 0x2d07bcu: goto label_2d07bc;
        case 0x2d07c0u: goto label_2d07c0;
        case 0x2d07c4u: goto label_2d07c4;
        case 0x2d07c8u: goto label_2d07c8;
        case 0x2d07ccu: goto label_2d07cc;
        case 0x2d07d0u: goto label_2d07d0;
        case 0x2d07d4u: goto label_2d07d4;
        case 0x2d07d8u: goto label_2d07d8;
        case 0x2d07dcu: goto label_2d07dc;
        case 0x2d07e0u: goto label_2d07e0;
        case 0x2d07e4u: goto label_2d07e4;
        case 0x2d07e8u: goto label_2d07e8;
        case 0x2d07ecu: goto label_2d07ec;
        case 0x2d07f0u: goto label_2d07f0;
        case 0x2d07f4u: goto label_2d07f4;
        case 0x2d07f8u: goto label_2d07f8;
        case 0x2d07fcu: goto label_2d07fc;
        case 0x2d0800u: goto label_2d0800;
        case 0x2d0804u: goto label_2d0804;
        case 0x2d0808u: goto label_2d0808;
        case 0x2d080cu: goto label_2d080c;
        case 0x2d0810u: goto label_2d0810;
        case 0x2d0814u: goto label_2d0814;
        case 0x2d0818u: goto label_2d0818;
        case 0x2d081cu: goto label_2d081c;
        case 0x2d0820u: goto label_2d0820;
        case 0x2d0824u: goto label_2d0824;
        case 0x2d0828u: goto label_2d0828;
        case 0x2d082cu: goto label_2d082c;
        case 0x2d0830u: goto label_2d0830;
        case 0x2d0834u: goto label_2d0834;
        case 0x2d0838u: goto label_2d0838;
        case 0x2d083cu: goto label_2d083c;
        case 0x2d0840u: goto label_2d0840;
        case 0x2d0844u: goto label_2d0844;
        case 0x2d0848u: goto label_2d0848;
        case 0x2d084cu: goto label_2d084c;
        case 0x2d0850u: goto label_2d0850;
        case 0x2d0854u: goto label_2d0854;
        case 0x2d0858u: goto label_2d0858;
        case 0x2d085cu: goto label_2d085c;
        case 0x2d0860u: goto label_2d0860;
        case 0x2d0864u: goto label_2d0864;
        case 0x2d0868u: goto label_2d0868;
        case 0x2d086cu: goto label_2d086c;
        case 0x2d0870u: goto label_2d0870;
        case 0x2d0874u: goto label_2d0874;
        case 0x2d0878u: goto label_2d0878;
        case 0x2d087cu: goto label_2d087c;
        case 0x2d0880u: goto label_2d0880;
        case 0x2d0884u: goto label_2d0884;
        case 0x2d0888u: goto label_2d0888;
        case 0x2d088cu: goto label_2d088c;
        case 0x2d0890u: goto label_2d0890;
        case 0x2d0894u: goto label_2d0894;
        case 0x2d0898u: goto label_2d0898;
        case 0x2d089cu: goto label_2d089c;
        case 0x2d08a0u: goto label_2d08a0;
        case 0x2d08a4u: goto label_2d08a4;
        case 0x2d08a8u: goto label_2d08a8;
        case 0x2d08acu: goto label_2d08ac;
        case 0x2d08b0u: goto label_2d08b0;
        case 0x2d08b4u: goto label_2d08b4;
        case 0x2d08b8u: goto label_2d08b8;
        case 0x2d08bcu: goto label_2d08bc;
        case 0x2d08c0u: goto label_2d08c0;
        case 0x2d08c4u: goto label_2d08c4;
        case 0x2d08c8u: goto label_2d08c8;
        case 0x2d08ccu: goto label_2d08cc;
        case 0x2d08d0u: goto label_2d08d0;
        case 0x2d08d4u: goto label_2d08d4;
        case 0x2d08d8u: goto label_2d08d8;
        case 0x2d08dcu: goto label_2d08dc;
        case 0x2d08e0u: goto label_2d08e0;
        case 0x2d08e4u: goto label_2d08e4;
        case 0x2d08e8u: goto label_2d08e8;
        case 0x2d08ecu: goto label_2d08ec;
        case 0x2d08f0u: goto label_2d08f0;
        case 0x2d08f4u: goto label_2d08f4;
        case 0x2d08f8u: goto label_2d08f8;
        case 0x2d08fcu: goto label_2d08fc;
        case 0x2d0900u: goto label_2d0900;
        case 0x2d0904u: goto label_2d0904;
        case 0x2d0908u: goto label_2d0908;
        case 0x2d090cu: goto label_2d090c;
        case 0x2d0910u: goto label_2d0910;
        case 0x2d0914u: goto label_2d0914;
        case 0x2d0918u: goto label_2d0918;
        case 0x2d091cu: goto label_2d091c;
        case 0x2d0920u: goto label_2d0920;
        case 0x2d0924u: goto label_2d0924;
        case 0x2d0928u: goto label_2d0928;
        case 0x2d092cu: goto label_2d092c;
        case 0x2d0930u: goto label_2d0930;
        case 0x2d0934u: goto label_2d0934;
        case 0x2d0938u: goto label_2d0938;
        case 0x2d093cu: goto label_2d093c;
        case 0x2d0940u: goto label_2d0940;
        case 0x2d0944u: goto label_2d0944;
        case 0x2d0948u: goto label_2d0948;
        case 0x2d094cu: goto label_2d094c;
        case 0x2d0950u: goto label_2d0950;
        case 0x2d0954u: goto label_2d0954;
        case 0x2d0958u: goto label_2d0958;
        case 0x2d095cu: goto label_2d095c;
        case 0x2d0960u: goto label_2d0960;
        case 0x2d0964u: goto label_2d0964;
        case 0x2d0968u: goto label_2d0968;
        case 0x2d096cu: goto label_2d096c;
        case 0x2d0970u: goto label_2d0970;
        case 0x2d0974u: goto label_2d0974;
        case 0x2d0978u: goto label_2d0978;
        case 0x2d097cu: goto label_2d097c;
        case 0x2d0980u: goto label_2d0980;
        case 0x2d0984u: goto label_2d0984;
        case 0x2d0988u: goto label_2d0988;
        case 0x2d098cu: goto label_2d098c;
        case 0x2d0990u: goto label_2d0990;
        case 0x2d0994u: goto label_2d0994;
        case 0x2d0998u: goto label_2d0998;
        case 0x2d099cu: goto label_2d099c;
        case 0x2d09a0u: goto label_2d09a0;
        case 0x2d09a4u: goto label_2d09a4;
        case 0x2d09a8u: goto label_2d09a8;
        case 0x2d09acu: goto label_2d09ac;
        case 0x2d09b0u: goto label_2d09b0;
        case 0x2d09b4u: goto label_2d09b4;
        case 0x2d09b8u: goto label_2d09b8;
        case 0x2d09bcu: goto label_2d09bc;
        case 0x2d09c0u: goto label_2d09c0;
        case 0x2d09c4u: goto label_2d09c4;
        case 0x2d09c8u: goto label_2d09c8;
        case 0x2d09ccu: goto label_2d09cc;
        case 0x2d09d0u: goto label_2d09d0;
        case 0x2d09d4u: goto label_2d09d4;
        case 0x2d09d8u: goto label_2d09d8;
        case 0x2d09dcu: goto label_2d09dc;
        case 0x2d09e0u: goto label_2d09e0;
        case 0x2d09e4u: goto label_2d09e4;
        case 0x2d09e8u: goto label_2d09e8;
        case 0x2d09ecu: goto label_2d09ec;
        case 0x2d09f0u: goto label_2d09f0;
        case 0x2d09f4u: goto label_2d09f4;
        case 0x2d09f8u: goto label_2d09f8;
        case 0x2d09fcu: goto label_2d09fc;
        case 0x2d0a00u: goto label_2d0a00;
        case 0x2d0a04u: goto label_2d0a04;
        case 0x2d0a08u: goto label_2d0a08;
        case 0x2d0a0cu: goto label_2d0a0c;
        case 0x2d0a10u: goto label_2d0a10;
        case 0x2d0a14u: goto label_2d0a14;
        case 0x2d0a18u: goto label_2d0a18;
        case 0x2d0a1cu: goto label_2d0a1c;
        case 0x2d0a20u: goto label_2d0a20;
        case 0x2d0a24u: goto label_2d0a24;
        case 0x2d0a28u: goto label_2d0a28;
        case 0x2d0a2cu: goto label_2d0a2c;
        case 0x2d0a30u: goto label_2d0a30;
        case 0x2d0a34u: goto label_2d0a34;
        case 0x2d0a38u: goto label_2d0a38;
        case 0x2d0a3cu: goto label_2d0a3c;
        case 0x2d0a40u: goto label_2d0a40;
        case 0x2d0a44u: goto label_2d0a44;
        case 0x2d0a48u: goto label_2d0a48;
        case 0x2d0a4cu: goto label_2d0a4c;
        case 0x2d0a50u: goto label_2d0a50;
        case 0x2d0a54u: goto label_2d0a54;
        case 0x2d0a58u: goto label_2d0a58;
        case 0x2d0a5cu: goto label_2d0a5c;
        case 0x2d0a60u: goto label_2d0a60;
        case 0x2d0a64u: goto label_2d0a64;
        case 0x2d0a68u: goto label_2d0a68;
        case 0x2d0a6cu: goto label_2d0a6c;
        case 0x2d0a70u: goto label_2d0a70;
        case 0x2d0a74u: goto label_2d0a74;
        case 0x2d0a78u: goto label_2d0a78;
        case 0x2d0a7cu: goto label_2d0a7c;
        case 0x2d0a80u: goto label_2d0a80;
        case 0x2d0a84u: goto label_2d0a84;
        case 0x2d0a88u: goto label_2d0a88;
        case 0x2d0a8cu: goto label_2d0a8c;
        case 0x2d0a90u: goto label_2d0a90;
        case 0x2d0a94u: goto label_2d0a94;
        case 0x2d0a98u: goto label_2d0a98;
        case 0x2d0a9cu: goto label_2d0a9c;
        case 0x2d0aa0u: goto label_2d0aa0;
        case 0x2d0aa4u: goto label_2d0aa4;
        case 0x2d0aa8u: goto label_2d0aa8;
        case 0x2d0aacu: goto label_2d0aac;
        case 0x2d0ab0u: goto label_2d0ab0;
        case 0x2d0ab4u: goto label_2d0ab4;
        case 0x2d0ab8u: goto label_2d0ab8;
        case 0x2d0abcu: goto label_2d0abc;
        case 0x2d0ac0u: goto label_2d0ac0;
        case 0x2d0ac4u: goto label_2d0ac4;
        case 0x2d0ac8u: goto label_2d0ac8;
        case 0x2d0accu: goto label_2d0acc;
        case 0x2d0ad0u: goto label_2d0ad0;
        case 0x2d0ad4u: goto label_2d0ad4;
        case 0x2d0ad8u: goto label_2d0ad8;
        case 0x2d0adcu: goto label_2d0adc;
        case 0x2d0ae0u: goto label_2d0ae0;
        case 0x2d0ae4u: goto label_2d0ae4;
        case 0x2d0ae8u: goto label_2d0ae8;
        case 0x2d0aecu: goto label_2d0aec;
        case 0x2d0af0u: goto label_2d0af0;
        case 0x2d0af4u: goto label_2d0af4;
        case 0x2d0af8u: goto label_2d0af8;
        case 0x2d0afcu: goto label_2d0afc;
        case 0x2d0b00u: goto label_2d0b00;
        case 0x2d0b04u: goto label_2d0b04;
        case 0x2d0b08u: goto label_2d0b08;
        case 0x2d0b0cu: goto label_2d0b0c;
        case 0x2d0b10u: goto label_2d0b10;
        case 0x2d0b14u: goto label_2d0b14;
        case 0x2d0b18u: goto label_2d0b18;
        case 0x2d0b1cu: goto label_2d0b1c;
        case 0x2d0b20u: goto label_2d0b20;
        case 0x2d0b24u: goto label_2d0b24;
        case 0x2d0b28u: goto label_2d0b28;
        case 0x2d0b2cu: goto label_2d0b2c;
        case 0x2d0b30u: goto label_2d0b30;
        case 0x2d0b34u: goto label_2d0b34;
        case 0x2d0b38u: goto label_2d0b38;
        case 0x2d0b3cu: goto label_2d0b3c;
        case 0x2d0b40u: goto label_2d0b40;
        case 0x2d0b44u: goto label_2d0b44;
        case 0x2d0b48u: goto label_2d0b48;
        case 0x2d0b4cu: goto label_2d0b4c;
        case 0x2d0b50u: goto label_2d0b50;
        case 0x2d0b54u: goto label_2d0b54;
        case 0x2d0b58u: goto label_2d0b58;
        case 0x2d0b5cu: goto label_2d0b5c;
        case 0x2d0b60u: goto label_2d0b60;
        case 0x2d0b64u: goto label_2d0b64;
        case 0x2d0b68u: goto label_2d0b68;
        case 0x2d0b6cu: goto label_2d0b6c;
        case 0x2d0b70u: goto label_2d0b70;
        case 0x2d0b74u: goto label_2d0b74;
        case 0x2d0b78u: goto label_2d0b78;
        case 0x2d0b7cu: goto label_2d0b7c;
        case 0x2d0b80u: goto label_2d0b80;
        case 0x2d0b84u: goto label_2d0b84;
        case 0x2d0b88u: goto label_2d0b88;
        case 0x2d0b8cu: goto label_2d0b8c;
        case 0x2d0b90u: goto label_2d0b90;
        case 0x2d0b94u: goto label_2d0b94;
        case 0x2d0b98u: goto label_2d0b98;
        case 0x2d0b9cu: goto label_2d0b9c;
        case 0x2d0ba0u: goto label_2d0ba0;
        case 0x2d0ba4u: goto label_2d0ba4;
        case 0x2d0ba8u: goto label_2d0ba8;
        case 0x2d0bacu: goto label_2d0bac;
        case 0x2d0bb0u: goto label_2d0bb0;
        case 0x2d0bb4u: goto label_2d0bb4;
        case 0x2d0bb8u: goto label_2d0bb8;
        case 0x2d0bbcu: goto label_2d0bbc;
        case 0x2d0bc0u: goto label_2d0bc0;
        case 0x2d0bc4u: goto label_2d0bc4;
        case 0x2d0bc8u: goto label_2d0bc8;
        case 0x2d0bccu: goto label_2d0bcc;
        case 0x2d0bd0u: goto label_2d0bd0;
        case 0x2d0bd4u: goto label_2d0bd4;
        case 0x2d0bd8u: goto label_2d0bd8;
        case 0x2d0bdcu: goto label_2d0bdc;
        case 0x2d0be0u: goto label_2d0be0;
        case 0x2d0be4u: goto label_2d0be4;
        case 0x2d0be8u: goto label_2d0be8;
        case 0x2d0becu: goto label_2d0bec;
        case 0x2d0bf0u: goto label_2d0bf0;
        case 0x2d0bf4u: goto label_2d0bf4;
        case 0x2d0bf8u: goto label_2d0bf8;
        case 0x2d0bfcu: goto label_2d0bfc;
        case 0x2d0c00u: goto label_2d0c00;
        case 0x2d0c04u: goto label_2d0c04;
        case 0x2d0c08u: goto label_2d0c08;
        case 0x2d0c0cu: goto label_2d0c0c;
        case 0x2d0c10u: goto label_2d0c10;
        case 0x2d0c14u: goto label_2d0c14;
        case 0x2d0c18u: goto label_2d0c18;
        case 0x2d0c1cu: goto label_2d0c1c;
        case 0x2d0c20u: goto label_2d0c20;
        case 0x2d0c24u: goto label_2d0c24;
        case 0x2d0c28u: goto label_2d0c28;
        case 0x2d0c2cu: goto label_2d0c2c;
        case 0x2d0c30u: goto label_2d0c30;
        case 0x2d0c34u: goto label_2d0c34;
        case 0x2d0c38u: goto label_2d0c38;
        case 0x2d0c3cu: goto label_2d0c3c;
        case 0x2d0c40u: goto label_2d0c40;
        case 0x2d0c44u: goto label_2d0c44;
        case 0x2d0c48u: goto label_2d0c48;
        case 0x2d0c4cu: goto label_2d0c4c;
        case 0x2d0c50u: goto label_2d0c50;
        case 0x2d0c54u: goto label_2d0c54;
        case 0x2d0c58u: goto label_2d0c58;
        case 0x2d0c5cu: goto label_2d0c5c;
        case 0x2d0c60u: goto label_2d0c60;
        case 0x2d0c64u: goto label_2d0c64;
        case 0x2d0c68u: goto label_2d0c68;
        case 0x2d0c6cu: goto label_2d0c6c;
        case 0x2d0c70u: goto label_2d0c70;
        case 0x2d0c74u: goto label_2d0c74;
        case 0x2d0c78u: goto label_2d0c78;
        case 0x2d0c7cu: goto label_2d0c7c;
        case 0x2d0c80u: goto label_2d0c80;
        case 0x2d0c84u: goto label_2d0c84;
        case 0x2d0c88u: goto label_2d0c88;
        case 0x2d0c8cu: goto label_2d0c8c;
        case 0x2d0c90u: goto label_2d0c90;
        case 0x2d0c94u: goto label_2d0c94;
        case 0x2d0c98u: goto label_2d0c98;
        case 0x2d0c9cu: goto label_2d0c9c;
        case 0x2d0ca0u: goto label_2d0ca0;
        case 0x2d0ca4u: goto label_2d0ca4;
        case 0x2d0ca8u: goto label_2d0ca8;
        case 0x2d0cacu: goto label_2d0cac;
        case 0x2d0cb0u: goto label_2d0cb0;
        case 0x2d0cb4u: goto label_2d0cb4;
        case 0x2d0cb8u: goto label_2d0cb8;
        case 0x2d0cbcu: goto label_2d0cbc;
        case 0x2d0cc0u: goto label_2d0cc0;
        case 0x2d0cc4u: goto label_2d0cc4;
        case 0x2d0cc8u: goto label_2d0cc8;
        case 0x2d0cccu: goto label_2d0ccc;
        case 0x2d0cd0u: goto label_2d0cd0;
        case 0x2d0cd4u: goto label_2d0cd4;
        case 0x2d0cd8u: goto label_2d0cd8;
        case 0x2d0cdcu: goto label_2d0cdc;
        case 0x2d0ce0u: goto label_2d0ce0;
        case 0x2d0ce4u: goto label_2d0ce4;
        case 0x2d0ce8u: goto label_2d0ce8;
        case 0x2d0cecu: goto label_2d0cec;
        case 0x2d0cf0u: goto label_2d0cf0;
        case 0x2d0cf4u: goto label_2d0cf4;
        case 0x2d0cf8u: goto label_2d0cf8;
        case 0x2d0cfcu: goto label_2d0cfc;
        case 0x2d0d00u: goto label_2d0d00;
        case 0x2d0d04u: goto label_2d0d04;
        case 0x2d0d08u: goto label_2d0d08;
        case 0x2d0d0cu: goto label_2d0d0c;
        case 0x2d0d10u: goto label_2d0d10;
        case 0x2d0d14u: goto label_2d0d14;
        case 0x2d0d18u: goto label_2d0d18;
        case 0x2d0d1cu: goto label_2d0d1c;
        case 0x2d0d20u: goto label_2d0d20;
        case 0x2d0d24u: goto label_2d0d24;
        case 0x2d0d28u: goto label_2d0d28;
        case 0x2d0d2cu: goto label_2d0d2c;
        case 0x2d0d30u: goto label_2d0d30;
        case 0x2d0d34u: goto label_2d0d34;
        case 0x2d0d38u: goto label_2d0d38;
        case 0x2d0d3cu: goto label_2d0d3c;
        case 0x2d0d40u: goto label_2d0d40;
        case 0x2d0d44u: goto label_2d0d44;
        case 0x2d0d48u: goto label_2d0d48;
        case 0x2d0d4cu: goto label_2d0d4c;
        case 0x2d0d50u: goto label_2d0d50;
        case 0x2d0d54u: goto label_2d0d54;
        case 0x2d0d58u: goto label_2d0d58;
        case 0x2d0d5cu: goto label_2d0d5c;
        case 0x2d0d60u: goto label_2d0d60;
        case 0x2d0d64u: goto label_2d0d64;
        case 0x2d0d68u: goto label_2d0d68;
        case 0x2d0d6cu: goto label_2d0d6c;
        case 0x2d0d70u: goto label_2d0d70;
        case 0x2d0d74u: goto label_2d0d74;
        case 0x2d0d78u: goto label_2d0d78;
        case 0x2d0d7cu: goto label_2d0d7c;
        case 0x2d0d80u: goto label_2d0d80;
        case 0x2d0d84u: goto label_2d0d84;
        case 0x2d0d88u: goto label_2d0d88;
        case 0x2d0d8cu: goto label_2d0d8c;
        case 0x2d0d90u: goto label_2d0d90;
        case 0x2d0d94u: goto label_2d0d94;
        case 0x2d0d98u: goto label_2d0d98;
        case 0x2d0d9cu: goto label_2d0d9c;
        case 0x2d0da0u: goto label_2d0da0;
        case 0x2d0da4u: goto label_2d0da4;
        case 0x2d0da8u: goto label_2d0da8;
        case 0x2d0dacu: goto label_2d0dac;
        case 0x2d0db0u: goto label_2d0db0;
        case 0x2d0db4u: goto label_2d0db4;
        case 0x2d0db8u: goto label_2d0db8;
        case 0x2d0dbcu: goto label_2d0dbc;
        case 0x2d0dc0u: goto label_2d0dc0;
        case 0x2d0dc4u: goto label_2d0dc4;
        case 0x2d0dc8u: goto label_2d0dc8;
        case 0x2d0dccu: goto label_2d0dcc;
        case 0x2d0dd0u: goto label_2d0dd0;
        case 0x2d0dd4u: goto label_2d0dd4;
        case 0x2d0dd8u: goto label_2d0dd8;
        case 0x2d0ddcu: goto label_2d0ddc;
        case 0x2d0de0u: goto label_2d0de0;
        case 0x2d0de4u: goto label_2d0de4;
        case 0x2d0de8u: goto label_2d0de8;
        case 0x2d0decu: goto label_2d0dec;
        case 0x2d0df0u: goto label_2d0df0;
        case 0x2d0df4u: goto label_2d0df4;
        case 0x2d0df8u: goto label_2d0df8;
        case 0x2d0dfcu: goto label_2d0dfc;
        case 0x2d0e00u: goto label_2d0e00;
        case 0x2d0e04u: goto label_2d0e04;
        case 0x2d0e08u: goto label_2d0e08;
        case 0x2d0e0cu: goto label_2d0e0c;
        case 0x2d0e10u: goto label_2d0e10;
        case 0x2d0e14u: goto label_2d0e14;
        case 0x2d0e18u: goto label_2d0e18;
        case 0x2d0e1cu: goto label_2d0e1c;
        case 0x2d0e20u: goto label_2d0e20;
        case 0x2d0e24u: goto label_2d0e24;
        case 0x2d0e28u: goto label_2d0e28;
        case 0x2d0e2cu: goto label_2d0e2c;
        case 0x2d0e30u: goto label_2d0e30;
        case 0x2d0e34u: goto label_2d0e34;
        case 0x2d0e38u: goto label_2d0e38;
        case 0x2d0e3cu: goto label_2d0e3c;
        case 0x2d0e40u: goto label_2d0e40;
        case 0x2d0e44u: goto label_2d0e44;
        case 0x2d0e48u: goto label_2d0e48;
        case 0x2d0e4cu: goto label_2d0e4c;
        case 0x2d0e50u: goto label_2d0e50;
        case 0x2d0e54u: goto label_2d0e54;
        case 0x2d0e58u: goto label_2d0e58;
        case 0x2d0e5cu: goto label_2d0e5c;
        case 0x2d0e60u: goto label_2d0e60;
        case 0x2d0e64u: goto label_2d0e64;
        case 0x2d0e68u: goto label_2d0e68;
        case 0x2d0e6cu: goto label_2d0e6c;
        case 0x2d0e70u: goto label_2d0e70;
        case 0x2d0e74u: goto label_2d0e74;
        case 0x2d0e78u: goto label_2d0e78;
        case 0x2d0e7cu: goto label_2d0e7c;
        case 0x2d0e80u: goto label_2d0e80;
        case 0x2d0e84u: goto label_2d0e84;
        case 0x2d0e88u: goto label_2d0e88;
        case 0x2d0e8cu: goto label_2d0e8c;
        case 0x2d0e90u: goto label_2d0e90;
        case 0x2d0e94u: goto label_2d0e94;
        case 0x2d0e98u: goto label_2d0e98;
        case 0x2d0e9cu: goto label_2d0e9c;
        case 0x2d0ea0u: goto label_2d0ea0;
        case 0x2d0ea4u: goto label_2d0ea4;
        case 0x2d0ea8u: goto label_2d0ea8;
        case 0x2d0eacu: goto label_2d0eac;
        case 0x2d0eb0u: goto label_2d0eb0;
        case 0x2d0eb4u: goto label_2d0eb4;
        case 0x2d0eb8u: goto label_2d0eb8;
        case 0x2d0ebcu: goto label_2d0ebc;
        case 0x2d0ec0u: goto label_2d0ec0;
        case 0x2d0ec4u: goto label_2d0ec4;
        case 0x2d0ec8u: goto label_2d0ec8;
        case 0x2d0eccu: goto label_2d0ecc;
        case 0x2d0ed0u: goto label_2d0ed0;
        case 0x2d0ed4u: goto label_2d0ed4;
        case 0x2d0ed8u: goto label_2d0ed8;
        case 0x2d0edcu: goto label_2d0edc;
        case 0x2d0ee0u: goto label_2d0ee0;
        case 0x2d0ee4u: goto label_2d0ee4;
        case 0x2d0ee8u: goto label_2d0ee8;
        case 0x2d0eecu: goto label_2d0eec;
        case 0x2d0ef0u: goto label_2d0ef0;
        case 0x2d0ef4u: goto label_2d0ef4;
        case 0x2d0ef8u: goto label_2d0ef8;
        case 0x2d0efcu: goto label_2d0efc;
        case 0x2d0f00u: goto label_2d0f00;
        case 0x2d0f04u: goto label_2d0f04;
        case 0x2d0f08u: goto label_2d0f08;
        case 0x2d0f0cu: goto label_2d0f0c;
        case 0x2d0f10u: goto label_2d0f10;
        case 0x2d0f14u: goto label_2d0f14;
        case 0x2d0f18u: goto label_2d0f18;
        case 0x2d0f1cu: goto label_2d0f1c;
        case 0x2d0f20u: goto label_2d0f20;
        case 0x2d0f24u: goto label_2d0f24;
        case 0x2d0f28u: goto label_2d0f28;
        case 0x2d0f2cu: goto label_2d0f2c;
        case 0x2d0f30u: goto label_2d0f30;
        case 0x2d0f34u: goto label_2d0f34;
        case 0x2d0f38u: goto label_2d0f38;
        case 0x2d0f3cu: goto label_2d0f3c;
        case 0x2d0f40u: goto label_2d0f40;
        case 0x2d0f44u: goto label_2d0f44;
        case 0x2d0f48u: goto label_2d0f48;
        case 0x2d0f4cu: goto label_2d0f4c;
        case 0x2d0f50u: goto label_2d0f50;
        case 0x2d0f54u: goto label_2d0f54;
        case 0x2d0f58u: goto label_2d0f58;
        case 0x2d0f5cu: goto label_2d0f5c;
        case 0x2d0f60u: goto label_2d0f60;
        case 0x2d0f64u: goto label_2d0f64;
        case 0x2d0f68u: goto label_2d0f68;
        case 0x2d0f6cu: goto label_2d0f6c;
        case 0x2d0f70u: goto label_2d0f70;
        case 0x2d0f74u: goto label_2d0f74;
        case 0x2d0f78u: goto label_2d0f78;
        case 0x2d0f7cu: goto label_2d0f7c;
        case 0x2d0f80u: goto label_2d0f80;
        case 0x2d0f84u: goto label_2d0f84;
        case 0x2d0f88u: goto label_2d0f88;
        case 0x2d0f8cu: goto label_2d0f8c;
        case 0x2d0f90u: goto label_2d0f90;
        case 0x2d0f94u: goto label_2d0f94;
        case 0x2d0f98u: goto label_2d0f98;
        case 0x2d0f9cu: goto label_2d0f9c;
        case 0x2d0fa0u: goto label_2d0fa0;
        case 0x2d0fa4u: goto label_2d0fa4;
        case 0x2d0fa8u: goto label_2d0fa8;
        case 0x2d0facu: goto label_2d0fac;
        case 0x2d0fb0u: goto label_2d0fb0;
        case 0x2d0fb4u: goto label_2d0fb4;
        case 0x2d0fb8u: goto label_2d0fb8;
        case 0x2d0fbcu: goto label_2d0fbc;
        case 0x2d0fc0u: goto label_2d0fc0;
        case 0x2d0fc4u: goto label_2d0fc4;
        case 0x2d0fc8u: goto label_2d0fc8;
        case 0x2d0fccu: goto label_2d0fcc;
        case 0x2d0fd0u: goto label_2d0fd0;
        case 0x2d0fd4u: goto label_2d0fd4;
        case 0x2d0fd8u: goto label_2d0fd8;
        case 0x2d0fdcu: goto label_2d0fdc;
        case 0x2d0fe0u: goto label_2d0fe0;
        case 0x2d0fe4u: goto label_2d0fe4;
        case 0x2d0fe8u: goto label_2d0fe8;
        case 0x2d0fecu: goto label_2d0fec;
        case 0x2d0ff0u: goto label_2d0ff0;
        case 0x2d0ff4u: goto label_2d0ff4;
        case 0x2d0ff8u: goto label_2d0ff8;
        case 0x2d0ffcu: goto label_2d0ffc;
        case 0x2d1000u: goto label_2d1000;
        case 0x2d1004u: goto label_2d1004;
        case 0x2d1008u: goto label_2d1008;
        case 0x2d100cu: goto label_2d100c;
        case 0x2d1010u: goto label_2d1010;
        case 0x2d1014u: goto label_2d1014;
        case 0x2d1018u: goto label_2d1018;
        case 0x2d101cu: goto label_2d101c;
        case 0x2d1020u: goto label_2d1020;
        case 0x2d1024u: goto label_2d1024;
        case 0x2d1028u: goto label_2d1028;
        case 0x2d102cu: goto label_2d102c;
        case 0x2d1030u: goto label_2d1030;
        case 0x2d1034u: goto label_2d1034;
        case 0x2d1038u: goto label_2d1038;
        case 0x2d103cu: goto label_2d103c;
        case 0x2d1040u: goto label_2d1040;
        case 0x2d1044u: goto label_2d1044;
        case 0x2d1048u: goto label_2d1048;
        case 0x2d104cu: goto label_2d104c;
        case 0x2d1050u: goto label_2d1050;
        case 0x2d1054u: goto label_2d1054;
        case 0x2d1058u: goto label_2d1058;
        case 0x2d105cu: goto label_2d105c;
        case 0x2d1060u: goto label_2d1060;
        case 0x2d1064u: goto label_2d1064;
        case 0x2d1068u: goto label_2d1068;
        case 0x2d106cu: goto label_2d106c;
        case 0x2d1070u: goto label_2d1070;
        case 0x2d1074u: goto label_2d1074;
        case 0x2d1078u: goto label_2d1078;
        case 0x2d107cu: goto label_2d107c;
        case 0x2d1080u: goto label_2d1080;
        case 0x2d1084u: goto label_2d1084;
        case 0x2d1088u: goto label_2d1088;
        case 0x2d108cu: goto label_2d108c;
        case 0x2d1090u: goto label_2d1090;
        case 0x2d1094u: goto label_2d1094;
        case 0x2d1098u: goto label_2d1098;
        case 0x2d109cu: goto label_2d109c;
        case 0x2d10a0u: goto label_2d10a0;
        case 0x2d10a4u: goto label_2d10a4;
        case 0x2d10a8u: goto label_2d10a8;
        case 0x2d10acu: goto label_2d10ac;
        case 0x2d10b0u: goto label_2d10b0;
        case 0x2d10b4u: goto label_2d10b4;
        case 0x2d10b8u: goto label_2d10b8;
        case 0x2d10bcu: goto label_2d10bc;
        case 0x2d10c0u: goto label_2d10c0;
        case 0x2d10c4u: goto label_2d10c4;
        case 0x2d10c8u: goto label_2d10c8;
        case 0x2d10ccu: goto label_2d10cc;
        case 0x2d10d0u: goto label_2d10d0;
        case 0x2d10d4u: goto label_2d10d4;
        case 0x2d10d8u: goto label_2d10d8;
        case 0x2d10dcu: goto label_2d10dc;
        case 0x2d10e0u: goto label_2d10e0;
        case 0x2d10e4u: goto label_2d10e4;
        case 0x2d10e8u: goto label_2d10e8;
        case 0x2d10ecu: goto label_2d10ec;
        case 0x2d10f0u: goto label_2d10f0;
        case 0x2d10f4u: goto label_2d10f4;
        case 0x2d10f8u: goto label_2d10f8;
        case 0x2d10fcu: goto label_2d10fc;
        case 0x2d1100u: goto label_2d1100;
        case 0x2d1104u: goto label_2d1104;
        case 0x2d1108u: goto label_2d1108;
        case 0x2d110cu: goto label_2d110c;
        case 0x2d1110u: goto label_2d1110;
        case 0x2d1114u: goto label_2d1114;
        case 0x2d1118u: goto label_2d1118;
        case 0x2d111cu: goto label_2d111c;
        case 0x2d1120u: goto label_2d1120;
        case 0x2d1124u: goto label_2d1124;
        case 0x2d1128u: goto label_2d1128;
        case 0x2d112cu: goto label_2d112c;
        case 0x2d1130u: goto label_2d1130;
        case 0x2d1134u: goto label_2d1134;
        case 0x2d1138u: goto label_2d1138;
        case 0x2d113cu: goto label_2d113c;
        case 0x2d1140u: goto label_2d1140;
        case 0x2d1144u: goto label_2d1144;
        case 0x2d1148u: goto label_2d1148;
        case 0x2d114cu: goto label_2d114c;
        case 0x2d1150u: goto label_2d1150;
        case 0x2d1154u: goto label_2d1154;
        case 0x2d1158u: goto label_2d1158;
        case 0x2d115cu: goto label_2d115c;
        case 0x2d1160u: goto label_2d1160;
        case 0x2d1164u: goto label_2d1164;
        case 0x2d1168u: goto label_2d1168;
        case 0x2d116cu: goto label_2d116c;
        case 0x2d1170u: goto label_2d1170;
        case 0x2d1174u: goto label_2d1174;
        case 0x2d1178u: goto label_2d1178;
        case 0x2d117cu: goto label_2d117c;
        case 0x2d1180u: goto label_2d1180;
        case 0x2d1184u: goto label_2d1184;
        case 0x2d1188u: goto label_2d1188;
        case 0x2d118cu: goto label_2d118c;
        case 0x2d1190u: goto label_2d1190;
        case 0x2d1194u: goto label_2d1194;
        case 0x2d1198u: goto label_2d1198;
        case 0x2d119cu: goto label_2d119c;
        case 0x2d11a0u: goto label_2d11a0;
        case 0x2d11a4u: goto label_2d11a4;
        case 0x2d11a8u: goto label_2d11a8;
        case 0x2d11acu: goto label_2d11ac;
        case 0x2d11b0u: goto label_2d11b0;
        case 0x2d11b4u: goto label_2d11b4;
        case 0x2d11b8u: goto label_2d11b8;
        case 0x2d11bcu: goto label_2d11bc;
        case 0x2d11c0u: goto label_2d11c0;
        case 0x2d11c4u: goto label_2d11c4;
        case 0x2d11c8u: goto label_2d11c8;
        case 0x2d11ccu: goto label_2d11cc;
        case 0x2d11d0u: goto label_2d11d0;
        case 0x2d11d4u: goto label_2d11d4;
        case 0x2d11d8u: goto label_2d11d8;
        case 0x2d11dcu: goto label_2d11dc;
        case 0x2d11e0u: goto label_2d11e0;
        case 0x2d11e4u: goto label_2d11e4;
        case 0x2d11e8u: goto label_2d11e8;
        case 0x2d11ecu: goto label_2d11ec;
        case 0x2d11f0u: goto label_2d11f0;
        case 0x2d11f4u: goto label_2d11f4;
        case 0x2d11f8u: goto label_2d11f8;
        case 0x2d11fcu: goto label_2d11fc;
        case 0x2d1200u: goto label_2d1200;
        case 0x2d1204u: goto label_2d1204;
        case 0x2d1208u: goto label_2d1208;
        case 0x2d120cu: goto label_2d120c;
        case 0x2d1210u: goto label_2d1210;
        case 0x2d1214u: goto label_2d1214;
        case 0x2d1218u: goto label_2d1218;
        case 0x2d121cu: goto label_2d121c;
        case 0x2d1220u: goto label_2d1220;
        case 0x2d1224u: goto label_2d1224;
        case 0x2d1228u: goto label_2d1228;
        case 0x2d122cu: goto label_2d122c;
        case 0x2d1230u: goto label_2d1230;
        case 0x2d1234u: goto label_2d1234;
        case 0x2d1238u: goto label_2d1238;
        case 0x2d123cu: goto label_2d123c;
        case 0x2d1240u: goto label_2d1240;
        case 0x2d1244u: goto label_2d1244;
        case 0x2d1248u: goto label_2d1248;
        case 0x2d124cu: goto label_2d124c;
        case 0x2d1250u: goto label_2d1250;
        case 0x2d1254u: goto label_2d1254;
        case 0x2d1258u: goto label_2d1258;
        case 0x2d125cu: goto label_2d125c;
        case 0x2d1260u: goto label_2d1260;
        case 0x2d1264u: goto label_2d1264;
        case 0x2d1268u: goto label_2d1268;
        case 0x2d126cu: goto label_2d126c;
        case 0x2d1270u: goto label_2d1270;
        case 0x2d1274u: goto label_2d1274;
        case 0x2d1278u: goto label_2d1278;
        case 0x2d127cu: goto label_2d127c;
        case 0x2d1280u: goto label_2d1280;
        case 0x2d1284u: goto label_2d1284;
        case 0x2d1288u: goto label_2d1288;
        case 0x2d128cu: goto label_2d128c;
        case 0x2d1290u: goto label_2d1290;
        case 0x2d1294u: goto label_2d1294;
        case 0x2d1298u: goto label_2d1298;
        case 0x2d129cu: goto label_2d129c;
        case 0x2d12a0u: goto label_2d12a0;
        case 0x2d12a4u: goto label_2d12a4;
        case 0x2d12a8u: goto label_2d12a8;
        case 0x2d12acu: goto label_2d12ac;
        case 0x2d12b0u: goto label_2d12b0;
        case 0x2d12b4u: goto label_2d12b4;
        case 0x2d12b8u: goto label_2d12b8;
        case 0x2d12bcu: goto label_2d12bc;
        case 0x2d12c0u: goto label_2d12c0;
        case 0x2d12c4u: goto label_2d12c4;
        case 0x2d12c8u: goto label_2d12c8;
        case 0x2d12ccu: goto label_2d12cc;
        case 0x2d12d0u: goto label_2d12d0;
        case 0x2d12d4u: goto label_2d12d4;
        case 0x2d12d8u: goto label_2d12d8;
        case 0x2d12dcu: goto label_2d12dc;
        case 0x2d12e0u: goto label_2d12e0;
        case 0x2d12e4u: goto label_2d12e4;
        case 0x2d12e8u: goto label_2d12e8;
        case 0x2d12ecu: goto label_2d12ec;
        case 0x2d12f0u: goto label_2d12f0;
        case 0x2d12f4u: goto label_2d12f4;
        case 0x2d12f8u: goto label_2d12f8;
        case 0x2d12fcu: goto label_2d12fc;
        case 0x2d1300u: goto label_2d1300;
        case 0x2d1304u: goto label_2d1304;
        case 0x2d1308u: goto label_2d1308;
        case 0x2d130cu: goto label_2d130c;
        case 0x2d1310u: goto label_2d1310;
        case 0x2d1314u: goto label_2d1314;
        case 0x2d1318u: goto label_2d1318;
        case 0x2d131cu: goto label_2d131c;
        case 0x2d1320u: goto label_2d1320;
        case 0x2d1324u: goto label_2d1324;
        case 0x2d1328u: goto label_2d1328;
        case 0x2d132cu: goto label_2d132c;
        case 0x2d1330u: goto label_2d1330;
        case 0x2d1334u: goto label_2d1334;
        case 0x2d1338u: goto label_2d1338;
        case 0x2d133cu: goto label_2d133c;
        case 0x2d1340u: goto label_2d1340;
        case 0x2d1344u: goto label_2d1344;
        case 0x2d1348u: goto label_2d1348;
        case 0x2d134cu: goto label_2d134c;
        case 0x2d1350u: goto label_2d1350;
        case 0x2d1354u: goto label_2d1354;
        case 0x2d1358u: goto label_2d1358;
        case 0x2d135cu: goto label_2d135c;
        case 0x2d1360u: goto label_2d1360;
        case 0x2d1364u: goto label_2d1364;
        case 0x2d1368u: goto label_2d1368;
        case 0x2d136cu: goto label_2d136c;
        case 0x2d1370u: goto label_2d1370;
        case 0x2d1374u: goto label_2d1374;
        case 0x2d1378u: goto label_2d1378;
        case 0x2d137cu: goto label_2d137c;
        case 0x2d1380u: goto label_2d1380;
        case 0x2d1384u: goto label_2d1384;
        case 0x2d1388u: goto label_2d1388;
        case 0x2d138cu: goto label_2d138c;
        case 0x2d1390u: goto label_2d1390;
        case 0x2d1394u: goto label_2d1394;
        case 0x2d1398u: goto label_2d1398;
        case 0x2d139cu: goto label_2d139c;
        case 0x2d13a0u: goto label_2d13a0;
        case 0x2d13a4u: goto label_2d13a4;
        case 0x2d13a8u: goto label_2d13a8;
        case 0x2d13acu: goto label_2d13ac;
        case 0x2d13b0u: goto label_2d13b0;
        case 0x2d13b4u: goto label_2d13b4;
        case 0x2d13b8u: goto label_2d13b8;
        case 0x2d13bcu: goto label_2d13bc;
        case 0x2d13c0u: goto label_2d13c0;
        case 0x2d13c4u: goto label_2d13c4;
        case 0x2d13c8u: goto label_2d13c8;
        case 0x2d13ccu: goto label_2d13cc;
        case 0x2d13d0u: goto label_2d13d0;
        case 0x2d13d4u: goto label_2d13d4;
        case 0x2d13d8u: goto label_2d13d8;
        case 0x2d13dcu: goto label_2d13dc;
        case 0x2d13e0u: goto label_2d13e0;
        case 0x2d13e4u: goto label_2d13e4;
        case 0x2d13e8u: goto label_2d13e8;
        case 0x2d13ecu: goto label_2d13ec;
        case 0x2d13f0u: goto label_2d13f0;
        case 0x2d13f4u: goto label_2d13f4;
        case 0x2d13f8u: goto label_2d13f8;
        case 0x2d13fcu: goto label_2d13fc;
        case 0x2d1400u: goto label_2d1400;
        case 0x2d1404u: goto label_2d1404;
        case 0x2d1408u: goto label_2d1408;
        case 0x2d140cu: goto label_2d140c;
        case 0x2d1410u: goto label_2d1410;
        case 0x2d1414u: goto label_2d1414;
        case 0x2d1418u: goto label_2d1418;
        case 0x2d141cu: goto label_2d141c;
        case 0x2d1420u: goto label_2d1420;
        case 0x2d1424u: goto label_2d1424;
        case 0x2d1428u: goto label_2d1428;
        case 0x2d142cu: goto label_2d142c;
        case 0x2d1430u: goto label_2d1430;
        case 0x2d1434u: goto label_2d1434;
        case 0x2d1438u: goto label_2d1438;
        case 0x2d143cu: goto label_2d143c;
        case 0x2d1440u: goto label_2d1440;
        case 0x2d1444u: goto label_2d1444;
        case 0x2d1448u: goto label_2d1448;
        case 0x2d144cu: goto label_2d144c;
        case 0x2d1450u: goto label_2d1450;
        case 0x2d1454u: goto label_2d1454;
        case 0x2d1458u: goto label_2d1458;
        case 0x2d145cu: goto label_2d145c;
        case 0x2d1460u: goto label_2d1460;
        case 0x2d1464u: goto label_2d1464;
        case 0x2d1468u: goto label_2d1468;
        case 0x2d146cu: goto label_2d146c;
        case 0x2d1470u: goto label_2d1470;
        case 0x2d1474u: goto label_2d1474;
        case 0x2d1478u: goto label_2d1478;
        case 0x2d147cu: goto label_2d147c;
        case 0x2d1480u: goto label_2d1480;
        case 0x2d1484u: goto label_2d1484;
        case 0x2d1488u: goto label_2d1488;
        case 0x2d148cu: goto label_2d148c;
        case 0x2d1490u: goto label_2d1490;
        case 0x2d1494u: goto label_2d1494;
        case 0x2d1498u: goto label_2d1498;
        case 0x2d149cu: goto label_2d149c;
        case 0x2d14a0u: goto label_2d14a0;
        case 0x2d14a4u: goto label_2d14a4;
        case 0x2d14a8u: goto label_2d14a8;
        case 0x2d14acu: goto label_2d14ac;
        case 0x2d14b0u: goto label_2d14b0;
        case 0x2d14b4u: goto label_2d14b4;
        case 0x2d14b8u: goto label_2d14b8;
        case 0x2d14bcu: goto label_2d14bc;
        case 0x2d14c0u: goto label_2d14c0;
        case 0x2d14c4u: goto label_2d14c4;
        case 0x2d14c8u: goto label_2d14c8;
        case 0x2d14ccu: goto label_2d14cc;
        case 0x2d14d0u: goto label_2d14d0;
        case 0x2d14d4u: goto label_2d14d4;
        case 0x2d14d8u: goto label_2d14d8;
        case 0x2d14dcu: goto label_2d14dc;
        case 0x2d14e0u: goto label_2d14e0;
        case 0x2d14e4u: goto label_2d14e4;
        case 0x2d14e8u: goto label_2d14e8;
        case 0x2d14ecu: goto label_2d14ec;
        default: break;
    }

    ctx->pc = 0x2cf740u;

label_2cf740:
    // 0x2cf740: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2cf740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2cf744:
    // 0x2cf744: 0x3e00008  jr          $ra
label_2cf748:
    if (ctx->pc == 0x2CF748u) {
        ctx->pc = 0x2CF748u;
            // 0x2cf748: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2CF74Cu;
        goto label_2cf74c;
    }
    ctx->pc = 0x2CF744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF744u;
            // 0x2cf748: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CF74Cu;
label_2cf74c:
    // 0x2cf74c: 0x0  nop
    ctx->pc = 0x2cf74cu;
    // NOP
label_2cf750:
    // 0x2cf750: 0x3e00008  jr          $ra
label_2cf754:
    if (ctx->pc == 0x2CF754u) {
        ctx->pc = 0x2CF758u;
        goto label_2cf758;
    }
    ctx->pc = 0x2CF750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CF758u;
label_2cf758:
    // 0x2cf758: 0x0  nop
    ctx->pc = 0x2cf758u;
    // NOP
label_2cf75c:
    // 0x2cf75c: 0x0  nop
    ctx->pc = 0x2cf75cu;
    // NOP
label_2cf760:
    // 0x2cf760: 0x3e00008  jr          $ra
label_2cf764:
    if (ctx->pc == 0x2CF764u) {
        ctx->pc = 0x2CF768u;
        goto label_2cf768;
    }
    ctx->pc = 0x2CF760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CF768u;
label_2cf768:
    // 0x2cf768: 0x0  nop
    ctx->pc = 0x2cf768u;
    // NOP
label_2cf76c:
    // 0x2cf76c: 0x0  nop
    ctx->pc = 0x2cf76cu;
    // NOP
label_2cf770:
    // 0x2cf770: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2cf770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2cf774:
    // 0x2cf774: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2cf774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2cf778:
    // 0x2cf778: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2cf778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2cf77c:
    // 0x2cf77c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cf77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2cf780:
    // 0x2cf780: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2cf780u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cf784:
    // 0x2cf784: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cf784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2cf788:
    // 0x2cf788: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2cf788u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2cf78c:
    // 0x2cf78c: 0x12600065  beqz        $s3, . + 4 + (0x65 << 2)
label_2cf790:
    if (ctx->pc == 0x2CF790u) {
        ctx->pc = 0x2CF790u;
            // 0x2cf790: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x2CF794u;
        goto label_2cf794;
    }
    ctx->pc = 0x2CF78Cu;
    {
        const bool branch_taken_0x2cf78c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF78Cu;
            // 0x2cf790: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf78c) {
            ctx->pc = 0x2CF924u;
            goto label_2cf924;
        }
    }
    ctx->pc = 0x2CF794u;
label_2cf794:
    // 0x2cf794: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cf794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2cf798:
    // 0x2cf798: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cf798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cf79c:
    // 0x2cf79c: 0x2463ff50  addiu       $v1, $v1, -0xB0
    ctx->pc = 0x2cf79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967120));
label_2cf7a0:
    // 0x2cf7a0: 0x2442ff88  addiu       $v0, $v0, -0x78
    ctx->pc = 0x2cf7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967176));
label_2cf7a4:
    // 0x2cf7a4: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2cf7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_2cf7a8:
    // 0x2cf7a8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2cf7a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cf7ac:
    // 0x2cf7ac: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x2cf7acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_2cf7b0:
    // 0x2cf7b0: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x2cf7b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2cf7b4:
    // 0x2cf7b4: 0x8e046ad8  lw          $a0, 0x6AD8($s0)
    ctx->pc = 0x2cf7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27352)));
label_2cf7b8:
    // 0x2cf7b8: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x2cf7b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_2cf7bc:
    // 0x2cf7bc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2cf7c0:
    if (ctx->pc == 0x2CF7C0u) {
        ctx->pc = 0x2CF7C4u;
        goto label_2cf7c4;
    }
    ctx->pc = 0x2CF7BCu;
    {
        const bool branch_taken_0x2cf7bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf7bc) {
            ctx->pc = 0x2CF7F8u;
            goto label_2cf7f8;
        }
    }
    ctx->pc = 0x2CF7C4u;
label_2cf7c4:
    // 0x2cf7c4: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x2cf7c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_2cf7c8:
    // 0x2cf7c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2cf7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2cf7cc:
    // 0x2cf7cc: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x2cf7ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_2cf7d0:
    // 0x2cf7d0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2cf7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_2cf7d4:
    // 0x2cf7d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2cf7d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2cf7d8:
    // 0x2cf7d8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2cf7dc:
    if (ctx->pc == 0x2CF7DCu) {
        ctx->pc = 0x2CF7E0u;
        goto label_2cf7e0;
    }
    ctx->pc = 0x2CF7D8u;
    {
        const bool branch_taken_0x2cf7d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cf7d8) {
            ctx->pc = 0x2CF7F8u;
            goto label_2cf7f8;
        }
    }
    ctx->pc = 0x2CF7E0u;
label_2cf7e0:
    // 0x2cf7e0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2cf7e4:
    if (ctx->pc == 0x2CF7E4u) {
        ctx->pc = 0x2CF7E8u;
        goto label_2cf7e8;
    }
    ctx->pc = 0x2CF7E0u;
    {
        const bool branch_taken_0x2cf7e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf7e0) {
            ctx->pc = 0x2CF7F8u;
            goto label_2cf7f8;
        }
    }
    ctx->pc = 0x2CF7E8u;
label_2cf7e8:
    // 0x2cf7e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2cf7e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cf7ec:
    // 0x2cf7ec: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2cf7ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2cf7f0:
    // 0x2cf7f0: 0x320f809  jalr        $t9
label_2cf7f4:
    if (ctx->pc == 0x2CF7F4u) {
        ctx->pc = 0x2CF7F4u;
            // 0x2cf7f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2CF7F8u;
        goto label_2cf7f8;
    }
    ctx->pc = 0x2CF7F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CF7F8u);
        ctx->pc = 0x2CF7F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF7F0u;
            // 0x2cf7f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CF7F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CF7F8u; }
            if (ctx->pc != 0x2CF7F8u) { return; }
        }
        }
    }
    ctx->pc = 0x2CF7F8u;
label_2cf7f8:
    // 0x2cf7f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2cf7f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2cf7fc:
    // 0x2cf7fc: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x2cf7fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2cf800:
    // 0x2cf800: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_2cf804:
    if (ctx->pc == 0x2CF804u) {
        ctx->pc = 0x2CF804u;
            // 0x2cf804: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x2CF808u;
        goto label_2cf808;
    }
    ctx->pc = 0x2CF800u;
    {
        const bool branch_taken_0x2cf800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CF804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF800u;
            // 0x2cf804: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf800) {
            ctx->pc = 0x2CF7B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cf7b4;
        }
    }
    ctx->pc = 0x2CF808u;
label_2cf808:
    // 0x2cf808: 0x26646ac8  addiu       $a0, $s3, 0x6AC8
    ctx->pc = 0x2cf808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 27336));
label_2cf80c:
    // 0x2cf80c: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
label_2cf810:
    if (ctx->pc == 0x2CF810u) {
        ctx->pc = 0x2CF810u;
            // 0x2cf810: 0x26626ab8  addiu       $v0, $s3, 0x6AB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 27320));
        ctx->pc = 0x2CF814u;
        goto label_2cf814;
    }
    ctx->pc = 0x2CF80Cu;
    {
        const bool branch_taken_0x2cf80c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf80c) {
            ctx->pc = 0x2CF810u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF80Cu;
            // 0x2cf810: 0x26626ab8  addiu       $v0, $s3, 0x6AB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 27320));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CF830u;
            goto label_2cf830;
        }
    }
    ctx->pc = 0x2CF814u;
label_2cf814:
    // 0x2cf814: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2cf818:
    if (ctx->pc == 0x2CF818u) {
        ctx->pc = 0x2CF81Cu;
        goto label_2cf81c;
    }
    ctx->pc = 0x2CF814u;
    {
        const bool branch_taken_0x2cf814 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf814) {
            ctx->pc = 0x2CF82Cu;
            goto label_2cf82c;
        }
    }
    ctx->pc = 0x2CF81Cu;
label_2cf81c:
    // 0x2cf81c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2cf820:
    if (ctx->pc == 0x2CF820u) {
        ctx->pc = 0x2CF824u;
        goto label_2cf824;
    }
    ctx->pc = 0x2CF81Cu;
    {
        const bool branch_taken_0x2cf81c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf81c) {
            ctx->pc = 0x2CF82Cu;
            goto label_2cf82c;
        }
    }
    ctx->pc = 0x2CF824u;
label_2cf824:
    // 0x2cf824: 0xc0b4b58  jal         func_2D2D60
label_2cf828:
    if (ctx->pc == 0x2CF828u) {
        ctx->pc = 0x2CF828u;
            // 0x2cf828: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CF82Cu;
        goto label_2cf82c;
    }
    ctx->pc = 0x2CF824u;
    SET_GPR_U32(ctx, 31, 0x2CF82Cu);
    ctx->pc = 0x2CF828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF824u;
            // 0x2cf828: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2D60u;
    if (runtime->hasFunction(0x2D2D60u)) {
        auto targetFn = runtime->lookupFunction(0x2D2D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF82Cu; }
        if (ctx->pc != 0x2CF82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2D60_0x2d2d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF82Cu; }
        if (ctx->pc != 0x2CF82Cu) { return; }
    }
    ctx->pc = 0x2CF82Cu;
label_2cf82c:
    // 0x2cf82c: 0x26626ab8  addiu       $v0, $s3, 0x6AB8
    ctx->pc = 0x2cf82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 27320));
label_2cf830:
    // 0x2cf830: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_2cf834:
    if (ctx->pc == 0x2CF834u) {
        ctx->pc = 0x2CF834u;
            // 0x2cf834: 0x26656aa4  addiu       $a1, $s3, 0x6AA4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 27300));
        ctx->pc = 0x2CF838u;
        goto label_2cf838;
    }
    ctx->pc = 0x2CF830u;
    {
        const bool branch_taken_0x2cf830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf830) {
            ctx->pc = 0x2CF834u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF830u;
            // 0x2cf834: 0x26656aa4  addiu       $a1, $s3, 0x6AA4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 27300));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CF870u;
            goto label_2cf870;
        }
    }
    ctx->pc = 0x2CF838u;
label_2cf838:
    // 0x2cf838: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2cf83c:
    if (ctx->pc == 0x2CF83Cu) {
        ctx->pc = 0x2CF840u;
        goto label_2cf840;
    }
    ctx->pc = 0x2CF838u;
    {
        const bool branch_taken_0x2cf838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf838) {
            ctx->pc = 0x2CF86Cu;
            goto label_2cf86c;
        }
    }
    ctx->pc = 0x2CF840u;
label_2cf840:
    // 0x2cf840: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2cf844:
    if (ctx->pc == 0x2CF844u) {
        ctx->pc = 0x2CF848u;
        goto label_2cf848;
    }
    ctx->pc = 0x2CF840u;
    {
        const bool branch_taken_0x2cf840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf840) {
            ctx->pc = 0x2CF86Cu;
            goto label_2cf86c;
        }
    }
    ctx->pc = 0x2CF848u;
label_2cf848:
    // 0x2cf848: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2cf84c:
    if (ctx->pc == 0x2CF84Cu) {
        ctx->pc = 0x2CF850u;
        goto label_2cf850;
    }
    ctx->pc = 0x2CF848u;
    {
        const bool branch_taken_0x2cf848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf848) {
            ctx->pc = 0x2CF86Cu;
            goto label_2cf86c;
        }
    }
    ctx->pc = 0x2CF850u;
label_2cf850:
    // 0x2cf850: 0x8e656ac4  lw          $a1, 0x6AC4($s3)
    ctx->pc = 0x2cf850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 27332)));
label_2cf854:
    // 0x2cf854: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_2cf858:
    if (ctx->pc == 0x2CF858u) {
        ctx->pc = 0x2CF85Cu;
        goto label_2cf85c;
    }
    ctx->pc = 0x2CF854u;
    {
        const bool branch_taken_0x2cf854 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf854) {
            ctx->pc = 0x2CF86Cu;
            goto label_2cf86c;
        }
    }
    ctx->pc = 0x2CF85Cu;
label_2cf85c:
    // 0x2cf85c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_2cf860:
    if (ctx->pc == 0x2CF860u) {
        ctx->pc = 0x2CF864u;
        goto label_2cf864;
    }
    ctx->pc = 0x2CF85Cu;
    {
        const bool branch_taken_0x2cf85c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf85c) {
            ctx->pc = 0x2CF86Cu;
            goto label_2cf86c;
        }
    }
    ctx->pc = 0x2CF864u;
label_2cf864:
    // 0x2cf864: 0xc0fe48c  jal         func_3F9230
label_2cf868:
    if (ctx->pc == 0x2CF868u) {
        ctx->pc = 0x2CF868u;
            // 0x2cf868: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x2CF86Cu;
        goto label_2cf86c;
    }
    ctx->pc = 0x2CF864u;
    SET_GPR_U32(ctx, 31, 0x2CF86Cu);
    ctx->pc = 0x2CF868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF864u;
            // 0x2cf868: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF86Cu; }
        if (ctx->pc != 0x2CF86Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF86Cu; }
        if (ctx->pc != 0x2CF86Cu) { return; }
    }
    ctx->pc = 0x2CF86Cu;
label_2cf86c:
    // 0x2cf86c: 0x26656aa4  addiu       $a1, $s3, 0x6AA4
    ctx->pc = 0x2cf86cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 27300));
label_2cf870:
    // 0x2cf870: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
label_2cf874:
    if (ctx->pc == 0x2CF874u) {
        ctx->pc = 0x2CF878u;
        goto label_2cf878;
    }
    ctx->pc = 0x2CF870u;
    {
        const bool branch_taken_0x2cf870 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf870) {
            ctx->pc = 0x2CF8B0u;
            goto label_2cf8b0;
        }
    }
    ctx->pc = 0x2CF878u;
label_2cf878:
    // 0x2cf878: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
label_2cf87c:
    if (ctx->pc == 0x2CF87Cu) {
        ctx->pc = 0x2CF880u;
        goto label_2cf880;
    }
    ctx->pc = 0x2CF878u;
    {
        const bool branch_taken_0x2cf878 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf878) {
            ctx->pc = 0x2CF8B0u;
            goto label_2cf8b0;
        }
    }
    ctx->pc = 0x2CF880u;
label_2cf880:
    // 0x2cf880: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_2cf884:
    if (ctx->pc == 0x2CF884u) {
        ctx->pc = 0x2CF888u;
        goto label_2cf888;
    }
    ctx->pc = 0x2CF880u;
    {
        const bool branch_taken_0x2cf880 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf880) {
            ctx->pc = 0x2CF8B0u;
            goto label_2cf8b0;
        }
    }
    ctx->pc = 0x2CF888u;
label_2cf888:
    // 0x2cf888: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_2cf88c:
    if (ctx->pc == 0x2CF88Cu) {
        ctx->pc = 0x2CF890u;
        goto label_2cf890;
    }
    ctx->pc = 0x2CF888u;
    {
        const bool branch_taken_0x2cf888 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf888) {
            ctx->pc = 0x2CF8B0u;
            goto label_2cf8b0;
        }
    }
    ctx->pc = 0x2CF890u;
label_2cf890:
    // 0x2cf890: 0x26626ab0  addiu       $v0, $s3, 0x6AB0
    ctx->pc = 0x2cf890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 27312));
label_2cf894:
    // 0x2cf894: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x2cf894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_2cf898:
    // 0x2cf898: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x2cf898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_2cf89c:
    // 0x2cf89c: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x2cf89cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_2cf8a0:
    // 0x2cf8a0: 0x8e626ab4  lw          $v0, 0x6AB4($s3)
    ctx->pc = 0x2cf8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 27316)));
label_2cf8a4:
    // 0x2cf8a4: 0x27a70054  addiu       $a3, $sp, 0x54
    ctx->pc = 0x2cf8a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_2cf8a8:
    // 0x2cf8a8: 0xc05827c  jal         func_1609F0
label_2cf8ac:
    if (ctx->pc == 0x2CF8ACu) {
        ctx->pc = 0x2CF8ACu;
            // 0x2cf8ac: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->pc = 0x2CF8B0u;
        goto label_2cf8b0;
    }
    ctx->pc = 0x2CF8A8u;
    SET_GPR_U32(ctx, 31, 0x2CF8B0u);
    ctx->pc = 0x2CF8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF8A8u;
            // 0x2cf8ac: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1609F0u;
    if (runtime->hasFunction(0x1609F0u)) {
        auto targetFn = runtime->lookupFunction(0x1609F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF8B0u; }
        if (ctx->pc != 0x2CF8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001609F0_0x1609f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF8B0u; }
        if (ctx->pc != 0x2CF8B0u) { return; }
    }
    ctx->pc = 0x2CF8B0u;
label_2cf8b0:
    // 0x2cf8b0: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x2cf8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_2cf8b4:
    // 0x2cf8b4: 0x266438a0  addiu       $a0, $s3, 0x38A0
    ctx->pc = 0x2cf8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 14496));
label_2cf8b8:
    // 0x2cf8b8: 0x24a5d100  addiu       $a1, $a1, -0x2F00
    ctx->pc = 0x2cf8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955264));
label_2cf8bc:
    // 0x2cf8bc: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2cf8bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2cf8c0:
    // 0x2cf8c0: 0xc0407e8  jal         func_101FA0
label_2cf8c4:
    if (ctx->pc == 0x2CF8C4u) {
        ctx->pc = 0x2CF8C4u;
            // 0x2cf8c4: 0x24070064  addiu       $a3, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x2CF8C8u;
        goto label_2cf8c8;
    }
    ctx->pc = 0x2CF8C0u;
    SET_GPR_U32(ctx, 31, 0x2CF8C8u);
    ctx->pc = 0x2CF8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF8C0u;
            // 0x2cf8c4: 0x24070064  addiu       $a3, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF8C8u; }
        if (ctx->pc != 0x2CF8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF8C8u; }
        if (ctx->pc != 0x2CF8C8u) { return; }
    }
    ctx->pc = 0x2CF8C8u;
label_2cf8c8:
    // 0x2cf8c8: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x2cf8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_2cf8cc:
    // 0x2cf8cc: 0x266400a0  addiu       $a0, $s3, 0xA0
    ctx->pc = 0x2cf8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
label_2cf8d0:
    // 0x2cf8d0: 0x24a5d2b0  addiu       $a1, $a1, -0x2D50
    ctx->pc = 0x2cf8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955696));
label_2cf8d4:
    // 0x2cf8d4: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x2cf8d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_2cf8d8:
    // 0x2cf8d8: 0xc0407e8  jal         func_101FA0
label_2cf8dc:
    if (ctx->pc == 0x2CF8DCu) {
        ctx->pc = 0x2CF8DCu;
            // 0x2cf8dc: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x2CF8E0u;
        goto label_2cf8e0;
    }
    ctx->pc = 0x2CF8D8u;
    SET_GPR_U32(ctx, 31, 0x2CF8E0u);
    ctx->pc = 0x2CF8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF8D8u;
            // 0x2cf8dc: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF8E0u; }
        if (ctx->pc != 0x2CF8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF8E0u; }
        if (ctx->pc != 0x2CF8E0u) { return; }
    }
    ctx->pc = 0x2CF8E0u;
label_2cf8e0:
    // 0x2cf8e0: 0x5260000b  beql        $s3, $zero, . + 4 + (0xB << 2)
label_2cf8e4:
    if (ctx->pc == 0x2CF8E4u) {
        ctx->pc = 0x2CF8E4u;
            // 0x2cf8e4: 0x12143c  dsll32      $v0, $s2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
        ctx->pc = 0x2CF8E8u;
        goto label_2cf8e8;
    }
    ctx->pc = 0x2CF8E0u;
    {
        const bool branch_taken_0x2cf8e0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf8e0) {
            ctx->pc = 0x2CF8E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF8E0u;
            // 0x2cf8e4: 0x12143c  dsll32      $v0, $s2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CF910u;
            goto label_2cf910;
        }
    }
    ctx->pc = 0x2CF8E8u;
label_2cf8e8:
    // 0x2cf8e8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cf8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2cf8ec:
    // 0x2cf8ec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cf8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cf8f0:
    // 0x2cf8f0: 0x2463ffa0  addiu       $v1, $v1, -0x60
    ctx->pc = 0x2cf8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967200));
label_2cf8f4:
    // 0x2cf8f4: 0x2442ffd8  addiu       $v0, $v0, -0x28
    ctx->pc = 0x2cf8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
label_2cf8f8:
    // 0x2cf8f8: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2cf8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_2cf8fc:
    // 0x2cf8fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2cf8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2cf900:
    // 0x2cf900: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x2cf900u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_2cf904:
    // 0x2cf904: 0xc0b33e8  jal         func_2CCFA0
label_2cf908:
    if (ctx->pc == 0x2CF908u) {
        ctx->pc = 0x2CF908u;
            // 0x2cf908: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CF90Cu;
        goto label_2cf90c;
    }
    ctx->pc = 0x2CF904u;
    SET_GPR_U32(ctx, 31, 0x2CF90Cu);
    ctx->pc = 0x2CF908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF904u;
            // 0x2cf908: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CCFA0u;
    if (runtime->hasFunction(0x2CCFA0u)) {
        auto targetFn = runtime->lookupFunction(0x2CCFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF90Cu; }
        if (ctx->pc != 0x2CF90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CCFA0_0x2ccfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF90Cu; }
        if (ctx->pc != 0x2CF90Cu) { return; }
    }
    ctx->pc = 0x2CF90Cu;
label_2cf90c:
    // 0x2cf90c: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x2cf90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
label_2cf910:
    // 0x2cf910: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2cf910u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2cf914:
    // 0x2cf914: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2cf918:
    if (ctx->pc == 0x2CF918u) {
        ctx->pc = 0x2CF918u;
            // 0x2cf918: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CF91Cu;
        goto label_2cf91c;
    }
    ctx->pc = 0x2CF914u;
    {
        const bool branch_taken_0x2cf914 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2cf914) {
            ctx->pc = 0x2CF918u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF914u;
            // 0x2cf918: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CF928u;
            goto label_2cf928;
        }
    }
    ctx->pc = 0x2CF91Cu;
label_2cf91c:
    // 0x2cf91c: 0xc0400a8  jal         func_1002A0
label_2cf920:
    if (ctx->pc == 0x2CF920u) {
        ctx->pc = 0x2CF920u;
            // 0x2cf920: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CF924u;
        goto label_2cf924;
    }
    ctx->pc = 0x2CF91Cu;
    SET_GPR_U32(ctx, 31, 0x2CF924u);
    ctx->pc = 0x2CF920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF91Cu;
            // 0x2cf920: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF924u; }
        if (ctx->pc != 0x2CF924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF924u; }
        if (ctx->pc != 0x2CF924u) { return; }
    }
    ctx->pc = 0x2CF924u;
label_2cf924:
    // 0x2cf924: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2cf924u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2cf928:
    // 0x2cf928: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2cf928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2cf92c:
    // 0x2cf92c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2cf92cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2cf930:
    // 0x2cf930: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2cf930u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2cf934:
    // 0x2cf934: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cf934u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cf938:
    // 0x2cf938: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cf938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2cf93c:
    // 0x2cf93c: 0x3e00008  jr          $ra
label_2cf940:
    if (ctx->pc == 0x2CF940u) {
        ctx->pc = 0x2CF940u;
            // 0x2cf940: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2CF944u;
        goto label_2cf944;
    }
    ctx->pc = 0x2CF93Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF93Cu;
            // 0x2cf940: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CF944u;
label_2cf944:
    // 0x2cf944: 0x0  nop
    ctx->pc = 0x2cf944u;
    // NOP
label_2cf948:
    // 0x2cf948: 0x0  nop
    ctx->pc = 0x2cf948u;
    // NOP
label_2cf94c:
    // 0x2cf94c: 0x0  nop
    ctx->pc = 0x2cf94cu;
    // NOP
label_2cf950:
    // 0x2cf950: 0x3e00008  jr          $ra
label_2cf954:
    if (ctx->pc == 0x2CF954u) {
        ctx->pc = 0x2CF954u;
            // 0x2cf954: 0x2402080c  addiu       $v0, $zero, 0x80C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
        ctx->pc = 0x2CF958u;
        goto label_2cf958;
    }
    ctx->pc = 0x2CF950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF950u;
            // 0x2cf954: 0x2402080c  addiu       $v0, $zero, 0x80C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CF958u;
label_2cf958:
    // 0x2cf958: 0x0  nop
    ctx->pc = 0x2cf958u;
    // NOP
label_2cf95c:
    // 0x2cf95c: 0x0  nop
    ctx->pc = 0x2cf95cu;
    // NOP
label_2cf960:
    // 0x2cf960: 0x3e00008  jr          $ra
label_2cf964:
    if (ctx->pc == 0x2CF964u) {
        ctx->pc = 0x2CF968u;
        goto label_2cf968;
    }
    ctx->pc = 0x2CF960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CF968u;
label_2cf968:
    // 0x2cf968: 0x0  nop
    ctx->pc = 0x2cf968u;
    // NOP
label_2cf96c:
    // 0x2cf96c: 0x0  nop
    ctx->pc = 0x2cf96cu;
    // NOP
label_2cf970:
    // 0x2cf970: 0x3e00008  jr          $ra
label_2cf974:
    if (ctx->pc == 0x2CF974u) {
        ctx->pc = 0x2CF978u;
        goto label_2cf978;
    }
    ctx->pc = 0x2CF970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CF978u;
label_2cf978:
    // 0x2cf978: 0x0  nop
    ctx->pc = 0x2cf978u;
    // NOP
label_2cf97c:
    // 0x2cf97c: 0x0  nop
    ctx->pc = 0x2cf97cu;
    // NOP
label_2cf980:
    // 0x2cf980: 0x3e00008  jr          $ra
label_2cf984:
    if (ctx->pc == 0x2CF984u) {
        ctx->pc = 0x2CF984u;
            // 0x2cf984: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CF988u;
        goto label_2cf988;
    }
    ctx->pc = 0x2CF980u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF980u;
            // 0x2cf984: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CF988u;
label_2cf988:
    // 0x2cf988: 0x0  nop
    ctx->pc = 0x2cf988u;
    // NOP
label_2cf98c:
    // 0x2cf98c: 0x0  nop
    ctx->pc = 0x2cf98cu;
    // NOP
label_2cf990:
    // 0x2cf990: 0x3e00008  jr          $ra
label_2cf994:
    if (ctx->pc == 0x2CF994u) {
        ctx->pc = 0x2CF994u;
            // 0x2cf994: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2CF998u;
        goto label_2cf998;
    }
    ctx->pc = 0x2CF990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF990u;
            // 0x2cf994: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CF998u;
label_2cf998:
    // 0x2cf998: 0x0  nop
    ctx->pc = 0x2cf998u;
    // NOP
label_2cf99c:
    // 0x2cf99c: 0x0  nop
    ctx->pc = 0x2cf99cu;
    // NOP
label_2cf9a0:
    // 0x2cf9a0: 0x3e00008  jr          $ra
label_2cf9a4:
    if (ctx->pc == 0x2CF9A4u) {
        ctx->pc = 0x2CF9A4u;
            // 0x2cf9a4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2CF9A8u;
        goto label_2cf9a8;
    }
    ctx->pc = 0x2CF9A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF9A0u;
            // 0x2cf9a4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CF9A8u;
label_2cf9a8:
    // 0x2cf9a8: 0x0  nop
    ctx->pc = 0x2cf9a8u;
    // NOP
label_2cf9ac:
    // 0x2cf9ac: 0x0  nop
    ctx->pc = 0x2cf9acu;
    // NOP
label_2cf9b0:
    // 0x2cf9b0: 0x3e00008  jr          $ra
label_2cf9b4:
    if (ctx->pc == 0x2CF9B4u) {
        ctx->pc = 0x2CF9B4u;
            // 0x2cf9b4: 0x24020816  addiu       $v0, $zero, 0x816 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2070));
        ctx->pc = 0x2CF9B8u;
        goto label_2cf9b8;
    }
    ctx->pc = 0x2CF9B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF9B0u;
            // 0x2cf9b4: 0x24020816  addiu       $v0, $zero, 0x816 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2070));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CF9B8u;
label_2cf9b8:
    // 0x2cf9b8: 0x0  nop
    ctx->pc = 0x2cf9b8u;
    // NOP
label_2cf9bc:
    // 0x2cf9bc: 0x0  nop
    ctx->pc = 0x2cf9bcu;
    // NOP
label_2cf9c0:
    // 0x2cf9c0: 0x3e00008  jr          $ra
label_2cf9c4:
    if (ctx->pc == 0x2CF9C4u) {
        ctx->pc = 0x2CF9C4u;
            // 0x2cf9c4: 0x2402082a  addiu       $v0, $zero, 0x82A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2090));
        ctx->pc = 0x2CF9C8u;
        goto label_2cf9c8;
    }
    ctx->pc = 0x2CF9C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF9C0u;
            // 0x2cf9c4: 0x2402082a  addiu       $v0, $zero, 0x82A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2090));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CF9C8u;
label_2cf9c8:
    // 0x2cf9c8: 0x0  nop
    ctx->pc = 0x2cf9c8u;
    // NOP
label_2cf9cc:
    // 0x2cf9cc: 0x0  nop
    ctx->pc = 0x2cf9ccu;
    // NOP
label_2cf9d0:
    // 0x2cf9d0: 0x3e00008  jr          $ra
label_2cf9d4:
    if (ctx->pc == 0x2CF9D4u) {
        ctx->pc = 0x2CF9D4u;
            // 0x2cf9d4: 0x2402082b  addiu       $v0, $zero, 0x82B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2091));
        ctx->pc = 0x2CF9D8u;
        goto label_2cf9d8;
    }
    ctx->pc = 0x2CF9D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF9D0u;
            // 0x2cf9d4: 0x2402082b  addiu       $v0, $zero, 0x82B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2091));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CF9D8u;
label_2cf9d8:
    // 0x2cf9d8: 0x0  nop
    ctx->pc = 0x2cf9d8u;
    // NOP
label_2cf9dc:
    // 0x2cf9dc: 0x0  nop
    ctx->pc = 0x2cf9dcu;
    // NOP
label_2cf9e0:
    // 0x2cf9e0: 0x3e00008  jr          $ra
label_2cf9e4:
    if (ctx->pc == 0x2CF9E4u) {
        ctx->pc = 0x2CF9E4u;
            // 0x2cf9e4: 0x2402082c  addiu       $v0, $zero, 0x82C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2092));
        ctx->pc = 0x2CF9E8u;
        goto label_2cf9e8;
    }
    ctx->pc = 0x2CF9E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF9E0u;
            // 0x2cf9e4: 0x2402082c  addiu       $v0, $zero, 0x82C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2092));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CF9E8u;
label_2cf9e8:
    // 0x2cf9e8: 0x0  nop
    ctx->pc = 0x2cf9e8u;
    // NOP
label_2cf9ec:
    // 0x2cf9ec: 0x0  nop
    ctx->pc = 0x2cf9ecu;
    // NOP
label_2cf9f0:
    // 0x2cf9f0: 0x3e00008  jr          $ra
label_2cf9f4:
    if (ctx->pc == 0x2CF9F4u) {
        ctx->pc = 0x2CF9F4u;
            // 0x2cf9f4: 0x2402082e  addiu       $v0, $zero, 0x82E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2094));
        ctx->pc = 0x2CF9F8u;
        goto label_2cf9f8;
    }
    ctx->pc = 0x2CF9F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF9F0u;
            // 0x2cf9f4: 0x2402082e  addiu       $v0, $zero, 0x82E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2094));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CF9F8u;
label_2cf9f8:
    // 0x2cf9f8: 0x0  nop
    ctx->pc = 0x2cf9f8u;
    // NOP
label_2cf9fc:
    // 0x2cf9fc: 0x0  nop
    ctx->pc = 0x2cf9fcu;
    // NOP
label_2cfa00:
    // 0x2cfa00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2cfa00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2cfa04:
    // 0x2cfa04: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2cfa04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2cfa08:
    // 0x2cfa08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2cfa08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2cfa0c:
    // 0x2cfa0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cfa0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2cfa10:
    // 0x2cfa10: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2cfa10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cfa14:
    // 0x2cfa14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cfa14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2cfa18:
    // 0x2cfa18: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2cfa18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2cfa1c:
    // 0x2cfa1c: 0x12600043  beqz        $s3, . + 4 + (0x43 << 2)
label_2cfa20:
    if (ctx->pc == 0x2CFA20u) {
        ctx->pc = 0x2CFA20u;
            // 0x2cfa20: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x2CFA24u;
        goto label_2cfa24;
    }
    ctx->pc = 0x2CFA1Cu;
    {
        const bool branch_taken_0x2cfa1c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFA1Cu;
            // 0x2cfa20: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfa1c) {
            ctx->pc = 0x2CFB2Cu;
            goto label_2cfb2c;
        }
    }
    ctx->pc = 0x2CFA24u;
label_2cfa24:
    // 0x2cfa24: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cfa24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2cfa28:
    // 0x2cfa28: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cfa28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cfa2c:
    // 0x2cfa2c: 0x24630b30  addiu       $v1, $v1, 0xB30
    ctx->pc = 0x2cfa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2864));
label_2cfa30:
    // 0x2cfa30: 0x24420b38  addiu       $v0, $v0, 0xB38
    ctx->pc = 0x2cfa30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2872));
label_2cfa34:
    // 0x2cfa34: 0xae6300a0  sw          $v1, 0xA0($s3)
    ctx->pc = 0x2cfa34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 3));
label_2cfa38:
    // 0x2cfa38: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cfa38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2cfa3c:
    // 0x2cfa3c: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x2cfa3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
label_2cfa40:
    // 0x2cfa40: 0x24630b70  addiu       $v1, $v1, 0xB70
    ctx->pc = 0x2cfa40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2928));
label_2cfa44:
    // 0x2cfa44: 0x2662000c  addiu       $v0, $s3, 0xC
    ctx->pc = 0x2cfa44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_2cfa48:
    // 0x2cfa48: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2cfa4c:
    if (ctx->pc == 0x2CFA4Cu) {
        ctx->pc = 0x2CFA4Cu;
            // 0x2cfa4c: 0xae630070  sw          $v1, 0x70($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 3));
        ctx->pc = 0x2CFA50u;
        goto label_2cfa50;
    }
    ctx->pc = 0x2CFA48u;
    {
        const bool branch_taken_0x2cfa48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFA48u;
            // 0x2cfa4c: 0xae630070  sw          $v1, 0x70($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfa48) {
            ctx->pc = 0x2CFA80u;
            goto label_2cfa80;
        }
    }
    ctx->pc = 0x2CFA50u;
label_2cfa50:
    // 0x2cfa50: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cfa50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2cfa54:
    // 0x2cfa54: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cfa54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cfa58:
    // 0x2cfa58: 0x24630b90  addiu       $v1, $v1, 0xB90
    ctx->pc = 0x2cfa58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2960));
label_2cfa5c:
    // 0x2cfa5c: 0x24420bc8  addiu       $v0, $v0, 0xBC8
    ctx->pc = 0x2cfa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3016));
label_2cfa60:
    // 0x2cfa60: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x2cfa60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
label_2cfa64:
    // 0x2cfa64: 0x2664009c  addiu       $a0, $s3, 0x9C
    ctx->pc = 0x2cfa64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 156));
label_2cfa68:
    // 0x2cfa68: 0xae620070  sw          $v0, 0x70($s3)
    ctx->pc = 0x2cfa68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 2));
label_2cfa6c:
    // 0x2cfa6c: 0xc0aed1c  jal         func_2BB470
label_2cfa70:
    if (ctx->pc == 0x2CFA70u) {
        ctx->pc = 0x2CFA70u;
            // 0x2cfa70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CFA74u;
        goto label_2cfa74;
    }
    ctx->pc = 0x2CFA6Cu;
    SET_GPR_U32(ctx, 31, 0x2CFA74u);
    ctx->pc = 0x2CFA70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFA6Cu;
            // 0x2cfa70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB470u;
    if (runtime->hasFunction(0x2BB470u)) {
        auto targetFn = runtime->lookupFunction(0x2BB470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFA74u; }
        if (ctx->pc != 0x2CFA74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB470_0x2bb470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFA74u; }
        if (ctx->pc != 0x2CFA74u) { return; }
    }
    ctx->pc = 0x2CFA74u;
label_2cfa74:
    // 0x2cfa74: 0x2664000c  addiu       $a0, $s3, 0xC
    ctx->pc = 0x2cfa74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_2cfa78:
    // 0x2cfa78: 0xc0b19b4  jal         func_2C66D0
label_2cfa7c:
    if (ctx->pc == 0x2CFA7Cu) {
        ctx->pc = 0x2CFA7Cu;
            // 0x2cfa7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CFA80u;
        goto label_2cfa80;
    }
    ctx->pc = 0x2CFA78u;
    SET_GPR_U32(ctx, 31, 0x2CFA80u);
    ctx->pc = 0x2CFA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFA78u;
            // 0x2cfa7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C66D0u;
    if (runtime->hasFunction(0x2C66D0u)) {
        auto targetFn = runtime->lookupFunction(0x2C66D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFA80u; }
        if (ctx->pc != 0x2CFA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C66D0_0x2c66d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFA80u; }
        if (ctx->pc != 0x2CFA80u) { return; }
    }
    ctx->pc = 0x2CFA80u;
label_2cfa80:
    // 0x2cfa80: 0x52600025  beql        $s3, $zero, . + 4 + (0x25 << 2)
label_2cfa84:
    if (ctx->pc == 0x2CFA84u) {
        ctx->pc = 0x2CFA84u;
            // 0x2cfa84: 0x12143c  dsll32      $v0, $s2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
        ctx->pc = 0x2CFA88u;
        goto label_2cfa88;
    }
    ctx->pc = 0x2CFA80u;
    {
        const bool branch_taken_0x2cfa80 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfa80) {
            ctx->pc = 0x2CFA84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFA80u;
            // 0x2cfa84: 0x12143c  dsll32      $v0, $s2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CFB18u;
            goto label_2cfb18;
        }
    }
    ctx->pc = 0x2CFA88u;
label_2cfa88:
    // 0x2cfa88: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2cfa88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2cfa8c:
    // 0x2cfa8c: 0x8e710008  lw          $s1, 0x8($s3)
    ctx->pc = 0x2cfa8cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2cfa90:
    // 0x2cfa90: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2cfa90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_2cfa94:
    // 0x2cfa94: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x2cfa94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2cfa98:
    // 0x2cfa98: 0x2301026  xor         $v0, $s1, $s0
    ctx->pc = 0x2cfa98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 16));
label_2cfa9c:
    // 0x2cfa9c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2cfa9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2cfaa0:
    // 0x2cfaa0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2cfaa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2cfaa4:
    // 0x2cfaa4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_2cfaa8:
    if (ctx->pc == 0x2CFAA8u) {
        ctx->pc = 0x2CFAACu;
        goto label_2cfaac;
    }
    ctx->pc = 0x2CFAA4u;
    {
        const bool branch_taken_0x2cfaa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfaa4) {
            ctx->pc = 0x2CFAF8u;
            goto label_2cfaf8;
        }
    }
    ctx->pc = 0x2CFAACu;
label_2cfaac:
    // 0x2cfaac: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x2cfaacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
label_2cfab0:
    // 0x2cfab0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2cfab0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2cfab4:
    // 0x2cfab4: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2cfab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2cfab8:
    // 0x2cfab8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2cfabc:
    if (ctx->pc == 0x2CFABCu) {
        ctx->pc = 0x2CFAC0u;
        goto label_2cfac0;
    }
    ctx->pc = 0x2CFAB8u;
    {
        const bool branch_taken_0x2cfab8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfab8) {
            ctx->pc = 0x2CFAD0u;
            goto label_2cfad0;
        }
    }
    ctx->pc = 0x2CFAC0u;
label_2cfac0:
    // 0x2cfac0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2cfac0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cfac4:
    // 0x2cfac4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2cfac4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2cfac8:
    // 0x2cfac8: 0x320f809  jalr        $t9
label_2cfacc:
    if (ctx->pc == 0x2CFACCu) {
        ctx->pc = 0x2CFACCu;
            // 0x2cfacc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2CFAD0u;
        goto label_2cfad0;
    }
    ctx->pc = 0x2CFAC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CFAD0u);
        ctx->pc = 0x2CFACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFAC8u;
            // 0x2cfacc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CFAD0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CFAD0u; }
            if (ctx->pc != 0x2CFAD0u) { return; }
        }
        }
    }
    ctx->pc = 0x2CFAD0u;
label_2cfad0:
    // 0x2cfad0: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x2cfad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
label_2cfad4:
    // 0x2cfad4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2cfad4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2cfad8:
    // 0x2cfad8: 0x24510010  addiu       $s1, $v0, 0x10
    ctx->pc = 0x2cfad8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_2cfadc:
    // 0x2cfadc: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x2cfadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_2cfae0:
    // 0x2cfae0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2cfae0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2cfae4:
    // 0x2cfae4: 0x2221026  xor         $v0, $s1, $v0
    ctx->pc = 0x2cfae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 2));
label_2cfae8:
    // 0x2cfae8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2cfae8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2cfaec:
    // 0x2cfaec: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2cfaecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2cfaf0:
    // 0x2cfaf0: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
label_2cfaf4:
    if (ctx->pc == 0x2CFAF4u) {
        ctx->pc = 0x2CFAF4u;
            // 0x2cfaf4: 0x11103c  dsll32      $v0, $s1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
        ctx->pc = 0x2CFAF8u;
        goto label_2cfaf8;
    }
    ctx->pc = 0x2CFAF0u;
    {
        const bool branch_taken_0x2cfaf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cfaf0) {
            ctx->pc = 0x2CFAF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFAF0u;
            // 0x2cfaf4: 0x11103c  dsll32      $v0, $s1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CFAB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cfab0;
        }
    }
    ctx->pc = 0x2CFAF8u;
label_2cfaf8:
    // 0x2cfaf8: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_2cfafc:
    if (ctx->pc == 0x2CFAFCu) {
        ctx->pc = 0x2CFB00u;
        goto label_2cfb00;
    }
    ctx->pc = 0x2CFAF8u;
    {
        const bool branch_taken_0x2cfaf8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfaf8) {
            ctx->pc = 0x2CFB14u;
            goto label_2cfb14;
        }
    }
    ctx->pc = 0x2CFB00u;
label_2cfb00:
    // 0x2cfb00: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_2cfb04:
    if (ctx->pc == 0x2CFB04u) {
        ctx->pc = 0x2CFB08u;
        goto label_2cfb08;
    }
    ctx->pc = 0x2CFB00u;
    {
        const bool branch_taken_0x2cfb00 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfb00) {
            ctx->pc = 0x2CFB14u;
            goto label_2cfb14;
        }
    }
    ctx->pc = 0x2CFB08u;
label_2cfb08:
    // 0x2cfb08: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2cfb08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2cfb0c:
    // 0x2cfb0c: 0xc0b4b74  jal         func_2D2DD0
label_2cfb10:
    if (ctx->pc == 0x2CFB10u) {
        ctx->pc = 0x2CFB10u;
            // 0x2cfb10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CFB14u;
        goto label_2cfb14;
    }
    ctx->pc = 0x2CFB0Cu;
    SET_GPR_U32(ctx, 31, 0x2CFB14u);
    ctx->pc = 0x2CFB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFB0Cu;
            // 0x2cfb10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2DD0u;
    if (runtime->hasFunction(0x2D2DD0u)) {
        auto targetFn = runtime->lookupFunction(0x2D2DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFB14u; }
        if (ctx->pc != 0x2CFB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2DD0_0x2d2dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFB14u; }
        if (ctx->pc != 0x2CFB14u) { return; }
    }
    ctx->pc = 0x2CFB14u;
label_2cfb14:
    // 0x2cfb14: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x2cfb14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
label_2cfb18:
    // 0x2cfb18: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2cfb18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2cfb1c:
    // 0x2cfb1c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2cfb20:
    if (ctx->pc == 0x2CFB20u) {
        ctx->pc = 0x2CFB20u;
            // 0x2cfb20: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CFB24u;
        goto label_2cfb24;
    }
    ctx->pc = 0x2CFB1Cu;
    {
        const bool branch_taken_0x2cfb1c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2cfb1c) {
            ctx->pc = 0x2CFB20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFB1Cu;
            // 0x2cfb20: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CFB30u;
            goto label_2cfb30;
        }
    }
    ctx->pc = 0x2CFB24u;
label_2cfb24:
    // 0x2cfb24: 0xc0400a8  jal         func_1002A0
label_2cfb28:
    if (ctx->pc == 0x2CFB28u) {
        ctx->pc = 0x2CFB28u;
            // 0x2cfb28: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CFB2Cu;
        goto label_2cfb2c;
    }
    ctx->pc = 0x2CFB24u;
    SET_GPR_U32(ctx, 31, 0x2CFB2Cu);
    ctx->pc = 0x2CFB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFB24u;
            // 0x2cfb28: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFB2Cu; }
        if (ctx->pc != 0x2CFB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFB2Cu; }
        if (ctx->pc != 0x2CFB2Cu) { return; }
    }
    ctx->pc = 0x2CFB2Cu;
label_2cfb2c:
    // 0x2cfb2c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2cfb2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2cfb30:
    // 0x2cfb30: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2cfb30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2cfb34:
    // 0x2cfb34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2cfb34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2cfb38:
    // 0x2cfb38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2cfb38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2cfb3c:
    // 0x2cfb3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cfb3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cfb40:
    // 0x2cfb40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cfb40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2cfb44:
    // 0x2cfb44: 0x3e00008  jr          $ra
label_2cfb48:
    if (ctx->pc == 0x2CFB48u) {
        ctx->pc = 0x2CFB48u;
            // 0x2cfb48: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2CFB4Cu;
        goto label_2cfb4c;
    }
    ctx->pc = 0x2CFB44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFB48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFB44u;
            // 0x2cfb48: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CFB4Cu;
label_2cfb4c:
    // 0x2cfb4c: 0x0  nop
    ctx->pc = 0x2cfb4cu;
    // NOP
label_2cfb50:
    // 0x2cfb50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2cfb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2cfb54:
    // 0x2cfb54: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2cfb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2cfb58:
    // 0x2cfb58: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2cfb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2cfb5c:
    // 0x2cfb5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cfb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2cfb60:
    // 0x2cfb60: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2cfb60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cfb64:
    // 0x2cfb64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cfb64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2cfb68:
    // 0x2cfb68: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2cfb68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2cfb6c:
    // 0x2cfb6c: 0x12600043  beqz        $s3, . + 4 + (0x43 << 2)
label_2cfb70:
    if (ctx->pc == 0x2CFB70u) {
        ctx->pc = 0x2CFB70u;
            // 0x2cfb70: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x2CFB74u;
        goto label_2cfb74;
    }
    ctx->pc = 0x2CFB6Cu;
    {
        const bool branch_taken_0x2cfb6c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFB70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFB6Cu;
            // 0x2cfb70: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfb6c) {
            ctx->pc = 0x2CFC7Cu;
            goto label_2cfc7c;
        }
    }
    ctx->pc = 0x2CFB74u;
label_2cfb74:
    // 0x2cfb74: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cfb74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2cfb78:
    // 0x2cfb78: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cfb78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cfb7c:
    // 0x2cfb7c: 0x24630c40  addiu       $v1, $v1, 0xC40
    ctx->pc = 0x2cfb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3136));
label_2cfb80:
    // 0x2cfb80: 0x24420c48  addiu       $v0, $v0, 0xC48
    ctx->pc = 0x2cfb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3144));
label_2cfb84:
    // 0x2cfb84: 0xae6300a0  sw          $v1, 0xA0($s3)
    ctx->pc = 0x2cfb84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 3));
label_2cfb88:
    // 0x2cfb88: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cfb88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2cfb8c:
    // 0x2cfb8c: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x2cfb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
label_2cfb90:
    // 0x2cfb90: 0x24630c80  addiu       $v1, $v1, 0xC80
    ctx->pc = 0x2cfb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3200));
label_2cfb94:
    // 0x2cfb94: 0x2662000c  addiu       $v0, $s3, 0xC
    ctx->pc = 0x2cfb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_2cfb98:
    // 0x2cfb98: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2cfb9c:
    if (ctx->pc == 0x2CFB9Cu) {
        ctx->pc = 0x2CFB9Cu;
            // 0x2cfb9c: 0xae630070  sw          $v1, 0x70($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 3));
        ctx->pc = 0x2CFBA0u;
        goto label_2cfba0;
    }
    ctx->pc = 0x2CFB98u;
    {
        const bool branch_taken_0x2cfb98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFB98u;
            // 0x2cfb9c: 0xae630070  sw          $v1, 0x70($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfb98) {
            ctx->pc = 0x2CFBD0u;
            goto label_2cfbd0;
        }
    }
    ctx->pc = 0x2CFBA0u;
label_2cfba0:
    // 0x2cfba0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cfba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2cfba4:
    // 0x2cfba4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cfba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cfba8:
    // 0x2cfba8: 0x24630ca0  addiu       $v1, $v1, 0xCA0
    ctx->pc = 0x2cfba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3232));
label_2cfbac:
    // 0x2cfbac: 0x24420cd8  addiu       $v0, $v0, 0xCD8
    ctx->pc = 0x2cfbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3288));
label_2cfbb0:
    // 0x2cfbb0: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x2cfbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
label_2cfbb4:
    // 0x2cfbb4: 0x2664009c  addiu       $a0, $s3, 0x9C
    ctx->pc = 0x2cfbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 156));
label_2cfbb8:
    // 0x2cfbb8: 0xae620070  sw          $v0, 0x70($s3)
    ctx->pc = 0x2cfbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 2));
label_2cfbbc:
    // 0x2cfbbc: 0xc0aed1c  jal         func_2BB470
label_2cfbc0:
    if (ctx->pc == 0x2CFBC0u) {
        ctx->pc = 0x2CFBC0u;
            // 0x2cfbc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CFBC4u;
        goto label_2cfbc4;
    }
    ctx->pc = 0x2CFBBCu;
    SET_GPR_U32(ctx, 31, 0x2CFBC4u);
    ctx->pc = 0x2CFBC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFBBCu;
            // 0x2cfbc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB470u;
    if (runtime->hasFunction(0x2BB470u)) {
        auto targetFn = runtime->lookupFunction(0x2BB470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFBC4u; }
        if (ctx->pc != 0x2CFBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB470_0x2bb470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFBC4u; }
        if (ctx->pc != 0x2CFBC4u) { return; }
    }
    ctx->pc = 0x2CFBC4u;
label_2cfbc4:
    // 0x2cfbc4: 0x2664000c  addiu       $a0, $s3, 0xC
    ctx->pc = 0x2cfbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_2cfbc8:
    // 0x2cfbc8: 0xc0b17e0  jal         func_2C5F80
label_2cfbcc:
    if (ctx->pc == 0x2CFBCCu) {
        ctx->pc = 0x2CFBCCu;
            // 0x2cfbcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CFBD0u;
        goto label_2cfbd0;
    }
    ctx->pc = 0x2CFBC8u;
    SET_GPR_U32(ctx, 31, 0x2CFBD0u);
    ctx->pc = 0x2CFBCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFBC8u;
            // 0x2cfbcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C5F80u;
    if (runtime->hasFunction(0x2C5F80u)) {
        auto targetFn = runtime->lookupFunction(0x2C5F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFBD0u; }
        if (ctx->pc != 0x2CFBD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C5F80_0x2c5f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFBD0u; }
        if (ctx->pc != 0x2CFBD0u) { return; }
    }
    ctx->pc = 0x2CFBD0u;
label_2cfbd0:
    // 0x2cfbd0: 0x52600025  beql        $s3, $zero, . + 4 + (0x25 << 2)
label_2cfbd4:
    if (ctx->pc == 0x2CFBD4u) {
        ctx->pc = 0x2CFBD4u;
            // 0x2cfbd4: 0x12143c  dsll32      $v0, $s2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
        ctx->pc = 0x2CFBD8u;
        goto label_2cfbd8;
    }
    ctx->pc = 0x2CFBD0u;
    {
        const bool branch_taken_0x2cfbd0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfbd0) {
            ctx->pc = 0x2CFBD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFBD0u;
            // 0x2cfbd4: 0x12143c  dsll32      $v0, $s2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CFC68u;
            goto label_2cfc68;
        }
    }
    ctx->pc = 0x2CFBD8u;
label_2cfbd8:
    // 0x2cfbd8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2cfbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2cfbdc:
    // 0x2cfbdc: 0x8e710008  lw          $s1, 0x8($s3)
    ctx->pc = 0x2cfbdcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2cfbe0:
    // 0x2cfbe0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2cfbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_2cfbe4:
    // 0x2cfbe4: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x2cfbe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2cfbe8:
    // 0x2cfbe8: 0x2301026  xor         $v0, $s1, $s0
    ctx->pc = 0x2cfbe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 16));
label_2cfbec:
    // 0x2cfbec: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2cfbecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2cfbf0:
    // 0x2cfbf0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2cfbf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2cfbf4:
    // 0x2cfbf4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_2cfbf8:
    if (ctx->pc == 0x2CFBF8u) {
        ctx->pc = 0x2CFBFCu;
        goto label_2cfbfc;
    }
    ctx->pc = 0x2CFBF4u;
    {
        const bool branch_taken_0x2cfbf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfbf4) {
            ctx->pc = 0x2CFC48u;
            goto label_2cfc48;
        }
    }
    ctx->pc = 0x2CFBFCu;
label_2cfbfc:
    // 0x2cfbfc: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x2cfbfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
label_2cfc00:
    // 0x2cfc00: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2cfc00u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2cfc04:
    // 0x2cfc04: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2cfc04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2cfc08:
    // 0x2cfc08: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2cfc0c:
    if (ctx->pc == 0x2CFC0Cu) {
        ctx->pc = 0x2CFC10u;
        goto label_2cfc10;
    }
    ctx->pc = 0x2CFC08u;
    {
        const bool branch_taken_0x2cfc08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfc08) {
            ctx->pc = 0x2CFC20u;
            goto label_2cfc20;
        }
    }
    ctx->pc = 0x2CFC10u;
label_2cfc10:
    // 0x2cfc10: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2cfc10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cfc14:
    // 0x2cfc14: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2cfc14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2cfc18:
    // 0x2cfc18: 0x320f809  jalr        $t9
label_2cfc1c:
    if (ctx->pc == 0x2CFC1Cu) {
        ctx->pc = 0x2CFC1Cu;
            // 0x2cfc1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2CFC20u;
        goto label_2cfc20;
    }
    ctx->pc = 0x2CFC18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CFC20u);
        ctx->pc = 0x2CFC1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFC18u;
            // 0x2cfc1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CFC20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CFC20u; }
            if (ctx->pc != 0x2CFC20u) { return; }
        }
        }
    }
    ctx->pc = 0x2CFC20u;
label_2cfc20:
    // 0x2cfc20: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x2cfc20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
label_2cfc24:
    // 0x2cfc24: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2cfc24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2cfc28:
    // 0x2cfc28: 0x24510010  addiu       $s1, $v0, 0x10
    ctx->pc = 0x2cfc28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_2cfc2c:
    // 0x2cfc2c: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x2cfc2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_2cfc30:
    // 0x2cfc30: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2cfc30u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2cfc34:
    // 0x2cfc34: 0x2221026  xor         $v0, $s1, $v0
    ctx->pc = 0x2cfc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 2));
label_2cfc38:
    // 0x2cfc38: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2cfc38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2cfc3c:
    // 0x2cfc3c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2cfc3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2cfc40:
    // 0x2cfc40: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
label_2cfc44:
    if (ctx->pc == 0x2CFC44u) {
        ctx->pc = 0x2CFC44u;
            // 0x2cfc44: 0x11103c  dsll32      $v0, $s1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
        ctx->pc = 0x2CFC48u;
        goto label_2cfc48;
    }
    ctx->pc = 0x2CFC40u;
    {
        const bool branch_taken_0x2cfc40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cfc40) {
            ctx->pc = 0x2CFC44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFC40u;
            // 0x2cfc44: 0x11103c  dsll32      $v0, $s1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CFC00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cfc00;
        }
    }
    ctx->pc = 0x2CFC48u;
label_2cfc48:
    // 0x2cfc48: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_2cfc4c:
    if (ctx->pc == 0x2CFC4Cu) {
        ctx->pc = 0x2CFC50u;
        goto label_2cfc50;
    }
    ctx->pc = 0x2CFC48u;
    {
        const bool branch_taken_0x2cfc48 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfc48) {
            ctx->pc = 0x2CFC64u;
            goto label_2cfc64;
        }
    }
    ctx->pc = 0x2CFC50u;
label_2cfc50:
    // 0x2cfc50: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_2cfc54:
    if (ctx->pc == 0x2CFC54u) {
        ctx->pc = 0x2CFC58u;
        goto label_2cfc58;
    }
    ctx->pc = 0x2CFC50u;
    {
        const bool branch_taken_0x2cfc50 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfc50) {
            ctx->pc = 0x2CFC64u;
            goto label_2cfc64;
        }
    }
    ctx->pc = 0x2CFC58u;
label_2cfc58:
    // 0x2cfc58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2cfc58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2cfc5c:
    // 0x2cfc5c: 0xc0b4b74  jal         func_2D2DD0
label_2cfc60:
    if (ctx->pc == 0x2CFC60u) {
        ctx->pc = 0x2CFC60u;
            // 0x2cfc60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CFC64u;
        goto label_2cfc64;
    }
    ctx->pc = 0x2CFC5Cu;
    SET_GPR_U32(ctx, 31, 0x2CFC64u);
    ctx->pc = 0x2CFC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFC5Cu;
            // 0x2cfc60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2DD0u;
    if (runtime->hasFunction(0x2D2DD0u)) {
        auto targetFn = runtime->lookupFunction(0x2D2DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFC64u; }
        if (ctx->pc != 0x2CFC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2DD0_0x2d2dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFC64u; }
        if (ctx->pc != 0x2CFC64u) { return; }
    }
    ctx->pc = 0x2CFC64u;
label_2cfc64:
    // 0x2cfc64: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x2cfc64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
label_2cfc68:
    // 0x2cfc68: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2cfc68u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2cfc6c:
    // 0x2cfc6c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2cfc70:
    if (ctx->pc == 0x2CFC70u) {
        ctx->pc = 0x2CFC70u;
            // 0x2cfc70: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CFC74u;
        goto label_2cfc74;
    }
    ctx->pc = 0x2CFC6Cu;
    {
        const bool branch_taken_0x2cfc6c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2cfc6c) {
            ctx->pc = 0x2CFC70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFC6Cu;
            // 0x2cfc70: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CFC80u;
            goto label_2cfc80;
        }
    }
    ctx->pc = 0x2CFC74u;
label_2cfc74:
    // 0x2cfc74: 0xc0400a8  jal         func_1002A0
label_2cfc78:
    if (ctx->pc == 0x2CFC78u) {
        ctx->pc = 0x2CFC78u;
            // 0x2cfc78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CFC7Cu;
        goto label_2cfc7c;
    }
    ctx->pc = 0x2CFC74u;
    SET_GPR_U32(ctx, 31, 0x2CFC7Cu);
    ctx->pc = 0x2CFC78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFC74u;
            // 0x2cfc78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFC7Cu; }
        if (ctx->pc != 0x2CFC7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFC7Cu; }
        if (ctx->pc != 0x2CFC7Cu) { return; }
    }
    ctx->pc = 0x2CFC7Cu;
label_2cfc7c:
    // 0x2cfc7c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2cfc7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2cfc80:
    // 0x2cfc80: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2cfc80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2cfc84:
    // 0x2cfc84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2cfc84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2cfc88:
    // 0x2cfc88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2cfc88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2cfc8c:
    // 0x2cfc8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cfc8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cfc90:
    // 0x2cfc90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cfc90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2cfc94:
    // 0x2cfc94: 0x3e00008  jr          $ra
label_2cfc98:
    if (ctx->pc == 0x2CFC98u) {
        ctx->pc = 0x2CFC98u;
            // 0x2cfc98: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2CFC9Cu;
        goto label_2cfc9c;
    }
    ctx->pc = 0x2CFC94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFC94u;
            // 0x2cfc98: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CFC9Cu;
label_2cfc9c:
    // 0x2cfc9c: 0x0  nop
    ctx->pc = 0x2cfc9cu;
    // NOP
label_2cfca0:
    // 0x2cfca0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2cfca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2cfca4:
    // 0x2cfca4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2cfca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2cfca8:
    // 0x2cfca8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2cfca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2cfcac:
    // 0x2cfcac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cfcacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2cfcb0:
    // 0x2cfcb0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2cfcb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cfcb4:
    // 0x2cfcb4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cfcb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2cfcb8:
    // 0x2cfcb8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2cfcb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2cfcbc:
    // 0x2cfcbc: 0x12600043  beqz        $s3, . + 4 + (0x43 << 2)
label_2cfcc0:
    if (ctx->pc == 0x2CFCC0u) {
        ctx->pc = 0x2CFCC0u;
            // 0x2cfcc0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x2CFCC4u;
        goto label_2cfcc4;
    }
    ctx->pc = 0x2CFCBCu;
    {
        const bool branch_taken_0x2cfcbc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFCC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFCBCu;
            // 0x2cfcc0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfcbc) {
            ctx->pc = 0x2CFDCCu;
            goto label_2cfdcc;
        }
    }
    ctx->pc = 0x2CFCC4u;
label_2cfcc4:
    // 0x2cfcc4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cfcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2cfcc8:
    // 0x2cfcc8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cfcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cfccc:
    // 0x2cfccc: 0x24630d50  addiu       $v1, $v1, 0xD50
    ctx->pc = 0x2cfcccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3408));
label_2cfcd0:
    // 0x2cfcd0: 0x24420d58  addiu       $v0, $v0, 0xD58
    ctx->pc = 0x2cfcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3416));
label_2cfcd4:
    // 0x2cfcd4: 0xae6300a0  sw          $v1, 0xA0($s3)
    ctx->pc = 0x2cfcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 3));
label_2cfcd8:
    // 0x2cfcd8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cfcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2cfcdc:
    // 0x2cfcdc: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x2cfcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
label_2cfce0:
    // 0x2cfce0: 0x24630d90  addiu       $v1, $v1, 0xD90
    ctx->pc = 0x2cfce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3472));
label_2cfce4:
    // 0x2cfce4: 0x2662000c  addiu       $v0, $s3, 0xC
    ctx->pc = 0x2cfce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_2cfce8:
    // 0x2cfce8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2cfcec:
    if (ctx->pc == 0x2CFCECu) {
        ctx->pc = 0x2CFCECu;
            // 0x2cfcec: 0xae630070  sw          $v1, 0x70($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 3));
        ctx->pc = 0x2CFCF0u;
        goto label_2cfcf0;
    }
    ctx->pc = 0x2CFCE8u;
    {
        const bool branch_taken_0x2cfce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFCECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFCE8u;
            // 0x2cfcec: 0xae630070  sw          $v1, 0x70($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfce8) {
            ctx->pc = 0x2CFD20u;
            goto label_2cfd20;
        }
    }
    ctx->pc = 0x2CFCF0u;
label_2cfcf0:
    // 0x2cfcf0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cfcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2cfcf4:
    // 0x2cfcf4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cfcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cfcf8:
    // 0x2cfcf8: 0x24630db0  addiu       $v1, $v1, 0xDB0
    ctx->pc = 0x2cfcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3504));
label_2cfcfc:
    // 0x2cfcfc: 0x24420de8  addiu       $v0, $v0, 0xDE8
    ctx->pc = 0x2cfcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3560));
label_2cfd00:
    // 0x2cfd00: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x2cfd00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
label_2cfd04:
    // 0x2cfd04: 0x2664009c  addiu       $a0, $s3, 0x9C
    ctx->pc = 0x2cfd04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 156));
label_2cfd08:
    // 0x2cfd08: 0xae620070  sw          $v0, 0x70($s3)
    ctx->pc = 0x2cfd08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 2));
label_2cfd0c:
    // 0x2cfd0c: 0xc0aed1c  jal         func_2BB470
label_2cfd10:
    if (ctx->pc == 0x2CFD10u) {
        ctx->pc = 0x2CFD10u;
            // 0x2cfd10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CFD14u;
        goto label_2cfd14;
    }
    ctx->pc = 0x2CFD0Cu;
    SET_GPR_U32(ctx, 31, 0x2CFD14u);
    ctx->pc = 0x2CFD10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFD0Cu;
            // 0x2cfd10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB470u;
    if (runtime->hasFunction(0x2BB470u)) {
        auto targetFn = runtime->lookupFunction(0x2BB470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFD14u; }
        if (ctx->pc != 0x2CFD14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB470_0x2bb470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFD14u; }
        if (ctx->pc != 0x2CFD14u) { return; }
    }
    ctx->pc = 0x2CFD14u;
label_2cfd14:
    // 0x2cfd14: 0x2664000c  addiu       $a0, $s3, 0xC
    ctx->pc = 0x2cfd14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_2cfd18:
    // 0x2cfd18: 0xc0b15f4  jal         func_2C57D0
label_2cfd1c:
    if (ctx->pc == 0x2CFD1Cu) {
        ctx->pc = 0x2CFD1Cu;
            // 0x2cfd1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CFD20u;
        goto label_2cfd20;
    }
    ctx->pc = 0x2CFD18u;
    SET_GPR_U32(ctx, 31, 0x2CFD20u);
    ctx->pc = 0x2CFD1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFD18u;
            // 0x2cfd1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C57D0u;
    if (runtime->hasFunction(0x2C57D0u)) {
        auto targetFn = runtime->lookupFunction(0x2C57D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFD20u; }
        if (ctx->pc != 0x2CFD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C57D0_0x2c57d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFD20u; }
        if (ctx->pc != 0x2CFD20u) { return; }
    }
    ctx->pc = 0x2CFD20u;
label_2cfd20:
    // 0x2cfd20: 0x52600025  beql        $s3, $zero, . + 4 + (0x25 << 2)
label_2cfd24:
    if (ctx->pc == 0x2CFD24u) {
        ctx->pc = 0x2CFD24u;
            // 0x2cfd24: 0x12143c  dsll32      $v0, $s2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
        ctx->pc = 0x2CFD28u;
        goto label_2cfd28;
    }
    ctx->pc = 0x2CFD20u;
    {
        const bool branch_taken_0x2cfd20 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfd20) {
            ctx->pc = 0x2CFD24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFD20u;
            // 0x2cfd24: 0x12143c  dsll32      $v0, $s2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CFDB8u;
            goto label_2cfdb8;
        }
    }
    ctx->pc = 0x2CFD28u;
label_2cfd28:
    // 0x2cfd28: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2cfd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2cfd2c:
    // 0x2cfd2c: 0x8e710008  lw          $s1, 0x8($s3)
    ctx->pc = 0x2cfd2cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2cfd30:
    // 0x2cfd30: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2cfd30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_2cfd34:
    // 0x2cfd34: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x2cfd34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2cfd38:
    // 0x2cfd38: 0x2301026  xor         $v0, $s1, $s0
    ctx->pc = 0x2cfd38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 16));
label_2cfd3c:
    // 0x2cfd3c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2cfd3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2cfd40:
    // 0x2cfd40: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2cfd40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2cfd44:
    // 0x2cfd44: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_2cfd48:
    if (ctx->pc == 0x2CFD48u) {
        ctx->pc = 0x2CFD4Cu;
        goto label_2cfd4c;
    }
    ctx->pc = 0x2CFD44u;
    {
        const bool branch_taken_0x2cfd44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfd44) {
            ctx->pc = 0x2CFD98u;
            goto label_2cfd98;
        }
    }
    ctx->pc = 0x2CFD4Cu;
label_2cfd4c:
    // 0x2cfd4c: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x2cfd4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
label_2cfd50:
    // 0x2cfd50: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2cfd50u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2cfd54:
    // 0x2cfd54: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2cfd54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2cfd58:
    // 0x2cfd58: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2cfd5c:
    if (ctx->pc == 0x2CFD5Cu) {
        ctx->pc = 0x2CFD60u;
        goto label_2cfd60;
    }
    ctx->pc = 0x2CFD58u;
    {
        const bool branch_taken_0x2cfd58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfd58) {
            ctx->pc = 0x2CFD70u;
            goto label_2cfd70;
        }
    }
    ctx->pc = 0x2CFD60u;
label_2cfd60:
    // 0x2cfd60: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2cfd60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cfd64:
    // 0x2cfd64: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2cfd64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2cfd68:
    // 0x2cfd68: 0x320f809  jalr        $t9
label_2cfd6c:
    if (ctx->pc == 0x2CFD6Cu) {
        ctx->pc = 0x2CFD6Cu;
            // 0x2cfd6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2CFD70u;
        goto label_2cfd70;
    }
    ctx->pc = 0x2CFD68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CFD70u);
        ctx->pc = 0x2CFD6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFD68u;
            // 0x2cfd6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CFD70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CFD70u; }
            if (ctx->pc != 0x2CFD70u) { return; }
        }
        }
    }
    ctx->pc = 0x2CFD70u;
label_2cfd70:
    // 0x2cfd70: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x2cfd70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
label_2cfd74:
    // 0x2cfd74: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2cfd74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2cfd78:
    // 0x2cfd78: 0x24510010  addiu       $s1, $v0, 0x10
    ctx->pc = 0x2cfd78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_2cfd7c:
    // 0x2cfd7c: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x2cfd7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_2cfd80:
    // 0x2cfd80: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2cfd80u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2cfd84:
    // 0x2cfd84: 0x2221026  xor         $v0, $s1, $v0
    ctx->pc = 0x2cfd84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 2));
label_2cfd88:
    // 0x2cfd88: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2cfd88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2cfd8c:
    // 0x2cfd8c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2cfd8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2cfd90:
    // 0x2cfd90: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
label_2cfd94:
    if (ctx->pc == 0x2CFD94u) {
        ctx->pc = 0x2CFD94u;
            // 0x2cfd94: 0x11103c  dsll32      $v0, $s1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
        ctx->pc = 0x2CFD98u;
        goto label_2cfd98;
    }
    ctx->pc = 0x2CFD90u;
    {
        const bool branch_taken_0x2cfd90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cfd90) {
            ctx->pc = 0x2CFD94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFD90u;
            // 0x2cfd94: 0x11103c  dsll32      $v0, $s1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CFD50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cfd50;
        }
    }
    ctx->pc = 0x2CFD98u;
label_2cfd98:
    // 0x2cfd98: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_2cfd9c:
    if (ctx->pc == 0x2CFD9Cu) {
        ctx->pc = 0x2CFDA0u;
        goto label_2cfda0;
    }
    ctx->pc = 0x2CFD98u;
    {
        const bool branch_taken_0x2cfd98 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfd98) {
            ctx->pc = 0x2CFDB4u;
            goto label_2cfdb4;
        }
    }
    ctx->pc = 0x2CFDA0u;
label_2cfda0:
    // 0x2cfda0: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_2cfda4:
    if (ctx->pc == 0x2CFDA4u) {
        ctx->pc = 0x2CFDA8u;
        goto label_2cfda8;
    }
    ctx->pc = 0x2CFDA0u;
    {
        const bool branch_taken_0x2cfda0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfda0) {
            ctx->pc = 0x2CFDB4u;
            goto label_2cfdb4;
        }
    }
    ctx->pc = 0x2CFDA8u;
label_2cfda8:
    // 0x2cfda8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2cfda8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2cfdac:
    // 0x2cfdac: 0xc0b4b74  jal         func_2D2DD0
label_2cfdb0:
    if (ctx->pc == 0x2CFDB0u) {
        ctx->pc = 0x2CFDB0u;
            // 0x2cfdb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CFDB4u;
        goto label_2cfdb4;
    }
    ctx->pc = 0x2CFDACu;
    SET_GPR_U32(ctx, 31, 0x2CFDB4u);
    ctx->pc = 0x2CFDB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFDACu;
            // 0x2cfdb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2DD0u;
    if (runtime->hasFunction(0x2D2DD0u)) {
        auto targetFn = runtime->lookupFunction(0x2D2DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFDB4u; }
        if (ctx->pc != 0x2CFDB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2DD0_0x2d2dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFDB4u; }
        if (ctx->pc != 0x2CFDB4u) { return; }
    }
    ctx->pc = 0x2CFDB4u;
label_2cfdb4:
    // 0x2cfdb4: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x2cfdb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
label_2cfdb8:
    // 0x2cfdb8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2cfdb8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2cfdbc:
    // 0x2cfdbc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2cfdc0:
    if (ctx->pc == 0x2CFDC0u) {
        ctx->pc = 0x2CFDC0u;
            // 0x2cfdc0: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CFDC4u;
        goto label_2cfdc4;
    }
    ctx->pc = 0x2CFDBCu;
    {
        const bool branch_taken_0x2cfdbc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2cfdbc) {
            ctx->pc = 0x2CFDC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFDBCu;
            // 0x2cfdc0: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CFDD0u;
            goto label_2cfdd0;
        }
    }
    ctx->pc = 0x2CFDC4u;
label_2cfdc4:
    // 0x2cfdc4: 0xc0400a8  jal         func_1002A0
label_2cfdc8:
    if (ctx->pc == 0x2CFDC8u) {
        ctx->pc = 0x2CFDC8u;
            // 0x2cfdc8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CFDCCu;
        goto label_2cfdcc;
    }
    ctx->pc = 0x2CFDC4u;
    SET_GPR_U32(ctx, 31, 0x2CFDCCu);
    ctx->pc = 0x2CFDC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFDC4u;
            // 0x2cfdc8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFDCCu; }
        if (ctx->pc != 0x2CFDCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFDCCu; }
        if (ctx->pc != 0x2CFDCCu) { return; }
    }
    ctx->pc = 0x2CFDCCu;
label_2cfdcc:
    // 0x2cfdcc: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2cfdccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2cfdd0:
    // 0x2cfdd0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2cfdd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2cfdd4:
    // 0x2cfdd4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2cfdd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2cfdd8:
    // 0x2cfdd8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2cfdd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2cfddc:
    // 0x2cfddc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cfddcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cfde0:
    // 0x2cfde0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cfde0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2cfde4:
    // 0x2cfde4: 0x3e00008  jr          $ra
label_2cfde8:
    if (ctx->pc == 0x2CFDE8u) {
        ctx->pc = 0x2CFDE8u;
            // 0x2cfde8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2CFDECu;
        goto label_2cfdec;
    }
    ctx->pc = 0x2CFDE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFDE4u;
            // 0x2cfde8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CFDECu;
label_2cfdec:
    // 0x2cfdec: 0x0  nop
    ctx->pc = 0x2cfdecu;
    // NOP
label_2cfdf0:
    // 0x2cfdf0: 0x3e00008  jr          $ra
label_2cfdf4:
    if (ctx->pc == 0x2CFDF4u) {
        ctx->pc = 0x2CFDF4u;
            // 0x2cfdf4: 0x24020837  addiu       $v0, $zero, 0x837 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2103));
        ctx->pc = 0x2CFDF8u;
        goto label_2cfdf8;
    }
    ctx->pc = 0x2CFDF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFDF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFDF0u;
            // 0x2cfdf4: 0x24020837  addiu       $v0, $zero, 0x837 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2103));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CFDF8u;
label_2cfdf8:
    // 0x2cfdf8: 0x0  nop
    ctx->pc = 0x2cfdf8u;
    // NOP
label_2cfdfc:
    // 0x2cfdfc: 0x0  nop
    ctx->pc = 0x2cfdfcu;
    // NOP
label_2cfe00:
    // 0x2cfe00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cfe00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2cfe04:
    // 0x2cfe04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cfe04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2cfe08:
    // 0x2cfe08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cfe08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2cfe0c:
    // 0x2cfe0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cfe0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cfe10:
    // 0x2cfe10: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x2cfe10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_2cfe14:
    // 0x2cfe14: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_2cfe18:
    if (ctx->pc == 0x2CFE18u) {
        ctx->pc = 0x2CFE18u;
            // 0x2cfe18: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x2CFE1Cu;
        goto label_2cfe1c;
    }
    ctx->pc = 0x2CFE14u;
    {
        const bool branch_taken_0x2cfe14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfe14) {
            ctx->pc = 0x2CFE18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFE14u;
            // 0x2cfe18: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CFE3Cu;
            goto label_2cfe3c;
        }
    }
    ctx->pc = 0x2CFE1Cu;
label_2cfe1c:
    // 0x2cfe1c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2cfe20:
    if (ctx->pc == 0x2CFE20u) {
        ctx->pc = 0x2CFE20u;
            // 0x2cfe20: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x2CFE24u;
        goto label_2cfe24;
    }
    ctx->pc = 0x2CFE1Cu;
    {
        const bool branch_taken_0x2cfe1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfe1c) {
            ctx->pc = 0x2CFE20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFE1Cu;
            // 0x2cfe20: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CFE38u;
            goto label_2cfe38;
        }
    }
    ctx->pc = 0x2CFE24u;
label_2cfe24:
    // 0x2cfe24: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2cfe24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cfe28:
    // 0x2cfe28: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2cfe28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2cfe2c:
    // 0x2cfe2c: 0x320f809  jalr        $t9
label_2cfe30:
    if (ctx->pc == 0x2CFE30u) {
        ctx->pc = 0x2CFE30u;
            // 0x2cfe30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2CFE34u;
        goto label_2cfe34;
    }
    ctx->pc = 0x2CFE2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CFE34u);
        ctx->pc = 0x2CFE30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFE2Cu;
            // 0x2cfe30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CFE34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CFE34u; }
            if (ctx->pc != 0x2CFE34u) { return; }
        }
        }
    }
    ctx->pc = 0x2CFE34u;
label_2cfe34:
    // 0x2cfe34: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x2cfe34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_2cfe38:
    // 0x2cfe38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cfe38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2cfe3c:
    // 0x2cfe3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cfe3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2cfe40:
    // 0x2cfe40: 0x3e00008  jr          $ra
label_2cfe44:
    if (ctx->pc == 0x2CFE44u) {
        ctx->pc = 0x2CFE44u;
            // 0x2cfe44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2CFE48u;
        goto label_2cfe48;
    }
    ctx->pc = 0x2CFE40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFE40u;
            // 0x2cfe44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CFE48u;
label_2cfe48:
    // 0x2cfe48: 0x0  nop
    ctx->pc = 0x2cfe48u;
    // NOP
label_2cfe4c:
    // 0x2cfe4c: 0x0  nop
    ctx->pc = 0x2cfe4cu;
    // NOP
label_2cfe50:
    // 0x2cfe50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2cfe50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2cfe54:
    // 0x2cfe54: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2cfe54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2cfe58:
    // 0x2cfe58: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2cfe58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2cfe5c:
    // 0x2cfe5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cfe5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2cfe60:
    // 0x2cfe60: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2cfe60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cfe64:
    // 0x2cfe64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cfe64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2cfe68:
    // 0x2cfe68: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2cfe68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2cfe6c:
    // 0x2cfe6c: 0x12600043  beqz        $s3, . + 4 + (0x43 << 2)
label_2cfe70:
    if (ctx->pc == 0x2CFE70u) {
        ctx->pc = 0x2CFE70u;
            // 0x2cfe70: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x2CFE74u;
        goto label_2cfe74;
    }
    ctx->pc = 0x2CFE6Cu;
    {
        const bool branch_taken_0x2cfe6c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFE6Cu;
            // 0x2cfe70: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfe6c) {
            ctx->pc = 0x2CFF7Cu;
            goto label_2cff7c;
        }
    }
    ctx->pc = 0x2CFE74u;
label_2cfe74:
    // 0x2cfe74: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cfe74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2cfe78:
    // 0x2cfe78: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cfe78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cfe7c:
    // 0x2cfe7c: 0x24630f60  addiu       $v1, $v1, 0xF60
    ctx->pc = 0x2cfe7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3936));
label_2cfe80:
    // 0x2cfe80: 0x24420f68  addiu       $v0, $v0, 0xF68
    ctx->pc = 0x2cfe80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3944));
label_2cfe84:
    // 0x2cfe84: 0xae6300a0  sw          $v1, 0xA0($s3)
    ctx->pc = 0x2cfe84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 3));
label_2cfe88:
    // 0x2cfe88: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cfe88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2cfe8c:
    // 0x2cfe8c: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x2cfe8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
label_2cfe90:
    // 0x2cfe90: 0x24630fa0  addiu       $v1, $v1, 0xFA0
    ctx->pc = 0x2cfe90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4000));
label_2cfe94:
    // 0x2cfe94: 0x2662000c  addiu       $v0, $s3, 0xC
    ctx->pc = 0x2cfe94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_2cfe98:
    // 0x2cfe98: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2cfe9c:
    if (ctx->pc == 0x2CFE9Cu) {
        ctx->pc = 0x2CFE9Cu;
            // 0x2cfe9c: 0xae630070  sw          $v1, 0x70($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 3));
        ctx->pc = 0x2CFEA0u;
        goto label_2cfea0;
    }
    ctx->pc = 0x2CFE98u;
    {
        const bool branch_taken_0x2cfe98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFE98u;
            // 0x2cfe9c: 0xae630070  sw          $v1, 0x70($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfe98) {
            ctx->pc = 0x2CFED0u;
            goto label_2cfed0;
        }
    }
    ctx->pc = 0x2CFEA0u;
label_2cfea0:
    // 0x2cfea0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cfea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2cfea4:
    // 0x2cfea4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cfea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cfea8:
    // 0x2cfea8: 0x24630fc0  addiu       $v1, $v1, 0xFC0
    ctx->pc = 0x2cfea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4032));
label_2cfeac:
    // 0x2cfeac: 0x24420ff8  addiu       $v0, $v0, 0xFF8
    ctx->pc = 0x2cfeacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4088));
label_2cfeb0:
    // 0x2cfeb0: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x2cfeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
label_2cfeb4:
    // 0x2cfeb4: 0x2664009c  addiu       $a0, $s3, 0x9C
    ctx->pc = 0x2cfeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 156));
label_2cfeb8:
    // 0x2cfeb8: 0xae620070  sw          $v0, 0x70($s3)
    ctx->pc = 0x2cfeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 2));
label_2cfebc:
    // 0x2cfebc: 0xc0aed1c  jal         func_2BB470
label_2cfec0:
    if (ctx->pc == 0x2CFEC0u) {
        ctx->pc = 0x2CFEC0u;
            // 0x2cfec0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CFEC4u;
        goto label_2cfec4;
    }
    ctx->pc = 0x2CFEBCu;
    SET_GPR_U32(ctx, 31, 0x2CFEC4u);
    ctx->pc = 0x2CFEC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFEBCu;
            // 0x2cfec0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB470u;
    if (runtime->hasFunction(0x2BB470u)) {
        auto targetFn = runtime->lookupFunction(0x2BB470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFEC4u; }
        if (ctx->pc != 0x2CFEC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB470_0x2bb470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFEC4u; }
        if (ctx->pc != 0x2CFEC4u) { return; }
    }
    ctx->pc = 0x2CFEC4u;
label_2cfec4:
    // 0x2cfec4: 0x2664000c  addiu       $a0, $s3, 0xC
    ctx->pc = 0x2cfec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_2cfec8:
    // 0x2cfec8: 0xc0b1250  jal         func_2C4940
label_2cfecc:
    if (ctx->pc == 0x2CFECCu) {
        ctx->pc = 0x2CFECCu;
            // 0x2cfecc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CFED0u;
        goto label_2cfed0;
    }
    ctx->pc = 0x2CFEC8u;
    SET_GPR_U32(ctx, 31, 0x2CFED0u);
    ctx->pc = 0x2CFECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFEC8u;
            // 0x2cfecc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4940u;
    if (runtime->hasFunction(0x2C4940u)) {
        auto targetFn = runtime->lookupFunction(0x2C4940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFED0u; }
        if (ctx->pc != 0x2CFED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C4940_0x2c4940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFED0u; }
        if (ctx->pc != 0x2CFED0u) { return; }
    }
    ctx->pc = 0x2CFED0u;
label_2cfed0:
    // 0x2cfed0: 0x52600025  beql        $s3, $zero, . + 4 + (0x25 << 2)
label_2cfed4:
    if (ctx->pc == 0x2CFED4u) {
        ctx->pc = 0x2CFED4u;
            // 0x2cfed4: 0x12143c  dsll32      $v0, $s2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
        ctx->pc = 0x2CFED8u;
        goto label_2cfed8;
    }
    ctx->pc = 0x2CFED0u;
    {
        const bool branch_taken_0x2cfed0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfed0) {
            ctx->pc = 0x2CFED4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFED0u;
            // 0x2cfed4: 0x12143c  dsll32      $v0, $s2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CFF68u;
            goto label_2cff68;
        }
    }
    ctx->pc = 0x2CFED8u;
label_2cfed8:
    // 0x2cfed8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2cfed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2cfedc:
    // 0x2cfedc: 0x8e710008  lw          $s1, 0x8($s3)
    ctx->pc = 0x2cfedcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2cfee0:
    // 0x2cfee0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2cfee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_2cfee4:
    // 0x2cfee4: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x2cfee4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2cfee8:
    // 0x2cfee8: 0x2301026  xor         $v0, $s1, $s0
    ctx->pc = 0x2cfee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 16));
label_2cfeec:
    // 0x2cfeec: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2cfeecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2cfef0:
    // 0x2cfef0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2cfef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2cfef4:
    // 0x2cfef4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_2cfef8:
    if (ctx->pc == 0x2CFEF8u) {
        ctx->pc = 0x2CFEFCu;
        goto label_2cfefc;
    }
    ctx->pc = 0x2CFEF4u;
    {
        const bool branch_taken_0x2cfef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfef4) {
            ctx->pc = 0x2CFF48u;
            goto label_2cff48;
        }
    }
    ctx->pc = 0x2CFEFCu;
label_2cfefc:
    // 0x2cfefc: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x2cfefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
label_2cff00:
    // 0x2cff00: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2cff00u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2cff04:
    // 0x2cff04: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2cff04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2cff08:
    // 0x2cff08: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2cff0c:
    if (ctx->pc == 0x2CFF0Cu) {
        ctx->pc = 0x2CFF10u;
        goto label_2cff10;
    }
    ctx->pc = 0x2CFF08u;
    {
        const bool branch_taken_0x2cff08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cff08) {
            ctx->pc = 0x2CFF20u;
            goto label_2cff20;
        }
    }
    ctx->pc = 0x2CFF10u;
label_2cff10:
    // 0x2cff10: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2cff10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cff14:
    // 0x2cff14: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2cff14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2cff18:
    // 0x2cff18: 0x320f809  jalr        $t9
label_2cff1c:
    if (ctx->pc == 0x2CFF1Cu) {
        ctx->pc = 0x2CFF1Cu;
            // 0x2cff1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2CFF20u;
        goto label_2cff20;
    }
    ctx->pc = 0x2CFF18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CFF20u);
        ctx->pc = 0x2CFF1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFF18u;
            // 0x2cff1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CFF20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CFF20u; }
            if (ctx->pc != 0x2CFF20u) { return; }
        }
        }
    }
    ctx->pc = 0x2CFF20u;
label_2cff20:
    // 0x2cff20: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x2cff20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
label_2cff24:
    // 0x2cff24: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2cff24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2cff28:
    // 0x2cff28: 0x24510010  addiu       $s1, $v0, 0x10
    ctx->pc = 0x2cff28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_2cff2c:
    // 0x2cff2c: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x2cff2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_2cff30:
    // 0x2cff30: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2cff30u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2cff34:
    // 0x2cff34: 0x2221026  xor         $v0, $s1, $v0
    ctx->pc = 0x2cff34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 2));
label_2cff38:
    // 0x2cff38: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2cff38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2cff3c:
    // 0x2cff3c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2cff3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2cff40:
    // 0x2cff40: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
label_2cff44:
    if (ctx->pc == 0x2CFF44u) {
        ctx->pc = 0x2CFF44u;
            // 0x2cff44: 0x11103c  dsll32      $v0, $s1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
        ctx->pc = 0x2CFF48u;
        goto label_2cff48;
    }
    ctx->pc = 0x2CFF40u;
    {
        const bool branch_taken_0x2cff40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cff40) {
            ctx->pc = 0x2CFF44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFF40u;
            // 0x2cff44: 0x11103c  dsll32      $v0, $s1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CFF00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cff00;
        }
    }
    ctx->pc = 0x2CFF48u;
label_2cff48:
    // 0x2cff48: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_2cff4c:
    if (ctx->pc == 0x2CFF4Cu) {
        ctx->pc = 0x2CFF50u;
        goto label_2cff50;
    }
    ctx->pc = 0x2CFF48u;
    {
        const bool branch_taken_0x2cff48 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cff48) {
            ctx->pc = 0x2CFF64u;
            goto label_2cff64;
        }
    }
    ctx->pc = 0x2CFF50u;
label_2cff50:
    // 0x2cff50: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_2cff54:
    if (ctx->pc == 0x2CFF54u) {
        ctx->pc = 0x2CFF58u;
        goto label_2cff58;
    }
    ctx->pc = 0x2CFF50u;
    {
        const bool branch_taken_0x2cff50 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cff50) {
            ctx->pc = 0x2CFF64u;
            goto label_2cff64;
        }
    }
    ctx->pc = 0x2CFF58u;
label_2cff58:
    // 0x2cff58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2cff58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2cff5c:
    // 0x2cff5c: 0xc0b4b74  jal         func_2D2DD0
label_2cff60:
    if (ctx->pc == 0x2CFF60u) {
        ctx->pc = 0x2CFF60u;
            // 0x2cff60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CFF64u;
        goto label_2cff64;
    }
    ctx->pc = 0x2CFF5Cu;
    SET_GPR_U32(ctx, 31, 0x2CFF64u);
    ctx->pc = 0x2CFF60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFF5Cu;
            // 0x2cff60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2DD0u;
    if (runtime->hasFunction(0x2D2DD0u)) {
        auto targetFn = runtime->lookupFunction(0x2D2DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFF64u; }
        if (ctx->pc != 0x2CFF64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2DD0_0x2d2dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFF64u; }
        if (ctx->pc != 0x2CFF64u) { return; }
    }
    ctx->pc = 0x2CFF64u;
label_2cff64:
    // 0x2cff64: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x2cff64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
label_2cff68:
    // 0x2cff68: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2cff68u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2cff6c:
    // 0x2cff6c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2cff70:
    if (ctx->pc == 0x2CFF70u) {
        ctx->pc = 0x2CFF70u;
            // 0x2cff70: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CFF74u;
        goto label_2cff74;
    }
    ctx->pc = 0x2CFF6Cu;
    {
        const bool branch_taken_0x2cff6c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2cff6c) {
            ctx->pc = 0x2CFF70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFF6Cu;
            // 0x2cff70: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CFF80u;
            goto label_2cff80;
        }
    }
    ctx->pc = 0x2CFF74u;
label_2cff74:
    // 0x2cff74: 0xc0400a8  jal         func_1002A0
label_2cff78:
    if (ctx->pc == 0x2CFF78u) {
        ctx->pc = 0x2CFF78u;
            // 0x2cff78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CFF7Cu;
        goto label_2cff7c;
    }
    ctx->pc = 0x2CFF74u;
    SET_GPR_U32(ctx, 31, 0x2CFF7Cu);
    ctx->pc = 0x2CFF78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFF74u;
            // 0x2cff78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFF7Cu; }
        if (ctx->pc != 0x2CFF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFF7Cu; }
        if (ctx->pc != 0x2CFF7Cu) { return; }
    }
    ctx->pc = 0x2CFF7Cu;
label_2cff7c:
    // 0x2cff7c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2cff7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2cff80:
    // 0x2cff80: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2cff80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2cff84:
    // 0x2cff84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2cff84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2cff88:
    // 0x2cff88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2cff88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2cff8c:
    // 0x2cff8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cff8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cff90:
    // 0x2cff90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cff90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2cff94:
    // 0x2cff94: 0x3e00008  jr          $ra
label_2cff98:
    if (ctx->pc == 0x2CFF98u) {
        ctx->pc = 0x2CFF98u;
            // 0x2cff98: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2CFF9Cu;
        goto label_2cff9c;
    }
    ctx->pc = 0x2CFF94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFF98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFF94u;
            // 0x2cff98: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CFF9Cu;
label_2cff9c:
    // 0x2cff9c: 0x0  nop
    ctx->pc = 0x2cff9cu;
    // NOP
label_2cffa0:
    // 0x2cffa0: 0x3e00008  jr          $ra
label_2cffa4:
    if (ctx->pc == 0x2CFFA4u) {
        ctx->pc = 0x2CFFA4u;
            // 0x2cffa4: 0x24020839  addiu       $v0, $zero, 0x839 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2105));
        ctx->pc = 0x2CFFA8u;
        goto label_2cffa8;
    }
    ctx->pc = 0x2CFFA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFFA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFFA0u;
            // 0x2cffa4: 0x24020839  addiu       $v0, $zero, 0x839 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2105));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CFFA8u;
label_2cffa8:
    // 0x2cffa8: 0x0  nop
    ctx->pc = 0x2cffa8u;
    // NOP
label_2cffac:
    // 0x2cffac: 0x0  nop
    ctx->pc = 0x2cffacu;
    // NOP
label_2cffb0:
    // 0x2cffb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cffb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2cffb4:
    // 0x2cffb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cffb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2cffb8:
    // 0x2cffb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cffb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2cffbc:
    // 0x2cffbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cffbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2cffc0:
    // 0x2cffc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cffc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cffc4:
    // 0x2cffc4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_2cffc8:
    if (ctx->pc == 0x2CFFC8u) {
        ctx->pc = 0x2CFFC8u;
            // 0x2cffc8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CFFCCu;
        goto label_2cffcc;
    }
    ctx->pc = 0x2CFFC4u;
    {
        const bool branch_taken_0x2cffc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFFC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFFC4u;
            // 0x2cffc8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cffc4) {
            ctx->pc = 0x2D0020u;
            goto label_2d0020;
        }
    }
    ctx->pc = 0x2CFFCCu;
label_2cffcc:
    // 0x2cffcc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cffccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2cffd0:
    // 0x2cffd0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cffd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cffd4:
    // 0x2cffd4: 0x246311d0  addiu       $v1, $v1, 0x11D0
    ctx->pc = 0x2cffd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4560));
label_2cffd8:
    // 0x2cffd8: 0x24421208  addiu       $v0, $v0, 0x1208
    ctx->pc = 0x2cffd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4616));
label_2cffdc:
    // 0x2cffdc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2cffdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2cffe0:
    // 0x2cffe0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_2cffe4:
    if (ctx->pc == 0x2CFFE4u) {
        ctx->pc = 0x2CFFE4u;
            // 0x2cffe4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x2CFFE8u;
        goto label_2cffe8;
    }
    ctx->pc = 0x2CFFE0u;
    {
        const bool branch_taken_0x2cffe0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFFE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFFE0u;
            // 0x2cffe4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cffe0) {
            ctx->pc = 0x2D0008u;
            goto label_2d0008;
        }
    }
    ctx->pc = 0x2CFFE8u;
label_2cffe8:
    // 0x2cffe8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cffe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2cffec:
    // 0x2cffec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cffecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cfff0:
    // 0x2cfff0: 0x24631220  addiu       $v1, $v1, 0x1220
    ctx->pc = 0x2cfff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4640));
label_2cfff4:
    // 0x2cfff4: 0x24421258  addiu       $v0, $v0, 0x1258
    ctx->pc = 0x2cfff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4696));
label_2cfff8:
    // 0x2cfff8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2cfff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2cfffc:
    // 0x2cfffc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cfffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d0000:
    // 0x2d0000: 0xc0b0d38  jal         func_2C34E0
label_2d0004:
    if (ctx->pc == 0x2D0004u) {
        ctx->pc = 0x2D0004u;
            // 0x2d0004: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x2D0008u;
        goto label_2d0008;
    }
    ctx->pc = 0x2D0000u;
    SET_GPR_U32(ctx, 31, 0x2D0008u);
    ctx->pc = 0x2D0004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0000u;
            // 0x2d0004: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C34E0u;
    if (runtime->hasFunction(0x2C34E0u)) {
        auto targetFn = runtime->lookupFunction(0x2C34E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0008u; }
        if (ctx->pc != 0x2D0008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C34E0_0x2c34e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0008u; }
        if (ctx->pc != 0x2D0008u) { return; }
    }
    ctx->pc = 0x2D0008u;
label_2d0008:
    // 0x2d0008: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2d0008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_2d000c:
    // 0x2d000c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d000cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2d0010:
    // 0x2d0010: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2d0014:
    if (ctx->pc == 0x2D0014u) {
        ctx->pc = 0x2D0014u;
            // 0x2d0014: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D0018u;
        goto label_2d0018;
    }
    ctx->pc = 0x2D0010u;
    {
        const bool branch_taken_0x2d0010 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d0010) {
            ctx->pc = 0x2D0014u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0010u;
            // 0x2d0014: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D0024u;
            goto label_2d0024;
        }
    }
    ctx->pc = 0x2D0018u;
label_2d0018:
    // 0x2d0018: 0xc0400a8  jal         func_1002A0
label_2d001c:
    if (ctx->pc == 0x2D001Cu) {
        ctx->pc = 0x2D001Cu;
            // 0x2d001c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D0020u;
        goto label_2d0020;
    }
    ctx->pc = 0x2D0018u;
    SET_GPR_U32(ctx, 31, 0x2D0020u);
    ctx->pc = 0x2D001Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0018u;
            // 0x2d001c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0020u; }
        if (ctx->pc != 0x2D0020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0020u; }
        if (ctx->pc != 0x2D0020u) { return; }
    }
    ctx->pc = 0x2D0020u;
label_2d0020:
    // 0x2d0020: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d0020u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d0024:
    // 0x2d0024: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d0024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d0028:
    // 0x2d0028: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d0028u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d002c:
    // 0x2d002c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d002cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d0030:
    // 0x2d0030: 0x3e00008  jr          $ra
label_2d0034:
    if (ctx->pc == 0x2D0034u) {
        ctx->pc = 0x2D0034u;
            // 0x2d0034: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2D0038u;
        goto label_2d0038;
    }
    ctx->pc = 0x2D0030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0030u;
            // 0x2d0034: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D0038u;
label_2d0038:
    // 0x2d0038: 0x0  nop
    ctx->pc = 0x2d0038u;
    // NOP
label_2d003c:
    // 0x2d003c: 0x0  nop
    ctx->pc = 0x2d003cu;
    // NOP
label_2d0040:
    // 0x2d0040: 0x3e00008  jr          $ra
label_2d0044:
    if (ctx->pc == 0x2D0044u) {
        ctx->pc = 0x2D0044u;
            // 0x2d0044: 0x240208b6  addiu       $v0, $zero, 0x8B6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2230));
        ctx->pc = 0x2D0048u;
        goto label_2d0048;
    }
    ctx->pc = 0x2D0040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0040u;
            // 0x2d0044: 0x240208b6  addiu       $v0, $zero, 0x8B6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2230));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D0048u;
label_2d0048:
    // 0x2d0048: 0x0  nop
    ctx->pc = 0x2d0048u;
    // NOP
label_2d004c:
    // 0x2d004c: 0x0  nop
    ctx->pc = 0x2d004cu;
    // NOP
label_2d0050:
    // 0x2d0050: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d0050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d0054:
    // 0x2d0054: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d0054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2d0058:
    // 0x2d0058: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d0058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2d005c:
    // 0x2d005c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d005cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2d0060:
    // 0x2d0060: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d0060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d0064:
    // 0x2d0064: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_2d0068:
    if (ctx->pc == 0x2D0068u) {
        ctx->pc = 0x2D0068u;
            // 0x2d0068: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D006Cu;
        goto label_2d006c;
    }
    ctx->pc = 0x2D0064u;
    {
        const bool branch_taken_0x2d0064 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0064u;
            // 0x2d0068: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0064) {
            ctx->pc = 0x2D00C0u;
            goto label_2d00c0;
        }
    }
    ctx->pc = 0x2D006Cu;
label_2d006c:
    // 0x2d006c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2d006cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2d0070:
    // 0x2d0070: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d0070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d0074:
    // 0x2d0074: 0x24631310  addiu       $v1, $v1, 0x1310
    ctx->pc = 0x2d0074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4880));
label_2d0078:
    // 0x2d0078: 0x24421348  addiu       $v0, $v0, 0x1348
    ctx->pc = 0x2d0078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
label_2d007c:
    // 0x2d007c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2d007cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2d0080:
    // 0x2d0080: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_2d0084:
    if (ctx->pc == 0x2D0084u) {
        ctx->pc = 0x2D0084u;
            // 0x2d0084: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x2D0088u;
        goto label_2d0088;
    }
    ctx->pc = 0x2D0080u;
    {
        const bool branch_taken_0x2d0080 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0080u;
            // 0x2d0084: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0080) {
            ctx->pc = 0x2D00A8u;
            goto label_2d00a8;
        }
    }
    ctx->pc = 0x2D0088u;
label_2d0088:
    // 0x2d0088: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2d0088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2d008c:
    // 0x2d008c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d008cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d0090:
    // 0x2d0090: 0x24631360  addiu       $v1, $v1, 0x1360
    ctx->pc = 0x2d0090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4960));
label_2d0094:
    // 0x2d0094: 0x24421398  addiu       $v0, $v0, 0x1398
    ctx->pc = 0x2d0094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5016));
label_2d0098:
    // 0x2d0098: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2d0098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2d009c:
    // 0x2d009c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d009cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d00a0:
    // 0x2d00a0: 0xc0b0bd0  jal         func_2C2F40
label_2d00a4:
    if (ctx->pc == 0x2D00A4u) {
        ctx->pc = 0x2D00A4u;
            // 0x2d00a4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x2D00A8u;
        goto label_2d00a8;
    }
    ctx->pc = 0x2D00A0u;
    SET_GPR_U32(ctx, 31, 0x2D00A8u);
    ctx->pc = 0x2D00A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D00A0u;
            // 0x2d00a4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2F40u;
    if (runtime->hasFunction(0x2C2F40u)) {
        auto targetFn = runtime->lookupFunction(0x2C2F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D00A8u; }
        if (ctx->pc != 0x2D00A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C2F40_0x2c2f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D00A8u; }
        if (ctx->pc != 0x2D00A8u) { return; }
    }
    ctx->pc = 0x2D00A8u;
label_2d00a8:
    // 0x2d00a8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2d00a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_2d00ac:
    // 0x2d00ac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d00acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2d00b0:
    // 0x2d00b0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2d00b4:
    if (ctx->pc == 0x2D00B4u) {
        ctx->pc = 0x2D00B4u;
            // 0x2d00b4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D00B8u;
        goto label_2d00b8;
    }
    ctx->pc = 0x2D00B0u;
    {
        const bool branch_taken_0x2d00b0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d00b0) {
            ctx->pc = 0x2D00B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D00B0u;
            // 0x2d00b4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D00C4u;
            goto label_2d00c4;
        }
    }
    ctx->pc = 0x2D00B8u;
label_2d00b8:
    // 0x2d00b8: 0xc0400a8  jal         func_1002A0
label_2d00bc:
    if (ctx->pc == 0x2D00BCu) {
        ctx->pc = 0x2D00BCu;
            // 0x2d00bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D00C0u;
        goto label_2d00c0;
    }
    ctx->pc = 0x2D00B8u;
    SET_GPR_U32(ctx, 31, 0x2D00C0u);
    ctx->pc = 0x2D00BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D00B8u;
            // 0x2d00bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D00C0u; }
        if (ctx->pc != 0x2D00C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D00C0u; }
        if (ctx->pc != 0x2D00C0u) { return; }
    }
    ctx->pc = 0x2D00C0u;
label_2d00c0:
    // 0x2d00c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d00c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d00c4:
    // 0x2d00c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d00c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d00c8:
    // 0x2d00c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d00c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d00cc:
    // 0x2d00cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d00ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d00d0:
    // 0x2d00d0: 0x3e00008  jr          $ra
label_2d00d4:
    if (ctx->pc == 0x2D00D4u) {
        ctx->pc = 0x2D00D4u;
            // 0x2d00d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2D00D8u;
        goto label_2d00d8;
    }
    ctx->pc = 0x2D00D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D00D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D00D0u;
            // 0x2d00d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D00D8u;
label_2d00d8:
    // 0x2d00d8: 0x0  nop
    ctx->pc = 0x2d00d8u;
    // NOP
label_2d00dc:
    // 0x2d00dc: 0x0  nop
    ctx->pc = 0x2d00dcu;
    // NOP
label_2d00e0:
    // 0x2d00e0: 0x3e00008  jr          $ra
label_2d00e4:
    if (ctx->pc == 0x2D00E4u) {
        ctx->pc = 0x2D00E8u;
        goto label_2d00e8;
    }
    ctx->pc = 0x2D00E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D00E8u;
label_2d00e8:
    // 0x2d00e8: 0x0  nop
    ctx->pc = 0x2d00e8u;
    // NOP
label_2d00ec:
    // 0x2d00ec: 0x0  nop
    ctx->pc = 0x2d00ecu;
    // NOP
label_2d00f0:
    // 0x2d00f0: 0x3e00008  jr          $ra
label_2d00f4:
    if (ctx->pc == 0x2D00F4u) {
        ctx->pc = 0x2D00F8u;
        goto label_2d00f8;
    }
    ctx->pc = 0x2D00F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D00F8u;
label_2d00f8:
    // 0x2d00f8: 0x0  nop
    ctx->pc = 0x2d00f8u;
    // NOP
label_2d00fc:
    // 0x2d00fc: 0x0  nop
    ctx->pc = 0x2d00fcu;
    // NOP
label_2d0100:
    // 0x2d0100: 0x3e00008  jr          $ra
label_2d0104:
    if (ctx->pc == 0x2D0104u) {
        ctx->pc = 0x2D0108u;
        goto label_2d0108;
    }
    ctx->pc = 0x2D0100u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D0108u;
label_2d0108:
    // 0x2d0108: 0x0  nop
    ctx->pc = 0x2d0108u;
    // NOP
label_2d010c:
    // 0x2d010c: 0x0  nop
    ctx->pc = 0x2d010cu;
    // NOP
label_2d0110:
    // 0x2d0110: 0x3e00008  jr          $ra
label_2d0114:
    if (ctx->pc == 0x2D0114u) {
        ctx->pc = 0x2D0114u;
            // 0x2d0114: 0x8c82009c  lw          $v0, 0x9C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
        ctx->pc = 0x2D0118u;
        goto label_2d0118;
    }
    ctx->pc = 0x2D0110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0110u;
            // 0x2d0114: 0x8c82009c  lw          $v0, 0x9C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D0118u;
label_2d0118:
    // 0x2d0118: 0x0  nop
    ctx->pc = 0x2d0118u;
    // NOP
label_2d011c:
    // 0x2d011c: 0x0  nop
    ctx->pc = 0x2d011cu;
    // NOP
label_2d0120:
    // 0x2d0120: 0x3e00008  jr          $ra
label_2d0124:
    if (ctx->pc == 0x2D0124u) {
        ctx->pc = 0x2D0124u;
            // 0x2d0124: 0x24022bc0  addiu       $v0, $zero, 0x2BC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11200));
        ctx->pc = 0x2D0128u;
        goto label_2d0128;
    }
    ctx->pc = 0x2D0120u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0120u;
            // 0x2d0124: 0x24022bc0  addiu       $v0, $zero, 0x2BC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11200));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D0128u;
label_2d0128:
    // 0x2d0128: 0x0  nop
    ctx->pc = 0x2d0128u;
    // NOP
label_2d012c:
    // 0x2d012c: 0x0  nop
    ctx->pc = 0x2d012cu;
    // NOP
label_2d0130:
    // 0x2d0130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d0130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d0134:
    // 0x2d0134: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d0134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2d0138:
    // 0x2d0138: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d0138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2d013c:
    // 0x2d013c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d013cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2d0140:
    // 0x2d0140: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d0140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d0144:
    // 0x2d0144: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_2d0148:
    if (ctx->pc == 0x2D0148u) {
        ctx->pc = 0x2D0148u;
            // 0x2d0148: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D014Cu;
        goto label_2d014c;
    }
    ctx->pc = 0x2D0144u;
    {
        const bool branch_taken_0x2d0144 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0144u;
            // 0x2d0148: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0144) {
            ctx->pc = 0x2D01A0u;
            goto label_2d01a0;
        }
    }
    ctx->pc = 0x2D014Cu;
label_2d014c:
    // 0x2d014c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2d014cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2d0150:
    // 0x2d0150: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d0150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d0154:
    // 0x2d0154: 0x246314d0  addiu       $v1, $v1, 0x14D0
    ctx->pc = 0x2d0154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5328));
label_2d0158:
    // 0x2d0158: 0x24421508  addiu       $v0, $v0, 0x1508
    ctx->pc = 0x2d0158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5384));
label_2d015c:
    // 0x2d015c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2d015cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2d0160:
    // 0x2d0160: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_2d0164:
    if (ctx->pc == 0x2D0164u) {
        ctx->pc = 0x2D0164u;
            // 0x2d0164: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x2D0168u;
        goto label_2d0168;
    }
    ctx->pc = 0x2D0160u;
    {
        const bool branch_taken_0x2d0160 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0160u;
            // 0x2d0164: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0160) {
            ctx->pc = 0x2D0188u;
            goto label_2d0188;
        }
    }
    ctx->pc = 0x2D0168u;
label_2d0168:
    // 0x2d0168: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2d0168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2d016c:
    // 0x2d016c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d016cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d0170:
    // 0x2d0170: 0x24631520  addiu       $v1, $v1, 0x1520
    ctx->pc = 0x2d0170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5408));
label_2d0174:
    // 0x2d0174: 0x24421558  addiu       $v0, $v0, 0x1558
    ctx->pc = 0x2d0174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5464));
label_2d0178:
    // 0x2d0178: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2d0178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2d017c:
    // 0x2d017c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d017cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d0180:
    // 0x2d0180: 0xc0b09c4  jal         func_2C2710
label_2d0184:
    if (ctx->pc == 0x2D0184u) {
        ctx->pc = 0x2D0184u;
            // 0x2d0184: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x2D0188u;
        goto label_2d0188;
    }
    ctx->pc = 0x2D0180u;
    SET_GPR_U32(ctx, 31, 0x2D0188u);
    ctx->pc = 0x2D0184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0180u;
            // 0x2d0184: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2710u;
    if (runtime->hasFunction(0x2C2710u)) {
        auto targetFn = runtime->lookupFunction(0x2C2710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0188u; }
        if (ctx->pc != 0x2D0188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C2710_0x2c2710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0188u; }
        if (ctx->pc != 0x2D0188u) { return; }
    }
    ctx->pc = 0x2D0188u;
label_2d0188:
    // 0x2d0188: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2d0188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_2d018c:
    // 0x2d018c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d018cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2d0190:
    // 0x2d0190: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2d0194:
    if (ctx->pc == 0x2D0194u) {
        ctx->pc = 0x2D0194u;
            // 0x2d0194: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D0198u;
        goto label_2d0198;
    }
    ctx->pc = 0x2D0190u;
    {
        const bool branch_taken_0x2d0190 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d0190) {
            ctx->pc = 0x2D0194u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0190u;
            // 0x2d0194: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D01A4u;
            goto label_2d01a4;
        }
    }
    ctx->pc = 0x2D0198u;
label_2d0198:
    // 0x2d0198: 0xc0400a8  jal         func_1002A0
label_2d019c:
    if (ctx->pc == 0x2D019Cu) {
        ctx->pc = 0x2D019Cu;
            // 0x2d019c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D01A0u;
        goto label_2d01a0;
    }
    ctx->pc = 0x2D0198u;
    SET_GPR_U32(ctx, 31, 0x2D01A0u);
    ctx->pc = 0x2D019Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0198u;
            // 0x2d019c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D01A0u; }
        if (ctx->pc != 0x2D01A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D01A0u; }
        if (ctx->pc != 0x2D01A0u) { return; }
    }
    ctx->pc = 0x2D01A0u;
label_2d01a0:
    // 0x2d01a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d01a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d01a4:
    // 0x2d01a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d01a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d01a8:
    // 0x2d01a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d01a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d01ac:
    // 0x2d01ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d01acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d01b0:
    // 0x2d01b0: 0x3e00008  jr          $ra
label_2d01b4:
    if (ctx->pc == 0x2D01B4u) {
        ctx->pc = 0x2D01B4u;
            // 0x2d01b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2D01B8u;
        goto label_2d01b8;
    }
    ctx->pc = 0x2D01B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D01B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D01B0u;
            // 0x2d01b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D01B8u;
label_2d01b8:
    // 0x2d01b8: 0x0  nop
    ctx->pc = 0x2d01b8u;
    // NOP
label_2d01bc:
    // 0x2d01bc: 0x0  nop
    ctx->pc = 0x2d01bcu;
    // NOP
label_2d01c0:
    // 0x2d01c0: 0x8c83006c  lw          $v1, 0x6C($a0)
    ctx->pc = 0x2d01c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
label_2d01c4:
    // 0x2d01c4: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x2d01c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_2d01c8:
    // 0x2d01c8: 0x3e00008  jr          $ra
label_2d01cc:
    if (ctx->pc == 0x2D01CCu) {
        ctx->pc = 0x2D01CCu;
            // 0x2d01cc: 0x621018  mult        $v0, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->pc = 0x2D01D0u;
        goto label_2d01d0;
    }
    ctx->pc = 0x2D01C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D01CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D01C8u;
            // 0x2d01cc: 0x621018  mult        $v0, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D01D0u;
label_2d01d0:
    // 0x2d01d0: 0x3e00008  jr          $ra
label_2d01d4:
    if (ctx->pc == 0x2D01D4u) {
        ctx->pc = 0x2D01D4u;
            // 0x2d01d4: 0x24022b20  addiu       $v0, $zero, 0x2B20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11040));
        ctx->pc = 0x2D01D8u;
        goto label_2d01d8;
    }
    ctx->pc = 0x2D01D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D01D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D01D0u;
            // 0x2d01d4: 0x24022b20  addiu       $v0, $zero, 0x2B20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11040));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D01D8u;
label_2d01d8:
    // 0x2d01d8: 0x0  nop
    ctx->pc = 0x2d01d8u;
    // NOP
label_2d01dc:
    // 0x2d01dc: 0x0  nop
    ctx->pc = 0x2d01dcu;
    // NOP
label_2d01e0:
    // 0x2d01e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d01e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d01e4:
    // 0x2d01e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d01e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2d01e8:
    // 0x2d01e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d01e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2d01ec:
    // 0x2d01ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d01ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2d01f0:
    // 0x2d01f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d01f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d01f4:
    // 0x2d01f4: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
label_2d01f8:
    if (ctx->pc == 0x2D01F8u) {
        ctx->pc = 0x2D01F8u;
            // 0x2d01f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D01FCu;
        goto label_2d01fc;
    }
    ctx->pc = 0x2D01F4u;
    {
        const bool branch_taken_0x2d01f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D01F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D01F4u;
            // 0x2d01f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d01f4) {
            ctx->pc = 0x2D0294u;
            goto label_2d0294;
        }
    }
    ctx->pc = 0x2D01FCu;
label_2d01fc:
    // 0x2d01fc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2d01fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2d0200:
    // 0x2d0200: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d0200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d0204:
    // 0x2d0204: 0x246315c0  addiu       $v1, $v1, 0x15C0
    ctx->pc = 0x2d0204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5568));
label_2d0208:
    // 0x2d0208: 0x244215f8  addiu       $v0, $v0, 0x15F8
    ctx->pc = 0x2d0208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5624));
label_2d020c:
    // 0x2d020c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2d020cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2d0210:
    // 0x2d0210: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_2d0214:
    if (ctx->pc == 0x2D0214u) {
        ctx->pc = 0x2D0214u;
            // 0x2d0214: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x2D0218u;
        goto label_2d0218;
    }
    ctx->pc = 0x2D0210u;
    {
        const bool branch_taken_0x2d0210 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0210u;
            // 0x2d0214: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0210) {
            ctx->pc = 0x2D027Cu;
            goto label_2d027c;
        }
    }
    ctx->pc = 0x2D0218u;
label_2d0218:
    // 0x2d0218: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2d0218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2d021c:
    // 0x2d021c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d021cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d0220:
    // 0x2d0220: 0x24631610  addiu       $v1, $v1, 0x1610
    ctx->pc = 0x2d0220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5648));
label_2d0224:
    // 0x2d0224: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2d0224u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2d0228:
    // 0x2d0228: 0x24421648  addiu       $v0, $v0, 0x1648
    ctx->pc = 0x2d0228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5704));
label_2d022c:
    // 0x2d022c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2d022cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2d0230:
    // 0x2d0230: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2d0230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_2d0234:
    // 0x2d0234: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x2d0234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_2d0238:
    // 0x2d0238: 0xc0407c0  jal         func_101F00
label_2d023c:
    if (ctx->pc == 0x2D023Cu) {
        ctx->pc = 0x2D023Cu;
            // 0x2d023c: 0x24a52090  addiu       $a1, $a1, 0x2090 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8336));
        ctx->pc = 0x2D0240u;
        goto label_2d0240;
    }
    ctx->pc = 0x2D0238u;
    SET_GPR_U32(ctx, 31, 0x2D0240u);
    ctx->pc = 0x2D023Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0238u;
            // 0x2d023c: 0x24a52090  addiu       $a1, $a1, 0x2090 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0240u; }
        if (ctx->pc != 0x2D0240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0240u; }
        if (ctx->pc != 0x2D0240u) { return; }
    }
    ctx->pc = 0x2D0240u;
label_2d0240:
    // 0x2d0240: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x2d0240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_2d0244:
    // 0x2d0244: 0xc0a8c98  jal         func_2A3260
label_2d0248:
    if (ctx->pc == 0x2D0248u) {
        ctx->pc = 0x2D0248u;
            // 0x2d0248: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2D024Cu;
        goto label_2d024c;
    }
    ctx->pc = 0x2D0244u;
    SET_GPR_U32(ctx, 31, 0x2D024Cu);
    ctx->pc = 0x2D0248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0244u;
            // 0x2d0248: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D024Cu; }
        if (ctx->pc != 0x2D024Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D024Cu; }
        if (ctx->pc != 0x2D024Cu) { return; }
    }
    ctx->pc = 0x2D024Cu;
label_2d024c:
    // 0x2d024c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x2d024cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_2d0250:
    // 0x2d0250: 0xc0b07e4  jal         func_2C1F90
label_2d0254:
    if (ctx->pc == 0x2D0254u) {
        ctx->pc = 0x2D0254u;
            // 0x2d0254: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2D0258u;
        goto label_2d0258;
    }
    ctx->pc = 0x2D0250u;
    SET_GPR_U32(ctx, 31, 0x2D0258u);
    ctx->pc = 0x2D0254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0250u;
            // 0x2d0254: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1F90u;
    if (runtime->hasFunction(0x2C1F90u)) {
        auto targetFn = runtime->lookupFunction(0x2C1F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0258u; }
        if (ctx->pc != 0x2D0258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1F90_0x2c1f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0258u; }
        if (ctx->pc != 0x2D0258u) { return; }
    }
    ctx->pc = 0x2D0258u;
label_2d0258:
    // 0x2d0258: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x2d0258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_2d025c:
    // 0x2d025c: 0xc0b07e4  jal         func_2C1F90
label_2d0260:
    if (ctx->pc == 0x2D0260u) {
        ctx->pc = 0x2D0260u;
            // 0x2d0260: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2D0264u;
        goto label_2d0264;
    }
    ctx->pc = 0x2D025Cu;
    SET_GPR_U32(ctx, 31, 0x2D0264u);
    ctx->pc = 0x2D0260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D025Cu;
            // 0x2d0260: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1F90u;
    if (runtime->hasFunction(0x2C1F90u)) {
        auto targetFn = runtime->lookupFunction(0x2C1F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0264u; }
        if (ctx->pc != 0x2D0264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1F90_0x2c1f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0264u; }
        if (ctx->pc != 0x2D0264u) { return; }
    }
    ctx->pc = 0x2D0264u;
label_2d0264:
    // 0x2d0264: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x2d0264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
label_2d0268:
    // 0x2d0268: 0xc0b0800  jal         func_2C2000
label_2d026c:
    if (ctx->pc == 0x2D026Cu) {
        ctx->pc = 0x2D026Cu;
            // 0x2d026c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D0270u;
        goto label_2d0270;
    }
    ctx->pc = 0x2D0268u;
    SET_GPR_U32(ctx, 31, 0x2D0270u);
    ctx->pc = 0x2D026Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0268u;
            // 0x2d026c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2000u;
    if (runtime->hasFunction(0x2C2000u)) {
        auto targetFn = runtime->lookupFunction(0x2C2000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0270u; }
        if (ctx->pc != 0x2D0270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C2000_0x2c2000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0270u; }
        if (ctx->pc != 0x2D0270u) { return; }
    }
    ctx->pc = 0x2D0270u;
label_2d0270:
    // 0x2d0270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d0270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d0274:
    // 0x2d0274: 0xc0ae1c0  jal         func_2B8700
label_2d0278:
    if (ctx->pc == 0x2D0278u) {
        ctx->pc = 0x2D0278u;
            // 0x2d0278: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D027Cu;
        goto label_2d027c;
    }
    ctx->pc = 0x2D0274u;
    SET_GPR_U32(ctx, 31, 0x2D027Cu);
    ctx->pc = 0x2D0278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0274u;
            // 0x2d0278: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D027Cu; }
        if (ctx->pc != 0x2D027Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D027Cu; }
        if (ctx->pc != 0x2D027Cu) { return; }
    }
    ctx->pc = 0x2D027Cu;
label_2d027c:
    // 0x2d027c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2d027cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_2d0280:
    // 0x2d0280: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d0280u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2d0284:
    // 0x2d0284: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2d0288:
    if (ctx->pc == 0x2D0288u) {
        ctx->pc = 0x2D0288u;
            // 0x2d0288: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D028Cu;
        goto label_2d028c;
    }
    ctx->pc = 0x2D0284u;
    {
        const bool branch_taken_0x2d0284 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d0284) {
            ctx->pc = 0x2D0288u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0284u;
            // 0x2d0288: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D0298u;
            goto label_2d0298;
        }
    }
    ctx->pc = 0x2D028Cu;
label_2d028c:
    // 0x2d028c: 0xc0400a8  jal         func_1002A0
label_2d0290:
    if (ctx->pc == 0x2D0290u) {
        ctx->pc = 0x2D0290u;
            // 0x2d0290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D0294u;
        goto label_2d0294;
    }
    ctx->pc = 0x2D028Cu;
    SET_GPR_U32(ctx, 31, 0x2D0294u);
    ctx->pc = 0x2D0290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D028Cu;
            // 0x2d0290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0294u; }
        if (ctx->pc != 0x2D0294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0294u; }
        if (ctx->pc != 0x2D0294u) { return; }
    }
    ctx->pc = 0x2D0294u;
label_2d0294:
    // 0x2d0294: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d0294u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d0298:
    // 0x2d0298: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d0298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d029c:
    // 0x2d029c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d029cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d02a0:
    // 0x2d02a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d02a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d02a4:
    // 0x2d02a4: 0x3e00008  jr          $ra
label_2d02a8:
    if (ctx->pc == 0x2D02A8u) {
        ctx->pc = 0x2D02A8u;
            // 0x2d02a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2D02ACu;
        goto label_2d02ac;
    }
    ctx->pc = 0x2D02A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D02A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D02A4u;
            // 0x2d02a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D02ACu;
label_2d02ac:
    // 0x2d02ac: 0x0  nop
    ctx->pc = 0x2d02acu;
    // NOP
label_2d02b0:
    // 0x2d02b0: 0x8c830064  lw          $v1, 0x64($a0)
    ctx->pc = 0x2d02b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
label_2d02b4:
    // 0x2d02b4: 0x8c820068  lw          $v0, 0x68($a0)
    ctx->pc = 0x2d02b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_2d02b8:
    // 0x2d02b8: 0x3e00008  jr          $ra
label_2d02bc:
    if (ctx->pc == 0x2D02BCu) {
        ctx->pc = 0x2D02BCu;
            // 0x2d02bc: 0x621018  mult        $v0, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->pc = 0x2D02C0u;
        goto label_2d02c0;
    }
    ctx->pc = 0x2D02B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D02BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D02B8u;
            // 0x2d02bc: 0x621018  mult        $v0, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D02C0u;
label_2d02c0:
    // 0x2d02c0: 0x3e00008  jr          $ra
label_2d02c4:
    if (ctx->pc == 0x2D02C4u) {
        ctx->pc = 0x2D02C4u;
            // 0x2d02c4: 0x24022b20  addiu       $v0, $zero, 0x2B20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11040));
        ctx->pc = 0x2D02C8u;
        goto label_2d02c8;
    }
    ctx->pc = 0x2D02C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D02C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D02C0u;
            // 0x2d02c4: 0x24022b20  addiu       $v0, $zero, 0x2B20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11040));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D02C8u;
label_2d02c8:
    // 0x2d02c8: 0x0  nop
    ctx->pc = 0x2d02c8u;
    // NOP
label_2d02cc:
    // 0x2d02cc: 0x0  nop
    ctx->pc = 0x2d02ccu;
    // NOP
label_2d02d0:
    // 0x2d02d0: 0x24032bd4  addiu       $v1, $zero, 0x2BD4
    ctx->pc = 0x2d02d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11220));
label_2d02d4:
    // 0x2d02d4: 0x3e00008  jr          $ra
label_2d02d8:
    if (ctx->pc == 0x2D02D8u) {
        ctx->pc = 0x2D02D8u;
            // 0x2d02d8: 0xac830054  sw          $v1, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x2D02DCu;
        goto label_2d02dc;
    }
    ctx->pc = 0x2D02D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D02D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D02D4u;
            // 0x2d02d8: 0xac830054  sw          $v1, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D02DCu;
label_2d02dc:
    // 0x2d02dc: 0x0  nop
    ctx->pc = 0x2d02dcu;
    // NOP
label_2d02e0:
    // 0x2d02e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d02e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d02e4:
    // 0x2d02e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d02e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2d02e8:
    // 0x2d02e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d02e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2d02ec:
    // 0x2d02ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d02ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2d02f0:
    // 0x2d02f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d02f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d02f4:
    // 0x2d02f4: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
label_2d02f8:
    if (ctx->pc == 0x2D02F8u) {
        ctx->pc = 0x2D02F8u;
            // 0x2d02f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D02FCu;
        goto label_2d02fc;
    }
    ctx->pc = 0x2D02F4u;
    {
        const bool branch_taken_0x2d02f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D02F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D02F4u;
            // 0x2d02f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d02f4) {
            ctx->pc = 0x2D0394u;
            goto label_2d0394;
        }
    }
    ctx->pc = 0x2D02FCu;
label_2d02fc:
    // 0x2d02fc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2d02fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2d0300:
    // 0x2d0300: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d0300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d0304:
    // 0x2d0304: 0x246316b0  addiu       $v1, $v1, 0x16B0
    ctx->pc = 0x2d0304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5808));
label_2d0308:
    // 0x2d0308: 0x244216e8  addiu       $v0, $v0, 0x16E8
    ctx->pc = 0x2d0308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5864));
label_2d030c:
    // 0x2d030c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2d030cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2d0310:
    // 0x2d0310: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_2d0314:
    if (ctx->pc == 0x2D0314u) {
        ctx->pc = 0x2D0314u;
            // 0x2d0314: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x2D0318u;
        goto label_2d0318;
    }
    ctx->pc = 0x2D0310u;
    {
        const bool branch_taken_0x2d0310 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0310u;
            // 0x2d0314: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0310) {
            ctx->pc = 0x2D037Cu;
            goto label_2d037c;
        }
    }
    ctx->pc = 0x2D0318u;
label_2d0318:
    // 0x2d0318: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2d0318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2d031c:
    // 0x2d031c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d031cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d0320:
    // 0x2d0320: 0x24631700  addiu       $v1, $v1, 0x1700
    ctx->pc = 0x2d0320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5888));
label_2d0324:
    // 0x2d0324: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2d0324u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2d0328:
    // 0x2d0328: 0x24421738  addiu       $v0, $v0, 0x1738
    ctx->pc = 0x2d0328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5944));
label_2d032c:
    // 0x2d032c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2d032cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2d0330:
    // 0x2d0330: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2d0330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_2d0334:
    // 0x2d0334: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x2d0334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_2d0338:
    // 0x2d0338: 0xc0407c0  jal         func_101F00
label_2d033c:
    if (ctx->pc == 0x2D033Cu) {
        ctx->pc = 0x2D033Cu;
            // 0x2d033c: 0x24a519f0  addiu       $a1, $a1, 0x19F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6640));
        ctx->pc = 0x2D0340u;
        goto label_2d0340;
    }
    ctx->pc = 0x2D0338u;
    SET_GPR_U32(ctx, 31, 0x2D0340u);
    ctx->pc = 0x2D033Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0338u;
            // 0x2d033c: 0x24a519f0  addiu       $a1, $a1, 0x19F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0340u; }
        if (ctx->pc != 0x2D0340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0340u; }
        if (ctx->pc != 0x2D0340u) { return; }
    }
    ctx->pc = 0x2D0340u;
label_2d0340:
    // 0x2d0340: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x2d0340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_2d0344:
    // 0x2d0344: 0xc0a8cf8  jal         func_2A33E0
label_2d0348:
    if (ctx->pc == 0x2D0348u) {
        ctx->pc = 0x2D0348u;
            // 0x2d0348: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2D034Cu;
        goto label_2d034c;
    }
    ctx->pc = 0x2D0344u;
    SET_GPR_U32(ctx, 31, 0x2D034Cu);
    ctx->pc = 0x2D0348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0344u;
            // 0x2d0348: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D034Cu; }
        if (ctx->pc != 0x2D034Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D034Cu; }
        if (ctx->pc != 0x2D034Cu) { return; }
    }
    ctx->pc = 0x2D034Cu;
label_2d034c:
    // 0x2d034c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x2d034cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_2d0350:
    // 0x2d0350: 0xc0b063c  jal         func_2C18F0
label_2d0354:
    if (ctx->pc == 0x2D0354u) {
        ctx->pc = 0x2D0354u;
            // 0x2d0354: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2D0358u;
        goto label_2d0358;
    }
    ctx->pc = 0x2D0350u;
    SET_GPR_U32(ctx, 31, 0x2D0358u);
    ctx->pc = 0x2D0354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0350u;
            // 0x2d0354: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C18F0u;
    if (runtime->hasFunction(0x2C18F0u)) {
        auto targetFn = runtime->lookupFunction(0x2C18F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0358u; }
        if (ctx->pc != 0x2D0358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C18F0_0x2c18f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0358u; }
        if (ctx->pc != 0x2D0358u) { return; }
    }
    ctx->pc = 0x2D0358u;
label_2d0358:
    // 0x2d0358: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x2d0358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_2d035c:
    // 0x2d035c: 0xc0b063c  jal         func_2C18F0
label_2d0360:
    if (ctx->pc == 0x2D0360u) {
        ctx->pc = 0x2D0360u;
            // 0x2d0360: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2D0364u;
        goto label_2d0364;
    }
    ctx->pc = 0x2D035Cu;
    SET_GPR_U32(ctx, 31, 0x2D0364u);
    ctx->pc = 0x2D0360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D035Cu;
            // 0x2d0360: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C18F0u;
    if (runtime->hasFunction(0x2C18F0u)) {
        auto targetFn = runtime->lookupFunction(0x2C18F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0364u; }
        if (ctx->pc != 0x2D0364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C18F0_0x2c18f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0364u; }
        if (ctx->pc != 0x2D0364u) { return; }
    }
    ctx->pc = 0x2D0364u;
label_2d0364:
    // 0x2d0364: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x2d0364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
label_2d0368:
    // 0x2d0368: 0xc0b0658  jal         func_2C1960
label_2d036c:
    if (ctx->pc == 0x2D036Cu) {
        ctx->pc = 0x2D036Cu;
            // 0x2d036c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D0370u;
        goto label_2d0370;
    }
    ctx->pc = 0x2D0368u;
    SET_GPR_U32(ctx, 31, 0x2D0370u);
    ctx->pc = 0x2D036Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0368u;
            // 0x2d036c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1960u;
    if (runtime->hasFunction(0x2C1960u)) {
        auto targetFn = runtime->lookupFunction(0x2C1960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0370u; }
        if (ctx->pc != 0x2D0370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1960_0x2c1960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0370u; }
        if (ctx->pc != 0x2D0370u) { return; }
    }
    ctx->pc = 0x2D0370u;
label_2d0370:
    // 0x2d0370: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d0370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d0374:
    // 0x2d0374: 0xc0ae1c0  jal         func_2B8700
label_2d0378:
    if (ctx->pc == 0x2D0378u) {
        ctx->pc = 0x2D0378u;
            // 0x2d0378: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D037Cu;
        goto label_2d037c;
    }
    ctx->pc = 0x2D0374u;
    SET_GPR_U32(ctx, 31, 0x2D037Cu);
    ctx->pc = 0x2D0378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0374u;
            // 0x2d0378: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D037Cu; }
        if (ctx->pc != 0x2D037Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D037Cu; }
        if (ctx->pc != 0x2D037Cu) { return; }
    }
    ctx->pc = 0x2D037Cu;
label_2d037c:
    // 0x2d037c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2d037cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_2d0380:
    // 0x2d0380: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d0380u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2d0384:
    // 0x2d0384: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2d0388:
    if (ctx->pc == 0x2D0388u) {
        ctx->pc = 0x2D0388u;
            // 0x2d0388: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D038Cu;
        goto label_2d038c;
    }
    ctx->pc = 0x2D0384u;
    {
        const bool branch_taken_0x2d0384 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d0384) {
            ctx->pc = 0x2D0388u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0384u;
            // 0x2d0388: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D0398u;
            goto label_2d0398;
        }
    }
    ctx->pc = 0x2D038Cu;
label_2d038c:
    // 0x2d038c: 0xc0400a8  jal         func_1002A0
label_2d0390:
    if (ctx->pc == 0x2D0390u) {
        ctx->pc = 0x2D0390u;
            // 0x2d0390: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D0394u;
        goto label_2d0394;
    }
    ctx->pc = 0x2D038Cu;
    SET_GPR_U32(ctx, 31, 0x2D0394u);
    ctx->pc = 0x2D0390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D038Cu;
            // 0x2d0390: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0394u; }
        if (ctx->pc != 0x2D0394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0394u; }
        if (ctx->pc != 0x2D0394u) { return; }
    }
    ctx->pc = 0x2D0394u;
label_2d0394:
    // 0x2d0394: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d0394u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d0398:
    // 0x2d0398: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d0398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d039c:
    // 0x2d039c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d039cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d03a0:
    // 0x2d03a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d03a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d03a4:
    // 0x2d03a4: 0x3e00008  jr          $ra
label_2d03a8:
    if (ctx->pc == 0x2D03A8u) {
        ctx->pc = 0x2D03A8u;
            // 0x2d03a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2D03ACu;
        goto label_2d03ac;
    }
    ctx->pc = 0x2D03A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D03A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D03A4u;
            // 0x2d03a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D03ACu;
label_2d03ac:
    // 0x2d03ac: 0x0  nop
    ctx->pc = 0x2d03acu;
    // NOP
label_2d03b0:
    // 0x2d03b0: 0x3e00008  jr          $ra
label_2d03b4:
    if (ctx->pc == 0x2D03B4u) {
        ctx->pc = 0x2D03B4u;
            // 0x2d03b4: 0x24023ab6  addiu       $v0, $zero, 0x3AB6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15030));
        ctx->pc = 0x2D03B8u;
        goto label_2d03b8;
    }
    ctx->pc = 0x2D03B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D03B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D03B0u;
            // 0x2d03b4: 0x24023ab6  addiu       $v0, $zero, 0x3AB6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15030));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D03B8u;
label_2d03b8:
    // 0x2d03b8: 0x0  nop
    ctx->pc = 0x2d03b8u;
    // NOP
label_2d03bc:
    // 0x2d03bc: 0x0  nop
    ctx->pc = 0x2d03bcu;
    // NOP
label_2d03c0:
    // 0x2d03c0: 0x3e00008  jr          $ra
label_2d03c4:
    if (ctx->pc == 0x2D03C4u) {
        ctx->pc = 0x2D03C4u;
            // 0x2d03c4: 0x24023ade  addiu       $v0, $zero, 0x3ADE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15070));
        ctx->pc = 0x2D03C8u;
        goto label_2d03c8;
    }
    ctx->pc = 0x2D03C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D03C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D03C0u;
            // 0x2d03c4: 0x24023ade  addiu       $v0, $zero, 0x3ADE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15070));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D03C8u;
label_2d03c8:
    // 0x2d03c8: 0x0  nop
    ctx->pc = 0x2d03c8u;
    // NOP
label_2d03cc:
    // 0x2d03cc: 0x0  nop
    ctx->pc = 0x2d03ccu;
    // NOP
label_2d03d0:
    // 0x2d03d0: 0x3e00008  jr          $ra
label_2d03d4:
    if (ctx->pc == 0x2D03D4u) {
        ctx->pc = 0x2D03D8u;
        goto label_2d03d8;
    }
    ctx->pc = 0x2D03D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D03D8u;
label_2d03d8:
    // 0x2d03d8: 0x0  nop
    ctx->pc = 0x2d03d8u;
    // NOP
label_2d03dc:
    // 0x2d03dc: 0x0  nop
    ctx->pc = 0x2d03dcu;
    // NOP
label_2d03e0:
    // 0x2d03e0: 0x3e00008  jr          $ra
label_2d03e4:
    if (ctx->pc == 0x2D03E4u) {
        ctx->pc = 0x2D03E8u;
        goto label_2d03e8;
    }
    ctx->pc = 0x2D03E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D03E8u;
label_2d03e8:
    // 0x2d03e8: 0x0  nop
    ctx->pc = 0x2d03e8u;
    // NOP
label_2d03ec:
    // 0x2d03ec: 0x0  nop
    ctx->pc = 0x2d03ecu;
    // NOP
label_2d03f0:
    // 0x2d03f0: 0x3e00008  jr          $ra
label_2d03f4:
    if (ctx->pc == 0x2D03F4u) {
        ctx->pc = 0x2D03F8u;
        goto label_2d03f8;
    }
    ctx->pc = 0x2D03F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D03F8u;
label_2d03f8:
    // 0x2d03f8: 0x0  nop
    ctx->pc = 0x2d03f8u;
    // NOP
label_2d03fc:
    // 0x2d03fc: 0x0  nop
    ctx->pc = 0x2d03fcu;
    // NOP
label_2d0400:
    // 0x2d0400: 0x3e00008  jr          $ra
label_2d0404:
    if (ctx->pc == 0x2D0404u) {
        ctx->pc = 0x2D0408u;
        goto label_2d0408;
    }
    ctx->pc = 0x2D0400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D0408u;
label_2d0408:
    // 0x2d0408: 0x0  nop
    ctx->pc = 0x2d0408u;
    // NOP
label_2d040c:
    // 0x2d040c: 0x0  nop
    ctx->pc = 0x2d040cu;
    // NOP
label_2d0410:
    // 0x2d0410: 0x3e00008  jr          $ra
label_2d0414:
    if (ctx->pc == 0x2D0414u) {
        ctx->pc = 0x2D0418u;
        goto label_2d0418;
    }
    ctx->pc = 0x2D0410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D0418u;
label_2d0418:
    // 0x2d0418: 0x0  nop
    ctx->pc = 0x2d0418u;
    // NOP
label_2d041c:
    // 0x2d041c: 0x0  nop
    ctx->pc = 0x2d041cu;
    // NOP
label_2d0420:
    // 0x2d0420: 0x3e00008  jr          $ra
label_2d0424:
    if (ctx->pc == 0x2D0424u) {
        ctx->pc = 0x2D0428u;
        goto label_2d0428;
    }
    ctx->pc = 0x2D0420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D0428u;
label_2d0428:
    // 0x2d0428: 0x0  nop
    ctx->pc = 0x2d0428u;
    // NOP
label_2d042c:
    // 0x2d042c: 0x0  nop
    ctx->pc = 0x2d042cu;
    // NOP
label_2d0430:
    // 0x2d0430: 0x8ca40d60  lw          $a0, 0xD60($a1)
    ctx->pc = 0x2d0430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3424)));
label_2d0434:
    // 0x2d0434: 0x3c02000b  lui         $v0, 0xB
    ctx->pc = 0x2d0434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11 << 16));
label_2d0438:
    // 0x2d0438: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x2d0438u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_2d043c:
    // 0x2d043c: 0x344501a9  ori         $a1, $v0, 0x1A9
    ctx->pc = 0x2d043cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
label_2d0440:
    // 0x2d0440: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2d0440u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2d0444:
    // 0x2d0444: 0x3200008  jr          $t9
label_2d0448:
    if (ctx->pc == 0x2D0448u) {
        ctx->pc = 0x2D044Cu;
        goto label_2d044c;
    }
    ctx->pc = 0x2D0444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D044Cu;
label_2d044c:
    // 0x2d044c: 0x0  nop
    ctx->pc = 0x2d044cu;
    // NOP
label_2d0450:
    // 0x2d0450: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x2d0450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_2d0454:
    // 0x2d0454: 0x28420001  slti        $v0, $v0, 0x1
    ctx->pc = 0x2d0454u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
label_2d0458:
    // 0x2d0458: 0x3e00008  jr          $ra
label_2d045c:
    if (ctx->pc == 0x2D045Cu) {
        ctx->pc = 0x2D045Cu;
            // 0x2d045c: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->pc = 0x2D0460u;
        goto label_2d0460;
    }
    ctx->pc = 0x2D0458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D045Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0458u;
            // 0x2d045c: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D0460u;
label_2d0460:
    // 0x2d0460: 0x3e00008  jr          $ra
label_2d0464:
    if (ctx->pc == 0x2D0464u) {
        ctx->pc = 0x2D0464u;
            // 0x2d0464: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2D0468u;
        goto label_2d0468;
    }
    ctx->pc = 0x2D0460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0460u;
            // 0x2d0464: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D0468u;
label_2d0468:
    // 0x2d0468: 0x0  nop
    ctx->pc = 0x2d0468u;
    // NOP
label_2d046c:
    // 0x2d046c: 0x0  nop
    ctx->pc = 0x2d046cu;
    // NOP
label_2d0470:
    // 0x2d0470: 0x3e00008  jr          $ra
label_2d0474:
    if (ctx->pc == 0x2D0474u) {
        ctx->pc = 0x2D0478u;
        goto label_2d0478;
    }
    ctx->pc = 0x2D0470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D0478u;
label_2d0478:
    // 0x2d0478: 0x0  nop
    ctx->pc = 0x2d0478u;
    // NOP
label_2d047c:
    // 0x2d047c: 0x0  nop
    ctx->pc = 0x2d047cu;
    // NOP
label_2d0480:
    // 0x2d0480: 0x3e00008  jr          $ra
label_2d0484:
    if (ctx->pc == 0x2D0484u) {
        ctx->pc = 0x2D0488u;
        goto label_2d0488;
    }
    ctx->pc = 0x2D0480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D0488u;
label_2d0488:
    // 0x2d0488: 0x0  nop
    ctx->pc = 0x2d0488u;
    // NOP
label_2d048c:
    // 0x2d048c: 0x0  nop
    ctx->pc = 0x2d048cu;
    // NOP
label_2d0490:
    // 0x2d0490: 0x3e00008  jr          $ra
label_2d0494:
    if (ctx->pc == 0x2D0494u) {
        ctx->pc = 0x2D0498u;
        goto label_2d0498;
    }
    ctx->pc = 0x2D0490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D0498u;
label_2d0498:
    // 0x2d0498: 0x0  nop
    ctx->pc = 0x2d0498u;
    // NOP
label_2d049c:
    // 0x2d049c: 0x0  nop
    ctx->pc = 0x2d049cu;
    // NOP
label_2d04a0:
    // 0x2d04a0: 0x3e00008  jr          $ra
label_2d04a4:
    if (ctx->pc == 0x2D04A4u) {
        ctx->pc = 0x2D04A8u;
        goto label_2d04a8;
    }
    ctx->pc = 0x2D04A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D04A8u;
label_2d04a8:
    // 0x2d04a8: 0x0  nop
    ctx->pc = 0x2d04a8u;
    // NOP
label_2d04ac:
    // 0x2d04ac: 0x0  nop
    ctx->pc = 0x2d04acu;
    // NOP
label_2d04b0:
    // 0x2d04b0: 0x3e00008  jr          $ra
label_2d04b4:
    if (ctx->pc == 0x2D04B4u) {
        ctx->pc = 0x2D04B8u;
        goto label_2d04b8;
    }
    ctx->pc = 0x2D04B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D04B8u;
label_2d04b8:
    // 0x2d04b8: 0x0  nop
    ctx->pc = 0x2d04b8u;
    // NOP
label_2d04bc:
    // 0x2d04bc: 0x0  nop
    ctx->pc = 0x2d04bcu;
    // NOP
label_2d04c0:
    // 0x2d04c0: 0x3e00008  jr          $ra
label_2d04c4:
    if (ctx->pc == 0x2D04C4u) {
        ctx->pc = 0x2D04C4u;
            // 0x2d04c4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2D04C8u;
        goto label_2d04c8;
    }
    ctx->pc = 0x2D04C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D04C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D04C0u;
            // 0x2d04c4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D04C8u;
label_2d04c8:
    // 0x2d04c8: 0x0  nop
    ctx->pc = 0x2d04c8u;
    // NOP
label_2d04cc:
    // 0x2d04cc: 0x0  nop
    ctx->pc = 0x2d04ccu;
    // NOP
label_2d04d0:
    // 0x2d04d0: 0x3e00008  jr          $ra
label_2d04d4:
    if (ctx->pc == 0x2D04D4u) {
        ctx->pc = 0x2D04D4u;
            // 0x2d04d4: 0x24024650  addiu       $v0, $zero, 0x4650 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18000));
        ctx->pc = 0x2D04D8u;
        goto label_2d04d8;
    }
    ctx->pc = 0x2D04D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D04D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D04D0u;
            // 0x2d04d4: 0x24024650  addiu       $v0, $zero, 0x4650 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18000));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D04D8u;
label_2d04d8:
    // 0x2d04d8: 0x0  nop
    ctx->pc = 0x2d04d8u;
    // NOP
label_2d04dc:
    // 0x2d04dc: 0x0  nop
    ctx->pc = 0x2d04dcu;
    // NOP
label_2d04e0:
    // 0x2d04e0: 0x24034650  addiu       $v1, $zero, 0x4650
    ctx->pc = 0x2d04e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18000));
label_2d04e4:
    // 0x2d04e4: 0x3e00008  jr          $ra
label_2d04e8:
    if (ctx->pc == 0x2D04E8u) {
        ctx->pc = 0x2D04E8u;
            // 0x2d04e8: 0xac830054  sw          $v1, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x2D04ECu;
        goto label_2d04ec;
    }
    ctx->pc = 0x2D04E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D04E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D04E4u;
            // 0x2d04e8: 0xac830054  sw          $v1, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D04ECu;
label_2d04ec:
    // 0x2d04ec: 0x0  nop
    ctx->pc = 0x2d04ecu;
    // NOP
label_2d04f0:
    // 0x2d04f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d04f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d04f4:
    // 0x2d04f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d04f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2d04f8:
    // 0x2d04f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d04f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2d04fc:
    // 0x2d04fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d04fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2d0500:
    // 0x2d0500: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d0500u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d0504:
    // 0x2d0504: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
label_2d0508:
    if (ctx->pc == 0x2D0508u) {
        ctx->pc = 0x2D0508u;
            // 0x2d0508: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D050Cu;
        goto label_2d050c;
    }
    ctx->pc = 0x2D0504u;
    {
        const bool branch_taken_0x2d0504 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0504u;
            // 0x2d0508: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0504) {
            ctx->pc = 0x2D05A4u;
            goto label_2d05a4;
        }
    }
    ctx->pc = 0x2D050Cu;
label_2d050c:
    // 0x2d050c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2d050cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2d0510:
    // 0x2d0510: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d0510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d0514:
    // 0x2d0514: 0x24631ae0  addiu       $v1, $v1, 0x1AE0
    ctx->pc = 0x2d0514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6880));
label_2d0518:
    // 0x2d0518: 0x24421b18  addiu       $v0, $v0, 0x1B18
    ctx->pc = 0x2d0518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6936));
label_2d051c:
    // 0x2d051c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2d051cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2d0520:
    // 0x2d0520: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_2d0524:
    if (ctx->pc == 0x2D0524u) {
        ctx->pc = 0x2D0524u;
            // 0x2d0524: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x2D0528u;
        goto label_2d0528;
    }
    ctx->pc = 0x2D0520u;
    {
        const bool branch_taken_0x2d0520 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0520u;
            // 0x2d0524: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0520) {
            ctx->pc = 0x2D058Cu;
            goto label_2d058c;
        }
    }
    ctx->pc = 0x2D0528u;
label_2d0528:
    // 0x2d0528: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2d0528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2d052c:
    // 0x2d052c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d052cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d0530:
    // 0x2d0530: 0x24631b30  addiu       $v1, $v1, 0x1B30
    ctx->pc = 0x2d0530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6960));
label_2d0534:
    // 0x2d0534: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2d0534u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2d0538:
    // 0x2d0538: 0x24421b68  addiu       $v0, $v0, 0x1B68
    ctx->pc = 0x2d0538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7016));
label_2d053c:
    // 0x2d053c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2d053cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2d0540:
    // 0x2d0540: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2d0540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_2d0544:
    // 0x2d0544: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x2d0544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_2d0548:
    // 0x2d0548: 0xc0407c0  jal         func_101F00
label_2d054c:
    if (ctx->pc == 0x2D054Cu) {
        ctx->pc = 0x2D054Cu;
            // 0x2d054c: 0x24a5f290  addiu       $a1, $a1, -0xD70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963856));
        ctx->pc = 0x2D0550u;
        goto label_2d0550;
    }
    ctx->pc = 0x2D0548u;
    SET_GPR_U32(ctx, 31, 0x2D0550u);
    ctx->pc = 0x2D054Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0548u;
            // 0x2d054c: 0x24a5f290  addiu       $a1, $a1, -0xD70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0550u; }
        if (ctx->pc != 0x2D0550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0550u; }
        if (ctx->pc != 0x2D0550u) { return; }
    }
    ctx->pc = 0x2D0550u;
label_2d0550:
    // 0x2d0550: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x2d0550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_2d0554:
    // 0x2d0554: 0xc0a8cf8  jal         func_2A33E0
label_2d0558:
    if (ctx->pc == 0x2D0558u) {
        ctx->pc = 0x2D0558u;
            // 0x2d0558: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2D055Cu;
        goto label_2d055c;
    }
    ctx->pc = 0x2D0554u;
    SET_GPR_U32(ctx, 31, 0x2D055Cu);
    ctx->pc = 0x2D0558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0554u;
            // 0x2d0558: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D055Cu; }
        if (ctx->pc != 0x2D055Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D055Cu; }
        if (ctx->pc != 0x2D055Cu) { return; }
    }
    ctx->pc = 0x2D055Cu;
label_2d055c:
    // 0x2d055c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x2d055cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_2d0560:
    // 0x2d0560: 0xc0afc64  jal         func_2BF190
label_2d0564:
    if (ctx->pc == 0x2D0564u) {
        ctx->pc = 0x2D0564u;
            // 0x2d0564: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2D0568u;
        goto label_2d0568;
    }
    ctx->pc = 0x2D0560u;
    SET_GPR_U32(ctx, 31, 0x2D0568u);
    ctx->pc = 0x2D0564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0560u;
            // 0x2d0564: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF190u;
    if (runtime->hasFunction(0x2BF190u)) {
        auto targetFn = runtime->lookupFunction(0x2BF190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0568u; }
        if (ctx->pc != 0x2D0568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BF190_0x2bf190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0568u; }
        if (ctx->pc != 0x2D0568u) { return; }
    }
    ctx->pc = 0x2D0568u;
label_2d0568:
    // 0x2d0568: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x2d0568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_2d056c:
    // 0x2d056c: 0xc0afc64  jal         func_2BF190
label_2d0570:
    if (ctx->pc == 0x2D0570u) {
        ctx->pc = 0x2D0570u;
            // 0x2d0570: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2D0574u;
        goto label_2d0574;
    }
    ctx->pc = 0x2D056Cu;
    SET_GPR_U32(ctx, 31, 0x2D0574u);
    ctx->pc = 0x2D0570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D056Cu;
            // 0x2d0570: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF190u;
    if (runtime->hasFunction(0x2BF190u)) {
        auto targetFn = runtime->lookupFunction(0x2BF190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0574u; }
        if (ctx->pc != 0x2D0574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BF190_0x2bf190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0574u; }
        if (ctx->pc != 0x2D0574u) { return; }
    }
    ctx->pc = 0x2D0574u;
label_2d0574:
    // 0x2d0574: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x2d0574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
label_2d0578:
    // 0x2d0578: 0xc0afc80  jal         func_2BF200
label_2d057c:
    if (ctx->pc == 0x2D057Cu) {
        ctx->pc = 0x2D057Cu;
            // 0x2d057c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D0580u;
        goto label_2d0580;
    }
    ctx->pc = 0x2D0578u;
    SET_GPR_U32(ctx, 31, 0x2D0580u);
    ctx->pc = 0x2D057Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0578u;
            // 0x2d057c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF200u;
    if (runtime->hasFunction(0x2BF200u)) {
        auto targetFn = runtime->lookupFunction(0x2BF200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0580u; }
        if (ctx->pc != 0x2D0580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BF200_0x2bf200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0580u; }
        if (ctx->pc != 0x2D0580u) { return; }
    }
    ctx->pc = 0x2D0580u;
label_2d0580:
    // 0x2d0580: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d0580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d0584:
    // 0x2d0584: 0xc0ae1c0  jal         func_2B8700
label_2d0588:
    if (ctx->pc == 0x2D0588u) {
        ctx->pc = 0x2D0588u;
            // 0x2d0588: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D058Cu;
        goto label_2d058c;
    }
    ctx->pc = 0x2D0584u;
    SET_GPR_U32(ctx, 31, 0x2D058Cu);
    ctx->pc = 0x2D0588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0584u;
            // 0x2d0588: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D058Cu; }
        if (ctx->pc != 0x2D058Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D058Cu; }
        if (ctx->pc != 0x2D058Cu) { return; }
    }
    ctx->pc = 0x2D058Cu;
label_2d058c:
    // 0x2d058c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2d058cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_2d0590:
    // 0x2d0590: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d0590u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2d0594:
    // 0x2d0594: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2d0598:
    if (ctx->pc == 0x2D0598u) {
        ctx->pc = 0x2D0598u;
            // 0x2d0598: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D059Cu;
        goto label_2d059c;
    }
    ctx->pc = 0x2D0594u;
    {
        const bool branch_taken_0x2d0594 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d0594) {
            ctx->pc = 0x2D0598u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0594u;
            // 0x2d0598: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D05A8u;
            goto label_2d05a8;
        }
    }
    ctx->pc = 0x2D059Cu;
label_2d059c:
    // 0x2d059c: 0xc0400a8  jal         func_1002A0
label_2d05a0:
    if (ctx->pc == 0x2D05A0u) {
        ctx->pc = 0x2D05A0u;
            // 0x2d05a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D05A4u;
        goto label_2d05a4;
    }
    ctx->pc = 0x2D059Cu;
    SET_GPR_U32(ctx, 31, 0x2D05A4u);
    ctx->pc = 0x2D05A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D059Cu;
            // 0x2d05a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D05A4u; }
        if (ctx->pc != 0x2D05A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D05A4u; }
        if (ctx->pc != 0x2D05A4u) { return; }
    }
    ctx->pc = 0x2D05A4u;
label_2d05a4:
    // 0x2d05a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d05a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d05a8:
    // 0x2d05a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d05a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d05ac:
    // 0x2d05ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d05acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d05b0:
    // 0x2d05b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d05b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d05b4:
    // 0x2d05b4: 0x3e00008  jr          $ra
label_2d05b8:
    if (ctx->pc == 0x2D05B8u) {
        ctx->pc = 0x2D05B8u;
            // 0x2d05b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2D05BCu;
        goto label_2d05bc;
    }
    ctx->pc = 0x2D05B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D05B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D05B4u;
            // 0x2d05b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D05BCu;
label_2d05bc:
    // 0x2d05bc: 0x0  nop
    ctx->pc = 0x2d05bcu;
    // NOP
label_2d05c0:
    // 0x2d05c0: 0x3e00008  jr          $ra
label_2d05c4:
    if (ctx->pc == 0x2D05C4u) {
        ctx->pc = 0x2D05C4u;
            // 0x2d05c4: 0x2402465a  addiu       $v0, $zero, 0x465A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18010));
        ctx->pc = 0x2D05C8u;
        goto label_2d05c8;
    }
    ctx->pc = 0x2D05C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D05C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D05C0u;
            // 0x2d05c4: 0x2402465a  addiu       $v0, $zero, 0x465A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18010));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D05C8u;
label_2d05c8:
    // 0x2d05c8: 0x0  nop
    ctx->pc = 0x2d05c8u;
    // NOP
label_2d05cc:
    // 0x2d05cc: 0x0  nop
    ctx->pc = 0x2d05ccu;
    // NOP
label_2d05d0:
    // 0x2d05d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d05d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d05d4:
    // 0x2d05d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d05d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2d05d8:
    // 0x2d05d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d05d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2d05dc:
    // 0x2d05dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d05dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2d05e0:
    // 0x2d05e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d05e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d05e4:
    // 0x2d05e4: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
label_2d05e8:
    if (ctx->pc == 0x2D05E8u) {
        ctx->pc = 0x2D05E8u;
            // 0x2d05e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D05ECu;
        goto label_2d05ec;
    }
    ctx->pc = 0x2D05E4u;
    {
        const bool branch_taken_0x2d05e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D05E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D05E4u;
            // 0x2d05e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d05e4) {
            ctx->pc = 0x2D0684u;
            goto label_2d0684;
        }
    }
    ctx->pc = 0x2D05ECu;
label_2d05ec:
    // 0x2d05ec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2d05ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2d05f0:
    // 0x2d05f0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d05f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d05f4:
    // 0x2d05f4: 0x24631c90  addiu       $v1, $v1, 0x1C90
    ctx->pc = 0x2d05f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7312));
label_2d05f8:
    // 0x2d05f8: 0x24421cc8  addiu       $v0, $v0, 0x1CC8
    ctx->pc = 0x2d05f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7368));
label_2d05fc:
    // 0x2d05fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2d05fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2d0600:
    // 0x2d0600: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_2d0604:
    if (ctx->pc == 0x2D0604u) {
        ctx->pc = 0x2D0604u;
            // 0x2d0604: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x2D0608u;
        goto label_2d0608;
    }
    ctx->pc = 0x2D0600u;
    {
        const bool branch_taken_0x2d0600 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0600u;
            // 0x2d0604: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0600) {
            ctx->pc = 0x2D066Cu;
            goto label_2d066c;
        }
    }
    ctx->pc = 0x2D0608u;
label_2d0608:
    // 0x2d0608: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2d0608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2d060c:
    // 0x2d060c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d060cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d0610:
    // 0x2d0610: 0x24631ce0  addiu       $v1, $v1, 0x1CE0
    ctx->pc = 0x2d0610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7392));
label_2d0614:
    // 0x2d0614: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2d0614u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2d0618:
    // 0x2d0618: 0x24421d18  addiu       $v0, $v0, 0x1D18
    ctx->pc = 0x2d0618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7448));
label_2d061c:
    // 0x2d061c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2d061cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2d0620:
    // 0x2d0620: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2d0620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_2d0624:
    // 0x2d0624: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x2d0624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_2d0628:
    // 0x2d0628: 0xc0407c0  jal         func_101F00
label_2d062c:
    if (ctx->pc == 0x2D062Cu) {
        ctx->pc = 0x2D062Cu;
            // 0x2d062c: 0x24a5e530  addiu       $a1, $a1, -0x1AD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960432));
        ctx->pc = 0x2D0630u;
        goto label_2d0630;
    }
    ctx->pc = 0x2D0628u;
    SET_GPR_U32(ctx, 31, 0x2D0630u);
    ctx->pc = 0x2D062Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0628u;
            // 0x2d062c: 0x24a5e530  addiu       $a1, $a1, -0x1AD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0630u; }
        if (ctx->pc != 0x2D0630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0630u; }
        if (ctx->pc != 0x2D0630u) { return; }
    }
    ctx->pc = 0x2D0630u;
label_2d0630:
    // 0x2d0630: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x2d0630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_2d0634:
    // 0x2d0634: 0xc0af8e8  jal         func_2BE3A0
label_2d0638:
    if (ctx->pc == 0x2D0638u) {
        ctx->pc = 0x2D0638u;
            // 0x2d0638: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2D063Cu;
        goto label_2d063c;
    }
    ctx->pc = 0x2D0634u;
    SET_GPR_U32(ctx, 31, 0x2D063Cu);
    ctx->pc = 0x2D0638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0634u;
            // 0x2d0638: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BE3A0u;
    if (runtime->hasFunction(0x2BE3A0u)) {
        auto targetFn = runtime->lookupFunction(0x2BE3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D063Cu; }
        if (ctx->pc != 0x2D063Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BE3A0_0x2be3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D063Cu; }
        if (ctx->pc != 0x2D063Cu) { return; }
    }
    ctx->pc = 0x2D063Cu;
label_2d063c:
    // 0x2d063c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x2d063cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_2d0640:
    // 0x2d0640: 0xc0af90c  jal         func_2BE430
label_2d0644:
    if (ctx->pc == 0x2D0644u) {
        ctx->pc = 0x2D0644u;
            // 0x2d0644: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2D0648u;
        goto label_2d0648;
    }
    ctx->pc = 0x2D0640u;
    SET_GPR_U32(ctx, 31, 0x2D0648u);
    ctx->pc = 0x2D0644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0640u;
            // 0x2d0644: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BE430u;
    if (runtime->hasFunction(0x2BE430u)) {
        auto targetFn = runtime->lookupFunction(0x2BE430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0648u; }
        if (ctx->pc != 0x2D0648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BE430_0x2be430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0648u; }
        if (ctx->pc != 0x2D0648u) { return; }
    }
    ctx->pc = 0x2D0648u;
label_2d0648:
    // 0x2d0648: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x2d0648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_2d064c:
    // 0x2d064c: 0xc0af90c  jal         func_2BE430
label_2d0650:
    if (ctx->pc == 0x2D0650u) {
        ctx->pc = 0x2D0650u;
            // 0x2d0650: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2D0654u;
        goto label_2d0654;
    }
    ctx->pc = 0x2D064Cu;
    SET_GPR_U32(ctx, 31, 0x2D0654u);
    ctx->pc = 0x2D0650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D064Cu;
            // 0x2d0650: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BE430u;
    if (runtime->hasFunction(0x2BE430u)) {
        auto targetFn = runtime->lookupFunction(0x2BE430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0654u; }
        if (ctx->pc != 0x2D0654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BE430_0x2be430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0654u; }
        if (ctx->pc != 0x2D0654u) { return; }
    }
    ctx->pc = 0x2D0654u;
label_2d0654:
    // 0x2d0654: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x2d0654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
label_2d0658:
    // 0x2d0658: 0xc0af928  jal         func_2BE4A0
label_2d065c:
    if (ctx->pc == 0x2D065Cu) {
        ctx->pc = 0x2D065Cu;
            // 0x2d065c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D0660u;
        goto label_2d0660;
    }
    ctx->pc = 0x2D0658u;
    SET_GPR_U32(ctx, 31, 0x2D0660u);
    ctx->pc = 0x2D065Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0658u;
            // 0x2d065c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BE4A0u;
    if (runtime->hasFunction(0x2BE4A0u)) {
        auto targetFn = runtime->lookupFunction(0x2BE4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0660u; }
        if (ctx->pc != 0x2D0660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BE4A0_0x2be4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0660u; }
        if (ctx->pc != 0x2D0660u) { return; }
    }
    ctx->pc = 0x2D0660u;
label_2d0660:
    // 0x2d0660: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d0660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d0664:
    // 0x2d0664: 0xc0ae1c0  jal         func_2B8700
label_2d0668:
    if (ctx->pc == 0x2D0668u) {
        ctx->pc = 0x2D0668u;
            // 0x2d0668: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D066Cu;
        goto label_2d066c;
    }
    ctx->pc = 0x2D0664u;
    SET_GPR_U32(ctx, 31, 0x2D066Cu);
    ctx->pc = 0x2D0668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0664u;
            // 0x2d0668: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D066Cu; }
        if (ctx->pc != 0x2D066Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D066Cu; }
        if (ctx->pc != 0x2D066Cu) { return; }
    }
    ctx->pc = 0x2D066Cu;
label_2d066c:
    // 0x2d066c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2d066cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_2d0670:
    // 0x2d0670: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d0670u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2d0674:
    // 0x2d0674: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2d0678:
    if (ctx->pc == 0x2D0678u) {
        ctx->pc = 0x2D0678u;
            // 0x2d0678: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D067Cu;
        goto label_2d067c;
    }
    ctx->pc = 0x2D0674u;
    {
        const bool branch_taken_0x2d0674 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d0674) {
            ctx->pc = 0x2D0678u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0674u;
            // 0x2d0678: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D0688u;
            goto label_2d0688;
        }
    }
    ctx->pc = 0x2D067Cu;
label_2d067c:
    // 0x2d067c: 0xc0400a8  jal         func_1002A0
label_2d0680:
    if (ctx->pc == 0x2D0680u) {
        ctx->pc = 0x2D0680u;
            // 0x2d0680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D0684u;
        goto label_2d0684;
    }
    ctx->pc = 0x2D067Cu;
    SET_GPR_U32(ctx, 31, 0x2D0684u);
    ctx->pc = 0x2D0680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D067Cu;
            // 0x2d0680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0684u; }
        if (ctx->pc != 0x2D0684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0684u; }
        if (ctx->pc != 0x2D0684u) { return; }
    }
    ctx->pc = 0x2D0684u;
label_2d0684:
    // 0x2d0684: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d0684u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d0688:
    // 0x2d0688: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d0688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d068c:
    // 0x2d068c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d068cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d0690:
    // 0x2d0690: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d0690u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d0694:
    // 0x2d0694: 0x3e00008  jr          $ra
label_2d0698:
    if (ctx->pc == 0x2D0698u) {
        ctx->pc = 0x2D0698u;
            // 0x2d0698: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2D069Cu;
        goto label_2d069c;
    }
    ctx->pc = 0x2D0694u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0694u;
            // 0x2d0698: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D069Cu;
label_2d069c:
    // 0x2d069c: 0x0  nop
    ctx->pc = 0x2d069cu;
    // NOP
label_2d06a0:
    // 0x2d06a0: 0x3e00008  jr          $ra
label_2d06a4:
    if (ctx->pc == 0x2D06A4u) {
        ctx->pc = 0x2D06A4u;
            // 0x2d06a4: 0x2402468c  addiu       $v0, $zero, 0x468C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18060));
        ctx->pc = 0x2D06A8u;
        goto label_2d06a8;
    }
    ctx->pc = 0x2D06A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D06A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D06A0u;
            // 0x2d06a4: 0x2402468c  addiu       $v0, $zero, 0x468C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18060));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D06A8u;
label_2d06a8:
    // 0x2d06a8: 0x0  nop
    ctx->pc = 0x2d06a8u;
    // NOP
label_2d06ac:
    // 0x2d06ac: 0x0  nop
    ctx->pc = 0x2d06acu;
    // NOP
label_2d06b0:
    // 0x2d06b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d06b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d06b4:
    // 0x2d06b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d06b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2d06b8:
    // 0x2d06b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d06b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2d06bc:
    // 0x2d06bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d06bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2d06c0:
    // 0x2d06c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d06c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d06c4:
    // 0x2d06c4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_2d06c8:
    if (ctx->pc == 0x2D06C8u) {
        ctx->pc = 0x2D06C8u;
            // 0x2d06c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D06CCu;
        goto label_2d06cc;
    }
    ctx->pc = 0x2D06C4u;
    {
        const bool branch_taken_0x2d06c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D06C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D06C4u;
            // 0x2d06c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d06c4) {
            ctx->pc = 0x2D0720u;
            goto label_2d0720;
        }
    }
    ctx->pc = 0x2D06CCu;
label_2d06cc:
    // 0x2d06cc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2d06ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2d06d0:
    // 0x2d06d0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d06d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d06d4:
    // 0x2d06d4: 0x24631e30  addiu       $v1, $v1, 0x1E30
    ctx->pc = 0x2d06d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7728));
label_2d06d8:
    // 0x2d06d8: 0x24421e68  addiu       $v0, $v0, 0x1E68
    ctx->pc = 0x2d06d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7784));
label_2d06dc:
    // 0x2d06dc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2d06dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2d06e0:
    // 0x2d06e0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_2d06e4:
    if (ctx->pc == 0x2D06E4u) {
        ctx->pc = 0x2D06E4u;
            // 0x2d06e4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x2D06E8u;
        goto label_2d06e8;
    }
    ctx->pc = 0x2D06E0u;
    {
        const bool branch_taken_0x2d06e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D06E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D06E0u;
            // 0x2d06e4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d06e0) {
            ctx->pc = 0x2D0708u;
            goto label_2d0708;
        }
    }
    ctx->pc = 0x2D06E8u;
label_2d06e8:
    // 0x2d06e8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2d06e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2d06ec:
    // 0x2d06ec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d06ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d06f0:
    // 0x2d06f0: 0x24631e80  addiu       $v1, $v1, 0x1E80
    ctx->pc = 0x2d06f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7808));
label_2d06f4:
    // 0x2d06f4: 0x24421eb8  addiu       $v0, $v0, 0x1EB8
    ctx->pc = 0x2d06f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7864));
label_2d06f8:
    // 0x2d06f8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2d06f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2d06fc:
    // 0x2d06fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d06fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d0700:
    // 0x2d0700: 0xc0af72c  jal         func_2BDCB0
label_2d0704:
    if (ctx->pc == 0x2D0704u) {
        ctx->pc = 0x2D0704u;
            // 0x2d0704: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x2D0708u;
        goto label_2d0708;
    }
    ctx->pc = 0x2D0700u;
    SET_GPR_U32(ctx, 31, 0x2D0708u);
    ctx->pc = 0x2D0704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0700u;
            // 0x2d0704: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BDCB0u;
    if (runtime->hasFunction(0x2BDCB0u)) {
        auto targetFn = runtime->lookupFunction(0x2BDCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0708u; }
        if (ctx->pc != 0x2D0708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BDCB0_0x2bdcb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0708u; }
        if (ctx->pc != 0x2D0708u) { return; }
    }
    ctx->pc = 0x2D0708u;
label_2d0708:
    // 0x2d0708: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2d0708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_2d070c:
    // 0x2d070c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d070cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2d0710:
    // 0x2d0710: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2d0714:
    if (ctx->pc == 0x2D0714u) {
        ctx->pc = 0x2D0714u;
            // 0x2d0714: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D0718u;
        goto label_2d0718;
    }
    ctx->pc = 0x2D0710u;
    {
        const bool branch_taken_0x2d0710 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d0710) {
            ctx->pc = 0x2D0714u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0710u;
            // 0x2d0714: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D0724u;
            goto label_2d0724;
        }
    }
    ctx->pc = 0x2D0718u;
label_2d0718:
    // 0x2d0718: 0xc0400a8  jal         func_1002A0
label_2d071c:
    if (ctx->pc == 0x2D071Cu) {
        ctx->pc = 0x2D071Cu;
            // 0x2d071c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D0720u;
        goto label_2d0720;
    }
    ctx->pc = 0x2D0718u;
    SET_GPR_U32(ctx, 31, 0x2D0720u);
    ctx->pc = 0x2D071Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0718u;
            // 0x2d071c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0720u; }
        if (ctx->pc != 0x2D0720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0720u; }
        if (ctx->pc != 0x2D0720u) { return; }
    }
    ctx->pc = 0x2D0720u;
label_2d0720:
    // 0x2d0720: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d0720u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d0724:
    // 0x2d0724: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d0724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d0728:
    // 0x2d0728: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d0728u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d072c:
    // 0x2d072c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d072cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d0730:
    // 0x2d0730: 0x3e00008  jr          $ra
label_2d0734:
    if (ctx->pc == 0x2D0734u) {
        ctx->pc = 0x2D0734u;
            // 0x2d0734: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2D0738u;
        goto label_2d0738;
    }
    ctx->pc = 0x2D0730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0730u;
            // 0x2d0734: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D0738u;
label_2d0738:
    // 0x2d0738: 0x0  nop
    ctx->pc = 0x2d0738u;
    // NOP
label_2d073c:
    // 0x2d073c: 0x0  nop
    ctx->pc = 0x2d073cu;
    // NOP
label_2d0740:
    // 0x2d0740: 0x3e00008  jr          $ra
label_2d0744:
    if (ctx->pc == 0x2D0744u) {
        ctx->pc = 0x2D0744u;
            // 0x2d0744: 0x240261a8  addiu       $v0, $zero, 0x61A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25000));
        ctx->pc = 0x2D0748u;
        goto label_2d0748;
    }
    ctx->pc = 0x2D0740u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0740u;
            // 0x2d0744: 0x240261a8  addiu       $v0, $zero, 0x61A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25000));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D0748u;
label_2d0748:
    // 0x2d0748: 0x0  nop
    ctx->pc = 0x2d0748u;
    // NOP
label_2d074c:
    // 0x2d074c: 0x0  nop
    ctx->pc = 0x2d074cu;
    // NOP
label_2d0750:
    // 0x2d0750: 0x3e00008  jr          $ra
label_2d0754:
    if (ctx->pc == 0x2D0754u) {
        ctx->pc = 0x2D0754u;
            // 0x2d0754: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D0758u;
        goto label_2d0758;
    }
    ctx->pc = 0x2D0750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0750u;
            // 0x2d0754: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D0758u;
label_2d0758:
    // 0x2d0758: 0x0  nop
    ctx->pc = 0x2d0758u;
    // NOP
label_2d075c:
    // 0x2d075c: 0x0  nop
    ctx->pc = 0x2d075cu;
    // NOP
label_2d0760:
    // 0x2d0760: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d0760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2d0764:
    // 0x2d0764: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d0764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2d0768:
    // 0x2d0768: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d0768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2d076c:
    // 0x2d076c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d076cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2d0770:
    // 0x2d0770: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d0770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d0774:
    // 0x2d0774: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_2d0778:
    if (ctx->pc == 0x2D0778u) {
        ctx->pc = 0x2D0778u;
            // 0x2d0778: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D077Cu;
        goto label_2d077c;
    }
    ctx->pc = 0x2D0774u;
    {
        const bool branch_taken_0x2d0774 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0774u;
            // 0x2d0778: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0774) {
            ctx->pc = 0x2D07E0u;
            goto label_2d07e0;
        }
    }
    ctx->pc = 0x2D077Cu;
label_2d077c:
    // 0x2d077c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d077cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d0780:
    // 0x2d0780: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x2d0780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_2d0784:
    // 0x2d0784: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2d0784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2d0788:
    // 0x2d0788: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2d0788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2d078c:
    // 0x2d078c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_2d0790:
    if (ctx->pc == 0x2D0790u) {
        ctx->pc = 0x2D0790u;
            // 0x2d0790: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D0794u;
        goto label_2d0794;
    }
    ctx->pc = 0x2D078Cu;
    {
        const bool branch_taken_0x2d078c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d078c) {
            ctx->pc = 0x2D0790u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D078Cu;
            // 0x2d0790: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D07B0u;
            goto label_2d07b0;
        }
    }
    ctx->pc = 0x2D0794u;
label_2d0794:
    // 0x2d0794: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2d0794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2d0798:
    // 0x2d0798: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x2d0798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_2d079c:
    // 0x2d079c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x2d079cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_2d07a0:
    // 0x2d07a0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2d07a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2d07a4:
    // 0x2d07a4: 0xc08c3f4  jal         func_230FD0
label_2d07a8:
    if (ctx->pc == 0x2D07A8u) {
        ctx->pc = 0x2D07A8u;
            // 0x2d07a8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D07ACu;
        goto label_2d07ac;
    }
    ctx->pc = 0x2D07A4u;
    SET_GPR_U32(ctx, 31, 0x2D07ACu);
    ctx->pc = 0x2D07A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D07A4u;
            // 0x2d07a8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230FD0u;
    if (runtime->hasFunction(0x230FD0u)) {
        auto targetFn = runtime->lookupFunction(0x230FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D07ACu; }
        if (ctx->pc != 0x2D07ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230FD0_0x230fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D07ACu; }
        if (ctx->pc != 0x2D07ACu) { return; }
    }
    ctx->pc = 0x2D07ACu;
label_2d07ac:
    // 0x2d07ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d07acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d07b0:
    // 0x2d07b0: 0xc088f7c  jal         func_223DF0
label_2d07b4:
    if (ctx->pc == 0x2D07B4u) {
        ctx->pc = 0x2D07B4u;
            // 0x2d07b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D07B8u;
        goto label_2d07b8;
    }
    ctx->pc = 0x2D07B0u;
    SET_GPR_U32(ctx, 31, 0x2D07B8u);
    ctx->pc = 0x2D07B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D07B0u;
            // 0x2d07b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223DF0u;
    if (runtime->hasFunction(0x223DF0u)) {
        auto targetFn = runtime->lookupFunction(0x223DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D07B8u; }
        if (ctx->pc != 0x2D07B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223DF0_0x223df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D07B8u; }
        if (ctx->pc != 0x2D07B8u) { return; }
    }
    ctx->pc = 0x2D07B8u;
label_2d07b8:
    // 0x2d07b8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2d07b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_2d07bc:
    // 0x2d07bc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d07bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2d07c0:
    // 0x2d07c0: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
label_2d07c4:
    if (ctx->pc == 0x2D07C4u) {
        ctx->pc = 0x2D07C4u;
            // 0x2d07c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D07C8u;
        goto label_2d07c8;
    }
    ctx->pc = 0x2D07C0u;
    {
        const bool branch_taken_0x2d07c0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d07c0) {
            ctx->pc = 0x2D07C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D07C0u;
            // 0x2d07c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D07E4u;
            goto label_2d07e4;
        }
    }
    ctx->pc = 0x2D07C8u;
label_2d07c8:
    // 0x2d07c8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2d07c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2d07cc:
    // 0x2d07cc: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x2d07ccu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_2d07d0:
    // 0x2d07d0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2d07d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_2d07d4:
    // 0x2d07d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d07d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d07d8:
    // 0x2d07d8: 0xc0a7ab4  jal         func_29EAD0
label_2d07dc:
    if (ctx->pc == 0x2D07DCu) {
        ctx->pc = 0x2D07DCu;
            // 0x2d07dc: 0x2407002b  addiu       $a3, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->pc = 0x2D07E0u;
        goto label_2d07e0;
    }
    ctx->pc = 0x2D07D8u;
    SET_GPR_U32(ctx, 31, 0x2D07E0u);
    ctx->pc = 0x2D07DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D07D8u;
            // 0x2d07dc: 0x2407002b  addiu       $a3, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D07E0u; }
        if (ctx->pc != 0x2D07E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D07E0u; }
        if (ctx->pc != 0x2D07E0u) { return; }
    }
    ctx->pc = 0x2D07E0u;
label_2d07e0:
    // 0x2d07e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d07e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d07e4:
    // 0x2d07e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d07e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d07e8:
    // 0x2d07e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d07e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d07ec:
    // 0x2d07ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d07ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d07f0:
    // 0x2d07f0: 0x3e00008  jr          $ra
label_2d07f4:
    if (ctx->pc == 0x2D07F4u) {
        ctx->pc = 0x2D07F4u;
            // 0x2d07f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2D07F8u;
        goto label_2d07f8;
    }
    ctx->pc = 0x2D07F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D07F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D07F0u;
            // 0x2d07f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D07F8u;
label_2d07f8:
    // 0x2d07f8: 0x0  nop
    ctx->pc = 0x2d07f8u;
    // NOP
label_2d07fc:
    // 0x2d07fc: 0x0  nop
    ctx->pc = 0x2d07fcu;
    // NOP
label_2d0800:
    // 0x2d0800: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x2d0800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_2d0804:
    // 0x2d0804: 0x3e00008  jr          $ra
label_2d0808:
    if (ctx->pc == 0x2D0808u) {
        ctx->pc = 0x2D0808u;
            // 0x2d0808: 0x94420000  lhu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x2D080Cu;
        goto label_2d080c;
    }
    ctx->pc = 0x2D0804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0804u;
            // 0x2d0808: 0x94420000  lhu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D080Cu;
label_2d080c:
    // 0x2d080c: 0x0  nop
    ctx->pc = 0x2d080cu;
    // NOP
label_2d0810:
    // 0x2d0810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d0810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d0814:
    // 0x2d0814: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d0814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2d0818:
    // 0x2d0818: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d0818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2d081c:
    // 0x2d081c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d081cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2d0820:
    // 0x2d0820: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d0820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d0824:
    // 0x2d0824: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_2d0828:
    if (ctx->pc == 0x2D0828u) {
        ctx->pc = 0x2D0828u;
            // 0x2d0828: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D082Cu;
        goto label_2d082c;
    }
    ctx->pc = 0x2D0824u;
    {
        const bool branch_taken_0x2d0824 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0824u;
            // 0x2d0828: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0824) {
            ctx->pc = 0x2D0890u;
            goto label_2d0890;
        }
    }
    ctx->pc = 0x2D082Cu;
label_2d082c:
    // 0x2d082c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2d082cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2d0830:
    // 0x2d0830: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d0830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d0834:
    // 0x2d0834: 0x24632390  addiu       $v1, $v1, 0x2390
    ctx->pc = 0x2d0834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9104));
label_2d0838:
    // 0x2d0838: 0x244223c8  addiu       $v0, $v0, 0x23C8
    ctx->pc = 0x2d0838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9160));
label_2d083c:
    // 0x2d083c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2d083cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2d0840:
    // 0x2d0840: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_2d0844:
    if (ctx->pc == 0x2D0844u) {
        ctx->pc = 0x2D0844u;
            // 0x2d0844: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x2D0848u;
        goto label_2d0848;
    }
    ctx->pc = 0x2D0840u;
    {
        const bool branch_taken_0x2d0840 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0840u;
            // 0x2d0844: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0840) {
            ctx->pc = 0x2D0878u;
            goto label_2d0878;
        }
    }
    ctx->pc = 0x2D0848u;
label_2d0848:
    // 0x2d0848: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2d0848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2d084c:
    // 0x2d084c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d084cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d0850:
    // 0x2d0850: 0x246323e0  addiu       $v1, $v1, 0x23E0
    ctx->pc = 0x2d0850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9184));
label_2d0854:
    // 0x2d0854: 0x24422418  addiu       $v0, $v0, 0x2418
    ctx->pc = 0x2d0854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9240));
label_2d0858:
    // 0x2d0858: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2d0858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2d085c:
    // 0x2d085c: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x2d085cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_2d0860:
    // 0x2d0860: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2d0860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_2d0864:
    // 0x2d0864: 0xc0aed1c  jal         func_2BB470
label_2d0868:
    if (ctx->pc == 0x2D0868u) {
        ctx->pc = 0x2D0868u;
            // 0x2d0868: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D086Cu;
        goto label_2d086c;
    }
    ctx->pc = 0x2D0864u;
    SET_GPR_U32(ctx, 31, 0x2D086Cu);
    ctx->pc = 0x2D0868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0864u;
            // 0x2d0868: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB470u;
    if (runtime->hasFunction(0x2BB470u)) {
        auto targetFn = runtime->lookupFunction(0x2BB470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D086Cu; }
        if (ctx->pc != 0x2D086Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB470_0x2bb470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D086Cu; }
        if (ctx->pc != 0x2D086Cu) { return; }
    }
    ctx->pc = 0x2D086Cu;
label_2d086c:
    // 0x2d086c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d086cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d0870:
    // 0x2d0870: 0xc0aed30  jal         func_2BB4C0
label_2d0874:
    if (ctx->pc == 0x2D0874u) {
        ctx->pc = 0x2D0874u;
            // 0x2d0874: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D0878u;
        goto label_2d0878;
    }
    ctx->pc = 0x2D0870u;
    SET_GPR_U32(ctx, 31, 0x2D0878u);
    ctx->pc = 0x2D0874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0870u;
            // 0x2d0874: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB4C0u;
    if (runtime->hasFunction(0x2BB4C0u)) {
        auto targetFn = runtime->lookupFunction(0x2BB4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0878u; }
        if (ctx->pc != 0x2D0878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB4C0_0x2bb4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0878u; }
        if (ctx->pc != 0x2D0878u) { return; }
    }
    ctx->pc = 0x2D0878u;
label_2d0878:
    // 0x2d0878: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2d0878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_2d087c:
    // 0x2d087c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d087cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2d0880:
    // 0x2d0880: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2d0884:
    if (ctx->pc == 0x2D0884u) {
        ctx->pc = 0x2D0884u;
            // 0x2d0884: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D0888u;
        goto label_2d0888;
    }
    ctx->pc = 0x2D0880u;
    {
        const bool branch_taken_0x2d0880 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d0880) {
            ctx->pc = 0x2D0884u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0880u;
            // 0x2d0884: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D0894u;
            goto label_2d0894;
        }
    }
    ctx->pc = 0x2D0888u;
label_2d0888:
    // 0x2d0888: 0xc0400a8  jal         func_1002A0
label_2d088c:
    if (ctx->pc == 0x2D088Cu) {
        ctx->pc = 0x2D088Cu;
            // 0x2d088c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D0890u;
        goto label_2d0890;
    }
    ctx->pc = 0x2D0888u;
    SET_GPR_U32(ctx, 31, 0x2D0890u);
    ctx->pc = 0x2D088Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0888u;
            // 0x2d088c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0890u; }
        if (ctx->pc != 0x2D0890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0890u; }
        if (ctx->pc != 0x2D0890u) { return; }
    }
    ctx->pc = 0x2D0890u;
label_2d0890:
    // 0x2d0890: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d0890u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d0894:
    // 0x2d0894: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d0894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d0898:
    // 0x2d0898: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d0898u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d089c:
    // 0x2d089c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d089cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d08a0:
    // 0x2d08a0: 0x3e00008  jr          $ra
label_2d08a4:
    if (ctx->pc == 0x2D08A4u) {
        ctx->pc = 0x2D08A4u;
            // 0x2d08a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2D08A8u;
        goto label_2d08a8;
    }
    ctx->pc = 0x2D08A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D08A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D08A0u;
            // 0x2d08a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D08A8u;
label_2d08a8:
    // 0x2d08a8: 0x0  nop
    ctx->pc = 0x2d08a8u;
    // NOP
label_2d08ac:
    // 0x2d08ac: 0x0  nop
    ctx->pc = 0x2d08acu;
    // NOP
label_2d08b0:
    // 0x2d08b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d08b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d08b4:
    // 0x2d08b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2d08b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d08b8:
    // 0x2d08b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d08b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2d08bc:
    // 0x2d08bc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x2d08bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_2d08c0:
    // 0x2d08c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d08c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2d08c4:
    // 0x2d08c4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x2d08c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_2d08c8:
    // 0x2d08c8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2d08c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d08cc:
    // 0x2d08cc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2d08ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_2d08d0:
    // 0x2d08d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d08d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2d08d4:
    // 0x2d08d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d08d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d08d8:
    // 0x2d08d8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x2d08d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_2d08dc:
    // 0x2d08dc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2d08dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d08e0:
    // 0x2d08e0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2d08e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2d08e4:
    // 0x2d08e4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2d08e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2d08e8:
    // 0x2d08e8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x2d08e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_2d08ec:
    // 0x2d08ec: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x2d08ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_2d08f0:
    // 0x2d08f0: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x2d08f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_2d08f4:
    // 0x2d08f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d08f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2d08f8:
    // 0x2d08f8: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x2d08f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_2d08fc:
    // 0x2d08fc: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x2d08fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_2d0900:
    // 0x2d0900: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x2d0900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_2d0904:
    // 0x2d0904: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d0904u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2d0908:
    // 0x2d0908: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2d0908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d090c:
    // 0x2d090c: 0xc0a997c  jal         func_2A65F0
label_2d0910:
    if (ctx->pc == 0x2D0910u) {
        ctx->pc = 0x2D0910u;
            // 0x2d0910: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x2D0914u;
        goto label_2d0914;
    }
    ctx->pc = 0x2D090Cu;
    SET_GPR_U32(ctx, 31, 0x2D0914u);
    ctx->pc = 0x2D0910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D090Cu;
            // 0x2d0910: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0914u; }
        if (ctx->pc != 0x2D0914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0914u; }
        if (ctx->pc != 0x2D0914u) { return; }
    }
    ctx->pc = 0x2D0914u;
label_2d0914:
    // 0x2d0914: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x2d0914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_2d0918:
    // 0x2d0918: 0xc0d879c  jal         func_361E70
label_2d091c:
    if (ctx->pc == 0x2D091Cu) {
        ctx->pc = 0x2D091Cu;
            // 0x2d091c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D0920u;
        goto label_2d0920;
    }
    ctx->pc = 0x2D0918u;
    SET_GPR_U32(ctx, 31, 0x2D0920u);
    ctx->pc = 0x2D091Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0918u;
            // 0x2d091c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0920u; }
        if (ctx->pc != 0x2D0920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0920u; }
        if (ctx->pc != 0x2D0920u) { return; }
    }
    ctx->pc = 0x2D0920u;
label_2d0920:
    // 0x2d0920: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d0920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d0924:
    // 0x2d0924: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d0924u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d0928:
    // 0x2d0928: 0x3e00008  jr          $ra
label_2d092c:
    if (ctx->pc == 0x2D092Cu) {
        ctx->pc = 0x2D092Cu;
            // 0x2d092c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2D0930u;
        goto label_2d0930;
    }
    ctx->pc = 0x2D0928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D092Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0928u;
            // 0x2d092c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D0930u;
label_2d0930:
    // 0x2d0930: 0x3e00008  jr          $ra
label_2d0934:
    if (ctx->pc == 0x2D0934u) {
        ctx->pc = 0x2D0938u;
        goto label_2d0938;
    }
    ctx->pc = 0x2D0930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D0938u;
label_2d0938:
    // 0x2d0938: 0x0  nop
    ctx->pc = 0x2d0938u;
    // NOP
label_2d093c:
    // 0x2d093c: 0x0  nop
    ctx->pc = 0x2d093cu;
    // NOP
label_2d0940:
    // 0x2d0940: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d0940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d0944:
    // 0x2d0944: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d0944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2d0948:
    // 0x2d0948: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d0948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2d094c:
    // 0x2d094c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d094cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2d0950:
    // 0x2d0950: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d0950u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d0954:
    // 0x2d0954: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_2d0958:
    if (ctx->pc == 0x2D0958u) {
        ctx->pc = 0x2D0958u;
            // 0x2d0958: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D095Cu;
        goto label_2d095c;
    }
    ctx->pc = 0x2D0954u;
    {
        const bool branch_taken_0x2d0954 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0954u;
            // 0x2d0958: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0954) {
            ctx->pc = 0x2D09B0u;
            goto label_2d09b0;
        }
    }
    ctx->pc = 0x2D095Cu;
label_2d095c:
    // 0x2d095c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2d095cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2d0960:
    // 0x2d0960: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d0960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d0964:
    // 0x2d0964: 0x246327f0  addiu       $v1, $v1, 0x27F0
    ctx->pc = 0x2d0964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10224));
label_2d0968:
    // 0x2d0968: 0x24422828  addiu       $v0, $v0, 0x2828
    ctx->pc = 0x2d0968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10280));
label_2d096c:
    // 0x2d096c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2d096cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2d0970:
    // 0x2d0970: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_2d0974:
    if (ctx->pc == 0x2D0974u) {
        ctx->pc = 0x2D0974u;
            // 0x2d0974: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x2D0978u;
        goto label_2d0978;
    }
    ctx->pc = 0x2D0970u;
    {
        const bool branch_taken_0x2d0970 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0970u;
            // 0x2d0974: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0970) {
            ctx->pc = 0x2D0998u;
            goto label_2d0998;
        }
    }
    ctx->pc = 0x2D0978u;
label_2d0978:
    // 0x2d0978: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2d0978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2d097c:
    // 0x2d097c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d097cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d0980:
    // 0x2d0980: 0x24632840  addiu       $v1, $v1, 0x2840
    ctx->pc = 0x2d0980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10304));
label_2d0984:
    // 0x2d0984: 0x24422878  addiu       $v0, $v0, 0x2878
    ctx->pc = 0x2d0984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10360));
label_2d0988:
    // 0x2d0988: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2d0988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2d098c:
    // 0x2d098c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d098cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d0990:
    // 0x2d0990: 0xc0ae3a8  jal         func_2B8EA0
label_2d0994:
    if (ctx->pc == 0x2D0994u) {
        ctx->pc = 0x2D0994u;
            // 0x2d0994: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x2D0998u;
        goto label_2d0998;
    }
    ctx->pc = 0x2D0990u;
    SET_GPR_U32(ctx, 31, 0x2D0998u);
    ctx->pc = 0x2D0994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0990u;
            // 0x2d0994: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8EA0u;
    if (runtime->hasFunction(0x2B8EA0u)) {
        auto targetFn = runtime->lookupFunction(0x2B8EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0998u; }
        if (ctx->pc != 0x2D0998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8EA0_0x2b8ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0998u; }
        if (ctx->pc != 0x2D0998u) { return; }
    }
    ctx->pc = 0x2D0998u;
label_2d0998:
    // 0x2d0998: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2d0998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_2d099c:
    // 0x2d099c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d099cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2d09a0:
    // 0x2d09a0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2d09a4:
    if (ctx->pc == 0x2D09A4u) {
        ctx->pc = 0x2D09A4u;
            // 0x2d09a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D09A8u;
        goto label_2d09a8;
    }
    ctx->pc = 0x2D09A0u;
    {
        const bool branch_taken_0x2d09a0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d09a0) {
            ctx->pc = 0x2D09A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D09A0u;
            // 0x2d09a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D09B4u;
            goto label_2d09b4;
        }
    }
    ctx->pc = 0x2D09A8u;
label_2d09a8:
    // 0x2d09a8: 0xc0400a8  jal         func_1002A0
label_2d09ac:
    if (ctx->pc == 0x2D09ACu) {
        ctx->pc = 0x2D09ACu;
            // 0x2d09ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D09B0u;
        goto label_2d09b0;
    }
    ctx->pc = 0x2D09A8u;
    SET_GPR_U32(ctx, 31, 0x2D09B0u);
    ctx->pc = 0x2D09ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D09A8u;
            // 0x2d09ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D09B0u; }
        if (ctx->pc != 0x2D09B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D09B0u; }
        if (ctx->pc != 0x2D09B0u) { return; }
    }
    ctx->pc = 0x2D09B0u;
label_2d09b0:
    // 0x2d09b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d09b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d09b4:
    // 0x2d09b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d09b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d09b8:
    // 0x2d09b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d09b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d09bc:
    // 0x2d09bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d09bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d09c0:
    // 0x2d09c0: 0x3e00008  jr          $ra
label_2d09c4:
    if (ctx->pc == 0x2D09C4u) {
        ctx->pc = 0x2D09C4u;
            // 0x2d09c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2D09C8u;
        goto label_2d09c8;
    }
    ctx->pc = 0x2D09C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D09C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D09C0u;
            // 0x2d09c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D09C8u;
label_2d09c8:
    // 0x2d09c8: 0x0  nop
    ctx->pc = 0x2d09c8u;
    // NOP
label_2d09cc:
    // 0x2d09cc: 0x0  nop
    ctx->pc = 0x2d09ccu;
    // NOP
label_2d09d0:
    // 0x2d09d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d09d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d09d4:
    // 0x2d09d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2d09d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d09d8:
    // 0x2d09d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d09d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2d09dc:
    // 0x2d09dc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x2d09dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_2d09e0:
    // 0x2d09e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d09e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2d09e4:
    // 0x2d09e4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x2d09e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_2d09e8:
    // 0x2d09e8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2d09e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d09ec:
    // 0x2d09ec: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2d09ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_2d09f0:
    // 0x2d09f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d09f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2d09f4:
    // 0x2d09f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d09f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d09f8:
    // 0x2d09f8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x2d09f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_2d09fc:
    // 0x2d09fc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2d09fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d0a00:
    // 0x2d0a00: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2d0a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2d0a04:
    // 0x2d0a04: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2d0a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2d0a08:
    // 0x2d0a08: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x2d0a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_2d0a0c:
    // 0x2d0a0c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x2d0a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_2d0a10:
    // 0x2d0a10: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x2d0a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_2d0a14:
    // 0x2d0a14: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d0a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2d0a18:
    // 0x2d0a18: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x2d0a18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_2d0a1c:
    // 0x2d0a1c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x2d0a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_2d0a20:
    // 0x2d0a20: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x2d0a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_2d0a24:
    // 0x2d0a24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d0a24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2d0a28:
    // 0x2d0a28: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2d0a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d0a2c:
    // 0x2d0a2c: 0xc0a997c  jal         func_2A65F0
label_2d0a30:
    if (ctx->pc == 0x2D0A30u) {
        ctx->pc = 0x2D0A30u;
            // 0x2d0a30: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x2D0A34u;
        goto label_2d0a34;
    }
    ctx->pc = 0x2D0A2Cu;
    SET_GPR_U32(ctx, 31, 0x2D0A34u);
    ctx->pc = 0x2D0A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0A2Cu;
            // 0x2d0a30: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0A34u; }
        if (ctx->pc != 0x2D0A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0A34u; }
        if (ctx->pc != 0x2D0A34u) { return; }
    }
    ctx->pc = 0x2D0A34u;
label_2d0a34:
    // 0x2d0a34: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x2d0a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_2d0a38:
    // 0x2d0a38: 0xc0d879c  jal         func_361E70
label_2d0a3c:
    if (ctx->pc == 0x2D0A3Cu) {
        ctx->pc = 0x2D0A3Cu;
            // 0x2d0a3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D0A40u;
        goto label_2d0a40;
    }
    ctx->pc = 0x2D0A38u;
    SET_GPR_U32(ctx, 31, 0x2D0A40u);
    ctx->pc = 0x2D0A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0A38u;
            // 0x2d0a3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0A40u; }
        if (ctx->pc != 0x2D0A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0A40u; }
        if (ctx->pc != 0x2D0A40u) { return; }
    }
    ctx->pc = 0x2D0A40u;
label_2d0a40:
    // 0x2d0a40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d0a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d0a44:
    // 0x2d0a44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d0a44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d0a48:
    // 0x2d0a48: 0x3e00008  jr          $ra
label_2d0a4c:
    if (ctx->pc == 0x2D0A4Cu) {
        ctx->pc = 0x2D0A4Cu;
            // 0x2d0a4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2D0A50u;
        goto label_2d0a50;
    }
    ctx->pc = 0x2D0A48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0A48u;
            // 0x2d0a4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D0A50u;
label_2d0a50:
    // 0x2d0a50: 0x3e00008  jr          $ra
label_2d0a54:
    if (ctx->pc == 0x2D0A54u) {
        ctx->pc = 0x2D0A58u;
        goto label_2d0a58;
    }
    ctx->pc = 0x2D0A50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D0A58u;
label_2d0a58:
    // 0x2d0a58: 0x0  nop
    ctx->pc = 0x2d0a58u;
    // NOP
label_2d0a5c:
    // 0x2d0a5c: 0x0  nop
    ctx->pc = 0x2d0a5cu;
    // NOP
label_2d0a60:
    // 0x2d0a60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d0a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d0a64:
    // 0x2d0a64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d0a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2d0a68:
    // 0x2d0a68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d0a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2d0a6c:
    // 0x2d0a6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d0a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2d0a70:
    // 0x2d0a70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d0a70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d0a74:
    // 0x2d0a74: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_2d0a78:
    if (ctx->pc == 0x2D0A78u) {
        ctx->pc = 0x2D0A78u;
            // 0x2d0a78: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D0A7Cu;
        goto label_2d0a7c;
    }
    ctx->pc = 0x2D0A74u;
    {
        const bool branch_taken_0x2d0a74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0A74u;
            // 0x2d0a78: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0a74) {
            ctx->pc = 0x2D0AD0u;
            goto label_2d0ad0;
        }
    }
    ctx->pc = 0x2D0A7Cu;
label_2d0a7c:
    // 0x2d0a7c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2d0a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2d0a80:
    // 0x2d0a80: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d0a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d0a84:
    // 0x2d0a84: 0x24632930  addiu       $v1, $v1, 0x2930
    ctx->pc = 0x2d0a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10544));
label_2d0a88:
    // 0x2d0a88: 0x24422968  addiu       $v0, $v0, 0x2968
    ctx->pc = 0x2d0a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10600));
label_2d0a8c:
    // 0x2d0a8c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2d0a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2d0a90:
    // 0x2d0a90: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_2d0a94:
    if (ctx->pc == 0x2D0A94u) {
        ctx->pc = 0x2D0A94u;
            // 0x2d0a94: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x2D0A98u;
        goto label_2d0a98;
    }
    ctx->pc = 0x2D0A90u;
    {
        const bool branch_taken_0x2d0a90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0A90u;
            // 0x2d0a94: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0a90) {
            ctx->pc = 0x2D0AB8u;
            goto label_2d0ab8;
        }
    }
    ctx->pc = 0x2D0A98u;
label_2d0a98:
    // 0x2d0a98: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2d0a98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2d0a9c:
    // 0x2d0a9c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d0a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d0aa0:
    // 0x2d0aa0: 0x24632980  addiu       $v1, $v1, 0x2980
    ctx->pc = 0x2d0aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10624));
label_2d0aa4:
    // 0x2d0aa4: 0x244229b8  addiu       $v0, $v0, 0x29B8
    ctx->pc = 0x2d0aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10680));
label_2d0aa8:
    // 0x2d0aa8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2d0aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2d0aac:
    // 0x2d0aac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d0aacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d0ab0:
    // 0x2d0ab0: 0xc0ae220  jal         func_2B8880
label_2d0ab4:
    if (ctx->pc == 0x2D0AB4u) {
        ctx->pc = 0x2D0AB4u;
            // 0x2d0ab4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x2D0AB8u;
        goto label_2d0ab8;
    }
    ctx->pc = 0x2D0AB0u;
    SET_GPR_U32(ctx, 31, 0x2D0AB8u);
    ctx->pc = 0x2D0AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0AB0u;
            // 0x2d0ab4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8880u;
    if (runtime->hasFunction(0x2B8880u)) {
        auto targetFn = runtime->lookupFunction(0x2B8880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0AB8u; }
        if (ctx->pc != 0x2D0AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8880_0x2b8880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0AB8u; }
        if (ctx->pc != 0x2D0AB8u) { return; }
    }
    ctx->pc = 0x2D0AB8u;
label_2d0ab8:
    // 0x2d0ab8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2d0ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_2d0abc:
    // 0x2d0abc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d0abcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2d0ac0:
    // 0x2d0ac0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2d0ac4:
    if (ctx->pc == 0x2D0AC4u) {
        ctx->pc = 0x2D0AC4u;
            // 0x2d0ac4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D0AC8u;
        goto label_2d0ac8;
    }
    ctx->pc = 0x2D0AC0u;
    {
        const bool branch_taken_0x2d0ac0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d0ac0) {
            ctx->pc = 0x2D0AC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0AC0u;
            // 0x2d0ac4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D0AD4u;
            goto label_2d0ad4;
        }
    }
    ctx->pc = 0x2D0AC8u;
label_2d0ac8:
    // 0x2d0ac8: 0xc0400a8  jal         func_1002A0
label_2d0acc:
    if (ctx->pc == 0x2D0ACCu) {
        ctx->pc = 0x2D0ACCu;
            // 0x2d0acc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D0AD0u;
        goto label_2d0ad0;
    }
    ctx->pc = 0x2D0AC8u;
    SET_GPR_U32(ctx, 31, 0x2D0AD0u);
    ctx->pc = 0x2D0ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0AC8u;
            // 0x2d0acc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0AD0u; }
        if (ctx->pc != 0x2D0AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0AD0u; }
        if (ctx->pc != 0x2D0AD0u) { return; }
    }
    ctx->pc = 0x2D0AD0u;
label_2d0ad0:
    // 0x2d0ad0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d0ad0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d0ad4:
    // 0x2d0ad4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d0ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d0ad8:
    // 0x2d0ad8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d0ad8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d0adc:
    // 0x2d0adc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d0adcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d0ae0:
    // 0x2d0ae0: 0x3e00008  jr          $ra
label_2d0ae4:
    if (ctx->pc == 0x2D0AE4u) {
        ctx->pc = 0x2D0AE4u;
            // 0x2d0ae4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2D0AE8u;
        goto label_2d0ae8;
    }
    ctx->pc = 0x2D0AE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0AE0u;
            // 0x2d0ae4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D0AE8u;
label_2d0ae8:
    // 0x2d0ae8: 0x0  nop
    ctx->pc = 0x2d0ae8u;
    // NOP
label_2d0aec:
    // 0x2d0aec: 0x0  nop
    ctx->pc = 0x2d0aecu;
    // NOP
label_2d0af0:
    // 0x2d0af0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d0af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2d0af4:
    // 0x2d0af4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d0af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2d0af8:
    // 0x2d0af8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d0af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2d0afc:
    // 0x2d0afc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d0afcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d0b00:
    // 0x2d0b00: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_2d0b04:
    if (ctx->pc == 0x2D0B04u) {
        ctx->pc = 0x2D0B04u;
            // 0x2d0b04: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D0B08u;
        goto label_2d0b08;
    }
    ctx->pc = 0x2D0B00u;
    {
        const bool branch_taken_0x2d0b00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0b00) {
            ctx->pc = 0x2D0B04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0B00u;
            // 0x2d0b04: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D0B40u;
            goto label_2d0b40;
        }
    }
    ctx->pc = 0x2D0B08u;
label_2d0b08:
    // 0x2d0b08: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d0b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d0b0c:
    // 0x2d0b0c: 0x244229d0  addiu       $v0, $v0, 0x29D0
    ctx->pc = 0x2d0b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10704));
label_2d0b10:
    // 0x2d0b10: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_2d0b14:
    if (ctx->pc == 0x2D0B14u) {
        ctx->pc = 0x2D0B14u;
            // 0x2d0b14: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x2D0B18u;
        goto label_2d0b18;
    }
    ctx->pc = 0x2D0B10u;
    {
        const bool branch_taken_0x2d0b10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0B10u;
            // 0x2d0b14: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0b10) {
            ctx->pc = 0x2D0B24u;
            goto label_2d0b24;
        }
    }
    ctx->pc = 0x2D0B18u;
label_2d0b18:
    // 0x2d0b18: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d0b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d0b1c:
    // 0x2d0b1c: 0x2442cfc0  addiu       $v0, $v0, -0x3040
    ctx->pc = 0x2d0b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954944));
label_2d0b20:
    // 0x2d0b20: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2d0b20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_2d0b24:
    // 0x2d0b24: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2d0b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_2d0b28:
    // 0x2d0b28: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d0b28u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2d0b2c:
    // 0x2d0b2c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_2d0b30:
    if (ctx->pc == 0x2D0B30u) {
        ctx->pc = 0x2D0B34u;
        goto label_2d0b34;
    }
    ctx->pc = 0x2D0B2Cu;
    {
        const bool branch_taken_0x2d0b2c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d0b2c) {
            ctx->pc = 0x2D0B3Cu;
            goto label_2d0b3c;
        }
    }
    ctx->pc = 0x2D0B34u;
label_2d0b34:
    // 0x2d0b34: 0xc0400a8  jal         func_1002A0
label_2d0b38:
    if (ctx->pc == 0x2D0B38u) {
        ctx->pc = 0x2D0B38u;
            // 0x2d0b38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D0B3Cu;
        goto label_2d0b3c;
    }
    ctx->pc = 0x2D0B34u;
    SET_GPR_U32(ctx, 31, 0x2D0B3Cu);
    ctx->pc = 0x2D0B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0B34u;
            // 0x2d0b38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0B3Cu; }
        if (ctx->pc != 0x2D0B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0B3Cu; }
        if (ctx->pc != 0x2D0B3Cu) { return; }
    }
    ctx->pc = 0x2D0B3Cu;
label_2d0b3c:
    // 0x2d0b3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d0b3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d0b40:
    // 0x2d0b40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d0b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d0b44:
    // 0x2d0b44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d0b44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d0b48:
    // 0x2d0b48: 0x3e00008  jr          $ra
label_2d0b4c:
    if (ctx->pc == 0x2D0B4Cu) {
        ctx->pc = 0x2D0B4Cu;
            // 0x2d0b4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2D0B50u;
        goto label_2d0b50;
    }
    ctx->pc = 0x2D0B48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0B48u;
            // 0x2d0b4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D0B50u;
label_2d0b50:
    // 0x2d0b50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d0b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2d0b54:
    // 0x2d0b54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d0b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2d0b58:
    // 0x2d0b58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d0b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2d0b5c:
    // 0x2d0b5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d0b5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d0b60:
    // 0x2d0b60: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_2d0b64:
    if (ctx->pc == 0x2D0B64u) {
        ctx->pc = 0x2D0B64u;
            // 0x2d0b64: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D0B68u;
        goto label_2d0b68;
    }
    ctx->pc = 0x2D0B60u;
    {
        const bool branch_taken_0x2d0b60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0b60) {
            ctx->pc = 0x2D0B64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0B60u;
            // 0x2d0b64: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D0BA0u;
            goto label_2d0ba0;
        }
    }
    ctx->pc = 0x2D0B68u;
label_2d0b68:
    // 0x2d0b68: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d0b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d0b6c:
    // 0x2d0b6c: 0x244229f0  addiu       $v0, $v0, 0x29F0
    ctx->pc = 0x2d0b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10736));
label_2d0b70:
    // 0x2d0b70: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_2d0b74:
    if (ctx->pc == 0x2D0B74u) {
        ctx->pc = 0x2D0B74u;
            // 0x2d0b74: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x2D0B78u;
        goto label_2d0b78;
    }
    ctx->pc = 0x2D0B70u;
    {
        const bool branch_taken_0x2d0b70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0B70u;
            // 0x2d0b74: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0b70) {
            ctx->pc = 0x2D0B84u;
            goto label_2d0b84;
        }
    }
    ctx->pc = 0x2D0B78u;
label_2d0b78:
    // 0x2d0b78: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d0b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d0b7c:
    // 0x2d0b7c: 0x2442cfc0  addiu       $v0, $v0, -0x3040
    ctx->pc = 0x2d0b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954944));
label_2d0b80:
    // 0x2d0b80: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2d0b80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_2d0b84:
    // 0x2d0b84: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2d0b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_2d0b88:
    // 0x2d0b88: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d0b88u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2d0b8c:
    // 0x2d0b8c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_2d0b90:
    if (ctx->pc == 0x2D0B90u) {
        ctx->pc = 0x2D0B94u;
        goto label_2d0b94;
    }
    ctx->pc = 0x2D0B8Cu;
    {
        const bool branch_taken_0x2d0b8c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d0b8c) {
            ctx->pc = 0x2D0B9Cu;
            goto label_2d0b9c;
        }
    }
    ctx->pc = 0x2D0B94u;
label_2d0b94:
    // 0x2d0b94: 0xc0400a8  jal         func_1002A0
label_2d0b98:
    if (ctx->pc == 0x2D0B98u) {
        ctx->pc = 0x2D0B98u;
            // 0x2d0b98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D0B9Cu;
        goto label_2d0b9c;
    }
    ctx->pc = 0x2D0B94u;
    SET_GPR_U32(ctx, 31, 0x2D0B9Cu);
    ctx->pc = 0x2D0B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0B94u;
            // 0x2d0b98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0B9Cu; }
        if (ctx->pc != 0x2D0B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0B9Cu; }
        if (ctx->pc != 0x2D0B9Cu) { return; }
    }
    ctx->pc = 0x2D0B9Cu;
label_2d0b9c:
    // 0x2d0b9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d0b9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d0ba0:
    // 0x2d0ba0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d0ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d0ba4:
    // 0x2d0ba4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d0ba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d0ba8:
    // 0x2d0ba8: 0x3e00008  jr          $ra
label_2d0bac:
    if (ctx->pc == 0x2D0BACu) {
        ctx->pc = 0x2D0BACu;
            // 0x2d0bac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2D0BB0u;
        goto label_2d0bb0;
    }
    ctx->pc = 0x2D0BA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0BA8u;
            // 0x2d0bac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D0BB0u;
label_2d0bb0:
    // 0x2d0bb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d0bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2d0bb4:
    // 0x2d0bb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d0bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2d0bb8:
    // 0x2d0bb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d0bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2d0bbc:
    // 0x2d0bbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d0bbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d0bc0:
    // 0x2d0bc0: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
label_2d0bc4:
    if (ctx->pc == 0x2D0BC4u) {
        ctx->pc = 0x2D0BC4u;
            // 0x2d0bc4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D0BC8u;
        goto label_2d0bc8;
    }
    ctx->pc = 0x2D0BC0u;
    {
        const bool branch_taken_0x2d0bc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0bc0) {
            ctx->pc = 0x2D0BC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0BC0u;
            // 0x2d0bc4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D0BECu;
            goto label_2d0bec;
        }
    }
    ctx->pc = 0x2D0BC8u;
label_2d0bc8:
    // 0x2d0bc8: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2d0bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_2d0bcc:
    // 0x2d0bcc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2d0bccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2d0bd0:
    // 0x2d0bd0: 0x24632a10  addiu       $v1, $v1, 0x2A10
    ctx->pc = 0x2d0bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10768));
label_2d0bd4:
    // 0x2d0bd4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d0bd4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2d0bd8:
    // 0x2d0bd8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_2d0bdc:
    if (ctx->pc == 0x2D0BDCu) {
        ctx->pc = 0x2D0BDCu;
            // 0x2d0bdc: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2D0BE0u;
        goto label_2d0be0;
    }
    ctx->pc = 0x2D0BD8u;
    {
        const bool branch_taken_0x2d0bd8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2D0BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0BD8u;
            // 0x2d0bdc: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0bd8) {
            ctx->pc = 0x2D0BE8u;
            goto label_2d0be8;
        }
    }
    ctx->pc = 0x2D0BE0u;
label_2d0be0:
    // 0x2d0be0: 0xc0400a8  jal         func_1002A0
label_2d0be4:
    if (ctx->pc == 0x2D0BE4u) {
        ctx->pc = 0x2D0BE8u;
        goto label_2d0be8;
    }
    ctx->pc = 0x2D0BE0u;
    SET_GPR_U32(ctx, 31, 0x2D0BE8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0BE8u; }
        if (ctx->pc != 0x2D0BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0BE8u; }
        if (ctx->pc != 0x2D0BE8u) { return; }
    }
    ctx->pc = 0x2D0BE8u;
label_2d0be8:
    // 0x2d0be8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d0be8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d0bec:
    // 0x2d0bec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d0becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d0bf0:
    // 0x2d0bf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d0bf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d0bf4:
    // 0x2d0bf4: 0x3e00008  jr          $ra
label_2d0bf8:
    if (ctx->pc == 0x2D0BF8u) {
        ctx->pc = 0x2D0BF8u;
            // 0x2d0bf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2D0BFCu;
        goto label_2d0bfc;
    }
    ctx->pc = 0x2D0BF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0BF4u;
            // 0x2d0bf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D0BFCu;
label_2d0bfc:
    // 0x2d0bfc: 0x0  nop
    ctx->pc = 0x2d0bfcu;
    // NOP
label_2d0c00:
    // 0x2d0c00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d0c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d0c04:
    // 0x2d0c04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d0c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2d0c08:
    // 0x2d0c08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d0c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2d0c0c:
    // 0x2d0c0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d0c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2d0c10:
    // 0x2d0c10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d0c10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d0c14:
    // 0x2d0c14: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2d0c18:
    if (ctx->pc == 0x2D0C18u) {
        ctx->pc = 0x2D0C18u;
            // 0x2d0c18: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D0C1Cu;
        goto label_2d0c1c;
    }
    ctx->pc = 0x2D0C14u;
    {
        const bool branch_taken_0x2d0c14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0C14u;
            // 0x2d0c18: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0c14) {
            ctx->pc = 0x2D0C58u;
            goto label_2d0c58;
        }
    }
    ctx->pc = 0x2D0C1Cu;
label_2d0c1c:
    // 0x2d0c1c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d0c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d0c20:
    // 0x2d0c20: 0x24422a20  addiu       $v0, $v0, 0x2A20
    ctx->pc = 0x2d0c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10784));
label_2d0c24:
    // 0x2d0c24: 0xc0c6064  jal         func_318190
label_2d0c28:
    if (ctx->pc == 0x2D0C28u) {
        ctx->pc = 0x2D0C28u;
            // 0x2d0c28: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2D0C2Cu;
        goto label_2d0c2c;
    }
    ctx->pc = 0x2D0C24u;
    SET_GPR_U32(ctx, 31, 0x2D0C2Cu);
    ctx->pc = 0x2D0C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0C24u;
            // 0x2d0c28: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318190u;
    if (runtime->hasFunction(0x318190u)) {
        auto targetFn = runtime->lookupFunction(0x318190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0C2Cu; }
        if (ctx->pc != 0x2D0C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318190_0x318190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0C2Cu; }
        if (ctx->pc != 0x2D0C2Cu) { return; }
    }
    ctx->pc = 0x2D0C2Cu;
label_2d0c2c:
    // 0x2d0c2c: 0x52200005  beql        $s1, $zero, . + 4 + (0x5 << 2)
label_2d0c30:
    if (ctx->pc == 0x2D0C30u) {
        ctx->pc = 0x2D0C30u;
            // 0x2d0c30: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2D0C34u;
        goto label_2d0c34;
    }
    ctx->pc = 0x2D0C2Cu;
    {
        const bool branch_taken_0x2d0c2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0c2c) {
            ctx->pc = 0x2D0C30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0C2Cu;
            // 0x2d0c30: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D0C44u;
            goto label_2d0c44;
        }
    }
    ctx->pc = 0x2D0C34u;
label_2d0c34:
    // 0x2d0c34: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d0c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d0c38:
    // 0x2d0c38: 0x24422a10  addiu       $v0, $v0, 0x2A10
    ctx->pc = 0x2d0c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10768));
label_2d0c3c:
    // 0x2d0c3c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2d0c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2d0c40:
    // 0x2d0c40: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2d0c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2d0c44:
    // 0x2d0c44: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d0c44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2d0c48:
    // 0x2d0c48: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2d0c4c:
    if (ctx->pc == 0x2D0C4Cu) {
        ctx->pc = 0x2D0C4Cu;
            // 0x2d0c4c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D0C50u;
        goto label_2d0c50;
    }
    ctx->pc = 0x2D0C48u;
    {
        const bool branch_taken_0x2d0c48 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d0c48) {
            ctx->pc = 0x2D0C4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0C48u;
            // 0x2d0c4c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D0C5Cu;
            goto label_2d0c5c;
        }
    }
    ctx->pc = 0x2D0C50u;
label_2d0c50:
    // 0x2d0c50: 0xc0400a8  jal         func_1002A0
label_2d0c54:
    if (ctx->pc == 0x2D0C54u) {
        ctx->pc = 0x2D0C54u;
            // 0x2d0c54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D0C58u;
        goto label_2d0c58;
    }
    ctx->pc = 0x2D0C50u;
    SET_GPR_U32(ctx, 31, 0x2D0C58u);
    ctx->pc = 0x2D0C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0C50u;
            // 0x2d0c54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0C58u; }
        if (ctx->pc != 0x2D0C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0C58u; }
        if (ctx->pc != 0x2D0C58u) { return; }
    }
    ctx->pc = 0x2D0C58u;
label_2d0c58:
    // 0x2d0c58: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2d0c58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d0c5c:
    // 0x2d0c5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d0c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d0c60:
    // 0x2d0c60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d0c60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d0c64:
    // 0x2d0c64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d0c64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d0c68:
    // 0x2d0c68: 0x3e00008  jr          $ra
label_2d0c6c:
    if (ctx->pc == 0x2D0C6Cu) {
        ctx->pc = 0x2D0C6Cu;
            // 0x2d0c6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2D0C70u;
        goto label_2d0c70;
    }
    ctx->pc = 0x2D0C68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0C68u;
            // 0x2d0c6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D0C70u;
label_2d0c70:
    // 0x2d0c70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d0c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d0c74:
    // 0x2d0c74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d0c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2d0c78:
    // 0x2d0c78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d0c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2d0c7c:
    // 0x2d0c7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d0c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2d0c80:
    // 0x2d0c80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d0c80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d0c84:
    // 0x2d0c84: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
label_2d0c88:
    if (ctx->pc == 0x2D0C88u) {
        ctx->pc = 0x2D0C88u;
            // 0x2d0c88: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D0C8Cu;
        goto label_2d0c8c;
    }
    ctx->pc = 0x2D0C84u;
    {
        const bool branch_taken_0x2d0c84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0C84u;
            // 0x2d0c88: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0c84) {
            ctx->pc = 0x2D0CFCu;
            goto label_2d0cfc;
        }
    }
    ctx->pc = 0x2D0C8Cu;
label_2d0c8c:
    // 0x2d0c8c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d0c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d0c90:
    // 0x2d0c90: 0x24422a50  addiu       $v0, $v0, 0x2A50
    ctx->pc = 0x2d0c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10832));
label_2d0c94:
    // 0x2d0c94: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_2d0c98:
    if (ctx->pc == 0x2D0C98u) {
        ctx->pc = 0x2D0C98u;
            // 0x2d0c98: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2D0C9Cu;
        goto label_2d0c9c;
    }
    ctx->pc = 0x2D0C94u;
    {
        const bool branch_taken_0x2d0c94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0C94u;
            // 0x2d0c98: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0c94) {
            ctx->pc = 0x2D0CE4u;
            goto label_2d0ce4;
        }
    }
    ctx->pc = 0x2D0C9Cu;
label_2d0c9c:
    // 0x2d0c9c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d0c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d0ca0:
    // 0x2d0ca0: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x2d0ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_2d0ca4:
    // 0x2d0ca4: 0x24423290  addiu       $v0, $v0, 0x3290
    ctx->pc = 0x2d0ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12944));
label_2d0ca8:
    // 0x2d0ca8: 0x24841850  addiu       $a0, $a0, 0x1850
    ctx->pc = 0x2d0ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6224));
label_2d0cac:
    // 0x2d0cac: 0xc0ad6c4  jal         func_2B5B10
label_2d0cb0:
    if (ctx->pc == 0x2D0CB0u) {
        ctx->pc = 0x2D0CB0u;
            // 0x2d0cb0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2D0CB4u;
        goto label_2d0cb4;
    }
    ctx->pc = 0x2D0CACu;
    SET_GPR_U32(ctx, 31, 0x2D0CB4u);
    ctx->pc = 0x2D0CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0CACu;
            // 0x2d0cb0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B10u;
    if (runtime->hasFunction(0x2B5B10u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0CB4u; }
        if (ctx->pc != 0x2D0CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5B10_0x2b5b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0CB4u; }
        if (ctx->pc != 0x2D0CB4u) { return; }
    }
    ctx->pc = 0x2D0CB4u;
label_2d0cb4:
    // 0x2d0cb4: 0x26240458  addiu       $a0, $s1, 0x458
    ctx->pc = 0x2d0cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1112));
label_2d0cb8:
    // 0x2d0cb8: 0xc0ad670  jal         func_2B59C0
label_2d0cbc:
    if (ctx->pc == 0x2D0CBCu) {
        ctx->pc = 0x2D0CBCu;
            // 0x2d0cbc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2D0CC0u;
        goto label_2d0cc0;
    }
    ctx->pc = 0x2D0CB8u;
    SET_GPR_U32(ctx, 31, 0x2D0CC0u);
    ctx->pc = 0x2D0CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0CB8u;
            // 0x2d0cbc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B59C0u;
    if (runtime->hasFunction(0x2B59C0u)) {
        auto targetFn = runtime->lookupFunction(0x2B59C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0CC0u; }
        if (ctx->pc != 0x2D0CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B59C0_0x2b59c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0CC0u; }
        if (ctx->pc != 0x2D0CC0u) { return; }
    }
    ctx->pc = 0x2D0CC0u;
label_2d0cc0:
    // 0x2d0cc0: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2d0cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_2d0cc4:
    // 0x2d0cc4: 0x26240154  addiu       $a0, $s1, 0x154
    ctx->pc = 0x2d0cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 340));
label_2d0cc8:
    // 0x2d0cc8: 0x24a53260  addiu       $a1, $a1, 0x3260
    ctx->pc = 0x2d0cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12896));
label_2d0ccc:
    // 0x2d0ccc: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2d0cccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2d0cd0:
    // 0x2d0cd0: 0xc0407e8  jal         func_101FA0
label_2d0cd4:
    if (ctx->pc == 0x2D0CD4u) {
        ctx->pc = 0x2D0CD4u;
            // 0x2d0cd4: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x2D0CD8u;
        goto label_2d0cd8;
    }
    ctx->pc = 0x2D0CD0u;
    SET_GPR_U32(ctx, 31, 0x2D0CD8u);
    ctx->pc = 0x2D0CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0CD0u;
            // 0x2d0cd4: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0CD8u; }
        if (ctx->pc != 0x2D0CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0CD8u; }
        if (ctx->pc != 0x2D0CD8u) { return; }
    }
    ctx->pc = 0x2D0CD8u;
label_2d0cd8:
    // 0x2d0cd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d0cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d0cdc:
    // 0x2d0cdc: 0xc0ad6c8  jal         func_2B5B20
label_2d0ce0:
    if (ctx->pc == 0x2D0CE0u) {
        ctx->pc = 0x2D0CE0u;
            // 0x2d0ce0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D0CE4u;
        goto label_2d0ce4;
    }
    ctx->pc = 0x2D0CDCu;
    SET_GPR_U32(ctx, 31, 0x2D0CE4u);
    ctx->pc = 0x2D0CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0CDCu;
            // 0x2d0ce0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B20u;
    if (runtime->hasFunction(0x2B5B20u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0CE4u; }
        if (ctx->pc != 0x2D0CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5B20_0x2b5b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0CE4u; }
        if (ctx->pc != 0x2D0CE4u) { return; }
    }
    ctx->pc = 0x2D0CE4u;
label_2d0ce4:
    // 0x2d0ce4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2d0ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2d0ce8:
    // 0x2d0ce8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d0ce8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2d0cec:
    // 0x2d0cec: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2d0cf0:
    if (ctx->pc == 0x2D0CF0u) {
        ctx->pc = 0x2D0CF0u;
            // 0x2d0cf0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D0CF4u;
        goto label_2d0cf4;
    }
    ctx->pc = 0x2D0CECu;
    {
        const bool branch_taken_0x2d0cec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d0cec) {
            ctx->pc = 0x2D0CF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0CECu;
            // 0x2d0cf0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D0D00u;
            goto label_2d0d00;
        }
    }
    ctx->pc = 0x2D0CF4u;
label_2d0cf4:
    // 0x2d0cf4: 0xc0400a8  jal         func_1002A0
label_2d0cf8:
    if (ctx->pc == 0x2D0CF8u) {
        ctx->pc = 0x2D0CF8u;
            // 0x2d0cf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D0CFCu;
        goto label_2d0cfc;
    }
    ctx->pc = 0x2D0CF4u;
    SET_GPR_U32(ctx, 31, 0x2D0CFCu);
    ctx->pc = 0x2D0CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0CF4u;
            // 0x2d0cf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0CFCu; }
        if (ctx->pc != 0x2D0CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0CFCu; }
        if (ctx->pc != 0x2D0CFCu) { return; }
    }
    ctx->pc = 0x2D0CFCu;
label_2d0cfc:
    // 0x2d0cfc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2d0cfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d0d00:
    // 0x2d0d00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d0d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d0d04:
    // 0x2d0d04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d0d04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d0d08:
    // 0x2d0d08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d0d08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d0d0c:
    // 0x2d0d0c: 0x3e00008  jr          $ra
label_2d0d10:
    if (ctx->pc == 0x2D0D10u) {
        ctx->pc = 0x2D0D10u;
            // 0x2d0d10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2D0D14u;
        goto label_2d0d14;
    }
    ctx->pc = 0x2D0D0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0D0Cu;
            // 0x2d0d10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D0D14u;
label_2d0d14:
    // 0x2d0d14: 0x0  nop
    ctx->pc = 0x2d0d14u;
    // NOP
label_2d0d18:
    // 0x2d0d18: 0x0  nop
    ctx->pc = 0x2d0d18u;
    // NOP
label_2d0d1c:
    // 0x2d0d1c: 0x0  nop
    ctx->pc = 0x2d0d1cu;
    // NOP
label_2d0d20:
    // 0x2d0d20: 0x3e00008  jr          $ra
label_2d0d24:
    if (ctx->pc == 0x2D0D24u) {
        ctx->pc = 0x2D0D24u;
            // 0x2d0d24: 0x8c820454  lw          $v0, 0x454($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1108)));
        ctx->pc = 0x2D0D28u;
        goto label_2d0d28;
    }
    ctx->pc = 0x2D0D20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0D20u;
            // 0x2d0d24: 0x8c820454  lw          $v0, 0x454($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1108)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D0D28u;
label_2d0d28:
    // 0x2d0d28: 0x0  nop
    ctx->pc = 0x2d0d28u;
    // NOP
label_2d0d2c:
    // 0x2d0d2c: 0x0  nop
    ctx->pc = 0x2d0d2cu;
    // NOP
label_2d0d30:
    // 0x2d0d30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d0d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2d0d34:
    // 0x2d0d34: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x2d0d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_2d0d38:
    // 0x2d0d38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d0d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2d0d3c:
    // 0x2d0d3c: 0xc040180  jal         func_100600
label_2d0d40:
    if (ctx->pc == 0x2D0D40u) {
        ctx->pc = 0x2D0D40u;
            // 0x2d0d40: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x2D0D44u;
        goto label_2d0d44;
    }
    ctx->pc = 0x2D0D3Cu;
    SET_GPR_U32(ctx, 31, 0x2D0D44u);
    ctx->pc = 0x2D0D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0D3Cu;
            // 0x2d0d40: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0D44u; }
        if (ctx->pc != 0x2D0D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0D44u; }
        if (ctx->pc != 0x2D0D44u) { return; }
    }
    ctx->pc = 0x2D0D44u;
label_2d0d44:
    // 0x2d0d44: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_2d0d48:
    if (ctx->pc == 0x2D0D48u) {
        ctx->pc = 0x2D0D48u;
            // 0x2d0d48: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D0D4Cu;
        goto label_2d0d4c;
    }
    ctx->pc = 0x2D0D44u;
    {
        const bool branch_taken_0x2d0d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0D44u;
            // 0x2d0d48: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0d44) {
            ctx->pc = 0x2D0DF0u;
            goto label_2d0df0;
        }
    }
    ctx->pc = 0x2D0D4Cu;
label_2d0d4c:
    // 0x2d0d4c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d0d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d0d50:
    // 0x2d0d50: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2d0d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2d0d54:
    // 0x2d0d54: 0x24422a10  addiu       $v0, $v0, 0x2A10
    ctx->pc = 0x2d0d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10768));
label_2d0d58:
    // 0x2d0d58: 0x24632a20  addiu       $v1, $v1, 0x2A20
    ctx->pc = 0x2d0d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10784));
label_2d0d5c:
    // 0x2d0d5c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2d0d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2d0d60:
    // 0x2d0d60: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2d0d60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d0d64:
    // 0x2d0d64: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2d0d64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2d0d68:
    // 0x2d0d68: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d0d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d0d6c:
    // 0x2d0d6c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2d0d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_2d0d70:
    // 0x2d0d70: 0x24424490  addiu       $v0, $v0, 0x4490
    ctx->pc = 0x2d0d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17552));
label_2d0d74:
    // 0x2d0d74: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2d0d74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_2d0d78:
    // 0x2d0d78: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x2d0d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_2d0d7c:
    // 0x2d0d7c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2d0d7cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2d0d80:
    // 0x2d0d80: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2d0d80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2d0d84:
    // 0x2d0d84: 0xc04cbd8  jal         func_132F60
label_2d0d88:
    if (ctx->pc == 0x2D0D88u) {
        ctx->pc = 0x2D0D88u;
            // 0x2d0d88: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2D0D8Cu;
        goto label_2d0d8c;
    }
    ctx->pc = 0x2D0D84u;
    SET_GPR_U32(ctx, 31, 0x2D0D8Cu);
    ctx->pc = 0x2D0D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0D84u;
            // 0x2d0d88: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0D8Cu; }
        if (ctx->pc != 0x2D0D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0D8Cu; }
        if (ctx->pc != 0x2D0D8Cu) { return; }
    }
    ctx->pc = 0x2D0D8Cu;
label_2d0d8c:
    // 0x2d0d8c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2d0d8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d0d90:
    // 0x2d0d90: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x2d0d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_2d0d94:
    // 0x2d0d94: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2d0d94u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2d0d98:
    // 0x2d0d98: 0xc04cbd8  jal         func_132F60
label_2d0d9c:
    if (ctx->pc == 0x2D0D9Cu) {
        ctx->pc = 0x2D0D9Cu;
            // 0x2d0d9c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2D0DA0u;
        goto label_2d0da0;
    }
    ctx->pc = 0x2D0D98u;
    SET_GPR_U32(ctx, 31, 0x2D0DA0u);
    ctx->pc = 0x2D0D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0D98u;
            // 0x2d0d9c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0DA0u; }
        if (ctx->pc != 0x2D0DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0DA0u; }
        if (ctx->pc != 0x2D0DA0u) { return; }
    }
    ctx->pc = 0x2D0DA0u;
label_2d0da0:
    // 0x2d0da0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2d0da0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d0da4:
    // 0x2d0da4: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x2d0da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_2d0da8:
    // 0x2d0da8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2d0da8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2d0dac:
    // 0x2d0dac: 0xc04cbd8  jal         func_132F60
label_2d0db0:
    if (ctx->pc == 0x2D0DB0u) {
        ctx->pc = 0x2D0DB0u;
            // 0x2d0db0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2D0DB4u;
        goto label_2d0db4;
    }
    ctx->pc = 0x2D0DACu;
    SET_GPR_U32(ctx, 31, 0x2D0DB4u);
    ctx->pc = 0x2D0DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0DACu;
            // 0x2d0db0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0DB4u; }
        if (ctx->pc != 0x2D0DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0DB4u; }
        if (ctx->pc != 0x2D0DB4u) { return; }
    }
    ctx->pc = 0x2D0DB4u;
label_2d0db4:
    // 0x2d0db4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2d0db4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d0db8:
    // 0x2d0db8: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2d0db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2d0dbc:
    // 0x2d0dbc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2d0dbcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2d0dc0:
    // 0x2d0dc0: 0xc04cbd8  jal         func_132F60
label_2d0dc4:
    if (ctx->pc == 0x2D0DC4u) {
        ctx->pc = 0x2D0DC4u;
            // 0x2d0dc4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2D0DC8u;
        goto label_2d0dc8;
    }
    ctx->pc = 0x2D0DC0u;
    SET_GPR_U32(ctx, 31, 0x2D0DC8u);
    ctx->pc = 0x2D0DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0DC0u;
            // 0x2d0dc4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0DC8u; }
        if (ctx->pc != 0x2D0DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0DC8u; }
        if (ctx->pc != 0x2D0DC8u) { return; }
    }
    ctx->pc = 0x2D0DC8u;
label_2d0dc8:
    // 0x2d0dc8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2d0dc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d0dcc:
    // 0x2d0dcc: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x2d0dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_2d0dd0:
    // 0x2d0dd0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2d0dd0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2d0dd4:
    // 0x2d0dd4: 0xc04cbd8  jal         func_132F60
label_2d0dd8:
    if (ctx->pc == 0x2D0DD8u) {
        ctx->pc = 0x2D0DD8u;
            // 0x2d0dd8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2D0DDCu;
        goto label_2d0ddc;
    }
    ctx->pc = 0x2D0DD4u;
    SET_GPR_U32(ctx, 31, 0x2D0DDCu);
    ctx->pc = 0x2D0DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0DD4u;
            // 0x2d0dd8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0DDCu; }
        if (ctx->pc != 0x2D0DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0DDCu; }
        if (ctx->pc != 0x2D0DDCu) { return; }
    }
    ctx->pc = 0x2D0DDCu;
label_2d0ddc:
    // 0x2d0ddc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2d0ddcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d0de0:
    // 0x2d0de0: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x2d0de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_2d0de4:
    // 0x2d0de4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2d0de4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2d0de8:
    // 0x2d0de8: 0xc04cbd8  jal         func_132F60
label_2d0dec:
    if (ctx->pc == 0x2D0DECu) {
        ctx->pc = 0x2D0DECu;
            // 0x2d0dec: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2D0DF0u;
        goto label_2d0df0;
    }
    ctx->pc = 0x2D0DE8u;
    SET_GPR_U32(ctx, 31, 0x2D0DF0u);
    ctx->pc = 0x2D0DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0DE8u;
            // 0x2d0dec: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0DF0u; }
        if (ctx->pc != 0x2D0DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0DF0u; }
        if (ctx->pc != 0x2D0DF0u) { return; }
    }
    ctx->pc = 0x2D0DF0u;
label_2d0df0:
    // 0x2d0df0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d0df0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d0df4:
    // 0x2d0df4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d0df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d0df8:
    // 0x2d0df8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d0df8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d0dfc:
    // 0x2d0dfc: 0x3e00008  jr          $ra
label_2d0e00:
    if (ctx->pc == 0x2D0E00u) {
        ctx->pc = 0x2D0E00u;
            // 0x2d0e00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2D0E04u;
        goto label_2d0e04;
    }
    ctx->pc = 0x2D0DFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0DFCu;
            // 0x2d0e00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D0E04u;
label_2d0e04:
    // 0x2d0e04: 0x0  nop
    ctx->pc = 0x2d0e04u;
    // NOP
label_2d0e08:
    // 0x2d0e08: 0x0  nop
    ctx->pc = 0x2d0e08u;
    // NOP
label_2d0e0c:
    // 0x2d0e0c: 0x0  nop
    ctx->pc = 0x2d0e0cu;
    // NOP
label_2d0e10:
    // 0x2d0e10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d0e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d0e14:
    // 0x2d0e14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d0e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2d0e18:
    // 0x2d0e18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d0e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2d0e1c:
    // 0x2d0e1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d0e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2d0e20:
    // 0x2d0e20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d0e20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d0e24:
    // 0x2d0e24: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
label_2d0e28:
    if (ctx->pc == 0x2D0E28u) {
        ctx->pc = 0x2D0E28u;
            // 0x2d0e28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D0E2Cu;
        goto label_2d0e2c;
    }
    ctx->pc = 0x2D0E24u;
    {
        const bool branch_taken_0x2d0e24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0E24u;
            // 0x2d0e28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0e24) {
            ctx->pc = 0x2D0E9Cu;
            goto label_2d0e9c;
        }
    }
    ctx->pc = 0x2D0E2Cu;
label_2d0e2c:
    // 0x2d0e2c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d0e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d0e30:
    // 0x2d0e30: 0x24422aa0  addiu       $v0, $v0, 0x2AA0
    ctx->pc = 0x2d0e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10912));
label_2d0e34:
    // 0x2d0e34: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_2d0e38:
    if (ctx->pc == 0x2D0E38u) {
        ctx->pc = 0x2D0E38u;
            // 0x2d0e38: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2D0E3Cu;
        goto label_2d0e3c;
    }
    ctx->pc = 0x2D0E34u;
    {
        const bool branch_taken_0x2d0e34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0E34u;
            // 0x2d0e38: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0e34) {
            ctx->pc = 0x2D0E84u;
            goto label_2d0e84;
        }
    }
    ctx->pc = 0x2D0E3Cu;
label_2d0e3c:
    // 0x2d0e3c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d0e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d0e40:
    // 0x2d0e40: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x2d0e40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_2d0e44:
    // 0x2d0e44: 0x24423290  addiu       $v0, $v0, 0x3290
    ctx->pc = 0x2d0e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12944));
label_2d0e48:
    // 0x2d0e48: 0x24841850  addiu       $a0, $a0, 0x1850
    ctx->pc = 0x2d0e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6224));
label_2d0e4c:
    // 0x2d0e4c: 0xc0ad6c4  jal         func_2B5B10
label_2d0e50:
    if (ctx->pc == 0x2D0E50u) {
        ctx->pc = 0x2D0E50u;
            // 0x2d0e50: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2D0E54u;
        goto label_2d0e54;
    }
    ctx->pc = 0x2D0E4Cu;
    SET_GPR_U32(ctx, 31, 0x2D0E54u);
    ctx->pc = 0x2D0E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0E4Cu;
            // 0x2d0e50: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B10u;
    if (runtime->hasFunction(0x2B5B10u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0E54u; }
        if (ctx->pc != 0x2D0E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5B10_0x2b5b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0E54u; }
        if (ctx->pc != 0x2D0E54u) { return; }
    }
    ctx->pc = 0x2D0E54u;
label_2d0e54:
    // 0x2d0e54: 0x26240458  addiu       $a0, $s1, 0x458
    ctx->pc = 0x2d0e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1112));
label_2d0e58:
    // 0x2d0e58: 0xc0ad670  jal         func_2B59C0
label_2d0e5c:
    if (ctx->pc == 0x2D0E5Cu) {
        ctx->pc = 0x2D0E5Cu;
            // 0x2d0e5c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2D0E60u;
        goto label_2d0e60;
    }
    ctx->pc = 0x2D0E58u;
    SET_GPR_U32(ctx, 31, 0x2D0E60u);
    ctx->pc = 0x2D0E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0E58u;
            // 0x2d0e5c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B59C0u;
    if (runtime->hasFunction(0x2B59C0u)) {
        auto targetFn = runtime->lookupFunction(0x2B59C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0E60u; }
        if (ctx->pc != 0x2D0E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B59C0_0x2b59c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0E60u; }
        if (ctx->pc != 0x2D0E60u) { return; }
    }
    ctx->pc = 0x2D0E60u;
label_2d0e60:
    // 0x2d0e60: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2d0e60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_2d0e64:
    // 0x2d0e64: 0x26240154  addiu       $a0, $s1, 0x154
    ctx->pc = 0x2d0e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 340));
label_2d0e68:
    // 0x2d0e68: 0x24a53260  addiu       $a1, $a1, 0x3260
    ctx->pc = 0x2d0e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12896));
label_2d0e6c:
    // 0x2d0e6c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2d0e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2d0e70:
    // 0x2d0e70: 0xc0407e8  jal         func_101FA0
label_2d0e74:
    if (ctx->pc == 0x2D0E74u) {
        ctx->pc = 0x2D0E74u;
            // 0x2d0e74: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x2D0E78u;
        goto label_2d0e78;
    }
    ctx->pc = 0x2D0E70u;
    SET_GPR_U32(ctx, 31, 0x2D0E78u);
    ctx->pc = 0x2D0E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0E70u;
            // 0x2d0e74: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0E78u; }
        if (ctx->pc != 0x2D0E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0E78u; }
        if (ctx->pc != 0x2D0E78u) { return; }
    }
    ctx->pc = 0x2D0E78u;
label_2d0e78:
    // 0x2d0e78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d0e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d0e7c:
    // 0x2d0e7c: 0xc0ad6c8  jal         func_2B5B20
label_2d0e80:
    if (ctx->pc == 0x2D0E80u) {
        ctx->pc = 0x2D0E80u;
            // 0x2d0e80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D0E84u;
        goto label_2d0e84;
    }
    ctx->pc = 0x2D0E7Cu;
    SET_GPR_U32(ctx, 31, 0x2D0E84u);
    ctx->pc = 0x2D0E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0E7Cu;
            // 0x2d0e80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B20u;
    if (runtime->hasFunction(0x2B5B20u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0E84u; }
        if (ctx->pc != 0x2D0E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5B20_0x2b5b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0E84u; }
        if (ctx->pc != 0x2D0E84u) { return; }
    }
    ctx->pc = 0x2D0E84u;
label_2d0e84:
    // 0x2d0e84: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2d0e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2d0e88:
    // 0x2d0e88: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d0e88u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2d0e8c:
    // 0x2d0e8c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2d0e90:
    if (ctx->pc == 0x2D0E90u) {
        ctx->pc = 0x2D0E90u;
            // 0x2d0e90: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D0E94u;
        goto label_2d0e94;
    }
    ctx->pc = 0x2D0E8Cu;
    {
        const bool branch_taken_0x2d0e8c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d0e8c) {
            ctx->pc = 0x2D0E90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0E8Cu;
            // 0x2d0e90: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D0EA0u;
            goto label_2d0ea0;
        }
    }
    ctx->pc = 0x2D0E94u;
label_2d0e94:
    // 0x2d0e94: 0xc0400a8  jal         func_1002A0
label_2d0e98:
    if (ctx->pc == 0x2D0E98u) {
        ctx->pc = 0x2D0E98u;
            // 0x2d0e98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D0E9Cu;
        goto label_2d0e9c;
    }
    ctx->pc = 0x2D0E94u;
    SET_GPR_U32(ctx, 31, 0x2D0E9Cu);
    ctx->pc = 0x2D0E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0E94u;
            // 0x2d0e98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0E9Cu; }
        if (ctx->pc != 0x2D0E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0E9Cu; }
        if (ctx->pc != 0x2D0E9Cu) { return; }
    }
    ctx->pc = 0x2D0E9Cu;
label_2d0e9c:
    // 0x2d0e9c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2d0e9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d0ea0:
    // 0x2d0ea0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d0ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d0ea4:
    // 0x2d0ea4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d0ea4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d0ea8:
    // 0x2d0ea8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d0ea8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d0eac:
    // 0x2d0eac: 0x3e00008  jr          $ra
label_2d0eb0:
    if (ctx->pc == 0x2D0EB0u) {
        ctx->pc = 0x2D0EB0u;
            // 0x2d0eb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2D0EB4u;
        goto label_2d0eb4;
    }
    ctx->pc = 0x2D0EACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0EACu;
            // 0x2d0eb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D0EB4u;
label_2d0eb4:
    // 0x2d0eb4: 0x0  nop
    ctx->pc = 0x2d0eb4u;
    // NOP
label_2d0eb8:
    // 0x2d0eb8: 0x0  nop
    ctx->pc = 0x2d0eb8u;
    // NOP
label_2d0ebc:
    // 0x2d0ebc: 0x0  nop
    ctx->pc = 0x2d0ebcu;
    // NOP
label_2d0ec0:
    // 0x2d0ec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d0ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d0ec4:
    // 0x2d0ec4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d0ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2d0ec8:
    // 0x2d0ec8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d0ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2d0ecc:
    // 0x2d0ecc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d0eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2d0ed0:
    // 0x2d0ed0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d0ed0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d0ed4:
    // 0x2d0ed4: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
label_2d0ed8:
    if (ctx->pc == 0x2D0ED8u) {
        ctx->pc = 0x2D0ED8u;
            // 0x2d0ed8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D0EDCu;
        goto label_2d0edc;
    }
    ctx->pc = 0x2D0ED4u;
    {
        const bool branch_taken_0x2d0ed4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0ED4u;
            // 0x2d0ed8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0ed4) {
            ctx->pc = 0x2D0F4Cu;
            goto label_2d0f4c;
        }
    }
    ctx->pc = 0x2D0EDCu;
label_2d0edc:
    // 0x2d0edc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d0edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d0ee0:
    // 0x2d0ee0: 0x24422af0  addiu       $v0, $v0, 0x2AF0
    ctx->pc = 0x2d0ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10992));
label_2d0ee4:
    // 0x2d0ee4: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_2d0ee8:
    if (ctx->pc == 0x2D0EE8u) {
        ctx->pc = 0x2D0EE8u;
            // 0x2d0ee8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2D0EECu;
        goto label_2d0eec;
    }
    ctx->pc = 0x2D0EE4u;
    {
        const bool branch_taken_0x2d0ee4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0EE4u;
            // 0x2d0ee8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0ee4) {
            ctx->pc = 0x2D0F34u;
            goto label_2d0f34;
        }
    }
    ctx->pc = 0x2D0EECu;
label_2d0eec:
    // 0x2d0eec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d0eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d0ef0:
    // 0x2d0ef0: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x2d0ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_2d0ef4:
    // 0x2d0ef4: 0x24423290  addiu       $v0, $v0, 0x3290
    ctx->pc = 0x2d0ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12944));
label_2d0ef8:
    // 0x2d0ef8: 0x24841850  addiu       $a0, $a0, 0x1850
    ctx->pc = 0x2d0ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6224));
label_2d0efc:
    // 0x2d0efc: 0xc0ad6c4  jal         func_2B5B10
label_2d0f00:
    if (ctx->pc == 0x2D0F00u) {
        ctx->pc = 0x2D0F00u;
            // 0x2d0f00: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2D0F04u;
        goto label_2d0f04;
    }
    ctx->pc = 0x2D0EFCu;
    SET_GPR_U32(ctx, 31, 0x2D0F04u);
    ctx->pc = 0x2D0F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0EFCu;
            // 0x2d0f00: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B10u;
    if (runtime->hasFunction(0x2B5B10u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0F04u; }
        if (ctx->pc != 0x2D0F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5B10_0x2b5b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0F04u; }
        if (ctx->pc != 0x2D0F04u) { return; }
    }
    ctx->pc = 0x2D0F04u;
label_2d0f04:
    // 0x2d0f04: 0x26240458  addiu       $a0, $s1, 0x458
    ctx->pc = 0x2d0f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1112));
label_2d0f08:
    // 0x2d0f08: 0xc0ad670  jal         func_2B59C0
label_2d0f0c:
    if (ctx->pc == 0x2D0F0Cu) {
        ctx->pc = 0x2D0F0Cu;
            // 0x2d0f0c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2D0F10u;
        goto label_2d0f10;
    }
    ctx->pc = 0x2D0F08u;
    SET_GPR_U32(ctx, 31, 0x2D0F10u);
    ctx->pc = 0x2D0F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0F08u;
            // 0x2d0f0c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B59C0u;
    if (runtime->hasFunction(0x2B59C0u)) {
        auto targetFn = runtime->lookupFunction(0x2B59C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0F10u; }
        if (ctx->pc != 0x2D0F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B59C0_0x2b59c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0F10u; }
        if (ctx->pc != 0x2D0F10u) { return; }
    }
    ctx->pc = 0x2D0F10u;
label_2d0f10:
    // 0x2d0f10: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2d0f10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_2d0f14:
    // 0x2d0f14: 0x26240154  addiu       $a0, $s1, 0x154
    ctx->pc = 0x2d0f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 340));
label_2d0f18:
    // 0x2d0f18: 0x24a53260  addiu       $a1, $a1, 0x3260
    ctx->pc = 0x2d0f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12896));
label_2d0f1c:
    // 0x2d0f1c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2d0f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2d0f20:
    // 0x2d0f20: 0xc0407e8  jal         func_101FA0
label_2d0f24:
    if (ctx->pc == 0x2D0F24u) {
        ctx->pc = 0x2D0F24u;
            // 0x2d0f24: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x2D0F28u;
        goto label_2d0f28;
    }
    ctx->pc = 0x2D0F20u;
    SET_GPR_U32(ctx, 31, 0x2D0F28u);
    ctx->pc = 0x2D0F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0F20u;
            // 0x2d0f24: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0F28u; }
        if (ctx->pc != 0x2D0F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0F28u; }
        if (ctx->pc != 0x2D0F28u) { return; }
    }
    ctx->pc = 0x2D0F28u;
label_2d0f28:
    // 0x2d0f28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d0f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d0f2c:
    // 0x2d0f2c: 0xc0ad6c8  jal         func_2B5B20
label_2d0f30:
    if (ctx->pc == 0x2D0F30u) {
        ctx->pc = 0x2D0F30u;
            // 0x2d0f30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D0F34u;
        goto label_2d0f34;
    }
    ctx->pc = 0x2D0F2Cu;
    SET_GPR_U32(ctx, 31, 0x2D0F34u);
    ctx->pc = 0x2D0F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0F2Cu;
            // 0x2d0f30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B20u;
    if (runtime->hasFunction(0x2B5B20u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0F34u; }
        if (ctx->pc != 0x2D0F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5B20_0x2b5b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0F34u; }
        if (ctx->pc != 0x2D0F34u) { return; }
    }
    ctx->pc = 0x2D0F34u;
label_2d0f34:
    // 0x2d0f34: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2d0f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2d0f38:
    // 0x2d0f38: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d0f38u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2d0f3c:
    // 0x2d0f3c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2d0f40:
    if (ctx->pc == 0x2D0F40u) {
        ctx->pc = 0x2D0F40u;
            // 0x2d0f40: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D0F44u;
        goto label_2d0f44;
    }
    ctx->pc = 0x2D0F3Cu;
    {
        const bool branch_taken_0x2d0f3c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d0f3c) {
            ctx->pc = 0x2D0F40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0F3Cu;
            // 0x2d0f40: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D0F50u;
            goto label_2d0f50;
        }
    }
    ctx->pc = 0x2D0F44u;
label_2d0f44:
    // 0x2d0f44: 0xc0400a8  jal         func_1002A0
label_2d0f48:
    if (ctx->pc == 0x2D0F48u) {
        ctx->pc = 0x2D0F48u;
            // 0x2d0f48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D0F4Cu;
        goto label_2d0f4c;
    }
    ctx->pc = 0x2D0F44u;
    SET_GPR_U32(ctx, 31, 0x2D0F4Cu);
    ctx->pc = 0x2D0F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0F44u;
            // 0x2d0f48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0F4Cu; }
        if (ctx->pc != 0x2D0F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0F4Cu; }
        if (ctx->pc != 0x2D0F4Cu) { return; }
    }
    ctx->pc = 0x2D0F4Cu;
label_2d0f4c:
    // 0x2d0f4c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2d0f4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d0f50:
    // 0x2d0f50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d0f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d0f54:
    // 0x2d0f54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d0f54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d0f58:
    // 0x2d0f58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d0f58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d0f5c:
    // 0x2d0f5c: 0x3e00008  jr          $ra
label_2d0f60:
    if (ctx->pc == 0x2D0F60u) {
        ctx->pc = 0x2D0F60u;
            // 0x2d0f60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2D0F64u;
        goto label_2d0f64;
    }
    ctx->pc = 0x2D0F5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0F5Cu;
            // 0x2d0f60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D0F64u;
label_2d0f64:
    // 0x2d0f64: 0x0  nop
    ctx->pc = 0x2d0f64u;
    // NOP
label_2d0f68:
    // 0x2d0f68: 0x0  nop
    ctx->pc = 0x2d0f68u;
    // NOP
label_2d0f6c:
    // 0x2d0f6c: 0x0  nop
    ctx->pc = 0x2d0f6cu;
    // NOP
label_2d0f70:
    // 0x2d0f70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d0f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d0f74:
    // 0x2d0f74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d0f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2d0f78:
    // 0x2d0f78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d0f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2d0f7c:
    // 0x2d0f7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d0f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2d0f80:
    // 0x2d0f80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d0f80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d0f84:
    // 0x2d0f84: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
label_2d0f88:
    if (ctx->pc == 0x2D0F88u) {
        ctx->pc = 0x2D0F88u;
            // 0x2d0f88: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D0F8Cu;
        goto label_2d0f8c;
    }
    ctx->pc = 0x2D0F84u;
    {
        const bool branch_taken_0x2d0f84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0F84u;
            // 0x2d0f88: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0f84) {
            ctx->pc = 0x2D0FFCu;
            goto label_2d0ffc;
        }
    }
    ctx->pc = 0x2D0F8Cu;
label_2d0f8c:
    // 0x2d0f8c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d0f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d0f90:
    // 0x2d0f90: 0x24422b40  addiu       $v0, $v0, 0x2B40
    ctx->pc = 0x2d0f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11072));
label_2d0f94:
    // 0x2d0f94: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_2d0f98:
    if (ctx->pc == 0x2D0F98u) {
        ctx->pc = 0x2D0F98u;
            // 0x2d0f98: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2D0F9Cu;
        goto label_2d0f9c;
    }
    ctx->pc = 0x2D0F94u;
    {
        const bool branch_taken_0x2d0f94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0F94u;
            // 0x2d0f98: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0f94) {
            ctx->pc = 0x2D0FE4u;
            goto label_2d0fe4;
        }
    }
    ctx->pc = 0x2D0F9Cu;
label_2d0f9c:
    // 0x2d0f9c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d0f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d0fa0:
    // 0x2d0fa0: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x2d0fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_2d0fa4:
    // 0x2d0fa4: 0x24423290  addiu       $v0, $v0, 0x3290
    ctx->pc = 0x2d0fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12944));
label_2d0fa8:
    // 0x2d0fa8: 0x24841850  addiu       $a0, $a0, 0x1850
    ctx->pc = 0x2d0fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6224));
label_2d0fac:
    // 0x2d0fac: 0xc0ad6c4  jal         func_2B5B10
label_2d0fb0:
    if (ctx->pc == 0x2D0FB0u) {
        ctx->pc = 0x2D0FB0u;
            // 0x2d0fb0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2D0FB4u;
        goto label_2d0fb4;
    }
    ctx->pc = 0x2D0FACu;
    SET_GPR_U32(ctx, 31, 0x2D0FB4u);
    ctx->pc = 0x2D0FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0FACu;
            // 0x2d0fb0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B10u;
    if (runtime->hasFunction(0x2B5B10u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0FB4u; }
        if (ctx->pc != 0x2D0FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5B10_0x2b5b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0FB4u; }
        if (ctx->pc != 0x2D0FB4u) { return; }
    }
    ctx->pc = 0x2D0FB4u;
label_2d0fb4:
    // 0x2d0fb4: 0x26240458  addiu       $a0, $s1, 0x458
    ctx->pc = 0x2d0fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1112));
label_2d0fb8:
    // 0x2d0fb8: 0xc0ad670  jal         func_2B59C0
label_2d0fbc:
    if (ctx->pc == 0x2D0FBCu) {
        ctx->pc = 0x2D0FBCu;
            // 0x2d0fbc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2D0FC0u;
        goto label_2d0fc0;
    }
    ctx->pc = 0x2D0FB8u;
    SET_GPR_U32(ctx, 31, 0x2D0FC0u);
    ctx->pc = 0x2D0FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0FB8u;
            // 0x2d0fbc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B59C0u;
    if (runtime->hasFunction(0x2B59C0u)) {
        auto targetFn = runtime->lookupFunction(0x2B59C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0FC0u; }
        if (ctx->pc != 0x2D0FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B59C0_0x2b59c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0FC0u; }
        if (ctx->pc != 0x2D0FC0u) { return; }
    }
    ctx->pc = 0x2D0FC0u;
label_2d0fc0:
    // 0x2d0fc0: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2d0fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_2d0fc4:
    // 0x2d0fc4: 0x26240154  addiu       $a0, $s1, 0x154
    ctx->pc = 0x2d0fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 340));
label_2d0fc8:
    // 0x2d0fc8: 0x24a53260  addiu       $a1, $a1, 0x3260
    ctx->pc = 0x2d0fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12896));
label_2d0fcc:
    // 0x2d0fcc: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2d0fccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2d0fd0:
    // 0x2d0fd0: 0xc0407e8  jal         func_101FA0
label_2d0fd4:
    if (ctx->pc == 0x2D0FD4u) {
        ctx->pc = 0x2D0FD4u;
            // 0x2d0fd4: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x2D0FD8u;
        goto label_2d0fd8;
    }
    ctx->pc = 0x2D0FD0u;
    SET_GPR_U32(ctx, 31, 0x2D0FD8u);
    ctx->pc = 0x2D0FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0FD0u;
            // 0x2d0fd4: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0FD8u; }
        if (ctx->pc != 0x2D0FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0FD8u; }
        if (ctx->pc != 0x2D0FD8u) { return; }
    }
    ctx->pc = 0x2D0FD8u;
label_2d0fd8:
    // 0x2d0fd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d0fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d0fdc:
    // 0x2d0fdc: 0xc0ad6c8  jal         func_2B5B20
label_2d0fe0:
    if (ctx->pc == 0x2D0FE0u) {
        ctx->pc = 0x2D0FE0u;
            // 0x2d0fe0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D0FE4u;
        goto label_2d0fe4;
    }
    ctx->pc = 0x2D0FDCu;
    SET_GPR_U32(ctx, 31, 0x2D0FE4u);
    ctx->pc = 0x2D0FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0FDCu;
            // 0x2d0fe0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B20u;
    if (runtime->hasFunction(0x2B5B20u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0FE4u; }
        if (ctx->pc != 0x2D0FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5B20_0x2b5b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0FE4u; }
        if (ctx->pc != 0x2D0FE4u) { return; }
    }
    ctx->pc = 0x2D0FE4u;
label_2d0fe4:
    // 0x2d0fe4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2d0fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2d0fe8:
    // 0x2d0fe8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d0fe8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2d0fec:
    // 0x2d0fec: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2d0ff0:
    if (ctx->pc == 0x2D0FF0u) {
        ctx->pc = 0x2D0FF0u;
            // 0x2d0ff0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D0FF4u;
        goto label_2d0ff4;
    }
    ctx->pc = 0x2D0FECu;
    {
        const bool branch_taken_0x2d0fec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d0fec) {
            ctx->pc = 0x2D0FF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0FECu;
            // 0x2d0ff0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D1000u;
            goto label_2d1000;
        }
    }
    ctx->pc = 0x2D0FF4u;
label_2d0ff4:
    // 0x2d0ff4: 0xc0400a8  jal         func_1002A0
label_2d0ff8:
    if (ctx->pc == 0x2D0FF8u) {
        ctx->pc = 0x2D0FF8u;
            // 0x2d0ff8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D0FFCu;
        goto label_2d0ffc;
    }
    ctx->pc = 0x2D0FF4u;
    SET_GPR_U32(ctx, 31, 0x2D0FFCu);
    ctx->pc = 0x2D0FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0FF4u;
            // 0x2d0ff8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0FFCu; }
        if (ctx->pc != 0x2D0FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0FFCu; }
        if (ctx->pc != 0x2D0FFCu) { return; }
    }
    ctx->pc = 0x2D0FFCu;
label_2d0ffc:
    // 0x2d0ffc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2d0ffcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d1000:
    // 0x2d1000: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d1000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d1004:
    // 0x2d1004: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d1004u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d1008:
    // 0x2d1008: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d1008u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d100c:
    // 0x2d100c: 0x3e00008  jr          $ra
label_2d1010:
    if (ctx->pc == 0x2D1010u) {
        ctx->pc = 0x2D1010u;
            // 0x2d1010: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2D1014u;
        goto label_2d1014;
    }
    ctx->pc = 0x2D100Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D100Cu;
            // 0x2d1010: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D1014u;
label_2d1014:
    // 0x2d1014: 0x0  nop
    ctx->pc = 0x2d1014u;
    // NOP
label_2d1018:
    // 0x2d1018: 0x0  nop
    ctx->pc = 0x2d1018u;
    // NOP
label_2d101c:
    // 0x2d101c: 0x0  nop
    ctx->pc = 0x2d101cu;
    // NOP
label_2d1020:
    // 0x2d1020: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d1020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d1024:
    // 0x2d1024: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d1024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2d1028:
    // 0x2d1028: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d1028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2d102c:
    // 0x2d102c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d102cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2d1030:
    // 0x2d1030: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d1030u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d1034:
    // 0x2d1034: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
label_2d1038:
    if (ctx->pc == 0x2D1038u) {
        ctx->pc = 0x2D1038u;
            // 0x2d1038: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D103Cu;
        goto label_2d103c;
    }
    ctx->pc = 0x2D1034u;
    {
        const bool branch_taken_0x2d1034 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1034u;
            // 0x2d1038: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1034) {
            ctx->pc = 0x2D10ACu;
            goto label_2d10ac;
        }
    }
    ctx->pc = 0x2D103Cu;
label_2d103c:
    // 0x2d103c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d103cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d1040:
    // 0x2d1040: 0x24422b90  addiu       $v0, $v0, 0x2B90
    ctx->pc = 0x2d1040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11152));
label_2d1044:
    // 0x2d1044: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_2d1048:
    if (ctx->pc == 0x2D1048u) {
        ctx->pc = 0x2D1048u;
            // 0x2d1048: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2D104Cu;
        goto label_2d104c;
    }
    ctx->pc = 0x2D1044u;
    {
        const bool branch_taken_0x2d1044 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1044u;
            // 0x2d1048: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1044) {
            ctx->pc = 0x2D1094u;
            goto label_2d1094;
        }
    }
    ctx->pc = 0x2D104Cu;
label_2d104c:
    // 0x2d104c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d104cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d1050:
    // 0x2d1050: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x2d1050u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_2d1054:
    // 0x2d1054: 0x24423290  addiu       $v0, $v0, 0x3290
    ctx->pc = 0x2d1054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12944));
label_2d1058:
    // 0x2d1058: 0x24841850  addiu       $a0, $a0, 0x1850
    ctx->pc = 0x2d1058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6224));
label_2d105c:
    // 0x2d105c: 0xc0ad6c4  jal         func_2B5B10
label_2d1060:
    if (ctx->pc == 0x2D1060u) {
        ctx->pc = 0x2D1060u;
            // 0x2d1060: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2D1064u;
        goto label_2d1064;
    }
    ctx->pc = 0x2D105Cu;
    SET_GPR_U32(ctx, 31, 0x2D1064u);
    ctx->pc = 0x2D1060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D105Cu;
            // 0x2d1060: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B10u;
    if (runtime->hasFunction(0x2B5B10u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1064u; }
        if (ctx->pc != 0x2D1064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5B10_0x2b5b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1064u; }
        if (ctx->pc != 0x2D1064u) { return; }
    }
    ctx->pc = 0x2D1064u;
label_2d1064:
    // 0x2d1064: 0x26240458  addiu       $a0, $s1, 0x458
    ctx->pc = 0x2d1064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1112));
label_2d1068:
    // 0x2d1068: 0xc0ad670  jal         func_2B59C0
label_2d106c:
    if (ctx->pc == 0x2D106Cu) {
        ctx->pc = 0x2D106Cu;
            // 0x2d106c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2D1070u;
        goto label_2d1070;
    }
    ctx->pc = 0x2D1068u;
    SET_GPR_U32(ctx, 31, 0x2D1070u);
    ctx->pc = 0x2D106Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1068u;
            // 0x2d106c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B59C0u;
    if (runtime->hasFunction(0x2B59C0u)) {
        auto targetFn = runtime->lookupFunction(0x2B59C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1070u; }
        if (ctx->pc != 0x2D1070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B59C0_0x2b59c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1070u; }
        if (ctx->pc != 0x2D1070u) { return; }
    }
    ctx->pc = 0x2D1070u;
label_2d1070:
    // 0x2d1070: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2d1070u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_2d1074:
    // 0x2d1074: 0x26240154  addiu       $a0, $s1, 0x154
    ctx->pc = 0x2d1074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 340));
label_2d1078:
    // 0x2d1078: 0x24a53260  addiu       $a1, $a1, 0x3260
    ctx->pc = 0x2d1078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12896));
label_2d107c:
    // 0x2d107c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2d107cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2d1080:
    // 0x2d1080: 0xc0407e8  jal         func_101FA0
label_2d1084:
    if (ctx->pc == 0x2D1084u) {
        ctx->pc = 0x2D1084u;
            // 0x2d1084: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x2D1088u;
        goto label_2d1088;
    }
    ctx->pc = 0x2D1080u;
    SET_GPR_U32(ctx, 31, 0x2D1088u);
    ctx->pc = 0x2D1084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1080u;
            // 0x2d1084: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1088u; }
        if (ctx->pc != 0x2D1088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1088u; }
        if (ctx->pc != 0x2D1088u) { return; }
    }
    ctx->pc = 0x2D1088u;
label_2d1088:
    // 0x2d1088: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d1088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d108c:
    // 0x2d108c: 0xc0ad6c8  jal         func_2B5B20
label_2d1090:
    if (ctx->pc == 0x2D1090u) {
        ctx->pc = 0x2D1090u;
            // 0x2d1090: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D1094u;
        goto label_2d1094;
    }
    ctx->pc = 0x2D108Cu;
    SET_GPR_U32(ctx, 31, 0x2D1094u);
    ctx->pc = 0x2D1090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D108Cu;
            // 0x2d1090: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B20u;
    if (runtime->hasFunction(0x2B5B20u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1094u; }
        if (ctx->pc != 0x2D1094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5B20_0x2b5b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1094u; }
        if (ctx->pc != 0x2D1094u) { return; }
    }
    ctx->pc = 0x2D1094u;
label_2d1094:
    // 0x2d1094: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2d1094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2d1098:
    // 0x2d1098: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d1098u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2d109c:
    // 0x2d109c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2d10a0:
    if (ctx->pc == 0x2D10A0u) {
        ctx->pc = 0x2D10A0u;
            // 0x2d10a0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D10A4u;
        goto label_2d10a4;
    }
    ctx->pc = 0x2D109Cu;
    {
        const bool branch_taken_0x2d109c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d109c) {
            ctx->pc = 0x2D10A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D109Cu;
            // 0x2d10a0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D10B0u;
            goto label_2d10b0;
        }
    }
    ctx->pc = 0x2D10A4u;
label_2d10a4:
    // 0x2d10a4: 0xc0400a8  jal         func_1002A0
label_2d10a8:
    if (ctx->pc == 0x2D10A8u) {
        ctx->pc = 0x2D10A8u;
            // 0x2d10a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D10ACu;
        goto label_2d10ac;
    }
    ctx->pc = 0x2D10A4u;
    SET_GPR_U32(ctx, 31, 0x2D10ACu);
    ctx->pc = 0x2D10A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D10A4u;
            // 0x2d10a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D10ACu; }
        if (ctx->pc != 0x2D10ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D10ACu; }
        if (ctx->pc != 0x2D10ACu) { return; }
    }
    ctx->pc = 0x2D10ACu;
label_2d10ac:
    // 0x2d10ac: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2d10acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d10b0:
    // 0x2d10b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d10b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d10b4:
    // 0x2d10b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d10b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d10b8:
    // 0x2d10b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d10b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d10bc:
    // 0x2d10bc: 0x3e00008  jr          $ra
label_2d10c0:
    if (ctx->pc == 0x2D10C0u) {
        ctx->pc = 0x2D10C0u;
            // 0x2d10c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2D10C4u;
        goto label_2d10c4;
    }
    ctx->pc = 0x2D10BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D10C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D10BCu;
            // 0x2d10c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D10C4u;
label_2d10c4:
    // 0x2d10c4: 0x0  nop
    ctx->pc = 0x2d10c4u;
    // NOP
label_2d10c8:
    // 0x2d10c8: 0x0  nop
    ctx->pc = 0x2d10c8u;
    // NOP
label_2d10cc:
    // 0x2d10cc: 0x0  nop
    ctx->pc = 0x2d10ccu;
    // NOP
label_2d10d0:
    // 0x2d10d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d10d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d10d4:
    // 0x2d10d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d10d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2d10d8:
    // 0x2d10d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d10d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2d10dc:
    // 0x2d10dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d10dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2d10e0:
    // 0x2d10e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d10e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d10e4:
    // 0x2d10e4: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
label_2d10e8:
    if (ctx->pc == 0x2D10E8u) {
        ctx->pc = 0x2D10E8u;
            // 0x2d10e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D10ECu;
        goto label_2d10ec;
    }
    ctx->pc = 0x2D10E4u;
    {
        const bool branch_taken_0x2d10e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D10E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D10E4u;
            // 0x2d10e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d10e4) {
            ctx->pc = 0x2D115Cu;
            goto label_2d115c;
        }
    }
    ctx->pc = 0x2D10ECu;
label_2d10ec:
    // 0x2d10ec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d10ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d10f0:
    // 0x2d10f0: 0x24422be0  addiu       $v0, $v0, 0x2BE0
    ctx->pc = 0x2d10f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11232));
label_2d10f4:
    // 0x2d10f4: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_2d10f8:
    if (ctx->pc == 0x2D10F8u) {
        ctx->pc = 0x2D10F8u;
            // 0x2d10f8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2D10FCu;
        goto label_2d10fc;
    }
    ctx->pc = 0x2D10F4u;
    {
        const bool branch_taken_0x2d10f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D10F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D10F4u;
            // 0x2d10f8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d10f4) {
            ctx->pc = 0x2D1144u;
            goto label_2d1144;
        }
    }
    ctx->pc = 0x2D10FCu;
label_2d10fc:
    // 0x2d10fc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d10fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d1100:
    // 0x2d1100: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x2d1100u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_2d1104:
    // 0x2d1104: 0x24423290  addiu       $v0, $v0, 0x3290
    ctx->pc = 0x2d1104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12944));
label_2d1108:
    // 0x2d1108: 0x24841850  addiu       $a0, $a0, 0x1850
    ctx->pc = 0x2d1108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6224));
label_2d110c:
    // 0x2d110c: 0xc0ad6c4  jal         func_2B5B10
label_2d1110:
    if (ctx->pc == 0x2D1110u) {
        ctx->pc = 0x2D1110u;
            // 0x2d1110: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2D1114u;
        goto label_2d1114;
    }
    ctx->pc = 0x2D110Cu;
    SET_GPR_U32(ctx, 31, 0x2D1114u);
    ctx->pc = 0x2D1110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D110Cu;
            // 0x2d1110: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B10u;
    if (runtime->hasFunction(0x2B5B10u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1114u; }
        if (ctx->pc != 0x2D1114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5B10_0x2b5b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1114u; }
        if (ctx->pc != 0x2D1114u) { return; }
    }
    ctx->pc = 0x2D1114u;
label_2d1114:
    // 0x2d1114: 0x26240458  addiu       $a0, $s1, 0x458
    ctx->pc = 0x2d1114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1112));
label_2d1118:
    // 0x2d1118: 0xc0ad670  jal         func_2B59C0
label_2d111c:
    if (ctx->pc == 0x2D111Cu) {
        ctx->pc = 0x2D111Cu;
            // 0x2d111c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2D1120u;
        goto label_2d1120;
    }
    ctx->pc = 0x2D1118u;
    SET_GPR_U32(ctx, 31, 0x2D1120u);
    ctx->pc = 0x2D111Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1118u;
            // 0x2d111c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B59C0u;
    if (runtime->hasFunction(0x2B59C0u)) {
        auto targetFn = runtime->lookupFunction(0x2B59C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1120u; }
        if (ctx->pc != 0x2D1120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B59C0_0x2b59c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1120u; }
        if (ctx->pc != 0x2D1120u) { return; }
    }
    ctx->pc = 0x2D1120u;
label_2d1120:
    // 0x2d1120: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2d1120u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_2d1124:
    // 0x2d1124: 0x26240154  addiu       $a0, $s1, 0x154
    ctx->pc = 0x2d1124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 340));
label_2d1128:
    // 0x2d1128: 0x24a53260  addiu       $a1, $a1, 0x3260
    ctx->pc = 0x2d1128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12896));
label_2d112c:
    // 0x2d112c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2d112cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2d1130:
    // 0x2d1130: 0xc0407e8  jal         func_101FA0
label_2d1134:
    if (ctx->pc == 0x2D1134u) {
        ctx->pc = 0x2D1134u;
            // 0x2d1134: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x2D1138u;
        goto label_2d1138;
    }
    ctx->pc = 0x2D1130u;
    SET_GPR_U32(ctx, 31, 0x2D1138u);
    ctx->pc = 0x2D1134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1130u;
            // 0x2d1134: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1138u; }
        if (ctx->pc != 0x2D1138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1138u; }
        if (ctx->pc != 0x2D1138u) { return; }
    }
    ctx->pc = 0x2D1138u;
label_2d1138:
    // 0x2d1138: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d1138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d113c:
    // 0x2d113c: 0xc0ad6c8  jal         func_2B5B20
label_2d1140:
    if (ctx->pc == 0x2D1140u) {
        ctx->pc = 0x2D1140u;
            // 0x2d1140: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D1144u;
        goto label_2d1144;
    }
    ctx->pc = 0x2D113Cu;
    SET_GPR_U32(ctx, 31, 0x2D1144u);
    ctx->pc = 0x2D1140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D113Cu;
            // 0x2d1140: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B20u;
    if (runtime->hasFunction(0x2B5B20u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1144u; }
        if (ctx->pc != 0x2D1144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5B20_0x2b5b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1144u; }
        if (ctx->pc != 0x2D1144u) { return; }
    }
    ctx->pc = 0x2D1144u;
label_2d1144:
    // 0x2d1144: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2d1144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2d1148:
    // 0x2d1148: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d1148u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2d114c:
    // 0x2d114c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2d1150:
    if (ctx->pc == 0x2D1150u) {
        ctx->pc = 0x2D1150u;
            // 0x2d1150: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D1154u;
        goto label_2d1154;
    }
    ctx->pc = 0x2D114Cu;
    {
        const bool branch_taken_0x2d114c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d114c) {
            ctx->pc = 0x2D1150u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D114Cu;
            // 0x2d1150: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D1160u;
            goto label_2d1160;
        }
    }
    ctx->pc = 0x2D1154u;
label_2d1154:
    // 0x2d1154: 0xc0400a8  jal         func_1002A0
label_2d1158:
    if (ctx->pc == 0x2D1158u) {
        ctx->pc = 0x2D1158u;
            // 0x2d1158: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D115Cu;
        goto label_2d115c;
    }
    ctx->pc = 0x2D1154u;
    SET_GPR_U32(ctx, 31, 0x2D115Cu);
    ctx->pc = 0x2D1158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1154u;
            // 0x2d1158: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D115Cu; }
        if (ctx->pc != 0x2D115Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D115Cu; }
        if (ctx->pc != 0x2D115Cu) { return; }
    }
    ctx->pc = 0x2D115Cu;
label_2d115c:
    // 0x2d115c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2d115cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d1160:
    // 0x2d1160: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d1160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d1164:
    // 0x2d1164: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d1164u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d1168:
    // 0x2d1168: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d1168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d116c:
    // 0x2d116c: 0x3e00008  jr          $ra
label_2d1170:
    if (ctx->pc == 0x2D1170u) {
        ctx->pc = 0x2D1170u;
            // 0x2d1170: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2D1174u;
        goto label_2d1174;
    }
    ctx->pc = 0x2D116Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D116Cu;
            // 0x2d1170: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D1174u;
label_2d1174:
    // 0x2d1174: 0x0  nop
    ctx->pc = 0x2d1174u;
    // NOP
label_2d1178:
    // 0x2d1178: 0x0  nop
    ctx->pc = 0x2d1178u;
    // NOP
label_2d117c:
    // 0x2d117c: 0x0  nop
    ctx->pc = 0x2d117cu;
    // NOP
label_2d1180:
    // 0x2d1180: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d1180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d1184:
    // 0x2d1184: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d1184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2d1188:
    // 0x2d1188: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d1188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2d118c:
    // 0x2d118c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d118cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2d1190:
    // 0x2d1190: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d1190u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d1194:
    // 0x2d1194: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
label_2d1198:
    if (ctx->pc == 0x2D1198u) {
        ctx->pc = 0x2D1198u;
            // 0x2d1198: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D119Cu;
        goto label_2d119c;
    }
    ctx->pc = 0x2D1194u;
    {
        const bool branch_taken_0x2d1194 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1194u;
            // 0x2d1198: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1194) {
            ctx->pc = 0x2D120Cu;
            goto label_2d120c;
        }
    }
    ctx->pc = 0x2D119Cu;
label_2d119c:
    // 0x2d119c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d119cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d11a0:
    // 0x2d11a0: 0x24422c30  addiu       $v0, $v0, 0x2C30
    ctx->pc = 0x2d11a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11312));
label_2d11a4:
    // 0x2d11a4: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_2d11a8:
    if (ctx->pc == 0x2D11A8u) {
        ctx->pc = 0x2D11A8u;
            // 0x2d11a8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2D11ACu;
        goto label_2d11ac;
    }
    ctx->pc = 0x2D11A4u;
    {
        const bool branch_taken_0x2d11a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D11A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D11A4u;
            // 0x2d11a8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d11a4) {
            ctx->pc = 0x2D11F4u;
            goto label_2d11f4;
        }
    }
    ctx->pc = 0x2D11ACu;
label_2d11ac:
    // 0x2d11ac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d11acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d11b0:
    // 0x2d11b0: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x2d11b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_2d11b4:
    // 0x2d11b4: 0x24423290  addiu       $v0, $v0, 0x3290
    ctx->pc = 0x2d11b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12944));
label_2d11b8:
    // 0x2d11b8: 0x24841850  addiu       $a0, $a0, 0x1850
    ctx->pc = 0x2d11b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6224));
label_2d11bc:
    // 0x2d11bc: 0xc0ad6c4  jal         func_2B5B10
label_2d11c0:
    if (ctx->pc == 0x2D11C0u) {
        ctx->pc = 0x2D11C0u;
            // 0x2d11c0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2D11C4u;
        goto label_2d11c4;
    }
    ctx->pc = 0x2D11BCu;
    SET_GPR_U32(ctx, 31, 0x2D11C4u);
    ctx->pc = 0x2D11C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D11BCu;
            // 0x2d11c0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B10u;
    if (runtime->hasFunction(0x2B5B10u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D11C4u; }
        if (ctx->pc != 0x2D11C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5B10_0x2b5b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D11C4u; }
        if (ctx->pc != 0x2D11C4u) { return; }
    }
    ctx->pc = 0x2D11C4u;
label_2d11c4:
    // 0x2d11c4: 0x26240458  addiu       $a0, $s1, 0x458
    ctx->pc = 0x2d11c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1112));
label_2d11c8:
    // 0x2d11c8: 0xc0ad670  jal         func_2B59C0
label_2d11cc:
    if (ctx->pc == 0x2D11CCu) {
        ctx->pc = 0x2D11CCu;
            // 0x2d11cc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2D11D0u;
        goto label_2d11d0;
    }
    ctx->pc = 0x2D11C8u;
    SET_GPR_U32(ctx, 31, 0x2D11D0u);
    ctx->pc = 0x2D11CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D11C8u;
            // 0x2d11cc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B59C0u;
    if (runtime->hasFunction(0x2B59C0u)) {
        auto targetFn = runtime->lookupFunction(0x2B59C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D11D0u; }
        if (ctx->pc != 0x2D11D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B59C0_0x2b59c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D11D0u; }
        if (ctx->pc != 0x2D11D0u) { return; }
    }
    ctx->pc = 0x2D11D0u;
label_2d11d0:
    // 0x2d11d0: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2d11d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_2d11d4:
    // 0x2d11d4: 0x26240154  addiu       $a0, $s1, 0x154
    ctx->pc = 0x2d11d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 340));
label_2d11d8:
    // 0x2d11d8: 0x24a53260  addiu       $a1, $a1, 0x3260
    ctx->pc = 0x2d11d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12896));
label_2d11dc:
    // 0x2d11dc: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2d11dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2d11e0:
    // 0x2d11e0: 0xc0407e8  jal         func_101FA0
label_2d11e4:
    if (ctx->pc == 0x2D11E4u) {
        ctx->pc = 0x2D11E4u;
            // 0x2d11e4: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x2D11E8u;
        goto label_2d11e8;
    }
    ctx->pc = 0x2D11E0u;
    SET_GPR_U32(ctx, 31, 0x2D11E8u);
    ctx->pc = 0x2D11E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D11E0u;
            // 0x2d11e4: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D11E8u; }
        if (ctx->pc != 0x2D11E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D11E8u; }
        if (ctx->pc != 0x2D11E8u) { return; }
    }
    ctx->pc = 0x2D11E8u;
label_2d11e8:
    // 0x2d11e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d11e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d11ec:
    // 0x2d11ec: 0xc0ad6c8  jal         func_2B5B20
label_2d11f0:
    if (ctx->pc == 0x2D11F0u) {
        ctx->pc = 0x2D11F0u;
            // 0x2d11f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D11F4u;
        goto label_2d11f4;
    }
    ctx->pc = 0x2D11ECu;
    SET_GPR_U32(ctx, 31, 0x2D11F4u);
    ctx->pc = 0x2D11F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D11ECu;
            // 0x2d11f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B20u;
    if (runtime->hasFunction(0x2B5B20u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D11F4u; }
        if (ctx->pc != 0x2D11F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5B20_0x2b5b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D11F4u; }
        if (ctx->pc != 0x2D11F4u) { return; }
    }
    ctx->pc = 0x2D11F4u;
label_2d11f4:
    // 0x2d11f4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2d11f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2d11f8:
    // 0x2d11f8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d11f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2d11fc:
    // 0x2d11fc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2d1200:
    if (ctx->pc == 0x2D1200u) {
        ctx->pc = 0x2D1200u;
            // 0x2d1200: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D1204u;
        goto label_2d1204;
    }
    ctx->pc = 0x2D11FCu;
    {
        const bool branch_taken_0x2d11fc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d11fc) {
            ctx->pc = 0x2D1200u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D11FCu;
            // 0x2d1200: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D1210u;
            goto label_2d1210;
        }
    }
    ctx->pc = 0x2D1204u;
label_2d1204:
    // 0x2d1204: 0xc0400a8  jal         func_1002A0
label_2d1208:
    if (ctx->pc == 0x2D1208u) {
        ctx->pc = 0x2D1208u;
            // 0x2d1208: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D120Cu;
        goto label_2d120c;
    }
    ctx->pc = 0x2D1204u;
    SET_GPR_U32(ctx, 31, 0x2D120Cu);
    ctx->pc = 0x2D1208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1204u;
            // 0x2d1208: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D120Cu; }
        if (ctx->pc != 0x2D120Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D120Cu; }
        if (ctx->pc != 0x2D120Cu) { return; }
    }
    ctx->pc = 0x2D120Cu;
label_2d120c:
    // 0x2d120c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2d120cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d1210:
    // 0x2d1210: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d1210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d1214:
    // 0x2d1214: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d1214u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d1218:
    // 0x2d1218: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d1218u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d121c:
    // 0x2d121c: 0x3e00008  jr          $ra
label_2d1220:
    if (ctx->pc == 0x2D1220u) {
        ctx->pc = 0x2D1220u;
            // 0x2d1220: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2D1224u;
        goto label_2d1224;
    }
    ctx->pc = 0x2D121Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D121Cu;
            // 0x2d1220: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D1224u;
label_2d1224:
    // 0x2d1224: 0x0  nop
    ctx->pc = 0x2d1224u;
    // NOP
label_2d1228:
    // 0x2d1228: 0x0  nop
    ctx->pc = 0x2d1228u;
    // NOP
label_2d122c:
    // 0x2d122c: 0x0  nop
    ctx->pc = 0x2d122cu;
    // NOP
label_2d1230:
    // 0x2d1230: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d1230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d1234:
    // 0x2d1234: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d1234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2d1238:
    // 0x2d1238: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d1238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2d123c:
    // 0x2d123c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d123cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2d1240:
    // 0x2d1240: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d1240u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d1244:
    // 0x2d1244: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
label_2d1248:
    if (ctx->pc == 0x2D1248u) {
        ctx->pc = 0x2D1248u;
            // 0x2d1248: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D124Cu;
        goto label_2d124c;
    }
    ctx->pc = 0x2D1244u;
    {
        const bool branch_taken_0x2d1244 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1244u;
            // 0x2d1248: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1244) {
            ctx->pc = 0x2D12BCu;
            goto label_2d12bc;
        }
    }
    ctx->pc = 0x2D124Cu;
label_2d124c:
    // 0x2d124c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d124cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d1250:
    // 0x2d1250: 0x24422c80  addiu       $v0, $v0, 0x2C80
    ctx->pc = 0x2d1250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11392));
label_2d1254:
    // 0x2d1254: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_2d1258:
    if (ctx->pc == 0x2D1258u) {
        ctx->pc = 0x2D1258u;
            // 0x2d1258: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2D125Cu;
        goto label_2d125c;
    }
    ctx->pc = 0x2D1254u;
    {
        const bool branch_taken_0x2d1254 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1254u;
            // 0x2d1258: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1254) {
            ctx->pc = 0x2D12A4u;
            goto label_2d12a4;
        }
    }
    ctx->pc = 0x2D125Cu;
label_2d125c:
    // 0x2d125c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d125cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d1260:
    // 0x2d1260: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x2d1260u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_2d1264:
    // 0x2d1264: 0x24423290  addiu       $v0, $v0, 0x3290
    ctx->pc = 0x2d1264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12944));
label_2d1268:
    // 0x2d1268: 0x24841850  addiu       $a0, $a0, 0x1850
    ctx->pc = 0x2d1268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6224));
label_2d126c:
    // 0x2d126c: 0xc0ad6c4  jal         func_2B5B10
label_2d1270:
    if (ctx->pc == 0x2D1270u) {
        ctx->pc = 0x2D1270u;
            // 0x2d1270: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2D1274u;
        goto label_2d1274;
    }
    ctx->pc = 0x2D126Cu;
    SET_GPR_U32(ctx, 31, 0x2D1274u);
    ctx->pc = 0x2D1270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D126Cu;
            // 0x2d1270: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B10u;
    if (runtime->hasFunction(0x2B5B10u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1274u; }
        if (ctx->pc != 0x2D1274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5B10_0x2b5b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1274u; }
        if (ctx->pc != 0x2D1274u) { return; }
    }
    ctx->pc = 0x2D1274u;
label_2d1274:
    // 0x2d1274: 0x26240458  addiu       $a0, $s1, 0x458
    ctx->pc = 0x2d1274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1112));
label_2d1278:
    // 0x2d1278: 0xc0ad670  jal         func_2B59C0
label_2d127c:
    if (ctx->pc == 0x2D127Cu) {
        ctx->pc = 0x2D127Cu;
            // 0x2d127c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2D1280u;
        goto label_2d1280;
    }
    ctx->pc = 0x2D1278u;
    SET_GPR_U32(ctx, 31, 0x2D1280u);
    ctx->pc = 0x2D127Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1278u;
            // 0x2d127c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B59C0u;
    if (runtime->hasFunction(0x2B59C0u)) {
        auto targetFn = runtime->lookupFunction(0x2B59C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1280u; }
        if (ctx->pc != 0x2D1280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B59C0_0x2b59c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1280u; }
        if (ctx->pc != 0x2D1280u) { return; }
    }
    ctx->pc = 0x2D1280u;
label_2d1280:
    // 0x2d1280: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2d1280u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_2d1284:
    // 0x2d1284: 0x26240154  addiu       $a0, $s1, 0x154
    ctx->pc = 0x2d1284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 340));
label_2d1288:
    // 0x2d1288: 0x24a53260  addiu       $a1, $a1, 0x3260
    ctx->pc = 0x2d1288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12896));
label_2d128c:
    // 0x2d128c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2d128cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2d1290:
    // 0x2d1290: 0xc0407e8  jal         func_101FA0
label_2d1294:
    if (ctx->pc == 0x2D1294u) {
        ctx->pc = 0x2D1294u;
            // 0x2d1294: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x2D1298u;
        goto label_2d1298;
    }
    ctx->pc = 0x2D1290u;
    SET_GPR_U32(ctx, 31, 0x2D1298u);
    ctx->pc = 0x2D1294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1290u;
            // 0x2d1294: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1298u; }
        if (ctx->pc != 0x2D1298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1298u; }
        if (ctx->pc != 0x2D1298u) { return; }
    }
    ctx->pc = 0x2D1298u;
label_2d1298:
    // 0x2d1298: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d1298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d129c:
    // 0x2d129c: 0xc0ad6c8  jal         func_2B5B20
label_2d12a0:
    if (ctx->pc == 0x2D12A0u) {
        ctx->pc = 0x2D12A0u;
            // 0x2d12a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D12A4u;
        goto label_2d12a4;
    }
    ctx->pc = 0x2D129Cu;
    SET_GPR_U32(ctx, 31, 0x2D12A4u);
    ctx->pc = 0x2D12A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D129Cu;
            // 0x2d12a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B20u;
    if (runtime->hasFunction(0x2B5B20u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D12A4u; }
        if (ctx->pc != 0x2D12A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5B20_0x2b5b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D12A4u; }
        if (ctx->pc != 0x2D12A4u) { return; }
    }
    ctx->pc = 0x2D12A4u;
label_2d12a4:
    // 0x2d12a4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2d12a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2d12a8:
    // 0x2d12a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d12a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2d12ac:
    // 0x2d12ac: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2d12b0:
    if (ctx->pc == 0x2D12B0u) {
        ctx->pc = 0x2D12B0u;
            // 0x2d12b0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D12B4u;
        goto label_2d12b4;
    }
    ctx->pc = 0x2D12ACu;
    {
        const bool branch_taken_0x2d12ac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d12ac) {
            ctx->pc = 0x2D12B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D12ACu;
            // 0x2d12b0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D12C0u;
            goto label_2d12c0;
        }
    }
    ctx->pc = 0x2D12B4u;
label_2d12b4:
    // 0x2d12b4: 0xc0400a8  jal         func_1002A0
label_2d12b8:
    if (ctx->pc == 0x2D12B8u) {
        ctx->pc = 0x2D12B8u;
            // 0x2d12b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D12BCu;
        goto label_2d12bc;
    }
    ctx->pc = 0x2D12B4u;
    SET_GPR_U32(ctx, 31, 0x2D12BCu);
    ctx->pc = 0x2D12B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D12B4u;
            // 0x2d12b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D12BCu; }
        if (ctx->pc != 0x2D12BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D12BCu; }
        if (ctx->pc != 0x2D12BCu) { return; }
    }
    ctx->pc = 0x2D12BCu;
label_2d12bc:
    // 0x2d12bc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2d12bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d12c0:
    // 0x2d12c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d12c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d12c4:
    // 0x2d12c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d12c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d12c8:
    // 0x2d12c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d12c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d12cc:
    // 0x2d12cc: 0x3e00008  jr          $ra
label_2d12d0:
    if (ctx->pc == 0x2D12D0u) {
        ctx->pc = 0x2D12D0u;
            // 0x2d12d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2D12D4u;
        goto label_2d12d4;
    }
    ctx->pc = 0x2D12CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D12D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D12CCu;
            // 0x2d12d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D12D4u;
label_2d12d4:
    // 0x2d12d4: 0x0  nop
    ctx->pc = 0x2d12d4u;
    // NOP
label_2d12d8:
    // 0x2d12d8: 0x0  nop
    ctx->pc = 0x2d12d8u;
    // NOP
label_2d12dc:
    // 0x2d12dc: 0x0  nop
    ctx->pc = 0x2d12dcu;
    // NOP
label_2d12e0:
    // 0x2d12e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d12e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d12e4:
    // 0x2d12e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d12e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2d12e8:
    // 0x2d12e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d12e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2d12ec:
    // 0x2d12ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d12ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2d12f0:
    // 0x2d12f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d12f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d12f4:
    // 0x2d12f4: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
label_2d12f8:
    if (ctx->pc == 0x2D12F8u) {
        ctx->pc = 0x2D12F8u;
            // 0x2d12f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D12FCu;
        goto label_2d12fc;
    }
    ctx->pc = 0x2D12F4u;
    {
        const bool branch_taken_0x2d12f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D12F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D12F4u;
            // 0x2d12f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d12f4) {
            ctx->pc = 0x2D136Cu;
            goto label_2d136c;
        }
    }
    ctx->pc = 0x2D12FCu;
label_2d12fc:
    // 0x2d12fc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d12fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d1300:
    // 0x2d1300: 0x24422cd0  addiu       $v0, $v0, 0x2CD0
    ctx->pc = 0x2d1300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11472));
label_2d1304:
    // 0x2d1304: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_2d1308:
    if (ctx->pc == 0x2D1308u) {
        ctx->pc = 0x2D1308u;
            // 0x2d1308: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2D130Cu;
        goto label_2d130c;
    }
    ctx->pc = 0x2D1304u;
    {
        const bool branch_taken_0x2d1304 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1304u;
            // 0x2d1308: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1304) {
            ctx->pc = 0x2D1354u;
            goto label_2d1354;
        }
    }
    ctx->pc = 0x2D130Cu;
label_2d130c:
    // 0x2d130c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d130cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d1310:
    // 0x2d1310: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x2d1310u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_2d1314:
    // 0x2d1314: 0x24423290  addiu       $v0, $v0, 0x3290
    ctx->pc = 0x2d1314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12944));
label_2d1318:
    // 0x2d1318: 0x24841850  addiu       $a0, $a0, 0x1850
    ctx->pc = 0x2d1318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6224));
label_2d131c:
    // 0x2d131c: 0xc0ad6c4  jal         func_2B5B10
label_2d1320:
    if (ctx->pc == 0x2D1320u) {
        ctx->pc = 0x2D1320u;
            // 0x2d1320: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2D1324u;
        goto label_2d1324;
    }
    ctx->pc = 0x2D131Cu;
    SET_GPR_U32(ctx, 31, 0x2D1324u);
    ctx->pc = 0x2D1320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D131Cu;
            // 0x2d1320: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B10u;
    if (runtime->hasFunction(0x2B5B10u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1324u; }
        if (ctx->pc != 0x2D1324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5B10_0x2b5b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1324u; }
        if (ctx->pc != 0x2D1324u) { return; }
    }
    ctx->pc = 0x2D1324u;
label_2d1324:
    // 0x2d1324: 0x26240458  addiu       $a0, $s1, 0x458
    ctx->pc = 0x2d1324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1112));
label_2d1328:
    // 0x2d1328: 0xc0ad670  jal         func_2B59C0
label_2d132c:
    if (ctx->pc == 0x2D132Cu) {
        ctx->pc = 0x2D132Cu;
            // 0x2d132c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2D1330u;
        goto label_2d1330;
    }
    ctx->pc = 0x2D1328u;
    SET_GPR_U32(ctx, 31, 0x2D1330u);
    ctx->pc = 0x2D132Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1328u;
            // 0x2d132c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B59C0u;
    if (runtime->hasFunction(0x2B59C0u)) {
        auto targetFn = runtime->lookupFunction(0x2B59C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1330u; }
        if (ctx->pc != 0x2D1330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B59C0_0x2b59c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1330u; }
        if (ctx->pc != 0x2D1330u) { return; }
    }
    ctx->pc = 0x2D1330u;
label_2d1330:
    // 0x2d1330: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2d1330u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_2d1334:
    // 0x2d1334: 0x26240154  addiu       $a0, $s1, 0x154
    ctx->pc = 0x2d1334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 340));
label_2d1338:
    // 0x2d1338: 0x24a53260  addiu       $a1, $a1, 0x3260
    ctx->pc = 0x2d1338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12896));
label_2d133c:
    // 0x2d133c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2d133cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2d1340:
    // 0x2d1340: 0xc0407e8  jal         func_101FA0
label_2d1344:
    if (ctx->pc == 0x2D1344u) {
        ctx->pc = 0x2D1344u;
            // 0x2d1344: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x2D1348u;
        goto label_2d1348;
    }
    ctx->pc = 0x2D1340u;
    SET_GPR_U32(ctx, 31, 0x2D1348u);
    ctx->pc = 0x2D1344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1340u;
            // 0x2d1344: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1348u; }
        if (ctx->pc != 0x2D1348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1348u; }
        if (ctx->pc != 0x2D1348u) { return; }
    }
    ctx->pc = 0x2D1348u;
label_2d1348:
    // 0x2d1348: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d1348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d134c:
    // 0x2d134c: 0xc0ad6c8  jal         func_2B5B20
label_2d1350:
    if (ctx->pc == 0x2D1350u) {
        ctx->pc = 0x2D1350u;
            // 0x2d1350: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D1354u;
        goto label_2d1354;
    }
    ctx->pc = 0x2D134Cu;
    SET_GPR_U32(ctx, 31, 0x2D1354u);
    ctx->pc = 0x2D1350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D134Cu;
            // 0x2d1350: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B20u;
    if (runtime->hasFunction(0x2B5B20u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1354u; }
        if (ctx->pc != 0x2D1354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5B20_0x2b5b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1354u; }
        if (ctx->pc != 0x2D1354u) { return; }
    }
    ctx->pc = 0x2D1354u;
label_2d1354:
    // 0x2d1354: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2d1354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2d1358:
    // 0x2d1358: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d1358u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2d135c:
    // 0x2d135c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2d1360:
    if (ctx->pc == 0x2D1360u) {
        ctx->pc = 0x2D1360u;
            // 0x2d1360: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D1364u;
        goto label_2d1364;
    }
    ctx->pc = 0x2D135Cu;
    {
        const bool branch_taken_0x2d135c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d135c) {
            ctx->pc = 0x2D1360u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D135Cu;
            // 0x2d1360: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D1370u;
            goto label_2d1370;
        }
    }
    ctx->pc = 0x2D1364u;
label_2d1364:
    // 0x2d1364: 0xc0400a8  jal         func_1002A0
label_2d1368:
    if (ctx->pc == 0x2D1368u) {
        ctx->pc = 0x2D1368u;
            // 0x2d1368: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D136Cu;
        goto label_2d136c;
    }
    ctx->pc = 0x2D1364u;
    SET_GPR_U32(ctx, 31, 0x2D136Cu);
    ctx->pc = 0x2D1368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1364u;
            // 0x2d1368: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D136Cu; }
        if (ctx->pc != 0x2D136Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D136Cu; }
        if (ctx->pc != 0x2D136Cu) { return; }
    }
    ctx->pc = 0x2D136Cu;
label_2d136c:
    // 0x2d136c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2d136cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d1370:
    // 0x2d1370: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d1370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d1374:
    // 0x2d1374: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d1374u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d1378:
    // 0x2d1378: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d1378u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d137c:
    // 0x2d137c: 0x3e00008  jr          $ra
label_2d1380:
    if (ctx->pc == 0x2D1380u) {
        ctx->pc = 0x2D1380u;
            // 0x2d1380: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2D1384u;
        goto label_2d1384;
    }
    ctx->pc = 0x2D137Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D137Cu;
            // 0x2d1380: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D1384u;
label_2d1384:
    // 0x2d1384: 0x0  nop
    ctx->pc = 0x2d1384u;
    // NOP
label_2d1388:
    // 0x2d1388: 0x0  nop
    ctx->pc = 0x2d1388u;
    // NOP
label_2d138c:
    // 0x2d138c: 0x0  nop
    ctx->pc = 0x2d138cu;
    // NOP
label_2d1390:
    // 0x2d1390: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d1390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d1394:
    // 0x2d1394: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d1394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2d1398:
    // 0x2d1398: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d1398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2d139c:
    // 0x2d139c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d139cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2d13a0:
    // 0x2d13a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d13a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d13a4:
    // 0x2d13a4: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
label_2d13a8:
    if (ctx->pc == 0x2D13A8u) {
        ctx->pc = 0x2D13A8u;
            // 0x2d13a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D13ACu;
        goto label_2d13ac;
    }
    ctx->pc = 0x2D13A4u;
    {
        const bool branch_taken_0x2d13a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D13A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D13A4u;
            // 0x2d13a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d13a4) {
            ctx->pc = 0x2D141Cu;
            goto label_2d141c;
        }
    }
    ctx->pc = 0x2D13ACu;
label_2d13ac:
    // 0x2d13ac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d13acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d13b0:
    // 0x2d13b0: 0x24422d20  addiu       $v0, $v0, 0x2D20
    ctx->pc = 0x2d13b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11552));
label_2d13b4:
    // 0x2d13b4: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_2d13b8:
    if (ctx->pc == 0x2D13B8u) {
        ctx->pc = 0x2D13B8u;
            // 0x2d13b8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2D13BCu;
        goto label_2d13bc;
    }
    ctx->pc = 0x2D13B4u;
    {
        const bool branch_taken_0x2d13b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D13B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D13B4u;
            // 0x2d13b8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d13b4) {
            ctx->pc = 0x2D1404u;
            goto label_2d1404;
        }
    }
    ctx->pc = 0x2D13BCu;
label_2d13bc:
    // 0x2d13bc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d13bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d13c0:
    // 0x2d13c0: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x2d13c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_2d13c4:
    // 0x2d13c4: 0x24423290  addiu       $v0, $v0, 0x3290
    ctx->pc = 0x2d13c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12944));
label_2d13c8:
    // 0x2d13c8: 0x24841850  addiu       $a0, $a0, 0x1850
    ctx->pc = 0x2d13c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6224));
label_2d13cc:
    // 0x2d13cc: 0xc0ad6c4  jal         func_2B5B10
label_2d13d0:
    if (ctx->pc == 0x2D13D0u) {
        ctx->pc = 0x2D13D0u;
            // 0x2d13d0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2D13D4u;
        goto label_2d13d4;
    }
    ctx->pc = 0x2D13CCu;
    SET_GPR_U32(ctx, 31, 0x2D13D4u);
    ctx->pc = 0x2D13D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D13CCu;
            // 0x2d13d0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B10u;
    if (runtime->hasFunction(0x2B5B10u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D13D4u; }
        if (ctx->pc != 0x2D13D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5B10_0x2b5b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D13D4u; }
        if (ctx->pc != 0x2D13D4u) { return; }
    }
    ctx->pc = 0x2D13D4u;
label_2d13d4:
    // 0x2d13d4: 0x26240458  addiu       $a0, $s1, 0x458
    ctx->pc = 0x2d13d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1112));
label_2d13d8:
    // 0x2d13d8: 0xc0ad670  jal         func_2B59C0
label_2d13dc:
    if (ctx->pc == 0x2D13DCu) {
        ctx->pc = 0x2D13DCu;
            // 0x2d13dc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2D13E0u;
        goto label_2d13e0;
    }
    ctx->pc = 0x2D13D8u;
    SET_GPR_U32(ctx, 31, 0x2D13E0u);
    ctx->pc = 0x2D13DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D13D8u;
            // 0x2d13dc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B59C0u;
    if (runtime->hasFunction(0x2B59C0u)) {
        auto targetFn = runtime->lookupFunction(0x2B59C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D13E0u; }
        if (ctx->pc != 0x2D13E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B59C0_0x2b59c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D13E0u; }
        if (ctx->pc != 0x2D13E0u) { return; }
    }
    ctx->pc = 0x2D13E0u;
label_2d13e0:
    // 0x2d13e0: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2d13e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_2d13e4:
    // 0x2d13e4: 0x26240154  addiu       $a0, $s1, 0x154
    ctx->pc = 0x2d13e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 340));
label_2d13e8:
    // 0x2d13e8: 0x24a53260  addiu       $a1, $a1, 0x3260
    ctx->pc = 0x2d13e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12896));
label_2d13ec:
    // 0x2d13ec: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2d13ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2d13f0:
    // 0x2d13f0: 0xc0407e8  jal         func_101FA0
label_2d13f4:
    if (ctx->pc == 0x2D13F4u) {
        ctx->pc = 0x2D13F4u;
            // 0x2d13f4: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x2D13F8u;
        goto label_2d13f8;
    }
    ctx->pc = 0x2D13F0u;
    SET_GPR_U32(ctx, 31, 0x2D13F8u);
    ctx->pc = 0x2D13F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D13F0u;
            // 0x2d13f4: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D13F8u; }
        if (ctx->pc != 0x2D13F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D13F8u; }
        if (ctx->pc != 0x2D13F8u) { return; }
    }
    ctx->pc = 0x2D13F8u;
label_2d13f8:
    // 0x2d13f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d13f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d13fc:
    // 0x2d13fc: 0xc0ad6c8  jal         func_2B5B20
label_2d1400:
    if (ctx->pc == 0x2D1400u) {
        ctx->pc = 0x2D1400u;
            // 0x2d1400: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D1404u;
        goto label_2d1404;
    }
    ctx->pc = 0x2D13FCu;
    SET_GPR_U32(ctx, 31, 0x2D1404u);
    ctx->pc = 0x2D1400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D13FCu;
            // 0x2d1400: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B20u;
    if (runtime->hasFunction(0x2B5B20u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1404u; }
        if (ctx->pc != 0x2D1404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5B20_0x2b5b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1404u; }
        if (ctx->pc != 0x2D1404u) { return; }
    }
    ctx->pc = 0x2D1404u;
label_2d1404:
    // 0x2d1404: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2d1404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2d1408:
    // 0x2d1408: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d1408u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2d140c:
    // 0x2d140c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2d1410:
    if (ctx->pc == 0x2D1410u) {
        ctx->pc = 0x2D1410u;
            // 0x2d1410: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D1414u;
        goto label_2d1414;
    }
    ctx->pc = 0x2D140Cu;
    {
        const bool branch_taken_0x2d140c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d140c) {
            ctx->pc = 0x2D1410u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D140Cu;
            // 0x2d1410: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D1420u;
            goto label_2d1420;
        }
    }
    ctx->pc = 0x2D1414u;
label_2d1414:
    // 0x2d1414: 0xc0400a8  jal         func_1002A0
label_2d1418:
    if (ctx->pc == 0x2D1418u) {
        ctx->pc = 0x2D1418u;
            // 0x2d1418: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D141Cu;
        goto label_2d141c;
    }
    ctx->pc = 0x2D1414u;
    SET_GPR_U32(ctx, 31, 0x2D141Cu);
    ctx->pc = 0x2D1418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1414u;
            // 0x2d1418: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D141Cu; }
        if (ctx->pc != 0x2D141Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D141Cu; }
        if (ctx->pc != 0x2D141Cu) { return; }
    }
    ctx->pc = 0x2D141Cu;
label_2d141c:
    // 0x2d141c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2d141cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d1420:
    // 0x2d1420: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d1420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d1424:
    // 0x2d1424: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d1424u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d1428:
    // 0x2d1428: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d1428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d142c:
    // 0x2d142c: 0x3e00008  jr          $ra
label_2d1430:
    if (ctx->pc == 0x2D1430u) {
        ctx->pc = 0x2D1430u;
            // 0x2d1430: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2D1434u;
        goto label_2d1434;
    }
    ctx->pc = 0x2D142Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D142Cu;
            // 0x2d1430: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D1434u;
label_2d1434:
    // 0x2d1434: 0x0  nop
    ctx->pc = 0x2d1434u;
    // NOP
label_2d1438:
    // 0x2d1438: 0x0  nop
    ctx->pc = 0x2d1438u;
    // NOP
label_2d143c:
    // 0x2d143c: 0x0  nop
    ctx->pc = 0x2d143cu;
    // NOP
label_2d1440:
    // 0x2d1440: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d1440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d1444:
    // 0x2d1444: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d1444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2d1448:
    // 0x2d1448: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d1448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2d144c:
    // 0x2d144c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d144cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2d1450:
    // 0x2d1450: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d1450u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d1454:
    // 0x2d1454: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
label_2d1458:
    if (ctx->pc == 0x2D1458u) {
        ctx->pc = 0x2D1458u;
            // 0x2d1458: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D145Cu;
        goto label_2d145c;
    }
    ctx->pc = 0x2D1454u;
    {
        const bool branch_taken_0x2d1454 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1454u;
            // 0x2d1458: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1454) {
            ctx->pc = 0x2D14CCu;
            goto label_2d14cc;
        }
    }
    ctx->pc = 0x2D145Cu;
label_2d145c:
    // 0x2d145c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d145cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d1460:
    // 0x2d1460: 0x24422d70  addiu       $v0, $v0, 0x2D70
    ctx->pc = 0x2d1460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11632));
label_2d1464:
    // 0x2d1464: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_2d1468:
    if (ctx->pc == 0x2D1468u) {
        ctx->pc = 0x2D1468u;
            // 0x2d1468: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2D146Cu;
        goto label_2d146c;
    }
    ctx->pc = 0x2D1464u;
    {
        const bool branch_taken_0x2d1464 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1464u;
            // 0x2d1468: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1464) {
            ctx->pc = 0x2D14B4u;
            goto label_2d14b4;
        }
    }
    ctx->pc = 0x2D146Cu;
label_2d146c:
    // 0x2d146c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d146cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d1470:
    // 0x2d1470: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x2d1470u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_2d1474:
    // 0x2d1474: 0x24423290  addiu       $v0, $v0, 0x3290
    ctx->pc = 0x2d1474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12944));
label_2d1478:
    // 0x2d1478: 0x24841850  addiu       $a0, $a0, 0x1850
    ctx->pc = 0x2d1478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6224));
label_2d147c:
    // 0x2d147c: 0xc0ad6c4  jal         func_2B5B10
label_2d1480:
    if (ctx->pc == 0x2D1480u) {
        ctx->pc = 0x2D1480u;
            // 0x2d1480: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2D1484u;
        goto label_2d1484;
    }
    ctx->pc = 0x2D147Cu;
    SET_GPR_U32(ctx, 31, 0x2D1484u);
    ctx->pc = 0x2D1480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D147Cu;
            // 0x2d1480: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B10u;
    if (runtime->hasFunction(0x2B5B10u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1484u; }
        if (ctx->pc != 0x2D1484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5B10_0x2b5b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1484u; }
        if (ctx->pc != 0x2D1484u) { return; }
    }
    ctx->pc = 0x2D1484u;
label_2d1484:
    // 0x2d1484: 0x26240458  addiu       $a0, $s1, 0x458
    ctx->pc = 0x2d1484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1112));
label_2d1488:
    // 0x2d1488: 0xc0ad670  jal         func_2B59C0
label_2d148c:
    if (ctx->pc == 0x2D148Cu) {
        ctx->pc = 0x2D148Cu;
            // 0x2d148c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2D1490u;
        goto label_2d1490;
    }
    ctx->pc = 0x2D1488u;
    SET_GPR_U32(ctx, 31, 0x2D1490u);
    ctx->pc = 0x2D148Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1488u;
            // 0x2d148c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B59C0u;
    if (runtime->hasFunction(0x2B59C0u)) {
        auto targetFn = runtime->lookupFunction(0x2B59C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1490u; }
        if (ctx->pc != 0x2D1490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B59C0_0x2b59c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1490u; }
        if (ctx->pc != 0x2D1490u) { return; }
    }
    ctx->pc = 0x2D1490u;
label_2d1490:
    // 0x2d1490: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2d1490u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_2d1494:
    // 0x2d1494: 0x26240154  addiu       $a0, $s1, 0x154
    ctx->pc = 0x2d1494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 340));
label_2d1498:
    // 0x2d1498: 0x24a53260  addiu       $a1, $a1, 0x3260
    ctx->pc = 0x2d1498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12896));
label_2d149c:
    // 0x2d149c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2d149cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2d14a0:
    // 0x2d14a0: 0xc0407e8  jal         func_101FA0
label_2d14a4:
    if (ctx->pc == 0x2D14A4u) {
        ctx->pc = 0x2D14A4u;
            // 0x2d14a4: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x2D14A8u;
        goto label_2d14a8;
    }
    ctx->pc = 0x2D14A0u;
    SET_GPR_U32(ctx, 31, 0x2D14A8u);
    ctx->pc = 0x2D14A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D14A0u;
            // 0x2d14a4: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D14A8u; }
        if (ctx->pc != 0x2D14A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D14A8u; }
        if (ctx->pc != 0x2D14A8u) { return; }
    }
    ctx->pc = 0x2D14A8u;
label_2d14a8:
    // 0x2d14a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d14a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d14ac:
    // 0x2d14ac: 0xc0ad6c8  jal         func_2B5B20
label_2d14b0:
    if (ctx->pc == 0x2D14B0u) {
        ctx->pc = 0x2D14B0u;
            // 0x2d14b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D14B4u;
        goto label_2d14b4;
    }
    ctx->pc = 0x2D14ACu;
    SET_GPR_U32(ctx, 31, 0x2D14B4u);
    ctx->pc = 0x2D14B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D14ACu;
            // 0x2d14b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B20u;
    if (runtime->hasFunction(0x2B5B20u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D14B4u; }
        if (ctx->pc != 0x2D14B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5B20_0x2b5b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D14B4u; }
        if (ctx->pc != 0x2D14B4u) { return; }
    }
    ctx->pc = 0x2D14B4u;
label_2d14b4:
    // 0x2d14b4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2d14b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2d14b8:
    // 0x2d14b8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d14b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2d14bc:
    // 0x2d14bc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2d14c0:
    if (ctx->pc == 0x2D14C0u) {
        ctx->pc = 0x2D14C0u;
            // 0x2d14c0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D14C4u;
        goto label_2d14c4;
    }
    ctx->pc = 0x2D14BCu;
    {
        const bool branch_taken_0x2d14bc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d14bc) {
            ctx->pc = 0x2D14C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D14BCu;
            // 0x2d14c0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D14D0u;
            goto label_2d14d0;
        }
    }
    ctx->pc = 0x2D14C4u;
label_2d14c4:
    // 0x2d14c4: 0xc0400a8  jal         func_1002A0
label_2d14c8:
    if (ctx->pc == 0x2D14C8u) {
        ctx->pc = 0x2D14C8u;
            // 0x2d14c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D14CCu;
        goto label_2d14cc;
    }
    ctx->pc = 0x2D14C4u;
    SET_GPR_U32(ctx, 31, 0x2D14CCu);
    ctx->pc = 0x2D14C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D14C4u;
            // 0x2d14c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D14CCu; }
        if (ctx->pc != 0x2D14CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D14CCu; }
        if (ctx->pc != 0x2D14CCu) { return; }
    }
    ctx->pc = 0x2D14CCu;
label_2d14cc:
    // 0x2d14cc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2d14ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d14d0:
    // 0x2d14d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d14d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d14d4:
    // 0x2d14d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d14d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d14d8:
    // 0x2d14d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d14d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d14dc:
    // 0x2d14dc: 0x3e00008  jr          $ra
label_2d14e0:
    if (ctx->pc == 0x2D14E0u) {
        ctx->pc = 0x2D14E0u;
            // 0x2d14e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2D14E4u;
        goto label_2d14e4;
    }
    ctx->pc = 0x2D14DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D14E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D14DCu;
            // 0x2d14e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D14E4u;
label_2d14e4:
    // 0x2d14e4: 0x0  nop
    ctx->pc = 0x2d14e4u;
    // NOP
label_2d14e8:
    // 0x2d14e8: 0x0  nop
    ctx->pc = 0x2d14e8u;
    // NOP
label_2d14ec:
    // 0x2d14ec: 0x0  nop
    ctx->pc = 0x2d14ecu;
    // NOP
}
