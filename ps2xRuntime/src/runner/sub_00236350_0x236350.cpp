#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00236350
// Address: 0x236350 - 0x236fa0
void sub_00236350_0x236350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236350_0x236350");
#endif

    switch (ctx->pc) {
        case 0x236350u: goto label_236350;
        case 0x236354u: goto label_236354;
        case 0x236358u: goto label_236358;
        case 0x23635cu: goto label_23635c;
        case 0x236360u: goto label_236360;
        case 0x236364u: goto label_236364;
        case 0x236368u: goto label_236368;
        case 0x23636cu: goto label_23636c;
        case 0x236370u: goto label_236370;
        case 0x236374u: goto label_236374;
        case 0x236378u: goto label_236378;
        case 0x23637cu: goto label_23637c;
        case 0x236380u: goto label_236380;
        case 0x236384u: goto label_236384;
        case 0x236388u: goto label_236388;
        case 0x23638cu: goto label_23638c;
        case 0x236390u: goto label_236390;
        case 0x236394u: goto label_236394;
        case 0x236398u: goto label_236398;
        case 0x23639cu: goto label_23639c;
        case 0x2363a0u: goto label_2363a0;
        case 0x2363a4u: goto label_2363a4;
        case 0x2363a8u: goto label_2363a8;
        case 0x2363acu: goto label_2363ac;
        case 0x2363b0u: goto label_2363b0;
        case 0x2363b4u: goto label_2363b4;
        case 0x2363b8u: goto label_2363b8;
        case 0x2363bcu: goto label_2363bc;
        case 0x2363c0u: goto label_2363c0;
        case 0x2363c4u: goto label_2363c4;
        case 0x2363c8u: goto label_2363c8;
        case 0x2363ccu: goto label_2363cc;
        case 0x2363d0u: goto label_2363d0;
        case 0x2363d4u: goto label_2363d4;
        case 0x2363d8u: goto label_2363d8;
        case 0x2363dcu: goto label_2363dc;
        case 0x2363e0u: goto label_2363e0;
        case 0x2363e4u: goto label_2363e4;
        case 0x2363e8u: goto label_2363e8;
        case 0x2363ecu: goto label_2363ec;
        case 0x2363f0u: goto label_2363f0;
        case 0x2363f4u: goto label_2363f4;
        case 0x2363f8u: goto label_2363f8;
        case 0x2363fcu: goto label_2363fc;
        case 0x236400u: goto label_236400;
        case 0x236404u: goto label_236404;
        case 0x236408u: goto label_236408;
        case 0x23640cu: goto label_23640c;
        case 0x236410u: goto label_236410;
        case 0x236414u: goto label_236414;
        case 0x236418u: goto label_236418;
        case 0x23641cu: goto label_23641c;
        case 0x236420u: goto label_236420;
        case 0x236424u: goto label_236424;
        case 0x236428u: goto label_236428;
        case 0x23642cu: goto label_23642c;
        case 0x236430u: goto label_236430;
        case 0x236434u: goto label_236434;
        case 0x236438u: goto label_236438;
        case 0x23643cu: goto label_23643c;
        case 0x236440u: goto label_236440;
        case 0x236444u: goto label_236444;
        case 0x236448u: goto label_236448;
        case 0x23644cu: goto label_23644c;
        case 0x236450u: goto label_236450;
        case 0x236454u: goto label_236454;
        case 0x236458u: goto label_236458;
        case 0x23645cu: goto label_23645c;
        case 0x236460u: goto label_236460;
        case 0x236464u: goto label_236464;
        case 0x236468u: goto label_236468;
        case 0x23646cu: goto label_23646c;
        case 0x236470u: goto label_236470;
        case 0x236474u: goto label_236474;
        case 0x236478u: goto label_236478;
        case 0x23647cu: goto label_23647c;
        case 0x236480u: goto label_236480;
        case 0x236484u: goto label_236484;
        case 0x236488u: goto label_236488;
        case 0x23648cu: goto label_23648c;
        case 0x236490u: goto label_236490;
        case 0x236494u: goto label_236494;
        case 0x236498u: goto label_236498;
        case 0x23649cu: goto label_23649c;
        case 0x2364a0u: goto label_2364a0;
        case 0x2364a4u: goto label_2364a4;
        case 0x2364a8u: goto label_2364a8;
        case 0x2364acu: goto label_2364ac;
        case 0x2364b0u: goto label_2364b0;
        case 0x2364b4u: goto label_2364b4;
        case 0x2364b8u: goto label_2364b8;
        case 0x2364bcu: goto label_2364bc;
        case 0x2364c0u: goto label_2364c0;
        case 0x2364c4u: goto label_2364c4;
        case 0x2364c8u: goto label_2364c8;
        case 0x2364ccu: goto label_2364cc;
        case 0x2364d0u: goto label_2364d0;
        case 0x2364d4u: goto label_2364d4;
        case 0x2364d8u: goto label_2364d8;
        case 0x2364dcu: goto label_2364dc;
        case 0x2364e0u: goto label_2364e0;
        case 0x2364e4u: goto label_2364e4;
        case 0x2364e8u: goto label_2364e8;
        case 0x2364ecu: goto label_2364ec;
        case 0x2364f0u: goto label_2364f0;
        case 0x2364f4u: goto label_2364f4;
        case 0x2364f8u: goto label_2364f8;
        case 0x2364fcu: goto label_2364fc;
        case 0x236500u: goto label_236500;
        case 0x236504u: goto label_236504;
        case 0x236508u: goto label_236508;
        case 0x23650cu: goto label_23650c;
        case 0x236510u: goto label_236510;
        case 0x236514u: goto label_236514;
        case 0x236518u: goto label_236518;
        case 0x23651cu: goto label_23651c;
        case 0x236520u: goto label_236520;
        case 0x236524u: goto label_236524;
        case 0x236528u: goto label_236528;
        case 0x23652cu: goto label_23652c;
        case 0x236530u: goto label_236530;
        case 0x236534u: goto label_236534;
        case 0x236538u: goto label_236538;
        case 0x23653cu: goto label_23653c;
        case 0x236540u: goto label_236540;
        case 0x236544u: goto label_236544;
        case 0x236548u: goto label_236548;
        case 0x23654cu: goto label_23654c;
        case 0x236550u: goto label_236550;
        case 0x236554u: goto label_236554;
        case 0x236558u: goto label_236558;
        case 0x23655cu: goto label_23655c;
        case 0x236560u: goto label_236560;
        case 0x236564u: goto label_236564;
        case 0x236568u: goto label_236568;
        case 0x23656cu: goto label_23656c;
        case 0x236570u: goto label_236570;
        case 0x236574u: goto label_236574;
        case 0x236578u: goto label_236578;
        case 0x23657cu: goto label_23657c;
        case 0x236580u: goto label_236580;
        case 0x236584u: goto label_236584;
        case 0x236588u: goto label_236588;
        case 0x23658cu: goto label_23658c;
        case 0x236590u: goto label_236590;
        case 0x236594u: goto label_236594;
        case 0x236598u: goto label_236598;
        case 0x23659cu: goto label_23659c;
        case 0x2365a0u: goto label_2365a0;
        case 0x2365a4u: goto label_2365a4;
        case 0x2365a8u: goto label_2365a8;
        case 0x2365acu: goto label_2365ac;
        case 0x2365b0u: goto label_2365b0;
        case 0x2365b4u: goto label_2365b4;
        case 0x2365b8u: goto label_2365b8;
        case 0x2365bcu: goto label_2365bc;
        case 0x2365c0u: goto label_2365c0;
        case 0x2365c4u: goto label_2365c4;
        case 0x2365c8u: goto label_2365c8;
        case 0x2365ccu: goto label_2365cc;
        case 0x2365d0u: goto label_2365d0;
        case 0x2365d4u: goto label_2365d4;
        case 0x2365d8u: goto label_2365d8;
        case 0x2365dcu: goto label_2365dc;
        case 0x2365e0u: goto label_2365e0;
        case 0x2365e4u: goto label_2365e4;
        case 0x2365e8u: goto label_2365e8;
        case 0x2365ecu: goto label_2365ec;
        case 0x2365f0u: goto label_2365f0;
        case 0x2365f4u: goto label_2365f4;
        case 0x2365f8u: goto label_2365f8;
        case 0x2365fcu: goto label_2365fc;
        case 0x236600u: goto label_236600;
        case 0x236604u: goto label_236604;
        case 0x236608u: goto label_236608;
        case 0x23660cu: goto label_23660c;
        case 0x236610u: goto label_236610;
        case 0x236614u: goto label_236614;
        case 0x236618u: goto label_236618;
        case 0x23661cu: goto label_23661c;
        case 0x236620u: goto label_236620;
        case 0x236624u: goto label_236624;
        case 0x236628u: goto label_236628;
        case 0x23662cu: goto label_23662c;
        case 0x236630u: goto label_236630;
        case 0x236634u: goto label_236634;
        case 0x236638u: goto label_236638;
        case 0x23663cu: goto label_23663c;
        case 0x236640u: goto label_236640;
        case 0x236644u: goto label_236644;
        case 0x236648u: goto label_236648;
        case 0x23664cu: goto label_23664c;
        case 0x236650u: goto label_236650;
        case 0x236654u: goto label_236654;
        case 0x236658u: goto label_236658;
        case 0x23665cu: goto label_23665c;
        case 0x236660u: goto label_236660;
        case 0x236664u: goto label_236664;
        case 0x236668u: goto label_236668;
        case 0x23666cu: goto label_23666c;
        case 0x236670u: goto label_236670;
        case 0x236674u: goto label_236674;
        case 0x236678u: goto label_236678;
        case 0x23667cu: goto label_23667c;
        case 0x236680u: goto label_236680;
        case 0x236684u: goto label_236684;
        case 0x236688u: goto label_236688;
        case 0x23668cu: goto label_23668c;
        case 0x236690u: goto label_236690;
        case 0x236694u: goto label_236694;
        case 0x236698u: goto label_236698;
        case 0x23669cu: goto label_23669c;
        case 0x2366a0u: goto label_2366a0;
        case 0x2366a4u: goto label_2366a4;
        case 0x2366a8u: goto label_2366a8;
        case 0x2366acu: goto label_2366ac;
        case 0x2366b0u: goto label_2366b0;
        case 0x2366b4u: goto label_2366b4;
        case 0x2366b8u: goto label_2366b8;
        case 0x2366bcu: goto label_2366bc;
        case 0x2366c0u: goto label_2366c0;
        case 0x2366c4u: goto label_2366c4;
        case 0x2366c8u: goto label_2366c8;
        case 0x2366ccu: goto label_2366cc;
        case 0x2366d0u: goto label_2366d0;
        case 0x2366d4u: goto label_2366d4;
        case 0x2366d8u: goto label_2366d8;
        case 0x2366dcu: goto label_2366dc;
        case 0x2366e0u: goto label_2366e0;
        case 0x2366e4u: goto label_2366e4;
        case 0x2366e8u: goto label_2366e8;
        case 0x2366ecu: goto label_2366ec;
        case 0x2366f0u: goto label_2366f0;
        case 0x2366f4u: goto label_2366f4;
        case 0x2366f8u: goto label_2366f8;
        case 0x2366fcu: goto label_2366fc;
        case 0x236700u: goto label_236700;
        case 0x236704u: goto label_236704;
        case 0x236708u: goto label_236708;
        case 0x23670cu: goto label_23670c;
        case 0x236710u: goto label_236710;
        case 0x236714u: goto label_236714;
        case 0x236718u: goto label_236718;
        case 0x23671cu: goto label_23671c;
        case 0x236720u: goto label_236720;
        case 0x236724u: goto label_236724;
        case 0x236728u: goto label_236728;
        case 0x23672cu: goto label_23672c;
        case 0x236730u: goto label_236730;
        case 0x236734u: goto label_236734;
        case 0x236738u: goto label_236738;
        case 0x23673cu: goto label_23673c;
        case 0x236740u: goto label_236740;
        case 0x236744u: goto label_236744;
        case 0x236748u: goto label_236748;
        case 0x23674cu: goto label_23674c;
        case 0x236750u: goto label_236750;
        case 0x236754u: goto label_236754;
        case 0x236758u: goto label_236758;
        case 0x23675cu: goto label_23675c;
        case 0x236760u: goto label_236760;
        case 0x236764u: goto label_236764;
        case 0x236768u: goto label_236768;
        case 0x23676cu: goto label_23676c;
        case 0x236770u: goto label_236770;
        case 0x236774u: goto label_236774;
        case 0x236778u: goto label_236778;
        case 0x23677cu: goto label_23677c;
        case 0x236780u: goto label_236780;
        case 0x236784u: goto label_236784;
        case 0x236788u: goto label_236788;
        case 0x23678cu: goto label_23678c;
        case 0x236790u: goto label_236790;
        case 0x236794u: goto label_236794;
        case 0x236798u: goto label_236798;
        case 0x23679cu: goto label_23679c;
        case 0x2367a0u: goto label_2367a0;
        case 0x2367a4u: goto label_2367a4;
        case 0x2367a8u: goto label_2367a8;
        case 0x2367acu: goto label_2367ac;
        case 0x2367b0u: goto label_2367b0;
        case 0x2367b4u: goto label_2367b4;
        case 0x2367b8u: goto label_2367b8;
        case 0x2367bcu: goto label_2367bc;
        case 0x2367c0u: goto label_2367c0;
        case 0x2367c4u: goto label_2367c4;
        case 0x2367c8u: goto label_2367c8;
        case 0x2367ccu: goto label_2367cc;
        case 0x2367d0u: goto label_2367d0;
        case 0x2367d4u: goto label_2367d4;
        case 0x2367d8u: goto label_2367d8;
        case 0x2367dcu: goto label_2367dc;
        case 0x2367e0u: goto label_2367e0;
        case 0x2367e4u: goto label_2367e4;
        case 0x2367e8u: goto label_2367e8;
        case 0x2367ecu: goto label_2367ec;
        case 0x2367f0u: goto label_2367f0;
        case 0x2367f4u: goto label_2367f4;
        case 0x2367f8u: goto label_2367f8;
        case 0x2367fcu: goto label_2367fc;
        case 0x236800u: goto label_236800;
        case 0x236804u: goto label_236804;
        case 0x236808u: goto label_236808;
        case 0x23680cu: goto label_23680c;
        case 0x236810u: goto label_236810;
        case 0x236814u: goto label_236814;
        case 0x236818u: goto label_236818;
        case 0x23681cu: goto label_23681c;
        case 0x236820u: goto label_236820;
        case 0x236824u: goto label_236824;
        case 0x236828u: goto label_236828;
        case 0x23682cu: goto label_23682c;
        case 0x236830u: goto label_236830;
        case 0x236834u: goto label_236834;
        case 0x236838u: goto label_236838;
        case 0x23683cu: goto label_23683c;
        case 0x236840u: goto label_236840;
        case 0x236844u: goto label_236844;
        case 0x236848u: goto label_236848;
        case 0x23684cu: goto label_23684c;
        case 0x236850u: goto label_236850;
        case 0x236854u: goto label_236854;
        case 0x236858u: goto label_236858;
        case 0x23685cu: goto label_23685c;
        case 0x236860u: goto label_236860;
        case 0x236864u: goto label_236864;
        case 0x236868u: goto label_236868;
        case 0x23686cu: goto label_23686c;
        case 0x236870u: goto label_236870;
        case 0x236874u: goto label_236874;
        case 0x236878u: goto label_236878;
        case 0x23687cu: goto label_23687c;
        case 0x236880u: goto label_236880;
        case 0x236884u: goto label_236884;
        case 0x236888u: goto label_236888;
        case 0x23688cu: goto label_23688c;
        case 0x236890u: goto label_236890;
        case 0x236894u: goto label_236894;
        case 0x236898u: goto label_236898;
        case 0x23689cu: goto label_23689c;
        case 0x2368a0u: goto label_2368a0;
        case 0x2368a4u: goto label_2368a4;
        case 0x2368a8u: goto label_2368a8;
        case 0x2368acu: goto label_2368ac;
        case 0x2368b0u: goto label_2368b0;
        case 0x2368b4u: goto label_2368b4;
        case 0x2368b8u: goto label_2368b8;
        case 0x2368bcu: goto label_2368bc;
        case 0x2368c0u: goto label_2368c0;
        case 0x2368c4u: goto label_2368c4;
        case 0x2368c8u: goto label_2368c8;
        case 0x2368ccu: goto label_2368cc;
        case 0x2368d0u: goto label_2368d0;
        case 0x2368d4u: goto label_2368d4;
        case 0x2368d8u: goto label_2368d8;
        case 0x2368dcu: goto label_2368dc;
        case 0x2368e0u: goto label_2368e0;
        case 0x2368e4u: goto label_2368e4;
        case 0x2368e8u: goto label_2368e8;
        case 0x2368ecu: goto label_2368ec;
        case 0x2368f0u: goto label_2368f0;
        case 0x2368f4u: goto label_2368f4;
        case 0x2368f8u: goto label_2368f8;
        case 0x2368fcu: goto label_2368fc;
        case 0x236900u: goto label_236900;
        case 0x236904u: goto label_236904;
        case 0x236908u: goto label_236908;
        case 0x23690cu: goto label_23690c;
        case 0x236910u: goto label_236910;
        case 0x236914u: goto label_236914;
        case 0x236918u: goto label_236918;
        case 0x23691cu: goto label_23691c;
        case 0x236920u: goto label_236920;
        case 0x236924u: goto label_236924;
        case 0x236928u: goto label_236928;
        case 0x23692cu: goto label_23692c;
        case 0x236930u: goto label_236930;
        case 0x236934u: goto label_236934;
        case 0x236938u: goto label_236938;
        case 0x23693cu: goto label_23693c;
        case 0x236940u: goto label_236940;
        case 0x236944u: goto label_236944;
        case 0x236948u: goto label_236948;
        case 0x23694cu: goto label_23694c;
        case 0x236950u: goto label_236950;
        case 0x236954u: goto label_236954;
        case 0x236958u: goto label_236958;
        case 0x23695cu: goto label_23695c;
        case 0x236960u: goto label_236960;
        case 0x236964u: goto label_236964;
        case 0x236968u: goto label_236968;
        case 0x23696cu: goto label_23696c;
        case 0x236970u: goto label_236970;
        case 0x236974u: goto label_236974;
        case 0x236978u: goto label_236978;
        case 0x23697cu: goto label_23697c;
        case 0x236980u: goto label_236980;
        case 0x236984u: goto label_236984;
        case 0x236988u: goto label_236988;
        case 0x23698cu: goto label_23698c;
        case 0x236990u: goto label_236990;
        case 0x236994u: goto label_236994;
        case 0x236998u: goto label_236998;
        case 0x23699cu: goto label_23699c;
        case 0x2369a0u: goto label_2369a0;
        case 0x2369a4u: goto label_2369a4;
        case 0x2369a8u: goto label_2369a8;
        case 0x2369acu: goto label_2369ac;
        case 0x2369b0u: goto label_2369b0;
        case 0x2369b4u: goto label_2369b4;
        case 0x2369b8u: goto label_2369b8;
        case 0x2369bcu: goto label_2369bc;
        case 0x2369c0u: goto label_2369c0;
        case 0x2369c4u: goto label_2369c4;
        case 0x2369c8u: goto label_2369c8;
        case 0x2369ccu: goto label_2369cc;
        case 0x2369d0u: goto label_2369d0;
        case 0x2369d4u: goto label_2369d4;
        case 0x2369d8u: goto label_2369d8;
        case 0x2369dcu: goto label_2369dc;
        case 0x2369e0u: goto label_2369e0;
        case 0x2369e4u: goto label_2369e4;
        case 0x2369e8u: goto label_2369e8;
        case 0x2369ecu: goto label_2369ec;
        case 0x2369f0u: goto label_2369f0;
        case 0x2369f4u: goto label_2369f4;
        case 0x2369f8u: goto label_2369f8;
        case 0x2369fcu: goto label_2369fc;
        case 0x236a00u: goto label_236a00;
        case 0x236a04u: goto label_236a04;
        case 0x236a08u: goto label_236a08;
        case 0x236a0cu: goto label_236a0c;
        case 0x236a10u: goto label_236a10;
        case 0x236a14u: goto label_236a14;
        case 0x236a18u: goto label_236a18;
        case 0x236a1cu: goto label_236a1c;
        case 0x236a20u: goto label_236a20;
        case 0x236a24u: goto label_236a24;
        case 0x236a28u: goto label_236a28;
        case 0x236a2cu: goto label_236a2c;
        case 0x236a30u: goto label_236a30;
        case 0x236a34u: goto label_236a34;
        case 0x236a38u: goto label_236a38;
        case 0x236a3cu: goto label_236a3c;
        case 0x236a40u: goto label_236a40;
        case 0x236a44u: goto label_236a44;
        case 0x236a48u: goto label_236a48;
        case 0x236a4cu: goto label_236a4c;
        case 0x236a50u: goto label_236a50;
        case 0x236a54u: goto label_236a54;
        case 0x236a58u: goto label_236a58;
        case 0x236a5cu: goto label_236a5c;
        case 0x236a60u: goto label_236a60;
        case 0x236a64u: goto label_236a64;
        case 0x236a68u: goto label_236a68;
        case 0x236a6cu: goto label_236a6c;
        case 0x236a70u: goto label_236a70;
        case 0x236a74u: goto label_236a74;
        case 0x236a78u: goto label_236a78;
        case 0x236a7cu: goto label_236a7c;
        case 0x236a80u: goto label_236a80;
        case 0x236a84u: goto label_236a84;
        case 0x236a88u: goto label_236a88;
        case 0x236a8cu: goto label_236a8c;
        case 0x236a90u: goto label_236a90;
        case 0x236a94u: goto label_236a94;
        case 0x236a98u: goto label_236a98;
        case 0x236a9cu: goto label_236a9c;
        case 0x236aa0u: goto label_236aa0;
        case 0x236aa4u: goto label_236aa4;
        case 0x236aa8u: goto label_236aa8;
        case 0x236aacu: goto label_236aac;
        case 0x236ab0u: goto label_236ab0;
        case 0x236ab4u: goto label_236ab4;
        case 0x236ab8u: goto label_236ab8;
        case 0x236abcu: goto label_236abc;
        case 0x236ac0u: goto label_236ac0;
        case 0x236ac4u: goto label_236ac4;
        case 0x236ac8u: goto label_236ac8;
        case 0x236accu: goto label_236acc;
        case 0x236ad0u: goto label_236ad0;
        case 0x236ad4u: goto label_236ad4;
        case 0x236ad8u: goto label_236ad8;
        case 0x236adcu: goto label_236adc;
        case 0x236ae0u: goto label_236ae0;
        case 0x236ae4u: goto label_236ae4;
        case 0x236ae8u: goto label_236ae8;
        case 0x236aecu: goto label_236aec;
        case 0x236af0u: goto label_236af0;
        case 0x236af4u: goto label_236af4;
        case 0x236af8u: goto label_236af8;
        case 0x236afcu: goto label_236afc;
        case 0x236b00u: goto label_236b00;
        case 0x236b04u: goto label_236b04;
        case 0x236b08u: goto label_236b08;
        case 0x236b0cu: goto label_236b0c;
        case 0x236b10u: goto label_236b10;
        case 0x236b14u: goto label_236b14;
        case 0x236b18u: goto label_236b18;
        case 0x236b1cu: goto label_236b1c;
        case 0x236b20u: goto label_236b20;
        case 0x236b24u: goto label_236b24;
        case 0x236b28u: goto label_236b28;
        case 0x236b2cu: goto label_236b2c;
        case 0x236b30u: goto label_236b30;
        case 0x236b34u: goto label_236b34;
        case 0x236b38u: goto label_236b38;
        case 0x236b3cu: goto label_236b3c;
        case 0x236b40u: goto label_236b40;
        case 0x236b44u: goto label_236b44;
        case 0x236b48u: goto label_236b48;
        case 0x236b4cu: goto label_236b4c;
        case 0x236b50u: goto label_236b50;
        case 0x236b54u: goto label_236b54;
        case 0x236b58u: goto label_236b58;
        case 0x236b5cu: goto label_236b5c;
        case 0x236b60u: goto label_236b60;
        case 0x236b64u: goto label_236b64;
        case 0x236b68u: goto label_236b68;
        case 0x236b6cu: goto label_236b6c;
        case 0x236b70u: goto label_236b70;
        case 0x236b74u: goto label_236b74;
        case 0x236b78u: goto label_236b78;
        case 0x236b7cu: goto label_236b7c;
        case 0x236b80u: goto label_236b80;
        case 0x236b84u: goto label_236b84;
        case 0x236b88u: goto label_236b88;
        case 0x236b8cu: goto label_236b8c;
        case 0x236b90u: goto label_236b90;
        case 0x236b94u: goto label_236b94;
        case 0x236b98u: goto label_236b98;
        case 0x236b9cu: goto label_236b9c;
        case 0x236ba0u: goto label_236ba0;
        case 0x236ba4u: goto label_236ba4;
        case 0x236ba8u: goto label_236ba8;
        case 0x236bacu: goto label_236bac;
        case 0x236bb0u: goto label_236bb0;
        case 0x236bb4u: goto label_236bb4;
        case 0x236bb8u: goto label_236bb8;
        case 0x236bbcu: goto label_236bbc;
        case 0x236bc0u: goto label_236bc0;
        case 0x236bc4u: goto label_236bc4;
        case 0x236bc8u: goto label_236bc8;
        case 0x236bccu: goto label_236bcc;
        case 0x236bd0u: goto label_236bd0;
        case 0x236bd4u: goto label_236bd4;
        case 0x236bd8u: goto label_236bd8;
        case 0x236bdcu: goto label_236bdc;
        case 0x236be0u: goto label_236be0;
        case 0x236be4u: goto label_236be4;
        case 0x236be8u: goto label_236be8;
        case 0x236becu: goto label_236bec;
        case 0x236bf0u: goto label_236bf0;
        case 0x236bf4u: goto label_236bf4;
        case 0x236bf8u: goto label_236bf8;
        case 0x236bfcu: goto label_236bfc;
        case 0x236c00u: goto label_236c00;
        case 0x236c04u: goto label_236c04;
        case 0x236c08u: goto label_236c08;
        case 0x236c0cu: goto label_236c0c;
        case 0x236c10u: goto label_236c10;
        case 0x236c14u: goto label_236c14;
        case 0x236c18u: goto label_236c18;
        case 0x236c1cu: goto label_236c1c;
        case 0x236c20u: goto label_236c20;
        case 0x236c24u: goto label_236c24;
        case 0x236c28u: goto label_236c28;
        case 0x236c2cu: goto label_236c2c;
        case 0x236c30u: goto label_236c30;
        case 0x236c34u: goto label_236c34;
        case 0x236c38u: goto label_236c38;
        case 0x236c3cu: goto label_236c3c;
        case 0x236c40u: goto label_236c40;
        case 0x236c44u: goto label_236c44;
        case 0x236c48u: goto label_236c48;
        case 0x236c4cu: goto label_236c4c;
        case 0x236c50u: goto label_236c50;
        case 0x236c54u: goto label_236c54;
        case 0x236c58u: goto label_236c58;
        case 0x236c5cu: goto label_236c5c;
        case 0x236c60u: goto label_236c60;
        case 0x236c64u: goto label_236c64;
        case 0x236c68u: goto label_236c68;
        case 0x236c6cu: goto label_236c6c;
        case 0x236c70u: goto label_236c70;
        case 0x236c74u: goto label_236c74;
        case 0x236c78u: goto label_236c78;
        case 0x236c7cu: goto label_236c7c;
        case 0x236c80u: goto label_236c80;
        case 0x236c84u: goto label_236c84;
        case 0x236c88u: goto label_236c88;
        case 0x236c8cu: goto label_236c8c;
        case 0x236c90u: goto label_236c90;
        case 0x236c94u: goto label_236c94;
        case 0x236c98u: goto label_236c98;
        case 0x236c9cu: goto label_236c9c;
        case 0x236ca0u: goto label_236ca0;
        case 0x236ca4u: goto label_236ca4;
        case 0x236ca8u: goto label_236ca8;
        case 0x236cacu: goto label_236cac;
        case 0x236cb0u: goto label_236cb0;
        case 0x236cb4u: goto label_236cb4;
        case 0x236cb8u: goto label_236cb8;
        case 0x236cbcu: goto label_236cbc;
        case 0x236cc0u: goto label_236cc0;
        case 0x236cc4u: goto label_236cc4;
        case 0x236cc8u: goto label_236cc8;
        case 0x236cccu: goto label_236ccc;
        case 0x236cd0u: goto label_236cd0;
        case 0x236cd4u: goto label_236cd4;
        case 0x236cd8u: goto label_236cd8;
        case 0x236cdcu: goto label_236cdc;
        case 0x236ce0u: goto label_236ce0;
        case 0x236ce4u: goto label_236ce4;
        case 0x236ce8u: goto label_236ce8;
        case 0x236cecu: goto label_236cec;
        case 0x236cf0u: goto label_236cf0;
        case 0x236cf4u: goto label_236cf4;
        case 0x236cf8u: goto label_236cf8;
        case 0x236cfcu: goto label_236cfc;
        case 0x236d00u: goto label_236d00;
        case 0x236d04u: goto label_236d04;
        case 0x236d08u: goto label_236d08;
        case 0x236d0cu: goto label_236d0c;
        case 0x236d10u: goto label_236d10;
        case 0x236d14u: goto label_236d14;
        case 0x236d18u: goto label_236d18;
        case 0x236d1cu: goto label_236d1c;
        case 0x236d20u: goto label_236d20;
        case 0x236d24u: goto label_236d24;
        case 0x236d28u: goto label_236d28;
        case 0x236d2cu: goto label_236d2c;
        case 0x236d30u: goto label_236d30;
        case 0x236d34u: goto label_236d34;
        case 0x236d38u: goto label_236d38;
        case 0x236d3cu: goto label_236d3c;
        case 0x236d40u: goto label_236d40;
        case 0x236d44u: goto label_236d44;
        case 0x236d48u: goto label_236d48;
        case 0x236d4cu: goto label_236d4c;
        case 0x236d50u: goto label_236d50;
        case 0x236d54u: goto label_236d54;
        case 0x236d58u: goto label_236d58;
        case 0x236d5cu: goto label_236d5c;
        case 0x236d60u: goto label_236d60;
        case 0x236d64u: goto label_236d64;
        case 0x236d68u: goto label_236d68;
        case 0x236d6cu: goto label_236d6c;
        case 0x236d70u: goto label_236d70;
        case 0x236d74u: goto label_236d74;
        case 0x236d78u: goto label_236d78;
        case 0x236d7cu: goto label_236d7c;
        case 0x236d80u: goto label_236d80;
        case 0x236d84u: goto label_236d84;
        case 0x236d88u: goto label_236d88;
        case 0x236d8cu: goto label_236d8c;
        case 0x236d90u: goto label_236d90;
        case 0x236d94u: goto label_236d94;
        case 0x236d98u: goto label_236d98;
        case 0x236d9cu: goto label_236d9c;
        case 0x236da0u: goto label_236da0;
        case 0x236da4u: goto label_236da4;
        case 0x236da8u: goto label_236da8;
        case 0x236dacu: goto label_236dac;
        case 0x236db0u: goto label_236db0;
        case 0x236db4u: goto label_236db4;
        case 0x236db8u: goto label_236db8;
        case 0x236dbcu: goto label_236dbc;
        case 0x236dc0u: goto label_236dc0;
        case 0x236dc4u: goto label_236dc4;
        case 0x236dc8u: goto label_236dc8;
        case 0x236dccu: goto label_236dcc;
        case 0x236dd0u: goto label_236dd0;
        case 0x236dd4u: goto label_236dd4;
        case 0x236dd8u: goto label_236dd8;
        case 0x236ddcu: goto label_236ddc;
        case 0x236de0u: goto label_236de0;
        case 0x236de4u: goto label_236de4;
        case 0x236de8u: goto label_236de8;
        case 0x236decu: goto label_236dec;
        case 0x236df0u: goto label_236df0;
        case 0x236df4u: goto label_236df4;
        case 0x236df8u: goto label_236df8;
        case 0x236dfcu: goto label_236dfc;
        case 0x236e00u: goto label_236e00;
        case 0x236e04u: goto label_236e04;
        case 0x236e08u: goto label_236e08;
        case 0x236e0cu: goto label_236e0c;
        case 0x236e10u: goto label_236e10;
        case 0x236e14u: goto label_236e14;
        case 0x236e18u: goto label_236e18;
        case 0x236e1cu: goto label_236e1c;
        case 0x236e20u: goto label_236e20;
        case 0x236e24u: goto label_236e24;
        case 0x236e28u: goto label_236e28;
        case 0x236e2cu: goto label_236e2c;
        case 0x236e30u: goto label_236e30;
        case 0x236e34u: goto label_236e34;
        case 0x236e38u: goto label_236e38;
        case 0x236e3cu: goto label_236e3c;
        case 0x236e40u: goto label_236e40;
        case 0x236e44u: goto label_236e44;
        case 0x236e48u: goto label_236e48;
        case 0x236e4cu: goto label_236e4c;
        case 0x236e50u: goto label_236e50;
        case 0x236e54u: goto label_236e54;
        case 0x236e58u: goto label_236e58;
        case 0x236e5cu: goto label_236e5c;
        case 0x236e60u: goto label_236e60;
        case 0x236e64u: goto label_236e64;
        case 0x236e68u: goto label_236e68;
        case 0x236e6cu: goto label_236e6c;
        case 0x236e70u: goto label_236e70;
        case 0x236e74u: goto label_236e74;
        case 0x236e78u: goto label_236e78;
        case 0x236e7cu: goto label_236e7c;
        case 0x236e80u: goto label_236e80;
        case 0x236e84u: goto label_236e84;
        case 0x236e88u: goto label_236e88;
        case 0x236e8cu: goto label_236e8c;
        case 0x236e90u: goto label_236e90;
        case 0x236e94u: goto label_236e94;
        case 0x236e98u: goto label_236e98;
        case 0x236e9cu: goto label_236e9c;
        case 0x236ea0u: goto label_236ea0;
        case 0x236ea4u: goto label_236ea4;
        case 0x236ea8u: goto label_236ea8;
        case 0x236eacu: goto label_236eac;
        case 0x236eb0u: goto label_236eb0;
        case 0x236eb4u: goto label_236eb4;
        case 0x236eb8u: goto label_236eb8;
        case 0x236ebcu: goto label_236ebc;
        case 0x236ec0u: goto label_236ec0;
        case 0x236ec4u: goto label_236ec4;
        case 0x236ec8u: goto label_236ec8;
        case 0x236eccu: goto label_236ecc;
        case 0x236ed0u: goto label_236ed0;
        case 0x236ed4u: goto label_236ed4;
        case 0x236ed8u: goto label_236ed8;
        case 0x236edcu: goto label_236edc;
        case 0x236ee0u: goto label_236ee0;
        case 0x236ee4u: goto label_236ee4;
        case 0x236ee8u: goto label_236ee8;
        case 0x236eecu: goto label_236eec;
        case 0x236ef0u: goto label_236ef0;
        case 0x236ef4u: goto label_236ef4;
        case 0x236ef8u: goto label_236ef8;
        case 0x236efcu: goto label_236efc;
        case 0x236f00u: goto label_236f00;
        case 0x236f04u: goto label_236f04;
        case 0x236f08u: goto label_236f08;
        case 0x236f0cu: goto label_236f0c;
        case 0x236f10u: goto label_236f10;
        case 0x236f14u: goto label_236f14;
        case 0x236f18u: goto label_236f18;
        case 0x236f1cu: goto label_236f1c;
        case 0x236f20u: goto label_236f20;
        case 0x236f24u: goto label_236f24;
        case 0x236f28u: goto label_236f28;
        case 0x236f2cu: goto label_236f2c;
        case 0x236f30u: goto label_236f30;
        case 0x236f34u: goto label_236f34;
        case 0x236f38u: goto label_236f38;
        case 0x236f3cu: goto label_236f3c;
        case 0x236f40u: goto label_236f40;
        case 0x236f44u: goto label_236f44;
        case 0x236f48u: goto label_236f48;
        case 0x236f4cu: goto label_236f4c;
        case 0x236f50u: goto label_236f50;
        case 0x236f54u: goto label_236f54;
        case 0x236f58u: goto label_236f58;
        case 0x236f5cu: goto label_236f5c;
        case 0x236f60u: goto label_236f60;
        case 0x236f64u: goto label_236f64;
        case 0x236f68u: goto label_236f68;
        case 0x236f6cu: goto label_236f6c;
        case 0x236f70u: goto label_236f70;
        case 0x236f74u: goto label_236f74;
        case 0x236f78u: goto label_236f78;
        case 0x236f7cu: goto label_236f7c;
        case 0x236f80u: goto label_236f80;
        case 0x236f84u: goto label_236f84;
        case 0x236f88u: goto label_236f88;
        case 0x236f8cu: goto label_236f8c;
        case 0x236f90u: goto label_236f90;
        case 0x236f94u: goto label_236f94;
        case 0x236f98u: goto label_236f98;
        case 0x236f9cu: goto label_236f9c;
        default: break;
    }

    ctx->pc = 0x236350u;

label_236350:
    // 0x236350: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x236350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_236354:
    // 0x236354: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x236354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_236358:
    // 0x236358: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x236358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_23635c:
    // 0x23635c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x23635cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_236360:
    // 0x236360: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x236360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_236364:
    // 0x236364: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x236364u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_236368:
    // 0x236368: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x236368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_23636c:
    // 0x23636c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x23636cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_236370:
    // 0x236370: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x236370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_236374:
    // 0x236374: 0x24a5ea60  addiu       $a1, $a1, -0x15A0
    ctx->pc = 0x236374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
label_236378:
    // 0x236378: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x236378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_23637c:
    // 0x23637c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x23637cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_236380:
    // 0x236380: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x236380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_236384:
    // 0x236384: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x236384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_236388:
    // 0x236388: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x236388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_23638c:
    // 0x23638c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x23638cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_236390:
    // 0x236390: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x236390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_236394:
    // 0x236394: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x236394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_236398:
    // 0x236398: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x236398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_23639c:
    // 0x23639c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x23639cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2363a0:
    // 0x2363a0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2363a4:
    if (ctx->pc == 0x2363A4u) {
        ctx->pc = 0x2363A4u;
            // 0x2363a4: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2363A8u;
        goto label_2363a8;
    }
    ctx->pc = 0x2363A0u;
    {
        const bool branch_taken_0x2363a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2363A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2363A0u;
            // 0x2363a4: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2363a0) {
            ctx->pc = 0x2363DCu;
            goto label_2363dc;
        }
    }
    ctx->pc = 0x2363A8u;
label_2363a8:
    // 0x2363a8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2363a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2363ac:
    // 0x2363ac: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2363acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2363b0:
    // 0x2363b0: 0x2463ccf8  addiu       $v1, $v1, -0x3308
    ctx->pc = 0x2363b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954232));
label_2363b4:
    // 0x2363b4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2363b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2363b8:
    // 0x2363b8: 0x2442cd08  addiu       $v0, $v0, -0x32F8
    ctx->pc = 0x2363b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954248));
label_2363bc:
    // 0x2363bc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2363bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2363c0:
    // 0x2363c0: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x2363c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_2363c4:
    // 0x2363c4: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2363c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_2363c8:
    // 0x2363c8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2363c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_2363cc:
    // 0x2363cc: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2363ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_2363d0:
    // 0x2363d0: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x2363d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_2363d4:
    // 0x2363d4: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2363d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_2363d8:
    // 0x2363d8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2363d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_2363dc:
    // 0x2363dc: 0x8e70031c  lw          $s0, 0x31C($s3)
    ctx->pc = 0x2363dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 796)));
label_2363e0:
    // 0x2363e0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2363e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2363e4:
    // 0x2363e4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2363e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2363e8:
    // 0x2363e8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2363e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_2363ec:
    // 0x2363ec: 0xafa300b8  sw          $v1, 0xB8($sp)
    ctx->pc = 0x2363ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
label_2363f0:
    // 0x2363f0: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x2363f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_2363f4:
    // 0x2363f4: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2363f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_2363f8:
    // 0x2363f8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2363f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_2363fc:
    // 0x2363fc: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x2363fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_236400:
    // 0x236400: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x236400u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_236404:
    // 0x236404: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x236404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
label_236408:
    // 0x236408: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x236408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_23640c:
    // 0x23640c: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x23640cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_236410:
    // 0x236410: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x236410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_236414:
    // 0x236414: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x236414u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_236418:
    // 0x236418: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_23641c:
    if (ctx->pc == 0x23641Cu) {
        ctx->pc = 0x23641Cu;
            // 0x23641c: 0x27b100b0  addiu       $s1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x236420u;
        goto label_236420;
    }
    ctx->pc = 0x236418u;
    {
        const bool branch_taken_0x236418 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x23641Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236418u;
            // 0x23641c: 0x27b100b0  addiu       $s1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236418) {
            ctx->pc = 0x236428u;
            goto label_236428;
        }
    }
    ctx->pc = 0x236420u;
label_236420:
    // 0x236420: 0x10000005  b           . + 4 + (0x5 << 2)
label_236424:
    if (ctx->pc == 0x236424u) {
        ctx->pc = 0x236424u;
            // 0x236424: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x236428u;
        goto label_236428;
    }
    ctx->pc = 0x236420u;
    {
        const bool branch_taken_0x236420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236420u;
            // 0x236424: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236420) {
            ctx->pc = 0x236438u;
            goto label_236438;
        }
    }
    ctx->pc = 0x236428u;
label_236428:
    // 0x236428: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x236428u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23642c:
    // 0x23642c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x23642cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_236430:
    // 0x236430: 0x320f809  jalr        $t9
label_236434:
    if (ctx->pc == 0x236434u) {
        ctx->pc = 0x236438u;
        goto label_236438;
    }
    ctx->pc = 0x236430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x236438u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x236438u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x236438u; }
            if (ctx->pc != 0x236438u) { return; }
        }
        }
    }
    ctx->pc = 0x236438u;
label_236438:
    // 0x236438: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x236438u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_23643c:
    // 0x23643c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x23643cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_236440:
    // 0x236440: 0x2051025  or          $v0, $s0, $a1
    ctx->pc = 0x236440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 5));
label_236444:
    // 0x236444: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x236444u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_236448:
    // 0x236448: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x236448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23644c:
    // 0x23644c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23644cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_236450:
    // 0x236450: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x236450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_236454:
    // 0x236454: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x236454u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_236458:
    // 0x236458: 0x8e71031c  lw          $s1, 0x31C($s3)
    ctx->pc = 0x236458u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 796)));
label_23645c:
    // 0x23645c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x23645cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_236460:
    // 0x236460: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x236460u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_236464:
    // 0x236464: 0xafa500a8  sw          $a1, 0xA8($sp)
    ctx->pc = 0x236464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 5));
label_236468:
    // 0x236468: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x236468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_23646c:
    // 0x23646c: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x23646cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_236470:
    // 0x236470: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x236470u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_236474:
    // 0x236474: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x236474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
label_236478:
    // 0x236478: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x236478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_23647c:
    // 0x23647c: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x23647cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_236480:
    // 0x236480: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x236480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_236484:
    // 0x236484: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x236484u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_236488:
    // 0x236488: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_23648c:
    if (ctx->pc == 0x23648Cu) {
        ctx->pc = 0x23648Cu;
            // 0x23648c: 0x27b000a0  addiu       $s0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x236490u;
        goto label_236490;
    }
    ctx->pc = 0x236488u;
    {
        const bool branch_taken_0x236488 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x23648Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236488u;
            // 0x23648c: 0x27b000a0  addiu       $s0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236488) {
            ctx->pc = 0x236498u;
            goto label_236498;
        }
    }
    ctx->pc = 0x236490u;
label_236490:
    // 0x236490: 0x10000005  b           . + 4 + (0x5 << 2)
label_236494:
    if (ctx->pc == 0x236494u) {
        ctx->pc = 0x236494u;
            // 0x236494: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x236498u;
        goto label_236498;
    }
    ctx->pc = 0x236490u;
    {
        const bool branch_taken_0x236490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236490u;
            // 0x236494: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236490) {
            ctx->pc = 0x2364A8u;
            goto label_2364a8;
        }
    }
    ctx->pc = 0x236498u;
label_236498:
    // 0x236498: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x236498u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23649c:
    // 0x23649c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x23649cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2364a0:
    // 0x2364a0: 0x320f809  jalr        $t9
label_2364a4:
    if (ctx->pc == 0x2364A4u) {
        ctx->pc = 0x2364A8u;
        goto label_2364a8;
    }
    ctx->pc = 0x2364A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2364A8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2364A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2364A8u; }
            if (ctx->pc != 0x2364A8u) { return; }
        }
        }
    }
    ctx->pc = 0x2364A8u;
label_2364a8:
    // 0x2364a8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2364a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2364ac:
    // 0x2364ac: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2364acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2364b0:
    // 0x2364b0: 0x2221825  or          $v1, $s1, $v0
    ctx->pc = 0x2364b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_2364b4:
    // 0x2364b4: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2364b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_2364b8:
    // 0x2364b8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2364b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2364bc:
    // 0x2364bc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2364bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_2364c0:
    // 0x2364c0: 0x171940  sll         $v1, $s7, 5
    ctx->pc = 0x2364c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 5));
label_2364c4:
    // 0x2364c4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2364c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2364c8:
    // 0x2364c8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2364c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_2364cc:
    // 0x2364cc: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2364ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_2364d0:
    // 0x2364d0: 0xae06000c  sw          $a2, 0xC($s0)
    ctx->pc = 0x2364d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 6));
label_2364d4:
    // 0x2364d4: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x2364d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2364d8:
    // 0x2364d8: 0x8c95000c  lw          $s5, 0xC($a0)
    ctx->pc = 0x2364d8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2364dc:
    // 0x2364dc: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2364dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_2364e0:
    // 0x2364e0: 0x2a51821  addu        $v1, $s5, $a1
    ctx->pc = 0x2364e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
label_2364e4:
    // 0x2364e4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x2364e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2364e8:
    // 0x2364e8: 0x54200004  bnel        $at, $zero, . + 4 + (0x4 << 2)
label_2364ec:
    if (ctx->pc == 0x2364ECu) {
        ctx->pc = 0x2364ECu;
            // 0x2364ec: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x2364F0u;
        goto label_2364f0;
    }
    ctx->pc = 0x2364E8u;
    {
        const bool branch_taken_0x2364e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2364e8) {
            ctx->pc = 0x2364ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2364E8u;
            // 0x2364ec: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2364FCu;
            goto label_2364fc;
        }
    }
    ctx->pc = 0x2364F0u;
label_2364f0:
    // 0x2364f0: 0x10000006  b           . + 4 + (0x6 << 2)
label_2364f4:
    if (ctx->pc == 0x2364F4u) {
        ctx->pc = 0x2364F4u;
            // 0x2364f4: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x2364F8u;
        goto label_2364f8;
    }
    ctx->pc = 0x2364F0u;
    {
        const bool branch_taken_0x2364f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2364F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2364F0u;
            // 0x2364f4: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2364f0) {
            ctx->pc = 0x23650Cu;
            goto label_23650c;
        }
    }
    ctx->pc = 0x2364F8u;
label_2364f8:
    // 0x2364f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2364f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2364fc:
    // 0x2364fc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2364fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_236500:
    // 0x236500: 0x320f809  jalr        $t9
label_236504:
    if (ctx->pc == 0x236504u) {
        ctx->pc = 0x236508u;
        goto label_236508;
    }
    ctx->pc = 0x236500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x236508u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x236508u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x236508u; }
            if (ctx->pc != 0x236508u) { return; }
        }
        }
    }
    ctx->pc = 0x236508u;
label_236508:
    // 0x236508: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x236508u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23650c:
    // 0x23650c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23650cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_236510:
    // 0x236510: 0x171880  sll         $v1, $s7, 2
    ctx->pc = 0x236510u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
label_236514:
    // 0x236514: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x236514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_236518:
    // 0x236518: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x236518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_23651c:
    // 0x23651c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x23651cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_236520:
    // 0x236520: 0x8c96000c  lw          $s6, 0xC($a0)
    ctx->pc = 0x236520u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_236524:
    // 0x236524: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x236524u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_236528:
    // 0x236528: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x236528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_23652c:
    // 0x23652c: 0x2c51821  addu        $v1, $s6, $a1
    ctx->pc = 0x23652cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
label_236530:
    // 0x236530: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x236530u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_236534:
    // 0x236534: 0x54200004  bnel        $at, $zero, . + 4 + (0x4 << 2)
label_236538:
    if (ctx->pc == 0x236538u) {
        ctx->pc = 0x236538u;
            // 0x236538: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x23653Cu;
        goto label_23653c;
    }
    ctx->pc = 0x236534u;
    {
        const bool branch_taken_0x236534 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x236534) {
            ctx->pc = 0x236538u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x236534u;
            // 0x236538: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x236548u;
            goto label_236548;
        }
    }
    ctx->pc = 0x23653Cu;
label_23653c:
    // 0x23653c: 0x10000006  b           . + 4 + (0x6 << 2)
label_236540:
    if (ctx->pc == 0x236540u) {
        ctx->pc = 0x236540u;
            // 0x236540: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x236544u;
        goto label_236544;
    }
    ctx->pc = 0x23653Cu;
    {
        const bool branch_taken_0x23653c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23653Cu;
            // 0x236540: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23653c) {
            ctx->pc = 0x236558u;
            goto label_236558;
        }
    }
    ctx->pc = 0x236544u;
label_236544:
    // 0x236544: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x236544u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_236548:
    // 0x236548: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x236548u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_23654c:
    // 0x23654c: 0x320f809  jalr        $t9
label_236550:
    if (ctx->pc == 0x236550u) {
        ctx->pc = 0x236554u;
        goto label_236554;
    }
    ctx->pc = 0x23654Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x236554u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x236554u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x236554u; }
            if (ctx->pc != 0x236554u) { return; }
        }
        }
    }
    ctx->pc = 0x236554u;
label_236554:
    // 0x236554: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x236554u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236558:
    // 0x236558: 0x8e65006c  lw          $a1, 0x6C($s3)
    ctx->pc = 0x236558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_23655c:
    // 0x23655c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x23655cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_236560:
    // 0x236560: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x236560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_236564:
    // 0x236564: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x236564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_236568:
    // 0x236568: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x236568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23656c:
    // 0x23656c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x23656cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_236570:
    // 0x236570: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x236570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_236574:
    // 0x236574: 0x8c63ea64  lw          $v1, -0x159C($v1)
    ctx->pc = 0x236574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_236578:
    // 0x236578: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x236578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_23657c:
    // 0x23657c: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x23657cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
label_236580:
    // 0x236580: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x236580u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_236584:
    // 0x236584: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_236588:
    if (ctx->pc == 0x236588u) {
        ctx->pc = 0x236588u;
            // 0x236588: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x23658Cu;
        goto label_23658c;
    }
    ctx->pc = 0x236584u;
    {
        const bool branch_taken_0x236584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236584u;
            // 0x236588: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x236584) {
            ctx->pc = 0x2365B4u;
            goto label_2365b4;
        }
    }
    ctx->pc = 0x23658Cu;
label_23658c:
    // 0x23658c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x23658cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_236590:
    // 0x236590: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x236590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_236594:
    // 0x236594: 0x2442cd18  addiu       $v0, $v0, -0x32E8
    ctx->pc = 0x236594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954264));
label_236598:
    // 0x236598: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x236598u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_23659c:
    // 0x23659c: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x23659cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_2365a0:
    // 0x2365a0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2365a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_2365a4:
    // 0x2365a4: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2365a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_2365a8:
    // 0x2365a8: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x2365a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_2365ac:
    // 0x2365ac: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x2365acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_2365b0:
    // 0x2365b0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2365b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_2365b4:
    // 0x2365b4: 0x26f0ffff  addiu       $s0, $s7, -0x1
    ctx->pc = 0x2365b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_2365b8:
    // 0x2365b8: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x2365b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2365bc:
    // 0x2365bc: 0x6000012  bltz        $s0, . + 4 + (0x12 << 2)
label_2365c0:
    if (ctx->pc == 0x2365C0u) {
        ctx->pc = 0x2365C0u;
            // 0x2365c0: 0x2c0882d  daddu       $s1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2365C4u;
        goto label_2365c4;
    }
    ctx->pc = 0x2365BCu;
    {
        const bool branch_taken_0x2365bc = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2365C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2365BCu;
            // 0x2365c0: 0x2c0882d  daddu       $s1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2365bc) {
            ctx->pc = 0x236608u;
            goto label_236608;
        }
    }
    ctx->pc = 0x2365C4u;
label_2365c4:
    // 0x2365c4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2365c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2365c8:
    // 0x2365c8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2365c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2365cc:
    // 0x2365cc: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2365ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_2365d0:
    // 0x2365d0: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x2365d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_2365d4:
    // 0x2365d4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2365d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2365d8:
    // 0x2365d8: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x2365d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2365dc:
    // 0x2365dc: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x2365dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_2365e0:
    // 0x2365e0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2365e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2365e4:
    // 0x2365e4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2365e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2365e8:
    // 0x2365e8: 0x320f809  jalr        $t9
label_2365ec:
    if (ctx->pc == 0x2365ECu) {
        ctx->pc = 0x2365ECu;
            // 0x2365ec: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2365F0u;
        goto label_2365f0;
    }
    ctx->pc = 0x2365E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2365F0u);
        ctx->pc = 0x2365ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2365E8u;
            // 0x2365ec: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2365F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2365F0u; }
            if (ctx->pc != 0x2365F0u) { return; }
        }
        }
    }
    ctx->pc = 0x2365F0u;
label_2365f0:
    // 0x2365f0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2365f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2365f4:
    // 0x2365f4: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x2365f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_2365f8:
    // 0x2365f8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2365f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2365fc:
    // 0x2365fc: 0x601fff1  bgez        $s0, . + 4 + (-0xF << 2)
label_236600:
    if (ctx->pc == 0x236600u) {
        ctx->pc = 0x236600u;
            // 0x236600: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x236604u;
        goto label_236604;
    }
    ctx->pc = 0x2365FCu;
    {
        const bool branch_taken_0x2365fc = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x236600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2365FCu;
            // 0x236600: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2365fc) {
            ctx->pc = 0x2365C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2365c4;
        }
    }
    ctx->pc = 0x236604u;
label_236604:
    // 0x236604: 0x0  nop
    ctx->pc = 0x236604u;
    // NOP
label_236608:
    // 0x236608: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x236608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_23660c:
    // 0x23660c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23660cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_236610:
    // 0x236610: 0x8c63ea64  lw          $v1, -0x159C($v1)
    ctx->pc = 0x236610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_236614:
    // 0x236614: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x236614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_236618:
    // 0x236618: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x236618u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_23661c:
    // 0x23661c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x23661cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_236620:
    // 0x236620: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_236624:
    if (ctx->pc == 0x236624u) {
        ctx->pc = 0x236624u;
            // 0x236624: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x236628u;
        goto label_236628;
    }
    ctx->pc = 0x236620u;
    {
        const bool branch_taken_0x236620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236620u;
            // 0x236624: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236620) {
            ctx->pc = 0x236650u;
            goto label_236650;
        }
    }
    ctx->pc = 0x236628u;
label_236628:
    // 0x236628: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x236628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_23662c:
    // 0x23662c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x23662cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_236630:
    // 0x236630: 0x2442cd28  addiu       $v0, $v0, -0x32D8
    ctx->pc = 0x236630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954280));
label_236634:
    // 0x236634: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x236634u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_236638:
    // 0x236638: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x236638u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_23663c:
    // 0x23663c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x23663cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_236640:
    // 0x236640: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x236640u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_236644:
    // 0x236644: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x236644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_236648:
    // 0x236648: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x236648u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_23664c:
    // 0x23664c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x23664cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_236650:
    // 0x236650: 0x8e640054  lw          $a0, 0x54($s3)
    ctx->pc = 0x236650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_236654:
    // 0x236654: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x236654u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_236658:
    // 0x236658: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x236658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_23665c:
    // 0x23665c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x23665cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_236660:
    // 0x236660: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x236660u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_236664:
    // 0x236664: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x236664u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_236668:
    // 0x236668: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x236668u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_23666c:
    // 0x23666c: 0x320f809  jalr        $t9
label_236670:
    if (ctx->pc == 0x236670u) {
        ctx->pc = 0x236670u;
            // 0x236670: 0x27a900a0  addiu       $t1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x236674u;
        goto label_236674;
    }
    ctx->pc = 0x23666Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x236674u);
        ctx->pc = 0x236670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23666Cu;
            // 0x236670: 0x27a900a0  addiu       $t1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x236674u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x236674u; }
            if (ctx->pc != 0x236674u) { return; }
        }
        }
    }
    ctx->pc = 0x236674u;
label_236674:
    // 0x236674: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x236674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_236678:
    // 0x236678: 0x8c64ea40  lw          $a0, -0x15C0($v1)
    ctx->pc = 0x236678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961728)));
label_23667c:
    // 0x23667c: 0xac96000c  sw          $s6, 0xC($a0)
    ctx->pc = 0x23667cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 22));
label_236680:
    // 0x236680: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x236680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_236684:
    // 0x236684: 0x16c30005  bne         $s6, $v1, . + 4 + (0x5 << 2)
label_236688:
    if (ctx->pc == 0x236688u) {
        ctx->pc = 0x23668Cu;
        goto label_23668c;
    }
    ctx->pc = 0x236684u;
    {
        const bool branch_taken_0x236684 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 3));
        if (branch_taken_0x236684) {
            ctx->pc = 0x23669Cu;
            goto label_23669c;
        }
    }
    ctx->pc = 0x23668Cu;
label_23668c:
    // 0x23668c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23668cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_236690:
    // 0x236690: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x236690u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_236694:
    // 0x236694: 0x320f809  jalr        $t9
label_236698:
    if (ctx->pc == 0x236698u) {
        ctx->pc = 0x236698u;
            // 0x236698: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23669Cu;
        goto label_23669c;
    }
    ctx->pc = 0x236694u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23669Cu);
        ctx->pc = 0x236698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236694u;
            // 0x236698: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23669Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23669Cu; }
            if (ctx->pc != 0x23669Cu) { return; }
        }
        }
    }
    ctx->pc = 0x23669Cu;
label_23669c:
    // 0x23669c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x23669cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2366a0:
    // 0x2366a0: 0x8c64ea40  lw          $a0, -0x15C0($v1)
    ctx->pc = 0x2366a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961728)));
label_2366a4:
    // 0x2366a4: 0xac95000c  sw          $s5, 0xC($a0)
    ctx->pc = 0x2366a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 21));
label_2366a8:
    // 0x2366a8: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2366a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2366ac:
    // 0x2366ac: 0x56a30006  bnel        $s5, $v1, . + 4 + (0x6 << 2)
label_2366b0:
    if (ctx->pc == 0x2366B0u) {
        ctx->pc = 0x2366B0u;
            // 0x2366b0: 0x8fa400b4  lw          $a0, 0xB4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
        ctx->pc = 0x2366B4u;
        goto label_2366b4;
    }
    ctx->pc = 0x2366ACu;
    {
        const bool branch_taken_0x2366ac = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        if (branch_taken_0x2366ac) {
            ctx->pc = 0x2366B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2366ACu;
            // 0x2366b0: 0x8fa400b4  lw          $a0, 0xB4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2366C8u;
            goto label_2366c8;
        }
    }
    ctx->pc = 0x2366B4u;
label_2366b4:
    // 0x2366b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2366b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2366b8:
    // 0x2366b8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2366b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2366bc:
    // 0x2366bc: 0x320f809  jalr        $t9
label_2366c0:
    if (ctx->pc == 0x2366C0u) {
        ctx->pc = 0x2366C0u;
            // 0x2366c0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2366C4u;
        goto label_2366c4;
    }
    ctx->pc = 0x2366BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2366C4u);
        ctx->pc = 0x2366C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2366BCu;
            // 0x2366c0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2366C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2366C4u; }
            if (ctx->pc != 0x2366C4u) { return; }
        }
        }
    }
    ctx->pc = 0x2366C4u;
label_2366c4:
    // 0x2366c4: 0x8fa400b4  lw          $a0, 0xB4($sp)
    ctx->pc = 0x2366c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_2366c8:
    // 0x2366c8: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x2366c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_2366cc:
    // 0x2366cc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2366ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2366d0:
    // 0x2366d0: 0x186000a1  blez        $v1, . + 4 + (0xA1 << 2)
label_2366d4:
    if (ctx->pc == 0x2366D4u) {
        ctx->pc = 0x2366D8u;
        goto label_2366d8;
    }
    ctx->pc = 0x2366D0u;
    {
        const bool branch_taken_0x2366d0 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2366d0) {
            ctx->pc = 0x236958u;
            goto label_236958;
        }
    }
    ctx->pc = 0x2366D8u;
label_2366d8:
    // 0x2366d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2366d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2366dc:
    // 0x2366dc: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2366dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2366e0:
    // 0x2366e0: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x2366e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_2366e4:
    // 0x2366e4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2366e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2366e8:
    // 0x2366e8: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x2366e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_2366ec:
    // 0x2366ec: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2366ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2366f0:
    // 0x2366f0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2366f4:
    if (ctx->pc == 0x2366F4u) {
        ctx->pc = 0x2366F4u;
            // 0x2366f4: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x2366F8u;
        goto label_2366f8;
    }
    ctx->pc = 0x2366F0u;
    {
        const bool branch_taken_0x2366f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2366F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2366F0u;
            // 0x2366f4: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2366f0) {
            ctx->pc = 0x236720u;
            goto label_236720;
        }
    }
    ctx->pc = 0x2366F8u;
label_2366f8:
    // 0x2366f8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2366f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2366fc:
    // 0x2366fc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2366fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_236700:
    // 0x236700: 0x2442cd38  addiu       $v0, $v0, -0x32C8
    ctx->pc = 0x236700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954296));
label_236704:
    // 0x236704: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x236704u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_236708:
    // 0x236708: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x236708u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_23670c:
    // 0x23670c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x23670cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_236710:
    // 0x236710: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x236710u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_236714:
    // 0x236714: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x236714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_236718:
    // 0x236718: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x236718u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_23671c:
    // 0x23671c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x23671cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_236720:
    // 0x236720: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x236720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_236724:
    // 0x236724: 0xc07fb8c  jal         func_1FEE30
label_236728:
    if (ctx->pc == 0x236728u) {
        ctx->pc = 0x236728u;
            // 0x236728: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x23672Cu;
        goto label_23672c;
    }
    ctx->pc = 0x236724u;
    SET_GPR_U32(ctx, 31, 0x23672Cu);
    ctx->pc = 0x236728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236724u;
            // 0x236728: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEE30u;
    if (runtime->hasFunction(0x1FEE30u)) {
        auto targetFn = runtime->lookupFunction(0x1FEE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23672Cu; }
        if (ctx->pc != 0x23672Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FEE30_0x1fee30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23672Cu; }
        if (ctx->pc != 0x23672Cu) { return; }
    }
    ctx->pc = 0x23672Cu;
label_23672c:
    // 0x23672c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23672cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_236730:
    // 0x236730: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x236730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_236734:
    // 0x236734: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x236734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_236738:
    // 0x236738: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x236738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23673c:
    // 0x23673c: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x23673cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_236740:
    // 0x236740: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x236740u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_236744:
    // 0x236744: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_236748:
    if (ctx->pc == 0x236748u) {
        ctx->pc = 0x236748u;
            // 0x236748: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x23674Cu;
        goto label_23674c;
    }
    ctx->pc = 0x236744u;
    {
        const bool branch_taken_0x236744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236744u;
            // 0x236748: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236744) {
            ctx->pc = 0x236774u;
            goto label_236774;
        }
    }
    ctx->pc = 0x23674Cu;
label_23674c:
    // 0x23674c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x23674cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_236750:
    // 0x236750: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x236750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_236754:
    // 0x236754: 0x2442cd48  addiu       $v0, $v0, -0x32B8
    ctx->pc = 0x236754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954312));
label_236758:
    // 0x236758: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x236758u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_23675c:
    // 0x23675c: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x23675cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_236760:
    // 0x236760: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x236760u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_236764:
    // 0x236764: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x236764u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_236768:
    // 0x236768: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x236768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_23676c:
    // 0x23676c: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x23676cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_236770:
    // 0x236770: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x236770u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_236774:
    // 0x236774: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x236774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_236778:
    // 0x236778: 0x8fa600a4  lw          $a2, 0xA4($sp)
    ctx->pc = 0x236778u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_23677c:
    // 0x23677c: 0xc07fb6c  jal         func_1FEDB0
label_236780:
    if (ctx->pc == 0x236780u) {
        ctx->pc = 0x236780u;
            // 0x236780: 0x8e640058  lw          $a0, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->pc = 0x236784u;
        goto label_236784;
    }
    ctx->pc = 0x23677Cu;
    SET_GPR_U32(ctx, 31, 0x236784u);
    ctx->pc = 0x236780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23677Cu;
            // 0x236780: 0x8e640058  lw          $a0, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEDB0u;
    if (runtime->hasFunction(0x1FEDB0u)) {
        auto targetFn = runtime->lookupFunction(0x1FEDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236784u; }
        if (ctx->pc != 0x236784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FEDB0_0x1fedb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236784u; }
        if (ctx->pc != 0x236784u) { return; }
    }
    ctx->pc = 0x236784u;
label_236784:
    // 0x236784: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x236784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_236788:
    // 0x236788: 0x8fa400b4  lw          $a0, 0xB4($sp)
    ctx->pc = 0x236788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_23678c:
    // 0x23678c: 0x8c67ea20  lw          $a3, -0x15E0($v1)
    ctx->pc = 0x23678cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961696)));
label_236790:
    // 0x236790: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x236790u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_236794:
    // 0x236794: 0x8ce60028  lw          $a2, 0x28($a3)
    ctx->pc = 0x236794u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
label_236798:
    // 0x236798: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x236798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_23679c:
    // 0x23679c: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x23679cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_2367a0:
    // 0x2367a0: 0x321c0  sll         $a0, $v1, 7
    ctx->pc = 0x2367a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_2367a4:
    // 0x2367a4: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x2367a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_2367a8:
    // 0x2367a8: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x2367a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_2367ac:
    // 0x2367ac: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x2367acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2367b0:
    // 0x2367b0: 0x54200004  bnel        $at, $zero, . + 4 + (0x4 << 2)
label_2367b4:
    if (ctx->pc == 0x2367B4u) {
        ctx->pc = 0x2367B4u;
            // 0x2367b4: 0x651823  subu        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->pc = 0x2367B8u;
        goto label_2367b8;
    }
    ctx->pc = 0x2367B0u;
    {
        const bool branch_taken_0x2367b0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2367b0) {
            ctx->pc = 0x2367B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2367B0u;
            // 0x2367b4: 0x651823  subu        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2367C4u;
            goto label_2367c4;
        }
    }
    ctx->pc = 0x2367B8u;
label_2367b8:
    // 0x2367b8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2367bc:
    if (ctx->pc == 0x2367BCu) {
        ctx->pc = 0x2367BCu;
            // 0x2367bc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2367C0u;
        goto label_2367c0;
    }
    ctx->pc = 0x2367B8u;
    {
        const bool branch_taken_0x2367b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2367BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2367B8u;
            // 0x2367bc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2367b8) {
            ctx->pc = 0x2367C4u;
            goto label_2367c4;
        }
    }
    ctx->pc = 0x2367C0u;
label_2367c0:
    // 0x2367c0: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2367c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2367c4:
    // 0x2367c4: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x2367c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2367c8:
    // 0x2367c8: 0x10200049  beqz        $at, . + 4 + (0x49 << 2)
label_2367cc:
    if (ctx->pc == 0x2367CCu) {
        ctx->pc = 0x2367D0u;
        goto label_2367d0;
    }
    ctx->pc = 0x2367C8u;
    {
        const bool branch_taken_0x2367c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2367c8) {
            ctx->pc = 0x2368F0u;
            goto label_2368f0;
        }
    }
    ctx->pc = 0x2367D0u;
label_2367d0:
    // 0x2367d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2367d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2367d4:
    // 0x2367d4: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x2367d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_2367d8:
    // 0x2367d8: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x2367d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
label_2367dc:
    // 0x2367dc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2367dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2367e0:
    // 0x2367e0: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x2367e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_2367e4:
    // 0x2367e4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2367e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2367e8:
    // 0x2367e8: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x2367e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_2367ec:
    // 0x2367ec: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x2367ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2367f0:
    // 0x2367f0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_2367f4:
    if (ctx->pc == 0x2367F4u) {
        ctx->pc = 0x2367F4u;
            // 0x2367f4: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x2367F8u;
        goto label_2367f8;
    }
    ctx->pc = 0x2367F0u;
    {
        const bool branch_taken_0x2367f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2367F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2367F0u;
            // 0x2367f4: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2367f0) {
            ctx->pc = 0x236820u;
            goto label_236820;
        }
    }
    ctx->pc = 0x2367F8u;
label_2367f8:
    // 0x2367f8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2367f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2367fc:
    // 0x2367fc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2367fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_236800:
    // 0x236800: 0x2463cd58  addiu       $v1, $v1, -0x32A8
    ctx->pc = 0x236800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954328));
label_236804:
    // 0x236804: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x236804u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_236808:
    // 0x236808: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x236808u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_23680c:
    // 0x23680c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x23680cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_236810:
    // 0x236810: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x236810u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_236814:
    // 0x236814: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x236814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_236818:
    // 0x236818: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x236818u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_23681c:
    // 0x23681c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x23681cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_236820:
    // 0x236820: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x236820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_236824:
    // 0x236824: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x236824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_236828:
    // 0x236828: 0x8c64ea40  lw          $a0, -0x15C0($v1)
    ctx->pc = 0x236828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961728)));
label_23682c:
    // 0x23682c: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x23682cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_236830:
    // 0x236830: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x236830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_236834:
    // 0x236834: 0x54a30006  bnel        $a1, $v1, . + 4 + (0x6 << 2)
label_236838:
    if (ctx->pc == 0x236838u) {
        ctx->pc = 0x236838u;
            // 0x236838: 0x8fa400a8  lw          $a0, 0xA8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->pc = 0x23683Cu;
        goto label_23683c;
    }
    ctx->pc = 0x236834u;
    {
        const bool branch_taken_0x236834 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x236834) {
            ctx->pc = 0x236838u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x236834u;
            // 0x236838: 0x8fa400a8  lw          $a0, 0xA8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x236850u;
            goto label_236850;
        }
    }
    ctx->pc = 0x23683Cu;
label_23683c:
    // 0x23683c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23683cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_236840:
    // 0x236840: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x236840u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_236844:
    // 0x236844: 0x320f809  jalr        $t9
label_236848:
    if (ctx->pc == 0x236848u) {
        ctx->pc = 0x23684Cu;
        goto label_23684c;
    }
    ctx->pc = 0x236844u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23684Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x23684Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23684Cu; }
            if (ctx->pc != 0x23684Cu) { return; }
        }
        }
    }
    ctx->pc = 0x23684Cu;
label_23684c:
    // 0x23684c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x23684cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_236850:
    // 0x236850: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x236850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_236854:
    // 0x236854: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x236854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_236858:
    // 0x236858: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_23685c:
    if (ctx->pc == 0x23685Cu) {
        ctx->pc = 0x236860u;
        goto label_236860;
    }
    ctx->pc = 0x236858u;
    {
        const bool branch_taken_0x236858 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x236858) {
            ctx->pc = 0x236884u;
            goto label_236884;
        }
    }
    ctx->pc = 0x236860u;
label_236860:
    // 0x236860: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x236860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_236864:
    // 0x236864: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x236864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_236868:
    // 0x236868: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x236868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_23686c:
    // 0x23686c: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x23686cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_236870:
    // 0x236870: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x236870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_236874:
    // 0x236874: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x236874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_236878:
    // 0x236878: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x236878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_23687c:
    // 0x23687c: 0xc0a7ab4  jal         func_29EAD0
label_236880:
    if (ctx->pc == 0x236880u) {
        ctx->pc = 0x236880u;
            // 0x236880: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->pc = 0x236884u;
        goto label_236884;
    }
    ctx->pc = 0x23687Cu;
    SET_GPR_U32(ctx, 31, 0x236884u);
    ctx->pc = 0x236880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23687Cu;
            // 0x236880: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236884u; }
        if (ctx->pc != 0x236884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236884u; }
        if (ctx->pc != 0x236884u) { return; }
    }
    ctx->pc = 0x236884u;
label_236884:
    // 0x236884: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x236884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_236888:
    // 0x236888: 0x8fa500bc  lw          $a1, 0xBC($sp)
    ctx->pc = 0x236888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_23688c:
    // 0x23688c: 0x8c64ea40  lw          $a0, -0x15C0($v1)
    ctx->pc = 0x23688cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961728)));
label_236890:
    // 0x236890: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x236890u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_236894:
    // 0x236894: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x236894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_236898:
    // 0x236898: 0x54a30006  bnel        $a1, $v1, . + 4 + (0x6 << 2)
label_23689c:
    if (ctx->pc == 0x23689Cu) {
        ctx->pc = 0x23689Cu;
            // 0x23689c: 0x8fa400b8  lw          $a0, 0xB8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
        ctx->pc = 0x2368A0u;
        goto label_2368a0;
    }
    ctx->pc = 0x236898u;
    {
        const bool branch_taken_0x236898 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x236898) {
            ctx->pc = 0x23689Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x236898u;
            // 0x23689c: 0x8fa400b8  lw          $a0, 0xB8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2368B4u;
            goto label_2368b4;
        }
    }
    ctx->pc = 0x2368A0u;
label_2368a0:
    // 0x2368a0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2368a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2368a4:
    // 0x2368a4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2368a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2368a8:
    // 0x2368a8: 0x320f809  jalr        $t9
label_2368ac:
    if (ctx->pc == 0x2368ACu) {
        ctx->pc = 0x2368B0u;
        goto label_2368b0;
    }
    ctx->pc = 0x2368A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2368B0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2368B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2368B0u; }
            if (ctx->pc != 0x2368B0u) { return; }
        }
        }
    }
    ctx->pc = 0x2368B0u;
label_2368b0:
    // 0x2368b0: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x2368b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2368b4:
    // 0x2368b4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2368b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2368b8:
    // 0x2368b8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2368b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2368bc:
    // 0x2368bc: 0x5460006b  bnel        $v1, $zero, . + 4 + (0x6B << 2)
label_2368c0:
    if (ctx->pc == 0x2368C0u) {
        ctx->pc = 0x2368C0u;
            // 0x2368c0: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x2368C4u;
        goto label_2368c4;
    }
    ctx->pc = 0x2368BCu;
    {
        const bool branch_taken_0x2368bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2368bc) {
            ctx->pc = 0x2368C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2368BCu;
            // 0x2368c0: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x236A6Cu;
            goto label_236a6c;
        }
    }
    ctx->pc = 0x2368C4u;
label_2368c4:
    // 0x2368c4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2368c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2368c8:
    // 0x2368c8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2368c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2368cc:
    // 0x2368cc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2368ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_2368d0:
    // 0x2368d0: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2368d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_2368d4:
    // 0x2368d4: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x2368d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2368d8:
    // 0x2368d8: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x2368d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_2368dc:
    // 0x2368dc: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x2368dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_2368e0:
    // 0x2368e0: 0xc0a7ab4  jal         func_29EAD0
label_2368e4:
    if (ctx->pc == 0x2368E4u) {
        ctx->pc = 0x2368E4u;
            // 0x2368e4: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->pc = 0x2368E8u;
        goto label_2368e8;
    }
    ctx->pc = 0x2368E0u;
    SET_GPR_U32(ctx, 31, 0x2368E8u);
    ctx->pc = 0x2368E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2368E0u;
            // 0x2368e4: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2368E8u; }
        if (ctx->pc != 0x2368E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2368E8u; }
        if (ctx->pc != 0x2368E8u) { return; }
    }
    ctx->pc = 0x2368E8u;
label_2368e8:
    // 0x2368e8: 0x1000005f  b           . + 4 + (0x5F << 2)
label_2368ec:
    if (ctx->pc == 0x2368ECu) {
        ctx->pc = 0x2368F0u;
        goto label_2368f0;
    }
    ctx->pc = 0x2368E8u;
    {
        const bool branch_taken_0x2368e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2368e8) {
            ctx->pc = 0x236A68u;
            goto label_236a68;
        }
    }
    ctx->pc = 0x2368F0u;
label_2368f0:
    // 0x2368f0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2368f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2368f4:
    // 0x2368f4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2368f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2368f8:
    // 0x2368f8: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x2368f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_2368fc:
    // 0x2368fc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2368fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_236900:
    // 0x236900: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x236900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_236904:
    // 0x236904: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x236904u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_236908:
    // 0x236908: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_23690c:
    if (ctx->pc == 0x23690Cu) {
        ctx->pc = 0x23690Cu;
            // 0x23690c: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x236910u;
        goto label_236910;
    }
    ctx->pc = 0x236908u;
    {
        const bool branch_taken_0x236908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23690Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236908u;
            // 0x23690c: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236908) {
            ctx->pc = 0x236938u;
            goto label_236938;
        }
    }
    ctx->pc = 0x236910u;
label_236910:
    // 0x236910: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x236910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_236914:
    // 0x236914: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x236914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_236918:
    // 0x236918: 0x2442cd60  addiu       $v0, $v0, -0x32A0
    ctx->pc = 0x236918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954336));
label_23691c:
    // 0x23691c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x23691cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_236920:
    // 0x236920: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x236920u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_236924:
    // 0x236924: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x236924u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_236928:
    // 0x236928: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x236928u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_23692c:
    // 0x23692c: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x23692cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_236930:
    // 0x236930: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x236930u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_236934:
    // 0x236934: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x236934u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_236938:
    // 0x236938: 0x8e670070  lw          $a3, 0x70($s3)
    ctx->pc = 0x236938u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_23693c:
    // 0x23693c: 0x50e00003  beql        $a3, $zero, . + 4 + (0x3 << 2)
label_236940:
    if (ctx->pc == 0x236940u) {
        ctx->pc = 0x236940u;
            // 0x236940: 0x8e640058  lw          $a0, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->pc = 0x236944u;
        goto label_236944;
    }
    ctx->pc = 0x23693Cu;
    {
        const bool branch_taken_0x23693c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x23693c) {
            ctx->pc = 0x236940u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23693Cu;
            // 0x236940: 0x8e640058  lw          $a0, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23694Cu;
            goto label_23694c;
        }
    }
    ctx->pc = 0x236944u;
label_236944:
    // 0x236944: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x236944u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_236948:
    // 0x236948: 0x8e640058  lw          $a0, 0x58($s3)
    ctx->pc = 0x236948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_23694c:
    // 0x23694c: 0x8fa600b4  lw          $a2, 0xB4($sp)
    ctx->pc = 0x23694cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_236950:
    // 0x236950: 0xc07fb38  jal         func_1FECE0
label_236954:
    if (ctx->pc == 0x236954u) {
        ctx->pc = 0x236954u;
            // 0x236954: 0x8fa500b0  lw          $a1, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->pc = 0x236958u;
        goto label_236958;
    }
    ctx->pc = 0x236950u;
    SET_GPR_U32(ctx, 31, 0x236958u);
    ctx->pc = 0x236954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236950u;
            // 0x236954: 0x8fa500b0  lw          $a1, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FECE0u;
    if (runtime->hasFunction(0x1FECE0u)) {
        auto targetFn = runtime->lookupFunction(0x1FECE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236958u; }
        if (ctx->pc != 0x236958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FECE0_0x1fece0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236958u; }
        if (ctx->pc != 0x236958u) { return; }
    }
    ctx->pc = 0x236958u;
label_236958:
    // 0x236958: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x236958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_23695c:
    // 0x23695c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x23695cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_236960:
    // 0x236960: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x236960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_236964:
    // 0x236964: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x236964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_236968:
    // 0x236968: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x236968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_23696c:
    // 0x23696c: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x23696cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_236970:
    // 0x236970: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_236974:
    if (ctx->pc == 0x236974u) {
        ctx->pc = 0x236974u;
            // 0x236974: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x236978u;
        goto label_236978;
    }
    ctx->pc = 0x236970u;
    {
        const bool branch_taken_0x236970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x236974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236970u;
            // 0x236974: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236970) {
            ctx->pc = 0x2369A0u;
            goto label_2369a0;
        }
    }
    ctx->pc = 0x236978u;
label_236978:
    // 0x236978: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x236978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_23697c:
    // 0x23697c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x23697cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_236980:
    // 0x236980: 0x2463cd58  addiu       $v1, $v1, -0x32A8
    ctx->pc = 0x236980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954328));
label_236984:
    // 0x236984: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x236984u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_236988:
    // 0x236988: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x236988u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_23698c:
    // 0x23698c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x23698cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_236990:
    // 0x236990: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x236990u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_236994:
    // 0x236994: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x236994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_236998:
    // 0x236998: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x236998u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_23699c:
    // 0x23699c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x23699cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_2369a0:
    // 0x2369a0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2369a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2369a4:
    // 0x2369a4: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x2369a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_2369a8:
    // 0x2369a8: 0x8c64ea40  lw          $a0, -0x15C0($v1)
    ctx->pc = 0x2369a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961728)));
label_2369ac:
    // 0x2369ac: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x2369acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_2369b0:
    // 0x2369b0: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2369b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2369b4:
    // 0x2369b4: 0x54a30006  bnel        $a1, $v1, . + 4 + (0x6 << 2)
label_2369b8:
    if (ctx->pc == 0x2369B8u) {
        ctx->pc = 0x2369B8u;
            // 0x2369b8: 0x8fa400a8  lw          $a0, 0xA8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->pc = 0x2369BCu;
        goto label_2369bc;
    }
    ctx->pc = 0x2369B4u;
    {
        const bool branch_taken_0x2369b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2369b4) {
            ctx->pc = 0x2369B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2369B4u;
            // 0x2369b8: 0x8fa400a8  lw          $a0, 0xA8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2369D0u;
            goto label_2369d0;
        }
    }
    ctx->pc = 0x2369BCu;
label_2369bc:
    // 0x2369bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2369bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2369c0:
    // 0x2369c0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2369c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2369c4:
    // 0x2369c4: 0x320f809  jalr        $t9
label_2369c8:
    if (ctx->pc == 0x2369C8u) {
        ctx->pc = 0x2369CCu;
        goto label_2369cc;
    }
    ctx->pc = 0x2369C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2369CCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2369CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2369CCu; }
            if (ctx->pc != 0x2369CCu) { return; }
        }
        }
    }
    ctx->pc = 0x2369CCu;
label_2369cc:
    // 0x2369cc: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2369ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2369d0:
    // 0x2369d0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2369d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2369d4:
    // 0x2369d4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2369d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2369d8:
    // 0x2369d8: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_2369dc:
    if (ctx->pc == 0x2369DCu) {
        ctx->pc = 0x2369E0u;
        goto label_2369e0;
    }
    ctx->pc = 0x2369D8u;
    {
        const bool branch_taken_0x2369d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2369d8) {
            ctx->pc = 0x236A04u;
            goto label_236a04;
        }
    }
    ctx->pc = 0x2369E0u;
label_2369e0:
    // 0x2369e0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2369e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2369e4:
    // 0x2369e4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2369e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2369e8:
    // 0x2369e8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2369e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_2369ec:
    // 0x2369ec: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2369ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_2369f0:
    // 0x2369f0: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x2369f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2369f4:
    // 0x2369f4: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x2369f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_2369f8:
    // 0x2369f8: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x2369f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_2369fc:
    // 0x2369fc: 0xc0a7ab4  jal         func_29EAD0
label_236a00:
    if (ctx->pc == 0x236A00u) {
        ctx->pc = 0x236A00u;
            // 0x236a00: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->pc = 0x236A04u;
        goto label_236a04;
    }
    ctx->pc = 0x2369FCu;
    SET_GPR_U32(ctx, 31, 0x236A04u);
    ctx->pc = 0x236A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2369FCu;
            // 0x236a00: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236A04u; }
        if (ctx->pc != 0x236A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236A04u; }
        if (ctx->pc != 0x236A04u) { return; }
    }
    ctx->pc = 0x236A04u;
label_236a04:
    // 0x236a04: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x236a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_236a08:
    // 0x236a08: 0x8fa500bc  lw          $a1, 0xBC($sp)
    ctx->pc = 0x236a08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_236a0c:
    // 0x236a0c: 0x8c64ea40  lw          $a0, -0x15C0($v1)
    ctx->pc = 0x236a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961728)));
label_236a10:
    // 0x236a10: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x236a10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_236a14:
    // 0x236a14: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x236a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_236a18:
    // 0x236a18: 0x54a30006  bnel        $a1, $v1, . + 4 + (0x6 << 2)
label_236a1c:
    if (ctx->pc == 0x236A1Cu) {
        ctx->pc = 0x236A1Cu;
            // 0x236a1c: 0x8fa400b8  lw          $a0, 0xB8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
        ctx->pc = 0x236A20u;
        goto label_236a20;
    }
    ctx->pc = 0x236A18u;
    {
        const bool branch_taken_0x236a18 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x236a18) {
            ctx->pc = 0x236A1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x236A18u;
            // 0x236a1c: 0x8fa400b8  lw          $a0, 0xB8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x236A34u;
            goto label_236a34;
        }
    }
    ctx->pc = 0x236A20u;
label_236a20:
    // 0x236a20: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x236a20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_236a24:
    // 0x236a24: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x236a24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_236a28:
    // 0x236a28: 0x320f809  jalr        $t9
label_236a2c:
    if (ctx->pc == 0x236A2Cu) {
        ctx->pc = 0x236A30u;
        goto label_236a30;
    }
    ctx->pc = 0x236A28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x236A30u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x236A30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x236A30u; }
            if (ctx->pc != 0x236A30u) { return; }
        }
        }
    }
    ctx->pc = 0x236A30u;
label_236a30:
    // 0x236a30: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x236a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_236a34:
    // 0x236a34: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x236a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_236a38:
    // 0x236a38: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x236a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_236a3c:
    // 0x236a3c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_236a40:
    if (ctx->pc == 0x236A40u) {
        ctx->pc = 0x236A44u;
        goto label_236a44;
    }
    ctx->pc = 0x236A3Cu;
    {
        const bool branch_taken_0x236a3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x236a3c) {
            ctx->pc = 0x236A68u;
            goto label_236a68;
        }
    }
    ctx->pc = 0x236A44u;
label_236a44:
    // 0x236a44: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x236a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_236a48:
    // 0x236a48: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x236a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_236a4c:
    // 0x236a4c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x236a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_236a50:
    // 0x236a50: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x236a50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_236a54:
    // 0x236a54: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x236a54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_236a58:
    // 0x236a58: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x236a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_236a5c:
    // 0x236a5c: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x236a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_236a60:
    // 0x236a60: 0xc0a7ab4  jal         func_29EAD0
label_236a64:
    if (ctx->pc == 0x236A64u) {
        ctx->pc = 0x236A64u;
            // 0x236a64: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->pc = 0x236A68u;
        goto label_236a68;
    }
    ctx->pc = 0x236A60u;
    SET_GPR_U32(ctx, 31, 0x236A68u);
    ctx->pc = 0x236A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236A60u;
            // 0x236a64: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236A68u; }
        if (ctx->pc != 0x236A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236A68u; }
        if (ctx->pc != 0x236A68u) { return; }
    }
    ctx->pc = 0x236A68u;
label_236a68:
    // 0x236a68: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x236a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_236a6c:
    // 0x236a6c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x236a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_236a70:
    // 0x236a70: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x236a70u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_236a74:
    // 0x236a74: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x236a74u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_236a78:
    // 0x236a78: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x236a78u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_236a7c:
    // 0x236a7c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x236a7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_236a80:
    // 0x236a80: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x236a80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_236a84:
    // 0x236a84: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x236a84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_236a88:
    // 0x236a88: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x236a88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_236a8c:
    // 0x236a8c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x236a8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_236a90:
    // 0x236a90: 0x3e00008  jr          $ra
label_236a94:
    if (ctx->pc == 0x236A94u) {
        ctx->pc = 0x236A94u;
            // 0x236a94: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x236A98u;
        goto label_236a98;
    }
    ctx->pc = 0x236A90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236A90u;
            // 0x236a94: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x236A98u;
label_236a98:
    // 0x236a98: 0x0  nop
    ctx->pc = 0x236a98u;
    // NOP
label_236a9c:
    // 0x236a9c: 0x0  nop
    ctx->pc = 0x236a9cu;
    // NOP
label_236aa0:
    // 0x236aa0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x236aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_236aa4:
    // 0x236aa4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x236aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_236aa8:
    // 0x236aa8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x236aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_236aac:
    // 0x236aac: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x236aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_236ab0:
    // 0x236ab0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x236ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_236ab4:
    // 0x236ab4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x236ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_236ab8:
    // 0x236ab8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x236ab8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_236abc:
    // 0x236abc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x236abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_236ac0:
    // 0x236ac0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x236ac0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_236ac4:
    // 0x236ac4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x236ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_236ac8:
    // 0x236ac8: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x236ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_236acc:
    // 0x236acc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x236accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_236ad0:
    // 0x236ad0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x236ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_236ad4:
    // 0x236ad4: 0x8c84ea64  lw          $a0, -0x159C($a0)
    ctx->pc = 0x236ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961764)));
label_236ad8:
    // 0x236ad8: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x236ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_236adc:
    // 0x236adc: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x236adcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_236ae0:
    // 0x236ae0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_236ae4:
    if (ctx->pc == 0x236AE4u) {
        ctx->pc = 0x236AE4u;
            // 0x236ae4: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x236AE8u;
        goto label_236ae8;
    }
    ctx->pc = 0x236AE0u;
    {
        const bool branch_taken_0x236ae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x236AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236AE0u;
            // 0x236ae4: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236ae0) {
            ctx->pc = 0x236B10u;
            goto label_236b10;
        }
    }
    ctx->pc = 0x236AE8u;
label_236ae8:
    // 0x236ae8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x236ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_236aec:
    // 0x236aec: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x236aecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_236af0:
    // 0x236af0: 0x2463cd70  addiu       $v1, $v1, -0x3290
    ctx->pc = 0x236af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954352));
label_236af4:
    // 0x236af4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x236af4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_236af8:
    // 0x236af8: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x236af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_236afc:
    // 0x236afc: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x236afcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_236b00:
    // 0x236b00: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x236b00u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_236b04:
    // 0x236b04: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x236b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_236b08:
    // 0x236b08: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x236b08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_236b0c:
    // 0x236b0c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x236b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_236b10:
    // 0x236b10: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x236b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_236b14:
    // 0x236b14: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x236b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_236b18:
    // 0x236b18: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x236b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
label_236b1c:
    // 0x236b1c: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x236b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_236b20:
    // 0x236b20: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x236b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
label_236b24:
    // 0x236b24: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x236b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_236b28:
    // 0x236b28: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x236b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
label_236b2c:
    // 0x236b2c: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x236b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_236b30:
    // 0x236b30: 0xe46001ac  swc1        $f0, 0x1AC($v1)
    ctx->pc = 0x236b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 428), bits); }
label_236b34:
    // 0x236b34: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x236b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_236b38:
    // 0x236b38: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x236b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_236b3c:
    // 0x236b3c: 0x8c63006c  lw          $v1, 0x6C($v1)
    ctx->pc = 0x236b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_236b40:
    // 0x236b40: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x236b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_236b44:
    // 0x236b44: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x236b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_236b48:
    // 0x236b48: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x236b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_236b4c:
    // 0x236b4c: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x236b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_236b50:
    // 0x236b50: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x236b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_236b54:
    // 0x236b54: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x236b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_236b58:
    // 0x236b58: 0xe460002c  swc1        $f0, 0x2C($v1)
    ctx->pc = 0x236b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
label_236b5c:
    // 0x236b5c: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x236b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_236b60:
    // 0x236b60: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x236b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_236b64:
    // 0x236b64: 0xc46002e8  lwc1        $f0, 0x2E8($v1)
    ctx->pc = 0x236b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_236b68:
    // 0x236b68: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x236b68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_236b6c:
    // 0x236b6c: 0xe46002d4  swc1        $f0, 0x2D4($v1)
    ctx->pc = 0x236b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 724), bits); }
label_236b70:
    // 0x236b70: 0xc46102dc  lwc1        $f1, 0x2DC($v1)
    ctx->pc = 0x236b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_236b74:
    // 0x236b74: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x236b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_236b78:
    // 0x236b78: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x236b78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_236b7c:
    // 0x236b7c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x236b7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_236b80:
    // 0x236b80: 0xe46002d8  swc1        $f0, 0x2D8($v1)
    ctx->pc = 0x236b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 728), bits); }
label_236b84:
    // 0x236b84: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x236b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_236b88:
    // 0x236b88: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x236b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_236b8c:
    // 0x236b8c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x236b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_236b90:
    // 0x236b90: 0xac830084  sw          $v1, 0x84($a0)
    ctx->pc = 0x236b90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
label_236b94:
    // 0x236b94: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x236b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_236b98:
    // 0x236b98: 0x24700028  addiu       $s0, $v1, 0x28
    ctx->pc = 0x236b98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_236b9c:
    // 0x236b9c: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x236b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_236ba0:
    // 0x236ba0: 0x18600035  blez        $v1, . + 4 + (0x35 << 2)
label_236ba4:
    if (ctx->pc == 0x236BA4u) {
        ctx->pc = 0x236BA4u;
            // 0x236ba4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x236BA8u;
        goto label_236ba8;
    }
    ctx->pc = 0x236BA0u;
    {
        const bool branch_taken_0x236ba0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x236BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236BA0u;
            // 0x236ba4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236ba0) {
            ctx->pc = 0x236C78u;
            goto label_236c78;
        }
    }
    ctx->pc = 0x236BA8u;
label_236ba8:
    // 0x236ba8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x236ba8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236bac:
    // 0x236bac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x236bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_236bb0:
    // 0x236bb0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x236bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_236bb4:
    // 0x236bb4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x236bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_236bb8:
    // 0x236bb8: 0x8c44004c  lw          $a0, 0x4C($v0)
    ctx->pc = 0x236bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_236bbc:
    // 0x236bbc: 0x8c450050  lw          $a1, 0x50($v0)
    ctx->pc = 0x236bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_236bc0:
    // 0x236bc0: 0xc08d8d4  jal         func_236350
label_236bc4:
    if (ctx->pc == 0x236BC4u) {
        ctx->pc = 0x236BC4u;
            // 0x236bc4: 0x8e860008  lw          $a2, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->pc = 0x236BC8u;
        goto label_236bc8;
    }
    ctx->pc = 0x236BC0u;
    SET_GPR_U32(ctx, 31, 0x236BC8u);
    ctx->pc = 0x236BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236BC0u;
            // 0x236bc4: 0x8e860008  lw          $a2, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x236350u;
    goto label_236350;
    ctx->pc = 0x236BC8u;
label_236bc8:
    // 0x236bc8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x236bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_236bcc:
    // 0x236bcc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x236bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_236bd0:
    // 0x236bd0: 0x8c63ea20  lw          $v1, -0x15E0($v1)
    ctx->pc = 0x236bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961696)));
label_236bd4:
    // 0x236bd4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x236bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_236bd8:
    // 0x236bd8: 0x54640023  bnel        $v1, $a0, . + 4 + (0x23 << 2)
label_236bdc:
    if (ctx->pc == 0x236BDCu) {
        ctx->pc = 0x236BDCu;
            // 0x236bdc: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x236BE0u;
        goto label_236be0;
    }
    ctx->pc = 0x236BD8u;
    {
        const bool branch_taken_0x236bd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x236bd8) {
            ctx->pc = 0x236BDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x236BD8u;
            // 0x236bdc: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x236C68u;
            goto label_236c68;
        }
    }
    ctx->pc = 0x236BE0u;
label_236be0:
    // 0x236be0: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x236be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_236be4:
    // 0x236be4: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x236be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_236be8:
    // 0x236be8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x236be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_236bec:
    // 0x236bec: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_236bf0:
    if (ctx->pc == 0x236BF0u) {
        ctx->pc = 0x236BF0u;
            // 0x236bf0: 0xac830084  sw          $v1, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
        ctx->pc = 0x236BF4u;
        goto label_236bf4;
    }
    ctx->pc = 0x236BECu;
    {
        const bool branch_taken_0x236bec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x236BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236BECu;
            // 0x236bf0: 0xac830084  sw          $v1, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236bec) {
            ctx->pc = 0x236C14u;
            goto label_236c14;
        }
    }
    ctx->pc = 0x236BF4u;
label_236bf4:
    // 0x236bf4: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x236bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_236bf8:
    // 0x236bf8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_236bfc:
    if (ctx->pc == 0x236BFCu) {
        ctx->pc = 0x236C00u;
        goto label_236c00;
    }
    ctx->pc = 0x236BF8u;
    {
        const bool branch_taken_0x236bf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x236bf8) {
            ctx->pc = 0x236C14u;
            goto label_236c14;
        }
    }
    ctx->pc = 0x236C00u;
label_236c00:
    // 0x236c00: 0x8083008c  lb          $v1, 0x8C($a0)
    ctx->pc = 0x236c00u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 140)));
label_236c04:
    // 0x236c04: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_236c08:
    if (ctx->pc == 0x236C08u) {
        ctx->pc = 0x236C0Cu;
        goto label_236c0c;
    }
    ctx->pc = 0x236C04u;
    {
        const bool branch_taken_0x236c04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x236c04) {
            ctx->pc = 0x236C14u;
            goto label_236c14;
        }
    }
    ctx->pc = 0x236C0Cu;
label_236c0c:
    // 0x236c0c: 0xc08d1c4  jal         func_234710
label_236c10:
    if (ctx->pc == 0x236C10u) {
        ctx->pc = 0x236C14u;
        goto label_236c14;
    }
    ctx->pc = 0x236C0Cu;
    SET_GPR_U32(ctx, 31, 0x236C14u);
    ctx->pc = 0x234710u;
    if (runtime->hasFunction(0x234710u)) {
        auto targetFn = runtime->lookupFunction(0x234710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236C14u; }
        if (ctx->pc != 0x236C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234710_0x234710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236C14u; }
        if (ctx->pc != 0x236C14u) { return; }
    }
    ctx->pc = 0x236C14u;
label_236c14:
    // 0x236c14: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x236c14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_236c18:
    // 0x236c18: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x236c18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_236c1c:
    // 0x236c1c: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x236c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_236c20:
    // 0x236c20: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x236c20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_236c24:
    // 0x236c24: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x236c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_236c28:
    // 0x236c28: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x236c28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_236c2c:
    // 0x236c2c: 0x106000d3  beqz        $v1, . + 4 + (0xD3 << 2)
label_236c30:
    if (ctx->pc == 0x236C30u) {
        ctx->pc = 0x236C30u;
            // 0x236c30: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x236C34u;
        goto label_236c34;
    }
    ctx->pc = 0x236C2Cu;
    {
        const bool branch_taken_0x236c2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x236C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236C2Cu;
            // 0x236c30: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236c2c) {
            ctx->pc = 0x236F7Cu;
            goto label_236f7c;
        }
    }
    ctx->pc = 0x236C34u;
label_236c34:
    // 0x236c34: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x236c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_236c38:
    // 0x236c38: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x236c38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_236c3c:
    // 0x236c3c: 0x2463d618  addiu       $v1, $v1, -0x29E8
    ctx->pc = 0x236c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956568));
label_236c40:
    // 0x236c40: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x236c40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_236c44:
    // 0x236c44: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x236c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_236c48:
    // 0x236c48: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x236c48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_236c4c:
    // 0x236c4c: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x236c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_236c50:
    // 0x236c50: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x236c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_236c54:
    // 0x236c54: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x236c54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_236c58:
    // 0x236c58: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x236c58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_236c5c:
    // 0x236c5c: 0x100000c8  b           . + 4 + (0xC8 << 2)
label_236c60:
    if (ctx->pc == 0x236C60u) {
        ctx->pc = 0x236C60u;
            // 0x236c60: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x236C64u;
        goto label_236c64;
    }
    ctx->pc = 0x236C5Cu;
    {
        const bool branch_taken_0x236c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236C5Cu;
            // 0x236c60: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236c5c) {
            ctx->pc = 0x236F80u;
            goto label_236f80;
        }
    }
    ctx->pc = 0x236C64u;
label_236c64:
    // 0x236c64: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x236c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_236c68:
    // 0x236c68: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x236c68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_236c6c:
    // 0x236c6c: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x236c6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_236c70:
    // 0x236c70: 0x1460ffce  bnez        $v1, . + 4 + (-0x32 << 2)
label_236c74:
    if (ctx->pc == 0x236C74u) {
        ctx->pc = 0x236C74u;
            // 0x236c74: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x236C78u;
        goto label_236c78;
    }
    ctx->pc = 0x236C70u;
    {
        const bool branch_taken_0x236c70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x236C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236C70u;
            // 0x236c74: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236c70) {
            ctx->pc = 0x236BACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_236bac;
        }
    }
    ctx->pc = 0x236C78u;
label_236c78:
    // 0x236c78: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x236c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_236c7c:
    // 0x236c7c: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x236c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_236c80:
    // 0x236c80: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x236c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_236c84:
    // 0x236c84: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_236c88:
    if (ctx->pc == 0x236C88u) {
        ctx->pc = 0x236C88u;
            // 0x236c88: 0xac830084  sw          $v1, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
        ctx->pc = 0x236C8Cu;
        goto label_236c8c;
    }
    ctx->pc = 0x236C84u;
    {
        const bool branch_taken_0x236c84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x236C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236C84u;
            // 0x236c88: 0xac830084  sw          $v1, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236c84) {
            ctx->pc = 0x236CACu;
            goto label_236cac;
        }
    }
    ctx->pc = 0x236C8Cu;
label_236c8c:
    // 0x236c8c: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x236c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_236c90:
    // 0x236c90: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_236c94:
    if (ctx->pc == 0x236C94u) {
        ctx->pc = 0x236C94u;
            // 0x236c94: 0x8e840008  lw          $a0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->pc = 0x236C98u;
        goto label_236c98;
    }
    ctx->pc = 0x236C90u;
    {
        const bool branch_taken_0x236c90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x236c90) {
            ctx->pc = 0x236C94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x236C90u;
            // 0x236c94: 0x8e840008  lw          $a0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x236CB0u;
            goto label_236cb0;
        }
    }
    ctx->pc = 0x236C98u;
label_236c98:
    // 0x236c98: 0x8083008c  lb          $v1, 0x8C($a0)
    ctx->pc = 0x236c98u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 140)));
label_236c9c:
    // 0x236c9c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_236ca0:
    if (ctx->pc == 0x236CA0u) {
        ctx->pc = 0x236CA4u;
        goto label_236ca4;
    }
    ctx->pc = 0x236C9Cu;
    {
        const bool branch_taken_0x236c9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x236c9c) {
            ctx->pc = 0x236CACu;
            goto label_236cac;
        }
    }
    ctx->pc = 0x236CA4u;
label_236ca4:
    // 0x236ca4: 0xc08d1c4  jal         func_234710
label_236ca8:
    if (ctx->pc == 0x236CA8u) {
        ctx->pc = 0x236CACu;
        goto label_236cac;
    }
    ctx->pc = 0x236CA4u;
    SET_GPR_U32(ctx, 31, 0x236CACu);
    ctx->pc = 0x234710u;
    if (runtime->hasFunction(0x234710u)) {
        auto targetFn = runtime->lookupFunction(0x234710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236CACu; }
        if (ctx->pc != 0x236CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234710_0x234710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236CACu; }
        if (ctx->pc != 0x236CACu) { return; }
    }
    ctx->pc = 0x236CACu;
label_236cac:
    // 0x236cac: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x236cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_236cb0:
    // 0x236cb0: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x236cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_236cb4:
    // 0x236cb4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x236cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_236cb8:
    // 0x236cb8: 0xac830084  sw          $v1, 0x84($a0)
    ctx->pc = 0x236cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
label_236cbc:
    // 0x236cbc: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x236cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_236cc0:
    // 0x236cc0: 0x24750028  addiu       $s5, $v1, 0x28
    ctx->pc = 0x236cc0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_236cc4:
    // 0x236cc4: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x236cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_236cc8:
    // 0x236cc8: 0x1860008d  blez        $v1, . + 4 + (0x8D << 2)
label_236ccc:
    if (ctx->pc == 0x236CCCu) {
        ctx->pc = 0x236CCCu;
            // 0x236ccc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x236CD0u;
        goto label_236cd0;
    }
    ctx->pc = 0x236CC8u;
    {
        const bool branch_taken_0x236cc8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x236CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236CC8u;
            // 0x236ccc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236cc8) {
            ctx->pc = 0x236F00u;
            goto label_236f00;
        }
    }
    ctx->pc = 0x236CD0u;
label_236cd0:
    // 0x236cd0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x236cd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236cd4:
    // 0x236cd4: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x236cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_236cd8:
    // 0x236cd8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x236cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_236cdc:
    // 0x236cdc: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x236cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_236ce0:
    // 0x236ce0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x236ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_236ce4:
    // 0x236ce4: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x236ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_236ce8:
    // 0x236ce8: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x236ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_236cec:
    // 0x236cec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x236cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_236cf0:
    // 0x236cf0: 0x8cd10000  lw          $s1, 0x0($a2)
    ctx->pc = 0x236cf0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_236cf4:
    // 0x236cf4: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x236cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_236cf8:
    // 0x236cf8: 0x8ca6006c  lw          $a2, 0x6C($a1)
    ctx->pc = 0x236cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 108)));
label_236cfc:
    // 0x236cfc: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x236cfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_236d00:
    // 0x236d00: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_236d04:
    if (ctx->pc == 0x236D04u) {
        ctx->pc = 0x236D04u;
            // 0x236d04: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x236D08u;
        goto label_236d08;
    }
    ctx->pc = 0x236D00u;
    {
        const bool branch_taken_0x236d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236D00u;
            // 0x236d04: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236d00) {
            ctx->pc = 0x236D30u;
            goto label_236d30;
        }
    }
    ctx->pc = 0x236D08u;
label_236d08:
    // 0x236d08: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x236d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_236d0c:
    // 0x236d0c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x236d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_236d10:
    // 0x236d10: 0x2442f608  addiu       $v0, $v0, -0x9F8
    ctx->pc = 0x236d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964744));
label_236d14:
    // 0x236d14: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x236d14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_236d18:
    // 0x236d18: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x236d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_236d1c:
    // 0x236d1c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x236d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_236d20:
    // 0x236d20: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x236d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_236d24:
    // 0x236d24: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x236d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_236d28:
    // 0x236d28: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x236d28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_236d2c:
    // 0x236d2c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x236d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_236d30:
    // 0x236d30: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x236d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_236d34:
    // 0x236d34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x236d34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236d38:
    // 0x236d38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x236d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_236d3c:
    // 0x236d3c: 0x2625005c  addiu       $a1, $s1, 0x5C
    ctx->pc = 0x236d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
label_236d40:
    // 0x236d40: 0x24631a8c  addiu       $v1, $v1, 0x1A8C
    ctx->pc = 0x236d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6796));
label_236d44:
    // 0x236d44: 0xacc30030  sw          $v1, 0x30($a2)
    ctx->pc = 0x236d44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 3));
label_236d48:
    // 0x236d48: 0xc0926b8  jal         func_249AE0
label_236d4c:
    if (ctx->pc == 0x236D4Cu) {
        ctx->pc = 0x236D4Cu;
            // 0x236d4c: 0xa0c20010  sb          $v0, 0x10($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x236D50u;
        goto label_236d50;
    }
    ctx->pc = 0x236D48u;
    SET_GPR_U32(ctx, 31, 0x236D50u);
    ctx->pc = 0x236D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236D48u;
            // 0x236d4c: 0xa0c20010  sb          $v0, 0x10($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x249AE0u;
    if (runtime->hasFunction(0x249AE0u)) {
        auto targetFn = runtime->lookupFunction(0x249AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236D50u; }
        if (ctx->pc != 0x236D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00249AE0_0x249ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236D50u; }
        if (ctx->pc != 0x236D50u) { return; }
    }
    ctx->pc = 0x236D50u;
label_236d50:
    // 0x236d50: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x236d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_236d54:
    // 0x236d54: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x236d54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_236d58:
    // 0x236d58: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x236d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_236d5c:
    // 0x236d5c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x236d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_236d60:
    // 0x236d60: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x236d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_236d64:
    // 0x236d64: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x236d64u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_236d68:
    // 0x236d68: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_236d6c:
    if (ctx->pc == 0x236D6Cu) {
        ctx->pc = 0x236D6Cu;
            // 0x236d6c: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x236D70u;
        goto label_236d70;
    }
    ctx->pc = 0x236D68u;
    {
        const bool branch_taken_0x236d68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x236D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236D68u;
            // 0x236d6c: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236d68) {
            ctx->pc = 0x236D98u;
            goto label_236d98;
        }
    }
    ctx->pc = 0x236D70u;
label_236d70:
    // 0x236d70: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x236d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_236d74:
    // 0x236d74: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x236d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_236d78:
    // 0x236d78: 0x2463f600  addiu       $v1, $v1, -0xA00
    ctx->pc = 0x236d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964736));
label_236d7c:
    // 0x236d7c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x236d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_236d80:
    // 0x236d80: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x236d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_236d84:
    // 0x236d84: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x236d84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_236d88:
    // 0x236d88: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x236d88u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_236d8c:
    // 0x236d8c: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x236d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_236d90:
    // 0x236d90: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x236d90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_236d94:
    // 0x236d94: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x236d94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_236d98:
    // 0x236d98: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x236d98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_236d9c:
    // 0x236d9c: 0x8c64ea20  lw          $a0, -0x15E0($v1)
    ctx->pc = 0x236d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961696)));
label_236da0:
    // 0x236da0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x236da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_236da4:
    // 0x236da4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x236da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_236da8:
    // 0x236da8: 0x54830023  bnel        $a0, $v1, . + 4 + (0x23 << 2)
label_236dac:
    if (ctx->pc == 0x236DACu) {
        ctx->pc = 0x236DACu;
            // 0x236dac: 0x8e830008  lw          $v1, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->pc = 0x236DB0u;
        goto label_236db0;
    }
    ctx->pc = 0x236DA8u;
    {
        const bool branch_taken_0x236da8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x236da8) {
            ctx->pc = 0x236DACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x236DA8u;
            // 0x236dac: 0x8e830008  lw          $v1, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x236E38u;
            goto label_236e38;
        }
    }
    ctx->pc = 0x236DB0u;
label_236db0:
    // 0x236db0: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x236db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_236db4:
    // 0x236db4: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x236db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_236db8:
    // 0x236db8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x236db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_236dbc:
    // 0x236dbc: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_236dc0:
    if (ctx->pc == 0x236DC0u) {
        ctx->pc = 0x236DC0u;
            // 0x236dc0: 0xac830084  sw          $v1, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
        ctx->pc = 0x236DC4u;
        goto label_236dc4;
    }
    ctx->pc = 0x236DBCu;
    {
        const bool branch_taken_0x236dbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x236DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236DBCu;
            // 0x236dc0: 0xac830084  sw          $v1, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236dbc) {
            ctx->pc = 0x236DE4u;
            goto label_236de4;
        }
    }
    ctx->pc = 0x236DC4u;
label_236dc4:
    // 0x236dc4: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x236dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_236dc8:
    // 0x236dc8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_236dcc:
    if (ctx->pc == 0x236DCCu) {
        ctx->pc = 0x236DD0u;
        goto label_236dd0;
    }
    ctx->pc = 0x236DC8u;
    {
        const bool branch_taken_0x236dc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x236dc8) {
            ctx->pc = 0x236DE4u;
            goto label_236de4;
        }
    }
    ctx->pc = 0x236DD0u;
label_236dd0:
    // 0x236dd0: 0x8083008c  lb          $v1, 0x8C($a0)
    ctx->pc = 0x236dd0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 140)));
label_236dd4:
    // 0x236dd4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_236dd8:
    if (ctx->pc == 0x236DD8u) {
        ctx->pc = 0x236DDCu;
        goto label_236ddc;
    }
    ctx->pc = 0x236DD4u;
    {
        const bool branch_taken_0x236dd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x236dd4) {
            ctx->pc = 0x236DE4u;
            goto label_236de4;
        }
    }
    ctx->pc = 0x236DDCu;
label_236ddc:
    // 0x236ddc: 0xc08d1c4  jal         func_234710
label_236de0:
    if (ctx->pc == 0x236DE0u) {
        ctx->pc = 0x236DE4u;
        goto label_236de4;
    }
    ctx->pc = 0x236DDCu;
    SET_GPR_U32(ctx, 31, 0x236DE4u);
    ctx->pc = 0x234710u;
    if (runtime->hasFunction(0x234710u)) {
        auto targetFn = runtime->lookupFunction(0x234710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236DE4u; }
        if (ctx->pc != 0x236DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234710_0x234710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236DE4u; }
        if (ctx->pc != 0x236DE4u) { return; }
    }
    ctx->pc = 0x236DE4u;
label_236de4:
    // 0x236de4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x236de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_236de8:
    // 0x236de8: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x236de8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_236dec:
    // 0x236dec: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x236decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_236df0:
    // 0x236df0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x236df0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_236df4:
    // 0x236df4: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x236df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_236df8:
    // 0x236df8: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x236df8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_236dfc:
    // 0x236dfc: 0x1060005f  beqz        $v1, . + 4 + (0x5F << 2)
label_236e00:
    if (ctx->pc == 0x236E00u) {
        ctx->pc = 0x236E00u;
            // 0x236e00: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x236E04u;
        goto label_236e04;
    }
    ctx->pc = 0x236DFCu;
    {
        const bool branch_taken_0x236dfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x236E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236DFCu;
            // 0x236e00: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236dfc) {
            ctx->pc = 0x236F7Cu;
            goto label_236f7c;
        }
    }
    ctx->pc = 0x236E04u;
label_236e04:
    // 0x236e04: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x236e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_236e08:
    // 0x236e08: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x236e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_236e0c:
    // 0x236e0c: 0x2463d618  addiu       $v1, $v1, -0x29E8
    ctx->pc = 0x236e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956568));
label_236e10:
    // 0x236e10: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x236e10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_236e14:
    // 0x236e14: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x236e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_236e18:
    // 0x236e18: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x236e18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_236e1c:
    // 0x236e1c: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x236e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_236e20:
    // 0x236e20: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x236e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_236e24:
    // 0x236e24: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x236e24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_236e28:
    // 0x236e28: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x236e28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_236e2c:
    // 0x236e2c: 0x10000053  b           . + 4 + (0x53 << 2)
label_236e30:
    if (ctx->pc == 0x236E30u) {
        ctx->pc = 0x236E34u;
        goto label_236e34;
    }
    ctx->pc = 0x236E2Cu;
    {
        const bool branch_taken_0x236e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x236e2c) {
            ctx->pc = 0x236F7Cu;
            goto label_236f7c;
        }
    }
    ctx->pc = 0x236E34u;
label_236e34:
    // 0x236e34: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x236e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_236e38:
    // 0x236e38: 0x8c630174  lw          $v1, 0x174($v1)
    ctx->pc = 0x236e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 372)));
label_236e3c:
    // 0x236e3c: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
label_236e40:
    if (ctx->pc == 0x236E40u) {
        ctx->pc = 0x236E44u;
        goto label_236e44;
    }
    ctx->pc = 0x236E3Cu;
    {
        const bool branch_taken_0x236e3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x236e3c) {
            ctx->pc = 0x236EE8u;
            goto label_236ee8;
        }
    }
    ctx->pc = 0x236E44u;
label_236e44:
    // 0x236e44: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x236e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_236e48:
    // 0x236e48: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x236e48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_236e4c:
    // 0x236e4c: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x236e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_236e50:
    // 0x236e50: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x236e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_236e54:
    // 0x236e54: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x236e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_236e58:
    // 0x236e58: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x236e58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_236e5c:
    // 0x236e5c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_236e60:
    if (ctx->pc == 0x236E60u) {
        ctx->pc = 0x236E60u;
            // 0x236e60: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x236E64u;
        goto label_236e64;
    }
    ctx->pc = 0x236E5Cu;
    {
        const bool branch_taken_0x236e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236E5Cu;
            // 0x236e60: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236e5c) {
            ctx->pc = 0x236E90u;
            goto label_236e90;
        }
    }
    ctx->pc = 0x236E64u;
label_236e64:
    // 0x236e64: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x236e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_236e68:
    // 0x236e68: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x236e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_236e6c:
    // 0x236e6c: 0x2442cd80  addiu       $v0, $v0, -0x3280
    ctx->pc = 0x236e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954368));
label_236e70:
    // 0x236e70: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x236e70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_236e74:
    // 0x236e74: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x236e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_236e78:
    // 0x236e78: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x236e78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_236e7c:
    // 0x236e7c: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x236e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_236e80:
    // 0x236e80: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x236e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_236e84:
    // 0x236e84: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x236e84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_236e88:
    // 0x236e88: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x236e88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_236e8c:
    // 0x236e8c: 0x0  nop
    ctx->pc = 0x236e8cu;
    // NOP
label_236e90:
    // 0x236e90: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x236e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_236e94:
    // 0x236e94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x236e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_236e98:
    // 0x236e98: 0xc08e9d0  jal         func_23A740
label_236e9c:
    if (ctx->pc == 0x236E9Cu) {
        ctx->pc = 0x236E9Cu;
            // 0x236e9c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x236EA0u;
        goto label_236ea0;
    }
    ctx->pc = 0x236E98u;
    SET_GPR_U32(ctx, 31, 0x236EA0u);
    ctx->pc = 0x236E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236E98u;
            // 0x236e9c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A740u;
    if (runtime->hasFunction(0x23A740u)) {
        auto targetFn = runtime->lookupFunction(0x23A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236EA0u; }
        if (ctx->pc != 0x236EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023A740_0x23a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236EA0u; }
        if (ctx->pc != 0x236EA0u) { return; }
    }
    ctx->pc = 0x236EA0u;
label_236ea0:
    // 0x236ea0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x236ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_236ea4:
    // 0x236ea4: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x236ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_236ea8:
    // 0x236ea8: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x236ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_236eac:
    // 0x236eac: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x236eacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_236eb0:
    // 0x236eb0: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x236eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_236eb4:
    // 0x236eb4: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x236eb4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_236eb8:
    // 0x236eb8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_236ebc:
    if (ctx->pc == 0x236EBCu) {
        ctx->pc = 0x236EBCu;
            // 0x236ebc: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x236EC0u;
        goto label_236ec0;
    }
    ctx->pc = 0x236EB8u;
    {
        const bool branch_taken_0x236eb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x236EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236EB8u;
            // 0x236ebc: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236eb8) {
            ctx->pc = 0x236EE8u;
            goto label_236ee8;
        }
    }
    ctx->pc = 0x236EC0u;
label_236ec0:
    // 0x236ec0: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x236ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_236ec4:
    // 0x236ec4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x236ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_236ec8:
    // 0x236ec8: 0x2463cce0  addiu       $v1, $v1, -0x3320
    ctx->pc = 0x236ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954208));
label_236ecc:
    // 0x236ecc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x236eccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_236ed0:
    // 0x236ed0: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x236ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_236ed4:
    // 0x236ed4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x236ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_236ed8:
    // 0x236ed8: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x236ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_236edc:
    // 0x236edc: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x236edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_236ee0:
    // 0x236ee0: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x236ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_236ee4:
    // 0x236ee4: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x236ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_236ee8:
    // 0x236ee8: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x236ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_236eec:
    // 0x236eec: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x236eecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_236ef0:
    // 0x236ef0: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x236ef0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_236ef4:
    // 0x236ef4: 0x1460ff77  bnez        $v1, . + 4 + (-0x89 << 2)
label_236ef8:
    if (ctx->pc == 0x236EF8u) {
        ctx->pc = 0x236EF8u;
            // 0x236ef8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x236EFCu;
        goto label_236efc;
    }
    ctx->pc = 0x236EF4u;
    {
        const bool branch_taken_0x236ef4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x236EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236EF4u;
            // 0x236ef8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236ef4) {
            ctx->pc = 0x236CD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_236cd4;
        }
    }
    ctx->pc = 0x236EFCu;
label_236efc:
    // 0x236efc: 0x0  nop
    ctx->pc = 0x236efcu;
    // NOP
label_236f00:
    // 0x236f00: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x236f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_236f04:
    // 0x236f04: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x236f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_236f08:
    // 0x236f08: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x236f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_236f0c:
    // 0x236f0c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_236f10:
    if (ctx->pc == 0x236F10u) {
        ctx->pc = 0x236F10u;
            // 0x236f10: 0xac830084  sw          $v1, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
        ctx->pc = 0x236F14u;
        goto label_236f14;
    }
    ctx->pc = 0x236F0Cu;
    {
        const bool branch_taken_0x236f0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x236F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236F0Cu;
            // 0x236f10: 0xac830084  sw          $v1, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236f0c) {
            ctx->pc = 0x236F34u;
            goto label_236f34;
        }
    }
    ctx->pc = 0x236F14u;
label_236f14:
    // 0x236f14: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x236f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_236f18:
    // 0x236f18: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_236f1c:
    if (ctx->pc == 0x236F1Cu) {
        ctx->pc = 0x236F20u;
        goto label_236f20;
    }
    ctx->pc = 0x236F18u;
    {
        const bool branch_taken_0x236f18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x236f18) {
            ctx->pc = 0x236F34u;
            goto label_236f34;
        }
    }
    ctx->pc = 0x236F20u;
label_236f20:
    // 0x236f20: 0x8083008c  lb          $v1, 0x8C($a0)
    ctx->pc = 0x236f20u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 140)));
label_236f24:
    // 0x236f24: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_236f28:
    if (ctx->pc == 0x236F28u) {
        ctx->pc = 0x236F2Cu;
        goto label_236f2c;
    }
    ctx->pc = 0x236F24u;
    {
        const bool branch_taken_0x236f24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x236f24) {
            ctx->pc = 0x236F34u;
            goto label_236f34;
        }
    }
    ctx->pc = 0x236F2Cu;
label_236f2c:
    // 0x236f2c: 0xc08d1c4  jal         func_234710
label_236f30:
    if (ctx->pc == 0x236F30u) {
        ctx->pc = 0x236F34u;
        goto label_236f34;
    }
    ctx->pc = 0x236F2Cu;
    SET_GPR_U32(ctx, 31, 0x236F34u);
    ctx->pc = 0x234710u;
    if (runtime->hasFunction(0x234710u)) {
        auto targetFn = runtime->lookupFunction(0x234710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236F34u; }
        if (ctx->pc != 0x236F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234710_0x234710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236F34u; }
        if (ctx->pc != 0x236F34u) { return; }
    }
    ctx->pc = 0x236F34u;
label_236f34:
    // 0x236f34: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x236f34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_236f38:
    // 0x236f38: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x236f38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_236f3c:
    // 0x236f3c: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x236f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_236f40:
    // 0x236f40: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x236f40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_236f44:
    // 0x236f44: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x236f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_236f48:
    // 0x236f48: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x236f48u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_236f4c:
    // 0x236f4c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_236f50:
    if (ctx->pc == 0x236F50u) {
        ctx->pc = 0x236F50u;
            // 0x236f50: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x236F54u;
        goto label_236f54;
    }
    ctx->pc = 0x236F4Cu;
    {
        const bool branch_taken_0x236f4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x236F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236F4Cu;
            // 0x236f50: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236f4c) {
            ctx->pc = 0x236F7Cu;
            goto label_236f7c;
        }
    }
    ctx->pc = 0x236F54u;
label_236f54:
    // 0x236f54: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x236f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_236f58:
    // 0x236f58: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x236f58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_236f5c:
    // 0x236f5c: 0x2463d618  addiu       $v1, $v1, -0x29E8
    ctx->pc = 0x236f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956568));
label_236f60:
    // 0x236f60: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x236f60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_236f64:
    // 0x236f64: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x236f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_236f68:
    // 0x236f68: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x236f68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_236f6c:
    // 0x236f6c: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x236f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_236f70:
    // 0x236f70: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x236f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_236f74:
    // 0x236f74: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x236f74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_236f78:
    // 0x236f78: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x236f78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_236f7c:
    // 0x236f7c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x236f7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_236f80:
    // 0x236f80: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x236f80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_236f84:
    // 0x236f84: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x236f84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_236f88:
    // 0x236f88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x236f88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_236f8c:
    // 0x236f8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x236f8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_236f90:
    // 0x236f90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x236f90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_236f94:
    // 0x236f94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x236f94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_236f98:
    // 0x236f98: 0x3e00008  jr          $ra
label_236f9c:
    if (ctx->pc == 0x236F9Cu) {
        ctx->pc = 0x236F9Cu;
            // 0x236f9c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x236FA0u;
        goto label_fallthrough_0x236f98;
    }
    ctx->pc = 0x236F98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236F98u;
            // 0x236f9c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x236f98:
    ctx->pc = 0x236FA0u;
}
