#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004DB580
// Address: 0x4db580 - 0x4dbd40
void sub_004DB580_0x4db580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DB580_0x4db580");
#endif

    switch (ctx->pc) {
        case 0x4db580u: goto label_4db580;
        case 0x4db584u: goto label_4db584;
        case 0x4db588u: goto label_4db588;
        case 0x4db58cu: goto label_4db58c;
        case 0x4db590u: goto label_4db590;
        case 0x4db594u: goto label_4db594;
        case 0x4db598u: goto label_4db598;
        case 0x4db59cu: goto label_4db59c;
        case 0x4db5a0u: goto label_4db5a0;
        case 0x4db5a4u: goto label_4db5a4;
        case 0x4db5a8u: goto label_4db5a8;
        case 0x4db5acu: goto label_4db5ac;
        case 0x4db5b0u: goto label_4db5b0;
        case 0x4db5b4u: goto label_4db5b4;
        case 0x4db5b8u: goto label_4db5b8;
        case 0x4db5bcu: goto label_4db5bc;
        case 0x4db5c0u: goto label_4db5c0;
        case 0x4db5c4u: goto label_4db5c4;
        case 0x4db5c8u: goto label_4db5c8;
        case 0x4db5ccu: goto label_4db5cc;
        case 0x4db5d0u: goto label_4db5d0;
        case 0x4db5d4u: goto label_4db5d4;
        case 0x4db5d8u: goto label_4db5d8;
        case 0x4db5dcu: goto label_4db5dc;
        case 0x4db5e0u: goto label_4db5e0;
        case 0x4db5e4u: goto label_4db5e4;
        case 0x4db5e8u: goto label_4db5e8;
        case 0x4db5ecu: goto label_4db5ec;
        case 0x4db5f0u: goto label_4db5f0;
        case 0x4db5f4u: goto label_4db5f4;
        case 0x4db5f8u: goto label_4db5f8;
        case 0x4db5fcu: goto label_4db5fc;
        case 0x4db600u: goto label_4db600;
        case 0x4db604u: goto label_4db604;
        case 0x4db608u: goto label_4db608;
        case 0x4db60cu: goto label_4db60c;
        case 0x4db610u: goto label_4db610;
        case 0x4db614u: goto label_4db614;
        case 0x4db618u: goto label_4db618;
        case 0x4db61cu: goto label_4db61c;
        case 0x4db620u: goto label_4db620;
        case 0x4db624u: goto label_4db624;
        case 0x4db628u: goto label_4db628;
        case 0x4db62cu: goto label_4db62c;
        case 0x4db630u: goto label_4db630;
        case 0x4db634u: goto label_4db634;
        case 0x4db638u: goto label_4db638;
        case 0x4db63cu: goto label_4db63c;
        case 0x4db640u: goto label_4db640;
        case 0x4db644u: goto label_4db644;
        case 0x4db648u: goto label_4db648;
        case 0x4db64cu: goto label_4db64c;
        case 0x4db650u: goto label_4db650;
        case 0x4db654u: goto label_4db654;
        case 0x4db658u: goto label_4db658;
        case 0x4db65cu: goto label_4db65c;
        case 0x4db660u: goto label_4db660;
        case 0x4db664u: goto label_4db664;
        case 0x4db668u: goto label_4db668;
        case 0x4db66cu: goto label_4db66c;
        case 0x4db670u: goto label_4db670;
        case 0x4db674u: goto label_4db674;
        case 0x4db678u: goto label_4db678;
        case 0x4db67cu: goto label_4db67c;
        case 0x4db680u: goto label_4db680;
        case 0x4db684u: goto label_4db684;
        case 0x4db688u: goto label_4db688;
        case 0x4db68cu: goto label_4db68c;
        case 0x4db690u: goto label_4db690;
        case 0x4db694u: goto label_4db694;
        case 0x4db698u: goto label_4db698;
        case 0x4db69cu: goto label_4db69c;
        case 0x4db6a0u: goto label_4db6a0;
        case 0x4db6a4u: goto label_4db6a4;
        case 0x4db6a8u: goto label_4db6a8;
        case 0x4db6acu: goto label_4db6ac;
        case 0x4db6b0u: goto label_4db6b0;
        case 0x4db6b4u: goto label_4db6b4;
        case 0x4db6b8u: goto label_4db6b8;
        case 0x4db6bcu: goto label_4db6bc;
        case 0x4db6c0u: goto label_4db6c0;
        case 0x4db6c4u: goto label_4db6c4;
        case 0x4db6c8u: goto label_4db6c8;
        case 0x4db6ccu: goto label_4db6cc;
        case 0x4db6d0u: goto label_4db6d0;
        case 0x4db6d4u: goto label_4db6d4;
        case 0x4db6d8u: goto label_4db6d8;
        case 0x4db6dcu: goto label_4db6dc;
        case 0x4db6e0u: goto label_4db6e0;
        case 0x4db6e4u: goto label_4db6e4;
        case 0x4db6e8u: goto label_4db6e8;
        case 0x4db6ecu: goto label_4db6ec;
        case 0x4db6f0u: goto label_4db6f0;
        case 0x4db6f4u: goto label_4db6f4;
        case 0x4db6f8u: goto label_4db6f8;
        case 0x4db6fcu: goto label_4db6fc;
        case 0x4db700u: goto label_4db700;
        case 0x4db704u: goto label_4db704;
        case 0x4db708u: goto label_4db708;
        case 0x4db70cu: goto label_4db70c;
        case 0x4db710u: goto label_4db710;
        case 0x4db714u: goto label_4db714;
        case 0x4db718u: goto label_4db718;
        case 0x4db71cu: goto label_4db71c;
        case 0x4db720u: goto label_4db720;
        case 0x4db724u: goto label_4db724;
        case 0x4db728u: goto label_4db728;
        case 0x4db72cu: goto label_4db72c;
        case 0x4db730u: goto label_4db730;
        case 0x4db734u: goto label_4db734;
        case 0x4db738u: goto label_4db738;
        case 0x4db73cu: goto label_4db73c;
        case 0x4db740u: goto label_4db740;
        case 0x4db744u: goto label_4db744;
        case 0x4db748u: goto label_4db748;
        case 0x4db74cu: goto label_4db74c;
        case 0x4db750u: goto label_4db750;
        case 0x4db754u: goto label_4db754;
        case 0x4db758u: goto label_4db758;
        case 0x4db75cu: goto label_4db75c;
        case 0x4db760u: goto label_4db760;
        case 0x4db764u: goto label_4db764;
        case 0x4db768u: goto label_4db768;
        case 0x4db76cu: goto label_4db76c;
        case 0x4db770u: goto label_4db770;
        case 0x4db774u: goto label_4db774;
        case 0x4db778u: goto label_4db778;
        case 0x4db77cu: goto label_4db77c;
        case 0x4db780u: goto label_4db780;
        case 0x4db784u: goto label_4db784;
        case 0x4db788u: goto label_4db788;
        case 0x4db78cu: goto label_4db78c;
        case 0x4db790u: goto label_4db790;
        case 0x4db794u: goto label_4db794;
        case 0x4db798u: goto label_4db798;
        case 0x4db79cu: goto label_4db79c;
        case 0x4db7a0u: goto label_4db7a0;
        case 0x4db7a4u: goto label_4db7a4;
        case 0x4db7a8u: goto label_4db7a8;
        case 0x4db7acu: goto label_4db7ac;
        case 0x4db7b0u: goto label_4db7b0;
        case 0x4db7b4u: goto label_4db7b4;
        case 0x4db7b8u: goto label_4db7b8;
        case 0x4db7bcu: goto label_4db7bc;
        case 0x4db7c0u: goto label_4db7c0;
        case 0x4db7c4u: goto label_4db7c4;
        case 0x4db7c8u: goto label_4db7c8;
        case 0x4db7ccu: goto label_4db7cc;
        case 0x4db7d0u: goto label_4db7d0;
        case 0x4db7d4u: goto label_4db7d4;
        case 0x4db7d8u: goto label_4db7d8;
        case 0x4db7dcu: goto label_4db7dc;
        case 0x4db7e0u: goto label_4db7e0;
        case 0x4db7e4u: goto label_4db7e4;
        case 0x4db7e8u: goto label_4db7e8;
        case 0x4db7ecu: goto label_4db7ec;
        case 0x4db7f0u: goto label_4db7f0;
        case 0x4db7f4u: goto label_4db7f4;
        case 0x4db7f8u: goto label_4db7f8;
        case 0x4db7fcu: goto label_4db7fc;
        case 0x4db800u: goto label_4db800;
        case 0x4db804u: goto label_4db804;
        case 0x4db808u: goto label_4db808;
        case 0x4db80cu: goto label_4db80c;
        case 0x4db810u: goto label_4db810;
        case 0x4db814u: goto label_4db814;
        case 0x4db818u: goto label_4db818;
        case 0x4db81cu: goto label_4db81c;
        case 0x4db820u: goto label_4db820;
        case 0x4db824u: goto label_4db824;
        case 0x4db828u: goto label_4db828;
        case 0x4db82cu: goto label_4db82c;
        case 0x4db830u: goto label_4db830;
        case 0x4db834u: goto label_4db834;
        case 0x4db838u: goto label_4db838;
        case 0x4db83cu: goto label_4db83c;
        case 0x4db840u: goto label_4db840;
        case 0x4db844u: goto label_4db844;
        case 0x4db848u: goto label_4db848;
        case 0x4db84cu: goto label_4db84c;
        case 0x4db850u: goto label_4db850;
        case 0x4db854u: goto label_4db854;
        case 0x4db858u: goto label_4db858;
        case 0x4db85cu: goto label_4db85c;
        case 0x4db860u: goto label_4db860;
        case 0x4db864u: goto label_4db864;
        case 0x4db868u: goto label_4db868;
        case 0x4db86cu: goto label_4db86c;
        case 0x4db870u: goto label_4db870;
        case 0x4db874u: goto label_4db874;
        case 0x4db878u: goto label_4db878;
        case 0x4db87cu: goto label_4db87c;
        case 0x4db880u: goto label_4db880;
        case 0x4db884u: goto label_4db884;
        case 0x4db888u: goto label_4db888;
        case 0x4db88cu: goto label_4db88c;
        case 0x4db890u: goto label_4db890;
        case 0x4db894u: goto label_4db894;
        case 0x4db898u: goto label_4db898;
        case 0x4db89cu: goto label_4db89c;
        case 0x4db8a0u: goto label_4db8a0;
        case 0x4db8a4u: goto label_4db8a4;
        case 0x4db8a8u: goto label_4db8a8;
        case 0x4db8acu: goto label_4db8ac;
        case 0x4db8b0u: goto label_4db8b0;
        case 0x4db8b4u: goto label_4db8b4;
        case 0x4db8b8u: goto label_4db8b8;
        case 0x4db8bcu: goto label_4db8bc;
        case 0x4db8c0u: goto label_4db8c0;
        case 0x4db8c4u: goto label_4db8c4;
        case 0x4db8c8u: goto label_4db8c8;
        case 0x4db8ccu: goto label_4db8cc;
        case 0x4db8d0u: goto label_4db8d0;
        case 0x4db8d4u: goto label_4db8d4;
        case 0x4db8d8u: goto label_4db8d8;
        case 0x4db8dcu: goto label_4db8dc;
        case 0x4db8e0u: goto label_4db8e0;
        case 0x4db8e4u: goto label_4db8e4;
        case 0x4db8e8u: goto label_4db8e8;
        case 0x4db8ecu: goto label_4db8ec;
        case 0x4db8f0u: goto label_4db8f0;
        case 0x4db8f4u: goto label_4db8f4;
        case 0x4db8f8u: goto label_4db8f8;
        case 0x4db8fcu: goto label_4db8fc;
        case 0x4db900u: goto label_4db900;
        case 0x4db904u: goto label_4db904;
        case 0x4db908u: goto label_4db908;
        case 0x4db90cu: goto label_4db90c;
        case 0x4db910u: goto label_4db910;
        case 0x4db914u: goto label_4db914;
        case 0x4db918u: goto label_4db918;
        case 0x4db91cu: goto label_4db91c;
        case 0x4db920u: goto label_4db920;
        case 0x4db924u: goto label_4db924;
        case 0x4db928u: goto label_4db928;
        case 0x4db92cu: goto label_4db92c;
        case 0x4db930u: goto label_4db930;
        case 0x4db934u: goto label_4db934;
        case 0x4db938u: goto label_4db938;
        case 0x4db93cu: goto label_4db93c;
        case 0x4db940u: goto label_4db940;
        case 0x4db944u: goto label_4db944;
        case 0x4db948u: goto label_4db948;
        case 0x4db94cu: goto label_4db94c;
        case 0x4db950u: goto label_4db950;
        case 0x4db954u: goto label_4db954;
        case 0x4db958u: goto label_4db958;
        case 0x4db95cu: goto label_4db95c;
        case 0x4db960u: goto label_4db960;
        case 0x4db964u: goto label_4db964;
        case 0x4db968u: goto label_4db968;
        case 0x4db96cu: goto label_4db96c;
        case 0x4db970u: goto label_4db970;
        case 0x4db974u: goto label_4db974;
        case 0x4db978u: goto label_4db978;
        case 0x4db97cu: goto label_4db97c;
        case 0x4db980u: goto label_4db980;
        case 0x4db984u: goto label_4db984;
        case 0x4db988u: goto label_4db988;
        case 0x4db98cu: goto label_4db98c;
        case 0x4db990u: goto label_4db990;
        case 0x4db994u: goto label_4db994;
        case 0x4db998u: goto label_4db998;
        case 0x4db99cu: goto label_4db99c;
        case 0x4db9a0u: goto label_4db9a0;
        case 0x4db9a4u: goto label_4db9a4;
        case 0x4db9a8u: goto label_4db9a8;
        case 0x4db9acu: goto label_4db9ac;
        case 0x4db9b0u: goto label_4db9b0;
        case 0x4db9b4u: goto label_4db9b4;
        case 0x4db9b8u: goto label_4db9b8;
        case 0x4db9bcu: goto label_4db9bc;
        case 0x4db9c0u: goto label_4db9c0;
        case 0x4db9c4u: goto label_4db9c4;
        case 0x4db9c8u: goto label_4db9c8;
        case 0x4db9ccu: goto label_4db9cc;
        case 0x4db9d0u: goto label_4db9d0;
        case 0x4db9d4u: goto label_4db9d4;
        case 0x4db9d8u: goto label_4db9d8;
        case 0x4db9dcu: goto label_4db9dc;
        case 0x4db9e0u: goto label_4db9e0;
        case 0x4db9e4u: goto label_4db9e4;
        case 0x4db9e8u: goto label_4db9e8;
        case 0x4db9ecu: goto label_4db9ec;
        case 0x4db9f0u: goto label_4db9f0;
        case 0x4db9f4u: goto label_4db9f4;
        case 0x4db9f8u: goto label_4db9f8;
        case 0x4db9fcu: goto label_4db9fc;
        case 0x4dba00u: goto label_4dba00;
        case 0x4dba04u: goto label_4dba04;
        case 0x4dba08u: goto label_4dba08;
        case 0x4dba0cu: goto label_4dba0c;
        case 0x4dba10u: goto label_4dba10;
        case 0x4dba14u: goto label_4dba14;
        case 0x4dba18u: goto label_4dba18;
        case 0x4dba1cu: goto label_4dba1c;
        case 0x4dba20u: goto label_4dba20;
        case 0x4dba24u: goto label_4dba24;
        case 0x4dba28u: goto label_4dba28;
        case 0x4dba2cu: goto label_4dba2c;
        case 0x4dba30u: goto label_4dba30;
        case 0x4dba34u: goto label_4dba34;
        case 0x4dba38u: goto label_4dba38;
        case 0x4dba3cu: goto label_4dba3c;
        case 0x4dba40u: goto label_4dba40;
        case 0x4dba44u: goto label_4dba44;
        case 0x4dba48u: goto label_4dba48;
        case 0x4dba4cu: goto label_4dba4c;
        case 0x4dba50u: goto label_4dba50;
        case 0x4dba54u: goto label_4dba54;
        case 0x4dba58u: goto label_4dba58;
        case 0x4dba5cu: goto label_4dba5c;
        case 0x4dba60u: goto label_4dba60;
        case 0x4dba64u: goto label_4dba64;
        case 0x4dba68u: goto label_4dba68;
        case 0x4dba6cu: goto label_4dba6c;
        case 0x4dba70u: goto label_4dba70;
        case 0x4dba74u: goto label_4dba74;
        case 0x4dba78u: goto label_4dba78;
        case 0x4dba7cu: goto label_4dba7c;
        case 0x4dba80u: goto label_4dba80;
        case 0x4dba84u: goto label_4dba84;
        case 0x4dba88u: goto label_4dba88;
        case 0x4dba8cu: goto label_4dba8c;
        case 0x4dba90u: goto label_4dba90;
        case 0x4dba94u: goto label_4dba94;
        case 0x4dba98u: goto label_4dba98;
        case 0x4dba9cu: goto label_4dba9c;
        case 0x4dbaa0u: goto label_4dbaa0;
        case 0x4dbaa4u: goto label_4dbaa4;
        case 0x4dbaa8u: goto label_4dbaa8;
        case 0x4dbaacu: goto label_4dbaac;
        case 0x4dbab0u: goto label_4dbab0;
        case 0x4dbab4u: goto label_4dbab4;
        case 0x4dbab8u: goto label_4dbab8;
        case 0x4dbabcu: goto label_4dbabc;
        case 0x4dbac0u: goto label_4dbac0;
        case 0x4dbac4u: goto label_4dbac4;
        case 0x4dbac8u: goto label_4dbac8;
        case 0x4dbaccu: goto label_4dbacc;
        case 0x4dbad0u: goto label_4dbad0;
        case 0x4dbad4u: goto label_4dbad4;
        case 0x4dbad8u: goto label_4dbad8;
        case 0x4dbadcu: goto label_4dbadc;
        case 0x4dbae0u: goto label_4dbae0;
        case 0x4dbae4u: goto label_4dbae4;
        case 0x4dbae8u: goto label_4dbae8;
        case 0x4dbaecu: goto label_4dbaec;
        case 0x4dbaf0u: goto label_4dbaf0;
        case 0x4dbaf4u: goto label_4dbaf4;
        case 0x4dbaf8u: goto label_4dbaf8;
        case 0x4dbafcu: goto label_4dbafc;
        case 0x4dbb00u: goto label_4dbb00;
        case 0x4dbb04u: goto label_4dbb04;
        case 0x4dbb08u: goto label_4dbb08;
        case 0x4dbb0cu: goto label_4dbb0c;
        case 0x4dbb10u: goto label_4dbb10;
        case 0x4dbb14u: goto label_4dbb14;
        case 0x4dbb18u: goto label_4dbb18;
        case 0x4dbb1cu: goto label_4dbb1c;
        case 0x4dbb20u: goto label_4dbb20;
        case 0x4dbb24u: goto label_4dbb24;
        case 0x4dbb28u: goto label_4dbb28;
        case 0x4dbb2cu: goto label_4dbb2c;
        case 0x4dbb30u: goto label_4dbb30;
        case 0x4dbb34u: goto label_4dbb34;
        case 0x4dbb38u: goto label_4dbb38;
        case 0x4dbb3cu: goto label_4dbb3c;
        case 0x4dbb40u: goto label_4dbb40;
        case 0x4dbb44u: goto label_4dbb44;
        case 0x4dbb48u: goto label_4dbb48;
        case 0x4dbb4cu: goto label_4dbb4c;
        case 0x4dbb50u: goto label_4dbb50;
        case 0x4dbb54u: goto label_4dbb54;
        case 0x4dbb58u: goto label_4dbb58;
        case 0x4dbb5cu: goto label_4dbb5c;
        case 0x4dbb60u: goto label_4dbb60;
        case 0x4dbb64u: goto label_4dbb64;
        case 0x4dbb68u: goto label_4dbb68;
        case 0x4dbb6cu: goto label_4dbb6c;
        case 0x4dbb70u: goto label_4dbb70;
        case 0x4dbb74u: goto label_4dbb74;
        case 0x4dbb78u: goto label_4dbb78;
        case 0x4dbb7cu: goto label_4dbb7c;
        case 0x4dbb80u: goto label_4dbb80;
        case 0x4dbb84u: goto label_4dbb84;
        case 0x4dbb88u: goto label_4dbb88;
        case 0x4dbb8cu: goto label_4dbb8c;
        case 0x4dbb90u: goto label_4dbb90;
        case 0x4dbb94u: goto label_4dbb94;
        case 0x4dbb98u: goto label_4dbb98;
        case 0x4dbb9cu: goto label_4dbb9c;
        case 0x4dbba0u: goto label_4dbba0;
        case 0x4dbba4u: goto label_4dbba4;
        case 0x4dbba8u: goto label_4dbba8;
        case 0x4dbbacu: goto label_4dbbac;
        case 0x4dbbb0u: goto label_4dbbb0;
        case 0x4dbbb4u: goto label_4dbbb4;
        case 0x4dbbb8u: goto label_4dbbb8;
        case 0x4dbbbcu: goto label_4dbbbc;
        case 0x4dbbc0u: goto label_4dbbc0;
        case 0x4dbbc4u: goto label_4dbbc4;
        case 0x4dbbc8u: goto label_4dbbc8;
        case 0x4dbbccu: goto label_4dbbcc;
        case 0x4dbbd0u: goto label_4dbbd0;
        case 0x4dbbd4u: goto label_4dbbd4;
        case 0x4dbbd8u: goto label_4dbbd8;
        case 0x4dbbdcu: goto label_4dbbdc;
        case 0x4dbbe0u: goto label_4dbbe0;
        case 0x4dbbe4u: goto label_4dbbe4;
        case 0x4dbbe8u: goto label_4dbbe8;
        case 0x4dbbecu: goto label_4dbbec;
        case 0x4dbbf0u: goto label_4dbbf0;
        case 0x4dbbf4u: goto label_4dbbf4;
        case 0x4dbbf8u: goto label_4dbbf8;
        case 0x4dbbfcu: goto label_4dbbfc;
        case 0x4dbc00u: goto label_4dbc00;
        case 0x4dbc04u: goto label_4dbc04;
        case 0x4dbc08u: goto label_4dbc08;
        case 0x4dbc0cu: goto label_4dbc0c;
        case 0x4dbc10u: goto label_4dbc10;
        case 0x4dbc14u: goto label_4dbc14;
        case 0x4dbc18u: goto label_4dbc18;
        case 0x4dbc1cu: goto label_4dbc1c;
        case 0x4dbc20u: goto label_4dbc20;
        case 0x4dbc24u: goto label_4dbc24;
        case 0x4dbc28u: goto label_4dbc28;
        case 0x4dbc2cu: goto label_4dbc2c;
        case 0x4dbc30u: goto label_4dbc30;
        case 0x4dbc34u: goto label_4dbc34;
        case 0x4dbc38u: goto label_4dbc38;
        case 0x4dbc3cu: goto label_4dbc3c;
        case 0x4dbc40u: goto label_4dbc40;
        case 0x4dbc44u: goto label_4dbc44;
        case 0x4dbc48u: goto label_4dbc48;
        case 0x4dbc4cu: goto label_4dbc4c;
        case 0x4dbc50u: goto label_4dbc50;
        case 0x4dbc54u: goto label_4dbc54;
        case 0x4dbc58u: goto label_4dbc58;
        case 0x4dbc5cu: goto label_4dbc5c;
        case 0x4dbc60u: goto label_4dbc60;
        case 0x4dbc64u: goto label_4dbc64;
        case 0x4dbc68u: goto label_4dbc68;
        case 0x4dbc6cu: goto label_4dbc6c;
        case 0x4dbc70u: goto label_4dbc70;
        case 0x4dbc74u: goto label_4dbc74;
        case 0x4dbc78u: goto label_4dbc78;
        case 0x4dbc7cu: goto label_4dbc7c;
        case 0x4dbc80u: goto label_4dbc80;
        case 0x4dbc84u: goto label_4dbc84;
        case 0x4dbc88u: goto label_4dbc88;
        case 0x4dbc8cu: goto label_4dbc8c;
        case 0x4dbc90u: goto label_4dbc90;
        case 0x4dbc94u: goto label_4dbc94;
        case 0x4dbc98u: goto label_4dbc98;
        case 0x4dbc9cu: goto label_4dbc9c;
        case 0x4dbca0u: goto label_4dbca0;
        case 0x4dbca4u: goto label_4dbca4;
        case 0x4dbca8u: goto label_4dbca8;
        case 0x4dbcacu: goto label_4dbcac;
        case 0x4dbcb0u: goto label_4dbcb0;
        case 0x4dbcb4u: goto label_4dbcb4;
        case 0x4dbcb8u: goto label_4dbcb8;
        case 0x4dbcbcu: goto label_4dbcbc;
        case 0x4dbcc0u: goto label_4dbcc0;
        case 0x4dbcc4u: goto label_4dbcc4;
        case 0x4dbcc8u: goto label_4dbcc8;
        case 0x4dbcccu: goto label_4dbccc;
        case 0x4dbcd0u: goto label_4dbcd0;
        case 0x4dbcd4u: goto label_4dbcd4;
        case 0x4dbcd8u: goto label_4dbcd8;
        case 0x4dbcdcu: goto label_4dbcdc;
        case 0x4dbce0u: goto label_4dbce0;
        case 0x4dbce4u: goto label_4dbce4;
        case 0x4dbce8u: goto label_4dbce8;
        case 0x4dbcecu: goto label_4dbcec;
        case 0x4dbcf0u: goto label_4dbcf0;
        case 0x4dbcf4u: goto label_4dbcf4;
        case 0x4dbcf8u: goto label_4dbcf8;
        case 0x4dbcfcu: goto label_4dbcfc;
        case 0x4dbd00u: goto label_4dbd00;
        case 0x4dbd04u: goto label_4dbd04;
        case 0x4dbd08u: goto label_4dbd08;
        case 0x4dbd0cu: goto label_4dbd0c;
        case 0x4dbd10u: goto label_4dbd10;
        case 0x4dbd14u: goto label_4dbd14;
        case 0x4dbd18u: goto label_4dbd18;
        case 0x4dbd1cu: goto label_4dbd1c;
        case 0x4dbd20u: goto label_4dbd20;
        case 0x4dbd24u: goto label_4dbd24;
        case 0x4dbd28u: goto label_4dbd28;
        case 0x4dbd2cu: goto label_4dbd2c;
        case 0x4dbd30u: goto label_4dbd30;
        case 0x4dbd34u: goto label_4dbd34;
        case 0x4dbd38u: goto label_4dbd38;
        case 0x4dbd3cu: goto label_4dbd3c;
        default: break;
    }

    ctx->pc = 0x4db580u;

label_4db580:
    // 0x4db580: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4db580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4db584:
    // 0x4db584: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4db584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4db588:
    // 0x4db588: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4db588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4db58c:
    // 0x4db58c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4db58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4db590:
    // 0x4db590: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_4db594:
    if (ctx->pc == 0x4DB594u) {
        ctx->pc = 0x4DB594u;
            // 0x4db594: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DB598u;
        goto label_4db598;
    }
    ctx->pc = 0x4DB590u;
    {
        const bool branch_taken_0x4db590 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x4DB594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB590u;
            // 0x4db594: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4db590) {
            ctx->pc = 0x4DB5A4u;
            goto label_4db5a4;
        }
    }
    ctx->pc = 0x4DB598u;
label_4db598:
    // 0x4db598: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4db598u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4db59c:
    // 0x4db59c: 0x10000008  b           . + 4 + (0x8 << 2)
label_4db5a0:
    if (ctx->pc == 0x4DB5A0u) {
        ctx->pc = 0x4DB5A0u;
            // 0x4db5a0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4DB5A4u;
        goto label_4db5a4;
    }
    ctx->pc = 0x4DB59Cu;
    {
        const bool branch_taken_0x4db59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DB5A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB59Cu;
            // 0x4db5a0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4db59c) {
            ctx->pc = 0x4DB5C0u;
            goto label_4db5c0;
        }
    }
    ctx->pc = 0x4DB5A4u;
label_4db5a4:
    // 0x4db5a4: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x4db5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
label_4db5a8:
    // 0x4db5a8: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x4db5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_4db5ac:
    // 0x4db5ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4db5acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4db5b0:
    // 0x4db5b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4db5b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4db5b4:
    // 0x4db5b4: 0x0  nop
    ctx->pc = 0x4db5b4u;
    // NOP
label_4db5b8:
    // 0x4db5b8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4db5b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4db5bc:
    // 0x4db5bc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x4db5bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_4db5c0:
    // 0x4db5c0: 0xc60000f0  lwc1        $f0, 0xF0($s0)
    ctx->pc = 0x4db5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4db5c4:
    // 0x4db5c4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x4db5c4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4db5c8:
    // 0x4db5c8: 0x45020063  bc1fl       . + 4 + (0x63 << 2)
label_4db5cc:
    if (ctx->pc == 0x4DB5CCu) {
        ctx->pc = 0x4DB5CCu;
            // 0x4db5cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DB5D0u;
        goto label_4db5d0;
    }
    ctx->pc = 0x4DB5C8u;
    {
        const bool branch_taken_0x4db5c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4db5c8) {
            ctx->pc = 0x4DB5CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB5C8u;
            // 0x4db5cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DB758u;
            goto label_4db758;
        }
    }
    ctx->pc = 0x4DB5D0u;
label_4db5d0:
    // 0x4db5d0: 0x4c20004  bltzl       $a2, . + 4 + (0x4 << 2)
label_4db5d4:
    if (ctx->pc == 0x4DB5D4u) {
        ctx->pc = 0x4DB5D4u;
            // 0x4db5d4: 0x61842  srl         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x4DB5D8u;
        goto label_4db5d8;
    }
    ctx->pc = 0x4DB5D0u;
    {
        const bool branch_taken_0x4db5d0 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x4db5d0) {
            ctx->pc = 0x4DB5D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB5D0u;
            // 0x4db5d4: 0x61842  srl         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DB5E4u;
            goto label_4db5e4;
        }
    }
    ctx->pc = 0x4DB5D8u;
label_4db5d8:
    // 0x4db5d8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x4db5d8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4db5dc:
    // 0x4db5dc: 0x10000007  b           . + 4 + (0x7 << 2)
label_4db5e0:
    if (ctx->pc == 0x4DB5E0u) {
        ctx->pc = 0x4DB5E0u;
            // 0x4db5e0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4DB5E4u;
        goto label_4db5e4;
    }
    ctx->pc = 0x4DB5DCu;
    {
        const bool branch_taken_0x4db5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DB5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB5DCu;
            // 0x4db5e0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4db5dc) {
            ctx->pc = 0x4DB5FCu;
            goto label_4db5fc;
        }
    }
    ctx->pc = 0x4DB5E4u;
label_4db5e4:
    // 0x4db5e4: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x4db5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_4db5e8:
    // 0x4db5e8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4db5e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4db5ec:
    // 0x4db5ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4db5ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4db5f0:
    // 0x4db5f0: 0x0  nop
    ctx->pc = 0x4db5f0u;
    // NOP
label_4db5f4:
    // 0x4db5f4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4db5f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4db5f8:
    // 0x4db5f8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x4db5f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_4db5fc:
    // 0x4db5fc: 0xc60000f4  lwc1        $f0, 0xF4($s0)
    ctx->pc = 0x4db5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4db600:
    // 0x4db600: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x4db600u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4db604:
    // 0x4db604: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_4db608:
    if (ctx->pc == 0x4DB608u) {
        ctx->pc = 0x4DB60Cu;
        goto label_4db60c;
    }
    ctx->pc = 0x4DB604u;
    {
        const bool branch_taken_0x4db604 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4db604) {
            ctx->pc = 0x4DB648u;
            goto label_4db648;
        }
    }
    ctx->pc = 0x4DB60Cu;
label_4db60c:
    // 0x4db60c: 0x4e20004  bltzl       $a3, . + 4 + (0x4 << 2)
label_4db610:
    if (ctx->pc == 0x4DB610u) {
        ctx->pc = 0x4DB610u;
            // 0x4db610: 0x71842  srl         $v1, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
        ctx->pc = 0x4DB614u;
        goto label_4db614;
    }
    ctx->pc = 0x4DB60Cu;
    {
        const bool branch_taken_0x4db60c = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x4db60c) {
            ctx->pc = 0x4DB610u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB60Cu;
            // 0x4db610: 0x71842  srl         $v1, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DB620u;
            goto label_4db620;
        }
    }
    ctx->pc = 0x4DB614u;
label_4db614:
    // 0x4db614: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x4db614u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4db618:
    // 0x4db618: 0x10000007  b           . + 4 + (0x7 << 2)
label_4db61c:
    if (ctx->pc == 0x4DB61Cu) {
        ctx->pc = 0x4DB61Cu;
            // 0x4db61c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4DB620u;
        goto label_4db620;
    }
    ctx->pc = 0x4DB618u;
    {
        const bool branch_taken_0x4db618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DB61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB618u;
            // 0x4db61c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4db618) {
            ctx->pc = 0x4DB638u;
            goto label_4db638;
        }
    }
    ctx->pc = 0x4DB620u;
label_4db620:
    // 0x4db620: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x4db620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_4db624:
    // 0x4db624: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4db624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4db628:
    // 0x4db628: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4db628u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4db62c:
    // 0x4db62c: 0x0  nop
    ctx->pc = 0x4db62cu;
    // NOP
label_4db630:
    // 0x4db630: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4db630u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4db634:
    // 0x4db634: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x4db634u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_4db638:
    // 0x4db638: 0xc60000f8  lwc1        $f0, 0xF8($s0)
    ctx->pc = 0x4db638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4db63c:
    // 0x4db63c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x4db63cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4db640:
    // 0x4db640: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
label_4db644:
    if (ctx->pc == 0x4DB644u) {
        ctx->pc = 0x4DB644u;
            // 0x4db644: 0x92020100  lbu         $v0, 0x100($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 256)));
        ctx->pc = 0x4DB648u;
        goto label_4db648;
    }
    ctx->pc = 0x4DB640u;
    {
        const bool branch_taken_0x4db640 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4db640) {
            ctx->pc = 0x4DB644u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB640u;
            // 0x4db644: 0x92020100  lbu         $v0, 0x100($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 256)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DB654u;
            goto label_4db654;
        }
    }
    ctx->pc = 0x4DB648u;
label_4db648:
    // 0x4db648: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4db648u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4db64c:
    // 0x4db64c: 0x10000042  b           . + 4 + (0x42 << 2)
label_4db650:
    if (ctx->pc == 0x4DB650u) {
        ctx->pc = 0x4DB654u;
        goto label_4db654;
    }
    ctx->pc = 0x4DB64Cu;
    {
        const bool branch_taken_0x4db64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4db64c) {
            ctx->pc = 0x4DB758u;
            goto label_4db758;
        }
    }
    ctx->pc = 0x4DB654u;
label_4db654:
    // 0x4db654: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_4db658:
    if (ctx->pc == 0x4DB658u) {
        ctx->pc = 0x4DB658u;
            // 0x4db658: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4DB65Cu;
        goto label_4db65c;
    }
    ctx->pc = 0x4DB654u;
    {
        const bool branch_taken_0x4db654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4db654) {
            ctx->pc = 0x4DB658u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB654u;
            // 0x4db658: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DB664u;
            goto label_4db664;
        }
    }
    ctx->pc = 0x4DB65Cu;
label_4db65c:
    // 0x4db65c: 0x1000003e  b           . + 4 + (0x3E << 2)
label_4db660:
    if (ctx->pc == 0x4DB660u) {
        ctx->pc = 0x4DB660u;
            // 0x4db660: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4DB664u;
        goto label_4db664;
    }
    ctx->pc = 0x4DB65Cu;
    {
        const bool branch_taken_0x4db65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DB660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB65Cu;
            // 0x4db660: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4db65c) {
            ctx->pc = 0x4DB758u;
            goto label_4db758;
        }
    }
    ctx->pc = 0x4DB664u;
label_4db664:
    // 0x4db664: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4db664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4db668:
    // 0x4db668: 0xae0200fc  sw          $v0, 0xFC($s0)
    ctx->pc = 0x4db668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 2));
label_4db66c:
    // 0x4db66c: 0x8e040190  lw          $a0, 0x190($s0)
    ctx->pc = 0x4db66cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
label_4db670:
    // 0x4db670: 0xc122d2c  jal         func_48B4B0
label_4db674:
    if (ctx->pc == 0x4DB674u) {
        ctx->pc = 0x4DB674u;
            // 0x4db674: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x4DB678u;
        goto label_4db678;
    }
    ctx->pc = 0x4DB670u;
    SET_GPR_U32(ctx, 31, 0x4DB678u);
    ctx->pc = 0x4DB674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB670u;
            // 0x4db674: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB678u; }
        if (ctx->pc != 0x4DB678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB678u; }
        if (ctx->pc != 0x4DB678u) { return; }
    }
    ctx->pc = 0x4DB678u;
label_4db678:
    // 0x4db678: 0xc6060110  lwc1        $f6, 0x110($s0)
    ctx->pc = 0x4db678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_4db67c:
    // 0x4db67c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4db67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4db680:
    // 0x4db680: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x4db680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4db684:
    // 0x4db684: 0xe7a60030  swc1        $f6, 0x30($sp)
    ctx->pc = 0x4db684u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_4db688:
    // 0x4db688: 0xc6050114  lwc1        $f5, 0x114($s0)
    ctx->pc = 0x4db688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4db68c:
    // 0x4db68c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4db68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4db690:
    // 0x4db690: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4db690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4db694:
    // 0x4db694: 0xe7a50034  swc1        $f5, 0x34($sp)
    ctx->pc = 0x4db694u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_4db698:
    // 0x4db698: 0xc6040118  lwc1        $f4, 0x118($s0)
    ctx->pc = 0x4db698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4db69c:
    // 0x4db69c: 0xe7a40038  swc1        $f4, 0x38($sp)
    ctx->pc = 0x4db69cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_4db6a0:
    // 0x4db6a0: 0xc603011c  lwc1        $f3, 0x11C($s0)
    ctx->pc = 0x4db6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4db6a4:
    // 0x4db6a4: 0xe7a3003c  swc1        $f3, 0x3C($sp)
    ctx->pc = 0x4db6a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_4db6a8:
    // 0x4db6a8: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x4db6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4db6ac:
    // 0x4db6ac: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x4db6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4db6b0:
    // 0x4db6b0: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x4db6b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4db6b4:
    // 0x4db6b4: 0x46023002  mul.s       $f0, $f6, $f2
    ctx->pc = 0x4db6b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_4db6b8:
    // 0x4db6b8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x4db6b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_4db6bc:
    // 0x4db6bc: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x4db6bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_4db6c0:
    // 0x4db6c0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x4db6c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_4db6c4:
    // 0x4db6c4: 0x46022042  mul.s       $f1, $f4, $f2
    ctx->pc = 0x4db6c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_4db6c8:
    // 0x4db6c8: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x4db6c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_4db6cc:
    // 0x4db6cc: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x4db6ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_4db6d0:
    // 0x4db6d0: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x4db6d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_4db6d4:
    // 0x4db6d4: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x4db6d4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4db6d8:
    // 0x4db6d8: 0xc088b74  jal         func_222DD0
label_4db6dc:
    if (ctx->pc == 0x4DB6DCu) {
        ctx->pc = 0x4DB6DCu;
            // 0x4db6dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DB6E0u;
        goto label_4db6e0;
    }
    ctx->pc = 0x4DB6D8u;
    SET_GPR_U32(ctx, 31, 0x4DB6E0u);
    ctx->pc = 0x4DB6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB6D8u;
            // 0x4db6dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB6E0u; }
        if (ctx->pc != 0x4DB6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB6E0u; }
        if (ctx->pc != 0x4DB6E0u) { return; }
    }
    ctx->pc = 0x4DB6E0u;
label_4db6e0:
    // 0x4db6e0: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x4db6e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_4db6e4:
    // 0x4db6e4: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x4db6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_4db6e8:
    // 0x4db6e8: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x4db6e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_4db6ec:
    // 0x4db6ec: 0x320f809  jalr        $t9
label_4db6f0:
    if (ctx->pc == 0x4DB6F0u) {
        ctx->pc = 0x4DB6F0u;
            // 0x4db6f0: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4DB6F4u;
        goto label_4db6f4;
    }
    ctx->pc = 0x4DB6ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DB6F4u);
        ctx->pc = 0x4DB6F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB6ECu;
            // 0x4db6f0: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DB6F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DB6F4u; }
            if (ctx->pc != 0x4DB6F4u) { return; }
        }
        }
    }
    ctx->pc = 0x4DB6F4u;
label_4db6f4:
    // 0x4db6f4: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x4db6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_4db6f8:
    // 0x4db6f8: 0xc04f278  jal         func_13C9E0
label_4db6fc:
    if (ctx->pc == 0x4DB6FCu) {
        ctx->pc = 0x4DB6FCu;
            // 0x4db6fc: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x4DB700u;
        goto label_4db700;
    }
    ctx->pc = 0x4DB6F8u;
    SET_GPR_U32(ctx, 31, 0x4DB700u);
    ctx->pc = 0x4DB6FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB6F8u;
            // 0x4db6fc: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB700u; }
        if (ctx->pc != 0x4DB700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB700u; }
        if (ctx->pc != 0x4DB700u) { return; }
    }
    ctx->pc = 0x4DB700u;
label_4db700:
    // 0x4db700: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4db700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4db704:
    // 0x4db704: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4db704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4db708:
    // 0x4db708: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x4db708u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_4db70c:
    // 0x4db70c: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x4db70cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_4db710:
    // 0x4db710: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x4db710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_4db714:
    // 0x4db714: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x4db714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_4db718:
    // 0x4db718: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4db718u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4db71c:
    // 0x4db71c: 0xc0bb404  jal         func_2ED010
label_4db720:
    if (ctx->pc == 0x4DB720u) {
        ctx->pc = 0x4DB720u;
            // 0x4db720: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4DB724u;
        goto label_4db724;
    }
    ctx->pc = 0x4DB71Cu;
    SET_GPR_U32(ctx, 31, 0x4DB724u);
    ctx->pc = 0x4DB720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB71Cu;
            // 0x4db720: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB724u; }
        if (ctx->pc != 0x4DB724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB724u; }
        if (ctx->pc != 0x4DB724u) { return; }
    }
    ctx->pc = 0x4DB724u;
label_4db724:
    // 0x4db724: 0xc088b74  jal         func_222DD0
label_4db728:
    if (ctx->pc == 0x4DB728u) {
        ctx->pc = 0x4DB728u;
            // 0x4db728: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x4DB72Cu;
        goto label_4db72c;
    }
    ctx->pc = 0x4DB724u;
    SET_GPR_U32(ctx, 31, 0x4DB72Cu);
    ctx->pc = 0x4DB728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB724u;
            // 0x4db728: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB72Cu; }
        if (ctx->pc != 0x4DB72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB72Cu; }
        if (ctx->pc != 0x4DB72Cu) { return; }
    }
    ctx->pc = 0x4DB72Cu;
label_4db72c:
    // 0x4db72c: 0xa2000100  sb          $zero, 0x100($s0)
    ctx->pc = 0x4db72cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 256), (uint8_t)GPR_U32(ctx, 0));
label_4db730:
    // 0x4db730: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4db730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4db734:
    // 0x4db734: 0xa2000064  sb          $zero, 0x64($s0)
    ctx->pc = 0x4db734u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 0));
label_4db738:
    // 0x4db738: 0xa2000065  sb          $zero, 0x65($s0)
    ctx->pc = 0x4db738u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 101), (uint8_t)GPR_U32(ctx, 0));
label_4db73c:
    // 0x4db73c: 0xa2000066  sb          $zero, 0x66($s0)
    ctx->pc = 0x4db73cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 102), (uint8_t)GPR_U32(ctx, 0));
label_4db740:
    // 0x4db740: 0xa2000067  sb          $zero, 0x67($s0)
    ctx->pc = 0x4db740u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 103), (uint8_t)GPR_U32(ctx, 0));
label_4db744:
    // 0x4db744: 0xa2000068  sb          $zero, 0x68($s0)
    ctx->pc = 0x4db744u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 0));
label_4db748:
    // 0x4db748: 0xa2000069  sb          $zero, 0x69($s0)
    ctx->pc = 0x4db748u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 0));
label_4db74c:
    // 0x4db74c: 0xa200006a  sb          $zero, 0x6A($s0)
    ctx->pc = 0x4db74cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 106), (uint8_t)GPR_U32(ctx, 0));
label_4db750:
    // 0x4db750: 0xa200006b  sb          $zero, 0x6B($s0)
    ctx->pc = 0x4db750u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 107), (uint8_t)GPR_U32(ctx, 0));
label_4db754:
    // 0x4db754: 0xa20000d1  sb          $zero, 0xD1($s0)
    ctx->pc = 0x4db754u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 209), (uint8_t)GPR_U32(ctx, 0));
label_4db758:
    // 0x4db758: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4db758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4db75c:
    // 0x4db75c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4db75cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4db760:
    // 0x4db760: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4db760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4db764:
    // 0x4db764: 0x3e00008  jr          $ra
label_4db768:
    if (ctx->pc == 0x4DB768u) {
        ctx->pc = 0x4DB768u;
            // 0x4db768: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4DB76Cu;
        goto label_4db76c;
    }
    ctx->pc = 0x4DB764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DB768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB764u;
            // 0x4db768: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DB76Cu;
label_4db76c:
    // 0x4db76c: 0x0  nop
    ctx->pc = 0x4db76cu;
    // NOP
label_4db770:
    // 0x4db770: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4db770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4db774:
    // 0x4db774: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4db774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4db778:
    // 0x4db778: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4db778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4db77c:
    // 0x4db77c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4db77cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4db780:
    // 0x4db780: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4db780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4db784:
    // 0x4db784: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4db784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4db788:
    // 0x4db788: 0x8c4264b8  lw          $v0, 0x64B8($v0)
    ctx->pc = 0x4db788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25784)));
label_4db78c:
    // 0x4db78c: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x4db78cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_4db790:
    // 0x4db790: 0xc12e608  jal         func_4B9820
label_4db794:
    if (ctx->pc == 0x4DB794u) {
        ctx->pc = 0x4DB794u;
            // 0x4db794: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DB798u;
        goto label_4db798;
    }
    ctx->pc = 0x4DB790u;
    SET_GPR_U32(ctx, 31, 0x4DB798u);
    ctx->pc = 0x4DB794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB790u;
            // 0x4db794: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B9820u;
    if (runtime->hasFunction(0x4B9820u)) {
        auto targetFn = runtime->lookupFunction(0x4B9820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB798u; }
        if (ctx->pc != 0x4DB798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B9820_0x4b9820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB798u; }
        if (ctx->pc != 0x4DB798u) { return; }
    }
    ctx->pc = 0x4DB798u;
label_4db798:
    // 0x4db798: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4db798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4db79c:
    // 0x4db79c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x4db79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4db7a0:
    // 0x4db7a0: 0xc040180  jal         func_100600
label_4db7a4:
    if (ctx->pc == 0x4DB7A4u) {
        ctx->pc = 0x4DB7A4u;
            // 0x4db7a4: 0xa20200d1  sb          $v0, 0xD1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 209), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4DB7A8u;
        goto label_4db7a8;
    }
    ctx->pc = 0x4DB7A0u;
    SET_GPR_U32(ctx, 31, 0x4DB7A8u);
    ctx->pc = 0x4DB7A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB7A0u;
            // 0x4db7a4: 0xa20200d1  sb          $v0, 0xD1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 209), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB7A8u; }
        if (ctx->pc != 0x4DB7A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB7A8u; }
        if (ctx->pc != 0x4DB7A8u) { return; }
    }
    ctx->pc = 0x4DB7A8u;
label_4db7a8:
    // 0x4db7a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4db7a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4db7ac:
    // 0x4db7ac: 0x5220000f  beql        $s1, $zero, . + 4 + (0xF << 2)
label_4db7b0:
    if (ctx->pc == 0x4DB7B0u) {
        ctx->pc = 0x4DB7B0u;
            // 0x4db7b0: 0x3c02461c  lui         $v0, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
        ctx->pc = 0x4DB7B4u;
        goto label_4db7b4;
    }
    ctx->pc = 0x4DB7ACu;
    {
        const bool branch_taken_0x4db7ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4db7ac) {
            ctx->pc = 0x4DB7B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB7ACu;
            // 0x4db7b0: 0x3c02461c  lui         $v0, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DB7ECu;
            goto label_4db7ec;
        }
    }
    ctx->pc = 0x4DB7B4u;
label_4db7b4:
    // 0x4db7b4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4db7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4db7b8:
    // 0x4db7b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4db7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4db7bc:
    // 0x4db7bc: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x4db7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_4db7c0:
    // 0x4db7c0: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x4db7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_4db7c4:
    // 0x4db7c4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4db7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4db7c8:
    // 0x4db7c8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x4db7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_4db7cc:
    // 0x4db7cc: 0xc040138  jal         func_1004E0
label_4db7d0:
    if (ctx->pc == 0x4DB7D0u) {
        ctx->pc = 0x4DB7D0u;
            // 0x4db7d0: 0xa2220008  sb          $v0, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4DB7D4u;
        goto label_4db7d4;
    }
    ctx->pc = 0x4DB7CCu;
    SET_GPR_U32(ctx, 31, 0x4DB7D4u);
    ctx->pc = 0x4DB7D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB7CCu;
            // 0x4db7d0: 0xa2220008  sb          $v0, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB7D4u; }
        if (ctx->pc != 0x4DB7D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB7D4u; }
        if (ctx->pc != 0x4DB7D4u) { return; }
    }
    ctx->pc = 0x4DB7D4u;
label_4db7d4:
    // 0x4db7d4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x4db7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_4db7d8:
    // 0x4db7d8: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x4db7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_4db7dc:
    // 0x4db7dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4db7dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4db7e0:
    // 0x4db7e0: 0xc04a576  jal         func_1295D8
label_4db7e4:
    if (ctx->pc == 0x4DB7E4u) {
        ctx->pc = 0x4DB7E4u;
            // 0x4db7e4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x4DB7E8u;
        goto label_4db7e8;
    }
    ctx->pc = 0x4DB7E0u;
    SET_GPR_U32(ctx, 31, 0x4DB7E8u);
    ctx->pc = 0x4DB7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB7E0u;
            // 0x4db7e4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB7E8u; }
        if (ctx->pc != 0x4DB7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB7E8u; }
        if (ctx->pc != 0x4DB7E8u) { return; }
    }
    ctx->pc = 0x4DB7E8u;
label_4db7e8:
    // 0x4db7e8: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x4db7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_4db7ec:
    // 0x4db7ec: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x4db7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_4db7f0:
    // 0x4db7f0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x4db7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_4db7f4:
    // 0x4db7f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4db7f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4db7f8:
    // 0x4db7f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4db7f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4db7fc:
    // 0x4db7fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4db7fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4db800:
    // 0x4db800: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x4db800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
label_4db804:
    // 0x4db804: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4db804u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4db808:
    // 0x4db808: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x4db808u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4db80c:
    // 0x4db80c: 0x344610ae  ori         $a2, $v0, 0x10AE
    ctx->pc = 0x4db80cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4270);
label_4db810:
    // 0x4db810: 0xc122cd8  jal         func_48B360
label_4db814:
    if (ctx->pc == 0x4DB814u) {
        ctx->pc = 0x4DB814u;
            // 0x4db814: 0xae110190  sw          $s1, 0x190($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 17));
        ctx->pc = 0x4DB818u;
        goto label_4db818;
    }
    ctx->pc = 0x4DB810u;
    SET_GPR_U32(ctx, 31, 0x4DB818u);
    ctx->pc = 0x4DB814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB810u;
            // 0x4db814: 0xae110190  sw          $s1, 0x190($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB818u; }
        if (ctx->pc != 0x4DB818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB818u; }
        if (ctx->pc != 0x4DB818u) { return; }
    }
    ctx->pc = 0x4DB818u;
label_4db818:
    // 0x4db818: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4db818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4db81c:
    // 0x4db81c: 0x26040120  addiu       $a0, $s0, 0x120
    ctx->pc = 0x4db81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
label_4db820:
    // 0x4db820: 0xa2020064  sb          $v0, 0x64($s0)
    ctx->pc = 0x4db820u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 2));
label_4db824:
    // 0x4db824: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x4db824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_4db828:
    // 0x4db828: 0xa2000065  sb          $zero, 0x65($s0)
    ctx->pc = 0x4db828u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 101), (uint8_t)GPR_U32(ctx, 0));
label_4db82c:
    // 0x4db82c: 0xa2020066  sb          $v0, 0x66($s0)
    ctx->pc = 0x4db82cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 102), (uint8_t)GPR_U32(ctx, 2));
label_4db830:
    // 0x4db830: 0xa2000067  sb          $zero, 0x67($s0)
    ctx->pc = 0x4db830u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 103), (uint8_t)GPR_U32(ctx, 0));
label_4db834:
    // 0x4db834: 0xa2020068  sb          $v0, 0x68($s0)
    ctx->pc = 0x4db834u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 2));
label_4db838:
    // 0x4db838: 0xa2000069  sb          $zero, 0x69($s0)
    ctx->pc = 0x4db838u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 0));
label_4db83c:
    // 0x4db83c: 0xa202006a  sb          $v0, 0x6A($s0)
    ctx->pc = 0x4db83cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 106), (uint8_t)GPR_U32(ctx, 2));
label_4db840:
    // 0x4db840: 0xc04cc04  jal         func_133010
label_4db844:
    if (ctx->pc == 0x4DB844u) {
        ctx->pc = 0x4DB844u;
            // 0x4db844: 0xa200006b  sb          $zero, 0x6B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 107), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4DB848u;
        goto label_4db848;
    }
    ctx->pc = 0x4DB840u;
    SET_GPR_U32(ctx, 31, 0x4DB848u);
    ctx->pc = 0x4DB844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB840u;
            // 0x4db844: 0xa200006b  sb          $zero, 0x6B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 107), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB848u; }
        if (ctx->pc != 0x4DB848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB848u; }
        if (ctx->pc != 0x4DB848u) { return; }
    }
    ctx->pc = 0x4DB848u;
label_4db848:
    // 0x4db848: 0x26040130  addiu       $a0, $s0, 0x130
    ctx->pc = 0x4db848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
label_4db84c:
    // 0x4db84c: 0xc04c720  jal         func_131C80
label_4db850:
    if (ctx->pc == 0x4DB850u) {
        ctx->pc = 0x4DB850u;
            // 0x4db850: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x4DB854u;
        goto label_4db854;
    }
    ctx->pc = 0x4DB84Cu;
    SET_GPR_U32(ctx, 31, 0x4DB854u);
    ctx->pc = 0x4DB850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB84Cu;
            // 0x4db850: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB854u; }
        if (ctx->pc != 0x4DB854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB854u; }
        if (ctx->pc != 0x4DB854u) { return; }
    }
    ctx->pc = 0x4DB854u;
label_4db854:
    // 0x4db854: 0xc6010120  lwc1        $f1, 0x120($s0)
    ctx->pc = 0x4db854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4db858:
    // 0x4db858: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4db858u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4db85c:
    // 0x4db85c: 0x0  nop
    ctx->pc = 0x4db85cu;
    // NOP
label_4db860:
    // 0x4db860: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4db860u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4db864:
    // 0x4db864: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
label_4db868:
    if (ctx->pc == 0x4DB868u) {
        ctx->pc = 0x4DB868u;
            // 0x4db868: 0x3c03419c  lui         $v1, 0x419C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16796 << 16));
        ctx->pc = 0x4DB86Cu;
        goto label_4db86c;
    }
    ctx->pc = 0x4DB864u;
    {
        const bool branch_taken_0x4db864 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4db864) {
            ctx->pc = 0x4DB868u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB864u;
            // 0x4db868: 0x3c03419c  lui         $v1, 0x419C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16796 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DB878u;
            goto label_4db878;
        }
    }
    ctx->pc = 0x4DB86Cu;
label_4db86c:
    // 0x4db86c: 0x3c03c19c  lui         $v1, 0xC19C
    ctx->pc = 0x4db86cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49564 << 16));
label_4db870:
    // 0x4db870: 0x10000002  b           . + 4 + (0x2 << 2)
label_4db874:
    if (ctx->pc == 0x4DB874u) {
        ctx->pc = 0x4DB874u;
            // 0x4db874: 0xae030128  sw          $v1, 0x128($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 3));
        ctx->pc = 0x4DB878u;
        goto label_4db878;
    }
    ctx->pc = 0x4DB870u;
    {
        const bool branch_taken_0x4db870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DB874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB870u;
            // 0x4db874: 0xae030128  sw          $v1, 0x128($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4db870) {
            ctx->pc = 0x4DB87Cu;
            goto label_4db87c;
        }
    }
    ctx->pc = 0x4DB878u;
label_4db878:
    // 0x4db878: 0xae030128  sw          $v1, 0x128($s0)
    ctx->pc = 0x4db878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 3));
label_4db87c:
    // 0x4db87c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4db87cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4db880:
    // 0x4db880: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4db880u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4db884:
    // 0x4db884: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4db884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4db888:
    // 0x4db888: 0x3e00008  jr          $ra
label_4db88c:
    if (ctx->pc == 0x4DB88Cu) {
        ctx->pc = 0x4DB88Cu;
            // 0x4db88c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4DB890u;
        goto label_4db890;
    }
    ctx->pc = 0x4DB888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DB88Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB888u;
            // 0x4db88c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DB890u;
label_4db890:
    // 0x4db890: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4db890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4db894:
    // 0x4db894: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4db894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4db898:
    // 0x4db898: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4db898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4db89c:
    // 0x4db89c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4db89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4db8a0:
    // 0x4db8a0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4db8a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4db8a4:
    // 0x4db8a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4db8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4db8a8:
    // 0x4db8a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4db8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4db8ac:
    // 0x4db8ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4db8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4db8b0:
    // 0x4db8b0: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x4db8b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4db8b4:
    // 0x4db8b4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_4db8b8:
    if (ctx->pc == 0x4DB8B8u) {
        ctx->pc = 0x4DB8B8u;
            // 0x4db8b8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DB8BCu;
        goto label_4db8bc;
    }
    ctx->pc = 0x4DB8B4u;
    {
        const bool branch_taken_0x4db8b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DB8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB8B4u;
            // 0x4db8b8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4db8b4) {
            ctx->pc = 0x4DB8F8u;
            goto label_4db8f8;
        }
    }
    ctx->pc = 0x4DB8BCu;
label_4db8bc:
    // 0x4db8bc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4db8bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4db8c0:
    // 0x4db8c0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4db8c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4db8c4:
    // 0x4db8c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4db8c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4db8c8:
    // 0x4db8c8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x4db8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_4db8cc:
    // 0x4db8cc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4db8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4db8d0:
    // 0x4db8d0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4db8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4db8d4:
    // 0x4db8d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4db8d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4db8d8:
    // 0x4db8d8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4db8d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4db8dc:
    // 0x4db8dc: 0x320f809  jalr        $t9
label_4db8e0:
    if (ctx->pc == 0x4DB8E0u) {
        ctx->pc = 0x4DB8E4u;
        goto label_4db8e4;
    }
    ctx->pc = 0x4DB8DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DB8E4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DB8E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DB8E4u; }
            if (ctx->pc != 0x4DB8E4u) { return; }
        }
        }
    }
    ctx->pc = 0x4DB8E4u;
label_4db8e4:
    // 0x4db8e4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x4db8e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4db8e8:
    // 0x4db8e8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4db8e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4db8ec:
    // 0x4db8ec: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x4db8ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4db8f0:
    // 0x4db8f0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_4db8f4:
    if (ctx->pc == 0x4DB8F4u) {
        ctx->pc = 0x4DB8F4u;
            // 0x4db8f4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4DB8F8u;
        goto label_4db8f8;
    }
    ctx->pc = 0x4DB8F0u;
    {
        const bool branch_taken_0x4db8f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DB8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB8F0u;
            // 0x4db8f4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4db8f0) {
            ctx->pc = 0x4DB8C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4db8c8;
        }
    }
    ctx->pc = 0x4DB8F8u;
label_4db8f8:
    // 0x4db8f8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4db8f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4db8fc:
    // 0x4db8fc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4db8fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4db900:
    // 0x4db900: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4db900u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4db904:
    // 0x4db904: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4db904u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4db908:
    // 0x4db908: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4db908u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4db90c:
    // 0x4db90c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4db90cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4db910:
    // 0x4db910: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4db910u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4db914:
    // 0x4db914: 0x3e00008  jr          $ra
label_4db918:
    if (ctx->pc == 0x4DB918u) {
        ctx->pc = 0x4DB918u;
            // 0x4db918: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4DB91Cu;
        goto label_4db91c;
    }
    ctx->pc = 0x4DB914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DB918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB914u;
            // 0x4db918: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DB91Cu;
label_4db91c:
    // 0x4db91c: 0x0  nop
    ctx->pc = 0x4db91cu;
    // NOP
label_4db920:
    // 0x4db920: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4db920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4db924:
    // 0x4db924: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4db924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4db928:
    // 0x4db928: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4db928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4db92c:
    // 0x4db92c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x4db92cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_4db930:
    // 0x4db930: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4db930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4db934:
    // 0x4db934: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x4db934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4db938:
    // 0x4db938: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4db938u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4db93c:
    // 0x4db93c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x4db93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_4db940:
    // 0x4db940: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4db940u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4db944:
    // 0x4db944: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4db944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4db948:
    // 0x4db948: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4db948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_4db94c:
    // 0x4db94c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x4db94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4db950:
    // 0x4db950: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4db950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4db954:
    // 0x4db954: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4db954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4db958:
    // 0x4db958: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x4db958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_4db95c:
    // 0x4db95c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x4db95cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_4db960:
    // 0x4db960: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x4db960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4db964:
    // 0x4db964: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4db964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4db968:
    // 0x4db968: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x4db968u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_4db96c:
    // 0x4db96c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x4db96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4db970:
    // 0x4db970: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x4db970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_4db974:
    // 0x4db974: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4db974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4db978:
    // 0x4db978: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x4db978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4db97c:
    // 0x4db97c: 0xc0a997c  jal         func_2A65F0
label_4db980:
    if (ctx->pc == 0x4DB980u) {
        ctx->pc = 0x4DB980u;
            // 0x4db980: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x4DB984u;
        goto label_4db984;
    }
    ctx->pc = 0x4DB97Cu;
    SET_GPR_U32(ctx, 31, 0x4DB984u);
    ctx->pc = 0x4DB980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB97Cu;
            // 0x4db980: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB984u; }
        if (ctx->pc != 0x4DB984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB984u; }
        if (ctx->pc != 0x4DB984u) { return; }
    }
    ctx->pc = 0x4DB984u;
label_4db984:
    // 0x4db984: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x4db984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_4db988:
    // 0x4db988: 0xc0d879c  jal         func_361E70
label_4db98c:
    if (ctx->pc == 0x4DB98Cu) {
        ctx->pc = 0x4DB98Cu;
            // 0x4db98c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DB990u;
        goto label_4db990;
    }
    ctx->pc = 0x4DB988u;
    SET_GPR_U32(ctx, 31, 0x4DB990u);
    ctx->pc = 0x4DB98Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB988u;
            // 0x4db98c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB990u; }
        if (ctx->pc != 0x4DB990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB990u; }
        if (ctx->pc != 0x4DB990u) { return; }
    }
    ctx->pc = 0x4DB990u;
label_4db990:
    // 0x4db990: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4db990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4db994:
    // 0x4db994: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4db994u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4db998:
    // 0x4db998: 0x3e00008  jr          $ra
label_4db99c:
    if (ctx->pc == 0x4DB99Cu) {
        ctx->pc = 0x4DB99Cu;
            // 0x4db99c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4DB9A0u;
        goto label_4db9a0;
    }
    ctx->pc = 0x4DB998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DB99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB998u;
            // 0x4db99c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DB9A0u;
label_4db9a0:
    // 0x4db9a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4db9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4db9a4:
    // 0x4db9a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4db9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4db9a8:
    // 0x4db9a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4db9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4db9ac:
    // 0x4db9ac: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x4db9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_4db9b0:
    // 0x4db9b0: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_4db9b4:
    if (ctx->pc == 0x4DB9B4u) {
        ctx->pc = 0x4DB9B4u;
            // 0x4db9b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DB9B8u;
        goto label_4db9b8;
    }
    ctx->pc = 0x4DB9B0u;
    {
        const bool branch_taken_0x4db9b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DB9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB9B0u;
            // 0x4db9b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4db9b0) {
            ctx->pc = 0x4DBAD0u;
            goto label_4dbad0;
        }
    }
    ctx->pc = 0x4DB9B8u;
label_4db9b8:
    // 0x4db9b8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4db9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4db9bc:
    // 0x4db9bc: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4db9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_4db9c0:
    // 0x4db9c0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4db9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4db9c4:
    // 0x4db9c4: 0xc075128  jal         func_1D44A0
label_4db9c8:
    if (ctx->pc == 0x4DB9C8u) {
        ctx->pc = 0x4DB9C8u;
            // 0x4db9c8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x4DB9CCu;
        goto label_4db9cc;
    }
    ctx->pc = 0x4DB9C4u;
    SET_GPR_U32(ctx, 31, 0x4DB9CCu);
    ctx->pc = 0x4DB9C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB9C4u;
            // 0x4db9c8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB9CCu; }
        if (ctx->pc != 0x4DB9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB9CCu; }
        if (ctx->pc != 0x4DB9CCu) { return; }
    }
    ctx->pc = 0x4DB9CCu;
label_4db9cc:
    // 0x4db9cc: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x4db9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4db9d0:
    // 0x4db9d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4db9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4db9d4:
    // 0x4db9d4: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x4db9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_4db9d8:
    // 0x4db9d8: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x4db9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4db9dc:
    // 0x4db9dc: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4db9dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4db9e0:
    // 0x4db9e0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4db9e4:
    if (ctx->pc == 0x4DB9E4u) {
        ctx->pc = 0x4DB9E4u;
            // 0x4db9e4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x4DB9E8u;
        goto label_4db9e8;
    }
    ctx->pc = 0x4DB9E0u;
    {
        const bool branch_taken_0x4db9e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DB9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB9E0u;
            // 0x4db9e4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4db9e0) {
            ctx->pc = 0x4DB9F0u;
            goto label_4db9f0;
        }
    }
    ctx->pc = 0x4DB9E8u;
label_4db9e8:
    // 0x4db9e8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4db9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4db9ec:
    // 0x4db9ec: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x4db9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_4db9f0:
    // 0x4db9f0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4db9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4db9f4:
    // 0x4db9f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4db9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4db9f8:
    // 0x4db9f8: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x4db9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_4db9fc:
    // 0x4db9fc: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4db9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4dba00:
    // 0x4dba00: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4dba00u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4dba04:
    // 0x4dba04: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4dba08:
    if (ctx->pc == 0x4DBA08u) {
        ctx->pc = 0x4DBA08u;
            // 0x4dba08: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4DBA0Cu;
        goto label_4dba0c;
    }
    ctx->pc = 0x4DBA04u;
    {
        const bool branch_taken_0x4dba04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dba04) {
            ctx->pc = 0x4DBA08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBA04u;
            // 0x4dba08: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DBA18u;
            goto label_4dba18;
        }
    }
    ctx->pc = 0x4DBA0Cu;
label_4dba0c:
    // 0x4dba0c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4dba0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4dba10:
    // 0x4dba10: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4dba10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4dba14:
    // 0x4dba14: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4dba14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4dba18:
    // 0x4dba18: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4dba18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4dba1c:
    // 0x4dba1c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4dba1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4dba20:
    // 0x4dba20: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4dba20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4dba24:
    // 0x4dba24: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4dba24u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4dba28:
    // 0x4dba28: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4dba2c:
    if (ctx->pc == 0x4DBA2Cu) {
        ctx->pc = 0x4DBA2Cu;
            // 0x4dba2c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4DBA30u;
        goto label_4dba30;
    }
    ctx->pc = 0x4DBA28u;
    {
        const bool branch_taken_0x4dba28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dba28) {
            ctx->pc = 0x4DBA2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBA28u;
            // 0x4dba2c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DBA3Cu;
            goto label_4dba3c;
        }
    }
    ctx->pc = 0x4DBA30u;
label_4dba30:
    // 0x4dba30: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4dba30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4dba34:
    // 0x4dba34: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4dba34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4dba38:
    // 0x4dba38: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4dba38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4dba3c:
    // 0x4dba3c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4dba3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4dba40:
    // 0x4dba40: 0x320f809  jalr        $t9
label_4dba44:
    if (ctx->pc == 0x4DBA44u) {
        ctx->pc = 0x4DBA44u;
            // 0x4dba44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DBA48u;
        goto label_4dba48;
    }
    ctx->pc = 0x4DBA40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DBA48u);
        ctx->pc = 0x4DBA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBA40u;
            // 0x4dba44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DBA48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DBA48u; }
            if (ctx->pc != 0x4DBA48u) { return; }
        }
        }
    }
    ctx->pc = 0x4DBA48u;
label_4dba48:
    // 0x4dba48: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4dba48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4dba4c:
    // 0x4dba4c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4dba4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4dba50:
    // 0x4dba50: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x4dba50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_4dba54:
    // 0x4dba54: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4dba54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4dba58:
    // 0x4dba58: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4dba58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4dba5c:
    // 0x4dba5c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4dba5cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4dba60:
    // 0x4dba60: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4dba64:
    if (ctx->pc == 0x4DBA64u) {
        ctx->pc = 0x4DBA64u;
            // 0x4dba64: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x4DBA68u;
        goto label_4dba68;
    }
    ctx->pc = 0x4DBA60u;
    {
        const bool branch_taken_0x4dba60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dba60) {
            ctx->pc = 0x4DBA64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBA60u;
            // 0x4dba64: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DBA74u;
            goto label_4dba74;
        }
    }
    ctx->pc = 0x4DBA68u;
label_4dba68:
    // 0x4dba68: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4dba68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4dba6c:
    // 0x4dba6c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x4dba6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_4dba70:
    // 0x4dba70: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4dba70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4dba74:
    // 0x4dba74: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4dba74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4dba78:
    // 0x4dba78: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x4dba78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_4dba7c:
    // 0x4dba7c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4dba7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4dba80:
    // 0x4dba80: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4dba80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4dba84:
    // 0x4dba84: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4dba84u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4dba88:
    // 0x4dba88: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4dba8c:
    if (ctx->pc == 0x4DBA8Cu) {
        ctx->pc = 0x4DBA90u;
        goto label_4dba90;
    }
    ctx->pc = 0x4DBA88u;
    {
        const bool branch_taken_0x4dba88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dba88) {
            ctx->pc = 0x4DBA98u;
            goto label_4dba98;
        }
    }
    ctx->pc = 0x4DBA90u;
label_4dba90:
    // 0x4dba90: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4dba90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4dba94:
    // 0x4dba94: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x4dba94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_4dba98:
    // 0x4dba98: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4dba98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4dba9c:
    // 0x4dba9c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x4dba9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_4dbaa0:
    // 0x4dbaa0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4dbaa0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4dbaa4:
    // 0x4dbaa4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4dbaa8:
    if (ctx->pc == 0x4DBAA8u) {
        ctx->pc = 0x4DBAACu;
        goto label_4dbaac;
    }
    ctx->pc = 0x4DBAA4u;
    {
        const bool branch_taken_0x4dbaa4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dbaa4) {
            ctx->pc = 0x4DBAB4u;
            goto label_4dbab4;
        }
    }
    ctx->pc = 0x4DBAACu;
label_4dbaac:
    // 0x4dbaac: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4dbaacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4dbab0:
    // 0x4dbab0: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x4dbab0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_4dbab4:
    // 0x4dbab4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4dbab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4dbab8:
    // 0x4dbab8: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x4dbab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_4dbabc:
    // 0x4dbabc: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4dbabcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4dbac0:
    // 0x4dbac0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4dbac4:
    if (ctx->pc == 0x4DBAC4u) {
        ctx->pc = 0x4DBAC4u;
            // 0x4dbac4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4DBAC8u;
        goto label_4dbac8;
    }
    ctx->pc = 0x4DBAC0u;
    {
        const bool branch_taken_0x4dbac0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dbac0) {
            ctx->pc = 0x4DBAC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBAC0u;
            // 0x4dbac4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DBAD4u;
            goto label_4dbad4;
        }
    }
    ctx->pc = 0x4DBAC8u;
label_4dbac8:
    // 0x4dbac8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4dbac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4dbacc:
    // 0x4dbacc: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x4dbaccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_4dbad0:
    // 0x4dbad0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4dbad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4dbad4:
    // 0x4dbad4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4dbad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4dbad8:
    // 0x4dbad8: 0x3e00008  jr          $ra
label_4dbadc:
    if (ctx->pc == 0x4DBADCu) {
        ctx->pc = 0x4DBADCu;
            // 0x4dbadc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4DBAE0u;
        goto label_4dbae0;
    }
    ctx->pc = 0x4DBAD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DBADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBAD8u;
            // 0x4dbadc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DBAE0u;
label_4dbae0:
    // 0x4dbae0: 0x81369c0  j           func_4DA700
label_4dbae4:
    if (ctx->pc == 0x4DBAE4u) {
        ctx->pc = 0x4DBAE4u;
            // 0x4dbae4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x4DBAE8u;
        goto label_4dbae8;
    }
    ctx->pc = 0x4DBAE0u;
    ctx->pc = 0x4DBAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBAE0u;
            // 0x4dbae4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DA700u;
    {
        auto targetFn = runtime->lookupFunction(0x4DA700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4DBAE8u;
label_4dbae8:
    // 0x4dbae8: 0x0  nop
    ctx->pc = 0x4dbae8u;
    // NOP
label_4dbaec:
    // 0x4dbaec: 0x0  nop
    ctx->pc = 0x4dbaecu;
    // NOP
label_4dbaf0:
    // 0x4dbaf0: 0x8136bc4  j           func_4DAF10
label_4dbaf4:
    if (ctx->pc == 0x4DBAF4u) {
        ctx->pc = 0x4DBAF4u;
            // 0x4dbaf4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4DBAF8u;
        goto label_4dbaf8;
    }
    ctx->pc = 0x4DBAF0u;
    ctx->pc = 0x4DBAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBAF0u;
            // 0x4dbaf4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DAF10u;
    {
        auto targetFn = runtime->lookupFunction(0x4DAF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4DBAF8u;
label_4dbaf8:
    // 0x4dbaf8: 0x0  nop
    ctx->pc = 0x4dbaf8u;
    // NOP
label_4dbafc:
    // 0x4dbafc: 0x0  nop
    ctx->pc = 0x4dbafcu;
    // NOP
label_4dbb00:
    // 0x4dbb00: 0x8136968  j           func_4DA5A0
label_4dbb04:
    if (ctx->pc == 0x4DBB04u) {
        ctx->pc = 0x4DBB04u;
            // 0x4dbb04: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4DBB08u;
        goto label_4dbb08;
    }
    ctx->pc = 0x4DBB00u;
    ctx->pc = 0x4DBB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBB00u;
            // 0x4dbb04: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DA5A0u;
    if (runtime->hasFunction(0x4DA5A0u)) {
        auto targetFn = runtime->lookupFunction(0x4DA5A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_004DA5A0_0x4da5a0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4DBB08u;
label_4dbb08:
    // 0x4dbb08: 0x0  nop
    ctx->pc = 0x4dbb08u;
    // NOP
label_4dbb0c:
    // 0x4dbb0c: 0x0  nop
    ctx->pc = 0x4dbb0cu;
    // NOP
label_4dbb10:
    // 0x4dbb10: 0x8136930  j           func_4DA4C0
label_4dbb14:
    if (ctx->pc == 0x4DBB14u) {
        ctx->pc = 0x4DBB14u;
            // 0x4dbb14: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4DBB18u;
        goto label_4dbb18;
    }
    ctx->pc = 0x4DBB10u;
    ctx->pc = 0x4DBB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBB10u;
            // 0x4dbb14: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DA4C0u;
    {
        auto targetFn = runtime->lookupFunction(0x4DA4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4DBB18u;
label_4dbb18:
    // 0x4dbb18: 0x0  nop
    ctx->pc = 0x4dbb18u;
    // NOP
label_4dbb1c:
    // 0x4dbb1c: 0x0  nop
    ctx->pc = 0x4dbb1cu;
    // NOP
label_4dbb20:
    // 0x4dbb20: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4dbb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_4dbb24:
    // 0x4dbb24: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4dbb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4dbb28:
    // 0x4dbb28: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4dbb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4dbb2c:
    // 0x4dbb2c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4dbb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4dbb30:
    // 0x4dbb30: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4dbb30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4dbb34:
    // 0x4dbb34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4dbb34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4dbb38:
    // 0x4dbb38: 0xc4830020  lwc1        $f3, 0x20($a0)
    ctx->pc = 0x4dbb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4dbb3c:
    // 0x4dbb3c: 0xc4820024  lwc1        $f2, 0x24($a0)
    ctx->pc = 0x4dbb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4dbb40:
    // 0x4dbb40: 0xc4810028  lwc1        $f1, 0x28($a0)
    ctx->pc = 0x4dbb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4dbb44:
    // 0x4dbb44: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x4dbb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4dbb48:
    // 0x4dbb48: 0xe7a30090  swc1        $f3, 0x90($sp)
    ctx->pc = 0x4dbb48u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_4dbb4c:
    // 0x4dbb4c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4dbb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4dbb50:
    // 0x4dbb50: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x4dbb50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_4dbb54:
    // 0x4dbb54: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x4dbb54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_4dbb58:
    // 0x4dbb58: 0xc04c968  jal         func_1325A0
label_4dbb5c:
    if (ctx->pc == 0x4DBB5Cu) {
        ctx->pc = 0x4DBB5Cu;
            // 0x4dbb5c: 0xe7a0009c  swc1        $f0, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->pc = 0x4DBB60u;
        goto label_4dbb60;
    }
    ctx->pc = 0x4DBB58u;
    SET_GPR_U32(ctx, 31, 0x4DBB60u);
    ctx->pc = 0x4DBB5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBB58u;
            // 0x4dbb5c: 0xe7a0009c  swc1        $f0, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBB60u; }
        if (ctx->pc != 0x4DBB60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBB60u; }
        if (ctx->pc != 0x4DBB60u) { return; }
    }
    ctx->pc = 0x4DBB60u;
label_4dbb60:
    // 0x4dbb60: 0xc04c968  jal         func_1325A0
label_4dbb64:
    if (ctx->pc == 0x4DBB64u) {
        ctx->pc = 0x4DBB64u;
            // 0x4dbb64: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4DBB68u;
        goto label_4dbb68;
    }
    ctx->pc = 0x4DBB60u;
    SET_GPR_U32(ctx, 31, 0x4DBB68u);
    ctx->pc = 0x4DBB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBB60u;
            // 0x4dbb64: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBB68u; }
        if (ctx->pc != 0x4DBB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBB68u; }
        if (ctx->pc != 0x4DBB68u) { return; }
    }
    ctx->pc = 0x4DBB68u;
label_4dbb68:
    // 0x4dbb68: 0xc60100ec  lwc1        $f1, 0xEC($s0)
    ctx->pc = 0x4dbb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4dbb6c:
    // 0x4dbb6c: 0x3c03c2b4  lui         $v1, 0xC2B4
    ctx->pc = 0x4dbb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49844 << 16));
label_4dbb70:
    // 0x4dbb70: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x4dbb70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4dbb74:
    // 0x4dbb74: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x4dbb74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_4dbb78:
    // 0x4dbb78: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x4dbb78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_4dbb7c:
    // 0x4dbb7c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4dbb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4dbb80:
    // 0x4dbb80: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x4dbb80u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_4dbb84:
    // 0x4dbb84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4dbb84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4dbb88:
    // 0x4dbb88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4dbb88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4dbb8c:
    // 0x4dbb8c: 0x0  nop
    ctx->pc = 0x4dbb8cu;
    // NOP
label_4dbb90:
    // 0x4dbb90: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4dbb90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_4dbb94:
    // 0x4dbb94: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4dbb94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4dbb98:
    // 0x4dbb98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4dbb98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4dbb9c:
    // 0x4dbb9c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4dbb9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4dbba0:
    // 0x4dbba0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x4dbba0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_4dbba4:
    // 0x4dbba4: 0xc04ca18  jal         func_132860
label_4dbba8:
    if (ctx->pc == 0x4DBBA8u) {
        ctx->pc = 0x4DBBA8u;
            // 0x4dbba8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DBBACu;
        goto label_4dbbac;
    }
    ctx->pc = 0x4DBBA4u;
    SET_GPR_U32(ctx, 31, 0x4DBBACu);
    ctx->pc = 0x4DBBA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBBA4u;
            // 0x4dbba8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBBACu; }
        if (ctx->pc != 0x4DBBACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBBACu; }
        if (ctx->pc != 0x4DBBACu) { return; }
    }
    ctx->pc = 0x4DBBACu;
label_4dbbac:
    // 0x4dbbac: 0x3c02c67f  lui         $v0, 0xC67F
    ctx->pc = 0x4dbbacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50815 << 16));
label_4dbbb0:
    // 0x4dbbb0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x4dbbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4dbbb4:
    // 0x4dbbb4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4dbbb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4dbbb8:
    // 0x4dbbb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4dbbb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4dbbbc:
    // 0x4dbbbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4dbbbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4dbbc0:
    // 0x4dbbc0: 0x0  nop
    ctx->pc = 0x4dbbc0u;
    // NOP
label_4dbbc4:
    // 0x4dbbc4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4dbbc4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4dbbc8:
    // 0x4dbbc8: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x4dbbc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_4dbbcc:
    // 0x4dbbcc: 0xc04ca18  jal         func_132860
label_4dbbd0:
    if (ctx->pc == 0x4DBBD0u) {
        ctx->pc = 0x4DBBD0u;
            // 0x4dbbd0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DBBD4u;
        goto label_4dbbd4;
    }
    ctx->pc = 0x4DBBCCu;
    SET_GPR_U32(ctx, 31, 0x4DBBD4u);
    ctx->pc = 0x4DBBD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBBCCu;
            // 0x4dbbd0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBBD4u; }
        if (ctx->pc != 0x4DBBD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBBD4u; }
        if (ctx->pc != 0x4DBBD4u) { return; }
    }
    ctx->pc = 0x4DBBD4u;
label_4dbbd4:
    // 0x4dbbd4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4dbbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4dbbd8:
    // 0x4dbbd8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x4dbbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4dbbdc:
    // 0x4dbbdc: 0xc04c72c  jal         func_131CB0
label_4dbbe0:
    if (ctx->pc == 0x4DBBE0u) {
        ctx->pc = 0x4DBBE0u;
            // 0x4dbbe0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DBBE4u;
        goto label_4dbbe4;
    }
    ctx->pc = 0x4DBBDCu;
    SET_GPR_U32(ctx, 31, 0x4DBBE4u);
    ctx->pc = 0x4DBBE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBBDCu;
            // 0x4dbbe0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBBE4u; }
        if (ctx->pc != 0x4DBBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBBE4u; }
        if (ctx->pc != 0x4DBBE4u) { return; }
    }
    ctx->pc = 0x4DBBE4u;
label_4dbbe4:
    // 0x4dbbe4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x4dbbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4dbbe8:
    // 0x4dbbe8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x4dbbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4dbbec:
    // 0x4dbbec: 0xc04c72c  jal         func_131CB0
label_4dbbf0:
    if (ctx->pc == 0x4DBBF0u) {
        ctx->pc = 0x4DBBF0u;
            // 0x4dbbf0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DBBF4u;
        goto label_4dbbf4;
    }
    ctx->pc = 0x4DBBECu;
    SET_GPR_U32(ctx, 31, 0x4DBBF4u);
    ctx->pc = 0x4DBBF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBBECu;
            // 0x4dbbf0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBBF4u; }
        if (ctx->pc != 0x4DBBF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBBF4u; }
        if (ctx->pc != 0x4DBBF4u) { return; }
    }
    ctx->pc = 0x4DBBF4u;
label_4dbbf4:
    // 0x4dbbf4: 0x26040140  addiu       $a0, $s0, 0x140
    ctx->pc = 0x4dbbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
label_4dbbf8:
    // 0x4dbbf8: 0xc04c720  jal         func_131C80
label_4dbbfc:
    if (ctx->pc == 0x4DBBFCu) {
        ctx->pc = 0x4DBBFCu;
            // 0x4dbbfc: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4DBC00u;
        goto label_4dbc00;
    }
    ctx->pc = 0x4DBBF8u;
    SET_GPR_U32(ctx, 31, 0x4DBC00u);
    ctx->pc = 0x4DBBFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBBF8u;
            // 0x4dbbfc: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBC00u; }
        if (ctx->pc != 0x4DBC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBC00u; }
        if (ctx->pc != 0x4DBC00u) { return; }
    }
    ctx->pc = 0x4DBC00u;
label_4dbc00:
    // 0x4dbc00: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x4dbc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4dbc04:
    // 0x4dbc04: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x4dbc04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4dbc08:
    // 0x4dbc08: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x4dbc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4dbc0c:
    // 0x4dbc0c: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x4dbc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4dbc10:
    // 0x4dbc10: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x4dbc10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_4dbc14:
    // 0x4dbc14: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x4dbc14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_4dbc18:
    // 0x4dbc18: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x4dbc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4dbc1c:
    // 0x4dbc1c: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x4dbc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4dbc20:
    // 0x4dbc20: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x4dbc20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_4dbc24:
    // 0x4dbc24: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x4dbc24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_4dbc28:
    // 0x4dbc28: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x4dbc28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_4dbc2c:
    // 0x4dbc2c: 0xc7a2009c  lwc1        $f2, 0x9C($sp)
    ctx->pc = 0x4dbc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4dbc30:
    // 0x4dbc30: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x4dbc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4dbc34:
    // 0x4dbc34: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x4dbc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4dbc38:
    // 0x4dbc38: 0xe7a2006c  swc1        $f2, 0x6C($sp)
    ctx->pc = 0x4dbc38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_4dbc3c:
    // 0x4dbc3c: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x4dbc3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_4dbc40:
    // 0x4dbc40: 0xc0d8a80  jal         func_362A00
label_4dbc44:
    if (ctx->pc == 0x4DBC44u) {
        ctx->pc = 0x4DBC44u;
            // 0x4dbc44: 0xe7a0005c  swc1        $f0, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->pc = 0x4DBC48u;
        goto label_4dbc48;
    }
    ctx->pc = 0x4DBC40u;
    SET_GPR_U32(ctx, 31, 0x4DBC48u);
    ctx->pc = 0x4DBC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBC40u;
            // 0x4dbc44: 0xe7a0005c  swc1        $f0, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBC48u; }
        if (ctx->pc != 0x4DBC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBC48u; }
        if (ctx->pc != 0x4DBC48u) { return; }
    }
    ctx->pc = 0x4DBC48u;
label_4dbc48:
    // 0x4dbc48: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4dbc48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4dbc4c:
    // 0x4dbc4c: 0xc0d8a80  jal         func_362A00
label_4dbc50:
    if (ctx->pc == 0x4DBC50u) {
        ctx->pc = 0x4DBC50u;
            // 0x4dbc50: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4DBC54u;
        goto label_4dbc54;
    }
    ctx->pc = 0x4DBC4Cu;
    SET_GPR_U32(ctx, 31, 0x4DBC54u);
    ctx->pc = 0x4DBC50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBC4Cu;
            // 0x4dbc50: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBC54u; }
        if (ctx->pc != 0x4DBC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBC54u; }
        if (ctx->pc != 0x4DBC54u) { return; }
    }
    ctx->pc = 0x4DBC54u;
label_4dbc54:
    // 0x4dbc54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4dbc54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4dbc58:
    // 0x4dbc58: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4dbc58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4dbc5c:
    // 0x4dbc5c: 0xc0d8a6c  jal         func_3629B0
label_4dbc60:
    if (ctx->pc == 0x4DBC60u) {
        ctx->pc = 0x4DBC60u;
            // 0x4dbc60: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4DBC64u;
        goto label_4dbc64;
    }
    ctx->pc = 0x4DBC5Cu;
    SET_GPR_U32(ctx, 31, 0x4DBC64u);
    ctx->pc = 0x4DBC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBC5Cu;
            // 0x4dbc60: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3629B0u;
    if (runtime->hasFunction(0x3629B0u)) {
        auto targetFn = runtime->lookupFunction(0x3629B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBC64u; }
        if (ctx->pc != 0x4DBC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003629B0_0x3629b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBC64u; }
        if (ctx->pc != 0x4DBC64u) { return; }
    }
    ctx->pc = 0x4DBC64u;
label_4dbc64:
    // 0x4dbc64: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4dbc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4dbc68:
    // 0x4dbc68: 0xc0b6e90  jal         func_2DBA40
label_4dbc6c:
    if (ctx->pc == 0x4DBC6Cu) {
        ctx->pc = 0x4DBC6Cu;
            // 0x4dbc6c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4DBC70u;
        goto label_4dbc70;
    }
    ctx->pc = 0x4DBC68u;
    SET_GPR_U32(ctx, 31, 0x4DBC70u);
    ctx->pc = 0x4DBC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBC68u;
            // 0x4dbc6c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBA40u;
    if (runtime->hasFunction(0x2DBA40u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBC70u; }
        if (ctx->pc != 0x4DBC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA40_0x2dba40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBC70u; }
        if (ctx->pc != 0x4DBC70u) { return; }
    }
    ctx->pc = 0x4DBC70u;
label_4dbc70:
    // 0x4dbc70: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x4dbc70u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_4dbc74:
    // 0x4dbc74: 0xc0d8a80  jal         func_362A00
label_4dbc78:
    if (ctx->pc == 0x4DBC78u) {
        ctx->pc = 0x4DBC78u;
            // 0x4dbc78: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4DBC7Cu;
        goto label_4dbc7c;
    }
    ctx->pc = 0x4DBC74u;
    SET_GPR_U32(ctx, 31, 0x4DBC7Cu);
    ctx->pc = 0x4DBC78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBC74u;
            // 0x4dbc78: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBC7Cu; }
        if (ctx->pc != 0x4DBC7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBC7Cu; }
        if (ctx->pc != 0x4DBC7Cu) { return; }
    }
    ctx->pc = 0x4DBC7Cu;
label_4dbc7c:
    // 0x4dbc7c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4dbc7cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_4dbc80:
    // 0x4dbc80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4dbc80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4dbc84:
    // 0x4dbc84: 0xc0d8a54  jal         func_362950
label_4dbc88:
    if (ctx->pc == 0x4DBC88u) {
        ctx->pc = 0x4DBC88u;
            // 0x4dbc88: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4DBC8Cu;
        goto label_4dbc8c;
    }
    ctx->pc = 0x4DBC84u;
    SET_GPR_U32(ctx, 31, 0x4DBC8Cu);
    ctx->pc = 0x4DBC88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBC84u;
            // 0x4dbc88: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362950u;
    if (runtime->hasFunction(0x362950u)) {
        auto targetFn = runtime->lookupFunction(0x362950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBC8Cu; }
        if (ctx->pc != 0x4DBC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362950_0x362950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBC8Cu; }
        if (ctx->pc != 0x4DBC8Cu) { return; }
    }
    ctx->pc = 0x4DBC8Cu;
label_4dbc8c:
    // 0x4dbc8c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x4dbc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4dbc90:
    // 0x4dbc90: 0xc0b6e90  jal         func_2DBA40
label_4dbc94:
    if (ctx->pc == 0x4DBC94u) {
        ctx->pc = 0x4DBC94u;
            // 0x4dbc94: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4DBC98u;
        goto label_4dbc98;
    }
    ctx->pc = 0x4DBC90u;
    SET_GPR_U32(ctx, 31, 0x4DBC98u);
    ctx->pc = 0x4DBC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBC90u;
            // 0x4dbc94: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBA40u;
    if (runtime->hasFunction(0x2DBA40u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBC98u; }
        if (ctx->pc != 0x4DBC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA40_0x2dba40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBC98u; }
        if (ctx->pc != 0x4DBC98u) { return; }
    }
    ctx->pc = 0x4DBC98u;
label_4dbc98:
    // 0x4dbc98: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x4dbc98u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_4dbc9c:
    // 0x4dbc9c: 0xc0d8a80  jal         func_362A00
label_4dbca0:
    if (ctx->pc == 0x4DBCA0u) {
        ctx->pc = 0x4DBCA0u;
            // 0x4dbca0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4DBCA4u;
        goto label_4dbca4;
    }
    ctx->pc = 0x4DBC9Cu;
    SET_GPR_U32(ctx, 31, 0x4DBCA4u);
    ctx->pc = 0x4DBCA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBC9Cu;
            // 0x4dbca0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBCA4u; }
        if (ctx->pc != 0x4DBCA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBCA4u; }
        if (ctx->pc != 0x4DBCA4u) { return; }
    }
    ctx->pc = 0x4DBCA4u;
label_4dbca4:
    // 0x4dbca4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4dbca4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_4dbca8:
    // 0x4dbca8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4dbca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4dbcac:
    // 0x4dbcac: 0xc0d8a3c  jal         func_3628F0
label_4dbcb0:
    if (ctx->pc == 0x4DBCB0u) {
        ctx->pc = 0x4DBCB0u;
            // 0x4dbcb0: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4DBCB4u;
        goto label_4dbcb4;
    }
    ctx->pc = 0x4DBCACu;
    SET_GPR_U32(ctx, 31, 0x4DBCB4u);
    ctx->pc = 0x4DBCB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBCACu;
            // 0x4dbcb0: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3628F0u;
    if (runtime->hasFunction(0x3628F0u)) {
        auto targetFn = runtime->lookupFunction(0x3628F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBCB4u; }
        if (ctx->pc != 0x4DBCB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003628F0_0x3628f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBCB4u; }
        if (ctx->pc != 0x4DBCB4u) { return; }
    }
    ctx->pc = 0x4DBCB4u;
label_4dbcb4:
    // 0x4dbcb4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4dbcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4dbcb8:
    // 0x4dbcb8: 0xc0b6e00  jal         func_2DB800
label_4dbcbc:
    if (ctx->pc == 0x4DBCBCu) {
        ctx->pc = 0x4DBCBCu;
            // 0x4dbcbc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DBCC0u;
        goto label_4dbcc0;
    }
    ctx->pc = 0x4DBCB8u;
    SET_GPR_U32(ctx, 31, 0x4DBCC0u);
    ctx->pc = 0x4DBCBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBCB8u;
            // 0x4dbcbc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB800u;
    if (runtime->hasFunction(0x2DB800u)) {
        auto targetFn = runtime->lookupFunction(0x2DB800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBCC0u; }
        if (ctx->pc != 0x4DBCC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB800_0x2db800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBCC0u; }
        if (ctx->pc != 0x4DBCC0u) { return; }
    }
    ctx->pc = 0x4DBCC0u;
label_4dbcc0:
    // 0x4dbcc0: 0xc0d8a80  jal         func_362A00
label_4dbcc4:
    if (ctx->pc == 0x4DBCC4u) {
        ctx->pc = 0x4DBCC4u;
            // 0x4dbcc4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4DBCC8u;
        goto label_4dbcc8;
    }
    ctx->pc = 0x4DBCC0u;
    SET_GPR_U32(ctx, 31, 0x4DBCC8u);
    ctx->pc = 0x4DBCC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBCC0u;
            // 0x4dbcc4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBCC8u; }
        if (ctx->pc != 0x4DBCC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBCC8u; }
        if (ctx->pc != 0x4DBCC8u) { return; }
    }
    ctx->pc = 0x4DBCC8u;
label_4dbcc8:
    // 0x4dbcc8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4dbcc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4dbccc:
    // 0x4dbccc: 0xc0d8a80  jal         func_362A00
label_4dbcd0:
    if (ctx->pc == 0x4DBCD0u) {
        ctx->pc = 0x4DBCD0u;
            // 0x4dbcd0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4DBCD4u;
        goto label_4dbcd4;
    }
    ctx->pc = 0x4DBCCCu;
    SET_GPR_U32(ctx, 31, 0x4DBCD4u);
    ctx->pc = 0x4DBCD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBCCCu;
            // 0x4dbcd0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBCD4u; }
        if (ctx->pc != 0x4DBCD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBCD4u; }
        if (ctx->pc != 0x4DBCD4u) { return; }
    }
    ctx->pc = 0x4DBCD4u;
label_4dbcd4:
    // 0x4dbcd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4dbcd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4dbcd8:
    // 0x4dbcd8: 0xc0d8a2c  jal         func_3628B0
label_4dbcdc:
    if (ctx->pc == 0x4DBCDCu) {
        ctx->pc = 0x4DBCDCu;
            // 0x4dbcdc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DBCE0u;
        goto label_4dbce0;
    }
    ctx->pc = 0x4DBCD8u;
    SET_GPR_U32(ctx, 31, 0x4DBCE0u);
    ctx->pc = 0x4DBCDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBCD8u;
            // 0x4dbcdc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3628B0u;
    if (runtime->hasFunction(0x3628B0u)) {
        auto targetFn = runtime->lookupFunction(0x3628B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBCE0u; }
        if (ctx->pc != 0x4DBCE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003628B0_0x3628b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBCE0u; }
        if (ctx->pc != 0x4DBCE0u) { return; }
    }
    ctx->pc = 0x4DBCE0u;
label_4dbce0:
    // 0x4dbce0: 0xc0d8a24  jal         func_362890
label_4dbce4:
    if (ctx->pc == 0x4DBCE4u) {
        ctx->pc = 0x4DBCE4u;
            // 0x4dbce4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x4DBCE8u;
        goto label_4dbce8;
    }
    ctx->pc = 0x4DBCE0u;
    SET_GPR_U32(ctx, 31, 0x4DBCE8u);
    ctx->pc = 0x4DBCE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBCE0u;
            // 0x4dbce4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x362890u;
    if (runtime->hasFunction(0x362890u)) {
        auto targetFn = runtime->lookupFunction(0x362890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBCE8u; }
        if (ctx->pc != 0x4DBCE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362890_0x362890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBCE8u; }
        if (ctx->pc != 0x4DBCE8u) { return; }
    }
    ctx->pc = 0x4DBCE8u;
label_4dbce8:
    // 0x4dbce8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_4dbcec:
    if (ctx->pc == 0x4DBCECu) {
        ctx->pc = 0x4DBCECu;
            // 0x4dbcec: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x4DBCF0u;
        goto label_4dbcf0;
    }
    ctx->pc = 0x4DBCE8u;
    {
        const bool branch_taken_0x4dbce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dbce8) {
            ctx->pc = 0x4DBCECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBCE8u;
            // 0x4dbcec: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DBD00u;
            goto label_4dbd00;
        }
    }
    ctx->pc = 0x4DBCF0u;
label_4dbcf0:
    // 0x4dbcf0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4dbcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4dbcf4:
    // 0x4dbcf4: 0xc0d8a14  jal         func_362850
label_4dbcf8:
    if (ctx->pc == 0x4DBCF8u) {
        ctx->pc = 0x4DBCF8u;
            // 0x4dbcf8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DBCFCu;
        goto label_4dbcfc;
    }
    ctx->pc = 0x4DBCF4u;
    SET_GPR_U32(ctx, 31, 0x4DBCFCu);
    ctx->pc = 0x4DBCF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBCF4u;
            // 0x4dbcf8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362850u;
    if (runtime->hasFunction(0x362850u)) {
        auto targetFn = runtime->lookupFunction(0x362850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBCFCu; }
        if (ctx->pc != 0x4DBCFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362850_0x362850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBCFCu; }
        if (ctx->pc != 0x4DBCFCu) { return; }
    }
    ctx->pc = 0x4DBCFCu;
label_4dbcfc:
    // 0x4dbcfc: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x4dbcfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4dbd00:
    // 0x4dbd00: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x4dbd00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
label_4dbd04:
    // 0x4dbd04: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x4dbd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4dbd08:
    // 0x4dbd08: 0xe6000114  swc1        $f0, 0x114($s0)
    ctx->pc = 0x4dbd08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
label_4dbd0c:
    // 0x4dbd0c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x4dbd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4dbd10:
    // 0x4dbd10: 0xe6000118  swc1        $f0, 0x118($s0)
    ctx->pc = 0x4dbd10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
label_4dbd14:
    // 0x4dbd14: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x4dbd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4dbd18:
    // 0x4dbd18: 0xe600011c  swc1        $f0, 0x11C($s0)
    ctx->pc = 0x4dbd18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
label_4dbd1c:
    // 0x4dbd1c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4dbd1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4dbd20:
    // 0x4dbd20: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4dbd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4dbd24:
    // 0x4dbd24: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4dbd24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4dbd28:
    // 0x4dbd28: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4dbd28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4dbd2c:
    // 0x4dbd2c: 0x3e00008  jr          $ra
label_4dbd30:
    if (ctx->pc == 0x4DBD30u) {
        ctx->pc = 0x4DBD30u;
            // 0x4dbd30: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x4DBD34u;
        goto label_4dbd34;
    }
    ctx->pc = 0x4DBD2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DBD30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBD2Cu;
            // 0x4dbd30: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DBD34u;
label_4dbd34:
    // 0x4dbd34: 0x0  nop
    ctx->pc = 0x4dbd34u;
    // NOP
label_4dbd38:
    // 0x4dbd38: 0x0  nop
    ctx->pc = 0x4dbd38u;
    // NOP
label_4dbd3c:
    // 0x4dbd3c: 0x0  nop
    ctx->pc = 0x4dbd3cu;
    // NOP
}
