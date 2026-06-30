#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00244350
// Address: 0x244350 - 0x245260
void sub_00244350_0x244350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244350_0x244350");
#endif

    switch (ctx->pc) {
        case 0x244350u: goto label_244350;
        case 0x244354u: goto label_244354;
        case 0x244358u: goto label_244358;
        case 0x24435cu: goto label_24435c;
        case 0x244360u: goto label_244360;
        case 0x244364u: goto label_244364;
        case 0x244368u: goto label_244368;
        case 0x24436cu: goto label_24436c;
        case 0x244370u: goto label_244370;
        case 0x244374u: goto label_244374;
        case 0x244378u: goto label_244378;
        case 0x24437cu: goto label_24437c;
        case 0x244380u: goto label_244380;
        case 0x244384u: goto label_244384;
        case 0x244388u: goto label_244388;
        case 0x24438cu: goto label_24438c;
        case 0x244390u: goto label_244390;
        case 0x244394u: goto label_244394;
        case 0x244398u: goto label_244398;
        case 0x24439cu: goto label_24439c;
        case 0x2443a0u: goto label_2443a0;
        case 0x2443a4u: goto label_2443a4;
        case 0x2443a8u: goto label_2443a8;
        case 0x2443acu: goto label_2443ac;
        case 0x2443b0u: goto label_2443b0;
        case 0x2443b4u: goto label_2443b4;
        case 0x2443b8u: goto label_2443b8;
        case 0x2443bcu: goto label_2443bc;
        case 0x2443c0u: goto label_2443c0;
        case 0x2443c4u: goto label_2443c4;
        case 0x2443c8u: goto label_2443c8;
        case 0x2443ccu: goto label_2443cc;
        case 0x2443d0u: goto label_2443d0;
        case 0x2443d4u: goto label_2443d4;
        case 0x2443d8u: goto label_2443d8;
        case 0x2443dcu: goto label_2443dc;
        case 0x2443e0u: goto label_2443e0;
        case 0x2443e4u: goto label_2443e4;
        case 0x2443e8u: goto label_2443e8;
        case 0x2443ecu: goto label_2443ec;
        case 0x2443f0u: goto label_2443f0;
        case 0x2443f4u: goto label_2443f4;
        case 0x2443f8u: goto label_2443f8;
        case 0x2443fcu: goto label_2443fc;
        case 0x244400u: goto label_244400;
        case 0x244404u: goto label_244404;
        case 0x244408u: goto label_244408;
        case 0x24440cu: goto label_24440c;
        case 0x244410u: goto label_244410;
        case 0x244414u: goto label_244414;
        case 0x244418u: goto label_244418;
        case 0x24441cu: goto label_24441c;
        case 0x244420u: goto label_244420;
        case 0x244424u: goto label_244424;
        case 0x244428u: goto label_244428;
        case 0x24442cu: goto label_24442c;
        case 0x244430u: goto label_244430;
        case 0x244434u: goto label_244434;
        case 0x244438u: goto label_244438;
        case 0x24443cu: goto label_24443c;
        case 0x244440u: goto label_244440;
        case 0x244444u: goto label_244444;
        case 0x244448u: goto label_244448;
        case 0x24444cu: goto label_24444c;
        case 0x244450u: goto label_244450;
        case 0x244454u: goto label_244454;
        case 0x244458u: goto label_244458;
        case 0x24445cu: goto label_24445c;
        case 0x244460u: goto label_244460;
        case 0x244464u: goto label_244464;
        case 0x244468u: goto label_244468;
        case 0x24446cu: goto label_24446c;
        case 0x244470u: goto label_244470;
        case 0x244474u: goto label_244474;
        case 0x244478u: goto label_244478;
        case 0x24447cu: goto label_24447c;
        case 0x244480u: goto label_244480;
        case 0x244484u: goto label_244484;
        case 0x244488u: goto label_244488;
        case 0x24448cu: goto label_24448c;
        case 0x244490u: goto label_244490;
        case 0x244494u: goto label_244494;
        case 0x244498u: goto label_244498;
        case 0x24449cu: goto label_24449c;
        case 0x2444a0u: goto label_2444a0;
        case 0x2444a4u: goto label_2444a4;
        case 0x2444a8u: goto label_2444a8;
        case 0x2444acu: goto label_2444ac;
        case 0x2444b0u: goto label_2444b0;
        case 0x2444b4u: goto label_2444b4;
        case 0x2444b8u: goto label_2444b8;
        case 0x2444bcu: goto label_2444bc;
        case 0x2444c0u: goto label_2444c0;
        case 0x2444c4u: goto label_2444c4;
        case 0x2444c8u: goto label_2444c8;
        case 0x2444ccu: goto label_2444cc;
        case 0x2444d0u: goto label_2444d0;
        case 0x2444d4u: goto label_2444d4;
        case 0x2444d8u: goto label_2444d8;
        case 0x2444dcu: goto label_2444dc;
        case 0x2444e0u: goto label_2444e0;
        case 0x2444e4u: goto label_2444e4;
        case 0x2444e8u: goto label_2444e8;
        case 0x2444ecu: goto label_2444ec;
        case 0x2444f0u: goto label_2444f0;
        case 0x2444f4u: goto label_2444f4;
        case 0x2444f8u: goto label_2444f8;
        case 0x2444fcu: goto label_2444fc;
        case 0x244500u: goto label_244500;
        case 0x244504u: goto label_244504;
        case 0x244508u: goto label_244508;
        case 0x24450cu: goto label_24450c;
        case 0x244510u: goto label_244510;
        case 0x244514u: goto label_244514;
        case 0x244518u: goto label_244518;
        case 0x24451cu: goto label_24451c;
        case 0x244520u: goto label_244520;
        case 0x244524u: goto label_244524;
        case 0x244528u: goto label_244528;
        case 0x24452cu: goto label_24452c;
        case 0x244530u: goto label_244530;
        case 0x244534u: goto label_244534;
        case 0x244538u: goto label_244538;
        case 0x24453cu: goto label_24453c;
        case 0x244540u: goto label_244540;
        case 0x244544u: goto label_244544;
        case 0x244548u: goto label_244548;
        case 0x24454cu: goto label_24454c;
        case 0x244550u: goto label_244550;
        case 0x244554u: goto label_244554;
        case 0x244558u: goto label_244558;
        case 0x24455cu: goto label_24455c;
        case 0x244560u: goto label_244560;
        case 0x244564u: goto label_244564;
        case 0x244568u: goto label_244568;
        case 0x24456cu: goto label_24456c;
        case 0x244570u: goto label_244570;
        case 0x244574u: goto label_244574;
        case 0x244578u: goto label_244578;
        case 0x24457cu: goto label_24457c;
        case 0x244580u: goto label_244580;
        case 0x244584u: goto label_244584;
        case 0x244588u: goto label_244588;
        case 0x24458cu: goto label_24458c;
        case 0x244590u: goto label_244590;
        case 0x244594u: goto label_244594;
        case 0x244598u: goto label_244598;
        case 0x24459cu: goto label_24459c;
        case 0x2445a0u: goto label_2445a0;
        case 0x2445a4u: goto label_2445a4;
        case 0x2445a8u: goto label_2445a8;
        case 0x2445acu: goto label_2445ac;
        case 0x2445b0u: goto label_2445b0;
        case 0x2445b4u: goto label_2445b4;
        case 0x2445b8u: goto label_2445b8;
        case 0x2445bcu: goto label_2445bc;
        case 0x2445c0u: goto label_2445c0;
        case 0x2445c4u: goto label_2445c4;
        case 0x2445c8u: goto label_2445c8;
        case 0x2445ccu: goto label_2445cc;
        case 0x2445d0u: goto label_2445d0;
        case 0x2445d4u: goto label_2445d4;
        case 0x2445d8u: goto label_2445d8;
        case 0x2445dcu: goto label_2445dc;
        case 0x2445e0u: goto label_2445e0;
        case 0x2445e4u: goto label_2445e4;
        case 0x2445e8u: goto label_2445e8;
        case 0x2445ecu: goto label_2445ec;
        case 0x2445f0u: goto label_2445f0;
        case 0x2445f4u: goto label_2445f4;
        case 0x2445f8u: goto label_2445f8;
        case 0x2445fcu: goto label_2445fc;
        case 0x244600u: goto label_244600;
        case 0x244604u: goto label_244604;
        case 0x244608u: goto label_244608;
        case 0x24460cu: goto label_24460c;
        case 0x244610u: goto label_244610;
        case 0x244614u: goto label_244614;
        case 0x244618u: goto label_244618;
        case 0x24461cu: goto label_24461c;
        case 0x244620u: goto label_244620;
        case 0x244624u: goto label_244624;
        case 0x244628u: goto label_244628;
        case 0x24462cu: goto label_24462c;
        case 0x244630u: goto label_244630;
        case 0x244634u: goto label_244634;
        case 0x244638u: goto label_244638;
        case 0x24463cu: goto label_24463c;
        case 0x244640u: goto label_244640;
        case 0x244644u: goto label_244644;
        case 0x244648u: goto label_244648;
        case 0x24464cu: goto label_24464c;
        case 0x244650u: goto label_244650;
        case 0x244654u: goto label_244654;
        case 0x244658u: goto label_244658;
        case 0x24465cu: goto label_24465c;
        case 0x244660u: goto label_244660;
        case 0x244664u: goto label_244664;
        case 0x244668u: goto label_244668;
        case 0x24466cu: goto label_24466c;
        case 0x244670u: goto label_244670;
        case 0x244674u: goto label_244674;
        case 0x244678u: goto label_244678;
        case 0x24467cu: goto label_24467c;
        case 0x244680u: goto label_244680;
        case 0x244684u: goto label_244684;
        case 0x244688u: goto label_244688;
        case 0x24468cu: goto label_24468c;
        case 0x244690u: goto label_244690;
        case 0x244694u: goto label_244694;
        case 0x244698u: goto label_244698;
        case 0x24469cu: goto label_24469c;
        case 0x2446a0u: goto label_2446a0;
        case 0x2446a4u: goto label_2446a4;
        case 0x2446a8u: goto label_2446a8;
        case 0x2446acu: goto label_2446ac;
        case 0x2446b0u: goto label_2446b0;
        case 0x2446b4u: goto label_2446b4;
        case 0x2446b8u: goto label_2446b8;
        case 0x2446bcu: goto label_2446bc;
        case 0x2446c0u: goto label_2446c0;
        case 0x2446c4u: goto label_2446c4;
        case 0x2446c8u: goto label_2446c8;
        case 0x2446ccu: goto label_2446cc;
        case 0x2446d0u: goto label_2446d0;
        case 0x2446d4u: goto label_2446d4;
        case 0x2446d8u: goto label_2446d8;
        case 0x2446dcu: goto label_2446dc;
        case 0x2446e0u: goto label_2446e0;
        case 0x2446e4u: goto label_2446e4;
        case 0x2446e8u: goto label_2446e8;
        case 0x2446ecu: goto label_2446ec;
        case 0x2446f0u: goto label_2446f0;
        case 0x2446f4u: goto label_2446f4;
        case 0x2446f8u: goto label_2446f8;
        case 0x2446fcu: goto label_2446fc;
        case 0x244700u: goto label_244700;
        case 0x244704u: goto label_244704;
        case 0x244708u: goto label_244708;
        case 0x24470cu: goto label_24470c;
        case 0x244710u: goto label_244710;
        case 0x244714u: goto label_244714;
        case 0x244718u: goto label_244718;
        case 0x24471cu: goto label_24471c;
        case 0x244720u: goto label_244720;
        case 0x244724u: goto label_244724;
        case 0x244728u: goto label_244728;
        case 0x24472cu: goto label_24472c;
        case 0x244730u: goto label_244730;
        case 0x244734u: goto label_244734;
        case 0x244738u: goto label_244738;
        case 0x24473cu: goto label_24473c;
        case 0x244740u: goto label_244740;
        case 0x244744u: goto label_244744;
        case 0x244748u: goto label_244748;
        case 0x24474cu: goto label_24474c;
        case 0x244750u: goto label_244750;
        case 0x244754u: goto label_244754;
        case 0x244758u: goto label_244758;
        case 0x24475cu: goto label_24475c;
        case 0x244760u: goto label_244760;
        case 0x244764u: goto label_244764;
        case 0x244768u: goto label_244768;
        case 0x24476cu: goto label_24476c;
        case 0x244770u: goto label_244770;
        case 0x244774u: goto label_244774;
        case 0x244778u: goto label_244778;
        case 0x24477cu: goto label_24477c;
        case 0x244780u: goto label_244780;
        case 0x244784u: goto label_244784;
        case 0x244788u: goto label_244788;
        case 0x24478cu: goto label_24478c;
        case 0x244790u: goto label_244790;
        case 0x244794u: goto label_244794;
        case 0x244798u: goto label_244798;
        case 0x24479cu: goto label_24479c;
        case 0x2447a0u: goto label_2447a0;
        case 0x2447a4u: goto label_2447a4;
        case 0x2447a8u: goto label_2447a8;
        case 0x2447acu: goto label_2447ac;
        case 0x2447b0u: goto label_2447b0;
        case 0x2447b4u: goto label_2447b4;
        case 0x2447b8u: goto label_2447b8;
        case 0x2447bcu: goto label_2447bc;
        case 0x2447c0u: goto label_2447c0;
        case 0x2447c4u: goto label_2447c4;
        case 0x2447c8u: goto label_2447c8;
        case 0x2447ccu: goto label_2447cc;
        case 0x2447d0u: goto label_2447d0;
        case 0x2447d4u: goto label_2447d4;
        case 0x2447d8u: goto label_2447d8;
        case 0x2447dcu: goto label_2447dc;
        case 0x2447e0u: goto label_2447e0;
        case 0x2447e4u: goto label_2447e4;
        case 0x2447e8u: goto label_2447e8;
        case 0x2447ecu: goto label_2447ec;
        case 0x2447f0u: goto label_2447f0;
        case 0x2447f4u: goto label_2447f4;
        case 0x2447f8u: goto label_2447f8;
        case 0x2447fcu: goto label_2447fc;
        case 0x244800u: goto label_244800;
        case 0x244804u: goto label_244804;
        case 0x244808u: goto label_244808;
        case 0x24480cu: goto label_24480c;
        case 0x244810u: goto label_244810;
        case 0x244814u: goto label_244814;
        case 0x244818u: goto label_244818;
        case 0x24481cu: goto label_24481c;
        case 0x244820u: goto label_244820;
        case 0x244824u: goto label_244824;
        case 0x244828u: goto label_244828;
        case 0x24482cu: goto label_24482c;
        case 0x244830u: goto label_244830;
        case 0x244834u: goto label_244834;
        case 0x244838u: goto label_244838;
        case 0x24483cu: goto label_24483c;
        case 0x244840u: goto label_244840;
        case 0x244844u: goto label_244844;
        case 0x244848u: goto label_244848;
        case 0x24484cu: goto label_24484c;
        case 0x244850u: goto label_244850;
        case 0x244854u: goto label_244854;
        case 0x244858u: goto label_244858;
        case 0x24485cu: goto label_24485c;
        case 0x244860u: goto label_244860;
        case 0x244864u: goto label_244864;
        case 0x244868u: goto label_244868;
        case 0x24486cu: goto label_24486c;
        case 0x244870u: goto label_244870;
        case 0x244874u: goto label_244874;
        case 0x244878u: goto label_244878;
        case 0x24487cu: goto label_24487c;
        case 0x244880u: goto label_244880;
        case 0x244884u: goto label_244884;
        case 0x244888u: goto label_244888;
        case 0x24488cu: goto label_24488c;
        case 0x244890u: goto label_244890;
        case 0x244894u: goto label_244894;
        case 0x244898u: goto label_244898;
        case 0x24489cu: goto label_24489c;
        case 0x2448a0u: goto label_2448a0;
        case 0x2448a4u: goto label_2448a4;
        case 0x2448a8u: goto label_2448a8;
        case 0x2448acu: goto label_2448ac;
        case 0x2448b0u: goto label_2448b0;
        case 0x2448b4u: goto label_2448b4;
        case 0x2448b8u: goto label_2448b8;
        case 0x2448bcu: goto label_2448bc;
        case 0x2448c0u: goto label_2448c0;
        case 0x2448c4u: goto label_2448c4;
        case 0x2448c8u: goto label_2448c8;
        case 0x2448ccu: goto label_2448cc;
        case 0x2448d0u: goto label_2448d0;
        case 0x2448d4u: goto label_2448d4;
        case 0x2448d8u: goto label_2448d8;
        case 0x2448dcu: goto label_2448dc;
        case 0x2448e0u: goto label_2448e0;
        case 0x2448e4u: goto label_2448e4;
        case 0x2448e8u: goto label_2448e8;
        case 0x2448ecu: goto label_2448ec;
        case 0x2448f0u: goto label_2448f0;
        case 0x2448f4u: goto label_2448f4;
        case 0x2448f8u: goto label_2448f8;
        case 0x2448fcu: goto label_2448fc;
        case 0x244900u: goto label_244900;
        case 0x244904u: goto label_244904;
        case 0x244908u: goto label_244908;
        case 0x24490cu: goto label_24490c;
        case 0x244910u: goto label_244910;
        case 0x244914u: goto label_244914;
        case 0x244918u: goto label_244918;
        case 0x24491cu: goto label_24491c;
        case 0x244920u: goto label_244920;
        case 0x244924u: goto label_244924;
        case 0x244928u: goto label_244928;
        case 0x24492cu: goto label_24492c;
        case 0x244930u: goto label_244930;
        case 0x244934u: goto label_244934;
        case 0x244938u: goto label_244938;
        case 0x24493cu: goto label_24493c;
        case 0x244940u: goto label_244940;
        case 0x244944u: goto label_244944;
        case 0x244948u: goto label_244948;
        case 0x24494cu: goto label_24494c;
        case 0x244950u: goto label_244950;
        case 0x244954u: goto label_244954;
        case 0x244958u: goto label_244958;
        case 0x24495cu: goto label_24495c;
        case 0x244960u: goto label_244960;
        case 0x244964u: goto label_244964;
        case 0x244968u: goto label_244968;
        case 0x24496cu: goto label_24496c;
        case 0x244970u: goto label_244970;
        case 0x244974u: goto label_244974;
        case 0x244978u: goto label_244978;
        case 0x24497cu: goto label_24497c;
        case 0x244980u: goto label_244980;
        case 0x244984u: goto label_244984;
        case 0x244988u: goto label_244988;
        case 0x24498cu: goto label_24498c;
        case 0x244990u: goto label_244990;
        case 0x244994u: goto label_244994;
        case 0x244998u: goto label_244998;
        case 0x24499cu: goto label_24499c;
        case 0x2449a0u: goto label_2449a0;
        case 0x2449a4u: goto label_2449a4;
        case 0x2449a8u: goto label_2449a8;
        case 0x2449acu: goto label_2449ac;
        case 0x2449b0u: goto label_2449b0;
        case 0x2449b4u: goto label_2449b4;
        case 0x2449b8u: goto label_2449b8;
        case 0x2449bcu: goto label_2449bc;
        case 0x2449c0u: goto label_2449c0;
        case 0x2449c4u: goto label_2449c4;
        case 0x2449c8u: goto label_2449c8;
        case 0x2449ccu: goto label_2449cc;
        case 0x2449d0u: goto label_2449d0;
        case 0x2449d4u: goto label_2449d4;
        case 0x2449d8u: goto label_2449d8;
        case 0x2449dcu: goto label_2449dc;
        case 0x2449e0u: goto label_2449e0;
        case 0x2449e4u: goto label_2449e4;
        case 0x2449e8u: goto label_2449e8;
        case 0x2449ecu: goto label_2449ec;
        case 0x2449f0u: goto label_2449f0;
        case 0x2449f4u: goto label_2449f4;
        case 0x2449f8u: goto label_2449f8;
        case 0x2449fcu: goto label_2449fc;
        case 0x244a00u: goto label_244a00;
        case 0x244a04u: goto label_244a04;
        case 0x244a08u: goto label_244a08;
        case 0x244a0cu: goto label_244a0c;
        case 0x244a10u: goto label_244a10;
        case 0x244a14u: goto label_244a14;
        case 0x244a18u: goto label_244a18;
        case 0x244a1cu: goto label_244a1c;
        case 0x244a20u: goto label_244a20;
        case 0x244a24u: goto label_244a24;
        case 0x244a28u: goto label_244a28;
        case 0x244a2cu: goto label_244a2c;
        case 0x244a30u: goto label_244a30;
        case 0x244a34u: goto label_244a34;
        case 0x244a38u: goto label_244a38;
        case 0x244a3cu: goto label_244a3c;
        case 0x244a40u: goto label_244a40;
        case 0x244a44u: goto label_244a44;
        case 0x244a48u: goto label_244a48;
        case 0x244a4cu: goto label_244a4c;
        case 0x244a50u: goto label_244a50;
        case 0x244a54u: goto label_244a54;
        case 0x244a58u: goto label_244a58;
        case 0x244a5cu: goto label_244a5c;
        case 0x244a60u: goto label_244a60;
        case 0x244a64u: goto label_244a64;
        case 0x244a68u: goto label_244a68;
        case 0x244a6cu: goto label_244a6c;
        case 0x244a70u: goto label_244a70;
        case 0x244a74u: goto label_244a74;
        case 0x244a78u: goto label_244a78;
        case 0x244a7cu: goto label_244a7c;
        case 0x244a80u: goto label_244a80;
        case 0x244a84u: goto label_244a84;
        case 0x244a88u: goto label_244a88;
        case 0x244a8cu: goto label_244a8c;
        case 0x244a90u: goto label_244a90;
        case 0x244a94u: goto label_244a94;
        case 0x244a98u: goto label_244a98;
        case 0x244a9cu: goto label_244a9c;
        case 0x244aa0u: goto label_244aa0;
        case 0x244aa4u: goto label_244aa4;
        case 0x244aa8u: goto label_244aa8;
        case 0x244aacu: goto label_244aac;
        case 0x244ab0u: goto label_244ab0;
        case 0x244ab4u: goto label_244ab4;
        case 0x244ab8u: goto label_244ab8;
        case 0x244abcu: goto label_244abc;
        case 0x244ac0u: goto label_244ac0;
        case 0x244ac4u: goto label_244ac4;
        case 0x244ac8u: goto label_244ac8;
        case 0x244accu: goto label_244acc;
        case 0x244ad0u: goto label_244ad0;
        case 0x244ad4u: goto label_244ad4;
        case 0x244ad8u: goto label_244ad8;
        case 0x244adcu: goto label_244adc;
        case 0x244ae0u: goto label_244ae0;
        case 0x244ae4u: goto label_244ae4;
        case 0x244ae8u: goto label_244ae8;
        case 0x244aecu: goto label_244aec;
        case 0x244af0u: goto label_244af0;
        case 0x244af4u: goto label_244af4;
        case 0x244af8u: goto label_244af8;
        case 0x244afcu: goto label_244afc;
        case 0x244b00u: goto label_244b00;
        case 0x244b04u: goto label_244b04;
        case 0x244b08u: goto label_244b08;
        case 0x244b0cu: goto label_244b0c;
        case 0x244b10u: goto label_244b10;
        case 0x244b14u: goto label_244b14;
        case 0x244b18u: goto label_244b18;
        case 0x244b1cu: goto label_244b1c;
        case 0x244b20u: goto label_244b20;
        case 0x244b24u: goto label_244b24;
        case 0x244b28u: goto label_244b28;
        case 0x244b2cu: goto label_244b2c;
        case 0x244b30u: goto label_244b30;
        case 0x244b34u: goto label_244b34;
        case 0x244b38u: goto label_244b38;
        case 0x244b3cu: goto label_244b3c;
        case 0x244b40u: goto label_244b40;
        case 0x244b44u: goto label_244b44;
        case 0x244b48u: goto label_244b48;
        case 0x244b4cu: goto label_244b4c;
        case 0x244b50u: goto label_244b50;
        case 0x244b54u: goto label_244b54;
        case 0x244b58u: goto label_244b58;
        case 0x244b5cu: goto label_244b5c;
        case 0x244b60u: goto label_244b60;
        case 0x244b64u: goto label_244b64;
        case 0x244b68u: goto label_244b68;
        case 0x244b6cu: goto label_244b6c;
        case 0x244b70u: goto label_244b70;
        case 0x244b74u: goto label_244b74;
        case 0x244b78u: goto label_244b78;
        case 0x244b7cu: goto label_244b7c;
        case 0x244b80u: goto label_244b80;
        case 0x244b84u: goto label_244b84;
        case 0x244b88u: goto label_244b88;
        case 0x244b8cu: goto label_244b8c;
        case 0x244b90u: goto label_244b90;
        case 0x244b94u: goto label_244b94;
        case 0x244b98u: goto label_244b98;
        case 0x244b9cu: goto label_244b9c;
        case 0x244ba0u: goto label_244ba0;
        case 0x244ba4u: goto label_244ba4;
        case 0x244ba8u: goto label_244ba8;
        case 0x244bacu: goto label_244bac;
        case 0x244bb0u: goto label_244bb0;
        case 0x244bb4u: goto label_244bb4;
        case 0x244bb8u: goto label_244bb8;
        case 0x244bbcu: goto label_244bbc;
        case 0x244bc0u: goto label_244bc0;
        case 0x244bc4u: goto label_244bc4;
        case 0x244bc8u: goto label_244bc8;
        case 0x244bccu: goto label_244bcc;
        case 0x244bd0u: goto label_244bd0;
        case 0x244bd4u: goto label_244bd4;
        case 0x244bd8u: goto label_244bd8;
        case 0x244bdcu: goto label_244bdc;
        case 0x244be0u: goto label_244be0;
        case 0x244be4u: goto label_244be4;
        case 0x244be8u: goto label_244be8;
        case 0x244becu: goto label_244bec;
        case 0x244bf0u: goto label_244bf0;
        case 0x244bf4u: goto label_244bf4;
        case 0x244bf8u: goto label_244bf8;
        case 0x244bfcu: goto label_244bfc;
        case 0x244c00u: goto label_244c00;
        case 0x244c04u: goto label_244c04;
        case 0x244c08u: goto label_244c08;
        case 0x244c0cu: goto label_244c0c;
        case 0x244c10u: goto label_244c10;
        case 0x244c14u: goto label_244c14;
        case 0x244c18u: goto label_244c18;
        case 0x244c1cu: goto label_244c1c;
        case 0x244c20u: goto label_244c20;
        case 0x244c24u: goto label_244c24;
        case 0x244c28u: goto label_244c28;
        case 0x244c2cu: goto label_244c2c;
        case 0x244c30u: goto label_244c30;
        case 0x244c34u: goto label_244c34;
        case 0x244c38u: goto label_244c38;
        case 0x244c3cu: goto label_244c3c;
        case 0x244c40u: goto label_244c40;
        case 0x244c44u: goto label_244c44;
        case 0x244c48u: goto label_244c48;
        case 0x244c4cu: goto label_244c4c;
        case 0x244c50u: goto label_244c50;
        case 0x244c54u: goto label_244c54;
        case 0x244c58u: goto label_244c58;
        case 0x244c5cu: goto label_244c5c;
        case 0x244c60u: goto label_244c60;
        case 0x244c64u: goto label_244c64;
        case 0x244c68u: goto label_244c68;
        case 0x244c6cu: goto label_244c6c;
        case 0x244c70u: goto label_244c70;
        case 0x244c74u: goto label_244c74;
        case 0x244c78u: goto label_244c78;
        case 0x244c7cu: goto label_244c7c;
        case 0x244c80u: goto label_244c80;
        case 0x244c84u: goto label_244c84;
        case 0x244c88u: goto label_244c88;
        case 0x244c8cu: goto label_244c8c;
        case 0x244c90u: goto label_244c90;
        case 0x244c94u: goto label_244c94;
        case 0x244c98u: goto label_244c98;
        case 0x244c9cu: goto label_244c9c;
        case 0x244ca0u: goto label_244ca0;
        case 0x244ca4u: goto label_244ca4;
        case 0x244ca8u: goto label_244ca8;
        case 0x244cacu: goto label_244cac;
        case 0x244cb0u: goto label_244cb0;
        case 0x244cb4u: goto label_244cb4;
        case 0x244cb8u: goto label_244cb8;
        case 0x244cbcu: goto label_244cbc;
        case 0x244cc0u: goto label_244cc0;
        case 0x244cc4u: goto label_244cc4;
        case 0x244cc8u: goto label_244cc8;
        case 0x244cccu: goto label_244ccc;
        case 0x244cd0u: goto label_244cd0;
        case 0x244cd4u: goto label_244cd4;
        case 0x244cd8u: goto label_244cd8;
        case 0x244cdcu: goto label_244cdc;
        case 0x244ce0u: goto label_244ce0;
        case 0x244ce4u: goto label_244ce4;
        case 0x244ce8u: goto label_244ce8;
        case 0x244cecu: goto label_244cec;
        case 0x244cf0u: goto label_244cf0;
        case 0x244cf4u: goto label_244cf4;
        case 0x244cf8u: goto label_244cf8;
        case 0x244cfcu: goto label_244cfc;
        case 0x244d00u: goto label_244d00;
        case 0x244d04u: goto label_244d04;
        case 0x244d08u: goto label_244d08;
        case 0x244d0cu: goto label_244d0c;
        case 0x244d10u: goto label_244d10;
        case 0x244d14u: goto label_244d14;
        case 0x244d18u: goto label_244d18;
        case 0x244d1cu: goto label_244d1c;
        case 0x244d20u: goto label_244d20;
        case 0x244d24u: goto label_244d24;
        case 0x244d28u: goto label_244d28;
        case 0x244d2cu: goto label_244d2c;
        case 0x244d30u: goto label_244d30;
        case 0x244d34u: goto label_244d34;
        case 0x244d38u: goto label_244d38;
        case 0x244d3cu: goto label_244d3c;
        case 0x244d40u: goto label_244d40;
        case 0x244d44u: goto label_244d44;
        case 0x244d48u: goto label_244d48;
        case 0x244d4cu: goto label_244d4c;
        case 0x244d50u: goto label_244d50;
        case 0x244d54u: goto label_244d54;
        case 0x244d58u: goto label_244d58;
        case 0x244d5cu: goto label_244d5c;
        case 0x244d60u: goto label_244d60;
        case 0x244d64u: goto label_244d64;
        case 0x244d68u: goto label_244d68;
        case 0x244d6cu: goto label_244d6c;
        case 0x244d70u: goto label_244d70;
        case 0x244d74u: goto label_244d74;
        case 0x244d78u: goto label_244d78;
        case 0x244d7cu: goto label_244d7c;
        case 0x244d80u: goto label_244d80;
        case 0x244d84u: goto label_244d84;
        case 0x244d88u: goto label_244d88;
        case 0x244d8cu: goto label_244d8c;
        case 0x244d90u: goto label_244d90;
        case 0x244d94u: goto label_244d94;
        case 0x244d98u: goto label_244d98;
        case 0x244d9cu: goto label_244d9c;
        case 0x244da0u: goto label_244da0;
        case 0x244da4u: goto label_244da4;
        case 0x244da8u: goto label_244da8;
        case 0x244dacu: goto label_244dac;
        case 0x244db0u: goto label_244db0;
        case 0x244db4u: goto label_244db4;
        case 0x244db8u: goto label_244db8;
        case 0x244dbcu: goto label_244dbc;
        case 0x244dc0u: goto label_244dc0;
        case 0x244dc4u: goto label_244dc4;
        case 0x244dc8u: goto label_244dc8;
        case 0x244dccu: goto label_244dcc;
        case 0x244dd0u: goto label_244dd0;
        case 0x244dd4u: goto label_244dd4;
        case 0x244dd8u: goto label_244dd8;
        case 0x244ddcu: goto label_244ddc;
        case 0x244de0u: goto label_244de0;
        case 0x244de4u: goto label_244de4;
        case 0x244de8u: goto label_244de8;
        case 0x244decu: goto label_244dec;
        case 0x244df0u: goto label_244df0;
        case 0x244df4u: goto label_244df4;
        case 0x244df8u: goto label_244df8;
        case 0x244dfcu: goto label_244dfc;
        case 0x244e00u: goto label_244e00;
        case 0x244e04u: goto label_244e04;
        case 0x244e08u: goto label_244e08;
        case 0x244e0cu: goto label_244e0c;
        case 0x244e10u: goto label_244e10;
        case 0x244e14u: goto label_244e14;
        case 0x244e18u: goto label_244e18;
        case 0x244e1cu: goto label_244e1c;
        case 0x244e20u: goto label_244e20;
        case 0x244e24u: goto label_244e24;
        case 0x244e28u: goto label_244e28;
        case 0x244e2cu: goto label_244e2c;
        case 0x244e30u: goto label_244e30;
        case 0x244e34u: goto label_244e34;
        case 0x244e38u: goto label_244e38;
        case 0x244e3cu: goto label_244e3c;
        case 0x244e40u: goto label_244e40;
        case 0x244e44u: goto label_244e44;
        case 0x244e48u: goto label_244e48;
        case 0x244e4cu: goto label_244e4c;
        case 0x244e50u: goto label_244e50;
        case 0x244e54u: goto label_244e54;
        case 0x244e58u: goto label_244e58;
        case 0x244e5cu: goto label_244e5c;
        case 0x244e60u: goto label_244e60;
        case 0x244e64u: goto label_244e64;
        case 0x244e68u: goto label_244e68;
        case 0x244e6cu: goto label_244e6c;
        case 0x244e70u: goto label_244e70;
        case 0x244e74u: goto label_244e74;
        case 0x244e78u: goto label_244e78;
        case 0x244e7cu: goto label_244e7c;
        case 0x244e80u: goto label_244e80;
        case 0x244e84u: goto label_244e84;
        case 0x244e88u: goto label_244e88;
        case 0x244e8cu: goto label_244e8c;
        case 0x244e90u: goto label_244e90;
        case 0x244e94u: goto label_244e94;
        case 0x244e98u: goto label_244e98;
        case 0x244e9cu: goto label_244e9c;
        case 0x244ea0u: goto label_244ea0;
        case 0x244ea4u: goto label_244ea4;
        case 0x244ea8u: goto label_244ea8;
        case 0x244eacu: goto label_244eac;
        case 0x244eb0u: goto label_244eb0;
        case 0x244eb4u: goto label_244eb4;
        case 0x244eb8u: goto label_244eb8;
        case 0x244ebcu: goto label_244ebc;
        case 0x244ec0u: goto label_244ec0;
        case 0x244ec4u: goto label_244ec4;
        case 0x244ec8u: goto label_244ec8;
        case 0x244eccu: goto label_244ecc;
        case 0x244ed0u: goto label_244ed0;
        case 0x244ed4u: goto label_244ed4;
        case 0x244ed8u: goto label_244ed8;
        case 0x244edcu: goto label_244edc;
        case 0x244ee0u: goto label_244ee0;
        case 0x244ee4u: goto label_244ee4;
        case 0x244ee8u: goto label_244ee8;
        case 0x244eecu: goto label_244eec;
        case 0x244ef0u: goto label_244ef0;
        case 0x244ef4u: goto label_244ef4;
        case 0x244ef8u: goto label_244ef8;
        case 0x244efcu: goto label_244efc;
        case 0x244f00u: goto label_244f00;
        case 0x244f04u: goto label_244f04;
        case 0x244f08u: goto label_244f08;
        case 0x244f0cu: goto label_244f0c;
        case 0x244f10u: goto label_244f10;
        case 0x244f14u: goto label_244f14;
        case 0x244f18u: goto label_244f18;
        case 0x244f1cu: goto label_244f1c;
        case 0x244f20u: goto label_244f20;
        case 0x244f24u: goto label_244f24;
        case 0x244f28u: goto label_244f28;
        case 0x244f2cu: goto label_244f2c;
        case 0x244f30u: goto label_244f30;
        case 0x244f34u: goto label_244f34;
        case 0x244f38u: goto label_244f38;
        case 0x244f3cu: goto label_244f3c;
        case 0x244f40u: goto label_244f40;
        case 0x244f44u: goto label_244f44;
        case 0x244f48u: goto label_244f48;
        case 0x244f4cu: goto label_244f4c;
        case 0x244f50u: goto label_244f50;
        case 0x244f54u: goto label_244f54;
        case 0x244f58u: goto label_244f58;
        case 0x244f5cu: goto label_244f5c;
        case 0x244f60u: goto label_244f60;
        case 0x244f64u: goto label_244f64;
        case 0x244f68u: goto label_244f68;
        case 0x244f6cu: goto label_244f6c;
        case 0x244f70u: goto label_244f70;
        case 0x244f74u: goto label_244f74;
        case 0x244f78u: goto label_244f78;
        case 0x244f7cu: goto label_244f7c;
        case 0x244f80u: goto label_244f80;
        case 0x244f84u: goto label_244f84;
        case 0x244f88u: goto label_244f88;
        case 0x244f8cu: goto label_244f8c;
        case 0x244f90u: goto label_244f90;
        case 0x244f94u: goto label_244f94;
        case 0x244f98u: goto label_244f98;
        case 0x244f9cu: goto label_244f9c;
        case 0x244fa0u: goto label_244fa0;
        case 0x244fa4u: goto label_244fa4;
        case 0x244fa8u: goto label_244fa8;
        case 0x244facu: goto label_244fac;
        case 0x244fb0u: goto label_244fb0;
        case 0x244fb4u: goto label_244fb4;
        case 0x244fb8u: goto label_244fb8;
        case 0x244fbcu: goto label_244fbc;
        case 0x244fc0u: goto label_244fc0;
        case 0x244fc4u: goto label_244fc4;
        case 0x244fc8u: goto label_244fc8;
        case 0x244fccu: goto label_244fcc;
        case 0x244fd0u: goto label_244fd0;
        case 0x244fd4u: goto label_244fd4;
        case 0x244fd8u: goto label_244fd8;
        case 0x244fdcu: goto label_244fdc;
        case 0x244fe0u: goto label_244fe0;
        case 0x244fe4u: goto label_244fe4;
        case 0x244fe8u: goto label_244fe8;
        case 0x244fecu: goto label_244fec;
        case 0x244ff0u: goto label_244ff0;
        case 0x244ff4u: goto label_244ff4;
        case 0x244ff8u: goto label_244ff8;
        case 0x244ffcu: goto label_244ffc;
        case 0x245000u: goto label_245000;
        case 0x245004u: goto label_245004;
        case 0x245008u: goto label_245008;
        case 0x24500cu: goto label_24500c;
        case 0x245010u: goto label_245010;
        case 0x245014u: goto label_245014;
        case 0x245018u: goto label_245018;
        case 0x24501cu: goto label_24501c;
        case 0x245020u: goto label_245020;
        case 0x245024u: goto label_245024;
        case 0x245028u: goto label_245028;
        case 0x24502cu: goto label_24502c;
        case 0x245030u: goto label_245030;
        case 0x245034u: goto label_245034;
        case 0x245038u: goto label_245038;
        case 0x24503cu: goto label_24503c;
        case 0x245040u: goto label_245040;
        case 0x245044u: goto label_245044;
        case 0x245048u: goto label_245048;
        case 0x24504cu: goto label_24504c;
        case 0x245050u: goto label_245050;
        case 0x245054u: goto label_245054;
        case 0x245058u: goto label_245058;
        case 0x24505cu: goto label_24505c;
        case 0x245060u: goto label_245060;
        case 0x245064u: goto label_245064;
        case 0x245068u: goto label_245068;
        case 0x24506cu: goto label_24506c;
        case 0x245070u: goto label_245070;
        case 0x245074u: goto label_245074;
        case 0x245078u: goto label_245078;
        case 0x24507cu: goto label_24507c;
        case 0x245080u: goto label_245080;
        case 0x245084u: goto label_245084;
        case 0x245088u: goto label_245088;
        case 0x24508cu: goto label_24508c;
        case 0x245090u: goto label_245090;
        case 0x245094u: goto label_245094;
        case 0x245098u: goto label_245098;
        case 0x24509cu: goto label_24509c;
        case 0x2450a0u: goto label_2450a0;
        case 0x2450a4u: goto label_2450a4;
        case 0x2450a8u: goto label_2450a8;
        case 0x2450acu: goto label_2450ac;
        case 0x2450b0u: goto label_2450b0;
        case 0x2450b4u: goto label_2450b4;
        case 0x2450b8u: goto label_2450b8;
        case 0x2450bcu: goto label_2450bc;
        case 0x2450c0u: goto label_2450c0;
        case 0x2450c4u: goto label_2450c4;
        case 0x2450c8u: goto label_2450c8;
        case 0x2450ccu: goto label_2450cc;
        case 0x2450d0u: goto label_2450d0;
        case 0x2450d4u: goto label_2450d4;
        case 0x2450d8u: goto label_2450d8;
        case 0x2450dcu: goto label_2450dc;
        case 0x2450e0u: goto label_2450e0;
        case 0x2450e4u: goto label_2450e4;
        case 0x2450e8u: goto label_2450e8;
        case 0x2450ecu: goto label_2450ec;
        case 0x2450f0u: goto label_2450f0;
        case 0x2450f4u: goto label_2450f4;
        case 0x2450f8u: goto label_2450f8;
        case 0x2450fcu: goto label_2450fc;
        case 0x245100u: goto label_245100;
        case 0x245104u: goto label_245104;
        case 0x245108u: goto label_245108;
        case 0x24510cu: goto label_24510c;
        case 0x245110u: goto label_245110;
        case 0x245114u: goto label_245114;
        case 0x245118u: goto label_245118;
        case 0x24511cu: goto label_24511c;
        case 0x245120u: goto label_245120;
        case 0x245124u: goto label_245124;
        case 0x245128u: goto label_245128;
        case 0x24512cu: goto label_24512c;
        case 0x245130u: goto label_245130;
        case 0x245134u: goto label_245134;
        case 0x245138u: goto label_245138;
        case 0x24513cu: goto label_24513c;
        case 0x245140u: goto label_245140;
        case 0x245144u: goto label_245144;
        case 0x245148u: goto label_245148;
        case 0x24514cu: goto label_24514c;
        case 0x245150u: goto label_245150;
        case 0x245154u: goto label_245154;
        case 0x245158u: goto label_245158;
        case 0x24515cu: goto label_24515c;
        case 0x245160u: goto label_245160;
        case 0x245164u: goto label_245164;
        case 0x245168u: goto label_245168;
        case 0x24516cu: goto label_24516c;
        case 0x245170u: goto label_245170;
        case 0x245174u: goto label_245174;
        case 0x245178u: goto label_245178;
        case 0x24517cu: goto label_24517c;
        case 0x245180u: goto label_245180;
        case 0x245184u: goto label_245184;
        case 0x245188u: goto label_245188;
        case 0x24518cu: goto label_24518c;
        case 0x245190u: goto label_245190;
        case 0x245194u: goto label_245194;
        case 0x245198u: goto label_245198;
        case 0x24519cu: goto label_24519c;
        case 0x2451a0u: goto label_2451a0;
        case 0x2451a4u: goto label_2451a4;
        case 0x2451a8u: goto label_2451a8;
        case 0x2451acu: goto label_2451ac;
        case 0x2451b0u: goto label_2451b0;
        case 0x2451b4u: goto label_2451b4;
        case 0x2451b8u: goto label_2451b8;
        case 0x2451bcu: goto label_2451bc;
        case 0x2451c0u: goto label_2451c0;
        case 0x2451c4u: goto label_2451c4;
        case 0x2451c8u: goto label_2451c8;
        case 0x2451ccu: goto label_2451cc;
        case 0x2451d0u: goto label_2451d0;
        case 0x2451d4u: goto label_2451d4;
        case 0x2451d8u: goto label_2451d8;
        case 0x2451dcu: goto label_2451dc;
        case 0x2451e0u: goto label_2451e0;
        case 0x2451e4u: goto label_2451e4;
        case 0x2451e8u: goto label_2451e8;
        case 0x2451ecu: goto label_2451ec;
        case 0x2451f0u: goto label_2451f0;
        case 0x2451f4u: goto label_2451f4;
        case 0x2451f8u: goto label_2451f8;
        case 0x2451fcu: goto label_2451fc;
        case 0x245200u: goto label_245200;
        case 0x245204u: goto label_245204;
        case 0x245208u: goto label_245208;
        case 0x24520cu: goto label_24520c;
        case 0x245210u: goto label_245210;
        case 0x245214u: goto label_245214;
        case 0x245218u: goto label_245218;
        case 0x24521cu: goto label_24521c;
        case 0x245220u: goto label_245220;
        case 0x245224u: goto label_245224;
        case 0x245228u: goto label_245228;
        case 0x24522cu: goto label_24522c;
        case 0x245230u: goto label_245230;
        case 0x245234u: goto label_245234;
        case 0x245238u: goto label_245238;
        case 0x24523cu: goto label_24523c;
        case 0x245240u: goto label_245240;
        case 0x245244u: goto label_245244;
        case 0x245248u: goto label_245248;
        case 0x24524cu: goto label_24524c;
        case 0x245250u: goto label_245250;
        case 0x245254u: goto label_245254;
        case 0x245258u: goto label_245258;
        case 0x24525cu: goto label_24525c;
        default: break;
    }

    ctx->pc = 0x244350u;

label_244350:
    // 0x244350: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x244350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_244354:
    // 0x244354: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x244354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_244358:
    // 0x244358: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x244358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_24435c:
    // 0x24435c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24435cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_244360:
    // 0x244360: 0xa3a0004c  sb          $zero, 0x4C($sp)
    ctx->pc = 0x244360u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 0));
label_244364:
    // 0x244364: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x244364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_244368:
    // 0x244368: 0xa3a0004d  sb          $zero, 0x4D($sp)
    ctx->pc = 0x244368u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 77), (uint8_t)GPR_U32(ctx, 0));
label_24436c:
    // 0x24436c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x24436cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_244370:
    // 0x244370: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x244370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_244374:
    // 0x244374: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x244374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_244378:
    // 0x244378: 0xc0910b0  jal         func_2442C0
label_24437c:
    if (ctx->pc == 0x24437Cu) {
        ctx->pc = 0x24437Cu;
            // 0x24437c: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        ctx->pc = 0x244380u;
        goto label_244380;
    }
    ctx->pc = 0x244378u;
    SET_GPR_U32(ctx, 31, 0x244380u);
    ctx->pc = 0x24437Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244378u;
            // 0x24437c: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2442C0u;
    if (runtime->hasFunction(0x2442C0u)) {
        auto targetFn = runtime->lookupFunction(0x2442C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244380u; }
        if (ctx->pc != 0x244380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002442C0_0x2442c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244380u; }
        if (ctx->pc != 0x244380u) { return; }
    }
    ctx->pc = 0x244380u;
label_244380:
    // 0x244380: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x244380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_244384:
    // 0x244384: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x244384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_244388:
    // 0x244388: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x244388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24438c:
    // 0x24438c: 0xc07ffd4  jal         func_1FFF50
label_244390:
    if (ctx->pc == 0x244390u) {
        ctx->pc = 0x244390u;
            // 0x244390: 0x24070013  addiu       $a3, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x244394u;
        goto label_244394;
    }
    ctx->pc = 0x24438Cu;
    SET_GPR_U32(ctx, 31, 0x244394u);
    ctx->pc = 0x244390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24438Cu;
            // 0x244390: 0x24070013  addiu       $a3, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFF50u;
    if (runtime->hasFunction(0x1FFF50u)) {
        auto targetFn = runtime->lookupFunction(0x1FFF50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244394u; }
        if (ctx->pc != 0x244394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FFF50_0x1fff50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244394u; }
        if (ctx->pc != 0x244394u) { return; }
    }
    ctx->pc = 0x244394u;
label_244394:
    // 0x244394: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x244394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_244398:
    // 0x244398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x244398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24439c:
    // 0x24439c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x24439cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2443a0:
    // 0x2443a0: 0xc07ffd4  jal         func_1FFF50
label_2443a4:
    if (ctx->pc == 0x2443A4u) {
        ctx->pc = 0x2443A4u;
            // 0x2443a4: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2443A8u;
        goto label_2443a8;
    }
    ctx->pc = 0x2443A0u;
    SET_GPR_U32(ctx, 31, 0x2443A8u);
    ctx->pc = 0x2443A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2443A0u;
            // 0x2443a4: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFF50u;
    if (runtime->hasFunction(0x1FFF50u)) {
        auto targetFn = runtime->lookupFunction(0x1FFF50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2443A8u; }
        if (ctx->pc != 0x2443A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FFF50_0x1fff50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2443A8u; }
        if (ctx->pc != 0x2443A8u) { return; }
    }
    ctx->pc = 0x2443A8u;
label_2443a8:
    // 0x2443a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2443a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2443ac:
    // 0x2443ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2443acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2443b0:
    // 0x2443b0: 0x3e00008  jr          $ra
label_2443b4:
    if (ctx->pc == 0x2443B4u) {
        ctx->pc = 0x2443B4u;
            // 0x2443b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2443B8u;
        goto label_2443b8;
    }
    ctx->pc = 0x2443B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2443B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2443B0u;
            // 0x2443b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2443B8u;
label_2443b8:
    // 0x2443b8: 0x0  nop
    ctx->pc = 0x2443b8u;
    // NOP
label_2443bc:
    // 0x2443bc: 0x0  nop
    ctx->pc = 0x2443bcu;
    // NOP
label_2443c0:
    // 0x2443c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2443c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2443c4:
    // 0x2443c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2443c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2443c8:
    // 0x2443c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2443c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2443cc:
    // 0x2443cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2443ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2443d0:
    // 0x2443d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2443d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2443d4:
    // 0x2443d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2443d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2443d8:
    // 0x2443d8: 0xa0a20006  sb          $v0, 0x6($a1)
    ctx->pc = 0x2443d8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 2));
label_2443dc:
    // 0x2443dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2443dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2443e0:
    // 0x2443e0: 0xa0a00007  sb          $zero, 0x7($a1)
    ctx->pc = 0x2443e0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 0));
label_2443e4:
    // 0x2443e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2443e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2443e8:
    // 0x2443e8: 0xc09149c  jal         func_245270
label_2443ec:
    if (ctx->pc == 0x2443ECu) {
        ctx->pc = 0x2443ECu;
            // 0x2443ec: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2443F0u;
        goto label_2443f0;
    }
    ctx->pc = 0x2443E8u;
    SET_GPR_U32(ctx, 31, 0x2443F0u);
    ctx->pc = 0x2443ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2443E8u;
            // 0x2443ec: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x245270u;
    if (runtime->hasFunction(0x245270u)) {
        auto targetFn = runtime->lookupFunction(0x245270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2443F0u; }
        if (ctx->pc != 0x2443F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245270_0x245270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2443F0u; }
        if (ctx->pc != 0x2443F0u) { return; }
    }
    ctx->pc = 0x2443F0u;
label_2443f0:
    // 0x2443f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2443f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2443f4:
    // 0x2443f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2443f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2443f8:
    // 0x2443f8: 0xc092960  jal         func_24A580
label_2443fc:
    if (ctx->pc == 0x2443FCu) {
        ctx->pc = 0x2443FCu;
            // 0x2443fc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x244400u;
        goto label_244400;
    }
    ctx->pc = 0x2443F8u;
    SET_GPR_U32(ctx, 31, 0x244400u);
    ctx->pc = 0x2443FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2443F8u;
            // 0x2443fc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24A580u;
    if (runtime->hasFunction(0x24A580u)) {
        auto targetFn = runtime->lookupFunction(0x24A580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244400u; }
        if (ctx->pc != 0x244400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024A580_0x24a580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244400u; }
        if (ctx->pc != 0x244400u) { return; }
    }
    ctx->pc = 0x244400u;
label_244400:
    // 0x244400: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x244400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_244404:
    // 0x244404: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x244404u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_244408:
    // 0x244408: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x244408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24440c:
    // 0x24440c: 0x3e00008  jr          $ra
label_244410:
    if (ctx->pc == 0x244410u) {
        ctx->pc = 0x244410u;
            // 0x244410: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x244414u;
        goto label_244414;
    }
    ctx->pc = 0x24440Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24440Cu;
            // 0x244410: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x244414u;
label_244414:
    // 0x244414: 0x0  nop
    ctx->pc = 0x244414u;
    // NOP
label_244418:
    // 0x244418: 0x0  nop
    ctx->pc = 0x244418u;
    // NOP
label_24441c:
    // 0x24441c: 0x0  nop
    ctx->pc = 0x24441cu;
    // NOP
label_244420:
    // 0x244420: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x244420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_244424:
    // 0x244424: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x244424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_244428:
    // 0x244428: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x244428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_24442c:
    // 0x24442c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24442cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_244430:
    // 0x244430: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x244430u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_244434:
    // 0x244434: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x244434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_244438:
    // 0x244438: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x244438u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_24443c:
    // 0x24443c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24443cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_244440:
    // 0x244440: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x244440u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_244444:
    // 0x244444: 0x90820006  lbu         $v0, 0x6($a0)
    ctx->pc = 0x244444u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
label_244448:
    // 0x244448: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_24444c:
    if (ctx->pc == 0x24444Cu) {
        ctx->pc = 0x24444Cu;
            // 0x24444c: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x244450u;
        goto label_244450;
    }
    ctx->pc = 0x244448u;
    {
        const bool branch_taken_0x244448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24444Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244448u;
            // 0x24444c: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244448) {
            ctx->pc = 0x244478u;
            goto label_244478;
        }
    }
    ctx->pc = 0x244450u;
label_244450:
    // 0x244450: 0xc09149c  jal         func_245270
label_244454:
    if (ctx->pc == 0x244454u) {
        ctx->pc = 0x244458u;
        goto label_244458;
    }
    ctx->pc = 0x244450u;
    SET_GPR_U32(ctx, 31, 0x244458u);
    ctx->pc = 0x245270u;
    if (runtime->hasFunction(0x245270u)) {
        auto targetFn = runtime->lookupFunction(0x245270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244458u; }
        if (ctx->pc != 0x244458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245270_0x245270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244458u; }
        if (ctx->pc != 0x244458u) { return; }
    }
    ctx->pc = 0x244458u;
label_244458:
    // 0x244458: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x244458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24445c:
    // 0x24445c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x24445cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_244460:
    // 0x244460: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x244460u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_244464:
    // 0x244464: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x244464u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_244468:
    // 0x244468: 0xc092a58  jal         func_24A960
label_24446c:
    if (ctx->pc == 0x24446Cu) {
        ctx->pc = 0x24446Cu;
            // 0x24446c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x244470u;
        goto label_244470;
    }
    ctx->pc = 0x244468u;
    SET_GPR_U32(ctx, 31, 0x244470u);
    ctx->pc = 0x24446Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244468u;
            // 0x24446c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24A960u;
    if (runtime->hasFunction(0x24A960u)) {
        auto targetFn = runtime->lookupFunction(0x24A960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244470u; }
        if (ctx->pc != 0x244470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024A960_0x24a960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244470u; }
        if (ctx->pc != 0x244470u) { return; }
    }
    ctx->pc = 0x244470u;
label_244470:
    // 0x244470: 0x10000009  b           . + 4 + (0x9 << 2)
label_244474:
    if (ctx->pc == 0x244474u) {
        ctx->pc = 0x244478u;
        goto label_244478;
    }
    ctx->pc = 0x244470u;
    {
        const bool branch_taken_0x244470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x244470) {
            ctx->pc = 0x244498u;
            goto label_244498;
        }
    }
    ctx->pc = 0x244478u;
label_244478:
    // 0x244478: 0xc091498  jal         func_245260
label_24447c:
    if (ctx->pc == 0x24447Cu) {
        ctx->pc = 0x244480u;
        goto label_244480;
    }
    ctx->pc = 0x244478u;
    SET_GPR_U32(ctx, 31, 0x244480u);
    ctx->pc = 0x245260u;
    if (runtime->hasFunction(0x245260u)) {
        auto targetFn = runtime->lookupFunction(0x245260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244480u; }
        if (ctx->pc != 0x244480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245260_0x245260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244480u; }
        if (ctx->pc != 0x244480u) { return; }
    }
    ctx->pc = 0x244480u;
label_244480:
    // 0x244480: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x244480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_244484:
    // 0x244484: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x244484u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_244488:
    // 0x244488: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x244488u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24448c:
    // 0x24448c: 0xc091680  jal         func_245A00
label_244490:
    if (ctx->pc == 0x244490u) {
        ctx->pc = 0x244490u;
            // 0x244490: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x244494u;
        goto label_244494;
    }
    ctx->pc = 0x24448Cu;
    SET_GPR_U32(ctx, 31, 0x244494u);
    ctx->pc = 0x244490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24448Cu;
            // 0x244490: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x245A00u;
    if (runtime->hasFunction(0x245A00u)) {
        auto targetFn = runtime->lookupFunction(0x245A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244494u; }
        if (ctx->pc != 0x244494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245A00_0x245a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244494u; }
        if (ctx->pc != 0x244494u) { return; }
    }
    ctx->pc = 0x244494u;
label_244494:
    // 0x244494: 0x0  nop
    ctx->pc = 0x244494u;
    // NOP
label_244498:
    // 0x244498: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x244498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_24449c:
    // 0x24449c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x24449cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2444a0:
    // 0x2444a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2444a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2444a4:
    // 0x2444a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2444a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2444a8:
    // 0x2444a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2444a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2444ac:
    // 0x2444ac: 0x3e00008  jr          $ra
label_2444b0:
    if (ctx->pc == 0x2444B0u) {
        ctx->pc = 0x2444B0u;
            // 0x2444b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2444B4u;
        goto label_2444b4;
    }
    ctx->pc = 0x2444ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2444B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2444ACu;
            // 0x2444b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2444B4u;
label_2444b4:
    // 0x2444b4: 0x0  nop
    ctx->pc = 0x2444b4u;
    // NOP
label_2444b8:
    // 0x2444b8: 0x0  nop
    ctx->pc = 0x2444b8u;
    // NOP
label_2444bc:
    // 0x2444bc: 0x0  nop
    ctx->pc = 0x2444bcu;
    // NOP
label_2444c0:
    // 0x2444c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2444c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2444c4:
    // 0x2444c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2444c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2444c8:
    // 0x2444c8: 0x90a30006  lbu         $v1, 0x6($a1)
    ctx->pc = 0x2444c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
label_2444cc:
    // 0x2444cc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_2444d0:
    if (ctx->pc == 0x2444D0u) {
        ctx->pc = 0x2444D4u;
        goto label_2444d4;
    }
    ctx->pc = 0x2444CCu;
    {
        const bool branch_taken_0x2444cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2444cc) {
            ctx->pc = 0x2444E8u;
            goto label_2444e8;
        }
    }
    ctx->pc = 0x2444D4u;
label_2444d4:
    // 0x2444d4: 0xc09298c  jal         func_24A630
label_2444d8:
    if (ctx->pc == 0x2444D8u) {
        ctx->pc = 0x2444DCu;
        goto label_2444dc;
    }
    ctx->pc = 0x2444D4u;
    SET_GPR_U32(ctx, 31, 0x2444DCu);
    ctx->pc = 0x24A630u;
    if (runtime->hasFunction(0x24A630u)) {
        auto targetFn = runtime->lookupFunction(0x24A630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2444DCu; }
        if (ctx->pc != 0x2444DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024A630_0x24a630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2444DCu; }
        if (ctx->pc != 0x2444DCu) { return; }
    }
    ctx->pc = 0x2444DCu;
label_2444dc:
    // 0x2444dc: 0x10000010  b           . + 4 + (0x10 << 2)
label_2444e0:
    if (ctx->pc == 0x2444E0u) {
        ctx->pc = 0x2444E4u;
        goto label_2444e4;
    }
    ctx->pc = 0x2444DCu;
    {
        const bool branch_taken_0x2444dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2444dc) {
            ctx->pc = 0x244520u;
            goto label_244520;
        }
    }
    ctx->pc = 0x2444E4u;
label_2444e4:
    // 0x2444e4: 0x0  nop
    ctx->pc = 0x2444e4u;
    // NOP
label_2444e8:
    // 0x2444e8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2444e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_2444ec:
    // 0x2444ec: 0x2484d6e0  addiu       $a0, $a0, -0x2920
    ctx->pc = 0x2444ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956768));
label_2444f0:
    // 0x2444f0: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x2444f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
label_2444f4:
    // 0x2444f4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2444f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2444f8:
    // 0x2444f8: 0x3463ffee  ori         $v1, $v1, 0xFFEE
    ctx->pc = 0x2444f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65518);
label_2444fc:
    // 0x2444fc: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x2444fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_244500:
    // 0x244500: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x244500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244504:
    // 0x244504: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x244504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
label_244508:
    // 0x244508: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x244508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24450c:
    // 0x24450c: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x24450cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_244510:
    // 0x244510: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x244510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244514:
    // 0x244514: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x244514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
label_244518:
    // 0x244518: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x244518u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
label_24451c:
    // 0x24451c: 0x0  nop
    ctx->pc = 0x24451cu;
    // NOP
label_244520:
    // 0x244520: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x244520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_244524:
    // 0x244524: 0x3e00008  jr          $ra
label_244528:
    if (ctx->pc == 0x244528u) {
        ctx->pc = 0x244528u;
            // 0x244528: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x24452Cu;
        goto label_24452c;
    }
    ctx->pc = 0x244524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244524u;
            // 0x244528: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24452Cu;
label_24452c:
    // 0x24452c: 0x0  nop
    ctx->pc = 0x24452cu;
    // NOP
label_244530:
    // 0x244530: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x244530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_244534:
    // 0x244534: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x244534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_244538:
    // 0x244538: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x244538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_24453c:
    // 0x24453c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24453cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_244540:
    // 0x244540: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x244540u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_244544:
    // 0x244544: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x244544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_244548:
    // 0x244548: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x244548u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_24454c:
    // 0x24454c: 0xc09149c  jal         func_245270
label_244550:
    if (ctx->pc == 0x244550u) {
        ctx->pc = 0x244550u;
            // 0x244550: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x244554u;
        goto label_244554;
    }
    ctx->pc = 0x24454Cu;
    SET_GPR_U32(ctx, 31, 0x244554u);
    ctx->pc = 0x244550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24454Cu;
            // 0x244550: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x245270u;
    if (runtime->hasFunction(0x245270u)) {
        auto targetFn = runtime->lookupFunction(0x245270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244554u; }
        if (ctx->pc != 0x244554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245270_0x245270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244554u; }
        if (ctx->pc != 0x244554u) { return; }
    }
    ctx->pc = 0x244554u;
label_244554:
    // 0x244554: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x244554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_244558:
    // 0x244558: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x244558u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24455c:
    // 0x24455c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x24455cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_244560:
    // 0x244560: 0xc092a38  jal         func_24A8E0
label_244564:
    if (ctx->pc == 0x244564u) {
        ctx->pc = 0x244564u;
            // 0x244564: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x244568u;
        goto label_244568;
    }
    ctx->pc = 0x244560u;
    SET_GPR_U32(ctx, 31, 0x244568u);
    ctx->pc = 0x244564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244560u;
            // 0x244564: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24A8E0u;
    if (runtime->hasFunction(0x24A8E0u)) {
        auto targetFn = runtime->lookupFunction(0x24A8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244568u; }
        if (ctx->pc != 0x244568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024A8E0_0x24a8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244568u; }
        if (ctx->pc != 0x244568u) { return; }
    }
    ctx->pc = 0x244568u;
label_244568:
    // 0x244568: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x244568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_24456c:
    // 0x24456c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24456cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_244570:
    // 0x244570: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x244570u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_244574:
    // 0x244574: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x244574u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_244578:
    // 0x244578: 0x3e00008  jr          $ra
label_24457c:
    if (ctx->pc == 0x24457Cu) {
        ctx->pc = 0x24457Cu;
            // 0x24457c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x244580u;
        goto label_244580;
    }
    ctx->pc = 0x244578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24457Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244578u;
            // 0x24457c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x244580u;
label_244580:
    // 0x244580: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x244580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_244584:
    // 0x244584: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x244584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_244588:
    // 0x244588: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x244588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_24458c:
    // 0x24458c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24458cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_244590:
    // 0x244590: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x244590u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_244594:
    // 0x244594: 0x90830006  lbu         $v1, 0x6($a0)
    ctx->pc = 0x244594u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
label_244598:
    // 0x244598: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_24459c:
    if (ctx->pc == 0x24459Cu) {
        ctx->pc = 0x24459Cu;
            // 0x24459c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2445A0u;
        goto label_2445a0;
    }
    ctx->pc = 0x244598u;
    {
        const bool branch_taken_0x244598 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24459Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244598u;
            // 0x24459c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244598) {
            ctx->pc = 0x2445B8u;
            goto label_2445b8;
        }
    }
    ctx->pc = 0x2445A0u;
label_2445a0:
    // 0x2445a0: 0xc09149c  jal         func_245270
label_2445a4:
    if (ctx->pc == 0x2445A4u) {
        ctx->pc = 0x2445A8u;
        goto label_2445a8;
    }
    ctx->pc = 0x2445A0u;
    SET_GPR_U32(ctx, 31, 0x2445A8u);
    ctx->pc = 0x245270u;
    if (runtime->hasFunction(0x245270u)) {
        auto targetFn = runtime->lookupFunction(0x245270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2445A8u; }
        if (ctx->pc != 0x2445A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245270_0x245270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2445A8u; }
        if (ctx->pc != 0x2445A8u) { return; }
    }
    ctx->pc = 0x2445A8u;
label_2445a8:
    // 0x2445a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2445a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2445ac:
    // 0x2445ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2445acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2445b0:
    // 0x2445b0: 0xc0929f4  jal         func_24A7D0
label_2445b4:
    if (ctx->pc == 0x2445B4u) {
        ctx->pc = 0x2445B4u;
            // 0x2445b4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2445B8u;
        goto label_2445b8;
    }
    ctx->pc = 0x2445B0u;
    SET_GPR_U32(ctx, 31, 0x2445B8u);
    ctx->pc = 0x2445B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2445B0u;
            // 0x2445b4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24A7D0u;
    if (runtime->hasFunction(0x24A7D0u)) {
        auto targetFn = runtime->lookupFunction(0x24A7D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2445B8u; }
        if (ctx->pc != 0x2445B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024A7D0_0x24a7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2445B8u; }
        if (ctx->pc != 0x2445B8u) { return; }
    }
    ctx->pc = 0x2445B8u;
label_2445b8:
    // 0x2445b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2445b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2445bc:
    // 0x2445bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2445bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2445c0:
    // 0x2445c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2445c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2445c4:
    // 0x2445c4: 0x3e00008  jr          $ra
label_2445c8:
    if (ctx->pc == 0x2445C8u) {
        ctx->pc = 0x2445C8u;
            // 0x2445c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2445CCu;
        goto label_2445cc;
    }
    ctx->pc = 0x2445C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2445C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2445C4u;
            // 0x2445c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2445CCu;
label_2445cc:
    // 0x2445cc: 0x0  nop
    ctx->pc = 0x2445ccu;
    // NOP
label_2445d0:
    // 0x2445d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2445d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2445d4:
    // 0x2445d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2445d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2445d8:
    // 0x2445d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2445d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2445dc:
    // 0x2445dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2445dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2445e0:
    // 0x2445e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2445e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2445e4:
    // 0x2445e4: 0x90830006  lbu         $v1, 0x6($a0)
    ctx->pc = 0x2445e4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
label_2445e8:
    // 0x2445e8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2445ec:
    if (ctx->pc == 0x2445ECu) {
        ctx->pc = 0x2445ECu;
            // 0x2445ec: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2445F0u;
        goto label_2445f0;
    }
    ctx->pc = 0x2445E8u;
    {
        const bool branch_taken_0x2445e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2445ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2445E8u;
            // 0x2445ec: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2445e8) {
            ctx->pc = 0x244608u;
            goto label_244608;
        }
    }
    ctx->pc = 0x2445F0u;
label_2445f0:
    // 0x2445f0: 0xc09149c  jal         func_245270
label_2445f4:
    if (ctx->pc == 0x2445F4u) {
        ctx->pc = 0x2445F8u;
        goto label_2445f8;
    }
    ctx->pc = 0x2445F0u;
    SET_GPR_U32(ctx, 31, 0x2445F8u);
    ctx->pc = 0x245270u;
    if (runtime->hasFunction(0x245270u)) {
        auto targetFn = runtime->lookupFunction(0x245270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2445F8u; }
        if (ctx->pc != 0x2445F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245270_0x245270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2445F8u; }
        if (ctx->pc != 0x2445F8u) { return; }
    }
    ctx->pc = 0x2445F8u;
label_2445f8:
    // 0x2445f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2445f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2445fc:
    // 0x2445fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2445fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_244600:
    // 0x244600: 0xc092a10  jal         func_24A840
label_244604:
    if (ctx->pc == 0x244604u) {
        ctx->pc = 0x244604u;
            // 0x244604: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x244608u;
        goto label_244608;
    }
    ctx->pc = 0x244600u;
    SET_GPR_U32(ctx, 31, 0x244608u);
    ctx->pc = 0x244604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244600u;
            // 0x244604: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24A840u;
    if (runtime->hasFunction(0x24A840u)) {
        auto targetFn = runtime->lookupFunction(0x24A840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244608u; }
        if (ctx->pc != 0x244608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024A840_0x24a840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244608u; }
        if (ctx->pc != 0x244608u) { return; }
    }
    ctx->pc = 0x244608u;
label_244608:
    // 0x244608: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x244608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_24460c:
    // 0x24460c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24460cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_244610:
    // 0x244610: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x244610u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_244614:
    // 0x244614: 0x3e00008  jr          $ra
label_244618:
    if (ctx->pc == 0x244618u) {
        ctx->pc = 0x244618u;
            // 0x244618: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x24461Cu;
        goto label_24461c;
    }
    ctx->pc = 0x244614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244614u;
            // 0x244618: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24461Cu;
label_24461c:
    // 0x24461c: 0x0  nop
    ctx->pc = 0x24461cu;
    // NOP
label_244620:
    // 0x244620: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x244620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_244624:
    // 0x244624: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x244624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_244628:
    // 0x244628: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x244628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_24462c:
    // 0x24462c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24462cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_244630:
    // 0x244630: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x244630u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_244634:
    // 0x244634: 0x90830006  lbu         $v1, 0x6($a0)
    ctx->pc = 0x244634u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
label_244638:
    // 0x244638: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_24463c:
    if (ctx->pc == 0x24463Cu) {
        ctx->pc = 0x24463Cu;
            // 0x24463c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x244640u;
        goto label_244640;
    }
    ctx->pc = 0x244638u;
    {
        const bool branch_taken_0x244638 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24463Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244638u;
            // 0x24463c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244638) {
            ctx->pc = 0x244658u;
            goto label_244658;
        }
    }
    ctx->pc = 0x244640u;
label_244640:
    // 0x244640: 0xc09149c  jal         func_245270
label_244644:
    if (ctx->pc == 0x244644u) {
        ctx->pc = 0x244648u;
        goto label_244648;
    }
    ctx->pc = 0x244640u;
    SET_GPR_U32(ctx, 31, 0x244648u);
    ctx->pc = 0x245270u;
    if (runtime->hasFunction(0x245270u)) {
        auto targetFn = runtime->lookupFunction(0x245270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244648u; }
        if (ctx->pc != 0x244648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245270_0x245270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244648u; }
        if (ctx->pc != 0x244648u) { return; }
    }
    ctx->pc = 0x244648u;
label_244648:
    // 0x244648: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x244648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24464c:
    // 0x24464c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x24464cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_244650:
    // 0x244650: 0xc092a24  jal         func_24A890
label_244654:
    if (ctx->pc == 0x244654u) {
        ctx->pc = 0x244654u;
            // 0x244654: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x244658u;
        goto label_244658;
    }
    ctx->pc = 0x244650u;
    SET_GPR_U32(ctx, 31, 0x244658u);
    ctx->pc = 0x244654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244650u;
            // 0x244654: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24A890u;
    if (runtime->hasFunction(0x24A890u)) {
        auto targetFn = runtime->lookupFunction(0x24A890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244658u; }
        if (ctx->pc != 0x244658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024A890_0x24a890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244658u; }
        if (ctx->pc != 0x244658u) { return; }
    }
    ctx->pc = 0x244658u;
label_244658:
    // 0x244658: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x244658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_24465c:
    // 0x24465c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24465cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_244660:
    // 0x244660: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x244660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_244664:
    // 0x244664: 0x3e00008  jr          $ra
label_244668:
    if (ctx->pc == 0x244668u) {
        ctx->pc = 0x244668u;
            // 0x244668: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x24466Cu;
        goto label_24466c;
    }
    ctx->pc = 0x244664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244664u;
            // 0x244668: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24466Cu;
label_24466c:
    // 0x24466c: 0x0  nop
    ctx->pc = 0x24466cu;
    // NOP
label_244670:
    // 0x244670: 0x27bded30  addiu       $sp, $sp, -0x12D0
    ctx->pc = 0x244670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294962480));
label_244674:
    // 0x244674: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x244674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_244678:
    // 0x244678: 0x27a312cc  addiu       $v1, $sp, 0x12CC
    ctx->pc = 0x244678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 4812));
label_24467c:
    // 0x24467c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x24467cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_244680:
    // 0x244680: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x244680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_244684:
    // 0x244684: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x244684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_244688:
    // 0x244688: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x244688u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_24468c:
    // 0x24468c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x24468cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_244690:
    // 0x244690: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x244690u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_244694:
    // 0x244694: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x244694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_244698:
    // 0x244698: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x244698u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24469c:
    // 0x24469c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24469cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2446a0:
    // 0x2446a0: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x2446a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_2446a4:
    // 0x2446a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2446a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2446a8:
    // 0x2446a8: 0x24a5ea60  addiu       $a1, $a1, -0x15A0
    ctx->pc = 0x2446a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
label_2446ac:
    // 0x2446ac: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x2446acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_2446b0:
    // 0x2446b0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2446b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2446b4:
    // 0x2446b4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2446b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2446b8:
    // 0x2446b8: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2446b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2446bc:
    // 0x2446bc: 0xa3a212cc  sb          $v0, 0x12CC($sp)
    ctx->pc = 0x2446bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4812), (uint8_t)GPR_U32(ctx, 2));
label_2446c0:
    // 0x2446c0: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2446c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2446c4:
    // 0x2446c4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2446c8:
    if (ctx->pc == 0x2446C8u) {
        ctx->pc = 0x2446C8u;
            // 0x2446c8: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2446CCu;
        goto label_2446cc;
    }
    ctx->pc = 0x2446C4u;
    {
        const bool branch_taken_0x2446c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2446C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2446C4u;
            // 0x2446c8: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2446c4) {
            ctx->pc = 0x244700u;
            goto label_244700;
        }
    }
    ctx->pc = 0x2446CCu;
label_2446cc:
    // 0x2446cc: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2446ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2446d0:
    // 0x2446d0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2446d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2446d4:
    // 0x2446d4: 0x2463cec8  addiu       $v1, $v1, -0x3138
    ctx->pc = 0x2446d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954696));
label_2446d8:
    // 0x2446d8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2446d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2446dc:
    // 0x2446dc: 0x2442ced8  addiu       $v0, $v0, -0x3128
    ctx->pc = 0x2446dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954712));
label_2446e0:
    // 0x2446e0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2446e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2446e4:
    // 0x2446e4: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x2446e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_2446e8:
    // 0x2446e8: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2446e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_2446ec:
    // 0x2446ec: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2446ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_2446f0:
    // 0x2446f0: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2446f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_2446f4:
    // 0x2446f4: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x2446f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_2446f8:
    // 0x2446f8: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2446f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_2446fc:
    // 0x2446fc: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2446fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_244700:
    // 0x244700: 0x8e890000  lw          $t1, 0x0($s4)
    ctx->pc = 0x244700u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_244704:
    // 0x244704: 0x8e880008  lw          $t0, 0x8($s4)
    ctx->pc = 0x244704u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_244708:
    // 0x244708: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x244708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_24470c:
    // 0x24470c: 0x8e8a0004  lw          $t2, 0x4($s4)
    ctx->pc = 0x24470cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_244710:
    // 0x244710: 0x3447ffee  ori         $a3, $v0, 0xFFEE
    ctx->pc = 0x244710u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_244714:
    // 0x244714: 0x27a31280  addiu       $v1, $sp, 0x1280
    ctx->pc = 0x244714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 4736));
label_244718:
    // 0x244718: 0x27a21284  addiu       $v0, $sp, 0x1284
    ctx->pc = 0x244718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4740));
label_24471c:
    // 0x24471c: 0x26263038  addiu       $a2, $s1, 0x3038
    ctx->pc = 0x24471cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 12344));
label_244720:
    // 0x244720: 0x27a51288  addiu       $a1, $sp, 0x1288
    ctx->pc = 0x244720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4744));
label_244724:
    // 0x244724: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x244724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_244728:
    // 0x244728: 0x8d290008  lw          $t1, 0x8($t1)
    ctx->pc = 0x244728u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_24472c:
    // 0x24472c: 0xc5000028  lwc1        $f0, 0x28($t0)
    ctx->pc = 0x24472cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244730:
    // 0x244730: 0x8d500000  lw          $s0, 0x0($t2)
    ctx->pc = 0x244730u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_244734:
    // 0x244734: 0xc5220040  lwc1        $f2, 0x40($t1)
    ctx->pc = 0x244734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_244738:
    // 0x244738: 0xc5210050  lwc1        $f1, 0x50($t1)
    ctx->pc = 0x244738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24473c:
    // 0x24473c: 0x8d480008  lw          $t0, 0x8($t2)
    ctx->pc = 0x24473cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
label_244740:
    // 0x244740: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x244740u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_244744:
    // 0x244744: 0xe7a100d0  swc1        $f1, 0xD0($sp)
    ctx->pc = 0x244744u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_244748:
    // 0x244748: 0xc5220044  lwc1        $f2, 0x44($t1)
    ctx->pc = 0x244748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_24474c:
    // 0x24474c: 0xc5210054  lwc1        $f1, 0x54($t1)
    ctx->pc = 0x24474cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_244750:
    // 0x244750: 0xc7a800d0  lwc1        $f8, 0xD0($sp)
    ctx->pc = 0x244750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_244754:
    // 0x244754: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x244754u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_244758:
    // 0x244758: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x244758u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_24475c:
    // 0x24475c: 0xc5220048  lwc1        $f2, 0x48($t1)
    ctx->pc = 0x24475cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_244760:
    // 0x244760: 0xc5210058  lwc1        $f1, 0x58($t1)
    ctx->pc = 0x244760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_244764:
    // 0x244764: 0xc7a700d4  lwc1        $f7, 0xD4($sp)
    ctx->pc = 0x244764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_244768:
    // 0x244768: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x244768u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_24476c:
    // 0x24476c: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x24476cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_244770:
    // 0x244770: 0xc522004c  lwc1        $f2, 0x4C($t1)
    ctx->pc = 0x244770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_244774:
    // 0x244774: 0xc521005c  lwc1        $f1, 0x5C($t1)
    ctx->pc = 0x244774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_244778:
    // 0x244778: 0xc7a600d8  lwc1        $f6, 0xD8($sp)
    ctx->pc = 0x244778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_24477c:
    // 0x24477c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x24477cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_244780:
    // 0x244780: 0xe7a100dc  swc1        $f1, 0xDC($sp)
    ctx->pc = 0x244780u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_244784:
    // 0x244784: 0xc5020050  lwc1        $f2, 0x50($t0)
    ctx->pc = 0x244784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_244788:
    // 0x244788: 0xc5010040  lwc1        $f1, 0x40($t0)
    ctx->pc = 0x244788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24478c:
    // 0x24478c: 0xc7a400dc  lwc1        $f4, 0xDC($sp)
    ctx->pc = 0x24478cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_244790:
    // 0x244790: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x244790u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_244794:
    // 0x244794: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x244794u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_244798:
    // 0x244798: 0xc5030054  lwc1        $f3, 0x54($t0)
    ctx->pc = 0x244798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_24479c:
    // 0x24479c: 0xc5010044  lwc1        $f1, 0x44($t0)
    ctx->pc = 0x24479cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2447a0:
    // 0x2447a0: 0xc7a200c0  lwc1        $f2, 0xC0($sp)
    ctx->pc = 0x2447a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2447a4:
    // 0x2447a4: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x2447a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_2447a8:
    // 0x2447a8: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x2447a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_2447ac:
    // 0x2447ac: 0xc5030058  lwc1        $f3, 0x58($t0)
    ctx->pc = 0x2447acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2447b0:
    // 0x2447b0: 0xc5010048  lwc1        $f1, 0x48($t0)
    ctx->pc = 0x2447b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2447b4:
    // 0x2447b4: 0xc7a500c4  lwc1        $f5, 0xC4($sp)
    ctx->pc = 0x2447b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2447b8:
    // 0x2447b8: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x2447b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_2447bc:
    // 0x2447bc: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x2447bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_2447c0:
    // 0x2447c0: 0xc509005c  lwc1        $f9, 0x5C($t0)
    ctx->pc = 0x2447c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_2447c4:
    // 0x2447c4: 0xc501004c  lwc1        $f1, 0x4C($t0)
    ctx->pc = 0x2447c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2447c8:
    // 0x2447c8: 0xc7a300c8  lwc1        $f3, 0xC8($sp)
    ctx->pc = 0x2447c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2447cc:
    // 0x2447cc: 0x46014841  sub.s       $f1, $f9, $f1
    ctx->pc = 0x2447ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[9], ctx->f[1]);
label_2447d0:
    // 0x2447d0: 0xe7a100cc  swc1        $f1, 0xCC($sp)
    ctx->pc = 0x2447d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_2447d4:
    // 0x2447d4: 0xc52a005c  lwc1        $f10, 0x5C($t1)
    ctx->pc = 0x2447d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_2447d8:
    // 0x2447d8: 0xc509005c  lwc1        $f9, 0x5C($t0)
    ctx->pc = 0x2447d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_2447dc:
    // 0x2447dc: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x2447dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2447e0:
    // 0x2447e0: 0x460a0282  mul.s       $f10, $f0, $f10
    ctx->pc = 0x2447e0u;
    ctx->f[10] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
label_2447e4:
    // 0x2447e4: 0x46090242  mul.s       $f9, $f0, $f9
    ctx->pc = 0x2447e4u;
    ctx->f[9] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
label_2447e8:
    // 0x2447e8: 0x46085002  mul.s       $f0, $f10, $f8
    ctx->pc = 0x2447e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[8]);
label_2447ec:
    // 0x2447ec: 0xe7a012a0  swc1        $f0, 0x12A0($sp)
    ctx->pc = 0x2447ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4768), bits); }
label_2447f0:
    // 0x2447f0: 0x46075002  mul.s       $f0, $f10, $f7
    ctx->pc = 0x2447f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[7]);
label_2447f4:
    // 0x2447f4: 0xe7a012a4  swc1        $f0, 0x12A4($sp)
    ctx->pc = 0x2447f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4772), bits); }
label_2447f8:
    // 0x2447f8: 0x46065002  mul.s       $f0, $f10, $f6
    ctx->pc = 0x2447f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[6]);
label_2447fc:
    // 0x2447fc: 0xe7a012a8  swc1        $f0, 0x12A8($sp)
    ctx->pc = 0x2447fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4776), bits); }
label_244800:
    // 0x244800: 0x46045002  mul.s       $f0, $f10, $f4
    ctx->pc = 0x244800u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[4]);
label_244804:
    // 0x244804: 0xe7a012ac  swc1        $f0, 0x12AC($sp)
    ctx->pc = 0x244804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4780), bits); }
label_244808:
    // 0x244808: 0x46024802  mul.s       $f0, $f9, $f2
    ctx->pc = 0x244808u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
label_24480c:
    // 0x24480c: 0xc7a712a0  lwc1        $f7, 0x12A0($sp)
    ctx->pc = 0x24480cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_244810:
    // 0x244810: 0xc7a612a4  lwc1        $f6, 0x12A4($sp)
    ctx->pc = 0x244810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_244814:
    // 0x244814: 0xc7a412a8  lwc1        $f4, 0x12A8($sp)
    ctx->pc = 0x244814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_244818:
    // 0x244818: 0xc7a212ac  lwc1        $f2, 0x12AC($sp)
    ctx->pc = 0x244818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_24481c:
    // 0x24481c: 0x46003800  add.s       $f0, $f7, $f0
    ctx->pc = 0x24481cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
label_244820:
    // 0x244820: 0xe7a012a0  swc1        $f0, 0x12A0($sp)
    ctx->pc = 0x244820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4768), bits); }
label_244824:
    // 0x244824: 0x46054802  mul.s       $f0, $f9, $f5
    ctx->pc = 0x244824u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[5]);
label_244828:
    // 0x244828: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x244828u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
label_24482c:
    // 0x24482c: 0xe7a012a4  swc1        $f0, 0x12A4($sp)
    ctx->pc = 0x24482cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4772), bits); }
label_244830:
    // 0x244830: 0x46034802  mul.s       $f0, $f9, $f3
    ctx->pc = 0x244830u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[3]);
label_244834:
    // 0x244834: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x244834u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_244838:
    // 0x244838: 0xe7a012a8  swc1        $f0, 0x12A8($sp)
    ctx->pc = 0x244838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4776), bits); }
label_24483c:
    // 0x24483c: 0x46014802  mul.s       $f0, $f9, $f1
    ctx->pc = 0x24483cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
label_244840:
    // 0x244840: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x244840u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_244844:
    // 0x244844: 0xe7a012ac  swc1        $f0, 0x12AC($sp)
    ctx->pc = 0x244844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4780), bits); }
label_244848:
    // 0x244848: 0xc523009c  lwc1        $f3, 0x9C($t1)
    ctx->pc = 0x244848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_24484c:
    // 0x24484c: 0xc501009c  lwc1        $f1, 0x9C($t0)
    ctx->pc = 0x24484cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_244850:
    // 0x244850: 0xc52200a0  lwc1        $f2, 0xA0($t1)
    ctx->pc = 0x244850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_244854:
    // 0x244854: 0xc50000a0  lwc1        $f0, 0xA0($t0)
    ctx->pc = 0x244854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244858:
    // 0x244858: 0x460350c2  mul.s       $f3, $f10, $f3
    ctx->pc = 0x244858u;
    ctx->f[3] = FPU_MUL_S(ctx->f[10], ctx->f[3]);
label_24485c:
    // 0x24485c: 0xafa71280  sw          $a3, 0x1280($sp)
    ctx->pc = 0x24485cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4736), GPR_U32(ctx, 7));
label_244860:
    // 0x244860: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x244860u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
label_244864:
    // 0x244864: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x244864u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_244868:
    // 0x244868: 0x4601001c  madd.s      $f0, $f0, $f1
    ctx->pc = 0x244868u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[1]));
label_24486c:
    // 0x24486c: 0xe7a012ac  swc1        $f0, 0x12AC($sp)
    ctx->pc = 0x24486cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4780), bits); }
label_244870:
    // 0x244870: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x244870u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_244874:
    // 0x244874: 0xafa70250  sw          $a3, 0x250($sp)
    ctx->pc = 0x244874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 7));
label_244878:
    // 0x244878: 0xc6203010  lwc1        $f0, 0x3010($s1)
    ctx->pc = 0x244878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24487c:
    // 0x24487c: 0xe7a01260  swc1        $f0, 0x1260($sp)
    ctx->pc = 0x24487cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4704), bits); }
label_244880:
    // 0x244880: 0xc6203014  lwc1        $f0, 0x3014($s1)
    ctx->pc = 0x244880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244884:
    // 0x244884: 0xe7a01264  swc1        $f0, 0x1264($sp)
    ctx->pc = 0x244884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4708), bits); }
label_244888:
    // 0x244888: 0xc6203018  lwc1        $f0, 0x3018($s1)
    ctx->pc = 0x244888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24488c:
    // 0x24488c: 0xe7a01268  swc1        $f0, 0x1268($sp)
    ctx->pc = 0x24488cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4712), bits); }
label_244890:
    // 0x244890: 0xc620301c  lwc1        $f0, 0x301C($s1)
    ctx->pc = 0x244890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244894:
    // 0x244894: 0xe7a0126c  swc1        $f0, 0x126C($sp)
    ctx->pc = 0x244894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4716), bits); }
label_244898:
    // 0x244898: 0xc6203020  lwc1        $f0, 0x3020($s1)
    ctx->pc = 0x244898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24489c:
    // 0x24489c: 0xe7a01270  swc1        $f0, 0x1270($sp)
    ctx->pc = 0x24489cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4720), bits); }
label_2448a0:
    // 0x2448a0: 0xc6203024  lwc1        $f0, 0x3024($s1)
    ctx->pc = 0x2448a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2448a4:
    // 0x2448a4: 0xe7a01274  swc1        $f0, 0x1274($sp)
    ctx->pc = 0x2448a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4724), bits); }
label_2448a8:
    // 0x2448a8: 0xc6203028  lwc1        $f0, 0x3028($s1)
    ctx->pc = 0x2448a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2448ac:
    // 0x2448ac: 0xe7a01278  swc1        $f0, 0x1278($sp)
    ctx->pc = 0x2448acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4728), bits); }
label_2448b0:
    // 0x2448b0: 0xc620302c  lwc1        $f0, 0x302C($s1)
    ctx->pc = 0x2448b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2448b4:
    // 0x2448b4: 0xe7a0127c  swc1        $f0, 0x127C($sp)
    ctx->pc = 0x2448b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4732), bits); }
label_2448b8:
    // 0x2448b8: 0xc6203030  lwc1        $f0, 0x3030($s1)
    ctx->pc = 0x2448b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2448bc:
    // 0x2448bc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2448bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2448c0:
    // 0x2448c0: 0xc6203034  lwc1        $f0, 0x3034($s1)
    ctx->pc = 0x2448c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2448c4:
    // 0x2448c4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2448c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2448c8:
    // 0x2448c8: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x2448c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_2448cc:
    // 0x2448cc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2448ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2448d0:
    // 0x2448d0: 0x84c20002  lh          $v0, 0x2($a2)
    ctx->pc = 0x2448d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_2448d4:
    // 0x2448d4: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x2448d4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_2448d8:
    // 0x2448d8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2448d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_2448dc:
    // 0x2448dc: 0xa4a20002  sh          $v0, 0x2($a1)
    ctx->pc = 0x2448dcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
label_2448e0:
    // 0x2448e0: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_2448e4:
    if (ctx->pc == 0x2448E4u) {
        ctx->pc = 0x2448E4u;
            // 0x2448e4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x2448E8u;
        goto label_2448e8;
    }
    ctx->pc = 0x2448E0u;
    {
        const bool branch_taken_0x2448e0 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x2448E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2448E0u;
            // 0x2448e4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2448e0) {
            ctx->pc = 0x2448C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2448c8;
        }
    }
    ctx->pc = 0x2448E8u;
label_2448e8:
    // 0x2448e8: 0xc6213044  lwc1        $f1, 0x3044($s1)
    ctx->pc = 0x2448e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2448ec:
    // 0x2448ec: 0x27a21294  addiu       $v0, $sp, 0x1294
    ctx->pc = 0x2448ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4756));
label_2448f0:
    // 0x2448f0: 0xc6203048  lwc1        $f0, 0x3048($s1)
    ctx->pc = 0x2448f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2448f4:
    // 0x2448f4: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2448f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2448f8:
    // 0x2448f8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2448f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2448fc:
    // 0x2448fc: 0x8e273050  lw          $a3, 0x3050($s1)
    ctx->pc = 0x2448fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12368)));
label_244900:
    // 0x244900: 0x10e0001d  beqz        $a3, . + 4 + (0x1D << 2)
label_244904:
    if (ctx->pc == 0x244904u) {
        ctx->pc = 0x244908u;
        goto label_244908;
    }
    ctx->pc = 0x244900u;
    {
        const bool branch_taken_0x244900 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x244900) {
            ctx->pc = 0x244978u;
            goto label_244978;
        }
    }
    ctx->pc = 0x244908u;
label_244908:
    // 0x244908: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x244908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_24490c:
    // 0x24490c: 0x24e60008  addiu       $a2, $a3, 0x8
    ctx->pc = 0x24490cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_244910:
    // 0x244910: 0x27a5025c  addiu       $a1, $sp, 0x25C
    ctx->pc = 0x244910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 604));
label_244914:
    // 0x244914: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x244914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_244918:
    // 0x244918: 0xafa20254  sw          $v0, 0x254($sp)
    ctx->pc = 0x244918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 2));
label_24491c:
    // 0x24491c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x24491cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_244920:
    // 0x244920: 0xafa20258  sw          $v0, 0x258($sp)
    ctx->pc = 0x244920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 2));
label_244924:
    // 0x244924: 0x0  nop
    ctx->pc = 0x244924u;
    // NOP
label_244928:
    // 0x244928: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x244928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_24492c:
    // 0x24492c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x24492cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_244930:
    // 0x244930: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x244930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_244934:
    // 0x244934: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x244934u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_244938:
    // 0x244938: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x244938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_24493c:
    // 0x24493c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x24493cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_244940:
    // 0x244940: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_244944:
    if (ctx->pc == 0x244944u) {
        ctx->pc = 0x244944u;
            // 0x244944: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->pc = 0x244948u;
        goto label_244948;
    }
    ctx->pc = 0x244940u;
    {
        const bool branch_taken_0x244940 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x244944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244940u;
            // 0x244944: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244940) {
            ctx->pc = 0x244928u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_244928;
        }
    }
    ctx->pc = 0x244948u;
label_244948:
    // 0x244948: 0x24e60408  addiu       $a2, $a3, 0x408
    ctx->pc = 0x244948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1032));
label_24494c:
    // 0x24494c: 0x27a5065c  addiu       $a1, $sp, 0x65C
    ctx->pc = 0x24494cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1628));
label_244950:
    // 0x244950: 0x24040180  addiu       $a0, $zero, 0x180
    ctx->pc = 0x244950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_244954:
    // 0x244954: 0x0  nop
    ctx->pc = 0x244954u;
    // NOP
label_244958:
    // 0x244958: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x244958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_24495c:
    // 0x24495c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x24495cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_244960:
    // 0x244960: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x244960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_244964:
    // 0x244964: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x244964u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_244968:
    // 0x244968: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x244968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_24496c:
    // 0x24496c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x24496cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_244970:
    // 0x244970: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_244974:
    if (ctx->pc == 0x244974u) {
        ctx->pc = 0x244974u;
            // 0x244974: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->pc = 0x244978u;
        goto label_244978;
    }
    ctx->pc = 0x244970u;
    {
        const bool branch_taken_0x244970 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x244974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244970u;
            // 0x244974: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244970) {
            ctx->pc = 0x244958u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_244958;
        }
    }
    ctx->pc = 0x244978u;
label_244978:
    // 0x244978: 0x92620006  lbu         $v0, 0x6($s3)
    ctx->pc = 0x244978u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 6)));
label_24497c:
    // 0x24497c: 0x1040010a  beqz        $v0, . + 4 + (0x10A << 2)
label_244980:
    if (ctx->pc == 0x244980u) {
        ctx->pc = 0x244984u;
        goto label_244984;
    }
    ctx->pc = 0x24497Cu;
    {
        const bool branch_taken_0x24497c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24497c) {
            ctx->pc = 0x244DA8u;
            goto label_244da8;
        }
    }
    ctx->pc = 0x244984u;
label_244984:
    // 0x244984: 0x0  nop
    ctx->pc = 0x244984u;
    // NOP
label_244988:
    // 0x244988: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x244988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_24498c:
    // 0x24498c: 0x3c09006a  lui         $t1, 0x6A
    ctx->pc = 0x24498cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)106 << 16));
label_244990:
    // 0x244990: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x244990u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
label_244994:
    // 0x244994: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x244994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_244998:
    // 0x244998: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x244998u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_24499c:
    // 0x24499c: 0x27a80230  addiu       $t0, $sp, 0x230
    ctx->pc = 0x24499cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_2449a0:
    // 0x2449a0: 0x2529d420  addiu       $t1, $t1, -0x2BE0
    ctx->pc = 0x2449a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294956064));
label_2449a4:
    // 0x2449a4: 0x24e7d430  addiu       $a3, $a3, -0x2BD0
    ctx->pc = 0x2449a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956080));
label_2449a8:
    // 0x2449a8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2449a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2449ac:
    // 0x2449ac: 0x2463d830  addiu       $v1, $v1, -0x27D0
    ctx->pc = 0x2449acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957104));
label_2449b0:
    // 0x2449b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2449b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2449b4:
    // 0x2449b4: 0xad090000  sw          $t1, 0x0($t0)
    ctx->pc = 0x2449b4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 9));
label_2449b8:
    // 0x2449b8: 0x24a5d800  addiu       $a1, $a1, -0x2800
    ctx->pc = 0x2449b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957056));
label_2449bc:
    // 0x2449bc: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x2449bcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
label_2449c0:
    // 0x2449c0: 0x27ae00b0  addiu       $t6, $sp, 0xB0
    ctx->pc = 0x2449c0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2449c4:
    // 0x2449c4: 0xa5060006  sh          $a2, 0x6($t0)
    ctx->pc = 0x2449c4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 6), (uint16_t)GPR_U32(ctx, 6));
label_2449c8:
    // 0x2449c8: 0x27ad00a0  addiu       $t5, $sp, 0xA0
    ctx->pc = 0x2449c8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2449cc:
    // 0x2449cc: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x2449ccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_2449d0:
    // 0x2449d0: 0x27ac0090  addiu       $t4, $sp, 0x90
    ctx->pc = 0x2449d0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2449d4:
    // 0x2449d4: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x2449d4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
label_2449d8:
    // 0x2449d8: 0x27ab0080  addiu       $t3, $sp, 0x80
    ctx->pc = 0x2449d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2449dc:
    // 0x2449dc: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x2449dcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
label_2449e0:
    // 0x2449e0: 0x27a701d0  addiu       $a3, $sp, 0x1D0
    ctx->pc = 0x2449e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_2449e4:
    // 0x2449e4: 0xad04000c  sw          $a0, 0xC($t0)
    ctx->pc = 0x2449e4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 4));
label_2449e8:
    // 0x2449e8: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x2449e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_2449ec:
    // 0x2449ec: 0xa1000010  sb          $zero, 0x10($t0)
    ctx->pc = 0x2449ecu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 16), (uint8_t)GPR_U32(ctx, 0));
label_2449f0:
    // 0x2449f0: 0x27a301f0  addiu       $v1, $sp, 0x1F0
    ctx->pc = 0x2449f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2449f4:
    // 0x2449f4: 0x8e8a0000  lw          $t2, 0x0($s4)
    ctx->pc = 0x2449f4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2449f8:
    // 0x2449f8: 0x27a20200  addiu       $v0, $sp, 0x200
    ctx->pc = 0x2449f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_2449fc:
    // 0x2449fc: 0x27a90220  addiu       $t1, $sp, 0x220
    ctx->pc = 0x2449fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_244a00:
    // 0x244a00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x244a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_244a04:
    // 0x244a04: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x244a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_244a08:
    // 0x244a08: 0xafaa01c0  sw          $t2, 0x1C0($sp)
    ctx->pc = 0x244a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 10));
label_244a0c:
    // 0x244a0c: 0x8e8a0004  lw          $t2, 0x4($s4)
    ctx->pc = 0x244a0cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_244a10:
    // 0x244a10: 0xafaa01c4  sw          $t2, 0x1C4($sp)
    ctx->pc = 0x244a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 10));
label_244a14:
    // 0x244a14: 0x8e8a0008  lw          $t2, 0x8($s4)
    ctx->pc = 0x244a14u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_244a18:
    // 0x244a18: 0xafaa01c8  sw          $t2, 0x1C8($sp)
    ctx->pc = 0x244a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 10));
label_244a1c:
    // 0x244a1c: 0x8e8a000c  lw          $t2, 0xC($s4)
    ctx->pc = 0x244a1cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_244a20:
    // 0x244a20: 0xafaa01cc  sw          $t2, 0x1CC($sp)
    ctx->pc = 0x244a20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 10));
label_244a24:
    // 0x244a24: 0x7a8a0010  lq          $t2, 0x10($s4)
    ctx->pc = 0x244a24u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 20), 16)));
label_244a28:
    // 0x244a28: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x244a28u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
label_244a2c:
    // 0x244a2c: 0x7a8a0020  lq          $t2, 0x20($s4)
    ctx->pc = 0x244a2cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 20), 32)));
label_244a30:
    // 0x244a30: 0x7daa0000  sq          $t2, 0x0($t5)
    ctx->pc = 0x244a30u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 0), GPR_VEC(ctx, 10));
label_244a34:
    // 0x244a34: 0x7a8a0030  lq          $t2, 0x30($s4)
    ctx->pc = 0x244a34u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 20), 48)));
label_244a38:
    // 0x244a38: 0x7d8a0000  sq          $t2, 0x0($t4)
    ctx->pc = 0x244a38u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 0), GPR_VEC(ctx, 10));
label_244a3c:
    // 0x244a3c: 0x7a8a0040  lq          $t2, 0x40($s4)
    ctx->pc = 0x244a3cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 20), 64)));
label_244a40:
    // 0x244a40: 0x7d6a0000  sq          $t2, 0x0($t3)
    ctx->pc = 0x244a40u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 10));
label_244a44:
    // 0x244a44: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x244a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244a48:
    // 0x244a48: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x244a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_244a4c:
    // 0x244a4c: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x244a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244a50:
    // 0x244a50: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x244a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
label_244a54:
    // 0x244a54: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x244a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244a58:
    // 0x244a58: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x244a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_244a5c:
    // 0x244a5c: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x244a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244a60:
    // 0x244a60: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x244a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
label_244a64:
    // 0x244a64: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x244a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244a68:
    // 0x244a68: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x244a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_244a6c:
    // 0x244a6c: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x244a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244a70:
    // 0x244a70: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x244a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_244a74:
    // 0x244a74: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x244a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244a78:
    // 0x244a78: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x244a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_244a7c:
    // 0x244a7c: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x244a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244a80:
    // 0x244a80: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x244a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
label_244a84:
    // 0x244a84: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x244a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244a88:
    // 0x244a88: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x244a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_244a8c:
    // 0x244a8c: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x244a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244a90:
    // 0x244a90: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x244a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_244a94:
    // 0x244a94: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x244a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244a98:
    // 0x244a98: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x244a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_244a9c:
    // 0x244a9c: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x244a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244aa0:
    // 0x244aa0: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x244aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_244aa4:
    // 0x244aa4: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x244aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244aa8:
    // 0x244aa8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x244aa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_244aac:
    // 0x244aac: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x244aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244ab0:
    // 0x244ab0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x244ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_244ab4:
    // 0x244ab4: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x244ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244ab8:
    // 0x244ab8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x244ab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_244abc:
    // 0x244abc: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x244abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244ac0:
    // 0x244ac0: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x244ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_244ac4:
    // 0x244ac4: 0xc6800050  lwc1        $f0, 0x50($s4)
    ctx->pc = 0x244ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244ac8:
    // 0x244ac8: 0xe7a00210  swc1        $f0, 0x210($sp)
    ctx->pc = 0x244ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
label_244acc:
    // 0x244acc: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x244accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_244ad0:
    // 0x244ad0: 0xafa20214  sw          $v0, 0x214($sp)
    ctx->pc = 0x244ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
label_244ad4:
    // 0x244ad4: 0x7a820060  lq          $v0, 0x60($s4)
    ctx->pc = 0x244ad4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 96)));
label_244ad8:
    // 0x244ad8: 0x7d220000  sq          $v0, 0x0($t1)
    ctx->pc = 0x244ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
label_244adc:
    // 0x244adc: 0xc09149c  jal         func_245270
label_244ae0:
    if (ctx->pc == 0x244AE0u) {
        ctx->pc = 0x244AE0u;
            // 0x244ae0: 0xafa801cc  sw          $t0, 0x1CC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 8));
        ctx->pc = 0x244AE4u;
        goto label_244ae4;
    }
    ctx->pc = 0x244ADCu;
    SET_GPR_U32(ctx, 31, 0x244AE4u);
    ctx->pc = 0x244AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244ADCu;
            // 0x244ae0: 0xafa801cc  sw          $t0, 0x1CC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x245270u;
    if (runtime->hasFunction(0x245270u)) {
        auto targetFn = runtime->lookupFunction(0x245270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244AE4u; }
        if (ctx->pc != 0x244AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245270_0x245270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244AE4u; }
        if (ctx->pc != 0x244AE4u) { return; }
    }
    ctx->pc = 0x244AE4u;
label_244ae4:
    // 0x244ae4: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x244ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_244ae8:
    // 0x244ae8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x244ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_244aec:
    // 0x244aec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x244aecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_244af0:
    // 0x244af0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x244af0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_244af4:
    // 0x244af4: 0xc092a60  jal         func_24A980
label_244af8:
    if (ctx->pc == 0x244AF8u) {
        ctx->pc = 0x244AF8u;
            // 0x244af8: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x244AFCu;
        goto label_244afc;
    }
    ctx->pc = 0x244AF4u;
    SET_GPR_U32(ctx, 31, 0x244AFCu);
    ctx->pc = 0x244AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244AF4u;
            // 0x244af8: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24A980u;
    if (runtime->hasFunction(0x24A980u)) {
        auto targetFn = runtime->lookupFunction(0x24A980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244AFCu; }
        if (ctx->pc != 0x244AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024A980_0x24a980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244AFCu; }
        if (ctx->pc != 0x244AFCu) { return; }
    }
    ctx->pc = 0x244AFCu;
label_244afc:
    // 0x244afc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x244afcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_244b00:
    // 0x244b00: 0x8fa3023c  lw          $v1, 0x23C($sp)
    ctx->pc = 0x244b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
label_244b04:
    // 0x244b04: 0x83a20240  lb          $v0, 0x240($sp)
    ctx->pc = 0x244b04u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 576)));
label_244b08:
    // 0x244b08: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
label_244b0c:
    if (ctx->pc == 0x244B0Cu) {
        ctx->pc = 0x244B0Cu;
            // 0x244b0c: 0xafa301cc  sw          $v1, 0x1CC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 3));
        ctx->pc = 0x244B10u;
        goto label_244b10;
    }
    ctx->pc = 0x244B08u;
    {
        const bool branch_taken_0x244b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244B08u;
            // 0x244b0c: 0xafa301cc  sw          $v1, 0x1CC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244b08) {
            ctx->pc = 0x244CD8u;
            goto label_244cd8;
        }
    }
    ctx->pc = 0x244B10u;
label_244b10:
    // 0x244b10: 0xc7a11280  lwc1        $f1, 0x1280($sp)
    ctx->pc = 0x244b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_244b14:
    // 0x244b14: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x244b14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_244b18:
    // 0x244b18: 0xc6203030  lwc1        $f0, 0x3030($s1)
    ctx->pc = 0x244b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244b1c:
    // 0x244b1c: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x244b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_244b20:
    // 0x244b20: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x244b20u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_244b24:
    // 0x244b24: 0x45010042  bc1t        . + 4 + (0x42 << 2)
label_244b28:
    if (ctx->pc == 0x244B28u) {
        ctx->pc = 0x244B28u;
            // 0x244b28: 0x8e84000c  lw          $a0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->pc = 0x244B2Cu;
        goto label_244b2c;
    }
    ctx->pc = 0x244B24u;
    {
        const bool branch_taken_0x244b24 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x244B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244B24u;
            // 0x244b28: 0x8e84000c  lw          $a0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244b24) {
            ctx->pc = 0x244C30u;
            goto label_244c30;
        }
    }
    ctx->pc = 0x244B2Cu;
label_244b2c:
    // 0x244b2c: 0x10000004  b           . + 4 + (0x4 << 2)
label_244b30:
    if (ctx->pc == 0x244B30u) {
        ctx->pc = 0x244B30u;
            // 0x244b30: 0x8e270004  lw          $a3, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x244B34u;
        goto label_244b34;
    }
    ctx->pc = 0x244B2Cu;
    {
        const bool branch_taken_0x244b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244B2Cu;
            // 0x244b30: 0x8e270004  lw          $a3, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244b2c) {
            ctx->pc = 0x244B40u;
            goto label_244b40;
        }
    }
    ctx->pc = 0x244B34u;
label_244b34:
    // 0x244b34: 0x0  nop
    ctx->pc = 0x244b34u;
    // NOP
label_244b38:
    // 0x244b38: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x244b38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_244b3c:
    // 0x244b3c: 0x0  nop
    ctx->pc = 0x244b3cu;
    // NOP
label_244b40:
    // 0x244b40: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x244b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_244b44:
    // 0x244b44: 0x0  nop
    ctx->pc = 0x244b44u;
    // NOP
label_244b48:
    // 0x244b48: 0x0  nop
    ctx->pc = 0x244b48u;
    // NOP
label_244b4c:
    // 0x244b4c: 0x0  nop
    ctx->pc = 0x244b4cu;
    // NOP
label_244b50:
    // 0x244b50: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_244b54:
    if (ctx->pc == 0x244B54u) {
        ctx->pc = 0x244B58u;
        goto label_244b58;
    }
    ctx->pc = 0x244B50u;
    {
        const bool branch_taken_0x244b50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x244b50) {
            ctx->pc = 0x244B38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_244b38;
        }
    }
    ctx->pc = 0x244B58u;
label_244b58:
    // 0x244b58: 0x10000003  b           . + 4 + (0x3 << 2)
label_244b5c:
    if (ctx->pc == 0x244B5Cu) {
        ctx->pc = 0x244B60u;
        goto label_244b60;
    }
    ctx->pc = 0x244B58u;
    {
        const bool branch_taken_0x244b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x244b58) {
            ctx->pc = 0x244B68u;
            goto label_244b68;
        }
    }
    ctx->pc = 0x244B60u;
label_244b60:
    // 0x244b60: 0x8ca5000c  lw          $a1, 0xC($a1)
    ctx->pc = 0x244b60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_244b64:
    // 0x244b64: 0x0  nop
    ctx->pc = 0x244b64u;
    // NOP
label_244b68:
    // 0x244b68: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x244b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_244b6c:
    // 0x244b6c: 0x0  nop
    ctx->pc = 0x244b6cu;
    // NOP
label_244b70:
    // 0x244b70: 0x0  nop
    ctx->pc = 0x244b70u;
    // NOP
label_244b74:
    // 0x244b74: 0x0  nop
    ctx->pc = 0x244b74u;
    // NOP
label_244b78:
    // 0x244b78: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_244b7c:
    if (ctx->pc == 0x244B7Cu) {
        ctx->pc = 0x244B80u;
        goto label_244b80;
    }
    ctx->pc = 0x244B78u;
    {
        const bool branch_taken_0x244b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x244b78) {
            ctx->pc = 0x244B60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_244b60;
        }
    }
    ctx->pc = 0x244B80u;
label_244b80:
    // 0x244b80: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x244b80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_244b84:
    // 0x244b84: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x244b84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_244b88:
    // 0x244b88: 0x320f809  jalr        $t9
label_244b8c:
    if (ctx->pc == 0x244B8Cu) {
        ctx->pc = 0x244B8Cu;
            // 0x244b8c: 0x26283044  addiu       $t0, $s1, 0x3044 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 12356));
        ctx->pc = 0x244B90u;
        goto label_244b90;
    }
    ctx->pc = 0x244B88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x244B90u);
        ctx->pc = 0x244B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244B88u;
            // 0x244b8c: 0x26283044  addiu       $t0, $s1, 0x3044 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 12356));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x244B90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x244B90u; }
            if (ctx->pc != 0x244B90u) { return; }
        }
        }
    }
    ctx->pc = 0x244B90u;
label_244b90:
    // 0x244b90: 0xc7a01260  lwc1        $f0, 0x1260($sp)
    ctx->pc = 0x244b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244b94:
    // 0x244b94: 0x27a31280  addiu       $v1, $sp, 0x1280
    ctx->pc = 0x244b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 4736));
label_244b98:
    // 0x244b98: 0x27a21284  addiu       $v0, $sp, 0x1284
    ctx->pc = 0x244b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4740));
label_244b9c:
    // 0x244b9c: 0x27a61288  addiu       $a2, $sp, 0x1288
    ctx->pc = 0x244b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4744));
label_244ba0:
    // 0x244ba0: 0x26253038  addiu       $a1, $s1, 0x3038
    ctx->pc = 0x244ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12344));
label_244ba4:
    // 0x244ba4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x244ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_244ba8:
    // 0x244ba8: 0xe6203010  swc1        $f0, 0x3010($s1)
    ctx->pc = 0x244ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12304), bits); }
label_244bac:
    // 0x244bac: 0xc7a01264  lwc1        $f0, 0x1264($sp)
    ctx->pc = 0x244bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244bb0:
    // 0x244bb0: 0xe6203014  swc1        $f0, 0x3014($s1)
    ctx->pc = 0x244bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12308), bits); }
label_244bb4:
    // 0x244bb4: 0xc7a01268  lwc1        $f0, 0x1268($sp)
    ctx->pc = 0x244bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244bb8:
    // 0x244bb8: 0xe6203018  swc1        $f0, 0x3018($s1)
    ctx->pc = 0x244bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12312), bits); }
label_244bbc:
    // 0x244bbc: 0xc7a0126c  lwc1        $f0, 0x126C($sp)
    ctx->pc = 0x244bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244bc0:
    // 0x244bc0: 0xe620301c  swc1        $f0, 0x301C($s1)
    ctx->pc = 0x244bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12316), bits); }
label_244bc4:
    // 0x244bc4: 0xc7a01270  lwc1        $f0, 0x1270($sp)
    ctx->pc = 0x244bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244bc8:
    // 0x244bc8: 0xe6203020  swc1        $f0, 0x3020($s1)
    ctx->pc = 0x244bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12320), bits); }
label_244bcc:
    // 0x244bcc: 0xc7a01274  lwc1        $f0, 0x1274($sp)
    ctx->pc = 0x244bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244bd0:
    // 0x244bd0: 0xe6203024  swc1        $f0, 0x3024($s1)
    ctx->pc = 0x244bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12324), bits); }
label_244bd4:
    // 0x244bd4: 0xc7a01278  lwc1        $f0, 0x1278($sp)
    ctx->pc = 0x244bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244bd8:
    // 0x244bd8: 0xe6203028  swc1        $f0, 0x3028($s1)
    ctx->pc = 0x244bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12328), bits); }
label_244bdc:
    // 0x244bdc: 0xc7a0127c  lwc1        $f0, 0x127C($sp)
    ctx->pc = 0x244bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244be0:
    // 0x244be0: 0xe620302c  swc1        $f0, 0x302C($s1)
    ctx->pc = 0x244be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12332), bits); }
label_244be4:
    // 0x244be4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x244be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244be8:
    // 0x244be8: 0xe6203030  swc1        $f0, 0x3030($s1)
    ctx->pc = 0x244be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12336), bits); }
label_244bec:
    // 0x244bec: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x244becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244bf0:
    // 0x244bf0: 0xe6203034  swc1        $f0, 0x3034($s1)
    ctx->pc = 0x244bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12340), bits); }
label_244bf4:
    // 0x244bf4: 0x0  nop
    ctx->pc = 0x244bf4u;
    // NOP
label_244bf8:
    // 0x244bf8: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x244bf8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_244bfc:
    // 0x244bfc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x244bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_244c00:
    // 0x244c00: 0x84c20002  lh          $v0, 0x2($a2)
    ctx->pc = 0x244c00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_244c04:
    // 0x244c04: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x244c04u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_244c08:
    // 0x244c08: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x244c08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_244c0c:
    // 0x244c0c: 0xa4a20002  sh          $v0, 0x2($a1)
    ctx->pc = 0x244c0cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
label_244c10:
    // 0x244c10: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_244c14:
    if (ctx->pc == 0x244C14u) {
        ctx->pc = 0x244C14u;
            // 0x244c14: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x244C18u;
        goto label_244c18;
    }
    ctx->pc = 0x244C10u;
    {
        const bool branch_taken_0x244c10 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x244C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244C10u;
            // 0x244c14: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244c10) {
            ctx->pc = 0x244BF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_244bf8;
        }
    }
    ctx->pc = 0x244C18u;
label_244c18:
    // 0x244c18: 0x27a21294  addiu       $v0, $sp, 0x1294
    ctx->pc = 0x244c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4756));
label_244c1c:
    // 0x244c1c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x244c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_244c20:
    // 0x244c20: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x244c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244c24:
    // 0x244c24: 0xe6213044  swc1        $f1, 0x3044($s1)
    ctx->pc = 0x244c24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12356), bits); }
label_244c28:
    // 0x244c28: 0xe6203048  swc1        $f0, 0x3048($s1)
    ctx->pc = 0x244c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12360), bits); }
label_244c2c:
    // 0x244c2c: 0x0  nop
    ctx->pc = 0x244c2cu;
    // NOP
label_244c30:
    // 0x244c30: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x244c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
label_244c34:
    // 0x244c34: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x244c34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_244c38:
    // 0x244c38: 0x8e273050  lw          $a3, 0x3050($s1)
    ctx->pc = 0x244c38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12368)));
label_244c3c:
    // 0x244c3c: 0x10e0001c  beqz        $a3, . + 4 + (0x1C << 2)
label_244c40:
    if (ctx->pc == 0x244C40u) {
        ctx->pc = 0x244C44u;
        goto label_244c44;
    }
    ctx->pc = 0x244C3Cu;
    {
        const bool branch_taken_0x244c3c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x244c3c) {
            ctx->pc = 0x244CB0u;
            goto label_244cb0;
        }
    }
    ctx->pc = 0x244C44u;
label_244c44:
    // 0x244c44: 0x8fa20254  lw          $v0, 0x254($sp)
    ctx->pc = 0x244c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
label_244c48:
    // 0x244c48: 0x27a6025c  addiu       $a2, $sp, 0x25C
    ctx->pc = 0x244c48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 604));
label_244c4c:
    // 0x244c4c: 0x24e50008  addiu       $a1, $a3, 0x8
    ctx->pc = 0x244c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_244c50:
    // 0x244c50: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x244c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_244c54:
    // 0x244c54: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x244c54u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_244c58:
    // 0x244c58: 0x8fa20258  lw          $v0, 0x258($sp)
    ctx->pc = 0x244c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_244c5c:
    // 0x244c5c: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x244c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_244c60:
    // 0x244c60: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x244c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_244c64:
    // 0x244c64: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x244c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_244c68:
    // 0x244c68: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x244c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_244c6c:
    // 0x244c6c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x244c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_244c70:
    // 0x244c70: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x244c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_244c74:
    // 0x244c74: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x244c74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_244c78:
    // 0x244c78: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_244c7c:
    if (ctx->pc == 0x244C7Cu) {
        ctx->pc = 0x244C7Cu;
            // 0x244c7c: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->pc = 0x244C80u;
        goto label_244c80;
    }
    ctx->pc = 0x244C78u;
    {
        const bool branch_taken_0x244c78 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x244C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244C78u;
            // 0x244c7c: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244c78) {
            ctx->pc = 0x244C60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_244c60;
        }
    }
    ctx->pc = 0x244C80u;
label_244c80:
    // 0x244c80: 0x24e50408  addiu       $a1, $a3, 0x408
    ctx->pc = 0x244c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1032));
label_244c84:
    // 0x244c84: 0x27a6065c  addiu       $a2, $sp, 0x65C
    ctx->pc = 0x244c84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1628));
label_244c88:
    // 0x244c88: 0x24040180  addiu       $a0, $zero, 0x180
    ctx->pc = 0x244c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_244c8c:
    // 0x244c8c: 0x0  nop
    ctx->pc = 0x244c8cu;
    // NOP
label_244c90:
    // 0x244c90: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x244c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_244c94:
    // 0x244c94: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x244c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_244c98:
    // 0x244c98: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x244c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_244c9c:
    // 0x244c9c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x244c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_244ca0:
    // 0x244ca0: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x244ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_244ca4:
    // 0x244ca4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x244ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_244ca8:
    // 0x244ca8: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_244cac:
    if (ctx->pc == 0x244CACu) {
        ctx->pc = 0x244CACu;
            // 0x244cac: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->pc = 0x244CB0u;
        goto label_244cb0;
    }
    ctx->pc = 0x244CA8u;
    {
        const bool branch_taken_0x244ca8 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x244CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244CA8u;
            // 0x244cac: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244ca8) {
            ctx->pc = 0x244C90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_244c90;
        }
    }
    ctx->pc = 0x244CB0u;
label_244cb0:
    // 0x244cb0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x244cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_244cb4:
    // 0x244cb4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x244cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_244cb8:
    // 0x244cb8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x244cb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_244cbc:
    // 0x244cbc: 0xc0914a0  jal         func_245280
label_244cc0:
    if (ctx->pc == 0x244CC0u) {
        ctx->pc = 0x244CC0u;
            // 0x244cc0: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x244CC4u;
        goto label_244cc4;
    }
    ctx->pc = 0x244CBCu;
    SET_GPR_U32(ctx, 31, 0x244CC4u);
    ctx->pc = 0x244CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244CBCu;
            // 0x244cc0: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x245280u;
    if (runtime->hasFunction(0x245280u)) {
        auto targetFn = runtime->lookupFunction(0x245280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244CC4u; }
        if (ctx->pc != 0x244CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245280_0x245280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244CC4u; }
        if (ctx->pc != 0x244CC4u) { return; }
    }
    ctx->pc = 0x244CC4u;
label_244cc4:
    // 0x244cc4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x244cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_244cc8:
    // 0x244cc8: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x244cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_244ccc:
    // 0x244ccc: 0x10000036  b           . + 4 + (0x36 << 2)
label_244cd0:
    if (ctx->pc == 0x244CD0u) {
        ctx->pc = 0x244CD0u;
            // 0x244cd0: 0xafa20230  sw          $v0, 0x230($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 2));
        ctx->pc = 0x244CD4u;
        goto label_244cd4;
    }
    ctx->pc = 0x244CCCu;
    {
        const bool branch_taken_0x244ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244CCCu;
            // 0x244cd0: 0xafa20230  sw          $v0, 0x230($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244ccc) {
            ctx->pc = 0x244DA8u;
            goto label_244da8;
        }
    }
    ctx->pc = 0x244CD4u;
label_244cd4:
    // 0x244cd4: 0x0  nop
    ctx->pc = 0x244cd4u;
    // NOP
label_244cd8:
    // 0x244cd8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x244cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_244cdc:
    // 0x244cdc: 0xc09149c  jal         func_245270
label_244ce0:
    if (ctx->pc == 0x244CE0u) {
        ctx->pc = 0x244CE0u;
            // 0x244ce0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x244CE4u;
        goto label_244ce4;
    }
    ctx->pc = 0x244CDCu;
    SET_GPR_U32(ctx, 31, 0x244CE4u);
    ctx->pc = 0x244CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244CDCu;
            // 0x244ce0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x245270u;
    if (runtime->hasFunction(0x245270u)) {
        auto targetFn = runtime->lookupFunction(0x245270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244CE4u; }
        if (ctx->pc != 0x244CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245270_0x245270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244CE4u; }
        if (ctx->pc != 0x244CE4u) { return; }
    }
    ctx->pc = 0x244CE4u;
label_244ce4:
    // 0x244ce4: 0x9042000e  lbu         $v0, 0xE($v0)
    ctx->pc = 0x244ce4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 14)));
label_244ce8:
    // 0x244ce8: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_244cec:
    if (ctx->pc == 0x244CECu) {
        ctx->pc = 0x244CF0u;
        goto label_244cf0;
    }
    ctx->pc = 0x244CE8u;
    {
        const bool branch_taken_0x244ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244ce8) {
            ctx->pc = 0x244D98u;
            goto label_244d98;
        }
    }
    ctx->pc = 0x244CF0u;
label_244cf0:
    // 0x244cf0: 0x92620007  lbu         $v0, 0x7($s3)
    ctx->pc = 0x244cf0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 7)));
label_244cf4:
    // 0x244cf4: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_244cf8:
    if (ctx->pc == 0x244CF8u) {
        ctx->pc = 0x244CFCu;
        goto label_244cfc;
    }
    ctx->pc = 0x244CF4u;
    {
        const bool branch_taken_0x244cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x244cf4) {
            ctx->pc = 0x244D98u;
            goto label_244d98;
        }
    }
    ctx->pc = 0x244CFCu;
label_244cfc:
    // 0x244cfc: 0x10000004  b           . + 4 + (0x4 << 2)
label_244d00:
    if (ctx->pc == 0x244D00u) {
        ctx->pc = 0x244D00u;
            // 0x244d00: 0x8e830004  lw          $v1, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->pc = 0x244D04u;
        goto label_244d04;
    }
    ctx->pc = 0x244CFCu;
    {
        const bool branch_taken_0x244cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244CFCu;
            // 0x244d00: 0x8e830004  lw          $v1, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244cfc) {
            ctx->pc = 0x244D10u;
            goto label_244d10;
        }
    }
    ctx->pc = 0x244D04u;
label_244d04:
    // 0x244d04: 0x0  nop
    ctx->pc = 0x244d04u;
    // NOP
label_244d08:
    // 0x244d08: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x244d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_244d0c:
    // 0x244d0c: 0x0  nop
    ctx->pc = 0x244d0cu;
    // NOP
label_244d10:
    // 0x244d10: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x244d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_244d14:
    // 0x244d14: 0x0  nop
    ctx->pc = 0x244d14u;
    // NOP
label_244d18:
    // 0x244d18: 0x0  nop
    ctx->pc = 0x244d18u;
    // NOP
label_244d1c:
    // 0x244d1c: 0x0  nop
    ctx->pc = 0x244d1cu;
    // NOP
label_244d20:
    // 0x244d20: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_244d24:
    if (ctx->pc == 0x244D24u) {
        ctx->pc = 0x244D28u;
        goto label_244d28;
    }
    ctx->pc = 0x244D20u;
    {
        const bool branch_taken_0x244d20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x244d20) {
            ctx->pc = 0x244D08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_244d08;
        }
    }
    ctx->pc = 0x244D28u;
label_244d28:
    // 0x244d28: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x244d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244d2c:
    // 0x244d2c: 0x10000004  b           . + 4 + (0x4 << 2)
label_244d30:
    if (ctx->pc == 0x244D30u) {
        ctx->pc = 0x244D30u;
            // 0x244d30: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x244D34u;
        goto label_244d34;
    }
    ctx->pc = 0x244D2Cu;
    {
        const bool branch_taken_0x244d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244D2Cu;
            // 0x244d30: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244d2c) {
            ctx->pc = 0x244D40u;
            goto label_244d40;
        }
    }
    ctx->pc = 0x244D34u;
label_244d34:
    // 0x244d34: 0x0  nop
    ctx->pc = 0x244d34u;
    // NOP
label_244d38:
    // 0x244d38: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x244d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_244d3c:
    // 0x244d3c: 0x0  nop
    ctx->pc = 0x244d3cu;
    // NOP
label_244d40:
    // 0x244d40: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x244d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_244d44:
    // 0x244d44: 0x0  nop
    ctx->pc = 0x244d44u;
    // NOP
label_244d48:
    // 0x244d48: 0x0  nop
    ctx->pc = 0x244d48u;
    // NOP
label_244d4c:
    // 0x244d4c: 0x0  nop
    ctx->pc = 0x244d4cu;
    // NOP
label_244d50:
    // 0x244d50: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_244d54:
    if (ctx->pc == 0x244D54u) {
        ctx->pc = 0x244D58u;
        goto label_244d58;
    }
    ctx->pc = 0x244D50u;
    {
        const bool branch_taken_0x244d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x244d50) {
            ctx->pc = 0x244D38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_244d38;
        }
    }
    ctx->pc = 0x244D58u;
label_244d58:
    // 0x244d58: 0xc4620020  lwc1        $f2, 0x20($v1)
    ctx->pc = 0x244d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_244d5c:
    // 0x244d5c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x244d5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_244d60:
    // 0x244d60: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_244d64:
    if (ctx->pc == 0x244D64u) {
        ctx->pc = 0x244D68u;
        goto label_244d68;
    }
    ctx->pc = 0x244D60u;
    {
        const bool branch_taken_0x244d60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x244d60) {
            ctx->pc = 0x244D70u;
            goto label_244d70;
        }
    }
    ctx->pc = 0x244D68u;
label_244d68:
    // 0x244d68: 0x10000003  b           . + 4 + (0x3 << 2)
label_244d6c:
    if (ctx->pc == 0x244D6Cu) {
        ctx->pc = 0x244D70u;
        goto label_244d70;
    }
    ctx->pc = 0x244D68u;
    {
        const bool branch_taken_0x244d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x244d68) {
            ctx->pc = 0x244D78u;
            goto label_244d78;
        }
    }
    ctx->pc = 0x244D70u;
label_244d70:
    // 0x244d70: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x244d70u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_244d74:
    // 0x244d74: 0x0  nop
    ctx->pc = 0x244d74u;
    // NOP
label_244d78:
    // 0x244d78: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x244d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_244d7c:
    // 0x244d7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x244d7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_244d80:
    // 0x244d80: 0xc6a1000c  lwc1        $f1, 0xC($s5)
    ctx->pc = 0x244d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_244d84:
    // 0x244d84: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x244d84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_244d88:
    // 0x244d88: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x244d88u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_244d8c:
    // 0x244d8c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x244d8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_244d90:
    // 0x244d90: 0x4501ff5f  bc1t        . + 4 + (-0xA1 << 2)
label_244d94:
    if (ctx->pc == 0x244D94u) {
        ctx->pc = 0x244D98u;
        goto label_244d98;
    }
    ctx->pc = 0x244D90u;
    {
        const bool branch_taken_0x244d90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x244d90) {
            ctx->pc = 0x244B10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_244b10;
        }
    }
    ctx->pc = 0x244D98u;
label_244d98:
    // 0x244d98: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x244d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_244d9c:
    // 0x244d9c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x244d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_244da0:
    // 0x244da0: 0x1000010b  b           . + 4 + (0x10B << 2)
label_244da4:
    if (ctx->pc == 0x244DA4u) {
        ctx->pc = 0x244DA4u;
            // 0x244da4: 0xafa20230  sw          $v0, 0x230($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 2));
        ctx->pc = 0x244DA8u;
        goto label_244da8;
    }
    ctx->pc = 0x244DA0u;
    {
        const bool branch_taken_0x244da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244DA0u;
            // 0x244da4: 0xafa20230  sw          $v0, 0x230($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244da0) {
            ctx->pc = 0x2451D0u;
            goto label_2451d0;
        }
    }
    ctx->pc = 0x244DA8u;
label_244da8:
    // 0x244da8: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x244da8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_244dac:
    // 0x244dac: 0x24a5ea60  addiu       $a1, $a1, -0x15A0
    ctx->pc = 0x244dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
label_244db0:
    // 0x244db0: 0x27a312c8  addiu       $v1, $sp, 0x12C8
    ctx->pc = 0x244db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 4808));
label_244db4:
    // 0x244db4: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x244db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_244db8:
    // 0x244db8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x244db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_244dbc:
    // 0x244dbc: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x244dbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_244dc0:
    // 0x244dc0: 0xa3a212c8  sb          $v0, 0x12C8($sp)
    ctx->pc = 0x244dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4808), (uint8_t)GPR_U32(ctx, 2));
label_244dc4:
    // 0x244dc4: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x244dc4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_244dc8:
    // 0x244dc8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_244dcc:
    if (ctx->pc == 0x244DCCu) {
        ctx->pc = 0x244DD0u;
        goto label_244dd0;
    }
    ctx->pc = 0x244DC8u;
    {
        const bool branch_taken_0x244dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244dc8) {
            ctx->pc = 0x244DF8u;
            goto label_244df8;
        }
    }
    ctx->pc = 0x244DD0u;
label_244dd0:
    // 0x244dd0: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x244dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_244dd4:
    // 0x244dd4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x244dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_244dd8:
    // 0x244dd8: 0x2442cee0  addiu       $v0, $v0, -0x3120
    ctx->pc = 0x244dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954720));
label_244ddc:
    // 0x244ddc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x244ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_244de0:
    // 0x244de0: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x244de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_244de4:
    // 0x244de4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x244de4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_244de8:
    // 0x244de8: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x244de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_244dec:
    // 0x244dec: 0x2482000c  addiu       $v0, $a0, 0xC
    ctx->pc = 0x244decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_244df0:
    // 0x244df0: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x244df0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_244df4:
    // 0x244df4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x244df4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_244df8:
    // 0x244df8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x244df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_244dfc:
    // 0x244dfc: 0xc091498  jal         func_245260
label_244e00:
    if (ctx->pc == 0x244E00u) {
        ctx->pc = 0x244E00u;
            // 0x244e00: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x244E04u;
        goto label_244e04;
    }
    ctx->pc = 0x244DFCu;
    SET_GPR_U32(ctx, 31, 0x244E04u);
    ctx->pc = 0x244E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244DFCu;
            // 0x244e00: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x245260u;
    if (runtime->hasFunction(0x245260u)) {
        auto targetFn = runtime->lookupFunction(0x245260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244E04u; }
        if (ctx->pc != 0x244E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245260_0x245260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244E04u; }
        if (ctx->pc != 0x244E04u) { return; }
    }
    ctx->pc = 0x244E04u;
label_244e04:
    // 0x244e04: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x244e04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_244e08:
    // 0x244e08: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x244e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_244e0c:
    // 0x244e0c: 0x4810092  bgez        $a0, . + 4 + (0x92 << 2)
label_244e10:
    if (ctx->pc == 0x244E10u) {
        ctx->pc = 0x244E10u;
            // 0x244e10: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x244E14u;
        goto label_244e14;
    }
    ctx->pc = 0x244E0Cu;
    {
        const bool branch_taken_0x244e0c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x244E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244E0Cu;
            // 0x244e10: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244e0c) {
            ctx->pc = 0x245058u;
            goto label_245058;
        }
    }
    ctx->pc = 0x244E14u;
label_244e14:
    // 0x244e14: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x244e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_244e18:
    // 0x244e18: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x244e18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_244e1c:
    // 0x244e1c: 0xc091498  jal         func_245260
label_244e20:
    if (ctx->pc == 0x244E20u) {
        ctx->pc = 0x244E20u;
            // 0x244e20: 0x24160019  addiu       $s6, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->pc = 0x244E24u;
        goto label_244e24;
    }
    ctx->pc = 0x244E1Cu;
    SET_GPR_U32(ctx, 31, 0x244E24u);
    ctx->pc = 0x244E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244E1Cu;
            // 0x244e20: 0x24160019  addiu       $s6, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x245260u;
    if (runtime->hasFunction(0x245260u)) {
        auto targetFn = runtime->lookupFunction(0x245260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244E24u; }
        if (ctx->pc != 0x244E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245260_0x245260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244E24u; }
        if (ctx->pc != 0x244E24u) { return; }
    }
    ctx->pc = 0x244E24u;
label_244e24:
    // 0x244e24: 0xa4560000  sh          $s6, 0x0($v0)
    ctx->pc = 0x244e24u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 22));
label_244e28:
    // 0x244e28: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x244e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_244e2c:
    // 0x244e2c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x244e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_244e30:
    // 0x244e30: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x244e30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_244e34:
    // 0x244e34: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x244e34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_244e38:
    // 0x244e38: 0xc0a45a0  jal         func_291680
label_244e3c:
    if (ctx->pc == 0x244E3Cu) {
        ctx->pc = 0x244E3Cu;
            // 0x244e3c: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x244E40u;
        goto label_244e40;
    }
    ctx->pc = 0x244E38u;
    SET_GPR_U32(ctx, 31, 0x244E40u);
    ctx->pc = 0x244E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244E38u;
            // 0x244e3c: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291680u;
    if (runtime->hasFunction(0x291680u)) {
        auto targetFn = runtime->lookupFunction(0x291680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244E40u; }
        if (ctx->pc != 0x244E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291680_0x291680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244E40u; }
        if (ctx->pc != 0x244E40u) { return; }
    }
    ctx->pc = 0x244E40u;
label_244e40:
    // 0x244e40: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x244e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_244e44:
    // 0x244e44: 0x27a20160  addiu       $v0, $sp, 0x160
    ctx->pc = 0x244e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_244e48:
    // 0x244e48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x244e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_244e4c:
    // 0x244e4c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x244e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_244e50:
    // 0x244e50: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x244e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_244e54:
    // 0x244e54: 0xafa301a8  sw          $v1, 0x1A8($sp)
    ctx->pc = 0x244e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 3));
label_244e58:
    // 0x244e58: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x244e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_244e5c:
    // 0x244e5c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x244e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_244e60:
    // 0x244e60: 0xafa301ac  sw          $v1, 0x1AC($sp)
    ctx->pc = 0x244e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 3));
label_244e64:
    // 0x244e64: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x244e64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
label_244e68:
    // 0x244e68: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x244e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_244e6c:
    // 0x244e6c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x244e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_244e70:
    // 0x244e70: 0xafa201a4  sw          $v0, 0x1A4($sp)
    ctx->pc = 0x244e70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 2));
label_244e74:
    // 0x244e74: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x244e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_244e78:
    // 0x244e78: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x244e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244e7c:
    // 0x244e7c: 0xc09149c  jal         func_245270
label_244e80:
    if (ctx->pc == 0x244E80u) {
        ctx->pc = 0x244E80u;
            // 0x244e80: 0xe7a001b0  swc1        $f0, 0x1B0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
        ctx->pc = 0x244E84u;
        goto label_244e84;
    }
    ctx->pc = 0x244E7Cu;
    SET_GPR_U32(ctx, 31, 0x244E84u);
    ctx->pc = 0x244E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244E7Cu;
            // 0x244e80: 0xe7a001b0  swc1        $f0, 0x1B0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x245270u;
    if (runtime->hasFunction(0x245270u)) {
        auto targetFn = runtime->lookupFunction(0x245270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244E84u; }
        if (ctx->pc != 0x244E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245270_0x245270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244E84u; }
        if (ctx->pc != 0x244E84u) { return; }
    }
    ctx->pc = 0x244E84u;
label_244e84:
    // 0x244e84: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x244e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_244e88:
    // 0x244e88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x244e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_244e8c:
    // 0x244e8c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x244e8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_244e90:
    // 0x244e90: 0xc0991e4  jal         func_264790
label_244e94:
    if (ctx->pc == 0x244E94u) {
        ctx->pc = 0x244E94u;
            // 0x244e94: 0x27a70150  addiu       $a3, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x244E98u;
        goto label_244e98;
    }
    ctx->pc = 0x244E90u;
    SET_GPR_U32(ctx, 31, 0x244E98u);
    ctx->pc = 0x244E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244E90u;
            // 0x244e94: 0x27a70150  addiu       $a3, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264790u;
    if (runtime->hasFunction(0x264790u)) {
        auto targetFn = runtime->lookupFunction(0x264790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244E98u; }
        if (ctx->pc != 0x244E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264790_0x264790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244E98u; }
        if (ctx->pc != 0x244E98u) { return; }
    }
    ctx->pc = 0x244E98u;
label_244e98:
    // 0x244e98: 0x1040006f  beqz        $v0, . + 4 + (0x6F << 2)
label_244e9c:
    if (ctx->pc == 0x244E9Cu) {
        ctx->pc = 0x244E9Cu;
            // 0x244e9c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x244EA0u;
        goto label_244ea0;
    }
    ctx->pc = 0x244E98u;
    {
        const bool branch_taken_0x244e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244E98u;
            // 0x244e9c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244e98) {
            ctx->pc = 0x245058u;
            goto label_245058;
        }
    }
    ctx->pc = 0x244EA0u;
label_244ea0:
    // 0x244ea0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x244ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_244ea4:
    // 0x244ea4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x244ea4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_244ea8:
    // 0x244ea8: 0xc0914bc  jal         func_2452F0
label_244eac:
    if (ctx->pc == 0x244EACu) {
        ctx->pc = 0x244EACu;
            // 0x244eac: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x244EB0u;
        goto label_244eb0;
    }
    ctx->pc = 0x244EA8u;
    SET_GPR_U32(ctx, 31, 0x244EB0u);
    ctx->pc = 0x244EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244EA8u;
            // 0x244eac: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2452F0u;
    if (runtime->hasFunction(0x2452F0u)) {
        auto targetFn = runtime->lookupFunction(0x2452F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244EB0u; }
        if (ctx->pc != 0x244EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002452F0_0x2452f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244EB0u; }
        if (ctx->pc != 0x244EB0u) { return; }
    }
    ctx->pc = 0x244EB0u;
label_244eb0:
    // 0x244eb0: 0xc7a11280  lwc1        $f1, 0x1280($sp)
    ctx->pc = 0x244eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_244eb4:
    // 0x244eb4: 0xc6203030  lwc1        $f0, 0x3030($s1)
    ctx->pc = 0x244eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244eb8:
    // 0x244eb8: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x244eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_244ebc:
    // 0x244ebc: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x244ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_244ec0:
    // 0x244ec0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x244ec0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_244ec4:
    // 0x244ec4: 0x45010042  bc1t        . + 4 + (0x42 << 2)
label_244ec8:
    if (ctx->pc == 0x244EC8u) {
        ctx->pc = 0x244EC8u;
            // 0x244ec8: 0x8e84000c  lw          $a0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->pc = 0x244ECCu;
        goto label_244ecc;
    }
    ctx->pc = 0x244EC4u;
    {
        const bool branch_taken_0x244ec4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x244EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244EC4u;
            // 0x244ec8: 0x8e84000c  lw          $a0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244ec4) {
            ctx->pc = 0x244FD0u;
            goto label_244fd0;
        }
    }
    ctx->pc = 0x244ECCu;
label_244ecc:
    // 0x244ecc: 0x10000004  b           . + 4 + (0x4 << 2)
label_244ed0:
    if (ctx->pc == 0x244ED0u) {
        ctx->pc = 0x244ED0u;
            // 0x244ed0: 0x8e270004  lw          $a3, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x244ED4u;
        goto label_244ed4;
    }
    ctx->pc = 0x244ECCu;
    {
        const bool branch_taken_0x244ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244ECCu;
            // 0x244ed0: 0x8e270004  lw          $a3, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244ecc) {
            ctx->pc = 0x244EE0u;
            goto label_244ee0;
        }
    }
    ctx->pc = 0x244ED4u;
label_244ed4:
    // 0x244ed4: 0x0  nop
    ctx->pc = 0x244ed4u;
    // NOP
label_244ed8:
    // 0x244ed8: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x244ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_244edc:
    // 0x244edc: 0x0  nop
    ctx->pc = 0x244edcu;
    // NOP
label_244ee0:
    // 0x244ee0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x244ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_244ee4:
    // 0x244ee4: 0x0  nop
    ctx->pc = 0x244ee4u;
    // NOP
label_244ee8:
    // 0x244ee8: 0x0  nop
    ctx->pc = 0x244ee8u;
    // NOP
label_244eec:
    // 0x244eec: 0x0  nop
    ctx->pc = 0x244eecu;
    // NOP
label_244ef0:
    // 0x244ef0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_244ef4:
    if (ctx->pc == 0x244EF4u) {
        ctx->pc = 0x244EF8u;
        goto label_244ef8;
    }
    ctx->pc = 0x244EF0u;
    {
        const bool branch_taken_0x244ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x244ef0) {
            ctx->pc = 0x244ED8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_244ed8;
        }
    }
    ctx->pc = 0x244EF8u;
label_244ef8:
    // 0x244ef8: 0x10000003  b           . + 4 + (0x3 << 2)
label_244efc:
    if (ctx->pc == 0x244EFCu) {
        ctx->pc = 0x244F00u;
        goto label_244f00;
    }
    ctx->pc = 0x244EF8u;
    {
        const bool branch_taken_0x244ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x244ef8) {
            ctx->pc = 0x244F08u;
            goto label_244f08;
        }
    }
    ctx->pc = 0x244F00u;
label_244f00:
    // 0x244f00: 0x8ca5000c  lw          $a1, 0xC($a1)
    ctx->pc = 0x244f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_244f04:
    // 0x244f04: 0x0  nop
    ctx->pc = 0x244f04u;
    // NOP
label_244f08:
    // 0x244f08: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x244f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_244f0c:
    // 0x244f0c: 0x0  nop
    ctx->pc = 0x244f0cu;
    // NOP
label_244f10:
    // 0x244f10: 0x0  nop
    ctx->pc = 0x244f10u;
    // NOP
label_244f14:
    // 0x244f14: 0x0  nop
    ctx->pc = 0x244f14u;
    // NOP
label_244f18:
    // 0x244f18: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_244f1c:
    if (ctx->pc == 0x244F1Cu) {
        ctx->pc = 0x244F20u;
        goto label_244f20;
    }
    ctx->pc = 0x244F18u;
    {
        const bool branch_taken_0x244f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x244f18) {
            ctx->pc = 0x244F00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_244f00;
        }
    }
    ctx->pc = 0x244F20u;
label_244f20:
    // 0x244f20: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x244f20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_244f24:
    // 0x244f24: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x244f24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_244f28:
    // 0x244f28: 0x320f809  jalr        $t9
label_244f2c:
    if (ctx->pc == 0x244F2Cu) {
        ctx->pc = 0x244F2Cu;
            // 0x244f2c: 0x26283044  addiu       $t0, $s1, 0x3044 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 12356));
        ctx->pc = 0x244F30u;
        goto label_244f30;
    }
    ctx->pc = 0x244F28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x244F30u);
        ctx->pc = 0x244F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244F28u;
            // 0x244f2c: 0x26283044  addiu       $t0, $s1, 0x3044 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 12356));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x244F30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x244F30u; }
            if (ctx->pc != 0x244F30u) { return; }
        }
        }
    }
    ctx->pc = 0x244F30u;
label_244f30:
    // 0x244f30: 0xc7a01260  lwc1        $f0, 0x1260($sp)
    ctx->pc = 0x244f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244f34:
    // 0x244f34: 0x27a31280  addiu       $v1, $sp, 0x1280
    ctx->pc = 0x244f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 4736));
label_244f38:
    // 0x244f38: 0x27a21284  addiu       $v0, $sp, 0x1284
    ctx->pc = 0x244f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4740));
label_244f3c:
    // 0x244f3c: 0x27a61288  addiu       $a2, $sp, 0x1288
    ctx->pc = 0x244f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4744));
label_244f40:
    // 0x244f40: 0x26253038  addiu       $a1, $s1, 0x3038
    ctx->pc = 0x244f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12344));
label_244f44:
    // 0x244f44: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x244f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_244f48:
    // 0x244f48: 0xe6203010  swc1        $f0, 0x3010($s1)
    ctx->pc = 0x244f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12304), bits); }
label_244f4c:
    // 0x244f4c: 0xc7a01264  lwc1        $f0, 0x1264($sp)
    ctx->pc = 0x244f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244f50:
    // 0x244f50: 0xe6203014  swc1        $f0, 0x3014($s1)
    ctx->pc = 0x244f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12308), bits); }
label_244f54:
    // 0x244f54: 0xc7a01268  lwc1        $f0, 0x1268($sp)
    ctx->pc = 0x244f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244f58:
    // 0x244f58: 0xe6203018  swc1        $f0, 0x3018($s1)
    ctx->pc = 0x244f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12312), bits); }
label_244f5c:
    // 0x244f5c: 0xc7a0126c  lwc1        $f0, 0x126C($sp)
    ctx->pc = 0x244f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244f60:
    // 0x244f60: 0xe620301c  swc1        $f0, 0x301C($s1)
    ctx->pc = 0x244f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12316), bits); }
label_244f64:
    // 0x244f64: 0xc7a01270  lwc1        $f0, 0x1270($sp)
    ctx->pc = 0x244f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244f68:
    // 0x244f68: 0xe6203020  swc1        $f0, 0x3020($s1)
    ctx->pc = 0x244f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12320), bits); }
label_244f6c:
    // 0x244f6c: 0xc7a01274  lwc1        $f0, 0x1274($sp)
    ctx->pc = 0x244f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244f70:
    // 0x244f70: 0xe6203024  swc1        $f0, 0x3024($s1)
    ctx->pc = 0x244f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12324), bits); }
label_244f74:
    // 0x244f74: 0xc7a01278  lwc1        $f0, 0x1278($sp)
    ctx->pc = 0x244f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244f78:
    // 0x244f78: 0xe6203028  swc1        $f0, 0x3028($s1)
    ctx->pc = 0x244f78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12328), bits); }
label_244f7c:
    // 0x244f7c: 0xc7a0127c  lwc1        $f0, 0x127C($sp)
    ctx->pc = 0x244f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244f80:
    // 0x244f80: 0xe620302c  swc1        $f0, 0x302C($s1)
    ctx->pc = 0x244f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12332), bits); }
label_244f84:
    // 0x244f84: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x244f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244f88:
    // 0x244f88: 0xe6203030  swc1        $f0, 0x3030($s1)
    ctx->pc = 0x244f88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12336), bits); }
label_244f8c:
    // 0x244f8c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x244f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244f90:
    // 0x244f90: 0xe6203034  swc1        $f0, 0x3034($s1)
    ctx->pc = 0x244f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12340), bits); }
label_244f94:
    // 0x244f94: 0x0  nop
    ctx->pc = 0x244f94u;
    // NOP
label_244f98:
    // 0x244f98: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x244f98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_244f9c:
    // 0x244f9c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x244f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_244fa0:
    // 0x244fa0: 0x84c20002  lh          $v0, 0x2($a2)
    ctx->pc = 0x244fa0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_244fa4:
    // 0x244fa4: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x244fa4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_244fa8:
    // 0x244fa8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x244fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_244fac:
    // 0x244fac: 0xa4a20002  sh          $v0, 0x2($a1)
    ctx->pc = 0x244facu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
label_244fb0:
    // 0x244fb0: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_244fb4:
    if (ctx->pc == 0x244FB4u) {
        ctx->pc = 0x244FB4u;
            // 0x244fb4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x244FB8u;
        goto label_244fb8;
    }
    ctx->pc = 0x244FB0u;
    {
        const bool branch_taken_0x244fb0 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x244FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244FB0u;
            // 0x244fb4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244fb0) {
            ctx->pc = 0x244F98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_244f98;
        }
    }
    ctx->pc = 0x244FB8u;
label_244fb8:
    // 0x244fb8: 0x27a21294  addiu       $v0, $sp, 0x1294
    ctx->pc = 0x244fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4756));
label_244fbc:
    // 0x244fbc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x244fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_244fc0:
    // 0x244fc0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x244fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244fc4:
    // 0x244fc4: 0xe6213044  swc1        $f1, 0x3044($s1)
    ctx->pc = 0x244fc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12356), bits); }
label_244fc8:
    // 0x244fc8: 0xe6203048  swc1        $f0, 0x3048($s1)
    ctx->pc = 0x244fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12360), bits); }
label_244fcc:
    // 0x244fcc: 0x0  nop
    ctx->pc = 0x244fccu;
    // NOP
label_244fd0:
    // 0x244fd0: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x244fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
label_244fd4:
    // 0x244fd4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x244fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_244fd8:
    // 0x244fd8: 0x8e273050  lw          $a3, 0x3050($s1)
    ctx->pc = 0x244fd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12368)));
label_244fdc:
    // 0x244fdc: 0x10e0fe6a  beqz        $a3, . + 4 + (-0x196 << 2)
label_244fe0:
    if (ctx->pc == 0x244FE0u) {
        ctx->pc = 0x244FE4u;
        goto label_244fe4;
    }
    ctx->pc = 0x244FDCu;
    {
        const bool branch_taken_0x244fdc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x244fdc) {
            ctx->pc = 0x244988u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_244988;
        }
    }
    ctx->pc = 0x244FE4u;
label_244fe4:
    // 0x244fe4: 0x8fa20254  lw          $v0, 0x254($sp)
    ctx->pc = 0x244fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
label_244fe8:
    // 0x244fe8: 0x27a6025c  addiu       $a2, $sp, 0x25C
    ctx->pc = 0x244fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 604));
label_244fec:
    // 0x244fec: 0x24e50008  addiu       $a1, $a3, 0x8
    ctx->pc = 0x244fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_244ff0:
    // 0x244ff0: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x244ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_244ff4:
    // 0x244ff4: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x244ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_244ff8:
    // 0x244ff8: 0x8fa20258  lw          $v0, 0x258($sp)
    ctx->pc = 0x244ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_244ffc:
    // 0x244ffc: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x244ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_245000:
    // 0x245000: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x245000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_245004:
    // 0x245004: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x245004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_245008:
    // 0x245008: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x245008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_24500c:
    // 0x24500c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x24500cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_245010:
    // 0x245010: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x245010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_245014:
    // 0x245014: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x245014u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_245018:
    // 0x245018: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_24501c:
    if (ctx->pc == 0x24501Cu) {
        ctx->pc = 0x24501Cu;
            // 0x24501c: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->pc = 0x245020u;
        goto label_245020;
    }
    ctx->pc = 0x245018u;
    {
        const bool branch_taken_0x245018 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x24501Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245018u;
            // 0x24501c: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245018) {
            ctx->pc = 0x245000u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_245000;
        }
    }
    ctx->pc = 0x245020u;
label_245020:
    // 0x245020: 0x24e50408  addiu       $a1, $a3, 0x408
    ctx->pc = 0x245020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1032));
label_245024:
    // 0x245024: 0x27a6065c  addiu       $a2, $sp, 0x65C
    ctx->pc = 0x245024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1628));
label_245028:
    // 0x245028: 0x24040180  addiu       $a0, $zero, 0x180
    ctx->pc = 0x245028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_24502c:
    // 0x24502c: 0x0  nop
    ctx->pc = 0x24502cu;
    // NOP
label_245030:
    // 0x245030: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x245030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_245034:
    // 0x245034: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x245034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_245038:
    // 0x245038: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x245038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_24503c:
    // 0x24503c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x24503cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_245040:
    // 0x245040: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x245040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_245044:
    // 0x245044: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x245044u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_245048:
    // 0x245048: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_24504c:
    if (ctx->pc == 0x24504Cu) {
        ctx->pc = 0x24504Cu;
            // 0x24504c: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->pc = 0x245050u;
        goto label_245050;
    }
    ctx->pc = 0x245048u;
    {
        const bool branch_taken_0x245048 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x24504Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245048u;
            // 0x24504c: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245048) {
            ctx->pc = 0x245030u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_245030;
        }
    }
    ctx->pc = 0x245050u;
label_245050:
    // 0x245050: 0x1000fe4d  b           . + 4 + (-0x1B3 << 2)
label_245054:
    if (ctx->pc == 0x245054u) {
        ctx->pc = 0x245058u;
        goto label_245058;
    }
    ctx->pc = 0x245050u;
    {
        const bool branch_taken_0x245050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x245050) {
            ctx->pc = 0x244988u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_244988;
        }
    }
    ctx->pc = 0x245058u;
label_245058:
    // 0x245058: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x245058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
label_24505c:
    // 0x24505c: 0x3442ffee  ori         $v0, $v0, 0xFFEE
    ctx->pc = 0x24505cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_245060:
    // 0x245060: 0xaea2000c  sw          $v0, 0xC($s5)
    ctx->pc = 0x245060u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
label_245064:
    // 0x245064: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x245064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_245068:
    // 0x245068: 0xc7a312a0  lwc1        $f3, 0x12A0($sp)
    ctx->pc = 0x245068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_24506c:
    // 0x24506c: 0xc7a212a4  lwc1        $f2, 0x12A4($sp)
    ctx->pc = 0x24506cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_245070:
    // 0x245070: 0xc7a112a8  lwc1        $f1, 0x12A8($sp)
    ctx->pc = 0x245070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_245074:
    // 0x245074: 0xc7a012ac  lwc1        $f0, 0x12AC($sp)
    ctx->pc = 0x245074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_245078:
    // 0x245078: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x245078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_24507c:
    // 0x24507c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x24507cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_245080:
    // 0x245080: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x245080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
label_245084:
    // 0x245084: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x245084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_245088:
    // 0x245088: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x245088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
label_24508c:
    // 0x24508c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x24508cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_245090:
    // 0x245090: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x245090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
label_245094:
    // 0x245094: 0xe7a30140  swc1        $f3, 0x140($sp)
    ctx->pc = 0x245094u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_245098:
    // 0x245098: 0xe7a20144  swc1        $f2, 0x144($sp)
    ctx->pc = 0x245098u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_24509c:
    // 0x24509c: 0xe7a10148  swc1        $f1, 0x148($sp)
    ctx->pc = 0x24509cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_2450a0:
    // 0x2450a0: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x2450a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_2450a4:
    // 0x2450a4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2450a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2450a8:
    // 0x2450a8: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2450a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2450ac:
    // 0x2450ac: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x2450acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2450b0:
    // 0x2450b0: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x2450b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2450b4:
    // 0x2450b4: 0xc0a45a0  jal         func_291680
label_2450b8:
    if (ctx->pc == 0x2450B8u) {
        ctx->pc = 0x2450B8u;
            // 0x2450b8: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x2450BCu;
        goto label_2450bc;
    }
    ctx->pc = 0x2450B4u;
    SET_GPR_U32(ctx, 31, 0x2450BCu);
    ctx->pc = 0x2450B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2450B4u;
            // 0x2450b8: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291680u;
    if (runtime->hasFunction(0x291680u)) {
        auto targetFn = runtime->lookupFunction(0x291680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2450BCu; }
        if (ctx->pc != 0x2450BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291680_0x291680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2450BCu; }
        if (ctx->pc != 0x2450BCu) { return; }
    }
    ctx->pc = 0x2450BCu;
label_2450bc:
    // 0x2450bc: 0x8e140048  lw          $s4, 0x48($s0)
    ctx->pc = 0x2450bcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_2450c0:
    // 0x2450c0: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x2450c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_2450c4:
    // 0x2450c4: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x2450c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_2450c8:
    // 0x2450c8: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x2450c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_2450cc:
    // 0x2450cc: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x2450ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2450d0:
    // 0x2450d0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2450d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2450d4:
    // 0x2450d4: 0x24660010  addiu       $a2, $v1, 0x10
    ctx->pc = 0x2450d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_2450d8:
    // 0x2450d8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2450d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2450dc:
    // 0x2450dc: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x2450dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_2450e0:
    // 0x2450e0: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x2450e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_2450e4:
    // 0x2450e4: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x2450e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2450e8:
    // 0x2450e8: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x2450e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_2450ec:
    // 0x2450ec: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_2450f0:
    if (ctx->pc == 0x2450F0u) {
        ctx->pc = 0x2450F4u;
        goto label_2450f4;
    }
    ctx->pc = 0x2450ECu;
    {
        const bool branch_taken_0x2450ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2450ec) {
            ctx->pc = 0x245100u;
            goto label_245100;
        }
    }
    ctx->pc = 0x2450F4u;
label_2450f4:
    // 0x2450f4: 0x10000006  b           . + 4 + (0x6 << 2)
label_2450f8:
    if (ctx->pc == 0x2450F8u) {
        ctx->pc = 0x2450F8u;
            // 0x2450f8: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x2450FCu;
        goto label_2450fc;
    }
    ctx->pc = 0x2450F4u;
    {
        const bool branch_taken_0x2450f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2450F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2450F4u;
            // 0x2450f8: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2450f4) {
            ctx->pc = 0x245110u;
            goto label_245110;
        }
    }
    ctx->pc = 0x2450FCu;
label_2450fc:
    // 0x2450fc: 0x0  nop
    ctx->pc = 0x2450fcu;
    // NOP
label_245100:
    // 0x245100: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x245100u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_245104:
    // 0x245104: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x245104u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_245108:
    // 0x245108: 0x320f809  jalr        $t9
label_24510c:
    if (ctx->pc == 0x24510Cu) {
        ctx->pc = 0x245110u;
        goto label_245110;
    }
    ctx->pc = 0x245108u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x245110u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x245110u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x245110u; }
            if (ctx->pc != 0x245110u) { return; }
        }
        }
    }
    ctx->pc = 0x245110u;
label_245110:
    // 0x245110: 0xafa212b8  sw          $v0, 0x12B8($sp)
    ctx->pc = 0x245110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4792), GPR_U32(ctx, 2));
label_245114:
    // 0x245114: 0x10000008  b           . + 4 + (0x8 << 2)
label_245118:
    if (ctx->pc == 0x245118u) {
        ctx->pc = 0x245118u;
            // 0x245118: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24511Cu;
        goto label_24511c;
    }
    ctx->pc = 0x245114u;
    {
        const bool branch_taken_0x245114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245114u;
            // 0x245118: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245114) {
            ctx->pc = 0x245138u;
            goto label_245138;
        }
    }
    ctx->pc = 0x24511Cu;
label_24511c:
    // 0x24511c: 0x0  nop
    ctx->pc = 0x24511cu;
    // NOP
label_245120:
    // 0x245120: 0x8fa212b8  lw          $v0, 0x12B8($sp)
    ctx->pc = 0x245120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4792)));
label_245124:
    // 0x245124: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x245124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_245128:
    // 0x245128: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x245128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24512c:
    // 0x24512c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x24512cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_245130:
    // 0x245130: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x245130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_245134:
    // 0x245134: 0x0  nop
    ctx->pc = 0x245134u;
    // NOP
label_245138:
    // 0x245138: 0x94102a  slt         $v0, $a0, $s4
    ctx->pc = 0x245138u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_24513c:
    // 0x24513c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_245140:
    if (ctx->pc == 0x245140u) {
        ctx->pc = 0x245144u;
        goto label_245144;
    }
    ctx->pc = 0x24513Cu;
    {
        const bool branch_taken_0x24513c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24513c) {
            ctx->pc = 0x245120u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_245120;
        }
    }
    ctx->pc = 0x245144u;
label_245144:
    // 0x245144: 0x8fa312b8  lw          $v1, 0x12B8($sp)
    ctx->pc = 0x245144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4792)));
label_245148:
    // 0x245148: 0x142080  sll         $a0, $s4, 2
    ctx->pc = 0x245148u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_24514c:
    // 0x24514c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x24514cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_245150:
    // 0x245150: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x245150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_245154:
    // 0x245154: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x245154u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_245158:
    // 0x245158: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_24515c:
    if (ctx->pc == 0x24515Cu) {
        ctx->pc = 0x24515Cu;
            // 0x24515c: 0x8fb512b8  lw          $s5, 0x12B8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4792)));
        ctx->pc = 0x245160u;
        goto label_245160;
    }
    ctx->pc = 0x245158u;
    {
        const bool branch_taken_0x245158 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24515Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245158u;
            // 0x24515c: 0x8fb512b8  lw          $s5, 0x12B8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4792)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245158) {
            ctx->pc = 0x245168u;
            goto label_245168;
        }
    }
    ctx->pc = 0x245160u;
label_245160:
    // 0x245160: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x245160u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_245164:
    // 0x245164: 0x0  nop
    ctx->pc = 0x245164u;
    // NOP
label_245168:
    // 0x245168: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x245168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24516c:
    // 0x24516c: 0xc091498  jal         func_245260
label_245170:
    if (ctx->pc == 0x245170u) {
        ctx->pc = 0x245170u;
            // 0x245170: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x245174u;
        goto label_245174;
    }
    ctx->pc = 0x24516Cu;
    SET_GPR_U32(ctx, 31, 0x245174u);
    ctx->pc = 0x245170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24516Cu;
            // 0x245170: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x245260u;
    if (runtime->hasFunction(0x245260u)) {
        auto targetFn = runtime->lookupFunction(0x245260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245174u; }
        if (ctx->pc != 0x245174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245260_0x245260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245174u; }
        if (ctx->pc != 0x245174u) { return; }
    }
    ctx->pc = 0x245174u;
label_245174:
    // 0x245174: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x245174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_245178:
    // 0x245178: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x245178u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24517c:
    // 0x24517c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x24517cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_245180:
    // 0x245180: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x245180u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_245184:
    // 0x245184: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x245184u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_245188:
    // 0x245188: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x245188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24518c:
    // 0x24518c: 0xc091cc4  jal         func_247310
label_245190:
    if (ctx->pc == 0x245190u) {
        ctx->pc = 0x245190u;
            // 0x245190: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x245194u;
        goto label_245194;
    }
    ctx->pc = 0x24518Cu;
    SET_GPR_U32(ctx, 31, 0x245194u);
    ctx->pc = 0x245190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24518Cu;
            // 0x245190: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x247310u;
    if (runtime->hasFunction(0x247310u)) {
        auto targetFn = runtime->lookupFunction(0x247310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245194u; }
        if (ctx->pc != 0x245194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00247310_0x247310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245194u; }
        if (ctx->pc != 0x245194u) { return; }
    }
    ctx->pc = 0x245194u;
label_245194:
    // 0x245194: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x245194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_245198:
    // 0x245198: 0x8fa512b8  lw          $a1, 0x12B8($sp)
    ctx->pc = 0x245198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4792)));
label_24519c:
    // 0x24519c: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x24519cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_2451a0:
    // 0x2451a0: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x2451a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_2451a4:
    // 0x2451a4: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x2451a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2451a8:
    // 0x2451a8: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
label_2451ac:
    if (ctx->pc == 0x2451ACu) {
        ctx->pc = 0x2451B0u;
        goto label_2451b0;
    }
    ctx->pc = 0x2451A8u;
    {
        const bool branch_taken_0x2451a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2451a8) {
            ctx->pc = 0x2451C0u;
            goto label_2451c0;
        }
    }
    ctx->pc = 0x2451B0u;
label_2451b0:
    // 0x2451b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2451b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2451b4:
    // 0x2451b4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2451b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2451b8:
    // 0x2451b8: 0x320f809  jalr        $t9
label_2451bc:
    if (ctx->pc == 0x2451BCu) {
        ctx->pc = 0x2451C0u;
        goto label_2451c0;
    }
    ctx->pc = 0x2451B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2451C0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2451C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2451C0u; }
            if (ctx->pc != 0x2451C0u) { return; }
        }
        }
    }
    ctx->pc = 0x2451C0u;
label_2451c0:
    // 0x2451c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2451c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2451c4:
    // 0x2451c4: 0xc091498  jal         func_245260
label_2451c8:
    if (ctx->pc == 0x2451C8u) {
        ctx->pc = 0x2451C8u;
            // 0x2451c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2451CCu;
        goto label_2451cc;
    }
    ctx->pc = 0x2451C4u;
    SET_GPR_U32(ctx, 31, 0x2451CCu);
    ctx->pc = 0x2451C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2451C4u;
            // 0x2451c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x245260u;
    if (runtime->hasFunction(0x245260u)) {
        auto targetFn = runtime->lookupFunction(0x245260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2451CCu; }
        if (ctx->pc != 0x2451CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245260_0x245260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2451CCu; }
        if (ctx->pc != 0x2451CCu) { return; }
    }
    ctx->pc = 0x2451CCu;
label_2451cc:
    // 0x2451cc: 0x24560010  addiu       $s6, $v0, 0x10
    ctx->pc = 0x2451ccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_2451d0:
    // 0x2451d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2451d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2451d4:
    // 0x2451d4: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x2451d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_2451d8:
    // 0x2451d8: 0xa2620007  sb          $v0, 0x7($s3)
    ctx->pc = 0x2451d8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 7), (uint8_t)GPR_U32(ctx, 2));
label_2451dc:
    // 0x2451dc: 0x24a5ea60  addiu       $a1, $a1, -0x15A0
    ctx->pc = 0x2451dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
label_2451e0:
    // 0x2451e0: 0x27a312c4  addiu       $v1, $sp, 0x12C4
    ctx->pc = 0x2451e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 4804));
label_2451e4:
    // 0x2451e4: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x2451e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_2451e8:
    // 0x2451e8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2451e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2451ec:
    // 0x2451ec: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2451ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2451f0:
    // 0x2451f0: 0xa3a212c4  sb          $v0, 0x12C4($sp)
    ctx->pc = 0x2451f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4804), (uint8_t)GPR_U32(ctx, 2));
label_2451f4:
    // 0x2451f4: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2451f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2451f8:
    // 0x2451f8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2451fc:
    if (ctx->pc == 0x2451FCu) {
        ctx->pc = 0x245200u;
        goto label_245200;
    }
    ctx->pc = 0x2451F8u;
    {
        const bool branch_taken_0x2451f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2451f8) {
            ctx->pc = 0x245228u;
            goto label_245228;
        }
    }
    ctx->pc = 0x245200u;
label_245200:
    // 0x245200: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x245200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_245204:
    // 0x245204: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x245204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_245208:
    // 0x245208: 0x2442cef0  addiu       $v0, $v0, -0x3110
    ctx->pc = 0x245208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954736));
label_24520c:
    // 0x24520c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x24520cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_245210:
    // 0x245210: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x245210u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_245214:
    // 0x245214: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x245214u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_245218:
    // 0x245218: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x245218u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_24521c:
    // 0x24521c: 0x2482000c  addiu       $v0, $a0, 0xC
    ctx->pc = 0x24521cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_245220:
    // 0x245220: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x245220u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_245224:
    // 0x245224: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x245224u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_245228:
    // 0x245228: 0x26c3000f  addiu       $v1, $s6, 0xF
    ctx->pc = 0x245228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 15));
label_24522c:
    // 0x24522c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x24522cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_245230:
    // 0x245230: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x245230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_245234:
    // 0x245234: 0x62b024  and         $s6, $v1, $v0
    ctx->pc = 0x245234u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_245238:
    // 0x245238: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x245238u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_24523c:
    // 0x24523c: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x24523cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_245240:
    // 0x245240: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x245240u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_245244:
    // 0x245244: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x245244u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_245248:
    // 0x245248: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x245248u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24524c:
    // 0x24524c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24524cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_245250:
    // 0x245250: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x245250u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_245254:
    // 0x245254: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x245254u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_245258:
    // 0x245258: 0x3e00008  jr          $ra
label_24525c:
    if (ctx->pc == 0x24525Cu) {
        ctx->pc = 0x24525Cu;
            // 0x24525c: 0x27bd12d0  addiu       $sp, $sp, 0x12D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4816));
        ctx->pc = 0x245260u;
        goto label_fallthrough_0x245258;
    }
    ctx->pc = 0x245258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24525Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245258u;
            // 0x24525c: 0x27bd12d0  addiu       $sp, $sp, 0x12D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4816));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x245258:
    ctx->pc = 0x245260u;
}
