#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00261280
// Address: 0x261280 - 0x261da0
void sub_00261280_0x261280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261280_0x261280");
#endif

    switch (ctx->pc) {
        case 0x261280u: goto label_261280;
        case 0x261284u: goto label_261284;
        case 0x261288u: goto label_261288;
        case 0x26128cu: goto label_26128c;
        case 0x261290u: goto label_261290;
        case 0x261294u: goto label_261294;
        case 0x261298u: goto label_261298;
        case 0x26129cu: goto label_26129c;
        case 0x2612a0u: goto label_2612a0;
        case 0x2612a4u: goto label_2612a4;
        case 0x2612a8u: goto label_2612a8;
        case 0x2612acu: goto label_2612ac;
        case 0x2612b0u: goto label_2612b0;
        case 0x2612b4u: goto label_2612b4;
        case 0x2612b8u: goto label_2612b8;
        case 0x2612bcu: goto label_2612bc;
        case 0x2612c0u: goto label_2612c0;
        case 0x2612c4u: goto label_2612c4;
        case 0x2612c8u: goto label_2612c8;
        case 0x2612ccu: goto label_2612cc;
        case 0x2612d0u: goto label_2612d0;
        case 0x2612d4u: goto label_2612d4;
        case 0x2612d8u: goto label_2612d8;
        case 0x2612dcu: goto label_2612dc;
        case 0x2612e0u: goto label_2612e0;
        case 0x2612e4u: goto label_2612e4;
        case 0x2612e8u: goto label_2612e8;
        case 0x2612ecu: goto label_2612ec;
        case 0x2612f0u: goto label_2612f0;
        case 0x2612f4u: goto label_2612f4;
        case 0x2612f8u: goto label_2612f8;
        case 0x2612fcu: goto label_2612fc;
        case 0x261300u: goto label_261300;
        case 0x261304u: goto label_261304;
        case 0x261308u: goto label_261308;
        case 0x26130cu: goto label_26130c;
        case 0x261310u: goto label_261310;
        case 0x261314u: goto label_261314;
        case 0x261318u: goto label_261318;
        case 0x26131cu: goto label_26131c;
        case 0x261320u: goto label_261320;
        case 0x261324u: goto label_261324;
        case 0x261328u: goto label_261328;
        case 0x26132cu: goto label_26132c;
        case 0x261330u: goto label_261330;
        case 0x261334u: goto label_261334;
        case 0x261338u: goto label_261338;
        case 0x26133cu: goto label_26133c;
        case 0x261340u: goto label_261340;
        case 0x261344u: goto label_261344;
        case 0x261348u: goto label_261348;
        case 0x26134cu: goto label_26134c;
        case 0x261350u: goto label_261350;
        case 0x261354u: goto label_261354;
        case 0x261358u: goto label_261358;
        case 0x26135cu: goto label_26135c;
        case 0x261360u: goto label_261360;
        case 0x261364u: goto label_261364;
        case 0x261368u: goto label_261368;
        case 0x26136cu: goto label_26136c;
        case 0x261370u: goto label_261370;
        case 0x261374u: goto label_261374;
        case 0x261378u: goto label_261378;
        case 0x26137cu: goto label_26137c;
        case 0x261380u: goto label_261380;
        case 0x261384u: goto label_261384;
        case 0x261388u: goto label_261388;
        case 0x26138cu: goto label_26138c;
        case 0x261390u: goto label_261390;
        case 0x261394u: goto label_261394;
        case 0x261398u: goto label_261398;
        case 0x26139cu: goto label_26139c;
        case 0x2613a0u: goto label_2613a0;
        case 0x2613a4u: goto label_2613a4;
        case 0x2613a8u: goto label_2613a8;
        case 0x2613acu: goto label_2613ac;
        case 0x2613b0u: goto label_2613b0;
        case 0x2613b4u: goto label_2613b4;
        case 0x2613b8u: goto label_2613b8;
        case 0x2613bcu: goto label_2613bc;
        case 0x2613c0u: goto label_2613c0;
        case 0x2613c4u: goto label_2613c4;
        case 0x2613c8u: goto label_2613c8;
        case 0x2613ccu: goto label_2613cc;
        case 0x2613d0u: goto label_2613d0;
        case 0x2613d4u: goto label_2613d4;
        case 0x2613d8u: goto label_2613d8;
        case 0x2613dcu: goto label_2613dc;
        case 0x2613e0u: goto label_2613e0;
        case 0x2613e4u: goto label_2613e4;
        case 0x2613e8u: goto label_2613e8;
        case 0x2613ecu: goto label_2613ec;
        case 0x2613f0u: goto label_2613f0;
        case 0x2613f4u: goto label_2613f4;
        case 0x2613f8u: goto label_2613f8;
        case 0x2613fcu: goto label_2613fc;
        case 0x261400u: goto label_261400;
        case 0x261404u: goto label_261404;
        case 0x261408u: goto label_261408;
        case 0x26140cu: goto label_26140c;
        case 0x261410u: goto label_261410;
        case 0x261414u: goto label_261414;
        case 0x261418u: goto label_261418;
        case 0x26141cu: goto label_26141c;
        case 0x261420u: goto label_261420;
        case 0x261424u: goto label_261424;
        case 0x261428u: goto label_261428;
        case 0x26142cu: goto label_26142c;
        case 0x261430u: goto label_261430;
        case 0x261434u: goto label_261434;
        case 0x261438u: goto label_261438;
        case 0x26143cu: goto label_26143c;
        case 0x261440u: goto label_261440;
        case 0x261444u: goto label_261444;
        case 0x261448u: goto label_261448;
        case 0x26144cu: goto label_26144c;
        case 0x261450u: goto label_261450;
        case 0x261454u: goto label_261454;
        case 0x261458u: goto label_261458;
        case 0x26145cu: goto label_26145c;
        case 0x261460u: goto label_261460;
        case 0x261464u: goto label_261464;
        case 0x261468u: goto label_261468;
        case 0x26146cu: goto label_26146c;
        case 0x261470u: goto label_261470;
        case 0x261474u: goto label_261474;
        case 0x261478u: goto label_261478;
        case 0x26147cu: goto label_26147c;
        case 0x261480u: goto label_261480;
        case 0x261484u: goto label_261484;
        case 0x261488u: goto label_261488;
        case 0x26148cu: goto label_26148c;
        case 0x261490u: goto label_261490;
        case 0x261494u: goto label_261494;
        case 0x261498u: goto label_261498;
        case 0x26149cu: goto label_26149c;
        case 0x2614a0u: goto label_2614a0;
        case 0x2614a4u: goto label_2614a4;
        case 0x2614a8u: goto label_2614a8;
        case 0x2614acu: goto label_2614ac;
        case 0x2614b0u: goto label_2614b0;
        case 0x2614b4u: goto label_2614b4;
        case 0x2614b8u: goto label_2614b8;
        case 0x2614bcu: goto label_2614bc;
        case 0x2614c0u: goto label_2614c0;
        case 0x2614c4u: goto label_2614c4;
        case 0x2614c8u: goto label_2614c8;
        case 0x2614ccu: goto label_2614cc;
        case 0x2614d0u: goto label_2614d0;
        case 0x2614d4u: goto label_2614d4;
        case 0x2614d8u: goto label_2614d8;
        case 0x2614dcu: goto label_2614dc;
        case 0x2614e0u: goto label_2614e0;
        case 0x2614e4u: goto label_2614e4;
        case 0x2614e8u: goto label_2614e8;
        case 0x2614ecu: goto label_2614ec;
        case 0x2614f0u: goto label_2614f0;
        case 0x2614f4u: goto label_2614f4;
        case 0x2614f8u: goto label_2614f8;
        case 0x2614fcu: goto label_2614fc;
        case 0x261500u: goto label_261500;
        case 0x261504u: goto label_261504;
        case 0x261508u: goto label_261508;
        case 0x26150cu: goto label_26150c;
        case 0x261510u: goto label_261510;
        case 0x261514u: goto label_261514;
        case 0x261518u: goto label_261518;
        case 0x26151cu: goto label_26151c;
        case 0x261520u: goto label_261520;
        case 0x261524u: goto label_261524;
        case 0x261528u: goto label_261528;
        case 0x26152cu: goto label_26152c;
        case 0x261530u: goto label_261530;
        case 0x261534u: goto label_261534;
        case 0x261538u: goto label_261538;
        case 0x26153cu: goto label_26153c;
        case 0x261540u: goto label_261540;
        case 0x261544u: goto label_261544;
        case 0x261548u: goto label_261548;
        case 0x26154cu: goto label_26154c;
        case 0x261550u: goto label_261550;
        case 0x261554u: goto label_261554;
        case 0x261558u: goto label_261558;
        case 0x26155cu: goto label_26155c;
        case 0x261560u: goto label_261560;
        case 0x261564u: goto label_261564;
        case 0x261568u: goto label_261568;
        case 0x26156cu: goto label_26156c;
        case 0x261570u: goto label_261570;
        case 0x261574u: goto label_261574;
        case 0x261578u: goto label_261578;
        case 0x26157cu: goto label_26157c;
        case 0x261580u: goto label_261580;
        case 0x261584u: goto label_261584;
        case 0x261588u: goto label_261588;
        case 0x26158cu: goto label_26158c;
        case 0x261590u: goto label_261590;
        case 0x261594u: goto label_261594;
        case 0x261598u: goto label_261598;
        case 0x26159cu: goto label_26159c;
        case 0x2615a0u: goto label_2615a0;
        case 0x2615a4u: goto label_2615a4;
        case 0x2615a8u: goto label_2615a8;
        case 0x2615acu: goto label_2615ac;
        case 0x2615b0u: goto label_2615b0;
        case 0x2615b4u: goto label_2615b4;
        case 0x2615b8u: goto label_2615b8;
        case 0x2615bcu: goto label_2615bc;
        case 0x2615c0u: goto label_2615c0;
        case 0x2615c4u: goto label_2615c4;
        case 0x2615c8u: goto label_2615c8;
        case 0x2615ccu: goto label_2615cc;
        case 0x2615d0u: goto label_2615d0;
        case 0x2615d4u: goto label_2615d4;
        case 0x2615d8u: goto label_2615d8;
        case 0x2615dcu: goto label_2615dc;
        case 0x2615e0u: goto label_2615e0;
        case 0x2615e4u: goto label_2615e4;
        case 0x2615e8u: goto label_2615e8;
        case 0x2615ecu: goto label_2615ec;
        case 0x2615f0u: goto label_2615f0;
        case 0x2615f4u: goto label_2615f4;
        case 0x2615f8u: goto label_2615f8;
        case 0x2615fcu: goto label_2615fc;
        case 0x261600u: goto label_261600;
        case 0x261604u: goto label_261604;
        case 0x261608u: goto label_261608;
        case 0x26160cu: goto label_26160c;
        case 0x261610u: goto label_261610;
        case 0x261614u: goto label_261614;
        case 0x261618u: goto label_261618;
        case 0x26161cu: goto label_26161c;
        case 0x261620u: goto label_261620;
        case 0x261624u: goto label_261624;
        case 0x261628u: goto label_261628;
        case 0x26162cu: goto label_26162c;
        case 0x261630u: goto label_261630;
        case 0x261634u: goto label_261634;
        case 0x261638u: goto label_261638;
        case 0x26163cu: goto label_26163c;
        case 0x261640u: goto label_261640;
        case 0x261644u: goto label_261644;
        case 0x261648u: goto label_261648;
        case 0x26164cu: goto label_26164c;
        case 0x261650u: goto label_261650;
        case 0x261654u: goto label_261654;
        case 0x261658u: goto label_261658;
        case 0x26165cu: goto label_26165c;
        case 0x261660u: goto label_261660;
        case 0x261664u: goto label_261664;
        case 0x261668u: goto label_261668;
        case 0x26166cu: goto label_26166c;
        case 0x261670u: goto label_261670;
        case 0x261674u: goto label_261674;
        case 0x261678u: goto label_261678;
        case 0x26167cu: goto label_26167c;
        case 0x261680u: goto label_261680;
        case 0x261684u: goto label_261684;
        case 0x261688u: goto label_261688;
        case 0x26168cu: goto label_26168c;
        case 0x261690u: goto label_261690;
        case 0x261694u: goto label_261694;
        case 0x261698u: goto label_261698;
        case 0x26169cu: goto label_26169c;
        case 0x2616a0u: goto label_2616a0;
        case 0x2616a4u: goto label_2616a4;
        case 0x2616a8u: goto label_2616a8;
        case 0x2616acu: goto label_2616ac;
        case 0x2616b0u: goto label_2616b0;
        case 0x2616b4u: goto label_2616b4;
        case 0x2616b8u: goto label_2616b8;
        case 0x2616bcu: goto label_2616bc;
        case 0x2616c0u: goto label_2616c0;
        case 0x2616c4u: goto label_2616c4;
        case 0x2616c8u: goto label_2616c8;
        case 0x2616ccu: goto label_2616cc;
        case 0x2616d0u: goto label_2616d0;
        case 0x2616d4u: goto label_2616d4;
        case 0x2616d8u: goto label_2616d8;
        case 0x2616dcu: goto label_2616dc;
        case 0x2616e0u: goto label_2616e0;
        case 0x2616e4u: goto label_2616e4;
        case 0x2616e8u: goto label_2616e8;
        case 0x2616ecu: goto label_2616ec;
        case 0x2616f0u: goto label_2616f0;
        case 0x2616f4u: goto label_2616f4;
        case 0x2616f8u: goto label_2616f8;
        case 0x2616fcu: goto label_2616fc;
        case 0x261700u: goto label_261700;
        case 0x261704u: goto label_261704;
        case 0x261708u: goto label_261708;
        case 0x26170cu: goto label_26170c;
        case 0x261710u: goto label_261710;
        case 0x261714u: goto label_261714;
        case 0x261718u: goto label_261718;
        case 0x26171cu: goto label_26171c;
        case 0x261720u: goto label_261720;
        case 0x261724u: goto label_261724;
        case 0x261728u: goto label_261728;
        case 0x26172cu: goto label_26172c;
        case 0x261730u: goto label_261730;
        case 0x261734u: goto label_261734;
        case 0x261738u: goto label_261738;
        case 0x26173cu: goto label_26173c;
        case 0x261740u: goto label_261740;
        case 0x261744u: goto label_261744;
        case 0x261748u: goto label_261748;
        case 0x26174cu: goto label_26174c;
        case 0x261750u: goto label_261750;
        case 0x261754u: goto label_261754;
        case 0x261758u: goto label_261758;
        case 0x26175cu: goto label_26175c;
        case 0x261760u: goto label_261760;
        case 0x261764u: goto label_261764;
        case 0x261768u: goto label_261768;
        case 0x26176cu: goto label_26176c;
        case 0x261770u: goto label_261770;
        case 0x261774u: goto label_261774;
        case 0x261778u: goto label_261778;
        case 0x26177cu: goto label_26177c;
        case 0x261780u: goto label_261780;
        case 0x261784u: goto label_261784;
        case 0x261788u: goto label_261788;
        case 0x26178cu: goto label_26178c;
        case 0x261790u: goto label_261790;
        case 0x261794u: goto label_261794;
        case 0x261798u: goto label_261798;
        case 0x26179cu: goto label_26179c;
        case 0x2617a0u: goto label_2617a0;
        case 0x2617a4u: goto label_2617a4;
        case 0x2617a8u: goto label_2617a8;
        case 0x2617acu: goto label_2617ac;
        case 0x2617b0u: goto label_2617b0;
        case 0x2617b4u: goto label_2617b4;
        case 0x2617b8u: goto label_2617b8;
        case 0x2617bcu: goto label_2617bc;
        case 0x2617c0u: goto label_2617c0;
        case 0x2617c4u: goto label_2617c4;
        case 0x2617c8u: goto label_2617c8;
        case 0x2617ccu: goto label_2617cc;
        case 0x2617d0u: goto label_2617d0;
        case 0x2617d4u: goto label_2617d4;
        case 0x2617d8u: goto label_2617d8;
        case 0x2617dcu: goto label_2617dc;
        case 0x2617e0u: goto label_2617e0;
        case 0x2617e4u: goto label_2617e4;
        case 0x2617e8u: goto label_2617e8;
        case 0x2617ecu: goto label_2617ec;
        case 0x2617f0u: goto label_2617f0;
        case 0x2617f4u: goto label_2617f4;
        case 0x2617f8u: goto label_2617f8;
        case 0x2617fcu: goto label_2617fc;
        case 0x261800u: goto label_261800;
        case 0x261804u: goto label_261804;
        case 0x261808u: goto label_261808;
        case 0x26180cu: goto label_26180c;
        case 0x261810u: goto label_261810;
        case 0x261814u: goto label_261814;
        case 0x261818u: goto label_261818;
        case 0x26181cu: goto label_26181c;
        case 0x261820u: goto label_261820;
        case 0x261824u: goto label_261824;
        case 0x261828u: goto label_261828;
        case 0x26182cu: goto label_26182c;
        case 0x261830u: goto label_261830;
        case 0x261834u: goto label_261834;
        case 0x261838u: goto label_261838;
        case 0x26183cu: goto label_26183c;
        case 0x261840u: goto label_261840;
        case 0x261844u: goto label_261844;
        case 0x261848u: goto label_261848;
        case 0x26184cu: goto label_26184c;
        case 0x261850u: goto label_261850;
        case 0x261854u: goto label_261854;
        case 0x261858u: goto label_261858;
        case 0x26185cu: goto label_26185c;
        case 0x261860u: goto label_261860;
        case 0x261864u: goto label_261864;
        case 0x261868u: goto label_261868;
        case 0x26186cu: goto label_26186c;
        case 0x261870u: goto label_261870;
        case 0x261874u: goto label_261874;
        case 0x261878u: goto label_261878;
        case 0x26187cu: goto label_26187c;
        case 0x261880u: goto label_261880;
        case 0x261884u: goto label_261884;
        case 0x261888u: goto label_261888;
        case 0x26188cu: goto label_26188c;
        case 0x261890u: goto label_261890;
        case 0x261894u: goto label_261894;
        case 0x261898u: goto label_261898;
        case 0x26189cu: goto label_26189c;
        case 0x2618a0u: goto label_2618a0;
        case 0x2618a4u: goto label_2618a4;
        case 0x2618a8u: goto label_2618a8;
        case 0x2618acu: goto label_2618ac;
        case 0x2618b0u: goto label_2618b0;
        case 0x2618b4u: goto label_2618b4;
        case 0x2618b8u: goto label_2618b8;
        case 0x2618bcu: goto label_2618bc;
        case 0x2618c0u: goto label_2618c0;
        case 0x2618c4u: goto label_2618c4;
        case 0x2618c8u: goto label_2618c8;
        case 0x2618ccu: goto label_2618cc;
        case 0x2618d0u: goto label_2618d0;
        case 0x2618d4u: goto label_2618d4;
        case 0x2618d8u: goto label_2618d8;
        case 0x2618dcu: goto label_2618dc;
        case 0x2618e0u: goto label_2618e0;
        case 0x2618e4u: goto label_2618e4;
        case 0x2618e8u: goto label_2618e8;
        case 0x2618ecu: goto label_2618ec;
        case 0x2618f0u: goto label_2618f0;
        case 0x2618f4u: goto label_2618f4;
        case 0x2618f8u: goto label_2618f8;
        case 0x2618fcu: goto label_2618fc;
        case 0x261900u: goto label_261900;
        case 0x261904u: goto label_261904;
        case 0x261908u: goto label_261908;
        case 0x26190cu: goto label_26190c;
        case 0x261910u: goto label_261910;
        case 0x261914u: goto label_261914;
        case 0x261918u: goto label_261918;
        case 0x26191cu: goto label_26191c;
        case 0x261920u: goto label_261920;
        case 0x261924u: goto label_261924;
        case 0x261928u: goto label_261928;
        case 0x26192cu: goto label_26192c;
        case 0x261930u: goto label_261930;
        case 0x261934u: goto label_261934;
        case 0x261938u: goto label_261938;
        case 0x26193cu: goto label_26193c;
        case 0x261940u: goto label_261940;
        case 0x261944u: goto label_261944;
        case 0x261948u: goto label_261948;
        case 0x26194cu: goto label_26194c;
        case 0x261950u: goto label_261950;
        case 0x261954u: goto label_261954;
        case 0x261958u: goto label_261958;
        case 0x26195cu: goto label_26195c;
        case 0x261960u: goto label_261960;
        case 0x261964u: goto label_261964;
        case 0x261968u: goto label_261968;
        case 0x26196cu: goto label_26196c;
        case 0x261970u: goto label_261970;
        case 0x261974u: goto label_261974;
        case 0x261978u: goto label_261978;
        case 0x26197cu: goto label_26197c;
        case 0x261980u: goto label_261980;
        case 0x261984u: goto label_261984;
        case 0x261988u: goto label_261988;
        case 0x26198cu: goto label_26198c;
        case 0x261990u: goto label_261990;
        case 0x261994u: goto label_261994;
        case 0x261998u: goto label_261998;
        case 0x26199cu: goto label_26199c;
        case 0x2619a0u: goto label_2619a0;
        case 0x2619a4u: goto label_2619a4;
        case 0x2619a8u: goto label_2619a8;
        case 0x2619acu: goto label_2619ac;
        case 0x2619b0u: goto label_2619b0;
        case 0x2619b4u: goto label_2619b4;
        case 0x2619b8u: goto label_2619b8;
        case 0x2619bcu: goto label_2619bc;
        case 0x2619c0u: goto label_2619c0;
        case 0x2619c4u: goto label_2619c4;
        case 0x2619c8u: goto label_2619c8;
        case 0x2619ccu: goto label_2619cc;
        case 0x2619d0u: goto label_2619d0;
        case 0x2619d4u: goto label_2619d4;
        case 0x2619d8u: goto label_2619d8;
        case 0x2619dcu: goto label_2619dc;
        case 0x2619e0u: goto label_2619e0;
        case 0x2619e4u: goto label_2619e4;
        case 0x2619e8u: goto label_2619e8;
        case 0x2619ecu: goto label_2619ec;
        case 0x2619f0u: goto label_2619f0;
        case 0x2619f4u: goto label_2619f4;
        case 0x2619f8u: goto label_2619f8;
        case 0x2619fcu: goto label_2619fc;
        case 0x261a00u: goto label_261a00;
        case 0x261a04u: goto label_261a04;
        case 0x261a08u: goto label_261a08;
        case 0x261a0cu: goto label_261a0c;
        case 0x261a10u: goto label_261a10;
        case 0x261a14u: goto label_261a14;
        case 0x261a18u: goto label_261a18;
        case 0x261a1cu: goto label_261a1c;
        case 0x261a20u: goto label_261a20;
        case 0x261a24u: goto label_261a24;
        case 0x261a28u: goto label_261a28;
        case 0x261a2cu: goto label_261a2c;
        case 0x261a30u: goto label_261a30;
        case 0x261a34u: goto label_261a34;
        case 0x261a38u: goto label_261a38;
        case 0x261a3cu: goto label_261a3c;
        case 0x261a40u: goto label_261a40;
        case 0x261a44u: goto label_261a44;
        case 0x261a48u: goto label_261a48;
        case 0x261a4cu: goto label_261a4c;
        case 0x261a50u: goto label_261a50;
        case 0x261a54u: goto label_261a54;
        case 0x261a58u: goto label_261a58;
        case 0x261a5cu: goto label_261a5c;
        case 0x261a60u: goto label_261a60;
        case 0x261a64u: goto label_261a64;
        case 0x261a68u: goto label_261a68;
        case 0x261a6cu: goto label_261a6c;
        case 0x261a70u: goto label_261a70;
        case 0x261a74u: goto label_261a74;
        case 0x261a78u: goto label_261a78;
        case 0x261a7cu: goto label_261a7c;
        case 0x261a80u: goto label_261a80;
        case 0x261a84u: goto label_261a84;
        case 0x261a88u: goto label_261a88;
        case 0x261a8cu: goto label_261a8c;
        case 0x261a90u: goto label_261a90;
        case 0x261a94u: goto label_261a94;
        case 0x261a98u: goto label_261a98;
        case 0x261a9cu: goto label_261a9c;
        case 0x261aa0u: goto label_261aa0;
        case 0x261aa4u: goto label_261aa4;
        case 0x261aa8u: goto label_261aa8;
        case 0x261aacu: goto label_261aac;
        case 0x261ab0u: goto label_261ab0;
        case 0x261ab4u: goto label_261ab4;
        case 0x261ab8u: goto label_261ab8;
        case 0x261abcu: goto label_261abc;
        case 0x261ac0u: goto label_261ac0;
        case 0x261ac4u: goto label_261ac4;
        case 0x261ac8u: goto label_261ac8;
        case 0x261accu: goto label_261acc;
        case 0x261ad0u: goto label_261ad0;
        case 0x261ad4u: goto label_261ad4;
        case 0x261ad8u: goto label_261ad8;
        case 0x261adcu: goto label_261adc;
        case 0x261ae0u: goto label_261ae0;
        case 0x261ae4u: goto label_261ae4;
        case 0x261ae8u: goto label_261ae8;
        case 0x261aecu: goto label_261aec;
        case 0x261af0u: goto label_261af0;
        case 0x261af4u: goto label_261af4;
        case 0x261af8u: goto label_261af8;
        case 0x261afcu: goto label_261afc;
        case 0x261b00u: goto label_261b00;
        case 0x261b04u: goto label_261b04;
        case 0x261b08u: goto label_261b08;
        case 0x261b0cu: goto label_261b0c;
        case 0x261b10u: goto label_261b10;
        case 0x261b14u: goto label_261b14;
        case 0x261b18u: goto label_261b18;
        case 0x261b1cu: goto label_261b1c;
        case 0x261b20u: goto label_261b20;
        case 0x261b24u: goto label_261b24;
        case 0x261b28u: goto label_261b28;
        case 0x261b2cu: goto label_261b2c;
        case 0x261b30u: goto label_261b30;
        case 0x261b34u: goto label_261b34;
        case 0x261b38u: goto label_261b38;
        case 0x261b3cu: goto label_261b3c;
        case 0x261b40u: goto label_261b40;
        case 0x261b44u: goto label_261b44;
        case 0x261b48u: goto label_261b48;
        case 0x261b4cu: goto label_261b4c;
        case 0x261b50u: goto label_261b50;
        case 0x261b54u: goto label_261b54;
        case 0x261b58u: goto label_261b58;
        case 0x261b5cu: goto label_261b5c;
        case 0x261b60u: goto label_261b60;
        case 0x261b64u: goto label_261b64;
        case 0x261b68u: goto label_261b68;
        case 0x261b6cu: goto label_261b6c;
        case 0x261b70u: goto label_261b70;
        case 0x261b74u: goto label_261b74;
        case 0x261b78u: goto label_261b78;
        case 0x261b7cu: goto label_261b7c;
        case 0x261b80u: goto label_261b80;
        case 0x261b84u: goto label_261b84;
        case 0x261b88u: goto label_261b88;
        case 0x261b8cu: goto label_261b8c;
        case 0x261b90u: goto label_261b90;
        case 0x261b94u: goto label_261b94;
        case 0x261b98u: goto label_261b98;
        case 0x261b9cu: goto label_261b9c;
        case 0x261ba0u: goto label_261ba0;
        case 0x261ba4u: goto label_261ba4;
        case 0x261ba8u: goto label_261ba8;
        case 0x261bacu: goto label_261bac;
        case 0x261bb0u: goto label_261bb0;
        case 0x261bb4u: goto label_261bb4;
        case 0x261bb8u: goto label_261bb8;
        case 0x261bbcu: goto label_261bbc;
        case 0x261bc0u: goto label_261bc0;
        case 0x261bc4u: goto label_261bc4;
        case 0x261bc8u: goto label_261bc8;
        case 0x261bccu: goto label_261bcc;
        case 0x261bd0u: goto label_261bd0;
        case 0x261bd4u: goto label_261bd4;
        case 0x261bd8u: goto label_261bd8;
        case 0x261bdcu: goto label_261bdc;
        case 0x261be0u: goto label_261be0;
        case 0x261be4u: goto label_261be4;
        case 0x261be8u: goto label_261be8;
        case 0x261becu: goto label_261bec;
        case 0x261bf0u: goto label_261bf0;
        case 0x261bf4u: goto label_261bf4;
        case 0x261bf8u: goto label_261bf8;
        case 0x261bfcu: goto label_261bfc;
        case 0x261c00u: goto label_261c00;
        case 0x261c04u: goto label_261c04;
        case 0x261c08u: goto label_261c08;
        case 0x261c0cu: goto label_261c0c;
        case 0x261c10u: goto label_261c10;
        case 0x261c14u: goto label_261c14;
        case 0x261c18u: goto label_261c18;
        case 0x261c1cu: goto label_261c1c;
        case 0x261c20u: goto label_261c20;
        case 0x261c24u: goto label_261c24;
        case 0x261c28u: goto label_261c28;
        case 0x261c2cu: goto label_261c2c;
        case 0x261c30u: goto label_261c30;
        case 0x261c34u: goto label_261c34;
        case 0x261c38u: goto label_261c38;
        case 0x261c3cu: goto label_261c3c;
        case 0x261c40u: goto label_261c40;
        case 0x261c44u: goto label_261c44;
        case 0x261c48u: goto label_261c48;
        case 0x261c4cu: goto label_261c4c;
        case 0x261c50u: goto label_261c50;
        case 0x261c54u: goto label_261c54;
        case 0x261c58u: goto label_261c58;
        case 0x261c5cu: goto label_261c5c;
        case 0x261c60u: goto label_261c60;
        case 0x261c64u: goto label_261c64;
        case 0x261c68u: goto label_261c68;
        case 0x261c6cu: goto label_261c6c;
        case 0x261c70u: goto label_261c70;
        case 0x261c74u: goto label_261c74;
        case 0x261c78u: goto label_261c78;
        case 0x261c7cu: goto label_261c7c;
        case 0x261c80u: goto label_261c80;
        case 0x261c84u: goto label_261c84;
        case 0x261c88u: goto label_261c88;
        case 0x261c8cu: goto label_261c8c;
        case 0x261c90u: goto label_261c90;
        case 0x261c94u: goto label_261c94;
        case 0x261c98u: goto label_261c98;
        case 0x261c9cu: goto label_261c9c;
        case 0x261ca0u: goto label_261ca0;
        case 0x261ca4u: goto label_261ca4;
        case 0x261ca8u: goto label_261ca8;
        case 0x261cacu: goto label_261cac;
        case 0x261cb0u: goto label_261cb0;
        case 0x261cb4u: goto label_261cb4;
        case 0x261cb8u: goto label_261cb8;
        case 0x261cbcu: goto label_261cbc;
        case 0x261cc0u: goto label_261cc0;
        case 0x261cc4u: goto label_261cc4;
        case 0x261cc8u: goto label_261cc8;
        case 0x261cccu: goto label_261ccc;
        case 0x261cd0u: goto label_261cd0;
        case 0x261cd4u: goto label_261cd4;
        case 0x261cd8u: goto label_261cd8;
        case 0x261cdcu: goto label_261cdc;
        case 0x261ce0u: goto label_261ce0;
        case 0x261ce4u: goto label_261ce4;
        case 0x261ce8u: goto label_261ce8;
        case 0x261cecu: goto label_261cec;
        case 0x261cf0u: goto label_261cf0;
        case 0x261cf4u: goto label_261cf4;
        case 0x261cf8u: goto label_261cf8;
        case 0x261cfcu: goto label_261cfc;
        case 0x261d00u: goto label_261d00;
        case 0x261d04u: goto label_261d04;
        case 0x261d08u: goto label_261d08;
        case 0x261d0cu: goto label_261d0c;
        case 0x261d10u: goto label_261d10;
        case 0x261d14u: goto label_261d14;
        case 0x261d18u: goto label_261d18;
        case 0x261d1cu: goto label_261d1c;
        case 0x261d20u: goto label_261d20;
        case 0x261d24u: goto label_261d24;
        case 0x261d28u: goto label_261d28;
        case 0x261d2cu: goto label_261d2c;
        case 0x261d30u: goto label_261d30;
        case 0x261d34u: goto label_261d34;
        case 0x261d38u: goto label_261d38;
        case 0x261d3cu: goto label_261d3c;
        case 0x261d40u: goto label_261d40;
        case 0x261d44u: goto label_261d44;
        case 0x261d48u: goto label_261d48;
        case 0x261d4cu: goto label_261d4c;
        case 0x261d50u: goto label_261d50;
        case 0x261d54u: goto label_261d54;
        case 0x261d58u: goto label_261d58;
        case 0x261d5cu: goto label_261d5c;
        case 0x261d60u: goto label_261d60;
        case 0x261d64u: goto label_261d64;
        case 0x261d68u: goto label_261d68;
        case 0x261d6cu: goto label_261d6c;
        case 0x261d70u: goto label_261d70;
        case 0x261d74u: goto label_261d74;
        case 0x261d78u: goto label_261d78;
        case 0x261d7cu: goto label_261d7c;
        case 0x261d80u: goto label_261d80;
        case 0x261d84u: goto label_261d84;
        case 0x261d88u: goto label_261d88;
        case 0x261d8cu: goto label_261d8c;
        case 0x261d90u: goto label_261d90;
        case 0x261d94u: goto label_261d94;
        case 0x261d98u: goto label_261d98;
        case 0x261d9cu: goto label_261d9c;
        default: break;
    }

    ctx->pc = 0x261280u;

label_261280:
    // 0x261280: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x261280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_261284:
    // 0x261284: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x261284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_261288:
    // 0x261288: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x261288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_26128c:
    // 0x26128c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x26128cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_261290:
    // 0x261290: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x261290u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_261294:
    // 0x261294: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x261294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_261298:
    // 0x261298: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x261298u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_26129c:
    // 0x26129c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x26129cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2612a0:
    // 0x2612a0: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x2612a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2612a4:
    // 0x2612a4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2612a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2612a8:
    // 0x2612a8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2612a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2612ac:
    // 0x2612ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2612acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2612b0:
    // 0x2612b0: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x2612b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2612b4:
    // 0x2612b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2612b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2612b8:
    // 0x2612b8: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x2612b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2612bc:
    // 0x2612bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2612bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2612c0:
    // 0x2612c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2612c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2612c4:
    // 0x2612c4: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x2612c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2612c8:
    // 0x2612c8: 0xafa700ac  sw          $a3, 0xAC($sp)
    ctx->pc = 0x2612c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 7));
label_2612cc:
    // 0x2612cc: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x2612ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_2612d0:
    // 0x2612d0: 0x14510199  bne         $v0, $s1, . + 4 + (0x199 << 2)
label_2612d4:
    if (ctx->pc == 0x2612D4u) {
        ctx->pc = 0x2612D4u;
            // 0x2612d4: 0x160902d  daddu       $s2, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2612D8u;
        goto label_2612d8;
    }
    ctx->pc = 0x2612D0u;
    {
        const bool branch_taken_0x2612d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2612D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2612D0u;
            // 0x2612d4: 0x160902d  daddu       $s2, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2612d0) {
            ctx->pc = 0x261938u;
            goto label_261938;
        }
    }
    ctx->pc = 0x2612D8u;
label_2612d8:
    // 0x2612d8: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x2612d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_2612dc:
    // 0x2612dc: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2612dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2612e0:
    // 0x2612e0: 0x3442ffee  ori         $v0, $v0, 0xFFEE
    ctx->pc = 0x2612e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_2612e4:
    // 0x2612e4: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x2612e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_2612e8:
    // 0x2612e8: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x2612e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2612ec:
    // 0x2612ec: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x2612ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
label_2612f0:
    // 0x2612f0: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x2612f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_2612f4:
    // 0x2612f4: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x2612f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
label_2612f8:
    // 0x2612f8: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x2612f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
label_2612fc:
    // 0x2612fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2612fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_261300:
    // 0x261300: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x261300u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_261304:
    // 0x261304: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x261304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_261308:
    // 0x261308: 0x264a00c0  addiu       $t2, $s2, 0xC0
    ctx->pc = 0x261308u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
label_26130c:
    // 0x26130c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26130cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_261310:
    // 0x261310: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x261310u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_261314:
    // 0x261314: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x261314u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_261318:
    // 0x261318: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x261318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_26131c:
    // 0x26131c: 0x0  nop
    ctx->pc = 0x26131cu;
    // NOP
label_261320:
    // 0x261320: 0xc5440004  lwc1        $f4, 0x4($t2)
    ctx->pc = 0x261320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_261324:
    // 0x261324: 0xc4e30004  lwc1        $f3, 0x4($a3)
    ctx->pc = 0x261324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_261328:
    // 0x261328: 0xc5460000  lwc1        $f6, 0x0($t2)
    ctx->pc = 0x261328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_26132c:
    // 0x26132c: 0xc4e50000  lwc1        $f5, 0x0($a3)
    ctx->pc = 0x26132cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_261330:
    // 0x261330: 0xc5420008  lwc1        $f2, 0x8($t2)
    ctx->pc = 0x261330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_261334:
    // 0x261334: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x261334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_261338:
    // 0x261338: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x261338u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_26133c:
    // 0x26133c: 0x460010c1  sub.s       $f3, $f2, $f0
    ctx->pc = 0x26133cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_261340:
    // 0x261340: 0x46053141  sub.s       $f5, $f6, $f5
    ctx->pc = 0x261340u;
    ctx->f[5] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
label_261344:
    // 0x261344: 0x46052882  mul.s       $f2, $f5, $f5
    ctx->pc = 0x261344u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
label_261348:
    // 0x261348: 0x46042002  mul.s       $f0, $f4, $f4
    ctx->pc = 0x261348u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
label_26134c:
    // 0x26134c: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x26134cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_261350:
    // 0x261350: 0x4603181c  madd.s      $f0, $f3, $f3
    ctx->pc = 0x261350u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[3]));
label_261354:
    // 0x261354: 0x46070036  c.le.s      $f0, $f7
    ctx->pc = 0x261354u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_261358:
    // 0x261358: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_26135c:
    if (ctx->pc == 0x26135Cu) {
        ctx->pc = 0x26135Cu;
            // 0x26135c: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->pc = 0x261360u;
        goto label_261360;
    }
    ctx->pc = 0x261358u;
    {
        const bool branch_taken_0x261358 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26135Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261358u;
            // 0x26135c: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x261358) {
            ctx->pc = 0x261368u;
            goto label_261368;
        }
    }
    ctx->pc = 0x261360u;
label_261360:
    // 0x261360: 0x460001c6  mov.s       $f7, $f0
    ctx->pc = 0x261360u;
    ctx->f[7] = FPU_MOV_S(ctx->f[0]);
label_261364:
    // 0x261364: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x261364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_261368:
    // 0x261368: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x261368u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26136c:
    // 0x26136c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_261370:
    if (ctx->pc == 0x261370u) {
        ctx->pc = 0x261374u;
        goto label_261374;
    }
    ctx->pc = 0x26136Cu;
    {
        const bool branch_taken_0x26136c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26136c) {
            ctx->pc = 0x261380u;
            goto label_261380;
        }
    }
    ctx->pc = 0x261374u;
label_261374:
    // 0x261374: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x261374u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_261378:
    // 0x261378: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x261378u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_26137c:
    // 0x26137c: 0x0  nop
    ctx->pc = 0x26137cu;
    // NOP
label_261380:
    // 0x261380: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x261380u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_261384:
    // 0x261384: 0x29020004  slti        $v0, $t0, 0x4
    ctx->pc = 0x261384u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4) ? 1 : 0);
label_261388:
    // 0x261388: 0x24e70030  addiu       $a3, $a3, 0x30
    ctx->pc = 0x261388u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
label_26138c:
    // 0x26138c: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
label_261390:
    if (ctx->pc == 0x261390u) {
        ctx->pc = 0x261390u;
            // 0x261390: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->pc = 0x261394u;
        goto label_261394;
    }
    ctx->pc = 0x26138Cu;
    {
        const bool branch_taken_0x26138c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26138Cu;
            // 0x261390: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26138c) {
            ctx->pc = 0x261320u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_261320;
        }
    }
    ctx->pc = 0x261394u;
label_261394:
    // 0x261394: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x261394u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_261398:
    // 0x261398: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x261398u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26139c:
    // 0x26139c: 0x5d3021  addu        $a2, $v0, $sp
    ctx->pc = 0x26139cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_2613a0:
    // 0x2613a0: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2613a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2613a4:
    // 0x2613a4: 0xacc700c0  sw          $a3, 0xC0($a2)
    ctx->pc = 0x2613a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 192), GPR_U32(ctx, 7));
label_2613a8:
    // 0x2613a8: 0x264200dc  addiu       $v0, $s2, 0xDC
    ctx->pc = 0x2613a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 220));
label_2613ac:
    // 0x2613ac: 0x93040  sll         $a2, $t1, 1
    ctx->pc = 0x2613acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_2613b0:
    // 0x2613b0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2613b0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2613b4:
    // 0x2613b4: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x2613b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_2613b8:
    // 0x2613b8: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2613b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_2613bc:
    // 0x2613bc: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2613bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2613c0:
    // 0x2613c0: 0x2463821  addu        $a3, $s2, $a2
    ctx->pc = 0x2613c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
label_2613c4:
    // 0x2613c4: 0x3c063f86  lui         $a2, 0x3F86
    ctx->pc = 0x2613c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16262 << 16));
label_2613c8:
    // 0x2613c8: 0x34c66666  ori         $a2, $a2, 0x6666
    ctx->pc = 0x2613c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)26214);
label_2613cc:
    // 0x2613cc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2613ccu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2613d0:
    // 0x2613d0: 0xc64200dc  lwc1        $f2, 0xDC($s2)
    ctx->pc = 0x2613d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2613d4:
    // 0x2613d4: 0xc4e3001c  lwc1        $f3, 0x1C($a3)
    ctx->pc = 0x2613d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2613d8:
    // 0x2613d8: 0x43040  sll         $a2, $a0, 1
    ctx->pc = 0x2613d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2613dc:
    // 0x2613dc: 0x46070202  mul.s       $f8, $f0, $f7
    ctx->pc = 0x2613dcu;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_2613e0:
    // 0x2613e0: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x2613e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_2613e4:
    // 0x2613e4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2613e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_2613e8:
    // 0x2613e8: 0x2443021  addu        $a2, $s2, $a0
    ctx->pc = 0x2613e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_2613ec:
    // 0x2613ec: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2613ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2613f0:
    // 0x2613f0: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2613f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2613f4:
    // 0x2613f4: 0x46031001  sub.s       $f0, $f2, $f3
    ctx->pc = 0x2613f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_2613f8:
    // 0x2613f8: 0x8d470000  lw          $a3, 0x0($t2)
    ctx->pc = 0x2613f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_2613fc:
    // 0x2613fc: 0x14e00014  bnez        $a3, . + 4 + (0x14 << 2)
label_261400:
    if (ctx->pc == 0x261400u) {
        ctx->pc = 0x261404u;
        goto label_261404;
    }
    ctx->pc = 0x2613FCu;
    {
        const bool branch_taken_0x2613fc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2613fc) {
            ctx->pc = 0x261450u;
            goto label_261450;
        }
    }
    ctx->pc = 0x261404u;
label_261404:
    // 0x261404: 0xc4c50004  lwc1        $f5, 0x4($a2)
    ctx->pc = 0x261404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_261408:
    // 0x261408: 0xc5240004  lwc1        $f4, 0x4($t1)
    ctx->pc = 0x261408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_26140c:
    // 0x26140c: 0xc4c70000  lwc1        $f7, 0x0($a2)
    ctx->pc = 0x26140cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_261410:
    // 0x261410: 0xc5260000  lwc1        $f6, 0x0($t1)
    ctx->pc = 0x261410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_261414:
    // 0x261414: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x261414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_261418:
    // 0x261418: 0xc5220008  lwc1        $f2, 0x8($t1)
    ctx->pc = 0x261418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26141c:
    // 0x26141c: 0x46042941  sub.s       $f5, $f5, $f4
    ctx->pc = 0x26141cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_261420:
    // 0x261420: 0x46021901  sub.s       $f4, $f3, $f2
    ctx->pc = 0x261420u;
    ctx->f[4] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_261424:
    // 0x261424: 0x46063981  sub.s       $f6, $f7, $f6
    ctx->pc = 0x261424u;
    ctx->f[6] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
label_261428:
    // 0x261428: 0x460630c2  mul.s       $f3, $f6, $f6
    ctx->pc = 0x261428u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
label_26142c:
    // 0x26142c: 0x46052882  mul.s       $f2, $f5, $f5
    ctx->pc = 0x26142cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
label_261430:
    // 0x261430: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x261430u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_261434:
    // 0x261434: 0x4604209c  madd.s      $f2, $f4, $f4
    ctx->pc = 0x261434u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_261438:
    // 0x261438: 0x46081036  c.le.s      $f2, $f8
    ctx->pc = 0x261438u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26143c:
    // 0x26143c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_261440:
    if (ctx->pc == 0x261440u) {
        ctx->pc = 0x261444u;
        goto label_261444;
    }
    ctx->pc = 0x26143Cu;
    {
        const bool branch_taken_0x26143c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26143c) {
            ctx->pc = 0x261450u;
            goto label_261450;
        }
    }
    ctx->pc = 0x261444u;
label_261444:
    // 0x261444: 0x46001206  mov.s       $f8, $f2
    ctx->pc = 0x261444u;
    ctx->f[8] = FPU_MOV_S(ctx->f[2]);
label_261448:
    // 0x261448: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x261448u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_26144c:
    // 0x26144c: 0x0  nop
    ctx->pc = 0x26144cu;
    // NOP
label_261450:
    // 0x261450: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x261450u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_261454:
    // 0x261454: 0x29670005  slti        $a3, $t3, 0x5
    ctx->pc = 0x261454u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)5) ? 1 : 0);
label_261458:
    // 0x261458: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x261458u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_26145c:
    // 0x26145c: 0x14e0ffe6  bnez        $a3, . + 4 + (-0x1A << 2)
label_261460:
    if (ctx->pc == 0x261460u) {
        ctx->pc = 0x261460u;
            // 0x261460: 0x25290030  addiu       $t1, $t1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 48));
        ctx->pc = 0x261464u;
        goto label_261464;
    }
    ctx->pc = 0x26145Cu;
    {
        const bool branch_taken_0x26145c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x261460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26145Cu;
            // 0x261460: 0x25290030  addiu       $t1, $t1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26145c) {
            ctx->pc = 0x2613F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2613f8;
        }
    }
    ctx->pc = 0x261464u;
label_261464:
    // 0x261464: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x261464u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_261468:
    // 0x261468: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x261468u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26146c:
    // 0x26146c: 0xfd4821  addu        $t1, $a3, $sp
    ctx->pc = 0x26146cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
label_261470:
    // 0x261470: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x261470u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_261474:
    // 0x261474: 0xad2a00c0  sw          $t2, 0xC0($t1)
    ctx->pc = 0x261474u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 192), GPR_U32(ctx, 10));
label_261478:
    // 0x261478: 0x44805800  mtc1        $zero, $f11
    ctx->pc = 0x261478u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_26147c:
    // 0x26147c: 0x84840  sll         $t1, $t0, 1
    ctx->pc = 0x26147cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_261480:
    // 0x261480: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x261480u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_261484:
    // 0x261484: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x261484u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_261488:
    // 0x261488: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x261488u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26148c:
    // 0x26148c: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x26148cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_261490:
    // 0x261490: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x261490u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_261494:
    // 0x261494: 0x2484021  addu        $t0, $s2, $t0
    ctx->pc = 0x261494u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
label_261498:
    // 0x261498: 0xc4c70000  lwc1        $f7, 0x0($a2)
    ctx->pc = 0x261498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_26149c:
    // 0x26149c: 0xc5060000  lwc1        $f6, 0x0($t0)
    ctx->pc = 0x26149cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2614a0:
    // 0x2614a0: 0xc4c50004  lwc1        $f5, 0x4($a2)
    ctx->pc = 0x2614a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2614a4:
    // 0x2614a4: 0xc5040004  lwc1        $f4, 0x4($t0)
    ctx->pc = 0x2614a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2614a8:
    // 0x2614a8: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x2614a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2614ac:
    // 0x2614ac: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x2614acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2614b0:
    // 0x2614b0: 0x46063a81  sub.s       $f10, $f7, $f6
    ctx->pc = 0x2614b0u;
    ctx->f[10] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
label_2614b4:
    // 0x2614b4: 0x46042a41  sub.s       $f9, $f5, $f4
    ctx->pc = 0x2614b4u;
    ctx->f[9] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_2614b8:
    // 0x2614b8: 0x46021a01  sub.s       $f8, $f3, $f2
    ctx->pc = 0x2614b8u;
    ctx->f[8] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_2614bc:
    // 0x2614bc: 0x0  nop
    ctx->pc = 0x2614bcu;
    // NOP
label_2614c0:
    // 0x2614c0: 0x8d480000  lw          $t0, 0x0($t2)
    ctx->pc = 0x2614c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_2614c4:
    // 0x2614c4: 0x1500001a  bnez        $t0, . + 4 + (0x1A << 2)
label_2614c8:
    if (ctx->pc == 0x2614C8u) {
        ctx->pc = 0x2614CCu;
        goto label_2614cc;
    }
    ctx->pc = 0x2614C4u;
    {
        const bool branch_taken_0x2614c4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x2614c4) {
            ctx->pc = 0x261530u;
            goto label_261530;
        }
    }
    ctx->pc = 0x2614CCu;
label_2614cc:
    // 0x2614cc: 0xc5250004  lwc1        $f5, 0x4($t1)
    ctx->pc = 0x2614ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2614d0:
    // 0x2614d0: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x2614d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2614d4:
    // 0x2614d4: 0xc5230008  lwc1        $f3, 0x8($t1)
    ctx->pc = 0x2614d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2614d8:
    // 0x2614d8: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x2614d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2614dc:
    // 0x2614dc: 0xc5270000  lwc1        $f7, 0x0($t1)
    ctx->pc = 0x2614dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_2614e0:
    // 0x2614e0: 0xc4c60000  lwc1        $f6, 0x0($a2)
    ctx->pc = 0x2614e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2614e4:
    // 0x2614e4: 0x46042941  sub.s       $f5, $f5, $f4
    ctx->pc = 0x2614e4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_2614e8:
    // 0x2614e8: 0x46021901  sub.s       $f4, $f3, $f2
    ctx->pc = 0x2614e8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_2614ec:
    // 0x2614ec: 0x4608281a  mula.s      $f5, $f8
    ctx->pc = 0x2614ecu;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[8]);
label_2614f0:
    // 0x2614f0: 0x4609209d  msub.s      $f2, $f4, $f9
    ctx->pc = 0x2614f0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[9]));
label_2614f4:
    // 0x2614f4: 0x460210c2  mul.s       $f3, $f2, $f2
    ctx->pc = 0x2614f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_2614f8:
    // 0x2614f8: 0x46063981  sub.s       $f6, $f7, $f6
    ctx->pc = 0x2614f8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
label_2614fc:
    // 0x2614fc: 0x460a201a  mula.s      $f4, $f10
    ctx->pc = 0x2614fcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[10]);
label_261500:
    // 0x261500: 0x4608309d  msub.s      $f2, $f6, $f8
    ctx->pc = 0x261500u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[8]));
label_261504:
    // 0x261504: 0x4609301a  mula.s      $f6, $f9
    ctx->pc = 0x261504u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[9]);
label_261508:
    // 0x261508: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x261508u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_26150c:
    // 0x26150c: 0x460a291d  msub.s      $f4, $f5, $f10
    ctx->pc = 0x26150cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[10]));
label_261510:
    // 0x261510: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x261510u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_261514:
    // 0x261514: 0x4604209c  madd.s      $f2, $f4, $f4
    ctx->pc = 0x261514u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_261518:
    // 0x261518: 0x460b1036  c.le.s      $f2, $f11
    ctx->pc = 0x261518u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26151c:
    // 0x26151c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_261520:
    if (ctx->pc == 0x261520u) {
        ctx->pc = 0x261524u;
        goto label_261524;
    }
    ctx->pc = 0x26151Cu;
    {
        const bool branch_taken_0x26151c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26151c) {
            ctx->pc = 0x261530u;
            goto label_261530;
        }
    }
    ctx->pc = 0x261524u;
label_261524:
    // 0x261524: 0x460012c6  mov.s       $f11, $f2
    ctx->pc = 0x261524u;
    ctx->f[11] = FPU_MOV_S(ctx->f[2]);
label_261528:
    // 0x261528: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x261528u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_26152c:
    // 0x26152c: 0x0  nop
    ctx->pc = 0x26152cu;
    // NOP
label_261530:
    // 0x261530: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x261530u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_261534:
    // 0x261534: 0x29680005  slti        $t0, $t3, 0x5
    ctx->pc = 0x261534u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)5) ? 1 : 0);
label_261538:
    // 0x261538: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x261538u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_26153c:
    // 0x26153c: 0x1500ffe0  bnez        $t0, . + 4 + (-0x20 << 2)
label_261540:
    if (ctx->pc == 0x261540u) {
        ctx->pc = 0x261540u;
            // 0x261540: 0x25290030  addiu       $t1, $t1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 48));
        ctx->pc = 0x261544u;
        goto label_261544;
    }
    ctx->pc = 0x26153Cu;
    {
        const bool branch_taken_0x26153c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x261540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26153Cu;
            // 0x261540: 0x25290030  addiu       $t1, $t1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26153c) {
            ctx->pc = 0x2614C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2614c0;
        }
    }
    ctx->pc = 0x261544u;
label_261544:
    // 0x261544: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x261544u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_261548:
    // 0x261548: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x261548u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26154c:
    // 0x26154c: 0xdd4021  addu        $t0, $a2, $sp
    ctx->pc = 0x26154cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
label_261550:
    // 0x261550: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x261550u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_261554:
    // 0x261554: 0xad0900c0  sw          $t1, 0xC0($t0)
    ctx->pc = 0x261554u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 192), GPR_U32(ctx, 9));
label_261558:
    // 0x261558: 0x44804000  mtc1        $zero, $f8
    ctx->pc = 0x261558u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_26155c:
    // 0x26155c: 0x74040  sll         $t0, $a3, 1
    ctx->pc = 0x26155cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_261560:
    // 0x261560: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x261560u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_261564:
    // 0x261564: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x261564u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_261568:
    // 0x261568: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x261568u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26156c:
    // 0x26156c: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x26156cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_261570:
    // 0x261570: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x261570u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_261574:
    // 0x261574: 0x2475821  addu        $t3, $s2, $a3
    ctx->pc = 0x261574u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
label_261578:
    // 0x261578: 0x8d270000  lw          $a3, 0x0($t1)
    ctx->pc = 0x261578u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_26157c:
    // 0x26157c: 0x14e00014  bnez        $a3, . + 4 + (0x14 << 2)
label_261580:
    if (ctx->pc == 0x261580u) {
        ctx->pc = 0x261584u;
        goto label_261584;
    }
    ctx->pc = 0x26157Cu;
    {
        const bool branch_taken_0x26157c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x26157c) {
            ctx->pc = 0x2615D0u;
            goto label_2615d0;
        }
    }
    ctx->pc = 0x261584u;
label_261584:
    // 0x261584: 0xc5650004  lwc1        $f5, 0x4($t3)
    ctx->pc = 0x261584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_261588:
    // 0x261588: 0xc5040004  lwc1        $f4, 0x4($t0)
    ctx->pc = 0x261588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_26158c:
    // 0x26158c: 0xc5670000  lwc1        $f7, 0x0($t3)
    ctx->pc = 0x26158cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_261590:
    // 0x261590: 0xc5060000  lwc1        $f6, 0x0($t0)
    ctx->pc = 0x261590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_261594:
    // 0x261594: 0xc5630008  lwc1        $f3, 0x8($t3)
    ctx->pc = 0x261594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_261598:
    // 0x261598: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x261598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26159c:
    // 0x26159c: 0x46042941  sub.s       $f5, $f5, $f4
    ctx->pc = 0x26159cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_2615a0:
    // 0x2615a0: 0x46021901  sub.s       $f4, $f3, $f2
    ctx->pc = 0x2615a0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_2615a4:
    // 0x2615a4: 0x46063981  sub.s       $f6, $f7, $f6
    ctx->pc = 0x2615a4u;
    ctx->f[6] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
label_2615a8:
    // 0x2615a8: 0x460630c2  mul.s       $f3, $f6, $f6
    ctx->pc = 0x2615a8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
label_2615ac:
    // 0x2615ac: 0x46052882  mul.s       $f2, $f5, $f5
    ctx->pc = 0x2615acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
label_2615b0:
    // 0x2615b0: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x2615b0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_2615b4:
    // 0x2615b4: 0x4604209c  madd.s      $f2, $f4, $f4
    ctx->pc = 0x2615b4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_2615b8:
    // 0x2615b8: 0x46081036  c.le.s      $f2, $f8
    ctx->pc = 0x2615b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2615bc:
    // 0x2615bc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_2615c0:
    if (ctx->pc == 0x2615C0u) {
        ctx->pc = 0x2615C4u;
        goto label_2615c4;
    }
    ctx->pc = 0x2615BCu;
    {
        const bool branch_taken_0x2615bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2615bc) {
            ctx->pc = 0x2615D0u;
            goto label_2615d0;
        }
    }
    ctx->pc = 0x2615C4u;
label_2615c4:
    // 0x2615c4: 0x46001206  mov.s       $f8, $f2
    ctx->pc = 0x2615c4u;
    ctx->f[8] = FPU_MOV_S(ctx->f[2]);
label_2615c8:
    // 0x2615c8: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x2615c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2615cc:
    // 0x2615cc: 0x0  nop
    ctx->pc = 0x2615ccu;
    // NOP
label_2615d0:
    // 0x2615d0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2615d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_2615d4:
    // 0x2615d4: 0x29470005  slti        $a3, $t2, 0x5
    ctx->pc = 0x2615d4u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)5) ? 1 : 0);
label_2615d8:
    // 0x2615d8: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2615d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_2615dc:
    // 0x2615dc: 0x14e0ffe6  bnez        $a3, . + 4 + (-0x1A << 2)
label_2615e0:
    if (ctx->pc == 0x2615E0u) {
        ctx->pc = 0x2615E0u;
            // 0x2615e0: 0x25080030  addiu       $t0, $t0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
        ctx->pc = 0x2615E4u;
        goto label_2615e4;
    }
    ctx->pc = 0x2615DCu;
    {
        const bool branch_taken_0x2615dc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2615E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2615DCu;
            // 0x2615e0: 0x25080030  addiu       $t0, $t0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2615dc) {
            ctx->pc = 0x261578u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_261578;
        }
    }
    ctx->pc = 0x2615E4u;
label_2615e4:
    // 0x2615e4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2615e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2615e8:
    // 0x2615e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2615e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2615ec:
    // 0x2615ec: 0xdd3021  addu        $a2, $a2, $sp
    ctx->pc = 0x2615ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
label_2615f0:
    // 0x2615f0: 0xacc700c0  sw          $a3, 0xC0($a2)
    ctx->pc = 0x2615f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 192), GPR_U32(ctx, 7));
label_2615f4:
    // 0x2615f4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2615f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2615f8:
    // 0x2615f8: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_2615fc:
    if (ctx->pc == 0x2615FCu) {
        ctx->pc = 0x261600u;
        goto label_261600;
    }
    ctx->pc = 0x2615F8u;
    {
        const bool branch_taken_0x2615f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2615f8) {
            ctx->pc = 0x261638u;
            goto label_261638;
        }
    }
    ctx->pc = 0x261600u;
label_261600:
    // 0x261600: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x261600u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_261604:
    // 0x261604: 0x0  nop
    ctx->pc = 0x261604u;
    // NOP
label_261608:
    // 0x261608: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x261608u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26160c:
    // 0x26160c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_261610:
    if (ctx->pc == 0x261610u) {
        ctx->pc = 0x261610u;
            // 0x261610: 0x3c034403  lui         $v1, 0x4403 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17411 << 16));
        ctx->pc = 0x261614u;
        goto label_261614;
    }
    ctx->pc = 0x26160Cu;
    {
        const bool branch_taken_0x26160c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x261610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26160Cu;
            // 0x261610: 0x3c034403  lui         $v1, 0x4403 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17411 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26160c) {
            ctx->pc = 0x261638u;
            goto label_261638;
        }
    }
    ctx->pc = 0x261614u;
label_261614:
    // 0x261614: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x261614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_261618:
    // 0x261618: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x261618u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_26161c:
    // 0x26161c: 0x0  nop
    ctx->pc = 0x26161cu;
    // NOP
label_261620:
    // 0x261620: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x261620u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_261624:
    // 0x261624: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x261624u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_261628:
    // 0x261628: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x261628u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26162c:
    // 0x26162c: 0x45010010  bc1t        . + 4 + (0x10 << 2)
label_261630:
    if (ctx->pc == 0x261630u) {
        ctx->pc = 0x261634u;
        goto label_261634;
    }
    ctx->pc = 0x26162Cu;
    {
        const bool branch_taken_0x26162c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26162c) {
            ctx->pc = 0x261670u;
            goto label_261670;
        }
    }
    ctx->pc = 0x261634u;
label_261634:
    // 0x261634: 0x0  nop
    ctx->pc = 0x261634u;
    // NOP
label_261638:
    // 0x261638: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x261638u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26163c:
    // 0x26163c: 0x0  nop
    ctx->pc = 0x26163cu;
    // NOP
label_261640:
    // 0x261640: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x261640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_261644:
    // 0x261644: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_261648:
    if (ctx->pc == 0x261648u) {
        ctx->pc = 0x26164Cu;
        goto label_26164c;
    }
    ctx->pc = 0x261644u;
    {
        const bool branch_taken_0x261644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x261644) {
            ctx->pc = 0x261658u;
            goto label_261658;
        }
    }
    ctx->pc = 0x26164Cu;
label_26164c:
    // 0x26164c: 0x10000024  b           . + 4 + (0x24 << 2)
label_261650:
    if (ctx->pc == 0x261650u) {
        ctx->pc = 0x261654u;
        goto label_261654;
    }
    ctx->pc = 0x26164Cu;
    {
        const bool branch_taken_0x26164c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26164c) {
            ctx->pc = 0x2616E0u;
            goto label_2616e0;
        }
    }
    ctx->pc = 0x261654u;
label_261654:
    // 0x261654: 0x0  nop
    ctx->pc = 0x261654u;
    // NOP
label_261658:
    // 0x261658: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x261658u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_26165c:
    // 0x26165c: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x26165cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
label_261660:
    // 0x261660: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_261664:
    if (ctx->pc == 0x261664u) {
        ctx->pc = 0x261664u;
            // 0x261664: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x261668u;
        goto label_261668;
    }
    ctx->pc = 0x261660u;
    {
        const bool branch_taken_0x261660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261660u;
            // 0x261664: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261660) {
            ctx->pc = 0x261640u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_261640;
        }
    }
    ctx->pc = 0x261668u;
label_261668:
    // 0x261668: 0x1000001d  b           . + 4 + (0x1D << 2)
label_26166c:
    if (ctx->pc == 0x26166Cu) {
        ctx->pc = 0x26166Cu;
            // 0x26166c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x261670u;
        goto label_261670;
    }
    ctx->pc = 0x261668u;
    {
        const bool branch_taken_0x261668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26166Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261668u;
            // 0x26166c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261668) {
            ctx->pc = 0x2616E0u;
            goto label_2616e0;
        }
    }
    ctx->pc = 0x261670u;
label_261670:
    // 0x261670: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x261670u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_261674:
    // 0x261674: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x261674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_261678:
    // 0x261678: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x261678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26167c:
    // 0x26167c: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x26167cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_261680:
    // 0x261680: 0x3c023cf9  lui         $v0, 0x3CF9
    ctx->pc = 0x261680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15609 << 16));
label_261684:
    // 0x261684: 0x34428ae9  ori         $v0, $v0, 0x8AE9
    ctx->pc = 0x261684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35561);
label_261688:
    // 0x261688: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x261688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_26168c:
    // 0x26168c: 0x3c023089  lui         $v0, 0x3089
    ctx->pc = 0x26168cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12425 << 16));
label_261690:
    // 0x261690: 0x3442705f  ori         $v0, $v0, 0x705F
    ctx->pc = 0x261690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28767);
label_261694:
    // 0x261694: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x261694u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_261698:
    // 0x261698: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x261698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26169c:
    // 0x26169c: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x26169cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2616a0:
    // 0x2616a0: 0x460400c1  sub.s       $f3, $f0, $f4
    ctx->pc = 0x2616a0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_2616a4:
    // 0x2616a4: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x2616a4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_2616a8:
    // 0x2616a8: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x2616a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_2616ac:
    // 0x2616ac: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x2616acu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_2616b0:
    // 0x2616b0: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x2616b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2616b4:
    // 0x2616b4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_2616b8:
    if (ctx->pc == 0x2616B8u) {
        ctx->pc = 0x2616B8u;
            // 0x2616b8: 0x46020800  add.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->pc = 0x2616BCu;
        goto label_2616bc;
    }
    ctx->pc = 0x2616B4u;
    {
        const bool branch_taken_0x2616b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2616B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2616B4u;
            // 0x2616b8: 0x46020800  add.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2616b4) {
            ctx->pc = 0x2616C8u;
            goto label_2616c8;
        }
    }
    ctx->pc = 0x2616BCu;
label_2616bc:
    // 0x2616bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2616bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2616c0:
    // 0x2616c0: 0x46001943  div.s       $f5, $f3, $f0
    ctx->pc = 0x2616c0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[5] = ctx->f[3] / ctx->f[0];
label_2616c4:
    // 0x2616c4: 0x0  nop
    ctx->pc = 0x2616c4u;
    // NOP
label_2616c8:
    // 0x2616c8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2616c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2616cc:
    // 0x2616cc: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x2616ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
label_2616d0:
    // 0x2616d0: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x2616d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_2616d4:
    // 0x2616d4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_2616d8:
    if (ctx->pc == 0x2616D8u) {
        ctx->pc = 0x2616D8u;
            // 0x2616d8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x2616DCu;
        goto label_2616dc;
    }
    ctx->pc = 0x2616D4u;
    {
        const bool branch_taken_0x2616d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2616D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2616D4u;
            // 0x2616d8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2616d4) {
            ctx->pc = 0x261698u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_261698;
        }
    }
    ctx->pc = 0x2616DCu;
label_2616dc:
    // 0x2616dc: 0x0  nop
    ctx->pc = 0x2616dcu;
    // NOP
label_2616e0:
    // 0x2616e0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2616e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2616e4:
    // 0x2616e4: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
label_2616e8:
    if (ctx->pc == 0x2616E8u) {
        ctx->pc = 0x2616E8u;
            // 0x2616e8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2616ECu;
        goto label_2616ec;
    }
    ctx->pc = 0x2616E4u;
    {
        const bool branch_taken_0x2616e4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2616E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2616E4u;
            // 0x2616e8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2616e4) {
            ctx->pc = 0x2616F8u;
            goto label_2616f8;
        }
    }
    ctx->pc = 0x2616ECu;
label_2616ec:
    // 0x2616ec: 0x1000019e  b           . + 4 + (0x19E << 2)
label_2616f0:
    if (ctx->pc == 0x2616F0u) {
        ctx->pc = 0x2616F4u;
        goto label_2616f4;
    }
    ctx->pc = 0x2616ECu;
    {
        const bool branch_taken_0x2616ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2616ec) {
            ctx->pc = 0x261D68u;
            goto label_261d68;
        }
    }
    ctx->pc = 0x2616F4u;
label_2616f4:
    // 0x2616f4: 0x0  nop
    ctx->pc = 0x2616f4u;
    // NOP
label_2616f8:
    // 0x2616f8: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x2616f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2616fc:
    // 0x2616fc: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x2616fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_261700:
    // 0x261700: 0x8ec60004  lw          $a2, 0x4($s6)
    ctx->pc = 0x261700u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_261704:
    // 0x261704: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x261704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_261708:
    // 0x261708: 0x94450006  lhu         $a1, 0x6($v0)
    ctx->pc = 0x261708u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
label_26170c:
    // 0x26170c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x26170cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_261710:
    // 0x261710: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x261710u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_261714:
    // 0x261714: 0x320f809  jalr        $t9
label_261718:
    if (ctx->pc == 0x261718u) {
        ctx->pc = 0x261718u;
            // 0x261718: 0x24500004  addiu       $s0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x26171Cu;
        goto label_26171c;
    }
    ctx->pc = 0x261714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x26171Cu);
        ctx->pc = 0x261718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261714u;
            // 0x261718: 0x24500004  addiu       $s0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26171Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26171Cu; }
            if (ctx->pc != 0x26171Cu) { return; }
        }
        }
    }
    ctx->pc = 0x26171Cu;
label_26171c:
    // 0x26171c: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_261720:
    if (ctx->pc == 0x261720u) {
        ctx->pc = 0x261724u;
        goto label_261724;
    }
    ctx->pc = 0x26171Cu;
    {
        const bool branch_taken_0x26171c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x26171c) {
            ctx->pc = 0x261760u;
            goto label_261760;
        }
    }
    ctx->pc = 0x261724u;
label_261724:
    // 0x261724: 0x92a20004  lbu         $v0, 0x4($s5)
    ctx->pc = 0x261724u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4)));
label_261728:
    // 0x261728: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x261728u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_26172c:
    // 0x26172c: 0x92a20005  lbu         $v0, 0x5($s5)
    ctx->pc = 0x26172cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 5)));
label_261730:
    // 0x261730: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x261730u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_261734:
    // 0x261734: 0x96a20006  lhu         $v0, 0x6($s5)
    ctx->pc = 0x261734u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
label_261738:
    // 0x261738: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x261738u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_26173c:
    // 0x26173c: 0x92a50008  lbu         $a1, 0x8($s5)
    ctx->pc = 0x26173cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 8)));
label_261740:
    // 0x261740: 0x92a40009  lbu         $a0, 0x9($s5)
    ctx->pc = 0x261740u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 9)));
label_261744:
    // 0x261744: 0x92a3000a  lbu         $v1, 0xA($s5)
    ctx->pc = 0x261744u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 10)));
label_261748:
    // 0x261748: 0x92a2000b  lbu         $v0, 0xB($s5)
    ctx->pc = 0x261748u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 11)));
label_26174c:
    // 0x26174c: 0xa2050004  sb          $a1, 0x4($s0)
    ctx->pc = 0x26174cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 5));
label_261750:
    // 0x261750: 0xa2040005  sb          $a0, 0x5($s0)
    ctx->pc = 0x261750u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 4));
label_261754:
    // 0x261754: 0xa2030006  sb          $v1, 0x6($s0)
    ctx->pc = 0x261754u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 3));
label_261758:
    // 0x261758: 0x1000000f  b           . + 4 + (0xF << 2)
label_26175c:
    if (ctx->pc == 0x26175Cu) {
        ctx->pc = 0x26175Cu;
            // 0x26175c: 0xa2020007  sb          $v0, 0x7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x261760u;
        goto label_261760;
    }
    ctx->pc = 0x261758u;
    {
        const bool branch_taken_0x261758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26175Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261758u;
            // 0x26175c: 0xa2020007  sb          $v0, 0x7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261758) {
            ctx->pc = 0x261798u;
            goto label_261798;
        }
    }
    ctx->pc = 0x261760u;
label_261760:
    // 0x261760: 0x92a2000c  lbu         $v0, 0xC($s5)
    ctx->pc = 0x261760u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 12)));
label_261764:
    // 0x261764: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x261764u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_261768:
    // 0x261768: 0x92a2000d  lbu         $v0, 0xD($s5)
    ctx->pc = 0x261768u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 13)));
label_26176c:
    // 0x26176c: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x26176cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_261770:
    // 0x261770: 0x96a2000e  lhu         $v0, 0xE($s5)
    ctx->pc = 0x261770u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 14)));
label_261774:
    // 0x261774: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x261774u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_261778:
    // 0x261778: 0x92a50010  lbu         $a1, 0x10($s5)
    ctx->pc = 0x261778u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 16)));
label_26177c:
    // 0x26177c: 0x92a40011  lbu         $a0, 0x11($s5)
    ctx->pc = 0x26177cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 17)));
label_261780:
    // 0x261780: 0x92a30012  lbu         $v1, 0x12($s5)
    ctx->pc = 0x261780u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 18)));
label_261784:
    // 0x261784: 0x92a20013  lbu         $v0, 0x13($s5)
    ctx->pc = 0x261784u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 19)));
label_261788:
    // 0x261788: 0xa2050004  sb          $a1, 0x4($s0)
    ctx->pc = 0x261788u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 5));
label_26178c:
    // 0x26178c: 0xa2040005  sb          $a0, 0x5($s0)
    ctx->pc = 0x26178cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 4));
label_261790:
    // 0x261790: 0xa2030006  sb          $v1, 0x6($s0)
    ctx->pc = 0x261790u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 3));
label_261794:
    // 0x261794: 0xa2020007  sb          $v0, 0x7($s0)
    ctx->pc = 0x261794u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 2));
label_261798:
    // 0x261798: 0xc097eac  jal         func_25FAB0
label_26179c:
    if (ctx->pc == 0x26179Cu) {
        ctx->pc = 0x26179Cu;
            // 0x26179c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2617A0u;
        goto label_2617a0;
    }
    ctx->pc = 0x261798u;
    SET_GPR_U32(ctx, 31, 0x2617A0u);
    ctx->pc = 0x26179Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261798u;
            // 0x26179c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FAB0u;
    if (runtime->hasFunction(0x25FAB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2617A0u; }
        if (ctx->pc != 0x2617A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025FAB0_0x25fab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2617A0u; }
        if (ctx->pc != 0x2617A0u) { return; }
    }
    ctx->pc = 0x2617A0u;
label_2617a0:
    // 0x2617a0: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x2617a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2617a4:
    // 0x2617a4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2617a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2617a8:
    // 0x2617a8: 0x8fa700ac  lw          $a3, 0xAC($sp)
    ctx->pc = 0x2617a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_2617ac:
    // 0x2617ac: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2617acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2617b0:
    // 0x2617b0: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x2617b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2617b4:
    // 0x2617b4: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x2617b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2617b8:
    // 0x2617b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2617b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2617bc:
    // 0x2617bc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2617bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2617c0:
    // 0x2617c0: 0x320f809  jalr        $t9
label_2617c4:
    if (ctx->pc == 0x2617C4u) {
        ctx->pc = 0x2617C4u;
            // 0x2617c4: 0x260502d  daddu       $t2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2617C8u;
        goto label_2617c8;
    }
    ctx->pc = 0x2617C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2617C8u);
        ctx->pc = 0x2617C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2617C0u;
            // 0x2617c4: 0x260502d  daddu       $t2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2617C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2617C8u; }
            if (ctx->pc != 0x2617C8u) { return; }
        }
        }
    }
    ctx->pc = 0x2617C8u;
label_2617c8:
    // 0x2617c8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2617c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2617cc:
    // 0x2617cc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2617ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2617d0:
    // 0x2617d0: 0x14430041  bne         $v0, $v1, . + 4 + (0x41 << 2)
label_2617d4:
    if (ctx->pc == 0x2617D4u) {
        ctx->pc = 0x2617D8u;
        goto label_2617d8;
    }
    ctx->pc = 0x2617D0u;
    {
        const bool branch_taken_0x2617d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2617d0) {
            ctx->pc = 0x2618D8u;
            goto label_2618d8;
        }
    }
    ctx->pc = 0x2617D8u;
label_2617d8:
    // 0x2617d8: 0x92a2001c  lbu         $v0, 0x1C($s5)
    ctx->pc = 0x2617d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 28)));
label_2617dc:
    // 0x2617dc: 0xa2a20004  sb          $v0, 0x4($s5)
    ctx->pc = 0x2617dcu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 4), (uint8_t)GPR_U32(ctx, 2));
label_2617e0:
    // 0x2617e0: 0x92a2001d  lbu         $v0, 0x1D($s5)
    ctx->pc = 0x2617e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 29)));
label_2617e4:
    // 0x2617e4: 0xa2a20005  sb          $v0, 0x5($s5)
    ctx->pc = 0x2617e4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 5), (uint8_t)GPR_U32(ctx, 2));
label_2617e8:
    // 0x2617e8: 0x96a2001e  lhu         $v0, 0x1E($s5)
    ctx->pc = 0x2617e8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 30)));
label_2617ec:
    // 0x2617ec: 0xa6a20006  sh          $v0, 0x6($s5)
    ctx->pc = 0x2617ecu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 6), (uint16_t)GPR_U32(ctx, 2));
label_2617f0:
    // 0x2617f0: 0x92a50020  lbu         $a1, 0x20($s5)
    ctx->pc = 0x2617f0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 32)));
label_2617f4:
    // 0x2617f4: 0x92a40021  lbu         $a0, 0x21($s5)
    ctx->pc = 0x2617f4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 33)));
label_2617f8:
    // 0x2617f8: 0x92a30022  lbu         $v1, 0x22($s5)
    ctx->pc = 0x2617f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 34)));
label_2617fc:
    // 0x2617fc: 0x92a20023  lbu         $v0, 0x23($s5)
    ctx->pc = 0x2617fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 35)));
label_261800:
    // 0x261800: 0xa2a50008  sb          $a1, 0x8($s5)
    ctx->pc = 0x261800u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 8), (uint8_t)GPR_U32(ctx, 5));
label_261804:
    // 0x261804: 0xa2a40009  sb          $a0, 0x9($s5)
    ctx->pc = 0x261804u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 9), (uint8_t)GPR_U32(ctx, 4));
label_261808:
    // 0x261808: 0xa2a3000a  sb          $v1, 0xA($s5)
    ctx->pc = 0x261808u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 10), (uint8_t)GPR_U32(ctx, 3));
label_26180c:
    // 0x26180c: 0xa2a2000b  sb          $v0, 0xB($s5)
    ctx->pc = 0x26180cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 11), (uint8_t)GPR_U32(ctx, 2));
label_261810:
    // 0x261810: 0x92a20002  lbu         $v0, 0x2($s5)
    ctx->pc = 0x261810u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
label_261814:
    // 0x261814: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x261814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_261818:
    // 0x261818: 0xa2a20002  sb          $v0, 0x2($s5)
    ctx->pc = 0x261818u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 2), (uint8_t)GPR_U32(ctx, 2));
label_26181c:
    // 0x26181c: 0x92a40002  lbu         $a0, 0x2($s5)
    ctx->pc = 0x26181cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
label_261820:
    // 0x261820: 0x92a30001  lbu         $v1, 0x1($s5)
    ctx->pc = 0x261820u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
label_261824:
    // 0x261824: 0x92a20000  lbu         $v0, 0x0($s5)
    ctx->pc = 0x261824u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_261828:
    // 0x261828: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x261828u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_26182c:
    // 0x26182c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x26182cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_261830:
    // 0x261830: 0x2a52821  addu        $a1, $s5, $a1
    ctx->pc = 0x261830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
label_261834:
    // 0x261834: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x261834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_261838:
    // 0x261838: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x261838u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_26183c:
    // 0x26183c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x26183cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_261840:
    // 0x261840: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x261840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_261844:
    // 0x261844: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x261844u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_261848:
    // 0x261848: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x261848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_26184c:
    // 0x26184c: 0x460000a  bltz        $v1, . + 4 + (0xA << 2)
label_261850:
    if (ctx->pc == 0x261850u) {
        ctx->pc = 0x261850u;
            // 0x261850: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x261854u;
        goto label_261854;
    }
    ctx->pc = 0x26184Cu;
    {
        const bool branch_taken_0x26184c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x261850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26184Cu;
            // 0x261850: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26184c) {
            ctx->pc = 0x261878u;
            goto label_261878;
        }
    }
    ctx->pc = 0x261854u;
label_261854:
    // 0x261854: 0x0  nop
    ctx->pc = 0x261854u;
    // NOP
label_261858:
    // 0x261858: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x261858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_26185c:
    // 0x26185c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26185cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_261860:
    // 0x261860: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x261860u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_261864:
    // 0x261864: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x261864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_261868:
    // 0x261868: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x261868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_26186c:
    // 0x26186c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
label_261870:
    if (ctx->pc == 0x261870u) {
        ctx->pc = 0x261874u;
        goto label_261874;
    }
    ctx->pc = 0x26186Cu;
    {
        const bool branch_taken_0x26186c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x26186c) {
            ctx->pc = 0x261858u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_261858;
        }
    }
    ctx->pc = 0x261874u;
label_261874:
    // 0x261874: 0x0  nop
    ctx->pc = 0x261874u;
    // NOP
label_261878:
    // 0x261878: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x261878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_26187c:
    // 0x26187c: 0xc6400090  lwc1        $f0, 0x90($s2)
    ctx->pc = 0x26187cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_261880:
    // 0x261880: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x261880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_261884:
    // 0x261884: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x261884u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_261888:
    // 0x261888: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x261888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_26188c:
    // 0x26188c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x26188cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_261890:
    // 0x261890: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x261890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_261894:
    // 0x261894: 0xc6400094  lwc1        $f0, 0x94($s2)
    ctx->pc = 0x261894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_261898:
    // 0x261898: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x261898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_26189c:
    // 0x26189c: 0xc6400098  lwc1        $f0, 0x98($s2)
    ctx->pc = 0x26189cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2618a0:
    // 0x2618a0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2618a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2618a4:
    // 0x2618a4: 0xc640009c  lwc1        $f0, 0x9C($s2)
    ctx->pc = 0x2618a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2618a8:
    // 0x2618a8: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2618a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_2618ac:
    // 0x2618ac: 0xc64000a0  lwc1        $f0, 0xA0($s2)
    ctx->pc = 0x2618acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2618b0:
    // 0x2618b0: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x2618b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_2618b4:
    // 0x2618b4: 0xc64000a4  lwc1        $f0, 0xA4($s2)
    ctx->pc = 0x2618b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2618b8:
    // 0x2618b8: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x2618b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_2618bc:
    // 0x2618bc: 0xc64000a8  lwc1        $f0, 0xA8($s2)
    ctx->pc = 0x2618bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2618c0:
    // 0x2618c0: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x2618c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_2618c4:
    // 0x2618c4: 0xc64000ac  lwc1        $f0, 0xAC($s2)
    ctx->pc = 0x2618c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2618c8:
    // 0x2618c8: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x2618c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
label_2618cc:
    // 0x2618cc: 0xc64000b0  lwc1        $f0, 0xB0($s2)
    ctx->pc = 0x2618ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2618d0:
    // 0x2618d0: 0x10000125  b           . + 4 + (0x125 << 2)
label_2618d4:
    if (ctx->pc == 0x2618D4u) {
        ctx->pc = 0x2618D4u;
            // 0x2618d4: 0xe4600020  swc1        $f0, 0x20($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
        ctx->pc = 0x2618D8u;
        goto label_2618d8;
    }
    ctx->pc = 0x2618D0u;
    {
        const bool branch_taken_0x2618d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2618D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2618D0u;
            // 0x2618d4: 0xe4600020  swc1        $f0, 0x20($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2618d0) {
            ctx->pc = 0x261D68u;
            goto label_261d68;
        }
    }
    ctx->pc = 0x2618D8u;
label_2618d8:
    // 0x2618d8: 0xae620020  sw          $v0, 0x20($s3)
    ctx->pc = 0x2618d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
label_2618dc:
    // 0x2618dc: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2618dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2618e0:
    // 0x2618e0: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x2618e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_2618e4:
    // 0x2618e4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2618e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_2618e8:
    // 0x2618e8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2618e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2618ec:
    // 0x2618ec: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2618ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_2618f0:
    // 0x2618f0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2618f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2618f4:
    // 0x2618f4: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x2618f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2618f8:
    // 0x2618f8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2618f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_2618fc:
    // 0x2618fc: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x2618fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_261900:
    // 0x261900: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x261900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_261904:
    // 0x261904: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x261904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_261908:
    // 0x261908: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x261908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_26190c:
    // 0x26190c: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x26190cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_261910:
    // 0x261910: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x261910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_261914:
    // 0x261914: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x261914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_261918:
    // 0x261918: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x261918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_26191c:
    // 0x26191c: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x26191cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_261920:
    // 0x261920: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x261920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_261924:
    // 0x261924: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x261924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_261928:
    // 0x261928: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x261928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
label_26192c:
    // 0x26192c: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x26192cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_261930:
    // 0x261930: 0x1000004b  b           . + 4 + (0x4B << 2)
label_261934:
    if (ctx->pc == 0x261934u) {
        ctx->pc = 0x261934u;
            // 0x261934: 0xe4600020  swc1        $f0, 0x20($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
        ctx->pc = 0x261938u;
        goto label_261938;
    }
    ctx->pc = 0x261930u;
    {
        const bool branch_taken_0x261930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261930u;
            // 0x261934: 0xe4600020  swc1        $f0, 0x20($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x261930) {
            ctx->pc = 0x261A60u;
            goto label_261a60;
        }
    }
    ctx->pc = 0x261938u;
label_261938:
    // 0x261938: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x261938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_26193c:
    // 0x26193c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_261940:
    if (ctx->pc == 0x261940u) {
        ctx->pc = 0x261944u;
        goto label_261944;
    }
    ctx->pc = 0x26193Cu;
    {
        const bool branch_taken_0x26193c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26193c) {
            ctx->pc = 0x261958u;
            goto label_261958;
        }
    }
    ctx->pc = 0x261944u;
label_261944:
    // 0x261944: 0x92830009  lbu         $v1, 0x9($s4)
    ctx->pc = 0x261944u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 9)));
label_261948:
    // 0x261948: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x261948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_26194c:
    // 0x26194c: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
label_261950:
    if (ctx->pc == 0x261950u) {
        ctx->pc = 0x261954u;
        goto label_261954;
    }
    ctx->pc = 0x26194Cu;
    {
        const bool branch_taken_0x26194c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26194c) {
            ctx->pc = 0x261998u;
            goto label_261998;
        }
    }
    ctx->pc = 0x261954u;
label_261954:
    // 0x261954: 0x0  nop
    ctx->pc = 0x261954u;
    // NOP
label_261958:
    // 0x261958: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x261958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_26195c:
    // 0x26195c: 0x8fa700ac  lw          $a3, 0xAC($sp)
    ctx->pc = 0x26195cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_261960:
    // 0x261960: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x261960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_261964:
    // 0x261964: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x261964u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_261968:
    // 0x261968: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x261968u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_26196c:
    // 0x26196c: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x26196cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_261970:
    // 0x261970: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x261970u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_261974:
    // 0x261974: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x261974u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_261978:
    // 0x261978: 0x320f809  jalr        $t9
label_26197c:
    if (ctx->pc == 0x26197Cu) {
        ctx->pc = 0x26197Cu;
            // 0x26197c: 0x260502d  daddu       $t2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x261980u;
        goto label_261980;
    }
    ctx->pc = 0x261978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x261980u);
        ctx->pc = 0x26197Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261978u;
            // 0x26197c: 0x260502d  daddu       $t2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x261980u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x261980u; }
            if (ctx->pc != 0x261980u) { return; }
        }
        }
    }
    ctx->pc = 0x261980u;
label_261980:
    // 0x261980: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x261980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_261984:
    // 0x261984: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x261984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_261988:
    // 0x261988: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_26198c:
    if (ctx->pc == 0x26198Cu) {
        ctx->pc = 0x261990u;
        goto label_261990;
    }
    ctx->pc = 0x261988u;
    {
        const bool branch_taken_0x261988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x261988) {
            ctx->pc = 0x2619A0u;
            goto label_2619a0;
        }
    }
    ctx->pc = 0x261990u;
label_261990:
    // 0x261990: 0x100000f5  b           . + 4 + (0xF5 << 2)
label_261994:
    if (ctx->pc == 0x261994u) {
        ctx->pc = 0x261994u;
            // 0x261994: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x261998u;
        goto label_261998;
    }
    ctx->pc = 0x261990u;
    {
        const bool branch_taken_0x261990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261990u;
            // 0x261994: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261990) {
            ctx->pc = 0x261D68u;
            goto label_261d68;
        }
    }
    ctx->pc = 0x261998u;
label_261998:
    // 0x261998: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x261998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_26199c:
    // 0x26199c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x26199cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2619a0:
    // 0x2619a0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2619a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2619a4:
    // 0x2619a4: 0xae630020  sw          $v1, 0x20($s3)
    ctx->pc = 0x2619a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 3));
label_2619a8:
    // 0x2619a8: 0x92a50002  lbu         $a1, 0x2($s5)
    ctx->pc = 0x2619a8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
label_2619ac:
    // 0x2619ac: 0x92a40000  lbu         $a0, 0x0($s5)
    ctx->pc = 0x2619acu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_2619b0:
    // 0x2619b0: 0x92a30001  lbu         $v1, 0x1($s5)
    ctx->pc = 0x2619b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
label_2619b4:
    // 0x2619b4: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x2619b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2619b8:
    // 0x2619b8: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x2619b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_2619bc:
    // 0x2619bc: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2619bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2619c0:
    // 0x2619c0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2619c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2619c4:
    // 0x2619c4: 0x2a52821  addu        $a1, $s5, $a1
    ctx->pc = 0x2619c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
label_2619c8:
    // 0x2619c8: 0x2a62021  addu        $a0, $s5, $a2
    ctx->pc = 0x2619c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
label_2619cc:
    // 0x2619cc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2619ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2619d0:
    // 0x2619d0: 0x24860004  addiu       $a2, $a0, 0x4
    ctx->pc = 0x2619d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_2619d4:
    // 0x2619d4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2619d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_2619d8:
    // 0x2619d8: 0x32043  sra         $a0, $v1, 1
    ctx->pc = 0x2619d8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
label_2619dc:
    // 0x2619dc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2619dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2619e0:
    // 0x2619e0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x2619e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_2619e4:
    // 0x2619e4: 0x480000a  bltz        $a0, . + 4 + (0xA << 2)
label_2619e8:
    if (ctx->pc == 0x2619E8u) {
        ctx->pc = 0x2619E8u;
            // 0x2619e8: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->pc = 0x2619ECu;
        goto label_2619ec;
    }
    ctx->pc = 0x2619E4u;
    {
        const bool branch_taken_0x2619e4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2619E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2619E4u;
            // 0x2619e8: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2619e4) {
            ctx->pc = 0x261A10u;
            goto label_261a10;
        }
    }
    ctx->pc = 0x2619ECu;
label_2619ec:
    // 0x2619ec: 0x0  nop
    ctx->pc = 0x2619ecu;
    // NOP
label_2619f0:
    // 0x2619f0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2619f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2619f4:
    // 0x2619f4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2619f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2619f8:
    // 0x2619f8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x2619f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_2619fc:
    // 0x2619fc: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x2619fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
label_261a00:
    // 0x261a00: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x261a00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
label_261a04:
    // 0x261a04: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
label_261a08:
    if (ctx->pc == 0x261A08u) {
        ctx->pc = 0x261A0Cu;
        goto label_261a0c;
    }
    ctx->pc = 0x261A04u;
    {
        const bool branch_taken_0x261a04 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x261a04) {
            ctx->pc = 0x2619F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2619f0;
        }
    }
    ctx->pc = 0x261A0Cu;
label_261a0c:
    // 0x261a0c: 0x0  nop
    ctx->pc = 0x261a0cu;
    // NOP
label_261a10:
    // 0x261a10: 0x92a40002  lbu         $a0, 0x2($s5)
    ctx->pc = 0x261a10u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
label_261a14:
    // 0x261a14: 0x92a30004  lbu         $v1, 0x4($s5)
    ctx->pc = 0x261a14u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4)));
label_261a18:
    // 0x261a18: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x261a18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_261a1c:
    // 0x261a1c: 0x2a43821  addu        $a3, $s5, $a0
    ctx->pc = 0x261a1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_261a20:
    // 0x261a20: 0xa0e30004  sb          $v1, 0x4($a3)
    ctx->pc = 0x261a20u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4), (uint8_t)GPR_U32(ctx, 3));
label_261a24:
    // 0x261a24: 0x92a30005  lbu         $v1, 0x5($s5)
    ctx->pc = 0x261a24u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 5)));
label_261a28:
    // 0x261a28: 0xa0e30005  sb          $v1, 0x5($a3)
    ctx->pc = 0x261a28u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 5), (uint8_t)GPR_U32(ctx, 3));
label_261a2c:
    // 0x261a2c: 0x96a30006  lhu         $v1, 0x6($s5)
    ctx->pc = 0x261a2cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
label_261a30:
    // 0x261a30: 0xa4e30006  sh          $v1, 0x6($a3)
    ctx->pc = 0x261a30u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 6), (uint16_t)GPR_U32(ctx, 3));
label_261a34:
    // 0x261a34: 0x92a60008  lbu         $a2, 0x8($s5)
    ctx->pc = 0x261a34u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 8)));
label_261a38:
    // 0x261a38: 0x92a50009  lbu         $a1, 0x9($s5)
    ctx->pc = 0x261a38u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 9)));
label_261a3c:
    // 0x261a3c: 0x92a4000a  lbu         $a0, 0xA($s5)
    ctx->pc = 0x261a3cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 10)));
label_261a40:
    // 0x261a40: 0x92a3000b  lbu         $v1, 0xB($s5)
    ctx->pc = 0x261a40u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 11)));
label_261a44:
    // 0x261a44: 0xa0e60008  sb          $a2, 0x8($a3)
    ctx->pc = 0x261a44u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 8), (uint8_t)GPR_U32(ctx, 6));
label_261a48:
    // 0x261a48: 0xa0e50009  sb          $a1, 0x9($a3)
    ctx->pc = 0x261a48u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 9), (uint8_t)GPR_U32(ctx, 5));
label_261a4c:
    // 0x261a4c: 0xa0e4000a  sb          $a0, 0xA($a3)
    ctx->pc = 0x261a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 10), (uint8_t)GPR_U32(ctx, 4));
label_261a50:
    // 0x261a50: 0xa0e3000b  sb          $v1, 0xB($a3)
    ctx->pc = 0x261a50u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 11), (uint8_t)GPR_U32(ctx, 3));
label_261a54:
    // 0x261a54: 0x92a30002  lbu         $v1, 0x2($s5)
    ctx->pc = 0x261a54u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
label_261a58:
    // 0x261a58: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x261a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_261a5c:
    // 0x261a5c: 0xa2a30002  sb          $v1, 0x2($s5)
    ctx->pc = 0x261a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 2), (uint8_t)GPR_U32(ctx, 3));
label_261a60:
    // 0x261a60: 0x92830008  lbu         $v1, 0x8($s4)
    ctx->pc = 0x261a60u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 8)));
label_261a64:
    // 0x261a64: 0x26b70004  addiu       $s7, $s5, 0x4
    ctx->pc = 0x261a64u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_261a68:
    // 0x261a68: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x261a68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_261a6c:
    // 0x261a6c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x261a6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_261a70:
    // 0x261a70: 0xa2a30004  sb          $v1, 0x4($s5)
    ctx->pc = 0x261a70u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 4), (uint8_t)GPR_U32(ctx, 3));
label_261a74:
    // 0x261a74: 0x92830009  lbu         $v1, 0x9($s4)
    ctx->pc = 0x261a74u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 9)));
label_261a78:
    // 0x261a78: 0xa2a30005  sb          $v1, 0x5($s5)
    ctx->pc = 0x261a78u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 5), (uint8_t)GPR_U32(ctx, 3));
label_261a7c:
    // 0x261a7c: 0xaea00008  sw          $zero, 0x8($s5)
    ctx->pc = 0x261a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
label_261a80:
    // 0x261a80: 0xa6a20006  sh          $v0, 0x6($s5)
    ctx->pc = 0x261a80u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 6), (uint16_t)GPR_U32(ctx, 2));
label_261a84:
    // 0x261a84: 0x92a30002  lbu         $v1, 0x2($s5)
    ctx->pc = 0x261a84u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
label_261a88:
    // 0x261a88: 0x92820008  lbu         $v0, 0x8($s4)
    ctx->pc = 0x261a88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 8)));
label_261a8c:
    // 0x261a8c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x261a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_261a90:
    // 0x261a90: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x261a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_261a94:
    // 0x261a94: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x261a94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_261a98:
    // 0x261a98: 0x10200067  beqz        $at, . + 4 + (0x67 << 2)
label_261a9c:
    if (ctx->pc == 0x261A9Cu) {
        ctx->pc = 0x261A9Cu;
            // 0x261a9c: 0x24760004  addiu       $s6, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x261AA0u;
        goto label_261aa0;
    }
    ctx->pc = 0x261A98u;
    {
        const bool branch_taken_0x261a98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x261A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261A98u;
            // 0x261a9c: 0x24760004  addiu       $s6, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261a98) {
            ctx->pc = 0x261C38u;
            goto label_261c38;
        }
    }
    ctx->pc = 0x261AA0u;
label_261aa0:
    // 0x261aa0: 0x280602d  daddu       $t4, $s4, $zero
    ctx->pc = 0x261aa0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_261aa4:
    // 0x261aa4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x261aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_261aa8:
    // 0x261aa8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x261aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_261aac:
    // 0x261aac: 0x0  nop
    ctx->pc = 0x261aacu;
    // NOP
label_261ab0:
    // 0x261ab0: 0x92a40000  lbu         $a0, 0x0($s5)
    ctx->pc = 0x261ab0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_261ab4:
    // 0x261ab4: 0x95900000  lhu         $s0, 0x0($t4)
    ctx->pc = 0x261ab4u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
label_261ab8:
    // 0x261ab8: 0x4082b  sltu        $at, $zero, $a0
    ctx->pc = 0x261ab8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_261abc:
    // 0x261abc: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_261ac0:
    if (ctx->pc == 0x261AC0u) {
        ctx->pc = 0x261AC0u;
            // 0x261ac0: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x261AC4u;
        goto label_261ac4;
    }
    ctx->pc = 0x261ABCu;
    {
        const bool branch_taken_0x261abc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x261AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261ABCu;
            // 0x261ac0: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261abc) {
            ctx->pc = 0x261AF0u;
            goto label_261af0;
        }
    }
    ctx->pc = 0x261AC4u;
label_261ac4:
    // 0x261ac4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x261ac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_261ac8:
    // 0x261ac8: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x261ac8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_261acc:
    // 0x261acc: 0x0  nop
    ctx->pc = 0x261accu;
    // NOP
label_261ad0:
    // 0x261ad0: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x261ad0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_261ad4:
    // 0x261ad4: 0x10a30050  beq         $a1, $v1, . + 4 + (0x50 << 2)
label_261ad8:
    if (ctx->pc == 0x261AD8u) {
        ctx->pc = 0x261ADCu;
        goto label_261adc;
    }
    ctx->pc = 0x261AD4u;
    {
        const bool branch_taken_0x261ad4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x261ad4) {
            ctx->pc = 0x261C18u;
            goto label_261c18;
        }
    }
    ctx->pc = 0x261ADCu;
label_261adc:
    // 0x261adc: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x261adcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_261ae0:
    // 0x261ae0: 0x1e4182b  sltu        $v1, $t7, $a0
    ctx->pc = 0x261ae0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_261ae4:
    // 0x261ae4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_261ae8:
    if (ctx->pc == 0x261AE8u) {
        ctx->pc = 0x261AE8u;
            // 0x261ae8: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->pc = 0x261AECu;
        goto label_261aec;
    }
    ctx->pc = 0x261AE4u;
    {
        const bool branch_taken_0x261ae4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x261AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261AE4u;
            // 0x261ae8: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261ae4) {
            ctx->pc = 0x261AD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_261ad0;
        }
    }
    ctx->pc = 0x261AECu;
label_261aec:
    // 0x261aec: 0x0  nop
    ctx->pc = 0x261aecu;
    // NOP
label_261af0:
    // 0x261af0: 0x92a30001  lbu         $v1, 0x1($s5)
    ctx->pc = 0x261af0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
label_261af4:
    // 0x261af4: 0x837021  addu        $t6, $a0, $v1
    ctx->pc = 0x261af4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_261af8:
    // 0x261af8: 0x1ee082b  sltu        $at, $t7, $t6
    ctx->pc = 0x261af8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
label_261afc:
    // 0x261afc: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
label_261b00:
    if (ctx->pc == 0x261B00u) {
        ctx->pc = 0x261B00u;
            // 0x261b00: 0x1ee1823  subu        $v1, $t7, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
        ctx->pc = 0x261B04u;
        goto label_261b04;
    }
    ctx->pc = 0x261AFCu;
    {
        const bool branch_taken_0x261afc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x261B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261AFCu;
            // 0x261b00: 0x1ee1823  subu        $v1, $t7, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261afc) {
            ctx->pc = 0x261BF8u;
            goto label_261bf8;
        }
    }
    ctx->pc = 0x261B04u;
label_261b04:
    // 0x261b04: 0x430019  multu       $v0, $v1
    ctx->pc = 0x261b04u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_261b08:
    // 0x261b08: 0x0  nop
    ctx->pc = 0x261b08u;
    // NOP
label_261b0c:
    // 0x261b0c: 0x0  nop
    ctx->pc = 0x261b0cu;
    // NOP
label_261b10:
    // 0x261b10: 0x1810  mfhi        $v1
    ctx->pc = 0x261b10u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_261b14:
    // 0x261b14: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x261b14u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_261b18:
    // 0x261b18: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x261b18u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_261b1c:
    // 0x261b1c: 0x14200028  bnez        $at, . + 4 + (0x28 << 2)
label_261b20:
    if (ctx->pc == 0x261B20u) {
        ctx->pc = 0x261B20u;
            // 0x261b20: 0x25ed0008  addiu       $t5, $t7, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
        ctx->pc = 0x261B24u;
        goto label_261b24;
    }
    ctx->pc = 0x261B1Cu;
    {
        const bool branch_taken_0x261b1c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x261B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261B1Cu;
            // 0x261b20: 0x25ed0008  addiu       $t5, $t7, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261b1c) {
            ctx->pc = 0x261BC0u;
            goto label_261bc0;
        }
    }
    ctx->pc = 0x261B24u;
label_261b24:
    // 0x261b24: 0xe1840  sll         $v1, $t6, 1
    ctx->pc = 0x261b24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
label_261b28:
    // 0x261b28: 0x765021  addu        $t2, $v1, $s6
    ctx->pc = 0x261b28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_261b2c:
    // 0x261b2c: 0x254bfffe  addiu       $t3, $t2, -0x2
    ctx->pc = 0x261b2cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967294));
label_261b30:
    // 0x261b30: 0x2549fffc  addiu       $t1, $t2, -0x4
    ctx->pc = 0x261b30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
label_261b34:
    // 0x261b34: 0x2548fffa  addiu       $t0, $t2, -0x6
    ctx->pc = 0x261b34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967290));
label_261b38:
    // 0x261b38: 0x2547fff8  addiu       $a3, $t2, -0x8
    ctx->pc = 0x261b38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967288));
label_261b3c:
    // 0x261b3c: 0x2546fff6  addiu       $a2, $t2, -0xA
    ctx->pc = 0x261b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967286));
label_261b40:
    // 0x261b40: 0x2545fff4  addiu       $a1, $t2, -0xC
    ctx->pc = 0x261b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967284));
label_261b44:
    // 0x261b44: 0x2544fff2  addiu       $a0, $t2, -0xE
    ctx->pc = 0x261b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967282));
label_261b48:
    // 0x261b48: 0x2543fff0  addiu       $v1, $t2, -0x10
    ctx->pc = 0x261b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967280));
label_261b4c:
    // 0x261b4c: 0x0  nop
    ctx->pc = 0x261b4cu;
    // NOP
label_261b50:
    // 0x261b50: 0x95780000  lhu         $t8, 0x0($t3)
    ctx->pc = 0x261b50u;
    SET_GPR_U32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_261b54:
    // 0x261b54: 0x25cefff8  addiu       $t6, $t6, -0x8
    ctx->pc = 0x261b54u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967288));
label_261b58:
    // 0x261b58: 0x1ae082b  sltu        $at, $t5, $t6
    ctx->pc = 0x261b58u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
label_261b5c:
    // 0x261b5c: 0xa5580000  sh          $t8, 0x0($t2)
    ctx->pc = 0x261b5cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 24));
label_261b60:
    // 0x261b60: 0x95380000  lhu         $t8, 0x0($t1)
    ctx->pc = 0x261b60u;
    SET_GPR_U32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_261b64:
    // 0x261b64: 0x254afff0  addiu       $t2, $t2, -0x10
    ctx->pc = 0x261b64u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967280));
label_261b68:
    // 0x261b68: 0xa5780000  sh          $t8, 0x0($t3)
    ctx->pc = 0x261b68u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 24));
label_261b6c:
    // 0x261b6c: 0x95180000  lhu         $t8, 0x0($t0)
    ctx->pc = 0x261b6cu;
    SET_GPR_U32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_261b70:
    // 0x261b70: 0x256bfff0  addiu       $t3, $t3, -0x10
    ctx->pc = 0x261b70u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967280));
label_261b74:
    // 0x261b74: 0xa5380000  sh          $t8, 0x0($t1)
    ctx->pc = 0x261b74u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 24));
label_261b78:
    // 0x261b78: 0x94f80000  lhu         $t8, 0x0($a3)
    ctx->pc = 0x261b78u;
    SET_GPR_U32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_261b7c:
    // 0x261b7c: 0x2529fff0  addiu       $t1, $t1, -0x10
    ctx->pc = 0x261b7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967280));
label_261b80:
    // 0x261b80: 0xa5180000  sh          $t8, 0x0($t0)
    ctx->pc = 0x261b80u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 24));
label_261b84:
    // 0x261b84: 0x94d80000  lhu         $t8, 0x0($a2)
    ctx->pc = 0x261b84u;
    SET_GPR_U32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_261b88:
    // 0x261b88: 0x2508fff0  addiu       $t0, $t0, -0x10
    ctx->pc = 0x261b88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967280));
label_261b8c:
    // 0x261b8c: 0xa4f80000  sh          $t8, 0x0($a3)
    ctx->pc = 0x261b8cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 24));
label_261b90:
    // 0x261b90: 0x94b80000  lhu         $t8, 0x0($a1)
    ctx->pc = 0x261b90u;
    SET_GPR_U32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_261b94:
    // 0x261b94: 0x24e7fff0  addiu       $a3, $a3, -0x10
    ctx->pc = 0x261b94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
label_261b98:
    // 0x261b98: 0xa4d80000  sh          $t8, 0x0($a2)
    ctx->pc = 0x261b98u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 24));
label_261b9c:
    // 0x261b9c: 0x94980000  lhu         $t8, 0x0($a0)
    ctx->pc = 0x261b9cu;
    SET_GPR_U32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_261ba0:
    // 0x261ba0: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x261ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
label_261ba4:
    // 0x261ba4: 0xa4b80000  sh          $t8, 0x0($a1)
    ctx->pc = 0x261ba4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 24));
label_261ba8:
    // 0x261ba8: 0x94780000  lhu         $t8, 0x0($v1)
    ctx->pc = 0x261ba8u;
    SET_GPR_U32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_261bac:
    // 0x261bac: 0x24a5fff0  addiu       $a1, $a1, -0x10
    ctx->pc = 0x261bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
label_261bb0:
    // 0x261bb0: 0xa4980000  sh          $t8, 0x0($a0)
    ctx->pc = 0x261bb0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 24));
label_261bb4:
    // 0x261bb4: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x261bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_261bb8:
    // 0x261bb8: 0x1420ffe5  bnez        $at, . + 4 + (-0x1B << 2)
label_261bbc:
    if (ctx->pc == 0x261BBCu) {
        ctx->pc = 0x261BBCu;
            // 0x261bbc: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->pc = 0x261BC0u;
        goto label_261bc0;
    }
    ctx->pc = 0x261BB8u;
    {
        const bool branch_taken_0x261bb8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x261BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261BB8u;
            // 0x261bbc: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261bb8) {
            ctx->pc = 0x261B50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_261b50;
        }
    }
    ctx->pc = 0x261BC0u;
label_261bc0:
    // 0x261bc0: 0x1ee082b  sltu        $at, $t7, $t6
    ctx->pc = 0x261bc0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
label_261bc4:
    // 0x261bc4: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_261bc8:
    if (ctx->pc == 0x261BC8u) {
        ctx->pc = 0x261BC8u;
            // 0x261bc8: 0xe1840  sll         $v1, $t6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
        ctx->pc = 0x261BCCu;
        goto label_261bcc;
    }
    ctx->pc = 0x261BC4u;
    {
        const bool branch_taken_0x261bc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x261BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261BC4u;
            // 0x261bc8: 0xe1840  sll         $v1, $t6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261bc4) {
            ctx->pc = 0x261BF8u;
            goto label_261bf8;
        }
    }
    ctx->pc = 0x261BCCu;
label_261bcc:
    // 0x261bcc: 0x762021  addu        $a0, $v1, $s6
    ctx->pc = 0x261bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_261bd0:
    // 0x261bd0: 0x2485fffe  addiu       $a1, $a0, -0x2
    ctx->pc = 0x261bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
label_261bd4:
    // 0x261bd4: 0x0  nop
    ctx->pc = 0x261bd4u;
    // NOP
label_261bd8:
    // 0x261bd8: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x261bd8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_261bdc:
    // 0x261bdc: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x261bdcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
label_261be0:
    // 0x261be0: 0x1ee082b  sltu        $at, $t7, $t6
    ctx->pc = 0x261be0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
label_261be4:
    // 0x261be4: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x261be4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
label_261be8:
    // 0x261be8: 0x24a5fffe  addiu       $a1, $a1, -0x2
    ctx->pc = 0x261be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
label_261bec:
    // 0x261bec: 0x1420fffa  bnez        $at, . + 4 + (-0x6 << 2)
label_261bf0:
    if (ctx->pc == 0x261BF0u) {
        ctx->pc = 0x261BF0u;
            // 0x261bf0: 0x2484fffe  addiu       $a0, $a0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
        ctx->pc = 0x261BF4u;
        goto label_261bf4;
    }
    ctx->pc = 0x261BECu;
    {
        const bool branch_taken_0x261bec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x261BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261BECu;
            // 0x261bf0: 0x2484fffe  addiu       $a0, $a0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261bec) {
            ctx->pc = 0x261BD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_261bd8;
        }
    }
    ctx->pc = 0x261BF4u;
label_261bf4:
    // 0x261bf4: 0x0  nop
    ctx->pc = 0x261bf4u;
    // NOP
label_261bf8:
    // 0x261bf8: 0xf1840  sll         $v1, $t7, 1
    ctx->pc = 0x261bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 15), 1));
label_261bfc:
    // 0x261bfc: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x261bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
label_261c00:
    // 0x261c00: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x261c00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_261c04:
    // 0x261c04: 0xa4700000  sh          $s0, 0x0($v1)
    ctx->pc = 0x261c04u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 16));
label_261c08:
    // 0x261c08: 0x92a30000  lbu         $v1, 0x0($s5)
    ctx->pc = 0x261c08u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_261c0c:
    // 0x261c0c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x261c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_261c10:
    // 0x261c10: 0xa2a30000  sb          $v1, 0x0($s5)
    ctx->pc = 0x261c10u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
label_261c14:
    // 0x261c14: 0x0  nop
    ctx->pc = 0x261c14u;
    // NOP
label_261c18:
    // 0x261c18: 0x2f21821  addu        $v1, $s7, $s2
    ctx->pc = 0x261c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
label_261c1c:
    // 0x261c1c: 0xf2100  sll         $a0, $t7, 4
    ctx->pc = 0x261c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
label_261c20:
    // 0x261c20: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x261c20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_261c24:
    // 0x261c24: 0xa0640004  sb          $a0, 0x4($v1)
    ctx->pc = 0x261c24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 4));
label_261c28:
    // 0x261c28: 0x92830008  lbu         $v1, 0x8($s4)
    ctx->pc = 0x261c28u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 8)));
label_261c2c:
    // 0x261c2c: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x261c2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_261c30:
    // 0x261c30: 0x1460ff9f  bnez        $v1, . + 4 + (-0x61 << 2)
label_261c34:
    if (ctx->pc == 0x261C34u) {
        ctx->pc = 0x261C34u;
            // 0x261c34: 0x258c0002  addiu       $t4, $t4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2));
        ctx->pc = 0x261C38u;
        goto label_261c38;
    }
    ctx->pc = 0x261C30u;
    {
        const bool branch_taken_0x261c30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x261C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261C30u;
            // 0x261c34: 0x258c0002  addiu       $t4, $t4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261c30) {
            ctx->pc = 0x261AB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_261ab0;
        }
    }
    ctx->pc = 0x261C38u;
label_261c38:
    // 0x261c38: 0x1260001f  beqz        $s3, . + 4 + (0x1F << 2)
label_261c3c:
    if (ctx->pc == 0x261C3Cu) {
        ctx->pc = 0x261C40u;
        goto label_261c40;
    }
    ctx->pc = 0x261C38u;
    {
        const bool branch_taken_0x261c38 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x261c38) {
            ctx->pc = 0x261CB8u;
            goto label_261cb8;
        }
    }
    ctx->pc = 0x261C40u;
label_261c40:
    // 0x261c40: 0x92a20002  lbu         $v0, 0x2($s5)
    ctx->pc = 0x261c40u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
label_261c44:
    // 0x261c44: 0x26a6000c  addiu       $a2, $s5, 0xC
    ctx->pc = 0x261c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
label_261c48:
    // 0x261c48: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x261c48u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_261c4c:
    // 0x261c4c: 0x1420001a  bnez        $at, . + 4 + (0x1A << 2)
label_261c50:
    if (ctx->pc == 0x261C50u) {
        ctx->pc = 0x261C50u;
            // 0x261c50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x261C54u;
        goto label_261c54;
    }
    ctx->pc = 0x261C4Cu;
    {
        const bool branch_taken_0x261c4c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x261C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261C4Cu;
            // 0x261c50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261c4c) {
            ctx->pc = 0x261CB8u;
            goto label_261cb8;
        }
    }
    ctx->pc = 0x261C54u;
label_261c54:
    // 0x261c54: 0x0  nop
    ctx->pc = 0x261c54u;
    // NOP
label_261c58:
    // 0x261c58: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x261c58u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_261c5c:
    // 0x261c5c: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x261c5cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_261c60:
    // 0x261c60: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x261c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_261c64:
    // 0x261c64: 0x82082b  sltu        $at, $a0, $v0
    ctx->pc = 0x261c64u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_261c68:
    // 0x261c68: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_261c6c:
    if (ctx->pc == 0x261C6Cu) {
        ctx->pc = 0x261C70u;
        goto label_261c70;
    }
    ctx->pc = 0x261C68u;
    {
        const bool branch_taken_0x261c68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x261c68) {
            ctx->pc = 0x261CA0u;
            goto label_261ca0;
        }
    }
    ctx->pc = 0x261C70u;
label_261c70:
    // 0x261c70: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x261c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_261c74:
    // 0x261c74: 0x90620004  lbu         $v0, 0x4($v1)
    ctx->pc = 0x261c74u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_261c78:
    // 0x261c78: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x261c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_261c7c:
    // 0x261c7c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x261c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_261c80:
    // 0x261c80: 0xa0620004  sb          $v0, 0x4($v1)
    ctx->pc = 0x261c80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 2));
label_261c84:
    // 0x261c84: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x261c84u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_261c88:
    // 0x261c88: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x261c88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_261c8c:
    // 0x261c8c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x261c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_261c90:
    // 0x261c90: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x261c90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_261c94:
    // 0x261c94: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_261c98:
    if (ctx->pc == 0x261C98u) {
        ctx->pc = 0x261C9Cu;
        goto label_261c9c;
    }
    ctx->pc = 0x261C94u;
    {
        const bool branch_taken_0x261c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x261c94) {
            ctx->pc = 0x261C70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_261c70;
        }
    }
    ctx->pc = 0x261C9Cu;
label_261c9c:
    // 0x261c9c: 0x0  nop
    ctx->pc = 0x261c9cu;
    // NOP
label_261ca0:
    // 0x261ca0: 0x92a20002  lbu         $v0, 0x2($s5)
    ctx->pc = 0x261ca0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
label_261ca4:
    // 0x261ca4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x261ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_261ca8:
    // 0x261ca8: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x261ca8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_261cac:
    // 0x261cac: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_261cb0:
    if (ctx->pc == 0x261CB0u) {
        ctx->pc = 0x261CB0u;
            // 0x261cb0: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->pc = 0x261CB4u;
        goto label_261cb4;
    }
    ctx->pc = 0x261CACu;
    {
        const bool branch_taken_0x261cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261CACu;
            // 0x261cb0: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261cac) {
            ctx->pc = 0x261C58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_261c58;
        }
    }
    ctx->pc = 0x261CB4u;
label_261cb4:
    // 0x261cb4: 0x0  nop
    ctx->pc = 0x261cb4u;
    // NOP
label_261cb8:
    // 0x261cb8: 0x92830009  lbu         $v1, 0x9($s4)
    ctx->pc = 0x261cb8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 9)));
label_261cbc:
    // 0x261cbc: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x261cbcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_261cc0:
    // 0x261cc0: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
label_261cc4:
    if (ctx->pc == 0x261CC4u) {
        ctx->pc = 0x261CC4u;
            // 0x261cc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x261CC8u;
        goto label_261cc8;
    }
    ctx->pc = 0x261CC0u;
    {
        const bool branch_taken_0x261cc0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x261CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261CC0u;
            // 0x261cc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261cc0) {
            ctx->pc = 0x261D60u;
            goto label_261d60;
        }
    }
    ctx->pc = 0x261CC8u;
label_261cc8:
    // 0x261cc8: 0x92840008  lbu         $a0, 0x8($s4)
    ctx->pc = 0x261cc8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 8)));
label_261ccc:
    // 0x261ccc: 0x92a70000  lbu         $a3, 0x0($s5)
    ctx->pc = 0x261cccu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_261cd0:
    // 0x261cd0: 0x92a30001  lbu         $v1, 0x1($s5)
    ctx->pc = 0x261cd0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
label_261cd4:
    // 0x261cd4: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x261cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_261cd8:
    // 0x261cd8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x261cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_261cdc:
    // 0x261cdc: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x261cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_261ce0:
    // 0x261ce0: 0xe33021  addu        $a2, $a3, $v1
    ctx->pc = 0x261ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_261ce4:
    // 0x261ce4: 0xe6082a  slt         $at, $a3, $a2
    ctx->pc = 0x261ce4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_261ce8:
    // 0x261ce8: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_261cec:
    if (ctx->pc == 0x261CECu) {
        ctx->pc = 0x261CECu;
            // 0x261cec: 0x94880000  lhu         $t0, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x261CF0u;
        goto label_261cf0;
    }
    ctx->pc = 0x261CE8u;
    {
        const bool branch_taken_0x261ce8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x261CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261CE8u;
            // 0x261cec: 0x94880000  lhu         $t0, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261ce8) {
            ctx->pc = 0x261D20u;
            goto label_261d20;
        }
    }
    ctx->pc = 0x261CF0u;
label_261cf0:
    // 0x261cf0: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x261cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_261cf4:
    // 0x261cf4: 0x3104ffff  andi        $a0, $t0, 0xFFFF
    ctx->pc = 0x261cf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_261cf8:
    // 0x261cf8: 0x2c32821  addu        $a1, $s6, $v1
    ctx->pc = 0x261cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
label_261cfc:
    // 0x261cfc: 0x0  nop
    ctx->pc = 0x261cfcu;
    // NOP
label_261d00:
    // 0x261d00: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x261d00u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_261d04:
    // 0x261d04: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
label_261d08:
    if (ctx->pc == 0x261D08u) {
        ctx->pc = 0x261D0Cu;
        goto label_261d0c;
    }
    ctx->pc = 0x261D04u;
    {
        const bool branch_taken_0x261d04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x261d04) {
            ctx->pc = 0x261D38u;
            goto label_261d38;
        }
    }
    ctx->pc = 0x261D0Cu;
label_261d0c:
    // 0x261d0c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x261d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_261d10:
    // 0x261d10: 0xe6182a  slt         $v1, $a3, $a2
    ctx->pc = 0x261d10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_261d14:
    // 0x261d14: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_261d18:
    if (ctx->pc == 0x261D18u) {
        ctx->pc = 0x261D18u;
            // 0x261d18: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x261D1Cu;
        goto label_261d1c;
    }
    ctx->pc = 0x261D14u;
    {
        const bool branch_taken_0x261d14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x261D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261D14u;
            // 0x261d18: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261d14) {
            ctx->pc = 0x261D00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_261d00;
        }
    }
    ctx->pc = 0x261D1Cu;
label_261d1c:
    // 0x261d1c: 0x0  nop
    ctx->pc = 0x261d1cu;
    // NOP
label_261d20:
    // 0x261d20: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x261d20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_261d24:
    // 0x261d24: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x261d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
label_261d28:
    // 0x261d28: 0xa4680000  sh          $t0, 0x0($v1)
    ctx->pc = 0x261d28u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 8));
label_261d2c:
    // 0x261d2c: 0x92a30001  lbu         $v1, 0x1($s5)
    ctx->pc = 0x261d2cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
label_261d30:
    // 0x261d30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x261d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_261d34:
    // 0x261d34: 0xa2a30001  sb          $v1, 0x1($s5)
    ctx->pc = 0x261d34u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1), (uint8_t)GPR_U32(ctx, 3));
label_261d38:
    // 0x261d38: 0x92830008  lbu         $v1, 0x8($s4)
    ctx->pc = 0x261d38u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 8)));
label_261d3c:
    // 0x261d3c: 0x2e22021  addu        $a0, $s7, $v0
    ctx->pc = 0x261d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_261d40:
    // 0x261d40: 0x72900  sll         $a1, $a3, 4
    ctx->pc = 0x261d40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_261d44:
    // 0x261d44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x261d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_261d48:
    // 0x261d48: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x261d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_261d4c:
    // 0x261d4c: 0xa0650004  sb          $a1, 0x4($v1)
    ctx->pc = 0x261d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 5));
label_261d50:
    // 0x261d50: 0x92830009  lbu         $v1, 0x9($s4)
    ctx->pc = 0x261d50u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 9)));
label_261d54:
    // 0x261d54: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x261d54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_261d58:
    // 0x261d58: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
label_261d5c:
    if (ctx->pc == 0x261D5Cu) {
        ctx->pc = 0x261D60u;
        goto label_261d60;
    }
    ctx->pc = 0x261D58u;
    {
        const bool branch_taken_0x261d58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x261d58) {
            ctx->pc = 0x261CC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_261cc8;
        }
    }
    ctx->pc = 0x261D60u;
label_261d60:
    // 0x261d60: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x261d60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_261d64:
    // 0x261d64: 0x0  nop
    ctx->pc = 0x261d64u;
    // NOP
label_261d68:
    // 0x261d68: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x261d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_261d6c:
    // 0x261d6c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x261d6cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_261d70:
    // 0x261d70: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x261d70u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_261d74:
    // 0x261d74: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x261d74u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_261d78:
    // 0x261d78: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x261d78u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_261d7c:
    // 0x261d7c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x261d7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_261d80:
    // 0x261d80: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x261d80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_261d84:
    // 0x261d84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x261d84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_261d88:
    // 0x261d88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x261d88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_261d8c:
    // 0x261d8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x261d8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_261d90:
    // 0x261d90: 0x3e00008  jr          $ra
label_261d94:
    if (ctx->pc == 0x261D94u) {
        ctx->pc = 0x261D94u;
            // 0x261d94: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x261D98u;
        goto label_261d98;
    }
    ctx->pc = 0x261D90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261D90u;
            // 0x261d94: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x261D98u;
label_261d98:
    // 0x261d98: 0x0  nop
    ctx->pc = 0x261d98u;
    // NOP
label_261d9c:
    // 0x261d9c: 0x0  nop
    ctx->pc = 0x261d9cu;
    // NOP
}
