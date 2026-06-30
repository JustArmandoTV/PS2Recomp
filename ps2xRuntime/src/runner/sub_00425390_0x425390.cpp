#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00425390
// Address: 0x425390 - 0x426580
void sub_00425390_0x425390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00425390_0x425390");
#endif

    switch (ctx->pc) {
        case 0x425390u: goto label_425390;
        case 0x425394u: goto label_425394;
        case 0x425398u: goto label_425398;
        case 0x42539cu: goto label_42539c;
        case 0x4253a0u: goto label_4253a0;
        case 0x4253a4u: goto label_4253a4;
        case 0x4253a8u: goto label_4253a8;
        case 0x4253acu: goto label_4253ac;
        case 0x4253b0u: goto label_4253b0;
        case 0x4253b4u: goto label_4253b4;
        case 0x4253b8u: goto label_4253b8;
        case 0x4253bcu: goto label_4253bc;
        case 0x4253c0u: goto label_4253c0;
        case 0x4253c4u: goto label_4253c4;
        case 0x4253c8u: goto label_4253c8;
        case 0x4253ccu: goto label_4253cc;
        case 0x4253d0u: goto label_4253d0;
        case 0x4253d4u: goto label_4253d4;
        case 0x4253d8u: goto label_4253d8;
        case 0x4253dcu: goto label_4253dc;
        case 0x4253e0u: goto label_4253e0;
        case 0x4253e4u: goto label_4253e4;
        case 0x4253e8u: goto label_4253e8;
        case 0x4253ecu: goto label_4253ec;
        case 0x4253f0u: goto label_4253f0;
        case 0x4253f4u: goto label_4253f4;
        case 0x4253f8u: goto label_4253f8;
        case 0x4253fcu: goto label_4253fc;
        case 0x425400u: goto label_425400;
        case 0x425404u: goto label_425404;
        case 0x425408u: goto label_425408;
        case 0x42540cu: goto label_42540c;
        case 0x425410u: goto label_425410;
        case 0x425414u: goto label_425414;
        case 0x425418u: goto label_425418;
        case 0x42541cu: goto label_42541c;
        case 0x425420u: goto label_425420;
        case 0x425424u: goto label_425424;
        case 0x425428u: goto label_425428;
        case 0x42542cu: goto label_42542c;
        case 0x425430u: goto label_425430;
        case 0x425434u: goto label_425434;
        case 0x425438u: goto label_425438;
        case 0x42543cu: goto label_42543c;
        case 0x425440u: goto label_425440;
        case 0x425444u: goto label_425444;
        case 0x425448u: goto label_425448;
        case 0x42544cu: goto label_42544c;
        case 0x425450u: goto label_425450;
        case 0x425454u: goto label_425454;
        case 0x425458u: goto label_425458;
        case 0x42545cu: goto label_42545c;
        case 0x425460u: goto label_425460;
        case 0x425464u: goto label_425464;
        case 0x425468u: goto label_425468;
        case 0x42546cu: goto label_42546c;
        case 0x425470u: goto label_425470;
        case 0x425474u: goto label_425474;
        case 0x425478u: goto label_425478;
        case 0x42547cu: goto label_42547c;
        case 0x425480u: goto label_425480;
        case 0x425484u: goto label_425484;
        case 0x425488u: goto label_425488;
        case 0x42548cu: goto label_42548c;
        case 0x425490u: goto label_425490;
        case 0x425494u: goto label_425494;
        case 0x425498u: goto label_425498;
        case 0x42549cu: goto label_42549c;
        case 0x4254a0u: goto label_4254a0;
        case 0x4254a4u: goto label_4254a4;
        case 0x4254a8u: goto label_4254a8;
        case 0x4254acu: goto label_4254ac;
        case 0x4254b0u: goto label_4254b0;
        case 0x4254b4u: goto label_4254b4;
        case 0x4254b8u: goto label_4254b8;
        case 0x4254bcu: goto label_4254bc;
        case 0x4254c0u: goto label_4254c0;
        case 0x4254c4u: goto label_4254c4;
        case 0x4254c8u: goto label_4254c8;
        case 0x4254ccu: goto label_4254cc;
        case 0x4254d0u: goto label_4254d0;
        case 0x4254d4u: goto label_4254d4;
        case 0x4254d8u: goto label_4254d8;
        case 0x4254dcu: goto label_4254dc;
        case 0x4254e0u: goto label_4254e0;
        case 0x4254e4u: goto label_4254e4;
        case 0x4254e8u: goto label_4254e8;
        case 0x4254ecu: goto label_4254ec;
        case 0x4254f0u: goto label_4254f0;
        case 0x4254f4u: goto label_4254f4;
        case 0x4254f8u: goto label_4254f8;
        case 0x4254fcu: goto label_4254fc;
        case 0x425500u: goto label_425500;
        case 0x425504u: goto label_425504;
        case 0x425508u: goto label_425508;
        case 0x42550cu: goto label_42550c;
        case 0x425510u: goto label_425510;
        case 0x425514u: goto label_425514;
        case 0x425518u: goto label_425518;
        case 0x42551cu: goto label_42551c;
        case 0x425520u: goto label_425520;
        case 0x425524u: goto label_425524;
        case 0x425528u: goto label_425528;
        case 0x42552cu: goto label_42552c;
        case 0x425530u: goto label_425530;
        case 0x425534u: goto label_425534;
        case 0x425538u: goto label_425538;
        case 0x42553cu: goto label_42553c;
        case 0x425540u: goto label_425540;
        case 0x425544u: goto label_425544;
        case 0x425548u: goto label_425548;
        case 0x42554cu: goto label_42554c;
        case 0x425550u: goto label_425550;
        case 0x425554u: goto label_425554;
        case 0x425558u: goto label_425558;
        case 0x42555cu: goto label_42555c;
        case 0x425560u: goto label_425560;
        case 0x425564u: goto label_425564;
        case 0x425568u: goto label_425568;
        case 0x42556cu: goto label_42556c;
        case 0x425570u: goto label_425570;
        case 0x425574u: goto label_425574;
        case 0x425578u: goto label_425578;
        case 0x42557cu: goto label_42557c;
        case 0x425580u: goto label_425580;
        case 0x425584u: goto label_425584;
        case 0x425588u: goto label_425588;
        case 0x42558cu: goto label_42558c;
        case 0x425590u: goto label_425590;
        case 0x425594u: goto label_425594;
        case 0x425598u: goto label_425598;
        case 0x42559cu: goto label_42559c;
        case 0x4255a0u: goto label_4255a0;
        case 0x4255a4u: goto label_4255a4;
        case 0x4255a8u: goto label_4255a8;
        case 0x4255acu: goto label_4255ac;
        case 0x4255b0u: goto label_4255b0;
        case 0x4255b4u: goto label_4255b4;
        case 0x4255b8u: goto label_4255b8;
        case 0x4255bcu: goto label_4255bc;
        case 0x4255c0u: goto label_4255c0;
        case 0x4255c4u: goto label_4255c4;
        case 0x4255c8u: goto label_4255c8;
        case 0x4255ccu: goto label_4255cc;
        case 0x4255d0u: goto label_4255d0;
        case 0x4255d4u: goto label_4255d4;
        case 0x4255d8u: goto label_4255d8;
        case 0x4255dcu: goto label_4255dc;
        case 0x4255e0u: goto label_4255e0;
        case 0x4255e4u: goto label_4255e4;
        case 0x4255e8u: goto label_4255e8;
        case 0x4255ecu: goto label_4255ec;
        case 0x4255f0u: goto label_4255f0;
        case 0x4255f4u: goto label_4255f4;
        case 0x4255f8u: goto label_4255f8;
        case 0x4255fcu: goto label_4255fc;
        case 0x425600u: goto label_425600;
        case 0x425604u: goto label_425604;
        case 0x425608u: goto label_425608;
        case 0x42560cu: goto label_42560c;
        case 0x425610u: goto label_425610;
        case 0x425614u: goto label_425614;
        case 0x425618u: goto label_425618;
        case 0x42561cu: goto label_42561c;
        case 0x425620u: goto label_425620;
        case 0x425624u: goto label_425624;
        case 0x425628u: goto label_425628;
        case 0x42562cu: goto label_42562c;
        case 0x425630u: goto label_425630;
        case 0x425634u: goto label_425634;
        case 0x425638u: goto label_425638;
        case 0x42563cu: goto label_42563c;
        case 0x425640u: goto label_425640;
        case 0x425644u: goto label_425644;
        case 0x425648u: goto label_425648;
        case 0x42564cu: goto label_42564c;
        case 0x425650u: goto label_425650;
        case 0x425654u: goto label_425654;
        case 0x425658u: goto label_425658;
        case 0x42565cu: goto label_42565c;
        case 0x425660u: goto label_425660;
        case 0x425664u: goto label_425664;
        case 0x425668u: goto label_425668;
        case 0x42566cu: goto label_42566c;
        case 0x425670u: goto label_425670;
        case 0x425674u: goto label_425674;
        case 0x425678u: goto label_425678;
        case 0x42567cu: goto label_42567c;
        case 0x425680u: goto label_425680;
        case 0x425684u: goto label_425684;
        case 0x425688u: goto label_425688;
        case 0x42568cu: goto label_42568c;
        case 0x425690u: goto label_425690;
        case 0x425694u: goto label_425694;
        case 0x425698u: goto label_425698;
        case 0x42569cu: goto label_42569c;
        case 0x4256a0u: goto label_4256a0;
        case 0x4256a4u: goto label_4256a4;
        case 0x4256a8u: goto label_4256a8;
        case 0x4256acu: goto label_4256ac;
        case 0x4256b0u: goto label_4256b0;
        case 0x4256b4u: goto label_4256b4;
        case 0x4256b8u: goto label_4256b8;
        case 0x4256bcu: goto label_4256bc;
        case 0x4256c0u: goto label_4256c0;
        case 0x4256c4u: goto label_4256c4;
        case 0x4256c8u: goto label_4256c8;
        case 0x4256ccu: goto label_4256cc;
        case 0x4256d0u: goto label_4256d0;
        case 0x4256d4u: goto label_4256d4;
        case 0x4256d8u: goto label_4256d8;
        case 0x4256dcu: goto label_4256dc;
        case 0x4256e0u: goto label_4256e0;
        case 0x4256e4u: goto label_4256e4;
        case 0x4256e8u: goto label_4256e8;
        case 0x4256ecu: goto label_4256ec;
        case 0x4256f0u: goto label_4256f0;
        case 0x4256f4u: goto label_4256f4;
        case 0x4256f8u: goto label_4256f8;
        case 0x4256fcu: goto label_4256fc;
        case 0x425700u: goto label_425700;
        case 0x425704u: goto label_425704;
        case 0x425708u: goto label_425708;
        case 0x42570cu: goto label_42570c;
        case 0x425710u: goto label_425710;
        case 0x425714u: goto label_425714;
        case 0x425718u: goto label_425718;
        case 0x42571cu: goto label_42571c;
        case 0x425720u: goto label_425720;
        case 0x425724u: goto label_425724;
        case 0x425728u: goto label_425728;
        case 0x42572cu: goto label_42572c;
        case 0x425730u: goto label_425730;
        case 0x425734u: goto label_425734;
        case 0x425738u: goto label_425738;
        case 0x42573cu: goto label_42573c;
        case 0x425740u: goto label_425740;
        case 0x425744u: goto label_425744;
        case 0x425748u: goto label_425748;
        case 0x42574cu: goto label_42574c;
        case 0x425750u: goto label_425750;
        case 0x425754u: goto label_425754;
        case 0x425758u: goto label_425758;
        case 0x42575cu: goto label_42575c;
        case 0x425760u: goto label_425760;
        case 0x425764u: goto label_425764;
        case 0x425768u: goto label_425768;
        case 0x42576cu: goto label_42576c;
        case 0x425770u: goto label_425770;
        case 0x425774u: goto label_425774;
        case 0x425778u: goto label_425778;
        case 0x42577cu: goto label_42577c;
        case 0x425780u: goto label_425780;
        case 0x425784u: goto label_425784;
        case 0x425788u: goto label_425788;
        case 0x42578cu: goto label_42578c;
        case 0x425790u: goto label_425790;
        case 0x425794u: goto label_425794;
        case 0x425798u: goto label_425798;
        case 0x42579cu: goto label_42579c;
        case 0x4257a0u: goto label_4257a0;
        case 0x4257a4u: goto label_4257a4;
        case 0x4257a8u: goto label_4257a8;
        case 0x4257acu: goto label_4257ac;
        case 0x4257b0u: goto label_4257b0;
        case 0x4257b4u: goto label_4257b4;
        case 0x4257b8u: goto label_4257b8;
        case 0x4257bcu: goto label_4257bc;
        case 0x4257c0u: goto label_4257c0;
        case 0x4257c4u: goto label_4257c4;
        case 0x4257c8u: goto label_4257c8;
        case 0x4257ccu: goto label_4257cc;
        case 0x4257d0u: goto label_4257d0;
        case 0x4257d4u: goto label_4257d4;
        case 0x4257d8u: goto label_4257d8;
        case 0x4257dcu: goto label_4257dc;
        case 0x4257e0u: goto label_4257e0;
        case 0x4257e4u: goto label_4257e4;
        case 0x4257e8u: goto label_4257e8;
        case 0x4257ecu: goto label_4257ec;
        case 0x4257f0u: goto label_4257f0;
        case 0x4257f4u: goto label_4257f4;
        case 0x4257f8u: goto label_4257f8;
        case 0x4257fcu: goto label_4257fc;
        case 0x425800u: goto label_425800;
        case 0x425804u: goto label_425804;
        case 0x425808u: goto label_425808;
        case 0x42580cu: goto label_42580c;
        case 0x425810u: goto label_425810;
        case 0x425814u: goto label_425814;
        case 0x425818u: goto label_425818;
        case 0x42581cu: goto label_42581c;
        case 0x425820u: goto label_425820;
        case 0x425824u: goto label_425824;
        case 0x425828u: goto label_425828;
        case 0x42582cu: goto label_42582c;
        case 0x425830u: goto label_425830;
        case 0x425834u: goto label_425834;
        case 0x425838u: goto label_425838;
        case 0x42583cu: goto label_42583c;
        case 0x425840u: goto label_425840;
        case 0x425844u: goto label_425844;
        case 0x425848u: goto label_425848;
        case 0x42584cu: goto label_42584c;
        case 0x425850u: goto label_425850;
        case 0x425854u: goto label_425854;
        case 0x425858u: goto label_425858;
        case 0x42585cu: goto label_42585c;
        case 0x425860u: goto label_425860;
        case 0x425864u: goto label_425864;
        case 0x425868u: goto label_425868;
        case 0x42586cu: goto label_42586c;
        case 0x425870u: goto label_425870;
        case 0x425874u: goto label_425874;
        case 0x425878u: goto label_425878;
        case 0x42587cu: goto label_42587c;
        case 0x425880u: goto label_425880;
        case 0x425884u: goto label_425884;
        case 0x425888u: goto label_425888;
        case 0x42588cu: goto label_42588c;
        case 0x425890u: goto label_425890;
        case 0x425894u: goto label_425894;
        case 0x425898u: goto label_425898;
        case 0x42589cu: goto label_42589c;
        case 0x4258a0u: goto label_4258a0;
        case 0x4258a4u: goto label_4258a4;
        case 0x4258a8u: goto label_4258a8;
        case 0x4258acu: goto label_4258ac;
        case 0x4258b0u: goto label_4258b0;
        case 0x4258b4u: goto label_4258b4;
        case 0x4258b8u: goto label_4258b8;
        case 0x4258bcu: goto label_4258bc;
        case 0x4258c0u: goto label_4258c0;
        case 0x4258c4u: goto label_4258c4;
        case 0x4258c8u: goto label_4258c8;
        case 0x4258ccu: goto label_4258cc;
        case 0x4258d0u: goto label_4258d0;
        case 0x4258d4u: goto label_4258d4;
        case 0x4258d8u: goto label_4258d8;
        case 0x4258dcu: goto label_4258dc;
        case 0x4258e0u: goto label_4258e0;
        case 0x4258e4u: goto label_4258e4;
        case 0x4258e8u: goto label_4258e8;
        case 0x4258ecu: goto label_4258ec;
        case 0x4258f0u: goto label_4258f0;
        case 0x4258f4u: goto label_4258f4;
        case 0x4258f8u: goto label_4258f8;
        case 0x4258fcu: goto label_4258fc;
        case 0x425900u: goto label_425900;
        case 0x425904u: goto label_425904;
        case 0x425908u: goto label_425908;
        case 0x42590cu: goto label_42590c;
        case 0x425910u: goto label_425910;
        case 0x425914u: goto label_425914;
        case 0x425918u: goto label_425918;
        case 0x42591cu: goto label_42591c;
        case 0x425920u: goto label_425920;
        case 0x425924u: goto label_425924;
        case 0x425928u: goto label_425928;
        case 0x42592cu: goto label_42592c;
        case 0x425930u: goto label_425930;
        case 0x425934u: goto label_425934;
        case 0x425938u: goto label_425938;
        case 0x42593cu: goto label_42593c;
        case 0x425940u: goto label_425940;
        case 0x425944u: goto label_425944;
        case 0x425948u: goto label_425948;
        case 0x42594cu: goto label_42594c;
        case 0x425950u: goto label_425950;
        case 0x425954u: goto label_425954;
        case 0x425958u: goto label_425958;
        case 0x42595cu: goto label_42595c;
        case 0x425960u: goto label_425960;
        case 0x425964u: goto label_425964;
        case 0x425968u: goto label_425968;
        case 0x42596cu: goto label_42596c;
        case 0x425970u: goto label_425970;
        case 0x425974u: goto label_425974;
        case 0x425978u: goto label_425978;
        case 0x42597cu: goto label_42597c;
        case 0x425980u: goto label_425980;
        case 0x425984u: goto label_425984;
        case 0x425988u: goto label_425988;
        case 0x42598cu: goto label_42598c;
        case 0x425990u: goto label_425990;
        case 0x425994u: goto label_425994;
        case 0x425998u: goto label_425998;
        case 0x42599cu: goto label_42599c;
        case 0x4259a0u: goto label_4259a0;
        case 0x4259a4u: goto label_4259a4;
        case 0x4259a8u: goto label_4259a8;
        case 0x4259acu: goto label_4259ac;
        case 0x4259b0u: goto label_4259b0;
        case 0x4259b4u: goto label_4259b4;
        case 0x4259b8u: goto label_4259b8;
        case 0x4259bcu: goto label_4259bc;
        case 0x4259c0u: goto label_4259c0;
        case 0x4259c4u: goto label_4259c4;
        case 0x4259c8u: goto label_4259c8;
        case 0x4259ccu: goto label_4259cc;
        case 0x4259d0u: goto label_4259d0;
        case 0x4259d4u: goto label_4259d4;
        case 0x4259d8u: goto label_4259d8;
        case 0x4259dcu: goto label_4259dc;
        case 0x4259e0u: goto label_4259e0;
        case 0x4259e4u: goto label_4259e4;
        case 0x4259e8u: goto label_4259e8;
        case 0x4259ecu: goto label_4259ec;
        case 0x4259f0u: goto label_4259f0;
        case 0x4259f4u: goto label_4259f4;
        case 0x4259f8u: goto label_4259f8;
        case 0x4259fcu: goto label_4259fc;
        case 0x425a00u: goto label_425a00;
        case 0x425a04u: goto label_425a04;
        case 0x425a08u: goto label_425a08;
        case 0x425a0cu: goto label_425a0c;
        case 0x425a10u: goto label_425a10;
        case 0x425a14u: goto label_425a14;
        case 0x425a18u: goto label_425a18;
        case 0x425a1cu: goto label_425a1c;
        case 0x425a20u: goto label_425a20;
        case 0x425a24u: goto label_425a24;
        case 0x425a28u: goto label_425a28;
        case 0x425a2cu: goto label_425a2c;
        case 0x425a30u: goto label_425a30;
        case 0x425a34u: goto label_425a34;
        case 0x425a38u: goto label_425a38;
        case 0x425a3cu: goto label_425a3c;
        case 0x425a40u: goto label_425a40;
        case 0x425a44u: goto label_425a44;
        case 0x425a48u: goto label_425a48;
        case 0x425a4cu: goto label_425a4c;
        case 0x425a50u: goto label_425a50;
        case 0x425a54u: goto label_425a54;
        case 0x425a58u: goto label_425a58;
        case 0x425a5cu: goto label_425a5c;
        case 0x425a60u: goto label_425a60;
        case 0x425a64u: goto label_425a64;
        case 0x425a68u: goto label_425a68;
        case 0x425a6cu: goto label_425a6c;
        case 0x425a70u: goto label_425a70;
        case 0x425a74u: goto label_425a74;
        case 0x425a78u: goto label_425a78;
        case 0x425a7cu: goto label_425a7c;
        case 0x425a80u: goto label_425a80;
        case 0x425a84u: goto label_425a84;
        case 0x425a88u: goto label_425a88;
        case 0x425a8cu: goto label_425a8c;
        case 0x425a90u: goto label_425a90;
        case 0x425a94u: goto label_425a94;
        case 0x425a98u: goto label_425a98;
        case 0x425a9cu: goto label_425a9c;
        case 0x425aa0u: goto label_425aa0;
        case 0x425aa4u: goto label_425aa4;
        case 0x425aa8u: goto label_425aa8;
        case 0x425aacu: goto label_425aac;
        case 0x425ab0u: goto label_425ab0;
        case 0x425ab4u: goto label_425ab4;
        case 0x425ab8u: goto label_425ab8;
        case 0x425abcu: goto label_425abc;
        case 0x425ac0u: goto label_425ac0;
        case 0x425ac4u: goto label_425ac4;
        case 0x425ac8u: goto label_425ac8;
        case 0x425accu: goto label_425acc;
        case 0x425ad0u: goto label_425ad0;
        case 0x425ad4u: goto label_425ad4;
        case 0x425ad8u: goto label_425ad8;
        case 0x425adcu: goto label_425adc;
        case 0x425ae0u: goto label_425ae0;
        case 0x425ae4u: goto label_425ae4;
        case 0x425ae8u: goto label_425ae8;
        case 0x425aecu: goto label_425aec;
        case 0x425af0u: goto label_425af0;
        case 0x425af4u: goto label_425af4;
        case 0x425af8u: goto label_425af8;
        case 0x425afcu: goto label_425afc;
        case 0x425b00u: goto label_425b00;
        case 0x425b04u: goto label_425b04;
        case 0x425b08u: goto label_425b08;
        case 0x425b0cu: goto label_425b0c;
        case 0x425b10u: goto label_425b10;
        case 0x425b14u: goto label_425b14;
        case 0x425b18u: goto label_425b18;
        case 0x425b1cu: goto label_425b1c;
        case 0x425b20u: goto label_425b20;
        case 0x425b24u: goto label_425b24;
        case 0x425b28u: goto label_425b28;
        case 0x425b2cu: goto label_425b2c;
        case 0x425b30u: goto label_425b30;
        case 0x425b34u: goto label_425b34;
        case 0x425b38u: goto label_425b38;
        case 0x425b3cu: goto label_425b3c;
        case 0x425b40u: goto label_425b40;
        case 0x425b44u: goto label_425b44;
        case 0x425b48u: goto label_425b48;
        case 0x425b4cu: goto label_425b4c;
        case 0x425b50u: goto label_425b50;
        case 0x425b54u: goto label_425b54;
        case 0x425b58u: goto label_425b58;
        case 0x425b5cu: goto label_425b5c;
        case 0x425b60u: goto label_425b60;
        case 0x425b64u: goto label_425b64;
        case 0x425b68u: goto label_425b68;
        case 0x425b6cu: goto label_425b6c;
        case 0x425b70u: goto label_425b70;
        case 0x425b74u: goto label_425b74;
        case 0x425b78u: goto label_425b78;
        case 0x425b7cu: goto label_425b7c;
        case 0x425b80u: goto label_425b80;
        case 0x425b84u: goto label_425b84;
        case 0x425b88u: goto label_425b88;
        case 0x425b8cu: goto label_425b8c;
        case 0x425b90u: goto label_425b90;
        case 0x425b94u: goto label_425b94;
        case 0x425b98u: goto label_425b98;
        case 0x425b9cu: goto label_425b9c;
        case 0x425ba0u: goto label_425ba0;
        case 0x425ba4u: goto label_425ba4;
        case 0x425ba8u: goto label_425ba8;
        case 0x425bacu: goto label_425bac;
        case 0x425bb0u: goto label_425bb0;
        case 0x425bb4u: goto label_425bb4;
        case 0x425bb8u: goto label_425bb8;
        case 0x425bbcu: goto label_425bbc;
        case 0x425bc0u: goto label_425bc0;
        case 0x425bc4u: goto label_425bc4;
        case 0x425bc8u: goto label_425bc8;
        case 0x425bccu: goto label_425bcc;
        case 0x425bd0u: goto label_425bd0;
        case 0x425bd4u: goto label_425bd4;
        case 0x425bd8u: goto label_425bd8;
        case 0x425bdcu: goto label_425bdc;
        case 0x425be0u: goto label_425be0;
        case 0x425be4u: goto label_425be4;
        case 0x425be8u: goto label_425be8;
        case 0x425becu: goto label_425bec;
        case 0x425bf0u: goto label_425bf0;
        case 0x425bf4u: goto label_425bf4;
        case 0x425bf8u: goto label_425bf8;
        case 0x425bfcu: goto label_425bfc;
        case 0x425c00u: goto label_425c00;
        case 0x425c04u: goto label_425c04;
        case 0x425c08u: goto label_425c08;
        case 0x425c0cu: goto label_425c0c;
        case 0x425c10u: goto label_425c10;
        case 0x425c14u: goto label_425c14;
        case 0x425c18u: goto label_425c18;
        case 0x425c1cu: goto label_425c1c;
        case 0x425c20u: goto label_425c20;
        case 0x425c24u: goto label_425c24;
        case 0x425c28u: goto label_425c28;
        case 0x425c2cu: goto label_425c2c;
        case 0x425c30u: goto label_425c30;
        case 0x425c34u: goto label_425c34;
        case 0x425c38u: goto label_425c38;
        case 0x425c3cu: goto label_425c3c;
        case 0x425c40u: goto label_425c40;
        case 0x425c44u: goto label_425c44;
        case 0x425c48u: goto label_425c48;
        case 0x425c4cu: goto label_425c4c;
        case 0x425c50u: goto label_425c50;
        case 0x425c54u: goto label_425c54;
        case 0x425c58u: goto label_425c58;
        case 0x425c5cu: goto label_425c5c;
        case 0x425c60u: goto label_425c60;
        case 0x425c64u: goto label_425c64;
        case 0x425c68u: goto label_425c68;
        case 0x425c6cu: goto label_425c6c;
        case 0x425c70u: goto label_425c70;
        case 0x425c74u: goto label_425c74;
        case 0x425c78u: goto label_425c78;
        case 0x425c7cu: goto label_425c7c;
        case 0x425c80u: goto label_425c80;
        case 0x425c84u: goto label_425c84;
        case 0x425c88u: goto label_425c88;
        case 0x425c8cu: goto label_425c8c;
        case 0x425c90u: goto label_425c90;
        case 0x425c94u: goto label_425c94;
        case 0x425c98u: goto label_425c98;
        case 0x425c9cu: goto label_425c9c;
        case 0x425ca0u: goto label_425ca0;
        case 0x425ca4u: goto label_425ca4;
        case 0x425ca8u: goto label_425ca8;
        case 0x425cacu: goto label_425cac;
        case 0x425cb0u: goto label_425cb0;
        case 0x425cb4u: goto label_425cb4;
        case 0x425cb8u: goto label_425cb8;
        case 0x425cbcu: goto label_425cbc;
        case 0x425cc0u: goto label_425cc0;
        case 0x425cc4u: goto label_425cc4;
        case 0x425cc8u: goto label_425cc8;
        case 0x425cccu: goto label_425ccc;
        case 0x425cd0u: goto label_425cd0;
        case 0x425cd4u: goto label_425cd4;
        case 0x425cd8u: goto label_425cd8;
        case 0x425cdcu: goto label_425cdc;
        case 0x425ce0u: goto label_425ce0;
        case 0x425ce4u: goto label_425ce4;
        case 0x425ce8u: goto label_425ce8;
        case 0x425cecu: goto label_425cec;
        case 0x425cf0u: goto label_425cf0;
        case 0x425cf4u: goto label_425cf4;
        case 0x425cf8u: goto label_425cf8;
        case 0x425cfcu: goto label_425cfc;
        case 0x425d00u: goto label_425d00;
        case 0x425d04u: goto label_425d04;
        case 0x425d08u: goto label_425d08;
        case 0x425d0cu: goto label_425d0c;
        case 0x425d10u: goto label_425d10;
        case 0x425d14u: goto label_425d14;
        case 0x425d18u: goto label_425d18;
        case 0x425d1cu: goto label_425d1c;
        case 0x425d20u: goto label_425d20;
        case 0x425d24u: goto label_425d24;
        case 0x425d28u: goto label_425d28;
        case 0x425d2cu: goto label_425d2c;
        case 0x425d30u: goto label_425d30;
        case 0x425d34u: goto label_425d34;
        case 0x425d38u: goto label_425d38;
        case 0x425d3cu: goto label_425d3c;
        case 0x425d40u: goto label_425d40;
        case 0x425d44u: goto label_425d44;
        case 0x425d48u: goto label_425d48;
        case 0x425d4cu: goto label_425d4c;
        case 0x425d50u: goto label_425d50;
        case 0x425d54u: goto label_425d54;
        case 0x425d58u: goto label_425d58;
        case 0x425d5cu: goto label_425d5c;
        case 0x425d60u: goto label_425d60;
        case 0x425d64u: goto label_425d64;
        case 0x425d68u: goto label_425d68;
        case 0x425d6cu: goto label_425d6c;
        case 0x425d70u: goto label_425d70;
        case 0x425d74u: goto label_425d74;
        case 0x425d78u: goto label_425d78;
        case 0x425d7cu: goto label_425d7c;
        case 0x425d80u: goto label_425d80;
        case 0x425d84u: goto label_425d84;
        case 0x425d88u: goto label_425d88;
        case 0x425d8cu: goto label_425d8c;
        case 0x425d90u: goto label_425d90;
        case 0x425d94u: goto label_425d94;
        case 0x425d98u: goto label_425d98;
        case 0x425d9cu: goto label_425d9c;
        case 0x425da0u: goto label_425da0;
        case 0x425da4u: goto label_425da4;
        case 0x425da8u: goto label_425da8;
        case 0x425dacu: goto label_425dac;
        case 0x425db0u: goto label_425db0;
        case 0x425db4u: goto label_425db4;
        case 0x425db8u: goto label_425db8;
        case 0x425dbcu: goto label_425dbc;
        case 0x425dc0u: goto label_425dc0;
        case 0x425dc4u: goto label_425dc4;
        case 0x425dc8u: goto label_425dc8;
        case 0x425dccu: goto label_425dcc;
        case 0x425dd0u: goto label_425dd0;
        case 0x425dd4u: goto label_425dd4;
        case 0x425dd8u: goto label_425dd8;
        case 0x425ddcu: goto label_425ddc;
        case 0x425de0u: goto label_425de0;
        case 0x425de4u: goto label_425de4;
        case 0x425de8u: goto label_425de8;
        case 0x425decu: goto label_425dec;
        case 0x425df0u: goto label_425df0;
        case 0x425df4u: goto label_425df4;
        case 0x425df8u: goto label_425df8;
        case 0x425dfcu: goto label_425dfc;
        case 0x425e00u: goto label_425e00;
        case 0x425e04u: goto label_425e04;
        case 0x425e08u: goto label_425e08;
        case 0x425e0cu: goto label_425e0c;
        case 0x425e10u: goto label_425e10;
        case 0x425e14u: goto label_425e14;
        case 0x425e18u: goto label_425e18;
        case 0x425e1cu: goto label_425e1c;
        case 0x425e20u: goto label_425e20;
        case 0x425e24u: goto label_425e24;
        case 0x425e28u: goto label_425e28;
        case 0x425e2cu: goto label_425e2c;
        case 0x425e30u: goto label_425e30;
        case 0x425e34u: goto label_425e34;
        case 0x425e38u: goto label_425e38;
        case 0x425e3cu: goto label_425e3c;
        case 0x425e40u: goto label_425e40;
        case 0x425e44u: goto label_425e44;
        case 0x425e48u: goto label_425e48;
        case 0x425e4cu: goto label_425e4c;
        case 0x425e50u: goto label_425e50;
        case 0x425e54u: goto label_425e54;
        case 0x425e58u: goto label_425e58;
        case 0x425e5cu: goto label_425e5c;
        case 0x425e60u: goto label_425e60;
        case 0x425e64u: goto label_425e64;
        case 0x425e68u: goto label_425e68;
        case 0x425e6cu: goto label_425e6c;
        case 0x425e70u: goto label_425e70;
        case 0x425e74u: goto label_425e74;
        case 0x425e78u: goto label_425e78;
        case 0x425e7cu: goto label_425e7c;
        case 0x425e80u: goto label_425e80;
        case 0x425e84u: goto label_425e84;
        case 0x425e88u: goto label_425e88;
        case 0x425e8cu: goto label_425e8c;
        case 0x425e90u: goto label_425e90;
        case 0x425e94u: goto label_425e94;
        case 0x425e98u: goto label_425e98;
        case 0x425e9cu: goto label_425e9c;
        case 0x425ea0u: goto label_425ea0;
        case 0x425ea4u: goto label_425ea4;
        case 0x425ea8u: goto label_425ea8;
        case 0x425eacu: goto label_425eac;
        case 0x425eb0u: goto label_425eb0;
        case 0x425eb4u: goto label_425eb4;
        case 0x425eb8u: goto label_425eb8;
        case 0x425ebcu: goto label_425ebc;
        case 0x425ec0u: goto label_425ec0;
        case 0x425ec4u: goto label_425ec4;
        case 0x425ec8u: goto label_425ec8;
        case 0x425eccu: goto label_425ecc;
        case 0x425ed0u: goto label_425ed0;
        case 0x425ed4u: goto label_425ed4;
        case 0x425ed8u: goto label_425ed8;
        case 0x425edcu: goto label_425edc;
        case 0x425ee0u: goto label_425ee0;
        case 0x425ee4u: goto label_425ee4;
        case 0x425ee8u: goto label_425ee8;
        case 0x425eecu: goto label_425eec;
        case 0x425ef0u: goto label_425ef0;
        case 0x425ef4u: goto label_425ef4;
        case 0x425ef8u: goto label_425ef8;
        case 0x425efcu: goto label_425efc;
        case 0x425f00u: goto label_425f00;
        case 0x425f04u: goto label_425f04;
        case 0x425f08u: goto label_425f08;
        case 0x425f0cu: goto label_425f0c;
        case 0x425f10u: goto label_425f10;
        case 0x425f14u: goto label_425f14;
        case 0x425f18u: goto label_425f18;
        case 0x425f1cu: goto label_425f1c;
        case 0x425f20u: goto label_425f20;
        case 0x425f24u: goto label_425f24;
        case 0x425f28u: goto label_425f28;
        case 0x425f2cu: goto label_425f2c;
        case 0x425f30u: goto label_425f30;
        case 0x425f34u: goto label_425f34;
        case 0x425f38u: goto label_425f38;
        case 0x425f3cu: goto label_425f3c;
        case 0x425f40u: goto label_425f40;
        case 0x425f44u: goto label_425f44;
        case 0x425f48u: goto label_425f48;
        case 0x425f4cu: goto label_425f4c;
        case 0x425f50u: goto label_425f50;
        case 0x425f54u: goto label_425f54;
        case 0x425f58u: goto label_425f58;
        case 0x425f5cu: goto label_425f5c;
        case 0x425f60u: goto label_425f60;
        case 0x425f64u: goto label_425f64;
        case 0x425f68u: goto label_425f68;
        case 0x425f6cu: goto label_425f6c;
        case 0x425f70u: goto label_425f70;
        case 0x425f74u: goto label_425f74;
        case 0x425f78u: goto label_425f78;
        case 0x425f7cu: goto label_425f7c;
        case 0x425f80u: goto label_425f80;
        case 0x425f84u: goto label_425f84;
        case 0x425f88u: goto label_425f88;
        case 0x425f8cu: goto label_425f8c;
        case 0x425f90u: goto label_425f90;
        case 0x425f94u: goto label_425f94;
        case 0x425f98u: goto label_425f98;
        case 0x425f9cu: goto label_425f9c;
        case 0x425fa0u: goto label_425fa0;
        case 0x425fa4u: goto label_425fa4;
        case 0x425fa8u: goto label_425fa8;
        case 0x425facu: goto label_425fac;
        case 0x425fb0u: goto label_425fb0;
        case 0x425fb4u: goto label_425fb4;
        case 0x425fb8u: goto label_425fb8;
        case 0x425fbcu: goto label_425fbc;
        case 0x425fc0u: goto label_425fc0;
        case 0x425fc4u: goto label_425fc4;
        case 0x425fc8u: goto label_425fc8;
        case 0x425fccu: goto label_425fcc;
        case 0x425fd0u: goto label_425fd0;
        case 0x425fd4u: goto label_425fd4;
        case 0x425fd8u: goto label_425fd8;
        case 0x425fdcu: goto label_425fdc;
        case 0x425fe0u: goto label_425fe0;
        case 0x425fe4u: goto label_425fe4;
        case 0x425fe8u: goto label_425fe8;
        case 0x425fecu: goto label_425fec;
        case 0x425ff0u: goto label_425ff0;
        case 0x425ff4u: goto label_425ff4;
        case 0x425ff8u: goto label_425ff8;
        case 0x425ffcu: goto label_425ffc;
        case 0x426000u: goto label_426000;
        case 0x426004u: goto label_426004;
        case 0x426008u: goto label_426008;
        case 0x42600cu: goto label_42600c;
        case 0x426010u: goto label_426010;
        case 0x426014u: goto label_426014;
        case 0x426018u: goto label_426018;
        case 0x42601cu: goto label_42601c;
        case 0x426020u: goto label_426020;
        case 0x426024u: goto label_426024;
        case 0x426028u: goto label_426028;
        case 0x42602cu: goto label_42602c;
        case 0x426030u: goto label_426030;
        case 0x426034u: goto label_426034;
        case 0x426038u: goto label_426038;
        case 0x42603cu: goto label_42603c;
        case 0x426040u: goto label_426040;
        case 0x426044u: goto label_426044;
        case 0x426048u: goto label_426048;
        case 0x42604cu: goto label_42604c;
        case 0x426050u: goto label_426050;
        case 0x426054u: goto label_426054;
        case 0x426058u: goto label_426058;
        case 0x42605cu: goto label_42605c;
        case 0x426060u: goto label_426060;
        case 0x426064u: goto label_426064;
        case 0x426068u: goto label_426068;
        case 0x42606cu: goto label_42606c;
        case 0x426070u: goto label_426070;
        case 0x426074u: goto label_426074;
        case 0x426078u: goto label_426078;
        case 0x42607cu: goto label_42607c;
        case 0x426080u: goto label_426080;
        case 0x426084u: goto label_426084;
        case 0x426088u: goto label_426088;
        case 0x42608cu: goto label_42608c;
        case 0x426090u: goto label_426090;
        case 0x426094u: goto label_426094;
        case 0x426098u: goto label_426098;
        case 0x42609cu: goto label_42609c;
        case 0x4260a0u: goto label_4260a0;
        case 0x4260a4u: goto label_4260a4;
        case 0x4260a8u: goto label_4260a8;
        case 0x4260acu: goto label_4260ac;
        case 0x4260b0u: goto label_4260b0;
        case 0x4260b4u: goto label_4260b4;
        case 0x4260b8u: goto label_4260b8;
        case 0x4260bcu: goto label_4260bc;
        case 0x4260c0u: goto label_4260c0;
        case 0x4260c4u: goto label_4260c4;
        case 0x4260c8u: goto label_4260c8;
        case 0x4260ccu: goto label_4260cc;
        case 0x4260d0u: goto label_4260d0;
        case 0x4260d4u: goto label_4260d4;
        case 0x4260d8u: goto label_4260d8;
        case 0x4260dcu: goto label_4260dc;
        case 0x4260e0u: goto label_4260e0;
        case 0x4260e4u: goto label_4260e4;
        case 0x4260e8u: goto label_4260e8;
        case 0x4260ecu: goto label_4260ec;
        case 0x4260f0u: goto label_4260f0;
        case 0x4260f4u: goto label_4260f4;
        case 0x4260f8u: goto label_4260f8;
        case 0x4260fcu: goto label_4260fc;
        case 0x426100u: goto label_426100;
        case 0x426104u: goto label_426104;
        case 0x426108u: goto label_426108;
        case 0x42610cu: goto label_42610c;
        case 0x426110u: goto label_426110;
        case 0x426114u: goto label_426114;
        case 0x426118u: goto label_426118;
        case 0x42611cu: goto label_42611c;
        case 0x426120u: goto label_426120;
        case 0x426124u: goto label_426124;
        case 0x426128u: goto label_426128;
        case 0x42612cu: goto label_42612c;
        case 0x426130u: goto label_426130;
        case 0x426134u: goto label_426134;
        case 0x426138u: goto label_426138;
        case 0x42613cu: goto label_42613c;
        case 0x426140u: goto label_426140;
        case 0x426144u: goto label_426144;
        case 0x426148u: goto label_426148;
        case 0x42614cu: goto label_42614c;
        case 0x426150u: goto label_426150;
        case 0x426154u: goto label_426154;
        case 0x426158u: goto label_426158;
        case 0x42615cu: goto label_42615c;
        case 0x426160u: goto label_426160;
        case 0x426164u: goto label_426164;
        case 0x426168u: goto label_426168;
        case 0x42616cu: goto label_42616c;
        case 0x426170u: goto label_426170;
        case 0x426174u: goto label_426174;
        case 0x426178u: goto label_426178;
        case 0x42617cu: goto label_42617c;
        case 0x426180u: goto label_426180;
        case 0x426184u: goto label_426184;
        case 0x426188u: goto label_426188;
        case 0x42618cu: goto label_42618c;
        case 0x426190u: goto label_426190;
        case 0x426194u: goto label_426194;
        case 0x426198u: goto label_426198;
        case 0x42619cu: goto label_42619c;
        case 0x4261a0u: goto label_4261a0;
        case 0x4261a4u: goto label_4261a4;
        case 0x4261a8u: goto label_4261a8;
        case 0x4261acu: goto label_4261ac;
        case 0x4261b0u: goto label_4261b0;
        case 0x4261b4u: goto label_4261b4;
        case 0x4261b8u: goto label_4261b8;
        case 0x4261bcu: goto label_4261bc;
        case 0x4261c0u: goto label_4261c0;
        case 0x4261c4u: goto label_4261c4;
        case 0x4261c8u: goto label_4261c8;
        case 0x4261ccu: goto label_4261cc;
        case 0x4261d0u: goto label_4261d0;
        case 0x4261d4u: goto label_4261d4;
        case 0x4261d8u: goto label_4261d8;
        case 0x4261dcu: goto label_4261dc;
        case 0x4261e0u: goto label_4261e0;
        case 0x4261e4u: goto label_4261e4;
        case 0x4261e8u: goto label_4261e8;
        case 0x4261ecu: goto label_4261ec;
        case 0x4261f0u: goto label_4261f0;
        case 0x4261f4u: goto label_4261f4;
        case 0x4261f8u: goto label_4261f8;
        case 0x4261fcu: goto label_4261fc;
        case 0x426200u: goto label_426200;
        case 0x426204u: goto label_426204;
        case 0x426208u: goto label_426208;
        case 0x42620cu: goto label_42620c;
        case 0x426210u: goto label_426210;
        case 0x426214u: goto label_426214;
        case 0x426218u: goto label_426218;
        case 0x42621cu: goto label_42621c;
        case 0x426220u: goto label_426220;
        case 0x426224u: goto label_426224;
        case 0x426228u: goto label_426228;
        case 0x42622cu: goto label_42622c;
        case 0x426230u: goto label_426230;
        case 0x426234u: goto label_426234;
        case 0x426238u: goto label_426238;
        case 0x42623cu: goto label_42623c;
        case 0x426240u: goto label_426240;
        case 0x426244u: goto label_426244;
        case 0x426248u: goto label_426248;
        case 0x42624cu: goto label_42624c;
        case 0x426250u: goto label_426250;
        case 0x426254u: goto label_426254;
        case 0x426258u: goto label_426258;
        case 0x42625cu: goto label_42625c;
        case 0x426260u: goto label_426260;
        case 0x426264u: goto label_426264;
        case 0x426268u: goto label_426268;
        case 0x42626cu: goto label_42626c;
        case 0x426270u: goto label_426270;
        case 0x426274u: goto label_426274;
        case 0x426278u: goto label_426278;
        case 0x42627cu: goto label_42627c;
        case 0x426280u: goto label_426280;
        case 0x426284u: goto label_426284;
        case 0x426288u: goto label_426288;
        case 0x42628cu: goto label_42628c;
        case 0x426290u: goto label_426290;
        case 0x426294u: goto label_426294;
        case 0x426298u: goto label_426298;
        case 0x42629cu: goto label_42629c;
        case 0x4262a0u: goto label_4262a0;
        case 0x4262a4u: goto label_4262a4;
        case 0x4262a8u: goto label_4262a8;
        case 0x4262acu: goto label_4262ac;
        case 0x4262b0u: goto label_4262b0;
        case 0x4262b4u: goto label_4262b4;
        case 0x4262b8u: goto label_4262b8;
        case 0x4262bcu: goto label_4262bc;
        case 0x4262c0u: goto label_4262c0;
        case 0x4262c4u: goto label_4262c4;
        case 0x4262c8u: goto label_4262c8;
        case 0x4262ccu: goto label_4262cc;
        case 0x4262d0u: goto label_4262d0;
        case 0x4262d4u: goto label_4262d4;
        case 0x4262d8u: goto label_4262d8;
        case 0x4262dcu: goto label_4262dc;
        case 0x4262e0u: goto label_4262e0;
        case 0x4262e4u: goto label_4262e4;
        case 0x4262e8u: goto label_4262e8;
        case 0x4262ecu: goto label_4262ec;
        case 0x4262f0u: goto label_4262f0;
        case 0x4262f4u: goto label_4262f4;
        case 0x4262f8u: goto label_4262f8;
        case 0x4262fcu: goto label_4262fc;
        case 0x426300u: goto label_426300;
        case 0x426304u: goto label_426304;
        case 0x426308u: goto label_426308;
        case 0x42630cu: goto label_42630c;
        case 0x426310u: goto label_426310;
        case 0x426314u: goto label_426314;
        case 0x426318u: goto label_426318;
        case 0x42631cu: goto label_42631c;
        case 0x426320u: goto label_426320;
        case 0x426324u: goto label_426324;
        case 0x426328u: goto label_426328;
        case 0x42632cu: goto label_42632c;
        case 0x426330u: goto label_426330;
        case 0x426334u: goto label_426334;
        case 0x426338u: goto label_426338;
        case 0x42633cu: goto label_42633c;
        case 0x426340u: goto label_426340;
        case 0x426344u: goto label_426344;
        case 0x426348u: goto label_426348;
        case 0x42634cu: goto label_42634c;
        case 0x426350u: goto label_426350;
        case 0x426354u: goto label_426354;
        case 0x426358u: goto label_426358;
        case 0x42635cu: goto label_42635c;
        case 0x426360u: goto label_426360;
        case 0x426364u: goto label_426364;
        case 0x426368u: goto label_426368;
        case 0x42636cu: goto label_42636c;
        case 0x426370u: goto label_426370;
        case 0x426374u: goto label_426374;
        case 0x426378u: goto label_426378;
        case 0x42637cu: goto label_42637c;
        case 0x426380u: goto label_426380;
        case 0x426384u: goto label_426384;
        case 0x426388u: goto label_426388;
        case 0x42638cu: goto label_42638c;
        case 0x426390u: goto label_426390;
        case 0x426394u: goto label_426394;
        case 0x426398u: goto label_426398;
        case 0x42639cu: goto label_42639c;
        case 0x4263a0u: goto label_4263a0;
        case 0x4263a4u: goto label_4263a4;
        case 0x4263a8u: goto label_4263a8;
        case 0x4263acu: goto label_4263ac;
        case 0x4263b0u: goto label_4263b0;
        case 0x4263b4u: goto label_4263b4;
        case 0x4263b8u: goto label_4263b8;
        case 0x4263bcu: goto label_4263bc;
        case 0x4263c0u: goto label_4263c0;
        case 0x4263c4u: goto label_4263c4;
        case 0x4263c8u: goto label_4263c8;
        case 0x4263ccu: goto label_4263cc;
        case 0x4263d0u: goto label_4263d0;
        case 0x4263d4u: goto label_4263d4;
        case 0x4263d8u: goto label_4263d8;
        case 0x4263dcu: goto label_4263dc;
        case 0x4263e0u: goto label_4263e0;
        case 0x4263e4u: goto label_4263e4;
        case 0x4263e8u: goto label_4263e8;
        case 0x4263ecu: goto label_4263ec;
        case 0x4263f0u: goto label_4263f0;
        case 0x4263f4u: goto label_4263f4;
        case 0x4263f8u: goto label_4263f8;
        case 0x4263fcu: goto label_4263fc;
        case 0x426400u: goto label_426400;
        case 0x426404u: goto label_426404;
        case 0x426408u: goto label_426408;
        case 0x42640cu: goto label_42640c;
        case 0x426410u: goto label_426410;
        case 0x426414u: goto label_426414;
        case 0x426418u: goto label_426418;
        case 0x42641cu: goto label_42641c;
        case 0x426420u: goto label_426420;
        case 0x426424u: goto label_426424;
        case 0x426428u: goto label_426428;
        case 0x42642cu: goto label_42642c;
        case 0x426430u: goto label_426430;
        case 0x426434u: goto label_426434;
        case 0x426438u: goto label_426438;
        case 0x42643cu: goto label_42643c;
        case 0x426440u: goto label_426440;
        case 0x426444u: goto label_426444;
        case 0x426448u: goto label_426448;
        case 0x42644cu: goto label_42644c;
        case 0x426450u: goto label_426450;
        case 0x426454u: goto label_426454;
        case 0x426458u: goto label_426458;
        case 0x42645cu: goto label_42645c;
        case 0x426460u: goto label_426460;
        case 0x426464u: goto label_426464;
        case 0x426468u: goto label_426468;
        case 0x42646cu: goto label_42646c;
        case 0x426470u: goto label_426470;
        case 0x426474u: goto label_426474;
        case 0x426478u: goto label_426478;
        case 0x42647cu: goto label_42647c;
        case 0x426480u: goto label_426480;
        case 0x426484u: goto label_426484;
        case 0x426488u: goto label_426488;
        case 0x42648cu: goto label_42648c;
        case 0x426490u: goto label_426490;
        case 0x426494u: goto label_426494;
        case 0x426498u: goto label_426498;
        case 0x42649cu: goto label_42649c;
        case 0x4264a0u: goto label_4264a0;
        case 0x4264a4u: goto label_4264a4;
        case 0x4264a8u: goto label_4264a8;
        case 0x4264acu: goto label_4264ac;
        case 0x4264b0u: goto label_4264b0;
        case 0x4264b4u: goto label_4264b4;
        case 0x4264b8u: goto label_4264b8;
        case 0x4264bcu: goto label_4264bc;
        case 0x4264c0u: goto label_4264c0;
        case 0x4264c4u: goto label_4264c4;
        case 0x4264c8u: goto label_4264c8;
        case 0x4264ccu: goto label_4264cc;
        case 0x4264d0u: goto label_4264d0;
        case 0x4264d4u: goto label_4264d4;
        case 0x4264d8u: goto label_4264d8;
        case 0x4264dcu: goto label_4264dc;
        case 0x4264e0u: goto label_4264e0;
        case 0x4264e4u: goto label_4264e4;
        case 0x4264e8u: goto label_4264e8;
        case 0x4264ecu: goto label_4264ec;
        case 0x4264f0u: goto label_4264f0;
        case 0x4264f4u: goto label_4264f4;
        case 0x4264f8u: goto label_4264f8;
        case 0x4264fcu: goto label_4264fc;
        case 0x426500u: goto label_426500;
        case 0x426504u: goto label_426504;
        case 0x426508u: goto label_426508;
        case 0x42650cu: goto label_42650c;
        case 0x426510u: goto label_426510;
        case 0x426514u: goto label_426514;
        case 0x426518u: goto label_426518;
        case 0x42651cu: goto label_42651c;
        case 0x426520u: goto label_426520;
        case 0x426524u: goto label_426524;
        case 0x426528u: goto label_426528;
        case 0x42652cu: goto label_42652c;
        case 0x426530u: goto label_426530;
        case 0x426534u: goto label_426534;
        case 0x426538u: goto label_426538;
        case 0x42653cu: goto label_42653c;
        case 0x426540u: goto label_426540;
        case 0x426544u: goto label_426544;
        case 0x426548u: goto label_426548;
        case 0x42654cu: goto label_42654c;
        case 0x426550u: goto label_426550;
        case 0x426554u: goto label_426554;
        case 0x426558u: goto label_426558;
        case 0x42655cu: goto label_42655c;
        case 0x426560u: goto label_426560;
        case 0x426564u: goto label_426564;
        case 0x426568u: goto label_426568;
        case 0x42656cu: goto label_42656c;
        case 0x426570u: goto label_426570;
        case 0x426574u: goto label_426574;
        case 0x426578u: goto label_426578;
        case 0x42657cu: goto label_42657c;
        default: break;
    }

    ctx->pc = 0x425390u;

label_425390:
    // 0x425390: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x425390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_425394:
    // 0x425394: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x425394u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_425398:
    // 0x425398: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x425398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_42539c:
    // 0x42539c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x42539cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4253a0:
    // 0x4253a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4253a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4253a4:
    // 0x4253a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4253a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4253a8:
    // 0x4253a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4253a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4253ac:
    // 0x4253ac: 0xaca07428  sw          $zero, 0x7428($a1)
    ctx->pc = 0x4253acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 29736), GPR_U32(ctx, 0));
label_4253b0:
    // 0x4253b0: 0xac607420  sw          $zero, 0x7420($v1)
    ctx->pc = 0x4253b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 29728), GPR_U32(ctx, 0));
label_4253b4:
    // 0x4253b4: 0x8c900058  lw          $s0, 0x58($a0)
    ctx->pc = 0x4253b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_4253b8:
    // 0x4253b8: 0x8c910050  lw          $s1, 0x50($a0)
    ctx->pc = 0x4253b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_4253bc:
    // 0x4253bc: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_4253c0:
    if (ctx->pc == 0x4253C0u) {
        ctx->pc = 0x4253C0u;
            // 0x4253c0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4253C4u;
        goto label_4253c4;
    }
    ctx->pc = 0x4253BCu;
    {
        const bool branch_taken_0x4253bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4253C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4253BCu;
            // 0x4253c0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4253bc) {
            ctx->pc = 0x4253E0u;
            goto label_4253e0;
        }
    }
    ctx->pc = 0x4253C4u;
label_4253c4:
    // 0x4253c4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4253c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4253c8:
    // 0x4253c8: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x4253c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_4253cc:
    // 0x4253cc: 0x320f809  jalr        $t9
label_4253d0:
    if (ctx->pc == 0x4253D0u) {
        ctx->pc = 0x4253D0u;
            // 0x4253d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4253D4u;
        goto label_4253d4;
    }
    ctx->pc = 0x4253CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4253D4u);
        ctx->pc = 0x4253D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4253CCu;
            // 0x4253d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4253D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4253D4u; }
            if (ctx->pc != 0x4253D4u) { return; }
        }
        }
    }
    ctx->pc = 0x4253D4u;
label_4253d4:
    // 0x4253d4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x4253d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_4253d8:
    // 0x4253d8: 0x1e00fffa  bgtz        $s0, . + 4 + (-0x6 << 2)
label_4253dc:
    if (ctx->pc == 0x4253DCu) {
        ctx->pc = 0x4253DCu;
            // 0x4253dc: 0x263100f0  addiu       $s1, $s1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
        ctx->pc = 0x4253E0u;
        goto label_4253e0;
    }
    ctx->pc = 0x4253D8u;
    {
        const bool branch_taken_0x4253d8 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x4253DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4253D8u;
            // 0x4253dc: 0x263100f0  addiu       $s1, $s1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4253d8) {
            ctx->pc = 0x4253C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4253c4;
        }
    }
    ctx->pc = 0x4253E0u;
label_4253e0:
    // 0x4253e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4253e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4253e4:
    // 0x4253e4: 0xa2430060  sb          $v1, 0x60($s2)
    ctx->pc = 0x4253e4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 96), (uint8_t)GPR_U32(ctx, 3));
label_4253e8:
    // 0x4253e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4253e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4253ec:
    // 0x4253ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4253ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4253f0:
    // 0x4253f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4253f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4253f4:
    // 0x4253f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4253f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4253f8:
    // 0x4253f8: 0x3e00008  jr          $ra
label_4253fc:
    if (ctx->pc == 0x4253FCu) {
        ctx->pc = 0x4253FCu;
            // 0x4253fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x425400u;
        goto label_425400;
    }
    ctx->pc = 0x4253F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4253FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4253F8u;
            // 0x4253fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x425400u;
label_425400:
    // 0x425400: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x425400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_425404:
    // 0x425404: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x425404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_425408:
    // 0x425408: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x425408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_42540c:
    // 0x42540c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42540cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_425410:
    // 0x425410: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x425410u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_425414:
    // 0x425414: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
label_425418:
    if (ctx->pc == 0x425418u) {
        ctx->pc = 0x425418u;
            // 0x425418: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42541Cu;
        goto label_42541c;
    }
    ctx->pc = 0x425414u;
    {
        const bool branch_taken_0x425414 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x425418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x425414u;
            // 0x425418: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425414) {
            ctx->pc = 0x425474u;
            goto label_425474;
        }
    }
    ctx->pc = 0x42541Cu;
label_42541c:
    // 0x42541c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x42541cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_425420:
    // 0x425420: 0x2442bd70  addiu       $v0, $v0, -0x4290
    ctx->pc = 0x425420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950256));
label_425424:
    // 0x425424: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x425424u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_425428:
    // 0x425428: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x425428u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_42542c:
    // 0x42542c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x42542cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_425430:
    // 0x425430: 0x320f809  jalr        $t9
label_425434:
    if (ctx->pc == 0x425434u) {
        ctx->pc = 0x425438u;
        goto label_425438;
    }
    ctx->pc = 0x425430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x425438u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x425438u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x425438u; }
            if (ctx->pc != 0x425438u) { return; }
        }
        }
    }
    ctx->pc = 0x425438u;
label_425438:
    // 0x425438: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_42543c:
    if (ctx->pc == 0x42543Cu) {
        ctx->pc = 0x42543Cu;
            // 0x42543c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x425440u;
        goto label_425440;
    }
    ctx->pc = 0x425438u;
    {
        const bool branch_taken_0x425438 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x425438) {
            ctx->pc = 0x42543Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x425438u;
            // 0x42543c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x425460u;
            goto label_425460;
        }
    }
    ctx->pc = 0x425440u;
label_425440:
    // 0x425440: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x425440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_425444:
    // 0x425444: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x425444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_425448:
    // 0x425448: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_42544c:
    if (ctx->pc == 0x42544Cu) {
        ctx->pc = 0x42544Cu;
            // 0x42544c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x425450u;
        goto label_425450;
    }
    ctx->pc = 0x425448u;
    {
        const bool branch_taken_0x425448 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x42544Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x425448u;
            // 0x42544c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425448) {
            ctx->pc = 0x42545Cu;
            goto label_42545c;
        }
    }
    ctx->pc = 0x425450u;
label_425450:
    // 0x425450: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x425450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_425454:
    // 0x425454: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x425454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_425458:
    // 0x425458: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x425458u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_42545c:
    // 0x42545c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x42545cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_425460:
    // 0x425460: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x425460u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_425464:
    // 0x425464: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_425468:
    if (ctx->pc == 0x425468u) {
        ctx->pc = 0x425468u;
            // 0x425468: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42546Cu;
        goto label_42546c;
    }
    ctx->pc = 0x425464u;
    {
        const bool branch_taken_0x425464 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x425464) {
            ctx->pc = 0x425468u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x425464u;
            // 0x425468: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x425478u;
            goto label_425478;
        }
    }
    ctx->pc = 0x42546Cu;
label_42546c:
    // 0x42546c: 0xc0400a8  jal         func_1002A0
label_425470:
    if (ctx->pc == 0x425470u) {
        ctx->pc = 0x425470u;
            // 0x425470: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x425474u;
        goto label_425474;
    }
    ctx->pc = 0x42546Cu;
    SET_GPR_U32(ctx, 31, 0x425474u);
    ctx->pc = 0x425470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42546Cu;
            // 0x425470: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425474u; }
        if (ctx->pc != 0x425474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425474u; }
        if (ctx->pc != 0x425474u) { return; }
    }
    ctx->pc = 0x425474u;
label_425474:
    // 0x425474: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x425474u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_425478:
    // 0x425478: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x425478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_42547c:
    // 0x42547c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42547cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_425480:
    // 0x425480: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x425480u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_425484:
    // 0x425484: 0x3e00008  jr          $ra
label_425488:
    if (ctx->pc == 0x425488u) {
        ctx->pc = 0x425488u;
            // 0x425488: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x42548Cu;
        goto label_42548c;
    }
    ctx->pc = 0x425484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x425488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x425484u;
            // 0x425488: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42548Cu;
label_42548c:
    // 0x42548c: 0x0  nop
    ctx->pc = 0x42548cu;
    // NOP
label_425490:
    // 0x425490: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x425490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_425494:
    // 0x425494: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x425494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_425498:
    // 0x425498: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x425498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_42549c:
    // 0x42549c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x42549cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4254a0:
    // 0x4254a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4254a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4254a4:
    // 0x4254a4: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x4254a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_4254a8:
    // 0x4254a8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4254a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4254ac:
    // 0x4254ac: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4254acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_4254b0:
    // 0x4254b0: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x4254b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
label_4254b4:
    // 0x4254b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4254b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4254b8:
    // 0x4254b8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4254b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_4254bc:
    // 0x4254bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4254bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4254c0:
    // 0x4254c0: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x4254c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
label_4254c4:
    // 0x4254c4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4254c4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_4254c8:
    // 0x4254c8: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x4254c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
label_4254cc:
    // 0x4254cc: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x4254ccu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_4254d0:
    // 0x4254d0: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x4254d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
label_4254d4:
    // 0x4254d4: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x4254d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
label_4254d8:
    // 0x4254d8: 0xc04cbd8  jal         func_132F60
label_4254dc:
    if (ctx->pc == 0x4254DCu) {
        ctx->pc = 0x4254DCu;
            // 0x4254dc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x4254E0u;
        goto label_4254e0;
    }
    ctx->pc = 0x4254D8u;
    SET_GPR_U32(ctx, 31, 0x4254E0u);
    ctx->pc = 0x4254DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4254D8u;
            // 0x4254dc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4254E0u; }
        if (ctx->pc != 0x4254E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4254E0u; }
        if (ctx->pc != 0x4254E0u) { return; }
    }
    ctx->pc = 0x4254E0u;
label_4254e0:
    // 0x4254e0: 0xc04c968  jal         func_1325A0
label_4254e4:
    if (ctx->pc == 0x4254E4u) {
        ctx->pc = 0x4254E4u;
            // 0x4254e4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x4254E8u;
        goto label_4254e8;
    }
    ctx->pc = 0x4254E0u;
    SET_GPR_U32(ctx, 31, 0x4254E8u);
    ctx->pc = 0x4254E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4254E0u;
            // 0x4254e4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4254E8u; }
        if (ctx->pc != 0x4254E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4254E8u; }
        if (ctx->pc != 0x4254E8u) { return; }
    }
    ctx->pc = 0x4254E8u;
label_4254e8:
    // 0x4254e8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4254e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4254ec:
    // 0x4254ec: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x4254ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_4254f0:
    // 0x4254f0: 0x8c460e80  lw          $a2, 0xE80($v0)
    ctx->pc = 0x4254f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4254f4:
    // 0x4254f4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x4254f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_4254f8:
    // 0x4254f8: 0x24a5c560  addiu       $a1, $a1, -0x3AA0
    ctx->pc = 0x4254f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952288));
label_4254fc:
    // 0x4254fc: 0x2484bd70  addiu       $a0, $a0, -0x4290
    ctx->pc = 0x4254fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950256));
label_425500:
    // 0x425500: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x425500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_425504:
    // 0x425504: 0x8cc60788  lw          $a2, 0x788($a2)
    ctx->pc = 0x425504u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1928)));
label_425508:
    // 0x425508: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x425508u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42550c:
    // 0x42550c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x42550cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_425510:
    // 0x425510: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x425510u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_425514:
    // 0x425514: 0xa205004d  sb          $a1, 0x4D($s0)
    ctx->pc = 0x425514u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 5));
label_425518:
    // 0x425518: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x425518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_42551c:
    // 0x42551c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x42551cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_425520:
    // 0x425520: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x425520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
label_425524:
    // 0x425524: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x425524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
label_425528:
    // 0x425528: 0xa2030060  sb          $v1, 0x60($s0)
    ctx->pc = 0x425528u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 3));
label_42552c:
    // 0x42552c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x42552cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_425530:
    // 0x425530: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x425530u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_425534:
    // 0x425534: 0x3e00008  jr          $ra
label_425538:
    if (ctx->pc == 0x425538u) {
        ctx->pc = 0x425538u;
            // 0x425538: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x42553Cu;
        goto label_42553c;
    }
    ctx->pc = 0x425534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x425538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x425534u;
            // 0x425538: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42553Cu;
label_42553c:
    // 0x42553c: 0x0  nop
    ctx->pc = 0x42553cu;
    // NOP
label_425540:
    // 0x425540: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x425540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_425544:
    // 0x425544: 0x3e00008  jr          $ra
label_425548:
    if (ctx->pc == 0x425548u) {
        ctx->pc = 0x425548u;
            // 0x425548: 0x2442c838  addiu       $v0, $v0, -0x37C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953016));
        ctx->pc = 0x42554Cu;
        goto label_42554c;
    }
    ctx->pc = 0x425544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x425548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x425544u;
            // 0x425548: 0x2442c838  addiu       $v0, $v0, -0x37C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953016));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42554Cu;
label_42554c:
    // 0x42554c: 0x0  nop
    ctx->pc = 0x42554cu;
    // NOP
label_425550:
    // 0x425550: 0x3e00008  jr          $ra
label_425554:
    if (ctx->pc == 0x425554u) {
        ctx->pc = 0x425554u;
            // 0x425554: 0x24023acb  addiu       $v0, $zero, 0x3ACB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15051));
        ctx->pc = 0x425558u;
        goto label_425558;
    }
    ctx->pc = 0x425550u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x425554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x425550u;
            // 0x425554: 0x24023acb  addiu       $v0, $zero, 0x3ACB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15051));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x425558u;
label_425558:
    // 0x425558: 0x0  nop
    ctx->pc = 0x425558u;
    // NOP
label_42555c:
    // 0x42555c: 0x0  nop
    ctx->pc = 0x42555cu;
    // NOP
label_425560:
    // 0x425560: 0x8109344  j           func_424D10
label_425564:
    if (ctx->pc == 0x425564u) {
        ctx->pc = 0x425564u;
            // 0x425564: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x425568u;
        goto label_425568;
    }
    ctx->pc = 0x425560u;
    ctx->pc = 0x425564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x425560u;
            // 0x425564: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x424D10u;
    {
        auto targetFn = runtime->lookupFunction(0x424D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x425568u;
label_425568:
    // 0x425568: 0x0  nop
    ctx->pc = 0x425568u;
    // NOP
label_42556c:
    // 0x42556c: 0x0  nop
    ctx->pc = 0x42556cu;
    // NOP
label_425570:
    // 0x425570: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x425570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_425574:
    // 0x425574: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x425574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_425578:
    // 0x425578: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x425578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42557c:
    // 0x42557c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x42557cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_425580:
    // 0x425580: 0x8c8400e4  lw          $a0, 0xE4($a0)
    ctx->pc = 0x425580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
label_425584:
    // 0x425584: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_425588:
    if (ctx->pc == 0x425588u) {
        ctx->pc = 0x425588u;
            // 0x425588: 0xae0000e4  sw          $zero, 0xE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
        ctx->pc = 0x42558Cu;
        goto label_42558c;
    }
    ctx->pc = 0x425584u;
    {
        const bool branch_taken_0x425584 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x425584) {
            ctx->pc = 0x425588u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x425584u;
            // 0x425588: 0xae0000e4  sw          $zero, 0xE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4255A0u;
            goto label_4255a0;
        }
    }
    ctx->pc = 0x42558Cu;
label_42558c:
    // 0x42558c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x42558cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_425590:
    // 0x425590: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x425590u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_425594:
    // 0x425594: 0x320f809  jalr        $t9
label_425598:
    if (ctx->pc == 0x425598u) {
        ctx->pc = 0x425598u;
            // 0x425598: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x42559Cu;
        goto label_42559c;
    }
    ctx->pc = 0x425594u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42559Cu);
        ctx->pc = 0x425598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x425594u;
            // 0x425598: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x42559Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42559Cu; }
            if (ctx->pc != 0x42559Cu) { return; }
        }
        }
    }
    ctx->pc = 0x42559Cu;
label_42559c:
    // 0x42559c: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x42559cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
label_4255a0:
    // 0x4255a0: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x4255a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4255a4:
    // 0x4255a4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4255a8:
    if (ctx->pc == 0x4255A8u) {
        ctx->pc = 0x4255A8u;
            // 0x4255a8: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x4255ACu;
        goto label_4255ac;
    }
    ctx->pc = 0x4255A4u;
    {
        const bool branch_taken_0x4255a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4255a4) {
            ctx->pc = 0x4255A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4255A4u;
            // 0x4255a8: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4255C0u;
            goto label_4255c0;
        }
    }
    ctx->pc = 0x4255ACu;
label_4255ac:
    // 0x4255ac: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x4255acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_4255b0:
    // 0x4255b0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4255b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4255b4:
    // 0x4255b4: 0x320f809  jalr        $t9
label_4255b8:
    if (ctx->pc == 0x4255B8u) {
        ctx->pc = 0x4255B8u;
            // 0x4255b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4255BCu;
        goto label_4255bc;
    }
    ctx->pc = 0x4255B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4255BCu);
        ctx->pc = 0x4255B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4255B4u;
            // 0x4255b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4255BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4255BCu; }
            if (ctx->pc != 0x4255BCu) { return; }
        }
        }
    }
    ctx->pc = 0x4255BCu;
label_4255bc:
    // 0x4255bc: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x4255bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_4255c0:
    // 0x4255c0: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4255c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4255c4:
    // 0x4255c4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4255c8:
    if (ctx->pc == 0x4255C8u) {
        ctx->pc = 0x4255C8u;
            // 0x4255c8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x4255CCu;
        goto label_4255cc;
    }
    ctx->pc = 0x4255C4u;
    {
        const bool branch_taken_0x4255c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4255c4) {
            ctx->pc = 0x4255C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4255C4u;
            // 0x4255c8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4255E0u;
            goto label_4255e0;
        }
    }
    ctx->pc = 0x4255CCu;
label_4255cc:
    // 0x4255cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4255ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4255d0:
    // 0x4255d0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4255d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4255d4:
    // 0x4255d4: 0x320f809  jalr        $t9
label_4255d8:
    if (ctx->pc == 0x4255D8u) {
        ctx->pc = 0x4255D8u;
            // 0x4255d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4255DCu;
        goto label_4255dc;
    }
    ctx->pc = 0x4255D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4255DCu);
        ctx->pc = 0x4255D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4255D4u;
            // 0x4255d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4255DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4255DCu; }
            if (ctx->pc != 0x4255DCu) { return; }
        }
        }
    }
    ctx->pc = 0x4255DCu;
label_4255dc:
    // 0x4255dc: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x4255dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_4255e0:
    // 0x4255e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4255e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4255e4:
    // 0x4255e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4255e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4255e8:
    // 0x4255e8: 0x3e00008  jr          $ra
label_4255ec:
    if (ctx->pc == 0x4255ECu) {
        ctx->pc = 0x4255ECu;
            // 0x4255ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4255F0u;
        goto label_4255f0;
    }
    ctx->pc = 0x4255E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4255ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4255E8u;
            // 0x4255ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4255F0u;
label_4255f0:
    // 0x4255f0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x4255f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_4255f4:
    // 0x4255f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4255f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4255f8:
    // 0x4255f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4255f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4255fc:
    // 0x4255fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4255fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_425600:
    // 0x425600: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x425600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_425604:
    // 0x425604: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x425604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_425608:
    // 0x425608: 0xc0892d0  jal         func_224B40
label_42560c:
    if (ctx->pc == 0x42560Cu) {
        ctx->pc = 0x42560Cu;
            // 0x42560c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x425610u;
        goto label_425610;
    }
    ctx->pc = 0x425608u;
    SET_GPR_U32(ctx, 31, 0x425610u);
    ctx->pc = 0x42560Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x425608u;
            // 0x42560c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425610u; }
        if (ctx->pc != 0x425610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425610u; }
        if (ctx->pc != 0x425610u) { return; }
    }
    ctx->pc = 0x425610u;
label_425610:
    // 0x425610: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x425610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_425614:
    // 0x425614: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x425614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_425618:
    // 0x425618: 0x8c427380  lw          $v0, 0x7380($v0)
    ctx->pc = 0x425618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29568)));
label_42561c:
    // 0x42561c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x42561cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_425620:
    // 0x425620: 0x8c70e3e0  lw          $s0, -0x1C20($v1)
    ctx->pc = 0x425620u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960096)));
label_425624:
    // 0x425624: 0x8c510060  lw          $s1, 0x60($v0)
    ctx->pc = 0x425624u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_425628:
    // 0x425628: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x425628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_42562c:
    // 0x42562c: 0xc0b6e68  jal         func_2DB9A0
label_425630:
    if (ctx->pc == 0x425630u) {
        ctx->pc = 0x425630u;
            // 0x425630: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x425634u;
        goto label_425634;
    }
    ctx->pc = 0x42562Cu;
    SET_GPR_U32(ctx, 31, 0x425634u);
    ctx->pc = 0x425630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42562Cu;
            // 0x425630: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425634u; }
        if (ctx->pc != 0x425634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425634u; }
        if (ctx->pc != 0x425634u) { return; }
    }
    ctx->pc = 0x425634u;
label_425634:
    // 0x425634: 0xc0b6dac  jal         func_2DB6B0
label_425638:
    if (ctx->pc == 0x425638u) {
        ctx->pc = 0x425638u;
            // 0x425638: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x42563Cu;
        goto label_42563c;
    }
    ctx->pc = 0x425634u;
    SET_GPR_U32(ctx, 31, 0x42563Cu);
    ctx->pc = 0x425638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x425634u;
            // 0x425638: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42563Cu; }
        if (ctx->pc != 0x42563Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42563Cu; }
        if (ctx->pc != 0x42563Cu) { return; }
    }
    ctx->pc = 0x42563Cu;
label_42563c:
    // 0x42563c: 0xc0cac94  jal         func_32B250
label_425640:
    if (ctx->pc == 0x425640u) {
        ctx->pc = 0x425640u;
            // 0x425640: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x425644u;
        goto label_425644;
    }
    ctx->pc = 0x42563Cu;
    SET_GPR_U32(ctx, 31, 0x425644u);
    ctx->pc = 0x425640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42563Cu;
            // 0x425640: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425644u; }
        if (ctx->pc != 0x425644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425644u; }
        if (ctx->pc != 0x425644u) { return; }
    }
    ctx->pc = 0x425644u;
label_425644:
    // 0x425644: 0xc0cac84  jal         func_32B210
label_425648:
    if (ctx->pc == 0x425648u) {
        ctx->pc = 0x425648u;
            // 0x425648: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x42564Cu;
        goto label_42564c;
    }
    ctx->pc = 0x425644u;
    SET_GPR_U32(ctx, 31, 0x42564Cu);
    ctx->pc = 0x425648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x425644u;
            // 0x425648: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42564Cu; }
        if (ctx->pc != 0x42564Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42564Cu; }
        if (ctx->pc != 0x42564Cu) { return; }
    }
    ctx->pc = 0x42564Cu;
label_42564c:
    // 0x42564c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x42564cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_425650:
    // 0x425650: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x425650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_425654:
    // 0x425654: 0xc44cc930  lwc1        $f12, -0x36D0($v0)
    ctx->pc = 0x425654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_425658:
    // 0x425658: 0xc0a5a68  jal         func_2969A0
label_42565c:
    if (ctx->pc == 0x42565Cu) {
        ctx->pc = 0x42565Cu;
            // 0x42565c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x425660u;
        goto label_425660;
    }
    ctx->pc = 0x425658u;
    SET_GPR_U32(ctx, 31, 0x425660u);
    ctx->pc = 0x42565Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x425658u;
            // 0x42565c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425660u; }
        if (ctx->pc != 0x425660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425660u; }
        if (ctx->pc != 0x425660u) { return; }
    }
    ctx->pc = 0x425660u;
label_425660:
    // 0x425660: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x425660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_425664:
    // 0x425664: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x425664u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_425668:
    // 0x425668: 0x8c447380  lw          $a0, 0x7380($v0)
    ctx->pc = 0x425668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29568)));
label_42566c:
    // 0x42566c: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x42566cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_425670:
    // 0x425670: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x425670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_425674:
    // 0x425674: 0x3c074080  lui         $a3, 0x4080
    ctx->pc = 0x425674u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16512 << 16));
label_425678:
    // 0x425678: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x425678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42567c:
    // 0x42567c: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x42567cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_425680:
    // 0x425680: 0x8c890060  lw          $t1, 0x60($a0)
    ctx->pc = 0x425680u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_425684:
    // 0x425684: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x425684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_425688:
    // 0x425688: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x425688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_42568c:
    // 0x42568c: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x42568cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_425690:
    // 0x425690: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x425690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_425694:
    // 0x425694: 0xafa900c4  sw          $t1, 0xC4($sp)
    ctx->pc = 0x425694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 9));
label_425698:
    // 0x425698: 0xc7a70090  lwc1        $f7, 0x90($sp)
    ctx->pc = 0x425698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_42569c:
    // 0x42569c: 0xc64a0018  lwc1        $f10, 0x18($s2)
    ctx->pc = 0x42569cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_4256a0:
    // 0x4256a0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4256a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4256a4:
    // 0x4256a4: 0xc6490014  lwc1        $f9, 0x14($s2)
    ctx->pc = 0x4256a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_4256a8:
    // 0x4256a8: 0xc6480010  lwc1        $f8, 0x10($s2)
    ctx->pc = 0x4256a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_4256ac:
    // 0x4256ac: 0xc7a60094  lwc1        $f6, 0x94($sp)
    ctx->pc = 0x4256acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_4256b0:
    // 0x4256b0: 0xc7a50098  lwc1        $f5, 0x98($sp)
    ctx->pc = 0x4256b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4256b4:
    // 0x4256b4: 0xe7a20124  swc1        $f2, 0x124($sp)
    ctx->pc = 0x4256b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_4256b8:
    // 0x4256b8: 0xa3a80170  sb          $t0, 0x170($sp)
    ctx->pc = 0x4256b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 8));
label_4256bc:
    // 0x4256bc: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x4256bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_4256c0:
    // 0x4256c0: 0xafa7016c  sw          $a3, 0x16C($sp)
    ctx->pc = 0x4256c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 7));
label_4256c4:
    // 0x4256c4: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x4256c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_4256c8:
    // 0x4256c8: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x4256c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_4256cc:
    // 0x4256cc: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x4256ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4256d0:
    // 0x4256d0: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x4256d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_4256d4:
    // 0x4256d4: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x4256d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4256d8:
    // 0x4256d8: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x4256d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4256dc:
    // 0x4256dc: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x4256dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_4256e0:
    // 0x4256e0: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x4256e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_4256e4:
    // 0x4256e4: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x4256e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_4256e8:
    // 0x4256e8: 0xc7a200bc  lwc1        $f2, 0xBC($sp)
    ctx->pc = 0x4256e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4256ec:
    // 0x4256ec: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x4256ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4256f0:
    // 0x4256f0: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x4256f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4256f4:
    // 0x4256f4: 0xe7a2013c  swc1        $f2, 0x13C($sp)
    ctx->pc = 0x4256f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_4256f8:
    // 0x4256f8: 0xe7a10140  swc1        $f1, 0x140($sp)
    ctx->pc = 0x4256f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_4256fc:
    // 0x4256fc: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x4256fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_425700:
    // 0x425700: 0xc7a4009c  lwc1        $f4, 0x9C($sp)
    ctx->pc = 0x425700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_425704:
    // 0x425704: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x425704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_425708:
    // 0x425708: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x425708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_42570c:
    // 0x42570c: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x42570cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_425710:
    // 0x425710: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x425710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_425714:
    // 0x425714: 0xe7a800d0  swc1        $f8, 0xD0($sp)
    ctx->pc = 0x425714u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_425718:
    // 0x425718: 0xe7a900d4  swc1        $f9, 0xD4($sp)
    ctx->pc = 0x425718u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_42571c:
    // 0x42571c: 0xe7aa00d8  swc1        $f10, 0xD8($sp)
    ctx->pc = 0x42571cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_425720:
    // 0x425720: 0xe7a70110  swc1        $f7, 0x110($sp)
    ctx->pc = 0x425720u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_425724:
    // 0x425724: 0xe7a60114  swc1        $f6, 0x114($sp)
    ctx->pc = 0x425724u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_425728:
    // 0x425728: 0xe7a50118  swc1        $f5, 0x118($sp)
    ctx->pc = 0x425728u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_42572c:
    // 0x42572c: 0xe7a4011c  swc1        $f4, 0x11C($sp)
    ctx->pc = 0x42572cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_425730:
    // 0x425730: 0xe7a30120  swc1        $f3, 0x120($sp)
    ctx->pc = 0x425730u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_425734:
    // 0x425734: 0xe7a20148  swc1        $f2, 0x148($sp)
    ctx->pc = 0x425734u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_425738:
    // 0x425738: 0xe7a1014c  swc1        $f1, 0x14C($sp)
    ctx->pc = 0x425738u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_42573c:
    // 0x42573c: 0xc0a7a88  jal         func_29EA20
label_425740:
    if (ctx->pc == 0x425740u) {
        ctx->pc = 0x425740u;
            // 0x425740: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x425744u;
        goto label_425744;
    }
    ctx->pc = 0x42573Cu;
    SET_GPR_U32(ctx, 31, 0x425744u);
    ctx->pc = 0x425740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42573Cu;
            // 0x425740: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425744u; }
        if (ctx->pc != 0x425744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425744u; }
        if (ctx->pc != 0x425744u) { return; }
    }
    ctx->pc = 0x425744u;
label_425744:
    // 0x425744: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x425744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_425748:
    // 0x425748: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x425748u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42574c:
    // 0x42574c: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_425750:
    if (ctx->pc == 0x425750u) {
        ctx->pc = 0x425750u;
            // 0x425750: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x425754u;
        goto label_425754;
    }
    ctx->pc = 0x42574Cu;
    {
        const bool branch_taken_0x42574c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x425750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42574Cu;
            // 0x425750: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42574c) {
            ctx->pc = 0x42579Cu;
            goto label_42579c;
        }
    }
    ctx->pc = 0x425754u;
label_425754:
    // 0x425754: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x425754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_425758:
    // 0x425758: 0xc088ef4  jal         func_223BD0
label_42575c:
    if (ctx->pc == 0x42575Cu) {
        ctx->pc = 0x42575Cu;
            // 0x42575c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x425760u;
        goto label_425760;
    }
    ctx->pc = 0x425758u;
    SET_GPR_U32(ctx, 31, 0x425760u);
    ctx->pc = 0x42575Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x425758u;
            // 0x42575c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425760u; }
        if (ctx->pc != 0x425760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425760u; }
        if (ctx->pc != 0x425760u) { return; }
    }
    ctx->pc = 0x425760u;
label_425760:
    // 0x425760: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x425760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_425764:
    // 0x425764: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x425764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_425768:
    // 0x425768: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x425768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_42576c:
    // 0x42576c: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x42576cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_425770:
    // 0x425770: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x425770u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_425774:
    // 0x425774: 0xae200200  sw          $zero, 0x200($s1)
    ctx->pc = 0x425774u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 0));
label_425778:
    // 0x425778: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x425778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42577c:
    // 0x42577c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x42577cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_425780:
    // 0x425780: 0xae200210  sw          $zero, 0x210($s1)
    ctx->pc = 0x425780u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 0));
label_425784:
    // 0x425784: 0xae200214  sw          $zero, 0x214($s1)
    ctx->pc = 0x425784u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 0));
label_425788:
    // 0x425788: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x425788u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
label_42578c:
    // 0x42578c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x42578cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_425790:
    // 0x425790: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x425790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_425794:
    // 0x425794: 0xc088b38  jal         func_222CE0
label_425798:
    if (ctx->pc == 0x425798u) {
        ctx->pc = 0x425798u;
            // 0x425798: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42579Cu;
        goto label_42579c;
    }
    ctx->pc = 0x425794u;
    SET_GPR_U32(ctx, 31, 0x42579Cu);
    ctx->pc = 0x425798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x425794u;
            // 0x425798: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42579Cu; }
        if (ctx->pc != 0x42579Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42579Cu; }
        if (ctx->pc != 0x42579Cu) { return; }
    }
    ctx->pc = 0x42579Cu;
label_42579c:
    // 0x42579c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x42579cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4257a0:
    // 0x4257a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4257a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4257a4:
    // 0x4257a4: 0xc08c164  jal         func_230590
label_4257a8:
    if (ctx->pc == 0x4257A8u) {
        ctx->pc = 0x4257A8u;
            // 0x4257a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4257ACu;
        goto label_4257ac;
    }
    ctx->pc = 0x4257A4u;
    SET_GPR_U32(ctx, 31, 0x4257ACu);
    ctx->pc = 0x4257A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4257A4u;
            // 0x4257a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4257ACu; }
        if (ctx->pc != 0x4257ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4257ACu; }
        if (ctx->pc != 0x4257ACu) { return; }
    }
    ctx->pc = 0x4257ACu;
label_4257ac:
    // 0x4257ac: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x4257acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_4257b0:
    // 0x4257b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4257b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4257b4:
    // 0x4257b4: 0x24425f20  addiu       $v0, $v0, 0x5F20
    ctx->pc = 0x4257b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24352));
label_4257b8:
    // 0x4257b8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4257b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4257bc:
    // 0x4257bc: 0xae220200  sw          $v0, 0x200($s1)
    ctx->pc = 0x4257bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 2));
label_4257c0:
    // 0x4257c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4257c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4257c4:
    // 0x4257c4: 0xc08914c  jal         func_224530
label_4257c8:
    if (ctx->pc == 0x4257C8u) {
        ctx->pc = 0x4257C8u;
            // 0x4257c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4257CCu;
        goto label_4257cc;
    }
    ctx->pc = 0x4257C4u;
    SET_GPR_U32(ctx, 31, 0x4257CCu);
    ctx->pc = 0x4257C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4257C4u;
            // 0x4257c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4257CCu; }
        if (ctx->pc != 0x4257CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4257CCu; }
        if (ctx->pc != 0x4257CCu) { return; }
    }
    ctx->pc = 0x4257CCu;
label_4257cc:
    // 0x4257cc: 0x3c0343d1  lui         $v1, 0x43D1
    ctx->pc = 0x4257ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17361 << 16));
label_4257d0:
    // 0x4257d0: 0x3c023e32  lui         $v0, 0x3E32
    ctx->pc = 0x4257d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15922 << 16));
label_4257d4:
    // 0x4257d4: 0x34637084  ori         $v1, $v1, 0x7084
    ctx->pc = 0x4257d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28804);
label_4257d8:
    // 0x4257d8: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x4257d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
label_4257dc:
    // 0x4257dc: 0xae230154  sw          $v1, 0x154($s1)
    ctx->pc = 0x4257dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 3));
label_4257e0:
    // 0x4257e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4257e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4257e4:
    // 0x4257e4: 0xae220158  sw          $v0, 0x158($s1)
    ctx->pc = 0x4257e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
label_4257e8:
    // 0x4257e8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x4257e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4257ec:
    // 0x4257ec: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x4257ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4257f0:
    // 0x4257f0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x4257f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4257f4:
    // 0x4257f4: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x4257f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4257f8:
    // 0x4257f8: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x4257f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4257fc:
    // 0x4257fc: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x4257fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_425800:
    // 0x425800: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x425800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_425804:
    // 0x425804: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x425804u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_425808:
    // 0x425808: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x425808u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_42580c:
    // 0x42580c: 0xc643002c  lwc1        $f3, 0x2C($s2)
    ctx->pc = 0x42580cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_425810:
    // 0x425810: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x425810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_425814:
    // 0x425814: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x425814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_425818:
    // 0x425818: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x425818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42581c:
    // 0x42581c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x42581cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_425820:
    // 0x425820: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x425820u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_425824:
    // 0x425824: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x425824u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_425828:
    // 0x425828: 0xc0892b0  jal         func_224AC0
label_42582c:
    if (ctx->pc == 0x42582Cu) {
        ctx->pc = 0x42582Cu;
            // 0x42582c: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x425830u;
        goto label_425830;
    }
    ctx->pc = 0x425828u;
    SET_GPR_U32(ctx, 31, 0x425830u);
    ctx->pc = 0x42582Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x425828u;
            // 0x42582c: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425830u; }
        if (ctx->pc != 0x425830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425830u; }
        if (ctx->pc != 0x425830u) { return; }
    }
    ctx->pc = 0x425830u;
label_425830:
    // 0x425830: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x425830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_425834:
    // 0x425834: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x425834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_425838:
    // 0x425838: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x425838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_42583c:
    // 0x42583c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x42583cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_425840:
    // 0x425840: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x425840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_425844:
    // 0x425844: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x425844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_425848:
    // 0x425848: 0xc0891d8  jal         func_224760
label_42584c:
    if (ctx->pc == 0x42584Cu) {
        ctx->pc = 0x42584Cu;
            // 0x42584c: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x425850u;
        goto label_425850;
    }
    ctx->pc = 0x425848u;
    SET_GPR_U32(ctx, 31, 0x425850u);
    ctx->pc = 0x42584Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x425848u;
            // 0x42584c: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425850u; }
        if (ctx->pc != 0x425850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425850u; }
        if (ctx->pc != 0x425850u) { return; }
    }
    ctx->pc = 0x425850u;
label_425850:
    // 0x425850: 0x8e240214  lw          $a0, 0x214($s1)
    ctx->pc = 0x425850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_425854:
    // 0x425854: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x425854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_425858:
    // 0x425858: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x425858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42585c:
    // 0x42585c: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x42585cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_425860:
    // 0x425860: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x425860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_425864:
    // 0x425864: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x425864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_425868:
    // 0x425868: 0xae230214  sw          $v1, 0x214($s1)
    ctx->pc = 0x425868u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 3));
label_42586c:
    // 0x42586c: 0xae510050  sw          $s1, 0x50($s2)
    ctx->pc = 0x42586cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 17));
label_425870:
    // 0x425870: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x425870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_425874:
    // 0x425874: 0xc0a7a88  jal         func_29EA20
label_425878:
    if (ctx->pc == 0x425878u) {
        ctx->pc = 0x425878u;
            // 0x425878: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x42587Cu;
        goto label_42587c;
    }
    ctx->pc = 0x425874u;
    SET_GPR_U32(ctx, 31, 0x42587Cu);
    ctx->pc = 0x425878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x425874u;
            // 0x425878: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42587Cu; }
        if (ctx->pc != 0x42587Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42587Cu; }
        if (ctx->pc != 0x42587Cu) { return; }
    }
    ctx->pc = 0x42587Cu;
label_42587c:
    // 0x42587c: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x42587cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_425880:
    // 0x425880: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x425880u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_425884:
    // 0x425884: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_425888:
    if (ctx->pc == 0x425888u) {
        ctx->pc = 0x425888u;
            // 0x425888: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x42588Cu;
        goto label_42588c;
    }
    ctx->pc = 0x425884u;
    {
        const bool branch_taken_0x425884 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x425888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x425884u;
            // 0x425888: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425884) {
            ctx->pc = 0x4258A8u;
            goto label_4258a8;
        }
    }
    ctx->pc = 0x42588Cu;
label_42588c:
    // 0x42588c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42588cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_425890:
    // 0x425890: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x425890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_425894:
    // 0x425894: 0xc0869d0  jal         func_21A740
label_425898:
    if (ctx->pc == 0x425898u) {
        ctx->pc = 0x425898u;
            // 0x425898: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42589Cu;
        goto label_42589c;
    }
    ctx->pc = 0x425894u;
    SET_GPR_U32(ctx, 31, 0x42589Cu);
    ctx->pc = 0x425898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x425894u;
            // 0x425898: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42589Cu; }
        if (ctx->pc != 0x42589Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42589Cu; }
        if (ctx->pc != 0x42589Cu) { return; }
    }
    ctx->pc = 0x42589Cu;
label_42589c:
    // 0x42589c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x42589cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4258a0:
    // 0x4258a0: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x4258a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_4258a4:
    // 0x4258a4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4258a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4258a8:
    // 0x4258a8: 0xae300210  sw          $s0, 0x210($s1)
    ctx->pc = 0x4258a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 16));
label_4258ac:
    // 0x4258ac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4258acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4258b0:
    // 0x4258b0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4258b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4258b4:
    // 0x4258b4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4258b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4258b8:
    // 0x4258b8: 0xc08c650  jal         func_231940
label_4258bc:
    if (ctx->pc == 0x4258BCu) {
        ctx->pc = 0x4258BCu;
            // 0x4258bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4258C0u;
        goto label_4258c0;
    }
    ctx->pc = 0x4258B8u;
    SET_GPR_U32(ctx, 31, 0x4258C0u);
    ctx->pc = 0x4258BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4258B8u;
            // 0x4258bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4258C0u; }
        if (ctx->pc != 0x4258C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4258C0u; }
        if (ctx->pc != 0x4258C0u) { return; }
    }
    ctx->pc = 0x4258C0u;
label_4258c0:
    // 0x4258c0: 0xc040180  jal         func_100600
label_4258c4:
    if (ctx->pc == 0x4258C4u) {
        ctx->pc = 0x4258C4u;
            // 0x4258c4: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x4258C8u;
        goto label_4258c8;
    }
    ctx->pc = 0x4258C0u;
    SET_GPR_U32(ctx, 31, 0x4258C8u);
    ctx->pc = 0x4258C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4258C0u;
            // 0x4258c4: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4258C8u; }
        if (ctx->pc != 0x4258C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4258C8u; }
        if (ctx->pc != 0x4258C8u) { return; }
    }
    ctx->pc = 0x4258C8u;
label_4258c8:
    // 0x4258c8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_4258cc:
    if (ctx->pc == 0x4258CCu) {
        ctx->pc = 0x4258CCu;
            // 0x4258cc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4258D0u;
        goto label_4258d0;
    }
    ctx->pc = 0x4258C8u;
    {
        const bool branch_taken_0x4258c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4258CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4258C8u;
            // 0x4258cc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4258c8) {
            ctx->pc = 0x425938u;
            goto label_425938;
        }
    }
    ctx->pc = 0x4258D0u;
label_4258d0:
    // 0x4258d0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4258d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4258d4:
    // 0x4258d4: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x4258d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
label_4258d8:
    // 0x4258d8: 0x8c487430  lw          $t0, 0x7430($v0)
    ctx->pc = 0x4258d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29744)));
label_4258dc:
    // 0x4258dc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4258dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4258e0:
    // 0x4258e0: 0x8e470050  lw          $a3, 0x50($s2)
    ctx->pc = 0x4258e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_4258e4:
    // 0x4258e4: 0x24c621e0  addiu       $a2, $a2, 0x21E0
    ctx->pc = 0x4258e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8672));
label_4258e8:
    // 0x4258e8: 0x3c05c000  lui         $a1, 0xC000
    ctx->pc = 0x4258e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49152 << 16));
label_4258ec:
    // 0x4258ec: 0x246385d0  addiu       $v1, $v1, -0x7A30
    ctx->pc = 0x4258ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936016));
label_4258f0:
    // 0x4258f0: 0x3c023ee6  lui         $v0, 0x3EE6
    ctx->pc = 0x4258f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16102 << 16));
label_4258f4:
    // 0x4258f4: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x4258f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_4258f8:
    // 0x4258f8: 0xae060048  sw          $a2, 0x48($s0)
    ctx->pc = 0x4258f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 6));
label_4258fc:
    // 0x4258fc: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x4258fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_425900:
    // 0x425900: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x425900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_425904:
    // 0x425904: 0xae070024  sw          $a3, 0x24($s0)
    ctx->pc = 0x425904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 7));
label_425908:
    // 0x425908: 0xae050028  sw          $a1, 0x28($s0)
    ctx->pc = 0x425908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 5));
label_42590c:
    // 0x42590c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x42590cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_425910:
    // 0x425910: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x425910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_425914:
    // 0x425914: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x425914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_425918:
    // 0x425918: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x425918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_42591c:
    // 0x42591c: 0xae08003c  sw          $t0, 0x3C($s0)
    ctx->pc = 0x42591cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 8));
label_425920:
    // 0x425920: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x425920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_425924:
    // 0x425924: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x425924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_425928:
    // 0x425928: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x425928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
label_42592c:
    // 0x42592c: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x42592cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_425930:
    // 0x425930: 0xc04c968  jal         func_1325A0
label_425934:
    if (ctx->pc == 0x425934u) {
        ctx->pc = 0x425934u;
            // 0x425934: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x425938u;
        goto label_425938;
    }
    ctx->pc = 0x425930u;
    SET_GPR_U32(ctx, 31, 0x425938u);
    ctx->pc = 0x425934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x425930u;
            // 0x425934: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425938u; }
        if (ctx->pc != 0x425938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425938u; }
        if (ctx->pc != 0x425938u) { return; }
    }
    ctx->pc = 0x425938u;
label_425938:
    // 0x425938: 0xae5000a0  sw          $s0, 0xA0($s2)
    ctx->pc = 0x425938u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 16));
label_42593c:
    // 0x42593c: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x42593cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_425940:
    // 0x425940: 0x8e4400b0  lw          $a0, 0xB0($s2)
    ctx->pc = 0x425940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_425944:
    // 0x425944: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x425944u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_425948:
    // 0x425948: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x425948u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42594c:
    // 0x42594c: 0x3c064120  lui         $a2, 0x4120
    ctx->pc = 0x42594cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16672 << 16));
label_425950:
    // 0x425950: 0x3c054416  lui         $a1, 0x4416
    ctx->pc = 0x425950u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17430 << 16));
label_425954:
    // 0x425954: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x425954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_425958:
    // 0x425958: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x425958u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_42595c:
    // 0x42595c: 0x34890004  ori         $t1, $a0, 0x4
    ctx->pc = 0x42595cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
label_425960:
    // 0x425960: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x425960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_425964:
    // 0x425964: 0xae4900b0  sw          $t1, 0xB0($s2)
    ctx->pc = 0x425964u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 9));
label_425968:
    // 0x425968: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x425968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_42596c:
    // 0x42596c: 0x8e090060  lw          $t1, 0x60($s0)
    ctx->pc = 0x42596cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_425970:
    // 0x425970: 0x1284024  and         $t0, $t1, $t0
    ctx->pc = 0x425970u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & GPR_U64(ctx, 8));
label_425974:
    // 0x425974: 0xae080060  sw          $t0, 0x60($s0)
    ctx->pc = 0x425974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 8));
label_425978:
    // 0x425978: 0xae47008c  sw          $a3, 0x8C($s2)
    ctx->pc = 0x425978u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 7));
label_42597c:
    // 0x42597c: 0xae460070  sw          $a2, 0x70($s2)
    ctx->pc = 0x42597cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 6));
label_425980:
    // 0x425980: 0xae450078  sw          $a1, 0x78($s2)
    ctx->pc = 0x425980u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 5));
label_425984:
    // 0x425984: 0xae430080  sw          $v1, 0x80($s2)
    ctx->pc = 0x425984u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 3));
label_425988:
    // 0x425988: 0xa2420068  sb          $v0, 0x68($s2)
    ctx->pc = 0x425988u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 104), (uint8_t)GPR_U32(ctx, 2));
label_42598c:
    // 0x42598c: 0xa2400069  sb          $zero, 0x69($s2)
    ctx->pc = 0x42598cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 105), (uint8_t)GPR_U32(ctx, 0));
label_425990:
    // 0x425990: 0xa240006a  sb          $zero, 0x6A($s2)
    ctx->pc = 0x425990u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 106), (uint8_t)GPR_U32(ctx, 0));
label_425994:
    // 0x425994: 0xc040180  jal         func_100600
label_425998:
    if (ctx->pc == 0x425998u) {
        ctx->pc = 0x425998u;
            // 0x425998: 0xa247006b  sb          $a3, 0x6B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 107), (uint8_t)GPR_U32(ctx, 7));
        ctx->pc = 0x42599Cu;
        goto label_42599c;
    }
    ctx->pc = 0x425994u;
    SET_GPR_U32(ctx, 31, 0x42599Cu);
    ctx->pc = 0x425998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x425994u;
            // 0x425998: 0xa247006b  sb          $a3, 0x6B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 107), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42599Cu; }
        if (ctx->pc != 0x42599Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42599Cu; }
        if (ctx->pc != 0x42599Cu) { return; }
    }
    ctx->pc = 0x42599Cu;
label_42599c:
    // 0x42599c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x42599cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4259a0:
    // 0x4259a0: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_4259a4:
    if (ctx->pc == 0x4259A4u) {
        ctx->pc = 0x4259A4u;
            // 0x4259a4: 0x3c02451c  lui         $v0, 0x451C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
        ctx->pc = 0x4259A8u;
        goto label_4259a8;
    }
    ctx->pc = 0x4259A0u;
    {
        const bool branch_taken_0x4259a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4259a0) {
            ctx->pc = 0x4259A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4259A0u;
            // 0x4259a4: 0x3c02451c  lui         $v0, 0x451C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4259E0u;
            goto label_4259e0;
        }
    }
    ctx->pc = 0x4259A8u;
label_4259a8:
    // 0x4259a8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4259a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4259ac:
    // 0x4259ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4259acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4259b0:
    // 0x4259b0: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x4259b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_4259b4:
    // 0x4259b4: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x4259b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_4259b8:
    // 0x4259b8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4259b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4259bc:
    // 0x4259bc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4259bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_4259c0:
    // 0x4259c0: 0xc040138  jal         func_1004E0
label_4259c4:
    if (ctx->pc == 0x4259C4u) {
        ctx->pc = 0x4259C4u;
            // 0x4259c4: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4259C8u;
        goto label_4259c8;
    }
    ctx->pc = 0x4259C0u;
    SET_GPR_U32(ctx, 31, 0x4259C8u);
    ctx->pc = 0x4259C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4259C0u;
            // 0x4259c4: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4259C8u; }
        if (ctx->pc != 0x4259C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4259C8u; }
        if (ctx->pc != 0x4259C8u) { return; }
    }
    ctx->pc = 0x4259C8u;
label_4259c8:
    // 0x4259c8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4259c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_4259cc:
    // 0x4259cc: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x4259ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_4259d0:
    // 0x4259d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4259d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4259d4:
    // 0x4259d4: 0xc04a576  jal         func_1295D8
label_4259d8:
    if (ctx->pc == 0x4259D8u) {
        ctx->pc = 0x4259D8u;
            // 0x4259d8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x4259DCu;
        goto label_4259dc;
    }
    ctx->pc = 0x4259D4u;
    SET_GPR_U32(ctx, 31, 0x4259DCu);
    ctx->pc = 0x4259D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4259D4u;
            // 0x4259d8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4259DCu; }
        if (ctx->pc != 0x4259DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4259DCu; }
        if (ctx->pc != 0x4259DCu) { return; }
    }
    ctx->pc = 0x4259DCu;
label_4259dc:
    // 0x4259dc: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x4259dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
label_4259e0:
    // 0x4259e0: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x4259e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_4259e4:
    // 0x4259e4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x4259e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_4259e8:
    // 0x4259e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4259e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4259ec:
    // 0x4259ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4259ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4259f0:
    // 0x4259f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4259f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4259f4:
    // 0x4259f4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x4259f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_4259f8:
    // 0x4259f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4259f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4259fc:
    // 0x4259fc: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x4259fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_425a00:
    // 0x425a00: 0x344601ae  ori         $a2, $v0, 0x1AE
    ctx->pc = 0x425a00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)430);
label_425a04:
    // 0x425a04: 0xc122cd8  jal         func_48B360
label_425a08:
    if (ctx->pc == 0x425A08u) {
        ctx->pc = 0x425A08u;
            // 0x425a08: 0xae5000e4  sw          $s0, 0xE4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 16));
        ctx->pc = 0x425A0Cu;
        goto label_425a0c;
    }
    ctx->pc = 0x425A04u;
    SET_GPR_U32(ctx, 31, 0x425A0Cu);
    ctx->pc = 0x425A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x425A04u;
            // 0x425a08: 0xae5000e4  sw          $s0, 0xE4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425A0Cu; }
        if (ctx->pc != 0x425A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425A0Cu; }
        if (ctx->pc != 0x425A0Cu) { return; }
    }
    ctx->pc = 0x425A0Cu;
label_425a0c:
    // 0x425a0c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x425a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_425a10:
    // 0x425a10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x425a10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_425a14:
    // 0x425a14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x425a14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_425a18:
    // 0x425a18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x425a18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_425a1c:
    // 0x425a1c: 0x3e00008  jr          $ra
label_425a20:
    if (ctx->pc == 0x425A20u) {
        ctx->pc = 0x425A20u;
            // 0x425a20: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x425A24u;
        goto label_425a24;
    }
    ctx->pc = 0x425A1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x425A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x425A1Cu;
            // 0x425a20: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x425A24u;
label_425a24:
    // 0x425a24: 0x0  nop
    ctx->pc = 0x425a24u;
    // NOP
label_425a28:
    // 0x425a28: 0x0  nop
    ctx->pc = 0x425a28u;
    // NOP
label_425a2c:
    // 0x425a2c: 0x0  nop
    ctx->pc = 0x425a2cu;
    // NOP
label_425a30:
    // 0x425a30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x425a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_425a34:
    // 0x425a34: 0xa08300cc  sb          $v1, 0xCC($a0)
    ctx->pc = 0x425a34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 204), (uint8_t)GPR_U32(ctx, 3));
label_425a38:
    // 0x425a38: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x425a38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_425a3c:
    // 0x425a3c: 0xac8300c4  sw          $v1, 0xC4($a0)
    ctx->pc = 0x425a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 3));
label_425a40:
    // 0x425a40: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x425a40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_425a44:
    // 0x425a44: 0x8c658a08  lw          $a1, -0x75F8($v1)
    ctx->pc = 0x425a44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_425a48:
    // 0x425a48: 0x80a5007a  lb          $a1, 0x7A($a1)
    ctx->pc = 0x425a48u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 122)));
label_425a4c:
    // 0x425a4c: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x425a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_425a50:
    // 0x425a50: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x425a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_425a54:
    // 0x425a54: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x425a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_425a58:
    // 0x425a58: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x425a58u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_425a5c:
    // 0x425a5c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x425a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_425a60:
    // 0x425a60: 0x3e00008  jr          $ra
label_425a64:
    if (ctx->pc == 0x425A64u) {
        ctx->pc = 0x425A64u;
            // 0x425a64: 0xac8300c8  sw          $v1, 0xC8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 3));
        ctx->pc = 0x425A68u;
        goto label_425a68;
    }
    ctx->pc = 0x425A60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x425A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x425A60u;
            // 0x425a64: 0xac8300c8  sw          $v1, 0xC8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x425A68u;
label_425a68:
    // 0x425a68: 0x0  nop
    ctx->pc = 0x425a68u;
    // NOP
label_425a6c:
    // 0x425a6c: 0x0  nop
    ctx->pc = 0x425a6cu;
    // NOP
label_425a70:
    // 0x425a70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x425a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_425a74:
    // 0x425a74: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x425a74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_425a78:
    // 0x425a78: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x425a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_425a7c:
    // 0x425a7c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x425a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_425a80:
    // 0x425a80: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x425a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_425a84:
    // 0x425a84: 0x24c6c940  addiu       $a2, $a2, -0x36C0
    ctx->pc = 0x425a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953280));
label_425a88:
    // 0x425a88: 0xc4a202c0  lwc1        $f2, 0x2C0($a1)
    ctx->pc = 0x425a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_425a8c:
    // 0x425a8c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x425a8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_425a90:
    // 0x425a90: 0xc4a102c4  lwc1        $f1, 0x2C4($a1)
    ctx->pc = 0x425a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_425a94:
    // 0x425a94: 0xc4a002c8  lwc1        $f0, 0x2C8($a1)
    ctx->pc = 0x425a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_425a98:
    // 0x425a98: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x425a98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_425a9c:
    // 0x425a9c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x425a9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_425aa0:
    // 0x425aa0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x425aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_425aa4:
    // 0x425aa4: 0xc4a20300  lwc1        $f2, 0x300($a1)
    ctx->pc = 0x425aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_425aa8:
    // 0x425aa8: 0xc4a10304  lwc1        $f1, 0x304($a1)
    ctx->pc = 0x425aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_425aac:
    // 0x425aac: 0xc4a00308  lwc1        $f0, 0x308($a1)
    ctx->pc = 0x425aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_425ab0:
    // 0x425ab0: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x425ab0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_425ab4:
    // 0x425ab4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x425ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_425ab8:
    // 0x425ab8: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x425ab8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_425abc:
    // 0x425abc: 0xc04cafc  jal         func_132BF0
label_425ac0:
    if (ctx->pc == 0x425AC0u) {
        ctx->pc = 0x425AC0u;
            // 0x425ac0: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->pc = 0x425AC4u;
        goto label_425ac4;
    }
    ctx->pc = 0x425ABCu;
    SET_GPR_U32(ctx, 31, 0x425AC4u);
    ctx->pc = 0x425AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x425ABCu;
            // 0x425ac0: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132BF0u;
    if (runtime->hasFunction(0x132BF0u)) {
        auto targetFn = runtime->lookupFunction(0x132BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425AC4u; }
        if (ctx->pc != 0x425AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132BF0_0x132bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425AC4u; }
        if (ctx->pc != 0x425AC4u) { return; }
    }
    ctx->pc = 0x425AC4u;
label_425ac4:
    // 0x425ac4: 0xc040180  jal         func_100600
label_425ac8:
    if (ctx->pc == 0x425AC8u) {
        ctx->pc = 0x425AC8u;
            // 0x425ac8: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->pc = 0x425ACCu;
        goto label_425acc;
    }
    ctx->pc = 0x425AC4u;
    SET_GPR_U32(ctx, 31, 0x425ACCu);
    ctx->pc = 0x425AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x425AC4u;
            // 0x425ac8: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425ACCu; }
        if (ctx->pc != 0x425ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425ACCu; }
        if (ctx->pc != 0x425ACCu) { return; }
    }
    ctx->pc = 0x425ACCu;
label_425acc:
    // 0x425acc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x425accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_425ad0:
    // 0x425ad0: 0x5080002a  beql        $a0, $zero, . + 4 + (0x2A << 2)
label_425ad4:
    if (ctx->pc == 0x425AD4u) {
        ctx->pc = 0x425AD4u;
            // 0x425ad4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x425AD8u;
        goto label_425ad8;
    }
    ctx->pc = 0x425AD0u;
    {
        const bool branch_taken_0x425ad0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x425ad0) {
            ctx->pc = 0x425AD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x425AD0u;
            // 0x425ad4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x425B7Cu;
            goto label_425b7c;
        }
    }
    ctx->pc = 0x425AD8u;
label_425ad8:
    // 0x425ad8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x425ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_425adc:
    // 0x425adc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x425adcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_425ae0:
    // 0x425ae0: 0xc441c980  lwc1        $f1, -0x3680($v0)
    ctx->pc = 0x425ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_425ae4:
    // 0x425ae4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x425ae4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_425ae8:
    // 0x425ae8: 0x0  nop
    ctx->pc = 0x425ae8u;
    // NOP
label_425aec:
    // 0x425aec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x425aecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_425af0:
    // 0x425af0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_425af4:
    if (ctx->pc == 0x425AF4u) {
        ctx->pc = 0x425AF4u;
            // 0x425af4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x425AF8u;
        goto label_425af8;
    }
    ctx->pc = 0x425AF0u;
    {
        const bool branch_taken_0x425af0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x425af0) {
            ctx->pc = 0x425AF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x425AF0u;
            // 0x425af4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x425B08u;
            goto label_425b08;
        }
    }
    ctx->pc = 0x425AF8u;
label_425af8:
    // 0x425af8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x425af8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_425afc:
    // 0x425afc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x425afcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_425b00:
    // 0x425b00: 0x10000006  b           . + 4 + (0x6 << 2)
label_425b04:
    if (ctx->pc == 0x425B04u) {
        ctx->pc = 0x425B08u;
        goto label_425b08;
    }
    ctx->pc = 0x425B00u;
    {
        const bool branch_taken_0x425b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x425b00) {
            ctx->pc = 0x425B1Cu;
            goto label_425b1c;
        }
    }
    ctx->pc = 0x425B08u;
label_425b08:
    // 0x425b08: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x425b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_425b0c:
    // 0x425b0c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x425b0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_425b10:
    // 0x425b10: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x425b10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_425b14:
    // 0x425b14: 0x0  nop
    ctx->pc = 0x425b14u;
    // NOP
label_425b18:
    // 0x425b18: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x425b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_425b1c:
    // 0x425b1c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x425b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_425b20:
    // 0x425b20: 0x3c090066  lui         $t1, 0x66
    ctx->pc = 0x425b20u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)102 << 16));
label_425b24:
    // 0x425b24: 0x2442c950  addiu       $v0, $v0, -0x36B0
    ctx->pc = 0x425b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953296));
label_425b28:
    // 0x425b28: 0x3c0a0066  lui         $t2, 0x66
    ctx->pc = 0x425b28u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)102 << 16));
label_425b2c:
    // 0x425b2c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x425b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_425b30:
    // 0x425b30: 0x26070890  addiu       $a3, $s0, 0x890
    ctx->pc = 0x425b30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_425b34:
    // 0x425b34: 0x3c02c47a  lui         $v0, 0xC47A
    ctx->pc = 0x425b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50298 << 16));
label_425b38:
    // 0x425b38: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x425b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_425b3c:
    // 0x425b3c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x425b3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_425b40:
    // 0x425b40: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x425b40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_425b44:
    // 0x425b44: 0x3c02bf33  lui         $v0, 0xBF33
    ctx->pc = 0x425b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48947 << 16));
label_425b48:
    // 0x425b48: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x425b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_425b4c:
    // 0x425b4c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x425b4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_425b50:
    // 0x425b50: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x425b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_425b54:
    // 0x425b54: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x425b54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_425b58:
    // 0x425b58: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x425b58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_425b5c:
    // 0x425b5c: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x425b5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_425b60:
    // 0x425b60: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x425b60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_425b64:
    // 0x425b64: 0x2529c960  addiu       $t1, $t1, -0x36A0
    ctx->pc = 0x425b64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294953312));
label_425b68:
    // 0x425b68: 0x254ac970  addiu       $t2, $t2, -0x3690
    ctx->pc = 0x425b68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294953328));
label_425b6c:
    // 0x425b6c: 0x27ab0030  addiu       $t3, $sp, 0x30
    ctx->pc = 0x425b6cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_425b70:
    // 0x425b70: 0xc0db488  jal         func_36D220
label_425b74:
    if (ctx->pc == 0x425B74u) {
        ctx->pc = 0x425B74u;
            // 0x425b74: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x425B78u;
        goto label_425b78;
    }
    ctx->pc = 0x425B70u;
    SET_GPR_U32(ctx, 31, 0x425B78u);
    ctx->pc = 0x425B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x425B70u;
            // 0x425b74: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x36D220u;
    if (runtime->hasFunction(0x36D220u)) {
        auto targetFn = runtime->lookupFunction(0x36D220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425B78u; }
        if (ctx->pc != 0x425B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036D220_0x36d220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425B78u; }
        if (ctx->pc != 0x425B78u) { return; }
    }
    ctx->pc = 0x425B78u;
label_425b78:
    // 0x425b78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x425b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_425b7c:
    // 0x425b7c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x425b7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_425b80:
    // 0x425b80: 0x3e00008  jr          $ra
label_425b84:
    if (ctx->pc == 0x425B84u) {
        ctx->pc = 0x425B84u;
            // 0x425b84: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x425B88u;
        goto label_425b88;
    }
    ctx->pc = 0x425B80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x425B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x425B80u;
            // 0x425b84: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x425B88u;
label_425b88:
    // 0x425b88: 0x0  nop
    ctx->pc = 0x425b88u;
    // NOP
label_425b8c:
    // 0x425b8c: 0x0  nop
    ctx->pc = 0x425b8cu;
    // NOP
label_425b90:
    // 0x425b90: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x425b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_425b94:
    // 0x425b94: 0x80ba938  j           func_2EA4E0
label_425b98:
    if (ctx->pc == 0x425B98u) {
        ctx->pc = 0x425B98u;
            // 0x425b98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x425B9Cu;
        goto label_425b9c;
    }
    ctx->pc = 0x425B94u;
    ctx->pc = 0x425B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x425B94u;
            // 0x425b98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EA4E0u;
    if (runtime->hasFunction(0x2EA4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2EA4E0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002EA4E0_0x2ea4e0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x425B9Cu;
label_425b9c:
    // 0x425b9c: 0x0  nop
    ctx->pc = 0x425b9cu;
    // NOP
label_425ba0:
    // 0x425ba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x425ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_425ba4:
    // 0x425ba4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x425ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_425ba8:
    // 0x425ba8: 0x8c8300ec  lw          $v1, 0xEC($a0)
    ctx->pc = 0x425ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 236)));
label_425bac:
    // 0x425bac: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
label_425bb0:
    if (ctx->pc == 0x425BB0u) {
        ctx->pc = 0x425BB0u;
            // 0x425bb0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x425BB4u;
        goto label_425bb4;
    }
    ctx->pc = 0x425BACu;
    {
        const bool branch_taken_0x425bac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x425bac) {
            ctx->pc = 0x425BB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x425BACu;
            // 0x425bb0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x425BF4u;
            goto label_425bf4;
        }
    }
    ctx->pc = 0x425BB4u;
label_425bb4:
    // 0x425bb4: 0xc4ac0000  lwc1        $f12, 0x0($a1)
    ctx->pc = 0x425bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_425bb8:
    // 0x425bb8: 0xc4ad0004  lwc1        $f13, 0x4($a1)
    ctx->pc = 0x425bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_425bbc:
    // 0x425bbc: 0xc4ae0008  lwc1        $f14, 0x8($a1)
    ctx->pc = 0x425bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_425bc0:
    // 0x425bc0: 0xc04cbd8  jal         func_132F60
label_425bc4:
    if (ctx->pc == 0x425BC4u) {
        ctx->pc = 0x425BC4u;
            // 0x425bc4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x425BC8u;
        goto label_425bc8;
    }
    ctx->pc = 0x425BC0u;
    SET_GPR_U32(ctx, 31, 0x425BC8u);
    ctx->pc = 0x425BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x425BC0u;
            // 0x425bc4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425BC8u; }
        if (ctx->pc != 0x425BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425BC8u; }
        if (ctx->pc != 0x425BC8u) { return; }
    }
    ctx->pc = 0x425BC8u;
label_425bc8:
    // 0x425bc8: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x425bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_425bcc:
    // 0x425bcc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x425bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_425bd0:
    // 0x425bd0: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x425bd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_425bd4:
    // 0x425bd4: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x425bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_425bd8:
    // 0x425bd8: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x425bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_425bdc:
    // 0x425bdc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x425bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_425be0:
    // 0x425be0: 0xc7ae0018  lwc1        $f14, 0x18($sp)
    ctx->pc = 0x425be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_425be4:
    // 0x425be4: 0x46007c06  mov.s       $f16, $f15
    ctx->pc = 0x425be4u;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
label_425be8:
    // 0x425be8: 0xc0bafb8  jal         func_2EBEE0
label_425bec:
    if (ctx->pc == 0x425BECu) {
        ctx->pc = 0x425BECu;
            // 0x425bec: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->pc = 0x425BF0u;
        goto label_425bf0;
    }
    ctx->pc = 0x425BE8u;
    SET_GPR_U32(ctx, 31, 0x425BF0u);
    ctx->pc = 0x425BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x425BE8u;
            // 0x425bec: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425BF0u; }
        if (ctx->pc != 0x425BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425BF0u; }
        if (ctx->pc != 0x425BF0u) { return; }
    }
    ctx->pc = 0x425BF0u;
label_425bf0:
    // 0x425bf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x425bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_425bf4:
    // 0x425bf4: 0x3e00008  jr          $ra
label_425bf8:
    if (ctx->pc == 0x425BF8u) {
        ctx->pc = 0x425BF8u;
            // 0x425bf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x425BFCu;
        goto label_425bfc;
    }
    ctx->pc = 0x425BF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x425BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x425BF4u;
            // 0x425bf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x425BFCu;
label_425bfc:
    // 0x425bfc: 0x0  nop
    ctx->pc = 0x425bfcu;
    // NOP
label_425c00:
    // 0x425c00: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x425c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_425c04:
    // 0x425c04: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x425c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_425c08:
    // 0x425c08: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x425c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_425c0c:
    // 0x425c0c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x425c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_425c10:
    // 0x425c10: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x425c10u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_425c14:
    // 0x425c14: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x425c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_425c18:
    // 0x425c18: 0x26a50010  addiu       $a1, $s5, 0x10
    ctx->pc = 0x425c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_425c1c:
    // 0x425c1c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x425c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_425c20:
    // 0x425c20: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x425c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_425c24:
    // 0x425c24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x425c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_425c28:
    // 0x425c28: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x425c28u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_425c2c:
    // 0x425c2c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x425c2cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_425c30:
    // 0x425c30: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x425c30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_425c34:
    // 0x425c34: 0x8c900050  lw          $s0, 0x50($a0)
    ctx->pc = 0x425c34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_425c38:
    // 0x425c38: 0xc0dc9bc  jal         func_3726F0
label_425c3c:
    if (ctx->pc == 0x425C3Cu) {
        ctx->pc = 0x425C3Cu;
            // 0x425c3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x425C40u;
        goto label_425c40;
    }
    ctx->pc = 0x425C38u;
    SET_GPR_U32(ctx, 31, 0x425C40u);
    ctx->pc = 0x425C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x425C38u;
            // 0x425c3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3726F0u;
    if (runtime->hasFunction(0x3726F0u)) {
        auto targetFn = runtime->lookupFunction(0x3726F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425C40u; }
        if (ctx->pc != 0x425C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003726F0_0x3726f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425C40u; }
        if (ctx->pc != 0x425C40u) { return; }
    }
    ctx->pc = 0x425C40u;
label_425c40:
    // 0x425c40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x425c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_425c44:
    // 0x425c44: 0xc0dc9a0  jal         func_372680
label_425c48:
    if (ctx->pc == 0x425C48u) {
        ctx->pc = 0x425C48u;
            // 0x425c48: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x425C4Cu;
        goto label_425c4c;
    }
    ctx->pc = 0x425C44u;
    SET_GPR_U32(ctx, 31, 0x425C4Cu);
    ctx->pc = 0x425C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x425C44u;
            // 0x425c48: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x372680u;
    if (runtime->hasFunction(0x372680u)) {
        auto targetFn = runtime->lookupFunction(0x372680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425C4Cu; }
        if (ctx->pc != 0x425C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00372680_0x372680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425C4Cu; }
        if (ctx->pc != 0x425C4Cu) { return; }
    }
    ctx->pc = 0x425C4Cu;
label_425c4c:
    // 0x425c4c: 0x8ea400e0  lw          $a0, 0xE0($s5)
    ctx->pc = 0x425c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 224)));
label_425c50:
    // 0x425c50: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x425c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_425c54:
    // 0x425c54: 0x50830167  beql        $a0, $v1, . + 4 + (0x167 << 2)
label_425c58:
    if (ctx->pc == 0x425C58u) {
        ctx->pc = 0x425C58u;
            // 0x425c58: 0x3c02bd39  lui         $v0, 0xBD39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48441 << 16));
        ctx->pc = 0x425C5Cu;
        goto label_425c5c;
    }
    ctx->pc = 0x425C54u;
    {
        const bool branch_taken_0x425c54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x425c54) {
            ctx->pc = 0x425C58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x425C54u;
            // 0x425c58: 0x3c02bd39  lui         $v0, 0xBD39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48441 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4261F4u;
            goto label_4261f4;
        }
    }
    ctx->pc = 0x425C5Cu;
label_425c5c:
    // 0x425c5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x425c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_425c60:
    // 0x425c60: 0x10830028  beq         $a0, $v1, . + 4 + (0x28 << 2)
label_425c64:
    if (ctx->pc == 0x425C64u) {
        ctx->pc = 0x425C68u;
        goto label_425c68;
    }
    ctx->pc = 0x425C60u;
    {
        const bool branch_taken_0x425c60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x425c60) {
            ctx->pc = 0x425D04u;
            goto label_425d04;
        }
    }
    ctx->pc = 0x425C68u;
label_425c68:
    // 0x425c68: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_425c6c:
    if (ctx->pc == 0x425C6Cu) {
        ctx->pc = 0x425C6Cu;
            // 0x425c6c: 0x8ea50050  lw          $a1, 0x50($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
        ctx->pc = 0x425C70u;
        goto label_425c70;
    }
    ctx->pc = 0x425C68u;
    {
        const bool branch_taken_0x425c68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x425c68) {
            ctx->pc = 0x425C6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x425C68u;
            // 0x425c6c: 0x8ea50050  lw          $a1, 0x50($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x425C78u;
            goto label_425c78;
        }
    }
    ctx->pc = 0x425C70u;
label_425c70:
    // 0x425c70: 0x100001ef  b           . + 4 + (0x1EF << 2)
label_425c74:
    if (ctx->pc == 0x425C74u) {
        ctx->pc = 0x425C78u;
        goto label_425c78;
    }
    ctx->pc = 0x425C70u;
    {
        const bool branch_taken_0x425c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x425c70) {
            ctx->pc = 0x426430u;
            goto label_426430;
        }
    }
    ctx->pc = 0x425C78u;
label_425c78:
    // 0x425c78: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x425c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_425c7c:
    // 0x425c7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x425c7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_425c80:
    // 0x425c80: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x425c80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
label_425c84:
    // 0x425c84: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x425c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_425c88:
    // 0x425c88: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x425c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_425c8c:
    // 0x425c8c: 0xc08bff0  jal         func_22FFC0
label_425c90:
    if (ctx->pc == 0x425C90u) {
        ctx->pc = 0x425C90u;
            // 0x425c90: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x425C94u;
        goto label_425c94;
    }
    ctx->pc = 0x425C8Cu;
    SET_GPR_U32(ctx, 31, 0x425C94u);
    ctx->pc = 0x425C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x425C8Cu;
            // 0x425c90: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425C94u; }
        if (ctx->pc != 0x425C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425C94u; }
        if (ctx->pc != 0x425C94u) { return; }
    }
    ctx->pc = 0x425C94u;
label_425c94:
    // 0x425c94: 0x8ea40050  lw          $a0, 0x50($s5)
    ctx->pc = 0x425c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_425c98:
    // 0x425c98: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x425c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_425c9c:
    // 0x425c9c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x425c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_425ca0:
    // 0x425ca0: 0xc08914c  jal         func_224530
label_425ca4:
    if (ctx->pc == 0x425CA4u) {
        ctx->pc = 0x425CA4u;
            // 0x425ca4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x425CA8u;
        goto label_425ca8;
    }
    ctx->pc = 0x425CA0u;
    SET_GPR_U32(ctx, 31, 0x425CA8u);
    ctx->pc = 0x425CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x425CA0u;
            // 0x425ca4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425CA8u; }
        if (ctx->pc != 0x425CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425CA8u; }
        if (ctx->pc != 0x425CA8u) { return; }
    }
    ctx->pc = 0x425CA8u;
label_425ca8:
    // 0x425ca8: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x425ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
label_425cac:
    // 0x425cac: 0xafa00124  sw          $zero, 0x124($sp)
    ctx->pc = 0x425cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 0));
label_425cb0:
    // 0x425cb0: 0xafa00128  sw          $zero, 0x128($sp)
    ctx->pc = 0x425cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 0));
label_425cb4:
    // 0x425cb4: 0xafa0012c  sw          $zero, 0x12C($sp)
    ctx->pc = 0x425cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 0));
label_425cb8:
    // 0x425cb8: 0x8eb00050  lw          $s0, 0x50($s5)
    ctx->pc = 0x425cb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_425cbc:
    // 0x425cbc: 0xc088b74  jal         func_222DD0
label_425cc0:
    if (ctx->pc == 0x425CC0u) {
        ctx->pc = 0x425CC0u;
            // 0x425cc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x425CC4u;
        goto label_425cc4;
    }
    ctx->pc = 0x425CBCu;
    SET_GPR_U32(ctx, 31, 0x425CC4u);
    ctx->pc = 0x425CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x425CBCu;
            // 0x425cc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425CC4u; }
        if (ctx->pc != 0x425CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425CC4u; }
        if (ctx->pc != 0x425CC4u) { return; }
    }
    ctx->pc = 0x425CC4u;
label_425cc4:
    // 0x425cc4: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x425cc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_425cc8:
    // 0x425cc8: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x425cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_425ccc:
    // 0x425ccc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x425cccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_425cd0:
    // 0x425cd0: 0x320f809  jalr        $t9
label_425cd4:
    if (ctx->pc == 0x425CD4u) {
        ctx->pc = 0x425CD4u;
            // 0x425cd4: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x425CD8u;
        goto label_425cd8;
    }
    ctx->pc = 0x425CD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x425CD8u);
        ctx->pc = 0x425CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x425CD0u;
            // 0x425cd4: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x425CD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x425CD8u; }
            if (ctx->pc != 0x425CD8u) { return; }
        }
        }
    }
    ctx->pc = 0x425CD8u;
label_425cd8:
    // 0x425cd8: 0x8eb00050  lw          $s0, 0x50($s5)
    ctx->pc = 0x425cd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_425cdc:
    // 0x425cdc: 0xc088b74  jal         func_222DD0
label_425ce0:
    if (ctx->pc == 0x425CE0u) {
        ctx->pc = 0x425CE0u;
            // 0x425ce0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x425CE4u;
        goto label_425ce4;
    }
    ctx->pc = 0x425CDCu;
    SET_GPR_U32(ctx, 31, 0x425CE4u);
    ctx->pc = 0x425CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x425CDCu;
            // 0x425ce0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425CE4u; }
        if (ctx->pc != 0x425CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425CE4u; }
        if (ctx->pc != 0x425CE4u) { return; }
    }
    ctx->pc = 0x425CE4u;
label_425ce4:
    // 0x425ce4: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x425ce4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_425ce8:
    // 0x425ce8: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x425ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_425cec:
    // 0x425cec: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x425cecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_425cf0:
    // 0x425cf0: 0x320f809  jalr        $t9
label_425cf4:
    if (ctx->pc == 0x425CF4u) {
        ctx->pc = 0x425CF4u;
            // 0x425cf4: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x425CF8u;
        goto label_425cf8;
    }
    ctx->pc = 0x425CF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x425CF8u);
        ctx->pc = 0x425CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x425CF0u;
            // 0x425cf4: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x425CF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x425CF8u; }
            if (ctx->pc != 0x425CF8u) { return; }
        }
        }
    }
    ctx->pc = 0x425CF8u;
label_425cf8:
    // 0x425cf8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x425cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_425cfc:
    // 0x425cfc: 0x100001cc  b           . + 4 + (0x1CC << 2)
label_425d00:
    if (ctx->pc == 0x425D00u) {
        ctx->pc = 0x425D00u;
            // 0x425d00: 0xaea300e0  sw          $v1, 0xE0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 224), GPR_U32(ctx, 3));
        ctx->pc = 0x425D04u;
        goto label_425d04;
    }
    ctx->pc = 0x425CFCu;
    {
        const bool branch_taken_0x425cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x425D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x425CFCu;
            // 0x425d00: 0xaea300e0  sw          $v1, 0xE0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425cfc) {
            ctx->pc = 0x426430u;
            goto label_426430;
        }
    }
    ctx->pc = 0x425D04u;
label_425d04:
    // 0x425d04: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x425d04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_425d08:
    // 0x425d08: 0xc4617428  lwc1        $f1, 0x7428($v1)
    ctx->pc = 0x425d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 29736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_425d0c:
    // 0x425d0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x425d0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_425d10:
    // 0x425d10: 0x0  nop
    ctx->pc = 0x425d10u;
    // NOP
label_425d14:
    // 0x425d14: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x425d14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_425d18:
    // 0x425d18: 0x450001c5  bc1f        . + 4 + (0x1C5 << 2)
label_425d1c:
    if (ctx->pc == 0x425D1Cu) {
        ctx->pc = 0x425D20u;
        goto label_425d20;
    }
    ctx->pc = 0x425D18u;
    {
        const bool branch_taken_0x425d18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x425d18) {
            ctx->pc = 0x426430u;
            goto label_426430;
        }
    }
    ctx->pc = 0x425D20u;
label_425d20:
    // 0x425d20: 0x8ea3003c  lw          $v1, 0x3C($s5)
    ctx->pc = 0x425d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
label_425d24:
    // 0x425d24: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x425d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_425d28:
    // 0x425d28: 0xc4750028  lwc1        $f21, 0x28($v1)
    ctx->pc = 0x425d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_425d2c:
    // 0x425d2c: 0xc074740  jal         func_1D1D00
label_425d30:
    if (ctx->pc == 0x425D30u) {
        ctx->pc = 0x425D30u;
            // 0x425d30: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->pc = 0x425D34u;
        goto label_425d34;
    }
    ctx->pc = 0x425D2Cu;
    SET_GPR_U32(ctx, 31, 0x425D34u);
    ctx->pc = 0x425D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x425D2Cu;
            // 0x425d30: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425D34u; }
        if (ctx->pc != 0x425D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425D34u; }
        if (ctx->pc != 0x425D34u) { return; }
    }
    ctx->pc = 0x425D34u;
label_425d34:
    // 0x425d34: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_425d38:
    if (ctx->pc == 0x425D38u) {
        ctx->pc = 0x425D38u;
            // 0x425d38: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x425D3Cu;
        goto label_425d3c;
    }
    ctx->pc = 0x425D34u;
    {
        const bool branch_taken_0x425d34 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x425d34) {
            ctx->pc = 0x425D38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x425D34u;
            // 0x425d38: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x425D48u;
            goto label_425d48;
        }
    }
    ctx->pc = 0x425D3Cu;
label_425d3c:
    // 0x425d3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x425d3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_425d40:
    // 0x425d40: 0x10000007  b           . + 4 + (0x7 << 2)
label_425d44:
    if (ctx->pc == 0x425D44u) {
        ctx->pc = 0x425D44u;
            // 0x425d44: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x425D48u;
        goto label_425d48;
    }
    ctx->pc = 0x425D40u;
    {
        const bool branch_taken_0x425d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x425D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x425D40u;
            // 0x425d44: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x425d40) {
            ctx->pc = 0x425D60u;
            goto label_425d60;
        }
    }
    ctx->pc = 0x425D48u;
label_425d48:
    // 0x425d48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x425d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_425d4c:
    // 0x425d4c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x425d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_425d50:
    // 0x425d50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x425d50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_425d54:
    // 0x425d54: 0x0  nop
    ctx->pc = 0x425d54u;
    // NOP
label_425d58:
    // 0x425d58: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x425d58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_425d5c:
    // 0x425d5c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x425d5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_425d60:
    // 0x425d60: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x425d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_425d64:
    // 0x425d64: 0x8ea3003c  lw          $v1, 0x3C($s5)
    ctx->pc = 0x425d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
label_425d68:
    // 0x425d68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x425d68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_425d6c:
    // 0x425d6c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x425d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_425d70:
    // 0x425d70: 0x8c44a2e0  lw          $a0, -0x5D20($v0)
    ctx->pc = 0x425d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
label_425d74:
    // 0x425d74: 0xc4760024  lwc1        $f22, 0x24($v1)
    ctx->pc = 0x425d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_425d78:
    // 0x425d78: 0xc074740  jal         func_1D1D00
label_425d7c:
    if (ctx->pc == 0x425D7Cu) {
        ctx->pc = 0x425D7Cu;
            // 0x425d7c: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x425D80u;
        goto label_425d80;
    }
    ctx->pc = 0x425D78u;
    SET_GPR_U32(ctx, 31, 0x425D80u);
    ctx->pc = 0x425D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x425D78u;
            // 0x425d7c: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425D80u; }
        if (ctx->pc != 0x425D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425D80u; }
        if (ctx->pc != 0x425D80u) { return; }
    }
    ctx->pc = 0x425D80u;
label_425d80:
    // 0x425d80: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_425d84:
    if (ctx->pc == 0x425D84u) {
        ctx->pc = 0x425D84u;
            // 0x425d84: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x425D88u;
        goto label_425d88;
    }
    ctx->pc = 0x425D80u;
    {
        const bool branch_taken_0x425d80 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x425d80) {
            ctx->pc = 0x425D84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x425D80u;
            // 0x425d84: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x425D94u;
            goto label_425d94;
        }
    }
    ctx->pc = 0x425D88u;
label_425d88:
    // 0x425d88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x425d88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_425d8c:
    // 0x425d8c: 0x10000007  b           . + 4 + (0x7 << 2)
label_425d90:
    if (ctx->pc == 0x425D90u) {
        ctx->pc = 0x425D90u;
            // 0x425d90: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x425D94u;
        goto label_425d94;
    }
    ctx->pc = 0x425D8Cu;
    {
        const bool branch_taken_0x425d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x425D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x425D8Cu;
            // 0x425d90: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x425d8c) {
            ctx->pc = 0x425DACu;
            goto label_425dac;
        }
    }
    ctx->pc = 0x425D94u;
label_425d94:
    // 0x425d94: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x425d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_425d98:
    // 0x425d98: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x425d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_425d9c:
    // 0x425d9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x425d9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_425da0:
    // 0x425da0: 0x0  nop
    ctx->pc = 0x425da0u;
    // NOP
label_425da4:
    // 0x425da4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x425da4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_425da8:
    // 0x425da8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x425da8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_425dac:
    // 0x425dac: 0x3c032f80  lui         $v1, 0x2F80
    ctx->pc = 0x425dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12160 << 16));
label_425db0:
    // 0x425db0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x425db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_425db4:
    // 0x425db4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x425db4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_425db8:
    // 0x425db8: 0x8c427420  lw          $v0, 0x7420($v0)
    ctx->pc = 0x425db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29728)));
label_425dbc:
    // 0x425dbc: 0x460101c2  mul.s       $f7, $f0, $f1
    ctx->pc = 0x425dbcu;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_425dc0:
    // 0x425dc0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x425dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_425dc4:
    // 0x425dc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x425dc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_425dc8:
    // 0x425dc8: 0x0  nop
    ctx->pc = 0x425dc8u;
    // NOP
label_425dcc:
    // 0x425dcc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x425dccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_425dd0:
    // 0x425dd0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x425dd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_425dd4:
    // 0x425dd4: 0x0  nop
    ctx->pc = 0x425dd4u;
    // NOP
label_425dd8:
    // 0x425dd8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x425dd8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_425ddc:
    // 0x425ddc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_425de0:
    if (ctx->pc == 0x425DE0u) {
        ctx->pc = 0x425DE0u;
            // 0x425de0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x425DE4u;
        goto label_425de4;
    }
    ctx->pc = 0x425DDCu;
    {
        const bool branch_taken_0x425ddc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x425DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x425DDCu;
            // 0x425de0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425ddc) {
            ctx->pc = 0x425DE8u;
            goto label_425de8;
        }
    }
    ctx->pc = 0x425DE4u;
label_425de4:
    // 0x425de4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x425de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_425de8:
    // 0x425de8: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_425dec:
    if (ctx->pc == 0x425DECu) {
        ctx->pc = 0x425DECu;
            // 0x425dec: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x425DF0u;
        goto label_425df0;
    }
    ctx->pc = 0x425DE8u;
    {
        const bool branch_taken_0x425de8 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x425de8) {
            ctx->pc = 0x425DECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x425DE8u;
            // 0x425dec: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x425DFCu;
            goto label_425dfc;
        }
    }
    ctx->pc = 0x425DF0u;
label_425df0:
    // 0x425df0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x425df0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_425df4:
    // 0x425df4: 0x10000007  b           . + 4 + (0x7 << 2)
label_425df8:
    if (ctx->pc == 0x425DF8u) {
        ctx->pc = 0x425DF8u;
            // 0x425df8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x425DFCu;
        goto label_425dfc;
    }
    ctx->pc = 0x425DF4u;
    {
        const bool branch_taken_0x425df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x425DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x425DF4u;
            // 0x425df8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x425df4) {
            ctx->pc = 0x425E14u;
            goto label_425e14;
        }
    }
    ctx->pc = 0x425DFCu;
label_425dfc:
    // 0x425dfc: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x425dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_425e00:
    // 0x425e00: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x425e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_425e04:
    // 0x425e04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x425e04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_425e08:
    // 0x425e08: 0x0  nop
    ctx->pc = 0x425e08u;
    // NOP
label_425e0c:
    // 0x425e0c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x425e0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_425e10:
    // 0x425e10: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x425e10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_425e14:
    // 0x425e14: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x425e14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_425e18:
    // 0x425e18: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x425e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_425e1c:
    // 0x425e1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x425e1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_425e20:
    // 0x425e20: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x425e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_425e24:
    // 0x425e24: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x425e24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_425e28:
    // 0x425e28: 0x3c0338d1  lui         $v1, 0x38D1
    ctx->pc = 0x425e28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14545 << 16));
label_425e2c:
    // 0x425e2c: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x425e2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_425e30:
    // 0x425e30: 0x46002018  adda.s      $f4, $f0
    ctx->pc = 0x425e30u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_425e34:
    // 0x425e34: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x425e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_425e38:
    // 0x425e38: 0x46163002  mul.s       $f0, $f6, $f22
    ctx->pc = 0x425e38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[22]);
label_425e3c:
    // 0x425e3c: 0x4601315d  msub.s      $f5, $f6, $f1
    ctx->pc = 0x425e3cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[1]));
label_425e40:
    // 0x425e40: 0xc443ffc0  lwc1        $f3, -0x40($v0)
    ctx->pc = 0x425e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_425e44:
    // 0x425e44: 0x46070042  mul.s       $f1, $f0, $f7
    ctx->pc = 0x425e44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_425e48:
    // 0x425e48: 0x3462b717  ori         $v0, $v1, 0xB717
    ctx->pc = 0x425e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46871);
label_425e4c:
    // 0x425e4c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x425e4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_425e50:
    // 0x425e50: 0x0  nop
    ctx->pc = 0x425e50u;
    // NOP
label_425e54:
    // 0x425e54: 0x46161000  add.s       $f0, $f2, $f22
    ctx->pc = 0x425e54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[22]);
label_425e58:
    // 0x425e58: 0x8ea2003c  lw          $v0, 0x3C($s5)
    ctx->pc = 0x425e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
label_425e5c:
    // 0x425e5c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x425e5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_425e60:
    // 0x425e60: 0x46002018  adda.s      $f4, $f0
    ctx->pc = 0x425e60u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_425e64:
    // 0x425e64: 0x46153002  mul.s       $f0, $f6, $f21
    ctx->pc = 0x425e64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[21]);
label_425e68:
    // 0x425e68: 0x46140042  mul.s       $f1, $f0, $f20
    ctx->pc = 0x425e68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_425e6c:
    // 0x425e6c: 0x46151000  add.s       $f0, $f2, $f21
    ctx->pc = 0x425e6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[21]);
label_425e70:
    // 0x425e70: 0x46000b41  sub.s       $f13, $f1, $f0
    ctx->pc = 0x425e70u;
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_425e74:
    // 0x425e74: 0xc44e002c  lwc1        $f14, 0x2C($v0)
    ctx->pc = 0x425e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_425e78:
    // 0x425e78: 0xc04cbd8  jal         func_132F60
label_425e7c:
    if (ctx->pc == 0x425E7Cu) {
        ctx->pc = 0x425E7Cu;
            // 0x425e7c: 0x46051b1c  madd.s      $f12, $f3, $f5 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[5]));
        ctx->pc = 0x425E80u;
        goto label_425e80;
    }
    ctx->pc = 0x425E78u;
    SET_GPR_U32(ctx, 31, 0x425E80u);
    ctx->pc = 0x425E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x425E78u;
            // 0x425e7c: 0x46051b1c  madd.s      $f12, $f3, $f5 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[5]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425E80u; }
        if (ctx->pc != 0x425E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425E80u; }
        if (ctx->pc != 0x425E80u) { return; }
    }
    ctx->pc = 0x425E80u;
label_425e80:
    // 0x425e80: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x425e80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_425e84:
    // 0x425e84: 0x26a40010  addiu       $a0, $s5, 0x10
    ctx->pc = 0x425e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_425e88:
    // 0x425e88: 0x24a57390  addiu       $a1, $a1, 0x7390
    ctx->pc = 0x425e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29584));
label_425e8c:
    // 0x425e8c: 0xc04cca0  jal         func_133280
label_425e90:
    if (ctx->pc == 0x425E90u) {
        ctx->pc = 0x425E90u;
            // 0x425e90: 0x27a60110  addiu       $a2, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x425E94u;
        goto label_425e94;
    }
    ctx->pc = 0x425E8Cu;
    SET_GPR_U32(ctx, 31, 0x425E94u);
    ctx->pc = 0x425E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x425E8Cu;
            // 0x425e90: 0x27a60110  addiu       $a2, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425E94u; }
        if (ctx->pc != 0x425E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425E94u; }
        if (ctx->pc != 0x425E94u) { return; }
    }
    ctx->pc = 0x425E94u;
label_425e94:
    // 0x425e94: 0x8ea3003c  lw          $v1, 0x3C($s5)
    ctx->pc = 0x425e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
label_425e98:
    // 0x425e98: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x425e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_425e9c:
    // 0x425e9c: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x425e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_425ea0:
    // 0x425ea0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x425ea0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_425ea4:
    // 0x425ea4: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x425ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_425ea8:
    // 0x425ea8: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x425ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_425eac:
    // 0x425eac: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x425eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_425eb0:
    // 0x425eb0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x425eb0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_425eb4:
    // 0x425eb4: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x425eb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_425eb8:
    // 0x425eb8: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x425eb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_425ebc:
    // 0x425ebc: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x425ebcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_425ec0:
    // 0x425ec0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x425ec0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_425ec4:
    // 0x425ec4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x425ec4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_425ec8:
    // 0x425ec8: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x425ec8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_425ecc:
    // 0x425ecc: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x425eccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_425ed0:
    // 0x425ed0: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x425ed0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_425ed4:
    // 0x425ed4: 0xc04ca18  jal         func_132860
label_425ed8:
    if (ctx->pc == 0x425ED8u) {
        ctx->pc = 0x425ED8u;
            // 0x425ed8: 0x26a40020  addiu       $a0, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x425EDCu;
        goto label_425edc;
    }
    ctx->pc = 0x425ED4u;
    SET_GPR_U32(ctx, 31, 0x425EDCu);
    ctx->pc = 0x425ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x425ED4u;
            // 0x425ed8: 0x26a40020  addiu       $a0, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425EDCu; }
        if (ctx->pc != 0x425EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425EDCu; }
        if (ctx->pc != 0x425EDCu) { return; }
    }
    ctx->pc = 0x425EDCu;
label_425edc:
    // 0x425edc: 0x8ea40050  lw          $a0, 0x50($s5)
    ctx->pc = 0x425edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_425ee0:
    // 0x425ee0: 0xc6a20018  lwc1        $f2, 0x18($s5)
    ctx->pc = 0x425ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_425ee4:
    // 0x425ee4: 0xc6a10014  lwc1        $f1, 0x14($s5)
    ctx->pc = 0x425ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_425ee8:
    // 0x425ee8: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x425ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_425eec:
    // 0x425eec: 0xc6a00010  lwc1        $f0, 0x10($s5)
    ctx->pc = 0x425eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_425ef0:
    // 0x425ef0: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x425ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_425ef4:
    // 0x425ef4: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x425ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_425ef8:
    // 0x425ef8: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x425ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
label_425efc:
    // 0x425efc: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x425efcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_425f00:
    // 0x425f00: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x425f00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_425f04:
    // 0x425f04: 0xc6a3002c  lwc1        $f3, 0x2C($s5)
    ctx->pc = 0x425f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_425f08:
    // 0x425f08: 0xc6a20028  lwc1        $f2, 0x28($s5)
    ctx->pc = 0x425f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_425f0c:
    // 0x425f0c: 0xc6a10024  lwc1        $f1, 0x24($s5)
    ctx->pc = 0x425f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_425f10:
    // 0x425f10: 0xc6a00020  lwc1        $f0, 0x20($s5)
    ctx->pc = 0x425f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_425f14:
    // 0x425f14: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x425f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_425f18:
    // 0x425f18: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x425f18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_425f1c:
    // 0x425f1c: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x425f1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_425f20:
    // 0x425f20: 0xc0892b0  jal         func_224AC0
label_425f24:
    if (ctx->pc == 0x425F24u) {
        ctx->pc = 0x425F24u;
            // 0x425f24: 0xe7a3009c  swc1        $f3, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->pc = 0x425F28u;
        goto label_425f28;
    }
    ctx->pc = 0x425F20u;
    SET_GPR_U32(ctx, 31, 0x425F28u);
    ctx->pc = 0x425F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x425F20u;
            // 0x425f24: 0xe7a3009c  swc1        $f3, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425F28u; }
        if (ctx->pc != 0x425F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425F28u; }
        if (ctx->pc != 0x425F28u) { return; }
    }
    ctx->pc = 0x425F28u;
label_425f28:
    // 0x425f28: 0x8ea50050  lw          $a1, 0x50($s5)
    ctx->pc = 0x425f28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_425f2c:
    // 0x425f2c: 0x3c02ff1e  lui         $v0, 0xFF1E
    ctx->pc = 0x425f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65310 << 16));
label_425f30:
    // 0x425f30: 0x3444fedf  ori         $a0, $v0, 0xFEDF
    ctx->pc = 0x425f30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65247);
label_425f34:
    // 0x425f34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x425f34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_425f38:
    // 0x425f38: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x425f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_425f3c:
    // 0x425f3c: 0x8ca8002c  lw          $t0, 0x2C($a1)
    ctx->pc = 0x425f3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_425f40:
    // 0x425f40: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x425f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_425f44:
    // 0x425f44: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x425f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_425f48:
    // 0x425f48: 0x1042024  and         $a0, $t0, $a0
    ctx->pc = 0x425f48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
label_425f4c:
    // 0x425f4c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x425f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_425f50:
    // 0x425f50: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x425f50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_425f54:
    // 0x425f54: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x425f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_425f58:
    // 0x425f58: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x425f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_425f5c:
    // 0x425f5c: 0xc08bff0  jal         func_22FFC0
label_425f60:
    if (ctx->pc == 0x425F60u) {
        ctx->pc = 0x425F60u;
            // 0x425f60: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x425F64u;
        goto label_425f64;
    }
    ctx->pc = 0x425F5Cu;
    SET_GPR_U32(ctx, 31, 0x425F64u);
    ctx->pc = 0x425F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x425F5Cu;
            // 0x425f60: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425F64u; }
        if (ctx->pc != 0x425F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425F64u; }
        if (ctx->pc != 0x425F64u) { return; }
    }
    ctx->pc = 0x425F64u;
label_425f64:
    // 0x425f64: 0x8ea40050  lw          $a0, 0x50($s5)
    ctx->pc = 0x425f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_425f68:
    // 0x425f68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x425f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_425f6c:
    // 0x425f6c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x425f6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_425f70:
    // 0x425f70: 0xc08914c  jal         func_224530
label_425f74:
    if (ctx->pc == 0x425F74u) {
        ctx->pc = 0x425F74u;
            // 0x425f74: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x425F78u;
        goto label_425f78;
    }
    ctx->pc = 0x425F70u;
    SET_GPR_U32(ctx, 31, 0x425F78u);
    ctx->pc = 0x425F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x425F70u;
            // 0x425f74: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425F78u; }
        if (ctx->pc != 0x425F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425F78u; }
        if (ctx->pc != 0x425F78u) { return; }
    }
    ctx->pc = 0x425F78u;
label_425f78:
    // 0x425f78: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x425f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_425f7c:
    // 0x425f7c: 0x3c034127  lui         $v1, 0x4127
    ctx->pc = 0x425f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16679 << 16));
label_425f80:
    // 0x425f80: 0x34638d36  ori         $v1, $v1, 0x8D36
    ctx->pc = 0x425f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36150);
label_425f84:
    // 0x425f84: 0x3c073f00  lui         $a3, 0x3F00
    ctx->pc = 0x425f84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16128 << 16));
label_425f88:
    // 0x425f88: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x425f88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_425f8c:
    // 0x425f8c: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x425f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_425f90:
    // 0x425f90: 0xac430158  sw          $v1, 0x158($v0)
    ctx->pc = 0x425f90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 3));
label_425f94:
    // 0x425f94: 0x8ea60050  lw          $a2, 0x50($s5)
    ctx->pc = 0x425f94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_425f98:
    // 0x425f98: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x425f98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_425f9c:
    // 0x425f9c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x425f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_425fa0:
    // 0x425fa0: 0xacc70160  sw          $a3, 0x160($a2)
    ctx->pc = 0x425fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 352), GPR_U32(ctx, 7));
label_425fa4:
    // 0x425fa4: 0x8ca5e3e0  lw          $a1, -0x1C20($a1)
    ctx->pc = 0x425fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960096)));
label_425fa8:
    // 0x425fa8: 0xc4817438  lwc1        $f1, 0x7438($a0)
    ctx->pc = 0x425fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 29752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_425fac:
    // 0x425fac: 0xc4a2001c  lwc1        $f2, 0x1C($a1)
    ctx->pc = 0x425facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_425fb0:
    // 0x425fb0: 0x8c648a08  lw          $a0, -0x75F8($v1)
    ctx->pc = 0x425fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_425fb4:
    // 0x425fb4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x425fb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_425fb8:
    // 0x425fb8: 0x8ea30050  lw          $v1, 0x50($s5)
    ctx->pc = 0x425fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_425fbc:
    // 0x425fbc: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x425fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_425fc0:
    // 0x425fc0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x425fc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_425fc4:
    // 0x425fc4: 0xe4600154  swc1        $f0, 0x154($v1)
    ctx->pc = 0x425fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 340), bits); }
label_425fc8:
    // 0x425fc8: 0xc074740  jal         func_1D1D00
label_425fcc:
    if (ctx->pc == 0x425FCCu) {
        ctx->pc = 0x425FCCu;
            // 0x425fcc: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->pc = 0x425FD0u;
        goto label_425fd0;
    }
    ctx->pc = 0x425FC8u;
    SET_GPR_U32(ctx, 31, 0x425FD0u);
    ctx->pc = 0x425FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x425FC8u;
            // 0x425fcc: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425FD0u; }
        if (ctx->pc != 0x425FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425FD0u; }
        if (ctx->pc != 0x425FD0u) { return; }
    }
    ctx->pc = 0x425FD0u;
label_425fd0:
    // 0x425fd0: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_425fd4:
    if (ctx->pc == 0x425FD4u) {
        ctx->pc = 0x425FD4u;
            // 0x425fd4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x425FD8u;
        goto label_425fd8;
    }
    ctx->pc = 0x425FD0u;
    {
        const bool branch_taken_0x425fd0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x425fd0) {
            ctx->pc = 0x425FD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x425FD0u;
            // 0x425fd4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x425FE4u;
            goto label_425fe4;
        }
    }
    ctx->pc = 0x425FD8u;
label_425fd8:
    // 0x425fd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x425fd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_425fdc:
    // 0x425fdc: 0x10000007  b           . + 4 + (0x7 << 2)
label_425fe0:
    if (ctx->pc == 0x425FE0u) {
        ctx->pc = 0x425FE0u;
            // 0x425fe0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x425FE4u;
        goto label_425fe4;
    }
    ctx->pc = 0x425FDCu;
    {
        const bool branch_taken_0x425fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x425FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x425FDCu;
            // 0x425fe0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x425fdc) {
            ctx->pc = 0x425FFCu;
            goto label_425ffc;
        }
    }
    ctx->pc = 0x425FE4u;
label_425fe4:
    // 0x425fe4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x425fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_425fe8:
    // 0x425fe8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x425fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_425fec:
    // 0x425fec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x425fecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_425ff0:
    // 0x425ff0: 0x0  nop
    ctx->pc = 0x425ff0u;
    // NOP
label_425ff4:
    // 0x425ff4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x425ff4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_425ff8:
    // 0x425ff8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x425ff8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_425ffc:
    // 0x425ffc: 0x3c032f80  lui         $v1, 0x2F80
    ctx->pc = 0x425ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12160 << 16));
label_426000:
    // 0x426000: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x426000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_426004:
    // 0x426004: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x426004u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_426008:
    // 0x426008: 0x8c44a2e0  lw          $a0, -0x5D20($v0)
    ctx->pc = 0x426008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
label_42600c:
    // 0x42600c: 0xc074740  jal         func_1D1D00
label_426010:
    if (ctx->pc == 0x426010u) {
        ctx->pc = 0x426010u;
            // 0x426010: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x426014u;
        goto label_426014;
    }
    ctx->pc = 0x42600Cu;
    SET_GPR_U32(ctx, 31, 0x426014u);
    ctx->pc = 0x426010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42600Cu;
            // 0x426010: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426014u; }
        if (ctx->pc != 0x426014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426014u; }
        if (ctx->pc != 0x426014u) { return; }
    }
    ctx->pc = 0x426014u;
label_426014:
    // 0x426014: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_426018:
    if (ctx->pc == 0x426018u) {
        ctx->pc = 0x426018u;
            // 0x426018: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x42601Cu;
        goto label_42601c;
    }
    ctx->pc = 0x426014u;
    {
        const bool branch_taken_0x426014 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x426014) {
            ctx->pc = 0x426018u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x426014u;
            // 0x426018: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x426028u;
            goto label_426028;
        }
    }
    ctx->pc = 0x42601Cu;
label_42601c:
    // 0x42601c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x42601cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_426020:
    // 0x426020: 0x10000007  b           . + 4 + (0x7 << 2)
label_426024:
    if (ctx->pc == 0x426024u) {
        ctx->pc = 0x426024u;
            // 0x426024: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x426028u;
        goto label_426028;
    }
    ctx->pc = 0x426020u;
    {
        const bool branch_taken_0x426020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x426024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x426020u;
            // 0x426024: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x426020) {
            ctx->pc = 0x426040u;
            goto label_426040;
        }
    }
    ctx->pc = 0x426028u;
label_426028:
    // 0x426028: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x426028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_42602c:
    // 0x42602c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x42602cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_426030:
    // 0x426030: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x426030u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_426034:
    // 0x426034: 0x0  nop
    ctx->pc = 0x426034u;
    // NOP
label_426038:
    // 0x426038: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x426038u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_42603c:
    // 0x42603c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x42603cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_426040:
    // 0x426040: 0x3c032f80  lui         $v1, 0x2F80
    ctx->pc = 0x426040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12160 << 16));
label_426044:
    // 0x426044: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x426044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_426048:
    // 0x426048: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x426048u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_42604c:
    // 0x42604c: 0x8c44a2e0  lw          $a0, -0x5D20($v0)
    ctx->pc = 0x42604cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
label_426050:
    // 0x426050: 0xc074740  jal         func_1D1D00
label_426054:
    if (ctx->pc == 0x426054u) {
        ctx->pc = 0x426054u;
            // 0x426054: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x426058u;
        goto label_426058;
    }
    ctx->pc = 0x426050u;
    SET_GPR_U32(ctx, 31, 0x426058u);
    ctx->pc = 0x426054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x426050u;
            // 0x426054: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426058u; }
        if (ctx->pc != 0x426058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426058u; }
        if (ctx->pc != 0x426058u) { return; }
    }
    ctx->pc = 0x426058u;
label_426058:
    // 0x426058: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_42605c:
    if (ctx->pc == 0x42605Cu) {
        ctx->pc = 0x42605Cu;
            // 0x42605c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x426060u;
        goto label_426060;
    }
    ctx->pc = 0x426058u;
    {
        const bool branch_taken_0x426058 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x426058) {
            ctx->pc = 0x42605Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x426058u;
            // 0x42605c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42606Cu;
            goto label_42606c;
        }
    }
    ctx->pc = 0x426060u;
label_426060:
    // 0x426060: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x426060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_426064:
    // 0x426064: 0x10000007  b           . + 4 + (0x7 << 2)
label_426068:
    if (ctx->pc == 0x426068u) {
        ctx->pc = 0x426068u;
            // 0x426068: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x42606Cu;
        goto label_42606c;
    }
    ctx->pc = 0x426064u;
    {
        const bool branch_taken_0x426064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x426068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x426064u;
            // 0x426068: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x426064) {
            ctx->pc = 0x426084u;
            goto label_426084;
        }
    }
    ctx->pc = 0x42606Cu;
label_42606c:
    // 0x42606c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x42606cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_426070:
    // 0x426070: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x426070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_426074:
    // 0x426074: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x426074u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_426078:
    // 0x426078: 0x0  nop
    ctx->pc = 0x426078u;
    // NOP
label_42607c:
    // 0x42607c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x42607cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_426080:
    // 0x426080: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x426080u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_426084:
    // 0x426084: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x426084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_426088:
    // 0x426088: 0x3c033c8e  lui         $v1, 0x3C8E
    ctx->pc = 0x426088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15502 << 16));
label_42608c:
    // 0x42608c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x42608cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_426090:
    // 0x426090: 0x3463fa35  ori         $v1, $v1, 0xFA35
    ctx->pc = 0x426090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
label_426094:
    // 0x426094: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x426094u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_426098:
    // 0x426098: 0x3c023d0e  lui         $v0, 0x3D0E
    ctx->pc = 0x426098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15630 << 16));
label_42609c:
    // 0x42609c: 0x3444fa35  ori         $a0, $v0, 0xFA35
    ctx->pc = 0x42609cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_4260a0:
    // 0x4260a0: 0xafa0010c  sw          $zero, 0x10C($sp)
    ctx->pc = 0x4260a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
label_4260a4:
    // 0x4260a4: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x4260a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_4260a8:
    // 0x4260a8: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x4260a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_4260ac:
    // 0x4260ac: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x4260acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4260b0:
    // 0x4260b0: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x4260b0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_4260b4:
    // 0x4260b4: 0x0  nop
    ctx->pc = 0x4260b4u;
    // NOP
label_4260b8:
    // 0x4260b8: 0x46041818  adda.s      $f3, $f4
    ctx->pc = 0x4260b8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_4260bc:
    // 0x4260bc: 0x4600281d  msub.s      $f0, $f5, $f0
    ctx->pc = 0x4260bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[0]));
label_4260c0:
    // 0x4260c0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4260c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4260c4:
    // 0x4260c4: 0x0  nop
    ctx->pc = 0x4260c4u;
    // NOP
label_4260c8:
    // 0x4260c8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x4260c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_4260cc:
    // 0x4260cc: 0x46041818  adda.s      $f3, $f4
    ctx->pc = 0x4260ccu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_4260d0:
    // 0x4260d0: 0x4614285d  msub.s      $f1, $f5, $f20
    ctx->pc = 0x4260d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[20]));
label_4260d4:
    // 0x4260d4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x4260d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_4260d8:
    // 0x4260d8: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x4260d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_4260dc:
    // 0x4260dc: 0x46041818  adda.s      $f3, $f4
    ctx->pc = 0x4260dcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_4260e0:
    // 0x4260e0: 0x4615281d  msub.s      $f0, $f5, $f21
    ctx->pc = 0x4260e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[21]));
label_4260e4:
    // 0x4260e4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x4260e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_4260e8:
    // 0x4260e8: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x4260e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_4260ec:
    // 0x4260ec: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x4260ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_4260f0:
    // 0x4260f0: 0x8eb00050  lw          $s0, 0x50($s5)
    ctx->pc = 0x4260f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_4260f4:
    // 0x4260f4: 0xc088b74  jal         func_222DD0
label_4260f8:
    if (ctx->pc == 0x4260F8u) {
        ctx->pc = 0x4260F8u;
            // 0x4260f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4260FCu;
        goto label_4260fc;
    }
    ctx->pc = 0x4260F4u;
    SET_GPR_U32(ctx, 31, 0x4260FCu);
    ctx->pc = 0x4260F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4260F4u;
            // 0x4260f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4260FCu; }
        if (ctx->pc != 0x4260FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4260FCu; }
        if (ctx->pc != 0x4260FCu) { return; }
    }
    ctx->pc = 0x4260FCu;
label_4260fc:
    // 0x4260fc: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x4260fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_426100:
    // 0x426100: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x426100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_426104:
    // 0x426104: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x426104u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_426108:
    // 0x426108: 0x320f809  jalr        $t9
label_42610c:
    if (ctx->pc == 0x42610Cu) {
        ctx->pc = 0x42610Cu;
            // 0x42610c: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x426110u;
        goto label_426110;
    }
    ctx->pc = 0x426108u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x426110u);
        ctx->pc = 0x42610Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x426108u;
            // 0x42610c: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x426110u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x426110u; }
            if (ctx->pc != 0x426110u) { return; }
        }
        }
    }
    ctx->pc = 0x426110u;
label_426110:
    // 0x426110: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x426110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_426114:
    // 0x426114: 0xafa000fc  sw          $zero, 0xFC($sp)
    ctx->pc = 0x426114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
label_426118:
    // 0x426118: 0xc4447410  lwc1        $f4, 0x7410($v0)
    ctx->pc = 0x426118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 29712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_42611c:
    // 0x42611c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x42611cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_426120:
    // 0x426120: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x426120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_426124:
    // 0x426124: 0xc4437414  lwc1        $f3, 0x7414($v0)
    ctx->pc = 0x426124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 29716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_426128:
    // 0x426128: 0xe7a400f0  swc1        $f4, 0xF0($sp)
    ctx->pc = 0x426128u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_42612c:
    // 0x42612c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x42612cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_426130:
    // 0x426130: 0xc4427418  lwc1        $f2, 0x7418($v0)
    ctx->pc = 0x426130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 29720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_426134:
    // 0x426134: 0xe7a300f4  swc1        $f3, 0xF4($sp)
    ctx->pc = 0x426134u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_426138:
    // 0x426138: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x426138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_42613c:
    // 0x42613c: 0xc4407438  lwc1        $f0, 0x7438($v0)
    ctx->pc = 0x42613cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 29752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_426140:
    // 0x426140: 0xe7a200f8  swc1        $f2, 0xF8($sp)
    ctx->pc = 0x426140u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_426144:
    // 0x426144: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x426144u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_426148:
    // 0x426148: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x426148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42614c:
    // 0x42614c: 0x46002182  mul.s       $f6, $f4, $f0
    ctx->pc = 0x42614cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_426150:
    // 0x426150: 0x8c43e3e0  lw          $v1, -0x1C20($v0)
    ctx->pc = 0x426150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_426154:
    // 0x426154: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x426154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_426158:
    // 0x426158: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x426158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_42615c:
    // 0x42615c: 0x46001942  mul.s       $f5, $f3, $f0
    ctx->pc = 0x42615cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_426160:
    // 0x426160: 0x46001102  mul.s       $f4, $f2, $f0
    ctx->pc = 0x426160u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_426164:
    // 0x426164: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x426164u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_426168:
    // 0x426168: 0xe7a600f0  swc1        $f6, 0xF0($sp)
    ctx->pc = 0x426168u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_42616c:
    // 0x42616c: 0xe7a500f4  swc1        $f5, 0xF4($sp)
    ctx->pc = 0x42616cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_426170:
    // 0x426170: 0xe7a400f8  swc1        $f4, 0xF8($sp)
    ctx->pc = 0x426170u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_426174:
    // 0x426174: 0xe7a300fc  swc1        $f3, 0xFC($sp)
    ctx->pc = 0x426174u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_426178:
    // 0x426178: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x426178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42617c:
    // 0x42617c: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x42617cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_426180:
    // 0x426180: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x426180u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_426184:
    // 0x426184: 0x46023002  mul.s       $f0, $f6, $f2
    ctx->pc = 0x426184u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_426188:
    // 0x426188: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x426188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_42618c:
    // 0x42618c: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x42618cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_426190:
    // 0x426190: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x426190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_426194:
    // 0x426194: 0x46022042  mul.s       $f1, $f4, $f2
    ctx->pc = 0x426194u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_426198:
    // 0x426198: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x426198u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_42619c:
    // 0x42619c: 0xe7a100f8  swc1        $f1, 0xF8($sp)
    ctx->pc = 0x42619cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_4261a0:
    // 0x4261a0: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x4261a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_4261a4:
    // 0x4261a4: 0x8eb00050  lw          $s0, 0x50($s5)
    ctx->pc = 0x4261a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_4261a8:
    // 0x4261a8: 0xc088b74  jal         func_222DD0
label_4261ac:
    if (ctx->pc == 0x4261ACu) {
        ctx->pc = 0x4261ACu;
            // 0x4261ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4261B0u;
        goto label_4261b0;
    }
    ctx->pc = 0x4261A8u;
    SET_GPR_U32(ctx, 31, 0x4261B0u);
    ctx->pc = 0x4261ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4261A8u;
            // 0x4261ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4261B0u; }
        if (ctx->pc != 0x4261B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4261B0u; }
        if (ctx->pc != 0x4261B0u) { return; }
    }
    ctx->pc = 0x4261B0u;
label_4261b0:
    // 0x4261b0: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x4261b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4261b4:
    // 0x4261b4: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x4261b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_4261b8:
    // 0x4261b8: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4261b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4261bc:
    // 0x4261bc: 0x320f809  jalr        $t9
label_4261c0:
    if (ctx->pc == 0x4261C0u) {
        ctx->pc = 0x4261C0u;
            // 0x4261c0: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x4261C4u;
        goto label_4261c4;
    }
    ctx->pc = 0x4261BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4261C4u);
        ctx->pc = 0x4261C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4261BCu;
            // 0x4261c0: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4261C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4261C4u; }
            if (ctx->pc != 0x4261C4u) { return; }
        }
        }
    }
    ctx->pc = 0x4261C4u;
label_4261c4:
    // 0x4261c4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4261c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4261c8:
    // 0x4261c8: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x4261c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_4261cc:
    // 0x4261cc: 0xc4607440  lwc1        $f0, 0x7440($v1)
    ctx->pc = 0x4261ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 29760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4261d0:
    // 0x4261d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4261d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4261d4:
    // 0x4261d4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4261d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4261d8:
    // 0x4261d8: 0x8c667420  lw          $a2, 0x7420($v1)
    ctx->pc = 0x4261d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29728)));
label_4261dc:
    // 0x4261dc: 0xe4807428  swc1        $f0, 0x7428($a0)
    ctx->pc = 0x4261dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 29736), bits); }
label_4261e0:
    // 0x4261e0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4261e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4261e4:
    // 0x4261e4: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x4261e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_4261e8:
    // 0x4261e8: 0xac647420  sw          $a0, 0x7420($v1)
    ctx->pc = 0x4261e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 29728), GPR_U32(ctx, 4));
label_4261ec:
    // 0x4261ec: 0x10000090  b           . + 4 + (0x90 << 2)
label_4261f0:
    if (ctx->pc == 0x4261F0u) {
        ctx->pc = 0x4261F0u;
            // 0x4261f0: 0xaea500e0  sw          $a1, 0xE0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 224), GPR_U32(ctx, 5));
        ctx->pc = 0x4261F4u;
        goto label_4261f4;
    }
    ctx->pc = 0x4261ECu;
    {
        const bool branch_taken_0x4261ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4261F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4261ECu;
            // 0x4261f0: 0xaea500e0  sw          $a1, 0xE0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 224), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4261ec) {
            ctx->pc = 0x426430u;
            goto label_426430;
        }
    }
    ctx->pc = 0x4261F4u;
label_4261f4:
    // 0x4261f4: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x4261f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_4261f8:
    // 0x4261f8: 0x3442d648  ori         $v0, $v0, 0xD648
    ctx->pc = 0x4261f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54856);
label_4261fc:
    // 0x4261fc: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x4261fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_426200:
    // 0x426200: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x426200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_426204:
    // 0x426204: 0xc04cc70  jal         func_1331C0
label_426208:
    if (ctx->pc == 0x426208u) {
        ctx->pc = 0x426208u;
            // 0x426208: 0x24a57410  addiu       $a1, $a1, 0x7410 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29712));
        ctx->pc = 0x42620Cu;
        goto label_42620c;
    }
    ctx->pc = 0x426204u;
    SET_GPR_U32(ctx, 31, 0x42620Cu);
    ctx->pc = 0x426208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x426204u;
            // 0x426208: 0x24a57410  addiu       $a1, $a1, 0x7410 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42620Cu; }
        if (ctx->pc != 0x42620Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42620Cu; }
        if (ctx->pc != 0x42620Cu) { return; }
    }
    ctx->pc = 0x42620Cu;
label_42620c:
    // 0x42620c: 0x8eb10050  lw          $s1, 0x50($s5)
    ctx->pc = 0x42620cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_426210:
    // 0x426210: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x426210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_426214:
    // 0x426214: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x426214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_426218:
    // 0x426218: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x426218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42621c:
    // 0x42621c: 0x8c50e3e0  lw          $s0, -0x1C20($v0)
    ctx->pc = 0x42621cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_426220:
    // 0x426220: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x426220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_426224:
    // 0x426224: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x426224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
label_426228:
    // 0x426228: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x426228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42622c:
    // 0x42622c: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x42622cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_426230:
    // 0x426230: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x426230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_426234:
    // 0x426234: 0xc6140020  lwc1        $f20, 0x20($s0)
    ctx->pc = 0x426234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_426238:
    // 0x426238: 0xc089638  jal         func_2258E0
label_42623c:
    if (ctx->pc == 0x42623Cu) {
        ctx->pc = 0x42623Cu;
            // 0x42623c: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->pc = 0x426240u;
        goto label_426240;
    }
    ctx->pc = 0x426238u;
    SET_GPR_U32(ctx, 31, 0x426240u);
    ctx->pc = 0x42623Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x426238u;
            // 0x42623c: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2258E0u;
    if (runtime->hasFunction(0x2258E0u)) {
        auto targetFn = runtime->lookupFunction(0x2258E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426240u; }
        if (ctx->pc != 0x426240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002258E0_0x2258e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426240u; }
        if (ctx->pc != 0x426240u) { return; }
    }
    ctx->pc = 0x426240u;
label_426240:
    // 0x426240: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x426240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_426244:
    // 0x426244: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x426244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_426248:
    // 0x426248: 0x46140102  mul.s       $f4, $f0, $f20
    ctx->pc = 0x426248u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_42624c:
    // 0x42624c: 0xc4450018  lwc1        $f5, 0x18($v0)
    ctx->pc = 0x42624cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_426250:
    // 0x426250: 0xc7a30080  lwc1        $f3, 0x80($sp)
    ctx->pc = 0x426250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_426254:
    // 0x426254: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x426254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_426258:
    // 0x426258: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x426258u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_42625c:
    // 0x42625c: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x42625cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_426260:
    // 0x426260: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x426260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_426264:
    // 0x426264: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x426264u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_426268:
    // 0x426268: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x426268u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_42626c:
    // 0x42626c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x42626cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_426270:
    // 0x426270: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x426270u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_426274:
    // 0x426274: 0xe7a30080  swc1        $f3, 0x80($sp)
    ctx->pc = 0x426274u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_426278:
    // 0x426278: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x426278u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_42627c:
    // 0x42627c: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x42627cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_426280:
    // 0x426280: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x426280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_426284:
    // 0x426284: 0xc6140018  lwc1        $f20, 0x18($s0)
    ctx->pc = 0x426284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_426288:
    // 0x426288: 0xc088b74  jal         func_222DD0
label_42628c:
    if (ctx->pc == 0x42628Cu) {
        ctx->pc = 0x42628Cu;
            // 0x42628c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x426290u;
        goto label_426290;
    }
    ctx->pc = 0x426288u;
    SET_GPR_U32(ctx, 31, 0x426290u);
    ctx->pc = 0x42628Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x426288u;
            // 0x42628c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426290u; }
        if (ctx->pc != 0x426290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426290u; }
        if (ctx->pc != 0x426290u) { return; }
    }
    ctx->pc = 0x426290u;
label_426290:
    // 0x426290: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x426290u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_426294:
    // 0x426294: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x426294u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_426298:
    // 0x426298: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x426298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_42629c:
    // 0x42629c: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x42629cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_4262a0:
    // 0x4262a0: 0x320f809  jalr        $t9
label_4262a4:
    if (ctx->pc == 0x4262A4u) {
        ctx->pc = 0x4262A4u;
            // 0x4262a4: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4262A8u;
        goto label_4262a8;
    }
    ctx->pc = 0x4262A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4262A8u);
        ctx->pc = 0x4262A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4262A0u;
            // 0x4262a4: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4262A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4262A8u; }
            if (ctx->pc != 0x4262A8u) { return; }
        }
        }
    }
    ctx->pc = 0x4262A8u;
label_4262a8:
    // 0x4262a8: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x4262a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_4262ac:
    // 0x4262ac: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x4262acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_4262b0:
    // 0x4262b0: 0x24a573d0  addiu       $a1, $a1, 0x73D0
    ctx->pc = 0x4262b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29648));
label_4262b4:
    // 0x4262b4: 0xc04cca0  jal         func_133280
label_4262b8:
    if (ctx->pc == 0x4262B8u) {
        ctx->pc = 0x4262B8u;
            // 0x4262b8: 0x26a60010  addiu       $a2, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->pc = 0x4262BCu;
        goto label_4262bc;
    }
    ctx->pc = 0x4262B4u;
    SET_GPR_U32(ctx, 31, 0x4262BCu);
    ctx->pc = 0x4262B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4262B4u;
            // 0x4262b8: 0x26a60010  addiu       $a2, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4262BCu; }
        if (ctx->pc != 0x4262BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4262BCu; }
        if (ctx->pc != 0x4262BCu) { return; }
    }
    ctx->pc = 0x4262BCu;
label_4262bc:
    // 0x4262bc: 0x8ea2003c  lw          $v0, 0x3C($s5)
    ctx->pc = 0x4262bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
label_4262c0:
    // 0x4262c0: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x4262c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4262c4:
    // 0x4262c4: 0xc441002c  lwc1        $f1, 0x2C($v0)
    ctx->pc = 0x4262c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4262c8:
    // 0x4262c8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x4262c8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_4262cc:
    // 0x4262cc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4262ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4262d0:
    // 0x4262d0: 0x45000023  bc1f        . + 4 + (0x23 << 2)
label_4262d4:
    if (ctx->pc == 0x4262D4u) {
        ctx->pc = 0x4262D8u;
        goto label_4262d8;
    }
    ctx->pc = 0x4262D0u;
    {
        const bool branch_taken_0x4262d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4262d0) {
            ctx->pc = 0x426360u;
            goto label_426360;
        }
    }
    ctx->pc = 0x4262D8u;
label_4262d8:
    // 0x4262d8: 0x8ea50050  lw          $a1, 0x50($s5)
    ctx->pc = 0x4262d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_4262dc:
    // 0x4262dc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4262dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4262e0:
    // 0x4262e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4262e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4262e4:
    // 0x4262e4: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x4262e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
label_4262e8:
    // 0x4262e8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4262e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4262ec:
    // 0x4262ec: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4262ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4262f0:
    // 0x4262f0: 0xc08bff0  jal         func_22FFC0
label_4262f4:
    if (ctx->pc == 0x4262F4u) {
        ctx->pc = 0x4262F4u;
            // 0x4262f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4262F8u;
        goto label_4262f8;
    }
    ctx->pc = 0x4262F0u;
    SET_GPR_U32(ctx, 31, 0x4262F8u);
    ctx->pc = 0x4262F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4262F0u;
            // 0x4262f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4262F8u; }
        if (ctx->pc != 0x4262F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4262F8u; }
        if (ctx->pc != 0x4262F8u) { return; }
    }
    ctx->pc = 0x4262F8u;
label_4262f8:
    // 0x4262f8: 0x8ea40050  lw          $a0, 0x50($s5)
    ctx->pc = 0x4262f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_4262fc:
    // 0x4262fc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4262fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_426300:
    // 0x426300: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x426300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_426304:
    // 0x426304: 0xc08914c  jal         func_224530
label_426308:
    if (ctx->pc == 0x426308u) {
        ctx->pc = 0x426308u;
            // 0x426308: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42630Cu;
        goto label_42630c;
    }
    ctx->pc = 0x426304u;
    SET_GPR_U32(ctx, 31, 0x42630Cu);
    ctx->pc = 0x426308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x426304u;
            // 0x426308: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42630Cu; }
        if (ctx->pc != 0x42630Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42630Cu; }
        if (ctx->pc != 0x42630Cu) { return; }
    }
    ctx->pc = 0x42630Cu;
label_42630c:
    // 0x42630c: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x42630cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_426310:
    // 0x426310: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x426310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
label_426314:
    // 0x426314: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x426314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
label_426318:
    // 0x426318: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x426318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
label_42631c:
    // 0x42631c: 0x8eb00050  lw          $s0, 0x50($s5)
    ctx->pc = 0x42631cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_426320:
    // 0x426320: 0xc088b74  jal         func_222DD0
label_426324:
    if (ctx->pc == 0x426324u) {
        ctx->pc = 0x426324u;
            // 0x426324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x426328u;
        goto label_426328;
    }
    ctx->pc = 0x426320u;
    SET_GPR_U32(ctx, 31, 0x426328u);
    ctx->pc = 0x426324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x426320u;
            // 0x426324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426328u; }
        if (ctx->pc != 0x426328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426328u; }
        if (ctx->pc != 0x426328u) { return; }
    }
    ctx->pc = 0x426328u;
label_426328:
    // 0x426328: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x426328u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_42632c:
    // 0x42632c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x42632cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_426330:
    // 0x426330: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x426330u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_426334:
    // 0x426334: 0x320f809  jalr        $t9
label_426338:
    if (ctx->pc == 0x426338u) {
        ctx->pc = 0x426338u;
            // 0x426338: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x42633Cu;
        goto label_42633c;
    }
    ctx->pc = 0x426334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42633Cu);
        ctx->pc = 0x426338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x426334u;
            // 0x426338: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x42633Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42633Cu; }
            if (ctx->pc != 0x42633Cu) { return; }
        }
        }
    }
    ctx->pc = 0x42633Cu;
label_42633c:
    // 0x42633c: 0x8eb00050  lw          $s0, 0x50($s5)
    ctx->pc = 0x42633cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_426340:
    // 0x426340: 0xc088b74  jal         func_222DD0
label_426344:
    if (ctx->pc == 0x426344u) {
        ctx->pc = 0x426344u;
            // 0x426344: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x426348u;
        goto label_426348;
    }
    ctx->pc = 0x426340u;
    SET_GPR_U32(ctx, 31, 0x426348u);
    ctx->pc = 0x426344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x426340u;
            // 0x426344: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426348u; }
        if (ctx->pc != 0x426348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426348u; }
        if (ctx->pc != 0x426348u) { return; }
    }
    ctx->pc = 0x426348u;
label_426348:
    // 0x426348: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x426348u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_42634c:
    // 0x42634c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x42634cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_426350:
    // 0x426350: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x426350u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_426354:
    // 0x426354: 0x320f809  jalr        $t9
label_426358:
    if (ctx->pc == 0x426358u) {
        ctx->pc = 0x426358u;
            // 0x426358: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x42635Cu;
        goto label_42635c;
    }
    ctx->pc = 0x426354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42635Cu);
        ctx->pc = 0x426358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x426354u;
            // 0x426358: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x42635Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42635Cu; }
            if (ctx->pc != 0x42635Cu) { return; }
        }
        }
    }
    ctx->pc = 0x42635Cu;
label_42635c:
    // 0x42635c: 0xaea000e0  sw          $zero, 0xE0($s5)
    ctx->pc = 0x42635cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 224), GPR_U32(ctx, 0));
label_426360:
    // 0x426360: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x426360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_426364:
    // 0x426364: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x426364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_426368:
    // 0x426368: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x426368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_42636c:
    // 0x42636c: 0xc6a30010  lwc1        $f3, 0x10($s5)
    ctx->pc = 0x42636cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_426370:
    // 0x426370: 0xc6a20014  lwc1        $f2, 0x14($s5)
    ctx->pc = 0x426370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_426374:
    // 0x426374: 0x8c72d120  lw          $s2, -0x2EE0($v1)
    ctx->pc = 0x426374u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_426378:
    // 0x426378: 0xc6a10018  lwc1        $f1, 0x18($s5)
    ctx->pc = 0x426378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42637c:
    // 0x42637c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x42637cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_426380:
    // 0x426380: 0xc6a0001c  lwc1        $f0, 0x1C($s5)
    ctx->pc = 0x426380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_426384:
    // 0x426384: 0x8051007a  lb          $s1, 0x7A($v0)
    ctx->pc = 0x426384u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 122)));
label_426388:
    // 0x426388: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x426388u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42638c:
    // 0x42638c: 0xe7a300b0  swc1        $f3, 0xB0($sp)
    ctx->pc = 0x42638cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_426390:
    // 0x426390: 0xe7a200b4  swc1        $f2, 0xB4($sp)
    ctx->pc = 0x426390u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_426394:
    // 0x426394: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x426394u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_426398:
    // 0x426398: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x426398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_42639c:
    // 0x42639c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x42639cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_4263a0:
    // 0x4263a0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x4263a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4263a4:
    // 0x4263a4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x4263a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_4263a8:
    // 0x4263a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4263a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4263ac:
    // 0x4263ac: 0xc04cc34  jal         func_1330D0
label_4263b0:
    if (ctx->pc == 0x4263B0u) {
        ctx->pc = 0x4263B0u;
            // 0x4263b0: 0x24450200  addiu       $a1, $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
        ctx->pc = 0x4263B4u;
        goto label_4263b4;
    }
    ctx->pc = 0x4263ACu;
    SET_GPR_U32(ctx, 31, 0x4263B4u);
    ctx->pc = 0x4263B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4263ACu;
            // 0x4263b0: 0x24450200  addiu       $a1, $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4263B4u; }
        if (ctx->pc != 0x4263B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4263B4u; }
        if (ctx->pc != 0x4263B4u) { return; }
    }
    ctx->pc = 0x4263B4u;
label_4263b4:
    // 0x4263b4: 0x3c034461  lui         $v1, 0x4461
    ctx->pc = 0x4263b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17505 << 16));
label_4263b8:
    // 0x4263b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4263b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4263bc:
    // 0x4263bc: 0x0  nop
    ctx->pc = 0x4263bcu;
    // NOP
label_4263c0:
    // 0x4263c0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4263c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4263c4:
    // 0x4263c4: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_4263c8:
    if (ctx->pc == 0x4263C8u) {
        ctx->pc = 0x4263CCu;
        goto label_4263cc;
    }
    ctx->pc = 0x4263C4u;
    {
        const bool branch_taken_0x4263c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4263c4) {
            ctx->pc = 0x426408u;
            goto label_426408;
        }
    }
    ctx->pc = 0x4263CCu;
label_4263cc:
    // 0x4263cc: 0x8ea300e8  lw          $v1, 0xE8($s5)
    ctx->pc = 0x4263ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 232)));
label_4263d0:
    // 0x4263d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4263d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4263d4:
    // 0x4263d4: 0x2848004  sllv        $s0, $a0, $s4
    ctx->pc = 0x4263d4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 20) & 0x1F));
label_4263d8:
    // 0x4263d8: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x4263d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
label_4263dc:
    // 0x4263dc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_4263e0:
    if (ctx->pc == 0x4263E0u) {
        ctx->pc = 0x4263E4u;
        goto label_4263e4;
    }
    ctx->pc = 0x4263DCu;
    {
        const bool branch_taken_0x4263dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4263dc) {
            ctx->pc = 0x4263F8u;
            goto label_4263f8;
        }
    }
    ctx->pc = 0x4263E4u;
label_4263e4:
    // 0x4263e4: 0x8ea400e4  lw          $a0, 0xE4($s5)
    ctx->pc = 0x4263e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 228)));
label_4263e8:
    // 0x4263e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4263e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4263ec:
    // 0x4263ec: 0xc122d2c  jal         func_48B4B0
label_4263f0:
    if (ctx->pc == 0x4263F0u) {
        ctx->pc = 0x4263F0u;
            // 0x4263f0: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x4263F4u;
        goto label_4263f4;
    }
    ctx->pc = 0x4263ECu;
    SET_GPR_U32(ctx, 31, 0x4263F4u);
    ctx->pc = 0x4263F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4263ECu;
            // 0x4263f0: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4263F4u; }
        if (ctx->pc != 0x4263F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4263F4u; }
        if (ctx->pc != 0x4263F4u) { return; }
    }
    ctx->pc = 0x4263F4u;
label_4263f4:
    // 0x4263f4: 0x0  nop
    ctx->pc = 0x4263f4u;
    // NOP
label_4263f8:
    // 0x4263f8: 0x8ea300e8  lw          $v1, 0xE8($s5)
    ctx->pc = 0x4263f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 232)));
label_4263fc:
    // 0x4263fc: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4263fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
label_426400:
    // 0x426400: 0x10000007  b           . + 4 + (0x7 << 2)
label_426404:
    if (ctx->pc == 0x426404u) {
        ctx->pc = 0x426404u;
            // 0x426404: 0xaea300e8  sw          $v1, 0xE8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 232), GPR_U32(ctx, 3));
        ctx->pc = 0x426408u;
        goto label_426408;
    }
    ctx->pc = 0x426400u;
    {
        const bool branch_taken_0x426400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x426404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x426400u;
            // 0x426404: 0xaea300e8  sw          $v1, 0xE8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426400) {
            ctx->pc = 0x426420u;
            goto label_426420;
        }
    }
    ctx->pc = 0x426408u;
label_426408:
    // 0x426408: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x426408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42640c:
    // 0x42640c: 0x2832004  sllv        $a0, $v1, $s4
    ctx->pc = 0x42640cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 20) & 0x1F));
label_426410:
    // 0x426410: 0x8ea300e8  lw          $v1, 0xE8($s5)
    ctx->pc = 0x426410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 232)));
label_426414:
    // 0x426414: 0x802027  not         $a0, $a0
    ctx->pc = 0x426414u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
label_426418:
    // 0x426418: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x426418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_42641c:
    // 0x42641c: 0xaea300e8  sw          $v1, 0xE8($s5)
    ctx->pc = 0x42641cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 232), GPR_U32(ctx, 3));
label_426420:
    // 0x426420: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x426420u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_426424:
    // 0x426424: 0x291182b  sltu        $v1, $s4, $s1
    ctx->pc = 0x426424u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_426428:
    // 0x426428: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
label_42642c:
    if (ctx->pc == 0x42642Cu) {
        ctx->pc = 0x42642Cu;
            // 0x42642c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x426430u;
        goto label_426430;
    }
    ctx->pc = 0x426428u;
    {
        const bool branch_taken_0x426428 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x42642Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x426428u;
            // 0x42642c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426428) {
            ctx->pc = 0x42639Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_42639c;
        }
    }
    ctx->pc = 0x426430u;
label_426430:
    // 0x426430: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x426430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_426434:
    // 0x426434: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x426434u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_426438:
    // 0x426438: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x426438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_42643c:
    // 0x42643c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x42643cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_426440:
    // 0x426440: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x426440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_426444:
    // 0x426444: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x426444u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_426448:
    // 0x426448: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x426448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_42644c:
    // 0x42644c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x42644cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_426450:
    // 0x426450: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x426450u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_426454:
    // 0x426454: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x426454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_426458:
    // 0x426458: 0x3e00008  jr          $ra
label_42645c:
    if (ctx->pc == 0x42645Cu) {
        ctx->pc = 0x42645Cu;
            // 0x42645c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x426460u;
        goto label_426460;
    }
    ctx->pc = 0x426458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42645Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x426458u;
            // 0x42645c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x426460u;
label_426460:
    // 0x426460: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x426460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_426464:
    // 0x426464: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x426464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_426468:
    // 0x426468: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x426468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_42646c:
    // 0x42646c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x42646cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_426470:
    // 0x426470: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x426470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_426474:
    // 0x426474: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x426474u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_426478:
    // 0x426478: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x426478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42647c:
    // 0x42647c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x42647cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_426480:
    // 0x426480: 0x8c900050  lw          $s0, 0x50($a0)
    ctx->pc = 0x426480u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_426484:
    // 0x426484: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x426484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_426488:
    // 0x426488: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x426488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_42648c:
    // 0x42648c: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x42648cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_426490:
    // 0x426490: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x426490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_426494:
    // 0x426494: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x426494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_426498:
    // 0x426498: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x426498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_42649c:
    // 0x42649c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x42649cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4264a0:
    // 0x4264a0: 0xc08bff0  jal         func_22FFC0
label_4264a4:
    if (ctx->pc == 0x4264A4u) {
        ctx->pc = 0x4264A4u;
            // 0x4264a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4264A8u;
        goto label_4264a8;
    }
    ctx->pc = 0x4264A0u;
    SET_GPR_U32(ctx, 31, 0x4264A8u);
    ctx->pc = 0x4264A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4264A0u;
            // 0x4264a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4264A8u; }
        if (ctx->pc != 0x4264A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4264A8u; }
        if (ctx->pc != 0x4264A8u) { return; }
    }
    ctx->pc = 0x4264A8u;
label_4264a8:
    // 0x4264a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4264a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4264ac:
    // 0x4264ac: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4264acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4264b0:
    // 0x4264b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4264b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4264b4:
    // 0x4264b4: 0xc08914c  jal         func_224530
label_4264b8:
    if (ctx->pc == 0x4264B8u) {
        ctx->pc = 0x4264B8u;
            // 0x4264b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4264BCu;
        goto label_4264bc;
    }
    ctx->pc = 0x4264B4u;
    SET_GPR_U32(ctx, 31, 0x4264BCu);
    ctx->pc = 0x4264B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4264B4u;
            // 0x4264b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4264BCu; }
        if (ctx->pc != 0x4264BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4264BCu; }
        if (ctx->pc != 0x4264BCu) { return; }
    }
    ctx->pc = 0x4264BCu;
label_4264bc:
    // 0x4264bc: 0xc0e393c  jal         func_38E4F0
label_4264c0:
    if (ctx->pc == 0x4264C0u) {
        ctx->pc = 0x4264C0u;
            // 0x4264c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4264C4u;
        goto label_4264c4;
    }
    ctx->pc = 0x4264BCu;
    SET_GPR_U32(ctx, 31, 0x4264C4u);
    ctx->pc = 0x4264C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4264BCu;
            // 0x4264c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4264C4u; }
        if (ctx->pc != 0x4264C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4264C4u; }
        if (ctx->pc != 0x4264C4u) { return; }
    }
    ctx->pc = 0x4264C4u;
label_4264c4:
    // 0x4264c4: 0xc088b74  jal         func_222DD0
label_4264c8:
    if (ctx->pc == 0x4264C8u) {
        ctx->pc = 0x4264C8u;
            // 0x4264c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4264CCu;
        goto label_4264cc;
    }
    ctx->pc = 0x4264C4u;
    SET_GPR_U32(ctx, 31, 0x4264CCu);
    ctx->pc = 0x4264C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4264C4u;
            // 0x4264c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4264CCu; }
        if (ctx->pc != 0x4264CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4264CCu; }
        if (ctx->pc != 0x4264CCu) { return; }
    }
    ctx->pc = 0x4264CCu;
label_4264cc:
    // 0x4264cc: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x4264ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4264d0:
    // 0x4264d0: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x4264d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_4264d4:
    // 0x4264d4: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4264d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4264d8:
    // 0x4264d8: 0x320f809  jalr        $t9
label_4264dc:
    if (ctx->pc == 0x4264DCu) {
        ctx->pc = 0x4264DCu;
            // 0x4264dc: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4264E0u;
        goto label_4264e0;
    }
    ctx->pc = 0x4264D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4264E0u);
        ctx->pc = 0x4264DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4264D8u;
            // 0x4264dc: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4264E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4264E0u; }
            if (ctx->pc != 0x4264E0u) { return; }
        }
        }
    }
    ctx->pc = 0x4264E0u;
label_4264e0:
    // 0x4264e0: 0xc088b74  jal         func_222DD0
label_4264e4:
    if (ctx->pc == 0x4264E4u) {
        ctx->pc = 0x4264E4u;
            // 0x4264e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4264E8u;
        goto label_4264e8;
    }
    ctx->pc = 0x4264E0u;
    SET_GPR_U32(ctx, 31, 0x4264E8u);
    ctx->pc = 0x4264E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4264E0u;
            // 0x4264e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4264E8u; }
        if (ctx->pc != 0x4264E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4264E8u; }
        if (ctx->pc != 0x4264E8u) { return; }
    }
    ctx->pc = 0x4264E8u;
label_4264e8:
    // 0x4264e8: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x4264e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4264ec:
    // 0x4264ec: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x4264ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_4264f0:
    // 0x4264f0: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x4264f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_4264f4:
    // 0x4264f4: 0x320f809  jalr        $t9
label_4264f8:
    if (ctx->pc == 0x4264F8u) {
        ctx->pc = 0x4264F8u;
            // 0x4264f8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4264FCu;
        goto label_4264fc;
    }
    ctx->pc = 0x4264F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4264FCu);
        ctx->pc = 0x4264F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4264F4u;
            // 0x4264f8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4264FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4264FCu; }
            if (ctx->pc != 0x4264FCu) { return; }
        }
        }
    }
    ctx->pc = 0x4264FCu;
label_4264fc:
    // 0x4264fc: 0x3c0343d1  lui         $v1, 0x43D1
    ctx->pc = 0x4264fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17361 << 16));
label_426500:
    // 0x426500: 0x3c023e32  lui         $v0, 0x3E32
    ctx->pc = 0x426500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15922 << 16));
label_426504:
    // 0x426504: 0x34637084  ori         $v1, $v1, 0x7084
    ctx->pc = 0x426504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28804);
label_426508:
    // 0x426508: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x426508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
label_42650c:
    // 0x42650c: 0xae030154  sw          $v1, 0x154($s0)
    ctx->pc = 0x42650cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 3));
label_426510:
    // 0x426510: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x426510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_426514:
    // 0x426514: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x426514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
label_426518:
    // 0x426518: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x426518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_42651c:
    // 0x42651c: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x42651cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_426520:
    // 0x426520: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x426520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_426524:
    // 0x426524: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x426524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_426528:
    // 0x426528: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x426528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42652c:
    // 0x42652c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x42652cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_426530:
    // 0x426530: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x426530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_426534:
    // 0x426534: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x426534u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_426538:
    // 0x426538: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x426538u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_42653c:
    // 0x42653c: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x42653cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_426540:
    // 0x426540: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x426540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_426544:
    // 0x426544: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x426544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_426548:
    // 0x426548: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x426548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42654c:
    // 0x42654c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x42654cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_426550:
    // 0x426550: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x426550u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_426554:
    // 0x426554: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x426554u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_426558:
    // 0x426558: 0xc0892b0  jal         func_224AC0
label_42655c:
    if (ctx->pc == 0x42655Cu) {
        ctx->pc = 0x42655Cu;
            // 0x42655c: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->pc = 0x426560u;
        goto label_426560;
    }
    ctx->pc = 0x426558u;
    SET_GPR_U32(ctx, 31, 0x426560u);
    ctx->pc = 0x42655Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x426558u;
            // 0x42655c: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426560u; }
        if (ctx->pc != 0x426560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426560u; }
        if (ctx->pc != 0x426560u) { return; }
    }
    ctx->pc = 0x426560u;
label_426560:
    // 0x426560: 0xae2000e0  sw          $zero, 0xE0($s1)
    ctx->pc = 0x426560u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 0));
label_426564:
    // 0x426564: 0xae2000ec  sw          $zero, 0xEC($s1)
    ctx->pc = 0x426564u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 236), GPR_U32(ctx, 0));
label_426568:
    // 0x426568: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x426568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_42656c:
    // 0x42656c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42656cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_426570:
    // 0x426570: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x426570u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_426574:
    // 0x426574: 0x3e00008  jr          $ra
label_426578:
    if (ctx->pc == 0x426578u) {
        ctx->pc = 0x426578u;
            // 0x426578: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x42657Cu;
        goto label_42657c;
    }
    ctx->pc = 0x426574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x426578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x426574u;
            // 0x426578: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42657Cu;
label_42657c:
    // 0x42657c: 0x0  nop
    ctx->pc = 0x42657cu;
    // NOP
}
