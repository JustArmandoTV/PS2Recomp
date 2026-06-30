#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0054FFD0
// Address: 0x54ffd0 - 0x5508b0
void sub_0054FFD0_0x54ffd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0054FFD0_0x54ffd0");
#endif

    switch (ctx->pc) {
        case 0x54ffd0u: goto label_54ffd0;
        case 0x54ffd4u: goto label_54ffd4;
        case 0x54ffd8u: goto label_54ffd8;
        case 0x54ffdcu: goto label_54ffdc;
        case 0x54ffe0u: goto label_54ffe0;
        case 0x54ffe4u: goto label_54ffe4;
        case 0x54ffe8u: goto label_54ffe8;
        case 0x54ffecu: goto label_54ffec;
        case 0x54fff0u: goto label_54fff0;
        case 0x54fff4u: goto label_54fff4;
        case 0x54fff8u: goto label_54fff8;
        case 0x54fffcu: goto label_54fffc;
        case 0x550000u: goto label_550000;
        case 0x550004u: goto label_550004;
        case 0x550008u: goto label_550008;
        case 0x55000cu: goto label_55000c;
        case 0x550010u: goto label_550010;
        case 0x550014u: goto label_550014;
        case 0x550018u: goto label_550018;
        case 0x55001cu: goto label_55001c;
        case 0x550020u: goto label_550020;
        case 0x550024u: goto label_550024;
        case 0x550028u: goto label_550028;
        case 0x55002cu: goto label_55002c;
        case 0x550030u: goto label_550030;
        case 0x550034u: goto label_550034;
        case 0x550038u: goto label_550038;
        case 0x55003cu: goto label_55003c;
        case 0x550040u: goto label_550040;
        case 0x550044u: goto label_550044;
        case 0x550048u: goto label_550048;
        case 0x55004cu: goto label_55004c;
        case 0x550050u: goto label_550050;
        case 0x550054u: goto label_550054;
        case 0x550058u: goto label_550058;
        case 0x55005cu: goto label_55005c;
        case 0x550060u: goto label_550060;
        case 0x550064u: goto label_550064;
        case 0x550068u: goto label_550068;
        case 0x55006cu: goto label_55006c;
        case 0x550070u: goto label_550070;
        case 0x550074u: goto label_550074;
        case 0x550078u: goto label_550078;
        case 0x55007cu: goto label_55007c;
        case 0x550080u: goto label_550080;
        case 0x550084u: goto label_550084;
        case 0x550088u: goto label_550088;
        case 0x55008cu: goto label_55008c;
        case 0x550090u: goto label_550090;
        case 0x550094u: goto label_550094;
        case 0x550098u: goto label_550098;
        case 0x55009cu: goto label_55009c;
        case 0x5500a0u: goto label_5500a0;
        case 0x5500a4u: goto label_5500a4;
        case 0x5500a8u: goto label_5500a8;
        case 0x5500acu: goto label_5500ac;
        case 0x5500b0u: goto label_5500b0;
        case 0x5500b4u: goto label_5500b4;
        case 0x5500b8u: goto label_5500b8;
        case 0x5500bcu: goto label_5500bc;
        case 0x5500c0u: goto label_5500c0;
        case 0x5500c4u: goto label_5500c4;
        case 0x5500c8u: goto label_5500c8;
        case 0x5500ccu: goto label_5500cc;
        case 0x5500d0u: goto label_5500d0;
        case 0x5500d4u: goto label_5500d4;
        case 0x5500d8u: goto label_5500d8;
        case 0x5500dcu: goto label_5500dc;
        case 0x5500e0u: goto label_5500e0;
        case 0x5500e4u: goto label_5500e4;
        case 0x5500e8u: goto label_5500e8;
        case 0x5500ecu: goto label_5500ec;
        case 0x5500f0u: goto label_5500f0;
        case 0x5500f4u: goto label_5500f4;
        case 0x5500f8u: goto label_5500f8;
        case 0x5500fcu: goto label_5500fc;
        case 0x550100u: goto label_550100;
        case 0x550104u: goto label_550104;
        case 0x550108u: goto label_550108;
        case 0x55010cu: goto label_55010c;
        case 0x550110u: goto label_550110;
        case 0x550114u: goto label_550114;
        case 0x550118u: goto label_550118;
        case 0x55011cu: goto label_55011c;
        case 0x550120u: goto label_550120;
        case 0x550124u: goto label_550124;
        case 0x550128u: goto label_550128;
        case 0x55012cu: goto label_55012c;
        case 0x550130u: goto label_550130;
        case 0x550134u: goto label_550134;
        case 0x550138u: goto label_550138;
        case 0x55013cu: goto label_55013c;
        case 0x550140u: goto label_550140;
        case 0x550144u: goto label_550144;
        case 0x550148u: goto label_550148;
        case 0x55014cu: goto label_55014c;
        case 0x550150u: goto label_550150;
        case 0x550154u: goto label_550154;
        case 0x550158u: goto label_550158;
        case 0x55015cu: goto label_55015c;
        case 0x550160u: goto label_550160;
        case 0x550164u: goto label_550164;
        case 0x550168u: goto label_550168;
        case 0x55016cu: goto label_55016c;
        case 0x550170u: goto label_550170;
        case 0x550174u: goto label_550174;
        case 0x550178u: goto label_550178;
        case 0x55017cu: goto label_55017c;
        case 0x550180u: goto label_550180;
        case 0x550184u: goto label_550184;
        case 0x550188u: goto label_550188;
        case 0x55018cu: goto label_55018c;
        case 0x550190u: goto label_550190;
        case 0x550194u: goto label_550194;
        case 0x550198u: goto label_550198;
        case 0x55019cu: goto label_55019c;
        case 0x5501a0u: goto label_5501a0;
        case 0x5501a4u: goto label_5501a4;
        case 0x5501a8u: goto label_5501a8;
        case 0x5501acu: goto label_5501ac;
        case 0x5501b0u: goto label_5501b0;
        case 0x5501b4u: goto label_5501b4;
        case 0x5501b8u: goto label_5501b8;
        case 0x5501bcu: goto label_5501bc;
        case 0x5501c0u: goto label_5501c0;
        case 0x5501c4u: goto label_5501c4;
        case 0x5501c8u: goto label_5501c8;
        case 0x5501ccu: goto label_5501cc;
        case 0x5501d0u: goto label_5501d0;
        case 0x5501d4u: goto label_5501d4;
        case 0x5501d8u: goto label_5501d8;
        case 0x5501dcu: goto label_5501dc;
        case 0x5501e0u: goto label_5501e0;
        case 0x5501e4u: goto label_5501e4;
        case 0x5501e8u: goto label_5501e8;
        case 0x5501ecu: goto label_5501ec;
        case 0x5501f0u: goto label_5501f0;
        case 0x5501f4u: goto label_5501f4;
        case 0x5501f8u: goto label_5501f8;
        case 0x5501fcu: goto label_5501fc;
        case 0x550200u: goto label_550200;
        case 0x550204u: goto label_550204;
        case 0x550208u: goto label_550208;
        case 0x55020cu: goto label_55020c;
        case 0x550210u: goto label_550210;
        case 0x550214u: goto label_550214;
        case 0x550218u: goto label_550218;
        case 0x55021cu: goto label_55021c;
        case 0x550220u: goto label_550220;
        case 0x550224u: goto label_550224;
        case 0x550228u: goto label_550228;
        case 0x55022cu: goto label_55022c;
        case 0x550230u: goto label_550230;
        case 0x550234u: goto label_550234;
        case 0x550238u: goto label_550238;
        case 0x55023cu: goto label_55023c;
        case 0x550240u: goto label_550240;
        case 0x550244u: goto label_550244;
        case 0x550248u: goto label_550248;
        case 0x55024cu: goto label_55024c;
        case 0x550250u: goto label_550250;
        case 0x550254u: goto label_550254;
        case 0x550258u: goto label_550258;
        case 0x55025cu: goto label_55025c;
        case 0x550260u: goto label_550260;
        case 0x550264u: goto label_550264;
        case 0x550268u: goto label_550268;
        case 0x55026cu: goto label_55026c;
        case 0x550270u: goto label_550270;
        case 0x550274u: goto label_550274;
        case 0x550278u: goto label_550278;
        case 0x55027cu: goto label_55027c;
        case 0x550280u: goto label_550280;
        case 0x550284u: goto label_550284;
        case 0x550288u: goto label_550288;
        case 0x55028cu: goto label_55028c;
        case 0x550290u: goto label_550290;
        case 0x550294u: goto label_550294;
        case 0x550298u: goto label_550298;
        case 0x55029cu: goto label_55029c;
        case 0x5502a0u: goto label_5502a0;
        case 0x5502a4u: goto label_5502a4;
        case 0x5502a8u: goto label_5502a8;
        case 0x5502acu: goto label_5502ac;
        case 0x5502b0u: goto label_5502b0;
        case 0x5502b4u: goto label_5502b4;
        case 0x5502b8u: goto label_5502b8;
        case 0x5502bcu: goto label_5502bc;
        case 0x5502c0u: goto label_5502c0;
        case 0x5502c4u: goto label_5502c4;
        case 0x5502c8u: goto label_5502c8;
        case 0x5502ccu: goto label_5502cc;
        case 0x5502d0u: goto label_5502d0;
        case 0x5502d4u: goto label_5502d4;
        case 0x5502d8u: goto label_5502d8;
        case 0x5502dcu: goto label_5502dc;
        case 0x5502e0u: goto label_5502e0;
        case 0x5502e4u: goto label_5502e4;
        case 0x5502e8u: goto label_5502e8;
        case 0x5502ecu: goto label_5502ec;
        case 0x5502f0u: goto label_5502f0;
        case 0x5502f4u: goto label_5502f4;
        case 0x5502f8u: goto label_5502f8;
        case 0x5502fcu: goto label_5502fc;
        case 0x550300u: goto label_550300;
        case 0x550304u: goto label_550304;
        case 0x550308u: goto label_550308;
        case 0x55030cu: goto label_55030c;
        case 0x550310u: goto label_550310;
        case 0x550314u: goto label_550314;
        case 0x550318u: goto label_550318;
        case 0x55031cu: goto label_55031c;
        case 0x550320u: goto label_550320;
        case 0x550324u: goto label_550324;
        case 0x550328u: goto label_550328;
        case 0x55032cu: goto label_55032c;
        case 0x550330u: goto label_550330;
        case 0x550334u: goto label_550334;
        case 0x550338u: goto label_550338;
        case 0x55033cu: goto label_55033c;
        case 0x550340u: goto label_550340;
        case 0x550344u: goto label_550344;
        case 0x550348u: goto label_550348;
        case 0x55034cu: goto label_55034c;
        case 0x550350u: goto label_550350;
        case 0x550354u: goto label_550354;
        case 0x550358u: goto label_550358;
        case 0x55035cu: goto label_55035c;
        case 0x550360u: goto label_550360;
        case 0x550364u: goto label_550364;
        case 0x550368u: goto label_550368;
        case 0x55036cu: goto label_55036c;
        case 0x550370u: goto label_550370;
        case 0x550374u: goto label_550374;
        case 0x550378u: goto label_550378;
        case 0x55037cu: goto label_55037c;
        case 0x550380u: goto label_550380;
        case 0x550384u: goto label_550384;
        case 0x550388u: goto label_550388;
        case 0x55038cu: goto label_55038c;
        case 0x550390u: goto label_550390;
        case 0x550394u: goto label_550394;
        case 0x550398u: goto label_550398;
        case 0x55039cu: goto label_55039c;
        case 0x5503a0u: goto label_5503a0;
        case 0x5503a4u: goto label_5503a4;
        case 0x5503a8u: goto label_5503a8;
        case 0x5503acu: goto label_5503ac;
        case 0x5503b0u: goto label_5503b0;
        case 0x5503b4u: goto label_5503b4;
        case 0x5503b8u: goto label_5503b8;
        case 0x5503bcu: goto label_5503bc;
        case 0x5503c0u: goto label_5503c0;
        case 0x5503c4u: goto label_5503c4;
        case 0x5503c8u: goto label_5503c8;
        case 0x5503ccu: goto label_5503cc;
        case 0x5503d0u: goto label_5503d0;
        case 0x5503d4u: goto label_5503d4;
        case 0x5503d8u: goto label_5503d8;
        case 0x5503dcu: goto label_5503dc;
        case 0x5503e0u: goto label_5503e0;
        case 0x5503e4u: goto label_5503e4;
        case 0x5503e8u: goto label_5503e8;
        case 0x5503ecu: goto label_5503ec;
        case 0x5503f0u: goto label_5503f0;
        case 0x5503f4u: goto label_5503f4;
        case 0x5503f8u: goto label_5503f8;
        case 0x5503fcu: goto label_5503fc;
        case 0x550400u: goto label_550400;
        case 0x550404u: goto label_550404;
        case 0x550408u: goto label_550408;
        case 0x55040cu: goto label_55040c;
        case 0x550410u: goto label_550410;
        case 0x550414u: goto label_550414;
        case 0x550418u: goto label_550418;
        case 0x55041cu: goto label_55041c;
        case 0x550420u: goto label_550420;
        case 0x550424u: goto label_550424;
        case 0x550428u: goto label_550428;
        case 0x55042cu: goto label_55042c;
        case 0x550430u: goto label_550430;
        case 0x550434u: goto label_550434;
        case 0x550438u: goto label_550438;
        case 0x55043cu: goto label_55043c;
        case 0x550440u: goto label_550440;
        case 0x550444u: goto label_550444;
        case 0x550448u: goto label_550448;
        case 0x55044cu: goto label_55044c;
        case 0x550450u: goto label_550450;
        case 0x550454u: goto label_550454;
        case 0x550458u: goto label_550458;
        case 0x55045cu: goto label_55045c;
        case 0x550460u: goto label_550460;
        case 0x550464u: goto label_550464;
        case 0x550468u: goto label_550468;
        case 0x55046cu: goto label_55046c;
        case 0x550470u: goto label_550470;
        case 0x550474u: goto label_550474;
        case 0x550478u: goto label_550478;
        case 0x55047cu: goto label_55047c;
        case 0x550480u: goto label_550480;
        case 0x550484u: goto label_550484;
        case 0x550488u: goto label_550488;
        case 0x55048cu: goto label_55048c;
        case 0x550490u: goto label_550490;
        case 0x550494u: goto label_550494;
        case 0x550498u: goto label_550498;
        case 0x55049cu: goto label_55049c;
        case 0x5504a0u: goto label_5504a0;
        case 0x5504a4u: goto label_5504a4;
        case 0x5504a8u: goto label_5504a8;
        case 0x5504acu: goto label_5504ac;
        case 0x5504b0u: goto label_5504b0;
        case 0x5504b4u: goto label_5504b4;
        case 0x5504b8u: goto label_5504b8;
        case 0x5504bcu: goto label_5504bc;
        case 0x5504c0u: goto label_5504c0;
        case 0x5504c4u: goto label_5504c4;
        case 0x5504c8u: goto label_5504c8;
        case 0x5504ccu: goto label_5504cc;
        case 0x5504d0u: goto label_5504d0;
        case 0x5504d4u: goto label_5504d4;
        case 0x5504d8u: goto label_5504d8;
        case 0x5504dcu: goto label_5504dc;
        case 0x5504e0u: goto label_5504e0;
        case 0x5504e4u: goto label_5504e4;
        case 0x5504e8u: goto label_5504e8;
        case 0x5504ecu: goto label_5504ec;
        case 0x5504f0u: goto label_5504f0;
        case 0x5504f4u: goto label_5504f4;
        case 0x5504f8u: goto label_5504f8;
        case 0x5504fcu: goto label_5504fc;
        case 0x550500u: goto label_550500;
        case 0x550504u: goto label_550504;
        case 0x550508u: goto label_550508;
        case 0x55050cu: goto label_55050c;
        case 0x550510u: goto label_550510;
        case 0x550514u: goto label_550514;
        case 0x550518u: goto label_550518;
        case 0x55051cu: goto label_55051c;
        case 0x550520u: goto label_550520;
        case 0x550524u: goto label_550524;
        case 0x550528u: goto label_550528;
        case 0x55052cu: goto label_55052c;
        case 0x550530u: goto label_550530;
        case 0x550534u: goto label_550534;
        case 0x550538u: goto label_550538;
        case 0x55053cu: goto label_55053c;
        case 0x550540u: goto label_550540;
        case 0x550544u: goto label_550544;
        case 0x550548u: goto label_550548;
        case 0x55054cu: goto label_55054c;
        case 0x550550u: goto label_550550;
        case 0x550554u: goto label_550554;
        case 0x550558u: goto label_550558;
        case 0x55055cu: goto label_55055c;
        case 0x550560u: goto label_550560;
        case 0x550564u: goto label_550564;
        case 0x550568u: goto label_550568;
        case 0x55056cu: goto label_55056c;
        case 0x550570u: goto label_550570;
        case 0x550574u: goto label_550574;
        case 0x550578u: goto label_550578;
        case 0x55057cu: goto label_55057c;
        case 0x550580u: goto label_550580;
        case 0x550584u: goto label_550584;
        case 0x550588u: goto label_550588;
        case 0x55058cu: goto label_55058c;
        case 0x550590u: goto label_550590;
        case 0x550594u: goto label_550594;
        case 0x550598u: goto label_550598;
        case 0x55059cu: goto label_55059c;
        case 0x5505a0u: goto label_5505a0;
        case 0x5505a4u: goto label_5505a4;
        case 0x5505a8u: goto label_5505a8;
        case 0x5505acu: goto label_5505ac;
        case 0x5505b0u: goto label_5505b0;
        case 0x5505b4u: goto label_5505b4;
        case 0x5505b8u: goto label_5505b8;
        case 0x5505bcu: goto label_5505bc;
        case 0x5505c0u: goto label_5505c0;
        case 0x5505c4u: goto label_5505c4;
        case 0x5505c8u: goto label_5505c8;
        case 0x5505ccu: goto label_5505cc;
        case 0x5505d0u: goto label_5505d0;
        case 0x5505d4u: goto label_5505d4;
        case 0x5505d8u: goto label_5505d8;
        case 0x5505dcu: goto label_5505dc;
        case 0x5505e0u: goto label_5505e0;
        case 0x5505e4u: goto label_5505e4;
        case 0x5505e8u: goto label_5505e8;
        case 0x5505ecu: goto label_5505ec;
        case 0x5505f0u: goto label_5505f0;
        case 0x5505f4u: goto label_5505f4;
        case 0x5505f8u: goto label_5505f8;
        case 0x5505fcu: goto label_5505fc;
        case 0x550600u: goto label_550600;
        case 0x550604u: goto label_550604;
        case 0x550608u: goto label_550608;
        case 0x55060cu: goto label_55060c;
        case 0x550610u: goto label_550610;
        case 0x550614u: goto label_550614;
        case 0x550618u: goto label_550618;
        case 0x55061cu: goto label_55061c;
        case 0x550620u: goto label_550620;
        case 0x550624u: goto label_550624;
        case 0x550628u: goto label_550628;
        case 0x55062cu: goto label_55062c;
        case 0x550630u: goto label_550630;
        case 0x550634u: goto label_550634;
        case 0x550638u: goto label_550638;
        case 0x55063cu: goto label_55063c;
        case 0x550640u: goto label_550640;
        case 0x550644u: goto label_550644;
        case 0x550648u: goto label_550648;
        case 0x55064cu: goto label_55064c;
        case 0x550650u: goto label_550650;
        case 0x550654u: goto label_550654;
        case 0x550658u: goto label_550658;
        case 0x55065cu: goto label_55065c;
        case 0x550660u: goto label_550660;
        case 0x550664u: goto label_550664;
        case 0x550668u: goto label_550668;
        case 0x55066cu: goto label_55066c;
        case 0x550670u: goto label_550670;
        case 0x550674u: goto label_550674;
        case 0x550678u: goto label_550678;
        case 0x55067cu: goto label_55067c;
        case 0x550680u: goto label_550680;
        case 0x550684u: goto label_550684;
        case 0x550688u: goto label_550688;
        case 0x55068cu: goto label_55068c;
        case 0x550690u: goto label_550690;
        case 0x550694u: goto label_550694;
        case 0x550698u: goto label_550698;
        case 0x55069cu: goto label_55069c;
        case 0x5506a0u: goto label_5506a0;
        case 0x5506a4u: goto label_5506a4;
        case 0x5506a8u: goto label_5506a8;
        case 0x5506acu: goto label_5506ac;
        case 0x5506b0u: goto label_5506b0;
        case 0x5506b4u: goto label_5506b4;
        case 0x5506b8u: goto label_5506b8;
        case 0x5506bcu: goto label_5506bc;
        case 0x5506c0u: goto label_5506c0;
        case 0x5506c4u: goto label_5506c4;
        case 0x5506c8u: goto label_5506c8;
        case 0x5506ccu: goto label_5506cc;
        case 0x5506d0u: goto label_5506d0;
        case 0x5506d4u: goto label_5506d4;
        case 0x5506d8u: goto label_5506d8;
        case 0x5506dcu: goto label_5506dc;
        case 0x5506e0u: goto label_5506e0;
        case 0x5506e4u: goto label_5506e4;
        case 0x5506e8u: goto label_5506e8;
        case 0x5506ecu: goto label_5506ec;
        case 0x5506f0u: goto label_5506f0;
        case 0x5506f4u: goto label_5506f4;
        case 0x5506f8u: goto label_5506f8;
        case 0x5506fcu: goto label_5506fc;
        case 0x550700u: goto label_550700;
        case 0x550704u: goto label_550704;
        case 0x550708u: goto label_550708;
        case 0x55070cu: goto label_55070c;
        case 0x550710u: goto label_550710;
        case 0x550714u: goto label_550714;
        case 0x550718u: goto label_550718;
        case 0x55071cu: goto label_55071c;
        case 0x550720u: goto label_550720;
        case 0x550724u: goto label_550724;
        case 0x550728u: goto label_550728;
        case 0x55072cu: goto label_55072c;
        case 0x550730u: goto label_550730;
        case 0x550734u: goto label_550734;
        case 0x550738u: goto label_550738;
        case 0x55073cu: goto label_55073c;
        case 0x550740u: goto label_550740;
        case 0x550744u: goto label_550744;
        case 0x550748u: goto label_550748;
        case 0x55074cu: goto label_55074c;
        case 0x550750u: goto label_550750;
        case 0x550754u: goto label_550754;
        case 0x550758u: goto label_550758;
        case 0x55075cu: goto label_55075c;
        case 0x550760u: goto label_550760;
        case 0x550764u: goto label_550764;
        case 0x550768u: goto label_550768;
        case 0x55076cu: goto label_55076c;
        case 0x550770u: goto label_550770;
        case 0x550774u: goto label_550774;
        case 0x550778u: goto label_550778;
        case 0x55077cu: goto label_55077c;
        case 0x550780u: goto label_550780;
        case 0x550784u: goto label_550784;
        case 0x550788u: goto label_550788;
        case 0x55078cu: goto label_55078c;
        case 0x550790u: goto label_550790;
        case 0x550794u: goto label_550794;
        case 0x550798u: goto label_550798;
        case 0x55079cu: goto label_55079c;
        case 0x5507a0u: goto label_5507a0;
        case 0x5507a4u: goto label_5507a4;
        case 0x5507a8u: goto label_5507a8;
        case 0x5507acu: goto label_5507ac;
        case 0x5507b0u: goto label_5507b0;
        case 0x5507b4u: goto label_5507b4;
        case 0x5507b8u: goto label_5507b8;
        case 0x5507bcu: goto label_5507bc;
        case 0x5507c0u: goto label_5507c0;
        case 0x5507c4u: goto label_5507c4;
        case 0x5507c8u: goto label_5507c8;
        case 0x5507ccu: goto label_5507cc;
        case 0x5507d0u: goto label_5507d0;
        case 0x5507d4u: goto label_5507d4;
        case 0x5507d8u: goto label_5507d8;
        case 0x5507dcu: goto label_5507dc;
        case 0x5507e0u: goto label_5507e0;
        case 0x5507e4u: goto label_5507e4;
        case 0x5507e8u: goto label_5507e8;
        case 0x5507ecu: goto label_5507ec;
        case 0x5507f0u: goto label_5507f0;
        case 0x5507f4u: goto label_5507f4;
        case 0x5507f8u: goto label_5507f8;
        case 0x5507fcu: goto label_5507fc;
        case 0x550800u: goto label_550800;
        case 0x550804u: goto label_550804;
        case 0x550808u: goto label_550808;
        case 0x55080cu: goto label_55080c;
        case 0x550810u: goto label_550810;
        case 0x550814u: goto label_550814;
        case 0x550818u: goto label_550818;
        case 0x55081cu: goto label_55081c;
        case 0x550820u: goto label_550820;
        case 0x550824u: goto label_550824;
        case 0x550828u: goto label_550828;
        case 0x55082cu: goto label_55082c;
        case 0x550830u: goto label_550830;
        case 0x550834u: goto label_550834;
        case 0x550838u: goto label_550838;
        case 0x55083cu: goto label_55083c;
        case 0x550840u: goto label_550840;
        case 0x550844u: goto label_550844;
        case 0x550848u: goto label_550848;
        case 0x55084cu: goto label_55084c;
        case 0x550850u: goto label_550850;
        case 0x550854u: goto label_550854;
        case 0x550858u: goto label_550858;
        case 0x55085cu: goto label_55085c;
        case 0x550860u: goto label_550860;
        case 0x550864u: goto label_550864;
        case 0x550868u: goto label_550868;
        case 0x55086cu: goto label_55086c;
        case 0x550870u: goto label_550870;
        case 0x550874u: goto label_550874;
        case 0x550878u: goto label_550878;
        case 0x55087cu: goto label_55087c;
        case 0x550880u: goto label_550880;
        case 0x550884u: goto label_550884;
        case 0x550888u: goto label_550888;
        case 0x55088cu: goto label_55088c;
        case 0x550890u: goto label_550890;
        case 0x550894u: goto label_550894;
        case 0x550898u: goto label_550898;
        case 0x55089cu: goto label_55089c;
        case 0x5508a0u: goto label_5508a0;
        case 0x5508a4u: goto label_5508a4;
        case 0x5508a8u: goto label_5508a8;
        case 0x5508acu: goto label_5508ac;
        default: break;
    }

    ctx->pc = 0x54ffd0u;

label_54ffd0:
    // 0x54ffd0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x54ffd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_54ffd4:
    // 0x54ffd4: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x54ffd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_54ffd8:
    // 0x54ffd8: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x54ffd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_54ffdc:
    // 0x54ffdc: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x54ffdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
label_54ffe0:
    // 0x54ffe0: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x54ffe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_54ffe4:
    // 0x54ffe4: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x54ffe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_54ffe8:
    // 0x54ffe8: 0x3c170067  lui         $s7, 0x67
    ctx->pc = 0x54ffe8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)103 << 16));
label_54ffec:
    // 0x54ffec: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x54ffecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_54fff0:
    // 0x54fff0: 0x26f7ead0  addiu       $s7, $s7, -0x1530
    ctx->pc = 0x54fff0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961872));
label_54fff4:
    // 0x54fff4: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x54fff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_54fff8:
    // 0x54fff8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x54fff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_54fffc:
    // 0x54fffc: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x54fffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_550000:
    // 0x550000: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x550000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_550004:
    // 0x550004: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x550004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_550008:
    // 0x550008: 0x8454eaf0  lh          $s4, -0x1510($v0)
    ctx->pc = 0x550008u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294961904)));
label_55000c:
    // 0x55000c: 0xe7ba0028  swc1        $f26, 0x28($sp)
    ctx->pc = 0x55000cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_550010:
    // 0x550010: 0xe7b90024  swc1        $f25, 0x24($sp)
    ctx->pc = 0x550010u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_550014:
    // 0x550014: 0xe7b80020  swc1        $f24, 0x20($sp)
    ctx->pc = 0x550014u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_550018:
    // 0x550018: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x550018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_55001c:
    // 0x55001c: 0xe7b7001c  swc1        $f23, 0x1C($sp)
    ctx->pc = 0x55001cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_550020:
    // 0x550020: 0x8453eaf2  lh          $s3, -0x150E($v0)
    ctx->pc = 0x550020u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294961906)));
label_550024:
    // 0x550024: 0xe7b60018  swc1        $f22, 0x18($sp)
    ctx->pc = 0x550024u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_550028:
    // 0x550028: 0xe7b50014  swc1        $f21, 0x14($sp)
    ctx->pc = 0x550028u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_55002c:
    // 0x55002c: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x55002cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_550030:
    // 0x550030: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x550030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_550034:
    // 0x550034: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x550034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_550038:
    // 0x550038: 0x90420029  lbu         $v0, 0x29($v0)
    ctx->pc = 0x550038u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
label_55003c:
    // 0x55003c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_550040:
    if (ctx->pc == 0x550040u) {
        ctx->pc = 0x550040u;
            // 0x550040: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x550044u;
        goto label_550044;
    }
    ctx->pc = 0x55003Cu;
    {
        const bool branch_taken_0x55003c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x550040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55003Cu;
            // 0x550040: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55003c) {
            ctx->pc = 0x550048u;
            goto label_550048;
        }
    }
    ctx->pc = 0x550044u;
label_550044:
    // 0x550044: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x550044u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_550048:
    // 0x550048: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x550048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_55004c:
    // 0x55004c: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x55004cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
label_550050:
    // 0x550050: 0x9451dab0  lhu         $s1, -0x2550($v0)
    ctx->pc = 0x550050u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957744)));
label_550054:
    // 0x550054: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x550054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_550058:
    // 0x550058: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x550058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_55005c:
    // 0x55005c: 0x9450dab2  lhu         $s0, -0x254E($v0)
    ctx->pc = 0x55005cu;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957746)));
label_550060:
    // 0x550060: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x550060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_550064:
    // 0x550064: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x550064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_550068:
    // 0x550068: 0xc0506ac  jal         func_141AB0
label_55006c:
    if (ctx->pc == 0x55006Cu) {
        ctx->pc = 0x55006Cu;
            // 0x55006c: 0x2652ec20  addiu       $s2, $s2, -0x13E0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962208));
        ctx->pc = 0x550070u;
        goto label_550070;
    }
    ctx->pc = 0x550068u;
    SET_GPR_U32(ctx, 31, 0x550070u);
    ctx->pc = 0x55006Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x550068u;
            // 0x55006c: 0x2652ec20  addiu       $s2, $s2, -0x13E0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x550070u; }
        if (ctx->pc != 0x550070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x550070u; }
        if (ctx->pc != 0x550070u) { return; }
    }
    ctx->pc = 0x550070u;
label_550070:
    // 0x550070: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x550070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_550074:
    // 0x550074: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x550074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_550078:
    // 0x550078: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x550078u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_55007c:
    // 0x55007c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x55007cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_550080:
    // 0x550080: 0x320f809  jalr        $t9
label_550084:
    if (ctx->pc == 0x550084u) {
        ctx->pc = 0x550084u;
            // 0x550084: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x550088u;
        goto label_550088;
    }
    ctx->pc = 0x550080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x550088u);
        ctx->pc = 0x550084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x550080u;
            // 0x550084: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x550088u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x550088u; }
            if (ctx->pc != 0x550088u) { return; }
        }
        }
    }
    ctx->pc = 0x550088u;
label_550088:
    // 0x550088: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x550088u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55008c:
    // 0x55008c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x55008cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_550090:
    // 0x550090: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x550090u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_550094:
    // 0x550094: 0x24a5ec60  addiu       $a1, $a1, -0x13A0
    ctx->pc = 0x550094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962272));
label_550098:
    // 0x550098: 0x86e30026  lh          $v1, 0x26($s7)
    ctx->pc = 0x550098u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 38)));
label_55009c:
    // 0x55009c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x55009cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_5500a0:
    // 0x5500a0: 0x2484ec80  addiu       $a0, $a0, -0x1380
    ctx->pc = 0x5500a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962304));
label_5500a4:
    // 0x5500a4: 0x86e20020  lh          $v0, 0x20($s7)
    ctx->pc = 0x5500a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 32)));
label_5500a8:
    // 0x5500a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5500a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5500ac:
    // 0x5500ac: 0x0  nop
    ctx->pc = 0x5500acu;
    // NOP
label_5500b0:
    // 0x5500b0: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x5500b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_5500b4:
    // 0x5500b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5500b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5500b8:
    // 0x5500b8: 0x0  nop
    ctx->pc = 0x5500b8u;
    // NOP
label_5500bc:
    // 0x5500bc: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x5500bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_5500c0:
    // 0x5500c0: 0xc4b9000c  lwc1        $f25, 0xC($a1)
    ctx->pc = 0x5500c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_5500c4:
    // 0x5500c4: 0xc4b60008  lwc1        $f22, 0x8($a1)
    ctx->pc = 0x5500c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_5500c8:
    // 0x5500c8: 0xc498000c  lwc1        $f24, 0xC($a0)
    ctx->pc = 0x5500c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_5500cc:
    // 0x5500cc: 0x461918c1  sub.s       $f3, $f3, $f25
    ctx->pc = 0x5500ccu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[25]);
label_5500d0:
    // 0x5500d0: 0x46181dc1  sub.s       $f23, $f3, $f24
    ctx->pc = 0x5500d0u;
    ctx->f[23] = FPU_SUB_S(ctx->f[3], ctx->f[24]);
label_5500d4:
    // 0x5500d4: 0x46161080  add.s       $f2, $f2, $f22
    ctx->pc = 0x5500d4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[22]);
label_5500d8:
    // 0x5500d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x5500d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5500dc:
    // 0x5500dc: 0x0  nop
    ctx->pc = 0x5500dcu;
    // NOP
label_5500e0:
    // 0x5500e0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x5500e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_5500e4:
    // 0x5500e4: 0x46000107  neg.s       $f4, $f0
    ctx->pc = 0x5500e4u;
    ctx->f[4] = FPU_NEG_S(ctx->f[0]);
label_5500e8:
    // 0x5500e8: 0xc6a30078  lwc1        $f3, 0x78($s5)
    ctx->pc = 0x5500e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_5500ec:
    // 0x5500ec: 0xc6e2002c  lwc1        $f2, 0x2C($s7)
    ctx->pc = 0x5500ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_5500f0:
    // 0x5500f0: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x5500f0u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5500f4:
    // 0x5500f4: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x5500f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_5500f8:
    // 0x5500f8: 0x46021e83  div.s       $f26, $f3, $f2
    ctx->pc = 0x5500f8u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[26] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[26] = ctx->f[3] / ctx->f[2];
label_5500fc:
    // 0x5500fc: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x5500fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_550100:
    // 0x550100: 0x461a0d00  add.s       $f20, $f1, $f26
    ctx->pc = 0x550100u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[26]);
label_550104:
    // 0x550104: 0x4614b540  add.s       $f21, $f22, $f20
    ctx->pc = 0x550104u;
    ctx->f[21] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
label_550108:
    // 0x550108: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_55010c:
    if (ctx->pc == 0x55010Cu) {
        ctx->pc = 0x55010Cu;
            // 0x55010c: 0x46196bc0  add.s       $f15, $f13, $f25 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[25]);
        ctx->pc = 0x550110u;
        goto label_550110;
    }
    ctx->pc = 0x550108u;
    {
        const bool branch_taken_0x550108 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x55010Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x550108u;
            // 0x55010c: 0x46196bc0  add.s       $f15, $f13, $f25 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[25]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x550108) {
            ctx->pc = 0x55011Cu;
            goto label_55011c;
        }
    }
    ctx->pc = 0x550110u;
label_550110:
    // 0x550110: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x550110u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_550114:
    // 0x550114: 0x10000008  b           . + 4 + (0x8 << 2)
label_550118:
    if (ctx->pc == 0x550118u) {
        ctx->pc = 0x550118u;
            // 0x550118: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x55011Cu;
        goto label_55011c;
    }
    ctx->pc = 0x550114u;
    {
        const bool branch_taken_0x550114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x550118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x550114u;
            // 0x550118: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x550114) {
            ctx->pc = 0x550138u;
            goto label_550138;
        }
    }
    ctx->pc = 0x55011Cu;
label_55011c:
    // 0x55011c: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x55011cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_550120:
    // 0x550120: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x550120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_550124:
    // 0x550124: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x550124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_550128:
    // 0x550128: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x550128u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55012c:
    // 0x55012c: 0x0  nop
    ctx->pc = 0x55012cu;
    // NOP
label_550130:
    // 0x550130: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x550130u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_550134:
    // 0x550134: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x550134u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_550138:
    // 0x550138: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_55013c:
    if (ctx->pc == 0x55013Cu) {
        ctx->pc = 0x55013Cu;
            // 0x55013c: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x550140u;
        goto label_550140;
    }
    ctx->pc = 0x550138u;
    {
        const bool branch_taken_0x550138 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x550138) {
            ctx->pc = 0x55013Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x550138u;
            // 0x55013c: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55014Cu;
            goto label_55014c;
        }
    }
    ctx->pc = 0x550140u;
label_550140:
    // 0x550140: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x550140u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_550144:
    // 0x550144: 0x10000007  b           . + 4 + (0x7 << 2)
label_550148:
    if (ctx->pc == 0x550148u) {
        ctx->pc = 0x550148u;
            // 0x550148: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x55014Cu;
        goto label_55014c;
    }
    ctx->pc = 0x550144u;
    {
        const bool branch_taken_0x550144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x550148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x550144u;
            // 0x550148: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x550144) {
            ctx->pc = 0x550164u;
            goto label_550164;
        }
    }
    ctx->pc = 0x55014Cu;
label_55014c:
    // 0x55014c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x55014cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_550150:
    // 0x550150: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x550150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_550154:
    // 0x550154: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x550154u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_550158:
    // 0x550158: 0x0  nop
    ctx->pc = 0x550158u;
    // NOP
label_55015c:
    // 0x55015c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x55015cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_550160:
    // 0x550160: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x550160u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_550164:
    // 0x550164: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x550164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_550168:
    // 0x550168: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x550168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_55016c:
    // 0x55016c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x55016cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_550170:
    // 0x550170: 0x2406ffd9  addiu       $a2, $zero, -0x27
    ctx->pc = 0x550170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967257));
label_550174:
    // 0x550174: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x550174u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_550178:
    // 0x550178: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x550178u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55017c:
    // 0x55017c: 0xc0bc284  jal         func_2F0A10
label_550180:
    if (ctx->pc == 0x550180u) {
        ctx->pc = 0x550180u;
            // 0x550180: 0x4600ab86  mov.s       $f14, $f21 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x550184u;
        goto label_550184;
    }
    ctx->pc = 0x55017Cu;
    SET_GPR_U32(ctx, 31, 0x550184u);
    ctx->pc = 0x550180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55017Cu;
            // 0x550180: 0x4600ab86  mov.s       $f14, $f21 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x550184u; }
        if (ctx->pc != 0x550184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x550184u; }
        if (ctx->pc != 0x550184u) { return; }
    }
    ctx->pc = 0x550184u;
label_550184:
    // 0x550184: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x550184u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_550188:
    // 0x550188: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x550188u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_55018c:
    // 0x55018c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x55018cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_550190:
    // 0x550190: 0x24a5ec70  addiu       $a1, $a1, -0x1390
    ctx->pc = 0x550190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962288));
label_550194:
    // 0x550194: 0x46190000  add.s       $f0, $f0, $f25
    ctx->pc = 0x550194u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[25]);
label_550198:
    // 0x550198: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x550198u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_55019c:
    // 0x55019c: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x55019cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_5501a0:
    // 0x5501a0: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x5501a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
label_5501a4:
    // 0x5501a4: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_5501a8:
    if (ctx->pc == 0x5501A8u) {
        ctx->pc = 0x5501A8u;
            // 0x5501a8: 0x46176bc0  add.s       $f15, $f13, $f23 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[23]);
        ctx->pc = 0x5501ACu;
        goto label_5501ac;
    }
    ctx->pc = 0x5501A4u;
    {
        const bool branch_taken_0x5501a4 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x5501A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5501A4u;
            // 0x5501a8: 0x46176bc0  add.s       $f15, $f13, $f23 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x5501a4) {
            ctx->pc = 0x5501B8u;
            goto label_5501b8;
        }
    }
    ctx->pc = 0x5501ACu;
label_5501ac:
    // 0x5501ac: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x5501acu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5501b0:
    // 0x5501b0: 0x10000008  b           . + 4 + (0x8 << 2)
label_5501b4:
    if (ctx->pc == 0x5501B4u) {
        ctx->pc = 0x5501B4u;
            // 0x5501b4: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x5501B8u;
        goto label_5501b8;
    }
    ctx->pc = 0x5501B0u;
    {
        const bool branch_taken_0x5501b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5501B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5501B0u;
            // 0x5501b4: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5501b0) {
            ctx->pc = 0x5501D4u;
            goto label_5501d4;
        }
    }
    ctx->pc = 0x5501B8u;
label_5501b8:
    // 0x5501b8: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x5501b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_5501bc:
    // 0x5501bc: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x5501bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_5501c0:
    // 0x5501c0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x5501c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_5501c4:
    // 0x5501c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5501c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5501c8:
    // 0x5501c8: 0x0  nop
    ctx->pc = 0x5501c8u;
    // NOP
label_5501cc:
    // 0x5501cc: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x5501ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_5501d0:
    // 0x5501d0: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x5501d0u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_5501d4:
    // 0x5501d4: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_5501d8:
    if (ctx->pc == 0x5501D8u) {
        ctx->pc = 0x5501D8u;
            // 0x5501d8: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x5501DCu;
        goto label_5501dc;
    }
    ctx->pc = 0x5501D4u;
    {
        const bool branch_taken_0x5501d4 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x5501d4) {
            ctx->pc = 0x5501D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5501D4u;
            // 0x5501d8: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5501E8u;
            goto label_5501e8;
        }
    }
    ctx->pc = 0x5501DCu;
label_5501dc:
    // 0x5501dc: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x5501dcu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5501e0:
    // 0x5501e0: 0x10000007  b           . + 4 + (0x7 << 2)
label_5501e4:
    if (ctx->pc == 0x5501E4u) {
        ctx->pc = 0x5501E4u;
            // 0x5501e4: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x5501E8u;
        goto label_5501e8;
    }
    ctx->pc = 0x5501E0u;
    {
        const bool branch_taken_0x5501e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5501E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5501E0u;
            // 0x5501e4: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5501e0) {
            ctx->pc = 0x550200u;
            goto label_550200;
        }
    }
    ctx->pc = 0x5501E8u;
label_5501e8:
    // 0x5501e8: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x5501e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_5501ec:
    // 0x5501ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x5501ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_5501f0:
    // 0x5501f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5501f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5501f4:
    // 0x5501f4: 0x0  nop
    ctx->pc = 0x5501f4u;
    // NOP
label_5501f8:
    // 0x5501f8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x5501f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_5501fc:
    // 0x5501fc: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x5501fcu;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_550200:
    // 0x550200: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x550200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_550204:
    // 0x550204: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x550204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_550208:
    // 0x550208: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x550208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_55020c:
    // 0x55020c: 0x2406ffd9  addiu       $a2, $zero, -0x27
    ctx->pc = 0x55020cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967257));
label_550210:
    // 0x550210: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x550210u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_550214:
    // 0x550214: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x550214u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_550218:
    // 0x550218: 0xc0bc284  jal         func_2F0A10
label_55021c:
    if (ctx->pc == 0x55021Cu) {
        ctx->pc = 0x55021Cu;
            // 0x55021c: 0x4600ab86  mov.s       $f14, $f21 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x550220u;
        goto label_550220;
    }
    ctx->pc = 0x550218u;
    SET_GPR_U32(ctx, 31, 0x550220u);
    ctx->pc = 0x55021Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x550218u;
            // 0x55021c: 0x4600ab86  mov.s       $f14, $f21 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x550220u; }
        if (ctx->pc != 0x550220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x550220u; }
        if (ctx->pc != 0x550220u) { return; }
    }
    ctx->pc = 0x550220u;
label_550220:
    // 0x550220: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x550220u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_550224:
    // 0x550224: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x550224u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_550228:
    // 0x550228: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x550228u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_55022c:
    // 0x55022c: 0x24a5ec80  addiu       $a1, $a1, -0x1380
    ctx->pc = 0x55022cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962304));
label_550230:
    // 0x550230: 0x46170000  add.s       $f0, $f0, $f23
    ctx->pc = 0x550230u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
label_550234:
    // 0x550234: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x550234u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_550238:
    // 0x550238: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x550238u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_55023c:
    // 0x55023c: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_550240:
    if (ctx->pc == 0x550240u) {
        ctx->pc = 0x550240u;
            // 0x550240: 0x46186bc0  add.s       $f15, $f13, $f24 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[24]);
        ctx->pc = 0x550244u;
        goto label_550244;
    }
    ctx->pc = 0x55023Cu;
    {
        const bool branch_taken_0x55023c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x550240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55023Cu;
            // 0x550240: 0x46186bc0  add.s       $f15, $f13, $f24 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x55023c) {
            ctx->pc = 0x550250u;
            goto label_550250;
        }
    }
    ctx->pc = 0x550244u;
label_550244:
    // 0x550244: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x550244u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_550248:
    // 0x550248: 0x10000008  b           . + 4 + (0x8 << 2)
label_55024c:
    if (ctx->pc == 0x55024Cu) {
        ctx->pc = 0x55024Cu;
            // 0x55024c: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x550250u;
        goto label_550250;
    }
    ctx->pc = 0x550248u;
    {
        const bool branch_taken_0x550248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55024Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x550248u;
            // 0x55024c: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x550248) {
            ctx->pc = 0x55026Cu;
            goto label_55026c;
        }
    }
    ctx->pc = 0x550250u;
label_550250:
    // 0x550250: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x550250u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_550254:
    // 0x550254: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x550254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_550258:
    // 0x550258: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x550258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_55025c:
    // 0x55025c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55025cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_550260:
    // 0x550260: 0x0  nop
    ctx->pc = 0x550260u;
    // NOP
label_550264:
    // 0x550264: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x550264u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_550268:
    // 0x550268: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x550268u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_55026c:
    // 0x55026c: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_550270:
    if (ctx->pc == 0x550270u) {
        ctx->pc = 0x550270u;
            // 0x550270: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x550274u;
        goto label_550274;
    }
    ctx->pc = 0x55026Cu;
    {
        const bool branch_taken_0x55026c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x55026c) {
            ctx->pc = 0x550270u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55026Cu;
            // 0x550270: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x550280u;
            goto label_550280;
        }
    }
    ctx->pc = 0x550274u;
label_550274:
    // 0x550274: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x550274u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_550278:
    // 0x550278: 0x10000007  b           . + 4 + (0x7 << 2)
label_55027c:
    if (ctx->pc == 0x55027Cu) {
        ctx->pc = 0x55027Cu;
            // 0x55027c: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x550280u;
        goto label_550280;
    }
    ctx->pc = 0x550278u;
    {
        const bool branch_taken_0x550278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55027Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x550278u;
            // 0x55027c: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x550278) {
            ctx->pc = 0x550298u;
            goto label_550298;
        }
    }
    ctx->pc = 0x550280u;
label_550280:
    // 0x550280: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x550280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_550284:
    // 0x550284: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x550284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_550288:
    // 0x550288: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x550288u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55028c:
    // 0x55028c: 0x0  nop
    ctx->pc = 0x55028cu;
    // NOP
label_550290:
    // 0x550290: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x550290u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_550294:
    // 0x550294: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x550294u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_550298:
    // 0x550298: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x550298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_55029c:
    // 0x55029c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x55029cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_5502a0:
    // 0x5502a0: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x5502a0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
label_5502a4:
    // 0x5502a4: 0x2406ffd9  addiu       $a2, $zero, -0x27
    ctx->pc = 0x5502a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967257));
label_5502a8:
    // 0x5502a8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x5502a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_5502ac:
    // 0x5502ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x5502acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5502b0:
    // 0x5502b0: 0xc0bc284  jal         func_2F0A10
label_5502b4:
    if (ctx->pc == 0x5502B4u) {
        ctx->pc = 0x5502B4u;
            // 0x5502b4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x5502B8u;
        goto label_5502b8;
    }
    ctx->pc = 0x5502B0u;
    SET_GPR_U32(ctx, 31, 0x5502B8u);
    ctx->pc = 0x5502B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5502B0u;
            // 0x5502b4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5502B8u; }
        if (ctx->pc != 0x5502B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5502B8u; }
        if (ctx->pc != 0x5502B8u) { return; }
    }
    ctx->pc = 0x5502B8u;
label_5502b8:
    // 0x5502b8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x5502b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_5502bc:
    // 0x5502bc: 0x86e30026  lh          $v1, 0x26($s7)
    ctx->pc = 0x5502bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 38)));
label_5502c0:
    // 0x5502c0: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x5502c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_5502c4:
    // 0x5502c4: 0xc6a1007c  lwc1        $f1, 0x7C($s5)
    ctx->pc = 0x5502c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5502c8:
    // 0x5502c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5502c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5502cc:
    // 0x5502cc: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x5502ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_5502d0:
    // 0x5502d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x5502d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_5502d4:
    // 0x5502d4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x5502d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_5502d8:
    // 0x5502d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x5502d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5502dc:
    // 0x5502dc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_5502e0:
    if (ctx->pc == 0x5502E0u) {
        ctx->pc = 0x5502E0u;
            // 0x5502e0: 0xe6a1007c  swc1        $f1, 0x7C($s5) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 124), bits); }
        ctx->pc = 0x5502E4u;
        goto label_5502e4;
    }
    ctx->pc = 0x5502DCu;
    {
        const bool branch_taken_0x5502dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x5502E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5502DCu;
            // 0x5502e0: 0xe6a1007c  swc1        $f1, 0x7C($s5) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5502dc) {
            ctx->pc = 0x5502ECu;
            goto label_5502ec;
        }
    }
    ctx->pc = 0x5502E4u;
label_5502e4:
    // 0x5502e4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x5502e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_5502e8:
    // 0x5502e8: 0xe6a0007c  swc1        $f0, 0x7C($s5)
    ctx->pc = 0x5502e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 124), bits); }
label_5502ec:
    // 0x5502ec: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x5502ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_5502f0:
    // 0x5502f0: 0x86f30022  lh          $s3, 0x22($s7)
    ctx->pc = 0x5502f0u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 34)));
label_5502f4:
    // 0x5502f4: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x5502f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_5502f8:
    // 0x5502f8: 0x90420029  lbu         $v0, 0x29($v0)
    ctx->pc = 0x5502f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
label_5502fc:
    // 0x5502fc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_550300:
    if (ctx->pc == 0x550300u) {
        ctx->pc = 0x550300u;
            // 0x550300: 0x26540070  addiu       $s4, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->pc = 0x550304u;
        goto label_550304;
    }
    ctx->pc = 0x5502FCu;
    {
        const bool branch_taken_0x5502fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x550300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5502FCu;
            // 0x550300: 0x26540070  addiu       $s4, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5502fc) {
            ctx->pc = 0x550308u;
            goto label_550308;
        }
    }
    ctx->pc = 0x550304u;
label_550304:
    // 0x550304: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x550304u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_550308:
    // 0x550308: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x550308u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55030c:
    // 0x55030c: 0x86e40026  lh          $a0, 0x26($s7)
    ctx->pc = 0x55030cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 38)));
label_550310:
    // 0x550310: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x550310u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_550314:
    // 0x550314: 0xc6a1007c  lwc1        $f1, 0x7C($s5)
    ctx->pc = 0x550314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_550318:
    // 0x550318: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x550318u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55031c:
    // 0x55031c: 0x0  nop
    ctx->pc = 0x55031cu;
    // NOP
label_550320:
    // 0x550320: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x550320u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_550324:
    // 0x550324: 0x46011341  sub.s       $f13, $f2, $f1
    ctx->pc = 0x550324u;
    ctx->f[13] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_550328:
    // 0x550328: 0x4614b540  add.s       $f21, $f22, $f20
    ctx->pc = 0x550328u;
    ctx->f[21] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
label_55032c:
    // 0x55032c: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_550330:
    if (ctx->pc == 0x550330u) {
        ctx->pc = 0x550330u;
            // 0x550330: 0x460d03c0  add.s       $f15, $f0, $f13 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
        ctx->pc = 0x550334u;
        goto label_550334;
    }
    ctx->pc = 0x55032Cu;
    {
        const bool branch_taken_0x55032c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x550330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55032Cu;
            // 0x550330: 0x460d03c0  add.s       $f15, $f0, $f13 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x55032c) {
            ctx->pc = 0x550340u;
            goto label_550340;
        }
    }
    ctx->pc = 0x550334u;
label_550334:
    // 0x550334: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x550334u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_550338:
    // 0x550338: 0x10000008  b           . + 4 + (0x8 << 2)
label_55033c:
    if (ctx->pc == 0x55033Cu) {
        ctx->pc = 0x55033Cu;
            // 0x55033c: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x550340u;
        goto label_550340;
    }
    ctx->pc = 0x550338u;
    {
        const bool branch_taken_0x550338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55033Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x550338u;
            // 0x55033c: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x550338) {
            ctx->pc = 0x55035Cu;
            goto label_55035c;
        }
    }
    ctx->pc = 0x550340u;
label_550340:
    // 0x550340: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x550340u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_550344:
    // 0x550344: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x550344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_550348:
    // 0x550348: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x550348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_55034c:
    // 0x55034c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55034cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_550350:
    // 0x550350: 0x0  nop
    ctx->pc = 0x550350u;
    // NOP
label_550354:
    // 0x550354: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x550354u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_550358:
    // 0x550358: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x550358u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_55035c:
    // 0x55035c: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_550360:
    if (ctx->pc == 0x550360u) {
        ctx->pc = 0x550360u;
            // 0x550360: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x550364u;
        goto label_550364;
    }
    ctx->pc = 0x55035Cu;
    {
        const bool branch_taken_0x55035c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x55035c) {
            ctx->pc = 0x550360u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55035Cu;
            // 0x550360: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x550370u;
            goto label_550370;
        }
    }
    ctx->pc = 0x550364u;
label_550364:
    // 0x550364: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x550364u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_550368:
    // 0x550368: 0x10000007  b           . + 4 + (0x7 << 2)
label_55036c:
    if (ctx->pc == 0x55036Cu) {
        ctx->pc = 0x55036Cu;
            // 0x55036c: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x550370u;
        goto label_550370;
    }
    ctx->pc = 0x550368u;
    {
        const bool branch_taken_0x550368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55036Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x550368u;
            // 0x55036c: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x550368) {
            ctx->pc = 0x550388u;
            goto label_550388;
        }
    }
    ctx->pc = 0x550370u;
label_550370:
    // 0x550370: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x550370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_550374:
    // 0x550374: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x550374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_550378:
    // 0x550378: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x550378u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55037c:
    // 0x55037c: 0x0  nop
    ctx->pc = 0x55037cu;
    // NOP
label_550380:
    // 0x550380: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x550380u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_550384:
    // 0x550384: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x550384u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_550388:
    // 0x550388: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x550388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
label_55038c:
    // 0x55038c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x55038cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_550390:
    // 0x550390: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x550390u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_550394:
    // 0x550394: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x550394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_550398:
    // 0x550398: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x550398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_55039c:
    // 0x55039c: 0x2406ffd9  addiu       $a2, $zero, -0x27
    ctx->pc = 0x55039cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967257));
label_5503a0:
    // 0x5503a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5503a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5503a4:
    // 0x5503a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x5503a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5503a8:
    // 0x5503a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x5503a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_5503ac:
    // 0x5503ac: 0xe7b50000  swc1        $f21, 0x0($sp)
    ctx->pc = 0x5503acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_5503b0:
    // 0x5503b0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x5503b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_5503b4:
    // 0x5503b4: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x5503b4u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5503b8:
    // 0x5503b8: 0x0  nop
    ctx->pc = 0x5503b8u;
    // NOP
label_5503bc:
    // 0x5503bc: 0x468004e0  cvt.s.w     $f19, $f0
    ctx->pc = 0x5503bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[19] = FPU_CVT_S_W(tmp); }
label_5503c0:
    // 0x5503c0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x5503c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_5503c4:
    // 0x5503c4: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x5503c4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
label_5503c8:
    // 0x5503c8: 0xc0bc228  jal         func_2F08A0
label_5503cc:
    if (ctx->pc == 0x5503CCu) {
        ctx->pc = 0x5503CCu;
            // 0x5503cc: 0x4600a486  mov.s       $f18, $f20 (Delay Slot)
        ctx->f[18] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x5503D0u;
        goto label_5503d0;
    }
    ctx->pc = 0x5503C8u;
    SET_GPR_U32(ctx, 31, 0x5503D0u);
    ctx->pc = 0x5503CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5503C8u;
            // 0x5503cc: 0x4600a486  mov.s       $f18, $f20 (Delay Slot)
        ctx->f[18] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F08A0u;
    if (runtime->hasFunction(0x2F08A0u)) {
        auto targetFn = runtime->lookupFunction(0x2F08A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5503D0u; }
        if (ctx->pc != 0x5503D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F08A0_0x2f08a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5503D0u; }
        if (ctx->pc != 0x5503D0u) { return; }
    }
    ctx->pc = 0x5503D0u;
label_5503d0:
    // 0x5503d0: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x5503d0u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5503d4:
    // 0x5503d4: 0x86e40026  lh          $a0, 0x26($s7)
    ctx->pc = 0x5503d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 38)));
label_5503d8:
    // 0x5503d8: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x5503d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_5503dc:
    // 0x5503dc: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x5503dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_5503e0:
    // 0x5503e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5503e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5503e4:
    // 0x5503e4: 0xc6a2007c  lwc1        $f2, 0x7C($s5)
    ctx->pc = 0x5503e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_5503e8:
    // 0x5503e8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x5503e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_5503ec:
    // 0x5503ec: 0x0  nop
    ctx->pc = 0x5503ecu;
    // NOP
label_5503f0:
    // 0x5503f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x5503f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_5503f4:
    // 0x5503f4: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x5503f4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_5503f8:
    // 0x5503f8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x5503f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_5503fc:
    // 0x5503fc: 0x46020b40  add.s       $f13, $f1, $f2
    ctx->pc = 0x5503fcu;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_550400:
    // 0x550400: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_550404:
    if (ctx->pc == 0x550404u) {
        ctx->pc = 0x550404u;
            // 0x550404: 0x460203c0  add.s       $f15, $f0, $f2 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->pc = 0x550408u;
        goto label_550408;
    }
    ctx->pc = 0x550400u;
    {
        const bool branch_taken_0x550400 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x550404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x550400u;
            // 0x550404: 0x460203c0  add.s       $f15, $f0, $f2 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x550400) {
            ctx->pc = 0x550414u;
            goto label_550414;
        }
    }
    ctx->pc = 0x550408u;
label_550408:
    // 0x550408: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x550408u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55040c:
    // 0x55040c: 0x10000008  b           . + 4 + (0x8 << 2)
label_550410:
    if (ctx->pc == 0x550410u) {
        ctx->pc = 0x550410u;
            // 0x550410: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x550414u;
        goto label_550414;
    }
    ctx->pc = 0x55040Cu;
    {
        const bool branch_taken_0x55040c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x550410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55040Cu;
            // 0x550410: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x55040c) {
            ctx->pc = 0x550430u;
            goto label_550430;
        }
    }
    ctx->pc = 0x550414u;
label_550414:
    // 0x550414: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x550414u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_550418:
    // 0x550418: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x550418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_55041c:
    // 0x55041c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x55041cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_550420:
    // 0x550420: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x550420u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_550424:
    // 0x550424: 0x0  nop
    ctx->pc = 0x550424u;
    // NOP
label_550428:
    // 0x550428: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x550428u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_55042c:
    // 0x55042c: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x55042cu;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_550430:
    // 0x550430: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_550434:
    if (ctx->pc == 0x550434u) {
        ctx->pc = 0x550434u;
            // 0x550434: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x550438u;
        goto label_550438;
    }
    ctx->pc = 0x550430u;
    {
        const bool branch_taken_0x550430 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x550430) {
            ctx->pc = 0x550434u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x550430u;
            // 0x550434: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x550444u;
            goto label_550444;
        }
    }
    ctx->pc = 0x550438u;
label_550438:
    // 0x550438: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x550438u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55043c:
    // 0x55043c: 0x10000007  b           . + 4 + (0x7 << 2)
label_550440:
    if (ctx->pc == 0x550440u) {
        ctx->pc = 0x550440u;
            // 0x550440: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x550444u;
        goto label_550444;
    }
    ctx->pc = 0x55043Cu;
    {
        const bool branch_taken_0x55043c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x550440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55043Cu;
            // 0x550440: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x55043c) {
            ctx->pc = 0x55045Cu;
            goto label_55045c;
        }
    }
    ctx->pc = 0x550444u;
label_550444:
    // 0x550444: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x550444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_550448:
    // 0x550448: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x550448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_55044c:
    // 0x55044c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55044cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_550450:
    // 0x550450: 0x0  nop
    ctx->pc = 0x550450u;
    // NOP
label_550454:
    // 0x550454: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x550454u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_550458:
    // 0x550458: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x550458u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_55045c:
    // 0x55045c: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x55045cu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_550460:
    // 0x550460: 0x2641021  addu        $v0, $s3, $a0
    ctx->pc = 0x550460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_550464:
    // 0x550464: 0x468004e0  cvt.s.w     $f19, $f0
    ctx->pc = 0x550464u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[19] = FPU_CVT_S_W(tmp); }
label_550468:
    // 0x550468: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x550468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_55046c:
    // 0x55046c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x55046cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_550470:
    // 0x550470: 0x2406ffd9  addiu       $a2, $zero, -0x27
    ctx->pc = 0x550470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967257));
label_550474:
    // 0x550474: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x550474u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_550478:
    // 0x550478: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x550478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55047c:
    // 0x55047c: 0x0  nop
    ctx->pc = 0x55047cu;
    // NOP
label_550480:
    // 0x550480: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x550480u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_550484:
    // 0x550484: 0xe7b50000  swc1        $f21, 0x0($sp)
    ctx->pc = 0x550484u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_550488:
    // 0x550488: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x550488u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_55048c:
    // 0x55048c: 0x4600a486  mov.s       $f18, $f20
    ctx->pc = 0x55048cu;
    ctx->f[18] = FPU_MOV_S(ctx->f[20]);
label_550490:
    // 0x550490: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x550490u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
label_550494:
    // 0x550494: 0xc0bc228  jal         func_2F08A0
label_550498:
    if (ctx->pc == 0x550498u) {
        ctx->pc = 0x550498u;
            // 0x550498: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->pc = 0x55049Cu;
        goto label_55049c;
    }
    ctx->pc = 0x550494u;
    SET_GPR_U32(ctx, 31, 0x55049Cu);
    ctx->pc = 0x550498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x550494u;
            // 0x550498: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F08A0u;
    if (runtime->hasFunction(0x2F08A0u)) {
        auto targetFn = runtime->lookupFunction(0x2F08A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55049Cu; }
        if (ctx->pc != 0x55049Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F08A0_0x2f08a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55049Cu; }
        if (ctx->pc != 0x55049Cu) { return; }
    }
    ctx->pc = 0x55049Cu;
label_55049c:
    // 0x55049c: 0x82a5005c  lb          $a1, 0x5C($s5)
    ctx->pc = 0x55049cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 92)));
label_5504a0:
    // 0x5504a0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x5504a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_5504a4:
    // 0x5504a4: 0x86a4005e  lh          $a0, 0x5E($s5)
    ctx->pc = 0x5504a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 94)));
label_5504a8:
    // 0x5504a8: 0x8c43dab8  lw          $v1, -0x2548($v0)
    ctx->pc = 0x5504a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957752)));
label_5504ac:
    // 0x5504ac: 0x86e70020  lh          $a3, 0x20($s7)
    ctx->pc = 0x5504acu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 32)));
label_5504b0:
    // 0x5504b0: 0xa44023  subu        $t0, $a1, $a0
    ctx->pc = 0x5504b0u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_5504b4:
    // 0x5504b4: 0x86e60028  lh          $a2, 0x28($s7)
    ctx->pc = 0x5504b4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 40)));
label_5504b8:
    // 0x5504b8: 0x86e40024  lh          $a0, 0x24($s7)
    ctx->pc = 0x5504b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 36)));
label_5504bc:
    // 0x5504bc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x5504bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_5504c0:
    // 0x5504c0: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x5504c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_5504c4:
    // 0x5504c4: 0x86e50022  lh          $a1, 0x22($s7)
    ctx->pc = 0x5504c4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 34)));
label_5504c8:
    // 0x5504c8: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x5504c8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
label_5504cc:
    // 0x5504cc: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x5504ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_5504d0:
    // 0x5504d0: 0x90420029  lbu         $v0, 0x29($v0)
    ctx->pc = 0x5504d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
label_5504d4:
    // 0x5504d4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x5504d4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5504d8:
    // 0x5504d8: 0x62043  sra         $a0, $a2, 1
    ctx->pc = 0x5504d8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 1));
label_5504dc:
    // 0x5504dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x5504dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_5504e0:
    // 0x5504e0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x5504e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_5504e4:
    // 0x5504e4: 0x4600d000  add.s       $f0, $f26, $f0
    ctx->pc = 0x5504e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[26], ctx->f[0]);
label_5504e8:
    // 0x5504e8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x5504e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_5504ec:
    // 0x5504ec: 0x441e0000  mfc1        $fp, $f0
    ctx->pc = 0x5504ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 30, bits); }
label_5504f0:
    // 0x5504f0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_5504f4:
    if (ctx->pc == 0x5504F4u) {
        ctx->pc = 0x5504F4u;
            // 0x5504f4: 0x64b021  addu        $s6, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->pc = 0x5504F8u;
        goto label_5504f8;
    }
    ctx->pc = 0x5504F0u;
    {
        const bool branch_taken_0x5504f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x5504F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5504F0u;
            // 0x5504f4: 0x64b021  addu        $s6, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5504f0) {
            ctx->pc = 0x5504FCu;
            goto label_5504fc;
        }
    }
    ctx->pc = 0x5504F8u;
label_5504f8:
    // 0x5504f8: 0x26d60020  addiu       $s6, $s6, 0x20
    ctx->pc = 0x5504f8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
label_5504fc:
    // 0x5504fc: 0xc6420088  lwc1        $f2, 0x88($s2)
    ctx->pc = 0x5504fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_550500:
    // 0x550500: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x550500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_550504:
    // 0x550504: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x550504u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_550508:
    // 0x550508: 0x26450080  addiu       $a1, $s2, 0x80
    ctx->pc = 0x550508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_55050c:
    // 0x55050c: 0xc81018  mult        $v0, $a2, $t0
    ctx->pc = 0x55050cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_550510:
    // 0x550510: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x550510u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_550514:
    // 0x550514: 0xc641008c  lwc1        $f1, 0x8C($s2)
    ctx->pc = 0x550514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_550518:
    // 0x550518: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x550518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55051c:
    // 0x55051c: 0x0  nop
    ctx->pc = 0x55051cu;
    // NOP
label_550520:
    // 0x550520: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x550520u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_550524:
    // 0x550524: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x550524u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_550528:
    // 0x550528: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x550528u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55052c:
    // 0x55052c: 0x0  nop
    ctx->pc = 0x55052cu;
    // NOP
label_550530:
    // 0x550530: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x550530u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_550534:
    // 0x550534: 0x46020301  sub.s       $f12, $f0, $f2
    ctx->pc = 0x550534u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_550538:
    // 0x550538: 0x46020380  add.s       $f14, $f0, $f2
    ctx->pc = 0x550538u;
    ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_55053c:
    // 0x55053c: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x55053cu;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_550540:
    // 0x550540: 0x0  nop
    ctx->pc = 0x550540u;
    // NOP
label_550544:
    // 0x550544: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x550544u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_550548:
    // 0x550548: 0x46030081  sub.s       $f2, $f0, $f3
    ctx->pc = 0x550548u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_55054c:
    // 0x55054c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x55054cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_550550:
    // 0x550550: 0x46011340  add.s       $f13, $f2, $f1
    ctx->pc = 0x550550u;
    ctx->f[13] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_550554:
    // 0x550554: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_550558:
    if (ctx->pc == 0x550558u) {
        ctx->pc = 0x550558u;
            // 0x550558: 0x460103c0  add.s       $f15, $f0, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x55055Cu;
        goto label_55055c;
    }
    ctx->pc = 0x550554u;
    {
        const bool branch_taken_0x550554 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x550558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x550554u;
            // 0x550558: 0x460103c0  add.s       $f15, $f0, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x550554) {
            ctx->pc = 0x550568u;
            goto label_550568;
        }
    }
    ctx->pc = 0x55055Cu;
label_55055c:
    // 0x55055c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x55055cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_550560:
    // 0x550560: 0x10000008  b           . + 4 + (0x8 << 2)
label_550564:
    if (ctx->pc == 0x550564u) {
        ctx->pc = 0x550564u;
            // 0x550564: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x550568u;
        goto label_550568;
    }
    ctx->pc = 0x550560u;
    {
        const bool branch_taken_0x550560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x550564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x550560u;
            // 0x550564: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x550560) {
            ctx->pc = 0x550584u;
            goto label_550584;
        }
    }
    ctx->pc = 0x550568u;
label_550568:
    // 0x550568: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x550568u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_55056c:
    // 0x55056c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x55056cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_550570:
    // 0x550570: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x550570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_550574:
    // 0x550574: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x550574u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_550578:
    // 0x550578: 0x0  nop
    ctx->pc = 0x550578u;
    // NOP
label_55057c:
    // 0x55057c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x55057cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_550580:
    // 0x550580: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x550580u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_550584:
    // 0x550584: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_550588:
    if (ctx->pc == 0x550588u) {
        ctx->pc = 0x550588u;
            // 0x550588: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x55058Cu;
        goto label_55058c;
    }
    ctx->pc = 0x550584u;
    {
        const bool branch_taken_0x550584 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x550584) {
            ctx->pc = 0x550588u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x550584u;
            // 0x550588: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x550598u;
            goto label_550598;
        }
    }
    ctx->pc = 0x55058Cu;
label_55058c:
    // 0x55058c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x55058cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_550590:
    // 0x550590: 0x10000007  b           . + 4 + (0x7 << 2)
label_550594:
    if (ctx->pc == 0x550594u) {
        ctx->pc = 0x550594u;
            // 0x550594: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x550598u;
        goto label_550598;
    }
    ctx->pc = 0x550590u;
    {
        const bool branch_taken_0x550590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x550594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x550590u;
            // 0x550594: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x550590) {
            ctx->pc = 0x5505B0u;
            goto label_5505b0;
        }
    }
    ctx->pc = 0x550598u;
label_550598:
    // 0x550598: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x550598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_55059c:
    // 0x55059c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x55059cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_5505a0:
    // 0x5505a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5505a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5505a4:
    // 0x5505a4: 0x0  nop
    ctx->pc = 0x5505a4u;
    // NOP
label_5505a8:
    // 0x5505a8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x5505a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_5505ac:
    // 0x5505ac: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x5505acu;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_5505b0:
    // 0x5505b0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x5505b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_5505b4:
    // 0x5505b4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x5505b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_5505b8:
    // 0x5505b8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x5505b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_5505bc:
    // 0x5505bc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x5505bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_5505c0:
    // 0x5505c0: 0xc0bc284  jal         func_2F0A10
label_5505c4:
    if (ctx->pc == 0x5505C4u) {
        ctx->pc = 0x5505C4u;
            // 0x5505c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5505C8u;
        goto label_5505c8;
    }
    ctx->pc = 0x5505C0u;
    SET_GPR_U32(ctx, 31, 0x5505C8u);
    ctx->pc = 0x5505C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5505C0u;
            // 0x5505c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5505C8u; }
        if (ctx->pc != 0x5505C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5505C8u; }
        if (ctx->pc != 0x5505C8u) { return; }
    }
    ctx->pc = 0x5505C8u;
label_5505c8:
    // 0x5505c8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x5505c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_5505cc:
    // 0x5505cc: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x5505ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_5505d0:
    // 0x5505d0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5505d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5505d4:
    // 0x5505d4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x5505d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_5505d8:
    // 0x5505d8: 0x320f809  jalr        $t9
label_5505dc:
    if (ctx->pc == 0x5505DCu) {
        ctx->pc = 0x5505E0u;
        goto label_5505e0;
    }
    ctx->pc = 0x5505D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5505E0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x5505E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5505E0u; }
            if (ctx->pc != 0x5505E0u) { return; }
        }
        }
    }
    ctx->pc = 0x5505E0u;
label_5505e0:
    // 0x5505e0: 0x8ea40054  lw          $a0, 0x54($s5)
    ctx->pc = 0x5505e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_5505e4:
    // 0x5505e4: 0xc0c9a58  jal         func_326960
label_5505e8:
    if (ctx->pc == 0x5505E8u) {
        ctx->pc = 0x5505E8u;
            // 0x5505e8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x5505ECu;
        goto label_5505ec;
    }
    ctx->pc = 0x5505E4u;
    SET_GPR_U32(ctx, 31, 0x5505ECu);
    ctx->pc = 0x5505E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5505E4u;
            // 0x5505e8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5505ECu; }
        if (ctx->pc != 0x5505ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5505ECu; }
        if (ctx->pc != 0x5505ECu) { return; }
    }
    ctx->pc = 0x5505ECu;
label_5505ec:
    // 0x5505ec: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x5505ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_5505f0:
    // 0x5505f0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x5505f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5505f4:
    // 0x5505f4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x5505f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_5505f8:
    // 0x5505f8: 0x9452dac0  lhu         $s2, -0x2540($v0)
    ctx->pc = 0x5505f8u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957760)));
label_5505fc:
    // 0x5505fc: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x5505fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_550600:
    // 0x550600: 0x9451dac2  lhu         $s1, -0x253E($v0)
    ctx->pc = 0x550600u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957762)));
label_550604:
    // 0x550604: 0x86a4005e  lh          $a0, 0x5E($s5)
    ctx->pc = 0x550604u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 94)));
label_550608:
    // 0x550608: 0x3c0300be  lui         $v1, 0xBE
    ctx->pc = 0x550608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)190 << 16));
label_55060c:
    // 0x55060c: 0x2463b710  addiu       $v1, $v1, -0x48F0
    ctx->pc = 0x55060cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948624));
label_550610:
    // 0x550610: 0x86a20060  lh          $v0, 0x60($s5)
    ctx->pc = 0x550610u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 96)));
label_550614:
    // 0x550614: 0x942821  addu        $a1, $a0, $s4
    ctx->pc = 0x550614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_550618:
    // 0x550618: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x550618u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_55061c:
    // 0x55061c: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x55061cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_550620:
    // 0x550620: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x550620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_550624:
    // 0x550624: 0x10200080  beqz        $at, . + 4 + (0x80 << 2)
label_550628:
    if (ctx->pc == 0x550628u) {
        ctx->pc = 0x550628u;
            // 0x550628: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x55062Cu;
        goto label_55062c;
    }
    ctx->pc = 0x550624u;
    {
        const bool branch_taken_0x550624 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x550628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x550624u;
            // 0x550628: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x550624) {
            ctx->pc = 0x550828u;
            goto label_550828;
        }
    }
    ctx->pc = 0x55062Cu;
label_55062c:
    // 0x55062c: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x55062cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_550630:
    // 0x550630: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x550630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_550634:
    // 0x550634: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x550634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_550638:
    // 0x550638: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x550638u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_55063c:
    // 0x55063c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x55063cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_550640:
    // 0x550640: 0x320f809  jalr        $t9
label_550644:
    if (ctx->pc == 0x550644u) {
        ctx->pc = 0x550644u;
            // 0x550644: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x550648u;
        goto label_550648;
    }
    ctx->pc = 0x550640u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x550648u);
        ctx->pc = 0x550644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x550640u;
            // 0x550644: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x550648u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x550648u; }
            if (ctx->pc != 0x550648u) { return; }
        }
        }
    }
    ctx->pc = 0x550648u;
label_550648:
    // 0x550648: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x550648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_55064c:
    // 0x55064c: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x55064cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_550650:
    // 0x550650: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x550650u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_550654:
    // 0x550654: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x550654u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_550658:
    // 0x550658: 0x320f809  jalr        $t9
label_55065c:
    if (ctx->pc == 0x55065Cu) {
        ctx->pc = 0x55065Cu;
            // 0x55065c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x550660u;
        goto label_550660;
    }
    ctx->pc = 0x550658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x550660u);
        ctx->pc = 0x55065Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x550658u;
            // 0x55065c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x550660u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x550660u; }
            if (ctx->pc != 0x550660u) { return; }
        }
        }
    }
    ctx->pc = 0x550660u;
label_550660:
    // 0x550660: 0x2a010011  slti        $at, $s0, 0x11
    ctx->pc = 0x550660u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
label_550664:
    // 0x550664: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_550668:
    if (ctx->pc == 0x550668u) {
        ctx->pc = 0x55066Cu;
        goto label_55066c;
    }
    ctx->pc = 0x550664u;
    {
        const bool branch_taken_0x550664 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x550664) {
            ctx->pc = 0x550670u;
            goto label_550670;
        }
    }
    ctx->pc = 0x55066Cu;
label_55066c:
    // 0x55066c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x55066cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_550670:
    // 0x550670: 0x2a010012  slti        $at, $s0, 0x12
    ctx->pc = 0x550670u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)18) ? 1 : 0);
label_550674:
    // 0x550674: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_550678:
    if (ctx->pc == 0x550678u) {
        ctx->pc = 0x55067Cu;
        goto label_55067c;
    }
    ctx->pc = 0x550674u;
    {
        const bool branch_taken_0x550674 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x550674) {
            ctx->pc = 0x550680u;
            goto label_550680;
        }
    }
    ctx->pc = 0x55067Cu;
label_55067c:
    // 0x55067c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x55067cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_550680:
    // 0x550680: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x550680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
label_550684:
    // 0x550684: 0x1202002a  beq         $s0, $v0, . + 4 + (0x2A << 2)
label_550688:
    if (ctx->pc == 0x550688u) {
        ctx->pc = 0x55068Cu;
        goto label_55068c;
    }
    ctx->pc = 0x550684u;
    {
        const bool branch_taken_0x550684 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x550684) {
            ctx->pc = 0x550730u;
            goto label_550730;
        }
    }
    ctx->pc = 0x55068Cu;
label_55068c:
    // 0x55068c: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x55068cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
label_550690:
    // 0x550690: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x550690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_550694:
    // 0x550694: 0x530019  multu       $v0, $s3
    ctx->pc = 0x550694u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_550698:
    // 0x550698: 0x1010  mfhi        $v0
    ctx->pc = 0x550698u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_55069c:
    // 0x55069c: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x55069cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_5506a0:
    // 0x5506a0: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_5506a4:
    if (ctx->pc == 0x5506A4u) {
        ctx->pc = 0x5506A4u;
            // 0x5506a4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x5506A8u;
        goto label_5506a8;
    }
    ctx->pc = 0x5506A0u;
    {
        const bool branch_taken_0x5506a0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x5506a0) {
            ctx->pc = 0x5506A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5506A0u;
            // 0x5506a4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5506B4u;
            goto label_5506b4;
        }
    }
    ctx->pc = 0x5506A8u;
label_5506a8:
    // 0x5506a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5506a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5506ac:
    // 0x5506ac: 0x10000007  b           . + 4 + (0x7 << 2)
label_5506b0:
    if (ctx->pc == 0x5506B0u) {
        ctx->pc = 0x5506B0u;
            // 0x5506b0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x5506B4u;
        goto label_5506b4;
    }
    ctx->pc = 0x5506ACu;
    {
        const bool branch_taken_0x5506ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5506B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5506ACu;
            // 0x5506b0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5506ac) {
            ctx->pc = 0x5506CCu;
            goto label_5506cc;
        }
    }
    ctx->pc = 0x5506B4u;
label_5506b4:
    // 0x5506b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x5506b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_5506b8:
    // 0x5506b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x5506b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_5506bc:
    // 0x5506bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5506bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5506c0:
    // 0x5506c0: 0x0  nop
    ctx->pc = 0x5506c0u;
    // NOP
label_5506c4:
    // 0x5506c4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x5506c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_5506c8:
    // 0x5506c8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x5506c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_5506cc:
    // 0x5506cc: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x5506ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_5506d0:
    // 0x5506d0: 0x3c03430e  lui         $v1, 0x430E
    ctx->pc = 0x5506d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17166 << 16));
label_5506d4:
    // 0x5506d4: 0x262001b  divu        $zero, $s3, $v0
    ctx->pc = 0x5506d4u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 19) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 19) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,19); } }
label_5506d8:
    // 0x5506d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5506d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5506dc:
    // 0x5506dc: 0x0  nop
    ctx->pc = 0x5506dcu;
    // NOP
label_5506e0:
    // 0x5506e0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x5506e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_5506e4:
    // 0x5506e4: 0x1010  mfhi        $v0
    ctx->pc = 0x5506e4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_5506e8:
    // 0x5506e8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_5506ec:
    if (ctx->pc == 0x5506ECu) {
        ctx->pc = 0x5506ECu;
            // 0x5506ec: 0xe7a000e0  swc1        $f0, 0xE0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
        ctx->pc = 0x5506F0u;
        goto label_5506f0;
    }
    ctx->pc = 0x5506E8u;
    {
        const bool branch_taken_0x5506e8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x5506ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5506E8u;
            // 0x5506ec: 0xe7a000e0  swc1        $f0, 0xE0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5506e8) {
            ctx->pc = 0x5506FCu;
            goto label_5506fc;
        }
    }
    ctx->pc = 0x5506F0u;
label_5506f0:
    // 0x5506f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5506f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5506f4:
    // 0x5506f4: 0x10000008  b           . + 4 + (0x8 << 2)
label_5506f8:
    if (ctx->pc == 0x5506F8u) {
        ctx->pc = 0x5506F8u;
            // 0x5506f8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x5506FCu;
        goto label_5506fc;
    }
    ctx->pc = 0x5506F4u;
    {
        const bool branch_taken_0x5506f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5506F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5506F4u;
            // 0x5506f8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5506f4) {
            ctx->pc = 0x550718u;
            goto label_550718;
        }
    }
    ctx->pc = 0x5506FCu;
label_5506fc:
    // 0x5506fc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x5506fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_550700:
    // 0x550700: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x550700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_550704:
    // 0x550704: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x550704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_550708:
    // 0x550708: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x550708u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55070c:
    // 0x55070c: 0x0  nop
    ctx->pc = 0x55070cu;
    // NOP
label_550710:
    // 0x550710: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x550710u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_550714:
    // 0x550714: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x550714u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_550718:
    // 0x550718: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x550718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
label_55071c:
    // 0x55071c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x55071cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_550720:
    // 0x550720: 0x0  nop
    ctx->pc = 0x550720u;
    // NOP
label_550724:
    // 0x550724: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x550724u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_550728:
    // 0x550728: 0x10000005  b           . + 4 + (0x5 << 2)
label_55072c:
    if (ctx->pc == 0x55072Cu) {
        ctx->pc = 0x55072Cu;
            // 0x55072c: 0xe7a000e4  swc1        $f0, 0xE4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
        ctx->pc = 0x550730u;
        goto label_550730;
    }
    ctx->pc = 0x550728u;
    {
        const bool branch_taken_0x550728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55072Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x550728u;
            // 0x55072c: 0xe7a000e4  swc1        $f0, 0xE4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x550728) {
            ctx->pc = 0x550740u;
            goto label_550740;
        }
    }
    ctx->pc = 0x550730u;
label_550730:
    // 0x550730: 0x3c0243f0  lui         $v0, 0x43F0
    ctx->pc = 0x550730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17392 << 16));
label_550734:
    // 0x550734: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x550734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
label_550738:
    // 0x550738: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x550738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
label_55073c:
    // 0x55073c: 0x0  nop
    ctx->pc = 0x55073cu;
    // NOP
label_550740:
    // 0x550740: 0x3c02430e  lui         $v0, 0x430E
    ctx->pc = 0x550740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17166 << 16));
label_550744:
    // 0x550744: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x550744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
label_550748:
    // 0x550748: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x550748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_55074c:
    // 0x55074c: 0x3c0341c0  lui         $v1, 0x41C0
    ctx->pc = 0x55074cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16832 << 16));
label_550750:
    // 0x550750: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x550750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_550754:
    // 0x550754: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x550754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_550758:
    // 0x550758: 0xafa300ec  sw          $v1, 0xEC($sp)
    ctx->pc = 0x550758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 3));
label_55075c:
    // 0x55075c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x55075cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_550760:
    // 0x550760: 0x0  nop
    ctx->pc = 0x550760u;
    // NOP
label_550764:
    // 0x550764: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x550764u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_550768:
    // 0x550768: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x550768u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_55076c:
    // 0x55076c: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x55076cu;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_550770:
    // 0x550770: 0x0  nop
    ctx->pc = 0x550770u;
    // NOP
label_550774:
    // 0x550774: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x550774u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_550778:
    // 0x550778: 0x46020301  sub.s       $f12, $f0, $f2
    ctx->pc = 0x550778u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_55077c:
    // 0x55077c: 0x46020380  add.s       $f14, $f0, $f2
    ctx->pc = 0x55077cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_550780:
    // 0x550780: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x550780u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_550784:
    // 0x550784: 0x0  nop
    ctx->pc = 0x550784u;
    // NOP
label_550788:
    // 0x550788: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x550788u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_55078c:
    // 0x55078c: 0x46010341  sub.s       $f13, $f0, $f1
    ctx->pc = 0x55078cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_550790:
    // 0x550790: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
label_550794:
    if (ctx->pc == 0x550794u) {
        ctx->pc = 0x550794u;
            // 0x550794: 0x460103c0  add.s       $f15, $f0, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x550798u;
        goto label_550798;
    }
    ctx->pc = 0x550790u;
    {
        const bool branch_taken_0x550790 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x550794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x550790u;
            // 0x550794: 0x460103c0  add.s       $f15, $f0, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x550790) {
            ctx->pc = 0x5507A4u;
            goto label_5507a4;
        }
    }
    ctx->pc = 0x550798u;
label_550798:
    // 0x550798: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x550798u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55079c:
    // 0x55079c: 0x10000008  b           . + 4 + (0x8 << 2)
label_5507a0:
    if (ctx->pc == 0x5507A0u) {
        ctx->pc = 0x5507A0u;
            // 0x5507a0: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x5507A4u;
        goto label_5507a4;
    }
    ctx->pc = 0x55079Cu;
    {
        const bool branch_taken_0x55079c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5507A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55079Cu;
            // 0x5507a0: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x55079c) {
            ctx->pc = 0x5507C0u;
            goto label_5507c0;
        }
    }
    ctx->pc = 0x5507A4u;
label_5507a4:
    // 0x5507a4: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x5507a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_5507a8:
    // 0x5507a8: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x5507a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_5507ac:
    // 0x5507ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x5507acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_5507b0:
    // 0x5507b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5507b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5507b4:
    // 0x5507b4: 0x0  nop
    ctx->pc = 0x5507b4u;
    // NOP
label_5507b8:
    // 0x5507b8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x5507b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_5507bc:
    // 0x5507bc: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x5507bcu;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_5507c0:
    // 0x5507c0: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_5507c4:
    if (ctx->pc == 0x5507C4u) {
        ctx->pc = 0x5507C4u;
            // 0x5507c4: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x5507C8u;
        goto label_5507c8;
    }
    ctx->pc = 0x5507C0u;
    {
        const bool branch_taken_0x5507c0 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x5507c0) {
            ctx->pc = 0x5507C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5507C0u;
            // 0x5507c4: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5507D4u;
            goto label_5507d4;
        }
    }
    ctx->pc = 0x5507C8u;
label_5507c8:
    // 0x5507c8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x5507c8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5507cc:
    // 0x5507cc: 0x10000007  b           . + 4 + (0x7 << 2)
label_5507d0:
    if (ctx->pc == 0x5507D0u) {
        ctx->pc = 0x5507D0u;
            // 0x5507d0: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x5507D4u;
        goto label_5507d4;
    }
    ctx->pc = 0x5507CCu;
    {
        const bool branch_taken_0x5507cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5507D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5507CCu;
            // 0x5507d0: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5507cc) {
            ctx->pc = 0x5507ECu;
            goto label_5507ec;
        }
    }
    ctx->pc = 0x5507D4u;
label_5507d4:
    // 0x5507d4: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x5507d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_5507d8:
    // 0x5507d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x5507d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_5507dc:
    // 0x5507dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5507dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5507e0:
    // 0x5507e0: 0x0  nop
    ctx->pc = 0x5507e0u;
    // NOP
label_5507e4:
    // 0x5507e4: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x5507e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_5507e8:
    // 0x5507e8: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x5507e8u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_5507ec:
    // 0x5507ec: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x5507ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_5507f0:
    // 0x5507f0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x5507f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_5507f4:
    // 0x5507f4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x5507f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_5507f8:
    // 0x5507f8: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x5507f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_5507fc:
    // 0x5507fc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x5507fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_550800:
    // 0x550800: 0xc0bc284  jal         func_2F0A10
label_550804:
    if (ctx->pc == 0x550804u) {
        ctx->pc = 0x550804u;
            // 0x550804: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x550808u;
        goto label_550808;
    }
    ctx->pc = 0x550800u;
    SET_GPR_U32(ctx, 31, 0x550808u);
    ctx->pc = 0x550804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x550800u;
            // 0x550804: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x550808u; }
        if (ctx->pc != 0x550808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x550808u; }
        if (ctx->pc != 0x550808u) { return; }
    }
    ctx->pc = 0x550808u;
label_550808:
    // 0x550808: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x550808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_55080c:
    // 0x55080c: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x55080cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_550810:
    // 0x550810: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x550810u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_550814:
    // 0x550814: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x550814u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_550818:
    // 0x550818: 0x320f809  jalr        $t9
label_55081c:
    if (ctx->pc == 0x55081Cu) {
        ctx->pc = 0x550820u;
        goto label_550820;
    }
    ctx->pc = 0x550818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x550820u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x550820u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x550820u; }
            if (ctx->pc != 0x550820u) { return; }
        }
        }
    }
    ctx->pc = 0x550820u;
label_550820:
    // 0x550820: 0x86e20028  lh          $v0, 0x28($s7)
    ctx->pc = 0x550820u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 40)));
label_550824:
    // 0x550824: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x550824u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_550828:
    // 0x550828: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x550828u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_55082c:
    // 0x55082c: 0x2a820008  slti        $v0, $s4, 0x8
    ctx->pc = 0x55082cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)8) ? 1 : 0);
label_550830:
    // 0x550830: 0x5440ff75  bnel        $v0, $zero, . + 4 + (-0x8B << 2)
label_550834:
    if (ctx->pc == 0x550834u) {
        ctx->pc = 0x550834u;
            // 0x550834: 0x86a4005e  lh          $a0, 0x5E($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 94)));
        ctx->pc = 0x550838u;
        goto label_550838;
    }
    ctx->pc = 0x550830u;
    {
        const bool branch_taken_0x550830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x550830) {
            ctx->pc = 0x550834u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x550830u;
            // 0x550834: 0x86a4005e  lh          $a0, 0x5E($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 94)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x550608u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_550608;
        }
    }
    ctx->pc = 0x550838u;
label_550838:
    // 0x550838: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x550838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_55083c:
    // 0x55083c: 0x8ea40054  lw          $a0, 0x54($s5)
    ctx->pc = 0x55083cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_550840:
    // 0x550840: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x550840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_550844:
    // 0x550844: 0x0  nop
    ctx->pc = 0x550844u;
    // NOP
label_550848:
    // 0x550848: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x550848u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_55084c:
    // 0x55084c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x55084cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_550850:
    // 0x550850: 0xc0c85d8  jal         func_321760
label_550854:
    if (ctx->pc == 0x550854u) {
        ctx->pc = 0x550854u;
            // 0x550854: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x550858u;
        goto label_550858;
    }
    ctx->pc = 0x550850u;
    SET_GPR_U32(ctx, 31, 0x550858u);
    ctx->pc = 0x550854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x550850u;
            // 0x550854: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x321760u;
    if (runtime->hasFunction(0x321760u)) {
        auto targetFn = runtime->lookupFunction(0x321760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x550858u; }
        if (ctx->pc != 0x550858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321760_0x321760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x550858u; }
        if (ctx->pc != 0x550858u) { return; }
    }
    ctx->pc = 0x550858u;
label_550858:
    // 0x550858: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x550858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_55085c:
    // 0x55085c: 0xc7ba0028  lwc1        $f26, 0x28($sp)
    ctx->pc = 0x55085cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_550860:
    // 0x550860: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x550860u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_550864:
    // 0x550864: 0xc7b90024  lwc1        $f25, 0x24($sp)
    ctx->pc = 0x550864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_550868:
    // 0x550868: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x550868u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_55086c:
    // 0x55086c: 0xc7b80020  lwc1        $f24, 0x20($sp)
    ctx->pc = 0x55086cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_550870:
    // 0x550870: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x550870u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_550874:
    // 0x550874: 0xc7b7001c  lwc1        $f23, 0x1C($sp)
    ctx->pc = 0x550874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_550878:
    // 0x550878: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x550878u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_55087c:
    // 0x55087c: 0xc7b60018  lwc1        $f22, 0x18($sp)
    ctx->pc = 0x55087cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_550880:
    // 0x550880: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x550880u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_550884:
    // 0x550884: 0xc7b50014  lwc1        $f21, 0x14($sp)
    ctx->pc = 0x550884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_550888:
    // 0x550888: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x550888u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_55088c:
    // 0x55088c: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x55088cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_550890:
    // 0x550890: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x550890u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_550894:
    // 0x550894: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x550894u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_550898:
    // 0x550898: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x550898u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_55089c:
    // 0x55089c: 0x3e00008  jr          $ra
label_5508a0:
    if (ctx->pc == 0x5508A0u) {
        ctx->pc = 0x5508A0u;
            // 0x5508a0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x5508A4u;
        goto label_5508a4;
    }
    ctx->pc = 0x55089Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5508A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55089Cu;
            // 0x5508a0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5508A4u;
label_5508a4:
    // 0x5508a4: 0x0  nop
    ctx->pc = 0x5508a4u;
    // NOP
label_5508a8:
    // 0x5508a8: 0x0  nop
    ctx->pc = 0x5508a8u;
    // NOP
label_5508ac:
    // 0x5508ac: 0x0  nop
    ctx->pc = 0x5508acu;
    // NOP
}
