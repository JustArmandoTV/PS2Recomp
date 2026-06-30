#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003DC670
// Address: 0x3dc670 - 0x3dcda0
void sub_003DC670_0x3dc670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC670_0x3dc670");
#endif

    switch (ctx->pc) {
        case 0x3dc670u: goto label_3dc670;
        case 0x3dc674u: goto label_3dc674;
        case 0x3dc678u: goto label_3dc678;
        case 0x3dc67cu: goto label_3dc67c;
        case 0x3dc680u: goto label_3dc680;
        case 0x3dc684u: goto label_3dc684;
        case 0x3dc688u: goto label_3dc688;
        case 0x3dc68cu: goto label_3dc68c;
        case 0x3dc690u: goto label_3dc690;
        case 0x3dc694u: goto label_3dc694;
        case 0x3dc698u: goto label_3dc698;
        case 0x3dc69cu: goto label_3dc69c;
        case 0x3dc6a0u: goto label_3dc6a0;
        case 0x3dc6a4u: goto label_3dc6a4;
        case 0x3dc6a8u: goto label_3dc6a8;
        case 0x3dc6acu: goto label_3dc6ac;
        case 0x3dc6b0u: goto label_3dc6b0;
        case 0x3dc6b4u: goto label_3dc6b4;
        case 0x3dc6b8u: goto label_3dc6b8;
        case 0x3dc6bcu: goto label_3dc6bc;
        case 0x3dc6c0u: goto label_3dc6c0;
        case 0x3dc6c4u: goto label_3dc6c4;
        case 0x3dc6c8u: goto label_3dc6c8;
        case 0x3dc6ccu: goto label_3dc6cc;
        case 0x3dc6d0u: goto label_3dc6d0;
        case 0x3dc6d4u: goto label_3dc6d4;
        case 0x3dc6d8u: goto label_3dc6d8;
        case 0x3dc6dcu: goto label_3dc6dc;
        case 0x3dc6e0u: goto label_3dc6e0;
        case 0x3dc6e4u: goto label_3dc6e4;
        case 0x3dc6e8u: goto label_3dc6e8;
        case 0x3dc6ecu: goto label_3dc6ec;
        case 0x3dc6f0u: goto label_3dc6f0;
        case 0x3dc6f4u: goto label_3dc6f4;
        case 0x3dc6f8u: goto label_3dc6f8;
        case 0x3dc6fcu: goto label_3dc6fc;
        case 0x3dc700u: goto label_3dc700;
        case 0x3dc704u: goto label_3dc704;
        case 0x3dc708u: goto label_3dc708;
        case 0x3dc70cu: goto label_3dc70c;
        case 0x3dc710u: goto label_3dc710;
        case 0x3dc714u: goto label_3dc714;
        case 0x3dc718u: goto label_3dc718;
        case 0x3dc71cu: goto label_3dc71c;
        case 0x3dc720u: goto label_3dc720;
        case 0x3dc724u: goto label_3dc724;
        case 0x3dc728u: goto label_3dc728;
        case 0x3dc72cu: goto label_3dc72c;
        case 0x3dc730u: goto label_3dc730;
        case 0x3dc734u: goto label_3dc734;
        case 0x3dc738u: goto label_3dc738;
        case 0x3dc73cu: goto label_3dc73c;
        case 0x3dc740u: goto label_3dc740;
        case 0x3dc744u: goto label_3dc744;
        case 0x3dc748u: goto label_3dc748;
        case 0x3dc74cu: goto label_3dc74c;
        case 0x3dc750u: goto label_3dc750;
        case 0x3dc754u: goto label_3dc754;
        case 0x3dc758u: goto label_3dc758;
        case 0x3dc75cu: goto label_3dc75c;
        case 0x3dc760u: goto label_3dc760;
        case 0x3dc764u: goto label_3dc764;
        case 0x3dc768u: goto label_3dc768;
        case 0x3dc76cu: goto label_3dc76c;
        case 0x3dc770u: goto label_3dc770;
        case 0x3dc774u: goto label_3dc774;
        case 0x3dc778u: goto label_3dc778;
        case 0x3dc77cu: goto label_3dc77c;
        case 0x3dc780u: goto label_3dc780;
        case 0x3dc784u: goto label_3dc784;
        case 0x3dc788u: goto label_3dc788;
        case 0x3dc78cu: goto label_3dc78c;
        case 0x3dc790u: goto label_3dc790;
        case 0x3dc794u: goto label_3dc794;
        case 0x3dc798u: goto label_3dc798;
        case 0x3dc79cu: goto label_3dc79c;
        case 0x3dc7a0u: goto label_3dc7a0;
        case 0x3dc7a4u: goto label_3dc7a4;
        case 0x3dc7a8u: goto label_3dc7a8;
        case 0x3dc7acu: goto label_3dc7ac;
        case 0x3dc7b0u: goto label_3dc7b0;
        case 0x3dc7b4u: goto label_3dc7b4;
        case 0x3dc7b8u: goto label_3dc7b8;
        case 0x3dc7bcu: goto label_3dc7bc;
        case 0x3dc7c0u: goto label_3dc7c0;
        case 0x3dc7c4u: goto label_3dc7c4;
        case 0x3dc7c8u: goto label_3dc7c8;
        case 0x3dc7ccu: goto label_3dc7cc;
        case 0x3dc7d0u: goto label_3dc7d0;
        case 0x3dc7d4u: goto label_3dc7d4;
        case 0x3dc7d8u: goto label_3dc7d8;
        case 0x3dc7dcu: goto label_3dc7dc;
        case 0x3dc7e0u: goto label_3dc7e0;
        case 0x3dc7e4u: goto label_3dc7e4;
        case 0x3dc7e8u: goto label_3dc7e8;
        case 0x3dc7ecu: goto label_3dc7ec;
        case 0x3dc7f0u: goto label_3dc7f0;
        case 0x3dc7f4u: goto label_3dc7f4;
        case 0x3dc7f8u: goto label_3dc7f8;
        case 0x3dc7fcu: goto label_3dc7fc;
        case 0x3dc800u: goto label_3dc800;
        case 0x3dc804u: goto label_3dc804;
        case 0x3dc808u: goto label_3dc808;
        case 0x3dc80cu: goto label_3dc80c;
        case 0x3dc810u: goto label_3dc810;
        case 0x3dc814u: goto label_3dc814;
        case 0x3dc818u: goto label_3dc818;
        case 0x3dc81cu: goto label_3dc81c;
        case 0x3dc820u: goto label_3dc820;
        case 0x3dc824u: goto label_3dc824;
        case 0x3dc828u: goto label_3dc828;
        case 0x3dc82cu: goto label_3dc82c;
        case 0x3dc830u: goto label_3dc830;
        case 0x3dc834u: goto label_3dc834;
        case 0x3dc838u: goto label_3dc838;
        case 0x3dc83cu: goto label_3dc83c;
        case 0x3dc840u: goto label_3dc840;
        case 0x3dc844u: goto label_3dc844;
        case 0x3dc848u: goto label_3dc848;
        case 0x3dc84cu: goto label_3dc84c;
        case 0x3dc850u: goto label_3dc850;
        case 0x3dc854u: goto label_3dc854;
        case 0x3dc858u: goto label_3dc858;
        case 0x3dc85cu: goto label_3dc85c;
        case 0x3dc860u: goto label_3dc860;
        case 0x3dc864u: goto label_3dc864;
        case 0x3dc868u: goto label_3dc868;
        case 0x3dc86cu: goto label_3dc86c;
        case 0x3dc870u: goto label_3dc870;
        case 0x3dc874u: goto label_3dc874;
        case 0x3dc878u: goto label_3dc878;
        case 0x3dc87cu: goto label_3dc87c;
        case 0x3dc880u: goto label_3dc880;
        case 0x3dc884u: goto label_3dc884;
        case 0x3dc888u: goto label_3dc888;
        case 0x3dc88cu: goto label_3dc88c;
        case 0x3dc890u: goto label_3dc890;
        case 0x3dc894u: goto label_3dc894;
        case 0x3dc898u: goto label_3dc898;
        case 0x3dc89cu: goto label_3dc89c;
        case 0x3dc8a0u: goto label_3dc8a0;
        case 0x3dc8a4u: goto label_3dc8a4;
        case 0x3dc8a8u: goto label_3dc8a8;
        case 0x3dc8acu: goto label_3dc8ac;
        case 0x3dc8b0u: goto label_3dc8b0;
        case 0x3dc8b4u: goto label_3dc8b4;
        case 0x3dc8b8u: goto label_3dc8b8;
        case 0x3dc8bcu: goto label_3dc8bc;
        case 0x3dc8c0u: goto label_3dc8c0;
        case 0x3dc8c4u: goto label_3dc8c4;
        case 0x3dc8c8u: goto label_3dc8c8;
        case 0x3dc8ccu: goto label_3dc8cc;
        case 0x3dc8d0u: goto label_3dc8d0;
        case 0x3dc8d4u: goto label_3dc8d4;
        case 0x3dc8d8u: goto label_3dc8d8;
        case 0x3dc8dcu: goto label_3dc8dc;
        case 0x3dc8e0u: goto label_3dc8e0;
        case 0x3dc8e4u: goto label_3dc8e4;
        case 0x3dc8e8u: goto label_3dc8e8;
        case 0x3dc8ecu: goto label_3dc8ec;
        case 0x3dc8f0u: goto label_3dc8f0;
        case 0x3dc8f4u: goto label_3dc8f4;
        case 0x3dc8f8u: goto label_3dc8f8;
        case 0x3dc8fcu: goto label_3dc8fc;
        case 0x3dc900u: goto label_3dc900;
        case 0x3dc904u: goto label_3dc904;
        case 0x3dc908u: goto label_3dc908;
        case 0x3dc90cu: goto label_3dc90c;
        case 0x3dc910u: goto label_3dc910;
        case 0x3dc914u: goto label_3dc914;
        case 0x3dc918u: goto label_3dc918;
        case 0x3dc91cu: goto label_3dc91c;
        case 0x3dc920u: goto label_3dc920;
        case 0x3dc924u: goto label_3dc924;
        case 0x3dc928u: goto label_3dc928;
        case 0x3dc92cu: goto label_3dc92c;
        case 0x3dc930u: goto label_3dc930;
        case 0x3dc934u: goto label_3dc934;
        case 0x3dc938u: goto label_3dc938;
        case 0x3dc93cu: goto label_3dc93c;
        case 0x3dc940u: goto label_3dc940;
        case 0x3dc944u: goto label_3dc944;
        case 0x3dc948u: goto label_3dc948;
        case 0x3dc94cu: goto label_3dc94c;
        case 0x3dc950u: goto label_3dc950;
        case 0x3dc954u: goto label_3dc954;
        case 0x3dc958u: goto label_3dc958;
        case 0x3dc95cu: goto label_3dc95c;
        case 0x3dc960u: goto label_3dc960;
        case 0x3dc964u: goto label_3dc964;
        case 0x3dc968u: goto label_3dc968;
        case 0x3dc96cu: goto label_3dc96c;
        case 0x3dc970u: goto label_3dc970;
        case 0x3dc974u: goto label_3dc974;
        case 0x3dc978u: goto label_3dc978;
        case 0x3dc97cu: goto label_3dc97c;
        case 0x3dc980u: goto label_3dc980;
        case 0x3dc984u: goto label_3dc984;
        case 0x3dc988u: goto label_3dc988;
        case 0x3dc98cu: goto label_3dc98c;
        case 0x3dc990u: goto label_3dc990;
        case 0x3dc994u: goto label_3dc994;
        case 0x3dc998u: goto label_3dc998;
        case 0x3dc99cu: goto label_3dc99c;
        case 0x3dc9a0u: goto label_3dc9a0;
        case 0x3dc9a4u: goto label_3dc9a4;
        case 0x3dc9a8u: goto label_3dc9a8;
        case 0x3dc9acu: goto label_3dc9ac;
        case 0x3dc9b0u: goto label_3dc9b0;
        case 0x3dc9b4u: goto label_3dc9b4;
        case 0x3dc9b8u: goto label_3dc9b8;
        case 0x3dc9bcu: goto label_3dc9bc;
        case 0x3dc9c0u: goto label_3dc9c0;
        case 0x3dc9c4u: goto label_3dc9c4;
        case 0x3dc9c8u: goto label_3dc9c8;
        case 0x3dc9ccu: goto label_3dc9cc;
        case 0x3dc9d0u: goto label_3dc9d0;
        case 0x3dc9d4u: goto label_3dc9d4;
        case 0x3dc9d8u: goto label_3dc9d8;
        case 0x3dc9dcu: goto label_3dc9dc;
        case 0x3dc9e0u: goto label_3dc9e0;
        case 0x3dc9e4u: goto label_3dc9e4;
        case 0x3dc9e8u: goto label_3dc9e8;
        case 0x3dc9ecu: goto label_3dc9ec;
        case 0x3dc9f0u: goto label_3dc9f0;
        case 0x3dc9f4u: goto label_3dc9f4;
        case 0x3dc9f8u: goto label_3dc9f8;
        case 0x3dc9fcu: goto label_3dc9fc;
        case 0x3dca00u: goto label_3dca00;
        case 0x3dca04u: goto label_3dca04;
        case 0x3dca08u: goto label_3dca08;
        case 0x3dca0cu: goto label_3dca0c;
        case 0x3dca10u: goto label_3dca10;
        case 0x3dca14u: goto label_3dca14;
        case 0x3dca18u: goto label_3dca18;
        case 0x3dca1cu: goto label_3dca1c;
        case 0x3dca20u: goto label_3dca20;
        case 0x3dca24u: goto label_3dca24;
        case 0x3dca28u: goto label_3dca28;
        case 0x3dca2cu: goto label_3dca2c;
        case 0x3dca30u: goto label_3dca30;
        case 0x3dca34u: goto label_3dca34;
        case 0x3dca38u: goto label_3dca38;
        case 0x3dca3cu: goto label_3dca3c;
        case 0x3dca40u: goto label_3dca40;
        case 0x3dca44u: goto label_3dca44;
        case 0x3dca48u: goto label_3dca48;
        case 0x3dca4cu: goto label_3dca4c;
        case 0x3dca50u: goto label_3dca50;
        case 0x3dca54u: goto label_3dca54;
        case 0x3dca58u: goto label_3dca58;
        case 0x3dca5cu: goto label_3dca5c;
        case 0x3dca60u: goto label_3dca60;
        case 0x3dca64u: goto label_3dca64;
        case 0x3dca68u: goto label_3dca68;
        case 0x3dca6cu: goto label_3dca6c;
        case 0x3dca70u: goto label_3dca70;
        case 0x3dca74u: goto label_3dca74;
        case 0x3dca78u: goto label_3dca78;
        case 0x3dca7cu: goto label_3dca7c;
        case 0x3dca80u: goto label_3dca80;
        case 0x3dca84u: goto label_3dca84;
        case 0x3dca88u: goto label_3dca88;
        case 0x3dca8cu: goto label_3dca8c;
        case 0x3dca90u: goto label_3dca90;
        case 0x3dca94u: goto label_3dca94;
        case 0x3dca98u: goto label_3dca98;
        case 0x3dca9cu: goto label_3dca9c;
        case 0x3dcaa0u: goto label_3dcaa0;
        case 0x3dcaa4u: goto label_3dcaa4;
        case 0x3dcaa8u: goto label_3dcaa8;
        case 0x3dcaacu: goto label_3dcaac;
        case 0x3dcab0u: goto label_3dcab0;
        case 0x3dcab4u: goto label_3dcab4;
        case 0x3dcab8u: goto label_3dcab8;
        case 0x3dcabcu: goto label_3dcabc;
        case 0x3dcac0u: goto label_3dcac0;
        case 0x3dcac4u: goto label_3dcac4;
        case 0x3dcac8u: goto label_3dcac8;
        case 0x3dcaccu: goto label_3dcacc;
        case 0x3dcad0u: goto label_3dcad0;
        case 0x3dcad4u: goto label_3dcad4;
        case 0x3dcad8u: goto label_3dcad8;
        case 0x3dcadcu: goto label_3dcadc;
        case 0x3dcae0u: goto label_3dcae0;
        case 0x3dcae4u: goto label_3dcae4;
        case 0x3dcae8u: goto label_3dcae8;
        case 0x3dcaecu: goto label_3dcaec;
        case 0x3dcaf0u: goto label_3dcaf0;
        case 0x3dcaf4u: goto label_3dcaf4;
        case 0x3dcaf8u: goto label_3dcaf8;
        case 0x3dcafcu: goto label_3dcafc;
        case 0x3dcb00u: goto label_3dcb00;
        case 0x3dcb04u: goto label_3dcb04;
        case 0x3dcb08u: goto label_3dcb08;
        case 0x3dcb0cu: goto label_3dcb0c;
        case 0x3dcb10u: goto label_3dcb10;
        case 0x3dcb14u: goto label_3dcb14;
        case 0x3dcb18u: goto label_3dcb18;
        case 0x3dcb1cu: goto label_3dcb1c;
        case 0x3dcb20u: goto label_3dcb20;
        case 0x3dcb24u: goto label_3dcb24;
        case 0x3dcb28u: goto label_3dcb28;
        case 0x3dcb2cu: goto label_3dcb2c;
        case 0x3dcb30u: goto label_3dcb30;
        case 0x3dcb34u: goto label_3dcb34;
        case 0x3dcb38u: goto label_3dcb38;
        case 0x3dcb3cu: goto label_3dcb3c;
        case 0x3dcb40u: goto label_3dcb40;
        case 0x3dcb44u: goto label_3dcb44;
        case 0x3dcb48u: goto label_3dcb48;
        case 0x3dcb4cu: goto label_3dcb4c;
        case 0x3dcb50u: goto label_3dcb50;
        case 0x3dcb54u: goto label_3dcb54;
        case 0x3dcb58u: goto label_3dcb58;
        case 0x3dcb5cu: goto label_3dcb5c;
        case 0x3dcb60u: goto label_3dcb60;
        case 0x3dcb64u: goto label_3dcb64;
        case 0x3dcb68u: goto label_3dcb68;
        case 0x3dcb6cu: goto label_3dcb6c;
        case 0x3dcb70u: goto label_3dcb70;
        case 0x3dcb74u: goto label_3dcb74;
        case 0x3dcb78u: goto label_3dcb78;
        case 0x3dcb7cu: goto label_3dcb7c;
        case 0x3dcb80u: goto label_3dcb80;
        case 0x3dcb84u: goto label_3dcb84;
        case 0x3dcb88u: goto label_3dcb88;
        case 0x3dcb8cu: goto label_3dcb8c;
        case 0x3dcb90u: goto label_3dcb90;
        case 0x3dcb94u: goto label_3dcb94;
        case 0x3dcb98u: goto label_3dcb98;
        case 0x3dcb9cu: goto label_3dcb9c;
        case 0x3dcba0u: goto label_3dcba0;
        case 0x3dcba4u: goto label_3dcba4;
        case 0x3dcba8u: goto label_3dcba8;
        case 0x3dcbacu: goto label_3dcbac;
        case 0x3dcbb0u: goto label_3dcbb0;
        case 0x3dcbb4u: goto label_3dcbb4;
        case 0x3dcbb8u: goto label_3dcbb8;
        case 0x3dcbbcu: goto label_3dcbbc;
        case 0x3dcbc0u: goto label_3dcbc0;
        case 0x3dcbc4u: goto label_3dcbc4;
        case 0x3dcbc8u: goto label_3dcbc8;
        case 0x3dcbccu: goto label_3dcbcc;
        case 0x3dcbd0u: goto label_3dcbd0;
        case 0x3dcbd4u: goto label_3dcbd4;
        case 0x3dcbd8u: goto label_3dcbd8;
        case 0x3dcbdcu: goto label_3dcbdc;
        case 0x3dcbe0u: goto label_3dcbe0;
        case 0x3dcbe4u: goto label_3dcbe4;
        case 0x3dcbe8u: goto label_3dcbe8;
        case 0x3dcbecu: goto label_3dcbec;
        case 0x3dcbf0u: goto label_3dcbf0;
        case 0x3dcbf4u: goto label_3dcbf4;
        case 0x3dcbf8u: goto label_3dcbf8;
        case 0x3dcbfcu: goto label_3dcbfc;
        case 0x3dcc00u: goto label_3dcc00;
        case 0x3dcc04u: goto label_3dcc04;
        case 0x3dcc08u: goto label_3dcc08;
        case 0x3dcc0cu: goto label_3dcc0c;
        case 0x3dcc10u: goto label_3dcc10;
        case 0x3dcc14u: goto label_3dcc14;
        case 0x3dcc18u: goto label_3dcc18;
        case 0x3dcc1cu: goto label_3dcc1c;
        case 0x3dcc20u: goto label_3dcc20;
        case 0x3dcc24u: goto label_3dcc24;
        case 0x3dcc28u: goto label_3dcc28;
        case 0x3dcc2cu: goto label_3dcc2c;
        case 0x3dcc30u: goto label_3dcc30;
        case 0x3dcc34u: goto label_3dcc34;
        case 0x3dcc38u: goto label_3dcc38;
        case 0x3dcc3cu: goto label_3dcc3c;
        case 0x3dcc40u: goto label_3dcc40;
        case 0x3dcc44u: goto label_3dcc44;
        case 0x3dcc48u: goto label_3dcc48;
        case 0x3dcc4cu: goto label_3dcc4c;
        case 0x3dcc50u: goto label_3dcc50;
        case 0x3dcc54u: goto label_3dcc54;
        case 0x3dcc58u: goto label_3dcc58;
        case 0x3dcc5cu: goto label_3dcc5c;
        case 0x3dcc60u: goto label_3dcc60;
        case 0x3dcc64u: goto label_3dcc64;
        case 0x3dcc68u: goto label_3dcc68;
        case 0x3dcc6cu: goto label_3dcc6c;
        case 0x3dcc70u: goto label_3dcc70;
        case 0x3dcc74u: goto label_3dcc74;
        case 0x3dcc78u: goto label_3dcc78;
        case 0x3dcc7cu: goto label_3dcc7c;
        case 0x3dcc80u: goto label_3dcc80;
        case 0x3dcc84u: goto label_3dcc84;
        case 0x3dcc88u: goto label_3dcc88;
        case 0x3dcc8cu: goto label_3dcc8c;
        case 0x3dcc90u: goto label_3dcc90;
        case 0x3dcc94u: goto label_3dcc94;
        case 0x3dcc98u: goto label_3dcc98;
        case 0x3dcc9cu: goto label_3dcc9c;
        case 0x3dcca0u: goto label_3dcca0;
        case 0x3dcca4u: goto label_3dcca4;
        case 0x3dcca8u: goto label_3dcca8;
        case 0x3dccacu: goto label_3dccac;
        case 0x3dccb0u: goto label_3dccb0;
        case 0x3dccb4u: goto label_3dccb4;
        case 0x3dccb8u: goto label_3dccb8;
        case 0x3dccbcu: goto label_3dccbc;
        case 0x3dccc0u: goto label_3dccc0;
        case 0x3dccc4u: goto label_3dccc4;
        case 0x3dccc8u: goto label_3dccc8;
        case 0x3dccccu: goto label_3dcccc;
        case 0x3dccd0u: goto label_3dccd0;
        case 0x3dccd4u: goto label_3dccd4;
        case 0x3dccd8u: goto label_3dccd8;
        case 0x3dccdcu: goto label_3dccdc;
        case 0x3dcce0u: goto label_3dcce0;
        case 0x3dcce4u: goto label_3dcce4;
        case 0x3dcce8u: goto label_3dcce8;
        case 0x3dccecu: goto label_3dccec;
        case 0x3dccf0u: goto label_3dccf0;
        case 0x3dccf4u: goto label_3dccf4;
        case 0x3dccf8u: goto label_3dccf8;
        case 0x3dccfcu: goto label_3dccfc;
        case 0x3dcd00u: goto label_3dcd00;
        case 0x3dcd04u: goto label_3dcd04;
        case 0x3dcd08u: goto label_3dcd08;
        case 0x3dcd0cu: goto label_3dcd0c;
        case 0x3dcd10u: goto label_3dcd10;
        case 0x3dcd14u: goto label_3dcd14;
        case 0x3dcd18u: goto label_3dcd18;
        case 0x3dcd1cu: goto label_3dcd1c;
        case 0x3dcd20u: goto label_3dcd20;
        case 0x3dcd24u: goto label_3dcd24;
        case 0x3dcd28u: goto label_3dcd28;
        case 0x3dcd2cu: goto label_3dcd2c;
        case 0x3dcd30u: goto label_3dcd30;
        case 0x3dcd34u: goto label_3dcd34;
        case 0x3dcd38u: goto label_3dcd38;
        case 0x3dcd3cu: goto label_3dcd3c;
        case 0x3dcd40u: goto label_3dcd40;
        case 0x3dcd44u: goto label_3dcd44;
        case 0x3dcd48u: goto label_3dcd48;
        case 0x3dcd4cu: goto label_3dcd4c;
        case 0x3dcd50u: goto label_3dcd50;
        case 0x3dcd54u: goto label_3dcd54;
        case 0x3dcd58u: goto label_3dcd58;
        case 0x3dcd5cu: goto label_3dcd5c;
        case 0x3dcd60u: goto label_3dcd60;
        case 0x3dcd64u: goto label_3dcd64;
        case 0x3dcd68u: goto label_3dcd68;
        case 0x3dcd6cu: goto label_3dcd6c;
        case 0x3dcd70u: goto label_3dcd70;
        case 0x3dcd74u: goto label_3dcd74;
        case 0x3dcd78u: goto label_3dcd78;
        case 0x3dcd7cu: goto label_3dcd7c;
        case 0x3dcd80u: goto label_3dcd80;
        case 0x3dcd84u: goto label_3dcd84;
        case 0x3dcd88u: goto label_3dcd88;
        case 0x3dcd8cu: goto label_3dcd8c;
        case 0x3dcd90u: goto label_3dcd90;
        case 0x3dcd94u: goto label_3dcd94;
        case 0x3dcd98u: goto label_3dcd98;
        case 0x3dcd9cu: goto label_3dcd9c;
        default: break;
    }

    ctx->pc = 0x3dc670u;

label_3dc670:
    // 0x3dc670: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3dc670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3dc674:
    // 0x3dc674: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x3dc674u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3dc678:
    // 0x3dc678: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3dc678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3dc67c:
    // 0x3dc67c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3dc67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3dc680:
    // 0x3dc680: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3dc680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3dc684:
    // 0x3dc684: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3dc684u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dc688:
    // 0x3dc688: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3dc688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3dc68c:
    // 0x3dc68c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3dc68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3dc690:
    // 0x3dc690: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3dc690u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3dc694:
    // 0x3dc694: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3dc694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3dc698:
    // 0x3dc698: 0xc10ca68  jal         func_4329A0
label_3dc69c:
    if (ctx->pc == 0x3DC69Cu) {
        ctx->pc = 0x3DC69Cu;
            // 0x3dc69c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x3DC6A0u;
        goto label_3dc6a0;
    }
    ctx->pc = 0x3DC698u;
    SET_GPR_U32(ctx, 31, 0x3DC6A0u);
    ctx->pc = 0x3DC69Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC698u;
            // 0x3dc69c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC6A0u; }
        if (ctx->pc != 0x3DC6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC6A0u; }
        if (ctx->pc != 0x3DC6A0u) { return; }
    }
    ctx->pc = 0x3DC6A0u;
label_3dc6a0:
    // 0x3dc6a0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3dc6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3dc6a4:
    // 0x3dc6a4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3dc6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3dc6a8:
    // 0x3dc6a8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x3dc6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_3dc6ac:
    // 0x3dc6ac: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x3dc6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_3dc6b0:
    // 0x3dc6b0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x3dc6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_3dc6b4:
    // 0x3dc6b4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x3dc6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_3dc6b8:
    // 0x3dc6b8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x3dc6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_3dc6bc:
    // 0x3dc6bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3dc6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3dc6c0:
    // 0x3dc6c0: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x3dc6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_3dc6c4:
    // 0x3dc6c4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3dc6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3dc6c8:
    // 0x3dc6c8: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x3dc6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_3dc6cc:
    // 0x3dc6cc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3dc6ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3dc6d0:
    // 0x3dc6d0: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x3dc6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_3dc6d4:
    // 0x3dc6d4: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x3dc6d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_3dc6d8:
    // 0x3dc6d8: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x3dc6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_3dc6dc:
    // 0x3dc6dc: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x3dc6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_3dc6e0:
    // 0x3dc6e0: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x3dc6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_3dc6e4:
    // 0x3dc6e4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x3dc6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_3dc6e8:
    // 0x3dc6e8: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x3dc6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3dc6ec:
    // 0x3dc6ec: 0xc0582cc  jal         func_160B30
label_3dc6f0:
    if (ctx->pc == 0x3DC6F0u) {
        ctx->pc = 0x3DC6F0u;
            // 0x3dc6f0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x3DC6F4u;
        goto label_3dc6f4;
    }
    ctx->pc = 0x3DC6ECu;
    SET_GPR_U32(ctx, 31, 0x3DC6F4u);
    ctx->pc = 0x3DC6F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC6ECu;
            // 0x3dc6f0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC6F4u; }
        if (ctx->pc != 0x3DC6F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC6F4u; }
        if (ctx->pc != 0x3DC6F4u) { return; }
    }
    ctx->pc = 0x3DC6F4u;
label_3dc6f4:
    // 0x3dc6f4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3dc6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3dc6f8:
    // 0x3dc6f8: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x3dc6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_3dc6fc:
    // 0x3dc6fc: 0x24639978  addiu       $v1, $v1, -0x6688
    ctx->pc = 0x3dc6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941048));
label_3dc700:
    // 0x3dc700: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x3dc700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_3dc704:
    // 0x3dc704: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x3dc704u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_3dc708:
    // 0x3dc708: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3dc708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3dc70c:
    // 0x3dc70c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3dc70cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3dc710:
    // 0x3dc710: 0xac446eb8  sw          $a0, 0x6EB8($v0)
    ctx->pc = 0x3dc710u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28344), GPR_U32(ctx, 4));
label_3dc714:
    // 0x3dc714: 0x24639990  addiu       $v1, $v1, -0x6670
    ctx->pc = 0x3dc714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941072));
label_3dc718:
    // 0x3dc718: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3dc718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3dc71c:
    // 0x3dc71c: 0x244299c8  addiu       $v0, $v0, -0x6638
    ctx->pc = 0x3dc71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941128));
label_3dc720:
    // 0x3dc720: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x3dc720u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_3dc724:
    // 0x3dc724: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x3dc724u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_3dc728:
    // 0x3dc728: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x3dc728u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_3dc72c:
    // 0x3dc72c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x3dc72cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_3dc730:
    // 0x3dc730: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x3dc730u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_3dc734:
    // 0x3dc734: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x3dc734u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_3dc738:
    // 0x3dc738: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x3dc738u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_3dc73c:
    // 0x3dc73c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x3dc73cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_3dc740:
    // 0x3dc740: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x3dc740u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_3dc744:
    // 0x3dc744: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x3dc744u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_3dc748:
    // 0x3dc748: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x3dc748u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_3dc74c:
    // 0x3dc74c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x3dc74cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_3dc750:
    // 0x3dc750: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x3dc750u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_3dc754:
    // 0x3dc754: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
label_3dc758:
    if (ctx->pc == 0x3DC758u) {
        ctx->pc = 0x3DC75Cu;
        goto label_3dc75c;
    }
    ctx->pc = 0x3DC754u;
    {
        const bool branch_taken_0x3dc754 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dc754) {
            ctx->pc = 0x3DC7F0u;
            goto label_3dc7f0;
        }
    }
    ctx->pc = 0x3DC75Cu;
label_3dc75c:
    // 0x3dc75c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x3dc75cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_3dc760:
    // 0x3dc760: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3dc760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3dc764:
    // 0x3dc764: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3dc764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3dc768:
    // 0x3dc768: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3dc768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3dc76c:
    // 0x3dc76c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3dc76cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3dc770:
    // 0x3dc770: 0xc040138  jal         func_1004E0
label_3dc774:
    if (ctx->pc == 0x3DC774u) {
        ctx->pc = 0x3DC774u;
            // 0x3dc774: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x3DC778u;
        goto label_3dc778;
    }
    ctx->pc = 0x3DC770u;
    SET_GPR_U32(ctx, 31, 0x3DC778u);
    ctx->pc = 0x3DC774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC770u;
            // 0x3dc774: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC778u; }
        if (ctx->pc != 0x3DC778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC778u; }
        if (ctx->pc != 0x3DC778u) { return; }
    }
    ctx->pc = 0x3DC778u;
label_3dc778:
    // 0x3dc778: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x3dc778u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
label_3dc77c:
    // 0x3dc77c: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x3dc77cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
label_3dc780:
    // 0x3dc780: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3dc780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dc784:
    // 0x3dc784: 0x24a5c810  addiu       $a1, $a1, -0x37F0
    ctx->pc = 0x3dc784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952976));
label_3dc788:
    // 0x3dc788: 0x24c6b640  addiu       $a2, $a2, -0x49C0
    ctx->pc = 0x3dc788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948416));
label_3dc78c:
    // 0x3dc78c: 0x240700d0  addiu       $a3, $zero, 0xD0
    ctx->pc = 0x3dc78cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_3dc790:
    // 0x3dc790: 0xc040840  jal         func_102100
label_3dc794:
    if (ctx->pc == 0x3DC794u) {
        ctx->pc = 0x3DC794u;
            // 0x3dc794: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DC798u;
        goto label_3dc798;
    }
    ctx->pc = 0x3DC790u;
    SET_GPR_U32(ctx, 31, 0x3DC798u);
    ctx->pc = 0x3DC794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC790u;
            // 0x3dc794: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC798u; }
        if (ctx->pc != 0x3DC798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC798u; }
        if (ctx->pc != 0x3DC798u) { return; }
    }
    ctx->pc = 0x3DC798u;
label_3dc798:
    // 0x3dc798: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x3dc798u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_3dc79c:
    // 0x3dc79c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3dc79cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dc7a0:
    // 0x3dc7a0: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x3dc7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_3dc7a4:
    // 0x3dc7a4: 0xc0788fc  jal         func_1E23F0
label_3dc7a8:
    if (ctx->pc == 0x3DC7A8u) {
        ctx->pc = 0x3DC7A8u;
            // 0x3dc7a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DC7ACu;
        goto label_3dc7ac;
    }
    ctx->pc = 0x3DC7A4u;
    SET_GPR_U32(ctx, 31, 0x3DC7ACu);
    ctx->pc = 0x3DC7A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC7A4u;
            // 0x3dc7a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC7ACu; }
        if (ctx->pc != 0x3DC7ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC7ACu; }
        if (ctx->pc != 0x3DC7ACu) { return; }
    }
    ctx->pc = 0x3DC7ACu;
label_3dc7ac:
    // 0x3dc7ac: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x3dc7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_3dc7b0:
    // 0x3dc7b0: 0xc0788fc  jal         func_1E23F0
label_3dc7b4:
    if (ctx->pc == 0x3DC7B4u) {
        ctx->pc = 0x3DC7B4u;
            // 0x3dc7b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DC7B8u;
        goto label_3dc7b8;
    }
    ctx->pc = 0x3DC7B0u;
    SET_GPR_U32(ctx, 31, 0x3DC7B8u);
    ctx->pc = 0x3DC7B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC7B0u;
            // 0x3dc7b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC7B8u; }
        if (ctx->pc != 0x3DC7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC7B8u; }
        if (ctx->pc != 0x3DC7B8u) { return; }
    }
    ctx->pc = 0x3DC7B8u;
label_3dc7b8:
    // 0x3dc7b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3dc7b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dc7bc:
    // 0x3dc7bc: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x3dc7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_3dc7c0:
    // 0x3dc7c0: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x3dc7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_3dc7c4:
    // 0x3dc7c4: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x3dc7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_3dc7c8:
    // 0x3dc7c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3dc7c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3dc7cc:
    // 0x3dc7cc: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x3dc7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_3dc7d0:
    // 0x3dc7d0: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x3dc7d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_3dc7d4:
    // 0x3dc7d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3dc7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3dc7d8:
    // 0x3dc7d8: 0xc0a997c  jal         func_2A65F0
label_3dc7dc:
    if (ctx->pc == 0x3DC7DCu) {
        ctx->pc = 0x3DC7DCu;
            // 0x3dc7dc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x3DC7E0u;
        goto label_3dc7e0;
    }
    ctx->pc = 0x3DC7D8u;
    SET_GPR_U32(ctx, 31, 0x3DC7E0u);
    ctx->pc = 0x3DC7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC7D8u;
            // 0x3dc7dc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC7E0u; }
        if (ctx->pc != 0x3DC7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC7E0u; }
        if (ctx->pc != 0x3DC7E0u) { return; }
    }
    ctx->pc = 0x3DC7E0u;
label_3dc7e0:
    // 0x3dc7e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3dc7e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3dc7e4:
    // 0x3dc7e4: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x3dc7e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3dc7e8:
    // 0x3dc7e8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_3dc7ec:
    if (ctx->pc == 0x3DC7ECu) {
        ctx->pc = 0x3DC7ECu;
            // 0x3dc7ec: 0x265200d0  addiu       $s2, $s2, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
        ctx->pc = 0x3DC7F0u;
        goto label_3dc7f0;
    }
    ctx->pc = 0x3DC7E8u;
    {
        const bool branch_taken_0x3dc7e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DC7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC7E8u;
            // 0x3dc7ec: 0x265200d0  addiu       $s2, $s2, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc7e8) {
            ctx->pc = 0x3DC7BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3dc7bc;
        }
    }
    ctx->pc = 0x3DC7F0u;
label_3dc7f0:
    // 0x3dc7f0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3dc7f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3dc7f4:
    // 0x3dc7f4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3dc7f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3dc7f8:
    // 0x3dc7f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3dc7f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3dc7fc:
    // 0x3dc7fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3dc7fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dc800:
    // 0x3dc800: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3dc800u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3dc804:
    // 0x3dc804: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dc804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3dc808:
    // 0x3dc808: 0x3e00008  jr          $ra
label_3dc80c:
    if (ctx->pc == 0x3DC80Cu) {
        ctx->pc = 0x3DC80Cu;
            // 0x3dc80c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3DC810u;
        goto label_3dc810;
    }
    ctx->pc = 0x3DC808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC808u;
            // 0x3dc80c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DC810u;
label_3dc810:
    // 0x3dc810: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3dc810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3dc814:
    // 0x3dc814: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3dc814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3dc818:
    // 0x3dc818: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3dc818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3dc81c:
    // 0x3dc81c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3dc81cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3dc820:
    // 0x3dc820: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3dc820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3dc824:
    // 0x3dc824: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x3dc824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_3dc828:
    // 0x3dc828: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3dc828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3dc82c:
    // 0x3dc82c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3dc82cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_3dc830:
    // 0x3dc830: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x3dc830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
label_3dc834:
    // 0x3dc834: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3dc834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3dc838:
    // 0x3dc838: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3dc838u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_3dc83c:
    // 0x3dc83c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3dc83cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dc840:
    // 0x3dc840: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x3dc840u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
label_3dc844:
    // 0x3dc844: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3dc844u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3dc848:
    // 0x3dc848: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x3dc848u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
label_3dc84c:
    // 0x3dc84c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x3dc84cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_3dc850:
    // 0x3dc850: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x3dc850u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
label_3dc854:
    // 0x3dc854: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x3dc854u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
label_3dc858:
    // 0x3dc858: 0xc04cbd8  jal         func_132F60
label_3dc85c:
    if (ctx->pc == 0x3DC85Cu) {
        ctx->pc = 0x3DC85Cu;
            // 0x3dc85c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x3DC860u;
        goto label_3dc860;
    }
    ctx->pc = 0x3DC858u;
    SET_GPR_U32(ctx, 31, 0x3DC860u);
    ctx->pc = 0x3DC85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC858u;
            // 0x3dc85c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC860u; }
        if (ctx->pc != 0x3DC860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC860u; }
        if (ctx->pc != 0x3DC860u) { return; }
    }
    ctx->pc = 0x3DC860u;
label_3dc860:
    // 0x3dc860: 0xc04c968  jal         func_1325A0
label_3dc864:
    if (ctx->pc == 0x3DC864u) {
        ctx->pc = 0x3DC864u;
            // 0x3dc864: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x3DC868u;
        goto label_3dc868;
    }
    ctx->pc = 0x3DC860u;
    SET_GPR_U32(ctx, 31, 0x3DC868u);
    ctx->pc = 0x3DC864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC860u;
            // 0x3dc864: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC868u; }
        if (ctx->pc != 0x3DC868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC868u; }
        if (ctx->pc != 0x3DC868u) { return; }
    }
    ctx->pc = 0x3DC868u;
label_3dc868:
    // 0x3dc868: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3dc868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3dc86c:
    // 0x3dc86c: 0x3c0a0064  lui         $t2, 0x64
    ctx->pc = 0x3dc86cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)100 << 16));
label_3dc870:
    // 0x3dc870: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3dc870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3dc874:
    // 0x3dc874: 0x3c09006a  lui         $t1, 0x6A
    ctx->pc = 0x3dc874u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)106 << 16));
label_3dc878:
    // 0x3dc878: 0x3c08006a  lui         $t0, 0x6A
    ctx->pc = 0x3dc878u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)106 << 16));
label_3dc87c:
    // 0x3dc87c: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x3dc87cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
label_3dc880:
    // 0x3dc880: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x3dc880u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
label_3dc884:
    // 0x3dc884: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x3dc884u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_3dc888:
    // 0x3dc888: 0x8c4b0788  lw          $t3, 0x788($v0)
    ctx->pc = 0x3dc888u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
label_3dc88c:
    // 0x3dc88c: 0x254ac560  addiu       $t2, $t2, -0x3AA0
    ctx->pc = 0x3dc88cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294952288));
label_3dc890:
    // 0x3dc890: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x3dc890u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_3dc894:
    // 0x3dc894: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3dc894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3dc898:
    // 0x3dc898: 0x25292660  addiu       $t1, $t1, 0x2660
    ctx->pc = 0x3dc898u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 9824));
label_3dc89c:
    // 0x3dc89c: 0x25082670  addiu       $t0, $t0, 0x2670
    ctx->pc = 0x3dc89cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9840));
label_3dc8a0:
    // 0x3dc8a0: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x3dc8a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_3dc8a4:
    // 0x3dc8a4: 0x24e726b0  addiu       $a3, $a3, 0x26B0
    ctx->pc = 0x3dc8a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9904));
label_3dc8a8:
    // 0x3dc8a8: 0x914a0000  lbu         $t2, 0x0($t2)
    ctx->pc = 0x3dc8a8u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_3dc8ac:
    // 0x3dc8ac: 0x24c69a30  addiu       $a2, $a2, -0x65D0
    ctx->pc = 0x3dc8acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941232));
label_3dc8b0:
    // 0x3dc8b0: 0x24a59a70  addiu       $a1, $a1, -0x6590
    ctx->pc = 0x3dc8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941296));
label_3dc8b4:
    // 0x3dc8b4: 0x24842428  addiu       $a0, $a0, 0x2428
    ctx->pc = 0x3dc8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9256));
label_3dc8b8:
    // 0x3dc8b8: 0x24639968  addiu       $v1, $v1, -0x6698
    ctx->pc = 0x3dc8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941032));
label_3dc8bc:
    // 0x3dc8bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3dc8bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dc8c0:
    // 0x3dc8c0: 0xa20a004d  sb          $t2, 0x4D($s0)
    ctx->pc = 0x3dc8c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 10));
label_3dc8c4:
    // 0x3dc8c4: 0xae090054  sw          $t1, 0x54($s0)
    ctx->pc = 0x3dc8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 9));
label_3dc8c8:
    // 0x3dc8c8: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x3dc8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_3dc8cc:
    // 0x3dc8cc: 0xae080000  sw          $t0, 0x0($s0)
    ctx->pc = 0x3dc8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
label_3dc8d0:
    // 0x3dc8d0: 0xae070054  sw          $a3, 0x54($s0)
    ctx->pc = 0x3dc8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 7));
label_3dc8d4:
    // 0x3dc8d4: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x3dc8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
label_3dc8d8:
    // 0x3dc8d8: 0xae050054  sw          $a1, 0x54($s0)
    ctx->pc = 0x3dc8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 5));
label_3dc8dc:
    // 0x3dc8dc: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x3dc8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_3dc8e0:
    // 0x3dc8e0: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x3dc8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
label_3dc8e4:
    // 0x3dc8e4: 0xae0400a4  sw          $a0, 0xA4($s0)
    ctx->pc = 0x3dc8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 4));
label_3dc8e8:
    // 0x3dc8e8: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x3dc8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_3dc8ec:
    // 0x3dc8ec: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x3dc8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_3dc8f0:
    // 0x3dc8f0: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x3dc8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
label_3dc8f4:
    // 0x3dc8f4: 0xae0300a4  sw          $v1, 0xA4($s0)
    ctx->pc = 0x3dc8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
label_3dc8f8:
    // 0x3dc8f8: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x3dc8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_3dc8fc:
    // 0x3dc8fc: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x3dc8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
label_3dc900:
    // 0x3dc900: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x3dc900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
label_3dc904:
    // 0x3dc904: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x3dc904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
label_3dc908:
    // 0x3dc908: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3dc908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3dc90c:
    // 0x3dc90c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dc90cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3dc910:
    // 0x3dc910: 0x3e00008  jr          $ra
label_3dc914:
    if (ctx->pc == 0x3DC914u) {
        ctx->pc = 0x3DC914u;
            // 0x3dc914: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3DC918u;
        goto label_3dc918;
    }
    ctx->pc = 0x3DC910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC910u;
            // 0x3dc914: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DC918u;
label_3dc918:
    // 0x3dc918: 0x0  nop
    ctx->pc = 0x3dc918u;
    // NOP
label_3dc91c:
    // 0x3dc91c: 0x0  nop
    ctx->pc = 0x3dc91cu;
    // NOP
label_3dc920:
    // 0x3dc920: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3dc920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3dc924:
    // 0x3dc924: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3dc924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3dc928:
    // 0x3dc928: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3dc928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3dc92c:
    // 0x3dc92c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3dc92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3dc930:
    // 0x3dc930: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3dc930u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dc934:
    // 0x3dc934: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_3dc938:
    if (ctx->pc == 0x3DC938u) {
        ctx->pc = 0x3DC938u;
            // 0x3dc938: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DC93Cu;
        goto label_3dc93c;
    }
    ctx->pc = 0x3DC934u;
    {
        const bool branch_taken_0x3dc934 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC934u;
            // 0x3dc938: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc934) {
            ctx->pc = 0x3DC984u;
            goto label_3dc984;
        }
    }
    ctx->pc = 0x3DC93Cu;
label_3dc93c:
    // 0x3dc93c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3dc93cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3dc940:
    // 0x3dc940: 0x24429968  addiu       $v0, $v0, -0x6698
    ctx->pc = 0x3dc940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941032));
label_3dc944:
    // 0x3dc944: 0xc0f7404  jal         func_3DD010
label_3dc948:
    if (ctx->pc == 0x3DC948u) {
        ctx->pc = 0x3DC948u;
            // 0x3dc948: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3DC94Cu;
        goto label_3dc94c;
    }
    ctx->pc = 0x3DC944u;
    SET_GPR_U32(ctx, 31, 0x3DC94Cu);
    ctx->pc = 0x3DC948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC944u;
            // 0x3dc948: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DD010u;
    if (runtime->hasFunction(0x3DD010u)) {
        auto targetFn = runtime->lookupFunction(0x3DD010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC94Cu; }
        if (ctx->pc != 0x3DC94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DD010_0x3dd010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC94Cu; }
        if (ctx->pc != 0x3DC94Cu) { return; }
    }
    ctx->pc = 0x3DC94Cu;
label_3dc94c:
    // 0x3dc94c: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
label_3dc950:
    if (ctx->pc == 0x3DC950u) {
        ctx->pc = 0x3DC950u;
            // 0x3dc950: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x3DC954u;
        goto label_3dc954;
    }
    ctx->pc = 0x3DC94Cu;
    {
        const bool branch_taken_0x3dc94c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dc94c) {
            ctx->pc = 0x3DC950u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC94Cu;
            // 0x3dc950: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DC970u;
            goto label_3dc970;
        }
    }
    ctx->pc = 0x3DC954u;
label_3dc954:
    // 0x3dc954: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3dc954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3dc958:
    // 0x3dc958: 0x24422428  addiu       $v0, $v0, 0x2428
    ctx->pc = 0x3dc958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9256));
label_3dc95c:
    // 0x3dc95c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3dc95cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3dc960:
    // 0x3dc960: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x3dc960u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_3dc964:
    // 0x3dc964: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3dc964u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_3dc968:
    // 0x3dc968: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x3dc968u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_3dc96c:
    // 0x3dc96c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3dc96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3dc970:
    // 0x3dc970: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3dc970u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3dc974:
    // 0x3dc974: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3dc978:
    if (ctx->pc == 0x3DC978u) {
        ctx->pc = 0x3DC978u;
            // 0x3dc978: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DC97Cu;
        goto label_3dc97c;
    }
    ctx->pc = 0x3DC974u;
    {
        const bool branch_taken_0x3dc974 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3dc974) {
            ctx->pc = 0x3DC978u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC974u;
            // 0x3dc978: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DC988u;
            goto label_3dc988;
        }
    }
    ctx->pc = 0x3DC97Cu;
label_3dc97c:
    // 0x3dc97c: 0xc0400a8  jal         func_1002A0
label_3dc980:
    if (ctx->pc == 0x3DC980u) {
        ctx->pc = 0x3DC980u;
            // 0x3dc980: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DC984u;
        goto label_3dc984;
    }
    ctx->pc = 0x3DC97Cu;
    SET_GPR_U32(ctx, 31, 0x3DC984u);
    ctx->pc = 0x3DC980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC97Cu;
            // 0x3dc980: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC984u; }
        if (ctx->pc != 0x3DC984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC984u; }
        if (ctx->pc != 0x3DC984u) { return; }
    }
    ctx->pc = 0x3DC984u;
label_3dc984:
    // 0x3dc984: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3dc984u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3dc988:
    // 0x3dc988: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3dc988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3dc98c:
    // 0x3dc98c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3dc98cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3dc990:
    // 0x3dc990: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dc990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3dc994:
    // 0x3dc994: 0x3e00008  jr          $ra
label_3dc998:
    if (ctx->pc == 0x3DC998u) {
        ctx->pc = 0x3DC998u;
            // 0x3dc998: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3DC99Cu;
        goto label_3dc99c;
    }
    ctx->pc = 0x3DC994u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC994u;
            // 0x3dc998: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DC99Cu;
label_3dc99c:
    // 0x3dc99c: 0x0  nop
    ctx->pc = 0x3dc99cu;
    // NOP
label_3dc9a0:
    // 0x3dc9a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3dc9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3dc9a4:
    // 0x3dc9a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3dc9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3dc9a8:
    // 0x3dc9a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3dc9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3dc9ac:
    // 0x3dc9ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3dc9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3dc9b0:
    // 0x3dc9b0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3dc9b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dc9b4:
    // 0x3dc9b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3dc9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3dc9b8:
    // 0x3dc9b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3dc9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3dc9bc:
    // 0x3dc9bc: 0x8cc50db0  lw          $a1, 0xDB0($a2)
    ctx->pc = 0x3dc9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3504)));
label_3dc9c0:
    // 0x3dc9c0: 0x8cd10d98  lw          $s1, 0xD98($a2)
    ctx->pc = 0x3dc9c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3480)));
label_3dc9c4:
    // 0x3dc9c4: 0x28a10009  slti        $at, $a1, 0x9
    ctx->pc = 0x3dc9c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
label_3dc9c8:
    // 0x3dc9c8: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_3dc9cc:
    if (ctx->pc == 0x3DC9CCu) {
        ctx->pc = 0x3DC9CCu;
            // 0x3dc9cc: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DC9D0u;
        goto label_3dc9d0;
    }
    ctx->pc = 0x3DC9C8u;
    {
        const bool branch_taken_0x3dc9c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DC9CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC9C8u;
            // 0x3dc9cc: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc9c8) {
            ctx->pc = 0x3DC9DCu;
            goto label_3dc9dc;
        }
    }
    ctx->pc = 0x3DC9D0u;
label_3dc9d0:
    // 0x3dc9d0: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x3dc9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_3dc9d4:
    // 0x3dc9d4: 0x54a30064  bnel        $a1, $v1, . + 4 + (0x64 << 2)
label_3dc9d8:
    if (ctx->pc == 0x3DC9D8u) {
        ctx->pc = 0x3DC9D8u;
            // 0x3dc9d8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x3DC9DCu;
        goto label_3dc9dc;
    }
    ctx->pc = 0x3DC9D4u;
    {
        const bool branch_taken_0x3dc9d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x3dc9d4) {
            ctx->pc = 0x3DC9D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC9D4u;
            // 0x3dc9d8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DCB68u;
            goto label_3dcb68;
        }
    }
    ctx->pc = 0x3DC9DCu;
label_3dc9dc:
    // 0x3dc9dc: 0x8e430da0  lw          $v1, 0xDA0($s2)
    ctx->pc = 0x3dc9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3488)));
label_3dc9e0:
    // 0x3dc9e0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3dc9e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3dc9e4:
    // 0x3dc9e4: 0x1060005f  beqz        $v1, . + 4 + (0x5F << 2)
label_3dc9e8:
    if (ctx->pc == 0x3DC9E8u) {
        ctx->pc = 0x3DC9ECu;
        goto label_3dc9ec;
    }
    ctx->pc = 0x3DC9E4u;
    {
        const bool branch_taken_0x3dc9e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dc9e4) {
            ctx->pc = 0x3DCB64u;
            goto label_3dcb64;
        }
    }
    ctx->pc = 0x3DC9ECu;
label_3dc9ec:
    // 0x3dc9ec: 0x8e630080  lw          $v1, 0x80($s3)
    ctx->pc = 0x3dc9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_3dc9f0:
    // 0x3dc9f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3dc9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3dc9f4:
    // 0x3dc9f4: 0x2248004  sllv        $s0, $a0, $s1
    ctx->pc = 0x3dc9f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 17) & 0x1F));
label_3dc9f8:
    // 0x3dc9f8: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x3dc9f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
label_3dc9fc:
    // 0x3dc9fc: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_3dca00:
    if (ctx->pc == 0x3DCA00u) {
        ctx->pc = 0x3DCA00u;
            // 0x3dca00: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->pc = 0x3DCA04u;
        goto label_3dca04;
    }
    ctx->pc = 0x3DC9FCu;
    {
        const bool branch_taken_0x3dc9fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dc9fc) {
            ctx->pc = 0x3DCA00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC9FCu;
            // 0x3dca00: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DCA10u;
            goto label_3dca10;
        }
    }
    ctx->pc = 0x3DCA04u;
label_3dca04:
    // 0x3dca04: 0x10000057  b           . + 4 + (0x57 << 2)
label_3dca08:
    if (ctx->pc == 0x3DCA08u) {
        ctx->pc = 0x3DCA0Cu;
        goto label_3dca0c;
    }
    ctx->pc = 0x3DCA04u;
    {
        const bool branch_taken_0x3dca04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dca04) {
            ctx->pc = 0x3DCB64u;
            goto label_3dcb64;
        }
    }
    ctx->pc = 0x3DCA0Cu;
label_3dca0c:
    // 0x3dca0c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x3dca0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_3dca10:
    // 0x3dca10: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
label_3dca14:
    if (ctx->pc == 0x3DCA14u) {
        ctx->pc = 0x3DCA14u;
            // 0x3dca14: 0xae40118c  sw          $zero, 0x118C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4492), GPR_U32(ctx, 0));
        ctx->pc = 0x3DCA18u;
        goto label_3dca18;
    }
    ctx->pc = 0x3DCA10u;
    {
        const bool branch_taken_0x3dca10 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3dca10) {
            ctx->pc = 0x3DCA14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DCA10u;
            // 0x3dca14: 0xae40118c  sw          $zero, 0x118C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4492), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DCA24u;
            goto label_3dca24;
        }
    }
    ctx->pc = 0x3DCA18u;
label_3dca18:
    // 0x3dca18: 0xc0b6764  jal         func_2D9D90
label_3dca1c:
    if (ctx->pc == 0x3DCA1Cu) {
        ctx->pc = 0x3DCA1Cu;
            // 0x3dca1c: 0x8e440d74  lw          $a0, 0xD74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3444)));
        ctx->pc = 0x3DCA20u;
        goto label_3dca20;
    }
    ctx->pc = 0x3DCA18u;
    SET_GPR_U32(ctx, 31, 0x3DCA20u);
    ctx->pc = 0x3DCA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DCA18u;
            // 0x3dca1c: 0x8e440d74  lw          $a0, 0xD74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3444)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D90u;
    if (runtime->hasFunction(0x2D9D90u)) {
        auto targetFn = runtime->lookupFunction(0x2D9D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCA20u; }
        if (ctx->pc != 0x3DCA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D9D90_0x2d9d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCA20u; }
        if (ctx->pc != 0x3DCA20u) { return; }
    }
    ctx->pc = 0x3DCA20u;
label_3dca20:
    // 0x3dca20: 0xae40118c  sw          $zero, 0x118C($s2)
    ctx->pc = 0x3dca20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4492), GPR_U32(ctx, 0));
label_3dca24:
    // 0x3dca24: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3dca24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3dca28:
    // 0x3dca28: 0x8e660080  lw          $a2, 0x80($s3)
    ctx->pc = 0x3dca28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_3dca2c:
    // 0x3dca2c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x3dca2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_3dca30:
    // 0x3dca30: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x3dca30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_3dca34:
    // 0x3dca34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3dca34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3dca38:
    // 0x3dca38: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x3dca38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_3dca3c:
    // 0x3dca3c: 0x26440320  addiu       $a0, $s2, 0x320
    ctx->pc = 0x3dca3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 800));
label_3dca40:
    // 0x3dca40: 0xd03025  or          $a2, $a2, $s0
    ctx->pc = 0x3dca40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 16));
label_3dca44:
    // 0x3dca44: 0xae660080  sw          $a2, 0x80($s3)
    ctx->pc = 0x3dca44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 6));
label_3dca48:
    // 0x3dca48: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3dca48u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3dca4c:
    // 0x3dca4c: 0xac650084  sw          $a1, 0x84($v1)
    ctx->pc = 0x3dca4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 5));
label_3dca50:
    // 0x3dca50: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x3dca50u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_3dca54:
    // 0x3dca54: 0x8e430d60  lw          $v1, 0xD60($s2)
    ctx->pc = 0x3dca54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
label_3dca58:
    // 0x3dca58: 0xa060001c  sb          $zero, 0x1C($v1)
    ctx->pc = 0x3dca58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 28), (uint8_t)GPR_U32(ctx, 0));
label_3dca5c:
    // 0x3dca5c: 0x8e430d9c  lw          $v1, 0xD9C($s2)
    ctx->pc = 0x3dca5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3484)));
label_3dca60:
    // 0x3dca60: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3dca60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3dca64:
    // 0x3dca64: 0xc04cbd8  jal         func_132F60
label_3dca68:
    if (ctx->pc == 0x3DCA68u) {
        ctx->pc = 0x3DCA68u;
            // 0x3dca68: 0xae420d9c  sw          $v0, 0xD9C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3484), GPR_U32(ctx, 2));
        ctx->pc = 0x3DCA6Cu;
        goto label_3dca6c;
    }
    ctx->pc = 0x3DCA64u;
    SET_GPR_U32(ctx, 31, 0x3DCA6Cu);
    ctx->pc = 0x3DCA68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DCA64u;
            // 0x3dca68: 0xae420d9c  sw          $v0, 0xD9C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3484), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCA6Cu; }
        if (ctx->pc != 0x3DCA6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCA6Cu; }
        if (ctx->pc != 0x3DCA6Cu) { return; }
    }
    ctx->pc = 0x3DCA6Cu;
label_3dca6c:
    // 0x3dca6c: 0xae400de8  sw          $zero, 0xDE8($s2)
    ctx->pc = 0x3dca6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3560), GPR_U32(ctx, 0));
label_3dca70:
    // 0x3dca70: 0x3c02ffdb  lui         $v0, 0xFFDB
    ctx->pc = 0x3dca70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65499 << 16));
label_3dca74:
    // 0x3dca74: 0x8e500d74  lw          $s0, 0xD74($s2)
    ctx->pc = 0x3dca74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3444)));
label_3dca78:
    // 0x3dca78: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x3dca78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3dca7c:
    // 0x3dca7c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x3dca7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3dca80:
    // 0x3dca80: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x3dca80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
label_3dca84:
    // 0x3dca84: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3dca84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3dca88:
    // 0x3dca88: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x3dca88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_3dca8c:
    // 0x3dca8c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x3dca8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_3dca90:
    // 0x3dca90: 0xc0a545c  jal         func_295170
label_3dca94:
    if (ctx->pc == 0x3DCA94u) {
        ctx->pc = 0x3DCA94u;
            // 0x3dca94: 0x628824  and         $s1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x3DCA98u;
        goto label_3dca98;
    }
    ctx->pc = 0x3DCA90u;
    SET_GPR_U32(ctx, 31, 0x3DCA98u);
    ctx->pc = 0x3DCA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DCA90u;
            // 0x3dca94: 0x628824  and         $s1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCA98u; }
        if (ctx->pc != 0x3DCA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCA98u; }
        if (ctx->pc != 0x3DCA98u) { return; }
    }
    ctx->pc = 0x3DCA98u;
label_3dca98:
    // 0x3dca98: 0xac51002c  sw          $s1, 0x2C($v0)
    ctx->pc = 0x3dca98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 17));
label_3dca9c:
    // 0x3dca9c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3dca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3dcaa0:
    // 0x3dcaa0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x3dcaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3dcaa4:
    // 0x3dcaa4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3dcaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3dcaa8:
    // 0x3dcaa8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3dcaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3dcaac:
    // 0x3dcaac: 0xc08bf20  jal         func_22FC80
label_3dcab0:
    if (ctx->pc == 0x3DCAB0u) {
        ctx->pc = 0x3DCAB0u;
            // 0x3dcab0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DCAB4u;
        goto label_3dcab4;
    }
    ctx->pc = 0x3DCAACu;
    SET_GPR_U32(ctx, 31, 0x3DCAB4u);
    ctx->pc = 0x3DCAB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DCAACu;
            // 0x3dcab0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCAB4u; }
        if (ctx->pc != 0x3DCAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCAB4u; }
        if (ctx->pc != 0x3DCAB4u) { return; }
    }
    ctx->pc = 0x3DCAB4u;
label_3dcab4:
    // 0x3dcab4: 0x26650070  addiu       $a1, $s3, 0x70
    ctx->pc = 0x3dcab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_3dcab8:
    // 0x3dcab8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3dcab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3dcabc:
    // 0x3dcabc: 0xc04cc90  jal         func_133240
label_3dcac0:
    if (ctx->pc == 0x3DCAC0u) {
        ctx->pc = 0x3DCAC0u;
            // 0x3dcac0: 0x264602c0  addiu       $a2, $s2, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
        ctx->pc = 0x3DCAC4u;
        goto label_3dcac4;
    }
    ctx->pc = 0x3DCABCu;
    SET_GPR_U32(ctx, 31, 0x3DCAC4u);
    ctx->pc = 0x3DCAC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DCABCu;
            // 0x3dcac0: 0x264602c0  addiu       $a2, $s2, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCAC4u; }
        if (ctx->pc != 0x3DCAC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCAC4u; }
        if (ctx->pc != 0x3DCAC4u) { return; }
    }
    ctx->pc = 0x3DCAC4u;
label_3dcac4:
    // 0x3dcac4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3dcac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3dcac8:
    // 0x3dcac8: 0xc04cc44  jal         func_133110
label_3dcacc:
    if (ctx->pc == 0x3DCACCu) {
        ctx->pc = 0x3DCACCu;
            // 0x3dcacc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DCAD0u;
        goto label_3dcad0;
    }
    ctx->pc = 0x3DCAC8u;
    SET_GPR_U32(ctx, 31, 0x3DCAD0u);
    ctx->pc = 0x3DCACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DCAC8u;
            // 0x3dcacc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCAD0u; }
        if (ctx->pc != 0x3DCAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCAD0u; }
        if (ctx->pc != 0x3DCAD0u) { return; }
    }
    ctx->pc = 0x3DCAD0u;
label_3dcad0:
    // 0x3dcad0: 0x26440560  addiu       $a0, $s2, 0x560
    ctx->pc = 0x3dcad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
label_3dcad4:
    // 0x3dcad4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3dcad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3dcad8:
    // 0x3dcad8: 0xc075378  jal         func_1D4DE0
label_3dcadc:
    if (ctx->pc == 0x3DCADCu) {
        ctx->pc = 0x3DCADCu;
            // 0x3dcadc: 0x26460830  addiu       $a2, $s2, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 2096));
        ctx->pc = 0x3DCAE0u;
        goto label_3dcae0;
    }
    ctx->pc = 0x3DCAD8u;
    SET_GPR_U32(ctx, 31, 0x3DCAE0u);
    ctx->pc = 0x3DCADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DCAD8u;
            // 0x3dcadc: 0x26460830  addiu       $a2, $s2, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 2096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCAE0u; }
        if (ctx->pc != 0x3DCAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCAE0u; }
        if (ctx->pc != 0x3DCAE0u) { return; }
    }
    ctx->pc = 0x3DCAE0u;
label_3dcae0:
    // 0x3dcae0: 0xc6410880  lwc1        $f1, 0x880($s2)
    ctx->pc = 0x3dcae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3dcae4:
    // 0x3dcae4: 0x2644087c  addiu       $a0, $s2, 0x87C
    ctx->pc = 0x3dcae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2172));
label_3dcae8:
    // 0x3dcae8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3dcae8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3dcaec:
    // 0x3dcaec: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x3dcaecu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3dcaf0:
    // 0x3dcaf0: 0xc0c753c  jal         func_31D4F0
label_3dcaf4:
    if (ctx->pc == 0x3DCAF4u) {
        ctx->pc = 0x3DCAF4u;
            // 0x3dcaf4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3DCAF8u;
        goto label_3dcaf8;
    }
    ctx->pc = 0x3DCAF0u;
    SET_GPR_U32(ctx, 31, 0x3DCAF8u);
    ctx->pc = 0x3DCAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DCAF0u;
            // 0x3dcaf4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCAF8u; }
        if (ctx->pc != 0x3DCAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCAF8u; }
        if (ctx->pc != 0x3DCAF8u) { return; }
    }
    ctx->pc = 0x3DCAF8u;
label_3dcaf8:
    // 0x3dcaf8: 0x3c023e2e  lui         $v0, 0x3E2E
    ctx->pc = 0x3dcaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15918 << 16));
label_3dcafc:
    // 0x3dcafc: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x3dcafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5243);
label_3dcb00:
    // 0x3dcb00: 0xc64c0930  lwc1        $f12, 0x930($s2)
    ctx->pc = 0x3dcb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3dcb04:
    // 0x3dcb04: 0xc64d0880  lwc1        $f13, 0x880($s2)
    ctx->pc = 0x3dcb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3dcb08:
    // 0x3dcb08: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3dcb08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3dcb0c:
    // 0x3dcb0c: 0xc0c753c  jal         func_31D4F0
label_3dcb10:
    if (ctx->pc == 0x3DCB10u) {
        ctx->pc = 0x3DCB10u;
            // 0x3dcb10: 0x2644092c  addiu       $a0, $s2, 0x92C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2348));
        ctx->pc = 0x3DCB14u;
        goto label_3dcb14;
    }
    ctx->pc = 0x3DCB0Cu;
    SET_GPR_U32(ctx, 31, 0x3DCB14u);
    ctx->pc = 0x3DCB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DCB0Cu;
            // 0x3dcb10: 0x2644092c  addiu       $a0, $s2, 0x92C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2348));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCB14u; }
        if (ctx->pc != 0x3DCB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCB14u; }
        if (ctx->pc != 0x3DCB14u) { return; }
    }
    ctx->pc = 0x3DCB14u;
label_3dcb14:
    // 0x3dcb14: 0x3c023e2e  lui         $v0, 0x3E2E
    ctx->pc = 0x3dcb14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15918 << 16));
label_3dcb18:
    // 0x3dcb18: 0x26430890  addiu       $v1, $s2, 0x890
    ctx->pc = 0x3dcb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 2192));
label_3dcb1c:
    // 0x3dcb1c: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x3dcb1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5243);
label_3dcb20:
    // 0x3dcb20: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x3dcb20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_3dcb24:
    // 0x3dcb24: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3dcb24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3dcb28:
    // 0x3dcb28: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x3dcb28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_3dcb2c:
    // 0x3dcb2c: 0xc0c6250  jal         func_318940
label_3dcb30:
    if (ctx->pc == 0x3DCB30u) {
        ctx->pc = 0x3DCB30u;
            // 0x3dcb30: 0x26460560  addiu       $a2, $s2, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
        ctx->pc = 0x3DCB34u;
        goto label_3dcb34;
    }
    ctx->pc = 0x3DCB2Cu;
    SET_GPR_U32(ctx, 31, 0x3DCB34u);
    ctx->pc = 0x3DCB30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DCB2Cu;
            // 0x3dcb30: 0x26460560  addiu       $a2, $s2, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCB34u; }
        if (ctx->pc != 0x3DCB34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCB34u; }
        if (ctx->pc != 0x3DCB34u) { return; }
    }
    ctx->pc = 0x3DCB34u;
label_3dcb34:
    // 0x3dcb34: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3dcb34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3dcb38:
    // 0x3dcb38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3dcb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3dcb3c:
    // 0x3dcb3c: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x3dcb3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_3dcb40:
    // 0x3dcb40: 0x320f809  jalr        $t9
label_3dcb44:
    if (ctx->pc == 0x3DCB44u) {
        ctx->pc = 0x3DCB44u;
            // 0x3dcb44: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x3DCB48u;
        goto label_3dcb48;
    }
    ctx->pc = 0x3DCB40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3DCB48u);
        ctx->pc = 0x3DCB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DCB40u;
            // 0x3dcb44: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3DCB48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3DCB48u; }
            if (ctx->pc != 0x3DCB48u) { return; }
        }
        }
    }
    ctx->pc = 0x3DCB48u;
label_3dcb48:
    // 0x3dcb48: 0x8e450d9c  lw          $a1, 0xD9C($s2)
    ctx->pc = 0x3dcb48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3484)));
label_3dcb4c:
    // 0x3dcb4c: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x3dcb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_3dcb50:
    // 0x3dcb50: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3dcb50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3dcb54:
    // 0x3dcb54: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x3dcb54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_3dcb58:
    // 0x3dcb58: 0xae430d9c  sw          $v1, 0xD9C($s2)
    ctx->pc = 0x3dcb58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3484), GPR_U32(ctx, 3));
label_3dcb5c:
    // 0x3dcb5c: 0x8e430d70  lw          $v1, 0xD70($s2)
    ctx->pc = 0x3dcb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3440)));
label_3dcb60:
    // 0x3dcb60: 0xa06400dd  sb          $a0, 0xDD($v1)
    ctx->pc = 0x3dcb60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 221), (uint8_t)GPR_U32(ctx, 4));
label_3dcb64:
    // 0x3dcb64: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3dcb64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3dcb68:
    // 0x3dcb68: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3dcb68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3dcb6c:
    // 0x3dcb6c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3dcb6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dcb70:
    // 0x3dcb70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3dcb70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3dcb74:
    // 0x3dcb74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dcb74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3dcb78:
    // 0x3dcb78: 0x3e00008  jr          $ra
label_3dcb7c:
    if (ctx->pc == 0x3DCB7Cu) {
        ctx->pc = 0x3DCB7Cu;
            // 0x3dcb7c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3DCB80u;
        goto label_3dcb80;
    }
    ctx->pc = 0x3DCB78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DCB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DCB78u;
            // 0x3dcb7c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DCB80u;
label_3dcb80:
    // 0x3dcb80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3dcb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3dcb84:
    // 0x3dcb84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3dcb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3dcb88:
    // 0x3dcb88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3dcb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3dcb8c:
    // 0x3dcb8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3dcb8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dcb90:
    // 0x3dcb90: 0x8c840064  lw          $a0, 0x64($a0)
    ctx->pc = 0x3dcb90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
label_3dcb94:
    // 0x3dcb94: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3dcb98:
    if (ctx->pc == 0x3DCB98u) {
        ctx->pc = 0x3DCB98u;
            // 0x3dcb98: 0xae000064  sw          $zero, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
        ctx->pc = 0x3DCB9Cu;
        goto label_3dcb9c;
    }
    ctx->pc = 0x3DCB94u;
    {
        const bool branch_taken_0x3dcb94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dcb94) {
            ctx->pc = 0x3DCB98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DCB94u;
            // 0x3dcb98: 0xae000064  sw          $zero, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DCBB0u;
            goto label_3dcbb0;
        }
    }
    ctx->pc = 0x3DCB9Cu;
label_3dcb9c:
    // 0x3dcb9c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3dcb9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3dcba0:
    // 0x3dcba0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3dcba0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3dcba4:
    // 0x3dcba4: 0x320f809  jalr        $t9
label_3dcba8:
    if (ctx->pc == 0x3DCBA8u) {
        ctx->pc = 0x3DCBA8u;
            // 0x3dcba8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3DCBACu;
        goto label_3dcbac;
    }
    ctx->pc = 0x3DCBA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3DCBACu);
        ctx->pc = 0x3DCBA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DCBA4u;
            // 0x3dcba8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3DCBACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3DCBACu; }
            if (ctx->pc != 0x3DCBACu) { return; }
        }
        }
    }
    ctx->pc = 0x3DCBACu;
label_3dcbac:
    // 0x3dcbac: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x3dcbacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
label_3dcbb0:
    // 0x3dcbb0: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x3dcbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3dcbb4:
    // 0x3dcbb4: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_3dcbb8:
    if (ctx->pc == 0x3DCBB8u) {
        ctx->pc = 0x3DCBB8u;
            // 0x3dcbb8: 0x260400a4  addiu       $a0, $s0, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 164));
        ctx->pc = 0x3DCBBCu;
        goto label_3dcbbc;
    }
    ctx->pc = 0x3DCBB4u;
    {
        const bool branch_taken_0x3dcbb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dcbb4) {
            ctx->pc = 0x3DCBB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DCBB4u;
            // 0x3dcbb8: 0x260400a4  addiu       $a0, $s0, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 164));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DCBDCu;
            goto label_3dcbdc;
        }
    }
    ctx->pc = 0x3DCBBCu;
label_3dcbbc:
    // 0x3dcbbc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3dcbc0:
    if (ctx->pc == 0x3DCBC0u) {
        ctx->pc = 0x3DCBC0u;
            // 0x3dcbc0: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x3DCBC4u;
        goto label_3dcbc4;
    }
    ctx->pc = 0x3DCBBCu;
    {
        const bool branch_taken_0x3dcbbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dcbbc) {
            ctx->pc = 0x3DCBC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DCBBCu;
            // 0x3dcbc0: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DCBD8u;
            goto label_3dcbd8;
        }
    }
    ctx->pc = 0x3DCBC4u;
label_3dcbc4:
    // 0x3dcbc4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3dcbc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3dcbc8:
    // 0x3dcbc8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3dcbc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3dcbcc:
    // 0x3dcbcc: 0x320f809  jalr        $t9
label_3dcbd0:
    if (ctx->pc == 0x3DCBD0u) {
        ctx->pc = 0x3DCBD0u;
            // 0x3dcbd0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3DCBD4u;
        goto label_3dcbd4;
    }
    ctx->pc = 0x3DCBCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3DCBD4u);
        ctx->pc = 0x3DCBD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DCBCCu;
            // 0x3dcbd0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3DCBD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3DCBD4u; }
            if (ctx->pc != 0x3DCBD4u) { return; }
        }
        }
    }
    ctx->pc = 0x3DCBD4u;
label_3dcbd4:
    // 0x3dcbd4: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x3dcbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_3dcbd8:
    // 0x3dcbd8: 0x260400a4  addiu       $a0, $s0, 0xA4
    ctx->pc = 0x3dcbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 164));
label_3dcbdc:
    // 0x3dcbdc: 0xc0f7404  jal         func_3DD010
label_3dcbe0:
    if (ctx->pc == 0x3DCBE0u) {
        ctx->pc = 0x3DCBE4u;
        goto label_3dcbe4;
    }
    ctx->pc = 0x3DCBDCu;
    SET_GPR_U32(ctx, 31, 0x3DCBE4u);
    ctx->pc = 0x3DD010u;
    if (runtime->hasFunction(0x3DD010u)) {
        auto targetFn = runtime->lookupFunction(0x3DD010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCBE4u; }
        if (ctx->pc != 0x3DCBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DD010_0x3dd010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCBE4u; }
        if (ctx->pc != 0x3DCBE4u) { return; }
    }
    ctx->pc = 0x3DCBE4u;
label_3dcbe4:
    // 0x3dcbe4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3dcbe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3dcbe8:
    // 0x3dcbe8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dcbe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3dcbec:
    // 0x3dcbec: 0x3e00008  jr          $ra
label_3dcbf0:
    if (ctx->pc == 0x3DCBF0u) {
        ctx->pc = 0x3DCBF0u;
            // 0x3dcbf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3DCBF4u;
        goto label_3dcbf4;
    }
    ctx->pc = 0x3DCBECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DCBF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DCBECu;
            // 0x3dcbf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DCBF4u;
label_3dcbf4:
    // 0x3dcbf4: 0x0  nop
    ctx->pc = 0x3dcbf4u;
    // NOP
label_3dcbf8:
    // 0x3dcbf8: 0x0  nop
    ctx->pc = 0x3dcbf8u;
    // NOP
label_3dcbfc:
    // 0x3dcbfc: 0x0  nop
    ctx->pc = 0x3dcbfcu;
    // NOP
label_3dcc00:
    // 0x3dcc00: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3dcc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3dcc04:
    // 0x3dcc04: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x3dcc04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
label_3dcc08:
    // 0x3dcc08: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3dcc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3dcc0c:
    // 0x3dcc0c: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x3dcc0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
label_3dcc10:
    // 0x3dcc10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3dcc10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3dcc14:
    // 0x3dcc14: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3dcc14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3dcc18:
    // 0x3dcc18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3dcc18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3dcc1c:
    // 0x3dcc1c: 0x3c06447a  lui         $a2, 0x447A
    ctx->pc = 0x3dcc1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17530 << 16));
label_3dcc20:
    // 0x3dcc20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3dcc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3dcc24:
    // 0x3dcc24: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x3dcc24u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3dcc28:
    // 0x3dcc28: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x3dcc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3dcc2c:
    // 0x3dcc2c: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x3dcc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_3dcc30:
    // 0x3dcc30: 0x344af000  ori         $t2, $v0, 0xF000
    ctx->pc = 0x3dcc30u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_3dcc34:
    // 0x3dcc34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3dcc34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dcc38:
    // 0x3dcc38: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x3dcc38u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3dcc3c:
    // 0x3dcc3c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3dcc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3dcc40:
    // 0x3dcc40: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x3dcc40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_3dcc44:
    // 0x3dcc44: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3dcc44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3dcc48:
    // 0x3dcc48: 0x3c094198  lui         $t1, 0x4198
    ctx->pc = 0x3dcc48u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16792 << 16));
label_3dcc4c:
    // 0x3dcc4c: 0x3c084128  lui         $t0, 0x4128
    ctx->pc = 0x3dcc4cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16680 << 16));
label_3dcc50:
    // 0x3dcc50: 0x3c0740f0  lui         $a3, 0x40F0
    ctx->pc = 0x3dcc50u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16624 << 16));
label_3dcc54:
    // 0x3dcc54: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x3dcc54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3dcc58:
    // 0x3dcc58: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x3dcc58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_3dcc5c:
    // 0x3dcc5c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3dcc5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3dcc60:
    // 0x3dcc60: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3dcc60u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_3dcc64:
    // 0x3dcc64: 0xe4800068  swc1        $f0, 0x68($a0)
    ctx->pc = 0x3dcc64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 104), bits); }
label_3dcc68:
    // 0x3dcc68: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x3dcc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3dcc6c:
    // 0x3dcc6c: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x3dcc6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_3dcc70:
    // 0x3dcc70: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3dcc70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3dcc74:
    // 0x3dcc74: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3dcc74u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_3dcc78:
    // 0x3dcc78: 0xe480006c  swc1        $f0, 0x6C($a0)
    ctx->pc = 0x3dcc78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
label_3dcc7c:
    // 0x3dcc7c: 0x8c70e3e0  lw          $s0, -0x1C20($v1)
    ctx->pc = 0x3dcc7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960096)));
label_3dcc80:
    // 0x3dcc80: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3dcc80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3dcc84:
    // 0x3dcc84: 0xafa90050  sw          $t1, 0x50($sp)
    ctx->pc = 0x3dcc84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 9));
label_3dcc88:
    // 0x3dcc88: 0xafa80054  sw          $t0, 0x54($sp)
    ctx->pc = 0x3dcc88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 8));
label_3dcc8c:
    // 0x3dcc8c: 0xafa70058  sw          $a3, 0x58($sp)
    ctx->pc = 0x3dcc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 7));
label_3dcc90:
    // 0x3dcc90: 0xc0a7a88  jal         func_29EA20
label_3dcc94:
    if (ctx->pc == 0x3DCC94u) {
        ctx->pc = 0x3DCC94u;
            // 0x3dcc94: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->pc = 0x3DCC98u;
        goto label_3dcc98;
    }
    ctx->pc = 0x3DCC90u;
    SET_GPR_U32(ctx, 31, 0x3DCC98u);
    ctx->pc = 0x3DCC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DCC90u;
            // 0x3dcc94: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCC98u; }
        if (ctx->pc != 0x3DCC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCC98u; }
        if (ctx->pc != 0x3DCC98u) { return; }
    }
    ctx->pc = 0x3DCC98u;
label_3dcc98:
    // 0x3dcc98: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x3dcc98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3dcc9c:
    // 0x3dcc9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3dcc9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dcca0:
    // 0x3dcca0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_3dcca4:
    if (ctx->pc == 0x3DCCA4u) {
        ctx->pc = 0x3DCCA4u;
            // 0x3dcca4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3DCCA8u;
        goto label_3dcca8;
    }
    ctx->pc = 0x3DCCA0u;
    {
        const bool branch_taken_0x3dcca0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DCCA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DCCA0u;
            // 0x3dcca4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcca0) {
            ctx->pc = 0x3DCCBCu;
            goto label_3dccbc;
        }
    }
    ctx->pc = 0x3DCCA8u;
label_3dcca8:
    // 0x3dcca8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3dcca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_3dccac:
    // 0x3dccac: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x3dccacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3dccb0:
    // 0x3dccb0: 0xc0804bc  jal         func_2012F0
label_3dccb4:
    if (ctx->pc == 0x3DCCB4u) {
        ctx->pc = 0x3DCCB4u;
            // 0x3dccb4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3DCCB8u;
        goto label_3dccb8;
    }
    ctx->pc = 0x3DCCB0u;
    SET_GPR_U32(ctx, 31, 0x3DCCB8u);
    ctx->pc = 0x3DCCB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DCCB0u;
            // 0x3dccb4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCCB8u; }
        if (ctx->pc != 0x3DCCB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCCB8u; }
        if (ctx->pc != 0x3DCCB8u) { return; }
    }
    ctx->pc = 0x3DCCB8u;
label_3dccb8:
    // 0x3dccb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3dccb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dccbc:
    // 0x3dccbc: 0xae240064  sw          $a0, 0x64($s1)
    ctx->pc = 0x3dccbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 4));
label_3dccc0:
    // 0x3dccc0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3dccc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3dccc4:
    // 0x3dccc4: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x3dccc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3dccc8:
    // 0x3dccc8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3dccc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3dcccc:
    // 0x3dcccc: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x3dccccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3dccd0:
    // 0x3dccd0: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x3dccd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3dccd4:
    // 0x3dccd4: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x3dccd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3dccd8:
    // 0x3dccd8: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x3dccd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_3dccdc:
    // 0x3dccdc: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x3dccdcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_3dcce0:
    // 0x3dcce0: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x3dcce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
label_3dcce4:
    // 0x3dcce4: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x3dcce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3dcce8:
    // 0x3dcce8: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x3dcce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3dccec:
    // 0x3dccec: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x3dccecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3dccf0:
    // 0x3dccf0: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x3dccf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3dccf4:
    // 0x3dccf4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3dccf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3dccf8:
    // 0x3dccf8: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x3dccf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3dccfc:
    // 0x3dccfc: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x3dccfcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_3dcd00:
    // 0x3dcd00: 0xc0a3830  jal         func_28E0C0
label_3dcd04:
    if (ctx->pc == 0x3DCD04u) {
        ctx->pc = 0x3DCD04u;
            // 0x3dcd04: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x3DCD08u;
        goto label_3dcd08;
    }
    ctx->pc = 0x3DCD00u;
    SET_GPR_U32(ctx, 31, 0x3DCD08u);
    ctx->pc = 0x3DCD04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DCD00u;
            // 0x3dcd04: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCD08u; }
        if (ctx->pc != 0x3DCD08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCD08u; }
        if (ctx->pc != 0x3DCD08u) { return; }
    }
    ctx->pc = 0x3DCD08u;
label_3dcd08:
    // 0x3dcd08: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3dcd08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3dcd0c:
    // 0x3dcd0c: 0x24050150  addiu       $a1, $zero, 0x150
    ctx->pc = 0x3dcd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_3dcd10:
    // 0x3dcd10: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3dcd10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3dcd14:
    // 0x3dcd14: 0xc0a7a88  jal         func_29EA20
label_3dcd18:
    if (ctx->pc == 0x3DCD18u) {
        ctx->pc = 0x3DCD18u;
            // 0x3dcd18: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x3DCD1Cu;
        goto label_3dcd1c;
    }
    ctx->pc = 0x3DCD14u;
    SET_GPR_U32(ctx, 31, 0x3DCD1Cu);
    ctx->pc = 0x3DCD18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DCD14u;
            // 0x3dcd18: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCD1Cu; }
        if (ctx->pc != 0x3DCD1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCD1Cu; }
        if (ctx->pc != 0x3DCD1Cu) { return; }
    }
    ctx->pc = 0x3DCD1Cu;
label_3dcd1c:
    // 0x3dcd1c: 0x24030150  addiu       $v1, $zero, 0x150
    ctx->pc = 0x3dcd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_3dcd20:
    // 0x3dcd20: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3dcd20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dcd24:
    // 0x3dcd24: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
label_3dcd28:
    if (ctx->pc == 0x3DCD28u) {
        ctx->pc = 0x3DCD28u;
            // 0x3dcd28: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3DCD2Cu;
        goto label_3dcd2c;
    }
    ctx->pc = 0x3DCD24u;
    {
        const bool branch_taken_0x3dcd24 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DCD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DCD24u;
            // 0x3dcd28: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcd24) {
            ctx->pc = 0x3DCD58u;
            goto label_3dcd58;
        }
    }
    ctx->pc = 0x3DCD2Cu;
label_3dcd2c:
    // 0x3dcd2c: 0x8e250064  lw          $a1, 0x64($s1)
    ctx->pc = 0x3dcd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_3dcd30:
    // 0x3dcd30: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3dcd30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_3dcd34:
    // 0x3dcd34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3dcd34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3dcd38:
    // 0x3dcd38: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x3dcd38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3dcd3c:
    // 0x3dcd3c: 0xc08afe0  jal         func_22BF80
label_3dcd40:
    if (ctx->pc == 0x3DCD40u) {
        ctx->pc = 0x3DCD40u;
            // 0x3dcd40: 0x34470020  ori         $a3, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
        ctx->pc = 0x3DCD44u;
        goto label_3dcd44;
    }
    ctx->pc = 0x3DCD3Cu;
    SET_GPR_U32(ctx, 31, 0x3DCD44u);
    ctx->pc = 0x3DCD40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DCD3Cu;
            // 0x3dcd40: 0x34470020  ori         $a3, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BF80u;
    if (runtime->hasFunction(0x22BF80u)) {
        auto targetFn = runtime->lookupFunction(0x22BF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCD44u; }
        if (ctx->pc != 0x3DCD44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BF80_0x22bf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCD44u; }
        if (ctx->pc != 0x3DCD44u) { return; }
    }
    ctx->pc = 0x3DCD44u;
label_3dcd44:
    // 0x3dcd44: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3dcd44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3dcd48:
    // 0x3dcd48: 0x244225d0  addiu       $v0, $v0, 0x25D0
    ctx->pc = 0x3dcd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9680));
label_3dcd4c:
    // 0x3dcd4c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3dcd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3dcd50:
    // 0x3dcd50: 0xae400140  sw          $zero, 0x140($s2)
    ctx->pc = 0x3dcd50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 320), GPR_U32(ctx, 0));
label_3dcd54:
    // 0x3dcd54: 0xae51000c  sw          $s1, 0xC($s2)
    ctx->pc = 0x3dcd54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 17));
label_3dcd58:
    // 0x3dcd58: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3dcd58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3dcd5c:
    // 0x3dcd5c: 0xc08c798  jal         func_231E60
label_3dcd60:
    if (ctx->pc == 0x3DCD60u) {
        ctx->pc = 0x3DCD60u;
            // 0x3dcd60: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DCD64u;
        goto label_3dcd64;
    }
    ctx->pc = 0x3DCD5Cu;
    SET_GPR_U32(ctx, 31, 0x3DCD64u);
    ctx->pc = 0x3DCD60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DCD5Cu;
            // 0x3dcd60: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231E60u;
    if (runtime->hasFunction(0x231E60u)) {
        auto targetFn = runtime->lookupFunction(0x231E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCD64u; }
        if (ctx->pc != 0x3DCD64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231E60_0x231e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCD64u; }
        if (ctx->pc != 0x3DCD64u) { return; }
    }
    ctx->pc = 0x3DCD64u;
label_3dcd64:
    // 0x3dcd64: 0xae320050  sw          $s2, 0x50($s1)
    ctx->pc = 0x3dcd64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 18));
label_3dcd68:
    // 0x3dcd68: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3dcd68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3dcd6c:
    // 0x3dcd6c: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3dcd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3dcd70:
    // 0x3dcd70: 0x262400a4  addiu       $a0, $s1, 0xA4
    ctx->pc = 0x3dcd70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 164));
label_3dcd74:
    // 0x3dcd74: 0x8c42077c  lw          $v0, 0x77C($v0)
    ctx->pc = 0x3dcd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1916)));
label_3dcd78:
    // 0x3dcd78: 0xc0f73d4  jal         func_3DCF50
label_3dcd7c:
    if (ctx->pc == 0x3DCD7Cu) {
        ctx->pc = 0x3DCD7Cu;
            // 0x3dcd7c: 0x24450003  addiu       $a1, $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
        ctx->pc = 0x3DCD80u;
        goto label_3dcd80;
    }
    ctx->pc = 0x3DCD78u;
    SET_GPR_U32(ctx, 31, 0x3DCD80u);
    ctx->pc = 0x3DCD7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DCD78u;
            // 0x3dcd7c: 0x24450003  addiu       $a1, $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DCF50u;
    if (runtime->hasFunction(0x3DCF50u)) {
        auto targetFn = runtime->lookupFunction(0x3DCF50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCD80u; }
        if (ctx->pc != 0x3DCD80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DCF50_0x3dcf50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCD80u; }
        if (ctx->pc != 0x3DCD80u) { return; }
    }
    ctx->pc = 0x3DCD80u;
label_3dcd80:
    // 0x3dcd80: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3dcd80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3dcd84:
    // 0x3dcd84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3dcd84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dcd88:
    // 0x3dcd88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3dcd88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3dcd8c:
    // 0x3dcd8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dcd8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3dcd90:
    // 0x3dcd90: 0x3e00008  jr          $ra
label_3dcd94:
    if (ctx->pc == 0x3DCD94u) {
        ctx->pc = 0x3DCD94u;
            // 0x3dcd94: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x3DCD98u;
        goto label_3dcd98;
    }
    ctx->pc = 0x3DCD90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DCD94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DCD90u;
            // 0x3dcd94: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DCD98u;
label_3dcd98:
    // 0x3dcd98: 0x0  nop
    ctx->pc = 0x3dcd98u;
    // NOP
label_3dcd9c:
    // 0x3dcd9c: 0x0  nop
    ctx->pc = 0x3dcd9cu;
    // NOP
}
