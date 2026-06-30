#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00404190
// Address: 0x404190 - 0x4055d0
void sub_00404190_0x404190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00404190_0x404190");
#endif

    switch (ctx->pc) {
        case 0x404190u: goto label_404190;
        case 0x404194u: goto label_404194;
        case 0x404198u: goto label_404198;
        case 0x40419cu: goto label_40419c;
        case 0x4041a0u: goto label_4041a0;
        case 0x4041a4u: goto label_4041a4;
        case 0x4041a8u: goto label_4041a8;
        case 0x4041acu: goto label_4041ac;
        case 0x4041b0u: goto label_4041b0;
        case 0x4041b4u: goto label_4041b4;
        case 0x4041b8u: goto label_4041b8;
        case 0x4041bcu: goto label_4041bc;
        case 0x4041c0u: goto label_4041c0;
        case 0x4041c4u: goto label_4041c4;
        case 0x4041c8u: goto label_4041c8;
        case 0x4041ccu: goto label_4041cc;
        case 0x4041d0u: goto label_4041d0;
        case 0x4041d4u: goto label_4041d4;
        case 0x4041d8u: goto label_4041d8;
        case 0x4041dcu: goto label_4041dc;
        case 0x4041e0u: goto label_4041e0;
        case 0x4041e4u: goto label_4041e4;
        case 0x4041e8u: goto label_4041e8;
        case 0x4041ecu: goto label_4041ec;
        case 0x4041f0u: goto label_4041f0;
        case 0x4041f4u: goto label_4041f4;
        case 0x4041f8u: goto label_4041f8;
        case 0x4041fcu: goto label_4041fc;
        case 0x404200u: goto label_404200;
        case 0x404204u: goto label_404204;
        case 0x404208u: goto label_404208;
        case 0x40420cu: goto label_40420c;
        case 0x404210u: goto label_404210;
        case 0x404214u: goto label_404214;
        case 0x404218u: goto label_404218;
        case 0x40421cu: goto label_40421c;
        case 0x404220u: goto label_404220;
        case 0x404224u: goto label_404224;
        case 0x404228u: goto label_404228;
        case 0x40422cu: goto label_40422c;
        case 0x404230u: goto label_404230;
        case 0x404234u: goto label_404234;
        case 0x404238u: goto label_404238;
        case 0x40423cu: goto label_40423c;
        case 0x404240u: goto label_404240;
        case 0x404244u: goto label_404244;
        case 0x404248u: goto label_404248;
        case 0x40424cu: goto label_40424c;
        case 0x404250u: goto label_404250;
        case 0x404254u: goto label_404254;
        case 0x404258u: goto label_404258;
        case 0x40425cu: goto label_40425c;
        case 0x404260u: goto label_404260;
        case 0x404264u: goto label_404264;
        case 0x404268u: goto label_404268;
        case 0x40426cu: goto label_40426c;
        case 0x404270u: goto label_404270;
        case 0x404274u: goto label_404274;
        case 0x404278u: goto label_404278;
        case 0x40427cu: goto label_40427c;
        case 0x404280u: goto label_404280;
        case 0x404284u: goto label_404284;
        case 0x404288u: goto label_404288;
        case 0x40428cu: goto label_40428c;
        case 0x404290u: goto label_404290;
        case 0x404294u: goto label_404294;
        case 0x404298u: goto label_404298;
        case 0x40429cu: goto label_40429c;
        case 0x4042a0u: goto label_4042a0;
        case 0x4042a4u: goto label_4042a4;
        case 0x4042a8u: goto label_4042a8;
        case 0x4042acu: goto label_4042ac;
        case 0x4042b0u: goto label_4042b0;
        case 0x4042b4u: goto label_4042b4;
        case 0x4042b8u: goto label_4042b8;
        case 0x4042bcu: goto label_4042bc;
        case 0x4042c0u: goto label_4042c0;
        case 0x4042c4u: goto label_4042c4;
        case 0x4042c8u: goto label_4042c8;
        case 0x4042ccu: goto label_4042cc;
        case 0x4042d0u: goto label_4042d0;
        case 0x4042d4u: goto label_4042d4;
        case 0x4042d8u: goto label_4042d8;
        case 0x4042dcu: goto label_4042dc;
        case 0x4042e0u: goto label_4042e0;
        case 0x4042e4u: goto label_4042e4;
        case 0x4042e8u: goto label_4042e8;
        case 0x4042ecu: goto label_4042ec;
        case 0x4042f0u: goto label_4042f0;
        case 0x4042f4u: goto label_4042f4;
        case 0x4042f8u: goto label_4042f8;
        case 0x4042fcu: goto label_4042fc;
        case 0x404300u: goto label_404300;
        case 0x404304u: goto label_404304;
        case 0x404308u: goto label_404308;
        case 0x40430cu: goto label_40430c;
        case 0x404310u: goto label_404310;
        case 0x404314u: goto label_404314;
        case 0x404318u: goto label_404318;
        case 0x40431cu: goto label_40431c;
        case 0x404320u: goto label_404320;
        case 0x404324u: goto label_404324;
        case 0x404328u: goto label_404328;
        case 0x40432cu: goto label_40432c;
        case 0x404330u: goto label_404330;
        case 0x404334u: goto label_404334;
        case 0x404338u: goto label_404338;
        case 0x40433cu: goto label_40433c;
        case 0x404340u: goto label_404340;
        case 0x404344u: goto label_404344;
        case 0x404348u: goto label_404348;
        case 0x40434cu: goto label_40434c;
        case 0x404350u: goto label_404350;
        case 0x404354u: goto label_404354;
        case 0x404358u: goto label_404358;
        case 0x40435cu: goto label_40435c;
        case 0x404360u: goto label_404360;
        case 0x404364u: goto label_404364;
        case 0x404368u: goto label_404368;
        case 0x40436cu: goto label_40436c;
        case 0x404370u: goto label_404370;
        case 0x404374u: goto label_404374;
        case 0x404378u: goto label_404378;
        case 0x40437cu: goto label_40437c;
        case 0x404380u: goto label_404380;
        case 0x404384u: goto label_404384;
        case 0x404388u: goto label_404388;
        case 0x40438cu: goto label_40438c;
        case 0x404390u: goto label_404390;
        case 0x404394u: goto label_404394;
        case 0x404398u: goto label_404398;
        case 0x40439cu: goto label_40439c;
        case 0x4043a0u: goto label_4043a0;
        case 0x4043a4u: goto label_4043a4;
        case 0x4043a8u: goto label_4043a8;
        case 0x4043acu: goto label_4043ac;
        case 0x4043b0u: goto label_4043b0;
        case 0x4043b4u: goto label_4043b4;
        case 0x4043b8u: goto label_4043b8;
        case 0x4043bcu: goto label_4043bc;
        case 0x4043c0u: goto label_4043c0;
        case 0x4043c4u: goto label_4043c4;
        case 0x4043c8u: goto label_4043c8;
        case 0x4043ccu: goto label_4043cc;
        case 0x4043d0u: goto label_4043d0;
        case 0x4043d4u: goto label_4043d4;
        case 0x4043d8u: goto label_4043d8;
        case 0x4043dcu: goto label_4043dc;
        case 0x4043e0u: goto label_4043e0;
        case 0x4043e4u: goto label_4043e4;
        case 0x4043e8u: goto label_4043e8;
        case 0x4043ecu: goto label_4043ec;
        case 0x4043f0u: goto label_4043f0;
        case 0x4043f4u: goto label_4043f4;
        case 0x4043f8u: goto label_4043f8;
        case 0x4043fcu: goto label_4043fc;
        case 0x404400u: goto label_404400;
        case 0x404404u: goto label_404404;
        case 0x404408u: goto label_404408;
        case 0x40440cu: goto label_40440c;
        case 0x404410u: goto label_404410;
        case 0x404414u: goto label_404414;
        case 0x404418u: goto label_404418;
        case 0x40441cu: goto label_40441c;
        case 0x404420u: goto label_404420;
        case 0x404424u: goto label_404424;
        case 0x404428u: goto label_404428;
        case 0x40442cu: goto label_40442c;
        case 0x404430u: goto label_404430;
        case 0x404434u: goto label_404434;
        case 0x404438u: goto label_404438;
        case 0x40443cu: goto label_40443c;
        case 0x404440u: goto label_404440;
        case 0x404444u: goto label_404444;
        case 0x404448u: goto label_404448;
        case 0x40444cu: goto label_40444c;
        case 0x404450u: goto label_404450;
        case 0x404454u: goto label_404454;
        case 0x404458u: goto label_404458;
        case 0x40445cu: goto label_40445c;
        case 0x404460u: goto label_404460;
        case 0x404464u: goto label_404464;
        case 0x404468u: goto label_404468;
        case 0x40446cu: goto label_40446c;
        case 0x404470u: goto label_404470;
        case 0x404474u: goto label_404474;
        case 0x404478u: goto label_404478;
        case 0x40447cu: goto label_40447c;
        case 0x404480u: goto label_404480;
        case 0x404484u: goto label_404484;
        case 0x404488u: goto label_404488;
        case 0x40448cu: goto label_40448c;
        case 0x404490u: goto label_404490;
        case 0x404494u: goto label_404494;
        case 0x404498u: goto label_404498;
        case 0x40449cu: goto label_40449c;
        case 0x4044a0u: goto label_4044a0;
        case 0x4044a4u: goto label_4044a4;
        case 0x4044a8u: goto label_4044a8;
        case 0x4044acu: goto label_4044ac;
        case 0x4044b0u: goto label_4044b0;
        case 0x4044b4u: goto label_4044b4;
        case 0x4044b8u: goto label_4044b8;
        case 0x4044bcu: goto label_4044bc;
        case 0x4044c0u: goto label_4044c0;
        case 0x4044c4u: goto label_4044c4;
        case 0x4044c8u: goto label_4044c8;
        case 0x4044ccu: goto label_4044cc;
        case 0x4044d0u: goto label_4044d0;
        case 0x4044d4u: goto label_4044d4;
        case 0x4044d8u: goto label_4044d8;
        case 0x4044dcu: goto label_4044dc;
        case 0x4044e0u: goto label_4044e0;
        case 0x4044e4u: goto label_4044e4;
        case 0x4044e8u: goto label_4044e8;
        case 0x4044ecu: goto label_4044ec;
        case 0x4044f0u: goto label_4044f0;
        case 0x4044f4u: goto label_4044f4;
        case 0x4044f8u: goto label_4044f8;
        case 0x4044fcu: goto label_4044fc;
        case 0x404500u: goto label_404500;
        case 0x404504u: goto label_404504;
        case 0x404508u: goto label_404508;
        case 0x40450cu: goto label_40450c;
        case 0x404510u: goto label_404510;
        case 0x404514u: goto label_404514;
        case 0x404518u: goto label_404518;
        case 0x40451cu: goto label_40451c;
        case 0x404520u: goto label_404520;
        case 0x404524u: goto label_404524;
        case 0x404528u: goto label_404528;
        case 0x40452cu: goto label_40452c;
        case 0x404530u: goto label_404530;
        case 0x404534u: goto label_404534;
        case 0x404538u: goto label_404538;
        case 0x40453cu: goto label_40453c;
        case 0x404540u: goto label_404540;
        case 0x404544u: goto label_404544;
        case 0x404548u: goto label_404548;
        case 0x40454cu: goto label_40454c;
        case 0x404550u: goto label_404550;
        case 0x404554u: goto label_404554;
        case 0x404558u: goto label_404558;
        case 0x40455cu: goto label_40455c;
        case 0x404560u: goto label_404560;
        case 0x404564u: goto label_404564;
        case 0x404568u: goto label_404568;
        case 0x40456cu: goto label_40456c;
        case 0x404570u: goto label_404570;
        case 0x404574u: goto label_404574;
        case 0x404578u: goto label_404578;
        case 0x40457cu: goto label_40457c;
        case 0x404580u: goto label_404580;
        case 0x404584u: goto label_404584;
        case 0x404588u: goto label_404588;
        case 0x40458cu: goto label_40458c;
        case 0x404590u: goto label_404590;
        case 0x404594u: goto label_404594;
        case 0x404598u: goto label_404598;
        case 0x40459cu: goto label_40459c;
        case 0x4045a0u: goto label_4045a0;
        case 0x4045a4u: goto label_4045a4;
        case 0x4045a8u: goto label_4045a8;
        case 0x4045acu: goto label_4045ac;
        case 0x4045b0u: goto label_4045b0;
        case 0x4045b4u: goto label_4045b4;
        case 0x4045b8u: goto label_4045b8;
        case 0x4045bcu: goto label_4045bc;
        case 0x4045c0u: goto label_4045c0;
        case 0x4045c4u: goto label_4045c4;
        case 0x4045c8u: goto label_4045c8;
        case 0x4045ccu: goto label_4045cc;
        case 0x4045d0u: goto label_4045d0;
        case 0x4045d4u: goto label_4045d4;
        case 0x4045d8u: goto label_4045d8;
        case 0x4045dcu: goto label_4045dc;
        case 0x4045e0u: goto label_4045e0;
        case 0x4045e4u: goto label_4045e4;
        case 0x4045e8u: goto label_4045e8;
        case 0x4045ecu: goto label_4045ec;
        case 0x4045f0u: goto label_4045f0;
        case 0x4045f4u: goto label_4045f4;
        case 0x4045f8u: goto label_4045f8;
        case 0x4045fcu: goto label_4045fc;
        case 0x404600u: goto label_404600;
        case 0x404604u: goto label_404604;
        case 0x404608u: goto label_404608;
        case 0x40460cu: goto label_40460c;
        case 0x404610u: goto label_404610;
        case 0x404614u: goto label_404614;
        case 0x404618u: goto label_404618;
        case 0x40461cu: goto label_40461c;
        case 0x404620u: goto label_404620;
        case 0x404624u: goto label_404624;
        case 0x404628u: goto label_404628;
        case 0x40462cu: goto label_40462c;
        case 0x404630u: goto label_404630;
        case 0x404634u: goto label_404634;
        case 0x404638u: goto label_404638;
        case 0x40463cu: goto label_40463c;
        case 0x404640u: goto label_404640;
        case 0x404644u: goto label_404644;
        case 0x404648u: goto label_404648;
        case 0x40464cu: goto label_40464c;
        case 0x404650u: goto label_404650;
        case 0x404654u: goto label_404654;
        case 0x404658u: goto label_404658;
        case 0x40465cu: goto label_40465c;
        case 0x404660u: goto label_404660;
        case 0x404664u: goto label_404664;
        case 0x404668u: goto label_404668;
        case 0x40466cu: goto label_40466c;
        case 0x404670u: goto label_404670;
        case 0x404674u: goto label_404674;
        case 0x404678u: goto label_404678;
        case 0x40467cu: goto label_40467c;
        case 0x404680u: goto label_404680;
        case 0x404684u: goto label_404684;
        case 0x404688u: goto label_404688;
        case 0x40468cu: goto label_40468c;
        case 0x404690u: goto label_404690;
        case 0x404694u: goto label_404694;
        case 0x404698u: goto label_404698;
        case 0x40469cu: goto label_40469c;
        case 0x4046a0u: goto label_4046a0;
        case 0x4046a4u: goto label_4046a4;
        case 0x4046a8u: goto label_4046a8;
        case 0x4046acu: goto label_4046ac;
        case 0x4046b0u: goto label_4046b0;
        case 0x4046b4u: goto label_4046b4;
        case 0x4046b8u: goto label_4046b8;
        case 0x4046bcu: goto label_4046bc;
        case 0x4046c0u: goto label_4046c0;
        case 0x4046c4u: goto label_4046c4;
        case 0x4046c8u: goto label_4046c8;
        case 0x4046ccu: goto label_4046cc;
        case 0x4046d0u: goto label_4046d0;
        case 0x4046d4u: goto label_4046d4;
        case 0x4046d8u: goto label_4046d8;
        case 0x4046dcu: goto label_4046dc;
        case 0x4046e0u: goto label_4046e0;
        case 0x4046e4u: goto label_4046e4;
        case 0x4046e8u: goto label_4046e8;
        case 0x4046ecu: goto label_4046ec;
        case 0x4046f0u: goto label_4046f0;
        case 0x4046f4u: goto label_4046f4;
        case 0x4046f8u: goto label_4046f8;
        case 0x4046fcu: goto label_4046fc;
        case 0x404700u: goto label_404700;
        case 0x404704u: goto label_404704;
        case 0x404708u: goto label_404708;
        case 0x40470cu: goto label_40470c;
        case 0x404710u: goto label_404710;
        case 0x404714u: goto label_404714;
        case 0x404718u: goto label_404718;
        case 0x40471cu: goto label_40471c;
        case 0x404720u: goto label_404720;
        case 0x404724u: goto label_404724;
        case 0x404728u: goto label_404728;
        case 0x40472cu: goto label_40472c;
        case 0x404730u: goto label_404730;
        case 0x404734u: goto label_404734;
        case 0x404738u: goto label_404738;
        case 0x40473cu: goto label_40473c;
        case 0x404740u: goto label_404740;
        case 0x404744u: goto label_404744;
        case 0x404748u: goto label_404748;
        case 0x40474cu: goto label_40474c;
        case 0x404750u: goto label_404750;
        case 0x404754u: goto label_404754;
        case 0x404758u: goto label_404758;
        case 0x40475cu: goto label_40475c;
        case 0x404760u: goto label_404760;
        case 0x404764u: goto label_404764;
        case 0x404768u: goto label_404768;
        case 0x40476cu: goto label_40476c;
        case 0x404770u: goto label_404770;
        case 0x404774u: goto label_404774;
        case 0x404778u: goto label_404778;
        case 0x40477cu: goto label_40477c;
        case 0x404780u: goto label_404780;
        case 0x404784u: goto label_404784;
        case 0x404788u: goto label_404788;
        case 0x40478cu: goto label_40478c;
        case 0x404790u: goto label_404790;
        case 0x404794u: goto label_404794;
        case 0x404798u: goto label_404798;
        case 0x40479cu: goto label_40479c;
        case 0x4047a0u: goto label_4047a0;
        case 0x4047a4u: goto label_4047a4;
        case 0x4047a8u: goto label_4047a8;
        case 0x4047acu: goto label_4047ac;
        case 0x4047b0u: goto label_4047b0;
        case 0x4047b4u: goto label_4047b4;
        case 0x4047b8u: goto label_4047b8;
        case 0x4047bcu: goto label_4047bc;
        case 0x4047c0u: goto label_4047c0;
        case 0x4047c4u: goto label_4047c4;
        case 0x4047c8u: goto label_4047c8;
        case 0x4047ccu: goto label_4047cc;
        case 0x4047d0u: goto label_4047d0;
        case 0x4047d4u: goto label_4047d4;
        case 0x4047d8u: goto label_4047d8;
        case 0x4047dcu: goto label_4047dc;
        case 0x4047e0u: goto label_4047e0;
        case 0x4047e4u: goto label_4047e4;
        case 0x4047e8u: goto label_4047e8;
        case 0x4047ecu: goto label_4047ec;
        case 0x4047f0u: goto label_4047f0;
        case 0x4047f4u: goto label_4047f4;
        case 0x4047f8u: goto label_4047f8;
        case 0x4047fcu: goto label_4047fc;
        case 0x404800u: goto label_404800;
        case 0x404804u: goto label_404804;
        case 0x404808u: goto label_404808;
        case 0x40480cu: goto label_40480c;
        case 0x404810u: goto label_404810;
        case 0x404814u: goto label_404814;
        case 0x404818u: goto label_404818;
        case 0x40481cu: goto label_40481c;
        case 0x404820u: goto label_404820;
        case 0x404824u: goto label_404824;
        case 0x404828u: goto label_404828;
        case 0x40482cu: goto label_40482c;
        case 0x404830u: goto label_404830;
        case 0x404834u: goto label_404834;
        case 0x404838u: goto label_404838;
        case 0x40483cu: goto label_40483c;
        case 0x404840u: goto label_404840;
        case 0x404844u: goto label_404844;
        case 0x404848u: goto label_404848;
        case 0x40484cu: goto label_40484c;
        case 0x404850u: goto label_404850;
        case 0x404854u: goto label_404854;
        case 0x404858u: goto label_404858;
        case 0x40485cu: goto label_40485c;
        case 0x404860u: goto label_404860;
        case 0x404864u: goto label_404864;
        case 0x404868u: goto label_404868;
        case 0x40486cu: goto label_40486c;
        case 0x404870u: goto label_404870;
        case 0x404874u: goto label_404874;
        case 0x404878u: goto label_404878;
        case 0x40487cu: goto label_40487c;
        case 0x404880u: goto label_404880;
        case 0x404884u: goto label_404884;
        case 0x404888u: goto label_404888;
        case 0x40488cu: goto label_40488c;
        case 0x404890u: goto label_404890;
        case 0x404894u: goto label_404894;
        case 0x404898u: goto label_404898;
        case 0x40489cu: goto label_40489c;
        case 0x4048a0u: goto label_4048a0;
        case 0x4048a4u: goto label_4048a4;
        case 0x4048a8u: goto label_4048a8;
        case 0x4048acu: goto label_4048ac;
        case 0x4048b0u: goto label_4048b0;
        case 0x4048b4u: goto label_4048b4;
        case 0x4048b8u: goto label_4048b8;
        case 0x4048bcu: goto label_4048bc;
        case 0x4048c0u: goto label_4048c0;
        case 0x4048c4u: goto label_4048c4;
        case 0x4048c8u: goto label_4048c8;
        case 0x4048ccu: goto label_4048cc;
        case 0x4048d0u: goto label_4048d0;
        case 0x4048d4u: goto label_4048d4;
        case 0x4048d8u: goto label_4048d8;
        case 0x4048dcu: goto label_4048dc;
        case 0x4048e0u: goto label_4048e0;
        case 0x4048e4u: goto label_4048e4;
        case 0x4048e8u: goto label_4048e8;
        case 0x4048ecu: goto label_4048ec;
        case 0x4048f0u: goto label_4048f0;
        case 0x4048f4u: goto label_4048f4;
        case 0x4048f8u: goto label_4048f8;
        case 0x4048fcu: goto label_4048fc;
        case 0x404900u: goto label_404900;
        case 0x404904u: goto label_404904;
        case 0x404908u: goto label_404908;
        case 0x40490cu: goto label_40490c;
        case 0x404910u: goto label_404910;
        case 0x404914u: goto label_404914;
        case 0x404918u: goto label_404918;
        case 0x40491cu: goto label_40491c;
        case 0x404920u: goto label_404920;
        case 0x404924u: goto label_404924;
        case 0x404928u: goto label_404928;
        case 0x40492cu: goto label_40492c;
        case 0x404930u: goto label_404930;
        case 0x404934u: goto label_404934;
        case 0x404938u: goto label_404938;
        case 0x40493cu: goto label_40493c;
        case 0x404940u: goto label_404940;
        case 0x404944u: goto label_404944;
        case 0x404948u: goto label_404948;
        case 0x40494cu: goto label_40494c;
        case 0x404950u: goto label_404950;
        case 0x404954u: goto label_404954;
        case 0x404958u: goto label_404958;
        case 0x40495cu: goto label_40495c;
        case 0x404960u: goto label_404960;
        case 0x404964u: goto label_404964;
        case 0x404968u: goto label_404968;
        case 0x40496cu: goto label_40496c;
        case 0x404970u: goto label_404970;
        case 0x404974u: goto label_404974;
        case 0x404978u: goto label_404978;
        case 0x40497cu: goto label_40497c;
        case 0x404980u: goto label_404980;
        case 0x404984u: goto label_404984;
        case 0x404988u: goto label_404988;
        case 0x40498cu: goto label_40498c;
        case 0x404990u: goto label_404990;
        case 0x404994u: goto label_404994;
        case 0x404998u: goto label_404998;
        case 0x40499cu: goto label_40499c;
        case 0x4049a0u: goto label_4049a0;
        case 0x4049a4u: goto label_4049a4;
        case 0x4049a8u: goto label_4049a8;
        case 0x4049acu: goto label_4049ac;
        case 0x4049b0u: goto label_4049b0;
        case 0x4049b4u: goto label_4049b4;
        case 0x4049b8u: goto label_4049b8;
        case 0x4049bcu: goto label_4049bc;
        case 0x4049c0u: goto label_4049c0;
        case 0x4049c4u: goto label_4049c4;
        case 0x4049c8u: goto label_4049c8;
        case 0x4049ccu: goto label_4049cc;
        case 0x4049d0u: goto label_4049d0;
        case 0x4049d4u: goto label_4049d4;
        case 0x4049d8u: goto label_4049d8;
        case 0x4049dcu: goto label_4049dc;
        case 0x4049e0u: goto label_4049e0;
        case 0x4049e4u: goto label_4049e4;
        case 0x4049e8u: goto label_4049e8;
        case 0x4049ecu: goto label_4049ec;
        case 0x4049f0u: goto label_4049f0;
        case 0x4049f4u: goto label_4049f4;
        case 0x4049f8u: goto label_4049f8;
        case 0x4049fcu: goto label_4049fc;
        case 0x404a00u: goto label_404a00;
        case 0x404a04u: goto label_404a04;
        case 0x404a08u: goto label_404a08;
        case 0x404a0cu: goto label_404a0c;
        case 0x404a10u: goto label_404a10;
        case 0x404a14u: goto label_404a14;
        case 0x404a18u: goto label_404a18;
        case 0x404a1cu: goto label_404a1c;
        case 0x404a20u: goto label_404a20;
        case 0x404a24u: goto label_404a24;
        case 0x404a28u: goto label_404a28;
        case 0x404a2cu: goto label_404a2c;
        case 0x404a30u: goto label_404a30;
        case 0x404a34u: goto label_404a34;
        case 0x404a38u: goto label_404a38;
        case 0x404a3cu: goto label_404a3c;
        case 0x404a40u: goto label_404a40;
        case 0x404a44u: goto label_404a44;
        case 0x404a48u: goto label_404a48;
        case 0x404a4cu: goto label_404a4c;
        case 0x404a50u: goto label_404a50;
        case 0x404a54u: goto label_404a54;
        case 0x404a58u: goto label_404a58;
        case 0x404a5cu: goto label_404a5c;
        case 0x404a60u: goto label_404a60;
        case 0x404a64u: goto label_404a64;
        case 0x404a68u: goto label_404a68;
        case 0x404a6cu: goto label_404a6c;
        case 0x404a70u: goto label_404a70;
        case 0x404a74u: goto label_404a74;
        case 0x404a78u: goto label_404a78;
        case 0x404a7cu: goto label_404a7c;
        case 0x404a80u: goto label_404a80;
        case 0x404a84u: goto label_404a84;
        case 0x404a88u: goto label_404a88;
        case 0x404a8cu: goto label_404a8c;
        case 0x404a90u: goto label_404a90;
        case 0x404a94u: goto label_404a94;
        case 0x404a98u: goto label_404a98;
        case 0x404a9cu: goto label_404a9c;
        case 0x404aa0u: goto label_404aa0;
        case 0x404aa4u: goto label_404aa4;
        case 0x404aa8u: goto label_404aa8;
        case 0x404aacu: goto label_404aac;
        case 0x404ab0u: goto label_404ab0;
        case 0x404ab4u: goto label_404ab4;
        case 0x404ab8u: goto label_404ab8;
        case 0x404abcu: goto label_404abc;
        case 0x404ac0u: goto label_404ac0;
        case 0x404ac4u: goto label_404ac4;
        case 0x404ac8u: goto label_404ac8;
        case 0x404accu: goto label_404acc;
        case 0x404ad0u: goto label_404ad0;
        case 0x404ad4u: goto label_404ad4;
        case 0x404ad8u: goto label_404ad8;
        case 0x404adcu: goto label_404adc;
        case 0x404ae0u: goto label_404ae0;
        case 0x404ae4u: goto label_404ae4;
        case 0x404ae8u: goto label_404ae8;
        case 0x404aecu: goto label_404aec;
        case 0x404af0u: goto label_404af0;
        case 0x404af4u: goto label_404af4;
        case 0x404af8u: goto label_404af8;
        case 0x404afcu: goto label_404afc;
        case 0x404b00u: goto label_404b00;
        case 0x404b04u: goto label_404b04;
        case 0x404b08u: goto label_404b08;
        case 0x404b0cu: goto label_404b0c;
        case 0x404b10u: goto label_404b10;
        case 0x404b14u: goto label_404b14;
        case 0x404b18u: goto label_404b18;
        case 0x404b1cu: goto label_404b1c;
        case 0x404b20u: goto label_404b20;
        case 0x404b24u: goto label_404b24;
        case 0x404b28u: goto label_404b28;
        case 0x404b2cu: goto label_404b2c;
        case 0x404b30u: goto label_404b30;
        case 0x404b34u: goto label_404b34;
        case 0x404b38u: goto label_404b38;
        case 0x404b3cu: goto label_404b3c;
        case 0x404b40u: goto label_404b40;
        case 0x404b44u: goto label_404b44;
        case 0x404b48u: goto label_404b48;
        case 0x404b4cu: goto label_404b4c;
        case 0x404b50u: goto label_404b50;
        case 0x404b54u: goto label_404b54;
        case 0x404b58u: goto label_404b58;
        case 0x404b5cu: goto label_404b5c;
        case 0x404b60u: goto label_404b60;
        case 0x404b64u: goto label_404b64;
        case 0x404b68u: goto label_404b68;
        case 0x404b6cu: goto label_404b6c;
        case 0x404b70u: goto label_404b70;
        case 0x404b74u: goto label_404b74;
        case 0x404b78u: goto label_404b78;
        case 0x404b7cu: goto label_404b7c;
        case 0x404b80u: goto label_404b80;
        case 0x404b84u: goto label_404b84;
        case 0x404b88u: goto label_404b88;
        case 0x404b8cu: goto label_404b8c;
        case 0x404b90u: goto label_404b90;
        case 0x404b94u: goto label_404b94;
        case 0x404b98u: goto label_404b98;
        case 0x404b9cu: goto label_404b9c;
        case 0x404ba0u: goto label_404ba0;
        case 0x404ba4u: goto label_404ba4;
        case 0x404ba8u: goto label_404ba8;
        case 0x404bacu: goto label_404bac;
        case 0x404bb0u: goto label_404bb0;
        case 0x404bb4u: goto label_404bb4;
        case 0x404bb8u: goto label_404bb8;
        case 0x404bbcu: goto label_404bbc;
        case 0x404bc0u: goto label_404bc0;
        case 0x404bc4u: goto label_404bc4;
        case 0x404bc8u: goto label_404bc8;
        case 0x404bccu: goto label_404bcc;
        case 0x404bd0u: goto label_404bd0;
        case 0x404bd4u: goto label_404bd4;
        case 0x404bd8u: goto label_404bd8;
        case 0x404bdcu: goto label_404bdc;
        case 0x404be0u: goto label_404be0;
        case 0x404be4u: goto label_404be4;
        case 0x404be8u: goto label_404be8;
        case 0x404becu: goto label_404bec;
        case 0x404bf0u: goto label_404bf0;
        case 0x404bf4u: goto label_404bf4;
        case 0x404bf8u: goto label_404bf8;
        case 0x404bfcu: goto label_404bfc;
        case 0x404c00u: goto label_404c00;
        case 0x404c04u: goto label_404c04;
        case 0x404c08u: goto label_404c08;
        case 0x404c0cu: goto label_404c0c;
        case 0x404c10u: goto label_404c10;
        case 0x404c14u: goto label_404c14;
        case 0x404c18u: goto label_404c18;
        case 0x404c1cu: goto label_404c1c;
        case 0x404c20u: goto label_404c20;
        case 0x404c24u: goto label_404c24;
        case 0x404c28u: goto label_404c28;
        case 0x404c2cu: goto label_404c2c;
        case 0x404c30u: goto label_404c30;
        case 0x404c34u: goto label_404c34;
        case 0x404c38u: goto label_404c38;
        case 0x404c3cu: goto label_404c3c;
        case 0x404c40u: goto label_404c40;
        case 0x404c44u: goto label_404c44;
        case 0x404c48u: goto label_404c48;
        case 0x404c4cu: goto label_404c4c;
        case 0x404c50u: goto label_404c50;
        case 0x404c54u: goto label_404c54;
        case 0x404c58u: goto label_404c58;
        case 0x404c5cu: goto label_404c5c;
        case 0x404c60u: goto label_404c60;
        case 0x404c64u: goto label_404c64;
        case 0x404c68u: goto label_404c68;
        case 0x404c6cu: goto label_404c6c;
        case 0x404c70u: goto label_404c70;
        case 0x404c74u: goto label_404c74;
        case 0x404c78u: goto label_404c78;
        case 0x404c7cu: goto label_404c7c;
        case 0x404c80u: goto label_404c80;
        case 0x404c84u: goto label_404c84;
        case 0x404c88u: goto label_404c88;
        case 0x404c8cu: goto label_404c8c;
        case 0x404c90u: goto label_404c90;
        case 0x404c94u: goto label_404c94;
        case 0x404c98u: goto label_404c98;
        case 0x404c9cu: goto label_404c9c;
        case 0x404ca0u: goto label_404ca0;
        case 0x404ca4u: goto label_404ca4;
        case 0x404ca8u: goto label_404ca8;
        case 0x404cacu: goto label_404cac;
        case 0x404cb0u: goto label_404cb0;
        case 0x404cb4u: goto label_404cb4;
        case 0x404cb8u: goto label_404cb8;
        case 0x404cbcu: goto label_404cbc;
        case 0x404cc0u: goto label_404cc0;
        case 0x404cc4u: goto label_404cc4;
        case 0x404cc8u: goto label_404cc8;
        case 0x404cccu: goto label_404ccc;
        case 0x404cd0u: goto label_404cd0;
        case 0x404cd4u: goto label_404cd4;
        case 0x404cd8u: goto label_404cd8;
        case 0x404cdcu: goto label_404cdc;
        case 0x404ce0u: goto label_404ce0;
        case 0x404ce4u: goto label_404ce4;
        case 0x404ce8u: goto label_404ce8;
        case 0x404cecu: goto label_404cec;
        case 0x404cf0u: goto label_404cf0;
        case 0x404cf4u: goto label_404cf4;
        case 0x404cf8u: goto label_404cf8;
        case 0x404cfcu: goto label_404cfc;
        case 0x404d00u: goto label_404d00;
        case 0x404d04u: goto label_404d04;
        case 0x404d08u: goto label_404d08;
        case 0x404d0cu: goto label_404d0c;
        case 0x404d10u: goto label_404d10;
        case 0x404d14u: goto label_404d14;
        case 0x404d18u: goto label_404d18;
        case 0x404d1cu: goto label_404d1c;
        case 0x404d20u: goto label_404d20;
        case 0x404d24u: goto label_404d24;
        case 0x404d28u: goto label_404d28;
        case 0x404d2cu: goto label_404d2c;
        case 0x404d30u: goto label_404d30;
        case 0x404d34u: goto label_404d34;
        case 0x404d38u: goto label_404d38;
        case 0x404d3cu: goto label_404d3c;
        case 0x404d40u: goto label_404d40;
        case 0x404d44u: goto label_404d44;
        case 0x404d48u: goto label_404d48;
        case 0x404d4cu: goto label_404d4c;
        case 0x404d50u: goto label_404d50;
        case 0x404d54u: goto label_404d54;
        case 0x404d58u: goto label_404d58;
        case 0x404d5cu: goto label_404d5c;
        case 0x404d60u: goto label_404d60;
        case 0x404d64u: goto label_404d64;
        case 0x404d68u: goto label_404d68;
        case 0x404d6cu: goto label_404d6c;
        case 0x404d70u: goto label_404d70;
        case 0x404d74u: goto label_404d74;
        case 0x404d78u: goto label_404d78;
        case 0x404d7cu: goto label_404d7c;
        case 0x404d80u: goto label_404d80;
        case 0x404d84u: goto label_404d84;
        case 0x404d88u: goto label_404d88;
        case 0x404d8cu: goto label_404d8c;
        case 0x404d90u: goto label_404d90;
        case 0x404d94u: goto label_404d94;
        case 0x404d98u: goto label_404d98;
        case 0x404d9cu: goto label_404d9c;
        case 0x404da0u: goto label_404da0;
        case 0x404da4u: goto label_404da4;
        case 0x404da8u: goto label_404da8;
        case 0x404dacu: goto label_404dac;
        case 0x404db0u: goto label_404db0;
        case 0x404db4u: goto label_404db4;
        case 0x404db8u: goto label_404db8;
        case 0x404dbcu: goto label_404dbc;
        case 0x404dc0u: goto label_404dc0;
        case 0x404dc4u: goto label_404dc4;
        case 0x404dc8u: goto label_404dc8;
        case 0x404dccu: goto label_404dcc;
        case 0x404dd0u: goto label_404dd0;
        case 0x404dd4u: goto label_404dd4;
        case 0x404dd8u: goto label_404dd8;
        case 0x404ddcu: goto label_404ddc;
        case 0x404de0u: goto label_404de0;
        case 0x404de4u: goto label_404de4;
        case 0x404de8u: goto label_404de8;
        case 0x404decu: goto label_404dec;
        case 0x404df0u: goto label_404df0;
        case 0x404df4u: goto label_404df4;
        case 0x404df8u: goto label_404df8;
        case 0x404dfcu: goto label_404dfc;
        case 0x404e00u: goto label_404e00;
        case 0x404e04u: goto label_404e04;
        case 0x404e08u: goto label_404e08;
        case 0x404e0cu: goto label_404e0c;
        case 0x404e10u: goto label_404e10;
        case 0x404e14u: goto label_404e14;
        case 0x404e18u: goto label_404e18;
        case 0x404e1cu: goto label_404e1c;
        case 0x404e20u: goto label_404e20;
        case 0x404e24u: goto label_404e24;
        case 0x404e28u: goto label_404e28;
        case 0x404e2cu: goto label_404e2c;
        case 0x404e30u: goto label_404e30;
        case 0x404e34u: goto label_404e34;
        case 0x404e38u: goto label_404e38;
        case 0x404e3cu: goto label_404e3c;
        case 0x404e40u: goto label_404e40;
        case 0x404e44u: goto label_404e44;
        case 0x404e48u: goto label_404e48;
        case 0x404e4cu: goto label_404e4c;
        case 0x404e50u: goto label_404e50;
        case 0x404e54u: goto label_404e54;
        case 0x404e58u: goto label_404e58;
        case 0x404e5cu: goto label_404e5c;
        case 0x404e60u: goto label_404e60;
        case 0x404e64u: goto label_404e64;
        case 0x404e68u: goto label_404e68;
        case 0x404e6cu: goto label_404e6c;
        case 0x404e70u: goto label_404e70;
        case 0x404e74u: goto label_404e74;
        case 0x404e78u: goto label_404e78;
        case 0x404e7cu: goto label_404e7c;
        case 0x404e80u: goto label_404e80;
        case 0x404e84u: goto label_404e84;
        case 0x404e88u: goto label_404e88;
        case 0x404e8cu: goto label_404e8c;
        case 0x404e90u: goto label_404e90;
        case 0x404e94u: goto label_404e94;
        case 0x404e98u: goto label_404e98;
        case 0x404e9cu: goto label_404e9c;
        case 0x404ea0u: goto label_404ea0;
        case 0x404ea4u: goto label_404ea4;
        case 0x404ea8u: goto label_404ea8;
        case 0x404eacu: goto label_404eac;
        case 0x404eb0u: goto label_404eb0;
        case 0x404eb4u: goto label_404eb4;
        case 0x404eb8u: goto label_404eb8;
        case 0x404ebcu: goto label_404ebc;
        case 0x404ec0u: goto label_404ec0;
        case 0x404ec4u: goto label_404ec4;
        case 0x404ec8u: goto label_404ec8;
        case 0x404eccu: goto label_404ecc;
        case 0x404ed0u: goto label_404ed0;
        case 0x404ed4u: goto label_404ed4;
        case 0x404ed8u: goto label_404ed8;
        case 0x404edcu: goto label_404edc;
        case 0x404ee0u: goto label_404ee0;
        case 0x404ee4u: goto label_404ee4;
        case 0x404ee8u: goto label_404ee8;
        case 0x404eecu: goto label_404eec;
        case 0x404ef0u: goto label_404ef0;
        case 0x404ef4u: goto label_404ef4;
        case 0x404ef8u: goto label_404ef8;
        case 0x404efcu: goto label_404efc;
        case 0x404f00u: goto label_404f00;
        case 0x404f04u: goto label_404f04;
        case 0x404f08u: goto label_404f08;
        case 0x404f0cu: goto label_404f0c;
        case 0x404f10u: goto label_404f10;
        case 0x404f14u: goto label_404f14;
        case 0x404f18u: goto label_404f18;
        case 0x404f1cu: goto label_404f1c;
        case 0x404f20u: goto label_404f20;
        case 0x404f24u: goto label_404f24;
        case 0x404f28u: goto label_404f28;
        case 0x404f2cu: goto label_404f2c;
        case 0x404f30u: goto label_404f30;
        case 0x404f34u: goto label_404f34;
        case 0x404f38u: goto label_404f38;
        case 0x404f3cu: goto label_404f3c;
        case 0x404f40u: goto label_404f40;
        case 0x404f44u: goto label_404f44;
        case 0x404f48u: goto label_404f48;
        case 0x404f4cu: goto label_404f4c;
        case 0x404f50u: goto label_404f50;
        case 0x404f54u: goto label_404f54;
        case 0x404f58u: goto label_404f58;
        case 0x404f5cu: goto label_404f5c;
        case 0x404f60u: goto label_404f60;
        case 0x404f64u: goto label_404f64;
        case 0x404f68u: goto label_404f68;
        case 0x404f6cu: goto label_404f6c;
        case 0x404f70u: goto label_404f70;
        case 0x404f74u: goto label_404f74;
        case 0x404f78u: goto label_404f78;
        case 0x404f7cu: goto label_404f7c;
        case 0x404f80u: goto label_404f80;
        case 0x404f84u: goto label_404f84;
        case 0x404f88u: goto label_404f88;
        case 0x404f8cu: goto label_404f8c;
        case 0x404f90u: goto label_404f90;
        case 0x404f94u: goto label_404f94;
        case 0x404f98u: goto label_404f98;
        case 0x404f9cu: goto label_404f9c;
        case 0x404fa0u: goto label_404fa0;
        case 0x404fa4u: goto label_404fa4;
        case 0x404fa8u: goto label_404fa8;
        case 0x404facu: goto label_404fac;
        case 0x404fb0u: goto label_404fb0;
        case 0x404fb4u: goto label_404fb4;
        case 0x404fb8u: goto label_404fb8;
        case 0x404fbcu: goto label_404fbc;
        case 0x404fc0u: goto label_404fc0;
        case 0x404fc4u: goto label_404fc4;
        case 0x404fc8u: goto label_404fc8;
        case 0x404fccu: goto label_404fcc;
        case 0x404fd0u: goto label_404fd0;
        case 0x404fd4u: goto label_404fd4;
        case 0x404fd8u: goto label_404fd8;
        case 0x404fdcu: goto label_404fdc;
        case 0x404fe0u: goto label_404fe0;
        case 0x404fe4u: goto label_404fe4;
        case 0x404fe8u: goto label_404fe8;
        case 0x404fecu: goto label_404fec;
        case 0x404ff0u: goto label_404ff0;
        case 0x404ff4u: goto label_404ff4;
        case 0x404ff8u: goto label_404ff8;
        case 0x404ffcu: goto label_404ffc;
        case 0x405000u: goto label_405000;
        case 0x405004u: goto label_405004;
        case 0x405008u: goto label_405008;
        case 0x40500cu: goto label_40500c;
        case 0x405010u: goto label_405010;
        case 0x405014u: goto label_405014;
        case 0x405018u: goto label_405018;
        case 0x40501cu: goto label_40501c;
        case 0x405020u: goto label_405020;
        case 0x405024u: goto label_405024;
        case 0x405028u: goto label_405028;
        case 0x40502cu: goto label_40502c;
        case 0x405030u: goto label_405030;
        case 0x405034u: goto label_405034;
        case 0x405038u: goto label_405038;
        case 0x40503cu: goto label_40503c;
        case 0x405040u: goto label_405040;
        case 0x405044u: goto label_405044;
        case 0x405048u: goto label_405048;
        case 0x40504cu: goto label_40504c;
        case 0x405050u: goto label_405050;
        case 0x405054u: goto label_405054;
        case 0x405058u: goto label_405058;
        case 0x40505cu: goto label_40505c;
        case 0x405060u: goto label_405060;
        case 0x405064u: goto label_405064;
        case 0x405068u: goto label_405068;
        case 0x40506cu: goto label_40506c;
        case 0x405070u: goto label_405070;
        case 0x405074u: goto label_405074;
        case 0x405078u: goto label_405078;
        case 0x40507cu: goto label_40507c;
        case 0x405080u: goto label_405080;
        case 0x405084u: goto label_405084;
        case 0x405088u: goto label_405088;
        case 0x40508cu: goto label_40508c;
        case 0x405090u: goto label_405090;
        case 0x405094u: goto label_405094;
        case 0x405098u: goto label_405098;
        case 0x40509cu: goto label_40509c;
        case 0x4050a0u: goto label_4050a0;
        case 0x4050a4u: goto label_4050a4;
        case 0x4050a8u: goto label_4050a8;
        case 0x4050acu: goto label_4050ac;
        case 0x4050b0u: goto label_4050b0;
        case 0x4050b4u: goto label_4050b4;
        case 0x4050b8u: goto label_4050b8;
        case 0x4050bcu: goto label_4050bc;
        case 0x4050c0u: goto label_4050c0;
        case 0x4050c4u: goto label_4050c4;
        case 0x4050c8u: goto label_4050c8;
        case 0x4050ccu: goto label_4050cc;
        case 0x4050d0u: goto label_4050d0;
        case 0x4050d4u: goto label_4050d4;
        case 0x4050d8u: goto label_4050d8;
        case 0x4050dcu: goto label_4050dc;
        case 0x4050e0u: goto label_4050e0;
        case 0x4050e4u: goto label_4050e4;
        case 0x4050e8u: goto label_4050e8;
        case 0x4050ecu: goto label_4050ec;
        case 0x4050f0u: goto label_4050f0;
        case 0x4050f4u: goto label_4050f4;
        case 0x4050f8u: goto label_4050f8;
        case 0x4050fcu: goto label_4050fc;
        case 0x405100u: goto label_405100;
        case 0x405104u: goto label_405104;
        case 0x405108u: goto label_405108;
        case 0x40510cu: goto label_40510c;
        case 0x405110u: goto label_405110;
        case 0x405114u: goto label_405114;
        case 0x405118u: goto label_405118;
        case 0x40511cu: goto label_40511c;
        case 0x405120u: goto label_405120;
        case 0x405124u: goto label_405124;
        case 0x405128u: goto label_405128;
        case 0x40512cu: goto label_40512c;
        case 0x405130u: goto label_405130;
        case 0x405134u: goto label_405134;
        case 0x405138u: goto label_405138;
        case 0x40513cu: goto label_40513c;
        case 0x405140u: goto label_405140;
        case 0x405144u: goto label_405144;
        case 0x405148u: goto label_405148;
        case 0x40514cu: goto label_40514c;
        case 0x405150u: goto label_405150;
        case 0x405154u: goto label_405154;
        case 0x405158u: goto label_405158;
        case 0x40515cu: goto label_40515c;
        case 0x405160u: goto label_405160;
        case 0x405164u: goto label_405164;
        case 0x405168u: goto label_405168;
        case 0x40516cu: goto label_40516c;
        case 0x405170u: goto label_405170;
        case 0x405174u: goto label_405174;
        case 0x405178u: goto label_405178;
        case 0x40517cu: goto label_40517c;
        case 0x405180u: goto label_405180;
        case 0x405184u: goto label_405184;
        case 0x405188u: goto label_405188;
        case 0x40518cu: goto label_40518c;
        case 0x405190u: goto label_405190;
        case 0x405194u: goto label_405194;
        case 0x405198u: goto label_405198;
        case 0x40519cu: goto label_40519c;
        case 0x4051a0u: goto label_4051a0;
        case 0x4051a4u: goto label_4051a4;
        case 0x4051a8u: goto label_4051a8;
        case 0x4051acu: goto label_4051ac;
        case 0x4051b0u: goto label_4051b0;
        case 0x4051b4u: goto label_4051b4;
        case 0x4051b8u: goto label_4051b8;
        case 0x4051bcu: goto label_4051bc;
        case 0x4051c0u: goto label_4051c0;
        case 0x4051c4u: goto label_4051c4;
        case 0x4051c8u: goto label_4051c8;
        case 0x4051ccu: goto label_4051cc;
        case 0x4051d0u: goto label_4051d0;
        case 0x4051d4u: goto label_4051d4;
        case 0x4051d8u: goto label_4051d8;
        case 0x4051dcu: goto label_4051dc;
        case 0x4051e0u: goto label_4051e0;
        case 0x4051e4u: goto label_4051e4;
        case 0x4051e8u: goto label_4051e8;
        case 0x4051ecu: goto label_4051ec;
        case 0x4051f0u: goto label_4051f0;
        case 0x4051f4u: goto label_4051f4;
        case 0x4051f8u: goto label_4051f8;
        case 0x4051fcu: goto label_4051fc;
        case 0x405200u: goto label_405200;
        case 0x405204u: goto label_405204;
        case 0x405208u: goto label_405208;
        case 0x40520cu: goto label_40520c;
        case 0x405210u: goto label_405210;
        case 0x405214u: goto label_405214;
        case 0x405218u: goto label_405218;
        case 0x40521cu: goto label_40521c;
        case 0x405220u: goto label_405220;
        case 0x405224u: goto label_405224;
        case 0x405228u: goto label_405228;
        case 0x40522cu: goto label_40522c;
        case 0x405230u: goto label_405230;
        case 0x405234u: goto label_405234;
        case 0x405238u: goto label_405238;
        case 0x40523cu: goto label_40523c;
        case 0x405240u: goto label_405240;
        case 0x405244u: goto label_405244;
        case 0x405248u: goto label_405248;
        case 0x40524cu: goto label_40524c;
        case 0x405250u: goto label_405250;
        case 0x405254u: goto label_405254;
        case 0x405258u: goto label_405258;
        case 0x40525cu: goto label_40525c;
        case 0x405260u: goto label_405260;
        case 0x405264u: goto label_405264;
        case 0x405268u: goto label_405268;
        case 0x40526cu: goto label_40526c;
        case 0x405270u: goto label_405270;
        case 0x405274u: goto label_405274;
        case 0x405278u: goto label_405278;
        case 0x40527cu: goto label_40527c;
        case 0x405280u: goto label_405280;
        case 0x405284u: goto label_405284;
        case 0x405288u: goto label_405288;
        case 0x40528cu: goto label_40528c;
        case 0x405290u: goto label_405290;
        case 0x405294u: goto label_405294;
        case 0x405298u: goto label_405298;
        case 0x40529cu: goto label_40529c;
        case 0x4052a0u: goto label_4052a0;
        case 0x4052a4u: goto label_4052a4;
        case 0x4052a8u: goto label_4052a8;
        case 0x4052acu: goto label_4052ac;
        case 0x4052b0u: goto label_4052b0;
        case 0x4052b4u: goto label_4052b4;
        case 0x4052b8u: goto label_4052b8;
        case 0x4052bcu: goto label_4052bc;
        case 0x4052c0u: goto label_4052c0;
        case 0x4052c4u: goto label_4052c4;
        case 0x4052c8u: goto label_4052c8;
        case 0x4052ccu: goto label_4052cc;
        case 0x4052d0u: goto label_4052d0;
        case 0x4052d4u: goto label_4052d4;
        case 0x4052d8u: goto label_4052d8;
        case 0x4052dcu: goto label_4052dc;
        case 0x4052e0u: goto label_4052e0;
        case 0x4052e4u: goto label_4052e4;
        case 0x4052e8u: goto label_4052e8;
        case 0x4052ecu: goto label_4052ec;
        case 0x4052f0u: goto label_4052f0;
        case 0x4052f4u: goto label_4052f4;
        case 0x4052f8u: goto label_4052f8;
        case 0x4052fcu: goto label_4052fc;
        case 0x405300u: goto label_405300;
        case 0x405304u: goto label_405304;
        case 0x405308u: goto label_405308;
        case 0x40530cu: goto label_40530c;
        case 0x405310u: goto label_405310;
        case 0x405314u: goto label_405314;
        case 0x405318u: goto label_405318;
        case 0x40531cu: goto label_40531c;
        case 0x405320u: goto label_405320;
        case 0x405324u: goto label_405324;
        case 0x405328u: goto label_405328;
        case 0x40532cu: goto label_40532c;
        case 0x405330u: goto label_405330;
        case 0x405334u: goto label_405334;
        case 0x405338u: goto label_405338;
        case 0x40533cu: goto label_40533c;
        case 0x405340u: goto label_405340;
        case 0x405344u: goto label_405344;
        case 0x405348u: goto label_405348;
        case 0x40534cu: goto label_40534c;
        case 0x405350u: goto label_405350;
        case 0x405354u: goto label_405354;
        case 0x405358u: goto label_405358;
        case 0x40535cu: goto label_40535c;
        case 0x405360u: goto label_405360;
        case 0x405364u: goto label_405364;
        case 0x405368u: goto label_405368;
        case 0x40536cu: goto label_40536c;
        case 0x405370u: goto label_405370;
        case 0x405374u: goto label_405374;
        case 0x405378u: goto label_405378;
        case 0x40537cu: goto label_40537c;
        case 0x405380u: goto label_405380;
        case 0x405384u: goto label_405384;
        case 0x405388u: goto label_405388;
        case 0x40538cu: goto label_40538c;
        case 0x405390u: goto label_405390;
        case 0x405394u: goto label_405394;
        case 0x405398u: goto label_405398;
        case 0x40539cu: goto label_40539c;
        case 0x4053a0u: goto label_4053a0;
        case 0x4053a4u: goto label_4053a4;
        case 0x4053a8u: goto label_4053a8;
        case 0x4053acu: goto label_4053ac;
        case 0x4053b0u: goto label_4053b0;
        case 0x4053b4u: goto label_4053b4;
        case 0x4053b8u: goto label_4053b8;
        case 0x4053bcu: goto label_4053bc;
        case 0x4053c0u: goto label_4053c0;
        case 0x4053c4u: goto label_4053c4;
        case 0x4053c8u: goto label_4053c8;
        case 0x4053ccu: goto label_4053cc;
        case 0x4053d0u: goto label_4053d0;
        case 0x4053d4u: goto label_4053d4;
        case 0x4053d8u: goto label_4053d8;
        case 0x4053dcu: goto label_4053dc;
        case 0x4053e0u: goto label_4053e0;
        case 0x4053e4u: goto label_4053e4;
        case 0x4053e8u: goto label_4053e8;
        case 0x4053ecu: goto label_4053ec;
        case 0x4053f0u: goto label_4053f0;
        case 0x4053f4u: goto label_4053f4;
        case 0x4053f8u: goto label_4053f8;
        case 0x4053fcu: goto label_4053fc;
        case 0x405400u: goto label_405400;
        case 0x405404u: goto label_405404;
        case 0x405408u: goto label_405408;
        case 0x40540cu: goto label_40540c;
        case 0x405410u: goto label_405410;
        case 0x405414u: goto label_405414;
        case 0x405418u: goto label_405418;
        case 0x40541cu: goto label_40541c;
        case 0x405420u: goto label_405420;
        case 0x405424u: goto label_405424;
        case 0x405428u: goto label_405428;
        case 0x40542cu: goto label_40542c;
        case 0x405430u: goto label_405430;
        case 0x405434u: goto label_405434;
        case 0x405438u: goto label_405438;
        case 0x40543cu: goto label_40543c;
        case 0x405440u: goto label_405440;
        case 0x405444u: goto label_405444;
        case 0x405448u: goto label_405448;
        case 0x40544cu: goto label_40544c;
        case 0x405450u: goto label_405450;
        case 0x405454u: goto label_405454;
        case 0x405458u: goto label_405458;
        case 0x40545cu: goto label_40545c;
        case 0x405460u: goto label_405460;
        case 0x405464u: goto label_405464;
        case 0x405468u: goto label_405468;
        case 0x40546cu: goto label_40546c;
        case 0x405470u: goto label_405470;
        case 0x405474u: goto label_405474;
        case 0x405478u: goto label_405478;
        case 0x40547cu: goto label_40547c;
        case 0x405480u: goto label_405480;
        case 0x405484u: goto label_405484;
        case 0x405488u: goto label_405488;
        case 0x40548cu: goto label_40548c;
        case 0x405490u: goto label_405490;
        case 0x405494u: goto label_405494;
        case 0x405498u: goto label_405498;
        case 0x40549cu: goto label_40549c;
        case 0x4054a0u: goto label_4054a0;
        case 0x4054a4u: goto label_4054a4;
        case 0x4054a8u: goto label_4054a8;
        case 0x4054acu: goto label_4054ac;
        case 0x4054b0u: goto label_4054b0;
        case 0x4054b4u: goto label_4054b4;
        case 0x4054b8u: goto label_4054b8;
        case 0x4054bcu: goto label_4054bc;
        case 0x4054c0u: goto label_4054c0;
        case 0x4054c4u: goto label_4054c4;
        case 0x4054c8u: goto label_4054c8;
        case 0x4054ccu: goto label_4054cc;
        case 0x4054d0u: goto label_4054d0;
        case 0x4054d4u: goto label_4054d4;
        case 0x4054d8u: goto label_4054d8;
        case 0x4054dcu: goto label_4054dc;
        case 0x4054e0u: goto label_4054e0;
        case 0x4054e4u: goto label_4054e4;
        case 0x4054e8u: goto label_4054e8;
        case 0x4054ecu: goto label_4054ec;
        case 0x4054f0u: goto label_4054f0;
        case 0x4054f4u: goto label_4054f4;
        case 0x4054f8u: goto label_4054f8;
        case 0x4054fcu: goto label_4054fc;
        case 0x405500u: goto label_405500;
        case 0x405504u: goto label_405504;
        case 0x405508u: goto label_405508;
        case 0x40550cu: goto label_40550c;
        case 0x405510u: goto label_405510;
        case 0x405514u: goto label_405514;
        case 0x405518u: goto label_405518;
        case 0x40551cu: goto label_40551c;
        case 0x405520u: goto label_405520;
        case 0x405524u: goto label_405524;
        case 0x405528u: goto label_405528;
        case 0x40552cu: goto label_40552c;
        case 0x405530u: goto label_405530;
        case 0x405534u: goto label_405534;
        case 0x405538u: goto label_405538;
        case 0x40553cu: goto label_40553c;
        case 0x405540u: goto label_405540;
        case 0x405544u: goto label_405544;
        case 0x405548u: goto label_405548;
        case 0x40554cu: goto label_40554c;
        case 0x405550u: goto label_405550;
        case 0x405554u: goto label_405554;
        case 0x405558u: goto label_405558;
        case 0x40555cu: goto label_40555c;
        case 0x405560u: goto label_405560;
        case 0x405564u: goto label_405564;
        case 0x405568u: goto label_405568;
        case 0x40556cu: goto label_40556c;
        case 0x405570u: goto label_405570;
        case 0x405574u: goto label_405574;
        case 0x405578u: goto label_405578;
        case 0x40557cu: goto label_40557c;
        case 0x405580u: goto label_405580;
        case 0x405584u: goto label_405584;
        case 0x405588u: goto label_405588;
        case 0x40558cu: goto label_40558c;
        case 0x405590u: goto label_405590;
        case 0x405594u: goto label_405594;
        case 0x405598u: goto label_405598;
        case 0x40559cu: goto label_40559c;
        case 0x4055a0u: goto label_4055a0;
        case 0x4055a4u: goto label_4055a4;
        case 0x4055a8u: goto label_4055a8;
        case 0x4055acu: goto label_4055ac;
        case 0x4055b0u: goto label_4055b0;
        case 0x4055b4u: goto label_4055b4;
        case 0x4055b8u: goto label_4055b8;
        case 0x4055bcu: goto label_4055bc;
        case 0x4055c0u: goto label_4055c0;
        case 0x4055c4u: goto label_4055c4;
        case 0x4055c8u: goto label_4055c8;
        case 0x4055ccu: goto label_4055cc;
        default: break;
    }

    ctx->pc = 0x404190u;

label_404190:
    // 0x404190: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x404190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
label_404194:
    // 0x404194: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x404194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_404198:
    // 0x404198: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x404198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_40419c:
    // 0x40419c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x40419cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4041a0:
    // 0x4041a0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4041a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4041a4:
    // 0x4041a4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4041a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4041a8:
    // 0x4041a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4041a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4041ac:
    // 0x4041ac: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x4041acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_4041b0:
    // 0x4041b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4041b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4041b4:
    // 0x4041b4: 0x267201a0  addiu       $s2, $s3, 0x1A0
    ctx->pc = 0x4041b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 416));
label_4041b8:
    // 0x4041b8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4041b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4041bc:
    // 0x4041bc: 0x26710170  addiu       $s1, $s3, 0x170
    ctx->pc = 0x4041bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 368));
label_4041c0:
    // 0x4041c0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4041c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4041c4:
    // 0x4041c4: 0x949001f2  lhu         $s0, 0x1F2($a0)
    ctx->pc = 0x4041c4u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 498)));
label_4041c8:
    // 0x4041c8: 0x8c940050  lw          $s4, 0x50($a0)
    ctx->pc = 0x4041c8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_4041cc:
    // 0x4041cc: 0xc0dc9bc  jal         func_3726F0
label_4041d0:
    if (ctx->pc == 0x4041D0u) {
        ctx->pc = 0x4041D0u;
            // 0x4041d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4041D4u;
        goto label_4041d4;
    }
    ctx->pc = 0x4041CCu;
    SET_GPR_U32(ctx, 31, 0x4041D4u);
    ctx->pc = 0x4041D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4041CCu;
            // 0x4041d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3726F0u;
    if (runtime->hasFunction(0x3726F0u)) {
        auto targetFn = runtime->lookupFunction(0x3726F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4041D4u; }
        if (ctx->pc != 0x4041D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003726F0_0x3726f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4041D4u; }
        if (ctx->pc != 0x4041D4u) { return; }
    }
    ctx->pc = 0x4041D4u;
label_4041d4:
    // 0x4041d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4041d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4041d8:
    // 0x4041d8: 0xc0dc9a0  jal         func_372680
label_4041dc:
    if (ctx->pc == 0x4041DCu) {
        ctx->pc = 0x4041DCu;
            // 0x4041dc: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->pc = 0x4041E0u;
        goto label_4041e0;
    }
    ctx->pc = 0x4041D8u;
    SET_GPR_U32(ctx, 31, 0x4041E0u);
    ctx->pc = 0x4041DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4041D8u;
            // 0x4041dc: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x372680u;
    if (runtime->hasFunction(0x372680u)) {
        auto targetFn = runtime->lookupFunction(0x372680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4041E0u; }
        if (ctx->pc != 0x4041E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00372680_0x372680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4041E0u; }
        if (ctx->pc != 0x4041E0u) { return; }
    }
    ctx->pc = 0x4041E0u;
label_4041e0:
    // 0x4041e0: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x4041e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_4041e4:
    // 0x4041e4: 0xc04cc04  jal         func_133010
label_4041e8:
    if (ctx->pc == 0x4041E8u) {
        ctx->pc = 0x4041E8u;
            // 0x4041e8: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x4041ECu;
        goto label_4041ec;
    }
    ctx->pc = 0x4041E4u;
    SET_GPR_U32(ctx, 31, 0x4041ECu);
    ctx->pc = 0x4041E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4041E4u;
            // 0x4041e8: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4041ECu; }
        if (ctx->pc != 0x4041ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4041ECu; }
        if (ctx->pc != 0x4041ECu) { return; }
    }
    ctx->pc = 0x4041ECu;
label_4041ec:
    // 0x4041ec: 0xc623000c  lwc1        $f3, 0xC($s1)
    ctx->pc = 0x4041ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4041f0:
    // 0x4041f0: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x4041f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_4041f4:
    // 0x4041f4: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x4041f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4041f8:
    // 0x4041f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4041f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4041fc:
    // 0x4041fc: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x4041fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_404200:
    // 0x404200: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x404200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_404204:
    // 0x404204: 0xe7a001c0  swc1        $f0, 0x1C0($sp)
    ctx->pc = 0x404204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
label_404208:
    // 0x404208: 0xe7a101c4  swc1        $f1, 0x1C4($sp)
    ctx->pc = 0x404208u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
label_40420c:
    // 0x40420c: 0xe7a201c8  swc1        $f2, 0x1C8($sp)
    ctx->pc = 0x40420cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
label_404210:
    // 0x404210: 0xc04c720  jal         func_131C80
label_404214:
    if (ctx->pc == 0x404214u) {
        ctx->pc = 0x404214u;
            // 0x404214: 0xe7a301cc  swc1        $f3, 0x1CC($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 460), bits); }
        ctx->pc = 0x404218u;
        goto label_404218;
    }
    ctx->pc = 0x404210u;
    SET_GPR_U32(ctx, 31, 0x404218u);
    ctx->pc = 0x404214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404210u;
            // 0x404214: 0xe7a301cc  swc1        $f3, 0x1CC($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 460), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404218u; }
        if (ctx->pc != 0x404218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404218u; }
        if (ctx->pc != 0x404218u) { return; }
    }
    ctx->pc = 0x404218u;
label_404218:
    // 0x404218: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x404218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_40421c:
    // 0x40421c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x40421cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_404220:
    // 0x404220: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x404220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_404224:
    // 0x404224: 0xc6600200  lwc1        $f0, 0x200($s3)
    ctx->pc = 0x404224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_404228:
    // 0x404228: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x404228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40422c:
    // 0x40422c: 0xc0b8160  jal         func_2E0580
label_404230:
    if (ctx->pc == 0x404230u) {
        ctx->pc = 0x404230u;
            // 0x404230: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x404234u;
        goto label_404234;
    }
    ctx->pc = 0x40422Cu;
    SET_GPR_U32(ctx, 31, 0x404234u);
    ctx->pc = 0x404230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40422Cu;
            // 0x404230: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0580u;
    if (runtime->hasFunction(0x2E0580u)) {
        auto targetFn = runtime->lookupFunction(0x2E0580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404234u; }
        if (ctx->pc != 0x404234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0580_0x2e0580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404234u; }
        if (ctx->pc != 0x404234u) { return; }
    }
    ctx->pc = 0x404234u;
label_404234:
    // 0x404234: 0x96420052  lhu         $v0, 0x52($s2)
    ctx->pc = 0x404234u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 82)));
label_404238:
    // 0x404238: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x404238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_40423c:
    // 0x40423c: 0x506200bb  beql        $v1, $v0, . + 4 + (0xBB << 2)
label_404240:
    if (ctx->pc == 0x404240u) {
        ctx->pc = 0x404240u;
            // 0x404240: 0xc6600200  lwc1        $f0, 0x200($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x404244u;
        goto label_404244;
    }
    ctx->pc = 0x40423Cu;
    {
        const bool branch_taken_0x40423c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x40423c) {
            ctx->pc = 0x404240u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40423Cu;
            // 0x404240: 0xc6600200  lwc1        $f0, 0x200($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x40452Cu;
            goto label_40452c;
        }
    }
    ctx->pc = 0x404244u;
label_404244:
    // 0x404244: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x404244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_404248:
    // 0x404248: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x404248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_40424c:
    // 0x40424c: 0xc04cc04  jal         func_133010
label_404250:
    if (ctx->pc == 0x404250u) {
        ctx->pc = 0x404250u;
            // 0x404250: 0x267000f0  addiu       $s0, $s3, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 240));
        ctx->pc = 0x404254u;
        goto label_404254;
    }
    ctx->pc = 0x40424Cu;
    SET_GPR_U32(ctx, 31, 0x404254u);
    ctx->pc = 0x404250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40424Cu;
            // 0x404250: 0x267000f0  addiu       $s0, $s3, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404254u; }
        if (ctx->pc != 0x404254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404254u; }
        if (ctx->pc != 0x404254u) { return; }
    }
    ctx->pc = 0x404254u;
label_404254:
    // 0x404254: 0xc7a10168  lwc1        $f1, 0x168($sp)
    ctx->pc = 0x404254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_404258:
    // 0x404258: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x404258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40425c:
    // 0x40425c: 0xc7ac0164  lwc1        $f12, 0x164($sp)
    ctx->pc = 0x40425cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_404260:
    // 0x404260: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x404260u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_404264:
    // 0x404264: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x404264u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_404268:
    // 0x404268: 0x46000344  c1          0x344
    ctx->pc = 0x404268u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_40426c:
    // 0x40426c: 0x0  nop
    ctx->pc = 0x40426cu;
    // NOP
label_404270:
    // 0x404270: 0x0  nop
    ctx->pc = 0x404270u;
    // NOP
label_404274:
    // 0x404274: 0xc04780a  jal         func_11E028
label_404278:
    if (ctx->pc == 0x404278u) {
        ctx->pc = 0x40427Cu;
        goto label_40427c;
    }
    ctx->pc = 0x404274u;
    SET_GPR_U32(ctx, 31, 0x40427Cu);
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40427Cu; }
        if (ctx->pc != 0x40427Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40427Cu; }
        if (ctx->pc != 0x40427Cu) { return; }
    }
    ctx->pc = 0x40427Cu;
label_40427c:
    // 0x40427c: 0xc7ac0160  lwc1        $f12, 0x160($sp)
    ctx->pc = 0x40427cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_404280:
    // 0x404280: 0xc7ad0168  lwc1        $f13, 0x168($sp)
    ctx->pc = 0x404280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_404284:
    // 0x404284: 0xc04780a  jal         func_11E028
label_404288:
    if (ctx->pc == 0x404288u) {
        ctx->pc = 0x404288u;
            // 0x404288: 0x46000547  neg.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_NEG_S(ctx->f[0]);
        ctx->pc = 0x40428Cu;
        goto label_40428c;
    }
    ctx->pc = 0x404284u;
    SET_GPR_U32(ctx, 31, 0x40428Cu);
    ctx->pc = 0x404288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404284u;
            // 0x404288: 0x46000547  neg.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40428Cu; }
        if (ctx->pc != 0x40428Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40428Cu; }
        if (ctx->pc != 0x40428Cu) { return; }
    }
    ctx->pc = 0x40428Cu;
label_40428c:
    // 0x40428c: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x40428cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_404290:
    // 0x404290: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x404290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_404294:
    // 0x404294: 0x3443f983  ori         $v1, $v0, 0xF983
    ctx->pc = 0x404294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_404298:
    // 0x404298: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x404298u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_40429c:
    // 0x40429c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x40429cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4042a0:
    // 0x4042a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4042a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4042a4:
    // 0x4042a4: 0x0  nop
    ctx->pc = 0x4042a4u;
    // NOP
label_4042a8:
    // 0x4042a8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x4042a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_4042ac:
    // 0x4042ac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4042acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4042b0:
    // 0x4042b0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x4042b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4042b4:
    // 0x4042b4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x4042b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_4042b8:
    // 0x4042b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4042b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4042bc:
    // 0x4042bc: 0xc04c970  jal         func_1325C0
label_4042c0:
    if (ctx->pc == 0x4042C0u) {
        ctx->pc = 0x4042C0u;
            // 0x4042c0: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x4042C4u;
        goto label_4042c4;
    }
    ctx->pc = 0x4042BCu;
    SET_GPR_U32(ctx, 31, 0x4042C4u);
    ctx->pc = 0x4042C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4042BCu;
            // 0x4042c0: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4042C4u; }
        if (ctx->pc != 0x4042C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4042C4u; }
        if (ctx->pc != 0x4042C4u) { return; }
    }
    ctx->pc = 0x4042C4u;
label_4042c4:
    // 0x4042c4: 0x3c034622  lui         $v1, 0x4622
    ctx->pc = 0x4042c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17954 << 16));
label_4042c8:
    // 0x4042c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4042c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4042cc:
    // 0x4042cc: 0x3463f983  ori         $v1, $v1, 0xF983
    ctx->pc = 0x4042ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63875);
label_4042d0:
    // 0x4042d0: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x4042d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_4042d4:
    // 0x4042d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4042d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4042d8:
    // 0x4042d8: 0x0  nop
    ctx->pc = 0x4042d8u;
    // NOP
label_4042dc:
    // 0x4042dc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x4042dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_4042e0:
    // 0x4042e0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4042e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4042e4:
    // 0x4042e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4042e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4042e8:
    // 0x4042e8: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x4042e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_4042ec:
    // 0x4042ec: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4042ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4042f0:
    // 0x4042f0: 0xc04c970  jal         func_1325C0
label_4042f4:
    if (ctx->pc == 0x4042F4u) {
        ctx->pc = 0x4042F4u;
            // 0x4042f4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4042F8u;
        goto label_4042f8;
    }
    ctx->pc = 0x4042F0u;
    SET_GPR_U32(ctx, 31, 0x4042F8u);
    ctx->pc = 0x4042F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4042F0u;
            // 0x4042f4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4042F8u; }
        if (ctx->pc != 0x4042F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4042F8u; }
        if (ctx->pc != 0x4042F8u) { return; }
    }
    ctx->pc = 0x4042F8u;
label_4042f8:
    // 0x4042f8: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x4042f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_4042fc:
    // 0x4042fc: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x4042fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_404300:
    // 0x404300: 0xc04c72c  jal         func_131CB0
label_404304:
    if (ctx->pc == 0x404304u) {
        ctx->pc = 0x404304u;
            // 0x404304: 0x27a60180  addiu       $a2, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x404308u;
        goto label_404308;
    }
    ctx->pc = 0x404300u;
    SET_GPR_U32(ctx, 31, 0x404308u);
    ctx->pc = 0x404304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404300u;
            // 0x404304: 0x27a60180  addiu       $a2, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404308u; }
        if (ctx->pc != 0x404308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404308u; }
        if (ctx->pc != 0x404308u) { return; }
    }
    ctx->pc = 0x404308u;
label_404308:
    // 0x404308: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x404308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_40430c:
    // 0x40430c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x40430cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_404310:
    // 0x404310: 0xc04cbf0  jal         func_132FC0
label_404314:
    if (ctx->pc == 0x404314u) {
        ctx->pc = 0x404314u;
            // 0x404314: 0x27a60160  addiu       $a2, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x404318u;
        goto label_404318;
    }
    ctx->pc = 0x404310u;
    SET_GPR_U32(ctx, 31, 0x404318u);
    ctx->pc = 0x404314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404310u;
            // 0x404314: 0x27a60160  addiu       $a2, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404318u; }
        if (ctx->pc != 0x404318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404318u; }
        if (ctx->pc != 0x404318u) { return; }
    }
    ctx->pc = 0x404318u;
label_404318:
    // 0x404318: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x404318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_40431c:
    // 0x40431c: 0xc04cc44  jal         func_133110
label_404320:
    if (ctx->pc == 0x404320u) {
        ctx->pc = 0x404320u;
            // 0x404320: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x404324u;
        goto label_404324;
    }
    ctx->pc = 0x40431Cu;
    SET_GPR_U32(ctx, 31, 0x404324u);
    ctx->pc = 0x404320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40431Cu;
            // 0x404320: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404324u; }
        if (ctx->pc != 0x404324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404324u; }
        if (ctx->pc != 0x404324u) { return; }
    }
    ctx->pc = 0x404324u;
label_404324:
    // 0x404324: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x404324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_404328:
    // 0x404328: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x404328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_40432c:
    // 0x40432c: 0xc04cbf0  jal         func_132FC0
label_404330:
    if (ctx->pc == 0x404330u) {
        ctx->pc = 0x404330u;
            // 0x404330: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x404334u;
        goto label_404334;
    }
    ctx->pc = 0x40432Cu;
    SET_GPR_U32(ctx, 31, 0x404334u);
    ctx->pc = 0x404330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40432Cu;
            // 0x404330: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404334u; }
        if (ctx->pc != 0x404334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404334u; }
        if (ctx->pc != 0x404334u) { return; }
    }
    ctx->pc = 0x404334u;
label_404334:
    // 0x404334: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x404334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_404338:
    // 0x404338: 0xc04cc44  jal         func_133110
label_40433c:
    if (ctx->pc == 0x40433Cu) {
        ctx->pc = 0x40433Cu;
            // 0x40433c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x404340u;
        goto label_404340;
    }
    ctx->pc = 0x404338u;
    SET_GPR_U32(ctx, 31, 0x404340u);
    ctx->pc = 0x40433Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404338u;
            // 0x40433c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404340u; }
        if (ctx->pc != 0x404340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404340u; }
        if (ctx->pc != 0x404340u) { return; }
    }
    ctx->pc = 0x404340u;
label_404340:
    // 0x404340: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x404340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_404344:
    // 0x404344: 0xc075328  jal         func_1D4CA0
label_404348:
    if (ctx->pc == 0x404348u) {
        ctx->pc = 0x404348u;
            // 0x404348: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x40434Cu;
        goto label_40434c;
    }
    ctx->pc = 0x404344u;
    SET_GPR_U32(ctx, 31, 0x40434Cu);
    ctx->pc = 0x404348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404344u;
            // 0x404348: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4CA0u;
    if (runtime->hasFunction(0x1D4CA0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40434Cu; }
        if (ctx->pc != 0x40434Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4CA0_0x1d4ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40434Cu; }
        if (ctx->pc != 0x40434Cu) { return; }
    }
    ctx->pc = 0x40434Cu;
label_40434c:
    // 0x40434c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x40434cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_404350:
    // 0x404350: 0xc04f278  jal         func_13C9E0
label_404354:
    if (ctx->pc == 0x404354u) {
        ctx->pc = 0x404354u;
            // 0x404354: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->pc = 0x404358u;
        goto label_404358;
    }
    ctx->pc = 0x404350u;
    SET_GPR_U32(ctx, 31, 0x404358u);
    ctx->pc = 0x404354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404350u;
            // 0x404354: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404358u; }
        if (ctx->pc != 0x404358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404358u; }
        if (ctx->pc != 0x404358u) { return; }
    }
    ctx->pc = 0x404358u;
label_404358:
    // 0x404358: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x404358u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_40435c:
    // 0x40435c: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x40435cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_404360:
    // 0x404360: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x404360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_404364:
    // 0x404364: 0xc04cca0  jal         func_133280
label_404368:
    if (ctx->pc == 0x404368u) {
        ctx->pc = 0x404368u;
            // 0x404368: 0x24c6b9d0  addiu       $a2, $a2, -0x4630 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949328));
        ctx->pc = 0x40436Cu;
        goto label_40436c;
    }
    ctx->pc = 0x404364u;
    SET_GPR_U32(ctx, 31, 0x40436Cu);
    ctx->pc = 0x404368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404364u;
            // 0x404368: 0x24c6b9d0  addiu       $a2, $a2, -0x4630 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40436Cu; }
        if (ctx->pc != 0x40436Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40436Cu; }
        if (ctx->pc != 0x40436Cu) { return; }
    }
    ctx->pc = 0x40436Cu;
label_40436c:
    // 0x40436c: 0xc7a10168  lwc1        $f1, 0x168($sp)
    ctx->pc = 0x40436cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_404370:
    // 0x404370: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x404370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_404374:
    // 0x404374: 0xc7ac0164  lwc1        $f12, 0x164($sp)
    ctx->pc = 0x404374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_404378:
    // 0x404378: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x404378u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_40437c:
    // 0x40437c: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x40437cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_404380:
    // 0x404380: 0x46000344  c1          0x344
    ctx->pc = 0x404380u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_404384:
    // 0x404384: 0x0  nop
    ctx->pc = 0x404384u;
    // NOP
label_404388:
    // 0x404388: 0x0  nop
    ctx->pc = 0x404388u;
    // NOP
label_40438c:
    // 0x40438c: 0xc04780a  jal         func_11E028
label_404390:
    if (ctx->pc == 0x404390u) {
        ctx->pc = 0x404394u;
        goto label_404394;
    }
    ctx->pc = 0x40438Cu;
    SET_GPR_U32(ctx, 31, 0x404394u);
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404394u; }
        if (ctx->pc != 0x404394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404394u; }
        if (ctx->pc != 0x404394u) { return; }
    }
    ctx->pc = 0x404394u;
label_404394:
    // 0x404394: 0xc7ac0160  lwc1        $f12, 0x160($sp)
    ctx->pc = 0x404394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_404398:
    // 0x404398: 0xc7ad0168  lwc1        $f13, 0x168($sp)
    ctx->pc = 0x404398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_40439c:
    // 0x40439c: 0xc04780a  jal         func_11E028
label_4043a0:
    if (ctx->pc == 0x4043A0u) {
        ctx->pc = 0x4043A0u;
            // 0x4043a0: 0x46000547  neg.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_NEG_S(ctx->f[0]);
        ctx->pc = 0x4043A4u;
        goto label_4043a4;
    }
    ctx->pc = 0x40439Cu;
    SET_GPR_U32(ctx, 31, 0x4043A4u);
    ctx->pc = 0x4043A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40439Cu;
            // 0x4043a0: 0x46000547  neg.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4043A4u; }
        if (ctx->pc != 0x4043A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4043A4u; }
        if (ctx->pc != 0x4043A4u) { return; }
    }
    ctx->pc = 0x4043A4u;
label_4043a4:
    // 0x4043a4: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x4043a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_4043a8:
    // 0x4043a8: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x4043a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_4043ac:
    // 0x4043ac: 0x3443f983  ori         $v1, $v0, 0xF983
    ctx->pc = 0x4043acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_4043b0:
    // 0x4043b0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x4043b0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_4043b4:
    // 0x4043b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4043b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4043b8:
    // 0x4043b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4043b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4043bc:
    // 0x4043bc: 0x0  nop
    ctx->pc = 0x4043bcu;
    // NOP
label_4043c0:
    // 0x4043c0: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x4043c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_4043c4:
    // 0x4043c4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4043c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4043c8:
    // 0x4043c8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x4043c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4043cc:
    // 0x4043cc: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x4043ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_4043d0:
    // 0x4043d0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4043d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4043d4:
    // 0x4043d4: 0xc04c970  jal         func_1325C0
label_4043d8:
    if (ctx->pc == 0x4043D8u) {
        ctx->pc = 0x4043D8u;
            // 0x4043d8: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x4043DCu;
        goto label_4043dc;
    }
    ctx->pc = 0x4043D4u;
    SET_GPR_U32(ctx, 31, 0x4043DCu);
    ctx->pc = 0x4043D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4043D4u;
            // 0x4043d8: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4043DCu; }
        if (ctx->pc != 0x4043DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4043DCu; }
        if (ctx->pc != 0x4043DCu) { return; }
    }
    ctx->pc = 0x4043DCu;
label_4043dc:
    // 0x4043dc: 0x3c034622  lui         $v1, 0x4622
    ctx->pc = 0x4043dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17954 << 16));
label_4043e0:
    // 0x4043e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4043e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4043e4:
    // 0x4043e4: 0x3463f983  ori         $v1, $v1, 0xF983
    ctx->pc = 0x4043e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63875);
label_4043e8:
    // 0x4043e8: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x4043e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_4043ec:
    // 0x4043ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4043ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4043f0:
    // 0x4043f0: 0x0  nop
    ctx->pc = 0x4043f0u;
    // NOP
label_4043f4:
    // 0x4043f4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x4043f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_4043f8:
    // 0x4043f8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4043f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4043fc:
    // 0x4043fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4043fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_404400:
    // 0x404400: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x404400u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_404404:
    // 0x404404: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x404404u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_404408:
    // 0x404408: 0xc04c970  jal         func_1325C0
label_40440c:
    if (ctx->pc == 0x40440Cu) {
        ctx->pc = 0x40440Cu;
            // 0x40440c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x404410u;
        goto label_404410;
    }
    ctx->pc = 0x404408u;
    SET_GPR_U32(ctx, 31, 0x404410u);
    ctx->pc = 0x40440Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404408u;
            // 0x40440c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404410u; }
        if (ctx->pc != 0x404410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404410u; }
        if (ctx->pc != 0x404410u) { return; }
    }
    ctx->pc = 0x404410u;
label_404410:
    // 0x404410: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x404410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_404414:
    // 0x404414: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x404414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_404418:
    // 0x404418: 0xc04c72c  jal         func_131CB0
label_40441c:
    if (ctx->pc == 0x40441Cu) {
        ctx->pc = 0x40441Cu;
            // 0x40441c: 0x27a60180  addiu       $a2, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x404420u;
        goto label_404420;
    }
    ctx->pc = 0x404418u;
    SET_GPR_U32(ctx, 31, 0x404420u);
    ctx->pc = 0x40441Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404418u;
            // 0x40441c: 0x27a60180  addiu       $a2, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404420u; }
        if (ctx->pc != 0x404420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404420u; }
        if (ctx->pc != 0x404420u) { return; }
    }
    ctx->pc = 0x404420u;
label_404420:
    // 0x404420: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x404420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_404424:
    // 0x404424: 0xc075328  jal         func_1D4CA0
label_404428:
    if (ctx->pc == 0x404428u) {
        ctx->pc = 0x404428u;
            // 0x404428: 0x26650240  addiu       $a1, $s3, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 576));
        ctx->pc = 0x40442Cu;
        goto label_40442c;
    }
    ctx->pc = 0x404424u;
    SET_GPR_U32(ctx, 31, 0x40442Cu);
    ctx->pc = 0x404428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404424u;
            // 0x404428: 0x26650240  addiu       $a1, $s3, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4CA0u;
    if (runtime->hasFunction(0x1D4CA0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40442Cu; }
        if (ctx->pc != 0x40442Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4CA0_0x1d4ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40442Cu; }
        if (ctx->pc != 0x40442Cu) { return; }
    }
    ctx->pc = 0x40442Cu;
label_40442c:
    // 0x40442c: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x40442cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_404430:
    // 0x404430: 0xc04c74c  jal         func_131D30
label_404434:
    if (ctx->pc == 0x404434u) {
        ctx->pc = 0x404434u;
            // 0x404434: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = 0x404438u;
        goto label_404438;
    }
    ctx->pc = 0x404430u;
    SET_GPR_U32(ctx, 31, 0x404438u);
    ctx->pc = 0x404434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404430u;
            // 0x404434: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404438u; }
        if (ctx->pc != 0x404438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404438u; }
        if (ctx->pc != 0x404438u) { return; }
    }
    ctx->pc = 0x404438u;
label_404438:
    // 0x404438: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x404438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_40443c:
    // 0x40443c: 0xc04c74c  jal         func_131D30
label_404440:
    if (ctx->pc == 0x404440u) {
        ctx->pc = 0x404440u;
            // 0x404440: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x404444u;
        goto label_404444;
    }
    ctx->pc = 0x40443Cu;
    SET_GPR_U32(ctx, 31, 0x404444u);
    ctx->pc = 0x404440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40443Cu;
            // 0x404440: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404444u; }
        if (ctx->pc != 0x404444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404444u; }
        if (ctx->pc != 0x404444u) { return; }
    }
    ctx->pc = 0x404444u;
label_404444:
    // 0x404444: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x404444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
label_404448:
    // 0x404448: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x404448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_40444c:
    // 0x40444c: 0x8c458a08  lw          $a1, -0x75F8($v0)
    ctx->pc = 0x40444cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_404450:
    // 0x404450: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x404450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_404454:
    // 0x404454: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x404454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_404458:
    // 0x404458: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x404458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_40445c:
    // 0x40445c: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x40445cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_404460:
    // 0x404460: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x404460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_404464:
    // 0x404464: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x404464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_404468:
    // 0x404468: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x404468u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40446c:
    // 0x40446c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x40446cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_404470:
    // 0x404470: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x404470u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_404474:
    // 0x404474: 0x26450030  addiu       $a1, $s2, 0x30
    ctx->pc = 0x404474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_404478:
    // 0x404478: 0xc04cc7c  jal         func_1331F0
label_40447c:
    if (ctx->pc == 0x40447Cu) {
        ctx->pc = 0x40447Cu;
            // 0x40447c: 0xe6000094  swc1        $f0, 0x94($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
        ctx->pc = 0x404480u;
        goto label_404480;
    }
    ctx->pc = 0x404478u;
    SET_GPR_U32(ctx, 31, 0x404480u);
    ctx->pc = 0x40447Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404478u;
            // 0x40447c: 0xe6000094  swc1        $f0, 0x94($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404480u; }
        if (ctx->pc != 0x404480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404480u; }
        if (ctx->pc != 0x404480u) { return; }
    }
    ctx->pc = 0x404480u;
label_404480:
    // 0x404480: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x404480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_404484:
    // 0x404484: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x404484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_404488:
    // 0x404488: 0xc04cc90  jal         func_133240
label_40448c:
    if (ctx->pc == 0x40448Cu) {
        ctx->pc = 0x40448Cu;
            // 0x40448c: 0x27a601b0  addiu       $a2, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x404490u;
        goto label_404490;
    }
    ctx->pc = 0x404488u;
    SET_GPR_U32(ctx, 31, 0x404490u);
    ctx->pc = 0x40448Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404488u;
            // 0x40448c: 0x27a601b0  addiu       $a2, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404490u; }
        if (ctx->pc != 0x404490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404490u; }
        if (ctx->pc != 0x404490u) { return; }
    }
    ctx->pc = 0x404490u;
label_404490:
    // 0x404490: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x404490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_404494:
    // 0x404494: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x404494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_404498:
    // 0x404498: 0xc7a40104  lwc1        $f4, 0x104($sp)
    ctx->pc = 0x404498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_40449c:
    // 0x40449c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x40449cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4044a0:
    // 0x4044a0: 0xc7a10108  lwc1        $f1, 0x108($sp)
    ctx->pc = 0x4044a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4044a4:
    // 0x4044a4: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x4044a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
label_4044a8:
    // 0x4044a8: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x4044a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_4044ac:
    // 0x4044ac: 0xe7a400e4  swc1        $f4, 0xE4($sp)
    ctx->pc = 0x4044acu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_4044b0:
    // 0x4044b0: 0xe7a100e8  swc1        $f1, 0xE8($sp)
    ctx->pc = 0x4044b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_4044b4:
    // 0x4044b4: 0xc4420014  lwc1        $f2, 0x14($v0)
    ctx->pc = 0x4044b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4044b8:
    // 0x4044b8: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x4044b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4044bc:
    // 0x4044bc: 0x0  nop
    ctx->pc = 0x4044bcu;
    // NOP
label_4044c0:
    // 0x4044c0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x4044c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_4044c4:
    // 0x4044c4: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x4044c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_4044c8:
    // 0x4044c8: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x4044c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_4044cc:
    // 0x4044cc: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x4044ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_4044d0:
    // 0x4044d0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x4044d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_4044d4:
    // 0x4044d4: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x4044d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_4044d8:
    // 0x4044d8: 0xe7a100e8  swc1        $f1, 0xE8($sp)
    ctx->pc = 0x4044d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_4044dc:
    // 0x4044dc: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x4044dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_4044e0:
    // 0x4044e0: 0x8e700050  lw          $s0, 0x50($s3)
    ctx->pc = 0x4044e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_4044e4:
    // 0x4044e4: 0xc088b74  jal         func_222DD0
label_4044e8:
    if (ctx->pc == 0x4044E8u) {
        ctx->pc = 0x4044E8u;
            // 0x4044e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4044ECu;
        goto label_4044ec;
    }
    ctx->pc = 0x4044E4u;
    SET_GPR_U32(ctx, 31, 0x4044ECu);
    ctx->pc = 0x4044E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4044E4u;
            // 0x4044e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4044ECu; }
        if (ctx->pc != 0x4044ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4044ECu; }
        if (ctx->pc != 0x4044ECu) { return; }
    }
    ctx->pc = 0x4044ECu;
label_4044ec:
    // 0x4044ec: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x4044ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4044f0:
    // 0x4044f0: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x4044f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_4044f4:
    // 0x4044f4: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4044f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4044f8:
    // 0x4044f8: 0x320f809  jalr        $t9
label_4044fc:
    if (ctx->pc == 0x4044FCu) {
        ctx->pc = 0x4044FCu;
            // 0x4044fc: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x404500u;
        goto label_404500;
    }
    ctx->pc = 0x4044F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x404500u);
        ctx->pc = 0x4044FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4044F8u;
            // 0x4044fc: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x404500u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x404500u; }
            if (ctx->pc != 0x404500u) { return; }
        }
        }
    }
    ctx->pc = 0x404500u;
label_404500:
    // 0x404500: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x404500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_404504:
    // 0x404504: 0xa2620211  sb          $v0, 0x211($s3)
    ctx->pc = 0x404504u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 529), (uint8_t)GPR_U32(ctx, 2));
label_404508:
    // 0x404508: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x404508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40450c:
    // 0x40450c: 0xe6600240  swc1        $f0, 0x240($s3)
    ctx->pc = 0x40450cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 576), bits); }
label_404510:
    // 0x404510: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x404510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_404514:
    // 0x404514: 0xe6600244  swc1        $f0, 0x244($s3)
    ctx->pc = 0x404514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 580), bits); }
label_404518:
    // 0x404518: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x404518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40451c:
    // 0x40451c: 0xe6600248  swc1        $f0, 0x248($s3)
    ctx->pc = 0x40451cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 584), bits); }
label_404520:
    // 0x404520: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x404520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_404524:
    // 0x404524: 0x1000003c  b           . + 4 + (0x3C << 2)
label_404528:
    if (ctx->pc == 0x404528u) {
        ctx->pc = 0x404528u;
            // 0x404528: 0xe660024c  swc1        $f0, 0x24C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 588), bits); }
        ctx->pc = 0x40452Cu;
        goto label_40452c;
    }
    ctx->pc = 0x404524u;
    {
        const bool branch_taken_0x404524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x404528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x404524u;
            // 0x404528: 0xe660024c  swc1        $f0, 0x24C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x404524) {
            ctx->pc = 0x404618u;
            goto label_404618;
        }
    }
    ctx->pc = 0x40452Cu;
label_40452c:
    // 0x40452c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x40452cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_404530:
    // 0x404530: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x404530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_404534:
    // 0x404534: 0xc04cc04  jal         func_133010
label_404538:
    if (ctx->pc == 0x404538u) {
        ctx->pc = 0x404538u;
            // 0x404538: 0xe6600230  swc1        $f0, 0x230($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 560), bits); }
        ctx->pc = 0x40453Cu;
        goto label_40453c;
    }
    ctx->pc = 0x404534u;
    SET_GPR_U32(ctx, 31, 0x40453Cu);
    ctx->pc = 0x404538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404534u;
            // 0x404538: 0xe6600230  swc1        $f0, 0x230($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 560), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40453Cu; }
        if (ctx->pc != 0x40453Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40453Cu; }
        if (ctx->pc != 0x40453Cu) { return; }
    }
    ctx->pc = 0x40453Cu;
label_40453c:
    // 0x40453c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x40453cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_404540:
    // 0x404540: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x404540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_404544:
    // 0x404544: 0xc04cbf0  jal         func_132FC0
label_404548:
    if (ctx->pc == 0x404548u) {
        ctx->pc = 0x404548u;
            // 0x404548: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x40454Cu;
        goto label_40454c;
    }
    ctx->pc = 0x404544u;
    SET_GPR_U32(ctx, 31, 0x40454Cu);
    ctx->pc = 0x404548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404544u;
            // 0x404548: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40454Cu; }
        if (ctx->pc != 0x40454Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40454Cu; }
        if (ctx->pc != 0x40454Cu) { return; }
    }
    ctx->pc = 0x40454Cu;
label_40454c:
    // 0x40454c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x40454cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_404550:
    // 0x404550: 0xc04cc44  jal         func_133110
label_404554:
    if (ctx->pc == 0x404554u) {
        ctx->pc = 0x404554u;
            // 0x404554: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x404558u;
        goto label_404558;
    }
    ctx->pc = 0x404550u;
    SET_GPR_U32(ctx, 31, 0x404558u);
    ctx->pc = 0x404554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404550u;
            // 0x404554: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404558u; }
        if (ctx->pc != 0x404558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404558u; }
        if (ctx->pc != 0x404558u) { return; }
    }
    ctx->pc = 0x404558u;
label_404558:
    // 0x404558: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x404558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_40455c:
    // 0x40455c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x40455cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_404560:
    // 0x404560: 0xc04cbf0  jal         func_132FC0
label_404564:
    if (ctx->pc == 0x404564u) {
        ctx->pc = 0x404564u;
            // 0x404564: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x404568u;
        goto label_404568;
    }
    ctx->pc = 0x404560u;
    SET_GPR_U32(ctx, 31, 0x404568u);
    ctx->pc = 0x404564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404560u;
            // 0x404564: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404568u; }
        if (ctx->pc != 0x404568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404568u; }
        if (ctx->pc != 0x404568u) { return; }
    }
    ctx->pc = 0x404568u;
label_404568:
    // 0x404568: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x404568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_40456c:
    // 0x40456c: 0xc04cc44  jal         func_133110
label_404570:
    if (ctx->pc == 0x404570u) {
        ctx->pc = 0x404570u;
            // 0x404570: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x404574u;
        goto label_404574;
    }
    ctx->pc = 0x40456Cu;
    SET_GPR_U32(ctx, 31, 0x404574u);
    ctx->pc = 0x404570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40456Cu;
            // 0x404570: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404574u; }
        if (ctx->pc != 0x404574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404574u; }
        if (ctx->pc != 0x404574u) { return; }
    }
    ctx->pc = 0x404574u;
label_404574:
    // 0x404574: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x404574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_404578:
    // 0x404578: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x404578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_40457c:
    // 0x40457c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x40457cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_404580:
    // 0x404580: 0x26450030  addiu       $a1, $s2, 0x30
    ctx->pc = 0x404580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_404584:
    // 0x404584: 0xc04cc7c  jal         func_1331F0
label_404588:
    if (ctx->pc == 0x404588u) {
        ctx->pc = 0x404588u;
            // 0x404588: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x40458Cu;
        goto label_40458c;
    }
    ctx->pc = 0x404584u;
    SET_GPR_U32(ctx, 31, 0x40458Cu);
    ctx->pc = 0x404588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404584u;
            // 0x404588: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40458Cu; }
        if (ctx->pc != 0x40458Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40458Cu; }
        if (ctx->pc != 0x40458Cu) { return; }
    }
    ctx->pc = 0x40458Cu;
label_40458c:
    // 0x40458c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x40458cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_404590:
    // 0x404590: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x404590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_404594:
    // 0x404594: 0xc04cc90  jal         func_133240
label_404598:
    if (ctx->pc == 0x404598u) {
        ctx->pc = 0x404598u;
            // 0x404598: 0x27a601b0  addiu       $a2, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x40459Cu;
        goto label_40459c;
    }
    ctx->pc = 0x404594u;
    SET_GPR_U32(ctx, 31, 0x40459Cu);
    ctx->pc = 0x404598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404594u;
            // 0x404598: 0x27a601b0  addiu       $a2, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40459Cu; }
        if (ctx->pc != 0x40459Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40459Cu; }
        if (ctx->pc != 0x40459Cu) { return; }
    }
    ctx->pc = 0x40459Cu;
label_40459c:
    // 0x40459c: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x40459cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4045a0:
    // 0x4045a0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4045a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4045a4:
    // 0x4045a4: 0xc7a400d4  lwc1        $f4, 0xD4($sp)
    ctx->pc = 0x4045a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4045a8:
    // 0x4045a8: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4045a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4045ac:
    // 0x4045ac: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x4045acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4045b0:
    // 0x4045b0: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x4045b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
label_4045b4:
    // 0x4045b4: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x4045b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_4045b8:
    // 0x4045b8: 0xe7a400b4  swc1        $f4, 0xB4($sp)
    ctx->pc = 0x4045b8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_4045bc:
    // 0x4045bc: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x4045bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_4045c0:
    // 0x4045c0: 0xc4420014  lwc1        $f2, 0x14($v0)
    ctx->pc = 0x4045c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4045c4:
    // 0x4045c4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x4045c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4045c8:
    // 0x4045c8: 0x0  nop
    ctx->pc = 0x4045c8u;
    // NOP
label_4045cc:
    // 0x4045cc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x4045ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_4045d0:
    // 0x4045d0: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x4045d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_4045d4:
    // 0x4045d4: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x4045d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_4045d8:
    // 0x4045d8: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x4045d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_4045dc:
    // 0x4045dc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x4045dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_4045e0:
    // 0x4045e0: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x4045e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_4045e4:
    // 0x4045e4: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x4045e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_4045e8:
    // 0x4045e8: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x4045e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_4045ec:
    // 0x4045ec: 0x8e700050  lw          $s0, 0x50($s3)
    ctx->pc = 0x4045ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_4045f0:
    // 0x4045f0: 0xc088b74  jal         func_222DD0
label_4045f4:
    if (ctx->pc == 0x4045F4u) {
        ctx->pc = 0x4045F4u;
            // 0x4045f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4045F8u;
        goto label_4045f8;
    }
    ctx->pc = 0x4045F0u;
    SET_GPR_U32(ctx, 31, 0x4045F8u);
    ctx->pc = 0x4045F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4045F0u;
            // 0x4045f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4045F8u; }
        if (ctx->pc != 0x4045F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4045F8u; }
        if (ctx->pc != 0x4045F8u) { return; }
    }
    ctx->pc = 0x4045F8u;
label_4045f8:
    // 0x4045f8: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x4045f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4045fc:
    // 0x4045fc: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x4045fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_404600:
    // 0x404600: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x404600u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_404604:
    // 0x404604: 0x320f809  jalr        $t9
label_404608:
    if (ctx->pc == 0x404608u) {
        ctx->pc = 0x404608u;
            // 0x404608: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x40460Cu;
        goto label_40460c;
    }
    ctx->pc = 0x404604u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40460Cu);
        ctx->pc = 0x404608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x404604u;
            // 0x404608: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x40460Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40460Cu; }
            if (ctx->pc != 0x40460Cu) { return; }
        }
        }
    }
    ctx->pc = 0x40460Cu;
label_40460c:
    // 0x40460c: 0x26640150  addiu       $a0, $s3, 0x150
    ctx->pc = 0x40460cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 336));
label_404610:
    // 0x404610: 0xc0c6278  jal         func_3189E0
label_404614:
    if (ctx->pc == 0x404614u) {
        ctx->pc = 0x404614u;
            // 0x404614: 0xa2600211  sb          $zero, 0x211($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 529), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x404618u;
        goto label_404618;
    }
    ctx->pc = 0x404610u;
    SET_GPR_U32(ctx, 31, 0x404618u);
    ctx->pc = 0x404614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404610u;
            // 0x404614: 0xa2600211  sb          $zero, 0x211($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 529), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3189E0u;
    if (runtime->hasFunction(0x3189E0u)) {
        auto targetFn = runtime->lookupFunction(0x3189E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404618u; }
        if (ctx->pc != 0x404618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003189E0_0x3189e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404618u; }
        if (ctx->pc != 0x404618u) { return; }
    }
    ctx->pc = 0x404618u;
label_404618:
    // 0x404618: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x404618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_40461c:
    // 0x40461c: 0xc04c720  jal         func_131C80
label_404620:
    if (ctx->pc == 0x404620u) {
        ctx->pc = 0x404620u;
            // 0x404620: 0x26650170  addiu       $a1, $s3, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 368));
        ctx->pc = 0x404624u;
        goto label_404624;
    }
    ctx->pc = 0x40461Cu;
    SET_GPR_U32(ctx, 31, 0x404624u);
    ctx->pc = 0x404620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40461Cu;
            // 0x404620: 0x26650170  addiu       $a1, $s3, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404624u; }
        if (ctx->pc != 0x404624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404624u; }
        if (ctx->pc != 0x404624u) { return; }
    }
    ctx->pc = 0x404624u;
label_404624:
    // 0x404624: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x404624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_404628:
    // 0x404628: 0xc7a001d0  lwc1        $f0, 0x1D0($sp)
    ctx->pc = 0x404628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40462c:
    // 0x40462c: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x40462cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_404630:
    // 0x404630: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
label_404634:
    if (ctx->pc == 0x404634u) {
        ctx->pc = 0x404634u;
            // 0x404634: 0xc622000c  lwc1        $f2, 0xC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x404638u;
        goto label_404638;
    }
    ctx->pc = 0x404630u;
    {
        const bool branch_taken_0x404630 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x404630) {
            ctx->pc = 0x404634u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x404630u;
            // 0x404634: 0xc622000c  lwc1        $f2, 0xC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x404678u;
            goto label_404678;
        }
    }
    ctx->pc = 0x404638u;
label_404638:
    // 0x404638: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x404638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40463c:
    // 0x40463c: 0xc7a001d4  lwc1        $f0, 0x1D4($sp)
    ctx->pc = 0x40463cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_404640:
    // 0x404640: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x404640u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_404644:
    // 0x404644: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_404648:
    if (ctx->pc == 0x404648u) {
        ctx->pc = 0x40464Cu;
        goto label_40464c;
    }
    ctx->pc = 0x404644u;
    {
        const bool branch_taken_0x404644 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x404644) {
            ctx->pc = 0x404674u;
            goto label_404674;
        }
    }
    ctx->pc = 0x40464Cu;
label_40464c:
    // 0x40464c: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x40464cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_404650:
    // 0x404650: 0xc7a001d8  lwc1        $f0, 0x1D8($sp)
    ctx->pc = 0x404650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_404654:
    // 0x404654: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x404654u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_404658:
    // 0x404658: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_40465c:
    if (ctx->pc == 0x40465Cu) {
        ctx->pc = 0x404660u;
        goto label_404660;
    }
    ctx->pc = 0x404658u;
    {
        const bool branch_taken_0x404658 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x404658) {
            ctx->pc = 0x404674u;
            goto label_404674;
        }
    }
    ctx->pc = 0x404660u;
label_404660:
    // 0x404660: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x404660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_404664:
    // 0x404664: 0xc7a001dc  lwc1        $f0, 0x1DC($sp)
    ctx->pc = 0x404664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_404668:
    // 0x404668: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x404668u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40466c:
    // 0x40466c: 0x45030051  bc1tl       . + 4 + (0x51 << 2)
label_404670:
    if (ctx->pc == 0x404670u) {
        ctx->pc = 0x404670u;
            // 0x404670: 0x92640210  lbu         $a0, 0x210($s3) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 528)));
        ctx->pc = 0x404674u;
        goto label_404674;
    }
    ctx->pc = 0x40466Cu;
    {
        const bool branch_taken_0x40466c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x40466c) {
            ctx->pc = 0x404670u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40466Cu;
            // 0x404670: 0x92640210  lbu         $a0, 0x210($s3) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 528)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4047B4u;
            goto label_4047b4;
        }
    }
    ctx->pc = 0x404674u;
label_404674:
    // 0x404674: 0xc622000c  lwc1        $f2, 0xC($s1)
    ctx->pc = 0x404674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_404678:
    // 0x404678: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x404678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_40467c:
    // 0x40467c: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x40467cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_404680:
    // 0x404680: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x404680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_404684:
    // 0x404684: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x404684u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_404688:
    // 0x404688: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x404688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_40468c:
    // 0x40468c: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x40468cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_404690:
    // 0x404690: 0xc0d8a80  jal         func_362A00
label_404694:
    if (ctx->pc == 0x404694u) {
        ctx->pc = 0x404694u;
            // 0x404694: 0xe7a2007c  swc1        $f2, 0x7C($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
        ctx->pc = 0x404698u;
        goto label_404698;
    }
    ctx->pc = 0x404690u;
    SET_GPR_U32(ctx, 31, 0x404698u);
    ctx->pc = 0x404694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404690u;
            // 0x404694: 0xe7a2007c  swc1        $f2, 0x7C($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404698u; }
        if (ctx->pc != 0x404698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404698u; }
        if (ctx->pc != 0x404698u) { return; }
    }
    ctx->pc = 0x404698u;
label_404698:
    // 0x404698: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x404698u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40469c:
    // 0x40469c: 0xc0d8a80  jal         func_362A00
label_4046a0:
    if (ctx->pc == 0x4046A0u) {
        ctx->pc = 0x4046A0u;
            // 0x4046a0: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4046A4u;
        goto label_4046a4;
    }
    ctx->pc = 0x40469Cu;
    SET_GPR_U32(ctx, 31, 0x4046A4u);
    ctx->pc = 0x4046A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40469Cu;
            // 0x4046a0: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4046A4u; }
        if (ctx->pc != 0x4046A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4046A4u; }
        if (ctx->pc != 0x4046A4u) { return; }
    }
    ctx->pc = 0x4046A4u;
label_4046a4:
    // 0x4046a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4046a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4046a8:
    // 0x4046a8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4046a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4046ac:
    // 0x4046ac: 0xc0d8a6c  jal         func_3629B0
label_4046b0:
    if (ctx->pc == 0x4046B0u) {
        ctx->pc = 0x4046B0u;
            // 0x4046b0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4046B4u;
        goto label_4046b4;
    }
    ctx->pc = 0x4046ACu;
    SET_GPR_U32(ctx, 31, 0x4046B4u);
    ctx->pc = 0x4046B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4046ACu;
            // 0x4046b0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3629B0u;
    if (runtime->hasFunction(0x3629B0u)) {
        auto targetFn = runtime->lookupFunction(0x3629B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4046B4u; }
        if (ctx->pc != 0x4046B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003629B0_0x3629b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4046B4u; }
        if (ctx->pc != 0x4046B4u) { return; }
    }
    ctx->pc = 0x4046B4u;
label_4046b4:
    // 0x4046b4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x4046b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4046b8:
    // 0x4046b8: 0xc0b6e90  jal         func_2DBA40
label_4046bc:
    if (ctx->pc == 0x4046BCu) {
        ctx->pc = 0x4046BCu;
            // 0x4046bc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4046C0u;
        goto label_4046c0;
    }
    ctx->pc = 0x4046B8u;
    SET_GPR_U32(ctx, 31, 0x4046C0u);
    ctx->pc = 0x4046BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4046B8u;
            // 0x4046bc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBA40u;
    if (runtime->hasFunction(0x2DBA40u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4046C0u; }
        if (ctx->pc != 0x4046C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA40_0x2dba40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4046C0u; }
        if (ctx->pc != 0x4046C0u) { return; }
    }
    ctx->pc = 0x4046C0u;
label_4046c0:
    // 0x4046c0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x4046c0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_4046c4:
    // 0x4046c4: 0xc0d8a80  jal         func_362A00
label_4046c8:
    if (ctx->pc == 0x4046C8u) {
        ctx->pc = 0x4046C8u;
            // 0x4046c8: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x4046CCu;
        goto label_4046cc;
    }
    ctx->pc = 0x4046C4u;
    SET_GPR_U32(ctx, 31, 0x4046CCu);
    ctx->pc = 0x4046C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4046C4u;
            // 0x4046c8: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4046CCu; }
        if (ctx->pc != 0x4046CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4046CCu; }
        if (ctx->pc != 0x4046CCu) { return; }
    }
    ctx->pc = 0x4046CCu;
label_4046cc:
    // 0x4046cc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4046ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_4046d0:
    // 0x4046d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4046d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4046d4:
    // 0x4046d4: 0xc0d8a54  jal         func_362950
label_4046d8:
    if (ctx->pc == 0x4046D8u) {
        ctx->pc = 0x4046D8u;
            // 0x4046d8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4046DCu;
        goto label_4046dc;
    }
    ctx->pc = 0x4046D4u;
    SET_GPR_U32(ctx, 31, 0x4046DCu);
    ctx->pc = 0x4046D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4046D4u;
            // 0x4046d8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362950u;
    if (runtime->hasFunction(0x362950u)) {
        auto targetFn = runtime->lookupFunction(0x362950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4046DCu; }
        if (ctx->pc != 0x4046DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362950_0x362950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4046DCu; }
        if (ctx->pc != 0x4046DCu) { return; }
    }
    ctx->pc = 0x4046DCu;
label_4046dc:
    // 0x4046dc: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x4046dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_4046e0:
    // 0x4046e0: 0xc0b6e90  jal         func_2DBA40
label_4046e4:
    if (ctx->pc == 0x4046E4u) {
        ctx->pc = 0x4046E4u;
            // 0x4046e4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4046E8u;
        goto label_4046e8;
    }
    ctx->pc = 0x4046E0u;
    SET_GPR_U32(ctx, 31, 0x4046E8u);
    ctx->pc = 0x4046E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4046E0u;
            // 0x4046e4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBA40u;
    if (runtime->hasFunction(0x2DBA40u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4046E8u; }
        if (ctx->pc != 0x4046E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA40_0x2dba40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4046E8u; }
        if (ctx->pc != 0x4046E8u) { return; }
    }
    ctx->pc = 0x4046E8u;
label_4046e8:
    // 0x4046e8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x4046e8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_4046ec:
    // 0x4046ec: 0xc0d8a80  jal         func_362A00
label_4046f0:
    if (ctx->pc == 0x4046F0u) {
        ctx->pc = 0x4046F0u;
            // 0x4046f0: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4046F4u;
        goto label_4046f4;
    }
    ctx->pc = 0x4046ECu;
    SET_GPR_U32(ctx, 31, 0x4046F4u);
    ctx->pc = 0x4046F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4046ECu;
            // 0x4046f0: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4046F4u; }
        if (ctx->pc != 0x4046F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4046F4u; }
        if (ctx->pc != 0x4046F4u) { return; }
    }
    ctx->pc = 0x4046F4u;
label_4046f4:
    // 0x4046f4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4046f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_4046f8:
    // 0x4046f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4046f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4046fc:
    // 0x4046fc: 0xc0d8a3c  jal         func_3628F0
label_404700:
    if (ctx->pc == 0x404700u) {
        ctx->pc = 0x404700u;
            // 0x404700: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x404704u;
        goto label_404704;
    }
    ctx->pc = 0x4046FCu;
    SET_GPR_U32(ctx, 31, 0x404704u);
    ctx->pc = 0x404700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4046FCu;
            // 0x404700: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3628F0u;
    if (runtime->hasFunction(0x3628F0u)) {
        auto targetFn = runtime->lookupFunction(0x3628F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404704u; }
        if (ctx->pc != 0x404704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003628F0_0x3628f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404704u; }
        if (ctx->pc != 0x404704u) { return; }
    }
    ctx->pc = 0x404704u;
label_404704:
    // 0x404704: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x404704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_404708:
    // 0x404708: 0xc0b6e00  jal         func_2DB800
label_40470c:
    if (ctx->pc == 0x40470Cu) {
        ctx->pc = 0x40470Cu;
            // 0x40470c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x404710u;
        goto label_404710;
    }
    ctx->pc = 0x404708u;
    SET_GPR_U32(ctx, 31, 0x404710u);
    ctx->pc = 0x40470Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404708u;
            // 0x40470c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB800u;
    if (runtime->hasFunction(0x2DB800u)) {
        auto targetFn = runtime->lookupFunction(0x2DB800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404710u; }
        if (ctx->pc != 0x404710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB800_0x2db800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404710u; }
        if (ctx->pc != 0x404710u) { return; }
    }
    ctx->pc = 0x404710u;
label_404710:
    // 0x404710: 0xc0d8a80  jal         func_362A00
label_404714:
    if (ctx->pc == 0x404714u) {
        ctx->pc = 0x404714u;
            // 0x404714: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x404718u;
        goto label_404718;
    }
    ctx->pc = 0x404710u;
    SET_GPR_U32(ctx, 31, 0x404718u);
    ctx->pc = 0x404714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404710u;
            // 0x404714: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404718u; }
        if (ctx->pc != 0x404718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404718u; }
        if (ctx->pc != 0x404718u) { return; }
    }
    ctx->pc = 0x404718u;
label_404718:
    // 0x404718: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x404718u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40471c:
    // 0x40471c: 0xc0d8a80  jal         func_362A00
label_404720:
    if (ctx->pc == 0x404720u) {
        ctx->pc = 0x404720u;
            // 0x404720: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x404724u;
        goto label_404724;
    }
    ctx->pc = 0x40471Cu;
    SET_GPR_U32(ctx, 31, 0x404724u);
    ctx->pc = 0x404720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40471Cu;
            // 0x404720: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404724u; }
        if (ctx->pc != 0x404724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404724u; }
        if (ctx->pc != 0x404724u) { return; }
    }
    ctx->pc = 0x404724u;
label_404724:
    // 0x404724: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x404724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_404728:
    // 0x404728: 0xc0d8a2c  jal         func_3628B0
label_40472c:
    if (ctx->pc == 0x40472Cu) {
        ctx->pc = 0x40472Cu;
            // 0x40472c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x404730u;
        goto label_404730;
    }
    ctx->pc = 0x404728u;
    SET_GPR_U32(ctx, 31, 0x404730u);
    ctx->pc = 0x40472Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404728u;
            // 0x40472c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3628B0u;
    if (runtime->hasFunction(0x3628B0u)) {
        auto targetFn = runtime->lookupFunction(0x3628B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404730u; }
        if (ctx->pc != 0x404730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003628B0_0x3628b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404730u; }
        if (ctx->pc != 0x404730u) { return; }
    }
    ctx->pc = 0x404730u;
label_404730:
    // 0x404730: 0xc0d8a24  jal         func_362890
label_404734:
    if (ctx->pc == 0x404734u) {
        ctx->pc = 0x404734u;
            // 0x404734: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x404738u;
        goto label_404738;
    }
    ctx->pc = 0x404730u;
    SET_GPR_U32(ctx, 31, 0x404738u);
    ctx->pc = 0x404734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404730u;
            // 0x404734: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x362890u;
    if (runtime->hasFunction(0x362890u)) {
        auto targetFn = runtime->lookupFunction(0x362890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404738u; }
        if (ctx->pc != 0x404738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362890_0x362890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404738u; }
        if (ctx->pc != 0x404738u) { return; }
    }
    ctx->pc = 0x404738u;
label_404738:
    // 0x404738: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_40473c:
    if (ctx->pc == 0x40473Cu) {
        ctx->pc = 0x404740u;
        goto label_404740;
    }
    ctx->pc = 0x404738u;
    {
        const bool branch_taken_0x404738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x404738) {
            ctx->pc = 0x40474Cu;
            goto label_40474c;
        }
    }
    ctx->pc = 0x404740u;
label_404740:
    // 0x404740: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x404740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_404744:
    // 0x404744: 0xc0d8a14  jal         func_362850
label_404748:
    if (ctx->pc == 0x404748u) {
        ctx->pc = 0x404748u;
            // 0x404748: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40474Cu;
        goto label_40474c;
    }
    ctx->pc = 0x404744u;
    SET_GPR_U32(ctx, 31, 0x40474Cu);
    ctx->pc = 0x404748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404744u;
            // 0x404748: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362850u;
    if (runtime->hasFunction(0x362850u)) {
        auto targetFn = runtime->lookupFunction(0x362850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40474Cu; }
        if (ctx->pc != 0x40474Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362850_0x362850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40474Cu; }
        if (ctx->pc != 0x40474Cu) { return; }
    }
    ctx->pc = 0x40474Cu;
label_40474c:
    // 0x40474c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x40474cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_404750:
    // 0x404750: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x404750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_404754:
    // 0x404754: 0xc7a30080  lwc1        $f3, 0x80($sp)
    ctx->pc = 0x404754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_404758:
    // 0x404758: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x404758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_40475c:
    // 0x40475c: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x40475cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_404760:
    // 0x404760: 0xc4440014  lwc1        $f4, 0x14($v0)
    ctx->pc = 0x404760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_404764:
    // 0x404764: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x404764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_404768:
    // 0x404768: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x404768u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_40476c:
    // 0x40476c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x40476cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_404770:
    // 0x404770: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x404770u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_404774:
    // 0x404774: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x404774u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_404778:
    // 0x404778: 0xe7a30080  swc1        $f3, 0x80($sp)
    ctx->pc = 0x404778u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_40477c:
    // 0x40477c: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x40477cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_404780:
    // 0x404780: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x404780u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_404784:
    // 0x404784: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x404784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_404788:
    // 0x404788: 0x8e700050  lw          $s0, 0x50($s3)
    ctx->pc = 0x404788u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_40478c:
    // 0x40478c: 0xc088b74  jal         func_222DD0
label_404790:
    if (ctx->pc == 0x404790u) {
        ctx->pc = 0x404790u;
            // 0x404790: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x404794u;
        goto label_404794;
    }
    ctx->pc = 0x40478Cu;
    SET_GPR_U32(ctx, 31, 0x404794u);
    ctx->pc = 0x404790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40478Cu;
            // 0x404790: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404794u; }
        if (ctx->pc != 0x404794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404794u; }
        if (ctx->pc != 0x404794u) { return; }
    }
    ctx->pc = 0x404794u;
label_404794:
    // 0x404794: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x404794u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_404798:
    // 0x404798: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x404798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_40479c:
    // 0x40479c: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x40479cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_4047a0:
    // 0x4047a0: 0x320f809  jalr        $t9
label_4047a4:
    if (ctx->pc == 0x4047A4u) {
        ctx->pc = 0x4047A4u;
            // 0x4047a4: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4047A8u;
        goto label_4047a8;
    }
    ctx->pc = 0x4047A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4047A8u);
        ctx->pc = 0x4047A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4047A0u;
            // 0x4047a4: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4047A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4047A8u; }
            if (ctx->pc != 0x4047A8u) { return; }
        }
        }
    }
    ctx->pc = 0x4047A8u;
label_4047a8:
    // 0x4047a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4047a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4047ac:
    // 0x4047ac: 0x10000011  b           . + 4 + (0x11 << 2)
label_4047b0:
    if (ctx->pc == 0x4047B0u) {
        ctx->pc = 0x4047B0u;
            // 0x4047b0: 0xa2630210  sb          $v1, 0x210($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 528), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4047B4u;
        goto label_4047b4;
    }
    ctx->pc = 0x4047ACu;
    {
        const bool branch_taken_0x4047ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4047B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4047ACu;
            // 0x4047b0: 0xa2630210  sb          $v1, 0x210($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 528), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4047ac) {
            ctx->pc = 0x4047F4u;
            goto label_4047f4;
        }
    }
    ctx->pc = 0x4047B4u;
label_4047b4:
    // 0x4047b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4047b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4047b8:
    // 0x4047b8: 0x5483000f  bnel        $a0, $v1, . + 4 + (0xF << 2)
label_4047bc:
    if (ctx->pc == 0x4047BCu) {
        ctx->pc = 0x4047BCu;
            // 0x4047bc: 0xc6410044  lwc1        $f1, 0x44($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x4047C0u;
        goto label_4047c0;
    }
    ctx->pc = 0x4047B8u;
    {
        const bool branch_taken_0x4047b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4047b8) {
            ctx->pc = 0x4047BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4047B8u;
            // 0x4047bc: 0xc6410044  lwc1        $f1, 0x44($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4047F8u;
            goto label_4047f8;
        }
    }
    ctx->pc = 0x4047C0u;
label_4047c0:
    // 0x4047c0: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x4047c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_4047c4:
    // 0x4047c4: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x4047c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
label_4047c8:
    // 0x4047c8: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x4047c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
label_4047cc:
    // 0x4047cc: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x4047ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
label_4047d0:
    // 0x4047d0: 0x8e700050  lw          $s0, 0x50($s3)
    ctx->pc = 0x4047d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_4047d4:
    // 0x4047d4: 0xc088b74  jal         func_222DD0
label_4047d8:
    if (ctx->pc == 0x4047D8u) {
        ctx->pc = 0x4047D8u;
            // 0x4047d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4047DCu;
        goto label_4047dc;
    }
    ctx->pc = 0x4047D4u;
    SET_GPR_U32(ctx, 31, 0x4047DCu);
    ctx->pc = 0x4047D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4047D4u;
            // 0x4047d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4047DCu; }
        if (ctx->pc != 0x4047DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4047DCu; }
        if (ctx->pc != 0x4047DCu) { return; }
    }
    ctx->pc = 0x4047DCu;
label_4047dc:
    // 0x4047dc: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x4047dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4047e0:
    // 0x4047e0: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x4047e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_4047e4:
    // 0x4047e4: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x4047e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_4047e8:
    // 0x4047e8: 0x320f809  jalr        $t9
label_4047ec:
    if (ctx->pc == 0x4047ECu) {
        ctx->pc = 0x4047ECu;
            // 0x4047ec: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4047F0u;
        goto label_4047f0;
    }
    ctx->pc = 0x4047E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4047F0u);
        ctx->pc = 0x4047ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4047E8u;
            // 0x4047ec: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4047F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4047F0u; }
            if (ctx->pc != 0x4047F0u) { return; }
        }
        }
    }
    ctx->pc = 0x4047F0u;
label_4047f0:
    // 0x4047f0: 0xa2600210  sb          $zero, 0x210($s3)
    ctx->pc = 0x4047f0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 528), (uint8_t)GPR_U32(ctx, 0));
label_4047f4:
    // 0x4047f4: 0xc6410044  lwc1        $f1, 0x44($s2)
    ctx->pc = 0x4047f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4047f8:
    // 0x4047f8: 0xc660022c  lwc1        $f0, 0x22C($s3)
    ctx->pc = 0x4047f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4047fc:
    // 0x4047fc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4047fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_404800:
    // 0x404800: 0x4503000f  bc1tl       . + 4 + (0xF << 2)
label_404804:
    if (ctx->pc == 0x404804u) {
        ctx->pc = 0x404804u;
            // 0x404804: 0x96440050  lhu         $a0, 0x50($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->pc = 0x404808u;
        goto label_404808;
    }
    ctx->pc = 0x404800u;
    {
        const bool branch_taken_0x404800 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x404800) {
            ctx->pc = 0x404804u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x404800u;
            // 0x404804: 0x96440050  lhu         $a0, 0x50($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x404840u;
            goto label_404840;
        }
    }
    ctx->pc = 0x404808u;
label_404808:
    // 0x404808: 0x3c033f7d  lui         $v1, 0x3F7D
    ctx->pc = 0x404808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16253 << 16));
label_40480c:
    // 0x40480c: 0x346370a4  ori         $v1, $v1, 0x70A4
    ctx->pc = 0x40480cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28836);
label_404810:
    // 0x404810: 0xc6600200  lwc1        $f0, 0x200($s3)
    ctx->pc = 0x404810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_404814:
    // 0x404814: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x404814u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_404818:
    // 0x404818: 0x0  nop
    ctx->pc = 0x404818u;
    // NOP
label_40481c:
    // 0x40481c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x40481cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_404820:
    // 0x404820: 0xe6600200  swc1        $f0, 0x200($s3)
    ctx->pc = 0x404820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 512), bits); }
label_404824:
    // 0x404824: 0xc6610228  lwc1        $f1, 0x228($s3)
    ctx->pc = 0x404824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_404828:
    // 0x404828: 0xc6600200  lwc1        $f0, 0x200($s3)
    ctx->pc = 0x404828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40482c:
    // 0x40482c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x40482cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_404830:
    // 0x404830: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_404834:
    if (ctx->pc == 0x404834u) {
        ctx->pc = 0x404838u;
        goto label_404838;
    }
    ctx->pc = 0x404830u;
    {
        const bool branch_taken_0x404830 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x404830) {
            ctx->pc = 0x40483Cu;
            goto label_40483c;
        }
    }
    ctx->pc = 0x404838u;
label_404838:
    // 0x404838: 0xe6610200  swc1        $f1, 0x200($s3)
    ctx->pc = 0x404838u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 512), bits); }
label_40483c:
    // 0x40483c: 0x96440050  lhu         $a0, 0x50($s2)
    ctx->pc = 0x40483cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 80)));
label_404840:
    // 0x404840: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x404840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_404844:
    // 0x404844: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_404848:
    if (ctx->pc == 0x404848u) {
        ctx->pc = 0x40484Cu;
        goto label_40484c;
    }
    ctx->pc = 0x404844u;
    {
        const bool branch_taken_0x404844 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x404844) {
            ctx->pc = 0x404860u;
            goto label_404860;
        }
    }
    ctx->pc = 0x40484Cu;
label_40484c:
    // 0x40484c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x40484cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_404850:
    // 0x404850: 0xae6300e0  sw          $v1, 0xE0($s3)
    ctx->pc = 0x404850u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 224), GPR_U32(ctx, 3));
label_404854:
    // 0x404854: 0xc6600224  lwc1        $f0, 0x224($s3)
    ctx->pc = 0x404854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_404858:
    // 0x404858: 0x10000010  b           . + 4 + (0x10 << 2)
label_40485c:
    if (ctx->pc == 0x40485Cu) {
        ctx->pc = 0x40485Cu;
            // 0x40485c: 0xe6600200  swc1        $f0, 0x200($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 512), bits); }
        ctx->pc = 0x404860u;
        goto label_404860;
    }
    ctx->pc = 0x404858u;
    {
        const bool branch_taken_0x404858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40485Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x404858u;
            // 0x40485c: 0xe6600200  swc1        $f0, 0x200($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 512), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x404858) {
            ctx->pc = 0x40489Cu;
            goto label_40489c;
        }
    }
    ctx->pc = 0x404860u;
label_404860:
    // 0x404860: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x404860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_404864:
    // 0x404864: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x404864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
label_404868:
    // 0x404868: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x404868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_40486c:
    // 0x40486c: 0xc6610220  lwc1        $f1, 0x220($s3)
    ctx->pc = 0x40486cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_404870:
    // 0x404870: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x404870u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_404874:
    // 0x404874: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x404874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_404878:
    // 0x404878: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x404878u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_40487c:
    // 0x40487c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x40487cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_404880:
    // 0x404880: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_404884:
    if (ctx->pc == 0x404884u) {
        ctx->pc = 0x404884u;
            // 0x404884: 0xe6610220  swc1        $f1, 0x220($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 544), bits); }
        ctx->pc = 0x404888u;
        goto label_404888;
    }
    ctx->pc = 0x404880u;
    {
        const bool branch_taken_0x404880 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x404884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x404880u;
            // 0x404884: 0xe6610220  swc1        $f1, 0x220($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 544), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x404880) {
            ctx->pc = 0x40488Cu;
            goto label_40488c;
        }
    }
    ctx->pc = 0x404888u;
label_404888:
    // 0x404888: 0xae600220  sw          $zero, 0x220($s3)
    ctx->pc = 0x404888u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 544), GPR_U32(ctx, 0));
label_40488c:
    // 0x40488c: 0x8e640260  lw          $a0, 0x260($s3)
    ctx->pc = 0x40488cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 608)));
label_404890:
    // 0x404890: 0x26660010  addiu       $a2, $s3, 0x10
    ctx->pc = 0x404890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_404894:
    // 0x404894: 0xc122d2c  jal         func_48B4B0
label_404898:
    if (ctx->pc == 0x404898u) {
        ctx->pc = 0x404898u;
            // 0x404898: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40489Cu;
        goto label_40489c;
    }
    ctx->pc = 0x404894u;
    SET_GPR_U32(ctx, 31, 0x40489Cu);
    ctx->pc = 0x404898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404894u;
            // 0x404898: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40489Cu; }
        if (ctx->pc != 0x40489Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40489Cu; }
        if (ctx->pc != 0x40489Cu) { return; }
    }
    ctx->pc = 0x40489Cu;
label_40489c:
    // 0x40489c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x40489cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4048a0:
    // 0x4048a0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4048a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4048a4:
    // 0x4048a4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4048a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4048a8:
    // 0x4048a8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4048a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4048ac:
    // 0x4048ac: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4048acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4048b0:
    // 0x4048b0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4048b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4048b4:
    // 0x4048b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4048b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4048b8:
    // 0x4048b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4048b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4048bc:
    // 0x4048bc: 0x3e00008  jr          $ra
label_4048c0:
    if (ctx->pc == 0x4048C0u) {
        ctx->pc = 0x4048C0u;
            // 0x4048c0: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->pc = 0x4048C4u;
        goto label_4048c4;
    }
    ctx->pc = 0x4048BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4048C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4048BCu;
            // 0x4048c0: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4048C4u;
label_4048c4:
    // 0x4048c4: 0x0  nop
    ctx->pc = 0x4048c4u;
    // NOP
label_4048c8:
    // 0x4048c8: 0x0  nop
    ctx->pc = 0x4048c8u;
    // NOP
label_4048cc:
    // 0x4048cc: 0x0  nop
    ctx->pc = 0x4048ccu;
    // NOP
label_4048d0:
    // 0x4048d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4048d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4048d4:
    // 0x4048d4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4048d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4048d8:
    // 0x4048d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4048d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4048dc:
    // 0x4048dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4048dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4048e0:
    // 0x4048e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4048e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4048e4:
    // 0x4048e4: 0x8c420c78  lw          $v0, 0xC78($v0)
    ctx->pc = 0x4048e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
label_4048e8:
    // 0x4048e8: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x4048e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4048ec:
    // 0x4048ec: 0xc0e393c  jal         func_38E4F0
label_4048f0:
    if (ctx->pc == 0x4048F0u) {
        ctx->pc = 0x4048F0u;
            // 0x4048f0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4048F4u;
        goto label_4048f4;
    }
    ctx->pc = 0x4048ECu;
    SET_GPR_U32(ctx, 31, 0x4048F4u);
    ctx->pc = 0x4048F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4048ECu;
            // 0x4048f0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4048F4u; }
        if (ctx->pc != 0x4048F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4048F4u; }
        if (ctx->pc != 0x4048F4u) { return; }
    }
    ctx->pc = 0x4048F4u;
label_4048f4:
    // 0x4048f4: 0x92220250  lbu         $v0, 0x250($s1)
    ctx->pc = 0x4048f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 592)));
label_4048f8:
    // 0x4048f8: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_4048fc:
    if (ctx->pc == 0x4048FCu) {
        ctx->pc = 0x4048FCu;
            // 0x4048fc: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x404900u;
        goto label_404900;
    }
    ctx->pc = 0x4048F8u;
    {
        const bool branch_taken_0x4048f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4048f8) {
            ctx->pc = 0x4048FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4048F8u;
            // 0x4048fc: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x404930u;
            goto label_404930;
        }
    }
    ctx->pc = 0x404900u;
label_404900:
    // 0x404900: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x404900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_404904:
    // 0x404904: 0x8e230254  lw          $v1, 0x254($s1)
    ctx->pc = 0x404904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
label_404908:
    // 0x404908: 0x8c420dc0  lw          $v0, 0xDC0($v0)
    ctx->pc = 0x404908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3520)));
label_40490c:
    // 0x40490c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x40490cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_404910:
    // 0x404910: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x404910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_404914:
    // 0x404914: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x404914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_404918:
    // 0x404918: 0xc0ff744  jal         func_3FDD10
label_40491c:
    if (ctx->pc == 0x40491Cu) {
        ctx->pc = 0x40491Cu;
            // 0x40491c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x404920u;
        goto label_404920;
    }
    ctx->pc = 0x404918u;
    SET_GPR_U32(ctx, 31, 0x404920u);
    ctx->pc = 0x40491Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404918u;
            // 0x40491c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FDD10u;
    if (runtime->hasFunction(0x3FDD10u)) {
        auto targetFn = runtime->lookupFunction(0x3FDD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404920u; }
        if (ctx->pc != 0x404920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FDD10_0x3fdd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404920u; }
        if (ctx->pc != 0x404920u) { return; }
    }
    ctx->pc = 0x404920u;
label_404920:
    // 0x404920: 0x8e240260  lw          $a0, 0x260($s1)
    ctx->pc = 0x404920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
label_404924:
    // 0x404924: 0xc122c5c  jal         func_48B170
label_404928:
    if (ctx->pc == 0x404928u) {
        ctx->pc = 0x404928u;
            // 0x404928: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x40492Cu;
        goto label_40492c;
    }
    ctx->pc = 0x404924u;
    SET_GPR_U32(ctx, 31, 0x40492Cu);
    ctx->pc = 0x404928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404924u;
            // 0x404928: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B170u;
    if (runtime->hasFunction(0x48B170u)) {
        auto targetFn = runtime->lookupFunction(0x48B170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40492Cu; }
        if (ctx->pc != 0x40492Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B170_0x48b170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40492Cu; }
        if (ctx->pc != 0x40492Cu) { return; }
    }
    ctx->pc = 0x40492Cu;
label_40492c:
    // 0x40492c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x40492cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_404930:
    // 0x404930: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x404930u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_404934:
    // 0x404934: 0x320f809  jalr        $t9
label_404938:
    if (ctx->pc == 0x404938u) {
        ctx->pc = 0x404938u;
            // 0x404938: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40493Cu;
        goto label_40493c;
    }
    ctx->pc = 0x404934u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40493Cu);
        ctx->pc = 0x404938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x404934u;
            // 0x404938: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x40493Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40493Cu; }
            if (ctx->pc != 0x40493Cu) { return; }
        }
        }
    }
    ctx->pc = 0x40493Cu;
label_40493c:
    // 0x40493c: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x40493cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_404940:
    // 0x404940: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x404940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_404944:
    // 0x404944: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x404944u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_404948:
    // 0x404948: 0x0  nop
    ctx->pc = 0x404948u;
    // NOP
label_40494c:
    // 0x40494c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x40494cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_404950:
    // 0x404950: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_404954:
    if (ctx->pc == 0x404954u) {
        ctx->pc = 0x404954u;
            // 0x404954: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x404958u;
        goto label_404958;
    }
    ctx->pc = 0x404950u;
    {
        const bool branch_taken_0x404950 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x404950) {
            ctx->pc = 0x404954u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x404950u;
            // 0x404954: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x404968u;
            goto label_404968;
        }
    }
    ctx->pc = 0x404958u;
label_404958:
    // 0x404958: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x404958u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_40495c:
    // 0x40495c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x40495cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_404960:
    // 0x404960: 0x10000007  b           . + 4 + (0x7 << 2)
label_404964:
    if (ctx->pc == 0x404964u) {
        ctx->pc = 0x404964u;
            // 0x404964: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x404968u;
        goto label_404968;
    }
    ctx->pc = 0x404960u;
    {
        const bool branch_taken_0x404960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x404964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x404960u;
            // 0x404964: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404960) {
            ctx->pc = 0x404980u;
            goto label_404980;
        }
    }
    ctx->pc = 0x404968u;
label_404968:
    // 0x404968: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x404968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_40496c:
    // 0x40496c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x40496cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_404970:
    // 0x404970: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x404970u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_404974:
    // 0x404974: 0x0  nop
    ctx->pc = 0x404974u;
    // NOP
label_404978:
    // 0x404978: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x404978u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_40497c:
    // 0x40497c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x40497cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_404980:
    // 0x404980: 0x262401a0  addiu       $a0, $s1, 0x1A0
    ctx->pc = 0x404980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
label_404984:
    // 0x404984: 0xc0b89e4  jal         func_2E2790
label_404988:
    if (ctx->pc == 0x404988u) {
        ctx->pc = 0x404988u;
            // 0x404988: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x40498Cu;
        goto label_40498c;
    }
    ctx->pc = 0x404984u;
    SET_GPR_U32(ctx, 31, 0x40498Cu);
    ctx->pc = 0x404988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404984u;
            // 0x404988: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2790u;
    if (runtime->hasFunction(0x2E2790u)) {
        auto targetFn = runtime->lookupFunction(0x2E2790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40498Cu; }
        if (ctx->pc != 0x40498Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E2790_0x2e2790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40498Cu; }
        if (ctx->pc != 0x40498Cu) { return; }
    }
    ctx->pc = 0x40498Cu;
label_40498c:
    // 0x40498c: 0xc62101d4  lwc1        $f1, 0x1D4($s1)
    ctx->pc = 0x40498cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_404990:
    // 0x404990: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x404990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_404994:
    // 0x404994: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x404994u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_404998:
    // 0x404998: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x404998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_40499c:
    // 0x40499c: 0xc62c01d0  lwc1        $f12, 0x1D0($s1)
    ctx->pc = 0x40499cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4049a0:
    // 0x4049a0: 0xc62e01d8  lwc1        $f14, 0x1D8($s1)
    ctx->pc = 0x4049a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_4049a4:
    // 0x4049a4: 0xc04cbd8  jal         func_132F60
label_4049a8:
    if (ctx->pc == 0x4049A8u) {
        ctx->pc = 0x4049A8u;
            // 0x4049a8: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x4049ACu;
        goto label_4049ac;
    }
    ctx->pc = 0x4049A4u;
    SET_GPR_U32(ctx, 31, 0x4049ACu);
    ctx->pc = 0x4049A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4049A4u;
            // 0x4049a8: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4049ACu; }
        if (ctx->pc != 0x4049ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4049ACu; }
        if (ctx->pc != 0x4049ACu) { return; }
    }
    ctx->pc = 0x4049ACu;
label_4049ac:
    // 0x4049ac: 0x26240150  addiu       $a0, $s1, 0x150
    ctx->pc = 0x4049acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
label_4049b0:
    // 0x4049b0: 0xc04c74c  jal         func_131D30
label_4049b4:
    if (ctx->pc == 0x4049B4u) {
        ctx->pc = 0x4049B4u;
            // 0x4049b4: 0x262500d0  addiu       $a1, $s1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
        ctx->pc = 0x4049B8u;
        goto label_4049b8;
    }
    ctx->pc = 0x4049B0u;
    SET_GPR_U32(ctx, 31, 0x4049B8u);
    ctx->pc = 0x4049B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4049B0u;
            // 0x4049b4: 0x262500d0  addiu       $a1, $s1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4049B8u; }
        if (ctx->pc != 0x4049B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4049B8u; }
        if (ctx->pc != 0x4049B8u) { return; }
    }
    ctx->pc = 0x4049B8u;
label_4049b8:
    // 0x4049b8: 0x26240160  addiu       $a0, $s1, 0x160
    ctx->pc = 0x4049b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
label_4049bc:
    // 0x4049bc: 0xc04c74c  jal         func_131D30
label_4049c0:
    if (ctx->pc == 0x4049C0u) {
        ctx->pc = 0x4049C0u;
            // 0x4049c0: 0x262500d0  addiu       $a1, $s1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
        ctx->pc = 0x4049C4u;
        goto label_4049c4;
    }
    ctx->pc = 0x4049BCu;
    SET_GPR_U32(ctx, 31, 0x4049C4u);
    ctx->pc = 0x4049C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4049BCu;
            // 0x4049c0: 0x262500d0  addiu       $a1, $s1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4049C4u; }
        if (ctx->pc != 0x4049C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4049C4u; }
        if (ctx->pc != 0x4049C4u) { return; }
    }
    ctx->pc = 0x4049C4u;
label_4049c4:
    // 0x4049c4: 0xae200180  sw          $zero, 0x180($s1)
    ctx->pc = 0x4049c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 384), GPR_U32(ctx, 0));
label_4049c8:
    // 0x4049c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4049c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4049cc:
    // 0x4049cc: 0xae220184  sw          $v0, 0x184($s1)
    ctx->pc = 0x4049ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 2));
label_4049d0:
    // 0x4049d0: 0x26240170  addiu       $a0, $s1, 0x170
    ctx->pc = 0x4049d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 368));
label_4049d4:
    // 0x4049d4: 0xc04c74c  jal         func_131D30
label_4049d8:
    if (ctx->pc == 0x4049D8u) {
        ctx->pc = 0x4049D8u;
            // 0x4049d8: 0x262500d0  addiu       $a1, $s1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
        ctx->pc = 0x4049DCu;
        goto label_4049dc;
    }
    ctx->pc = 0x4049D4u;
    SET_GPR_U32(ctx, 31, 0x4049DCu);
    ctx->pc = 0x4049D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4049D4u;
            // 0x4049d8: 0x262500d0  addiu       $a1, $s1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4049DCu; }
        if (ctx->pc != 0x4049DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4049DCu; }
        if (ctx->pc != 0x4049DCu) { return; }
    }
    ctx->pc = 0x4049DCu;
label_4049dc:
    // 0x4049dc: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x4049dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_4049e0:
    // 0x4049e0: 0xc04c720  jal         func_131C80
label_4049e4:
    if (ctx->pc == 0x4049E4u) {
        ctx->pc = 0x4049E4u;
            // 0x4049e4: 0x262500d0  addiu       $a1, $s1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
        ctx->pc = 0x4049E8u;
        goto label_4049e8;
    }
    ctx->pc = 0x4049E0u;
    SET_GPR_U32(ctx, 31, 0x4049E8u);
    ctx->pc = 0x4049E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4049E0u;
            // 0x4049e4: 0x262500d0  addiu       $a1, $s1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4049E8u; }
        if (ctx->pc != 0x4049E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4049E8u; }
        if (ctx->pc != 0x4049E8u) { return; }
    }
    ctx->pc = 0x4049E8u;
label_4049e8:
    // 0x4049e8: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x4049e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_4049ec:
    // 0x4049ec: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x4049ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_4049f0:
    // 0x4049f0: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x4049f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_4049f4:
    // 0x4049f4: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x4049f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_4049f8:
    // 0x4049f8: 0x8e300050  lw          $s0, 0x50($s1)
    ctx->pc = 0x4049f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_4049fc:
    // 0x4049fc: 0xc088b74  jal         func_222DD0
label_404a00:
    if (ctx->pc == 0x404A00u) {
        ctx->pc = 0x404A00u;
            // 0x404a00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x404A04u;
        goto label_404a04;
    }
    ctx->pc = 0x4049FCu;
    SET_GPR_U32(ctx, 31, 0x404A04u);
    ctx->pc = 0x404A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4049FCu;
            // 0x404a00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404A04u; }
        if (ctx->pc != 0x404A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404A04u; }
        if (ctx->pc != 0x404A04u) { return; }
    }
    ctx->pc = 0x404A04u;
label_404a04:
    // 0x404a04: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x404a04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_404a08:
    // 0x404a08: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x404a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_404a0c:
    // 0x404a0c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x404a0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_404a10:
    // 0x404a10: 0x320f809  jalr        $t9
label_404a14:
    if (ctx->pc == 0x404A14u) {
        ctx->pc = 0x404A14u;
            // 0x404a14: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x404A18u;
        goto label_404a18;
    }
    ctx->pc = 0x404A10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x404A18u);
        ctx->pc = 0x404A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x404A10u;
            // 0x404a14: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x404A18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x404A18u; }
            if (ctx->pc != 0x404A18u) { return; }
        }
        }
    }
    ctx->pc = 0x404A18u;
label_404a18:
    // 0x404a18: 0x8e300050  lw          $s0, 0x50($s1)
    ctx->pc = 0x404a18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_404a1c:
    // 0x404a1c: 0xc088b74  jal         func_222DD0
label_404a20:
    if (ctx->pc == 0x404A20u) {
        ctx->pc = 0x404A20u;
            // 0x404a20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x404A24u;
        goto label_404a24;
    }
    ctx->pc = 0x404A1Cu;
    SET_GPR_U32(ctx, 31, 0x404A24u);
    ctx->pc = 0x404A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404A1Cu;
            // 0x404a20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404A24u; }
        if (ctx->pc != 0x404A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404A24u; }
        if (ctx->pc != 0x404A24u) { return; }
    }
    ctx->pc = 0x404A24u;
label_404a24:
    // 0x404a24: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x404a24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_404a28:
    // 0x404a28: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x404a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_404a2c:
    // 0x404a2c: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x404a2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_404a30:
    // 0x404a30: 0x320f809  jalr        $t9
label_404a34:
    if (ctx->pc == 0x404A34u) {
        ctx->pc = 0x404A34u;
            // 0x404a34: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x404A38u;
        goto label_404a38;
    }
    ctx->pc = 0x404A30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x404A38u);
        ctx->pc = 0x404A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x404A30u;
            // 0x404a34: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x404A38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x404A38u; }
            if (ctx->pc != 0x404A38u) { return; }
        }
        }
    }
    ctx->pc = 0x404A38u;
label_404a38:
    // 0x404a38: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x404a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_404a3c:
    // 0x404a3c: 0x3c0443fa  lui         $a0, 0x43FA
    ctx->pc = 0x404a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17402 << 16));
label_404a40:
    // 0x404a40: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x404a40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_404a44:
    // 0x404a44: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x404a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_404a48:
    // 0x404a48: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x404a48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_404a4c:
    // 0x404a4c: 0xac40015c  sw          $zero, 0x15C($v0)
    ctx->pc = 0x404a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 348), GPR_U32(ctx, 0));
label_404a50:
    // 0x404a50: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x404a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_404a54:
    // 0x404a54: 0xac400160  sw          $zero, 0x160($v0)
    ctx->pc = 0x404a54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 352), GPR_U32(ctx, 0));
label_404a58:
    // 0x404a58: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x404a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_404a5c:
    // 0x404a5c: 0xac440154  sw          $a0, 0x154($v0)
    ctx->pc = 0x404a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 340), GPR_U32(ctx, 4));
label_404a60:
    // 0x404a60: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x404a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_404a64:
    // 0x404a64: 0xac430158  sw          $v1, 0x158($v0)
    ctx->pc = 0x404a64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 3));
label_404a68:
    // 0x404a68: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x404a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_404a6c:
    // 0x404a6c: 0xc08914c  jal         func_224530
label_404a70:
    if (ctx->pc == 0x404A70u) {
        ctx->pc = 0x404A70u;
            // 0x404a70: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x404A74u;
        goto label_404a74;
    }
    ctx->pc = 0x404A6Cu;
    SET_GPR_U32(ctx, 31, 0x404A74u);
    ctx->pc = 0x404A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404A6Cu;
            // 0x404a70: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404A74u; }
        if (ctx->pc != 0x404A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404A74u; }
        if (ctx->pc != 0x404A74u) { return; }
    }
    ctx->pc = 0x404A74u;
label_404a74:
    // 0x404a74: 0x8e250050  lw          $a1, 0x50($s1)
    ctx->pc = 0x404a74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_404a78:
    // 0x404a78: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x404a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_404a7c:
    // 0x404a7c: 0x34430180  ori         $v1, $v0, 0x180
    ctx->pc = 0x404a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)384);
label_404a80:
    // 0x404a80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x404a80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_404a84:
    // 0x404a84: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x404a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_404a88:
    // 0x404a88: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x404a88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_404a8c:
    // 0x404a8c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x404a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_404a90:
    // 0x404a90: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x404a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_404a94:
    // 0x404a94: 0xc08bff0  jal         func_22FFC0
label_404a98:
    if (ctx->pc == 0x404A98u) {
        ctx->pc = 0x404A98u;
            // 0x404a98: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x404A9Cu;
        goto label_404a9c;
    }
    ctx->pc = 0x404A94u;
    SET_GPR_U32(ctx, 31, 0x404A9Cu);
    ctx->pc = 0x404A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404A94u;
            // 0x404a98: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404A9Cu; }
        if (ctx->pc != 0x404A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404A9Cu; }
        if (ctx->pc != 0x404A9Cu) { return; }
    }
    ctx->pc = 0x404A9Cu;
label_404a9c:
    // 0x404a9c: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x404a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_404aa0:
    // 0x404aa0: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x404aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_404aa4:
    // 0x404aa4: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x404aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_404aa8:
    // 0x404aa8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x404aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_404aac:
    // 0x404aac: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x404aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_404ab0:
    // 0x404ab0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x404ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_404ab4:
    // 0x404ab4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x404ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_404ab8:
    // 0x404ab8: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x404ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_404abc:
    // 0x404abc: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x404abcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_404ac0:
    // 0x404ac0: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x404ac0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_404ac4:
    // 0x404ac4: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x404ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_404ac8:
    // 0x404ac8: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x404ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_404acc:
    // 0x404acc: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x404accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_404ad0:
    // 0x404ad0: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x404ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_404ad4:
    // 0x404ad4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x404ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_404ad8:
    // 0x404ad8: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x404ad8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_404adc:
    // 0x404adc: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x404adcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_404ae0:
    // 0x404ae0: 0xc0892b0  jal         func_224AC0
label_404ae4:
    if (ctx->pc == 0x404AE4u) {
        ctx->pc = 0x404AE4u;
            // 0x404ae4: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->pc = 0x404AE8u;
        goto label_404ae8;
    }
    ctx->pc = 0x404AE0u;
    SET_GPR_U32(ctx, 31, 0x404AE8u);
    ctx->pc = 0x404AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404AE0u;
            // 0x404ae4: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404AE8u; }
        if (ctx->pc != 0x404AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404AE8u; }
        if (ctx->pc != 0x404AE8u) { return; }
    }
    ctx->pc = 0x404AE8u;
label_404ae8:
    // 0x404ae8: 0xa2200210  sb          $zero, 0x210($s1)
    ctx->pc = 0x404ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 528), (uint8_t)GPR_U32(ctx, 0));
label_404aec:
    // 0x404aec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x404aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_404af0:
    // 0x404af0: 0xa2240211  sb          $a0, 0x211($s1)
    ctx->pc = 0x404af0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 529), (uint8_t)GPR_U32(ctx, 4));
label_404af4:
    // 0x404af4: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x404af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_404af8:
    // 0x404af8: 0xc6200224  lwc1        $f0, 0x224($s1)
    ctx->pc = 0x404af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_404afc:
    // 0x404afc: 0xe6200200  swc1        $f0, 0x200($s1)
    ctx->pc = 0x404afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 512), bits); }
label_404b00:
    // 0x404b00: 0xae200230  sw          $zero, 0x230($s1)
    ctx->pc = 0x404b00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 560), GPR_U32(ctx, 0));
label_404b04:
    // 0x404b04: 0xa2200250  sb          $zero, 0x250($s1)
    ctx->pc = 0x404b04u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 592), (uint8_t)GPR_U32(ctx, 0));
label_404b08:
    // 0x404b08: 0xae200254  sw          $zero, 0x254($s1)
    ctx->pc = 0x404b08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 0));
label_404b0c:
    // 0x404b0c: 0xa223004c  sb          $v1, 0x4C($s1)
    ctx->pc = 0x404b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 76), (uint8_t)GPR_U32(ctx, 3));
label_404b10:
    // 0x404b10: 0xa224025c  sb          $a0, 0x25C($s1)
    ctx->pc = 0x404b10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 604), (uint8_t)GPR_U32(ctx, 4));
label_404b14:
    // 0x404b14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x404b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_404b18:
    // 0x404b18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x404b18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_404b1c:
    // 0x404b1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x404b1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_404b20:
    // 0x404b20: 0x3e00008  jr          $ra
label_404b24:
    if (ctx->pc == 0x404B24u) {
        ctx->pc = 0x404B24u;
            // 0x404b24: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x404B28u;
        goto label_404b28;
    }
    ctx->pc = 0x404B20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x404B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x404B20u;
            // 0x404b24: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x404B28u;
label_404b28:
    // 0x404b28: 0x0  nop
    ctx->pc = 0x404b28u;
    // NOP
label_404b2c:
    // 0x404b2c: 0x0  nop
    ctx->pc = 0x404b2cu;
    // NOP
label_404b30:
    // 0x404b30: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x404b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_404b34:
    // 0x404b34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x404b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_404b38:
    // 0x404b38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x404b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_404b3c:
    // 0x404b3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x404b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_404b40:
    // 0x404b40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x404b40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_404b44:
    // 0x404b44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x404b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_404b48:
    // 0x404b48: 0xc0892d0  jal         func_224B40
label_404b4c:
    if (ctx->pc == 0x404B4Cu) {
        ctx->pc = 0x404B4Cu;
            // 0x404b4c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x404B50u;
        goto label_404b50;
    }
    ctx->pc = 0x404B48u;
    SET_GPR_U32(ctx, 31, 0x404B50u);
    ctx->pc = 0x404B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404B48u;
            // 0x404b4c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404B50u; }
        if (ctx->pc != 0x404B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404B50u; }
        if (ctx->pc != 0x404B50u) { return; }
    }
    ctx->pc = 0x404B50u;
label_404b50:
    // 0x404b50: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x404b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_404b54:
    // 0x404b54: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x404b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_404b58:
    // 0x404b58: 0x8c427290  lw          $v0, 0x7290($v0)
    ctx->pc = 0x404b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29328)));
label_404b5c:
    // 0x404b5c: 0x8c50005c  lw          $s0, 0x5C($v0)
    ctx->pc = 0x404b5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_404b60:
    // 0x404b60: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x404b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_404b64:
    // 0x404b64: 0xc0b6e68  jal         func_2DB9A0
label_404b68:
    if (ctx->pc == 0x404B68u) {
        ctx->pc = 0x404B68u;
            // 0x404b68: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x404B6Cu;
        goto label_404b6c;
    }
    ctx->pc = 0x404B64u;
    SET_GPR_U32(ctx, 31, 0x404B6Cu);
    ctx->pc = 0x404B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404B64u;
            // 0x404b68: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404B6Cu; }
        if (ctx->pc != 0x404B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404B6Cu; }
        if (ctx->pc != 0x404B6Cu) { return; }
    }
    ctx->pc = 0x404B6Cu;
label_404b6c:
    // 0x404b6c: 0xc0b6dac  jal         func_2DB6B0
label_404b70:
    if (ctx->pc == 0x404B70u) {
        ctx->pc = 0x404B70u;
            // 0x404b70: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x404B74u;
        goto label_404b74;
    }
    ctx->pc = 0x404B6Cu;
    SET_GPR_U32(ctx, 31, 0x404B74u);
    ctx->pc = 0x404B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404B6Cu;
            // 0x404b70: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404B74u; }
        if (ctx->pc != 0x404B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404B74u; }
        if (ctx->pc != 0x404B74u) { return; }
    }
    ctx->pc = 0x404B74u;
label_404b74:
    // 0x404b74: 0xc0cac94  jal         func_32B250
label_404b78:
    if (ctx->pc == 0x404B78u) {
        ctx->pc = 0x404B78u;
            // 0x404b78: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x404B7Cu;
        goto label_404b7c;
    }
    ctx->pc = 0x404B74u;
    SET_GPR_U32(ctx, 31, 0x404B7Cu);
    ctx->pc = 0x404B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404B74u;
            // 0x404b78: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404B7Cu; }
        if (ctx->pc != 0x404B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404B7Cu; }
        if (ctx->pc != 0x404B7Cu) { return; }
    }
    ctx->pc = 0x404B7Cu;
label_404b7c:
    // 0x404b7c: 0xc0cac84  jal         func_32B210
label_404b80:
    if (ctx->pc == 0x404B80u) {
        ctx->pc = 0x404B80u;
            // 0x404b80: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x404B84u;
        goto label_404b84;
    }
    ctx->pc = 0x404B7Cu;
    SET_GPR_U32(ctx, 31, 0x404B84u);
    ctx->pc = 0x404B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404B7Cu;
            // 0x404b80: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404B84u; }
        if (ctx->pc != 0x404B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404B84u; }
        if (ctx->pc != 0x404B84u) { return; }
    }
    ctx->pc = 0x404B84u;
label_404b84:
    // 0x404b84: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x404b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_404b88:
    // 0x404b88: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x404b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_404b8c:
    // 0x404b8c: 0xc44cc910  lwc1        $f12, -0x36F0($v0)
    ctx->pc = 0x404b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_404b90:
    // 0x404b90: 0xc0a5a68  jal         func_2969A0
label_404b94:
    if (ctx->pc == 0x404B94u) {
        ctx->pc = 0x404B94u;
            // 0x404b94: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x404B98u;
        goto label_404b98;
    }
    ctx->pc = 0x404B90u;
    SET_GPR_U32(ctx, 31, 0x404B98u);
    ctx->pc = 0x404B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404B90u;
            // 0x404b94: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404B98u; }
        if (ctx->pc != 0x404B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404B98u; }
        if (ctx->pc != 0x404B98u) { return; }
    }
    ctx->pc = 0x404B98u;
label_404b98:
    // 0x404b98: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x404b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_404b9c:
    // 0x404b9c: 0x3c0942c8  lui         $t1, 0x42C8
    ctx->pc = 0x404b9cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17096 << 16));
label_404ba0:
    // 0x404ba0: 0x8c437290  lw          $v1, 0x7290($v0)
    ctx->pc = 0x404ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29328)));
label_404ba4:
    // 0x404ba4: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x404ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_404ba8:
    // 0x404ba8: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x404ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_404bac:
    // 0x404bac: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x404bacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_404bb0:
    // 0x404bb0: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x404bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_404bb4:
    // 0x404bb4: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x404bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_404bb8:
    // 0x404bb8: 0x8c64005c  lw          $a0, 0x5C($v1)
    ctx->pc = 0x404bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_404bbc:
    // 0x404bbc: 0x3c023da3  lui         $v0, 0x3DA3
    ctx->pc = 0x404bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15779 << 16));
label_404bc0:
    // 0x404bc0: 0x3447d70a  ori         $a3, $v0, 0xD70A
    ctx->pc = 0x404bc0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_404bc4:
    // 0x404bc4: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x404bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_404bc8:
    // 0x404bc8: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x404bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_404bcc:
    // 0x404bcc: 0xafa400c4  sw          $a0, 0xC4($sp)
    ctx->pc = 0x404bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 4));
label_404bd0:
    // 0x404bd0: 0x34430180  ori         $v1, $v0, 0x180
    ctx->pc = 0x404bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)384);
label_404bd4:
    // 0x404bd4: 0xc62a0018  lwc1        $f10, 0x18($s1)
    ctx->pc = 0x404bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_404bd8:
    // 0x404bd8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x404bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_404bdc:
    // 0x404bdc: 0xc6290014  lwc1        $f9, 0x14($s1)
    ctx->pc = 0x404bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_404be0:
    // 0x404be0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x404be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_404be4:
    // 0x404be4: 0xc6280010  lwc1        $f8, 0x10($s1)
    ctx->pc = 0x404be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_404be8:
    // 0x404be8: 0xc7a70090  lwc1        $f7, 0x90($sp)
    ctx->pc = 0x404be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_404bec:
    // 0x404bec: 0xc7a60094  lwc1        $f6, 0x94($sp)
    ctx->pc = 0x404becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_404bf0:
    // 0x404bf0: 0xe7a20124  swc1        $f2, 0x124($sp)
    ctx->pc = 0x404bf0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_404bf4:
    // 0x404bf4: 0xafa90168  sw          $t1, 0x168($sp)
    ctx->pc = 0x404bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 9));
label_404bf8:
    // 0x404bf8: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x404bf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_404bfc:
    // 0x404bfc: 0xa3a80170  sb          $t0, 0x170($sp)
    ctx->pc = 0x404bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 8));
label_404c00:
    // 0x404c00: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x404c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_404c04:
    // 0x404c04: 0xafa7016c  sw          $a3, 0x16C($sp)
    ctx->pc = 0x404c04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 7));
label_404c08:
    // 0x404c08: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x404c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_404c0c:
    // 0x404c0c: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x404c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_404c10:
    // 0x404c10: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x404c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_404c14:
    // 0x404c14: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x404c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_404c18:
    // 0x404c18: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x404c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_404c1c:
    // 0x404c1c: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x404c1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_404c20:
    // 0x404c20: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x404c20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_404c24:
    // 0x404c24: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x404c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_404c28:
    // 0x404c28: 0xc7a200bc  lwc1        $f2, 0xBC($sp)
    ctx->pc = 0x404c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_404c2c:
    // 0x404c2c: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x404c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_404c30:
    // 0x404c30: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x404c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_404c34:
    // 0x404c34: 0xe7a2013c  swc1        $f2, 0x13C($sp)
    ctx->pc = 0x404c34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_404c38:
    // 0x404c38: 0xe7a10140  swc1        $f1, 0x140($sp)
    ctx->pc = 0x404c38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_404c3c:
    // 0x404c3c: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x404c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_404c40:
    // 0x404c40: 0xc7a50098  lwc1        $f5, 0x98($sp)
    ctx->pc = 0x404c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_404c44:
    // 0x404c44: 0xc7a4009c  lwc1        $f4, 0x9C($sp)
    ctx->pc = 0x404c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_404c48:
    // 0x404c48: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x404c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_404c4c:
    // 0x404c4c: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x404c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_404c50:
    // 0x404c50: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x404c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_404c54:
    // 0x404c54: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x404c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_404c58:
    // 0x404c58: 0xe7a800d0  swc1        $f8, 0xD0($sp)
    ctx->pc = 0x404c58u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_404c5c:
    // 0x404c5c: 0xe7a900d4  swc1        $f9, 0xD4($sp)
    ctx->pc = 0x404c5cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_404c60:
    // 0x404c60: 0xe7aa00d8  swc1        $f10, 0xD8($sp)
    ctx->pc = 0x404c60u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_404c64:
    // 0x404c64: 0xe7a70110  swc1        $f7, 0x110($sp)
    ctx->pc = 0x404c64u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_404c68:
    // 0x404c68: 0xe7a60114  swc1        $f6, 0x114($sp)
    ctx->pc = 0x404c68u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_404c6c:
    // 0x404c6c: 0xe7a50118  swc1        $f5, 0x118($sp)
    ctx->pc = 0x404c6cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_404c70:
    // 0x404c70: 0xe7a4011c  swc1        $f4, 0x11C($sp)
    ctx->pc = 0x404c70u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_404c74:
    // 0x404c74: 0xe7a30120  swc1        $f3, 0x120($sp)
    ctx->pc = 0x404c74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_404c78:
    // 0x404c78: 0xe7a20148  swc1        $f2, 0x148($sp)
    ctx->pc = 0x404c78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_404c7c:
    // 0x404c7c: 0xe7a1014c  swc1        $f1, 0x14C($sp)
    ctx->pc = 0x404c7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_404c80:
    // 0x404c80: 0xc0a7a88  jal         func_29EA20
label_404c84:
    if (ctx->pc == 0x404C84u) {
        ctx->pc = 0x404C84u;
            // 0x404c84: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x404C88u;
        goto label_404c88;
    }
    ctx->pc = 0x404C80u;
    SET_GPR_U32(ctx, 31, 0x404C88u);
    ctx->pc = 0x404C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404C80u;
            // 0x404c84: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404C88u; }
        if (ctx->pc != 0x404C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404C88u; }
        if (ctx->pc != 0x404C88u) { return; }
    }
    ctx->pc = 0x404C88u;
label_404c88:
    // 0x404c88: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x404c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_404c8c:
    // 0x404c8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x404c8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_404c90:
    // 0x404c90: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_404c94:
    if (ctx->pc == 0x404C94u) {
        ctx->pc = 0x404C94u;
            // 0x404c94: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x404C98u;
        goto label_404c98;
    }
    ctx->pc = 0x404C90u;
    {
        const bool branch_taken_0x404c90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x404C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x404C90u;
            // 0x404c94: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404c90) {
            ctx->pc = 0x404CE0u;
            goto label_404ce0;
        }
    }
    ctx->pc = 0x404C98u;
label_404c98:
    // 0x404c98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x404c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_404c9c:
    // 0x404c9c: 0xc088ef4  jal         func_223BD0
label_404ca0:
    if (ctx->pc == 0x404CA0u) {
        ctx->pc = 0x404CA0u;
            // 0x404ca0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x404CA4u;
        goto label_404ca4;
    }
    ctx->pc = 0x404C9Cu;
    SET_GPR_U32(ctx, 31, 0x404CA4u);
    ctx->pc = 0x404CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404C9Cu;
            // 0x404ca0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404CA4u; }
        if (ctx->pc != 0x404CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404CA4u; }
        if (ctx->pc != 0x404CA4u) { return; }
    }
    ctx->pc = 0x404CA4u;
label_404ca4:
    // 0x404ca4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x404ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_404ca8:
    // 0x404ca8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x404ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_404cac:
    // 0x404cac: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x404cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_404cb0:
    // 0x404cb0: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x404cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_404cb4:
    // 0x404cb4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x404cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_404cb8:
    // 0x404cb8: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x404cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_404cbc:
    // 0x404cbc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x404cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_404cc0:
    // 0x404cc0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x404cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_404cc4:
    // 0x404cc4: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x404cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_404cc8:
    // 0x404cc8: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x404cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_404ccc:
    // 0x404ccc: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x404cccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_404cd0:
    // 0x404cd0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x404cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_404cd4:
    // 0x404cd4: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x404cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_404cd8:
    // 0x404cd8: 0xc088b38  jal         func_222CE0
label_404cdc:
    if (ctx->pc == 0x404CDCu) {
        ctx->pc = 0x404CDCu;
            // 0x404cdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x404CE0u;
        goto label_404ce0;
    }
    ctx->pc = 0x404CD8u;
    SET_GPR_U32(ctx, 31, 0x404CE0u);
    ctx->pc = 0x404CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404CD8u;
            // 0x404cdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404CE0u; }
        if (ctx->pc != 0x404CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404CE0u; }
        if (ctx->pc != 0x404CE0u) { return; }
    }
    ctx->pc = 0x404CE0u;
label_404ce0:
    // 0x404ce0: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x404ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_404ce4:
    // 0x404ce4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x404ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_404ce8:
    // 0x404ce8: 0x244221a0  addiu       $v0, $v0, 0x21A0
    ctx->pc = 0x404ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8608));
label_404cec:
    // 0x404cec: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x404cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_404cf0:
    // 0x404cf0: 0xae020200  sw          $v0, 0x200($s0)
    ctx->pc = 0x404cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 2));
label_404cf4:
    // 0x404cf4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x404cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_404cf8:
    // 0x404cf8: 0xc08914c  jal         func_224530
label_404cfc:
    if (ctx->pc == 0x404CFCu) {
        ctx->pc = 0x404CFCu;
            // 0x404cfc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x404D00u;
        goto label_404d00;
    }
    ctx->pc = 0x404CF8u;
    SET_GPR_U32(ctx, 31, 0x404D00u);
    ctx->pc = 0x404CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404CF8u;
            // 0x404cfc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404D00u; }
        if (ctx->pc != 0x404D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404D00u; }
        if (ctx->pc != 0x404D00u) { return; }
    }
    ctx->pc = 0x404D00u;
label_404d00:
    // 0x404d00: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x404d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_404d04:
    // 0x404d04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x404d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_404d08:
    // 0x404d08: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x404d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_404d0c:
    // 0x404d0c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x404d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_404d10:
    // 0x404d10: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x404d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_404d14:
    // 0x404d14: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x404d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_404d18:
    // 0x404d18: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x404d18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_404d1c:
    // 0x404d1c: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x404d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_404d20:
    // 0x404d20: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x404d20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_404d24:
    // 0x404d24: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x404d24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_404d28:
    // 0x404d28: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x404d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_404d2c:
    // 0x404d2c: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x404d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_404d30:
    // 0x404d30: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x404d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_404d34:
    // 0x404d34: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x404d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_404d38:
    // 0x404d38: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x404d38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_404d3c:
    // 0x404d3c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x404d3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_404d40:
    // 0x404d40: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x404d40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_404d44:
    // 0x404d44: 0xc0892b0  jal         func_224AC0
label_404d48:
    if (ctx->pc == 0x404D48u) {
        ctx->pc = 0x404D48u;
            // 0x404d48: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x404D4Cu;
        goto label_404d4c;
    }
    ctx->pc = 0x404D44u;
    SET_GPR_U32(ctx, 31, 0x404D4Cu);
    ctx->pc = 0x404D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404D44u;
            // 0x404d48: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404D4Cu; }
        if (ctx->pc != 0x404D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404D4Cu; }
        if (ctx->pc != 0x404D4Cu) { return; }
    }
    ctx->pc = 0x404D4Cu;
label_404d4c:
    // 0x404d4c: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x404d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_404d50:
    // 0x404d50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x404d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_404d54:
    // 0x404d54: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x404d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_404d58:
    // 0x404d58: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x404d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_404d5c:
    // 0x404d5c: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x404d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_404d60:
    // 0x404d60: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x404d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_404d64:
    // 0x404d64: 0xc0891d8  jal         func_224760
label_404d68:
    if (ctx->pc == 0x404D68u) {
        ctx->pc = 0x404D68u;
            // 0x404d68: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x404D6Cu;
        goto label_404d6c;
    }
    ctx->pc = 0x404D64u;
    SET_GPR_U32(ctx, 31, 0x404D6Cu);
    ctx->pc = 0x404D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404D64u;
            // 0x404d68: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404D6Cu; }
        if (ctx->pc != 0x404D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404D6Cu; }
        if (ctx->pc != 0x404D6Cu) { return; }
    }
    ctx->pc = 0x404D6Cu;
label_404d6c:
    // 0x404d6c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x404d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_404d70:
    // 0x404d70: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x404d70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_404d74:
    // 0x404d74: 0xae020154  sw          $v0, 0x154($s0)
    ctx->pc = 0x404d74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
label_404d78:
    // 0x404d78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x404d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_404d7c:
    // 0x404d7c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x404d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_404d80:
    // 0x404d80: 0xae030158  sw          $v1, 0x158($s0)
    ctx->pc = 0x404d80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 3));
label_404d84:
    // 0x404d84: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x404d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_404d88:
    // 0x404d88: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x404d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_404d8c:
    // 0x404d8c: 0xc08c164  jal         func_230590
label_404d90:
    if (ctx->pc == 0x404D90u) {
        ctx->pc = 0x404D90u;
            // 0x404d90: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x404D94u;
        goto label_404d94;
    }
    ctx->pc = 0x404D8Cu;
    SET_GPR_U32(ctx, 31, 0x404D94u);
    ctx->pc = 0x404D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404D8Cu;
            // 0x404d90: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404D94u; }
        if (ctx->pc != 0x404D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404D94u; }
        if (ctx->pc != 0x404D94u) { return; }
    }
    ctx->pc = 0x404D94u;
label_404d94:
    // 0x404d94: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x404d94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_404d98:
    // 0x404d98: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x404d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_404d9c:
    // 0x404d9c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x404d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_404da0:
    // 0x404da0: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x404da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_404da4:
    // 0x404da4: 0xc0a7a88  jal         func_29EA20
label_404da8:
    if (ctx->pc == 0x404DA8u) {
        ctx->pc = 0x404DA8u;
            // 0x404da8: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x404DACu;
        goto label_404dac;
    }
    ctx->pc = 0x404DA4u;
    SET_GPR_U32(ctx, 31, 0x404DACu);
    ctx->pc = 0x404DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404DA4u;
            // 0x404da8: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404DACu; }
        if (ctx->pc != 0x404DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404DACu; }
        if (ctx->pc != 0x404DACu) { return; }
    }
    ctx->pc = 0x404DACu;
label_404dac:
    // 0x404dac: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x404dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_404db0:
    // 0x404db0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x404db0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_404db4:
    // 0x404db4: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_404db8:
    if (ctx->pc == 0x404DB8u) {
        ctx->pc = 0x404DB8u;
            // 0x404db8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x404DBCu;
        goto label_404dbc;
    }
    ctx->pc = 0x404DB4u;
    {
        const bool branch_taken_0x404db4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x404DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x404DB4u;
            // 0x404db8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404db4) {
            ctx->pc = 0x404DD8u;
            goto label_404dd8;
        }
    }
    ctx->pc = 0x404DBCu;
label_404dbc:
    // 0x404dbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x404dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_404dc0:
    // 0x404dc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x404dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_404dc4:
    // 0x404dc4: 0xc0869d0  jal         func_21A740
label_404dc8:
    if (ctx->pc == 0x404DC8u) {
        ctx->pc = 0x404DC8u;
            // 0x404dc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x404DCCu;
        goto label_404dcc;
    }
    ctx->pc = 0x404DC4u;
    SET_GPR_U32(ctx, 31, 0x404DCCu);
    ctx->pc = 0x404DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404DC4u;
            // 0x404dc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404DCCu; }
        if (ctx->pc != 0x404DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404DCCu; }
        if (ctx->pc != 0x404DCCu) { return; }
    }
    ctx->pc = 0x404DCCu;
label_404dcc:
    // 0x404dcc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x404dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_404dd0:
    // 0x404dd0: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x404dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_404dd4:
    // 0x404dd4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x404dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_404dd8:
    // 0x404dd8: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x404dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_404ddc:
    // 0x404ddc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x404ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_404de0:
    // 0x404de0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x404de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_404de4:
    // 0x404de4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x404de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_404de8:
    // 0x404de8: 0xc08c650  jal         func_231940
label_404dec:
    if (ctx->pc == 0x404DECu) {
        ctx->pc = 0x404DECu;
            // 0x404dec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x404DF0u;
        goto label_404df0;
    }
    ctx->pc = 0x404DE8u;
    SET_GPR_U32(ctx, 31, 0x404DF0u);
    ctx->pc = 0x404DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404DE8u;
            // 0x404dec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404DF0u; }
        if (ctx->pc != 0x404DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404DF0u; }
        if (ctx->pc != 0x404DF0u) { return; }
    }
    ctx->pc = 0x404DF0u;
label_404df0:
    // 0x404df0: 0xc040180  jal         func_100600
label_404df4:
    if (ctx->pc == 0x404DF4u) {
        ctx->pc = 0x404DF4u;
            // 0x404df4: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x404DF8u;
        goto label_404df8;
    }
    ctx->pc = 0x404DF0u;
    SET_GPR_U32(ctx, 31, 0x404DF8u);
    ctx->pc = 0x404DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404DF0u;
            // 0x404df4: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404DF8u; }
        if (ctx->pc != 0x404DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404DF8u; }
        if (ctx->pc != 0x404DF8u) { return; }
    }
    ctx->pc = 0x404DF8u;
label_404df8:
    // 0x404df8: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_404dfc:
    if (ctx->pc == 0x404DFCu) {
        ctx->pc = 0x404DFCu;
            // 0x404dfc: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x404E00u;
        goto label_404e00;
    }
    ctx->pc = 0x404DF8u;
    {
        const bool branch_taken_0x404df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x404df8) {
            ctx->pc = 0x404DFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x404DF8u;
            // 0x404dfc: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x404E48u;
            goto label_404e48;
        }
    }
    ctx->pc = 0x404E00u;
label_404e00:
    // 0x404e00: 0x8e260050  lw          $a2, 0x50($s1)
    ctx->pc = 0x404e00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_404e04:
    // 0x404e04: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x404e04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_404e08:
    // 0x404e08: 0x24a521e0  addiu       $a1, $a1, 0x21E0
    ctx->pc = 0x404e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8672));
label_404e0c:
    // 0x404e0c: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x404e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_404e10:
    // 0x404e10: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x404e10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_404e14:
    // 0x404e14: 0x24636020  addiu       $v1, $v1, 0x6020
    ctx->pc = 0x404e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24608));
label_404e18:
    // 0x404e18: 0xac450048  sw          $a1, 0x48($v0)
    ctx->pc = 0x404e18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 5));
label_404e1c:
    // 0x404e1c: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x404e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_404e20:
    // 0x404e20: 0xac460024  sw          $a2, 0x24($v0)
    ctx->pc = 0x404e20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
label_404e24:
    // 0x404e24: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x404e24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
label_404e28:
    // 0x404e28: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x404e28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_404e2c:
    // 0x404e2c: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x404e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_404e30:
    // 0x404e30: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x404e30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_404e34:
    // 0x404e34: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x404e34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_404e38:
    // 0x404e38: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x404e38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_404e3c:
    // 0x404e3c: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x404e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_404e40:
    // 0x404e40: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x404e40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_404e44:
    // 0x404e44: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x404e44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
label_404e48:
    // 0x404e48: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x404e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_404e4c:
    // 0x404e4c: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x404e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_404e50:
    // 0x404e50: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x404e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_404e54:
    // 0x404e54: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x404e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_404e58:
    // 0x404e58: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x404e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_404e5c:
    // 0x404e5c: 0xc040180  jal         func_100600
label_404e60:
    if (ctx->pc == 0x404E60u) {
        ctx->pc = 0x404E60u;
            // 0x404e60: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->pc = 0x404E64u;
        goto label_404e64;
    }
    ctx->pc = 0x404E5Cu;
    SET_GPR_U32(ctx, 31, 0x404E64u);
    ctx->pc = 0x404E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404E5Cu;
            // 0x404e60: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404E64u; }
        if (ctx->pc != 0x404E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404E64u; }
        if (ctx->pc != 0x404E64u) { return; }
    }
    ctx->pc = 0x404E64u;
label_404e64:
    // 0x404e64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x404e64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_404e68:
    // 0x404e68: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
label_404e6c:
    if (ctx->pc == 0x404E6Cu) {
        ctx->pc = 0x404E70u;
        goto label_404e70;
    }
    ctx->pc = 0x404E68u;
    {
        const bool branch_taken_0x404e68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x404e68) {
            ctx->pc = 0x404EE8u;
            goto label_404ee8;
        }
    }
    ctx->pc = 0x404E70u;
label_404e70:
    // 0x404e70: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x404e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_404e74:
    // 0x404e74: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x404e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_404e78:
    // 0x404e78: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x404e78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_404e7c:
    // 0x404e7c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x404e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_404e80:
    // 0x404e80: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x404e80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_404e84:
    // 0x404e84: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x404e84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_404e88:
    // 0x404e88: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x404e88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_404e8c:
    // 0x404e8c: 0xc040138  jal         func_1004E0
label_404e90:
    if (ctx->pc == 0x404E90u) {
        ctx->pc = 0x404E90u;
            // 0x404e90: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x404E94u;
        goto label_404e94;
    }
    ctx->pc = 0x404E8Cu;
    SET_GPR_U32(ctx, 31, 0x404E94u);
    ctx->pc = 0x404E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404E8Cu;
            // 0x404e90: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404E94u; }
        if (ctx->pc != 0x404E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404E94u; }
        if (ctx->pc != 0x404E94u) { return; }
    }
    ctx->pc = 0x404E94u;
label_404e94:
    // 0x404e94: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x404e94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_404e98:
    // 0x404e98: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x404e98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_404e9c:
    // 0x404e9c: 0xc040138  jal         func_1004E0
label_404ea0:
    if (ctx->pc == 0x404EA0u) {
        ctx->pc = 0x404EA0u;
            // 0x404ea0: 0x24040130  addiu       $a0, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->pc = 0x404EA4u;
        goto label_404ea4;
    }
    ctx->pc = 0x404E9Cu;
    SET_GPR_U32(ctx, 31, 0x404EA4u);
    ctx->pc = 0x404EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404E9Cu;
            // 0x404ea0: 0x24040130  addiu       $a0, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404EA4u; }
        if (ctx->pc != 0x404EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404EA4u; }
        if (ctx->pc != 0x404EA4u) { return; }
    }
    ctx->pc = 0x404EA4u;
label_404ea4:
    // 0x404ea4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x404ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_404ea8:
    // 0x404ea8: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x404ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
label_404eac:
    // 0x404eac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x404eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_404eb0:
    // 0x404eb0: 0x24a583b0  addiu       $a1, $a1, -0x7C50
    ctx->pc = 0x404eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935472));
label_404eb4:
    // 0x404eb4: 0x24c6b410  addiu       $a2, $a2, -0x4BF0
    ctx->pc = 0x404eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947856));
label_404eb8:
    // 0x404eb8: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x404eb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_404ebc:
    // 0x404ebc: 0xc040840  jal         func_102100
label_404ec0:
    if (ctx->pc == 0x404EC0u) {
        ctx->pc = 0x404EC0u;
            // 0x404ec0: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x404EC4u;
        goto label_404ec4;
    }
    ctx->pc = 0x404EBCu;
    SET_GPR_U32(ctx, 31, 0x404EC4u);
    ctx->pc = 0x404EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404EBCu;
            // 0x404ec0: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404EC4u; }
        if (ctx->pc != 0x404EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404EC4u; }
        if (ctx->pc != 0x404EC4u) { return; }
    }
    ctx->pc = 0x404EC4u;
label_404ec4:
    // 0x404ec4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x404ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_404ec8:
    // 0x404ec8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x404ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_404ecc:
    // 0x404ecc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x404eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_404ed0:
    // 0x404ed0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x404ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_404ed4:
    // 0x404ed4: 0x28830003  slti        $v1, $a0, 0x3
    ctx->pc = 0x404ed4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_404ed8:
    // 0x404ed8: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x404ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_404edc:
    // 0x404edc: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x404edcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_404ee0:
    // 0x404ee0: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_404ee4:
    if (ctx->pc == 0x404EE4u) {
        ctx->pc = 0x404EE8u;
        goto label_404ee8;
    }
    ctx->pc = 0x404EE0u;
    {
        const bool branch_taken_0x404ee0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x404ee0) {
            ctx->pc = 0x404ECCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_404ecc;
        }
    }
    ctx->pc = 0x404EE8u;
label_404ee8:
    // 0x404ee8: 0xae30009c  sw          $s0, 0x9C($s1)
    ctx->pc = 0x404ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 16));
label_404eec:
    // 0x404eec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x404eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_404ef0:
    // 0x404ef0: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x404ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_404ef4:
    // 0x404ef4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x404ef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_404ef8:
    // 0x404ef8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x404ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_404efc:
    // 0x404efc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x404efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_404f00:
    // 0x404f00: 0xc0e7d2c  jal         func_39F4B0
label_404f04:
    if (ctx->pc == 0x404F04u) {
        ctx->pc = 0x404F04u;
            // 0x404f04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x404F08u;
        goto label_404f08;
    }
    ctx->pc = 0x404F00u;
    SET_GPR_U32(ctx, 31, 0x404F08u);
    ctx->pc = 0x404F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404F00u;
            // 0x404f04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404F08u; }
        if (ctx->pc != 0x404F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404F08u; }
        if (ctx->pc != 0x404F08u) { return; }
    }
    ctx->pc = 0x404F08u;
label_404f08:
    // 0x404f08: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x404f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_404f0c:
    // 0x404f0c: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x404f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_404f10:
    // 0x404f10: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x404f10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_404f14:
    // 0x404f14: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x404f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_404f18:
    // 0x404f18: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x404f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_404f1c:
    // 0x404f1c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x404f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_404f20:
    // 0x404f20: 0xc0e7d2c  jal         func_39F4B0
label_404f24:
    if (ctx->pc == 0x404F24u) {
        ctx->pc = 0x404F24u;
            // 0x404f24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x404F28u;
        goto label_404f28;
    }
    ctx->pc = 0x404F20u;
    SET_GPR_U32(ctx, 31, 0x404F28u);
    ctx->pc = 0x404F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404F20u;
            // 0x404f24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404F28u; }
        if (ctx->pc != 0x404F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404F28u; }
        if (ctx->pc != 0x404F28u) { return; }
    }
    ctx->pc = 0x404F28u;
label_404f28:
    // 0x404f28: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x404f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_404f2c:
    // 0x404f2c: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x404f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_404f30:
    // 0x404f30: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x404f30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_404f34:
    // 0x404f34: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x404f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_404f38:
    // 0x404f38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x404f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_404f3c:
    // 0x404f3c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x404f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_404f40:
    // 0x404f40: 0xc0e7d2c  jal         func_39F4B0
label_404f44:
    if (ctx->pc == 0x404F44u) {
        ctx->pc = 0x404F44u;
            // 0x404f44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x404F48u;
        goto label_404f48;
    }
    ctx->pc = 0x404F40u;
    SET_GPR_U32(ctx, 31, 0x404F48u);
    ctx->pc = 0x404F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404F40u;
            // 0x404f44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404F48u; }
        if (ctx->pc != 0x404F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404F48u; }
        if (ctx->pc != 0x404F48u) { return; }
    }
    ctx->pc = 0x404F48u;
label_404f48:
    // 0x404f48: 0x8e2700b0  lw          $a3, 0xB0($s1)
    ctx->pc = 0x404f48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_404f4c:
    // 0x404f4c: 0x2406fff7  addiu       $a2, $zero, -0x9
    ctx->pc = 0x404f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_404f50:
    // 0x404f50: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x404f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_404f54:
    // 0x404f54: 0x3c044270  lui         $a0, 0x4270
    ctx->pc = 0x404f54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17008 << 16));
label_404f58:
    // 0x404f58: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x404f58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
label_404f5c:
    // 0x404f5c: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x404f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_404f60:
    // 0x404f60: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x404f60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
label_404f64:
    // 0x404f64: 0x34c60008  ori         $a2, $a2, 0x8
    ctx->pc = 0x404f64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
label_404f68:
    // 0x404f68: 0xae2600b0  sw          $a2, 0xB0($s1)
    ctx->pc = 0x404f68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 6));
label_404f6c:
    // 0x404f6c: 0xae25008c  sw          $a1, 0x8C($s1)
    ctx->pc = 0x404f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 5));
label_404f70:
    // 0x404f70: 0xae240070  sw          $a0, 0x70($s1)
    ctx->pc = 0x404f70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 4));
label_404f74:
    // 0x404f74: 0xae230078  sw          $v1, 0x78($s1)
    ctx->pc = 0x404f74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 3));
label_404f78:
    // 0x404f78: 0xae220080  sw          $v0, 0x80($s1)
    ctx->pc = 0x404f78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
label_404f7c:
    // 0x404f7c: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x404f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_404f80:
    // 0x404f80: 0x2c410003  sltiu       $at, $v0, 0x3
    ctx->pc = 0x404f80u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_404f84:
    // 0x404f84: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_404f88:
    if (ctx->pc == 0x404F88u) {
        ctx->pc = 0x404F88u;
            // 0x404f88: 0xae220258  sw          $v0, 0x258($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 600), GPR_U32(ctx, 2));
        ctx->pc = 0x404F8Cu;
        goto label_404f8c;
    }
    ctx->pc = 0x404F84u;
    {
        const bool branch_taken_0x404f84 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x404F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x404F84u;
            // 0x404f88: 0xae220258  sw          $v0, 0x258($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404f84) {
            ctx->pc = 0x404F90u;
            goto label_404f90;
        }
    }
    ctx->pc = 0x404F8Cu;
label_404f8c:
    // 0x404f8c: 0xae200258  sw          $zero, 0x258($s1)
    ctx->pc = 0x404f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 600), GPR_U32(ctx, 0));
label_404f90:
    // 0x404f90: 0x8e2500b0  lw          $a1, 0xB0($s1)
    ctx->pc = 0x404f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_404f94:
    // 0x404f94: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x404f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_404f98:
    // 0x404f98: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x404f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_404f9c:
    // 0x404f9c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x404f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_404fa0:
    // 0x404fa0: 0xae2300b0  sw          $v1, 0xB0($s1)
    ctx->pc = 0x404fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 3));
label_404fa4:
    // 0x404fa4: 0x8c520e80  lw          $s2, 0xE80($v0)
    ctx->pc = 0x404fa4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_404fa8:
    // 0x404fa8: 0xc040180  jal         func_100600
label_404fac:
    if (ctx->pc == 0x404FACu) {
        ctx->pc = 0x404FACu;
            // 0x404fac: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x404FB0u;
        goto label_404fb0;
    }
    ctx->pc = 0x404FA8u;
    SET_GPR_U32(ctx, 31, 0x404FB0u);
    ctx->pc = 0x404FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404FA8u;
            // 0x404fac: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404FB0u; }
        if (ctx->pc != 0x404FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404FB0u; }
        if (ctx->pc != 0x404FB0u) { return; }
    }
    ctx->pc = 0x404FB0u;
label_404fb0:
    // 0x404fb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x404fb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_404fb4:
    // 0x404fb4: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_404fb8:
    if (ctx->pc == 0x404FB8u) {
        ctx->pc = 0x404FB8u;
            // 0x404fb8: 0xae300260  sw          $s0, 0x260($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 16));
        ctx->pc = 0x404FBCu;
        goto label_404fbc;
    }
    ctx->pc = 0x404FB4u;
    {
        const bool branch_taken_0x404fb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x404fb4) {
            ctx->pc = 0x404FB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x404FB4u;
            // 0x404fb8: 0xae300260  sw          $s0, 0x260($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x404FF4u;
            goto label_404ff4;
        }
    }
    ctx->pc = 0x404FBCu;
label_404fbc:
    // 0x404fbc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x404fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_404fc0:
    // 0x404fc0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x404fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_404fc4:
    // 0x404fc4: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x404fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_404fc8:
    // 0x404fc8: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x404fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_404fcc:
    // 0x404fcc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x404fccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_404fd0:
    // 0x404fd0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x404fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_404fd4:
    // 0x404fd4: 0xc040138  jal         func_1004E0
label_404fd8:
    if (ctx->pc == 0x404FD8u) {
        ctx->pc = 0x404FD8u;
            // 0x404fd8: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x404FDCu;
        goto label_404fdc;
    }
    ctx->pc = 0x404FD4u;
    SET_GPR_U32(ctx, 31, 0x404FDCu);
    ctx->pc = 0x404FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404FD4u;
            // 0x404fd8: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404FDCu; }
        if (ctx->pc != 0x404FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404FDCu; }
        if (ctx->pc != 0x404FDCu) { return; }
    }
    ctx->pc = 0x404FDCu;
label_404fdc:
    // 0x404fdc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x404fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_404fe0:
    // 0x404fe0: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x404fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_404fe4:
    // 0x404fe4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x404fe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_404fe8:
    // 0x404fe8: 0xc04a576  jal         func_1295D8
label_404fec:
    if (ctx->pc == 0x404FECu) {
        ctx->pc = 0x404FECu;
            // 0x404fec: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x404FF0u;
        goto label_404ff0;
    }
    ctx->pc = 0x404FE8u;
    SET_GPR_U32(ctx, 31, 0x404FF0u);
    ctx->pc = 0x404FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404FE8u;
            // 0x404fec: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404FF0u; }
        if (ctx->pc != 0x404FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404FF0u; }
        if (ctx->pc != 0x404FF0u) { return; }
    }
    ctx->pc = 0x404FF0u;
label_404ff0:
    // 0x404ff0: 0xae300260  sw          $s0, 0x260($s1)
    ctx->pc = 0x404ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 16));
label_404ff4:
    // 0x404ff4: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x404ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_404ff8:
    // 0x404ff8: 0x92470c6a  lbu         $a3, 0xC6A($s2)
    ctx->pc = 0x404ff8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3178)));
label_404ffc:
    // 0x404ffc: 0x3c0346af  lui         $v1, 0x46AF
    ctx->pc = 0x404ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18095 << 16));
label_405000:
    // 0x405000: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x405000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_405004:
    // 0x405004: 0x3463c800  ori         $v1, $v1, 0xC800
    ctx->pc = 0x405004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51200);
label_405008:
    // 0x405008: 0x24c6b9a0  addiu       $a2, $a2, -0x4660
    ctx->pc = 0x405008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949280));
label_40500c:
    // 0x40500c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40500cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_405010:
    // 0x405010: 0x74080  sll         $t0, $a3, 2
    ctx->pc = 0x405010u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_405014:
    // 0x405014: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x405014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_405018:
    // 0x405018: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x405018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_40501c:
    // 0x40501c: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x40501cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_405020:
    // 0x405020: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x405020u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_405024:
    // 0x405024: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x405024u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_405028:
    // 0x405028: 0xc122cd8  jal         func_48B360
label_40502c:
    if (ctx->pc == 0x40502Cu) {
        ctx->pc = 0x40502Cu;
            // 0x40502c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x405030u;
        goto label_405030;
    }
    ctx->pc = 0x405028u;
    SET_GPR_U32(ctx, 31, 0x405030u);
    ctx->pc = 0x40502Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x405028u;
            // 0x40502c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405030u; }
        if (ctx->pc != 0x405030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405030u; }
        if (ctx->pc != 0x405030u) { return; }
    }
    ctx->pc = 0x405030u;
label_405030:
    // 0x405030: 0x3c0246af  lui         $v0, 0x46AF
    ctx->pc = 0x405030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18095 << 16));
label_405034:
    // 0x405034: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x405034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_405038:
    // 0x405038: 0x3443c800  ori         $v1, $v0, 0xC800
    ctx->pc = 0x405038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51200);
label_40503c:
    // 0x40503c: 0x8e240260  lw          $a0, 0x260($s1)
    ctx->pc = 0x40503cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
label_405040:
    // 0x405040: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x405040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_405044:
    // 0x405044: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x405044u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_405048:
    // 0x405048: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x405048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_40504c:
    // 0x40504c: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x40504cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_405050:
    // 0x405050: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x405050u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_405054:
    // 0x405054: 0xc122cd8  jal         func_48B360
label_405058:
    if (ctx->pc == 0x405058u) {
        ctx->pc = 0x405058u;
            // 0x405058: 0x34460dae  ori         $a2, $v0, 0xDAE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3502);
        ctx->pc = 0x40505Cu;
        goto label_40505c;
    }
    ctx->pc = 0x405054u;
    SET_GPR_U32(ctx, 31, 0x40505Cu);
    ctx->pc = 0x405058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x405054u;
            // 0x405058: 0x34460dae  ori         $a2, $v0, 0xDAE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3502);
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40505Cu; }
        if (ctx->pc != 0x40505Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40505Cu; }
        if (ctx->pc != 0x40505Cu) { return; }
    }
    ctx->pc = 0x40505Cu;
label_40505c:
    // 0x40505c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x40505cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_405060:
    // 0x405060: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x405060u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_405064:
    // 0x405064: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x405064u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_405068:
    // 0x405068: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x405068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_40506c:
    // 0x40506c: 0x3e00008  jr          $ra
label_405070:
    if (ctx->pc == 0x405070u) {
        ctx->pc = 0x405070u;
            // 0x405070: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x405074u;
        goto label_405074;
    }
    ctx->pc = 0x40506Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x405070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40506Cu;
            // 0x405070: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x405074u;
label_405074:
    // 0x405074: 0x0  nop
    ctx->pc = 0x405074u;
    // NOP
label_405078:
    // 0x405078: 0x0  nop
    ctx->pc = 0x405078u;
    // NOP
label_40507c:
    // 0x40507c: 0x0  nop
    ctx->pc = 0x40507cu;
    // NOP
label_405080:
    // 0x405080: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x405080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_405084:
    // 0x405084: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x405084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_405088:
    // 0x405088: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x405088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_40508c:
    // 0x40508c: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x40508cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
label_405090:
    // 0x405090: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x405090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_405094:
    // 0x405094: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x405094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_405098:
    // 0x405098: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x405098u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40509c:
    // 0x40509c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40509cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4050a0:
    // 0x4050a0: 0x8c460c78  lw          $a2, 0xC78($v0)
    ctx->pc = 0x4050a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
label_4050a4:
    // 0x4050a4: 0x8cd10008  lw          $s1, 0x8($a2)
    ctx->pc = 0x4050a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_4050a8:
    // 0x4050a8: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x4050a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_4050ac:
    // 0x4050ac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4050acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4050b0:
    // 0x4050b0: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x4050b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_4050b4:
    // 0x4050b4: 0xac830214  sw          $v1, 0x214($a0)
    ctx->pc = 0x4050b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 532), GPR_U32(ctx, 3));
label_4050b8:
    // 0x4050b8: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x4050b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_4050bc:
    // 0x4050bc: 0x8c90003c  lw          $s0, 0x3C($a0)
    ctx->pc = 0x4050bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_4050c0:
    // 0x4050c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4050c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4050c4:
    // 0x4050c4: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x4050c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4050c8:
    // 0x4050c8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x4050c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_4050cc:
    // 0x4050cc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x4050ccu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_4050d0:
    // 0x4050d0: 0xe4800224  swc1        $f0, 0x224($a0)
    ctx->pc = 0x4050d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 548), bits); }
label_4050d4:
    // 0x4050d4: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x4050d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4050d8:
    // 0x4050d8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x4050d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_4050dc:
    // 0x4050dc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x4050dcu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_4050e0:
    // 0x4050e0: 0x0  nop
    ctx->pc = 0x4050e0u;
    // NOP
label_4050e4:
    // 0x4050e4: 0xe4800228  swc1        $f0, 0x228($a0)
    ctx->pc = 0x4050e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 552), bits); }
label_4050e8:
    // 0x4050e8: 0xc049514  jal         func_125450
label_4050ec:
    if (ctx->pc == 0x4050ECu) {
        ctx->pc = 0x4050ECu;
            // 0x4050ec: 0xc60c0014  lwc1        $f12, 0x14($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x4050F0u;
        goto label_4050f0;
    }
    ctx->pc = 0x4050E8u;
    SET_GPR_U32(ctx, 31, 0x4050F0u);
    ctx->pc = 0x4050ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4050E8u;
            // 0x4050ec: 0xc60c0014  lwc1        $f12, 0x14($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4050F0u; }
        if (ctx->pc != 0x4050F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4050F0u; }
        if (ctx->pc != 0x4050F0u) { return; }
    }
    ctx->pc = 0x4050F0u;
label_4050f0:
    // 0x4050f0: 0x3c043f84  lui         $a0, 0x3F84
    ctx->pc = 0x4050f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16260 << 16));
label_4050f4:
    // 0x4050f4: 0x3c0347ae  lui         $v1, 0x47AE
    ctx->pc = 0x4050f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18350 << 16));
label_4050f8:
    // 0x4050f8: 0x34847ae1  ori         $a0, $a0, 0x7AE1
    ctx->pc = 0x4050f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)31457);
label_4050fc:
    // 0x4050fc: 0x3463147b  ori         $v1, $v1, 0x147B
    ctx->pc = 0x4050fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5243);
label_405100:
    // 0x405100: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x405100u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_405104:
    // 0x405104: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x405104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_405108:
    // 0x405108: 0xc04963e  jal         func_1258F8
label_40510c:
    if (ctx->pc == 0x40510Cu) {
        ctx->pc = 0x40510Cu;
            // 0x40510c: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->pc = 0x405110u;
        goto label_405110;
    }
    ctx->pc = 0x405108u;
    SET_GPR_U32(ctx, 31, 0x405110u);
    ctx->pc = 0x40510Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x405108u;
            // 0x40510c: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405110u; }
        if (ctx->pc != 0x405110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405110u; }
        if (ctx->pc != 0x405110u) { return; }
    }
    ctx->pc = 0x405110u;
label_405110:
    // 0x405110: 0xc0497dc  jal         func_125F70
label_405114:
    if (ctx->pc == 0x405114u) {
        ctx->pc = 0x405114u;
            // 0x405114: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x405118u;
        goto label_405118;
    }
    ctx->pc = 0x405110u;
    SET_GPR_U32(ctx, 31, 0x405118u);
    ctx->pc = 0x405114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x405110u;
            // 0x405114: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405118u; }
        if (ctx->pc != 0x405118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405118u; }
        if (ctx->pc != 0x405118u) { return; }
    }
    ctx->pc = 0x405118u;
label_405118:
    // 0x405118: 0xe640022c  swc1        $f0, 0x22C($s2)
    ctx->pc = 0x405118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 556), bits); }
label_40511c:
    // 0x40511c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x40511cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_405120:
    // 0x405120: 0xae400230  sw          $zero, 0x230($s2)
    ctx->pc = 0x405120u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 560), GPR_U32(ctx, 0));
label_405124:
    // 0x405124: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x405124u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_405128:
    // 0x405128: 0xc6410224  lwc1        $f1, 0x224($s2)
    ctx->pc = 0x405128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40512c:
    // 0x40512c: 0xe6410200  swc1        $f1, 0x200($s2)
    ctx->pc = 0x40512cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 512), bits); }
label_405130:
    // 0x405130: 0xc601002c  lwc1        $f1, 0x2C($s0)
    ctx->pc = 0x405130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_405134:
    // 0x405134: 0xe6410204  swc1        $f1, 0x204($s2)
    ctx->pc = 0x405134u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 516), bits); }
label_405138:
    // 0x405138: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x405138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40513c:
    // 0x40513c: 0xe6410208  swc1        $f1, 0x208($s2)
    ctx->pc = 0x40513cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 520), bits); }
label_405140:
    // 0x405140: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x405140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_405144:
    // 0x405144: 0xae42021c  sw          $v0, 0x21C($s2)
    ctx->pc = 0x405144u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 540), GPR_U32(ctx, 2));
label_405148:
    // 0x405148: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x405148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40514c:
    // 0x40514c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x40514cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_405150:
    // 0x405150: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_405154:
    if (ctx->pc == 0x405154u) {
        ctx->pc = 0x405154u;
            // 0x405154: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x405158u;
        goto label_405158;
    }
    ctx->pc = 0x405150u;
    {
        const bool branch_taken_0x405150 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x405150) {
            ctx->pc = 0x405154u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x405150u;
            // 0x405154: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x405168u;
            goto label_405168;
        }
    }
    ctx->pc = 0x405158u;
label_405158:
    // 0x405158: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x405158u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_40515c:
    // 0x40515c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x40515cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_405160:
    // 0x405160: 0x10000007  b           . + 4 + (0x7 << 2)
label_405164:
    if (ctx->pc == 0x405164u) {
        ctx->pc = 0x405164u;
            // 0x405164: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x405168u;
        goto label_405168;
    }
    ctx->pc = 0x405160u;
    {
        const bool branch_taken_0x405160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x405164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x405160u;
            // 0x405164: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405160) {
            ctx->pc = 0x405180u;
            goto label_405180;
        }
    }
    ctx->pc = 0x405168u;
label_405168:
    // 0x405168: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x405168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_40516c:
    // 0x40516c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x40516cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_405170:
    // 0x405170: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x405170u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_405174:
    // 0x405174: 0x0  nop
    ctx->pc = 0x405174u;
    // NOP
label_405178:
    // 0x405178: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x405178u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_40517c:
    // 0x40517c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x40517cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_405180:
    // 0x405180: 0x264401a0  addiu       $a0, $s2, 0x1A0
    ctx->pc = 0x405180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 416));
label_405184:
    // 0x405184: 0xc0b89e4  jal         func_2E2790
label_405188:
    if (ctx->pc == 0x405188u) {
        ctx->pc = 0x405188u;
            // 0x405188: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x40518Cu;
        goto label_40518c;
    }
    ctx->pc = 0x405184u;
    SET_GPR_U32(ctx, 31, 0x40518Cu);
    ctx->pc = 0x405188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x405184u;
            // 0x405188: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2790u;
    if (runtime->hasFunction(0x2E2790u)) {
        auto targetFn = runtime->lookupFunction(0x2E2790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40518Cu; }
        if (ctx->pc != 0x40518Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E2790_0x2e2790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40518Cu; }
        if (ctx->pc != 0x40518Cu) { return; }
    }
    ctx->pc = 0x40518Cu;
label_40518c:
    // 0x40518c: 0xc64101d4  lwc1        $f1, 0x1D4($s2)
    ctx->pc = 0x40518cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_405190:
    // 0x405190: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x405190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_405194:
    // 0x405194: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x405194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_405198:
    // 0x405198: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x405198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_40519c:
    // 0x40519c: 0xc64c01d0  lwc1        $f12, 0x1D0($s2)
    ctx->pc = 0x40519cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4051a0:
    // 0x4051a0: 0xc64e01d8  lwc1        $f14, 0x1D8($s2)
    ctx->pc = 0x4051a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_4051a4:
    // 0x4051a4: 0xc04cbd8  jal         func_132F60
label_4051a8:
    if (ctx->pc == 0x4051A8u) {
        ctx->pc = 0x4051A8u;
            // 0x4051a8: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x4051ACu;
        goto label_4051ac;
    }
    ctx->pc = 0x4051A4u;
    SET_GPR_U32(ctx, 31, 0x4051ACu);
    ctx->pc = 0x4051A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4051A4u;
            // 0x4051a8: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4051ACu; }
        if (ctx->pc != 0x4051ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4051ACu; }
        if (ctx->pc != 0x4051ACu) { return; }
    }
    ctx->pc = 0x4051ACu;
label_4051ac:
    // 0x4051ac: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4051acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4051b0:
    // 0x4051b0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x4051b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_4051b4:
    // 0x4051b4: 0x8c420c78  lw          $v0, 0xC78($v0)
    ctx->pc = 0x4051b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
label_4051b8:
    // 0x4051b8: 0xc6410030  lwc1        $f1, 0x30($s2)
    ctx->pc = 0x4051b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4051bc:
    // 0x4051bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4051bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4051c0:
    // 0x4051c0: 0x0  nop
    ctx->pc = 0x4051c0u;
    // NOP
label_4051c4:
    // 0x4051c4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4051c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4051c8:
    // 0x4051c8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_4051cc:
    if (ctx->pc == 0x4051CCu) {
        ctx->pc = 0x4051CCu;
            // 0x4051cc: 0x8c450008  lw          $a1, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->pc = 0x4051D0u;
        goto label_4051d0;
    }
    ctx->pc = 0x4051C8u;
    {
        const bool branch_taken_0x4051c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4051CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4051C8u;
            // 0x4051cc: 0x8c450008  lw          $a1, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4051c8) {
            ctx->pc = 0x4051E0u;
            goto label_4051e0;
        }
    }
    ctx->pc = 0x4051D0u;
label_4051d0:
    // 0x4051d0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4051d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4051d4:
    // 0x4051d4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4051d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4051d8:
    // 0x4051d8: 0x10000008  b           . + 4 + (0x8 << 2)
label_4051dc:
    if (ctx->pc == 0x4051DCu) {
        ctx->pc = 0x4051DCu;
            // 0x4051dc: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x4051E0u;
        goto label_4051e0;
    }
    ctx->pc = 0x4051D8u;
    {
        const bool branch_taken_0x4051d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4051DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4051D8u;
            // 0x4051dc: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4051d8) {
            ctx->pc = 0x4051FCu;
            goto label_4051fc;
        }
    }
    ctx->pc = 0x4051E0u;
label_4051e0:
    // 0x4051e0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4051e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4051e4:
    // 0x4051e4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4051e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_4051e8:
    // 0x4051e8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4051e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4051ec:
    // 0x4051ec: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4051ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4051f0:
    // 0x4051f0: 0x0  nop
    ctx->pc = 0x4051f0u;
    // NOP
label_4051f4:
    // 0x4051f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4051f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4051f8:
    // 0x4051f8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x4051f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_4051fc:
    // 0x4051fc: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x4051fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_405200:
    // 0x405200: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x405200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_405204:
    // 0x405204: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x405204u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_405208:
    // 0x405208: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x405208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_40520c:
    // 0x40520c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x40520cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_405210:
    // 0x405210: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x405210u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_405214:
    // 0x405214: 0xc04cc90  jal         func_133240
label_405218:
    if (ctx->pc == 0x405218u) {
        ctx->pc = 0x405218u;
            // 0x405218: 0x24c50010  addiu       $a1, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->pc = 0x40521Cu;
        goto label_40521c;
    }
    ctx->pc = 0x405214u;
    SET_GPR_U32(ctx, 31, 0x40521Cu);
    ctx->pc = 0x405218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x405214u;
            // 0x405218: 0x24c50010  addiu       $a1, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40521Cu; }
        if (ctx->pc != 0x40521Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40521Cu; }
        if (ctx->pc != 0x40521Cu) { return; }
    }
    ctx->pc = 0x40521Cu;
label_40521c:
    // 0x40521c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x40521cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_405220:
    // 0x405220: 0xc04cc44  jal         func_133110
label_405224:
    if (ctx->pc == 0x405224u) {
        ctx->pc = 0x405224u;
            // 0x405224: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x405228u;
        goto label_405228;
    }
    ctx->pc = 0x405220u;
    SET_GPR_U32(ctx, 31, 0x405228u);
    ctx->pc = 0x405224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x405220u;
            // 0x405224: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405228u; }
        if (ctx->pc != 0x405228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405228u; }
        if (ctx->pc != 0x405228u) { return; }
    }
    ctx->pc = 0x405228u;
label_405228:
    // 0x405228: 0xc7ad0048  lwc1        $f13, 0x48($sp)
    ctx->pc = 0x405228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_40522c:
    // 0x40522c: 0xc04780a  jal         func_11E028
label_405230:
    if (ctx->pc == 0x405230u) {
        ctx->pc = 0x405230u;
            // 0x405230: 0xc7ac0040  lwc1        $f12, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x405234u;
        goto label_405234;
    }
    ctx->pc = 0x40522Cu;
    SET_GPR_U32(ctx, 31, 0x405234u);
    ctx->pc = 0x405230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40522Cu;
            // 0x405230: 0xc7ac0040  lwc1        $f12, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405234u; }
        if (ctx->pc != 0x405234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405234u; }
        if (ctx->pc != 0x405234u) { return; }
    }
    ctx->pc = 0x405234u;
label_405234:
    // 0x405234: 0x3c034622  lui         $v1, 0x4622
    ctx->pc = 0x405234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17954 << 16));
label_405238:
    // 0x405238: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x405238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_40523c:
    // 0x40523c: 0x3463f983  ori         $v1, $v1, 0xF983
    ctx->pc = 0x40523cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63875);
label_405240:
    // 0x405240: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x405240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_405244:
    // 0x405244: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x405244u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_405248:
    // 0x405248: 0x0  nop
    ctx->pc = 0x405248u;
    // NOP
label_40524c:
    // 0x40524c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x40524cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_405250:
    // 0x405250: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x405250u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_405254:
    // 0x405254: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x405254u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_405258:
    // 0x405258: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x405258u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_40525c:
    // 0x40525c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x40525cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_405260:
    // 0x405260: 0xc04c970  jal         func_1325C0
label_405264:
    if (ctx->pc == 0x405264u) {
        ctx->pc = 0x405264u;
            // 0x405264: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x405268u;
        goto label_405268;
    }
    ctx->pc = 0x405260u;
    SET_GPR_U32(ctx, 31, 0x405268u);
    ctx->pc = 0x405264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x405260u;
            // 0x405264: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405268u; }
        if (ctx->pc != 0x405268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405268u; }
        if (ctx->pc != 0x405268u) { return; }
    }
    ctx->pc = 0x405268u;
label_405268:
    // 0x405268: 0x26440150  addiu       $a0, $s2, 0x150
    ctx->pc = 0x405268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
label_40526c:
    // 0x40526c: 0xc04c74c  jal         func_131D30
label_405270:
    if (ctx->pc == 0x405270u) {
        ctx->pc = 0x405270u;
            // 0x405270: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x405274u;
        goto label_405274;
    }
    ctx->pc = 0x40526Cu;
    SET_GPR_U32(ctx, 31, 0x405274u);
    ctx->pc = 0x405270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40526Cu;
            // 0x405270: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405274u; }
        if (ctx->pc != 0x405274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405274u; }
        if (ctx->pc != 0x405274u) { return; }
    }
    ctx->pc = 0x405274u;
label_405274:
    // 0x405274: 0x26440160  addiu       $a0, $s2, 0x160
    ctx->pc = 0x405274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 352));
label_405278:
    // 0x405278: 0xc04c74c  jal         func_131D30
label_40527c:
    if (ctx->pc == 0x40527Cu) {
        ctx->pc = 0x40527Cu;
            // 0x40527c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x405280u;
        goto label_405280;
    }
    ctx->pc = 0x405278u;
    SET_GPR_U32(ctx, 31, 0x405280u);
    ctx->pc = 0x40527Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x405278u;
            // 0x40527c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405280u; }
        if (ctx->pc != 0x405280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405280u; }
        if (ctx->pc != 0x405280u) { return; }
    }
    ctx->pc = 0x405280u;
label_405280:
    // 0x405280: 0xae400180  sw          $zero, 0x180($s2)
    ctx->pc = 0x405280u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 384), GPR_U32(ctx, 0));
label_405284:
    // 0x405284: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x405284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_405288:
    // 0x405288: 0xae420184  sw          $v0, 0x184($s2)
    ctx->pc = 0x405288u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 388), GPR_U32(ctx, 2));
label_40528c:
    // 0x40528c: 0x26440170  addiu       $a0, $s2, 0x170
    ctx->pc = 0x40528cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 368));
label_405290:
    // 0x405290: 0xc04c74c  jal         func_131D30
label_405294:
    if (ctx->pc == 0x405294u) {
        ctx->pc = 0x405294u;
            // 0x405294: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x405298u;
        goto label_405298;
    }
    ctx->pc = 0x405290u;
    SET_GPR_U32(ctx, 31, 0x405298u);
    ctx->pc = 0x405294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x405290u;
            // 0x405294: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405298u; }
        if (ctx->pc != 0x405298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405298u; }
        if (ctx->pc != 0x405298u) { return; }
    }
    ctx->pc = 0x405298u;
label_405298:
    // 0x405298: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x405298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_40529c:
    // 0x40529c: 0xc04c720  jal         func_131C80
label_4052a0:
    if (ctx->pc == 0x4052A0u) {
        ctx->pc = 0x4052A0u;
            // 0x4052a0: 0x26450170  addiu       $a1, $s2, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 368));
        ctx->pc = 0x4052A4u;
        goto label_4052a4;
    }
    ctx->pc = 0x40529Cu;
    SET_GPR_U32(ctx, 31, 0x4052A4u);
    ctx->pc = 0x4052A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40529Cu;
            // 0x4052a0: 0x26450170  addiu       $a1, $s2, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4052A4u; }
        if (ctx->pc != 0x4052A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4052A4u; }
        if (ctx->pc != 0x4052A4u) { return; }
    }
    ctx->pc = 0x4052A4u;
label_4052a4:
    // 0x4052a4: 0x264400d0  addiu       $a0, $s2, 0xD0
    ctx->pc = 0x4052a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
label_4052a8:
    // 0x4052a8: 0xc04c720  jal         func_131C80
label_4052ac:
    if (ctx->pc == 0x4052ACu) {
        ctx->pc = 0x4052ACu;
            // 0x4052ac: 0x26450170  addiu       $a1, $s2, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 368));
        ctx->pc = 0x4052B0u;
        goto label_4052b0;
    }
    ctx->pc = 0x4052A8u;
    SET_GPR_U32(ctx, 31, 0x4052B0u);
    ctx->pc = 0x4052ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4052A8u;
            // 0x4052ac: 0x26450170  addiu       $a1, $s2, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4052B0u; }
        if (ctx->pc != 0x4052B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4052B0u; }
        if (ctx->pc != 0x4052B0u) { return; }
    }
    ctx->pc = 0x4052B0u;
label_4052b0:
    // 0x4052b0: 0xc64001a0  lwc1        $f0, 0x1A0($s2)
    ctx->pc = 0x4052b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4052b4:
    // 0x4052b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4052b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4052b8:
    // 0x4052b8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x4052b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4052bc:
    // 0x4052bc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4052bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4052c0:
    // 0x4052c0: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x4052c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_4052c4:
    // 0x4052c4: 0xe6400240  swc1        $f0, 0x240($s2)
    ctx->pc = 0x4052c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 576), bits); }
label_4052c8:
    // 0x4052c8: 0xc64001a4  lwc1        $f0, 0x1A4($s2)
    ctx->pc = 0x4052c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4052cc:
    // 0x4052cc: 0xe6400244  swc1        $f0, 0x244($s2)
    ctx->pc = 0x4052ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 580), bits); }
label_4052d0:
    // 0x4052d0: 0xc64001a8  lwc1        $f0, 0x1A8($s2)
    ctx->pc = 0x4052d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4052d4:
    // 0x4052d4: 0xe6400248  swc1        $f0, 0x248($s2)
    ctx->pc = 0x4052d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 584), bits); }
label_4052d8:
    // 0x4052d8: 0xc64001ac  lwc1        $f0, 0x1AC($s2)
    ctx->pc = 0x4052d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4052dc:
    // 0x4052dc: 0xe640024c  swc1        $f0, 0x24C($s2)
    ctx->pc = 0x4052dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
label_4052e0:
    // 0x4052e0: 0xa2400210  sb          $zero, 0x210($s2)
    ctx->pc = 0x4052e0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 528), (uint8_t)GPR_U32(ctx, 0));
label_4052e4:
    // 0x4052e4: 0xa2460211  sb          $a2, 0x211($s2)
    ctx->pc = 0x4052e4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 529), (uint8_t)GPR_U32(ctx, 6));
label_4052e8:
    // 0x4052e8: 0xae400254  sw          $zero, 0x254($s2)
    ctx->pc = 0x4052e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 596), GPR_U32(ctx, 0));
label_4052ec:
    // 0x4052ec: 0xa2450064  sb          $a1, 0x64($s2)
    ctx->pc = 0x4052ecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 100), (uint8_t)GPR_U32(ctx, 5));
label_4052f0:
    // 0x4052f0: 0xa2400065  sb          $zero, 0x65($s2)
    ctx->pc = 0x4052f0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 101), (uint8_t)GPR_U32(ctx, 0));
label_4052f4:
    // 0x4052f4: 0xa2440066  sb          $a0, 0x66($s2)
    ctx->pc = 0x4052f4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 102), (uint8_t)GPR_U32(ctx, 4));
label_4052f8:
    // 0x4052f8: 0xa2460067  sb          $a2, 0x67($s2)
    ctx->pc = 0x4052f8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 103), (uint8_t)GPR_U32(ctx, 6));
label_4052fc:
    // 0x4052fc: 0xa243004c  sb          $v1, 0x4C($s2)
    ctx->pc = 0x4052fcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 76), (uint8_t)GPR_U32(ctx, 3));
label_405300:
    // 0x405300: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x405300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_405304:
    // 0x405304: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x405304u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_405308:
    // 0x405308: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x405308u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40530c:
    // 0x40530c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x40530cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_405310:
    // 0x405310: 0x3e00008  jr          $ra
label_405314:
    if (ctx->pc == 0x405314u) {
        ctx->pc = 0x405314u;
            // 0x405314: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x405318u;
        goto label_405318;
    }
    ctx->pc = 0x405310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x405314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x405310u;
            // 0x405314: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x405318u;
label_405318:
    // 0x405318: 0x0  nop
    ctx->pc = 0x405318u;
    // NOP
label_40531c:
    // 0x40531c: 0x0  nop
    ctx->pc = 0x40531cu;
    // NOP
label_405320:
    // 0x405320: 0x8101420  j           func_405080
label_405324:
    if (ctx->pc == 0x405324u) {
        ctx->pc = 0x405328u;
        goto label_405328;
    }
    ctx->pc = 0x405320u;
    ctx->pc = 0x405080u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_405080;
    ctx->pc = 0x405328u;
label_405328:
    // 0x405328: 0x0  nop
    ctx->pc = 0x405328u;
    // NOP
label_40532c:
    // 0x40532c: 0x0  nop
    ctx->pc = 0x40532cu;
    // NOP
label_405330:
    // 0x405330: 0x3e00008  jr          $ra
label_405334:
    if (ctx->pc == 0x405334u) {
        ctx->pc = 0x405334u;
            // 0x405334: 0x240236d8  addiu       $v0, $zero, 0x36D8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14040));
        ctx->pc = 0x405338u;
        goto label_405338;
    }
    ctx->pc = 0x405330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x405334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x405330u;
            // 0x405334: 0x240236d8  addiu       $v0, $zero, 0x36D8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14040));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x405338u;
label_405338:
    // 0x405338: 0x0  nop
    ctx->pc = 0x405338u;
    // NOP
label_40533c:
    // 0x40533c: 0x0  nop
    ctx->pc = 0x40533cu;
    // NOP
label_405340:
    // 0x405340: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x405340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_405344:
    // 0x405344: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x405344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_405348:
    // 0x405348: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x405348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_40534c:
    // 0x40534c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x40534cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_405350:
    // 0x405350: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x405350u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_405354:
    // 0x405354: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x405354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_405358:
    // 0x405358: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x405358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_40535c:
    // 0x40535c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40535cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_405360:
    // 0x405360: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x405360u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_405364:
    // 0x405364: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_405368:
    if (ctx->pc == 0x405368u) {
        ctx->pc = 0x405368u;
            // 0x405368: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40536Cu;
        goto label_40536c;
    }
    ctx->pc = 0x405364u;
    {
        const bool branch_taken_0x405364 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x405368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x405364u;
            // 0x405368: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405364) {
            ctx->pc = 0x4053A8u;
            goto label_4053a8;
        }
    }
    ctx->pc = 0x40536Cu;
label_40536c:
    // 0x40536c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x40536cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_405370:
    // 0x405370: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x405370u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_405374:
    // 0x405374: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x405374u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_405378:
    // 0x405378: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x405378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_40537c:
    // 0x40537c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x40537cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_405380:
    // 0x405380: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x405380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_405384:
    // 0x405384: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x405384u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_405388:
    // 0x405388: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x405388u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_40538c:
    // 0x40538c: 0x320f809  jalr        $t9
label_405390:
    if (ctx->pc == 0x405390u) {
        ctx->pc = 0x405394u;
        goto label_405394;
    }
    ctx->pc = 0x40538Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x405394u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x405394u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x405394u; }
            if (ctx->pc != 0x405394u) { return; }
        }
        }
    }
    ctx->pc = 0x405394u;
label_405394:
    // 0x405394: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x405394u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_405398:
    // 0x405398: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x405398u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_40539c:
    // 0x40539c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x40539cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4053a0:
    // 0x4053a0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_4053a4:
    if (ctx->pc == 0x4053A4u) {
        ctx->pc = 0x4053A4u;
            // 0x4053a4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4053A8u;
        goto label_4053a8;
    }
    ctx->pc = 0x4053A0u;
    {
        const bool branch_taken_0x4053a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4053A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4053A0u;
            // 0x4053a4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4053a0) {
            ctx->pc = 0x405378u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_405378;
        }
    }
    ctx->pc = 0x4053A8u;
label_4053a8:
    // 0x4053a8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4053a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4053ac:
    // 0x4053ac: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4053acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4053b0:
    // 0x4053b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4053b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4053b4:
    // 0x4053b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4053b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4053b8:
    // 0x4053b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4053b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4053bc:
    // 0x4053bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4053bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4053c0:
    // 0x4053c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4053c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4053c4:
    // 0x4053c4: 0x3e00008  jr          $ra
label_4053c8:
    if (ctx->pc == 0x4053C8u) {
        ctx->pc = 0x4053C8u;
            // 0x4053c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4053CCu;
        goto label_4053cc;
    }
    ctx->pc = 0x4053C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4053C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4053C4u;
            // 0x4053c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4053CCu;
label_4053cc:
    // 0x4053cc: 0x0  nop
    ctx->pc = 0x4053ccu;
    // NOP
label_4053d0:
    // 0x4053d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4053d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4053d4:
    // 0x4053d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4053d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4053d8:
    // 0x4053d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4053d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4053dc:
    // 0x4053dc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x4053dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_4053e0:
    // 0x4053e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4053e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4053e4:
    // 0x4053e4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x4053e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4053e8:
    // 0x4053e8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4053e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4053ec:
    // 0x4053ec: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x4053ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_4053f0:
    // 0x4053f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4053f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4053f4:
    // 0x4053f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4053f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4053f8:
    // 0x4053f8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4053f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_4053fc:
    // 0x4053fc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x4053fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_405400:
    // 0x405400: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x405400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_405404:
    // 0x405404: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x405404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_405408:
    // 0x405408: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x405408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_40540c:
    // 0x40540c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x40540cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_405410:
    // 0x405410: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x405410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_405414:
    // 0x405414: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x405414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_405418:
    // 0x405418: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x405418u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_40541c:
    // 0x40541c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x40541cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_405420:
    // 0x405420: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x405420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_405424:
    // 0x405424: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x405424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_405428:
    // 0x405428: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x405428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_40542c:
    // 0x40542c: 0xc0a997c  jal         func_2A65F0
label_405430:
    if (ctx->pc == 0x405430u) {
        ctx->pc = 0x405430u;
            // 0x405430: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x405434u;
        goto label_405434;
    }
    ctx->pc = 0x40542Cu;
    SET_GPR_U32(ctx, 31, 0x405434u);
    ctx->pc = 0x405430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40542Cu;
            // 0x405430: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405434u; }
        if (ctx->pc != 0x405434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405434u; }
        if (ctx->pc != 0x405434u) { return; }
    }
    ctx->pc = 0x405434u;
label_405434:
    // 0x405434: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x405434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_405438:
    // 0x405438: 0xc0d879c  jal         func_361E70
label_40543c:
    if (ctx->pc == 0x40543Cu) {
        ctx->pc = 0x40543Cu;
            // 0x40543c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x405440u;
        goto label_405440;
    }
    ctx->pc = 0x405438u;
    SET_GPR_U32(ctx, 31, 0x405440u);
    ctx->pc = 0x40543Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x405438u;
            // 0x40543c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405440u; }
        if (ctx->pc != 0x405440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405440u; }
        if (ctx->pc != 0x405440u) { return; }
    }
    ctx->pc = 0x405440u;
label_405440:
    // 0x405440: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x405440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_405444:
    // 0x405444: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x405444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_405448:
    // 0x405448: 0x3e00008  jr          $ra
label_40544c:
    if (ctx->pc == 0x40544Cu) {
        ctx->pc = 0x40544Cu;
            // 0x40544c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x405450u;
        goto label_405450;
    }
    ctx->pc = 0x405448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40544Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x405448u;
            // 0x40544c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x405450u;
label_405450:
    // 0x405450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x405450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_405454:
    // 0x405454: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x405454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_405458:
    // 0x405458: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x405458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_40545c:
    // 0x40545c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x40545cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_405460:
    // 0x405460: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_405464:
    if (ctx->pc == 0x405464u) {
        ctx->pc = 0x405464u;
            // 0x405464: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x405468u;
        goto label_405468;
    }
    ctx->pc = 0x405460u;
    {
        const bool branch_taken_0x405460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x405464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x405460u;
            // 0x405464: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405460) {
            ctx->pc = 0x405580u;
            goto label_405580;
        }
    }
    ctx->pc = 0x405468u;
label_405468:
    // 0x405468: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x405468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_40546c:
    // 0x40546c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x40546cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_405470:
    // 0x405470: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x405470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_405474:
    // 0x405474: 0xc075128  jal         func_1D44A0
label_405478:
    if (ctx->pc == 0x405478u) {
        ctx->pc = 0x405478u;
            // 0x405478: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x40547Cu;
        goto label_40547c;
    }
    ctx->pc = 0x405474u;
    SET_GPR_U32(ctx, 31, 0x40547Cu);
    ctx->pc = 0x405478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x405474u;
            // 0x405478: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40547Cu; }
        if (ctx->pc != 0x40547Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40547Cu; }
        if (ctx->pc != 0x40547Cu) { return; }
    }
    ctx->pc = 0x40547Cu;
label_40547c:
    // 0x40547c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x40547cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_405480:
    // 0x405480: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x405480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_405484:
    // 0x405484: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x405484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_405488:
    // 0x405488: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x405488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_40548c:
    // 0x40548c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x40548cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_405490:
    // 0x405490: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_405494:
    if (ctx->pc == 0x405494u) {
        ctx->pc = 0x405494u;
            // 0x405494: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x405498u;
        goto label_405498;
    }
    ctx->pc = 0x405490u;
    {
        const bool branch_taken_0x405490 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x405494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x405490u;
            // 0x405494: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405490) {
            ctx->pc = 0x4054A0u;
            goto label_4054a0;
        }
    }
    ctx->pc = 0x405498u;
label_405498:
    // 0x405498: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x405498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_40549c:
    // 0x40549c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x40549cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_4054a0:
    // 0x4054a0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4054a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4054a4:
    // 0x4054a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4054a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4054a8:
    // 0x4054a8: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x4054a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_4054ac:
    // 0x4054ac: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4054acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4054b0:
    // 0x4054b0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4054b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4054b4:
    // 0x4054b4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4054b8:
    if (ctx->pc == 0x4054B8u) {
        ctx->pc = 0x4054B8u;
            // 0x4054b8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4054BCu;
        goto label_4054bc;
    }
    ctx->pc = 0x4054B4u;
    {
        const bool branch_taken_0x4054b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4054b4) {
            ctx->pc = 0x4054B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4054B4u;
            // 0x4054b8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4054C8u;
            goto label_4054c8;
        }
    }
    ctx->pc = 0x4054BCu;
label_4054bc:
    // 0x4054bc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4054bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4054c0:
    // 0x4054c0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4054c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4054c4:
    // 0x4054c4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4054c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4054c8:
    // 0x4054c8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4054c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4054cc:
    // 0x4054cc: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4054ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4054d0:
    // 0x4054d0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4054d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4054d4:
    // 0x4054d4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4054d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4054d8:
    // 0x4054d8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4054dc:
    if (ctx->pc == 0x4054DCu) {
        ctx->pc = 0x4054DCu;
            // 0x4054dc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4054E0u;
        goto label_4054e0;
    }
    ctx->pc = 0x4054D8u;
    {
        const bool branch_taken_0x4054d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4054d8) {
            ctx->pc = 0x4054DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4054D8u;
            // 0x4054dc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4054ECu;
            goto label_4054ec;
        }
    }
    ctx->pc = 0x4054E0u;
label_4054e0:
    // 0x4054e0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4054e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4054e4:
    // 0x4054e4: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4054e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4054e8:
    // 0x4054e8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4054e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4054ec:
    // 0x4054ec: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4054ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4054f0:
    // 0x4054f0: 0x320f809  jalr        $t9
label_4054f4:
    if (ctx->pc == 0x4054F4u) {
        ctx->pc = 0x4054F4u;
            // 0x4054f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4054F8u;
        goto label_4054f8;
    }
    ctx->pc = 0x4054F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4054F8u);
        ctx->pc = 0x4054F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4054F0u;
            // 0x4054f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4054F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4054F8u; }
            if (ctx->pc != 0x4054F8u) { return; }
        }
        }
    }
    ctx->pc = 0x4054F8u;
label_4054f8:
    // 0x4054f8: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4054f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4054fc:
    // 0x4054fc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4054fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_405500:
    // 0x405500: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x405500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_405504:
    // 0x405504: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x405504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_405508:
    // 0x405508: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x405508u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_40550c:
    // 0x40550c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x40550cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_405510:
    // 0x405510: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_405514:
    if (ctx->pc == 0x405514u) {
        ctx->pc = 0x405514u;
            // 0x405514: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x405518u;
        goto label_405518;
    }
    ctx->pc = 0x405510u;
    {
        const bool branch_taken_0x405510 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x405510) {
            ctx->pc = 0x405514u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x405510u;
            // 0x405514: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x405524u;
            goto label_405524;
        }
    }
    ctx->pc = 0x405518u;
label_405518:
    // 0x405518: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x405518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_40551c:
    // 0x40551c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x40551cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_405520:
    // 0x405520: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x405520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_405524:
    // 0x405524: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x405524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_405528:
    // 0x405528: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x405528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_40552c:
    // 0x40552c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x40552cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_405530:
    // 0x405530: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x405530u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_405534:
    // 0x405534: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x405534u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_405538:
    // 0x405538: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_40553c:
    if (ctx->pc == 0x40553Cu) {
        ctx->pc = 0x405540u;
        goto label_405540;
    }
    ctx->pc = 0x405538u;
    {
        const bool branch_taken_0x405538 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x405538) {
            ctx->pc = 0x405548u;
            goto label_405548;
        }
    }
    ctx->pc = 0x405540u;
label_405540:
    // 0x405540: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x405540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_405544:
    // 0x405544: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x405544u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_405548:
    // 0x405548: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x405548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_40554c:
    // 0x40554c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x40554cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_405550:
    // 0x405550: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x405550u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_405554:
    // 0x405554: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_405558:
    if (ctx->pc == 0x405558u) {
        ctx->pc = 0x40555Cu;
        goto label_40555c;
    }
    ctx->pc = 0x405554u;
    {
        const bool branch_taken_0x405554 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x405554) {
            ctx->pc = 0x405564u;
            goto label_405564;
        }
    }
    ctx->pc = 0x40555Cu;
label_40555c:
    // 0x40555c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x40555cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_405560:
    // 0x405560: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x405560u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_405564:
    // 0x405564: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x405564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_405568:
    // 0x405568: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x405568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_40556c:
    // 0x40556c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x40556cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_405570:
    // 0x405570: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_405574:
    if (ctx->pc == 0x405574u) {
        ctx->pc = 0x405574u;
            // 0x405574: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x405578u;
        goto label_405578;
    }
    ctx->pc = 0x405570u;
    {
        const bool branch_taken_0x405570 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x405570) {
            ctx->pc = 0x405574u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x405570u;
            // 0x405574: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x405584u;
            goto label_405584;
        }
    }
    ctx->pc = 0x405578u;
label_405578:
    // 0x405578: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x405578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_40557c:
    // 0x40557c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x40557cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_405580:
    // 0x405580: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x405580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_405584:
    // 0x405584: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x405584u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_405588:
    // 0x405588: 0x3e00008  jr          $ra
label_40558c:
    if (ctx->pc == 0x40558Cu) {
        ctx->pc = 0x40558Cu;
            // 0x40558c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x405590u;
        goto label_405590;
    }
    ctx->pc = 0x405588u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40558Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x405588u;
            // 0x40558c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x405590u;
label_405590:
    // 0x405590: 0x8100970  j           func_4025C0
label_405594:
    if (ctx->pc == 0x405594u) {
        ctx->pc = 0x405594u;
            // 0x405594: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x405598u;
        goto label_405598;
    }
    ctx->pc = 0x405590u;
    ctx->pc = 0x405594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x405590u;
            // 0x405594: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4025C0u;
    {
        auto targetFn = runtime->lookupFunction(0x4025C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x405598u;
label_405598:
    // 0x405598: 0x0  nop
    ctx->pc = 0x405598u;
    // NOP
label_40559c:
    // 0x40559c: 0x0  nop
    ctx->pc = 0x40559cu;
    // NOP
label_4055a0:
    // 0x4055a0: 0x8100b9c  j           func_402E70
label_4055a4:
    if (ctx->pc == 0x4055A4u) {
        ctx->pc = 0x4055A4u;
            // 0x4055a4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4055A8u;
        goto label_4055a8;
    }
    ctx->pc = 0x4055A0u;
    ctx->pc = 0x4055A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4055A0u;
            // 0x4055a4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x402E70u;
    {
        auto targetFn = runtime->lookupFunction(0x402E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4055A8u;
label_4055a8:
    // 0x4055a8: 0x0  nop
    ctx->pc = 0x4055a8u;
    // NOP
label_4055ac:
    // 0x4055ac: 0x0  nop
    ctx->pc = 0x4055acu;
    // NOP
label_4055b0:
    // 0x4055b0: 0x8100918  j           func_402460
label_4055b4:
    if (ctx->pc == 0x4055B4u) {
        ctx->pc = 0x4055B4u;
            // 0x4055b4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4055B8u;
        goto label_4055b8;
    }
    ctx->pc = 0x4055B0u;
    ctx->pc = 0x4055B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4055B0u;
            // 0x4055b4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x402460u;
    if (runtime->hasFunction(0x402460u)) {
        auto targetFn = runtime->lookupFunction(0x402460u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00402460_0x402460(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4055B8u;
label_4055b8:
    // 0x4055b8: 0x0  nop
    ctx->pc = 0x4055b8u;
    // NOP
label_4055bc:
    // 0x4055bc: 0x0  nop
    ctx->pc = 0x4055bcu;
    // NOP
label_4055c0:
    // 0x4055c0: 0x81008f4  j           func_4023D0
label_4055c4:
    if (ctx->pc == 0x4055C4u) {
        ctx->pc = 0x4055C4u;
            // 0x4055c4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4055C8u;
        goto label_4055c8;
    }
    ctx->pc = 0x4055C0u;
    ctx->pc = 0x4055C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4055C0u;
            // 0x4055c4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4023D0u;
    {
        auto targetFn = runtime->lookupFunction(0x4023D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4055C8u;
label_4055c8:
    // 0x4055c8: 0x0  nop
    ctx->pc = 0x4055c8u;
    // NOP
label_4055cc:
    // 0x4055cc: 0x0  nop
    ctx->pc = 0x4055ccu;
    // NOP
}
