#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003DB4E0
// Address: 0x3db4e0 - 0x3dbb60
void sub_003DB4E0_0x3db4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB4E0_0x3db4e0");
#endif

    switch (ctx->pc) {
        case 0x3db4e0u: goto label_3db4e0;
        case 0x3db4e4u: goto label_3db4e4;
        case 0x3db4e8u: goto label_3db4e8;
        case 0x3db4ecu: goto label_3db4ec;
        case 0x3db4f0u: goto label_3db4f0;
        case 0x3db4f4u: goto label_3db4f4;
        case 0x3db4f8u: goto label_3db4f8;
        case 0x3db4fcu: goto label_3db4fc;
        case 0x3db500u: goto label_3db500;
        case 0x3db504u: goto label_3db504;
        case 0x3db508u: goto label_3db508;
        case 0x3db50cu: goto label_3db50c;
        case 0x3db510u: goto label_3db510;
        case 0x3db514u: goto label_3db514;
        case 0x3db518u: goto label_3db518;
        case 0x3db51cu: goto label_3db51c;
        case 0x3db520u: goto label_3db520;
        case 0x3db524u: goto label_3db524;
        case 0x3db528u: goto label_3db528;
        case 0x3db52cu: goto label_3db52c;
        case 0x3db530u: goto label_3db530;
        case 0x3db534u: goto label_3db534;
        case 0x3db538u: goto label_3db538;
        case 0x3db53cu: goto label_3db53c;
        case 0x3db540u: goto label_3db540;
        case 0x3db544u: goto label_3db544;
        case 0x3db548u: goto label_3db548;
        case 0x3db54cu: goto label_3db54c;
        case 0x3db550u: goto label_3db550;
        case 0x3db554u: goto label_3db554;
        case 0x3db558u: goto label_3db558;
        case 0x3db55cu: goto label_3db55c;
        case 0x3db560u: goto label_3db560;
        case 0x3db564u: goto label_3db564;
        case 0x3db568u: goto label_3db568;
        case 0x3db56cu: goto label_3db56c;
        case 0x3db570u: goto label_3db570;
        case 0x3db574u: goto label_3db574;
        case 0x3db578u: goto label_3db578;
        case 0x3db57cu: goto label_3db57c;
        case 0x3db580u: goto label_3db580;
        case 0x3db584u: goto label_3db584;
        case 0x3db588u: goto label_3db588;
        case 0x3db58cu: goto label_3db58c;
        case 0x3db590u: goto label_3db590;
        case 0x3db594u: goto label_3db594;
        case 0x3db598u: goto label_3db598;
        case 0x3db59cu: goto label_3db59c;
        case 0x3db5a0u: goto label_3db5a0;
        case 0x3db5a4u: goto label_3db5a4;
        case 0x3db5a8u: goto label_3db5a8;
        case 0x3db5acu: goto label_3db5ac;
        case 0x3db5b0u: goto label_3db5b0;
        case 0x3db5b4u: goto label_3db5b4;
        case 0x3db5b8u: goto label_3db5b8;
        case 0x3db5bcu: goto label_3db5bc;
        case 0x3db5c0u: goto label_3db5c0;
        case 0x3db5c4u: goto label_3db5c4;
        case 0x3db5c8u: goto label_3db5c8;
        case 0x3db5ccu: goto label_3db5cc;
        case 0x3db5d0u: goto label_3db5d0;
        case 0x3db5d4u: goto label_3db5d4;
        case 0x3db5d8u: goto label_3db5d8;
        case 0x3db5dcu: goto label_3db5dc;
        case 0x3db5e0u: goto label_3db5e0;
        case 0x3db5e4u: goto label_3db5e4;
        case 0x3db5e8u: goto label_3db5e8;
        case 0x3db5ecu: goto label_3db5ec;
        case 0x3db5f0u: goto label_3db5f0;
        case 0x3db5f4u: goto label_3db5f4;
        case 0x3db5f8u: goto label_3db5f8;
        case 0x3db5fcu: goto label_3db5fc;
        case 0x3db600u: goto label_3db600;
        case 0x3db604u: goto label_3db604;
        case 0x3db608u: goto label_3db608;
        case 0x3db60cu: goto label_3db60c;
        case 0x3db610u: goto label_3db610;
        case 0x3db614u: goto label_3db614;
        case 0x3db618u: goto label_3db618;
        case 0x3db61cu: goto label_3db61c;
        case 0x3db620u: goto label_3db620;
        case 0x3db624u: goto label_3db624;
        case 0x3db628u: goto label_3db628;
        case 0x3db62cu: goto label_3db62c;
        case 0x3db630u: goto label_3db630;
        case 0x3db634u: goto label_3db634;
        case 0x3db638u: goto label_3db638;
        case 0x3db63cu: goto label_3db63c;
        case 0x3db640u: goto label_3db640;
        case 0x3db644u: goto label_3db644;
        case 0x3db648u: goto label_3db648;
        case 0x3db64cu: goto label_3db64c;
        case 0x3db650u: goto label_3db650;
        case 0x3db654u: goto label_3db654;
        case 0x3db658u: goto label_3db658;
        case 0x3db65cu: goto label_3db65c;
        case 0x3db660u: goto label_3db660;
        case 0x3db664u: goto label_3db664;
        case 0x3db668u: goto label_3db668;
        case 0x3db66cu: goto label_3db66c;
        case 0x3db670u: goto label_3db670;
        case 0x3db674u: goto label_3db674;
        case 0x3db678u: goto label_3db678;
        case 0x3db67cu: goto label_3db67c;
        case 0x3db680u: goto label_3db680;
        case 0x3db684u: goto label_3db684;
        case 0x3db688u: goto label_3db688;
        case 0x3db68cu: goto label_3db68c;
        case 0x3db690u: goto label_3db690;
        case 0x3db694u: goto label_3db694;
        case 0x3db698u: goto label_3db698;
        case 0x3db69cu: goto label_3db69c;
        case 0x3db6a0u: goto label_3db6a0;
        case 0x3db6a4u: goto label_3db6a4;
        case 0x3db6a8u: goto label_3db6a8;
        case 0x3db6acu: goto label_3db6ac;
        case 0x3db6b0u: goto label_3db6b0;
        case 0x3db6b4u: goto label_3db6b4;
        case 0x3db6b8u: goto label_3db6b8;
        case 0x3db6bcu: goto label_3db6bc;
        case 0x3db6c0u: goto label_3db6c0;
        case 0x3db6c4u: goto label_3db6c4;
        case 0x3db6c8u: goto label_3db6c8;
        case 0x3db6ccu: goto label_3db6cc;
        case 0x3db6d0u: goto label_3db6d0;
        case 0x3db6d4u: goto label_3db6d4;
        case 0x3db6d8u: goto label_3db6d8;
        case 0x3db6dcu: goto label_3db6dc;
        case 0x3db6e0u: goto label_3db6e0;
        case 0x3db6e4u: goto label_3db6e4;
        case 0x3db6e8u: goto label_3db6e8;
        case 0x3db6ecu: goto label_3db6ec;
        case 0x3db6f0u: goto label_3db6f0;
        case 0x3db6f4u: goto label_3db6f4;
        case 0x3db6f8u: goto label_3db6f8;
        case 0x3db6fcu: goto label_3db6fc;
        case 0x3db700u: goto label_3db700;
        case 0x3db704u: goto label_3db704;
        case 0x3db708u: goto label_3db708;
        case 0x3db70cu: goto label_3db70c;
        case 0x3db710u: goto label_3db710;
        case 0x3db714u: goto label_3db714;
        case 0x3db718u: goto label_3db718;
        case 0x3db71cu: goto label_3db71c;
        case 0x3db720u: goto label_3db720;
        case 0x3db724u: goto label_3db724;
        case 0x3db728u: goto label_3db728;
        case 0x3db72cu: goto label_3db72c;
        case 0x3db730u: goto label_3db730;
        case 0x3db734u: goto label_3db734;
        case 0x3db738u: goto label_3db738;
        case 0x3db73cu: goto label_3db73c;
        case 0x3db740u: goto label_3db740;
        case 0x3db744u: goto label_3db744;
        case 0x3db748u: goto label_3db748;
        case 0x3db74cu: goto label_3db74c;
        case 0x3db750u: goto label_3db750;
        case 0x3db754u: goto label_3db754;
        case 0x3db758u: goto label_3db758;
        case 0x3db75cu: goto label_3db75c;
        case 0x3db760u: goto label_3db760;
        case 0x3db764u: goto label_3db764;
        case 0x3db768u: goto label_3db768;
        case 0x3db76cu: goto label_3db76c;
        case 0x3db770u: goto label_3db770;
        case 0x3db774u: goto label_3db774;
        case 0x3db778u: goto label_3db778;
        case 0x3db77cu: goto label_3db77c;
        case 0x3db780u: goto label_3db780;
        case 0x3db784u: goto label_3db784;
        case 0x3db788u: goto label_3db788;
        case 0x3db78cu: goto label_3db78c;
        case 0x3db790u: goto label_3db790;
        case 0x3db794u: goto label_3db794;
        case 0x3db798u: goto label_3db798;
        case 0x3db79cu: goto label_3db79c;
        case 0x3db7a0u: goto label_3db7a0;
        case 0x3db7a4u: goto label_3db7a4;
        case 0x3db7a8u: goto label_3db7a8;
        case 0x3db7acu: goto label_3db7ac;
        case 0x3db7b0u: goto label_3db7b0;
        case 0x3db7b4u: goto label_3db7b4;
        case 0x3db7b8u: goto label_3db7b8;
        case 0x3db7bcu: goto label_3db7bc;
        case 0x3db7c0u: goto label_3db7c0;
        case 0x3db7c4u: goto label_3db7c4;
        case 0x3db7c8u: goto label_3db7c8;
        case 0x3db7ccu: goto label_3db7cc;
        case 0x3db7d0u: goto label_3db7d0;
        case 0x3db7d4u: goto label_3db7d4;
        case 0x3db7d8u: goto label_3db7d8;
        case 0x3db7dcu: goto label_3db7dc;
        case 0x3db7e0u: goto label_3db7e0;
        case 0x3db7e4u: goto label_3db7e4;
        case 0x3db7e8u: goto label_3db7e8;
        case 0x3db7ecu: goto label_3db7ec;
        case 0x3db7f0u: goto label_3db7f0;
        case 0x3db7f4u: goto label_3db7f4;
        case 0x3db7f8u: goto label_3db7f8;
        case 0x3db7fcu: goto label_3db7fc;
        case 0x3db800u: goto label_3db800;
        case 0x3db804u: goto label_3db804;
        case 0x3db808u: goto label_3db808;
        case 0x3db80cu: goto label_3db80c;
        case 0x3db810u: goto label_3db810;
        case 0x3db814u: goto label_3db814;
        case 0x3db818u: goto label_3db818;
        case 0x3db81cu: goto label_3db81c;
        case 0x3db820u: goto label_3db820;
        case 0x3db824u: goto label_3db824;
        case 0x3db828u: goto label_3db828;
        case 0x3db82cu: goto label_3db82c;
        case 0x3db830u: goto label_3db830;
        case 0x3db834u: goto label_3db834;
        case 0x3db838u: goto label_3db838;
        case 0x3db83cu: goto label_3db83c;
        case 0x3db840u: goto label_3db840;
        case 0x3db844u: goto label_3db844;
        case 0x3db848u: goto label_3db848;
        case 0x3db84cu: goto label_3db84c;
        case 0x3db850u: goto label_3db850;
        case 0x3db854u: goto label_3db854;
        case 0x3db858u: goto label_3db858;
        case 0x3db85cu: goto label_3db85c;
        case 0x3db860u: goto label_3db860;
        case 0x3db864u: goto label_3db864;
        case 0x3db868u: goto label_3db868;
        case 0x3db86cu: goto label_3db86c;
        case 0x3db870u: goto label_3db870;
        case 0x3db874u: goto label_3db874;
        case 0x3db878u: goto label_3db878;
        case 0x3db87cu: goto label_3db87c;
        case 0x3db880u: goto label_3db880;
        case 0x3db884u: goto label_3db884;
        case 0x3db888u: goto label_3db888;
        case 0x3db88cu: goto label_3db88c;
        case 0x3db890u: goto label_3db890;
        case 0x3db894u: goto label_3db894;
        case 0x3db898u: goto label_3db898;
        case 0x3db89cu: goto label_3db89c;
        case 0x3db8a0u: goto label_3db8a0;
        case 0x3db8a4u: goto label_3db8a4;
        case 0x3db8a8u: goto label_3db8a8;
        case 0x3db8acu: goto label_3db8ac;
        case 0x3db8b0u: goto label_3db8b0;
        case 0x3db8b4u: goto label_3db8b4;
        case 0x3db8b8u: goto label_3db8b8;
        case 0x3db8bcu: goto label_3db8bc;
        case 0x3db8c0u: goto label_3db8c0;
        case 0x3db8c4u: goto label_3db8c4;
        case 0x3db8c8u: goto label_3db8c8;
        case 0x3db8ccu: goto label_3db8cc;
        case 0x3db8d0u: goto label_3db8d0;
        case 0x3db8d4u: goto label_3db8d4;
        case 0x3db8d8u: goto label_3db8d8;
        case 0x3db8dcu: goto label_3db8dc;
        case 0x3db8e0u: goto label_3db8e0;
        case 0x3db8e4u: goto label_3db8e4;
        case 0x3db8e8u: goto label_3db8e8;
        case 0x3db8ecu: goto label_3db8ec;
        case 0x3db8f0u: goto label_3db8f0;
        case 0x3db8f4u: goto label_3db8f4;
        case 0x3db8f8u: goto label_3db8f8;
        case 0x3db8fcu: goto label_3db8fc;
        case 0x3db900u: goto label_3db900;
        case 0x3db904u: goto label_3db904;
        case 0x3db908u: goto label_3db908;
        case 0x3db90cu: goto label_3db90c;
        case 0x3db910u: goto label_3db910;
        case 0x3db914u: goto label_3db914;
        case 0x3db918u: goto label_3db918;
        case 0x3db91cu: goto label_3db91c;
        case 0x3db920u: goto label_3db920;
        case 0x3db924u: goto label_3db924;
        case 0x3db928u: goto label_3db928;
        case 0x3db92cu: goto label_3db92c;
        case 0x3db930u: goto label_3db930;
        case 0x3db934u: goto label_3db934;
        case 0x3db938u: goto label_3db938;
        case 0x3db93cu: goto label_3db93c;
        case 0x3db940u: goto label_3db940;
        case 0x3db944u: goto label_3db944;
        case 0x3db948u: goto label_3db948;
        case 0x3db94cu: goto label_3db94c;
        case 0x3db950u: goto label_3db950;
        case 0x3db954u: goto label_3db954;
        case 0x3db958u: goto label_3db958;
        case 0x3db95cu: goto label_3db95c;
        case 0x3db960u: goto label_3db960;
        case 0x3db964u: goto label_3db964;
        case 0x3db968u: goto label_3db968;
        case 0x3db96cu: goto label_3db96c;
        case 0x3db970u: goto label_3db970;
        case 0x3db974u: goto label_3db974;
        case 0x3db978u: goto label_3db978;
        case 0x3db97cu: goto label_3db97c;
        case 0x3db980u: goto label_3db980;
        case 0x3db984u: goto label_3db984;
        case 0x3db988u: goto label_3db988;
        case 0x3db98cu: goto label_3db98c;
        case 0x3db990u: goto label_3db990;
        case 0x3db994u: goto label_3db994;
        case 0x3db998u: goto label_3db998;
        case 0x3db99cu: goto label_3db99c;
        case 0x3db9a0u: goto label_3db9a0;
        case 0x3db9a4u: goto label_3db9a4;
        case 0x3db9a8u: goto label_3db9a8;
        case 0x3db9acu: goto label_3db9ac;
        case 0x3db9b0u: goto label_3db9b0;
        case 0x3db9b4u: goto label_3db9b4;
        case 0x3db9b8u: goto label_3db9b8;
        case 0x3db9bcu: goto label_3db9bc;
        case 0x3db9c0u: goto label_3db9c0;
        case 0x3db9c4u: goto label_3db9c4;
        case 0x3db9c8u: goto label_3db9c8;
        case 0x3db9ccu: goto label_3db9cc;
        case 0x3db9d0u: goto label_3db9d0;
        case 0x3db9d4u: goto label_3db9d4;
        case 0x3db9d8u: goto label_3db9d8;
        case 0x3db9dcu: goto label_3db9dc;
        case 0x3db9e0u: goto label_3db9e0;
        case 0x3db9e4u: goto label_3db9e4;
        case 0x3db9e8u: goto label_3db9e8;
        case 0x3db9ecu: goto label_3db9ec;
        case 0x3db9f0u: goto label_3db9f0;
        case 0x3db9f4u: goto label_3db9f4;
        case 0x3db9f8u: goto label_3db9f8;
        case 0x3db9fcu: goto label_3db9fc;
        case 0x3dba00u: goto label_3dba00;
        case 0x3dba04u: goto label_3dba04;
        case 0x3dba08u: goto label_3dba08;
        case 0x3dba0cu: goto label_3dba0c;
        case 0x3dba10u: goto label_3dba10;
        case 0x3dba14u: goto label_3dba14;
        case 0x3dba18u: goto label_3dba18;
        case 0x3dba1cu: goto label_3dba1c;
        case 0x3dba20u: goto label_3dba20;
        case 0x3dba24u: goto label_3dba24;
        case 0x3dba28u: goto label_3dba28;
        case 0x3dba2cu: goto label_3dba2c;
        case 0x3dba30u: goto label_3dba30;
        case 0x3dba34u: goto label_3dba34;
        case 0x3dba38u: goto label_3dba38;
        case 0x3dba3cu: goto label_3dba3c;
        case 0x3dba40u: goto label_3dba40;
        case 0x3dba44u: goto label_3dba44;
        case 0x3dba48u: goto label_3dba48;
        case 0x3dba4cu: goto label_3dba4c;
        case 0x3dba50u: goto label_3dba50;
        case 0x3dba54u: goto label_3dba54;
        case 0x3dba58u: goto label_3dba58;
        case 0x3dba5cu: goto label_3dba5c;
        case 0x3dba60u: goto label_3dba60;
        case 0x3dba64u: goto label_3dba64;
        case 0x3dba68u: goto label_3dba68;
        case 0x3dba6cu: goto label_3dba6c;
        case 0x3dba70u: goto label_3dba70;
        case 0x3dba74u: goto label_3dba74;
        case 0x3dba78u: goto label_3dba78;
        case 0x3dba7cu: goto label_3dba7c;
        case 0x3dba80u: goto label_3dba80;
        case 0x3dba84u: goto label_3dba84;
        case 0x3dba88u: goto label_3dba88;
        case 0x3dba8cu: goto label_3dba8c;
        case 0x3dba90u: goto label_3dba90;
        case 0x3dba94u: goto label_3dba94;
        case 0x3dba98u: goto label_3dba98;
        case 0x3dba9cu: goto label_3dba9c;
        case 0x3dbaa0u: goto label_3dbaa0;
        case 0x3dbaa4u: goto label_3dbaa4;
        case 0x3dbaa8u: goto label_3dbaa8;
        case 0x3dbaacu: goto label_3dbaac;
        case 0x3dbab0u: goto label_3dbab0;
        case 0x3dbab4u: goto label_3dbab4;
        case 0x3dbab8u: goto label_3dbab8;
        case 0x3dbabcu: goto label_3dbabc;
        case 0x3dbac0u: goto label_3dbac0;
        case 0x3dbac4u: goto label_3dbac4;
        case 0x3dbac8u: goto label_3dbac8;
        case 0x3dbaccu: goto label_3dbacc;
        case 0x3dbad0u: goto label_3dbad0;
        case 0x3dbad4u: goto label_3dbad4;
        case 0x3dbad8u: goto label_3dbad8;
        case 0x3dbadcu: goto label_3dbadc;
        case 0x3dbae0u: goto label_3dbae0;
        case 0x3dbae4u: goto label_3dbae4;
        case 0x3dbae8u: goto label_3dbae8;
        case 0x3dbaecu: goto label_3dbaec;
        case 0x3dbaf0u: goto label_3dbaf0;
        case 0x3dbaf4u: goto label_3dbaf4;
        case 0x3dbaf8u: goto label_3dbaf8;
        case 0x3dbafcu: goto label_3dbafc;
        case 0x3dbb00u: goto label_3dbb00;
        case 0x3dbb04u: goto label_3dbb04;
        case 0x3dbb08u: goto label_3dbb08;
        case 0x3dbb0cu: goto label_3dbb0c;
        case 0x3dbb10u: goto label_3dbb10;
        case 0x3dbb14u: goto label_3dbb14;
        case 0x3dbb18u: goto label_3dbb18;
        case 0x3dbb1cu: goto label_3dbb1c;
        case 0x3dbb20u: goto label_3dbb20;
        case 0x3dbb24u: goto label_3dbb24;
        case 0x3dbb28u: goto label_3dbb28;
        case 0x3dbb2cu: goto label_3dbb2c;
        case 0x3dbb30u: goto label_3dbb30;
        case 0x3dbb34u: goto label_3dbb34;
        case 0x3dbb38u: goto label_3dbb38;
        case 0x3dbb3cu: goto label_3dbb3c;
        case 0x3dbb40u: goto label_3dbb40;
        case 0x3dbb44u: goto label_3dbb44;
        case 0x3dbb48u: goto label_3dbb48;
        case 0x3dbb4cu: goto label_3dbb4c;
        case 0x3dbb50u: goto label_3dbb50;
        case 0x3dbb54u: goto label_3dbb54;
        case 0x3dbb58u: goto label_3dbb58;
        case 0x3dbb5cu: goto label_3dbb5c;
        default: break;
    }

    ctx->pc = 0x3db4e0u;

label_3db4e0:
    // 0x3db4e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3db4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3db4e4:
    // 0x3db4e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3db4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3db4e8:
    // 0x3db4e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3db4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3db4ec:
    // 0x3db4ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3db4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3db4f0:
    // 0x3db4f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3db4f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3db4f4:
    // 0x3db4f4: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_3db4f8:
    if (ctx->pc == 0x3DB4F8u) {
        ctx->pc = 0x3DB4F8u;
            // 0x3db4f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DB4FCu;
        goto label_3db4fc;
    }
    ctx->pc = 0x3DB4F4u;
    {
        const bool branch_taken_0x3db4f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB4F4u;
            // 0x3db4f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db4f4) {
            ctx->pc = 0x3DB628u;
            goto label_3db628;
        }
    }
    ctx->pc = 0x3DB4FCu;
label_3db4fc:
    // 0x3db4fc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3db4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3db500:
    // 0x3db500: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3db500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3db504:
    // 0x3db504: 0x24639990  addiu       $v1, $v1, -0x6670
    ctx->pc = 0x3db504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941072));
label_3db508:
    // 0x3db508: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x3db508u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
label_3db50c:
    // 0x3db50c: 0x244299c8  addiu       $v0, $v0, -0x6638
    ctx->pc = 0x3db50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941128));
label_3db510:
    // 0x3db510: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3db510u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3db514:
    // 0x3db514: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x3db514u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_3db518:
    // 0x3db518: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x3db518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_3db51c:
    // 0x3db51c: 0xc0407c0  jal         func_101F00
label_3db520:
    if (ctx->pc == 0x3DB520u) {
        ctx->pc = 0x3DB520u;
            // 0x3db520: 0x24a5b640  addiu       $a1, $a1, -0x49C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948416));
        ctx->pc = 0x3DB524u;
        goto label_3db524;
    }
    ctx->pc = 0x3DB51Cu;
    SET_GPR_U32(ctx, 31, 0x3DB524u);
    ctx->pc = 0x3DB520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB51Cu;
            // 0x3db520: 0x24a5b640  addiu       $a1, $a1, -0x49C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB524u; }
        if (ctx->pc != 0x3DB524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB524u; }
        if (ctx->pc != 0x3DB524u) { return; }
    }
    ctx->pc = 0x3DB524u;
label_3db524:
    // 0x3db524: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x3db524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_3db528:
    // 0x3db528: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3db52c:
    if (ctx->pc == 0x3DB52Cu) {
        ctx->pc = 0x3DB52Cu;
            // 0x3db52c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x3DB530u;
        goto label_3db530;
    }
    ctx->pc = 0x3DB528u;
    {
        const bool branch_taken_0x3db528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3db528) {
            ctx->pc = 0x3DB52Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB528u;
            // 0x3db52c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DB53Cu;
            goto label_3db53c;
        }
    }
    ctx->pc = 0x3DB530u;
label_3db530:
    // 0x3db530: 0xc07507c  jal         func_1D41F0
label_3db534:
    if (ctx->pc == 0x3DB534u) {
        ctx->pc = 0x3DB534u;
            // 0x3db534: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x3DB538u;
        goto label_3db538;
    }
    ctx->pc = 0x3DB530u;
    SET_GPR_U32(ctx, 31, 0x3DB538u);
    ctx->pc = 0x3DB534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB530u;
            // 0x3db534: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB538u; }
        if (ctx->pc != 0x3DB538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB538u; }
        if (ctx->pc != 0x3DB538u) { return; }
    }
    ctx->pc = 0x3DB538u;
label_3db538:
    // 0x3db538: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x3db538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_3db53c:
    // 0x3db53c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_3db540:
    if (ctx->pc == 0x3DB540u) {
        ctx->pc = 0x3DB540u;
            // 0x3db540: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x3DB544u;
        goto label_3db544;
    }
    ctx->pc = 0x3DB53Cu;
    {
        const bool branch_taken_0x3db53c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3db53c) {
            ctx->pc = 0x3DB540u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB53Cu;
            // 0x3db540: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DB56Cu;
            goto label_3db56c;
        }
    }
    ctx->pc = 0x3DB544u;
label_3db544:
    // 0x3db544: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3db548:
    if (ctx->pc == 0x3DB548u) {
        ctx->pc = 0x3DB54Cu;
        goto label_3db54c;
    }
    ctx->pc = 0x3DB544u;
    {
        const bool branch_taken_0x3db544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3db544) {
            ctx->pc = 0x3DB568u;
            goto label_3db568;
        }
    }
    ctx->pc = 0x3DB54Cu;
label_3db54c:
    // 0x3db54c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3db550:
    if (ctx->pc == 0x3DB550u) {
        ctx->pc = 0x3DB554u;
        goto label_3db554;
    }
    ctx->pc = 0x3DB54Cu;
    {
        const bool branch_taken_0x3db54c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3db54c) {
            ctx->pc = 0x3DB568u;
            goto label_3db568;
        }
    }
    ctx->pc = 0x3DB554u;
label_3db554:
    // 0x3db554: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x3db554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_3db558:
    // 0x3db558: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3db55c:
    if (ctx->pc == 0x3DB55Cu) {
        ctx->pc = 0x3DB560u;
        goto label_3db560;
    }
    ctx->pc = 0x3DB558u;
    {
        const bool branch_taken_0x3db558 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3db558) {
            ctx->pc = 0x3DB568u;
            goto label_3db568;
        }
    }
    ctx->pc = 0x3DB560u;
label_3db560:
    // 0x3db560: 0xc0400a8  jal         func_1002A0
label_3db564:
    if (ctx->pc == 0x3DB564u) {
        ctx->pc = 0x3DB568u;
        goto label_3db568;
    }
    ctx->pc = 0x3DB560u;
    SET_GPR_U32(ctx, 31, 0x3DB568u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB568u; }
        if (ctx->pc != 0x3DB568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB568u; }
        if (ctx->pc != 0x3DB568u) { return; }
    }
    ctx->pc = 0x3DB568u;
label_3db568:
    // 0x3db568: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x3db568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_3db56c:
    // 0x3db56c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_3db570:
    if (ctx->pc == 0x3DB570u) {
        ctx->pc = 0x3DB570u;
            // 0x3db570: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x3DB574u;
        goto label_3db574;
    }
    ctx->pc = 0x3DB56Cu;
    {
        const bool branch_taken_0x3db56c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3db56c) {
            ctx->pc = 0x3DB570u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB56Cu;
            // 0x3db570: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DB59Cu;
            goto label_3db59c;
        }
    }
    ctx->pc = 0x3DB574u;
label_3db574:
    // 0x3db574: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3db578:
    if (ctx->pc == 0x3DB578u) {
        ctx->pc = 0x3DB57Cu;
        goto label_3db57c;
    }
    ctx->pc = 0x3DB574u;
    {
        const bool branch_taken_0x3db574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3db574) {
            ctx->pc = 0x3DB598u;
            goto label_3db598;
        }
    }
    ctx->pc = 0x3DB57Cu;
label_3db57c:
    // 0x3db57c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3db580:
    if (ctx->pc == 0x3DB580u) {
        ctx->pc = 0x3DB584u;
        goto label_3db584;
    }
    ctx->pc = 0x3DB57Cu;
    {
        const bool branch_taken_0x3db57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3db57c) {
            ctx->pc = 0x3DB598u;
            goto label_3db598;
        }
    }
    ctx->pc = 0x3DB584u;
label_3db584:
    // 0x3db584: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x3db584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_3db588:
    // 0x3db588: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3db58c:
    if (ctx->pc == 0x3DB58Cu) {
        ctx->pc = 0x3DB590u;
        goto label_3db590;
    }
    ctx->pc = 0x3DB588u;
    {
        const bool branch_taken_0x3db588 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3db588) {
            ctx->pc = 0x3DB598u;
            goto label_3db598;
        }
    }
    ctx->pc = 0x3DB590u;
label_3db590:
    // 0x3db590: 0xc0400a8  jal         func_1002A0
label_3db594:
    if (ctx->pc == 0x3DB594u) {
        ctx->pc = 0x3DB598u;
        goto label_3db598;
    }
    ctx->pc = 0x3DB590u;
    SET_GPR_U32(ctx, 31, 0x3DB598u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB598u; }
        if (ctx->pc != 0x3DB598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB598u; }
        if (ctx->pc != 0x3DB598u) { return; }
    }
    ctx->pc = 0x3DB598u;
label_3db598:
    // 0x3db598: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x3db598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_3db59c:
    // 0x3db59c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3db5a0:
    if (ctx->pc == 0x3DB5A0u) {
        ctx->pc = 0x3DB5A4u;
        goto label_3db5a4;
    }
    ctx->pc = 0x3DB59Cu;
    {
        const bool branch_taken_0x3db59c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3db59c) {
            ctx->pc = 0x3DB5B8u;
            goto label_3db5b8;
        }
    }
    ctx->pc = 0x3DB5A4u;
label_3db5a4:
    // 0x3db5a4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3db5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3db5a8:
    // 0x3db5a8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3db5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3db5ac:
    // 0x3db5ac: 0x24639978  addiu       $v1, $v1, -0x6688
    ctx->pc = 0x3db5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941048));
label_3db5b0:
    // 0x3db5b0: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x3db5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_3db5b4:
    // 0x3db5b4: 0xac406eb8  sw          $zero, 0x6EB8($v0)
    ctx->pc = 0x3db5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28344), GPR_U32(ctx, 0));
label_3db5b8:
    // 0x3db5b8: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_3db5bc:
    if (ctx->pc == 0x3DB5BCu) {
        ctx->pc = 0x3DB5BCu;
            // 0x3db5bc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x3DB5C0u;
        goto label_3db5c0;
    }
    ctx->pc = 0x3DB5B8u;
    {
        const bool branch_taken_0x3db5b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3db5b8) {
            ctx->pc = 0x3DB5BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB5B8u;
            // 0x3db5bc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DB614u;
            goto label_3db614;
        }
    }
    ctx->pc = 0x3DB5C0u;
label_3db5c0:
    // 0x3db5c0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3db5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3db5c4:
    // 0x3db5c4: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x3db5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_3db5c8:
    // 0x3db5c8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3db5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3db5cc:
    // 0x3db5cc: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x3db5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_3db5d0:
    // 0x3db5d0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3db5d4:
    if (ctx->pc == 0x3DB5D4u) {
        ctx->pc = 0x3DB5D4u;
            // 0x3db5d4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x3DB5D8u;
        goto label_3db5d8;
    }
    ctx->pc = 0x3DB5D0u;
    {
        const bool branch_taken_0x3db5d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3db5d0) {
            ctx->pc = 0x3DB5D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB5D0u;
            // 0x3db5d4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DB5ECu;
            goto label_3db5ec;
        }
    }
    ctx->pc = 0x3DB5D8u;
label_3db5d8:
    // 0x3db5d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3db5d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3db5dc:
    // 0x3db5dc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3db5dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3db5e0:
    // 0x3db5e0: 0x320f809  jalr        $t9
label_3db5e4:
    if (ctx->pc == 0x3DB5E4u) {
        ctx->pc = 0x3DB5E4u;
            // 0x3db5e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3DB5E8u;
        goto label_3db5e8;
    }
    ctx->pc = 0x3DB5E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3DB5E8u);
        ctx->pc = 0x3DB5E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB5E0u;
            // 0x3db5e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3DB5E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3DB5E8u; }
            if (ctx->pc != 0x3DB5E8u) { return; }
        }
        }
    }
    ctx->pc = 0x3DB5E8u;
label_3db5e8:
    // 0x3db5e8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x3db5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_3db5ec:
    // 0x3db5ec: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3db5f0:
    if (ctx->pc == 0x3DB5F0u) {
        ctx->pc = 0x3DB5F0u;
            // 0x3db5f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DB5F4u;
        goto label_3db5f4;
    }
    ctx->pc = 0x3DB5ECu;
    {
        const bool branch_taken_0x3db5ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3db5ec) {
            ctx->pc = 0x3DB5F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB5ECu;
            // 0x3db5f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DB608u;
            goto label_3db608;
        }
    }
    ctx->pc = 0x3DB5F4u;
label_3db5f4:
    // 0x3db5f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3db5f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3db5f8:
    // 0x3db5f8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3db5f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3db5fc:
    // 0x3db5fc: 0x320f809  jalr        $t9
label_3db600:
    if (ctx->pc == 0x3DB600u) {
        ctx->pc = 0x3DB600u;
            // 0x3db600: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3DB604u;
        goto label_3db604;
    }
    ctx->pc = 0x3DB5FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3DB604u);
        ctx->pc = 0x3DB600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB5FCu;
            // 0x3db600: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3DB604u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3DB604u; }
            if (ctx->pc != 0x3DB604u) { return; }
        }
        }
    }
    ctx->pc = 0x3DB604u;
label_3db604:
    // 0x3db604: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3db604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3db608:
    // 0x3db608: 0xc075bf8  jal         func_1D6FE0
label_3db60c:
    if (ctx->pc == 0x3DB60Cu) {
        ctx->pc = 0x3DB60Cu;
            // 0x3db60c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DB610u;
        goto label_3db610;
    }
    ctx->pc = 0x3DB608u;
    SET_GPR_U32(ctx, 31, 0x3DB610u);
    ctx->pc = 0x3DB60Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB608u;
            // 0x3db60c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB610u; }
        if (ctx->pc != 0x3DB610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB610u; }
        if (ctx->pc != 0x3DB610u) { return; }
    }
    ctx->pc = 0x3DB610u;
label_3db610:
    // 0x3db610: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3db610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3db614:
    // 0x3db614: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3db614u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3db618:
    // 0x3db618: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3db61c:
    if (ctx->pc == 0x3DB61Cu) {
        ctx->pc = 0x3DB61Cu;
            // 0x3db61c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DB620u;
        goto label_3db620;
    }
    ctx->pc = 0x3DB618u;
    {
        const bool branch_taken_0x3db618 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3db618) {
            ctx->pc = 0x3DB61Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB618u;
            // 0x3db61c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DB62Cu;
            goto label_3db62c;
        }
    }
    ctx->pc = 0x3DB620u;
label_3db620:
    // 0x3db620: 0xc0400a8  jal         func_1002A0
label_3db624:
    if (ctx->pc == 0x3DB624u) {
        ctx->pc = 0x3DB624u;
            // 0x3db624: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DB628u;
        goto label_3db628;
    }
    ctx->pc = 0x3DB620u;
    SET_GPR_U32(ctx, 31, 0x3DB628u);
    ctx->pc = 0x3DB624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB620u;
            // 0x3db624: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB628u; }
        if (ctx->pc != 0x3DB628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB628u; }
        if (ctx->pc != 0x3DB628u) { return; }
    }
    ctx->pc = 0x3DB628u;
label_3db628:
    // 0x3db628: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3db628u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3db62c:
    // 0x3db62c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3db62cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3db630:
    // 0x3db630: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3db630u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3db634:
    // 0x3db634: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3db634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3db638:
    // 0x3db638: 0x3e00008  jr          $ra
label_3db63c:
    if (ctx->pc == 0x3DB63Cu) {
        ctx->pc = 0x3DB63Cu;
            // 0x3db63c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3DB640u;
        goto label_3db640;
    }
    ctx->pc = 0x3DB638u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB63Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB638u;
            // 0x3db63c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DB640u;
label_3db640:
    // 0x3db640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3db640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3db644:
    // 0x3db644: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3db644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3db648:
    // 0x3db648: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3db648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3db64c:
    // 0x3db64c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3db64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3db650:
    // 0x3db650: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3db650u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3db654:
    // 0x3db654: 0x12200041  beqz        $s1, . + 4 + (0x41 << 2)
label_3db658:
    if (ctx->pc == 0x3DB658u) {
        ctx->pc = 0x3DB658u;
            // 0x3db658: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DB65Cu;
        goto label_3db65c;
    }
    ctx->pc = 0x3DB654u;
    {
        const bool branch_taken_0x3db654 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB654u;
            // 0x3db658: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db654) {
            ctx->pc = 0x3DB75Cu;
            goto label_3db75c;
        }
    }
    ctx->pc = 0x3DB65Cu;
label_3db65c:
    // 0x3db65c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3db65cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3db660:
    // 0x3db660: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3db660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3db664:
    // 0x3db664: 0x24639a30  addiu       $v1, $v1, -0x65D0
    ctx->pc = 0x3db664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941232));
label_3db668:
    // 0x3db668: 0x24429a70  addiu       $v0, $v0, -0x6590
    ctx->pc = 0x3db668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941296));
label_3db66c:
    // 0x3db66c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3db66cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3db670:
    // 0x3db670: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3db670u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3db674:
    // 0x3db674: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3db674u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3db678:
    // 0x3db678: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3db678u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3db67c:
    // 0x3db67c: 0x320f809  jalr        $t9
label_3db680:
    if (ctx->pc == 0x3DB680u) {
        ctx->pc = 0x3DB684u;
        goto label_3db684;
    }
    ctx->pc = 0x3DB67Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3DB684u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3DB684u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3DB684u; }
            if (ctx->pc != 0x3DB684u) { return; }
        }
        }
    }
    ctx->pc = 0x3DB684u;
label_3db684:
    // 0x3db684: 0x262400a4  addiu       $a0, $s1, 0xA4
    ctx->pc = 0x3db684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 164));
label_3db688:
    // 0x3db688: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
label_3db68c:
    if (ctx->pc == 0x3DB68Cu) {
        ctx->pc = 0x3DB690u;
        goto label_3db690;
    }
    ctx->pc = 0x3DB688u;
    {
        const bool branch_taken_0x3db688 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3db688) {
            ctx->pc = 0x3DB6C4u;
            goto label_3db6c4;
        }
    }
    ctx->pc = 0x3DB690u;
label_3db690:
    // 0x3db690: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3db690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3db694:
    // 0x3db694: 0x24429968  addiu       $v0, $v0, -0x6698
    ctx->pc = 0x3db694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941032));
label_3db698:
    // 0x3db698: 0xc0f7404  jal         func_3DD010
label_3db69c:
    if (ctx->pc == 0x3DB69Cu) {
        ctx->pc = 0x3DB69Cu;
            // 0x3db69c: 0xae2200a4  sw          $v0, 0xA4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 2));
        ctx->pc = 0x3DB6A0u;
        goto label_3db6a0;
    }
    ctx->pc = 0x3DB698u;
    SET_GPR_U32(ctx, 31, 0x3DB6A0u);
    ctx->pc = 0x3DB69Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB698u;
            // 0x3db69c: 0xae2200a4  sw          $v0, 0xA4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DD010u;
    if (runtime->hasFunction(0x3DD010u)) {
        auto targetFn = runtime->lookupFunction(0x3DD010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB6A0u; }
        if (ctx->pc != 0x3DB6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DD010_0x3dd010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB6A0u; }
        if (ctx->pc != 0x3DB6A0u) { return; }
    }
    ctx->pc = 0x3DB6A0u;
label_3db6a0:
    // 0x3db6a0: 0x262200a4  addiu       $v0, $s1, 0xA4
    ctx->pc = 0x3db6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 164));
label_3db6a4:
    // 0x3db6a4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3db6a8:
    if (ctx->pc == 0x3DB6A8u) {
        ctx->pc = 0x3DB6ACu;
        goto label_3db6ac;
    }
    ctx->pc = 0x3DB6A4u;
    {
        const bool branch_taken_0x3db6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3db6a4) {
            ctx->pc = 0x3DB6C4u;
            goto label_3db6c4;
        }
    }
    ctx->pc = 0x3DB6ACu;
label_3db6ac:
    // 0x3db6ac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3db6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3db6b0:
    // 0x3db6b0: 0x24422428  addiu       $v0, $v0, 0x2428
    ctx->pc = 0x3db6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9256));
label_3db6b4:
    // 0x3db6b4: 0xae2200a4  sw          $v0, 0xA4($s1)
    ctx->pc = 0x3db6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 2));
label_3db6b8:
    // 0x3db6b8: 0xae2000a8  sw          $zero, 0xA8($s1)
    ctx->pc = 0x3db6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 0));
label_3db6bc:
    // 0x3db6bc: 0xae2000ac  sw          $zero, 0xAC($s1)
    ctx->pc = 0x3db6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 0));
label_3db6c0:
    // 0x3db6c0: 0xae2000b0  sw          $zero, 0xB0($s1)
    ctx->pc = 0x3db6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 0));
label_3db6c4:
    // 0x3db6c4: 0x52200020  beql        $s1, $zero, . + 4 + (0x20 << 2)
label_3db6c8:
    if (ctx->pc == 0x3DB6C8u) {
        ctx->pc = 0x3DB6C8u;
            // 0x3db6c8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x3DB6CCu;
        goto label_3db6cc;
    }
    ctx->pc = 0x3DB6C4u;
    {
        const bool branch_taken_0x3db6c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3db6c4) {
            ctx->pc = 0x3DB6C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB6C4u;
            // 0x3db6c8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DB748u;
            goto label_3db748;
        }
    }
    ctx->pc = 0x3DB6CCu;
label_3db6cc:
    // 0x3db6cc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3db6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3db6d0:
    // 0x3db6d0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3db6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3db6d4:
    // 0x3db6d4: 0x24422670  addiu       $v0, $v0, 0x2670
    ctx->pc = 0x3db6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9840));
label_3db6d8:
    // 0x3db6d8: 0x246326b0  addiu       $v1, $v1, 0x26B0
    ctx->pc = 0x3db6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9904));
label_3db6dc:
    // 0x3db6dc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3db6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3db6e0:
    // 0x3db6e0: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x3db6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_3db6e4:
    // 0x3db6e4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_3db6e8:
    if (ctx->pc == 0x3DB6E8u) {
        ctx->pc = 0x3DB6E8u;
            // 0x3db6e8: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x3DB6ECu;
        goto label_3db6ec;
    }
    ctx->pc = 0x3DB6E4u;
    {
        const bool branch_taken_0x3db6e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB6E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB6E4u;
            // 0x3db6e8: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db6e4) {
            ctx->pc = 0x3DB720u;
            goto label_3db720;
        }
    }
    ctx->pc = 0x3DB6ECu;
label_3db6ec:
    // 0x3db6ec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3db6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3db6f0:
    // 0x3db6f0: 0x24422660  addiu       $v0, $v0, 0x2660
    ctx->pc = 0x3db6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9824));
label_3db6f4:
    // 0x3db6f4: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3db6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3db6f8:
    // 0x3db6f8: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x3db6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_3db6fc:
    // 0x3db6fc: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_3db700:
    if (ctx->pc == 0x3DB700u) {
        ctx->pc = 0x3DB704u;
        goto label_3db704;
    }
    ctx->pc = 0x3DB6FCu;
    {
        const bool branch_taken_0x3db6fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3db6fc) {
            ctx->pc = 0x3DB720u;
            goto label_3db720;
        }
    }
    ctx->pc = 0x3DB704u;
label_3db704:
    // 0x3db704: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3db708:
    if (ctx->pc == 0x3DB708u) {
        ctx->pc = 0x3DB708u;
            // 0x3db708: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x3DB70Cu;
        goto label_3db70c;
    }
    ctx->pc = 0x3DB704u;
    {
        const bool branch_taken_0x3db704 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3db704) {
            ctx->pc = 0x3DB708u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB704u;
            // 0x3db708: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DB720u;
            goto label_3db720;
        }
    }
    ctx->pc = 0x3DB70Cu;
label_3db70c:
    // 0x3db70c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3db70cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3db710:
    // 0x3db710: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3db710u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3db714:
    // 0x3db714: 0x320f809  jalr        $t9
label_3db718:
    if (ctx->pc == 0x3DB718u) {
        ctx->pc = 0x3DB718u;
            // 0x3db718: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3DB71Cu;
        goto label_3db71c;
    }
    ctx->pc = 0x3DB714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3DB71Cu);
        ctx->pc = 0x3DB718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB714u;
            // 0x3db718: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3DB71Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3DB71Cu; }
            if (ctx->pc != 0x3DB71Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3DB71Cu;
label_3db71c:
    // 0x3db71c: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x3db71cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_3db720:
    // 0x3db720: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_3db724:
    if (ctx->pc == 0x3DB724u) {
        ctx->pc = 0x3DB728u;
        goto label_3db728;
    }
    ctx->pc = 0x3DB720u;
    {
        const bool branch_taken_0x3db720 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3db720) {
            ctx->pc = 0x3DB744u;
            goto label_3db744;
        }
    }
    ctx->pc = 0x3DB728u;
label_3db728:
    // 0x3db728: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3db728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3db72c:
    // 0x3db72c: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x3db72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_3db730:
    // 0x3db730: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_3db734:
    if (ctx->pc == 0x3DB734u) {
        ctx->pc = 0x3DB734u;
            // 0x3db734: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3DB738u;
        goto label_3db738;
    }
    ctx->pc = 0x3DB730u;
    {
        const bool branch_taken_0x3db730 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB730u;
            // 0x3db734: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db730) {
            ctx->pc = 0x3DB744u;
            goto label_3db744;
        }
    }
    ctx->pc = 0x3DB738u;
label_3db738:
    // 0x3db738: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3db738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3db73c:
    // 0x3db73c: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x3db73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_3db740:
    // 0x3db740: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3db740u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3db744:
    // 0x3db744: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3db744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3db748:
    // 0x3db748: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3db748u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3db74c:
    // 0x3db74c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3db750:
    if (ctx->pc == 0x3DB750u) {
        ctx->pc = 0x3DB750u;
            // 0x3db750: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DB754u;
        goto label_3db754;
    }
    ctx->pc = 0x3DB74Cu;
    {
        const bool branch_taken_0x3db74c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3db74c) {
            ctx->pc = 0x3DB750u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB74Cu;
            // 0x3db750: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DB760u;
            goto label_3db760;
        }
    }
    ctx->pc = 0x3DB754u;
label_3db754:
    // 0x3db754: 0xc0400a8  jal         func_1002A0
label_3db758:
    if (ctx->pc == 0x3DB758u) {
        ctx->pc = 0x3DB758u;
            // 0x3db758: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DB75Cu;
        goto label_3db75c;
    }
    ctx->pc = 0x3DB754u;
    SET_GPR_U32(ctx, 31, 0x3DB75Cu);
    ctx->pc = 0x3DB758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB754u;
            // 0x3db758: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB75Cu; }
        if (ctx->pc != 0x3DB75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB75Cu; }
        if (ctx->pc != 0x3DB75Cu) { return; }
    }
    ctx->pc = 0x3DB75Cu;
label_3db75c:
    // 0x3db75c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3db75cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3db760:
    // 0x3db760: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3db760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3db764:
    // 0x3db764: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3db764u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3db768:
    // 0x3db768: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3db768u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3db76c:
    // 0x3db76c: 0x3e00008  jr          $ra
label_3db770:
    if (ctx->pc == 0x3DB770u) {
        ctx->pc = 0x3DB770u;
            // 0x3db770: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3DB774u;
        goto label_3db774;
    }
    ctx->pc = 0x3DB76Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB76Cu;
            // 0x3db770: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DB774u;
label_3db774:
    // 0x3db774: 0x0  nop
    ctx->pc = 0x3db774u;
    // NOP
label_3db778:
    // 0x3db778: 0x0  nop
    ctx->pc = 0x3db778u;
    // NOP
label_3db77c:
    // 0x3db77c: 0x0  nop
    ctx->pc = 0x3db77cu;
    // NOP
label_3db780:
    // 0x3db780: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3db780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3db784:
    // 0x3db784: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3db784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_3db788:
    // 0x3db788: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3db788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3db78c:
    // 0x3db78c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3db78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3db790:
    // 0x3db790: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3db790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3db794:
    // 0x3db794: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3db794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3db798:
    // 0x3db798: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3db798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3db79c:
    // 0x3db79c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3db79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3db7a0:
    // 0x3db7a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3db7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3db7a4:
    // 0x3db7a4: 0x8c930070  lw          $s3, 0x70($a0)
    ctx->pc = 0x3db7a4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3db7a8:
    // 0x3db7a8: 0x12600051  beqz        $s3, . + 4 + (0x51 << 2)
label_3db7ac:
    if (ctx->pc == 0x3DB7ACu) {
        ctx->pc = 0x3DB7ACu;
            // 0x3db7ac: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DB7B0u;
        goto label_3db7b0;
    }
    ctx->pc = 0x3DB7A8u;
    {
        const bool branch_taken_0x3db7a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB7A8u;
            // 0x3db7ac: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db7a8) {
            ctx->pc = 0x3DB8F0u;
            goto label_3db8f0;
        }
    }
    ctx->pc = 0x3DB7B0u;
label_3db7b0:
    // 0x3db7b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3db7b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3db7b4:
    // 0x3db7b4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3db7b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3db7b8:
    // 0x3db7b8: 0x8ec20074  lw          $v0, 0x74($s6)
    ctx->pc = 0x3db7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
label_3db7bc:
    // 0x3db7bc: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x3db7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_3db7c0:
    // 0x3db7c0: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x3db7c0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3db7c4:
    // 0x3db7c4: 0x265000a4  addiu       $s0, $s2, 0xA4
    ctx->pc = 0x3db7c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 164));
label_3db7c8:
    // 0x3db7c8: 0xc0f7434  jal         func_3DD0D0
label_3db7cc:
    if (ctx->pc == 0x3DB7CCu) {
        ctx->pc = 0x3DB7CCu;
            // 0x3db7cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DB7D0u;
        goto label_3db7d0;
    }
    ctx->pc = 0x3DB7C8u;
    SET_GPR_U32(ctx, 31, 0x3DB7D0u);
    ctx->pc = 0x3DB7CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB7C8u;
            // 0x3db7cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DD0D0u;
    if (runtime->hasFunction(0x3DD0D0u)) {
        auto targetFn = runtime->lookupFunction(0x3DD0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB7D0u; }
        if (ctx->pc != 0x3DB7D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DD0D0_0x3dd0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB7D0u; }
        if (ctx->pc != 0x3DB7D0u) { return; }
    }
    ctx->pc = 0x3DB7D0u;
label_3db7d0:
    // 0x3db7d0: 0x26440084  addiu       $a0, $s2, 0x84
    ctx->pc = 0x3db7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 132));
label_3db7d4:
    // 0x3db7d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3db7d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3db7d8:
    // 0x3db7d8: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x3db7d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3db7dc:
    // 0x3db7dc: 0xc04a576  jal         func_1295D8
label_3db7e0:
    if (ctx->pc == 0x3DB7E0u) {
        ctx->pc = 0x3DB7E0u;
            // 0x3db7e0: 0xae400080  sw          $zero, 0x80($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 0));
        ctx->pc = 0x3DB7E4u;
        goto label_3db7e4;
    }
    ctx->pc = 0x3DB7DCu;
    SET_GPR_U32(ctx, 31, 0x3DB7E4u);
    ctx->pc = 0x3DB7E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB7DCu;
            // 0x3db7e0: 0xae400080  sw          $zero, 0x80($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB7E4u; }
        if (ctx->pc != 0x3DB7E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB7E4u; }
        if (ctx->pc != 0x3DB7E4u) { return; }
    }
    ctx->pc = 0x3DB7E4u;
label_3db7e4:
    // 0x3db7e4: 0xc0f73c0  jal         func_3DCF00
label_3db7e8:
    if (ctx->pc == 0x3DB7E8u) {
        ctx->pc = 0x3DB7E8u;
            // 0x3db7e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DB7ECu;
        goto label_3db7ec;
    }
    ctx->pc = 0x3DB7E4u;
    SET_GPR_U32(ctx, 31, 0x3DB7ECu);
    ctx->pc = 0x3DB7E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB7E4u;
            // 0x3db7e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DCF00u;
    if (runtime->hasFunction(0x3DCF00u)) {
        auto targetFn = runtime->lookupFunction(0x3DCF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB7ECu; }
        if (ctx->pc != 0x3DB7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DCF00_0x3dcf00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB7ECu; }
        if (ctx->pc != 0x3DB7ECu) { return; }
    }
    ctx->pc = 0x3DB7ECu;
label_3db7ec:
    // 0x3db7ec: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3db7ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3db7f0:
    // 0x3db7f0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3db7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_3db7f4:
    // 0x3db7f4: 0xc6410030  lwc1        $f1, 0x30($s2)
    ctx->pc = 0x3db7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3db7f8:
    // 0x3db7f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3db7f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3db7fc:
    // 0x3db7fc: 0x0  nop
    ctx->pc = 0x3db7fcu;
    // NOP
label_3db800:
    // 0x3db800: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3db800u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3db804:
    // 0x3db804: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_3db808:
    if (ctx->pc == 0x3DB808u) {
        ctx->pc = 0x3DB808u;
            // 0x3db808: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3DB80Cu;
        goto label_3db80c;
    }
    ctx->pc = 0x3DB804u;
    {
        const bool branch_taken_0x3db804 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3db804) {
            ctx->pc = 0x3DB808u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB804u;
            // 0x3db808: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DB81Cu;
            goto label_3db81c;
        }
    }
    ctx->pc = 0x3DB80Cu;
label_3db80c:
    // 0x3db80c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3db80cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3db810:
    // 0x3db810: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3db810u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3db814:
    // 0x3db814: 0x10000007  b           . + 4 + (0x7 << 2)
label_3db818:
    if (ctx->pc == 0x3DB818u) {
        ctx->pc = 0x3DB818u;
            // 0x3db818: 0xc64c006c  lwc1        $f12, 0x6C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x3DB81Cu;
        goto label_3db81c;
    }
    ctx->pc = 0x3DB814u;
    {
        const bool branch_taken_0x3db814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB814u;
            // 0x3db818: 0xc64c006c  lwc1        $f12, 0x6C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db814) {
            ctx->pc = 0x3DB834u;
            goto label_3db834;
        }
    }
    ctx->pc = 0x3DB81Cu;
label_3db81c:
    // 0x3db81c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3db81cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3db820:
    // 0x3db820: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3db820u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3db824:
    // 0x3db824: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3db824u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3db828:
    // 0x3db828: 0x0  nop
    ctx->pc = 0x3db828u;
    // NOP
label_3db82c:
    // 0x3db82c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3db82cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_3db830:
    // 0x3db830: 0xc64c006c  lwc1        $f12, 0x6C($s2)
    ctx->pc = 0x3db830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3db834:
    // 0x3db834: 0x3c02c110  lui         $v0, 0xC110
    ctx->pc = 0x3db834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49424 << 16));
label_3db838:
    // 0x3db838: 0xc64d0038  lwc1        $f13, 0x38($s2)
    ctx->pc = 0x3db838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3db83c:
    // 0x3db83c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3db83cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3db840:
    // 0x3db840: 0xc122b58  jal         func_48AD60
label_3db844:
    if (ctx->pc == 0x3DB844u) {
        ctx->pc = 0x3DB844u;
            // 0x3db844: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DB848u;
        goto label_3db848;
    }
    ctx->pc = 0x3DB840u;
    SET_GPR_U32(ctx, 31, 0x3DB848u);
    ctx->pc = 0x3DB844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB840u;
            // 0x3db844: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48AD60u;
    if (runtime->hasFunction(0x48AD60u)) {
        auto targetFn = runtime->lookupFunction(0x48AD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB848u; }
        if (ctx->pc != 0x3DB848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048AD60_0x48ad60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB848u; }
        if (ctx->pc != 0x3DB848u) { return; }
    }
    ctx->pc = 0x3DB848u;
label_3db848:
    // 0x3db848: 0x268401d0  addiu       $a0, $s4, 0x1D0
    ctx->pc = 0x3db848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 464));
label_3db84c:
    // 0x3db84c: 0xc04cc04  jal         func_133010
label_3db850:
    if (ctx->pc == 0x3DB850u) {
        ctx->pc = 0x3DB850u;
            // 0x3db850: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->pc = 0x3DB854u;
        goto label_3db854;
    }
    ctx->pc = 0x3DB84Cu;
    SET_GPR_U32(ctx, 31, 0x3DB854u);
    ctx->pc = 0x3DB850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB84Cu;
            // 0x3db850: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB854u; }
        if (ctx->pc != 0x3DB854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB854u; }
        if (ctx->pc != 0x3DB854u) { return; }
    }
    ctx->pc = 0x3DB854u;
label_3db854:
    // 0x3db854: 0xae9201c8  sw          $s2, 0x1C8($s4)
    ctx->pc = 0x3db854u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 456), GPR_U32(ctx, 18));
label_3db858:
    // 0x3db858: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3db858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3db85c:
    // 0x3db85c: 0xae8201c0  sw          $v0, 0x1C0($s4)
    ctx->pc = 0x3db85cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 448), GPR_U32(ctx, 2));
label_3db860:
    // 0x3db860: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x3db860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_3db864:
    // 0x3db864: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3db864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3db868:
    // 0x3db868: 0x26850010  addiu       $a1, $s4, 0x10
    ctx->pc = 0x3db868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_3db86c:
    // 0x3db86c: 0xc04cc04  jal         func_133010
label_3db870:
    if (ctx->pc == 0x3DB870u) {
        ctx->pc = 0x3DB870u;
            // 0x3db870: 0xae8201c4  sw          $v0, 0x1C4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 452), GPR_U32(ctx, 2));
        ctx->pc = 0x3DB874u;
        goto label_3db874;
    }
    ctx->pc = 0x3DB86Cu;
    SET_GPR_U32(ctx, 31, 0x3DB874u);
    ctx->pc = 0x3DB870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB86Cu;
            // 0x3db870: 0xae8201c4  sw          $v0, 0x1C4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 452), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB874u; }
        if (ctx->pc != 0x3DB874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB874u; }
        if (ctx->pc != 0x3DB874u) { return; }
    }
    ctx->pc = 0x3DB874u;
label_3db874:
    // 0x3db874: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3db874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3db878:
    // 0x3db878: 0xc0f73cc  jal         func_3DCF30
label_3db87c:
    if (ctx->pc == 0x3DB87Cu) {
        ctx->pc = 0x3DB87Cu;
            // 0x3db87c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DB880u;
        goto label_3db880;
    }
    ctx->pc = 0x3DB878u;
    SET_GPR_U32(ctx, 31, 0x3DB880u);
    ctx->pc = 0x3DB87Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB878u;
            // 0x3db87c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DCF30u;
    if (runtime->hasFunction(0x3DCF30u)) {
        auto targetFn = runtime->lookupFunction(0x3DCF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB880u; }
        if (ctx->pc != 0x3DB880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DCF30_0x3dcf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB880u; }
        if (ctx->pc != 0x3DB880u) { return; }
    }
    ctx->pc = 0x3DB880u;
label_3db880:
    // 0x3db880: 0xc0f73c0  jal         func_3DCF00
label_3db884:
    if (ctx->pc == 0x3DB884u) {
        ctx->pc = 0x3DB884u;
            // 0x3db884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DB888u;
        goto label_3db888;
    }
    ctx->pc = 0x3DB880u;
    SET_GPR_U32(ctx, 31, 0x3DB888u);
    ctx->pc = 0x3DB884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB880u;
            // 0x3db884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DCF00u;
    if (runtime->hasFunction(0x3DCF00u)) {
        auto targetFn = runtime->lookupFunction(0x3DCF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB888u; }
        if (ctx->pc != 0x3DB888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DCF00_0x3dcf00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB888u; }
        if (ctx->pc != 0x3DB888u) { return; }
    }
    ctx->pc = 0x3DB888u;
label_3db888:
    // 0x3db888: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3db888u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3db88c:
    // 0x3db88c: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x3db88cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_3db890:
    // 0x3db890: 0x3c023eed  lui         $v0, 0x3EED
    ctx->pc = 0x3db890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16109 << 16));
label_3db894:
    // 0x3db894: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3db894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3db898:
    // 0x3db898: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x3db898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_3db89c:
    // 0x3db89c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3db89cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3db8a0:
    // 0x3db8a0: 0x3c02c110  lui         $v0, 0xC110
    ctx->pc = 0x3db8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49424 << 16));
label_3db8a4:
    // 0x3db8a4: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x3db8a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3db8a8:
    // 0x3db8a8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3db8a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3db8ac:
    // 0x3db8ac: 0xc122b58  jal         func_48AD60
label_3db8b0:
    if (ctx->pc == 0x3DB8B0u) {
        ctx->pc = 0x3DB8B0u;
            // 0x3db8b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3DB8B4u;
        goto label_3db8b4;
    }
    ctx->pc = 0x3DB8ACu;
    SET_GPR_U32(ctx, 31, 0x3DB8B4u);
    ctx->pc = 0x3DB8B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB8ACu;
            // 0x3db8b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48AD60u;
    if (runtime->hasFunction(0x48AD60u)) {
        auto targetFn = runtime->lookupFunction(0x48AD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB8B4u; }
        if (ctx->pc != 0x3DB8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048AD60_0x48ad60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB8B4u; }
        if (ctx->pc != 0x3DB8B4u) { return; }
    }
    ctx->pc = 0x3DB8B4u;
label_3db8b4:
    // 0x3db8b4: 0x268401d0  addiu       $a0, $s4, 0x1D0
    ctx->pc = 0x3db8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 464));
label_3db8b8:
    // 0x3db8b8: 0xc04cc04  jal         func_133010
label_3db8bc:
    if (ctx->pc == 0x3DB8BCu) {
        ctx->pc = 0x3DB8BCu;
            // 0x3db8bc: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->pc = 0x3DB8C0u;
        goto label_3db8c0;
    }
    ctx->pc = 0x3DB8B8u;
    SET_GPR_U32(ctx, 31, 0x3DB8C0u);
    ctx->pc = 0x3DB8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB8B8u;
            // 0x3db8bc: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB8C0u; }
        if (ctx->pc != 0x3DB8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB8C0u; }
        if (ctx->pc != 0x3DB8C0u) { return; }
    }
    ctx->pc = 0x3DB8C0u;
label_3db8c0:
    // 0x3db8c0: 0xae9201c8  sw          $s2, 0x1C8($s4)
    ctx->pc = 0x3db8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 456), GPR_U32(ctx, 18));
label_3db8c4:
    // 0x3db8c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3db8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3db8c8:
    // 0x3db8c8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3db8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3db8cc:
    // 0x3db8cc: 0xae8301c0  sw          $v1, 0x1C0($s4)
    ctx->pc = 0x3db8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 448), GPR_U32(ctx, 3));
label_3db8d0:
    // 0x3db8d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3db8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3db8d4:
    // 0x3db8d4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3db8d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3db8d8:
    // 0x3db8d8: 0xc0f73cc  jal         func_3DCF30
label_3db8dc:
    if (ctx->pc == 0x3DB8DCu) {
        ctx->pc = 0x3DB8DCu;
            // 0x3db8dc: 0xae8201c4  sw          $v0, 0x1C4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 452), GPR_U32(ctx, 2));
        ctx->pc = 0x3DB8E0u;
        goto label_3db8e0;
    }
    ctx->pc = 0x3DB8D8u;
    SET_GPR_U32(ctx, 31, 0x3DB8E0u);
    ctx->pc = 0x3DB8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB8D8u;
            // 0x3db8dc: 0xae8201c4  sw          $v0, 0x1C4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 452), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DCF30u;
    if (runtime->hasFunction(0x3DCF30u)) {
        auto targetFn = runtime->lookupFunction(0x3DCF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB8E0u; }
        if (ctx->pc != 0x3DB8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DCF30_0x3dcf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB8E0u; }
        if (ctx->pc != 0x3DB8E0u) { return; }
    }
    ctx->pc = 0x3DB8E0u;
label_3db8e0:
    // 0x3db8e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3db8e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3db8e4:
    // 0x3db8e4: 0x233182b  sltu        $v1, $s1, $s3
    ctx->pc = 0x3db8e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_3db8e8:
    // 0x3db8e8: 0x1460ffb3  bnez        $v1, . + 4 + (-0x4D << 2)
label_3db8ec:
    if (ctx->pc == 0x3DB8ECu) {
        ctx->pc = 0x3DB8ECu;
            // 0x3db8ec: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->pc = 0x3DB8F0u;
        goto label_3db8f0;
    }
    ctx->pc = 0x3DB8E8u;
    {
        const bool branch_taken_0x3db8e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DB8ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB8E8u;
            // 0x3db8ec: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db8e8) {
            ctx->pc = 0x3DB7B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3db7b8;
        }
    }
    ctx->pc = 0x3DB8F0u;
label_3db8f0:
    // 0x3db8f0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3db8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3db8f4:
    // 0x3db8f4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3db8f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3db8f8:
    // 0x3db8f8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3db8f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3db8fc:
    // 0x3db8fc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3db8fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3db900:
    // 0x3db900: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3db900u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3db904:
    // 0x3db904: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3db904u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3db908:
    // 0x3db908: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3db908u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3db90c:
    // 0x3db90c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3db90cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3db910:
    // 0x3db910: 0x3e00008  jr          $ra
label_3db914:
    if (ctx->pc == 0x3DB914u) {
        ctx->pc = 0x3DB914u;
            // 0x3db914: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3DB918u;
        goto label_3db918;
    }
    ctx->pc = 0x3DB910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB910u;
            // 0x3db914: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DB918u;
label_3db918:
    // 0x3db918: 0x0  nop
    ctx->pc = 0x3db918u;
    // NOP
label_3db91c:
    // 0x3db91c: 0x0  nop
    ctx->pc = 0x3db91cu;
    // NOP
label_3db920:
    // 0x3db920: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x3db920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_3db924:
    // 0x3db924: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3db924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3db928:
    // 0x3db928: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3db928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_3db92c:
    // 0x3db92c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3db92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_3db930:
    // 0x3db930: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3db930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_3db934:
    // 0x3db934: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3db934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3db938:
    // 0x3db938: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3db938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3db93c:
    // 0x3db93c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3db93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3db940:
    // 0x3db940: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3db940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3db944:
    // 0x3db944: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3db944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3db948:
    // 0x3db948: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3db948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3db94c:
    // 0x3db94c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3db94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3db950:
    // 0x3db950: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x3db950u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3db954:
    // 0x3db954: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3db954u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3db958:
    // 0x3db958: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3db958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3db95c:
    // 0x3db95c: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_3db960:
    if (ctx->pc == 0x3DB960u) {
        ctx->pc = 0x3DB960u;
            // 0x3db960: 0xafa400bc  sw          $a0, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 4));
        ctx->pc = 0x3DB964u;
        goto label_3db964;
    }
    ctx->pc = 0x3DB95Cu;
    {
        const bool branch_taken_0x3db95c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3DB960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB95Cu;
            // 0x3db960: 0xafa400bc  sw          $a0, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db95c) {
            ctx->pc = 0x3DB9A0u;
            goto label_3db9a0;
        }
    }
    ctx->pc = 0x3DB964u;
label_3db964:
    // 0x3db964: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3db964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3db968:
    // 0x3db968: 0x50a30070  beql        $a1, $v1, . + 4 + (0x70 << 2)
label_3db96c:
    if (ctx->pc == 0x3DB96Cu) {
        ctx->pc = 0x3DB96Cu;
            // 0x3db96c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x3DB970u;
        goto label_3db970;
    }
    ctx->pc = 0x3DB968u;
    {
        const bool branch_taken_0x3db968 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3db968) {
            ctx->pc = 0x3DB96Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB968u;
            // 0x3db96c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DBB2Cu;
            goto label_3dbb2c;
        }
    }
    ctx->pc = 0x3DB970u;
label_3db970:
    // 0x3db970: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3db970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3db974:
    // 0x3db974: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_3db978:
    if (ctx->pc == 0x3DB978u) {
        ctx->pc = 0x3DB978u;
            // 0x3db978: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3DB97Cu;
        goto label_3db97c;
    }
    ctx->pc = 0x3DB974u;
    {
        const bool branch_taken_0x3db974 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3db974) {
            ctx->pc = 0x3DB978u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB974u;
            // 0x3db978: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DB984u;
            goto label_3db984;
        }
    }
    ctx->pc = 0x3DB97Cu;
label_3db97c:
    // 0x3db97c: 0x1000006a  b           . + 4 + (0x6A << 2)
label_3db980:
    if (ctx->pc == 0x3DB980u) {
        ctx->pc = 0x3DB984u;
        goto label_3db984;
    }
    ctx->pc = 0x3DB97Cu;
    {
        const bool branch_taken_0x3db97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3db97c) {
            ctx->pc = 0x3DBB28u;
            goto label_3dbb28;
        }
    }
    ctx->pc = 0x3DB984u;
label_3db984:
    // 0x3db984: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x3db984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_3db988:
    // 0x3db988: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x3db988u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_3db98c:
    // 0x3db98c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3db98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3db990:
    // 0x3db990: 0x320f809  jalr        $t9
label_3db994:
    if (ctx->pc == 0x3DB994u) {
        ctx->pc = 0x3DB994u;
            // 0x3db994: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x3DB998u;
        goto label_3db998;
    }
    ctx->pc = 0x3DB990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3DB998u);
        ctx->pc = 0x3DB994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB990u;
            // 0x3db994: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3DB998u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3DB998u; }
            if (ctx->pc != 0x3DB998u) { return; }
        }
        }
    }
    ctx->pc = 0x3DB998u;
label_3db998:
    // 0x3db998: 0x10000063  b           . + 4 + (0x63 << 2)
label_3db99c:
    if (ctx->pc == 0x3DB99Cu) {
        ctx->pc = 0x3DB9A0u;
        goto label_3db9a0;
    }
    ctx->pc = 0x3DB998u;
    {
        const bool branch_taken_0x3db998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3db998) {
            ctx->pc = 0x3DBB28u;
            goto label_3dbb28;
        }
    }
    ctx->pc = 0x3DB9A0u;
label_3db9a0:
    // 0x3db9a0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3db9a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3db9a4:
    // 0x3db9a4: 0x8c760070  lw          $s6, 0x70($v1)
    ctx->pc = 0x3db9a4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_3db9a8:
    // 0x3db9a8: 0x12c0005f  beqz        $s6, . + 4 + (0x5F << 2)
label_3db9ac:
    if (ctx->pc == 0x3DB9ACu) {
        ctx->pc = 0x3DB9B0u;
        goto label_3db9b0;
    }
    ctx->pc = 0x3DB9A8u;
    {
        const bool branch_taken_0x3db9a8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x3db9a8) {
            ctx->pc = 0x3DBB28u;
            goto label_3dbb28;
        }
    }
    ctx->pc = 0x3DB9B0u;
label_3db9b0:
    // 0x3db9b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3db9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3db9b4:
    // 0x3db9b4: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x3db9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_3db9b8:
    // 0x3db9b8: 0x8c55e378  lw          $s5, -0x1C88($v0)
    ctx->pc = 0x3db9b8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_3db9bc:
    // 0x3db9bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3db9bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3db9c0:
    // 0x3db9c0: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x3db9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_3db9c4:
    // 0x3db9c4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3db9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3db9c8:
    // 0x3db9c8: 0x8c44d120  lw          $a0, -0x2EE0($v0)
    ctx->pc = 0x3db9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_3db9cc:
    // 0x3db9cc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3db9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3db9d0:
    // 0x3db9d0: 0x8ca70130  lw          $a3, 0x130($a1)
    ctx->pc = 0x3db9d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_3db9d4:
    // 0x3db9d4: 0x8c7ee370  lw          $fp, -0x1C90($v1)
    ctx->pc = 0x3db9d4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959984)));
label_3db9d8:
    // 0x3db9d8: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x3db9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_3db9dc:
    // 0x3db9dc: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x3db9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3db9e0:
    // 0x3db9e0: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x3db9e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_3db9e4:
    // 0x3db9e4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3db9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3db9e8:
    // 0x3db9e8: 0x24540084  addiu       $s4, $v0, 0x84
    ctx->pc = 0x3db9e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
label_3db9ec:
    // 0x3db9ec: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x3db9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_3db9f0:
    // 0x3db9f0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3db9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3db9f4:
    // 0x3db9f4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x3db9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3db9f8:
    // 0x3db9f8: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x3db9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_3db9fc:
    // 0x3db9fc: 0x24b70010  addiu       $s7, $a1, 0x10
    ctx->pc = 0x3db9fcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_3dba00:
    // 0x3dba00: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x3dba00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_3dba04:
    // 0x3dba04: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x3dba04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_3dba08:
    // 0x3dba08: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x3dba08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_3dba0c:
    // 0x3dba0c: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x3dba0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_3dba10:
    // 0x3dba10: 0xc04e4a4  jal         func_139290
label_3dba14:
    if (ctx->pc == 0x3DBA14u) {
        ctx->pc = 0x3DBA14u;
            // 0x3dba14: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DBA18u;
        goto label_3dba18;
    }
    ctx->pc = 0x3DBA10u;
    SET_GPR_U32(ctx, 31, 0x3DBA18u);
    ctx->pc = 0x3DBA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DBA10u;
            // 0x3dba14: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBA18u; }
        if (ctx->pc != 0x3DBA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBA18u; }
        if (ctx->pc != 0x3DBA18u) { return; }
    }
    ctx->pc = 0x3DBA18u;
label_3dba18:
    // 0x3dba18: 0xc04e738  jal         func_139CE0
label_3dba1c:
    if (ctx->pc == 0x3DBA1Cu) {
        ctx->pc = 0x3DBA1Cu;
            // 0x3dba1c: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->pc = 0x3DBA20u;
        goto label_3dba20;
    }
    ctx->pc = 0x3DBA18u;
    SET_GPR_U32(ctx, 31, 0x3DBA20u);
    ctx->pc = 0x3DBA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DBA18u;
            // 0x3dba1c: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBA20u; }
        if (ctx->pc != 0x3DBA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBA20u; }
        if (ctx->pc != 0x3DBA20u) { return; }
    }
    ctx->pc = 0x3DBA20u;
label_3dba20:
    // 0x3dba20: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3dba20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dba24:
    // 0x3dba24: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3dba24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dba28:
    // 0x3dba28: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x3dba28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_3dba2c:
    // 0x3dba2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3dba2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3dba30:
    // 0x3dba30: 0x8c630074  lw          $v1, 0x74($v1)
    ctx->pc = 0x3dba30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_3dba34:
    // 0x3dba34: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3dba34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3dba38:
    // 0x3dba38: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3dba38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3dba3c:
    // 0x3dba3c: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x3dba3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_3dba40:
    // 0x3dba40: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x3dba40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_3dba44:
    // 0x3dba44: 0x14640028  bne         $v1, $a0, . + 4 + (0x28 << 2)
label_3dba48:
    if (ctx->pc == 0x3DBA48u) {
        ctx->pc = 0x3DBA4Cu;
        goto label_3dba4c;
    }
    ctx->pc = 0x3DBA44u;
    {
        const bool branch_taken_0x3dba44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3dba44) {
            ctx->pc = 0x3DBAE8u;
            goto label_3dbae8;
        }
    }
    ctx->pc = 0x3DBA4Cu;
label_3dba4c:
    // 0x3dba4c: 0xc0d1c14  jal         func_347050
label_3dba50:
    if (ctx->pc == 0x3DBA50u) {
        ctx->pc = 0x3DBA50u;
            // 0x3dba50: 0x8fa400a0  lw          $a0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x3DBA54u;
        goto label_3dba54;
    }
    ctx->pc = 0x3DBA4Cu;
    SET_GPR_U32(ctx, 31, 0x3DBA54u);
    ctx->pc = 0x3DBA50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DBA4Cu;
            // 0x3dba50: 0x8fa400a0  lw          $a0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBA54u; }
        if (ctx->pc != 0x3DBA54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBA54u; }
        if (ctx->pc != 0x3DBA54u) { return; }
    }
    ctx->pc = 0x3DBA54u;
label_3dba54:
    // 0x3dba54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3dba54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dba58:
    // 0x3dba58: 0xc04f278  jal         func_13C9E0
label_3dba5c:
    if (ctx->pc == 0x3DBA5Cu) {
        ctx->pc = 0x3DBA5Cu;
            // 0x3dba5c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x3DBA60u;
        goto label_3dba60;
    }
    ctx->pc = 0x3DBA58u;
    SET_GPR_U32(ctx, 31, 0x3DBA60u);
    ctx->pc = 0x3DBA5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DBA58u;
            // 0x3dba5c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBA60u; }
        if (ctx->pc != 0x3DBA60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBA60u; }
        if (ctx->pc != 0x3DBA60u) { return; }
    }
    ctx->pc = 0x3DBA60u;
label_3dba60:
    // 0x3dba60: 0xc0d1c10  jal         func_347040
label_3dba64:
    if (ctx->pc == 0x3DBA64u) {
        ctx->pc = 0x3DBA64u;
            // 0x3dba64: 0x8fa400a0  lw          $a0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x3DBA68u;
        goto label_3dba68;
    }
    ctx->pc = 0x3DBA60u;
    SET_GPR_U32(ctx, 31, 0x3DBA68u);
    ctx->pc = 0x3DBA64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DBA60u;
            // 0x3dba64: 0x8fa400a0  lw          $a0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBA68u; }
        if (ctx->pc != 0x3DBA68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBA68u; }
        if (ctx->pc != 0x3DBA68u) { return; }
    }
    ctx->pc = 0x3DBA68u;
label_3dba68:
    // 0x3dba68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3dba68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dba6c:
    // 0x3dba6c: 0xc04ce80  jal         func_133A00
label_3dba70:
    if (ctx->pc == 0x3DBA70u) {
        ctx->pc = 0x3DBA70u;
            // 0x3dba70: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x3DBA74u;
        goto label_3dba74;
    }
    ctx->pc = 0x3DBA6Cu;
    SET_GPR_U32(ctx, 31, 0x3DBA74u);
    ctx->pc = 0x3DBA70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DBA6Cu;
            // 0x3dba70: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBA74u; }
        if (ctx->pc != 0x3DBA74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBA74u; }
        if (ctx->pc != 0x3DBA74u) { return; }
    }
    ctx->pc = 0x3DBA74u;
label_3dba74:
    // 0x3dba74: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x3dba74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_3dba78:
    // 0x3dba78: 0xc0d1c0c  jal         func_347030
label_3dba7c:
    if (ctx->pc == 0x3DBA7Cu) {
        ctx->pc = 0x3DBA7Cu;
            // 0x3dba7c: 0x244400a4  addiu       $a0, $v0, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
        ctx->pc = 0x3DBA80u;
        goto label_3dba80;
    }
    ctx->pc = 0x3DBA78u;
    SET_GPR_U32(ctx, 31, 0x3DBA80u);
    ctx->pc = 0x3DBA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DBA78u;
            // 0x3dba7c: 0x244400a4  addiu       $a0, $v0, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347030u;
    if (runtime->hasFunction(0x347030u)) {
        auto targetFn = runtime->lookupFunction(0x347030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBA80u; }
        if (ctx->pc != 0x3DBA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347030_0x347030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBA80u; }
        if (ctx->pc != 0x3DBA80u) { return; }
    }
    ctx->pc = 0x3DBA80u;
label_3dba80:
    // 0x3dba80: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3dba80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dba84:
    // 0x3dba84: 0x12400018  beqz        $s2, . + 4 + (0x18 << 2)
label_3dba88:
    if (ctx->pc == 0x3DBA88u) {
        ctx->pc = 0x3DBA8Cu;
        goto label_3dba8c;
    }
    ctx->pc = 0x3DBA84u;
    {
        const bool branch_taken_0x3dba84 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dba84) {
            ctx->pc = 0x3DBAE8u;
            goto label_3dbae8;
        }
    }
    ctx->pc = 0x3DBA8Cu;
label_3dba8c:
    // 0x3dba8c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x3dba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_3dba90:
    // 0x3dba90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3dba90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dba94:
    // 0x3dba94: 0xc0f6f68  jal         func_3DBDA0
label_3dba98:
    if (ctx->pc == 0x3DBA98u) {
        ctx->pc = 0x3DBA98u;
            // 0x3dba98: 0x244400a4  addiu       $a0, $v0, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
        ctx->pc = 0x3DBA9Cu;
        goto label_3dba9c;
    }
    ctx->pc = 0x3DBA94u;
    SET_GPR_U32(ctx, 31, 0x3DBA9Cu);
    ctx->pc = 0x3DBA98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DBA94u;
            // 0x3dba98: 0x244400a4  addiu       $a0, $v0, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DBDA0u;
    if (runtime->hasFunction(0x3DBDA0u)) {
        auto targetFn = runtime->lookupFunction(0x3DBDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBA9Cu; }
        if (ctx->pc != 0x3DBA9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DBDA0_0x3dbda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBA9Cu; }
        if (ctx->pc != 0x3DBA9Cu) { return; }
    }
    ctx->pc = 0x3DBA9Cu;
label_3dba9c:
    // 0x3dba9c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3dba9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dbaa0:
    // 0x3dbaa0: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x3dbaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_3dbaa4:
    // 0x3dbaa4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3dbaa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dbaa8:
    // 0x3dbaa8: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x3dbaa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3dbaac:
    // 0x3dbaac: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x3dbaacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_3dbab0:
    // 0x3dbab0: 0x320f809  jalr        $t9
label_3dbab4:
    if (ctx->pc == 0x3DBAB4u) {
        ctx->pc = 0x3DBAB8u;
        goto label_3dbab8;
    }
    ctx->pc = 0x3DBAB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3DBAB8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3DBAB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3DBAB8u; }
            if (ctx->pc != 0x3DBAB8u) { return; }
        }
        }
    }
    ctx->pc = 0x3DBAB8u;
label_3dbab8:
    // 0x3dbab8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3dbab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3dbabc:
    // 0x3dbabc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3dbabcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3dbac0:
    // 0x3dbac0: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x3dbac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3dbac4:
    // 0x3dbac4: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x3dbac4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3dbac8:
    // 0x3dbac8: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x3dbac8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3dbacc:
    // 0x3dbacc: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x3dbaccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_3dbad0:
    // 0x3dbad0: 0xc0f6ed8  jal         func_3DBB60
label_3dbad4:
    if (ctx->pc == 0x3DBAD4u) {
        ctx->pc = 0x3DBAD4u;
            // 0x3dbad4: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DBAD8u;
        goto label_3dbad8;
    }
    ctx->pc = 0x3DBAD0u;
    SET_GPR_U32(ctx, 31, 0x3DBAD8u);
    ctx->pc = 0x3DBAD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DBAD0u;
            // 0x3dbad4: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DBB60u;
    if (runtime->hasFunction(0x3DBB60u)) {
        auto targetFn = runtime->lookupFunction(0x3DBB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBAD8u; }
        if (ctx->pc != 0x3DBAD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DBB60_0x3dbb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBAD8u; }
        if (ctx->pc != 0x3DBAD8u) { return; }
    }
    ctx->pc = 0x3DBAD8u;
label_3dbad8:
    // 0x3dbad8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3dbad8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3dbadc:
    // 0x3dbadc: 0x12182b  sltu        $v1, $zero, $s2
    ctx->pc = 0x3dbadcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_3dbae0:
    // 0x3dbae0: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
label_3dbae4:
    if (ctx->pc == 0x3DBAE4u) {
        ctx->pc = 0x3DBAE4u;
            // 0x3dbae4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x3DBAE8u;
        goto label_3dbae8;
    }
    ctx->pc = 0x3DBAE0u;
    {
        const bool branch_taken_0x3dbae0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DBAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DBAE0u;
            // 0x3dbae4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbae0) {
            ctx->pc = 0x3DBAA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3dbaa0;
        }
    }
    ctx->pc = 0x3DBAE8u;
label_3dbae8:
    // 0x3dbae8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3dbae8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3dbaec:
    // 0x3dbaec: 0x276182b  sltu        $v1, $s3, $s6
    ctx->pc = 0x3dbaecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_3dbaf0:
    // 0x3dbaf0: 0x1460ffcd  bnez        $v1, . + 4 + (-0x33 << 2)
label_3dbaf4:
    if (ctx->pc == 0x3DBAF4u) {
        ctx->pc = 0x3DBAF4u;
            // 0x3dbaf4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x3DBAF8u;
        goto label_3dbaf8;
    }
    ctx->pc = 0x3DBAF0u;
    {
        const bool branch_taken_0x3dbaf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DBAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DBAF0u;
            // 0x3dbaf4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbaf0) {
            ctx->pc = 0x3DBA28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3dba28;
        }
    }
    ctx->pc = 0x3DBAF8u;
label_3dbaf8:
    // 0x3dbaf8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3dbaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3dbafc:
    // 0x3dbafc: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x3dbafcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_3dbb00:
    // 0x3dbb00: 0x19200009  blez        $t1, . + 4 + (0x9 << 2)
label_3dbb04:
    if (ctx->pc == 0x3DBB04u) {
        ctx->pc = 0x3DBB04u;
            // 0x3dbb04: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x3DBB08u;
        goto label_3dbb08;
    }
    ctx->pc = 0x3DBB00u;
    {
        const bool branch_taken_0x3dbb00 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x3DBB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DBB00u;
            // 0x3dbb04: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbb00) {
            ctx->pc = 0x3DBB28u;
            goto label_3dbb28;
        }
    }
    ctx->pc = 0x3DBB08u;
label_3dbb08:
    // 0x3dbb08: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3dbb08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3dbb0c:
    // 0x3dbb0c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3dbb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3dbb10:
    // 0x3dbb10: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x3dbb10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_3dbb14:
    // 0x3dbb14: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x3dbb14u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_3dbb18:
    // 0x3dbb18: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x3dbb18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_3dbb1c:
    // 0x3dbb1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3dbb1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dbb20:
    // 0x3dbb20: 0xc055d28  jal         func_1574A0
label_3dbb24:
    if (ctx->pc == 0x3DBB24u) {
        ctx->pc = 0x3DBB24u;
            // 0x3dbb24: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DBB28u;
        goto label_3dbb28;
    }
    ctx->pc = 0x3DBB20u;
    SET_GPR_U32(ctx, 31, 0x3DBB28u);
    ctx->pc = 0x3DBB24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DBB20u;
            // 0x3dbb24: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1574A0u;
    if (runtime->hasFunction(0x1574A0u)) {
        auto targetFn = runtime->lookupFunction(0x1574A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBB28u; }
        if (ctx->pc != 0x3DBB28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001574A0_0x1574a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBB28u; }
        if (ctx->pc != 0x3DBB28u) { return; }
    }
    ctx->pc = 0x3DBB28u;
label_3dbb28:
    // 0x3dbb28: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3dbb28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3dbb2c:
    // 0x3dbb2c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3dbb2cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3dbb30:
    // 0x3dbb30: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3dbb30u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3dbb34:
    // 0x3dbb34: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3dbb34u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3dbb38:
    // 0x3dbb38: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3dbb38u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3dbb3c:
    // 0x3dbb3c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3dbb3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3dbb40:
    // 0x3dbb40: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3dbb40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3dbb44:
    // 0x3dbb44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3dbb44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dbb48:
    // 0x3dbb48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3dbb48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3dbb4c:
    // 0x3dbb4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dbb4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3dbb50:
    // 0x3dbb50: 0x3e00008  jr          $ra
label_3dbb54:
    if (ctx->pc == 0x3DBB54u) {
        ctx->pc = 0x3DBB54u;
            // 0x3dbb54: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x3DBB58u;
        goto label_3dbb58;
    }
    ctx->pc = 0x3DBB50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DBB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DBB50u;
            // 0x3dbb54: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DBB58u;
label_3dbb58:
    // 0x3dbb58: 0x0  nop
    ctx->pc = 0x3dbb58u;
    // NOP
label_3dbb5c:
    // 0x3dbb5c: 0x0  nop
    ctx->pc = 0x3dbb5cu;
    // NOP
}
