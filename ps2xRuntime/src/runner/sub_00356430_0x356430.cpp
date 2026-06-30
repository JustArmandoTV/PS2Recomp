#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00356430
// Address: 0x356430 - 0x356f00
void sub_00356430_0x356430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00356430_0x356430");
#endif

    switch (ctx->pc) {
        case 0x356430u: goto label_356430;
        case 0x356434u: goto label_356434;
        case 0x356438u: goto label_356438;
        case 0x35643cu: goto label_35643c;
        case 0x356440u: goto label_356440;
        case 0x356444u: goto label_356444;
        case 0x356448u: goto label_356448;
        case 0x35644cu: goto label_35644c;
        case 0x356450u: goto label_356450;
        case 0x356454u: goto label_356454;
        case 0x356458u: goto label_356458;
        case 0x35645cu: goto label_35645c;
        case 0x356460u: goto label_356460;
        case 0x356464u: goto label_356464;
        case 0x356468u: goto label_356468;
        case 0x35646cu: goto label_35646c;
        case 0x356470u: goto label_356470;
        case 0x356474u: goto label_356474;
        case 0x356478u: goto label_356478;
        case 0x35647cu: goto label_35647c;
        case 0x356480u: goto label_356480;
        case 0x356484u: goto label_356484;
        case 0x356488u: goto label_356488;
        case 0x35648cu: goto label_35648c;
        case 0x356490u: goto label_356490;
        case 0x356494u: goto label_356494;
        case 0x356498u: goto label_356498;
        case 0x35649cu: goto label_35649c;
        case 0x3564a0u: goto label_3564a0;
        case 0x3564a4u: goto label_3564a4;
        case 0x3564a8u: goto label_3564a8;
        case 0x3564acu: goto label_3564ac;
        case 0x3564b0u: goto label_3564b0;
        case 0x3564b4u: goto label_3564b4;
        case 0x3564b8u: goto label_3564b8;
        case 0x3564bcu: goto label_3564bc;
        case 0x3564c0u: goto label_3564c0;
        case 0x3564c4u: goto label_3564c4;
        case 0x3564c8u: goto label_3564c8;
        case 0x3564ccu: goto label_3564cc;
        case 0x3564d0u: goto label_3564d0;
        case 0x3564d4u: goto label_3564d4;
        case 0x3564d8u: goto label_3564d8;
        case 0x3564dcu: goto label_3564dc;
        case 0x3564e0u: goto label_3564e0;
        case 0x3564e4u: goto label_3564e4;
        case 0x3564e8u: goto label_3564e8;
        case 0x3564ecu: goto label_3564ec;
        case 0x3564f0u: goto label_3564f0;
        case 0x3564f4u: goto label_3564f4;
        case 0x3564f8u: goto label_3564f8;
        case 0x3564fcu: goto label_3564fc;
        case 0x356500u: goto label_356500;
        case 0x356504u: goto label_356504;
        case 0x356508u: goto label_356508;
        case 0x35650cu: goto label_35650c;
        case 0x356510u: goto label_356510;
        case 0x356514u: goto label_356514;
        case 0x356518u: goto label_356518;
        case 0x35651cu: goto label_35651c;
        case 0x356520u: goto label_356520;
        case 0x356524u: goto label_356524;
        case 0x356528u: goto label_356528;
        case 0x35652cu: goto label_35652c;
        case 0x356530u: goto label_356530;
        case 0x356534u: goto label_356534;
        case 0x356538u: goto label_356538;
        case 0x35653cu: goto label_35653c;
        case 0x356540u: goto label_356540;
        case 0x356544u: goto label_356544;
        case 0x356548u: goto label_356548;
        case 0x35654cu: goto label_35654c;
        case 0x356550u: goto label_356550;
        case 0x356554u: goto label_356554;
        case 0x356558u: goto label_356558;
        case 0x35655cu: goto label_35655c;
        case 0x356560u: goto label_356560;
        case 0x356564u: goto label_356564;
        case 0x356568u: goto label_356568;
        case 0x35656cu: goto label_35656c;
        case 0x356570u: goto label_356570;
        case 0x356574u: goto label_356574;
        case 0x356578u: goto label_356578;
        case 0x35657cu: goto label_35657c;
        case 0x356580u: goto label_356580;
        case 0x356584u: goto label_356584;
        case 0x356588u: goto label_356588;
        case 0x35658cu: goto label_35658c;
        case 0x356590u: goto label_356590;
        case 0x356594u: goto label_356594;
        case 0x356598u: goto label_356598;
        case 0x35659cu: goto label_35659c;
        case 0x3565a0u: goto label_3565a0;
        case 0x3565a4u: goto label_3565a4;
        case 0x3565a8u: goto label_3565a8;
        case 0x3565acu: goto label_3565ac;
        case 0x3565b0u: goto label_3565b0;
        case 0x3565b4u: goto label_3565b4;
        case 0x3565b8u: goto label_3565b8;
        case 0x3565bcu: goto label_3565bc;
        case 0x3565c0u: goto label_3565c0;
        case 0x3565c4u: goto label_3565c4;
        case 0x3565c8u: goto label_3565c8;
        case 0x3565ccu: goto label_3565cc;
        case 0x3565d0u: goto label_3565d0;
        case 0x3565d4u: goto label_3565d4;
        case 0x3565d8u: goto label_3565d8;
        case 0x3565dcu: goto label_3565dc;
        case 0x3565e0u: goto label_3565e0;
        case 0x3565e4u: goto label_3565e4;
        case 0x3565e8u: goto label_3565e8;
        case 0x3565ecu: goto label_3565ec;
        case 0x3565f0u: goto label_3565f0;
        case 0x3565f4u: goto label_3565f4;
        case 0x3565f8u: goto label_3565f8;
        case 0x3565fcu: goto label_3565fc;
        case 0x356600u: goto label_356600;
        case 0x356604u: goto label_356604;
        case 0x356608u: goto label_356608;
        case 0x35660cu: goto label_35660c;
        case 0x356610u: goto label_356610;
        case 0x356614u: goto label_356614;
        case 0x356618u: goto label_356618;
        case 0x35661cu: goto label_35661c;
        case 0x356620u: goto label_356620;
        case 0x356624u: goto label_356624;
        case 0x356628u: goto label_356628;
        case 0x35662cu: goto label_35662c;
        case 0x356630u: goto label_356630;
        case 0x356634u: goto label_356634;
        case 0x356638u: goto label_356638;
        case 0x35663cu: goto label_35663c;
        case 0x356640u: goto label_356640;
        case 0x356644u: goto label_356644;
        case 0x356648u: goto label_356648;
        case 0x35664cu: goto label_35664c;
        case 0x356650u: goto label_356650;
        case 0x356654u: goto label_356654;
        case 0x356658u: goto label_356658;
        case 0x35665cu: goto label_35665c;
        case 0x356660u: goto label_356660;
        case 0x356664u: goto label_356664;
        case 0x356668u: goto label_356668;
        case 0x35666cu: goto label_35666c;
        case 0x356670u: goto label_356670;
        case 0x356674u: goto label_356674;
        case 0x356678u: goto label_356678;
        case 0x35667cu: goto label_35667c;
        case 0x356680u: goto label_356680;
        case 0x356684u: goto label_356684;
        case 0x356688u: goto label_356688;
        case 0x35668cu: goto label_35668c;
        case 0x356690u: goto label_356690;
        case 0x356694u: goto label_356694;
        case 0x356698u: goto label_356698;
        case 0x35669cu: goto label_35669c;
        case 0x3566a0u: goto label_3566a0;
        case 0x3566a4u: goto label_3566a4;
        case 0x3566a8u: goto label_3566a8;
        case 0x3566acu: goto label_3566ac;
        case 0x3566b0u: goto label_3566b0;
        case 0x3566b4u: goto label_3566b4;
        case 0x3566b8u: goto label_3566b8;
        case 0x3566bcu: goto label_3566bc;
        case 0x3566c0u: goto label_3566c0;
        case 0x3566c4u: goto label_3566c4;
        case 0x3566c8u: goto label_3566c8;
        case 0x3566ccu: goto label_3566cc;
        case 0x3566d0u: goto label_3566d0;
        case 0x3566d4u: goto label_3566d4;
        case 0x3566d8u: goto label_3566d8;
        case 0x3566dcu: goto label_3566dc;
        case 0x3566e0u: goto label_3566e0;
        case 0x3566e4u: goto label_3566e4;
        case 0x3566e8u: goto label_3566e8;
        case 0x3566ecu: goto label_3566ec;
        case 0x3566f0u: goto label_3566f0;
        case 0x3566f4u: goto label_3566f4;
        case 0x3566f8u: goto label_3566f8;
        case 0x3566fcu: goto label_3566fc;
        case 0x356700u: goto label_356700;
        case 0x356704u: goto label_356704;
        case 0x356708u: goto label_356708;
        case 0x35670cu: goto label_35670c;
        case 0x356710u: goto label_356710;
        case 0x356714u: goto label_356714;
        case 0x356718u: goto label_356718;
        case 0x35671cu: goto label_35671c;
        case 0x356720u: goto label_356720;
        case 0x356724u: goto label_356724;
        case 0x356728u: goto label_356728;
        case 0x35672cu: goto label_35672c;
        case 0x356730u: goto label_356730;
        case 0x356734u: goto label_356734;
        case 0x356738u: goto label_356738;
        case 0x35673cu: goto label_35673c;
        case 0x356740u: goto label_356740;
        case 0x356744u: goto label_356744;
        case 0x356748u: goto label_356748;
        case 0x35674cu: goto label_35674c;
        case 0x356750u: goto label_356750;
        case 0x356754u: goto label_356754;
        case 0x356758u: goto label_356758;
        case 0x35675cu: goto label_35675c;
        case 0x356760u: goto label_356760;
        case 0x356764u: goto label_356764;
        case 0x356768u: goto label_356768;
        case 0x35676cu: goto label_35676c;
        case 0x356770u: goto label_356770;
        case 0x356774u: goto label_356774;
        case 0x356778u: goto label_356778;
        case 0x35677cu: goto label_35677c;
        case 0x356780u: goto label_356780;
        case 0x356784u: goto label_356784;
        case 0x356788u: goto label_356788;
        case 0x35678cu: goto label_35678c;
        case 0x356790u: goto label_356790;
        case 0x356794u: goto label_356794;
        case 0x356798u: goto label_356798;
        case 0x35679cu: goto label_35679c;
        case 0x3567a0u: goto label_3567a0;
        case 0x3567a4u: goto label_3567a4;
        case 0x3567a8u: goto label_3567a8;
        case 0x3567acu: goto label_3567ac;
        case 0x3567b0u: goto label_3567b0;
        case 0x3567b4u: goto label_3567b4;
        case 0x3567b8u: goto label_3567b8;
        case 0x3567bcu: goto label_3567bc;
        case 0x3567c0u: goto label_3567c0;
        case 0x3567c4u: goto label_3567c4;
        case 0x3567c8u: goto label_3567c8;
        case 0x3567ccu: goto label_3567cc;
        case 0x3567d0u: goto label_3567d0;
        case 0x3567d4u: goto label_3567d4;
        case 0x3567d8u: goto label_3567d8;
        case 0x3567dcu: goto label_3567dc;
        case 0x3567e0u: goto label_3567e0;
        case 0x3567e4u: goto label_3567e4;
        case 0x3567e8u: goto label_3567e8;
        case 0x3567ecu: goto label_3567ec;
        case 0x3567f0u: goto label_3567f0;
        case 0x3567f4u: goto label_3567f4;
        case 0x3567f8u: goto label_3567f8;
        case 0x3567fcu: goto label_3567fc;
        case 0x356800u: goto label_356800;
        case 0x356804u: goto label_356804;
        case 0x356808u: goto label_356808;
        case 0x35680cu: goto label_35680c;
        case 0x356810u: goto label_356810;
        case 0x356814u: goto label_356814;
        case 0x356818u: goto label_356818;
        case 0x35681cu: goto label_35681c;
        case 0x356820u: goto label_356820;
        case 0x356824u: goto label_356824;
        case 0x356828u: goto label_356828;
        case 0x35682cu: goto label_35682c;
        case 0x356830u: goto label_356830;
        case 0x356834u: goto label_356834;
        case 0x356838u: goto label_356838;
        case 0x35683cu: goto label_35683c;
        case 0x356840u: goto label_356840;
        case 0x356844u: goto label_356844;
        case 0x356848u: goto label_356848;
        case 0x35684cu: goto label_35684c;
        case 0x356850u: goto label_356850;
        case 0x356854u: goto label_356854;
        case 0x356858u: goto label_356858;
        case 0x35685cu: goto label_35685c;
        case 0x356860u: goto label_356860;
        case 0x356864u: goto label_356864;
        case 0x356868u: goto label_356868;
        case 0x35686cu: goto label_35686c;
        case 0x356870u: goto label_356870;
        case 0x356874u: goto label_356874;
        case 0x356878u: goto label_356878;
        case 0x35687cu: goto label_35687c;
        case 0x356880u: goto label_356880;
        case 0x356884u: goto label_356884;
        case 0x356888u: goto label_356888;
        case 0x35688cu: goto label_35688c;
        case 0x356890u: goto label_356890;
        case 0x356894u: goto label_356894;
        case 0x356898u: goto label_356898;
        case 0x35689cu: goto label_35689c;
        case 0x3568a0u: goto label_3568a0;
        case 0x3568a4u: goto label_3568a4;
        case 0x3568a8u: goto label_3568a8;
        case 0x3568acu: goto label_3568ac;
        case 0x3568b0u: goto label_3568b0;
        case 0x3568b4u: goto label_3568b4;
        case 0x3568b8u: goto label_3568b8;
        case 0x3568bcu: goto label_3568bc;
        case 0x3568c0u: goto label_3568c0;
        case 0x3568c4u: goto label_3568c4;
        case 0x3568c8u: goto label_3568c8;
        case 0x3568ccu: goto label_3568cc;
        case 0x3568d0u: goto label_3568d0;
        case 0x3568d4u: goto label_3568d4;
        case 0x3568d8u: goto label_3568d8;
        case 0x3568dcu: goto label_3568dc;
        case 0x3568e0u: goto label_3568e0;
        case 0x3568e4u: goto label_3568e4;
        case 0x3568e8u: goto label_3568e8;
        case 0x3568ecu: goto label_3568ec;
        case 0x3568f0u: goto label_3568f0;
        case 0x3568f4u: goto label_3568f4;
        case 0x3568f8u: goto label_3568f8;
        case 0x3568fcu: goto label_3568fc;
        case 0x356900u: goto label_356900;
        case 0x356904u: goto label_356904;
        case 0x356908u: goto label_356908;
        case 0x35690cu: goto label_35690c;
        case 0x356910u: goto label_356910;
        case 0x356914u: goto label_356914;
        case 0x356918u: goto label_356918;
        case 0x35691cu: goto label_35691c;
        case 0x356920u: goto label_356920;
        case 0x356924u: goto label_356924;
        case 0x356928u: goto label_356928;
        case 0x35692cu: goto label_35692c;
        case 0x356930u: goto label_356930;
        case 0x356934u: goto label_356934;
        case 0x356938u: goto label_356938;
        case 0x35693cu: goto label_35693c;
        case 0x356940u: goto label_356940;
        case 0x356944u: goto label_356944;
        case 0x356948u: goto label_356948;
        case 0x35694cu: goto label_35694c;
        case 0x356950u: goto label_356950;
        case 0x356954u: goto label_356954;
        case 0x356958u: goto label_356958;
        case 0x35695cu: goto label_35695c;
        case 0x356960u: goto label_356960;
        case 0x356964u: goto label_356964;
        case 0x356968u: goto label_356968;
        case 0x35696cu: goto label_35696c;
        case 0x356970u: goto label_356970;
        case 0x356974u: goto label_356974;
        case 0x356978u: goto label_356978;
        case 0x35697cu: goto label_35697c;
        case 0x356980u: goto label_356980;
        case 0x356984u: goto label_356984;
        case 0x356988u: goto label_356988;
        case 0x35698cu: goto label_35698c;
        case 0x356990u: goto label_356990;
        case 0x356994u: goto label_356994;
        case 0x356998u: goto label_356998;
        case 0x35699cu: goto label_35699c;
        case 0x3569a0u: goto label_3569a0;
        case 0x3569a4u: goto label_3569a4;
        case 0x3569a8u: goto label_3569a8;
        case 0x3569acu: goto label_3569ac;
        case 0x3569b0u: goto label_3569b0;
        case 0x3569b4u: goto label_3569b4;
        case 0x3569b8u: goto label_3569b8;
        case 0x3569bcu: goto label_3569bc;
        case 0x3569c0u: goto label_3569c0;
        case 0x3569c4u: goto label_3569c4;
        case 0x3569c8u: goto label_3569c8;
        case 0x3569ccu: goto label_3569cc;
        case 0x3569d0u: goto label_3569d0;
        case 0x3569d4u: goto label_3569d4;
        case 0x3569d8u: goto label_3569d8;
        case 0x3569dcu: goto label_3569dc;
        case 0x3569e0u: goto label_3569e0;
        case 0x3569e4u: goto label_3569e4;
        case 0x3569e8u: goto label_3569e8;
        case 0x3569ecu: goto label_3569ec;
        case 0x3569f0u: goto label_3569f0;
        case 0x3569f4u: goto label_3569f4;
        case 0x3569f8u: goto label_3569f8;
        case 0x3569fcu: goto label_3569fc;
        case 0x356a00u: goto label_356a00;
        case 0x356a04u: goto label_356a04;
        case 0x356a08u: goto label_356a08;
        case 0x356a0cu: goto label_356a0c;
        case 0x356a10u: goto label_356a10;
        case 0x356a14u: goto label_356a14;
        case 0x356a18u: goto label_356a18;
        case 0x356a1cu: goto label_356a1c;
        case 0x356a20u: goto label_356a20;
        case 0x356a24u: goto label_356a24;
        case 0x356a28u: goto label_356a28;
        case 0x356a2cu: goto label_356a2c;
        case 0x356a30u: goto label_356a30;
        case 0x356a34u: goto label_356a34;
        case 0x356a38u: goto label_356a38;
        case 0x356a3cu: goto label_356a3c;
        case 0x356a40u: goto label_356a40;
        case 0x356a44u: goto label_356a44;
        case 0x356a48u: goto label_356a48;
        case 0x356a4cu: goto label_356a4c;
        case 0x356a50u: goto label_356a50;
        case 0x356a54u: goto label_356a54;
        case 0x356a58u: goto label_356a58;
        case 0x356a5cu: goto label_356a5c;
        case 0x356a60u: goto label_356a60;
        case 0x356a64u: goto label_356a64;
        case 0x356a68u: goto label_356a68;
        case 0x356a6cu: goto label_356a6c;
        case 0x356a70u: goto label_356a70;
        case 0x356a74u: goto label_356a74;
        case 0x356a78u: goto label_356a78;
        case 0x356a7cu: goto label_356a7c;
        case 0x356a80u: goto label_356a80;
        case 0x356a84u: goto label_356a84;
        case 0x356a88u: goto label_356a88;
        case 0x356a8cu: goto label_356a8c;
        case 0x356a90u: goto label_356a90;
        case 0x356a94u: goto label_356a94;
        case 0x356a98u: goto label_356a98;
        case 0x356a9cu: goto label_356a9c;
        case 0x356aa0u: goto label_356aa0;
        case 0x356aa4u: goto label_356aa4;
        case 0x356aa8u: goto label_356aa8;
        case 0x356aacu: goto label_356aac;
        case 0x356ab0u: goto label_356ab0;
        case 0x356ab4u: goto label_356ab4;
        case 0x356ab8u: goto label_356ab8;
        case 0x356abcu: goto label_356abc;
        case 0x356ac0u: goto label_356ac0;
        case 0x356ac4u: goto label_356ac4;
        case 0x356ac8u: goto label_356ac8;
        case 0x356accu: goto label_356acc;
        case 0x356ad0u: goto label_356ad0;
        case 0x356ad4u: goto label_356ad4;
        case 0x356ad8u: goto label_356ad8;
        case 0x356adcu: goto label_356adc;
        case 0x356ae0u: goto label_356ae0;
        case 0x356ae4u: goto label_356ae4;
        case 0x356ae8u: goto label_356ae8;
        case 0x356aecu: goto label_356aec;
        case 0x356af0u: goto label_356af0;
        case 0x356af4u: goto label_356af4;
        case 0x356af8u: goto label_356af8;
        case 0x356afcu: goto label_356afc;
        case 0x356b00u: goto label_356b00;
        case 0x356b04u: goto label_356b04;
        case 0x356b08u: goto label_356b08;
        case 0x356b0cu: goto label_356b0c;
        case 0x356b10u: goto label_356b10;
        case 0x356b14u: goto label_356b14;
        case 0x356b18u: goto label_356b18;
        case 0x356b1cu: goto label_356b1c;
        case 0x356b20u: goto label_356b20;
        case 0x356b24u: goto label_356b24;
        case 0x356b28u: goto label_356b28;
        case 0x356b2cu: goto label_356b2c;
        case 0x356b30u: goto label_356b30;
        case 0x356b34u: goto label_356b34;
        case 0x356b38u: goto label_356b38;
        case 0x356b3cu: goto label_356b3c;
        case 0x356b40u: goto label_356b40;
        case 0x356b44u: goto label_356b44;
        case 0x356b48u: goto label_356b48;
        case 0x356b4cu: goto label_356b4c;
        case 0x356b50u: goto label_356b50;
        case 0x356b54u: goto label_356b54;
        case 0x356b58u: goto label_356b58;
        case 0x356b5cu: goto label_356b5c;
        case 0x356b60u: goto label_356b60;
        case 0x356b64u: goto label_356b64;
        case 0x356b68u: goto label_356b68;
        case 0x356b6cu: goto label_356b6c;
        case 0x356b70u: goto label_356b70;
        case 0x356b74u: goto label_356b74;
        case 0x356b78u: goto label_356b78;
        case 0x356b7cu: goto label_356b7c;
        case 0x356b80u: goto label_356b80;
        case 0x356b84u: goto label_356b84;
        case 0x356b88u: goto label_356b88;
        case 0x356b8cu: goto label_356b8c;
        case 0x356b90u: goto label_356b90;
        case 0x356b94u: goto label_356b94;
        case 0x356b98u: goto label_356b98;
        case 0x356b9cu: goto label_356b9c;
        case 0x356ba0u: goto label_356ba0;
        case 0x356ba4u: goto label_356ba4;
        case 0x356ba8u: goto label_356ba8;
        case 0x356bacu: goto label_356bac;
        case 0x356bb0u: goto label_356bb0;
        case 0x356bb4u: goto label_356bb4;
        case 0x356bb8u: goto label_356bb8;
        case 0x356bbcu: goto label_356bbc;
        case 0x356bc0u: goto label_356bc0;
        case 0x356bc4u: goto label_356bc4;
        case 0x356bc8u: goto label_356bc8;
        case 0x356bccu: goto label_356bcc;
        case 0x356bd0u: goto label_356bd0;
        case 0x356bd4u: goto label_356bd4;
        case 0x356bd8u: goto label_356bd8;
        case 0x356bdcu: goto label_356bdc;
        case 0x356be0u: goto label_356be0;
        case 0x356be4u: goto label_356be4;
        case 0x356be8u: goto label_356be8;
        case 0x356becu: goto label_356bec;
        case 0x356bf0u: goto label_356bf0;
        case 0x356bf4u: goto label_356bf4;
        case 0x356bf8u: goto label_356bf8;
        case 0x356bfcu: goto label_356bfc;
        case 0x356c00u: goto label_356c00;
        case 0x356c04u: goto label_356c04;
        case 0x356c08u: goto label_356c08;
        case 0x356c0cu: goto label_356c0c;
        case 0x356c10u: goto label_356c10;
        case 0x356c14u: goto label_356c14;
        case 0x356c18u: goto label_356c18;
        case 0x356c1cu: goto label_356c1c;
        case 0x356c20u: goto label_356c20;
        case 0x356c24u: goto label_356c24;
        case 0x356c28u: goto label_356c28;
        case 0x356c2cu: goto label_356c2c;
        case 0x356c30u: goto label_356c30;
        case 0x356c34u: goto label_356c34;
        case 0x356c38u: goto label_356c38;
        case 0x356c3cu: goto label_356c3c;
        case 0x356c40u: goto label_356c40;
        case 0x356c44u: goto label_356c44;
        case 0x356c48u: goto label_356c48;
        case 0x356c4cu: goto label_356c4c;
        case 0x356c50u: goto label_356c50;
        case 0x356c54u: goto label_356c54;
        case 0x356c58u: goto label_356c58;
        case 0x356c5cu: goto label_356c5c;
        case 0x356c60u: goto label_356c60;
        case 0x356c64u: goto label_356c64;
        case 0x356c68u: goto label_356c68;
        case 0x356c6cu: goto label_356c6c;
        case 0x356c70u: goto label_356c70;
        case 0x356c74u: goto label_356c74;
        case 0x356c78u: goto label_356c78;
        case 0x356c7cu: goto label_356c7c;
        case 0x356c80u: goto label_356c80;
        case 0x356c84u: goto label_356c84;
        case 0x356c88u: goto label_356c88;
        case 0x356c8cu: goto label_356c8c;
        case 0x356c90u: goto label_356c90;
        case 0x356c94u: goto label_356c94;
        case 0x356c98u: goto label_356c98;
        case 0x356c9cu: goto label_356c9c;
        case 0x356ca0u: goto label_356ca0;
        case 0x356ca4u: goto label_356ca4;
        case 0x356ca8u: goto label_356ca8;
        case 0x356cacu: goto label_356cac;
        case 0x356cb0u: goto label_356cb0;
        case 0x356cb4u: goto label_356cb4;
        case 0x356cb8u: goto label_356cb8;
        case 0x356cbcu: goto label_356cbc;
        case 0x356cc0u: goto label_356cc0;
        case 0x356cc4u: goto label_356cc4;
        case 0x356cc8u: goto label_356cc8;
        case 0x356cccu: goto label_356ccc;
        case 0x356cd0u: goto label_356cd0;
        case 0x356cd4u: goto label_356cd4;
        case 0x356cd8u: goto label_356cd8;
        case 0x356cdcu: goto label_356cdc;
        case 0x356ce0u: goto label_356ce0;
        case 0x356ce4u: goto label_356ce4;
        case 0x356ce8u: goto label_356ce8;
        case 0x356cecu: goto label_356cec;
        case 0x356cf0u: goto label_356cf0;
        case 0x356cf4u: goto label_356cf4;
        case 0x356cf8u: goto label_356cf8;
        case 0x356cfcu: goto label_356cfc;
        case 0x356d00u: goto label_356d00;
        case 0x356d04u: goto label_356d04;
        case 0x356d08u: goto label_356d08;
        case 0x356d0cu: goto label_356d0c;
        case 0x356d10u: goto label_356d10;
        case 0x356d14u: goto label_356d14;
        case 0x356d18u: goto label_356d18;
        case 0x356d1cu: goto label_356d1c;
        case 0x356d20u: goto label_356d20;
        case 0x356d24u: goto label_356d24;
        case 0x356d28u: goto label_356d28;
        case 0x356d2cu: goto label_356d2c;
        case 0x356d30u: goto label_356d30;
        case 0x356d34u: goto label_356d34;
        case 0x356d38u: goto label_356d38;
        case 0x356d3cu: goto label_356d3c;
        case 0x356d40u: goto label_356d40;
        case 0x356d44u: goto label_356d44;
        case 0x356d48u: goto label_356d48;
        case 0x356d4cu: goto label_356d4c;
        case 0x356d50u: goto label_356d50;
        case 0x356d54u: goto label_356d54;
        case 0x356d58u: goto label_356d58;
        case 0x356d5cu: goto label_356d5c;
        case 0x356d60u: goto label_356d60;
        case 0x356d64u: goto label_356d64;
        case 0x356d68u: goto label_356d68;
        case 0x356d6cu: goto label_356d6c;
        case 0x356d70u: goto label_356d70;
        case 0x356d74u: goto label_356d74;
        case 0x356d78u: goto label_356d78;
        case 0x356d7cu: goto label_356d7c;
        case 0x356d80u: goto label_356d80;
        case 0x356d84u: goto label_356d84;
        case 0x356d88u: goto label_356d88;
        case 0x356d8cu: goto label_356d8c;
        case 0x356d90u: goto label_356d90;
        case 0x356d94u: goto label_356d94;
        case 0x356d98u: goto label_356d98;
        case 0x356d9cu: goto label_356d9c;
        case 0x356da0u: goto label_356da0;
        case 0x356da4u: goto label_356da4;
        case 0x356da8u: goto label_356da8;
        case 0x356dacu: goto label_356dac;
        case 0x356db0u: goto label_356db0;
        case 0x356db4u: goto label_356db4;
        case 0x356db8u: goto label_356db8;
        case 0x356dbcu: goto label_356dbc;
        case 0x356dc0u: goto label_356dc0;
        case 0x356dc4u: goto label_356dc4;
        case 0x356dc8u: goto label_356dc8;
        case 0x356dccu: goto label_356dcc;
        case 0x356dd0u: goto label_356dd0;
        case 0x356dd4u: goto label_356dd4;
        case 0x356dd8u: goto label_356dd8;
        case 0x356ddcu: goto label_356ddc;
        case 0x356de0u: goto label_356de0;
        case 0x356de4u: goto label_356de4;
        case 0x356de8u: goto label_356de8;
        case 0x356decu: goto label_356dec;
        case 0x356df0u: goto label_356df0;
        case 0x356df4u: goto label_356df4;
        case 0x356df8u: goto label_356df8;
        case 0x356dfcu: goto label_356dfc;
        case 0x356e00u: goto label_356e00;
        case 0x356e04u: goto label_356e04;
        case 0x356e08u: goto label_356e08;
        case 0x356e0cu: goto label_356e0c;
        case 0x356e10u: goto label_356e10;
        case 0x356e14u: goto label_356e14;
        case 0x356e18u: goto label_356e18;
        case 0x356e1cu: goto label_356e1c;
        case 0x356e20u: goto label_356e20;
        case 0x356e24u: goto label_356e24;
        case 0x356e28u: goto label_356e28;
        case 0x356e2cu: goto label_356e2c;
        case 0x356e30u: goto label_356e30;
        case 0x356e34u: goto label_356e34;
        case 0x356e38u: goto label_356e38;
        case 0x356e3cu: goto label_356e3c;
        case 0x356e40u: goto label_356e40;
        case 0x356e44u: goto label_356e44;
        case 0x356e48u: goto label_356e48;
        case 0x356e4cu: goto label_356e4c;
        case 0x356e50u: goto label_356e50;
        case 0x356e54u: goto label_356e54;
        case 0x356e58u: goto label_356e58;
        case 0x356e5cu: goto label_356e5c;
        case 0x356e60u: goto label_356e60;
        case 0x356e64u: goto label_356e64;
        case 0x356e68u: goto label_356e68;
        case 0x356e6cu: goto label_356e6c;
        case 0x356e70u: goto label_356e70;
        case 0x356e74u: goto label_356e74;
        case 0x356e78u: goto label_356e78;
        case 0x356e7cu: goto label_356e7c;
        case 0x356e80u: goto label_356e80;
        case 0x356e84u: goto label_356e84;
        case 0x356e88u: goto label_356e88;
        case 0x356e8cu: goto label_356e8c;
        case 0x356e90u: goto label_356e90;
        case 0x356e94u: goto label_356e94;
        case 0x356e98u: goto label_356e98;
        case 0x356e9cu: goto label_356e9c;
        case 0x356ea0u: goto label_356ea0;
        case 0x356ea4u: goto label_356ea4;
        case 0x356ea8u: goto label_356ea8;
        case 0x356eacu: goto label_356eac;
        case 0x356eb0u: goto label_356eb0;
        case 0x356eb4u: goto label_356eb4;
        case 0x356eb8u: goto label_356eb8;
        case 0x356ebcu: goto label_356ebc;
        case 0x356ec0u: goto label_356ec0;
        case 0x356ec4u: goto label_356ec4;
        case 0x356ec8u: goto label_356ec8;
        case 0x356eccu: goto label_356ecc;
        case 0x356ed0u: goto label_356ed0;
        case 0x356ed4u: goto label_356ed4;
        case 0x356ed8u: goto label_356ed8;
        case 0x356edcu: goto label_356edc;
        case 0x356ee0u: goto label_356ee0;
        case 0x356ee4u: goto label_356ee4;
        case 0x356ee8u: goto label_356ee8;
        case 0x356eecu: goto label_356eec;
        case 0x356ef0u: goto label_356ef0;
        case 0x356ef4u: goto label_356ef4;
        case 0x356ef8u: goto label_356ef8;
        case 0x356efcu: goto label_356efc;
        default: break;
    }

    ctx->pc = 0x356430u;

label_356430:
    // 0x356430: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x356430u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_356434:
    // 0x356434: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x356434u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_356438:
    // 0x356438: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x356438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_35643c:
    // 0x35643c: 0x3e00008  jr          $ra
label_356440:
    if (ctx->pc == 0x356440u) {
        ctx->pc = 0x356440u;
            // 0x356440: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x356444u;
        goto label_356444;
    }
    ctx->pc = 0x35643Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35643Cu;
            // 0x356440: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x356444u;
label_356444:
    // 0x356444: 0x0  nop
    ctx->pc = 0x356444u;
    // NOP
label_356448:
    // 0x356448: 0x0  nop
    ctx->pc = 0x356448u;
    // NOP
label_35644c:
    // 0x35644c: 0x0  nop
    ctx->pc = 0x35644cu;
    // NOP
label_356450:
    // 0x356450: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x356450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_356454:
    // 0x356454: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x356454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_356458:
    // 0x356458: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x356458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_35645c:
    // 0x35645c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35645cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_356460:
    // 0x356460: 0x8c9000e0  lw          $s0, 0xE0($a0)
    ctx->pc = 0x356460u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
label_356464:
    // 0x356464: 0xc0f49d0  jal         func_3D2740
label_356468:
    if (ctx->pc == 0x356468u) {
        ctx->pc = 0x356468u;
            // 0x356468: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35646Cu;
        goto label_35646c;
    }
    ctx->pc = 0x356464u;
    SET_GPR_U32(ctx, 31, 0x35646Cu);
    ctx->pc = 0x356468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x356464u;
            // 0x356468: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D2740u;
    if (runtime->hasFunction(0x3D2740u)) {
        auto targetFn = runtime->lookupFunction(0x3D2740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35646Cu; }
        if (ctx->pc != 0x35646Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D2740_0x3d2740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35646Cu; }
        if (ctx->pc != 0x35646Cu) { return; }
    }
    ctx->pc = 0x35646Cu;
label_35646c:
    // 0x35646c: 0xc122c94  jal         func_48B250
label_356470:
    if (ctx->pc == 0x356470u) {
        ctx->pc = 0x356470u;
            // 0x356470: 0x8e240220  lw          $a0, 0x220($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
        ctx->pc = 0x356474u;
        goto label_356474;
    }
    ctx->pc = 0x35646Cu;
    SET_GPR_U32(ctx, 31, 0x356474u);
    ctx->pc = 0x356470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35646Cu;
            // 0x356470: 0x8e240220  lw          $a0, 0x220($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B250u;
    if (runtime->hasFunction(0x48B250u)) {
        auto targetFn = runtime->lookupFunction(0x48B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356474u; }
        if (ctx->pc != 0x356474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B250_0x48b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356474u; }
        if (ctx->pc != 0x356474u) { return; }
    }
    ctx->pc = 0x356474u;
label_356474:
    // 0x356474: 0xae3000e0  sw          $s0, 0xE0($s1)
    ctx->pc = 0x356474u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 16));
label_356478:
    // 0x356478: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x356478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_35647c:
    // 0x35647c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35647cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_356480:
    // 0x356480: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x356480u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_356484:
    // 0x356484: 0x3e00008  jr          $ra
label_356488:
    if (ctx->pc == 0x356488u) {
        ctx->pc = 0x356488u;
            // 0x356488: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x35648Cu;
        goto label_35648c;
    }
    ctx->pc = 0x356484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356484u;
            // 0x356488: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35648Cu;
label_35648c:
    // 0x35648c: 0x0  nop
    ctx->pc = 0x35648cu;
    // NOP
label_356490:
    // 0x356490: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x356490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_356494:
    // 0x356494: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x356494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_356498:
    // 0x356498: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x356498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35649c:
    // 0x35649c: 0x90830278  lbu         $v1, 0x278($a0)
    ctx->pc = 0x35649cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 632)));
label_3564a0:
    // 0x3564a0: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_3564a4:
    if (ctx->pc == 0x3564A4u) {
        ctx->pc = 0x3564A4u;
            // 0x3564a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3564A8u;
        goto label_3564a8;
    }
    ctx->pc = 0x3564A0u;
    {
        const bool branch_taken_0x3564a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3564A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3564A0u;
            // 0x3564a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3564a0) {
            ctx->pc = 0x3564D4u;
            goto label_3564d4;
        }
    }
    ctx->pc = 0x3564A8u;
label_3564a8:
    // 0x3564a8: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x3564a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_3564ac:
    // 0x3564ac: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x3564acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_3564b0:
    // 0x3564b0: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
label_3564b4:
    if (ctx->pc == 0x3564B4u) {
        ctx->pc = 0x3564B4u;
            // 0x3564b4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3564B8u;
        goto label_3564b8;
    }
    ctx->pc = 0x3564B0u;
    {
        const bool branch_taken_0x3564b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3564b0) {
            ctx->pc = 0x3564B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3564B0u;
            // 0x3564b4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3564D8u;
            goto label_3564d8;
        }
    }
    ctx->pc = 0x3564B8u;
label_3564b8:
    // 0x3564b8: 0x8e040220  lw          $a0, 0x220($s0)
    ctx->pc = 0x3564b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
label_3564bc:
    // 0x3564bc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3564bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3564c0:
    // 0x3564c0: 0xc122d2c  jal         func_48B4B0
label_3564c4:
    if (ctx->pc == 0x3564C4u) {
        ctx->pc = 0x3564C4u;
            // 0x3564c4: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x3564C8u;
        goto label_3564c8;
    }
    ctx->pc = 0x3564C0u;
    SET_GPR_U32(ctx, 31, 0x3564C8u);
    ctx->pc = 0x3564C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3564C0u;
            // 0x3564c4: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3564C8u; }
        if (ctx->pc != 0x3564C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3564C8u; }
        if (ctx->pc != 0x3564C8u) { return; }
    }
    ctx->pc = 0x3564C8u;
label_3564c8:
    // 0x3564c8: 0x92030278  lbu         $v1, 0x278($s0)
    ctx->pc = 0x3564c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 632)));
label_3564cc:
    // 0x3564cc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3564ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3564d0:
    // 0x3564d0: 0xa2030278  sb          $v1, 0x278($s0)
    ctx->pc = 0x3564d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 632), (uint8_t)GPR_U32(ctx, 3));
label_3564d4:
    // 0x3564d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3564d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3564d8:
    // 0x3564d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3564d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3564dc:
    // 0x3564dc: 0x3e00008  jr          $ra
label_3564e0:
    if (ctx->pc == 0x3564E0u) {
        ctx->pc = 0x3564E0u;
            // 0x3564e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3564E4u;
        goto label_3564e4;
    }
    ctx->pc = 0x3564DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3564E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3564DCu;
            // 0x3564e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3564E4u;
label_3564e4:
    // 0x3564e4: 0x0  nop
    ctx->pc = 0x3564e4u;
    // NOP
label_3564e8:
    // 0x3564e8: 0x0  nop
    ctx->pc = 0x3564e8u;
    // NOP
label_3564ec:
    // 0x3564ec: 0x0  nop
    ctx->pc = 0x3564ecu;
    // NOP
label_3564f0:
    // 0x3564f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3564f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3564f4:
    // 0x3564f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3564f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3564f8:
    // 0x3564f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3564f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3564fc:
    // 0x3564fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3564fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_356500:
    // 0x356500: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x356500u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_356504:
    // 0x356504: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x356504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_356508:
    // 0x356508: 0x8c840220  lw          $a0, 0x220($a0)
    ctx->pc = 0x356508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 544)));
label_35650c:
    // 0x35650c: 0xc122d2c  jal         func_48B4B0
label_356510:
    if (ctx->pc == 0x356510u) {
        ctx->pc = 0x356510u;
            // 0x356510: 0x26260010  addiu       $a2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x356514u;
        goto label_356514;
    }
    ctx->pc = 0x35650Cu;
    SET_GPR_U32(ctx, 31, 0x356514u);
    ctx->pc = 0x356510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35650Cu;
            // 0x356510: 0x26260010  addiu       $a2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356514u; }
        if (ctx->pc != 0x356514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356514u; }
        if (ctx->pc != 0x356514u) { return; }
    }
    ctx->pc = 0x356514u;
label_356514:
    // 0x356514: 0xc04ab66  jal         func_12AD98
label_356518:
    if (ctx->pc == 0x356518u) {
        ctx->pc = 0x35651Cu;
        goto label_35651c;
    }
    ctx->pc = 0x356514u;
    SET_GPR_U32(ctx, 31, 0x35651Cu);
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35651Cu; }
        if (ctx->pc != 0x35651Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35651Cu; }
        if (ctx->pc != 0x35651Cu) { return; }
    }
    ctx->pc = 0x35651Cu;
label_35651c:
    // 0x35651c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x35651cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_356520:
    // 0x356520: 0xc04ab66  jal         func_12AD98
label_356524:
    if (ctx->pc == 0x356524u) {
        ctx->pc = 0x356524u;
            // 0x356524: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x356528u;
        goto label_356528;
    }
    ctx->pc = 0x356520u;
    SET_GPR_U32(ctx, 31, 0x356528u);
    ctx->pc = 0x356524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x356520u;
            // 0x356524: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356528u; }
        if (ctx->pc != 0x356528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356528u; }
        if (ctx->pc != 0x356528u) { return; }
    }
    ctx->pc = 0x356528u;
label_356528:
    // 0x356528: 0x502025  or          $a0, $v0, $s0
    ctx->pc = 0x356528u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_35652c:
    // 0x35652c: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x35652cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_356530:
    // 0x356530: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x356530u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_356534:
    // 0x356534: 0x1810  mfhi        $v1
    ctx->pc = 0x356534u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_356538:
    // 0x356538: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_35653c:
    if (ctx->pc == 0x35653Cu) {
        ctx->pc = 0x35653Cu;
            // 0x35653c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x356540u;
        goto label_356540;
    }
    ctx->pc = 0x356538u;
    {
        const bool branch_taken_0x356538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x356538) {
            ctx->pc = 0x35653Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x356538u;
            // 0x35653c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x356554u;
            goto label_356554;
        }
    }
    ctx->pc = 0x356540u;
label_356540:
    // 0x356540: 0x8e240220  lw          $a0, 0x220($s1)
    ctx->pc = 0x356540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
label_356544:
    // 0x356544: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x356544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_356548:
    // 0x356548: 0xc122d2c  jal         func_48B4B0
label_35654c:
    if (ctx->pc == 0x35654Cu) {
        ctx->pc = 0x35654Cu;
            // 0x35654c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x356550u;
        goto label_356550;
    }
    ctx->pc = 0x356548u;
    SET_GPR_U32(ctx, 31, 0x356550u);
    ctx->pc = 0x35654Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x356548u;
            // 0x35654c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356550u; }
        if (ctx->pc != 0x356550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356550u; }
        if (ctx->pc != 0x356550u) { return; }
    }
    ctx->pc = 0x356550u;
label_356550:
    // 0x356550: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x356550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_356554:
    // 0x356554: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x356554u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_356558:
    // 0x356558: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x356558u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35655c:
    // 0x35655c: 0x3e00008  jr          $ra
label_356560:
    if (ctx->pc == 0x356560u) {
        ctx->pc = 0x356560u;
            // 0x356560: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x356564u;
        goto label_356564;
    }
    ctx->pc = 0x35655Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35655Cu;
            // 0x356560: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x356564u;
label_356564:
    // 0x356564: 0x0  nop
    ctx->pc = 0x356564u;
    // NOP
label_356568:
    // 0x356568: 0x0  nop
    ctx->pc = 0x356568u;
    // NOP
label_35656c:
    // 0x35656c: 0x0  nop
    ctx->pc = 0x35656cu;
    // NOP
label_356570:
    // 0x356570: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x356570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_356574:
    // 0x356574: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x356574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_356578:
    // 0x356578: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x356578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35657c:
    // 0x35657c: 0x9083004d  lbu         $v1, 0x4D($a0)
    ctx->pc = 0x35657cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 77)));
label_356580:
    // 0x356580: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_356584:
    if (ctx->pc == 0x356584u) {
        ctx->pc = 0x356584u;
            // 0x356584: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x356588u;
        goto label_356588;
    }
    ctx->pc = 0x356580u;
    {
        const bool branch_taken_0x356580 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x356584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356580u;
            // 0x356584: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356580) {
            ctx->pc = 0x356594u;
            goto label_356594;
        }
    }
    ctx->pc = 0x356588u;
label_356588:
    // 0x356588: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x356588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_35658c:
    // 0x35658c: 0xc0baaa0  jal         func_2EAA80
label_356590:
    if (ctx->pc == 0x356590u) {
        ctx->pc = 0x356590u;
            // 0x356590: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x356594u;
        goto label_356594;
    }
    ctx->pc = 0x35658Cu;
    SET_GPR_U32(ctx, 31, 0x356594u);
    ctx->pc = 0x356590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35658Cu;
            // 0x356590: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EAA80u;
    if (runtime->hasFunction(0x2EAA80u)) {
        auto targetFn = runtime->lookupFunction(0x2EAA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356594u; }
        if (ctx->pc != 0x356594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EAA80_0x2eaa80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356594u; }
        if (ctx->pc != 0x356594u) { return; }
    }
    ctx->pc = 0x356594u;
label_356594:
    // 0x356594: 0x9203027a  lbu         $v1, 0x27A($s0)
    ctx->pc = 0x356594u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 634)));
label_356598:
    // 0x356598: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_35659c:
    if (ctx->pc == 0x35659Cu) {
        ctx->pc = 0x35659Cu;
            // 0x35659c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3565A0u;
        goto label_3565a0;
    }
    ctx->pc = 0x356598u;
    {
        const bool branch_taken_0x356598 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x356598) {
            ctx->pc = 0x35659Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x356598u;
            // 0x35659c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3565B8u;
            goto label_3565b8;
        }
    }
    ctx->pc = 0x3565A0u;
label_3565a0:
    // 0x3565a0: 0x8e040220  lw          $a0, 0x220($s0)
    ctx->pc = 0x3565a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
label_3565a4:
    // 0x3565a4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3565a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3565a8:
    // 0x3565a8: 0xc122d2c  jal         func_48B4B0
label_3565ac:
    if (ctx->pc == 0x3565ACu) {
        ctx->pc = 0x3565ACu;
            // 0x3565ac: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x3565B0u;
        goto label_3565b0;
    }
    ctx->pc = 0x3565A8u;
    SET_GPR_U32(ctx, 31, 0x3565B0u);
    ctx->pc = 0x3565ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3565A8u;
            // 0x3565ac: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3565B0u; }
        if (ctx->pc != 0x3565B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3565B0u; }
        if (ctx->pc != 0x3565B0u) { return; }
    }
    ctx->pc = 0x3565B0u;
label_3565b0:
    // 0x3565b0: 0xa200027a  sb          $zero, 0x27A($s0)
    ctx->pc = 0x3565b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 634), (uint8_t)GPR_U32(ctx, 0));
label_3565b4:
    // 0x3565b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3565b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3565b8:
    // 0x3565b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3565b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3565bc:
    // 0x3565bc: 0x3e00008  jr          $ra
label_3565c0:
    if (ctx->pc == 0x3565C0u) {
        ctx->pc = 0x3565C0u;
            // 0x3565c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3565C4u;
        goto label_3565c4;
    }
    ctx->pc = 0x3565BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3565C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3565BCu;
            // 0x3565c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3565C4u;
label_3565c4:
    // 0x3565c4: 0x0  nop
    ctx->pc = 0x3565c4u;
    // NOP
label_3565c8:
    // 0x3565c8: 0x0  nop
    ctx->pc = 0x3565c8u;
    // NOP
label_3565cc:
    // 0x3565cc: 0x0  nop
    ctx->pc = 0x3565ccu;
    // NOP
label_3565d0:
    // 0x3565d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3565d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3565d4:
    // 0x3565d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3565d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3565d8:
    // 0x3565d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3565d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3565dc:
    // 0x3565dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3565dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3565e0:
    // 0x3565e0: 0x8c840220  lw          $a0, 0x220($a0)
    ctx->pc = 0x3565e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 544)));
label_3565e4:
    // 0x3565e4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3565e8:
    if (ctx->pc == 0x3565E8u) {
        ctx->pc = 0x3565E8u;
            // 0x3565e8: 0xae000220  sw          $zero, 0x220($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
        ctx->pc = 0x3565ECu;
        goto label_3565ec;
    }
    ctx->pc = 0x3565E4u;
    {
        const bool branch_taken_0x3565e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3565e4) {
            ctx->pc = 0x3565E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3565E4u;
            // 0x3565e8: 0xae000220  sw          $zero, 0x220($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x356600u;
            goto label_356600;
        }
    }
    ctx->pc = 0x3565ECu;
label_3565ec:
    // 0x3565ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3565ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3565f0:
    // 0x3565f0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3565f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3565f4:
    // 0x3565f4: 0x320f809  jalr        $t9
label_3565f8:
    if (ctx->pc == 0x3565F8u) {
        ctx->pc = 0x3565F8u;
            // 0x3565f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3565FCu;
        goto label_3565fc;
    }
    ctx->pc = 0x3565F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3565FCu);
        ctx->pc = 0x3565F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3565F4u;
            // 0x3565f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3565FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3565FCu; }
            if (ctx->pc != 0x3565FCu) { return; }
        }
        }
    }
    ctx->pc = 0x3565FCu;
label_3565fc:
    // 0x3565fc: 0xae000220  sw          $zero, 0x220($s0)
    ctx->pc = 0x3565fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
label_356600:
    // 0x356600: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x356600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_356604:
    // 0x356604: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_356608:
    if (ctx->pc == 0x356608u) {
        ctx->pc = 0x356608u;
            // 0x356608: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x35660Cu;
        goto label_35660c;
    }
    ctx->pc = 0x356604u;
    {
        const bool branch_taken_0x356604 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x356604) {
            ctx->pc = 0x356608u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x356604u;
            // 0x356608: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x356620u;
            goto label_356620;
        }
    }
    ctx->pc = 0x35660Cu;
label_35660c:
    // 0x35660c: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x35660cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_356610:
    // 0x356610: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x356610u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_356614:
    // 0x356614: 0x320f809  jalr        $t9
label_356618:
    if (ctx->pc == 0x356618u) {
        ctx->pc = 0x356618u;
            // 0x356618: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x35661Cu;
        goto label_35661c;
    }
    ctx->pc = 0x356614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35661Cu);
        ctx->pc = 0x356618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356614u;
            // 0x356618: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35661Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35661Cu; }
            if (ctx->pc != 0x35661Cu) { return; }
        }
        }
    }
    ctx->pc = 0x35661Cu;
label_35661c:
    // 0x35661c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x35661cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_356620:
    // 0x356620: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x356620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_356624:
    // 0x356624: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_356628:
    if (ctx->pc == 0x356628u) {
        ctx->pc = 0x356628u;
            // 0x356628: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x35662Cu;
        goto label_35662c;
    }
    ctx->pc = 0x356624u;
    {
        const bool branch_taken_0x356624 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x356624) {
            ctx->pc = 0x356628u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x356624u;
            // 0x356628: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x356640u;
            goto label_356640;
        }
    }
    ctx->pc = 0x35662Cu;
label_35662c:
    // 0x35662c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x35662cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_356630:
    // 0x356630: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x356630u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_356634:
    // 0x356634: 0x320f809  jalr        $t9
label_356638:
    if (ctx->pc == 0x356638u) {
        ctx->pc = 0x356638u;
            // 0x356638: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x35663Cu;
        goto label_35663c;
    }
    ctx->pc = 0x356634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35663Cu);
        ctx->pc = 0x356638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356634u;
            // 0x356638: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35663Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35663Cu; }
            if (ctx->pc != 0x35663Cu) { return; }
        }
        }
    }
    ctx->pc = 0x35663Cu;
label_35663c:
    // 0x35663c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x35663cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_356640:
    // 0x356640: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x356640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_356644:
    // 0x356644: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x356644u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_356648:
    // 0x356648: 0x3e00008  jr          $ra
label_35664c:
    if (ctx->pc == 0x35664Cu) {
        ctx->pc = 0x35664Cu;
            // 0x35664c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x356650u;
        goto label_356650;
    }
    ctx->pc = 0x356648u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35664Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356648u;
            // 0x35664c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x356650u;
label_356650:
    // 0x356650: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x356650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_356654:
    // 0x356654: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x356654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_356658:
    // 0x356658: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x356658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_35665c:
    // 0x35665c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35665cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_356660:
    // 0x356660: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x356660u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_356664:
    // 0x356664: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x356664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_356668:
    // 0x356668: 0xc0892d0  jal         func_224B40
label_35666c:
    if (ctx->pc == 0x35666Cu) {
        ctx->pc = 0x35666Cu;
            // 0x35666c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x356670u;
        goto label_356670;
    }
    ctx->pc = 0x356668u;
    SET_GPR_U32(ctx, 31, 0x356670u);
    ctx->pc = 0x35666Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x356668u;
            // 0x35666c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356670u; }
        if (ctx->pc != 0x356670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356670u; }
        if (ctx->pc != 0x356670u) { return; }
    }
    ctx->pc = 0x356670u;
label_356670:
    // 0x356670: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x356670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_356674:
    // 0x356674: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x356674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_356678:
    // 0x356678: 0x8c423ff8  lw          $v0, 0x3FF8($v0)
    ctx->pc = 0x356678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16376)));
label_35667c:
    // 0x35667c: 0x8c50005c  lw          $s0, 0x5C($v0)
    ctx->pc = 0x35667cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_356680:
    // 0x356680: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x356680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_356684:
    // 0x356684: 0xc0b6e68  jal         func_2DB9A0
label_356688:
    if (ctx->pc == 0x356688u) {
        ctx->pc = 0x356688u;
            // 0x356688: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x35668Cu;
        goto label_35668c;
    }
    ctx->pc = 0x356684u;
    SET_GPR_U32(ctx, 31, 0x35668Cu);
    ctx->pc = 0x356688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x356684u;
            // 0x356688: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35668Cu; }
        if (ctx->pc != 0x35668Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35668Cu; }
        if (ctx->pc != 0x35668Cu) { return; }
    }
    ctx->pc = 0x35668Cu;
label_35668c:
    // 0x35668c: 0xc0b6dac  jal         func_2DB6B0
label_356690:
    if (ctx->pc == 0x356690u) {
        ctx->pc = 0x356690u;
            // 0x356690: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x356694u;
        goto label_356694;
    }
    ctx->pc = 0x35668Cu;
    SET_GPR_U32(ctx, 31, 0x356694u);
    ctx->pc = 0x356690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35668Cu;
            // 0x356690: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356694u; }
        if (ctx->pc != 0x356694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356694u; }
        if (ctx->pc != 0x356694u) { return; }
    }
    ctx->pc = 0x356694u;
label_356694:
    // 0x356694: 0xc0cac94  jal         func_32B250
label_356698:
    if (ctx->pc == 0x356698u) {
        ctx->pc = 0x356698u;
            // 0x356698: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x35669Cu;
        goto label_35669c;
    }
    ctx->pc = 0x356694u;
    SET_GPR_U32(ctx, 31, 0x35669Cu);
    ctx->pc = 0x356698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x356694u;
            // 0x356698: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35669Cu; }
        if (ctx->pc != 0x35669Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35669Cu; }
        if (ctx->pc != 0x35669Cu) { return; }
    }
    ctx->pc = 0x35669Cu;
label_35669c:
    // 0x35669c: 0xc0cac84  jal         func_32B210
label_3566a0:
    if (ctx->pc == 0x3566A0u) {
        ctx->pc = 0x3566A0u;
            // 0x3566a0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3566A4u;
        goto label_3566a4;
    }
    ctx->pc = 0x35669Cu;
    SET_GPR_U32(ctx, 31, 0x3566A4u);
    ctx->pc = 0x3566A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35669Cu;
            // 0x3566a0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3566A4u; }
        if (ctx->pc != 0x3566A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3566A4u; }
        if (ctx->pc != 0x3566A4u) { return; }
    }
    ctx->pc = 0x3566A4u;
label_3566a4:
    // 0x3566a4: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x3566a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_3566a8:
    // 0x3566a8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x3566a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_3566ac:
    // 0x3566ac: 0xc44cc910  lwc1        $f12, -0x36F0($v0)
    ctx->pc = 0x3566acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3566b0:
    // 0x3566b0: 0xc0a5a68  jal         func_2969A0
label_3566b4:
    if (ctx->pc == 0x3566B4u) {
        ctx->pc = 0x3566B4u;
            // 0x3566b4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3566B8u;
        goto label_3566b8;
    }
    ctx->pc = 0x3566B0u;
    SET_GPR_U32(ctx, 31, 0x3566B8u);
    ctx->pc = 0x3566B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3566B0u;
            // 0x3566b4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3566B8u; }
        if (ctx->pc != 0x3566B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3566B8u; }
        if (ctx->pc != 0x3566B8u) { return; }
    }
    ctx->pc = 0x3566B8u;
label_3566b8:
    // 0x3566b8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3566b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3566bc:
    // 0x3566bc: 0x3c0942c8  lui         $t1, 0x42C8
    ctx->pc = 0x3566bcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17096 << 16));
label_3566c0:
    // 0x3566c0: 0x8c433ff8  lw          $v1, 0x3FF8($v0)
    ctx->pc = 0x3566c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16376)));
label_3566c4:
    // 0x3566c4: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x3566c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3566c8:
    // 0x3566c8: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x3566c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3566cc:
    // 0x3566cc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3566ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3566d0:
    // 0x3566d0: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x3566d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3566d4:
    // 0x3566d4: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x3566d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_3566d8:
    // 0x3566d8: 0x8c64005c  lw          $a0, 0x5C($v1)
    ctx->pc = 0x3566d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_3566dc:
    // 0x3566dc: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x3566dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_3566e0:
    // 0x3566e0: 0x3447cccd  ori         $a3, $v0, 0xCCCD
    ctx->pc = 0x3566e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_3566e4:
    // 0x3566e4: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x3566e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_3566e8:
    // 0x3566e8: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x3566e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_3566ec:
    // 0x3566ec: 0xafa400c4  sw          $a0, 0xC4($sp)
    ctx->pc = 0x3566ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 4));
label_3566f0:
    // 0x3566f0: 0x34430180  ori         $v1, $v0, 0x180
    ctx->pc = 0x3566f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)384);
label_3566f4:
    // 0x3566f4: 0xc62a0018  lwc1        $f10, 0x18($s1)
    ctx->pc = 0x3566f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_3566f8:
    // 0x3566f8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3566f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3566fc:
    // 0x3566fc: 0xc6290014  lwc1        $f9, 0x14($s1)
    ctx->pc = 0x3566fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_356700:
    // 0x356700: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x356700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_356704:
    // 0x356704: 0xc6280010  lwc1        $f8, 0x10($s1)
    ctx->pc = 0x356704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_356708:
    // 0x356708: 0xc7a70090  lwc1        $f7, 0x90($sp)
    ctx->pc = 0x356708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_35670c:
    // 0x35670c: 0xc7a60094  lwc1        $f6, 0x94($sp)
    ctx->pc = 0x35670cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_356710:
    // 0x356710: 0xe7a20124  swc1        $f2, 0x124($sp)
    ctx->pc = 0x356710u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_356714:
    // 0x356714: 0xafa90168  sw          $t1, 0x168($sp)
    ctx->pc = 0x356714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 9));
label_356718:
    // 0x356718: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x356718u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_35671c:
    // 0x35671c: 0xa3a80170  sb          $t0, 0x170($sp)
    ctx->pc = 0x35671cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 8));
label_356720:
    // 0x356720: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x356720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_356724:
    // 0x356724: 0xafa7016c  sw          $a3, 0x16C($sp)
    ctx->pc = 0x356724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 7));
label_356728:
    // 0x356728: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x356728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35672c:
    // 0x35672c: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x35672cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_356730:
    // 0x356730: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x356730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_356734:
    // 0x356734: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x356734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_356738:
    // 0x356738: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x356738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35673c:
    // 0x35673c: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x35673cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_356740:
    // 0x356740: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x356740u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_356744:
    // 0x356744: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x356744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_356748:
    // 0x356748: 0xc7a200bc  lwc1        $f2, 0xBC($sp)
    ctx->pc = 0x356748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35674c:
    // 0x35674c: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x35674cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_356750:
    // 0x356750: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x356750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_356754:
    // 0x356754: 0xe7a2013c  swc1        $f2, 0x13C($sp)
    ctx->pc = 0x356754u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_356758:
    // 0x356758: 0xe7a10140  swc1        $f1, 0x140($sp)
    ctx->pc = 0x356758u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_35675c:
    // 0x35675c: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x35675cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_356760:
    // 0x356760: 0xc7a50098  lwc1        $f5, 0x98($sp)
    ctx->pc = 0x356760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_356764:
    // 0x356764: 0xc7a4009c  lwc1        $f4, 0x9C($sp)
    ctx->pc = 0x356764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_356768:
    // 0x356768: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x356768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_35676c:
    // 0x35676c: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x35676cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_356770:
    // 0x356770: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x356770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_356774:
    // 0x356774: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x356774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_356778:
    // 0x356778: 0xe7a800d0  swc1        $f8, 0xD0($sp)
    ctx->pc = 0x356778u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_35677c:
    // 0x35677c: 0xe7a900d4  swc1        $f9, 0xD4($sp)
    ctx->pc = 0x35677cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_356780:
    // 0x356780: 0xe7aa00d8  swc1        $f10, 0xD8($sp)
    ctx->pc = 0x356780u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_356784:
    // 0x356784: 0xe7a70110  swc1        $f7, 0x110($sp)
    ctx->pc = 0x356784u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_356788:
    // 0x356788: 0xe7a60114  swc1        $f6, 0x114($sp)
    ctx->pc = 0x356788u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_35678c:
    // 0x35678c: 0xe7a50118  swc1        $f5, 0x118($sp)
    ctx->pc = 0x35678cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_356790:
    // 0x356790: 0xe7a4011c  swc1        $f4, 0x11C($sp)
    ctx->pc = 0x356790u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_356794:
    // 0x356794: 0xe7a30120  swc1        $f3, 0x120($sp)
    ctx->pc = 0x356794u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_356798:
    // 0x356798: 0xe7a20148  swc1        $f2, 0x148($sp)
    ctx->pc = 0x356798u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_35679c:
    // 0x35679c: 0xe7a1014c  swc1        $f1, 0x14C($sp)
    ctx->pc = 0x35679cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_3567a0:
    // 0x3567a0: 0xc0a7a88  jal         func_29EA20
label_3567a4:
    if (ctx->pc == 0x3567A4u) {
        ctx->pc = 0x3567A4u;
            // 0x3567a4: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x3567A8u;
        goto label_3567a8;
    }
    ctx->pc = 0x3567A0u;
    SET_GPR_U32(ctx, 31, 0x3567A8u);
    ctx->pc = 0x3567A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3567A0u;
            // 0x3567a4: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3567A8u; }
        if (ctx->pc != 0x3567A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3567A8u; }
        if (ctx->pc != 0x3567A8u) { return; }
    }
    ctx->pc = 0x3567A8u;
label_3567a8:
    // 0x3567a8: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x3567a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_3567ac:
    // 0x3567ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3567acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3567b0:
    // 0x3567b0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_3567b4:
    if (ctx->pc == 0x3567B4u) {
        ctx->pc = 0x3567B4u;
            // 0x3567b4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3567B8u;
        goto label_3567b8;
    }
    ctx->pc = 0x3567B0u;
    {
        const bool branch_taken_0x3567b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3567B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3567B0u;
            // 0x3567b4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3567b0) {
            ctx->pc = 0x356800u;
            goto label_356800;
        }
    }
    ctx->pc = 0x3567B8u;
label_3567b8:
    // 0x3567b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3567b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3567bc:
    // 0x3567bc: 0xc088ef4  jal         func_223BD0
label_3567c0:
    if (ctx->pc == 0x3567C0u) {
        ctx->pc = 0x3567C0u;
            // 0x3567c0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x3567C4u;
        goto label_3567c4;
    }
    ctx->pc = 0x3567BCu;
    SET_GPR_U32(ctx, 31, 0x3567C4u);
    ctx->pc = 0x3567C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3567BCu;
            // 0x3567c0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3567C4u; }
        if (ctx->pc != 0x3567C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3567C4u; }
        if (ctx->pc != 0x3567C4u) { return; }
    }
    ctx->pc = 0x3567C4u;
label_3567c4:
    // 0x3567c4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3567c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3567c8:
    // 0x3567c8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3567c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3567cc:
    // 0x3567cc: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x3567ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_3567d0:
    // 0x3567d0: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x3567d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_3567d4:
    // 0x3567d4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3567d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3567d8:
    // 0x3567d8: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x3567d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_3567dc:
    // 0x3567dc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3567dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3567e0:
    // 0x3567e0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3567e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3567e4:
    // 0x3567e4: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x3567e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_3567e8:
    // 0x3567e8: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x3567e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_3567ec:
    // 0x3567ec: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x3567ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_3567f0:
    // 0x3567f0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3567f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3567f4:
    // 0x3567f4: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x3567f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3567f8:
    // 0x3567f8: 0xc088b38  jal         func_222CE0
label_3567fc:
    if (ctx->pc == 0x3567FCu) {
        ctx->pc = 0x3567FCu;
            // 0x3567fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x356800u;
        goto label_356800;
    }
    ctx->pc = 0x3567F8u;
    SET_GPR_U32(ctx, 31, 0x356800u);
    ctx->pc = 0x3567FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3567F8u;
            // 0x3567fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356800u; }
        if (ctx->pc != 0x356800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356800u; }
        if (ctx->pc != 0x356800u) { return; }
    }
    ctx->pc = 0x356800u;
label_356800:
    // 0x356800: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x356800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_356804:
    // 0x356804: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x356804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_356808:
    // 0x356808: 0x244221a0  addiu       $v0, $v0, 0x21A0
    ctx->pc = 0x356808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8608));
label_35680c:
    // 0x35680c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x35680cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_356810:
    // 0x356810: 0xae020200  sw          $v0, 0x200($s0)
    ctx->pc = 0x356810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 2));
label_356814:
    // 0x356814: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x356814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_356818:
    // 0x356818: 0xc08914c  jal         func_224530
label_35681c:
    if (ctx->pc == 0x35681Cu) {
        ctx->pc = 0x35681Cu;
            // 0x35681c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x356820u;
        goto label_356820;
    }
    ctx->pc = 0x356818u;
    SET_GPR_U32(ctx, 31, 0x356820u);
    ctx->pc = 0x35681Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x356818u;
            // 0x35681c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356820u; }
        if (ctx->pc != 0x356820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356820u; }
        if (ctx->pc != 0x356820u) { return; }
    }
    ctx->pc = 0x356820u;
label_356820:
    // 0x356820: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x356820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_356824:
    // 0x356824: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x356824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_356828:
    // 0x356828: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x356828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35682c:
    // 0x35682c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x35682cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_356830:
    // 0x356830: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x356830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_356834:
    // 0x356834: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x356834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_356838:
    // 0x356838: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x356838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_35683c:
    // 0x35683c: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x35683cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_356840:
    // 0x356840: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x356840u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_356844:
    // 0x356844: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x356844u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_356848:
    // 0x356848: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x356848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_35684c:
    // 0x35684c: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x35684cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_356850:
    // 0x356850: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x356850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_356854:
    // 0x356854: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x356854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_356858:
    // 0x356858: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x356858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_35685c:
    // 0x35685c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x35685cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_356860:
    // 0x356860: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x356860u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_356864:
    // 0x356864: 0xc0892b0  jal         func_224AC0
label_356868:
    if (ctx->pc == 0x356868u) {
        ctx->pc = 0x356868u;
            // 0x356868: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x35686Cu;
        goto label_35686c;
    }
    ctx->pc = 0x356864u;
    SET_GPR_U32(ctx, 31, 0x35686Cu);
    ctx->pc = 0x356868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x356864u;
            // 0x356868: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35686Cu; }
        if (ctx->pc != 0x35686Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35686Cu; }
        if (ctx->pc != 0x35686Cu) { return; }
    }
    ctx->pc = 0x35686Cu;
label_35686c:
    // 0x35686c: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x35686cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_356870:
    // 0x356870: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x356870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_356874:
    // 0x356874: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x356874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_356878:
    // 0x356878: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x356878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_35687c:
    // 0x35687c: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x35687cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_356880:
    // 0x356880: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x356880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_356884:
    // 0x356884: 0xc0891d8  jal         func_224760
label_356888:
    if (ctx->pc == 0x356888u) {
        ctx->pc = 0x356888u;
            // 0x356888: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x35688Cu;
        goto label_35688c;
    }
    ctx->pc = 0x356884u;
    SET_GPR_U32(ctx, 31, 0x35688Cu);
    ctx->pc = 0x356888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x356884u;
            // 0x356888: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35688Cu; }
        if (ctx->pc != 0x35688Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35688Cu; }
        if (ctx->pc != 0x35688Cu) { return; }
    }
    ctx->pc = 0x35688Cu;
label_35688c:
    // 0x35688c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x35688cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_356890:
    // 0x356890: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x356890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_356894:
    // 0x356894: 0xae020154  sw          $v0, 0x154($s0)
    ctx->pc = 0x356894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
label_356898:
    // 0x356898: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x356898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35689c:
    // 0x35689c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35689cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3568a0:
    // 0x3568a0: 0xae030158  sw          $v1, 0x158($s0)
    ctx->pc = 0x3568a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 3));
label_3568a4:
    // 0x3568a4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3568a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3568a8:
    // 0x3568a8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3568a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3568ac:
    // 0x3568ac: 0xc08c164  jal         func_230590
label_3568b0:
    if (ctx->pc == 0x3568B0u) {
        ctx->pc = 0x3568B0u;
            // 0x3568b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3568B4u;
        goto label_3568b4;
    }
    ctx->pc = 0x3568ACu;
    SET_GPR_U32(ctx, 31, 0x3568B4u);
    ctx->pc = 0x3568B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3568ACu;
            // 0x3568b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3568B4u; }
        if (ctx->pc != 0x3568B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3568B4u; }
        if (ctx->pc != 0x3568B4u) { return; }
    }
    ctx->pc = 0x3568B4u;
label_3568b4:
    // 0x3568b4: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x3568b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_3568b8:
    // 0x3568b8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3568b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3568bc:
    // 0x3568bc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3568bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3568c0:
    // 0x3568c0: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x3568c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_3568c4:
    // 0x3568c4: 0xc0a7a88  jal         func_29EA20
label_3568c8:
    if (ctx->pc == 0x3568C8u) {
        ctx->pc = 0x3568C8u;
            // 0x3568c8: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x3568CCu;
        goto label_3568cc;
    }
    ctx->pc = 0x3568C4u;
    SET_GPR_U32(ctx, 31, 0x3568CCu);
    ctx->pc = 0x3568C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3568C4u;
            // 0x3568c8: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3568CCu; }
        if (ctx->pc != 0x3568CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3568CCu; }
        if (ctx->pc != 0x3568CCu) { return; }
    }
    ctx->pc = 0x3568CCu;
label_3568cc:
    // 0x3568cc: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x3568ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_3568d0:
    // 0x3568d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3568d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3568d4:
    // 0x3568d4: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_3568d8:
    if (ctx->pc == 0x3568D8u) {
        ctx->pc = 0x3568D8u;
            // 0x3568d8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3568DCu;
        goto label_3568dc;
    }
    ctx->pc = 0x3568D4u;
    {
        const bool branch_taken_0x3568d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3568D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3568D4u;
            // 0x3568d8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3568d4) {
            ctx->pc = 0x3568F8u;
            goto label_3568f8;
        }
    }
    ctx->pc = 0x3568DCu;
label_3568dc:
    // 0x3568dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3568dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3568e0:
    // 0x3568e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3568e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3568e4:
    // 0x3568e4: 0xc0869d0  jal         func_21A740
label_3568e8:
    if (ctx->pc == 0x3568E8u) {
        ctx->pc = 0x3568E8u;
            // 0x3568e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3568ECu;
        goto label_3568ec;
    }
    ctx->pc = 0x3568E4u;
    SET_GPR_U32(ctx, 31, 0x3568ECu);
    ctx->pc = 0x3568E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3568E4u;
            // 0x3568e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3568ECu; }
        if (ctx->pc != 0x3568ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3568ECu; }
        if (ctx->pc != 0x3568ECu) { return; }
    }
    ctx->pc = 0x3568ECu;
label_3568ec:
    // 0x3568ec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3568ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3568f0:
    // 0x3568f0: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x3568f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_3568f4:
    // 0x3568f4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3568f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3568f8:
    // 0x3568f8: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x3568f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_3568fc:
    // 0x3568fc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3568fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_356900:
    // 0x356900: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x356900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_356904:
    // 0x356904: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x356904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_356908:
    // 0x356908: 0xc08c650  jal         func_231940
label_35690c:
    if (ctx->pc == 0x35690Cu) {
        ctx->pc = 0x35690Cu;
            // 0x35690c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x356910u;
        goto label_356910;
    }
    ctx->pc = 0x356908u;
    SET_GPR_U32(ctx, 31, 0x356910u);
    ctx->pc = 0x35690Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x356908u;
            // 0x35690c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356910u; }
        if (ctx->pc != 0x356910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356910u; }
        if (ctx->pc != 0x356910u) { return; }
    }
    ctx->pc = 0x356910u;
label_356910:
    // 0x356910: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x356910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_356914:
    // 0x356914: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x356914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_356918:
    // 0x356918: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x356918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_35691c:
    // 0x35691c: 0x24634390  addiu       $v1, $v1, 0x4390
    ctx->pc = 0x35691cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17296));
label_356920:
    // 0x356920: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x356920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_356924:
    // 0x356924: 0x8c450968  lw          $a1, 0x968($v0)
    ctx->pc = 0x356924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
label_356928:
    // 0x356928: 0x90420c6a  lbu         $v0, 0xC6A($v0)
    ctx->pc = 0x356928u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3178)));
label_35692c:
    // 0x35692c: 0x38a50010  xori        $a1, $a1, 0x10
    ctx->pc = 0x35692cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)16);
label_356930:
    // 0x356930: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x356930u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_356934:
    // 0x356934: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x356934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_356938:
    // 0x356938: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x356938u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_35693c:
    // 0x35693c: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x35693cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_356940:
    // 0x356940: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x356940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_356944:
    // 0x356944: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x356944u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_356948:
    // 0x356948: 0xc040180  jal         func_100600
label_35694c:
    if (ctx->pc == 0x35694Cu) {
        ctx->pc = 0x35694Cu;
            // 0x35694c: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x356950u;
        goto label_356950;
    }
    ctx->pc = 0x356948u;
    SET_GPR_U32(ctx, 31, 0x356950u);
    ctx->pc = 0x35694Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x356948u;
            // 0x35694c: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356950u; }
        if (ctx->pc != 0x356950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356950u; }
        if (ctx->pc != 0x356950u) { return; }
    }
    ctx->pc = 0x356950u;
label_356950:
    // 0x356950: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x356950u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_356954:
    // 0x356954: 0x5240000f  beql        $s2, $zero, . + 4 + (0xF << 2)
label_356958:
    if (ctx->pc == 0x356958u) {
        ctx->pc = 0x356958u;
            // 0x356958: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x35695Cu;
        goto label_35695c;
    }
    ctx->pc = 0x356954u;
    {
        const bool branch_taken_0x356954 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x356954) {
            ctx->pc = 0x356958u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x356954u;
            // 0x356958: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x356994u;
            goto label_356994;
        }
    }
    ctx->pc = 0x35695Cu;
label_35695c:
    // 0x35695c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x35695cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_356960:
    // 0x356960: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x356960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_356964:
    // 0x356964: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x356964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_356968:
    // 0x356968: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x356968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_35696c:
    // 0x35696c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x35696cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_356970:
    // 0x356970: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x356970u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_356974:
    // 0x356974: 0xc040138  jal         func_1004E0
label_356978:
    if (ctx->pc == 0x356978u) {
        ctx->pc = 0x356978u;
            // 0x356978: 0xa2420008  sb          $v0, 0x8($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x35697Cu;
        goto label_35697c;
    }
    ctx->pc = 0x356974u;
    SET_GPR_U32(ctx, 31, 0x35697Cu);
    ctx->pc = 0x356978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x356974u;
            // 0x356978: 0xa2420008  sb          $v0, 0x8($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35697Cu; }
        if (ctx->pc != 0x35697Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35697Cu; }
        if (ctx->pc != 0x35697Cu) { return; }
    }
    ctx->pc = 0x35697Cu;
label_35697c:
    // 0x35697c: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x35697cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_356980:
    // 0x356980: 0x2644000c  addiu       $a0, $s2, 0xC
    ctx->pc = 0x356980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_356984:
    // 0x356984: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x356984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_356988:
    // 0x356988: 0xc04a576  jal         func_1295D8
label_35698c:
    if (ctx->pc == 0x35698Cu) {
        ctx->pc = 0x35698Cu;
            // 0x35698c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x356990u;
        goto label_356990;
    }
    ctx->pc = 0x356988u;
    SET_GPR_U32(ctx, 31, 0x356990u);
    ctx->pc = 0x35698Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x356988u;
            // 0x35698c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356990u; }
        if (ctx->pc != 0x356990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356990u; }
        if (ctx->pc != 0x356990u) { return; }
    }
    ctx->pc = 0x356990u;
label_356990:
    // 0x356990: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x356990u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_356994:
    // 0x356994: 0x3c0345c8  lui         $v1, 0x45C8
    ctx->pc = 0x356994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17864 << 16));
label_356998:
    // 0x356998: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x356998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_35699c:
    // 0x35699c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35699cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3569a0:
    // 0x3569a0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3569a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3569a4:
    // 0x3569a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3569a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3569a8:
    // 0x3569a8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3569a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3569ac:
    // 0x3569ac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3569acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3569b0:
    // 0x3569b0: 0xc122cd8  jal         func_48B360
label_3569b4:
    if (ctx->pc == 0x3569B4u) {
        ctx->pc = 0x3569B4u;
            // 0x3569b4: 0xae320220  sw          $s2, 0x220($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 544), GPR_U32(ctx, 18));
        ctx->pc = 0x3569B8u;
        goto label_3569b8;
    }
    ctx->pc = 0x3569B0u;
    SET_GPR_U32(ctx, 31, 0x3569B8u);
    ctx->pc = 0x3569B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3569B0u;
            // 0x3569b4: 0xae320220  sw          $s2, 0x220($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 544), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3569B8u; }
        if (ctx->pc != 0x3569B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3569B8u; }
        if (ctx->pc != 0x3569B8u) { return; }
    }
    ctx->pc = 0x3569B8u;
label_3569b8:
    // 0x3569b8: 0x3c0346af  lui         $v1, 0x46AF
    ctx->pc = 0x3569b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18095 << 16));
label_3569bc:
    // 0x3569bc: 0x8e240220  lw          $a0, 0x220($s1)
    ctx->pc = 0x3569bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
label_3569c0:
    // 0x3569c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3569c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3569c4:
    // 0x3569c4: 0x3463c800  ori         $v1, $v1, 0xC800
    ctx->pc = 0x3569c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51200);
label_3569c8:
    // 0x3569c8: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x3569c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3569cc:
    // 0x3569cc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3569ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3569d0:
    // 0x3569d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3569d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3569d4:
    // 0x3569d4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3569d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3569d8:
    // 0x3569d8: 0xc122cd8  jal         func_48B360
label_3569dc:
    if (ctx->pc == 0x3569DCu) {
        ctx->pc = 0x3569DCu;
            // 0x3569dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3569E0u;
        goto label_3569e0;
    }
    ctx->pc = 0x3569D8u;
    SET_GPR_U32(ctx, 31, 0x3569E0u);
    ctx->pc = 0x3569DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3569D8u;
            // 0x3569dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3569E0u; }
        if (ctx->pc != 0x3569E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3569E0u; }
        if (ctx->pc != 0x3569E0u) { return; }
    }
    ctx->pc = 0x3569E0u;
label_3569e0:
    // 0x3569e0: 0x3c0246af  lui         $v0, 0x46AF
    ctx->pc = 0x3569e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18095 << 16));
label_3569e4:
    // 0x3569e4: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x3569e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3569e8:
    // 0x3569e8: 0x3443c800  ori         $v1, $v0, 0xC800
    ctx->pc = 0x3569e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51200);
label_3569ec:
    // 0x3569ec: 0x8e240220  lw          $a0, 0x220($s1)
    ctx->pc = 0x3569ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
label_3569f0:
    // 0x3569f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3569f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3569f4:
    // 0x3569f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3569f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3569f8:
    // 0x3569f8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3569f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3569fc:
    // 0x3569fc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3569fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_356a00:
    // 0x356a00: 0xc122cd8  jal         func_48B360
label_356a04:
    if (ctx->pc == 0x356A04u) {
        ctx->pc = 0x356A04u;
            // 0x356a04: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x356A08u;
        goto label_356a08;
    }
    ctx->pc = 0x356A00u;
    SET_GPR_U32(ctx, 31, 0x356A08u);
    ctx->pc = 0x356A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x356A00u;
            // 0x356a04: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356A08u; }
        if (ctx->pc != 0x356A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356A08u; }
        if (ctx->pc != 0x356A08u) { return; }
    }
    ctx->pc = 0x356A08u;
label_356a08:
    // 0x356a08: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x356a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_356a0c:
    // 0x356a0c: 0x3c0346af  lui         $v1, 0x46AF
    ctx->pc = 0x356a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18095 << 16));
label_356a10:
    // 0x356a10: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x356a10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_356a14:
    // 0x356a14: 0x8e240220  lw          $a0, 0x220($s1)
    ctx->pc = 0x356a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
label_356a18:
    // 0x356a18: 0x3463c800  ori         $v1, $v1, 0xC800
    ctx->pc = 0x356a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51200);
label_356a1c:
    // 0x356a1c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x356a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_356a20:
    // 0x356a20: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x356a20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_356a24:
    // 0x356a24: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x356a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_356a28:
    // 0x356a28: 0x344601ae  ori         $a2, $v0, 0x1AE
    ctx->pc = 0x356a28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)430);
label_356a2c:
    // 0x356a2c: 0xc122cd8  jal         func_48B360
label_356a30:
    if (ctx->pc == 0x356A30u) {
        ctx->pc = 0x356A30u;
            // 0x356a30: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x356A34u;
        goto label_356a34;
    }
    ctx->pc = 0x356A2Cu;
    SET_GPR_U32(ctx, 31, 0x356A34u);
    ctx->pc = 0x356A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x356A2Cu;
            // 0x356a30: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356A34u; }
        if (ctx->pc != 0x356A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356A34u; }
        if (ctx->pc != 0x356A34u) { return; }
    }
    ctx->pc = 0x356A34u;
label_356a34:
    // 0x356a34: 0xc040180  jal         func_100600
label_356a38:
    if (ctx->pc == 0x356A38u) {
        ctx->pc = 0x356A38u;
            // 0x356a38: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x356A3Cu;
        goto label_356a3c;
    }
    ctx->pc = 0x356A34u;
    SET_GPR_U32(ctx, 31, 0x356A3Cu);
    ctx->pc = 0x356A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x356A34u;
            // 0x356a38: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356A3Cu; }
        if (ctx->pc != 0x356A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356A3Cu; }
        if (ctx->pc != 0x356A3Cu) { return; }
    }
    ctx->pc = 0x356A3Cu;
label_356a3c:
    // 0x356a3c: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_356a40:
    if (ctx->pc == 0x356A40u) {
        ctx->pc = 0x356A40u;
            // 0x356a40: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x356A44u;
        goto label_356a44;
    }
    ctx->pc = 0x356A3Cu;
    {
        const bool branch_taken_0x356a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356a3c) {
            ctx->pc = 0x356A40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x356A3Cu;
            // 0x356a40: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x356A8Cu;
            goto label_356a8c;
        }
    }
    ctx->pc = 0x356A44u;
label_356a44:
    // 0x356a44: 0x8e260050  lw          $a2, 0x50($s1)
    ctx->pc = 0x356a44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_356a48:
    // 0x356a48: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x356a48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_356a4c:
    // 0x356a4c: 0x24a521e0  addiu       $a1, $a1, 0x21E0
    ctx->pc = 0x356a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8672));
label_356a50:
    // 0x356a50: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x356a50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_356a54:
    // 0x356a54: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x356a54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_356a58:
    // 0x356a58: 0x24636020  addiu       $v1, $v1, 0x6020
    ctx->pc = 0x356a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24608));
label_356a5c:
    // 0x356a5c: 0xac450048  sw          $a1, 0x48($v0)
    ctx->pc = 0x356a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 5));
label_356a60:
    // 0x356a60: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x356a60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_356a64:
    // 0x356a64: 0xac460024  sw          $a2, 0x24($v0)
    ctx->pc = 0x356a64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
label_356a68:
    // 0x356a68: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x356a68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
label_356a6c:
    // 0x356a6c: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x356a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_356a70:
    // 0x356a70: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x356a70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_356a74:
    // 0x356a74: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x356a74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_356a78:
    // 0x356a78: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x356a78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_356a7c:
    // 0x356a7c: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x356a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_356a80:
    // 0x356a80: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x356a80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_356a84:
    // 0x356a84: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x356a84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_356a88:
    // 0x356a88: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x356a88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
label_356a8c:
    // 0x356a8c: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x356a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_356a90:
    // 0x356a90: 0x8e2900b0  lw          $t1, 0xB0($s1)
    ctx->pc = 0x356a90u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_356a94:
    // 0x356a94: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x356a94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_356a98:
    // 0x356a98: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x356a98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_356a9c:
    // 0x356a9c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x356a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_356aa0:
    // 0x356aa0: 0x3c0541f0  lui         $a1, 0x41F0
    ctx->pc = 0x356aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16880 << 16));
label_356aa4:
    // 0x356aa4: 0x3c0442f0  lui         $a0, 0x42F0
    ctx->pc = 0x356aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17136 << 16));
label_356aa8:
    // 0x356aa8: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x356aa8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
label_356aac:
    // 0x356aac: 0x35290004  ori         $t1, $t1, 0x4
    ctx->pc = 0x356aacu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)4);
label_356ab0:
    // 0x356ab0: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x356ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_356ab4:
    // 0x356ab4: 0xae2900b0  sw          $t1, 0xB0($s1)
    ctx->pc = 0x356ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 9));
label_356ab8:
    // 0x356ab8: 0xc4605de0  lwc1        $f0, 0x5DE0($v1)
    ctx->pc = 0x356ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_356abc:
    // 0x356abc: 0xa2280064  sb          $t0, 0x64($s1)
    ctx->pc = 0x356abcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 100), (uint8_t)GPR_U32(ctx, 8));
label_356ac0:
    // 0x356ac0: 0xa2200065  sb          $zero, 0x65($s1)
    ctx->pc = 0x356ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 101), (uint8_t)GPR_U32(ctx, 0));
label_356ac4:
    // 0x356ac4: 0xa2270066  sb          $a3, 0x66($s1)
    ctx->pc = 0x356ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 102), (uint8_t)GPR_U32(ctx, 7));
label_356ac8:
    // 0x356ac8: 0xa2280067  sb          $t0, 0x67($s1)
    ctx->pc = 0x356ac8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 103), (uint8_t)GPR_U32(ctx, 8));
label_356acc:
    // 0x356acc: 0xa2200068  sb          $zero, 0x68($s1)
    ctx->pc = 0x356accu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 104), (uint8_t)GPR_U32(ctx, 0));
label_356ad0:
    // 0x356ad0: 0xa2260069  sb          $a2, 0x69($s1)
    ctx->pc = 0x356ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 105), (uint8_t)GPR_U32(ctx, 6));
label_356ad4:
    // 0x356ad4: 0xae28008c  sw          $t0, 0x8C($s1)
    ctx->pc = 0x356ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 8));
label_356ad8:
    // 0x356ad8: 0xae250070  sw          $a1, 0x70($s1)
    ctx->pc = 0x356ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 5));
label_356adc:
    // 0x356adc: 0xae240078  sw          $a0, 0x78($s1)
    ctx->pc = 0x356adcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 4));
label_356ae0:
    // 0x356ae0: 0xe6200080  swc1        $f0, 0x80($s1)
    ctx->pc = 0x356ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
label_356ae4:
    // 0x356ae4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x356ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_356ae8:
    // 0x356ae8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x356ae8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_356aec:
    // 0x356aec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x356aecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_356af0:
    // 0x356af0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x356af0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_356af4:
    // 0x356af4: 0x3e00008  jr          $ra
label_356af8:
    if (ctx->pc == 0x356AF8u) {
        ctx->pc = 0x356AF8u;
            // 0x356af8: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x356AFCu;
        goto label_356afc;
    }
    ctx->pc = 0x356AF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356AF4u;
            // 0x356af8: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x356AFCu;
label_356afc:
    // 0x356afc: 0x0  nop
    ctx->pc = 0x356afcu;
    // NOP
label_356b00:
    // 0x356b00: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x356b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_356b04:
    // 0x356b04: 0xa08300cc  sb          $v1, 0xCC($a0)
    ctx->pc = 0x356b04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 204), (uint8_t)GPR_U32(ctx, 3));
label_356b08:
    // 0x356b08: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x356b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_356b0c:
    // 0x356b0c: 0xac8300c4  sw          $v1, 0xC4($a0)
    ctx->pc = 0x356b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 3));
label_356b10:
    // 0x356b10: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x356b10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_356b14:
    // 0x356b14: 0x8c658a08  lw          $a1, -0x75F8($v1)
    ctx->pc = 0x356b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_356b18:
    // 0x356b18: 0x80a5007a  lb          $a1, 0x7A($a1)
    ctx->pc = 0x356b18u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 122)));
label_356b1c:
    // 0x356b1c: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x356b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_356b20:
    // 0x356b20: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x356b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_356b24:
    // 0x356b24: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x356b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_356b28:
    // 0x356b28: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x356b28u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_356b2c:
    // 0x356b2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x356b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_356b30:
    // 0x356b30: 0xac8300c8  sw          $v1, 0xC8($a0)
    ctx->pc = 0x356b30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 3));
label_356b34:
    // 0x356b34: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x356b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_356b38:
    // 0x356b38: 0x3e00008  jr          $ra
label_356b3c:
    if (ctx->pc == 0x356B3Cu) {
        ctx->pc = 0x356B3Cu;
            // 0x356b3c: 0xa0830279  sb          $v1, 0x279($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 633), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x356B40u;
        goto label_356b40;
    }
    ctx->pc = 0x356B38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356B38u;
            // 0x356b3c: 0xa0830279  sb          $v1, 0x279($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 633), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x356B40u;
label_356b40:
    // 0x356b40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x356b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_356b44:
    // 0x356b44: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x356b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_356b48:
    // 0x356b48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x356b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_356b4c:
    // 0x356b4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x356b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_356b50:
    // 0x356b50: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x356b50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_356b54:
    // 0x356b54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x356b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_356b58:
    // 0x356b58: 0xc0f4d14  jal         func_3D3450
label_356b5c:
    if (ctx->pc == 0x356B5Cu) {
        ctx->pc = 0x356B5Cu;
            // 0x356b5c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x356B60u;
        goto label_356b60;
    }
    ctx->pc = 0x356B58u;
    SET_GPR_U32(ctx, 31, 0x356B60u);
    ctx->pc = 0x356B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x356B58u;
            // 0x356b5c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D3450u;
    if (runtime->hasFunction(0x3D3450u)) {
        auto targetFn = runtime->lookupFunction(0x3D3450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356B60u; }
        if (ctx->pc != 0x356B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D3450_0x3d3450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356B60u; }
        if (ctx->pc != 0x356B60u) { return; }
    }
    ctx->pc = 0x356B60u;
label_356b60:
    // 0x356b60: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x356b60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_356b64:
    // 0x356b64: 0x26640230  addiu       $a0, $s3, 0x230
    ctx->pc = 0x356b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 560));
label_356b68:
    // 0x356b68: 0xc04cce8  jal         func_1333A0
label_356b6c:
    if (ctx->pc == 0x356B6Cu) {
        ctx->pc = 0x356B6Cu;
            // 0x356b6c: 0x24a543e0  addiu       $a1, $a1, 0x43E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17376));
        ctx->pc = 0x356B70u;
        goto label_356b70;
    }
    ctx->pc = 0x356B68u;
    SET_GPR_U32(ctx, 31, 0x356B70u);
    ctx->pc = 0x356B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x356B68u;
            // 0x356b6c: 0x24a543e0  addiu       $a1, $a1, 0x43E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356B70u; }
        if (ctx->pc != 0x356B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356B70u; }
        if (ctx->pc != 0x356B70u) { return; }
    }
    ctx->pc = 0x356B70u;
label_356b70:
    // 0x356b70: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x356b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_356b74:
    // 0x356b74: 0x92630279  lbu         $v1, 0x279($s3)
    ctx->pc = 0x356b74u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 633)));
label_356b78:
    // 0x356b78: 0x8c423ff8  lw          $v0, 0x3FF8($v0)
    ctx->pc = 0x356b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16376)));
label_356b7c:
    // 0x356b7c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x356b7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_356b80:
    // 0x356b80: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x356b80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_356b84:
    // 0x356b84: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x356b84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_356b88:
    // 0x356b88: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x356b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_356b8c:
    // 0x356b8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x356b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_356b90:
    // 0x356b90: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x356b90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_356b94:
    // 0x356b94: 0x8e240270  lw          $a0, 0x270($s1)
    ctx->pc = 0x356b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 624)));
label_356b98:
    // 0x356b98: 0x26630230  addiu       $v1, $s3, 0x230
    ctx->pc = 0x356b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 560));
label_356b9c:
    // 0x356b9c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x356b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_356ba0:
    // 0x356ba0: 0xac900080  sw          $s0, 0x80($a0)
    ctx->pc = 0x356ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 16));
label_356ba4:
    // 0x356ba4: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x356ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
label_356ba8:
    // 0x356ba8: 0xac830088  sw          $v1, 0x88($a0)
    ctx->pc = 0x356ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 3));
label_356bac:
    // 0x356bac: 0xac80008c  sw          $zero, 0x8C($a0)
    ctx->pc = 0x356bacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 0));
label_356bb0:
    // 0x356bb0: 0xac820090  sw          $v0, 0x90($a0)
    ctx->pc = 0x356bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 2));
label_356bb4:
    // 0x356bb4: 0x8e230270  lw          $v1, 0x270($s1)
    ctx->pc = 0x356bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 624)));
label_356bb8:
    // 0x356bb8: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x356bb8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_356bbc:
    // 0x356bbc: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x356bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_356bc0:
    // 0x356bc0: 0xa4620064  sh          $v0, 0x64($v1)
    ctx->pc = 0x356bc0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
label_356bc4:
    // 0x356bc4: 0x8e240270  lw          $a0, 0x270($s1)
    ctx->pc = 0x356bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 624)));
label_356bc8:
    // 0x356bc8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x356bc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_356bcc:
    // 0x356bcc: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x356bccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_356bd0:
    // 0x356bd0: 0x320f809  jalr        $t9
label_356bd4:
    if (ctx->pc == 0x356BD4u) {
        ctx->pc = 0x356BD8u;
        goto label_356bd8;
    }
    ctx->pc = 0x356BD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x356BD8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x356BD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x356BD8u; }
            if (ctx->pc != 0x356BD8u) { return; }
        }
        }
    }
    ctx->pc = 0x356BD8u;
label_356bd8:
    // 0x356bd8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x356bd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_356bdc:
    // 0x356bdc: 0x2a430002  slti        $v1, $s2, 0x2
    ctx->pc = 0x356bdcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_356be0:
    // 0x356be0: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
label_356be4:
    if (ctx->pc == 0x356BE4u) {
        ctx->pc = 0x356BE4u;
            // 0x356be4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x356BE8u;
        goto label_356be8;
    }
    ctx->pc = 0x356BE0u;
    {
        const bool branch_taken_0x356be0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x356BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356BE0u;
            // 0x356be4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356be0) {
            ctx->pc = 0x356B94u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_356b94;
        }
    }
    ctx->pc = 0x356BE8u;
label_356be8:
    // 0x356be8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x356be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_356bec:
    // 0x356bec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x356becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_356bf0:
    // 0x356bf0: 0xa2630278  sb          $v1, 0x278($s3)
    ctx->pc = 0x356bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 632), (uint8_t)GPR_U32(ctx, 3));
label_356bf4:
    // 0x356bf4: 0xa264027a  sb          $a0, 0x27A($s3)
    ctx->pc = 0x356bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 634), (uint8_t)GPR_U32(ctx, 4));
label_356bf8:
    // 0x356bf8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x356bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_356bfc:
    // 0x356bfc: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x356bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_356c00:
    // 0x356c00: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x356c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_356c04:
    // 0x356c04: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x356c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_356c08:
    // 0x356c08: 0x50640004  beql        $v1, $a0, . + 4 + (0x4 << 2)
label_356c0c:
    if (ctx->pc == 0x356C0Cu) {
        ctx->pc = 0x356C0Cu;
            // 0x356c0c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x356C10u;
        goto label_356c10;
    }
    ctx->pc = 0x356C08u;
    {
        const bool branch_taken_0x356c08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x356c08) {
            ctx->pc = 0x356C0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x356C08u;
            // 0x356c0c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x356C1Cu;
            goto label_356c1c;
        }
    }
    ctx->pc = 0x356C10u;
label_356c10:
    // 0x356c10: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x356c10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
label_356c14:
    // 0x356c14: 0xae630210  sw          $v1, 0x210($s3)
    ctx->pc = 0x356c14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 528), GPR_U32(ctx, 3));
label_356c18:
    // 0x356c18: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x356c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_356c1c:
    // 0x356c1c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x356c1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_356c20:
    // 0x356c20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x356c20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_356c24:
    // 0x356c24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x356c24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_356c28:
    // 0x356c28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x356c28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_356c2c:
    // 0x356c2c: 0x3e00008  jr          $ra
label_356c30:
    if (ctx->pc == 0x356C30u) {
        ctx->pc = 0x356C30u;
            // 0x356c30: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x356C34u;
        goto label_356c34;
    }
    ctx->pc = 0x356C2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356C2Cu;
            // 0x356c30: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x356C34u;
label_356c34:
    // 0x356c34: 0x0  nop
    ctx->pc = 0x356c34u;
    // NOP
label_356c38:
    // 0x356c38: 0x0  nop
    ctx->pc = 0x356c38u;
    // NOP
label_356c3c:
    // 0x356c3c: 0x0  nop
    ctx->pc = 0x356c3cu;
    // NOP
label_356c40:
    // 0x356c40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x356c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_356c44:
    // 0x356c44: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x356c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_356c48:
    // 0x356c48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x356c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_356c4c:
    // 0x356c4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x356c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_356c50:
    // 0x356c50: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x356c50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_356c54:
    // 0x356c54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x356c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_356c58:
    // 0x356c58: 0xc0f4f00  jal         func_3D3C00
label_356c5c:
    if (ctx->pc == 0x356C5Cu) {
        ctx->pc = 0x356C5Cu;
            // 0x356c5c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x356C60u;
        goto label_356c60;
    }
    ctx->pc = 0x356C58u;
    SET_GPR_U32(ctx, 31, 0x356C60u);
    ctx->pc = 0x356C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x356C58u;
            // 0x356c5c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D3C00u;
    if (runtime->hasFunction(0x3D3C00u)) {
        auto targetFn = runtime->lookupFunction(0x3D3C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356C60u; }
        if (ctx->pc != 0x356C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D3C00_0x3d3c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356C60u; }
        if (ctx->pc != 0x356C60u) { return; }
    }
    ctx->pc = 0x356C60u;
label_356c60:
    // 0x356c60: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x356c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_356c64:
    // 0x356c64: 0x92630279  lbu         $v1, 0x279($s3)
    ctx->pc = 0x356c64u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 633)));
label_356c68:
    // 0x356c68: 0x8c423ff8  lw          $v0, 0x3FF8($v0)
    ctx->pc = 0x356c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16376)));
label_356c6c:
    // 0x356c6c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x356c6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_356c70:
    // 0x356c70: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x356c70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_356c74:
    // 0x356c74: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x356c74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_356c78:
    // 0x356c78: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x356c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_356c7c:
    // 0x356c7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x356c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_356c80:
    // 0x356c80: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x356c80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_356c84:
    // 0x356c84: 0x8e240270  lw          $a0, 0x270($s1)
    ctx->pc = 0x356c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 624)));
label_356c88:
    // 0x356c88: 0x26630230  addiu       $v1, $s3, 0x230
    ctx->pc = 0x356c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 560));
label_356c8c:
    // 0x356c8c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x356c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_356c90:
    // 0x356c90: 0xac900080  sw          $s0, 0x80($a0)
    ctx->pc = 0x356c90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 16));
label_356c94:
    // 0x356c94: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x356c94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
label_356c98:
    // 0x356c98: 0xac830088  sw          $v1, 0x88($a0)
    ctx->pc = 0x356c98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 3));
label_356c9c:
    // 0x356c9c: 0xac80008c  sw          $zero, 0x8C($a0)
    ctx->pc = 0x356c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 0));
label_356ca0:
    // 0x356ca0: 0xac820090  sw          $v0, 0x90($a0)
    ctx->pc = 0x356ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 2));
label_356ca4:
    // 0x356ca4: 0x8e230270  lw          $v1, 0x270($s1)
    ctx->pc = 0x356ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 624)));
label_356ca8:
    // 0x356ca8: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x356ca8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_356cac:
    // 0x356cac: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x356cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_356cb0:
    // 0x356cb0: 0xa4620064  sh          $v0, 0x64($v1)
    ctx->pc = 0x356cb0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
label_356cb4:
    // 0x356cb4: 0x8e240270  lw          $a0, 0x270($s1)
    ctx->pc = 0x356cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 624)));
label_356cb8:
    // 0x356cb8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x356cb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_356cbc:
    // 0x356cbc: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x356cbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_356cc0:
    // 0x356cc0: 0x320f809  jalr        $t9
label_356cc4:
    if (ctx->pc == 0x356CC4u) {
        ctx->pc = 0x356CC8u;
        goto label_356cc8;
    }
    ctx->pc = 0x356CC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x356CC8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x356CC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x356CC8u; }
            if (ctx->pc != 0x356CC8u) { return; }
        }
        }
    }
    ctx->pc = 0x356CC8u;
label_356cc8:
    // 0x356cc8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x356cc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_356ccc:
    // 0x356ccc: 0x2a430002  slti        $v1, $s2, 0x2
    ctx->pc = 0x356cccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_356cd0:
    // 0x356cd0: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
label_356cd4:
    if (ctx->pc == 0x356CD4u) {
        ctx->pc = 0x356CD4u;
            // 0x356cd4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x356CD8u;
        goto label_356cd8;
    }
    ctx->pc = 0x356CD0u;
    {
        const bool branch_taken_0x356cd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x356CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356CD0u;
            // 0x356cd4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356cd0) {
            ctx->pc = 0x356C84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_356c84;
        }
    }
    ctx->pc = 0x356CD8u;
label_356cd8:
    // 0x356cd8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x356cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_356cdc:
    // 0x356cdc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x356cdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_356ce0:
    // 0x356ce0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x356ce0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_356ce4:
    // 0x356ce4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x356ce4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_356ce8:
    // 0x356ce8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x356ce8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_356cec:
    // 0x356cec: 0x3e00008  jr          $ra
label_356cf0:
    if (ctx->pc == 0x356CF0u) {
        ctx->pc = 0x356CF0u;
            // 0x356cf0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x356CF4u;
        goto label_356cf4;
    }
    ctx->pc = 0x356CECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356CECu;
            // 0x356cf0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x356CF4u;
label_356cf4:
    // 0x356cf4: 0x0  nop
    ctx->pc = 0x356cf4u;
    // NOP
label_356cf8:
    // 0x356cf8: 0x0  nop
    ctx->pc = 0x356cf8u;
    // NOP
label_356cfc:
    // 0x356cfc: 0x0  nop
    ctx->pc = 0x356cfcu;
    // NOP
label_356d00:
    // 0x356d00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x356d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_356d04:
    // 0x356d04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x356d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_356d08:
    // 0x356d08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x356d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_356d0c:
    // 0x356d0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x356d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_356d10:
    // 0x356d10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x356d10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_356d14:
    // 0x356d14: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
label_356d18:
    if (ctx->pc == 0x356D18u) {
        ctx->pc = 0x356D18u;
            // 0x356d18: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x356D1Cu;
        goto label_356d1c;
    }
    ctx->pc = 0x356D14u;
    {
        const bool branch_taken_0x356d14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x356D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356D14u;
            // 0x356d18: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356d14) {
            ctx->pc = 0x356DB0u;
            goto label_356db0;
        }
    }
    ctx->pc = 0x356D1Cu;
label_356d1c:
    // 0x356d1c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x356d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_356d20:
    // 0x356d20: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x356d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_356d24:
    // 0x356d24: 0x24635fc0  addiu       $v1, $v1, 0x5FC0
    ctx->pc = 0x356d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24512));
label_356d28:
    // 0x356d28: 0x24426000  addiu       $v0, $v0, 0x6000
    ctx->pc = 0x356d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24576));
label_356d2c:
    // 0x356d2c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x356d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_356d30:
    // 0x356d30: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x356d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_356d34:
    // 0x356d34: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x356d34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_356d38:
    // 0x356d38: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x356d38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_356d3c:
    // 0x356d3c: 0x320f809  jalr        $t9
label_356d40:
    if (ctx->pc == 0x356D40u) {
        ctx->pc = 0x356D44u;
        goto label_356d44;
    }
    ctx->pc = 0x356D3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x356D44u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x356D44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x356D44u; }
            if (ctx->pc != 0x356D44u) { return; }
        }
        }
    }
    ctx->pc = 0x356D44u;
label_356d44:
    // 0x356d44: 0x52000015  beql        $s0, $zero, . + 4 + (0x15 << 2)
label_356d48:
    if (ctx->pc == 0x356D48u) {
        ctx->pc = 0x356D48u;
            // 0x356d48: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x356D4Cu;
        goto label_356d4c;
    }
    ctx->pc = 0x356D44u;
    {
        const bool branch_taken_0x356d44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x356d44) {
            ctx->pc = 0x356D48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x356D44u;
            // 0x356d48: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x356D9Cu;
            goto label_356d9c;
        }
    }
    ctx->pc = 0x356D4Cu;
label_356d4c:
    // 0x356d4c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x356d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_356d50:
    // 0x356d50: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x356d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_356d54:
    // 0x356d54: 0x24639320  addiu       $v1, $v1, -0x6CE0
    ctx->pc = 0x356d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939424));
label_356d58:
    // 0x356d58: 0x24429360  addiu       $v0, $v0, -0x6CA0
    ctx->pc = 0x356d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939488));
label_356d5c:
    // 0x356d5c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x356d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_356d60:
    // 0x356d60: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x356d60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_356d64:
    // 0x356d64: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x356d64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_356d68:
    // 0x356d68: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x356d68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_356d6c:
    // 0x356d6c: 0x320f809  jalr        $t9
label_356d70:
    if (ctx->pc == 0x356D70u) {
        ctx->pc = 0x356D70u;
            // 0x356d70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x356D74u;
        goto label_356d74;
    }
    ctx->pc = 0x356D6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x356D74u);
        ctx->pc = 0x356D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356D6Cu;
            // 0x356d70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x356D74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x356D74u; }
            if (ctx->pc != 0x356D74u) { return; }
        }
        }
    }
    ctx->pc = 0x356D74u;
label_356d74:
    // 0x356d74: 0x260401a0  addiu       $a0, $s0, 0x1A0
    ctx->pc = 0x356d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
label_356d78:
    // 0x356d78: 0xc0a9844  jal         func_2A6110
label_356d7c:
    if (ctx->pc == 0x356D7Cu) {
        ctx->pc = 0x356D7Cu;
            // 0x356d7c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x356D80u;
        goto label_356d80;
    }
    ctx->pc = 0x356D78u;
    SET_GPR_U32(ctx, 31, 0x356D80u);
    ctx->pc = 0x356D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x356D78u;
            // 0x356d7c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6110u;
    if (runtime->hasFunction(0x2A6110u)) {
        auto targetFn = runtime->lookupFunction(0x2A6110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356D80u; }
        if (ctx->pc != 0x356D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A6110_0x2a6110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356D80u; }
        if (ctx->pc != 0x356D80u) { return; }
    }
    ctx->pc = 0x356D80u;
label_356d80:
    // 0x356d80: 0x260400f0  addiu       $a0, $s0, 0xF0
    ctx->pc = 0x356d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
label_356d84:
    // 0x356d84: 0xc0ada2c  jal         func_2B68B0
label_356d88:
    if (ctx->pc == 0x356D88u) {
        ctx->pc = 0x356D88u;
            // 0x356d88: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x356D8Cu;
        goto label_356d8c;
    }
    ctx->pc = 0x356D84u;
    SET_GPR_U32(ctx, 31, 0x356D8Cu);
    ctx->pc = 0x356D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x356D84u;
            // 0x356d88: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B68B0u;
    if (runtime->hasFunction(0x2B68B0u)) {
        auto targetFn = runtime->lookupFunction(0x2B68B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356D8Cu; }
        if (ctx->pc != 0x356D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B68B0_0x2b68b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356D8Cu; }
        if (ctx->pc != 0x356D8Cu) { return; }
    }
    ctx->pc = 0x356D8Cu;
label_356d8c:
    // 0x356d8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x356d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_356d90:
    // 0x356d90: 0xc0aee40  jal         func_2BB900
label_356d94:
    if (ctx->pc == 0x356D94u) {
        ctx->pc = 0x356D94u;
            // 0x356d94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x356D98u;
        goto label_356d98;
    }
    ctx->pc = 0x356D90u;
    SET_GPR_U32(ctx, 31, 0x356D98u);
    ctx->pc = 0x356D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x356D90u;
            // 0x356d94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB900u;
    if (runtime->hasFunction(0x2BB900u)) {
        auto targetFn = runtime->lookupFunction(0x2BB900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356D98u; }
        if (ctx->pc != 0x356D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB900_0x2bb900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356D98u; }
        if (ctx->pc != 0x356D98u) { return; }
    }
    ctx->pc = 0x356D98u;
label_356d98:
    // 0x356d98: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x356d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_356d9c:
    // 0x356d9c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x356d9cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_356da0:
    // 0x356da0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_356da4:
    if (ctx->pc == 0x356DA4u) {
        ctx->pc = 0x356DA4u;
            // 0x356da4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x356DA8u;
        goto label_356da8;
    }
    ctx->pc = 0x356DA0u;
    {
        const bool branch_taken_0x356da0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x356da0) {
            ctx->pc = 0x356DA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x356DA0u;
            // 0x356da4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x356DB4u;
            goto label_356db4;
        }
    }
    ctx->pc = 0x356DA8u;
label_356da8:
    // 0x356da8: 0xc0400a8  jal         func_1002A0
label_356dac:
    if (ctx->pc == 0x356DACu) {
        ctx->pc = 0x356DACu;
            // 0x356dac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x356DB0u;
        goto label_356db0;
    }
    ctx->pc = 0x356DA8u;
    SET_GPR_U32(ctx, 31, 0x356DB0u);
    ctx->pc = 0x356DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x356DA8u;
            // 0x356dac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356DB0u; }
        if (ctx->pc != 0x356DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356DB0u; }
        if (ctx->pc != 0x356DB0u) { return; }
    }
    ctx->pc = 0x356DB0u;
label_356db0:
    // 0x356db0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x356db0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_356db4:
    // 0x356db4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x356db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_356db8:
    // 0x356db8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x356db8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_356dbc:
    // 0x356dbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x356dbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_356dc0:
    // 0x356dc0: 0x3e00008  jr          $ra
label_356dc4:
    if (ctx->pc == 0x356DC4u) {
        ctx->pc = 0x356DC4u;
            // 0x356dc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x356DC8u;
        goto label_356dc8;
    }
    ctx->pc = 0x356DC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356DC0u;
            // 0x356dc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x356DC8u;
label_356dc8:
    // 0x356dc8: 0x0  nop
    ctx->pc = 0x356dc8u;
    // NOP
label_356dcc:
    // 0x356dcc: 0x0  nop
    ctx->pc = 0x356dccu;
    // NOP
label_356dd0:
    // 0x356dd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x356dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_356dd4:
    // 0x356dd4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x356dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_356dd8:
    // 0x356dd8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x356dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_356ddc:
    // 0x356ddc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x356ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_356de0:
    // 0x356de0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x356de0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_356de4:
    // 0x356de4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x356de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_356de8:
    // 0x356de8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x356de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_356dec:
    // 0x356dec: 0xc0b1370  jal         func_2C4DC0
label_356df0:
    if (ctx->pc == 0x356DF0u) {
        ctx->pc = 0x356DF0u;
            // 0x356df0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x356DF4u;
        goto label_356df4;
    }
    ctx->pc = 0x356DECu;
    SET_GPR_U32(ctx, 31, 0x356DF4u);
    ctx->pc = 0x356DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x356DECu;
            // 0x356df0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4DC0u;
    if (runtime->hasFunction(0x2C4DC0u)) {
        auto targetFn = runtime->lookupFunction(0x2C4DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356DF4u; }
        if (ctx->pc != 0x356DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C4DC0_0x2c4dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356DF4u; }
        if (ctx->pc != 0x356DF4u) { return; }
    }
    ctx->pc = 0x356DF4u;
label_356df4:
    // 0x356df4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x356df4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_356df8:
    // 0x356df8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x356df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_356dfc:
    // 0x356dfc: 0x24639320  addiu       $v1, $v1, -0x6CE0
    ctx->pc = 0x356dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939424));
label_356e00:
    // 0x356e00: 0x24429360  addiu       $v0, $v0, -0x6CA0
    ctx->pc = 0x356e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939488));
label_356e04:
    // 0x356e04: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x356e04u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_356e08:
    // 0x356e08: 0x268400f0  addiu       $a0, $s4, 0xF0
    ctx->pc = 0x356e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 240));
label_356e0c:
    // 0x356e0c: 0xae820054  sw          $v0, 0x54($s4)
    ctx->pc = 0x356e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
label_356e10:
    // 0x356e10: 0xc0adb98  jal         func_2B6E60
label_356e14:
    if (ctx->pc == 0x356E14u) {
        ctx->pc = 0x356E14u;
            // 0x356e14: 0xae8000e0  sw          $zero, 0xE0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 224), GPR_U32(ctx, 0));
        ctx->pc = 0x356E18u;
        goto label_356e18;
    }
    ctx->pc = 0x356E10u;
    SET_GPR_U32(ctx, 31, 0x356E18u);
    ctx->pc = 0x356E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x356E10u;
            // 0x356e14: 0xae8000e0  sw          $zero, 0xE0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6E60u;
    if (runtime->hasFunction(0x2B6E60u)) {
        auto targetFn = runtime->lookupFunction(0x2B6E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356E18u; }
        if (ctx->pc != 0x356E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6E60_0x2b6e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356E18u; }
        if (ctx->pc != 0x356E18u) { return; }
    }
    ctx->pc = 0x356E18u;
label_356e18:
    // 0x356e18: 0xc0ada8c  jal         func_2B6A30
label_356e1c:
    if (ctx->pc == 0x356E1Cu) {
        ctx->pc = 0x356E1Cu;
            // 0x356e1c: 0x268401a0  addiu       $a0, $s4, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 416));
        ctx->pc = 0x356E20u;
        goto label_356e20;
    }
    ctx->pc = 0x356E18u;
    SET_GPR_U32(ctx, 31, 0x356E20u);
    ctx->pc = 0x356E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x356E18u;
            // 0x356e1c: 0x268401a0  addiu       $a0, $s4, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6A30u;
    if (runtime->hasFunction(0x2B6A30u)) {
        auto targetFn = runtime->lookupFunction(0x2B6A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356E20u; }
        if (ctx->pc != 0x356E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6A30_0x2b6a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356E20u; }
        if (ctx->pc != 0x356E20u) { return; }
    }
    ctx->pc = 0x356E20u;
label_356e20:
    // 0x356e20: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x356e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_356e24:
    // 0x356e24: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x356e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_356e28:
    // 0x356e28: 0xae830218  sw          $v1, 0x218($s4)
    ctx->pc = 0x356e28u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 536), GPR_U32(ctx, 3));
label_356e2c:
    // 0x356e2c: 0x24425fc0  addiu       $v0, $v0, 0x5FC0
    ctx->pc = 0x356e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24512));
label_356e30:
    // 0x356e30: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x356e30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_356e34:
    // 0x356e34: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x356e34u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_356e38:
    // 0x356e38: 0x24636000  addiu       $v1, $v1, 0x6000
    ctx->pc = 0x356e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24576));
label_356e3c:
    // 0x356e3c: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x356e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_356e40:
    // 0x356e40: 0xae830054  sw          $v1, 0x54($s4)
    ctx->pc = 0x356e40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 3));
label_356e44:
    // 0x356e44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x356e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_356e48:
    // 0x356e48: 0xae800220  sw          $zero, 0x220($s4)
    ctx->pc = 0x356e48u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 544), GPR_U32(ctx, 0));
label_356e4c:
    // 0x356e4c: 0x26840230  addiu       $a0, $s4, 0x230
    ctx->pc = 0x356e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 560));
label_356e50:
    // 0x356e50: 0xa2800279  sb          $zero, 0x279($s4)
    ctx->pc = 0x356e50u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 633), (uint8_t)GPR_U32(ctx, 0));
label_356e54:
    // 0x356e54: 0x24a543e0  addiu       $a1, $a1, 0x43E0
    ctx->pc = 0x356e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17376));
label_356e58:
    // 0x356e58: 0xc04cce8  jal         func_1333A0
label_356e5c:
    if (ctx->pc == 0x356E5Cu) {
        ctx->pc = 0x356E5Cu;
            // 0x356e5c: 0xa282027a  sb          $v0, 0x27A($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 634), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x356E60u;
        goto label_356e60;
    }
    ctx->pc = 0x356E58u;
    SET_GPR_U32(ctx, 31, 0x356E60u);
    ctx->pc = 0x356E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x356E58u;
            // 0x356e5c: 0xa282027a  sb          $v0, 0x27A($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 634), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356E60u; }
        if (ctx->pc != 0x356E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356E60u; }
        if (ctx->pc != 0x356E60u) { return; }
    }
    ctx->pc = 0x356E60u;
label_356e60:
    // 0x356e60: 0x3c120065  lui         $s2, 0x65
    ctx->pc = 0x356e60u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)101 << 16));
label_356e64:
    // 0x356e64: 0x3c100065  lui         $s0, 0x65
    ctx->pc = 0x356e64u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)101 << 16));
label_356e68:
    // 0x356e68: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x356e68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_356e6c:
    // 0x356e6c: 0x265242d0  addiu       $s2, $s2, 0x42D0
    ctx->pc = 0x356e6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 17104));
label_356e70:
    // 0x356e70: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x356e70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_356e74:
    // 0x356e74: 0x26104350  addiu       $s0, $s0, 0x4350
    ctx->pc = 0x356e74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17232));
label_356e78:
    // 0x356e78: 0xc040180  jal         func_100600
label_356e7c:
    if (ctx->pc == 0x356E7Cu) {
        ctx->pc = 0x356E7Cu;
            // 0x356e7c: 0x240404c0  addiu       $a0, $zero, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
        ctx->pc = 0x356E80u;
        goto label_356e80;
    }
    ctx->pc = 0x356E78u;
    SET_GPR_U32(ctx, 31, 0x356E80u);
    ctx->pc = 0x356E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x356E78u;
            // 0x356e7c: 0x240404c0  addiu       $a0, $zero, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356E80u; }
        if (ctx->pc != 0x356E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356E80u; }
        if (ctx->pc != 0x356E80u) { return; }
    }
    ctx->pc = 0x356E80u;
label_356e80:
    // 0x356e80: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_356e84:
    if (ctx->pc == 0x356E84u) {
        ctx->pc = 0x356E88u;
        goto label_356e88;
    }
    ctx->pc = 0x356E80u;
    {
        const bool branch_taken_0x356e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356e80) {
            ctx->pc = 0x356EA0u;
            goto label_356ea0;
        }
    }
    ctx->pc = 0x356E88u;
label_356e88:
    // 0x356e88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x356e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_356e8c:
    // 0x356e8c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x356e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_356e90:
    // 0x356e90: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x356e90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_356e94:
    // 0x356e94: 0xc0c3f60  jal         func_30FD80
label_356e98:
    if (ctx->pc == 0x356E98u) {
        ctx->pc = 0x356E98u;
            // 0x356e98: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x356E9Cu;
        goto label_356e9c;
    }
    ctx->pc = 0x356E94u;
    SET_GPR_U32(ctx, 31, 0x356E9Cu);
    ctx->pc = 0x356E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x356E94u;
            // 0x356e98: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30FD80u;
    if (runtime->hasFunction(0x30FD80u)) {
        auto targetFn = runtime->lookupFunction(0x30FD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356E9Cu; }
        if (ctx->pc != 0x356E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030FD80_0x30fd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356E9Cu; }
        if (ctx->pc != 0x356E9Cu) { return; }
    }
    ctx->pc = 0x356E9Cu;
label_356e9c:
    // 0x356e9c: 0x0  nop
    ctx->pc = 0x356e9cu;
    // NOP
label_356ea0:
    // 0x356ea0: 0x2911821  addu        $v1, $s4, $s1
    ctx->pc = 0x356ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_356ea4:
    // 0x356ea4: 0xac620270  sw          $v0, 0x270($v1)
    ctx->pc = 0x356ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 624), GPR_U32(ctx, 2));
label_356ea8:
    // 0x356ea8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x356ea8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_356eac:
    // 0x356eac: 0xac5000d4  sw          $s0, 0xD4($v0)
    ctx->pc = 0x356eacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 212), GPR_U32(ctx, 16));
label_356eb0:
    // 0x356eb0: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x356eb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_356eb4:
    // 0x356eb4: 0x8c640270  lw          $a0, 0x270($v1)
    ctx->pc = 0x356eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 624)));
label_356eb8:
    // 0x356eb8: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x356eb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
label_356ebc:
    // 0x356ebc: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x356ebcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_356ec0:
    // 0x356ec0: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x356ec0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_356ec4:
    // 0x356ec4: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x356ec4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_356ec8:
    // 0x356ec8: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x356ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_356ecc:
    // 0x356ecc: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_356ed0:
    if (ctx->pc == 0x356ED0u) {
        ctx->pc = 0x356ED0u;
            // 0x356ed0: 0xa4830064  sh          $v1, 0x64($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x356ED4u;
        goto label_356ed4;
    }
    ctx->pc = 0x356ECCu;
    {
        const bool branch_taken_0x356ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x356ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356ECCu;
            // 0x356ed0: 0xa4830064  sh          $v1, 0x64($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356ecc) {
            ctx->pc = 0x356E78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_356e78;
        }
    }
    ctx->pc = 0x356ED4u;
label_356ed4:
    // 0x356ed4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x356ed4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_356ed8:
    // 0x356ed8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x356ed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_356edc:
    // 0x356edc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x356edcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_356ee0:
    // 0x356ee0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x356ee0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_356ee4:
    // 0x356ee4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x356ee4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_356ee8:
    // 0x356ee8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x356ee8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_356eec:
    // 0x356eec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x356eecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_356ef0:
    // 0x356ef0: 0x3e00008  jr          $ra
label_356ef4:
    if (ctx->pc == 0x356EF4u) {
        ctx->pc = 0x356EF4u;
            // 0x356ef4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x356EF8u;
        goto label_356ef8;
    }
    ctx->pc = 0x356EF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356EF0u;
            // 0x356ef4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x356EF8u;
label_356ef8:
    // 0x356ef8: 0x0  nop
    ctx->pc = 0x356ef8u;
    // NOP
label_356efc:
    // 0x356efc: 0x0  nop
    ctx->pc = 0x356efcu;
    // NOP
}
