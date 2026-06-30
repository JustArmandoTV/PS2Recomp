#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00275380
// Address: 0x275380 - 0x276b40
void sub_00275380_0x275380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275380_0x275380");
#endif

    switch (ctx->pc) {
        case 0x275380u: goto label_275380;
        case 0x275384u: goto label_275384;
        case 0x275388u: goto label_275388;
        case 0x27538cu: goto label_27538c;
        case 0x275390u: goto label_275390;
        case 0x275394u: goto label_275394;
        case 0x275398u: goto label_275398;
        case 0x27539cu: goto label_27539c;
        case 0x2753a0u: goto label_2753a0;
        case 0x2753a4u: goto label_2753a4;
        case 0x2753a8u: goto label_2753a8;
        case 0x2753acu: goto label_2753ac;
        case 0x2753b0u: goto label_2753b0;
        case 0x2753b4u: goto label_2753b4;
        case 0x2753b8u: goto label_2753b8;
        case 0x2753bcu: goto label_2753bc;
        case 0x2753c0u: goto label_2753c0;
        case 0x2753c4u: goto label_2753c4;
        case 0x2753c8u: goto label_2753c8;
        case 0x2753ccu: goto label_2753cc;
        case 0x2753d0u: goto label_2753d0;
        case 0x2753d4u: goto label_2753d4;
        case 0x2753d8u: goto label_2753d8;
        case 0x2753dcu: goto label_2753dc;
        case 0x2753e0u: goto label_2753e0;
        case 0x2753e4u: goto label_2753e4;
        case 0x2753e8u: goto label_2753e8;
        case 0x2753ecu: goto label_2753ec;
        case 0x2753f0u: goto label_2753f0;
        case 0x2753f4u: goto label_2753f4;
        case 0x2753f8u: goto label_2753f8;
        case 0x2753fcu: goto label_2753fc;
        case 0x275400u: goto label_275400;
        case 0x275404u: goto label_275404;
        case 0x275408u: goto label_275408;
        case 0x27540cu: goto label_27540c;
        case 0x275410u: goto label_275410;
        case 0x275414u: goto label_275414;
        case 0x275418u: goto label_275418;
        case 0x27541cu: goto label_27541c;
        case 0x275420u: goto label_275420;
        case 0x275424u: goto label_275424;
        case 0x275428u: goto label_275428;
        case 0x27542cu: goto label_27542c;
        case 0x275430u: goto label_275430;
        case 0x275434u: goto label_275434;
        case 0x275438u: goto label_275438;
        case 0x27543cu: goto label_27543c;
        case 0x275440u: goto label_275440;
        case 0x275444u: goto label_275444;
        case 0x275448u: goto label_275448;
        case 0x27544cu: goto label_27544c;
        case 0x275450u: goto label_275450;
        case 0x275454u: goto label_275454;
        case 0x275458u: goto label_275458;
        case 0x27545cu: goto label_27545c;
        case 0x275460u: goto label_275460;
        case 0x275464u: goto label_275464;
        case 0x275468u: goto label_275468;
        case 0x27546cu: goto label_27546c;
        case 0x275470u: goto label_275470;
        case 0x275474u: goto label_275474;
        case 0x275478u: goto label_275478;
        case 0x27547cu: goto label_27547c;
        case 0x275480u: goto label_275480;
        case 0x275484u: goto label_275484;
        case 0x275488u: goto label_275488;
        case 0x27548cu: goto label_27548c;
        case 0x275490u: goto label_275490;
        case 0x275494u: goto label_275494;
        case 0x275498u: goto label_275498;
        case 0x27549cu: goto label_27549c;
        case 0x2754a0u: goto label_2754a0;
        case 0x2754a4u: goto label_2754a4;
        case 0x2754a8u: goto label_2754a8;
        case 0x2754acu: goto label_2754ac;
        case 0x2754b0u: goto label_2754b0;
        case 0x2754b4u: goto label_2754b4;
        case 0x2754b8u: goto label_2754b8;
        case 0x2754bcu: goto label_2754bc;
        case 0x2754c0u: goto label_2754c0;
        case 0x2754c4u: goto label_2754c4;
        case 0x2754c8u: goto label_2754c8;
        case 0x2754ccu: goto label_2754cc;
        case 0x2754d0u: goto label_2754d0;
        case 0x2754d4u: goto label_2754d4;
        case 0x2754d8u: goto label_2754d8;
        case 0x2754dcu: goto label_2754dc;
        case 0x2754e0u: goto label_2754e0;
        case 0x2754e4u: goto label_2754e4;
        case 0x2754e8u: goto label_2754e8;
        case 0x2754ecu: goto label_2754ec;
        case 0x2754f0u: goto label_2754f0;
        case 0x2754f4u: goto label_2754f4;
        case 0x2754f8u: goto label_2754f8;
        case 0x2754fcu: goto label_2754fc;
        case 0x275500u: goto label_275500;
        case 0x275504u: goto label_275504;
        case 0x275508u: goto label_275508;
        case 0x27550cu: goto label_27550c;
        case 0x275510u: goto label_275510;
        case 0x275514u: goto label_275514;
        case 0x275518u: goto label_275518;
        case 0x27551cu: goto label_27551c;
        case 0x275520u: goto label_275520;
        case 0x275524u: goto label_275524;
        case 0x275528u: goto label_275528;
        case 0x27552cu: goto label_27552c;
        case 0x275530u: goto label_275530;
        case 0x275534u: goto label_275534;
        case 0x275538u: goto label_275538;
        case 0x27553cu: goto label_27553c;
        case 0x275540u: goto label_275540;
        case 0x275544u: goto label_275544;
        case 0x275548u: goto label_275548;
        case 0x27554cu: goto label_27554c;
        case 0x275550u: goto label_275550;
        case 0x275554u: goto label_275554;
        case 0x275558u: goto label_275558;
        case 0x27555cu: goto label_27555c;
        case 0x275560u: goto label_275560;
        case 0x275564u: goto label_275564;
        case 0x275568u: goto label_275568;
        case 0x27556cu: goto label_27556c;
        case 0x275570u: goto label_275570;
        case 0x275574u: goto label_275574;
        case 0x275578u: goto label_275578;
        case 0x27557cu: goto label_27557c;
        case 0x275580u: goto label_275580;
        case 0x275584u: goto label_275584;
        case 0x275588u: goto label_275588;
        case 0x27558cu: goto label_27558c;
        case 0x275590u: goto label_275590;
        case 0x275594u: goto label_275594;
        case 0x275598u: goto label_275598;
        case 0x27559cu: goto label_27559c;
        case 0x2755a0u: goto label_2755a0;
        case 0x2755a4u: goto label_2755a4;
        case 0x2755a8u: goto label_2755a8;
        case 0x2755acu: goto label_2755ac;
        case 0x2755b0u: goto label_2755b0;
        case 0x2755b4u: goto label_2755b4;
        case 0x2755b8u: goto label_2755b8;
        case 0x2755bcu: goto label_2755bc;
        case 0x2755c0u: goto label_2755c0;
        case 0x2755c4u: goto label_2755c4;
        case 0x2755c8u: goto label_2755c8;
        case 0x2755ccu: goto label_2755cc;
        case 0x2755d0u: goto label_2755d0;
        case 0x2755d4u: goto label_2755d4;
        case 0x2755d8u: goto label_2755d8;
        case 0x2755dcu: goto label_2755dc;
        case 0x2755e0u: goto label_2755e0;
        case 0x2755e4u: goto label_2755e4;
        case 0x2755e8u: goto label_2755e8;
        case 0x2755ecu: goto label_2755ec;
        case 0x2755f0u: goto label_2755f0;
        case 0x2755f4u: goto label_2755f4;
        case 0x2755f8u: goto label_2755f8;
        case 0x2755fcu: goto label_2755fc;
        case 0x275600u: goto label_275600;
        case 0x275604u: goto label_275604;
        case 0x275608u: goto label_275608;
        case 0x27560cu: goto label_27560c;
        case 0x275610u: goto label_275610;
        case 0x275614u: goto label_275614;
        case 0x275618u: goto label_275618;
        case 0x27561cu: goto label_27561c;
        case 0x275620u: goto label_275620;
        case 0x275624u: goto label_275624;
        case 0x275628u: goto label_275628;
        case 0x27562cu: goto label_27562c;
        case 0x275630u: goto label_275630;
        case 0x275634u: goto label_275634;
        case 0x275638u: goto label_275638;
        case 0x27563cu: goto label_27563c;
        case 0x275640u: goto label_275640;
        case 0x275644u: goto label_275644;
        case 0x275648u: goto label_275648;
        case 0x27564cu: goto label_27564c;
        case 0x275650u: goto label_275650;
        case 0x275654u: goto label_275654;
        case 0x275658u: goto label_275658;
        case 0x27565cu: goto label_27565c;
        case 0x275660u: goto label_275660;
        case 0x275664u: goto label_275664;
        case 0x275668u: goto label_275668;
        case 0x27566cu: goto label_27566c;
        case 0x275670u: goto label_275670;
        case 0x275674u: goto label_275674;
        case 0x275678u: goto label_275678;
        case 0x27567cu: goto label_27567c;
        case 0x275680u: goto label_275680;
        case 0x275684u: goto label_275684;
        case 0x275688u: goto label_275688;
        case 0x27568cu: goto label_27568c;
        case 0x275690u: goto label_275690;
        case 0x275694u: goto label_275694;
        case 0x275698u: goto label_275698;
        case 0x27569cu: goto label_27569c;
        case 0x2756a0u: goto label_2756a0;
        case 0x2756a4u: goto label_2756a4;
        case 0x2756a8u: goto label_2756a8;
        case 0x2756acu: goto label_2756ac;
        case 0x2756b0u: goto label_2756b0;
        case 0x2756b4u: goto label_2756b4;
        case 0x2756b8u: goto label_2756b8;
        case 0x2756bcu: goto label_2756bc;
        case 0x2756c0u: goto label_2756c0;
        case 0x2756c4u: goto label_2756c4;
        case 0x2756c8u: goto label_2756c8;
        case 0x2756ccu: goto label_2756cc;
        case 0x2756d0u: goto label_2756d0;
        case 0x2756d4u: goto label_2756d4;
        case 0x2756d8u: goto label_2756d8;
        case 0x2756dcu: goto label_2756dc;
        case 0x2756e0u: goto label_2756e0;
        case 0x2756e4u: goto label_2756e4;
        case 0x2756e8u: goto label_2756e8;
        case 0x2756ecu: goto label_2756ec;
        case 0x2756f0u: goto label_2756f0;
        case 0x2756f4u: goto label_2756f4;
        case 0x2756f8u: goto label_2756f8;
        case 0x2756fcu: goto label_2756fc;
        case 0x275700u: goto label_275700;
        case 0x275704u: goto label_275704;
        case 0x275708u: goto label_275708;
        case 0x27570cu: goto label_27570c;
        case 0x275710u: goto label_275710;
        case 0x275714u: goto label_275714;
        case 0x275718u: goto label_275718;
        case 0x27571cu: goto label_27571c;
        case 0x275720u: goto label_275720;
        case 0x275724u: goto label_275724;
        case 0x275728u: goto label_275728;
        case 0x27572cu: goto label_27572c;
        case 0x275730u: goto label_275730;
        case 0x275734u: goto label_275734;
        case 0x275738u: goto label_275738;
        case 0x27573cu: goto label_27573c;
        case 0x275740u: goto label_275740;
        case 0x275744u: goto label_275744;
        case 0x275748u: goto label_275748;
        case 0x27574cu: goto label_27574c;
        case 0x275750u: goto label_275750;
        case 0x275754u: goto label_275754;
        case 0x275758u: goto label_275758;
        case 0x27575cu: goto label_27575c;
        case 0x275760u: goto label_275760;
        case 0x275764u: goto label_275764;
        case 0x275768u: goto label_275768;
        case 0x27576cu: goto label_27576c;
        case 0x275770u: goto label_275770;
        case 0x275774u: goto label_275774;
        case 0x275778u: goto label_275778;
        case 0x27577cu: goto label_27577c;
        case 0x275780u: goto label_275780;
        case 0x275784u: goto label_275784;
        case 0x275788u: goto label_275788;
        case 0x27578cu: goto label_27578c;
        case 0x275790u: goto label_275790;
        case 0x275794u: goto label_275794;
        case 0x275798u: goto label_275798;
        case 0x27579cu: goto label_27579c;
        case 0x2757a0u: goto label_2757a0;
        case 0x2757a4u: goto label_2757a4;
        case 0x2757a8u: goto label_2757a8;
        case 0x2757acu: goto label_2757ac;
        case 0x2757b0u: goto label_2757b0;
        case 0x2757b4u: goto label_2757b4;
        case 0x2757b8u: goto label_2757b8;
        case 0x2757bcu: goto label_2757bc;
        case 0x2757c0u: goto label_2757c0;
        case 0x2757c4u: goto label_2757c4;
        case 0x2757c8u: goto label_2757c8;
        case 0x2757ccu: goto label_2757cc;
        case 0x2757d0u: goto label_2757d0;
        case 0x2757d4u: goto label_2757d4;
        case 0x2757d8u: goto label_2757d8;
        case 0x2757dcu: goto label_2757dc;
        case 0x2757e0u: goto label_2757e0;
        case 0x2757e4u: goto label_2757e4;
        case 0x2757e8u: goto label_2757e8;
        case 0x2757ecu: goto label_2757ec;
        case 0x2757f0u: goto label_2757f0;
        case 0x2757f4u: goto label_2757f4;
        case 0x2757f8u: goto label_2757f8;
        case 0x2757fcu: goto label_2757fc;
        case 0x275800u: goto label_275800;
        case 0x275804u: goto label_275804;
        case 0x275808u: goto label_275808;
        case 0x27580cu: goto label_27580c;
        case 0x275810u: goto label_275810;
        case 0x275814u: goto label_275814;
        case 0x275818u: goto label_275818;
        case 0x27581cu: goto label_27581c;
        case 0x275820u: goto label_275820;
        case 0x275824u: goto label_275824;
        case 0x275828u: goto label_275828;
        case 0x27582cu: goto label_27582c;
        case 0x275830u: goto label_275830;
        case 0x275834u: goto label_275834;
        case 0x275838u: goto label_275838;
        case 0x27583cu: goto label_27583c;
        case 0x275840u: goto label_275840;
        case 0x275844u: goto label_275844;
        case 0x275848u: goto label_275848;
        case 0x27584cu: goto label_27584c;
        case 0x275850u: goto label_275850;
        case 0x275854u: goto label_275854;
        case 0x275858u: goto label_275858;
        case 0x27585cu: goto label_27585c;
        case 0x275860u: goto label_275860;
        case 0x275864u: goto label_275864;
        case 0x275868u: goto label_275868;
        case 0x27586cu: goto label_27586c;
        case 0x275870u: goto label_275870;
        case 0x275874u: goto label_275874;
        case 0x275878u: goto label_275878;
        case 0x27587cu: goto label_27587c;
        case 0x275880u: goto label_275880;
        case 0x275884u: goto label_275884;
        case 0x275888u: goto label_275888;
        case 0x27588cu: goto label_27588c;
        case 0x275890u: goto label_275890;
        case 0x275894u: goto label_275894;
        case 0x275898u: goto label_275898;
        case 0x27589cu: goto label_27589c;
        case 0x2758a0u: goto label_2758a0;
        case 0x2758a4u: goto label_2758a4;
        case 0x2758a8u: goto label_2758a8;
        case 0x2758acu: goto label_2758ac;
        case 0x2758b0u: goto label_2758b0;
        case 0x2758b4u: goto label_2758b4;
        case 0x2758b8u: goto label_2758b8;
        case 0x2758bcu: goto label_2758bc;
        case 0x2758c0u: goto label_2758c0;
        case 0x2758c4u: goto label_2758c4;
        case 0x2758c8u: goto label_2758c8;
        case 0x2758ccu: goto label_2758cc;
        case 0x2758d0u: goto label_2758d0;
        case 0x2758d4u: goto label_2758d4;
        case 0x2758d8u: goto label_2758d8;
        case 0x2758dcu: goto label_2758dc;
        case 0x2758e0u: goto label_2758e0;
        case 0x2758e4u: goto label_2758e4;
        case 0x2758e8u: goto label_2758e8;
        case 0x2758ecu: goto label_2758ec;
        case 0x2758f0u: goto label_2758f0;
        case 0x2758f4u: goto label_2758f4;
        case 0x2758f8u: goto label_2758f8;
        case 0x2758fcu: goto label_2758fc;
        case 0x275900u: goto label_275900;
        case 0x275904u: goto label_275904;
        case 0x275908u: goto label_275908;
        case 0x27590cu: goto label_27590c;
        case 0x275910u: goto label_275910;
        case 0x275914u: goto label_275914;
        case 0x275918u: goto label_275918;
        case 0x27591cu: goto label_27591c;
        case 0x275920u: goto label_275920;
        case 0x275924u: goto label_275924;
        case 0x275928u: goto label_275928;
        case 0x27592cu: goto label_27592c;
        case 0x275930u: goto label_275930;
        case 0x275934u: goto label_275934;
        case 0x275938u: goto label_275938;
        case 0x27593cu: goto label_27593c;
        case 0x275940u: goto label_275940;
        case 0x275944u: goto label_275944;
        case 0x275948u: goto label_275948;
        case 0x27594cu: goto label_27594c;
        case 0x275950u: goto label_275950;
        case 0x275954u: goto label_275954;
        case 0x275958u: goto label_275958;
        case 0x27595cu: goto label_27595c;
        case 0x275960u: goto label_275960;
        case 0x275964u: goto label_275964;
        case 0x275968u: goto label_275968;
        case 0x27596cu: goto label_27596c;
        case 0x275970u: goto label_275970;
        case 0x275974u: goto label_275974;
        case 0x275978u: goto label_275978;
        case 0x27597cu: goto label_27597c;
        case 0x275980u: goto label_275980;
        case 0x275984u: goto label_275984;
        case 0x275988u: goto label_275988;
        case 0x27598cu: goto label_27598c;
        case 0x275990u: goto label_275990;
        case 0x275994u: goto label_275994;
        case 0x275998u: goto label_275998;
        case 0x27599cu: goto label_27599c;
        case 0x2759a0u: goto label_2759a0;
        case 0x2759a4u: goto label_2759a4;
        case 0x2759a8u: goto label_2759a8;
        case 0x2759acu: goto label_2759ac;
        case 0x2759b0u: goto label_2759b0;
        case 0x2759b4u: goto label_2759b4;
        case 0x2759b8u: goto label_2759b8;
        case 0x2759bcu: goto label_2759bc;
        case 0x2759c0u: goto label_2759c0;
        case 0x2759c4u: goto label_2759c4;
        case 0x2759c8u: goto label_2759c8;
        case 0x2759ccu: goto label_2759cc;
        case 0x2759d0u: goto label_2759d0;
        case 0x2759d4u: goto label_2759d4;
        case 0x2759d8u: goto label_2759d8;
        case 0x2759dcu: goto label_2759dc;
        case 0x2759e0u: goto label_2759e0;
        case 0x2759e4u: goto label_2759e4;
        case 0x2759e8u: goto label_2759e8;
        case 0x2759ecu: goto label_2759ec;
        case 0x2759f0u: goto label_2759f0;
        case 0x2759f4u: goto label_2759f4;
        case 0x2759f8u: goto label_2759f8;
        case 0x2759fcu: goto label_2759fc;
        case 0x275a00u: goto label_275a00;
        case 0x275a04u: goto label_275a04;
        case 0x275a08u: goto label_275a08;
        case 0x275a0cu: goto label_275a0c;
        case 0x275a10u: goto label_275a10;
        case 0x275a14u: goto label_275a14;
        case 0x275a18u: goto label_275a18;
        case 0x275a1cu: goto label_275a1c;
        case 0x275a20u: goto label_275a20;
        case 0x275a24u: goto label_275a24;
        case 0x275a28u: goto label_275a28;
        case 0x275a2cu: goto label_275a2c;
        case 0x275a30u: goto label_275a30;
        case 0x275a34u: goto label_275a34;
        case 0x275a38u: goto label_275a38;
        case 0x275a3cu: goto label_275a3c;
        case 0x275a40u: goto label_275a40;
        case 0x275a44u: goto label_275a44;
        case 0x275a48u: goto label_275a48;
        case 0x275a4cu: goto label_275a4c;
        case 0x275a50u: goto label_275a50;
        case 0x275a54u: goto label_275a54;
        case 0x275a58u: goto label_275a58;
        case 0x275a5cu: goto label_275a5c;
        case 0x275a60u: goto label_275a60;
        case 0x275a64u: goto label_275a64;
        case 0x275a68u: goto label_275a68;
        case 0x275a6cu: goto label_275a6c;
        case 0x275a70u: goto label_275a70;
        case 0x275a74u: goto label_275a74;
        case 0x275a78u: goto label_275a78;
        case 0x275a7cu: goto label_275a7c;
        case 0x275a80u: goto label_275a80;
        case 0x275a84u: goto label_275a84;
        case 0x275a88u: goto label_275a88;
        case 0x275a8cu: goto label_275a8c;
        case 0x275a90u: goto label_275a90;
        case 0x275a94u: goto label_275a94;
        case 0x275a98u: goto label_275a98;
        case 0x275a9cu: goto label_275a9c;
        case 0x275aa0u: goto label_275aa0;
        case 0x275aa4u: goto label_275aa4;
        case 0x275aa8u: goto label_275aa8;
        case 0x275aacu: goto label_275aac;
        case 0x275ab0u: goto label_275ab0;
        case 0x275ab4u: goto label_275ab4;
        case 0x275ab8u: goto label_275ab8;
        case 0x275abcu: goto label_275abc;
        case 0x275ac0u: goto label_275ac0;
        case 0x275ac4u: goto label_275ac4;
        case 0x275ac8u: goto label_275ac8;
        case 0x275accu: goto label_275acc;
        case 0x275ad0u: goto label_275ad0;
        case 0x275ad4u: goto label_275ad4;
        case 0x275ad8u: goto label_275ad8;
        case 0x275adcu: goto label_275adc;
        case 0x275ae0u: goto label_275ae0;
        case 0x275ae4u: goto label_275ae4;
        case 0x275ae8u: goto label_275ae8;
        case 0x275aecu: goto label_275aec;
        case 0x275af0u: goto label_275af0;
        case 0x275af4u: goto label_275af4;
        case 0x275af8u: goto label_275af8;
        case 0x275afcu: goto label_275afc;
        case 0x275b00u: goto label_275b00;
        case 0x275b04u: goto label_275b04;
        case 0x275b08u: goto label_275b08;
        case 0x275b0cu: goto label_275b0c;
        case 0x275b10u: goto label_275b10;
        case 0x275b14u: goto label_275b14;
        case 0x275b18u: goto label_275b18;
        case 0x275b1cu: goto label_275b1c;
        case 0x275b20u: goto label_275b20;
        case 0x275b24u: goto label_275b24;
        case 0x275b28u: goto label_275b28;
        case 0x275b2cu: goto label_275b2c;
        case 0x275b30u: goto label_275b30;
        case 0x275b34u: goto label_275b34;
        case 0x275b38u: goto label_275b38;
        case 0x275b3cu: goto label_275b3c;
        case 0x275b40u: goto label_275b40;
        case 0x275b44u: goto label_275b44;
        case 0x275b48u: goto label_275b48;
        case 0x275b4cu: goto label_275b4c;
        case 0x275b50u: goto label_275b50;
        case 0x275b54u: goto label_275b54;
        case 0x275b58u: goto label_275b58;
        case 0x275b5cu: goto label_275b5c;
        case 0x275b60u: goto label_275b60;
        case 0x275b64u: goto label_275b64;
        case 0x275b68u: goto label_275b68;
        case 0x275b6cu: goto label_275b6c;
        case 0x275b70u: goto label_275b70;
        case 0x275b74u: goto label_275b74;
        case 0x275b78u: goto label_275b78;
        case 0x275b7cu: goto label_275b7c;
        case 0x275b80u: goto label_275b80;
        case 0x275b84u: goto label_275b84;
        case 0x275b88u: goto label_275b88;
        case 0x275b8cu: goto label_275b8c;
        case 0x275b90u: goto label_275b90;
        case 0x275b94u: goto label_275b94;
        case 0x275b98u: goto label_275b98;
        case 0x275b9cu: goto label_275b9c;
        case 0x275ba0u: goto label_275ba0;
        case 0x275ba4u: goto label_275ba4;
        case 0x275ba8u: goto label_275ba8;
        case 0x275bacu: goto label_275bac;
        case 0x275bb0u: goto label_275bb0;
        case 0x275bb4u: goto label_275bb4;
        case 0x275bb8u: goto label_275bb8;
        case 0x275bbcu: goto label_275bbc;
        case 0x275bc0u: goto label_275bc0;
        case 0x275bc4u: goto label_275bc4;
        case 0x275bc8u: goto label_275bc8;
        case 0x275bccu: goto label_275bcc;
        case 0x275bd0u: goto label_275bd0;
        case 0x275bd4u: goto label_275bd4;
        case 0x275bd8u: goto label_275bd8;
        case 0x275bdcu: goto label_275bdc;
        case 0x275be0u: goto label_275be0;
        case 0x275be4u: goto label_275be4;
        case 0x275be8u: goto label_275be8;
        case 0x275becu: goto label_275bec;
        case 0x275bf0u: goto label_275bf0;
        case 0x275bf4u: goto label_275bf4;
        case 0x275bf8u: goto label_275bf8;
        case 0x275bfcu: goto label_275bfc;
        case 0x275c00u: goto label_275c00;
        case 0x275c04u: goto label_275c04;
        case 0x275c08u: goto label_275c08;
        case 0x275c0cu: goto label_275c0c;
        case 0x275c10u: goto label_275c10;
        case 0x275c14u: goto label_275c14;
        case 0x275c18u: goto label_275c18;
        case 0x275c1cu: goto label_275c1c;
        case 0x275c20u: goto label_275c20;
        case 0x275c24u: goto label_275c24;
        case 0x275c28u: goto label_275c28;
        case 0x275c2cu: goto label_275c2c;
        case 0x275c30u: goto label_275c30;
        case 0x275c34u: goto label_275c34;
        case 0x275c38u: goto label_275c38;
        case 0x275c3cu: goto label_275c3c;
        case 0x275c40u: goto label_275c40;
        case 0x275c44u: goto label_275c44;
        case 0x275c48u: goto label_275c48;
        case 0x275c4cu: goto label_275c4c;
        case 0x275c50u: goto label_275c50;
        case 0x275c54u: goto label_275c54;
        case 0x275c58u: goto label_275c58;
        case 0x275c5cu: goto label_275c5c;
        case 0x275c60u: goto label_275c60;
        case 0x275c64u: goto label_275c64;
        case 0x275c68u: goto label_275c68;
        case 0x275c6cu: goto label_275c6c;
        case 0x275c70u: goto label_275c70;
        case 0x275c74u: goto label_275c74;
        case 0x275c78u: goto label_275c78;
        case 0x275c7cu: goto label_275c7c;
        case 0x275c80u: goto label_275c80;
        case 0x275c84u: goto label_275c84;
        case 0x275c88u: goto label_275c88;
        case 0x275c8cu: goto label_275c8c;
        case 0x275c90u: goto label_275c90;
        case 0x275c94u: goto label_275c94;
        case 0x275c98u: goto label_275c98;
        case 0x275c9cu: goto label_275c9c;
        case 0x275ca0u: goto label_275ca0;
        case 0x275ca4u: goto label_275ca4;
        case 0x275ca8u: goto label_275ca8;
        case 0x275cacu: goto label_275cac;
        case 0x275cb0u: goto label_275cb0;
        case 0x275cb4u: goto label_275cb4;
        case 0x275cb8u: goto label_275cb8;
        case 0x275cbcu: goto label_275cbc;
        case 0x275cc0u: goto label_275cc0;
        case 0x275cc4u: goto label_275cc4;
        case 0x275cc8u: goto label_275cc8;
        case 0x275cccu: goto label_275ccc;
        case 0x275cd0u: goto label_275cd0;
        case 0x275cd4u: goto label_275cd4;
        case 0x275cd8u: goto label_275cd8;
        case 0x275cdcu: goto label_275cdc;
        case 0x275ce0u: goto label_275ce0;
        case 0x275ce4u: goto label_275ce4;
        case 0x275ce8u: goto label_275ce8;
        case 0x275cecu: goto label_275cec;
        case 0x275cf0u: goto label_275cf0;
        case 0x275cf4u: goto label_275cf4;
        case 0x275cf8u: goto label_275cf8;
        case 0x275cfcu: goto label_275cfc;
        case 0x275d00u: goto label_275d00;
        case 0x275d04u: goto label_275d04;
        case 0x275d08u: goto label_275d08;
        case 0x275d0cu: goto label_275d0c;
        case 0x275d10u: goto label_275d10;
        case 0x275d14u: goto label_275d14;
        case 0x275d18u: goto label_275d18;
        case 0x275d1cu: goto label_275d1c;
        case 0x275d20u: goto label_275d20;
        case 0x275d24u: goto label_275d24;
        case 0x275d28u: goto label_275d28;
        case 0x275d2cu: goto label_275d2c;
        case 0x275d30u: goto label_275d30;
        case 0x275d34u: goto label_275d34;
        case 0x275d38u: goto label_275d38;
        case 0x275d3cu: goto label_275d3c;
        case 0x275d40u: goto label_275d40;
        case 0x275d44u: goto label_275d44;
        case 0x275d48u: goto label_275d48;
        case 0x275d4cu: goto label_275d4c;
        case 0x275d50u: goto label_275d50;
        case 0x275d54u: goto label_275d54;
        case 0x275d58u: goto label_275d58;
        case 0x275d5cu: goto label_275d5c;
        case 0x275d60u: goto label_275d60;
        case 0x275d64u: goto label_275d64;
        case 0x275d68u: goto label_275d68;
        case 0x275d6cu: goto label_275d6c;
        case 0x275d70u: goto label_275d70;
        case 0x275d74u: goto label_275d74;
        case 0x275d78u: goto label_275d78;
        case 0x275d7cu: goto label_275d7c;
        case 0x275d80u: goto label_275d80;
        case 0x275d84u: goto label_275d84;
        case 0x275d88u: goto label_275d88;
        case 0x275d8cu: goto label_275d8c;
        case 0x275d90u: goto label_275d90;
        case 0x275d94u: goto label_275d94;
        case 0x275d98u: goto label_275d98;
        case 0x275d9cu: goto label_275d9c;
        case 0x275da0u: goto label_275da0;
        case 0x275da4u: goto label_275da4;
        case 0x275da8u: goto label_275da8;
        case 0x275dacu: goto label_275dac;
        case 0x275db0u: goto label_275db0;
        case 0x275db4u: goto label_275db4;
        case 0x275db8u: goto label_275db8;
        case 0x275dbcu: goto label_275dbc;
        case 0x275dc0u: goto label_275dc0;
        case 0x275dc4u: goto label_275dc4;
        case 0x275dc8u: goto label_275dc8;
        case 0x275dccu: goto label_275dcc;
        case 0x275dd0u: goto label_275dd0;
        case 0x275dd4u: goto label_275dd4;
        case 0x275dd8u: goto label_275dd8;
        case 0x275ddcu: goto label_275ddc;
        case 0x275de0u: goto label_275de0;
        case 0x275de4u: goto label_275de4;
        case 0x275de8u: goto label_275de8;
        case 0x275decu: goto label_275dec;
        case 0x275df0u: goto label_275df0;
        case 0x275df4u: goto label_275df4;
        case 0x275df8u: goto label_275df8;
        case 0x275dfcu: goto label_275dfc;
        case 0x275e00u: goto label_275e00;
        case 0x275e04u: goto label_275e04;
        case 0x275e08u: goto label_275e08;
        case 0x275e0cu: goto label_275e0c;
        case 0x275e10u: goto label_275e10;
        case 0x275e14u: goto label_275e14;
        case 0x275e18u: goto label_275e18;
        case 0x275e1cu: goto label_275e1c;
        case 0x275e20u: goto label_275e20;
        case 0x275e24u: goto label_275e24;
        case 0x275e28u: goto label_275e28;
        case 0x275e2cu: goto label_275e2c;
        case 0x275e30u: goto label_275e30;
        case 0x275e34u: goto label_275e34;
        case 0x275e38u: goto label_275e38;
        case 0x275e3cu: goto label_275e3c;
        case 0x275e40u: goto label_275e40;
        case 0x275e44u: goto label_275e44;
        case 0x275e48u: goto label_275e48;
        case 0x275e4cu: goto label_275e4c;
        case 0x275e50u: goto label_275e50;
        case 0x275e54u: goto label_275e54;
        case 0x275e58u: goto label_275e58;
        case 0x275e5cu: goto label_275e5c;
        case 0x275e60u: goto label_275e60;
        case 0x275e64u: goto label_275e64;
        case 0x275e68u: goto label_275e68;
        case 0x275e6cu: goto label_275e6c;
        case 0x275e70u: goto label_275e70;
        case 0x275e74u: goto label_275e74;
        case 0x275e78u: goto label_275e78;
        case 0x275e7cu: goto label_275e7c;
        case 0x275e80u: goto label_275e80;
        case 0x275e84u: goto label_275e84;
        case 0x275e88u: goto label_275e88;
        case 0x275e8cu: goto label_275e8c;
        case 0x275e90u: goto label_275e90;
        case 0x275e94u: goto label_275e94;
        case 0x275e98u: goto label_275e98;
        case 0x275e9cu: goto label_275e9c;
        case 0x275ea0u: goto label_275ea0;
        case 0x275ea4u: goto label_275ea4;
        case 0x275ea8u: goto label_275ea8;
        case 0x275eacu: goto label_275eac;
        case 0x275eb0u: goto label_275eb0;
        case 0x275eb4u: goto label_275eb4;
        case 0x275eb8u: goto label_275eb8;
        case 0x275ebcu: goto label_275ebc;
        case 0x275ec0u: goto label_275ec0;
        case 0x275ec4u: goto label_275ec4;
        case 0x275ec8u: goto label_275ec8;
        case 0x275eccu: goto label_275ecc;
        case 0x275ed0u: goto label_275ed0;
        case 0x275ed4u: goto label_275ed4;
        case 0x275ed8u: goto label_275ed8;
        case 0x275edcu: goto label_275edc;
        case 0x275ee0u: goto label_275ee0;
        case 0x275ee4u: goto label_275ee4;
        case 0x275ee8u: goto label_275ee8;
        case 0x275eecu: goto label_275eec;
        case 0x275ef0u: goto label_275ef0;
        case 0x275ef4u: goto label_275ef4;
        case 0x275ef8u: goto label_275ef8;
        case 0x275efcu: goto label_275efc;
        case 0x275f00u: goto label_275f00;
        case 0x275f04u: goto label_275f04;
        case 0x275f08u: goto label_275f08;
        case 0x275f0cu: goto label_275f0c;
        case 0x275f10u: goto label_275f10;
        case 0x275f14u: goto label_275f14;
        case 0x275f18u: goto label_275f18;
        case 0x275f1cu: goto label_275f1c;
        case 0x275f20u: goto label_275f20;
        case 0x275f24u: goto label_275f24;
        case 0x275f28u: goto label_275f28;
        case 0x275f2cu: goto label_275f2c;
        case 0x275f30u: goto label_275f30;
        case 0x275f34u: goto label_275f34;
        case 0x275f38u: goto label_275f38;
        case 0x275f3cu: goto label_275f3c;
        case 0x275f40u: goto label_275f40;
        case 0x275f44u: goto label_275f44;
        case 0x275f48u: goto label_275f48;
        case 0x275f4cu: goto label_275f4c;
        case 0x275f50u: goto label_275f50;
        case 0x275f54u: goto label_275f54;
        case 0x275f58u: goto label_275f58;
        case 0x275f5cu: goto label_275f5c;
        case 0x275f60u: goto label_275f60;
        case 0x275f64u: goto label_275f64;
        case 0x275f68u: goto label_275f68;
        case 0x275f6cu: goto label_275f6c;
        case 0x275f70u: goto label_275f70;
        case 0x275f74u: goto label_275f74;
        case 0x275f78u: goto label_275f78;
        case 0x275f7cu: goto label_275f7c;
        case 0x275f80u: goto label_275f80;
        case 0x275f84u: goto label_275f84;
        case 0x275f88u: goto label_275f88;
        case 0x275f8cu: goto label_275f8c;
        case 0x275f90u: goto label_275f90;
        case 0x275f94u: goto label_275f94;
        case 0x275f98u: goto label_275f98;
        case 0x275f9cu: goto label_275f9c;
        case 0x275fa0u: goto label_275fa0;
        case 0x275fa4u: goto label_275fa4;
        case 0x275fa8u: goto label_275fa8;
        case 0x275facu: goto label_275fac;
        case 0x275fb0u: goto label_275fb0;
        case 0x275fb4u: goto label_275fb4;
        case 0x275fb8u: goto label_275fb8;
        case 0x275fbcu: goto label_275fbc;
        case 0x275fc0u: goto label_275fc0;
        case 0x275fc4u: goto label_275fc4;
        case 0x275fc8u: goto label_275fc8;
        case 0x275fccu: goto label_275fcc;
        case 0x275fd0u: goto label_275fd0;
        case 0x275fd4u: goto label_275fd4;
        case 0x275fd8u: goto label_275fd8;
        case 0x275fdcu: goto label_275fdc;
        case 0x275fe0u: goto label_275fe0;
        case 0x275fe4u: goto label_275fe4;
        case 0x275fe8u: goto label_275fe8;
        case 0x275fecu: goto label_275fec;
        case 0x275ff0u: goto label_275ff0;
        case 0x275ff4u: goto label_275ff4;
        case 0x275ff8u: goto label_275ff8;
        case 0x275ffcu: goto label_275ffc;
        case 0x276000u: goto label_276000;
        case 0x276004u: goto label_276004;
        case 0x276008u: goto label_276008;
        case 0x27600cu: goto label_27600c;
        case 0x276010u: goto label_276010;
        case 0x276014u: goto label_276014;
        case 0x276018u: goto label_276018;
        case 0x27601cu: goto label_27601c;
        case 0x276020u: goto label_276020;
        case 0x276024u: goto label_276024;
        case 0x276028u: goto label_276028;
        case 0x27602cu: goto label_27602c;
        case 0x276030u: goto label_276030;
        case 0x276034u: goto label_276034;
        case 0x276038u: goto label_276038;
        case 0x27603cu: goto label_27603c;
        case 0x276040u: goto label_276040;
        case 0x276044u: goto label_276044;
        case 0x276048u: goto label_276048;
        case 0x27604cu: goto label_27604c;
        case 0x276050u: goto label_276050;
        case 0x276054u: goto label_276054;
        case 0x276058u: goto label_276058;
        case 0x27605cu: goto label_27605c;
        case 0x276060u: goto label_276060;
        case 0x276064u: goto label_276064;
        case 0x276068u: goto label_276068;
        case 0x27606cu: goto label_27606c;
        case 0x276070u: goto label_276070;
        case 0x276074u: goto label_276074;
        case 0x276078u: goto label_276078;
        case 0x27607cu: goto label_27607c;
        case 0x276080u: goto label_276080;
        case 0x276084u: goto label_276084;
        case 0x276088u: goto label_276088;
        case 0x27608cu: goto label_27608c;
        case 0x276090u: goto label_276090;
        case 0x276094u: goto label_276094;
        case 0x276098u: goto label_276098;
        case 0x27609cu: goto label_27609c;
        case 0x2760a0u: goto label_2760a0;
        case 0x2760a4u: goto label_2760a4;
        case 0x2760a8u: goto label_2760a8;
        case 0x2760acu: goto label_2760ac;
        case 0x2760b0u: goto label_2760b0;
        case 0x2760b4u: goto label_2760b4;
        case 0x2760b8u: goto label_2760b8;
        case 0x2760bcu: goto label_2760bc;
        case 0x2760c0u: goto label_2760c0;
        case 0x2760c4u: goto label_2760c4;
        case 0x2760c8u: goto label_2760c8;
        case 0x2760ccu: goto label_2760cc;
        case 0x2760d0u: goto label_2760d0;
        case 0x2760d4u: goto label_2760d4;
        case 0x2760d8u: goto label_2760d8;
        case 0x2760dcu: goto label_2760dc;
        case 0x2760e0u: goto label_2760e0;
        case 0x2760e4u: goto label_2760e4;
        case 0x2760e8u: goto label_2760e8;
        case 0x2760ecu: goto label_2760ec;
        case 0x2760f0u: goto label_2760f0;
        case 0x2760f4u: goto label_2760f4;
        case 0x2760f8u: goto label_2760f8;
        case 0x2760fcu: goto label_2760fc;
        case 0x276100u: goto label_276100;
        case 0x276104u: goto label_276104;
        case 0x276108u: goto label_276108;
        case 0x27610cu: goto label_27610c;
        case 0x276110u: goto label_276110;
        case 0x276114u: goto label_276114;
        case 0x276118u: goto label_276118;
        case 0x27611cu: goto label_27611c;
        case 0x276120u: goto label_276120;
        case 0x276124u: goto label_276124;
        case 0x276128u: goto label_276128;
        case 0x27612cu: goto label_27612c;
        case 0x276130u: goto label_276130;
        case 0x276134u: goto label_276134;
        case 0x276138u: goto label_276138;
        case 0x27613cu: goto label_27613c;
        case 0x276140u: goto label_276140;
        case 0x276144u: goto label_276144;
        case 0x276148u: goto label_276148;
        case 0x27614cu: goto label_27614c;
        case 0x276150u: goto label_276150;
        case 0x276154u: goto label_276154;
        case 0x276158u: goto label_276158;
        case 0x27615cu: goto label_27615c;
        case 0x276160u: goto label_276160;
        case 0x276164u: goto label_276164;
        case 0x276168u: goto label_276168;
        case 0x27616cu: goto label_27616c;
        case 0x276170u: goto label_276170;
        case 0x276174u: goto label_276174;
        case 0x276178u: goto label_276178;
        case 0x27617cu: goto label_27617c;
        case 0x276180u: goto label_276180;
        case 0x276184u: goto label_276184;
        case 0x276188u: goto label_276188;
        case 0x27618cu: goto label_27618c;
        case 0x276190u: goto label_276190;
        case 0x276194u: goto label_276194;
        case 0x276198u: goto label_276198;
        case 0x27619cu: goto label_27619c;
        case 0x2761a0u: goto label_2761a0;
        case 0x2761a4u: goto label_2761a4;
        case 0x2761a8u: goto label_2761a8;
        case 0x2761acu: goto label_2761ac;
        case 0x2761b0u: goto label_2761b0;
        case 0x2761b4u: goto label_2761b4;
        case 0x2761b8u: goto label_2761b8;
        case 0x2761bcu: goto label_2761bc;
        case 0x2761c0u: goto label_2761c0;
        case 0x2761c4u: goto label_2761c4;
        case 0x2761c8u: goto label_2761c8;
        case 0x2761ccu: goto label_2761cc;
        case 0x2761d0u: goto label_2761d0;
        case 0x2761d4u: goto label_2761d4;
        case 0x2761d8u: goto label_2761d8;
        case 0x2761dcu: goto label_2761dc;
        case 0x2761e0u: goto label_2761e0;
        case 0x2761e4u: goto label_2761e4;
        case 0x2761e8u: goto label_2761e8;
        case 0x2761ecu: goto label_2761ec;
        case 0x2761f0u: goto label_2761f0;
        case 0x2761f4u: goto label_2761f4;
        case 0x2761f8u: goto label_2761f8;
        case 0x2761fcu: goto label_2761fc;
        case 0x276200u: goto label_276200;
        case 0x276204u: goto label_276204;
        case 0x276208u: goto label_276208;
        case 0x27620cu: goto label_27620c;
        case 0x276210u: goto label_276210;
        case 0x276214u: goto label_276214;
        case 0x276218u: goto label_276218;
        case 0x27621cu: goto label_27621c;
        case 0x276220u: goto label_276220;
        case 0x276224u: goto label_276224;
        case 0x276228u: goto label_276228;
        case 0x27622cu: goto label_27622c;
        case 0x276230u: goto label_276230;
        case 0x276234u: goto label_276234;
        case 0x276238u: goto label_276238;
        case 0x27623cu: goto label_27623c;
        case 0x276240u: goto label_276240;
        case 0x276244u: goto label_276244;
        case 0x276248u: goto label_276248;
        case 0x27624cu: goto label_27624c;
        case 0x276250u: goto label_276250;
        case 0x276254u: goto label_276254;
        case 0x276258u: goto label_276258;
        case 0x27625cu: goto label_27625c;
        case 0x276260u: goto label_276260;
        case 0x276264u: goto label_276264;
        case 0x276268u: goto label_276268;
        case 0x27626cu: goto label_27626c;
        case 0x276270u: goto label_276270;
        case 0x276274u: goto label_276274;
        case 0x276278u: goto label_276278;
        case 0x27627cu: goto label_27627c;
        case 0x276280u: goto label_276280;
        case 0x276284u: goto label_276284;
        case 0x276288u: goto label_276288;
        case 0x27628cu: goto label_27628c;
        case 0x276290u: goto label_276290;
        case 0x276294u: goto label_276294;
        case 0x276298u: goto label_276298;
        case 0x27629cu: goto label_27629c;
        case 0x2762a0u: goto label_2762a0;
        case 0x2762a4u: goto label_2762a4;
        case 0x2762a8u: goto label_2762a8;
        case 0x2762acu: goto label_2762ac;
        case 0x2762b0u: goto label_2762b0;
        case 0x2762b4u: goto label_2762b4;
        case 0x2762b8u: goto label_2762b8;
        case 0x2762bcu: goto label_2762bc;
        case 0x2762c0u: goto label_2762c0;
        case 0x2762c4u: goto label_2762c4;
        case 0x2762c8u: goto label_2762c8;
        case 0x2762ccu: goto label_2762cc;
        case 0x2762d0u: goto label_2762d0;
        case 0x2762d4u: goto label_2762d4;
        case 0x2762d8u: goto label_2762d8;
        case 0x2762dcu: goto label_2762dc;
        case 0x2762e0u: goto label_2762e0;
        case 0x2762e4u: goto label_2762e4;
        case 0x2762e8u: goto label_2762e8;
        case 0x2762ecu: goto label_2762ec;
        case 0x2762f0u: goto label_2762f0;
        case 0x2762f4u: goto label_2762f4;
        case 0x2762f8u: goto label_2762f8;
        case 0x2762fcu: goto label_2762fc;
        case 0x276300u: goto label_276300;
        case 0x276304u: goto label_276304;
        case 0x276308u: goto label_276308;
        case 0x27630cu: goto label_27630c;
        case 0x276310u: goto label_276310;
        case 0x276314u: goto label_276314;
        case 0x276318u: goto label_276318;
        case 0x27631cu: goto label_27631c;
        case 0x276320u: goto label_276320;
        case 0x276324u: goto label_276324;
        case 0x276328u: goto label_276328;
        case 0x27632cu: goto label_27632c;
        case 0x276330u: goto label_276330;
        case 0x276334u: goto label_276334;
        case 0x276338u: goto label_276338;
        case 0x27633cu: goto label_27633c;
        case 0x276340u: goto label_276340;
        case 0x276344u: goto label_276344;
        case 0x276348u: goto label_276348;
        case 0x27634cu: goto label_27634c;
        case 0x276350u: goto label_276350;
        case 0x276354u: goto label_276354;
        case 0x276358u: goto label_276358;
        case 0x27635cu: goto label_27635c;
        case 0x276360u: goto label_276360;
        case 0x276364u: goto label_276364;
        case 0x276368u: goto label_276368;
        case 0x27636cu: goto label_27636c;
        case 0x276370u: goto label_276370;
        case 0x276374u: goto label_276374;
        case 0x276378u: goto label_276378;
        case 0x27637cu: goto label_27637c;
        case 0x276380u: goto label_276380;
        case 0x276384u: goto label_276384;
        case 0x276388u: goto label_276388;
        case 0x27638cu: goto label_27638c;
        case 0x276390u: goto label_276390;
        case 0x276394u: goto label_276394;
        case 0x276398u: goto label_276398;
        case 0x27639cu: goto label_27639c;
        case 0x2763a0u: goto label_2763a0;
        case 0x2763a4u: goto label_2763a4;
        case 0x2763a8u: goto label_2763a8;
        case 0x2763acu: goto label_2763ac;
        case 0x2763b0u: goto label_2763b0;
        case 0x2763b4u: goto label_2763b4;
        case 0x2763b8u: goto label_2763b8;
        case 0x2763bcu: goto label_2763bc;
        case 0x2763c0u: goto label_2763c0;
        case 0x2763c4u: goto label_2763c4;
        case 0x2763c8u: goto label_2763c8;
        case 0x2763ccu: goto label_2763cc;
        case 0x2763d0u: goto label_2763d0;
        case 0x2763d4u: goto label_2763d4;
        case 0x2763d8u: goto label_2763d8;
        case 0x2763dcu: goto label_2763dc;
        case 0x2763e0u: goto label_2763e0;
        case 0x2763e4u: goto label_2763e4;
        case 0x2763e8u: goto label_2763e8;
        case 0x2763ecu: goto label_2763ec;
        case 0x2763f0u: goto label_2763f0;
        case 0x2763f4u: goto label_2763f4;
        case 0x2763f8u: goto label_2763f8;
        case 0x2763fcu: goto label_2763fc;
        case 0x276400u: goto label_276400;
        case 0x276404u: goto label_276404;
        case 0x276408u: goto label_276408;
        case 0x27640cu: goto label_27640c;
        case 0x276410u: goto label_276410;
        case 0x276414u: goto label_276414;
        case 0x276418u: goto label_276418;
        case 0x27641cu: goto label_27641c;
        case 0x276420u: goto label_276420;
        case 0x276424u: goto label_276424;
        case 0x276428u: goto label_276428;
        case 0x27642cu: goto label_27642c;
        case 0x276430u: goto label_276430;
        case 0x276434u: goto label_276434;
        case 0x276438u: goto label_276438;
        case 0x27643cu: goto label_27643c;
        case 0x276440u: goto label_276440;
        case 0x276444u: goto label_276444;
        case 0x276448u: goto label_276448;
        case 0x27644cu: goto label_27644c;
        case 0x276450u: goto label_276450;
        case 0x276454u: goto label_276454;
        case 0x276458u: goto label_276458;
        case 0x27645cu: goto label_27645c;
        case 0x276460u: goto label_276460;
        case 0x276464u: goto label_276464;
        case 0x276468u: goto label_276468;
        case 0x27646cu: goto label_27646c;
        case 0x276470u: goto label_276470;
        case 0x276474u: goto label_276474;
        case 0x276478u: goto label_276478;
        case 0x27647cu: goto label_27647c;
        case 0x276480u: goto label_276480;
        case 0x276484u: goto label_276484;
        case 0x276488u: goto label_276488;
        case 0x27648cu: goto label_27648c;
        case 0x276490u: goto label_276490;
        case 0x276494u: goto label_276494;
        case 0x276498u: goto label_276498;
        case 0x27649cu: goto label_27649c;
        case 0x2764a0u: goto label_2764a0;
        case 0x2764a4u: goto label_2764a4;
        case 0x2764a8u: goto label_2764a8;
        case 0x2764acu: goto label_2764ac;
        case 0x2764b0u: goto label_2764b0;
        case 0x2764b4u: goto label_2764b4;
        case 0x2764b8u: goto label_2764b8;
        case 0x2764bcu: goto label_2764bc;
        case 0x2764c0u: goto label_2764c0;
        case 0x2764c4u: goto label_2764c4;
        case 0x2764c8u: goto label_2764c8;
        case 0x2764ccu: goto label_2764cc;
        case 0x2764d0u: goto label_2764d0;
        case 0x2764d4u: goto label_2764d4;
        case 0x2764d8u: goto label_2764d8;
        case 0x2764dcu: goto label_2764dc;
        case 0x2764e0u: goto label_2764e0;
        case 0x2764e4u: goto label_2764e4;
        case 0x2764e8u: goto label_2764e8;
        case 0x2764ecu: goto label_2764ec;
        case 0x2764f0u: goto label_2764f0;
        case 0x2764f4u: goto label_2764f4;
        case 0x2764f8u: goto label_2764f8;
        case 0x2764fcu: goto label_2764fc;
        case 0x276500u: goto label_276500;
        case 0x276504u: goto label_276504;
        case 0x276508u: goto label_276508;
        case 0x27650cu: goto label_27650c;
        case 0x276510u: goto label_276510;
        case 0x276514u: goto label_276514;
        case 0x276518u: goto label_276518;
        case 0x27651cu: goto label_27651c;
        case 0x276520u: goto label_276520;
        case 0x276524u: goto label_276524;
        case 0x276528u: goto label_276528;
        case 0x27652cu: goto label_27652c;
        case 0x276530u: goto label_276530;
        case 0x276534u: goto label_276534;
        case 0x276538u: goto label_276538;
        case 0x27653cu: goto label_27653c;
        case 0x276540u: goto label_276540;
        case 0x276544u: goto label_276544;
        case 0x276548u: goto label_276548;
        case 0x27654cu: goto label_27654c;
        case 0x276550u: goto label_276550;
        case 0x276554u: goto label_276554;
        case 0x276558u: goto label_276558;
        case 0x27655cu: goto label_27655c;
        case 0x276560u: goto label_276560;
        case 0x276564u: goto label_276564;
        case 0x276568u: goto label_276568;
        case 0x27656cu: goto label_27656c;
        case 0x276570u: goto label_276570;
        case 0x276574u: goto label_276574;
        case 0x276578u: goto label_276578;
        case 0x27657cu: goto label_27657c;
        case 0x276580u: goto label_276580;
        case 0x276584u: goto label_276584;
        case 0x276588u: goto label_276588;
        case 0x27658cu: goto label_27658c;
        case 0x276590u: goto label_276590;
        case 0x276594u: goto label_276594;
        case 0x276598u: goto label_276598;
        case 0x27659cu: goto label_27659c;
        case 0x2765a0u: goto label_2765a0;
        case 0x2765a4u: goto label_2765a4;
        case 0x2765a8u: goto label_2765a8;
        case 0x2765acu: goto label_2765ac;
        case 0x2765b0u: goto label_2765b0;
        case 0x2765b4u: goto label_2765b4;
        case 0x2765b8u: goto label_2765b8;
        case 0x2765bcu: goto label_2765bc;
        case 0x2765c0u: goto label_2765c0;
        case 0x2765c4u: goto label_2765c4;
        case 0x2765c8u: goto label_2765c8;
        case 0x2765ccu: goto label_2765cc;
        case 0x2765d0u: goto label_2765d0;
        case 0x2765d4u: goto label_2765d4;
        case 0x2765d8u: goto label_2765d8;
        case 0x2765dcu: goto label_2765dc;
        case 0x2765e0u: goto label_2765e0;
        case 0x2765e4u: goto label_2765e4;
        case 0x2765e8u: goto label_2765e8;
        case 0x2765ecu: goto label_2765ec;
        case 0x2765f0u: goto label_2765f0;
        case 0x2765f4u: goto label_2765f4;
        case 0x2765f8u: goto label_2765f8;
        case 0x2765fcu: goto label_2765fc;
        case 0x276600u: goto label_276600;
        case 0x276604u: goto label_276604;
        case 0x276608u: goto label_276608;
        case 0x27660cu: goto label_27660c;
        case 0x276610u: goto label_276610;
        case 0x276614u: goto label_276614;
        case 0x276618u: goto label_276618;
        case 0x27661cu: goto label_27661c;
        case 0x276620u: goto label_276620;
        case 0x276624u: goto label_276624;
        case 0x276628u: goto label_276628;
        case 0x27662cu: goto label_27662c;
        case 0x276630u: goto label_276630;
        case 0x276634u: goto label_276634;
        case 0x276638u: goto label_276638;
        case 0x27663cu: goto label_27663c;
        case 0x276640u: goto label_276640;
        case 0x276644u: goto label_276644;
        case 0x276648u: goto label_276648;
        case 0x27664cu: goto label_27664c;
        case 0x276650u: goto label_276650;
        case 0x276654u: goto label_276654;
        case 0x276658u: goto label_276658;
        case 0x27665cu: goto label_27665c;
        case 0x276660u: goto label_276660;
        case 0x276664u: goto label_276664;
        case 0x276668u: goto label_276668;
        case 0x27666cu: goto label_27666c;
        case 0x276670u: goto label_276670;
        case 0x276674u: goto label_276674;
        case 0x276678u: goto label_276678;
        case 0x27667cu: goto label_27667c;
        case 0x276680u: goto label_276680;
        case 0x276684u: goto label_276684;
        case 0x276688u: goto label_276688;
        case 0x27668cu: goto label_27668c;
        case 0x276690u: goto label_276690;
        case 0x276694u: goto label_276694;
        case 0x276698u: goto label_276698;
        case 0x27669cu: goto label_27669c;
        case 0x2766a0u: goto label_2766a0;
        case 0x2766a4u: goto label_2766a4;
        case 0x2766a8u: goto label_2766a8;
        case 0x2766acu: goto label_2766ac;
        case 0x2766b0u: goto label_2766b0;
        case 0x2766b4u: goto label_2766b4;
        case 0x2766b8u: goto label_2766b8;
        case 0x2766bcu: goto label_2766bc;
        case 0x2766c0u: goto label_2766c0;
        case 0x2766c4u: goto label_2766c4;
        case 0x2766c8u: goto label_2766c8;
        case 0x2766ccu: goto label_2766cc;
        case 0x2766d0u: goto label_2766d0;
        case 0x2766d4u: goto label_2766d4;
        case 0x2766d8u: goto label_2766d8;
        case 0x2766dcu: goto label_2766dc;
        case 0x2766e0u: goto label_2766e0;
        case 0x2766e4u: goto label_2766e4;
        case 0x2766e8u: goto label_2766e8;
        case 0x2766ecu: goto label_2766ec;
        case 0x2766f0u: goto label_2766f0;
        case 0x2766f4u: goto label_2766f4;
        case 0x2766f8u: goto label_2766f8;
        case 0x2766fcu: goto label_2766fc;
        case 0x276700u: goto label_276700;
        case 0x276704u: goto label_276704;
        case 0x276708u: goto label_276708;
        case 0x27670cu: goto label_27670c;
        case 0x276710u: goto label_276710;
        case 0x276714u: goto label_276714;
        case 0x276718u: goto label_276718;
        case 0x27671cu: goto label_27671c;
        case 0x276720u: goto label_276720;
        case 0x276724u: goto label_276724;
        case 0x276728u: goto label_276728;
        case 0x27672cu: goto label_27672c;
        case 0x276730u: goto label_276730;
        case 0x276734u: goto label_276734;
        case 0x276738u: goto label_276738;
        case 0x27673cu: goto label_27673c;
        case 0x276740u: goto label_276740;
        case 0x276744u: goto label_276744;
        case 0x276748u: goto label_276748;
        case 0x27674cu: goto label_27674c;
        case 0x276750u: goto label_276750;
        case 0x276754u: goto label_276754;
        case 0x276758u: goto label_276758;
        case 0x27675cu: goto label_27675c;
        case 0x276760u: goto label_276760;
        case 0x276764u: goto label_276764;
        case 0x276768u: goto label_276768;
        case 0x27676cu: goto label_27676c;
        case 0x276770u: goto label_276770;
        case 0x276774u: goto label_276774;
        case 0x276778u: goto label_276778;
        case 0x27677cu: goto label_27677c;
        case 0x276780u: goto label_276780;
        case 0x276784u: goto label_276784;
        case 0x276788u: goto label_276788;
        case 0x27678cu: goto label_27678c;
        case 0x276790u: goto label_276790;
        case 0x276794u: goto label_276794;
        case 0x276798u: goto label_276798;
        case 0x27679cu: goto label_27679c;
        case 0x2767a0u: goto label_2767a0;
        case 0x2767a4u: goto label_2767a4;
        case 0x2767a8u: goto label_2767a8;
        case 0x2767acu: goto label_2767ac;
        case 0x2767b0u: goto label_2767b0;
        case 0x2767b4u: goto label_2767b4;
        case 0x2767b8u: goto label_2767b8;
        case 0x2767bcu: goto label_2767bc;
        case 0x2767c0u: goto label_2767c0;
        case 0x2767c4u: goto label_2767c4;
        case 0x2767c8u: goto label_2767c8;
        case 0x2767ccu: goto label_2767cc;
        case 0x2767d0u: goto label_2767d0;
        case 0x2767d4u: goto label_2767d4;
        case 0x2767d8u: goto label_2767d8;
        case 0x2767dcu: goto label_2767dc;
        case 0x2767e0u: goto label_2767e0;
        case 0x2767e4u: goto label_2767e4;
        case 0x2767e8u: goto label_2767e8;
        case 0x2767ecu: goto label_2767ec;
        case 0x2767f0u: goto label_2767f0;
        case 0x2767f4u: goto label_2767f4;
        case 0x2767f8u: goto label_2767f8;
        case 0x2767fcu: goto label_2767fc;
        case 0x276800u: goto label_276800;
        case 0x276804u: goto label_276804;
        case 0x276808u: goto label_276808;
        case 0x27680cu: goto label_27680c;
        case 0x276810u: goto label_276810;
        case 0x276814u: goto label_276814;
        case 0x276818u: goto label_276818;
        case 0x27681cu: goto label_27681c;
        case 0x276820u: goto label_276820;
        case 0x276824u: goto label_276824;
        case 0x276828u: goto label_276828;
        case 0x27682cu: goto label_27682c;
        case 0x276830u: goto label_276830;
        case 0x276834u: goto label_276834;
        case 0x276838u: goto label_276838;
        case 0x27683cu: goto label_27683c;
        case 0x276840u: goto label_276840;
        case 0x276844u: goto label_276844;
        case 0x276848u: goto label_276848;
        case 0x27684cu: goto label_27684c;
        case 0x276850u: goto label_276850;
        case 0x276854u: goto label_276854;
        case 0x276858u: goto label_276858;
        case 0x27685cu: goto label_27685c;
        case 0x276860u: goto label_276860;
        case 0x276864u: goto label_276864;
        case 0x276868u: goto label_276868;
        case 0x27686cu: goto label_27686c;
        case 0x276870u: goto label_276870;
        case 0x276874u: goto label_276874;
        case 0x276878u: goto label_276878;
        case 0x27687cu: goto label_27687c;
        case 0x276880u: goto label_276880;
        case 0x276884u: goto label_276884;
        case 0x276888u: goto label_276888;
        case 0x27688cu: goto label_27688c;
        case 0x276890u: goto label_276890;
        case 0x276894u: goto label_276894;
        case 0x276898u: goto label_276898;
        case 0x27689cu: goto label_27689c;
        case 0x2768a0u: goto label_2768a0;
        case 0x2768a4u: goto label_2768a4;
        case 0x2768a8u: goto label_2768a8;
        case 0x2768acu: goto label_2768ac;
        case 0x2768b0u: goto label_2768b0;
        case 0x2768b4u: goto label_2768b4;
        case 0x2768b8u: goto label_2768b8;
        case 0x2768bcu: goto label_2768bc;
        case 0x2768c0u: goto label_2768c0;
        case 0x2768c4u: goto label_2768c4;
        case 0x2768c8u: goto label_2768c8;
        case 0x2768ccu: goto label_2768cc;
        case 0x2768d0u: goto label_2768d0;
        case 0x2768d4u: goto label_2768d4;
        case 0x2768d8u: goto label_2768d8;
        case 0x2768dcu: goto label_2768dc;
        case 0x2768e0u: goto label_2768e0;
        case 0x2768e4u: goto label_2768e4;
        case 0x2768e8u: goto label_2768e8;
        case 0x2768ecu: goto label_2768ec;
        case 0x2768f0u: goto label_2768f0;
        case 0x2768f4u: goto label_2768f4;
        case 0x2768f8u: goto label_2768f8;
        case 0x2768fcu: goto label_2768fc;
        case 0x276900u: goto label_276900;
        case 0x276904u: goto label_276904;
        case 0x276908u: goto label_276908;
        case 0x27690cu: goto label_27690c;
        case 0x276910u: goto label_276910;
        case 0x276914u: goto label_276914;
        case 0x276918u: goto label_276918;
        case 0x27691cu: goto label_27691c;
        case 0x276920u: goto label_276920;
        case 0x276924u: goto label_276924;
        case 0x276928u: goto label_276928;
        case 0x27692cu: goto label_27692c;
        case 0x276930u: goto label_276930;
        case 0x276934u: goto label_276934;
        case 0x276938u: goto label_276938;
        case 0x27693cu: goto label_27693c;
        case 0x276940u: goto label_276940;
        case 0x276944u: goto label_276944;
        case 0x276948u: goto label_276948;
        case 0x27694cu: goto label_27694c;
        case 0x276950u: goto label_276950;
        case 0x276954u: goto label_276954;
        case 0x276958u: goto label_276958;
        case 0x27695cu: goto label_27695c;
        case 0x276960u: goto label_276960;
        case 0x276964u: goto label_276964;
        case 0x276968u: goto label_276968;
        case 0x27696cu: goto label_27696c;
        case 0x276970u: goto label_276970;
        case 0x276974u: goto label_276974;
        case 0x276978u: goto label_276978;
        case 0x27697cu: goto label_27697c;
        case 0x276980u: goto label_276980;
        case 0x276984u: goto label_276984;
        case 0x276988u: goto label_276988;
        case 0x27698cu: goto label_27698c;
        case 0x276990u: goto label_276990;
        case 0x276994u: goto label_276994;
        case 0x276998u: goto label_276998;
        case 0x27699cu: goto label_27699c;
        case 0x2769a0u: goto label_2769a0;
        case 0x2769a4u: goto label_2769a4;
        case 0x2769a8u: goto label_2769a8;
        case 0x2769acu: goto label_2769ac;
        case 0x2769b0u: goto label_2769b0;
        case 0x2769b4u: goto label_2769b4;
        case 0x2769b8u: goto label_2769b8;
        case 0x2769bcu: goto label_2769bc;
        case 0x2769c0u: goto label_2769c0;
        case 0x2769c4u: goto label_2769c4;
        case 0x2769c8u: goto label_2769c8;
        case 0x2769ccu: goto label_2769cc;
        case 0x2769d0u: goto label_2769d0;
        case 0x2769d4u: goto label_2769d4;
        case 0x2769d8u: goto label_2769d8;
        case 0x2769dcu: goto label_2769dc;
        case 0x2769e0u: goto label_2769e0;
        case 0x2769e4u: goto label_2769e4;
        case 0x2769e8u: goto label_2769e8;
        case 0x2769ecu: goto label_2769ec;
        case 0x2769f0u: goto label_2769f0;
        case 0x2769f4u: goto label_2769f4;
        case 0x2769f8u: goto label_2769f8;
        case 0x2769fcu: goto label_2769fc;
        case 0x276a00u: goto label_276a00;
        case 0x276a04u: goto label_276a04;
        case 0x276a08u: goto label_276a08;
        case 0x276a0cu: goto label_276a0c;
        case 0x276a10u: goto label_276a10;
        case 0x276a14u: goto label_276a14;
        case 0x276a18u: goto label_276a18;
        case 0x276a1cu: goto label_276a1c;
        case 0x276a20u: goto label_276a20;
        case 0x276a24u: goto label_276a24;
        case 0x276a28u: goto label_276a28;
        case 0x276a2cu: goto label_276a2c;
        case 0x276a30u: goto label_276a30;
        case 0x276a34u: goto label_276a34;
        case 0x276a38u: goto label_276a38;
        case 0x276a3cu: goto label_276a3c;
        case 0x276a40u: goto label_276a40;
        case 0x276a44u: goto label_276a44;
        case 0x276a48u: goto label_276a48;
        case 0x276a4cu: goto label_276a4c;
        case 0x276a50u: goto label_276a50;
        case 0x276a54u: goto label_276a54;
        case 0x276a58u: goto label_276a58;
        case 0x276a5cu: goto label_276a5c;
        case 0x276a60u: goto label_276a60;
        case 0x276a64u: goto label_276a64;
        case 0x276a68u: goto label_276a68;
        case 0x276a6cu: goto label_276a6c;
        case 0x276a70u: goto label_276a70;
        case 0x276a74u: goto label_276a74;
        case 0x276a78u: goto label_276a78;
        case 0x276a7cu: goto label_276a7c;
        case 0x276a80u: goto label_276a80;
        case 0x276a84u: goto label_276a84;
        case 0x276a88u: goto label_276a88;
        case 0x276a8cu: goto label_276a8c;
        case 0x276a90u: goto label_276a90;
        case 0x276a94u: goto label_276a94;
        case 0x276a98u: goto label_276a98;
        case 0x276a9cu: goto label_276a9c;
        case 0x276aa0u: goto label_276aa0;
        case 0x276aa4u: goto label_276aa4;
        case 0x276aa8u: goto label_276aa8;
        case 0x276aacu: goto label_276aac;
        case 0x276ab0u: goto label_276ab0;
        case 0x276ab4u: goto label_276ab4;
        case 0x276ab8u: goto label_276ab8;
        case 0x276abcu: goto label_276abc;
        case 0x276ac0u: goto label_276ac0;
        case 0x276ac4u: goto label_276ac4;
        case 0x276ac8u: goto label_276ac8;
        case 0x276accu: goto label_276acc;
        case 0x276ad0u: goto label_276ad0;
        case 0x276ad4u: goto label_276ad4;
        case 0x276ad8u: goto label_276ad8;
        case 0x276adcu: goto label_276adc;
        case 0x276ae0u: goto label_276ae0;
        case 0x276ae4u: goto label_276ae4;
        case 0x276ae8u: goto label_276ae8;
        case 0x276aecu: goto label_276aec;
        case 0x276af0u: goto label_276af0;
        case 0x276af4u: goto label_276af4;
        case 0x276af8u: goto label_276af8;
        case 0x276afcu: goto label_276afc;
        case 0x276b00u: goto label_276b00;
        case 0x276b04u: goto label_276b04;
        case 0x276b08u: goto label_276b08;
        case 0x276b0cu: goto label_276b0c;
        case 0x276b10u: goto label_276b10;
        case 0x276b14u: goto label_276b14;
        case 0x276b18u: goto label_276b18;
        case 0x276b1cu: goto label_276b1c;
        case 0x276b20u: goto label_276b20;
        case 0x276b24u: goto label_276b24;
        case 0x276b28u: goto label_276b28;
        case 0x276b2cu: goto label_276b2c;
        case 0x276b30u: goto label_276b30;
        case 0x276b34u: goto label_276b34;
        case 0x276b38u: goto label_276b38;
        case 0x276b3cu: goto label_276b3c;
        default: break;
    }

    ctx->pc = 0x275380u;

label_275380:
    // 0x275380: 0x27bdfa70  addiu       $sp, $sp, -0x590
    ctx->pc = 0x275380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965872));
label_275384:
    // 0x275384: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x275384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_275388:
    // 0x275388: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x275388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_27538c:
    // 0x27538c: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x27538cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_275390:
    // 0x275390: 0x27be0530  addiu       $fp, $sp, 0x530
    ctx->pc = 0x275390u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
label_275394:
    // 0x275394: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x275394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_275398:
    // 0x275398: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x275398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_27539c:
    // 0x27539c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x27539cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_2753a0:
    // 0x2753a0: 0x27b5056c  addiu       $s5, $sp, 0x56C
    ctx->pc = 0x2753a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 1388));
label_2753a4:
    // 0x2753a4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2753a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_2753a8:
    // 0x2753a8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2753a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2753ac:
    // 0x2753ac: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2753acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_2753b0:
    // 0x2753b0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2753b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2753b4:
    // 0x2753b4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2753b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2753b8:
    // 0x2753b8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2753b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2753bc:
    // 0x2753bc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2753bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2753c0:
    // 0x2753c0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2753c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2753c4:
    // 0x2753c4: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x2753c4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2753c8:
    // 0x2753c8: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x2753c8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2753cc:
    // 0x2753cc: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x2753ccu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_2753d0:
    // 0x2753d0: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2753d0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2753d4:
    // 0x2753d4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2753d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2753d8:
    // 0x2753d8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2753d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2753dc:
    // 0x2753dc: 0xafa800c0  sw          $t0, 0xC0($sp)
    ctx->pc = 0x2753dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 8));
label_2753e0:
    // 0x2753e0: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x2753e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_2753e4:
    // 0x2753e4: 0x2c61006c  sltiu       $at, $v1, 0x6C
    ctx->pc = 0x2753e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)108) ? 1 : 0);
label_2753e8:
    // 0x2753e8: 0x102005a5  beqz        $at, . + 4 + (0x5A5 << 2)
label_2753ec:
    if (ctx->pc == 0x2753ECu) {
        ctx->pc = 0x2753ECu;
            // 0x2753ec: 0x241003e7  addiu       $s0, $zero, 0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
        ctx->pc = 0x2753F0u;
        goto label_2753f0;
    }
    ctx->pc = 0x2753E8u;
    {
        const bool branch_taken_0x2753e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2753ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2753E8u;
            // 0x2753ec: 0x241003e7  addiu       $s0, $zero, 0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2753e8) {
            ctx->pc = 0x276A80u;
            goto label_276a80;
        }
    }
    ctx->pc = 0x2753F0u;
label_2753f0:
    // 0x2753f0: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2753f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_2753f4:
    // 0x2753f4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2753f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2753f8:
    // 0x2753f8: 0x24a5fc00  addiu       $a1, $a1, -0x400
    ctx->pc = 0x2753f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966272));
label_2753fc:
    // 0x2753fc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2753fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_275400:
    // 0x275400: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x275400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_275404:
    // 0x275404: 0x800008  jr          $a0
label_275408:
    if (ctx->pc == 0x275408u) {
        ctx->pc = 0x27540Cu;
        goto label_27540c;
    }
    ctx->pc = 0x275404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x275410u: goto label_275410;
            case 0x275470u: goto label_275470;
            case 0x2754D8u: goto label_2754d8;
            case 0x275538u: goto label_275538;
            case 0x2755A0u: goto label_2755a0;
            case 0x275600u: goto label_275600;
            case 0x275668u: goto label_275668;
            case 0x2756C8u: goto label_2756c8;
            case 0x275730u: goto label_275730;
            case 0x275798u: goto label_275798;
            case 0x275800u: goto label_275800;
            case 0x2758A0u: goto label_2758a0;
            case 0x275950u: goto label_275950;
            case 0x275FA0u: goto label_275fa0;
            case 0x276038u: goto label_276038;
            case 0x276270u: goto label_276270;
            case 0x276280u: goto label_276280;
            case 0x2762A0u: goto label_2762a0;
            case 0x2762C8u: goto label_2762c8;
            case 0x2762F8u: goto label_2762f8;
            case 0x276300u: goto label_276300;
            case 0x276568u: goto label_276568;
            case 0x276570u: goto label_276570;
            case 0x276588u: goto label_276588;
            case 0x2765A8u: goto label_2765a8;
            case 0x2765D8u: goto label_2765d8;
            case 0x2766E8u: goto label_2766e8;
            case 0x2767A8u: goto label_2767a8;
            case 0x276870u: goto label_276870;
            case 0x276948u: goto label_276948;
            case 0x276A18u: goto label_276a18;
            case 0x276A40u: goto label_276a40;
            case 0x276A80u: goto label_276a80;
            case 0x276AF0u: goto label_276af0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27540Cu;
label_27540c:
    // 0x27540c: 0x0  nop
    ctx->pc = 0x27540cu;
    // NOP
label_275410:
    // 0x275410: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x275410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_275414:
    // 0x275414: 0xc6660014  lwc1        $f6, 0x14($s3)
    ctx->pc = 0x275414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_275418:
    // 0x275418: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x275418u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_27541c:
    // 0x27541c: 0xc6650018  lwc1        $f5, 0x18($s3)
    ctx->pc = 0x27541cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_275420:
    // 0x275420: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x275420u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_275424:
    // 0x275424: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x275424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_275428:
    // 0x275428: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x275428u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_27542c:
    // 0x27542c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x27542cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275430:
    // 0x275430: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x275430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_275434:
    // 0x275434: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x275434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275438:
    // 0x275438: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x275438u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_27543c:
    // 0x27543c: 0x46053140  add.s       $f5, $f6, $f5
    ctx->pc = 0x27543cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
label_275440:
    // 0x275440: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x275440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_275444:
    // 0x275444: 0x46052182  mul.s       $f6, $f4, $f5
    ctx->pc = 0x275444u;
    ctx->f[6] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
label_275448:
    // 0x275448: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x275448u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_27544c:
    // 0x27544c: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x27544cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_275450:
    // 0x275450: 0x0  nop
    ctx->pc = 0x275450u;
    // NOP
label_275454:
    // 0x275454: 0x46802e60  cvt.s.w     $f25, $f5
    ctx->pc = 0x275454u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
label_275458:
    // 0x275458: 0x46802620  cvt.s.w     $f24, $f4
    ctx->pc = 0x275458u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
label_27545c:
    // 0x27545c: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x27545cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_275460:
    // 0x275460: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x275460u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_275464:
    // 0x275464: 0x4606c601  sub.s       $f24, $f24, $f6
    ctx->pc = 0x275464u;
    ctx->f[24] = FPU_SUB_S(ctx->f[24], ctx->f[6]);
label_275468:
    // 0x275468: 0x1000015b  b           . + 4 + (0x15B << 2)
label_27546c:
    if (ctx->pc == 0x27546Cu) {
        ctx->pc = 0x27546Cu;
            // 0x27546c: 0x4606ce40  add.s       $f25, $f25, $f6 (Delay Slot)
        ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[6]);
        ctx->pc = 0x275470u;
        goto label_275470;
    }
    ctx->pc = 0x275468u;
    {
        const bool branch_taken_0x275468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27546Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275468u;
            // 0x27546c: 0x4606ce40  add.s       $f25, $f25, $f6 (Delay Slot)
        ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x275468) {
            ctx->pc = 0x2759D8u;
            goto label_2759d8;
        }
    }
    ctx->pc = 0x275470u;
label_275470:
    // 0x275470: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x275470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_275474:
    // 0x275474: 0xc6660014  lwc1        $f6, 0x14($s3)
    ctx->pc = 0x275474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_275478:
    // 0x275478: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x275478u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_27547c:
    // 0x27547c: 0xc6650018  lwc1        $f5, 0x18($s3)
    ctx->pc = 0x27547cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_275480:
    // 0x275480: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x275480u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_275484:
    // 0x275484: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x275484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_275488:
    // 0x275488: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x275488u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_27548c:
    // 0x27548c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x27548cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275490:
    // 0x275490: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x275490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_275494:
    // 0x275494: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x275494u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_275498:
    // 0x275498: 0x46053140  add.s       $f5, $f6, $f5
    ctx->pc = 0x275498u;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
label_27549c:
    // 0x27549c: 0x2484ff01  addiu       $a0, $a0, -0xFF
    ctx->pc = 0x27549cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967041));
label_2754a0:
    // 0x2754a0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2754a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2754a4:
    // 0x2754a4: 0x46052182  mul.s       $f6, $f4, $f5
    ctx->pc = 0x2754a4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
label_2754a8:
    // 0x2754a8: 0x2463ff01  addiu       $v1, $v1, -0xFF
    ctx->pc = 0x2754a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967041));
label_2754ac:
    // 0x2754ac: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x2754acu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_2754b0:
    // 0x2754b0: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x2754b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_2754b4:
    // 0x2754b4: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x2754b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2754b8:
    // 0x2754b8: 0x46802e60  cvt.s.w     $f25, $f5
    ctx->pc = 0x2754b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
label_2754bc:
    // 0x2754bc: 0x46802620  cvt.s.w     $f24, $f4
    ctx->pc = 0x2754bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
label_2754c0:
    // 0x2754c0: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x2754c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_2754c4:
    // 0x2754c4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2754c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_2754c8:
    // 0x2754c8: 0x4606c601  sub.s       $f24, $f24, $f6
    ctx->pc = 0x2754c8u;
    ctx->f[24] = FPU_SUB_S(ctx->f[24], ctx->f[6]);
label_2754cc:
    // 0x2754cc: 0x10000142  b           . + 4 + (0x142 << 2)
label_2754d0:
    if (ctx->pc == 0x2754D0u) {
        ctx->pc = 0x2754D0u;
            // 0x2754d0: 0x4606ce40  add.s       $f25, $f25, $f6 (Delay Slot)
        ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[6]);
        ctx->pc = 0x2754D4u;
        goto label_2754d4;
    }
    ctx->pc = 0x2754CCu;
    {
        const bool branch_taken_0x2754cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2754D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2754CCu;
            // 0x2754d0: 0x4606ce40  add.s       $f25, $f25, $f6 (Delay Slot)
        ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2754cc) {
            ctx->pc = 0x2759D8u;
            goto label_2759d8;
        }
    }
    ctx->pc = 0x2754D4u;
label_2754d4:
    // 0x2754d4: 0x0  nop
    ctx->pc = 0x2754d4u;
    // NOP
label_2754d8:
    // 0x2754d8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2754d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_2754dc:
    // 0x2754dc: 0xc6660010  lwc1        $f6, 0x10($s3)
    ctx->pc = 0x2754dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2754e0:
    // 0x2754e0: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x2754e0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_2754e4:
    // 0x2754e4: 0xc6650018  lwc1        $f5, 0x18($s3)
    ctx->pc = 0x2754e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2754e8:
    // 0x2754e8: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x2754e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_2754ec:
    // 0x2754ec: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x2754ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2754f0:
    // 0x2754f0: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x2754f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_2754f4:
    // 0x2754f4: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2754f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2754f8:
    // 0x2754f8: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x2754f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2754fc:
    // 0x2754fc: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x2754fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275500:
    // 0x275500: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x275500u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_275504:
    // 0x275504: 0x46053140  add.s       $f5, $f6, $f5
    ctx->pc = 0x275504u;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
label_275508:
    // 0x275508: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x275508u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_27550c:
    // 0x27550c: 0x46052182  mul.s       $f6, $f4, $f5
    ctx->pc = 0x27550cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
label_275510:
    // 0x275510: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x275510u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_275514:
    // 0x275514: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x275514u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_275518:
    // 0x275518: 0x0  nop
    ctx->pc = 0x275518u;
    // NOP
label_27551c:
    // 0x27551c: 0x46802e60  cvt.s.w     $f25, $f5
    ctx->pc = 0x27551cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
label_275520:
    // 0x275520: 0x46802620  cvt.s.w     $f24, $f4
    ctx->pc = 0x275520u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
label_275524:
    // 0x275524: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x275524u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_275528:
    // 0x275528: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x275528u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_27552c:
    // 0x27552c: 0x4606c601  sub.s       $f24, $f24, $f6
    ctx->pc = 0x27552cu;
    ctx->f[24] = FPU_SUB_S(ctx->f[24], ctx->f[6]);
label_275530:
    // 0x275530: 0x10000129  b           . + 4 + (0x129 << 2)
label_275534:
    if (ctx->pc == 0x275534u) {
        ctx->pc = 0x275534u;
            // 0x275534: 0x4606ce40  add.s       $f25, $f25, $f6 (Delay Slot)
        ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[6]);
        ctx->pc = 0x275538u;
        goto label_275538;
    }
    ctx->pc = 0x275530u;
    {
        const bool branch_taken_0x275530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275530u;
            // 0x275534: 0x4606ce40  add.s       $f25, $f25, $f6 (Delay Slot)
        ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x275530) {
            ctx->pc = 0x2759D8u;
            goto label_2759d8;
        }
    }
    ctx->pc = 0x275538u;
label_275538:
    // 0x275538: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x275538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_27553c:
    // 0x27553c: 0xc6660010  lwc1        $f6, 0x10($s3)
    ctx->pc = 0x27553cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_275540:
    // 0x275540: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x275540u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_275544:
    // 0x275544: 0xc6650018  lwc1        $f5, 0x18($s3)
    ctx->pc = 0x275544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_275548:
    // 0x275548: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x275548u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_27554c:
    // 0x27554c: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x27554cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_275550:
    // 0x275550: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x275550u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_275554:
    // 0x275554: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x275554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275558:
    // 0x275558: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x275558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27555c:
    // 0x27555c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x27555cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_275560:
    // 0x275560: 0x46053140  add.s       $f5, $f6, $f5
    ctx->pc = 0x275560u;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
label_275564:
    // 0x275564: 0x2484ff01  addiu       $a0, $a0, -0xFF
    ctx->pc = 0x275564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967041));
label_275568:
    // 0x275568: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x275568u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_27556c:
    // 0x27556c: 0x46052182  mul.s       $f6, $f4, $f5
    ctx->pc = 0x27556cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
label_275570:
    // 0x275570: 0x2463ff01  addiu       $v1, $v1, -0xFF
    ctx->pc = 0x275570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967041));
label_275574:
    // 0x275574: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x275574u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_275578:
    // 0x275578: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x275578u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_27557c:
    // 0x27557c: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x27557cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275580:
    // 0x275580: 0x46802e60  cvt.s.w     $f25, $f5
    ctx->pc = 0x275580u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
label_275584:
    // 0x275584: 0x46802620  cvt.s.w     $f24, $f4
    ctx->pc = 0x275584u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
label_275588:
    // 0x275588: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x275588u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_27558c:
    // 0x27558c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x27558cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_275590:
    // 0x275590: 0x4606c601  sub.s       $f24, $f24, $f6
    ctx->pc = 0x275590u;
    ctx->f[24] = FPU_SUB_S(ctx->f[24], ctx->f[6]);
label_275594:
    // 0x275594: 0x10000110  b           . + 4 + (0x110 << 2)
label_275598:
    if (ctx->pc == 0x275598u) {
        ctx->pc = 0x275598u;
            // 0x275598: 0x4606ce40  add.s       $f25, $f25, $f6 (Delay Slot)
        ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[6]);
        ctx->pc = 0x27559Cu;
        goto label_27559c;
    }
    ctx->pc = 0x275594u;
    {
        const bool branch_taken_0x275594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275594u;
            // 0x275598: 0x4606ce40  add.s       $f25, $f25, $f6 (Delay Slot)
        ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x275594) {
            ctx->pc = 0x2759D8u;
            goto label_2759d8;
        }
    }
    ctx->pc = 0x27559Cu;
label_27559c:
    // 0x27559c: 0x0  nop
    ctx->pc = 0x27559cu;
    // NOP
label_2755a0:
    // 0x2755a0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2755a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_2755a4:
    // 0x2755a4: 0xc6660010  lwc1        $f6, 0x10($s3)
    ctx->pc = 0x2755a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2755a8:
    // 0x2755a8: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x2755a8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_2755ac:
    // 0x2755ac: 0xc6650014  lwc1        $f5, 0x14($s3)
    ctx->pc = 0x2755acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2755b0:
    // 0x2755b0: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x2755b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_2755b4:
    // 0x2755b4: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x2755b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2755b8:
    // 0x2755b8: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x2755b8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_2755bc:
    // 0x2755bc: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2755bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2755c0:
    // 0x2755c0: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x2755c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2755c4:
    // 0x2755c4: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x2755c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2755c8:
    // 0x2755c8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2755c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2755cc:
    // 0x2755cc: 0x46053140  add.s       $f5, $f6, $f5
    ctx->pc = 0x2755ccu;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
label_2755d0:
    // 0x2755d0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2755d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2755d4:
    // 0x2755d4: 0x46052182  mul.s       $f6, $f4, $f5
    ctx->pc = 0x2755d4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
label_2755d8:
    // 0x2755d8: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x2755d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_2755dc:
    // 0x2755dc: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x2755dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_2755e0:
    // 0x2755e0: 0x0  nop
    ctx->pc = 0x2755e0u;
    // NOP
label_2755e4:
    // 0x2755e4: 0x46802e60  cvt.s.w     $f25, $f5
    ctx->pc = 0x2755e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
label_2755e8:
    // 0x2755e8: 0x46802620  cvt.s.w     $f24, $f4
    ctx->pc = 0x2755e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
label_2755ec:
    // 0x2755ec: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x2755ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_2755f0:
    // 0x2755f0: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x2755f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_2755f4:
    // 0x2755f4: 0x4606c601  sub.s       $f24, $f24, $f6
    ctx->pc = 0x2755f4u;
    ctx->f[24] = FPU_SUB_S(ctx->f[24], ctx->f[6]);
label_2755f8:
    // 0x2755f8: 0x100000f7  b           . + 4 + (0xF7 << 2)
label_2755fc:
    if (ctx->pc == 0x2755FCu) {
        ctx->pc = 0x2755FCu;
            // 0x2755fc: 0x4606ce40  add.s       $f25, $f25, $f6 (Delay Slot)
        ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[6]);
        ctx->pc = 0x275600u;
        goto label_275600;
    }
    ctx->pc = 0x2755F8u;
    {
        const bool branch_taken_0x2755f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2755FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2755F8u;
            // 0x2755fc: 0x4606ce40  add.s       $f25, $f25, $f6 (Delay Slot)
        ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2755f8) {
            ctx->pc = 0x2759D8u;
            goto label_2759d8;
        }
    }
    ctx->pc = 0x275600u;
label_275600:
    // 0x275600: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x275600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_275604:
    // 0x275604: 0xc6660010  lwc1        $f6, 0x10($s3)
    ctx->pc = 0x275604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_275608:
    // 0x275608: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x275608u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_27560c:
    // 0x27560c: 0xc6650014  lwc1        $f5, 0x14($s3)
    ctx->pc = 0x27560cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_275610:
    // 0x275610: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x275610u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_275614:
    // 0x275614: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x275614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_275618:
    // 0x275618: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x275618u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_27561c:
    // 0x27561c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x27561cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275620:
    // 0x275620: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x275620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_275624:
    // 0x275624: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x275624u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_275628:
    // 0x275628: 0x46053140  add.s       $f5, $f6, $f5
    ctx->pc = 0x275628u;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
label_27562c:
    // 0x27562c: 0x2484ff01  addiu       $a0, $a0, -0xFF
    ctx->pc = 0x27562cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967041));
label_275630:
    // 0x275630: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x275630u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_275634:
    // 0x275634: 0x46052182  mul.s       $f6, $f4, $f5
    ctx->pc = 0x275634u;
    ctx->f[6] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
label_275638:
    // 0x275638: 0x2463ff01  addiu       $v1, $v1, -0xFF
    ctx->pc = 0x275638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967041));
label_27563c:
    // 0x27563c: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x27563cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_275640:
    // 0x275640: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x275640u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_275644:
    // 0x275644: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x275644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275648:
    // 0x275648: 0x46802e60  cvt.s.w     $f25, $f5
    ctx->pc = 0x275648u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
label_27564c:
    // 0x27564c: 0x46802620  cvt.s.w     $f24, $f4
    ctx->pc = 0x27564cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
label_275650:
    // 0x275650: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x275650u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_275654:
    // 0x275654: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x275654u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_275658:
    // 0x275658: 0x4606c601  sub.s       $f24, $f24, $f6
    ctx->pc = 0x275658u;
    ctx->f[24] = FPU_SUB_S(ctx->f[24], ctx->f[6]);
label_27565c:
    // 0x27565c: 0x100000de  b           . + 4 + (0xDE << 2)
label_275660:
    if (ctx->pc == 0x275660u) {
        ctx->pc = 0x275660u;
            // 0x275660: 0x4606ce40  add.s       $f25, $f25, $f6 (Delay Slot)
        ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[6]);
        ctx->pc = 0x275664u;
        goto label_275664;
    }
    ctx->pc = 0x27565Cu;
    {
        const bool branch_taken_0x27565c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27565Cu;
            // 0x275660: 0x4606ce40  add.s       $f25, $f25, $f6 (Delay Slot)
        ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27565c) {
            ctx->pc = 0x2759D8u;
            goto label_2759d8;
        }
    }
    ctx->pc = 0x275664u;
label_275664:
    // 0x275664: 0x0  nop
    ctx->pc = 0x275664u;
    // NOP
label_275668:
    // 0x275668: 0x92450001  lbu         $a1, 0x1($s2)
    ctx->pc = 0x275668u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_27566c:
    // 0x27566c: 0xc6250000  lwc1        $f5, 0x0($s1)
    ctx->pc = 0x27566cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_275670:
    // 0x275670: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x275670u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_275674:
    // 0x275674: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x275674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_275678:
    // 0x275678: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x275678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27567c:
    // 0x27567c: 0xc6230010  lwc1        $f3, 0x10($s1)
    ctx->pc = 0x27567cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_275680:
    // 0x275680: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x275680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_275684:
    // 0x275684: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x275684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_275688:
    // 0x275688: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x275688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_27568c:
    // 0x27568c: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x27568cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
label_275690:
    // 0x275690: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x275690u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_275694:
    // 0x275694: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x275694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_275698:
    // 0x275698: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x275698u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_27569c:
    // 0x27569c: 0x44852800  mtc1        $a1, $f5
    ctx->pc = 0x27569cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_2756a0:
    // 0x2756a0: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x2756a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_2756a4:
    // 0x2756a4: 0xc6660020  lwc1        $f6, 0x20($s3)
    ctx->pc = 0x2756a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2756a8:
    // 0x2756a8: 0x46802e60  cvt.s.w     $f25, $f5
    ctx->pc = 0x2756a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
label_2756ac:
    // 0x2756ac: 0x46802620  cvt.s.w     $f24, $f4
    ctx->pc = 0x2756acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
label_2756b0:
    // 0x2756b0: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x2756b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2756b4:
    // 0x2756b4: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x2756b4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_2756b8:
    // 0x2756b8: 0x4606c601  sub.s       $f24, $f24, $f6
    ctx->pc = 0x2756b8u;
    ctx->f[24] = FPU_SUB_S(ctx->f[24], ctx->f[6]);
label_2756bc:
    // 0x2756bc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2756bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_2756c0:
    // 0x2756c0: 0x100000c5  b           . + 4 + (0xC5 << 2)
label_2756c4:
    if (ctx->pc == 0x2756C4u) {
        ctx->pc = 0x2756C4u;
            // 0x2756c4: 0x4606ce40  add.s       $f25, $f25, $f6 (Delay Slot)
        ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[6]);
        ctx->pc = 0x2756C8u;
        goto label_2756c8;
    }
    ctx->pc = 0x2756C0u;
    {
        const bool branch_taken_0x2756c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2756C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2756C0u;
            // 0x2756c4: 0x4606ce40  add.s       $f25, $f25, $f6 (Delay Slot)
        ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2756c0) {
            ctx->pc = 0x2759D8u;
            goto label_2759d8;
        }
    }
    ctx->pc = 0x2756C8u;
label_2756c8:
    // 0x2756c8: 0x92450001  lbu         $a1, 0x1($s2)
    ctx->pc = 0x2756c8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_2756cc:
    // 0x2756cc: 0xc6250000  lwc1        $f5, 0x0($s1)
    ctx->pc = 0x2756ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2756d0:
    // 0x2756d0: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x2756d0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_2756d4:
    // 0x2756d4: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x2756d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2756d8:
    // 0x2756d8: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2756d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2756dc:
    // 0x2756dc: 0xc6230010  lwc1        $f3, 0x10($s1)
    ctx->pc = 0x2756dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2756e0:
    // 0x2756e0: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x2756e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2756e4:
    // 0x2756e4: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x2756e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_2756e8:
    // 0x2756e8: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x2756e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2756ec:
    // 0x2756ec: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x2756ecu;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
label_2756f0:
    // 0x2756f0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2756f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2756f4:
    // 0x2756f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2756f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2756f8:
    // 0x2756f8: 0x24a4ff01  addiu       $a0, $a1, -0xFF
    ctx->pc = 0x2756f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967041));
label_2756fc:
    // 0x2756fc: 0x2463ff01  addiu       $v1, $v1, -0xFF
    ctx->pc = 0x2756fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967041));
label_275700:
    // 0x275700: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x275700u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_275704:
    // 0x275704: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x275704u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_275708:
    // 0x275708: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x275708u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_27570c:
    // 0x27570c: 0xc6660020  lwc1        $f6, 0x20($s3)
    ctx->pc = 0x27570cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_275710:
    // 0x275710: 0x46802e60  cvt.s.w     $f25, $f5
    ctx->pc = 0x275710u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
label_275714:
    // 0x275714: 0x46802620  cvt.s.w     $f24, $f4
    ctx->pc = 0x275714u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
label_275718:
    // 0x275718: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x275718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27571c:
    // 0x27571c: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x27571cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_275720:
    // 0x275720: 0x4606c601  sub.s       $f24, $f24, $f6
    ctx->pc = 0x275720u;
    ctx->f[24] = FPU_SUB_S(ctx->f[24], ctx->f[6]);
label_275724:
    // 0x275724: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x275724u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_275728:
    // 0x275728: 0x100000ab  b           . + 4 + (0xAB << 2)
label_27572c:
    if (ctx->pc == 0x27572Cu) {
        ctx->pc = 0x27572Cu;
            // 0x27572c: 0x4606ce40  add.s       $f25, $f25, $f6 (Delay Slot)
        ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[6]);
        ctx->pc = 0x275730u;
        goto label_275730;
    }
    ctx->pc = 0x275728u;
    {
        const bool branch_taken_0x275728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27572Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275728u;
            // 0x27572c: 0x4606ce40  add.s       $f25, $f25, $f6 (Delay Slot)
        ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x275728) {
            ctx->pc = 0x2759D8u;
            goto label_2759d8;
        }
    }
    ctx->pc = 0x275730u;
label_275730:
    // 0x275730: 0x92450001  lbu         $a1, 0x1($s2)
    ctx->pc = 0x275730u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_275734:
    // 0x275734: 0xc6250000  lwc1        $f5, 0x0($s1)
    ctx->pc = 0x275734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_275738:
    // 0x275738: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x275738u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_27573c:
    // 0x27573c: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x27573cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_275740:
    // 0x275740: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x275740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275744:
    // 0x275744: 0xc6230010  lwc1        $f3, 0x10($s1)
    ctx->pc = 0x275744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_275748:
    // 0x275748: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x275748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27574c:
    // 0x27574c: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x27574cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_275750:
    // 0x275750: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x275750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_275754:
    // 0x275754: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x275754u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_275758:
    // 0x275758: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x275758u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_27575c:
    // 0x27575c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27575cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_275760:
    // 0x275760: 0x24a4ff01  addiu       $a0, $a1, -0xFF
    ctx->pc = 0x275760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967041));
label_275764:
    // 0x275764: 0x2463ff01  addiu       $v1, $v1, -0xFF
    ctx->pc = 0x275764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967041));
label_275768:
    // 0x275768: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x275768u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_27576c:
    // 0x27576c: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x27576cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_275770:
    // 0x275770: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x275770u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_275774:
    // 0x275774: 0xc6660020  lwc1        $f6, 0x20($s3)
    ctx->pc = 0x275774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_275778:
    // 0x275778: 0x46802e60  cvt.s.w     $f25, $f5
    ctx->pc = 0x275778u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
label_27577c:
    // 0x27577c: 0x46802620  cvt.s.w     $f24, $f4
    ctx->pc = 0x27577cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
label_275780:
    // 0x275780: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x275780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275784:
    // 0x275784: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x275784u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_275788:
    // 0x275788: 0x4606c601  sub.s       $f24, $f24, $f6
    ctx->pc = 0x275788u;
    ctx->f[24] = FPU_SUB_S(ctx->f[24], ctx->f[6]);
label_27578c:
    // 0x27578c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x27578cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_275790:
    // 0x275790: 0x10000091  b           . + 4 + (0x91 << 2)
label_275794:
    if (ctx->pc == 0x275794u) {
        ctx->pc = 0x275794u;
            // 0x275794: 0x4606ce40  add.s       $f25, $f25, $f6 (Delay Slot)
        ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[6]);
        ctx->pc = 0x275798u;
        goto label_275798;
    }
    ctx->pc = 0x275790u;
    {
        const bool branch_taken_0x275790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275790u;
            // 0x275794: 0x4606ce40  add.s       $f25, $f25, $f6 (Delay Slot)
        ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x275790) {
            ctx->pc = 0x2759D8u;
            goto label_2759d8;
        }
    }
    ctx->pc = 0x275798u;
label_275798:
    // 0x275798: 0x92450001  lbu         $a1, 0x1($s2)
    ctx->pc = 0x275798u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_27579c:
    // 0x27579c: 0xc6250000  lwc1        $f5, 0x0($s1)
    ctx->pc = 0x27579cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2757a0:
    // 0x2757a0: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x2757a0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_2757a4:
    // 0x2757a4: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x2757a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2757a8:
    // 0x2757a8: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2757a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2757ac:
    // 0x2757ac: 0xc6230010  lwc1        $f3, 0x10($s1)
    ctx->pc = 0x2757acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2757b0:
    // 0x2757b0: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x2757b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2757b4:
    // 0x2757b4: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x2757b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_2757b8:
    // 0x2757b8: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x2757b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2757bc:
    // 0x2757bc: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x2757bcu;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_2757c0:
    // 0x2757c0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2757c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2757c4:
    // 0x2757c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2757c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2757c8:
    // 0x2757c8: 0x24a4fe02  addiu       $a0, $a1, -0x1FE
    ctx->pc = 0x2757c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966786));
label_2757cc:
    // 0x2757cc: 0x2463fe02  addiu       $v1, $v1, -0x1FE
    ctx->pc = 0x2757ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966786));
label_2757d0:
    // 0x2757d0: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x2757d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_2757d4:
    // 0x2757d4: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x2757d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_2757d8:
    // 0x2757d8: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x2757d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_2757dc:
    // 0x2757dc: 0xc6660020  lwc1        $f6, 0x20($s3)
    ctx->pc = 0x2757dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2757e0:
    // 0x2757e0: 0x46802e60  cvt.s.w     $f25, $f5
    ctx->pc = 0x2757e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
label_2757e4:
    // 0x2757e4: 0x46802620  cvt.s.w     $f24, $f4
    ctx->pc = 0x2757e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
label_2757e8:
    // 0x2757e8: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x2757e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2757ec:
    // 0x2757ec: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x2757ecu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_2757f0:
    // 0x2757f0: 0x4606c601  sub.s       $f24, $f24, $f6
    ctx->pc = 0x2757f0u;
    ctx->f[24] = FPU_SUB_S(ctx->f[24], ctx->f[6]);
label_2757f4:
    // 0x2757f4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2757f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_2757f8:
    // 0x2757f8: 0x10000077  b           . + 4 + (0x77 << 2)
label_2757fc:
    if (ctx->pc == 0x2757FCu) {
        ctx->pc = 0x2757FCu;
            // 0x2757fc: 0x4606ce40  add.s       $f25, $f25, $f6 (Delay Slot)
        ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[6]);
        ctx->pc = 0x275800u;
        goto label_275800;
    }
    ctx->pc = 0x2757F8u;
    {
        const bool branch_taken_0x2757f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2757FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2757F8u;
            // 0x2757fc: 0x4606ce40  add.s       $f25, $f25, $f6 (Delay Slot)
        ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2757f8) {
            ctx->pc = 0x2759D8u;
            goto label_2759d8;
        }
    }
    ctx->pc = 0x275800u;
label_275800:
    // 0x275800: 0x92450001  lbu         $a1, 0x1($s2)
    ctx->pc = 0x275800u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_275804:
    // 0x275804: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_275808:
    if (ctx->pc == 0x275808u) {
        ctx->pc = 0x275808u;
            // 0x275808: 0x2470ffe0  addiu       $s0, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->pc = 0x27580Cu;
        goto label_27580c;
    }
    ctx->pc = 0x275804u;
    {
        const bool branch_taken_0x275804 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x275808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275804u;
            // 0x275808: 0x2470ffe0  addiu       $s0, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275804) {
            ctx->pc = 0x275818u;
            goto label_275818;
        }
    }
    ctx->pc = 0x27580Cu;
label_27580c:
    // 0x27580c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x27580cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_275810:
    // 0x275810: 0x10000008  b           . + 4 + (0x8 << 2)
label_275814:
    if (ctx->pc == 0x275814u) {
        ctx->pc = 0x275814u;
            // 0x275814: 0x46800620  cvt.s.w     $f24, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x275818u;
        goto label_275818;
    }
    ctx->pc = 0x275810u;
    {
        const bool branch_taken_0x275810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275810u;
            // 0x275814: 0x46800620  cvt.s.w     $f24, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x275810) {
            ctx->pc = 0x275834u;
            goto label_275834;
        }
    }
    ctx->pc = 0x275818u;
label_275818:
    // 0x275818: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x275818u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
label_27581c:
    // 0x27581c: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x27581cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_275820:
    // 0x275820: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x275820u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_275824:
    // 0x275824: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x275824u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_275828:
    // 0x275828: 0x0  nop
    ctx->pc = 0x275828u;
    // NOP
label_27582c:
    // 0x27582c: 0x46800620  cvt.s.w     $f24, $f0
    ctx->pc = 0x27582cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
label_275830:
    // 0x275830: 0x4618c600  add.s       $f24, $f24, $f24
    ctx->pc = 0x275830u;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[24]);
label_275834:
    // 0x275834: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x275834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_275838:
    // 0x275838: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x275838u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_27583c:
    // 0x27583c: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_275840:
    if (ctx->pc == 0x275840u) {
        ctx->pc = 0x275840u;
            // 0x275840: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x275844u;
        goto label_275844;
    }
    ctx->pc = 0x27583Cu;
    {
        const bool branch_taken_0x27583c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x275840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27583Cu;
            // 0x275840: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27583c) {
            ctx->pc = 0x275850u;
            goto label_275850;
        }
    }
    ctx->pc = 0x275844u;
label_275844:
    // 0x275844: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x275844u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_275848:
    // 0x275848: 0x10000007  b           . + 4 + (0x7 << 2)
label_27584c:
    if (ctx->pc == 0x27584Cu) {
        ctx->pc = 0x27584Cu;
            // 0x27584c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x275850u;
        goto label_275850;
    }
    ctx->pc = 0x275848u;
    {
        const bool branch_taken_0x275848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27584Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275848u;
            // 0x27584c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x275848) {
            ctx->pc = 0x275868u;
            goto label_275868;
        }
    }
    ctx->pc = 0x275850u;
label_275850:
    // 0x275850: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x275850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_275854:
    // 0x275854: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x275854u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_275858:
    // 0x275858: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x275858u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27585c:
    // 0x27585c: 0x0  nop
    ctx->pc = 0x27585cu;
    // NOP
label_275860:
    // 0x275860: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x275860u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_275864:
    // 0x275864: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x275864u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_275868:
    // 0x275868: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x275868u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_27586c:
    // 0x27586c: 0x26520003  addiu       $s2, $s2, 0x3
    ctx->pc = 0x27586cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
label_275870:
    // 0x275870: 0x2641821  addu        $v1, $s3, $a0
    ctx->pc = 0x275870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_275874:
    // 0x275874: 0x9256ffff  lbu         $s6, -0x1($s2)
    ctx->pc = 0x275874u;
    SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294967295)));
label_275878:
    // 0x275878: 0xc4620010  lwc1        $f2, 0x10($v1)
    ctx->pc = 0x275878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27587c:
    // 0x27587c: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x27587cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_275880:
    // 0x275880: 0x46000e40  add.s       $f25, $f1, $f0
    ctx->pc = 0x275880u;
    ctx->f[25] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_275884:
    // 0x275884: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x275884u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_275888:
    // 0x275888: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x275888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27588c:
    // 0x27588c: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x27588cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275890:
    // 0x275890: 0x4602c601  sub.s       $f24, $f24, $f2
    ctx->pc = 0x275890u;
    ctx->f[24] = FPU_SUB_S(ctx->f[24], ctx->f[2]);
label_275894:
    // 0x275894: 0x10000054  b           . + 4 + (0x54 << 2)
label_275898:
    if (ctx->pc == 0x275898u) {
        ctx->pc = 0x275898u;
            // 0x275898: 0x4602ce40  add.s       $f25, $f25, $f2 (Delay Slot)
        ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[2]);
        ctx->pc = 0x27589Cu;
        goto label_27589c;
    }
    ctx->pc = 0x275894u;
    {
        const bool branch_taken_0x275894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275894u;
            // 0x275898: 0x4602ce40  add.s       $f25, $f25, $f2 (Delay Slot)
        ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x275894) {
            ctx->pc = 0x2759E8u;
            goto label_2759e8;
        }
    }
    ctx->pc = 0x27589Cu;
label_27589c:
    // 0x27589c: 0x0  nop
    ctx->pc = 0x27589cu;
    // NOP
label_2758a0:
    // 0x2758a0: 0x2470ffdd  addiu       $s0, $v1, -0x23
    ctx->pc = 0x2758a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967261));
label_2758a4:
    // 0x2758a4: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x2758a4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_2758a8:
    // 0x2758a8: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_2758ac:
    if (ctx->pc == 0x2758ACu) {
        ctx->pc = 0x2758ACu;
            // 0x2758ac: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x2758B0u;
        goto label_2758b0;
    }
    ctx->pc = 0x2758A8u;
    {
        const bool branch_taken_0x2758a8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2758ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2758A8u;
            // 0x2758ac: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2758a8) {
            ctx->pc = 0x2758BCu;
            goto label_2758bc;
        }
    }
    ctx->pc = 0x2758B0u;
label_2758b0:
    // 0x2758b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2758b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2758b4:
    // 0x2758b4: 0x10000007  b           . + 4 + (0x7 << 2)
label_2758b8:
    if (ctx->pc == 0x2758B8u) {
        ctx->pc = 0x2758B8u;
            // 0x2758b8: 0x46800660  cvt.s.w     $f25, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2758BCu;
        goto label_2758bc;
    }
    ctx->pc = 0x2758B4u;
    {
        const bool branch_taken_0x2758b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2758B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2758B4u;
            // 0x2758b8: 0x46800660  cvt.s.w     $f25, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2758b4) {
            ctx->pc = 0x2758D4u;
            goto label_2758d4;
        }
    }
    ctx->pc = 0x2758BCu;
label_2758bc:
    // 0x2758bc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2758bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2758c0:
    // 0x2758c0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2758c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2758c4:
    // 0x2758c4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2758c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2758c8:
    // 0x2758c8: 0x0  nop
    ctx->pc = 0x2758c8u;
    // NOP
label_2758cc:
    // 0x2758cc: 0x46800660  cvt.s.w     $f25, $f0
    ctx->pc = 0x2758ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
label_2758d0:
    // 0x2758d0: 0x4619ce40  add.s       $f25, $f25, $f25
    ctx->pc = 0x2758d0u;
    ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[25]);
label_2758d4:
    // 0x2758d4: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x2758d4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_2758d8:
    // 0x2758d8: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_2758dc:
    if (ctx->pc == 0x2758DCu) {
        ctx->pc = 0x2758DCu;
            // 0x2758dc: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x2758E0u;
        goto label_2758e0;
    }
    ctx->pc = 0x2758D8u;
    {
        const bool branch_taken_0x2758d8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2758DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2758D8u;
            // 0x2758dc: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2758d8) {
            ctx->pc = 0x2758ECu;
            goto label_2758ec;
        }
    }
    ctx->pc = 0x2758E0u;
label_2758e0:
    // 0x2758e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2758e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2758e4:
    // 0x2758e4: 0x10000007  b           . + 4 + (0x7 << 2)
label_2758e8:
    if (ctx->pc == 0x2758E8u) {
        ctx->pc = 0x2758E8u;
            // 0x2758e8: 0x46800620  cvt.s.w     $f24, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2758ECu;
        goto label_2758ec;
    }
    ctx->pc = 0x2758E4u;
    {
        const bool branch_taken_0x2758e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2758E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2758E4u;
            // 0x2758e8: 0x46800620  cvt.s.w     $f24, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2758e4) {
            ctx->pc = 0x275904u;
            goto label_275904;
        }
    }
    ctx->pc = 0x2758ECu;
label_2758ec:
    // 0x2758ec: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2758ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2758f0:
    // 0x2758f0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2758f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2758f4:
    // 0x2758f4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2758f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2758f8:
    // 0x2758f8: 0x0  nop
    ctx->pc = 0x2758f8u;
    // NOP
label_2758fc:
    // 0x2758fc: 0x46800620  cvt.s.w     $f24, $f0
    ctx->pc = 0x2758fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
label_275900:
    // 0x275900: 0x4618c600  add.s       $f24, $f24, $f24
    ctx->pc = 0x275900u;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[24]);
label_275904:
    // 0x275904: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x275904u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_275908:
    // 0x275908: 0x92440003  lbu         $a0, 0x3($s2)
    ctx->pc = 0x275908u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_27590c:
    // 0x27590c: 0x2651821  addu        $v1, $s3, $a1
    ctx->pc = 0x27590cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_275910:
    // 0x275910: 0xc4620010  lwc1        $f2, 0x10($v1)
    ctx->pc = 0x275910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_275914:
    // 0x275914: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x275914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_275918:
    // 0x275918: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x275918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27591c:
    // 0x27591c: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x27591cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275920:
    // 0x275920: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x275920u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_275924:
    // 0x275924: 0x92430004  lbu         $v1, 0x4($s2)
    ctx->pc = 0x275924u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_275928:
    // 0x275928: 0x4602c601  sub.s       $f24, $f24, $f2
    ctx->pc = 0x275928u;
    ctx->f[24] = FPU_SUB_S(ctx->f[24], ctx->f[2]);
label_27592c:
    // 0x27592c: 0x4602ce40  add.s       $f25, $f25, $f2
    ctx->pc = 0x27592cu;
    ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[2]);
label_275930:
    // 0x275930: 0x83b821  addu        $s7, $a0, $v1
    ctx->pc = 0x275930u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_275934:
    // 0x275934: 0x26520007  addiu       $s2, $s2, 0x7
    ctx->pc = 0x275934u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 7));
label_275938:
    // 0x275938: 0x9244fffe  lbu         $a0, -0x2($s2)
    ctx->pc = 0x275938u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294967294)));
label_27593c:
    // 0x27593c: 0x9243ffff  lbu         $v1, -0x1($s2)
    ctx->pc = 0x27593cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294967295)));
label_275940:
    // 0x275940: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x275940u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_275944:
    // 0x275944: 0x10000028  b           . + 4 + (0x28 << 2)
label_275948:
    if (ctx->pc == 0x275948u) {
        ctx->pc = 0x275948u;
            // 0x275948: 0x83b021  addu        $s6, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->pc = 0x27594Cu;
        goto label_27594c;
    }
    ctx->pc = 0x275944u;
    {
        const bool branch_taken_0x275944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275944u;
            // 0x275948: 0x83b021  addu        $s6, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275944) {
            ctx->pc = 0x2759E8u;
            goto label_2759e8;
        }
    }
    ctx->pc = 0x27594Cu;
label_27594c:
    // 0x27594c: 0x0  nop
    ctx->pc = 0x27594cu;
    // NOP
label_275950:
    // 0x275950: 0x2470fff0  addiu       $s0, $v1, -0x10
    ctx->pc = 0x275950u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_275954:
    // 0x275954: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x275954u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_275958:
    // 0x275958: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_27595c:
    if (ctx->pc == 0x27595Cu) {
        ctx->pc = 0x27595Cu;
            // 0x27595c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x275960u;
        goto label_275960;
    }
    ctx->pc = 0x275958u;
    {
        const bool branch_taken_0x275958 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x27595Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275958u;
            // 0x27595c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275958) {
            ctx->pc = 0x27596Cu;
            goto label_27596c;
        }
    }
    ctx->pc = 0x275960u;
label_275960:
    // 0x275960: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x275960u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_275964:
    // 0x275964: 0x10000007  b           . + 4 + (0x7 << 2)
label_275968:
    if (ctx->pc == 0x275968u) {
        ctx->pc = 0x275968u;
            // 0x275968: 0x46800660  cvt.s.w     $f25, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x27596Cu;
        goto label_27596c;
    }
    ctx->pc = 0x275964u;
    {
        const bool branch_taken_0x275964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275964u;
            // 0x275968: 0x46800660  cvt.s.w     $f25, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x275964) {
            ctx->pc = 0x275984u;
            goto label_275984;
        }
    }
    ctx->pc = 0x27596Cu;
label_27596c:
    // 0x27596c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x27596cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_275970:
    // 0x275970: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x275970u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_275974:
    // 0x275974: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x275974u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_275978:
    // 0x275978: 0x0  nop
    ctx->pc = 0x275978u;
    // NOP
label_27597c:
    // 0x27597c: 0x46800660  cvt.s.w     $f25, $f0
    ctx->pc = 0x27597cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
label_275980:
    // 0x275980: 0x4619ce40  add.s       $f25, $f25, $f25
    ctx->pc = 0x275980u;
    ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[25]);
label_275984:
    // 0x275984: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x275984u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_275988:
    // 0x275988: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_27598c:
    if (ctx->pc == 0x27598Cu) {
        ctx->pc = 0x27598Cu;
            // 0x27598c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x275990u;
        goto label_275990;
    }
    ctx->pc = 0x275988u;
    {
        const bool branch_taken_0x275988 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x27598Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275988u;
            // 0x27598c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275988) {
            ctx->pc = 0x27599Cu;
            goto label_27599c;
        }
    }
    ctx->pc = 0x275990u;
label_275990:
    // 0x275990: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x275990u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_275994:
    // 0x275994: 0x10000007  b           . + 4 + (0x7 << 2)
label_275998:
    if (ctx->pc == 0x275998u) {
        ctx->pc = 0x275998u;
            // 0x275998: 0x46800620  cvt.s.w     $f24, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x27599Cu;
        goto label_27599c;
    }
    ctx->pc = 0x275994u;
    {
        const bool branch_taken_0x275994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275994u;
            // 0x275998: 0x46800620  cvt.s.w     $f24, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x275994) {
            ctx->pc = 0x2759B4u;
            goto label_2759b4;
        }
    }
    ctx->pc = 0x27599Cu;
label_27599c:
    // 0x27599c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x27599cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2759a0:
    // 0x2759a0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2759a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2759a4:
    // 0x2759a4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2759a4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2759a8:
    // 0x2759a8: 0x0  nop
    ctx->pc = 0x2759a8u;
    // NOP
label_2759ac:
    // 0x2759ac: 0x46800620  cvt.s.w     $f24, $f0
    ctx->pc = 0x2759acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
label_2759b0:
    // 0x2759b0: 0x4618c600  add.s       $f24, $f24, $f24
    ctx->pc = 0x2759b0u;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[24]);
label_2759b4:
    // 0x2759b4: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x2759b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2759b8:
    // 0x2759b8: 0x2641821  addu        $v1, $s3, $a0
    ctx->pc = 0x2759b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_2759bc:
    // 0x2759bc: 0xc4620010  lwc1        $f2, 0x10($v1)
    ctx->pc = 0x2759bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2759c0:
    // 0x2759c0: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x2759c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_2759c4:
    // 0x2759c4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2759c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2759c8:
    // 0x2759c8: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x2759c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2759cc:
    // 0x2759cc: 0x4602c601  sub.s       $f24, $f24, $f2
    ctx->pc = 0x2759ccu;
    ctx->f[24] = FPU_SUB_S(ctx->f[24], ctx->f[2]);
label_2759d0:
    // 0x2759d0: 0x4602ce40  add.s       $f25, $f25, $f2
    ctx->pc = 0x2759d0u;
    ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[2]);
label_2759d4:
    // 0x2759d4: 0x0  nop
    ctx->pc = 0x2759d4u;
    // NOP
label_2759d8:
    // 0x2759d8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2759d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_2759dc:
    // 0x2759dc: 0x9256ffff  lbu         $s6, -0x1($s2)
    ctx->pc = 0x2759dcu;
    SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294967295)));
label_2759e0:
    // 0x2759e0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2759e0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2759e4:
    // 0x2759e4: 0x0  nop
    ctx->pc = 0x2759e4u;
    // NOP
label_2759e8:
    // 0x2759e8: 0x46180834  c.lt.s      $f1, $f24
    ctx->pc = 0x2759e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2759ec:
    // 0x2759ec: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2759f0:
    if (ctx->pc == 0x2759F0u) {
        ctx->pc = 0x2759F4u;
        goto label_2759f4;
    }
    ctx->pc = 0x2759ECu;
    {
        const bool branch_taken_0x2759ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2759ec) {
            ctx->pc = 0x275A08u;
            goto label_275a08;
        }
    }
    ctx->pc = 0x2759F4u;
label_2759f4:
    // 0x2759f4: 0x46180034  c.lt.s      $f0, $f24
    ctx->pc = 0x2759f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2759f8:
    // 0x2759f8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2759fc:
    if (ctx->pc == 0x2759FCu) {
        ctx->pc = 0x275A00u;
        goto label_275a00;
    }
    ctx->pc = 0x2759F8u;
    {
        const bool branch_taken_0x2759f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2759f8) {
            ctx->pc = 0x275A08u;
            goto label_275a08;
        }
    }
    ctx->pc = 0x275A00u;
label_275a00:
    // 0x275a00: 0x1000fe77  b           . + 4 + (-0x189 << 2)
label_275a04:
    if (ctx->pc == 0x275A04u) {
        ctx->pc = 0x275A04u;
            // 0x275a04: 0x2579021  addu        $s2, $s2, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
        ctx->pc = 0x275A08u;
        goto label_275a08;
    }
    ctx->pc = 0x275A00u;
    {
        const bool branch_taken_0x275a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275A00u;
            // 0x275a04: 0x2579021  addu        $s2, $s2, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275a00) {
            ctx->pc = 0x2753E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2753e0;
        }
    }
    ctx->pc = 0x275A08u;
label_275a08:
    // 0x275a08: 0x46190036  c.le.s      $f0, $f25
    ctx->pc = 0x275a08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_275a0c:
    // 0x275a0c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_275a10:
    if (ctx->pc == 0x275A10u) {
        ctx->pc = 0x275A10u;
            // 0x275a10: 0x2569021  addu        $s2, $s2, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
        ctx->pc = 0x275A14u;
        goto label_275a14;
    }
    ctx->pc = 0x275A0Cu;
    {
        const bool branch_taken_0x275a0c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x275A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275A0Cu;
            // 0x275a10: 0x2569021  addu        $s2, $s2, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275a0c) {
            ctx->pc = 0x275A20u;
            goto label_275a20;
        }
    }
    ctx->pc = 0x275A14u;
label_275a14:
    // 0x275a14: 0x46190836  c.le.s      $f1, $f25
    ctx->pc = 0x275a14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_275a18:
    // 0x275a18: 0x4500fe71  bc1f        . + 4 + (-0x18F << 2)
label_275a1c:
    if (ctx->pc == 0x275A1Cu) {
        ctx->pc = 0x275A20u;
        goto label_275a20;
    }
    ctx->pc = 0x275A18u;
    {
        const bool branch_taken_0x275a18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x275a18) {
            ctx->pc = 0x2753E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2753e0;
        }
    }
    ctx->pc = 0x275A20u;
label_275a20:
    // 0x275a20: 0x27a20524  addiu       $v0, $sp, 0x524
    ctx->pc = 0x275a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1316));
label_275a24:
    // 0x275a24: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x275a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_275a28:
    // 0x275a28: 0x461905c1  sub.s       $f23, $f0, $f25
    ctx->pc = 0x275a28u;
    ctx->f[23] = FPU_SUB_S(ctx->f[0], ctx->f[25]);
label_275a2c:
    // 0x275a2c: 0x46180581  sub.s       $f22, $f0, $f24
    ctx->pc = 0x275a2cu;
    ctx->f[22] = FPU_SUB_S(ctx->f[0], ctx->f[24]);
label_275a30:
    // 0x275a30: 0xe7a20520  swc1        $f2, 0x520($sp)
    ctx->pc = 0x275a30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1312), bits); }
label_275a34:
    // 0x275a34: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x275a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275a38:
    // 0x275a38: 0x46190d41  sub.s       $f21, $f1, $f25
    ctx->pc = 0x275a38u;
    ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[25]);
label_275a3c:
    // 0x275a3c: 0x46180d01  sub.s       $f20, $f1, $f24
    ctx->pc = 0x275a3cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[24]);
label_275a40:
    // 0x275a40: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x275a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_275a44:
    // 0x275a44: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x275a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275a48:
    // 0x275a48: 0x27a20528  addiu       $v0, $sp, 0x528
    ctx->pc = 0x275a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1320));
label_275a4c:
    // 0x275a4c: 0x4615b834  c.lt.s      $f23, $f21
    ctx->pc = 0x275a4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_275a50:
    // 0x275a50: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x275a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_275a54:
    // 0x275a54: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x275a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275a58:
    // 0x275a58: 0x27a2052c  addiu       $v0, $sp, 0x52C
    ctx->pc = 0x275a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1324));
label_275a5c:
    // 0x275a5c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x275a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_275a60:
    // 0x275a60: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x275a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275a64:
    // 0x275a64: 0x27a20534  addiu       $v0, $sp, 0x534
    ctx->pc = 0x275a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1332));
label_275a68:
    // 0x275a68: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x275a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
label_275a6c:
    // 0x275a6c: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x275a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275a70:
    // 0x275a70: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x275a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_275a74:
    // 0x275a74: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x275a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275a78:
    // 0x275a78: 0x27a20538  addiu       $v0, $sp, 0x538
    ctx->pc = 0x275a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1336));
label_275a7c:
    // 0x275a7c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x275a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_275a80:
    // 0x275a80: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x275a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275a84:
    // 0x275a84: 0x27a2053c  addiu       $v0, $sp, 0x53C
    ctx->pc = 0x275a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1340));
label_275a88:
    // 0x275a88: 0x450000a3  bc1f        . + 4 + (0xA3 << 2)
label_275a8c:
    if (ctx->pc == 0x275A8Cu) {
        ctx->pc = 0x275A8Cu;
            // 0x275a8c: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->pc = 0x275A90u;
        goto label_275a90;
    }
    ctx->pc = 0x275A88u;
    {
        const bool branch_taken_0x275a88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x275A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275A88u;
            // 0x275a8c: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x275a88) {
            ctx->pc = 0x275D18u;
            goto label_275d18;
        }
    }
    ctx->pc = 0x275A90u;
label_275a90:
    // 0x275a90: 0x4615b842  mul.s       $f1, $f23, $f21
    ctx->pc = 0x275a90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[21]);
label_275a94:
    // 0x275a94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x275a94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_275a98:
    // 0x275a98: 0x0  nop
    ctx->pc = 0x275a98u;
    // NOP
label_275a9c:
    // 0x275a9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x275a9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_275aa0:
    // 0x275aa0: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_275aa4:
    if (ctx->pc == 0x275AA4u) {
        ctx->pc = 0x275AA4u;
            // 0x275aa4: 0x4615b8c1  sub.s       $f3, $f23, $f21 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[23], ctx->f[21]);
        ctx->pc = 0x275AA8u;
        goto label_275aa8;
    }
    ctx->pc = 0x275AA0u;
    {
        const bool branch_taken_0x275aa0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x275AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275AA0u;
            // 0x275aa4: 0x4615b8c1  sub.s       $f3, $f23, $f21 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[23], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x275aa0) {
            ctx->pc = 0x275B08u;
            goto label_275b08;
        }
    }
    ctx->pc = 0x275AA8u;
label_275aa8:
    // 0x275aa8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x275aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_275aac:
    // 0x275aac: 0x4603b8c3  div.s       $f3, $f23, $f3
    ctx->pc = 0x275aacu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[23] * 0.0f); } else ctx->f[3] = ctx->f[23] / ctx->f[3];
label_275ab0:
    // 0x275ab0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x275ab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_275ab4:
    // 0x275ab4: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x275ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275ab8:
    // 0x275ab8: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x275ab8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_275abc:
    // 0x275abc: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x275abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275ac0:
    // 0x275ac0: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x275ac0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_275ac4:
    // 0x275ac4: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x275ac4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_275ac8:
    // 0x275ac8: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x275ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
label_275acc:
    // 0x275acc: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x275accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275ad0:
    // 0x275ad0: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x275ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275ad4:
    // 0x275ad4: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x275ad4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_275ad8:
    // 0x275ad8: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x275ad8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_275adc:
    // 0x275adc: 0xe7c00004  swc1        $f0, 0x4($fp)
    ctx->pc = 0x275adcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4), bits); }
label_275ae0:
    // 0x275ae0: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x275ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275ae4:
    // 0x275ae4: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x275ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275ae8:
    // 0x275ae8: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x275ae8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_275aec:
    // 0x275aec: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x275aecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_275af0:
    // 0x275af0: 0xe7c00008  swc1        $f0, 0x8($fp)
    ctx->pc = 0x275af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 8), bits); }
label_275af4:
    // 0x275af4: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x275af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275af8:
    // 0x275af8: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x275af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275afc:
    // 0x275afc: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x275afcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_275b00:
    // 0x275b00: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x275b00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_275b04:
    // 0x275b04: 0xe7c0000c  swc1        $f0, 0xC($fp)
    ctx->pc = 0x275b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
label_275b08:
    // 0x275b08: 0x8fa800c0  lw          $t0, 0xC0($sp)
    ctx->pc = 0x275b08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_275b0c:
    // 0x275b0c: 0x2561023  subu        $v0, $s2, $s6
    ctx->pc = 0x275b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
label_275b10:
    // 0x275b10: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x275b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_275b14:
    // 0x275b14: 0x573021  addu        $a2, $v0, $s7
    ctx->pc = 0x275b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_275b18:
    // 0x275b18: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x275b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_275b1c:
    // 0x275b1c: 0xc09d4e0  jal         func_275380
label_275b20:
    if (ctx->pc == 0x275B20u) {
        ctx->pc = 0x275B20u;
            // 0x275b20: 0x27a70520  addiu       $a3, $sp, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
        ctx->pc = 0x275B24u;
        goto label_275b24;
    }
    ctx->pc = 0x275B1Cu;
    SET_GPR_U32(ctx, 31, 0x275B24u);
    ctx->pc = 0x275B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275B1Cu;
            // 0x275b20: 0x27a70520  addiu       $a3, $sp, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x275380u;
    goto label_275380;
    ctx->pc = 0x275B24u;
label_275b24:
    // 0x275b24: 0x4614b042  mul.s       $f1, $f22, $f20
    ctx->pc = 0x275b24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
label_275b28:
    // 0x275b28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x275b28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_275b2c:
    // 0x275b2c: 0x0  nop
    ctx->pc = 0x275b2cu;
    // NOP
label_275b30:
    // 0x275b30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x275b30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_275b34:
    // 0x275b34: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
label_275b38:
    if (ctx->pc == 0x275B38u) {
        ctx->pc = 0x275B38u;
            // 0x275b38: 0x4614b0c1  sub.s       $f3, $f22, $f20 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[22], ctx->f[20]);
        ctx->pc = 0x275B3Cu;
        goto label_275b3c;
    }
    ctx->pc = 0x275B34u;
    {
        const bool branch_taken_0x275b34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x275B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275B34u;
            // 0x275b38: 0x4614b0c1  sub.s       $f3, $f22, $f20 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[22], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x275b34) {
            ctx->pc = 0x275BA0u;
            goto label_275ba0;
        }
    }
    ctx->pc = 0x275B3Cu;
label_275b3c:
    // 0x275b3c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x275b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_275b40:
    // 0x275b40: 0x4603b0c3  div.s       $f3, $f22, $f3
    ctx->pc = 0x275b40u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[3] = ctx->f[22] / ctx->f[3];
label_275b44:
    // 0x275b44: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x275b44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_275b48:
    // 0x275b48: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x275b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275b4c:
    // 0x275b4c: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x275b4cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_275b50:
    // 0x275b50: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x275b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275b54:
    // 0x275b54: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x275b54u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_275b58:
    // 0x275b58: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x275b58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_275b5c:
    // 0x275b5c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x275b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_275b60:
    // 0x275b60: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x275b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275b64:
    // 0x275b64: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x275b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275b68:
    // 0x275b68: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x275b68u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_275b6c:
    // 0x275b6c: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x275b6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_275b70:
    // 0x275b70: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x275b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_275b74:
    // 0x275b74: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x275b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275b78:
    // 0x275b78: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x275b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275b7c:
    // 0x275b7c: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x275b7cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_275b80:
    // 0x275b80: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x275b80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_275b84:
    // 0x275b84: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x275b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_275b88:
    // 0x275b88: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x275b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275b8c:
    // 0x275b8c: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x275b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275b90:
    // 0x275b90: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x275b90u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_275b94:
    // 0x275b94: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x275b94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_275b98:
    // 0x275b98: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x275b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_275b9c:
    // 0x275b9c: 0x0  nop
    ctx->pc = 0x275b9cu;
    // NOP
label_275ba0:
    // 0x275ba0: 0xc681001c  lwc1        $f1, 0x1C($s4)
    ctx->pc = 0x275ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275ba4:
    // 0x275ba4: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x275ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275ba8:
    // 0x275ba8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x275ba8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_275bac:
    // 0x275bac: 0x4500fe0c  bc1f        . + 4 + (-0x1F4 << 2)
label_275bb0:
    if (ctx->pc == 0x275BB0u) {
        ctx->pc = 0x275BB4u;
        goto label_275bb4;
    }
    ctx->pc = 0x275BACu;
    {
        const bool branch_taken_0x275bac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x275bac) {
            ctx->pc = 0x2753E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2753e0;
        }
    }
    ctx->pc = 0x275BB4u;
label_275bb4:
    // 0x275bb4: 0xe6810020  swc1        $f1, 0x20($s4)
    ctx->pc = 0x275bb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
label_275bb8:
    // 0x275bb8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x275bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_275bbc:
    // 0x275bbc: 0xc683001c  lwc1        $f3, 0x1C($s4)
    ctx->pc = 0x275bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_275bc0:
    // 0x275bc0: 0x8e84002c  lw          $a0, 0x2C($s4)
    ctx->pc = 0x275bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_275bc4:
    // 0x275bc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x275bc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_275bc8:
    // 0x275bc8: 0x2a010003  slti        $at, $s0, 0x3
    ctx->pc = 0x275bc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_275bcc:
    // 0x275bcc: 0x27a30514  addiu       $v1, $sp, 0x514
    ctx->pc = 0x275bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1300));
label_275bd0:
    // 0x275bd0: 0x46030081  sub.s       $f2, $f0, $f3
    ctx->pc = 0x275bd0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_275bd4:
    // 0x275bd4: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x275bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275bd8:
    // 0x275bd8: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x275bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275bdc:
    // 0x275bdc: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x275bdcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_275be0:
    // 0x275be0: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x275be0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_275be4:
    // 0x275be4: 0xe7a00510  swc1        $f0, 0x510($sp)
    ctx->pc = 0x275be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1296), bits); }
label_275be8:
    // 0x275be8: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x275be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275bec:
    // 0x275bec: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x275becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275bf0:
    // 0x275bf0: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x275bf0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_275bf4:
    // 0x275bf4: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x275bf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_275bf8:
    // 0x275bf8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x275bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_275bfc:
    // 0x275bfc: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x275bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275c00:
    // 0x275c00: 0x27a30518  addiu       $v1, $sp, 0x518
    ctx->pc = 0x275c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1304));
label_275c04:
    // 0x275c04: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x275c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275c08:
    // 0x275c08: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x275c08u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_275c0c:
    // 0x275c0c: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x275c0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_275c10:
    // 0x275c10: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x275c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_275c14:
    // 0x275c14: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x275c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275c18:
    // 0x275c18: 0x27a3051c  addiu       $v1, $sp, 0x51C
    ctx->pc = 0x275c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1308));
label_275c1c:
    // 0x275c1c: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x275c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275c20:
    // 0x275c20: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x275c20u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_275c24:
    // 0x275c24: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x275c24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_275c28:
    // 0x275c28: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x275c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_275c2c:
    // 0x275c2c: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x275c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_275c30:
    // 0x275c30: 0xc7a10510  lwc1        $f1, 0x510($sp)
    ctx->pc = 0x275c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275c34:
    // 0x275c34: 0x27a30514  addiu       $v1, $sp, 0x514
    ctx->pc = 0x275c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1300));
label_275c38:
    // 0x275c38: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x275c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275c3c:
    // 0x275c3c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x275c3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_275c40:
    // 0x275c40: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x275c40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_275c44:
    // 0x275c44: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x275c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275c48:
    // 0x275c48: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x275c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275c4c:
    // 0x275c4c: 0x27a30518  addiu       $v1, $sp, 0x518
    ctx->pc = 0x275c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1304));
label_275c50:
    // 0x275c50: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x275c50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_275c54:
    // 0x275c54: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x275c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_275c58:
    // 0x275c58: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x275c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275c5c:
    // 0x275c5c: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x275c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275c60:
    // 0x275c60: 0x27a3051c  addiu       $v1, $sp, 0x51C
    ctx->pc = 0x275c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1308));
label_275c64:
    // 0x275c64: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x275c64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_275c68:
    // 0x275c68: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x275c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_275c6c:
    // 0x275c6c: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x275c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275c70:
    // 0x275c70: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x275c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275c74:
    // 0x275c74: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x275c74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_275c78:
    // 0x275c78: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x275c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_275c7c:
    // 0x275c7c: 0xc6610028  lwc1        $f1, 0x28($s3)
    ctx->pc = 0x275c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275c80:
    // 0x275c80: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x275c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275c84:
    // 0x275c84: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x275c84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_275c88:
    // 0x275c88: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x275c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_275c8c:
    // 0x275c8c: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x275c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275c90:
    // 0x275c90: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x275c90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_275c94:
    // 0x275c94: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x275c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_275c98:
    // 0x275c98: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x275c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275c9c:
    // 0x275c9c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x275c9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_275ca0:
    // 0x275ca0: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x275ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_275ca4:
    // 0x275ca4: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x275ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275ca8:
    // 0x275ca8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x275ca8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_275cac:
    // 0x275cac: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x275cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_275cb0:
    // 0x275cb0: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x275cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275cb4:
    // 0x275cb4: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x275cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275cb8:
    // 0x275cb8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x275cb8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_275cbc:
    // 0x275cbc: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x275cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_275cc0:
    // 0x275cc0: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x275cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275cc4:
    // 0x275cc4: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x275cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275cc8:
    // 0x275cc8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x275cc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_275ccc:
    // 0x275ccc: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x275cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_275cd0:
    // 0x275cd0: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x275cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275cd4:
    // 0x275cd4: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x275cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275cd8:
    // 0x275cd8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x275cd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_275cdc:
    // 0x275cdc: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x275cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_275ce0:
    // 0x275ce0: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x275ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275ce4:
    // 0x275ce4: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x275ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275ce8:
    // 0x275ce8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x275ce8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_275cec:
    // 0x275cec: 0x1020fdbc  beqz        $at, . + 4 + (-0x244 << 2)
label_275cf0:
    if (ctx->pc == 0x275CF0u) {
        ctx->pc = 0x275CF0u;
            // 0x275cf0: 0xe620001c  swc1        $f0, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->pc = 0x275CF4u;
        goto label_275cf4;
    }
    ctx->pc = 0x275CECu;
    {
        const bool branch_taken_0x275cec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x275CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275CECu;
            // 0x275cf0: 0xe620001c  swc1        $f0, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x275cec) {
            ctx->pc = 0x2753E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2753e0;
        }
    }
    ctx->pc = 0x275CF4u;
label_275cf4:
    // 0x275cf4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x275cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_275cf8:
    // 0x275cf8: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x275cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_275cfc:
    // 0x275cfc: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x275cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275d00:
    // 0x275d00: 0x46180034  c.lt.s      $f0, $f24
    ctx->pc = 0x275d00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_275d04:
    // 0x275d04: 0x4500fdb6  bc1f        . + 4 + (-0x24A << 2)
label_275d08:
    if (ctx->pc == 0x275D08u) {
        ctx->pc = 0x275D0Cu;
        goto label_275d0c;
    }
    ctx->pc = 0x275D04u;
    {
        const bool branch_taken_0x275d04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x275d04) {
            ctx->pc = 0x2753E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2753e0;
        }
    }
    ctx->pc = 0x275D0Cu;
label_275d0c:
    // 0x275d0c: 0x10000378  b           . + 4 + (0x378 << 2)
label_275d10:
    if (ctx->pc == 0x275D10u) {
        ctx->pc = 0x275D14u;
        goto label_275d14;
    }
    ctx->pc = 0x275D0Cu;
    {
        const bool branch_taken_0x275d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275d0c) {
            ctx->pc = 0x276AF0u;
            goto label_276af0;
        }
    }
    ctx->pc = 0x275D14u;
label_275d14:
    // 0x275d14: 0x0  nop
    ctx->pc = 0x275d14u;
    // NOP
label_275d18:
    // 0x275d18: 0x4614b042  mul.s       $f1, $f22, $f20
    ctx->pc = 0x275d18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
label_275d1c:
    // 0x275d1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x275d1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_275d20:
    // 0x275d20: 0x0  nop
    ctx->pc = 0x275d20u;
    // NOP
label_275d24:
    // 0x275d24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x275d24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_275d28:
    // 0x275d28: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_275d2c:
    if (ctx->pc == 0x275D2Cu) {
        ctx->pc = 0x275D2Cu;
            // 0x275d2c: 0x4614b0c1  sub.s       $f3, $f22, $f20 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[22], ctx->f[20]);
        ctx->pc = 0x275D30u;
        goto label_275d30;
    }
    ctx->pc = 0x275D28u;
    {
        const bool branch_taken_0x275d28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x275D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275D28u;
            // 0x275d2c: 0x4614b0c1  sub.s       $f3, $f22, $f20 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[22], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x275d28) {
            ctx->pc = 0x275D90u;
            goto label_275d90;
        }
    }
    ctx->pc = 0x275D30u;
label_275d30:
    // 0x275d30: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x275d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_275d34:
    // 0x275d34: 0x4603b0c3  div.s       $f3, $f22, $f3
    ctx->pc = 0x275d34u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[3] = ctx->f[22] / ctx->f[3];
label_275d38:
    // 0x275d38: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x275d38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_275d3c:
    // 0x275d3c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x275d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275d40:
    // 0x275d40: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x275d40u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_275d44:
    // 0x275d44: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x275d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275d48:
    // 0x275d48: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x275d48u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_275d4c:
    // 0x275d4c: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x275d4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_275d50:
    // 0x275d50: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x275d50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
label_275d54:
    // 0x275d54: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x275d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275d58:
    // 0x275d58: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x275d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275d5c:
    // 0x275d5c: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x275d5cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_275d60:
    // 0x275d60: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x275d60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_275d64:
    // 0x275d64: 0xe7c00004  swc1        $f0, 0x4($fp)
    ctx->pc = 0x275d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4), bits); }
label_275d68:
    // 0x275d68: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x275d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275d6c:
    // 0x275d6c: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x275d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275d70:
    // 0x275d70: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x275d70u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_275d74:
    // 0x275d74: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x275d74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_275d78:
    // 0x275d78: 0xe7c00008  swc1        $f0, 0x8($fp)
    ctx->pc = 0x275d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 8), bits); }
label_275d7c:
    // 0x275d7c: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x275d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275d80:
    // 0x275d80: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x275d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275d84:
    // 0x275d84: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x275d84u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_275d88:
    // 0x275d88: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x275d88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_275d8c:
    // 0x275d8c: 0xe7c0000c  swc1        $f0, 0xC($fp)
    ctx->pc = 0x275d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
label_275d90:
    // 0x275d90: 0x8fa800c0  lw          $t0, 0xC0($sp)
    ctx->pc = 0x275d90u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_275d94:
    // 0x275d94: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x275d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_275d98:
    // 0x275d98: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x275d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_275d9c:
    // 0x275d9c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x275d9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_275da0:
    // 0x275da0: 0xc09d4e0  jal         func_275380
label_275da4:
    if (ctx->pc == 0x275DA4u) {
        ctx->pc = 0x275DA4u;
            // 0x275da4: 0x27a70520  addiu       $a3, $sp, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
        ctx->pc = 0x275DA8u;
        goto label_275da8;
    }
    ctx->pc = 0x275DA0u;
    SET_GPR_U32(ctx, 31, 0x275DA8u);
    ctx->pc = 0x275DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275DA0u;
            // 0x275da4: 0x27a70520  addiu       $a3, $sp, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x275380u;
    goto label_275380;
    ctx->pc = 0x275DA8u;
label_275da8:
    // 0x275da8: 0x4615b842  mul.s       $f1, $f23, $f21
    ctx->pc = 0x275da8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[21]);
label_275dac:
    // 0x275dac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x275dacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_275db0:
    // 0x275db0: 0x0  nop
    ctx->pc = 0x275db0u;
    // NOP
label_275db4:
    // 0x275db4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x275db4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_275db8:
    // 0x275db8: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_275dbc:
    if (ctx->pc == 0x275DBCu) {
        ctx->pc = 0x275DBCu;
            // 0x275dbc: 0x4615b8c1  sub.s       $f3, $f23, $f21 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[23], ctx->f[21]);
        ctx->pc = 0x275DC0u;
        goto label_275dc0;
    }
    ctx->pc = 0x275DB8u;
    {
        const bool branch_taken_0x275db8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x275DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275DB8u;
            // 0x275dbc: 0x4615b8c1  sub.s       $f3, $f23, $f21 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[23], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x275db8) {
            ctx->pc = 0x275E20u;
            goto label_275e20;
        }
    }
    ctx->pc = 0x275DC0u;
label_275dc0:
    // 0x275dc0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x275dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_275dc4:
    // 0x275dc4: 0x4603b8c3  div.s       $f3, $f23, $f3
    ctx->pc = 0x275dc4u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[23] * 0.0f); } else ctx->f[3] = ctx->f[23] / ctx->f[3];
label_275dc8:
    // 0x275dc8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x275dc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_275dcc:
    // 0x275dcc: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x275dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275dd0:
    // 0x275dd0: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x275dd0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_275dd4:
    // 0x275dd4: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x275dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275dd8:
    // 0x275dd8: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x275dd8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_275ddc:
    // 0x275ddc: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x275ddcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_275de0:
    // 0x275de0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x275de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_275de4:
    // 0x275de4: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x275de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275de8:
    // 0x275de8: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x275de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275dec:
    // 0x275dec: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x275decu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_275df0:
    // 0x275df0: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x275df0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_275df4:
    // 0x275df4: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x275df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_275df8:
    // 0x275df8: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x275df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275dfc:
    // 0x275dfc: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x275dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275e00:
    // 0x275e00: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x275e00u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_275e04:
    // 0x275e04: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x275e04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_275e08:
    // 0x275e08: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x275e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_275e0c:
    // 0x275e0c: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x275e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275e10:
    // 0x275e10: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x275e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275e14:
    // 0x275e14: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x275e14u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_275e18:
    // 0x275e18: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x275e18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_275e1c:
    // 0x275e1c: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x275e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_275e20:
    // 0x275e20: 0xc681001c  lwc1        $f1, 0x1C($s4)
    ctx->pc = 0x275e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275e24:
    // 0x275e24: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x275e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275e28:
    // 0x275e28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x275e28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_275e2c:
    // 0x275e2c: 0x45000058  bc1f        . + 4 + (0x58 << 2)
label_275e30:
    if (ctx->pc == 0x275E30u) {
        ctx->pc = 0x275E34u;
        goto label_275e34;
    }
    ctx->pc = 0x275E2Cu;
    {
        const bool branch_taken_0x275e2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x275e2c) {
            ctx->pc = 0x275F90u;
            goto label_275f90;
        }
    }
    ctx->pc = 0x275E34u;
label_275e34:
    // 0x275e34: 0xe6810020  swc1        $f1, 0x20($s4)
    ctx->pc = 0x275e34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
label_275e38:
    // 0x275e38: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x275e38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_275e3c:
    // 0x275e3c: 0xc683001c  lwc1        $f3, 0x1C($s4)
    ctx->pc = 0x275e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_275e40:
    // 0x275e40: 0x8e84002c  lw          $a0, 0x2C($s4)
    ctx->pc = 0x275e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_275e44:
    // 0x275e44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x275e44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_275e48:
    // 0x275e48: 0x2a010003  slti        $at, $s0, 0x3
    ctx->pc = 0x275e48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_275e4c:
    // 0x275e4c: 0x27a30504  addiu       $v1, $sp, 0x504
    ctx->pc = 0x275e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1284));
label_275e50:
    // 0x275e50: 0x46030081  sub.s       $f2, $f0, $f3
    ctx->pc = 0x275e50u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_275e54:
    // 0x275e54: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x275e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275e58:
    // 0x275e58: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x275e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275e5c:
    // 0x275e5c: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x275e5cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_275e60:
    // 0x275e60: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x275e60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_275e64:
    // 0x275e64: 0xe7a00500  swc1        $f0, 0x500($sp)
    ctx->pc = 0x275e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1280), bits); }
label_275e68:
    // 0x275e68: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x275e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275e6c:
    // 0x275e6c: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x275e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275e70:
    // 0x275e70: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x275e70u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_275e74:
    // 0x275e74: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x275e74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_275e78:
    // 0x275e78: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x275e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_275e7c:
    // 0x275e7c: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x275e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275e80:
    // 0x275e80: 0x27a30508  addiu       $v1, $sp, 0x508
    ctx->pc = 0x275e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1288));
label_275e84:
    // 0x275e84: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x275e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275e88:
    // 0x275e88: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x275e88u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_275e8c:
    // 0x275e8c: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x275e8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_275e90:
    // 0x275e90: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x275e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_275e94:
    // 0x275e94: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x275e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275e98:
    // 0x275e98: 0x27a3050c  addiu       $v1, $sp, 0x50C
    ctx->pc = 0x275e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1292));
label_275e9c:
    // 0x275e9c: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x275e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275ea0:
    // 0x275ea0: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x275ea0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_275ea4:
    // 0x275ea4: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x275ea4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_275ea8:
    // 0x275ea8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x275ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_275eac:
    // 0x275eac: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x275eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_275eb0:
    // 0x275eb0: 0xc7a10500  lwc1        $f1, 0x500($sp)
    ctx->pc = 0x275eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275eb4:
    // 0x275eb4: 0x27a30504  addiu       $v1, $sp, 0x504
    ctx->pc = 0x275eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1284));
label_275eb8:
    // 0x275eb8: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x275eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275ebc:
    // 0x275ebc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x275ebcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_275ec0:
    // 0x275ec0: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x275ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_275ec4:
    // 0x275ec4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x275ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275ec8:
    // 0x275ec8: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x275ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275ecc:
    // 0x275ecc: 0x27a30508  addiu       $v1, $sp, 0x508
    ctx->pc = 0x275eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1288));
label_275ed0:
    // 0x275ed0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x275ed0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_275ed4:
    // 0x275ed4: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x275ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_275ed8:
    // 0x275ed8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x275ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275edc:
    // 0x275edc: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x275edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275ee0:
    // 0x275ee0: 0x27a3050c  addiu       $v1, $sp, 0x50C
    ctx->pc = 0x275ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1292));
label_275ee4:
    // 0x275ee4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x275ee4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_275ee8:
    // 0x275ee8: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x275ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_275eec:
    // 0x275eec: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x275eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275ef0:
    // 0x275ef0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x275ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275ef4:
    // 0x275ef4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x275ef4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_275ef8:
    // 0x275ef8: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x275ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_275efc:
    // 0x275efc: 0xc6610028  lwc1        $f1, 0x28($s3)
    ctx->pc = 0x275efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275f00:
    // 0x275f00: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x275f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275f04:
    // 0x275f04: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x275f04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_275f08:
    // 0x275f08: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x275f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_275f0c:
    // 0x275f0c: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x275f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275f10:
    // 0x275f10: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x275f10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_275f14:
    // 0x275f14: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x275f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_275f18:
    // 0x275f18: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x275f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275f1c:
    // 0x275f1c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x275f1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_275f20:
    // 0x275f20: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x275f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_275f24:
    // 0x275f24: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x275f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275f28:
    // 0x275f28: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x275f28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_275f2c:
    // 0x275f2c: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x275f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_275f30:
    // 0x275f30: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x275f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275f34:
    // 0x275f34: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x275f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275f38:
    // 0x275f38: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x275f38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_275f3c:
    // 0x275f3c: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x275f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_275f40:
    // 0x275f40: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x275f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275f44:
    // 0x275f44: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x275f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275f48:
    // 0x275f48: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x275f48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_275f4c:
    // 0x275f4c: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x275f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_275f50:
    // 0x275f50: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x275f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275f54:
    // 0x275f54: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x275f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275f58:
    // 0x275f58: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x275f58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_275f5c:
    // 0x275f5c: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x275f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_275f60:
    // 0x275f60: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x275f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275f64:
    // 0x275f64: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x275f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275f68:
    // 0x275f68: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x275f68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_275f6c:
    // 0x275f6c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_275f70:
    if (ctx->pc == 0x275F70u) {
        ctx->pc = 0x275F70u;
            // 0x275f70: 0xe620001c  swc1        $f0, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->pc = 0x275F74u;
        goto label_275f74;
    }
    ctx->pc = 0x275F6Cu;
    {
        const bool branch_taken_0x275f6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x275F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275F6Cu;
            // 0x275f70: 0xe620001c  swc1        $f0, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x275f6c) {
            ctx->pc = 0x275F90u;
            goto label_275f90;
        }
    }
    ctx->pc = 0x275F74u;
label_275f74:
    // 0x275f74: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x275f74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_275f78:
    // 0x275f78: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x275f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_275f7c:
    // 0x275f7c: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x275f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275f80:
    // 0x275f80: 0x46190036  c.le.s      $f0, $f25
    ctx->pc = 0x275f80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_275f84:
    // 0x275f84: 0x450002da  bc1f        . + 4 + (0x2DA << 2)
label_275f88:
    if (ctx->pc == 0x275F88u) {
        ctx->pc = 0x275F8Cu;
        goto label_275f8c;
    }
    ctx->pc = 0x275F84u;
    {
        const bool branch_taken_0x275f84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x275f84) {
            ctx->pc = 0x276AF0u;
            goto label_276af0;
        }
    }
    ctx->pc = 0x275F8Cu;
label_275f8c:
    // 0x275f8c: 0x0  nop
    ctx->pc = 0x275f8cu;
    // NOP
label_275f90:
    // 0x275f90: 0x2561823  subu        $v1, $s2, $s6
    ctx->pc = 0x275f90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
label_275f94:
    // 0x275f94: 0x1000fd12  b           . + 4 + (-0x2EE << 2)
label_275f98:
    if (ctx->pc == 0x275F98u) {
        ctx->pc = 0x275F98u;
            // 0x275f98: 0x779021  addu        $s2, $v1, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
        ctx->pc = 0x275F9Cu;
        goto label_275f9c;
    }
    ctx->pc = 0x275F94u;
    {
        const bool branch_taken_0x275f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275F94u;
            // 0x275f98: 0x779021  addu        $s2, $v1, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275f94) {
            ctx->pc = 0x2753E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2753e0;
        }
    }
    ctx->pc = 0x275F9Cu;
label_275f9c:
    // 0x275f9c: 0x0  nop
    ctx->pc = 0x275f9cu;
    // NOP
label_275fa0:
    // 0x275fa0: 0x2463ffd7  addiu       $v1, $v1, -0x29
    ctx->pc = 0x275fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967255));
label_275fa4:
    // 0x275fa4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x275fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_275fa8:
    // 0x275fa8: 0x92490001  lbu         $t1, 0x1($s2)
    ctx->pc = 0x275fa8u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_275fac:
    // 0x275fac: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x275facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_275fb0:
    // 0x275fb0: 0x92480002  lbu         $t0, 0x2($s2)
    ctx->pc = 0x275fb0u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_275fb4:
    // 0x275fb4: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x275fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_275fb8:
    // 0x275fb8: 0x92460004  lbu         $a2, 0x4($s2)
    ctx->pc = 0x275fb8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_275fbc:
    // 0x275fbc: 0xc4820010  lwc1        $f2, 0x10($a0)
    ctx->pc = 0x275fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_275fc0:
    // 0x275fc0: 0x92450005  lbu         $a1, 0x5($s2)
    ctx->pc = 0x275fc0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
label_275fc4:
    // 0x275fc4: 0x92470003  lbu         $a3, 0x3($s2)
    ctx->pc = 0x275fc4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_275fc8:
    // 0x275fc8: 0xc6850014  lwc1        $f5, 0x14($s4)
    ctx->pc = 0x275fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_275fcc:
    // 0x275fcc: 0xc6640028  lwc1        $f4, 0x28($s3)
    ctx->pc = 0x275fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_275fd0:
    // 0x275fd0: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x275fd0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
label_275fd4:
    // 0x275fd4: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x275fd4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
label_275fd8:
    // 0x275fd8: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x275fd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_275fdc:
    // 0x275fdc: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x275fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_275fe0:
    // 0x275fe0: 0x92440006  lbu         $a0, 0x6($s2)
    ctx->pc = 0x275fe0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
label_275fe4:
    // 0x275fe4: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x275fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_275fe8:
    // 0x275fe8: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x275fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_275fec:
    // 0x275fec: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x275fecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_275ff0:
    // 0x275ff0: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x275ff0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_275ff4:
    // 0x275ff4: 0x0  nop
    ctx->pc = 0x275ff4u;
    // NOP
label_275ff8:
    // 0x275ff8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x275ff8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_275ffc:
    // 0x275ffc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x275ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_276000:
    // 0x276000: 0x26520007  addiu       $s2, $s2, 0x7
    ctx->pc = 0x276000u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 7));
label_276004:
    // 0x276004: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x276004u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_276008:
    // 0x276008: 0x0  nop
    ctx->pc = 0x276008u;
    // NOP
label_27600c:
    // 0x27600c: 0x46012982  mul.s       $f6, $f5, $f1
    ctx->pc = 0x27600cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
label_276010:
    // 0x276010: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x276010u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_276014:
    // 0x276014: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x276014u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_276018:
    // 0x276018: 0x46043182  mul.s       $f6, $f6, $f4
    ctx->pc = 0x276018u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
label_27601c:
    // 0x27601c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x27601cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_276020:
    // 0x276020: 0x46033181  sub.s       $f6, $f6, $f3
    ctx->pc = 0x276020u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[3]);
label_276024:
    // 0x276024: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x276024u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_276028:
    // 0x276028: 0x46023181  sub.s       $f6, $f6, $f2
    ctx->pc = 0x276028u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
label_27602c:
    // 0x27602c: 0x10000022  b           . + 4 + (0x22 << 2)
label_276030:
    if (ctx->pc == 0x276030u) {
        ctx->pc = 0x276030u;
            // 0x276030: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->pc = 0x276034u;
        goto label_276034;
    }
    ctx->pc = 0x27602Cu;
    {
        const bool branch_taken_0x27602c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27602Cu;
            // 0x276030: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27602c) {
            ctx->pc = 0x2760B8u;
            goto label_2760b8;
        }
    }
    ctx->pc = 0x276034u;
label_276034:
    // 0x276034: 0x0  nop
    ctx->pc = 0x276034u;
    // NOP
label_276038:
    // 0x276038: 0x2465ffda  addiu       $a1, $v1, -0x26
    ctx->pc = 0x276038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967258));
label_27603c:
    // 0x27603c: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x27603cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_276040:
    // 0x276040: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_276044:
    if (ctx->pc == 0x276044u) {
        ctx->pc = 0x276044u;
            // 0x276044: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x276048u;
        goto label_276048;
    }
    ctx->pc = 0x276040u;
    {
        const bool branch_taken_0x276040 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x276044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276040u;
            // 0x276044: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276040) {
            ctx->pc = 0x276054u;
            goto label_276054;
        }
    }
    ctx->pc = 0x276048u;
label_276048:
    // 0x276048: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x276048u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27604c:
    // 0x27604c: 0x10000007  b           . + 4 + (0x7 << 2)
label_276050:
    if (ctx->pc == 0x276050u) {
        ctx->pc = 0x276050u;
            // 0x276050: 0x468001a0  cvt.s.w     $f6, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x276054u;
        goto label_276054;
    }
    ctx->pc = 0x27604Cu;
    {
        const bool branch_taken_0x27604c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27604Cu;
            // 0x276050: 0x468001a0  cvt.s.w     $f6, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27604c) {
            ctx->pc = 0x27606Cu;
            goto label_27606c;
        }
    }
    ctx->pc = 0x276054u;
label_276054:
    // 0x276054: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x276054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_276058:
    // 0x276058: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x276058u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_27605c:
    // 0x27605c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x27605cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_276060:
    // 0x276060: 0x0  nop
    ctx->pc = 0x276060u;
    // NOP
label_276064:
    // 0x276064: 0x468001a0  cvt.s.w     $f6, $f0
    ctx->pc = 0x276064u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
label_276068:
    // 0x276068: 0x46063180  add.s       $f6, $f6, $f6
    ctx->pc = 0x276068u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[6]);
label_27606c:
    // 0x27606c: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x27606cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_276070:
    // 0x276070: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_276074:
    if (ctx->pc == 0x276074u) {
        ctx->pc = 0x276074u;
            // 0x276074: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x276078u;
        goto label_276078;
    }
    ctx->pc = 0x276070u;
    {
        const bool branch_taken_0x276070 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x276074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276070u;
            // 0x276074: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276070) {
            ctx->pc = 0x276084u;
            goto label_276084;
        }
    }
    ctx->pc = 0x276078u;
label_276078:
    // 0x276078: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x276078u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27607c:
    // 0x27607c: 0x10000007  b           . + 4 + (0x7 << 2)
label_276080:
    if (ctx->pc == 0x276080u) {
        ctx->pc = 0x276080u;
            // 0x276080: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x276084u;
        goto label_276084;
    }
    ctx->pc = 0x27607Cu;
    {
        const bool branch_taken_0x27607c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27607Cu;
            // 0x276080: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27607c) {
            ctx->pc = 0x27609Cu;
            goto label_27609c;
        }
    }
    ctx->pc = 0x276084u;
label_276084:
    // 0x276084: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x276084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_276088:
    // 0x276088: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x276088u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_27608c:
    // 0x27608c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x27608cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_276090:
    // 0x276090: 0x0  nop
    ctx->pc = 0x276090u;
    // NOP
label_276094:
    // 0x276094: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x276094u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_276098:
    // 0x276098: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x276098u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_27609c:
    // 0x27609c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x27609cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2760a0:
    // 0x2760a0: 0x26520003  addiu       $s2, $s2, 0x3
    ctx->pc = 0x2760a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
label_2760a4:
    // 0x2760a4: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x2760a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_2760a8:
    // 0x2760a8: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x2760a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2760ac:
    // 0x2760ac: 0x46013181  sub.s       $f6, $f6, $f1
    ctx->pc = 0x2760acu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
label_2760b0:
    // 0x2760b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2760b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2760b4:
    // 0x2760b4: 0x0  nop
    ctx->pc = 0x2760b4u;
    // NOP
label_2760b8:
    // 0x2760b8: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2760b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_2760bc:
    // 0x2760bc: 0xc4650000  lwc1        $f5, 0x0($v1)
    ctx->pc = 0x2760bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2760c0:
    // 0x2760c0: 0xc4640010  lwc1        $f4, 0x10($v1)
    ctx->pc = 0x2760c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2760c4:
    // 0x2760c4: 0x46042834  c.lt.s      $f5, $f4
    ctx->pc = 0x2760c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2760c8:
    // 0x2760c8: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_2760cc:
    if (ctx->pc == 0x2760CCu) {
        ctx->pc = 0x2760D0u;
        goto label_2760d0;
    }
    ctx->pc = 0x2760C8u;
    {
        const bool branch_taken_0x2760c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2760c8) {
            ctx->pc = 0x2760F0u;
            goto label_2760f0;
        }
    }
    ctx->pc = 0x2760D0u;
label_2760d0:
    // 0x2760d0: 0x46062034  c.lt.s      $f4, $f6
    ctx->pc = 0x2760d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2760d4:
    // 0x2760d4: 0x45010286  bc1t        . + 4 + (0x286 << 2)
label_2760d8:
    if (ctx->pc == 0x2760D8u) {
        ctx->pc = 0x2760DCu;
        goto label_2760dc;
    }
    ctx->pc = 0x2760D4u;
    {
        const bool branch_taken_0x2760d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2760d4) {
            ctx->pc = 0x276AF0u;
            goto label_276af0;
        }
    }
    ctx->pc = 0x2760DCu;
label_2760dc:
    // 0x2760dc: 0x46002836  c.le.s      $f5, $f0
    ctx->pc = 0x2760dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2760e0:
    // 0x2760e0: 0x45000283  bc1f        . + 4 + (0x283 << 2)
label_2760e4:
    if (ctx->pc == 0x2760E4u) {
        ctx->pc = 0x2760E4u;
            // 0x2760e4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2760E8u;
        goto label_2760e8;
    }
    ctx->pc = 0x2760E0u;
    {
        const bool branch_taken_0x2760e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2760E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2760E0u;
            // 0x2760e4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2760e0) {
            ctx->pc = 0x276AF0u;
            goto label_276af0;
        }
    }
    ctx->pc = 0x2760E8u;
label_2760e8:
    // 0x2760e8: 0x10000007  b           . + 4 + (0x7 << 2)
label_2760ec:
    if (ctx->pc == 0x2760ECu) {
        ctx->pc = 0x2760F0u;
        goto label_2760f0;
    }
    ctx->pc = 0x2760E8u;
    {
        const bool branch_taken_0x2760e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2760e8) {
            ctx->pc = 0x276108u;
            goto label_276108;
        }
    }
    ctx->pc = 0x2760F0u;
label_2760f0:
    // 0x2760f0: 0x46062834  c.lt.s      $f5, $f6
    ctx->pc = 0x2760f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2760f4:
    // 0x2760f4: 0x4501027e  bc1t        . + 4 + (0x27E << 2)
label_2760f8:
    if (ctx->pc == 0x2760F8u) {
        ctx->pc = 0x2760FCu;
        goto label_2760fc;
    }
    ctx->pc = 0x2760F4u;
    {
        const bool branch_taken_0x2760f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2760f4) {
            ctx->pc = 0x276AF0u;
            goto label_276af0;
        }
    }
    ctx->pc = 0x2760FCu;
label_2760fc:
    // 0x2760fc: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x2760fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_276100:
    // 0x276100: 0x4500027b  bc1f        . + 4 + (0x27B << 2)
label_276104:
    if (ctx->pc == 0x276104u) {
        ctx->pc = 0x276104u;
            // 0x276104: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x276108u;
        goto label_276108;
    }
    ctx->pc = 0x276100u;
    {
        const bool branch_taken_0x276100 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x276104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276100u;
            // 0x276104: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276100) {
            ctx->pc = 0x276AF0u;
            goto label_276af0;
        }
    }
    ctx->pc = 0x276108u;
label_276108:
    // 0x276108: 0x7a240000  lq          $a0, 0x0($s1)
    ctx->pc = 0x276108u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_27610c:
    // 0x27610c: 0x27a604f0  addiu       $a2, $sp, 0x4F0
    ctx->pc = 0x27610cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
label_276110:
    // 0x276110: 0x27a504e0  addiu       $a1, $sp, 0x4E0
    ctx->pc = 0x276110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
label_276114:
    // 0x276114: 0x460029c1  sub.s       $f7, $f5, $f0
    ctx->pc = 0x276114u;
    ctx->f[7] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_276118:
    // 0x276118: 0x46002081  sub.s       $f2, $f4, $f0
    ctx->pc = 0x276118u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_27611c:
    // 0x27611c: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x27611cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
label_276120:
    // 0x276120: 0x7a240010  lq          $a0, 0x10($s1)
    ctx->pc = 0x276120u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_276124:
    // 0x276124: 0x46023842  mul.s       $f1, $f7, $f2
    ctx->pc = 0x276124u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
label_276128:
    // 0x276128: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x276128u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27612c:
    // 0x27612c: 0x0  nop
    ctx->pc = 0x27612cu;
    // NOP
label_276130:
    // 0x276130: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x276130u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_276134:
    // 0x276134: 0x45000024  bc1f        . + 4 + (0x24 << 2)
label_276138:
    if (ctx->pc == 0x276138u) {
        ctx->pc = 0x276138u;
            // 0x276138: 0x7ca40000  sq          $a0, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
        ctx->pc = 0x27613Cu;
        goto label_27613c;
    }
    ctx->pc = 0x276134u;
    {
        const bool branch_taken_0x276134 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x276138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276134u;
            // 0x276138: 0x7ca40000  sq          $a0, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276134) {
            ctx->pc = 0x2761C8u;
            goto label_2761c8;
        }
    }
    ctx->pc = 0x27613Cu;
label_27613c:
    // 0x27613c: 0x460238c1  sub.s       $f3, $f7, $f2
    ctx->pc = 0x27613cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
label_276140:
    // 0x276140: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x276140u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_276144:
    // 0x276144: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x276144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_276148:
    // 0x276148: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x276148u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_27614c:
    // 0x27614c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x27614cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_276150:
    // 0x276150: 0x460338c3  div.s       $f3, $f7, $f3
    ctx->pc = 0x276150u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[7] * 0.0f); } else ctx->f[3] = ctx->f[7] / ctx->f[3];
label_276154:
    // 0x276154: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x276154u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_276158:
    // 0x276158: 0xc7a104f0  lwc1        $f1, 0x4F0($sp)
    ctx->pc = 0x276158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27615c:
    // 0x27615c: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x27615cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_276160:
    // 0x276160: 0x2242821  addu        $a1, $s1, $a0
    ctx->pc = 0x276160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_276164:
    // 0x276164: 0x27a404f4  addiu       $a0, $sp, 0x4F4
    ctx->pc = 0x276164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1268));
label_276168:
    // 0x276168: 0xc7a004e0  lwc1        $f0, 0x4E0($sp)
    ctx->pc = 0x276168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27616c:
    // 0x27616c: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x27616cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_276170:
    // 0x276170: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x276170u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_276174:
    // 0x276174: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x276174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_276178:
    // 0x276178: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x276178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27617c:
    // 0x27617c: 0x27a404e4  addiu       $a0, $sp, 0x4E4
    ctx->pc = 0x27617cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1252));
label_276180:
    // 0x276180: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x276180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276184:
    // 0x276184: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x276184u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_276188:
    // 0x276188: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x276188u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_27618c:
    // 0x27618c: 0x27a404f8  addiu       $a0, $sp, 0x4F8
    ctx->pc = 0x27618cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1272));
label_276190:
    // 0x276190: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x276190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_276194:
    // 0x276194: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x276194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_276198:
    // 0x276198: 0x27a404e8  addiu       $a0, $sp, 0x4E8
    ctx->pc = 0x276198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1256));
label_27619c:
    // 0x27619c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x27619cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2761a0:
    // 0x2761a0: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x2761a0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2761a4:
    // 0x2761a4: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x2761a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_2761a8:
    // 0x2761a8: 0x27a404fc  addiu       $a0, $sp, 0x4FC
    ctx->pc = 0x2761a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1276));
label_2761ac:
    // 0x2761ac: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x2761acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_2761b0:
    // 0x2761b0: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2761b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2761b4:
    // 0x2761b4: 0x27a404ec  addiu       $a0, $sp, 0x4EC
    ctx->pc = 0x2761b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1260));
label_2761b8:
    // 0x2761b8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2761b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2761bc:
    // 0x2761bc: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x2761bcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2761c0:
    // 0x2761c0: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x2761c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_2761c4:
    // 0x2761c4: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x2761c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_2761c8:
    // 0x2761c8: 0x46062941  sub.s       $f5, $f5, $f6
    ctx->pc = 0x2761c8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
label_2761cc:
    // 0x2761cc: 0x46062081  sub.s       $f2, $f4, $f6
    ctx->pc = 0x2761ccu;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
label_2761d0:
    // 0x2761d0: 0x46022842  mul.s       $f1, $f5, $f2
    ctx->pc = 0x2761d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_2761d4:
    // 0x2761d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2761d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2761d8:
    // 0x2761d8: 0x0  nop
    ctx->pc = 0x2761d8u;
    // NOP
label_2761dc:
    // 0x2761dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2761dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2761e0:
    // 0x2761e0: 0x4500fc7f  bc1f        . + 4 + (-0x381 << 2)
label_2761e4:
    if (ctx->pc == 0x2761E4u) {
        ctx->pc = 0x2761E4u;
            // 0x2761e4: 0x460228c1  sub.s       $f3, $f5, $f2 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
        ctx->pc = 0x2761E8u;
        goto label_2761e8;
    }
    ctx->pc = 0x2761E0u;
    {
        const bool branch_taken_0x2761e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2761E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2761E0u;
            // 0x2761e4: 0x460228c1  sub.s       $f3, $f5, $f2 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2761e0) {
            ctx->pc = 0x2753E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2753e0;
        }
    }
    ctx->pc = 0x2761E8u;
label_2761e8:
    // 0x2761e8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2761e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2761ec:
    // 0x2761ec: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x2761ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_2761f0:
    // 0x2761f0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2761f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2761f4:
    // 0x2761f4: 0x460328c3  div.s       $f3, $f5, $f3
    ctx->pc = 0x2761f4u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[3] = ctx->f[5] / ctx->f[3];
label_2761f8:
    // 0x2761f8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2761f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2761fc:
    // 0x2761fc: 0xc7a104f0  lwc1        $f1, 0x4F0($sp)
    ctx->pc = 0x2761fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_276200:
    // 0x276200: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x276200u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_276204:
    // 0x276204: 0x27a304f4  addiu       $v1, $sp, 0x4F4
    ctx->pc = 0x276204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1268));
label_276208:
    // 0x276208: 0xc7a004e0  lwc1        $f0, 0x4E0($sp)
    ctx->pc = 0x276208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27620c:
    // 0x27620c: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x27620cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_276210:
    // 0x276210: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x276210u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_276214:
    // 0x276214: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x276214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_276218:
    // 0x276218: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x276218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27621c:
    // 0x27621c: 0x27a304e4  addiu       $v1, $sp, 0x4E4
    ctx->pc = 0x27621cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1252));
label_276220:
    // 0x276220: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x276220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276224:
    // 0x276224: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x276224u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_276228:
    // 0x276228: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x276228u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_27622c:
    // 0x27622c: 0x27a304f8  addiu       $v1, $sp, 0x4F8
    ctx->pc = 0x27622cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1272));
label_276230:
    // 0x276230: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x276230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_276234:
    // 0x276234: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x276234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_276238:
    // 0x276238: 0x27a304e8  addiu       $v1, $sp, 0x4E8
    ctx->pc = 0x276238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1256));
label_27623c:
    // 0x27623c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x27623cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276240:
    // 0x276240: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x276240u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_276244:
    // 0x276244: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x276244u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_276248:
    // 0x276248: 0x27a304fc  addiu       $v1, $sp, 0x4FC
    ctx->pc = 0x276248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1276));
label_27624c:
    // 0x27624c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x27624cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_276250:
    // 0x276250: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x276250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_276254:
    // 0x276254: 0x27a304ec  addiu       $v1, $sp, 0x4EC
    ctx->pc = 0x276254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1260));
label_276258:
    // 0x276258: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x276258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27625c:
    // 0x27625c: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x27625cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_276260:
    // 0x276260: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x276260u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_276264:
    // 0x276264: 0x1000fc5e  b           . + 4 + (-0x3A2 << 2)
label_276268:
    if (ctx->pc == 0x276268u) {
        ctx->pc = 0x276268u;
            // 0x276268: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->pc = 0x27626Cu;
        goto label_27626c;
    }
    ctx->pc = 0x276264u;
    {
        const bool branch_taken_0x276264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276264u;
            // 0x276268: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x276264) {
            ctx->pc = 0x2753E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2753e0;
        }
    }
    ctx->pc = 0x27626Cu;
label_27626c:
    // 0x27626c: 0x0  nop
    ctx->pc = 0x27626cu;
    // NOP
label_276270:
    // 0x276270: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x276270u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_276274:
    // 0x276274: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x276274u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_276278:
    // 0x276278: 0x1000fc59  b           . + 4 + (-0x3A7 << 2)
label_27627c:
    if (ctx->pc == 0x27627Cu) {
        ctx->pc = 0x27627Cu;
            // 0x27627c: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->pc = 0x276280u;
        goto label_276280;
    }
    ctx->pc = 0x276278u;
    {
        const bool branch_taken_0x276278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27627Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276278u;
            // 0x27627c: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276278) {
            ctx->pc = 0x2753E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2753e0;
        }
    }
    ctx->pc = 0x276280u;
label_276280:
    // 0x276280: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x276280u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_276284:
    // 0x276284: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x276284u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_276288:
    // 0x276288: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x276288u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_27628c:
    // 0x27628c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27628cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_276290:
    // 0x276290: 0x26520003  addiu       $s2, $s2, 0x3
    ctx->pc = 0x276290u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
label_276294:
    // 0x276294: 0x1000fc52  b           . + 4 + (-0x3AE << 2)
label_276298:
    if (ctx->pc == 0x276298u) {
        ctx->pc = 0x276298u;
            // 0x276298: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->pc = 0x27629Cu;
        goto label_27629c;
    }
    ctx->pc = 0x276294u;
    {
        const bool branch_taken_0x276294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276294u;
            // 0x276298: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276294) {
            ctx->pc = 0x2753E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2753e0;
        }
    }
    ctx->pc = 0x27629Cu;
label_27629c:
    // 0x27629c: 0x0  nop
    ctx->pc = 0x27629cu;
    // NOP
label_2762a0:
    // 0x2762a0: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x2762a0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_2762a4:
    // 0x2762a4: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x2762a4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_2762a8:
    // 0x2762a8: 0x92450003  lbu         $a1, 0x3($s2)
    ctx->pc = 0x2762a8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_2762ac:
    // 0x2762ac: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2762acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_2762b0:
    // 0x2762b0: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2762b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_2762b4:
    // 0x2762b4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2762b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2762b8:
    // 0x2762b8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2762b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_2762bc:
    // 0x2762bc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2762bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2762c0:
    // 0x2762c0: 0x1000fc47  b           . + 4 + (-0x3B9 << 2)
label_2762c4:
    if (ctx->pc == 0x2762C4u) {
        ctx->pc = 0x2762C4u;
            // 0x2762c4: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->pc = 0x2762C8u;
        goto label_2762c8;
    }
    ctx->pc = 0x2762C0u;
    {
        const bool branch_taken_0x2762c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2762C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2762C0u;
            // 0x2762c4: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2762c0) {
            ctx->pc = 0x2753E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2753e0;
        }
    }
    ctx->pc = 0x2762C8u;
label_2762c8:
    // 0x2762c8: 0x92450001  lbu         $a1, 0x1($s2)
    ctx->pc = 0x2762c8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_2762cc:
    // 0x2762cc: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x2762ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_2762d0:
    // 0x2762d0: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x2762d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_2762d4:
    // 0x2762d4: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x2762d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_2762d8:
    // 0x2762d8: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x2762d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_2762dc:
    // 0x2762dc: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x2762dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_2762e0:
    // 0x2762e0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2762e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2762e4:
    // 0x2762e4: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x2762e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_2762e8:
    // 0x2762e8: 0x31a40  sll         $v1, $v1, 9
    ctx->pc = 0x2762e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
label_2762ec:
    // 0x2762ec: 0x1000fc3c  b           . + 4 + (-0x3C4 << 2)
label_2762f0:
    if (ctx->pc == 0x2762F0u) {
        ctx->pc = 0x2762F0u;
            // 0x2762f0: 0x839021  addu        $s2, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->pc = 0x2762F4u;
        goto label_2762f4;
    }
    ctx->pc = 0x2762ECu;
    {
        const bool branch_taken_0x2762ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2762F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2762ECu;
            // 0x2762f0: 0x839021  addu        $s2, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2762ec) {
            ctx->pc = 0x2753E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2753e0;
        }
    }
    ctx->pc = 0x2762F4u;
label_2762f4:
    // 0x2762f4: 0x0  nop
    ctx->pc = 0x2762f4u;
    // NOP
label_2762f8:
    // 0x2762f8: 0x1000fc39  b           . + 4 + (-0x3C7 << 2)
label_2762fc:
    if (ctx->pc == 0x2762FCu) {
        ctx->pc = 0x2762FCu;
            // 0x2762fc: 0x26520005  addiu       $s2, $s2, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
        ctx->pc = 0x276300u;
        goto label_276300;
    }
    ctx->pc = 0x2762F8u;
    {
        const bool branch_taken_0x2762f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2762FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2762F8u;
            // 0x2762fc: 0x26520005  addiu       $s2, $s2, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2762f8) {
            ctx->pc = 0x2753E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2753e0;
        }
    }
    ctx->pc = 0x276300u;
label_276300:
    // 0x276300: 0x92440003  lbu         $a0, 0x3($s2)
    ctx->pc = 0x276300u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_276304:
    // 0x276304: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_276308:
    if (ctx->pc == 0x276308u) {
        ctx->pc = 0x276308u;
            // 0x276308: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x27630Cu;
        goto label_27630c;
    }
    ctx->pc = 0x276304u;
    {
        const bool branch_taken_0x276304 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x276308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276304u;
            // 0x276308: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276304) {
            ctx->pc = 0x276318u;
            goto label_276318;
        }
    }
    ctx->pc = 0x27630Cu;
label_27630c:
    // 0x27630c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x27630cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_276310:
    // 0x276310: 0x10000007  b           . + 4 + (0x7 << 2)
label_276314:
    if (ctx->pc == 0x276314u) {
        ctx->pc = 0x276314u;
            // 0x276314: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x276318u;
        goto label_276318;
    }
    ctx->pc = 0x276310u;
    {
        const bool branch_taken_0x276310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276310u;
            // 0x276314: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x276310) {
            ctx->pc = 0x276330u;
            goto label_276330;
        }
    }
    ctx->pc = 0x276318u;
label_276318:
    // 0x276318: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x276318u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_27631c:
    // 0x27631c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x27631cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_276320:
    // 0x276320: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x276320u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_276324:
    // 0x276324: 0x0  nop
    ctx->pc = 0x276324u;
    // NOP
label_276328:
    // 0x276328: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x276328u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_27632c:
    // 0x27632c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x27632cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_276330:
    // 0x276330: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x276330u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_276334:
    // 0x276334: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_276338:
    if (ctx->pc == 0x276338u) {
        ctx->pc = 0x276338u;
            // 0x276338: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x27633Cu;
        goto label_27633c;
    }
    ctx->pc = 0x276334u;
    {
        const bool branch_taken_0x276334 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x276338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276334u;
            // 0x276338: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276334) {
            ctx->pc = 0x276348u;
            goto label_276348;
        }
    }
    ctx->pc = 0x27633Cu;
label_27633c:
    // 0x27633c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x27633cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_276340:
    // 0x276340: 0x10000007  b           . + 4 + (0x7 << 2)
label_276344:
    if (ctx->pc == 0x276344u) {
        ctx->pc = 0x276344u;
            // 0x276344: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x276348u;
        goto label_276348;
    }
    ctx->pc = 0x276340u;
    {
        const bool branch_taken_0x276340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276340u;
            // 0x276344: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x276340) {
            ctx->pc = 0x276360u;
            goto label_276360;
        }
    }
    ctx->pc = 0x276348u;
label_276348:
    // 0x276348: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x276348u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_27634c:
    // 0x27634c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x27634cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_276350:
    // 0x276350: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x276350u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_276354:
    // 0x276354: 0x0  nop
    ctx->pc = 0x276354u;
    // NOP
label_276358:
    // 0x276358: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x276358u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_27635c:
    // 0x27635c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x27635cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_276360:
    // 0x276360: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x276360u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_276364:
    // 0x276364: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_276368:
    if (ctx->pc == 0x276368u) {
        ctx->pc = 0x276368u;
            // 0x276368: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x27636Cu;
        goto label_27636c;
    }
    ctx->pc = 0x276364u;
    {
        const bool branch_taken_0x276364 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x276368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276364u;
            // 0x276368: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276364) {
            ctx->pc = 0x276378u;
            goto label_276378;
        }
    }
    ctx->pc = 0x27636Cu;
label_27636c:
    // 0x27636c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x27636cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_276370:
    // 0x276370: 0x10000007  b           . + 4 + (0x7 << 2)
label_276374:
    if (ctx->pc == 0x276374u) {
        ctx->pc = 0x276374u;
            // 0x276374: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x276378u;
        goto label_276378;
    }
    ctx->pc = 0x276370u;
    {
        const bool branch_taken_0x276370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276370u;
            // 0x276374: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x276370) {
            ctx->pc = 0x276390u;
            goto label_276390;
        }
    }
    ctx->pc = 0x276378u;
label_276378:
    // 0x276378: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x276378u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_27637c:
    // 0x27637c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x27637cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_276380:
    // 0x276380: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x276380u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_276384:
    // 0x276384: 0x0  nop
    ctx->pc = 0x276384u;
    // NOP
label_276388:
    // 0x276388: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x276388u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_27638c:
    // 0x27638c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x27638cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_276390:
    // 0x276390: 0xc6250000  lwc1        $f5, 0x0($s1)
    ctx->pc = 0x276390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_276394:
    // 0x276394: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x276394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_276398:
    // 0x276398: 0x642004  sllv        $a0, $a0, $v1
    ctx->pc = 0x276398u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
label_27639c:
    // 0x27639c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x27639cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_2763a0:
    // 0x2763a0: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x2763a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_2763a4:
    // 0x2763a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2763a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2763a8:
    // 0x2763a8: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2763a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_2763ac:
    // 0x2763ac: 0x27a40544  addiu       $a0, $sp, 0x544
    ctx->pc = 0x2763acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1348));
label_2763b0:
    // 0x2763b0: 0x46032941  sub.s       $f5, $f5, $f3
    ctx->pc = 0x2763b0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
label_2763b4:
    // 0x2763b4: 0xe6250000  swc1        $f5, 0x0($s1)
    ctx->pc = 0x2763b4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2763b8:
    // 0x2763b8: 0xc6250004  lwc1        $f5, 0x4($s1)
    ctx->pc = 0x2763b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2763bc:
    // 0x2763bc: 0x46022941  sub.s       $f5, $f5, $f2
    ctx->pc = 0x2763bcu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
label_2763c0:
    // 0x2763c0: 0xe6250004  swc1        $f5, 0x4($s1)
    ctx->pc = 0x2763c0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_2763c4:
    // 0x2763c4: 0xc6250008  lwc1        $f5, 0x8($s1)
    ctx->pc = 0x2763c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2763c8:
    // 0x2763c8: 0x46012941  sub.s       $f5, $f5, $f1
    ctx->pc = 0x2763c8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
label_2763cc:
    // 0x2763cc: 0xe6250008  swc1        $f5, 0x8($s1)
    ctx->pc = 0x2763ccu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_2763d0:
    // 0x2763d0: 0xc625000c  lwc1        $f5, 0xC($s1)
    ctx->pc = 0x2763d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2763d4:
    // 0x2763d4: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x2763d4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_2763d8:
    // 0x2763d8: 0xe625000c  swc1        $f5, 0xC($s1)
    ctx->pc = 0x2763d8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_2763dc:
    // 0x2763dc: 0xc6250010  lwc1        $f5, 0x10($s1)
    ctx->pc = 0x2763dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2763e0:
    // 0x2763e0: 0x46032941  sub.s       $f5, $f5, $f3
    ctx->pc = 0x2763e0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
label_2763e4:
    // 0x2763e4: 0xe6250010  swc1        $f5, 0x10($s1)
    ctx->pc = 0x2763e4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_2763e8:
    // 0x2763e8: 0xc6250014  lwc1        $f5, 0x14($s1)
    ctx->pc = 0x2763e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2763ec:
    // 0x2763ec: 0x46022941  sub.s       $f5, $f5, $f2
    ctx->pc = 0x2763ecu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
label_2763f0:
    // 0x2763f0: 0xe6250014  swc1        $f5, 0x14($s1)
    ctx->pc = 0x2763f0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_2763f4:
    // 0x2763f4: 0xc6250018  lwc1        $f5, 0x18($s1)
    ctx->pc = 0x2763f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2763f8:
    // 0x2763f8: 0x46012941  sub.s       $f5, $f5, $f1
    ctx->pc = 0x2763f8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
label_2763fc:
    // 0x2763fc: 0xe6250018  swc1        $f5, 0x18($s1)
    ctx->pc = 0x2763fcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_276400:
    // 0x276400: 0xc625001c  lwc1        $f5, 0x1C($s1)
    ctx->pc = 0x276400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_276404:
    // 0x276404: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x276404u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_276408:
    // 0x276408: 0xe625001c  swc1        $f5, 0x1C($s1)
    ctx->pc = 0x276408u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_27640c:
    // 0x27640c: 0xc6250000  lwc1        $f5, 0x0($s1)
    ctx->pc = 0x27640cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_276410:
    // 0x276410: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x276410u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_276414:
    // 0x276414: 0xe6250000  swc1        $f5, 0x0($s1)
    ctx->pc = 0x276414u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_276418:
    // 0x276418: 0xc6250004  lwc1        $f5, 0x4($s1)
    ctx->pc = 0x276418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_27641c:
    // 0x27641c: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x27641cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_276420:
    // 0x276420: 0xe6250004  swc1        $f5, 0x4($s1)
    ctx->pc = 0x276420u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_276424:
    // 0x276424: 0xc6250008  lwc1        $f5, 0x8($s1)
    ctx->pc = 0x276424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_276428:
    // 0x276428: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x276428u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_27642c:
    // 0x27642c: 0xe6250008  swc1        $f5, 0x8($s1)
    ctx->pc = 0x27642cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_276430:
    // 0x276430: 0xc625000c  lwc1        $f5, 0xC($s1)
    ctx->pc = 0x276430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_276434:
    // 0x276434: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x276434u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_276438:
    // 0x276438: 0xe625000c  swc1        $f5, 0xC($s1)
    ctx->pc = 0x276438u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_27643c:
    // 0x27643c: 0xc6250010  lwc1        $f5, 0x10($s1)
    ctx->pc = 0x27643cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_276440:
    // 0x276440: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x276440u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_276444:
    // 0x276444: 0xe6250010  swc1        $f5, 0x10($s1)
    ctx->pc = 0x276444u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_276448:
    // 0x276448: 0xc6250014  lwc1        $f5, 0x14($s1)
    ctx->pc = 0x276448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_27644c:
    // 0x27644c: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x27644cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_276450:
    // 0x276450: 0xe6250014  swc1        $f5, 0x14($s1)
    ctx->pc = 0x276450u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_276454:
    // 0x276454: 0xc6250018  lwc1        $f5, 0x18($s1)
    ctx->pc = 0x276454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_276458:
    // 0x276458: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x276458u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_27645c:
    // 0x27645c: 0xe6250018  swc1        $f5, 0x18($s1)
    ctx->pc = 0x27645cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_276460:
    // 0x276460: 0xc625001c  lwc1        $f5, 0x1C($s1)
    ctx->pc = 0x276460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_276464:
    // 0x276464: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x276464u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_276468:
    // 0x276468: 0xe625001c  swc1        $f5, 0x1C($s1)
    ctx->pc = 0x276468u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_27646c:
    // 0x27646c: 0xc6650000  lwc1        $f5, 0x0($s3)
    ctx->pc = 0x27646cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_276470:
    // 0x276470: 0x460328c0  add.s       $f3, $f5, $f3
    ctx->pc = 0x276470u;
    ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
label_276474:
    // 0x276474: 0xe7a30540  swc1        $f3, 0x540($sp)
    ctx->pc = 0x276474u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1344), bits); }
label_276478:
    // 0x276478: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x276478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27647c:
    // 0x27647c: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x27647cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_276480:
    // 0x276480: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x276480u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_276484:
    // 0x276484: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x276484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_276488:
    // 0x276488: 0x27a40548  addiu       $a0, $sp, 0x548
    ctx->pc = 0x276488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1352));
label_27648c:
    // 0x27648c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x27648cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_276490:
    // 0x276490: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x276490u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_276494:
    // 0x276494: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x276494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_276498:
    // 0x276498: 0x27a4054c  addiu       $a0, $sp, 0x54C
    ctx->pc = 0x276498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1356));
label_27649c:
    // 0x27649c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27649cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2764a0:
    // 0x2764a0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2764a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_2764a4:
    // 0x2764a4: 0xc7a00540  lwc1        $f0, 0x540($sp)
    ctx->pc = 0x2764a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2764a8:
    // 0x2764a8: 0x27a40544  addiu       $a0, $sp, 0x544
    ctx->pc = 0x2764a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1348));
label_2764ac:
    // 0x2764ac: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2764acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_2764b0:
    // 0x2764b0: 0xe7a00540  swc1        $f0, 0x540($sp)
    ctx->pc = 0x2764b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1344), bits); }
label_2764b4:
    // 0x2764b4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2764b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2764b8:
    // 0x2764b8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2764b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_2764bc:
    // 0x2764bc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2764bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_2764c0:
    // 0x2764c0: 0x27a40548  addiu       $a0, $sp, 0x548
    ctx->pc = 0x2764c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1352));
label_2764c4:
    // 0x2764c4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2764c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2764c8:
    // 0x2764c8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2764c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_2764cc:
    // 0x2764cc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2764ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_2764d0:
    // 0x2764d0: 0x27a4054c  addiu       $a0, $sp, 0x54C
    ctx->pc = 0x2764d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1356));
label_2764d4:
    // 0x2764d4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2764d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2764d8:
    // 0x2764d8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2764d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_2764dc:
    // 0x2764dc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2764dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_2764e0:
    // 0x2764e0: 0x8e640024  lw          $a0, 0x24($s3)
    ctx->pc = 0x2764e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_2764e4:
    // 0x2764e4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2764e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2764e8:
    // 0x2764e8: 0x27a30564  addiu       $v1, $sp, 0x564
    ctx->pc = 0x2764e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1380));
label_2764ec:
    // 0x2764ec: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2764ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_2764f0:
    // 0x2764f0: 0xc6600028  lwc1        $f0, 0x28($s3)
    ctx->pc = 0x2764f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2764f4:
    // 0x2764f4: 0x27a30568  addiu       $v1, $sp, 0x568
    ctx->pc = 0x2764f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1384));
label_2764f8:
    // 0x2764f8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2764f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_2764fc:
    // 0x2764fc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2764fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_276500:
    // 0x276500: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x276500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276504:
    // 0x276504: 0x27a30550  addiu       $v1, $sp, 0x550
    ctx->pc = 0x276504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1360));
label_276508:
    // 0x276508: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x276508u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_27650c:
    // 0x27650c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x27650cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_276510:
    // 0x276510: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x276510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276514:
    // 0x276514: 0x27a30554  addiu       $v1, $sp, 0x554
    ctx->pc = 0x276514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1364));
label_276518:
    // 0x276518: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x276518u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_27651c:
    // 0x27651c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x27651cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_276520:
    // 0x276520: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x276520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276524:
    // 0x276524: 0x27a30558  addiu       $v1, $sp, 0x558
    ctx->pc = 0x276524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1368));
label_276528:
    // 0x276528: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x276528u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_27652c:
    // 0x27652c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x27652cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_276530:
    // 0x276530: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x276530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276534:
    // 0x276534: 0x27a3055c  addiu       $v1, $sp, 0x55C
    ctx->pc = 0x276534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1372));
label_276538:
    // 0x276538: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x276538u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_27653c:
    // 0x27653c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x27653cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_276540:
    // 0x276540: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x276540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276544:
    // 0x276544: 0x27a30560  addiu       $v1, $sp, 0x560
    ctx->pc = 0x276544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1376));
label_276548:
    // 0x276548: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x276548u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_27654c:
    // 0x27654c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x27654cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_276550:
    // 0x276550: 0x8e630030  lw          $v1, 0x30($s3)
    ctx->pc = 0x276550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_276554:
    // 0x276554: 0xafa30570  sw          $v1, 0x570($sp)
    ctx->pc = 0x276554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1392), GPR_U32(ctx, 3));
label_276558:
    // 0x276558: 0x8e63002c  lw          $v1, 0x2C($s3)
    ctx->pc = 0x276558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_27655c:
    // 0x27655c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x27655cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_276560:
    // 0x276560: 0x1000fb9f  b           . + 4 + (-0x461 << 2)
label_276564:
    if (ctx->pc == 0x276564u) {
        ctx->pc = 0x276564u;
            // 0x276564: 0x27b30540  addiu       $s3, $sp, 0x540 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
        ctx->pc = 0x276568u;
        goto label_276568;
    }
    ctx->pc = 0x276560u;
    {
        const bool branch_taken_0x276560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276560u;
            // 0x276564: 0x27b30540  addiu       $s3, $sp, 0x540 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276560) {
            ctx->pc = 0x2753E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2753e0;
        }
    }
    ctx->pc = 0x276568u;
label_276568:
    // 0x276568: 0x1000001d  b           . + 4 + (0x1D << 2)
label_27656c:
    if (ctx->pc == 0x27656Cu) {
        ctx->pc = 0x27656Cu;
            // 0x27656c: 0x92460001  lbu         $a2, 0x1($s2) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
        ctx->pc = 0x276570u;
        goto label_276570;
    }
    ctx->pc = 0x276568u;
    {
        const bool branch_taken_0x276568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27656Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276568u;
            // 0x27656c: 0x92460001  lbu         $a2, 0x1($s2) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276568) {
            ctx->pc = 0x2765E0u;
            goto label_2765e0;
        }
    }
    ctx->pc = 0x276570u;
label_276570:
    // 0x276570: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x276570u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_276574:
    // 0x276574: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x276574u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_276578:
    // 0x276578: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x276578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_27657c:
    // 0x27657c: 0x10000018  b           . + 4 + (0x18 << 2)
label_276580:
    if (ctx->pc == 0x276580u) {
        ctx->pc = 0x276580u;
            // 0x276580: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x276584u;
        goto label_276584;
    }
    ctx->pc = 0x27657Cu;
    {
        const bool branch_taken_0x27657c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27657Cu;
            // 0x276580: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27657c) {
            ctx->pc = 0x2765E0u;
            goto label_2765e0;
        }
    }
    ctx->pc = 0x276584u;
label_276584:
    // 0x276584: 0x0  nop
    ctx->pc = 0x276584u;
    // NOP
label_276588:
    // 0x276588: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x276588u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_27658c:
    // 0x27658c: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x27658cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_276590:
    // 0x276590: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x276590u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_276594:
    // 0x276594: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x276594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_276598:
    // 0x276598: 0x43400  sll         $a2, $a0, 16
    ctx->pc = 0x276598u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_27659c:
    // 0x27659c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27659cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2765a0:
    // 0x2765a0: 0x1000000f  b           . + 4 + (0xF << 2)
label_2765a4:
    if (ctx->pc == 0x2765A4u) {
        ctx->pc = 0x2765A4u;
            // 0x2765a4: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->pc = 0x2765A8u;
        goto label_2765a8;
    }
    ctx->pc = 0x2765A0u;
    {
        const bool branch_taken_0x2765a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2765A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2765A0u;
            // 0x2765a4: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2765a0) {
            ctx->pc = 0x2765E0u;
            goto label_2765e0;
        }
    }
    ctx->pc = 0x2765A8u;
label_2765a8:
    // 0x2765a8: 0x92450001  lbu         $a1, 0x1($s2)
    ctx->pc = 0x2765a8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_2765ac:
    // 0x2765ac: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x2765acu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_2765b0:
    // 0x2765b0: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x2765b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_2765b4:
    // 0x2765b4: 0x92430004  lbu         $v1, 0x4($s2)
    ctx->pc = 0x2765b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_2765b8:
    // 0x2765b8: 0x53600  sll         $a2, $a1, 24
    ctx->pc = 0x2765b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_2765bc:
    // 0x2765bc: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2765bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_2765c0:
    // 0x2765c0: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x2765c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_2765c4:
    // 0x2765c4: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x2765c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_2765c8:
    // 0x2765c8: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x2765c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_2765cc:
    // 0x2765cc: 0x10000004  b           . + 4 + (0x4 << 2)
label_2765d0:
    if (ctx->pc == 0x2765D0u) {
        ctx->pc = 0x2765D0u;
            // 0x2765d0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = 0x2765D4u;
        goto label_2765d4;
    }
    ctx->pc = 0x2765CCu;
    {
        const bool branch_taken_0x2765cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2765D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2765CCu;
            // 0x2765d0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2765cc) {
            ctx->pc = 0x2765E0u;
            goto label_2765e0;
        }
    }
    ctx->pc = 0x2765D4u;
label_2765d4:
    // 0x2765d4: 0x0  nop
    ctx->pc = 0x2765d4u;
    // NOP
label_2765d8:
    // 0x2765d8: 0x2466ffd0  addiu       $a2, $v1, -0x30
    ctx->pc = 0x2765d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
label_2765dc:
    // 0x2765dc: 0x0  nop
    ctx->pc = 0x2765dcu;
    // NOP
label_2765e0:
    // 0x2765e0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2765e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2765e4:
    // 0x2765e4: 0x8e65002c  lw          $a1, 0x2C($s3)
    ctx->pc = 0x2765e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_2765e8:
    // 0x2765e8: 0x8e830030  lw          $v1, 0x30($s4)
    ctx->pc = 0x2765e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_2765ec:
    // 0x2765ec: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2765ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_2765f0:
    // 0x2765f0: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x2765f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_2765f4:
    // 0x2765f4: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x2765f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_2765f8:
    // 0x2765f8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2765f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2765fc:
    // 0x2765fc: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x2765fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_276600:
    // 0x276600: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x276600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_276604:
    // 0x276604: 0x8c500014  lw          $s0, 0x14($v0)
    ctx->pc = 0x276604u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_276608:
    // 0x276608: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_27660c:
    if (ctx->pc == 0x27660Cu) {
        ctx->pc = 0x27660Cu;
            // 0x27660c: 0xc38825  or          $s1, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
        ctx->pc = 0x276610u;
        goto label_276610;
    }
    ctx->pc = 0x276608u;
    {
        const bool branch_taken_0x276608 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27660Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276608u;
            // 0x27660c: 0xc38825  or          $s1, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276608) {
            ctx->pc = 0x276618u;
            goto label_276618;
        }
    }
    ctx->pc = 0x276610u;
label_276610:
    // 0x276610: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x276610u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_276614:
    // 0x276614: 0x0  nop
    ctx->pc = 0x276614u;
    // NOP
label_276618:
    // 0x276618: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x276618u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27661c:
    // 0x27661c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27661cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_276620:
    // 0x276620: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x276620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_276624:
    // 0x276624: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x276624u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_276628:
    // 0x276628: 0x320f809  jalr        $t9
label_27662c:
    if (ctx->pc == 0x27662Cu) {
        ctx->pc = 0x27662Cu;
            // 0x27662c: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x276630u;
        goto label_276630;
    }
    ctx->pc = 0x276628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x276630u);
        ctx->pc = 0x27662Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276628u;
            // 0x27662c: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x276630u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x276630u; }
            if (ctx->pc != 0x276630u) { return; }
        }
        }
    }
    ctx->pc = 0x276630u;
label_276630:
    // 0x276630: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x276630u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_276634:
    // 0x276634: 0x27a4058c  addiu       $a0, $sp, 0x58C
    ctx->pc = 0x276634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1420));
label_276638:
    // 0x276638: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x276638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27663c:
    // 0x27663c: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x27663cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_276640:
    // 0x276640: 0x8c460030  lw          $a2, 0x30($v0)
    ctx->pc = 0x276640u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_276644:
    // 0x276644: 0x8c470034  lw          $a3, 0x34($v0)
    ctx->pc = 0x276644u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_276648:
    // 0x276648: 0x8c480038  lw          $t0, 0x38($v0)
    ctx->pc = 0x276648u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_27664c:
    // 0x27664c: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x27664cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_276650:
    // 0x276650: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x276650u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_276654:
    // 0x276654: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x276654u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_276658:
    // 0x276658: 0x320f809  jalr        $t9
label_27665c:
    if (ctx->pc == 0x27665Cu) {
        ctx->pc = 0x27665Cu;
            // 0x27665c: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x276660u;
        goto label_276660;
    }
    ctx->pc = 0x276658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x276660u);
        ctx->pc = 0x27665Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276658u;
            // 0x27665c: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x276660u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x276660u; }
            if (ctx->pc != 0x276660u) { return; }
        }
        }
    }
    ctx->pc = 0x276660u;
label_276660:
    // 0x276660: 0x27a3058c  addiu       $v1, $sp, 0x58C
    ctx->pc = 0x276660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1420));
label_276664:
    // 0x276664: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x276664u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_276668:
    // 0x276668: 0x10600121  beqz        $v1, . + 4 + (0x121 << 2)
label_27666c:
    if (ctx->pc == 0x27666Cu) {
        ctx->pc = 0x276670u;
        goto label_276670;
    }
    ctx->pc = 0x276668u;
    {
        const bool branch_taken_0x276668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x276668) {
            ctx->pc = 0x276AF0u;
            goto label_276af0;
        }
    }
    ctx->pc = 0x276670u;
label_276670:
    // 0x276670: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x276670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_276674:
    // 0x276674: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x276674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_276678:
    // 0x276678: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x276678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
label_27667c:
    // 0x27667c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x27667cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_276680:
    // 0x276680: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x276680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
label_276684:
    // 0x276684: 0xafb100d4  sw          $s1, 0xD4($sp)
    ctx->pc = 0x276684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 17));
label_276688:
    // 0x276688: 0xafb000d0  sw          $s0, 0xD0($sp)
    ctx->pc = 0x276688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 16));
label_27668c:
    // 0x27668c: 0x8e83002c  lw          $v1, 0x2C($s4)
    ctx->pc = 0x27668cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_276690:
    // 0x276690: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x276690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_276694:
    // 0x276694: 0x8e0a000c  lw          $t2, 0xC($s0)
    ctx->pc = 0x276694u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_276698:
    // 0x276698: 0x8e870024  lw          $a3, 0x24($s4)
    ctx->pc = 0x276698u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_27669c:
    // 0x27669c: 0x8e880028  lw          $t0, 0x28($s4)
    ctx->pc = 0x27669cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_2766a0:
    // 0x2766a0: 0x8c660030  lw          $a2, 0x30($v1)
    ctx->pc = 0x2766a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_2766a4:
    // 0x2766a4: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x2766a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2766a8:
    // 0x2766a8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2766a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2766ac:
    // 0x2766ac: 0x8cc90000  lw          $t1, 0x0($a2)
    ctx->pc = 0x2766acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2766b0:
    // 0x2766b0: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2766b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_2766b4:
    // 0x2766b4: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x2766b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_2766b8:
    // 0x2766b8: 0x904301a0  lbu         $v1, 0x1A0($v0)
    ctx->pc = 0x2766b8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 416)));
label_2766bc:
    // 0x2766bc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2766bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2766c0:
    // 0x2766c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2766c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2766c4:
    // 0x2766c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2766c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2766c8:
    // 0x2766c8: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2766c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_2766cc:
    // 0x2766cc: 0x8c4209ac  lw          $v0, 0x9AC($v0)
    ctx->pc = 0x2766ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2476)));
label_2766d0:
    // 0x2766d0: 0x40f809  jalr        $v0
label_2766d4:
    if (ctx->pc == 0x2766D4u) {
        ctx->pc = 0x2766D4u;
            // 0x2766d4: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x2766D8u;
        goto label_2766d8;
    }
    ctx->pc = 0x2766D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2766D8u);
        ctx->pc = 0x2766D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2766D0u;
            // 0x2766d4: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2766D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2766D8u; }
            if (ctx->pc != 0x2766D8u) { return; }
        }
        }
    }
    ctx->pc = 0x2766D8u;
label_2766d8:
    // 0x2766d8: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x2766d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_2766dc:
    // 0x2766dc: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2766dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2766e0:
    // 0x2766e0: 0x10000103  b           . + 4 + (0x103 << 2)
label_2766e4:
    if (ctx->pc == 0x2766E4u) {
        ctx->pc = 0x2766E4u;
            // 0x2766e4: 0xe680001c  swc1        $f0, 0x1C($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 28), bits); }
        ctx->pc = 0x2766E8u;
        goto label_2766e8;
    }
    ctx->pc = 0x2766E0u;
    {
        const bool branch_taken_0x2766e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2766E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2766E0u;
            // 0x2766e4: 0xe680001c  swc1        $f0, 0x1C($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2766e0) {
            ctx->pc = 0x276AF0u;
            goto label_276af0;
        }
    }
    ctx->pc = 0x2766E8u;
label_2766e8:
    // 0x2766e8: 0x27a60540  addiu       $a2, $sp, 0x540
    ctx->pc = 0x2766e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
label_2766ec:
    // 0x2766ec: 0x12660028  beq         $s3, $a2, . + 4 + (0x28 << 2)
label_2766f0:
    if (ctx->pc == 0x2766F0u) {
        ctx->pc = 0x2766F0u;
            // 0x2766f0: 0x92430001  lbu         $v1, 0x1($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
        ctx->pc = 0x2766F4u;
        goto label_2766f4;
    }
    ctx->pc = 0x2766ECu;
    {
        const bool branch_taken_0x2766ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 6));
        ctx->pc = 0x2766F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2766ECu;
            // 0x2766f0: 0x92430001  lbu         $v1, 0x1($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2766ec) {
            ctx->pc = 0x276790u;
            goto label_276790;
        }
    }
    ctx->pc = 0x2766F4u;
label_2766f4:
    // 0x2766f4: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2766f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2766f8:
    // 0x2766f8: 0x27a40544  addiu       $a0, $sp, 0x544
    ctx->pc = 0x2766f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1348));
label_2766fc:
    // 0x2766fc: 0xe7a00540  swc1        $f0, 0x540($sp)
    ctx->pc = 0x2766fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1344), bits); }
label_276700:
    // 0x276700: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x276700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276704:
    // 0x276704: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x276704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_276708:
    // 0x276708: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x276708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27670c:
    // 0x27670c: 0x27a40548  addiu       $a0, $sp, 0x548
    ctx->pc = 0x27670cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1352));
label_276710:
    // 0x276710: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x276710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_276714:
    // 0x276714: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x276714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276718:
    // 0x276718: 0x27a4054c  addiu       $a0, $sp, 0x54C
    ctx->pc = 0x276718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1356));
label_27671c:
    // 0x27671c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x27671cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_276720:
    // 0x276720: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x276720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276724:
    // 0x276724: 0x27a40550  addiu       $a0, $sp, 0x550
    ctx->pc = 0x276724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1360));
label_276728:
    // 0x276728: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x276728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_27672c:
    // 0x27672c: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x27672cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276730:
    // 0x276730: 0x27a40554  addiu       $a0, $sp, 0x554
    ctx->pc = 0x276730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1364));
label_276734:
    // 0x276734: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x276734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_276738:
    // 0x276738: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x276738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27673c:
    // 0x27673c: 0x27a40558  addiu       $a0, $sp, 0x558
    ctx->pc = 0x27673cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1368));
label_276740:
    // 0x276740: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x276740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_276744:
    // 0x276744: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x276744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276748:
    // 0x276748: 0x27a4055c  addiu       $a0, $sp, 0x55C
    ctx->pc = 0x276748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1372));
label_27674c:
    // 0x27674c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x27674cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_276750:
    // 0x276750: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x276750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276754:
    // 0x276754: 0x27a40560  addiu       $a0, $sp, 0x560
    ctx->pc = 0x276754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1376));
label_276758:
    // 0x276758: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x276758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_27675c:
    // 0x27675c: 0x8e650024  lw          $a1, 0x24($s3)
    ctx->pc = 0x27675cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_276760:
    // 0x276760: 0x27a40564  addiu       $a0, $sp, 0x564
    ctx->pc = 0x276760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1380));
label_276764:
    // 0x276764: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x276764u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_276768:
    // 0x276768: 0xc6600028  lwc1        $f0, 0x28($s3)
    ctx->pc = 0x276768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27676c:
    // 0x27676c: 0x27a40568  addiu       $a0, $sp, 0x568
    ctx->pc = 0x27676cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1384));
label_276770:
    // 0x276770: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x276770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_276774:
    // 0x276774: 0x8e64002c  lw          $a0, 0x2C($s3)
    ctx->pc = 0x276774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_276778:
    // 0x276778: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x276778u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
label_27677c:
    // 0x27677c: 0xc6600030  lwc1        $f0, 0x30($s3)
    ctx->pc = 0x27677cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276780:
    // 0x276780: 0x27a40570  addiu       $a0, $sp, 0x570
    ctx->pc = 0x276780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1392));
label_276784:
    // 0x276784: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x276784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_276788:
    // 0x276788: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x276788u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_27678c:
    // 0x27678c: 0x0  nop
    ctx->pc = 0x27678cu;
    // NOP
label_276790:
    // 0x276790: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x276790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_276794:
    // 0x276794: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x276794u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_276798:
    // 0x276798: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x276798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_27679c:
    // 0x27679c: 0x1000fb10  b           . + 4 + (-0x4F0 << 2)
label_2767a0:
    if (ctx->pc == 0x2767A0u) {
        ctx->pc = 0x2767A0u;
            // 0x2767a0: 0xaea30000  sw          $v1, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2767A4u;
        goto label_2767a4;
    }
    ctx->pc = 0x27679Cu;
    {
        const bool branch_taken_0x27679c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2767A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27679Cu;
            // 0x2767a0: 0xaea30000  sw          $v1, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27679c) {
            ctx->pc = 0x2753E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2753e0;
        }
    }
    ctx->pc = 0x2767A4u;
label_2767a4:
    // 0x2767a4: 0x0  nop
    ctx->pc = 0x2767a4u;
    // NOP
label_2767a8:
    // 0x2767a8: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x2767a8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_2767ac:
    // 0x2767ac: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x2767acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_2767b0:
    // 0x2767b0: 0x27a60540  addiu       $a2, $sp, 0x540
    ctx->pc = 0x2767b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
label_2767b4:
    // 0x2767b4: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x2767b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_2767b8:
    // 0x2767b8: 0x12660027  beq         $s3, $a2, . + 4 + (0x27 << 2)
label_2767bc:
    if (ctx->pc == 0x2767BCu) {
        ctx->pc = 0x2767BCu;
            // 0x2767bc: 0x831821  addu        $v1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->pc = 0x2767C0u;
        goto label_2767c0;
    }
    ctx->pc = 0x2767B8u;
    {
        const bool branch_taken_0x2767b8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 6));
        ctx->pc = 0x2767BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2767B8u;
            // 0x2767bc: 0x831821  addu        $v1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2767b8) {
            ctx->pc = 0x276858u;
            goto label_276858;
        }
    }
    ctx->pc = 0x2767C0u;
label_2767c0:
    // 0x2767c0: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2767c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2767c4:
    // 0x2767c4: 0x27a40544  addiu       $a0, $sp, 0x544
    ctx->pc = 0x2767c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1348));
label_2767c8:
    // 0x2767c8: 0xe7a00540  swc1        $f0, 0x540($sp)
    ctx->pc = 0x2767c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1344), bits); }
label_2767cc:
    // 0x2767cc: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x2767ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2767d0:
    // 0x2767d0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2767d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_2767d4:
    // 0x2767d4: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x2767d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2767d8:
    // 0x2767d8: 0x27a40548  addiu       $a0, $sp, 0x548
    ctx->pc = 0x2767d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1352));
label_2767dc:
    // 0x2767dc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2767dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_2767e0:
    // 0x2767e0: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x2767e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2767e4:
    // 0x2767e4: 0x27a4054c  addiu       $a0, $sp, 0x54C
    ctx->pc = 0x2767e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1356));
label_2767e8:
    // 0x2767e8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2767e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_2767ec:
    // 0x2767ec: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x2767ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2767f0:
    // 0x2767f0: 0x27a40550  addiu       $a0, $sp, 0x550
    ctx->pc = 0x2767f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1360));
label_2767f4:
    // 0x2767f4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2767f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_2767f8:
    // 0x2767f8: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x2767f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2767fc:
    // 0x2767fc: 0x27a40554  addiu       $a0, $sp, 0x554
    ctx->pc = 0x2767fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1364));
label_276800:
    // 0x276800: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x276800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_276804:
    // 0x276804: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x276804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276808:
    // 0x276808: 0x27a40558  addiu       $a0, $sp, 0x558
    ctx->pc = 0x276808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1368));
label_27680c:
    // 0x27680c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x27680cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_276810:
    // 0x276810: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x276810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276814:
    // 0x276814: 0x27a4055c  addiu       $a0, $sp, 0x55C
    ctx->pc = 0x276814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1372));
label_276818:
    // 0x276818: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x276818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_27681c:
    // 0x27681c: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x27681cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276820:
    // 0x276820: 0x27a40560  addiu       $a0, $sp, 0x560
    ctx->pc = 0x276820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1376));
label_276824:
    // 0x276824: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x276824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_276828:
    // 0x276828: 0x8e650024  lw          $a1, 0x24($s3)
    ctx->pc = 0x276828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_27682c:
    // 0x27682c: 0x27a40564  addiu       $a0, $sp, 0x564
    ctx->pc = 0x27682cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1380));
label_276830:
    // 0x276830: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x276830u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_276834:
    // 0x276834: 0xc6600028  lwc1        $f0, 0x28($s3)
    ctx->pc = 0x276834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276838:
    // 0x276838: 0x27a40568  addiu       $a0, $sp, 0x568
    ctx->pc = 0x276838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1384));
label_27683c:
    // 0x27683c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x27683cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_276840:
    // 0x276840: 0x8e64002c  lw          $a0, 0x2C($s3)
    ctx->pc = 0x276840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_276844:
    // 0x276844: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x276844u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
label_276848:
    // 0x276848: 0xc6600030  lwc1        $f0, 0x30($s3)
    ctx->pc = 0x276848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27684c:
    // 0x27684c: 0x27a40570  addiu       $a0, $sp, 0x570
    ctx->pc = 0x27684cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1392));
label_276850:
    // 0x276850: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x276850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_276854:
    // 0x276854: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x276854u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_276858:
    // 0x276858: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x276858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_27685c:
    // 0x27685c: 0x26520003  addiu       $s2, $s2, 0x3
    ctx->pc = 0x27685cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
label_276860:
    // 0x276860: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x276860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_276864:
    // 0x276864: 0x1000fade  b           . + 4 + (-0x522 << 2)
label_276868:
    if (ctx->pc == 0x276868u) {
        ctx->pc = 0x276868u;
            // 0x276868: 0xaea30000  sw          $v1, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x27686Cu;
        goto label_27686c;
    }
    ctx->pc = 0x276864u;
    {
        const bool branch_taken_0x276864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276864u;
            // 0x276868: 0xaea30000  sw          $v1, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276864) {
            ctx->pc = 0x2753E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2753e0;
        }
    }
    ctx->pc = 0x27686Cu;
label_27686c:
    // 0x27686c: 0x0  nop
    ctx->pc = 0x27686cu;
    // NOP
label_276870:
    // 0x276870: 0x92470001  lbu         $a3, 0x1($s2)
    ctx->pc = 0x276870u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_276874:
    // 0x276874: 0x92460002  lbu         $a2, 0x2($s2)
    ctx->pc = 0x276874u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_276878:
    // 0x276878: 0x27a50540  addiu       $a1, $sp, 0x540
    ctx->pc = 0x276878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
label_27687c:
    // 0x27687c: 0x92440003  lbu         $a0, 0x3($s2)
    ctx->pc = 0x27687cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_276880:
    // 0x276880: 0x92430004  lbu         $v1, 0x4($s2)
    ctx->pc = 0x276880u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_276884:
    // 0x276884: 0x73e00  sll         $a3, $a3, 24
    ctx->pc = 0x276884u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
label_276888:
    // 0x276888: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x276888u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_27688c:
    // 0x27688c: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x27688cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_276890:
    // 0x276890: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x276890u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_276894:
    // 0x276894: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x276894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_276898:
    // 0x276898: 0x12650027  beq         $s3, $a1, . + 4 + (0x27 << 2)
label_27689c:
    if (ctx->pc == 0x27689Cu) {
        ctx->pc = 0x27689Cu;
            // 0x27689c: 0x643021  addu        $a2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->pc = 0x2768A0u;
        goto label_2768a0;
    }
    ctx->pc = 0x276898u;
    {
        const bool branch_taken_0x276898 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 5));
        ctx->pc = 0x27689Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276898u;
            // 0x27689c: 0x643021  addu        $a2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276898) {
            ctx->pc = 0x276938u;
            goto label_276938;
        }
    }
    ctx->pc = 0x2768A0u;
label_2768a0:
    // 0x2768a0: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2768a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2768a4:
    // 0x2768a4: 0x27a30544  addiu       $v1, $sp, 0x544
    ctx->pc = 0x2768a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1348));
label_2768a8:
    // 0x2768a8: 0xe7a00540  swc1        $f0, 0x540($sp)
    ctx->pc = 0x2768a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1344), bits); }
label_2768ac:
    // 0x2768ac: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x2768acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2768b0:
    // 0x2768b0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2768b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2768b4:
    // 0x2768b4: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x2768b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2768b8:
    // 0x2768b8: 0x27a30548  addiu       $v1, $sp, 0x548
    ctx->pc = 0x2768b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1352));
label_2768bc:
    // 0x2768bc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2768bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2768c0:
    // 0x2768c0: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x2768c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2768c4:
    // 0x2768c4: 0x27a3054c  addiu       $v1, $sp, 0x54C
    ctx->pc = 0x2768c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1356));
label_2768c8:
    // 0x2768c8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2768c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2768cc:
    // 0x2768cc: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x2768ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2768d0:
    // 0x2768d0: 0x27a30550  addiu       $v1, $sp, 0x550
    ctx->pc = 0x2768d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1360));
label_2768d4:
    // 0x2768d4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2768d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2768d8:
    // 0x2768d8: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x2768d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2768dc:
    // 0x2768dc: 0x27a30554  addiu       $v1, $sp, 0x554
    ctx->pc = 0x2768dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1364));
label_2768e0:
    // 0x2768e0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2768e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2768e4:
    // 0x2768e4: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x2768e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2768e8:
    // 0x2768e8: 0x27a30558  addiu       $v1, $sp, 0x558
    ctx->pc = 0x2768e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1368));
label_2768ec:
    // 0x2768ec: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2768ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2768f0:
    // 0x2768f0: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x2768f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2768f4:
    // 0x2768f4: 0x27a3055c  addiu       $v1, $sp, 0x55C
    ctx->pc = 0x2768f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1372));
label_2768f8:
    // 0x2768f8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2768f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2768fc:
    // 0x2768fc: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x2768fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276900:
    // 0x276900: 0x27a30560  addiu       $v1, $sp, 0x560
    ctx->pc = 0x276900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1376));
label_276904:
    // 0x276904: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x276904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_276908:
    // 0x276908: 0x8e640024  lw          $a0, 0x24($s3)
    ctx->pc = 0x276908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_27690c:
    // 0x27690c: 0x27a30564  addiu       $v1, $sp, 0x564
    ctx->pc = 0x27690cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1380));
label_276910:
    // 0x276910: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x276910u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_276914:
    // 0x276914: 0xc6600028  lwc1        $f0, 0x28($s3)
    ctx->pc = 0x276914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276918:
    // 0x276918: 0x27a30568  addiu       $v1, $sp, 0x568
    ctx->pc = 0x276918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1384));
label_27691c:
    // 0x27691c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x27691cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_276920:
    // 0x276920: 0x8e63002c  lw          $v1, 0x2C($s3)
    ctx->pc = 0x276920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_276924:
    // 0x276924: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x276924u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_276928:
    // 0x276928: 0xc6600030  lwc1        $f0, 0x30($s3)
    ctx->pc = 0x276928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27692c:
    // 0x27692c: 0x27a30570  addiu       $v1, $sp, 0x570
    ctx->pc = 0x27692cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1392));
label_276930:
    // 0x276930: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x276930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_276934:
    // 0x276934: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x276934u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_276938:
    // 0x276938: 0xaea60000  sw          $a2, 0x0($s5)
    ctx->pc = 0x276938u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 6));
label_27693c:
    // 0x27693c: 0x1000faa8  b           . + 4 + (-0x558 << 2)
label_276940:
    if (ctx->pc == 0x276940u) {
        ctx->pc = 0x276940u;
            // 0x276940: 0x26520005  addiu       $s2, $s2, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
        ctx->pc = 0x276944u;
        goto label_276944;
    }
    ctx->pc = 0x27693Cu;
    {
        const bool branch_taken_0x27693c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27693Cu;
            // 0x276940: 0x26520005  addiu       $s2, $s2, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27693c) {
            ctx->pc = 0x2753E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2753e0;
        }
    }
    ctx->pc = 0x276944u;
label_276944:
    // 0x276944: 0x0  nop
    ctx->pc = 0x276944u;
    // NOP
label_276948:
    // 0x276948: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x276948u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_27694c:
    // 0x27694c: 0x2463ffa0  addiu       $v1, $v1, -0x60
    ctx->pc = 0x27694cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967200));
label_276950:
    // 0x276950: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x276950u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_276954:
    // 0x276954: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x276954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_276958:
    // 0x276958: 0xac640570  sw          $a0, 0x570($v1)
    ctx->pc = 0x276958u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1392), GPR_U32(ctx, 4));
label_27695c:
    // 0x27695c: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x27695cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_276960:
    // 0x276960: 0x27a30570  addiu       $v1, $sp, 0x570
    ctx->pc = 0x276960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1392));
label_276964:
    // 0x276964: 0x27a60540  addiu       $a2, $sp, 0x540
    ctx->pc = 0x276964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
label_276968:
    // 0x276968: 0x12660027  beq         $s3, $a2, . + 4 + (0x27 << 2)
label_27696c:
    if (ctx->pc == 0x27696Cu) {
        ctx->pc = 0x27696Cu;
            // 0x27696c: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x276970u;
        goto label_276970;
    }
    ctx->pc = 0x276968u;
    {
        const bool branch_taken_0x276968 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 6));
        ctx->pc = 0x27696Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276968u;
            // 0x27696c: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276968) {
            ctx->pc = 0x276A08u;
            goto label_276a08;
        }
    }
    ctx->pc = 0x276970u;
label_276970:
    // 0x276970: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x276970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276974:
    // 0x276974: 0x27a40544  addiu       $a0, $sp, 0x544
    ctx->pc = 0x276974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1348));
label_276978:
    // 0x276978: 0xe7a00540  swc1        $f0, 0x540($sp)
    ctx->pc = 0x276978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1344), bits); }
label_27697c:
    // 0x27697c: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x27697cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276980:
    // 0x276980: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x276980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_276984:
    // 0x276984: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x276984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276988:
    // 0x276988: 0x27a40548  addiu       $a0, $sp, 0x548
    ctx->pc = 0x276988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1352));
label_27698c:
    // 0x27698c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x27698cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_276990:
    // 0x276990: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x276990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276994:
    // 0x276994: 0x27a4054c  addiu       $a0, $sp, 0x54C
    ctx->pc = 0x276994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1356));
label_276998:
    // 0x276998: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x276998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_27699c:
    // 0x27699c: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x27699cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2769a0:
    // 0x2769a0: 0x27a40550  addiu       $a0, $sp, 0x550
    ctx->pc = 0x2769a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1360));
label_2769a4:
    // 0x2769a4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2769a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_2769a8:
    // 0x2769a8: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x2769a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2769ac:
    // 0x2769ac: 0x27a40554  addiu       $a0, $sp, 0x554
    ctx->pc = 0x2769acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1364));
label_2769b0:
    // 0x2769b0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2769b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_2769b4:
    // 0x2769b4: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x2769b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2769b8:
    // 0x2769b8: 0x27a40558  addiu       $a0, $sp, 0x558
    ctx->pc = 0x2769b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1368));
label_2769bc:
    // 0x2769bc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2769bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_2769c0:
    // 0x2769c0: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x2769c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2769c4:
    // 0x2769c4: 0x27a4055c  addiu       $a0, $sp, 0x55C
    ctx->pc = 0x2769c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1372));
label_2769c8:
    // 0x2769c8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2769c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_2769cc:
    // 0x2769cc: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x2769ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2769d0:
    // 0x2769d0: 0x27a40560  addiu       $a0, $sp, 0x560
    ctx->pc = 0x2769d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1376));
label_2769d4:
    // 0x2769d4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2769d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_2769d8:
    // 0x2769d8: 0x8e650024  lw          $a1, 0x24($s3)
    ctx->pc = 0x2769d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_2769dc:
    // 0x2769dc: 0x27a40564  addiu       $a0, $sp, 0x564
    ctx->pc = 0x2769dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1380));
label_2769e0:
    // 0x2769e0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2769e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_2769e4:
    // 0x2769e4: 0xc6600028  lwc1        $f0, 0x28($s3)
    ctx->pc = 0x2769e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2769e8:
    // 0x2769e8: 0x27a40568  addiu       $a0, $sp, 0x568
    ctx->pc = 0x2769e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1384));
label_2769ec:
    // 0x2769ec: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2769ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_2769f0:
    // 0x2769f0: 0x8e64002c  lw          $a0, 0x2C($s3)
    ctx->pc = 0x2769f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_2769f4:
    // 0x2769f4: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x2769f4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
label_2769f8:
    // 0x2769f8: 0xc6600030  lwc1        $f0, 0x30($s3)
    ctx->pc = 0x2769f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2769fc:
    // 0x2769fc: 0x27a40570  addiu       $a0, $sp, 0x570
    ctx->pc = 0x2769fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1392));
label_276a00:
    // 0x276a00: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x276a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_276a04:
    // 0x276a04: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x276a04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_276a08:
    // 0x276a08: 0x27a40570  addiu       $a0, $sp, 0x570
    ctx->pc = 0x276a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1392));
label_276a0c:
    // 0x276a0c: 0x1000fa74  b           . + 4 + (-0x58C << 2)
label_276a10:
    if (ctx->pc == 0x276A10u) {
        ctx->pc = 0x276A10u;
            // 0x276a10: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x276A14u;
        goto label_276a14;
    }
    ctx->pc = 0x276A0Cu;
    {
        const bool branch_taken_0x276a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276A0Cu;
            // 0x276a10: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276a0c) {
            ctx->pc = 0x2753E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2753e0;
        }
    }
    ctx->pc = 0x276A14u;
label_276a14:
    // 0x276a14: 0x0  nop
    ctx->pc = 0x276a14u;
    // NOP
label_276a18:
    // 0x276a18: 0x92450001  lbu         $a1, 0x1($s2)
    ctx->pc = 0x276a18u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_276a1c:
    // 0x276a1c: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x276a1cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_276a20:
    // 0x276a20: 0x2463ff9c  addiu       $v1, $v1, -0x64
    ctx->pc = 0x276a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967196));
label_276a24:
    // 0x276a24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x276a24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_276a28:
    // 0x276a28: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x276a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_276a2c:
    // 0x276a2c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x276a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_276a30:
    // 0x276a30: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x276a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_276a34:
    // 0x276a34: 0x26520003  addiu       $s2, $s2, 0x3
    ctx->pc = 0x276a34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
label_276a38:
    // 0x276a38: 0x1000ffc9  b           . + 4 + (-0x37 << 2)
label_276a3c:
    if (ctx->pc == 0x276A3Cu) {
        ctx->pc = 0x276A3Cu;
            // 0x276a3c: 0xac640570  sw          $a0, 0x570($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1392), GPR_U32(ctx, 4));
        ctx->pc = 0x276A40u;
        goto label_276a40;
    }
    ctx->pc = 0x276A38u;
    {
        const bool branch_taken_0x276a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276A38u;
            // 0x276a3c: 0xac640570  sw          $a0, 0x570($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1392), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276a38) {
            ctx->pc = 0x276960u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_276960;
        }
    }
    ctx->pc = 0x276A40u;
label_276a40:
    // 0x276a40: 0x92470001  lbu         $a3, 0x1($s2)
    ctx->pc = 0x276a40u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_276a44:
    // 0x276a44: 0x92460002  lbu         $a2, 0x2($s2)
    ctx->pc = 0x276a44u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_276a48:
    // 0x276a48: 0x2463ff98  addiu       $v1, $v1, -0x68
    ctx->pc = 0x276a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967192));
label_276a4c:
    // 0x276a4c: 0x92450003  lbu         $a1, 0x3($s2)
    ctx->pc = 0x276a4cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_276a50:
    // 0x276a50: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x276a50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_276a54:
    // 0x276a54: 0x92440004  lbu         $a0, 0x4($s2)
    ctx->pc = 0x276a54u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_276a58:
    // 0x276a58: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x276a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_276a5c:
    // 0x276a5c: 0x73e00  sll         $a3, $a3, 24
    ctx->pc = 0x276a5cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
label_276a60:
    // 0x276a60: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x276a60u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_276a64:
    // 0x276a64: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x276a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_276a68:
    // 0x276a68: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x276a68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_276a6c:
    // 0x276a6c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x276a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_276a70:
    // 0x276a70: 0x26520005  addiu       $s2, $s2, 0x5
    ctx->pc = 0x276a70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
label_276a74:
    // 0x276a74: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x276a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_276a78:
    // 0x276a78: 0x1000ffb9  b           . + 4 + (-0x47 << 2)
label_276a7c:
    if (ctx->pc == 0x276A7Cu) {
        ctx->pc = 0x276A7Cu;
            // 0x276a7c: 0xac640570  sw          $a0, 0x570($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1392), GPR_U32(ctx, 4));
        ctx->pc = 0x276A80u;
        goto label_276a80;
    }
    ctx->pc = 0x276A78u;
    {
        const bool branch_taken_0x276a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276A78u;
            // 0x276a7c: 0xac640570  sw          $a0, 0x570($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1392), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276a78) {
            ctx->pc = 0x276960u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_276960;
        }
    }
    ctx->pc = 0x276A80u;
label_276a80:
    // 0x276a80: 0x27a40580  addiu       $a0, $sp, 0x580
    ctx->pc = 0x276a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1408));
label_276a84:
    // 0x276a84: 0x27a502e0  addiu       $a1, $sp, 0x2E0
    ctx->pc = 0x276a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_276a88:
    // 0x276a88: 0xc0a7214  jal         func_29C850
label_276a8c:
    if (ctx->pc == 0x276A8Cu) {
        ctx->pc = 0x276A8Cu;
            // 0x276a8c: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->pc = 0x276A90u;
        goto label_276a90;
    }
    ctx->pc = 0x276A88u;
    SET_GPR_U32(ctx, 31, 0x276A90u);
    ctx->pc = 0x276A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276A88u;
            // 0x276a8c: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C850u;
    if (runtime->hasFunction(0x29C850u)) {
        auto targetFn = runtime->lookupFunction(0x29C850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276A90u; }
        if (ctx->pc != 0x276A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C850_0x29c850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276A90u; }
        if (ctx->pc != 0x276A90u) { return; }
    }
    ctx->pc = 0x276A90u;
label_276a90:
    // 0x276a90: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x276a90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_276a94:
    // 0x276a94: 0x27a40580  addiu       $a0, $sp, 0x580
    ctx->pc = 0x276a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1408));
label_276a98:
    // 0x276a98: 0xc0a7fc0  jal         func_29FF00
label_276a9c:
    if (ctx->pc == 0x276A9Cu) {
        ctx->pc = 0x276A9Cu;
            // 0x276a9c: 0x24a5d140  addiu       $a1, $a1, -0x2EC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955328));
        ctx->pc = 0x276AA0u;
        goto label_276aa0;
    }
    ctx->pc = 0x276A98u;
    SET_GPR_U32(ctx, 31, 0x276AA0u);
    ctx->pc = 0x276A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276A98u;
            // 0x276a9c: 0x24a5d140  addiu       $a1, $a1, -0x2EC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FF00u;
    if (runtime->hasFunction(0x29FF00u)) {
        auto targetFn = runtime->lookupFunction(0x29FF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276AA0u; }
        if (ctx->pc != 0x276AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FF00_0x29ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276AA0u; }
        if (ctx->pc != 0x276AA0u) { return; }
    }
    ctx->pc = 0x276AA0u;
label_276aa0:
    // 0x276aa0: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x276aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_276aa4:
    // 0x276aa4: 0x3c021298  lui         $v0, 0x1298
    ctx->pc = 0x276aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4760 << 16));
label_276aa8:
    // 0x276aa8: 0x8c24ea18  lw          $a0, -0x15E8($at)
    ctx->pc = 0x276aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961688)));
label_276aac:
    // 0x276aac: 0x3c080060  lui         $t0, 0x60
    ctx->pc = 0x276aacu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)96 << 16));
label_276ab0:
    // 0x276ab0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x276ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_276ab4:
    // 0x276ab4: 0x27a702e0  addiu       $a3, $sp, 0x2E0
    ctx->pc = 0x276ab4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_276ab8:
    // 0x276ab8: 0x3446fedd  ori         $a2, $v0, 0xFEDD
    ctx->pc = 0x276ab8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65245);
label_276abc:
    // 0x276abc: 0x2508d1e0  addiu       $t0, $t0, -0x2E20
    ctx->pc = 0x276abcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294955488));
label_276ac0:
    // 0x276ac0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x276ac0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_276ac4:
    // 0x276ac4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x276ac4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_276ac8:
    // 0x276ac8: 0x320f809  jalr        $t9
label_276acc:
    if (ctx->pc == 0x276ACCu) {
        ctx->pc = 0x276ACCu;
            // 0x276acc: 0x240901fa  addiu       $t1, $zero, 0x1FA (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 506));
        ctx->pc = 0x276AD0u;
        goto label_276ad0;
    }
    ctx->pc = 0x276AC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x276AD0u);
        ctx->pc = 0x276ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276AC8u;
            // 0x276acc: 0x240901fa  addiu       $t1, $zero, 0x1FA (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 506));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x276AD0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x276AD0u; }
            if (ctx->pc != 0x276AD0u) { return; }
        }
        }
    }
    ctx->pc = 0x276AD0u;
label_276ad0:
    // 0x276ad0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x276ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_276ad4:
    // 0x276ad4: 0x27a40580  addiu       $a0, $sp, 0x580
    ctx->pc = 0x276ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1408));
label_276ad8:
    // 0x276ad8: 0x2442e030  addiu       $v0, $v0, -0x1FD0
    ctx->pc = 0x276ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959152));
label_276adc:
    // 0x276adc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x276adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_276ae0:
    // 0x276ae0: 0xc0a7f78  jal         func_29FDE0
label_276ae4:
    if (ctx->pc == 0x276AE4u) {
        ctx->pc = 0x276AE4u;
            // 0x276ae4: 0xafa20580  sw          $v0, 0x580($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1408), GPR_U32(ctx, 2));
        ctx->pc = 0x276AE8u;
        goto label_276ae8;
    }
    ctx->pc = 0x276AE0u;
    SET_GPR_U32(ctx, 31, 0x276AE8u);
    ctx->pc = 0x276AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276AE0u;
            // 0x276ae4: 0xafa20580  sw          $v0, 0x580($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1408), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FDE0u;
    if (runtime->hasFunction(0x29FDE0u)) {
        auto targetFn = runtime->lookupFunction(0x29FDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276AE8u; }
        if (ctx->pc != 0x276AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FDE0_0x29fde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276AE8u; }
        if (ctx->pc != 0x276AE8u) { return; }
    }
    ctx->pc = 0x276AE8u;
label_276ae8:
    // 0x276ae8: 0x1000fa3d  b           . + 4 + (-0x5C3 << 2)
label_276aec:
    if (ctx->pc == 0x276AECu) {
        ctx->pc = 0x276AF0u;
        goto label_276af0;
    }
    ctx->pc = 0x276AE8u;
    {
        const bool branch_taken_0x276ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x276ae8) {
            ctx->pc = 0x2753E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2753e0;
        }
    }
    ctx->pc = 0x276AF0u;
label_276af0:
    // 0x276af0: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x276af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_276af4:
    // 0x276af4: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x276af4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_276af8:
    // 0x276af8: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x276af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_276afc:
    // 0x276afc: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x276afcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_276b00:
    // 0x276b00: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x276b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_276b04:
    // 0x276b04: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x276b04u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_276b08:
    // 0x276b08: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x276b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_276b0c:
    // 0x276b0c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x276b0cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_276b10:
    // 0x276b10: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x276b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_276b14:
    // 0x276b14: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x276b14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_276b18:
    // 0x276b18: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x276b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_276b1c:
    // 0x276b1c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x276b1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_276b20:
    // 0x276b20: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x276b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_276b24:
    // 0x276b24: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x276b24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_276b28:
    // 0x276b28: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x276b28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_276b2c:
    // 0x276b2c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x276b2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_276b30:
    // 0x276b30: 0x3e00008  jr          $ra
label_276b34:
    if (ctx->pc == 0x276B34u) {
        ctx->pc = 0x276B34u;
            // 0x276b34: 0x27bd0590  addiu       $sp, $sp, 0x590 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1424));
        ctx->pc = 0x276B38u;
        goto label_276b38;
    }
    ctx->pc = 0x276B30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276B30u;
            // 0x276b34: 0x27bd0590  addiu       $sp, $sp, 0x590 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1424));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x276B38u;
label_276b38:
    // 0x276b38: 0x0  nop
    ctx->pc = 0x276b38u;
    // NOP
label_276b3c:
    // 0x276b3c: 0x0  nop
    ctx->pc = 0x276b3cu;
    // NOP
}
