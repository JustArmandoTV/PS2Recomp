#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00471070
// Address: 0x471070 - 0x471a20
void sub_00471070_0x471070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00471070_0x471070");
#endif

    switch (ctx->pc) {
        case 0x471070u: goto label_471070;
        case 0x471074u: goto label_471074;
        case 0x471078u: goto label_471078;
        case 0x47107cu: goto label_47107c;
        case 0x471080u: goto label_471080;
        case 0x471084u: goto label_471084;
        case 0x471088u: goto label_471088;
        case 0x47108cu: goto label_47108c;
        case 0x471090u: goto label_471090;
        case 0x471094u: goto label_471094;
        case 0x471098u: goto label_471098;
        case 0x47109cu: goto label_47109c;
        case 0x4710a0u: goto label_4710a0;
        case 0x4710a4u: goto label_4710a4;
        case 0x4710a8u: goto label_4710a8;
        case 0x4710acu: goto label_4710ac;
        case 0x4710b0u: goto label_4710b0;
        case 0x4710b4u: goto label_4710b4;
        case 0x4710b8u: goto label_4710b8;
        case 0x4710bcu: goto label_4710bc;
        case 0x4710c0u: goto label_4710c0;
        case 0x4710c4u: goto label_4710c4;
        case 0x4710c8u: goto label_4710c8;
        case 0x4710ccu: goto label_4710cc;
        case 0x4710d0u: goto label_4710d0;
        case 0x4710d4u: goto label_4710d4;
        case 0x4710d8u: goto label_4710d8;
        case 0x4710dcu: goto label_4710dc;
        case 0x4710e0u: goto label_4710e0;
        case 0x4710e4u: goto label_4710e4;
        case 0x4710e8u: goto label_4710e8;
        case 0x4710ecu: goto label_4710ec;
        case 0x4710f0u: goto label_4710f0;
        case 0x4710f4u: goto label_4710f4;
        case 0x4710f8u: goto label_4710f8;
        case 0x4710fcu: goto label_4710fc;
        case 0x471100u: goto label_471100;
        case 0x471104u: goto label_471104;
        case 0x471108u: goto label_471108;
        case 0x47110cu: goto label_47110c;
        case 0x471110u: goto label_471110;
        case 0x471114u: goto label_471114;
        case 0x471118u: goto label_471118;
        case 0x47111cu: goto label_47111c;
        case 0x471120u: goto label_471120;
        case 0x471124u: goto label_471124;
        case 0x471128u: goto label_471128;
        case 0x47112cu: goto label_47112c;
        case 0x471130u: goto label_471130;
        case 0x471134u: goto label_471134;
        case 0x471138u: goto label_471138;
        case 0x47113cu: goto label_47113c;
        case 0x471140u: goto label_471140;
        case 0x471144u: goto label_471144;
        case 0x471148u: goto label_471148;
        case 0x47114cu: goto label_47114c;
        case 0x471150u: goto label_471150;
        case 0x471154u: goto label_471154;
        case 0x471158u: goto label_471158;
        case 0x47115cu: goto label_47115c;
        case 0x471160u: goto label_471160;
        case 0x471164u: goto label_471164;
        case 0x471168u: goto label_471168;
        case 0x47116cu: goto label_47116c;
        case 0x471170u: goto label_471170;
        case 0x471174u: goto label_471174;
        case 0x471178u: goto label_471178;
        case 0x47117cu: goto label_47117c;
        case 0x471180u: goto label_471180;
        case 0x471184u: goto label_471184;
        case 0x471188u: goto label_471188;
        case 0x47118cu: goto label_47118c;
        case 0x471190u: goto label_471190;
        case 0x471194u: goto label_471194;
        case 0x471198u: goto label_471198;
        case 0x47119cu: goto label_47119c;
        case 0x4711a0u: goto label_4711a0;
        case 0x4711a4u: goto label_4711a4;
        case 0x4711a8u: goto label_4711a8;
        case 0x4711acu: goto label_4711ac;
        case 0x4711b0u: goto label_4711b0;
        case 0x4711b4u: goto label_4711b4;
        case 0x4711b8u: goto label_4711b8;
        case 0x4711bcu: goto label_4711bc;
        case 0x4711c0u: goto label_4711c0;
        case 0x4711c4u: goto label_4711c4;
        case 0x4711c8u: goto label_4711c8;
        case 0x4711ccu: goto label_4711cc;
        case 0x4711d0u: goto label_4711d0;
        case 0x4711d4u: goto label_4711d4;
        case 0x4711d8u: goto label_4711d8;
        case 0x4711dcu: goto label_4711dc;
        case 0x4711e0u: goto label_4711e0;
        case 0x4711e4u: goto label_4711e4;
        case 0x4711e8u: goto label_4711e8;
        case 0x4711ecu: goto label_4711ec;
        case 0x4711f0u: goto label_4711f0;
        case 0x4711f4u: goto label_4711f4;
        case 0x4711f8u: goto label_4711f8;
        case 0x4711fcu: goto label_4711fc;
        case 0x471200u: goto label_471200;
        case 0x471204u: goto label_471204;
        case 0x471208u: goto label_471208;
        case 0x47120cu: goto label_47120c;
        case 0x471210u: goto label_471210;
        case 0x471214u: goto label_471214;
        case 0x471218u: goto label_471218;
        case 0x47121cu: goto label_47121c;
        case 0x471220u: goto label_471220;
        case 0x471224u: goto label_471224;
        case 0x471228u: goto label_471228;
        case 0x47122cu: goto label_47122c;
        case 0x471230u: goto label_471230;
        case 0x471234u: goto label_471234;
        case 0x471238u: goto label_471238;
        case 0x47123cu: goto label_47123c;
        case 0x471240u: goto label_471240;
        case 0x471244u: goto label_471244;
        case 0x471248u: goto label_471248;
        case 0x47124cu: goto label_47124c;
        case 0x471250u: goto label_471250;
        case 0x471254u: goto label_471254;
        case 0x471258u: goto label_471258;
        case 0x47125cu: goto label_47125c;
        case 0x471260u: goto label_471260;
        case 0x471264u: goto label_471264;
        case 0x471268u: goto label_471268;
        case 0x47126cu: goto label_47126c;
        case 0x471270u: goto label_471270;
        case 0x471274u: goto label_471274;
        case 0x471278u: goto label_471278;
        case 0x47127cu: goto label_47127c;
        case 0x471280u: goto label_471280;
        case 0x471284u: goto label_471284;
        case 0x471288u: goto label_471288;
        case 0x47128cu: goto label_47128c;
        case 0x471290u: goto label_471290;
        case 0x471294u: goto label_471294;
        case 0x471298u: goto label_471298;
        case 0x47129cu: goto label_47129c;
        case 0x4712a0u: goto label_4712a0;
        case 0x4712a4u: goto label_4712a4;
        case 0x4712a8u: goto label_4712a8;
        case 0x4712acu: goto label_4712ac;
        case 0x4712b0u: goto label_4712b0;
        case 0x4712b4u: goto label_4712b4;
        case 0x4712b8u: goto label_4712b8;
        case 0x4712bcu: goto label_4712bc;
        case 0x4712c0u: goto label_4712c0;
        case 0x4712c4u: goto label_4712c4;
        case 0x4712c8u: goto label_4712c8;
        case 0x4712ccu: goto label_4712cc;
        case 0x4712d0u: goto label_4712d0;
        case 0x4712d4u: goto label_4712d4;
        case 0x4712d8u: goto label_4712d8;
        case 0x4712dcu: goto label_4712dc;
        case 0x4712e0u: goto label_4712e0;
        case 0x4712e4u: goto label_4712e4;
        case 0x4712e8u: goto label_4712e8;
        case 0x4712ecu: goto label_4712ec;
        case 0x4712f0u: goto label_4712f0;
        case 0x4712f4u: goto label_4712f4;
        case 0x4712f8u: goto label_4712f8;
        case 0x4712fcu: goto label_4712fc;
        case 0x471300u: goto label_471300;
        case 0x471304u: goto label_471304;
        case 0x471308u: goto label_471308;
        case 0x47130cu: goto label_47130c;
        case 0x471310u: goto label_471310;
        case 0x471314u: goto label_471314;
        case 0x471318u: goto label_471318;
        case 0x47131cu: goto label_47131c;
        case 0x471320u: goto label_471320;
        case 0x471324u: goto label_471324;
        case 0x471328u: goto label_471328;
        case 0x47132cu: goto label_47132c;
        case 0x471330u: goto label_471330;
        case 0x471334u: goto label_471334;
        case 0x471338u: goto label_471338;
        case 0x47133cu: goto label_47133c;
        case 0x471340u: goto label_471340;
        case 0x471344u: goto label_471344;
        case 0x471348u: goto label_471348;
        case 0x47134cu: goto label_47134c;
        case 0x471350u: goto label_471350;
        case 0x471354u: goto label_471354;
        case 0x471358u: goto label_471358;
        case 0x47135cu: goto label_47135c;
        case 0x471360u: goto label_471360;
        case 0x471364u: goto label_471364;
        case 0x471368u: goto label_471368;
        case 0x47136cu: goto label_47136c;
        case 0x471370u: goto label_471370;
        case 0x471374u: goto label_471374;
        case 0x471378u: goto label_471378;
        case 0x47137cu: goto label_47137c;
        case 0x471380u: goto label_471380;
        case 0x471384u: goto label_471384;
        case 0x471388u: goto label_471388;
        case 0x47138cu: goto label_47138c;
        case 0x471390u: goto label_471390;
        case 0x471394u: goto label_471394;
        case 0x471398u: goto label_471398;
        case 0x47139cu: goto label_47139c;
        case 0x4713a0u: goto label_4713a0;
        case 0x4713a4u: goto label_4713a4;
        case 0x4713a8u: goto label_4713a8;
        case 0x4713acu: goto label_4713ac;
        case 0x4713b0u: goto label_4713b0;
        case 0x4713b4u: goto label_4713b4;
        case 0x4713b8u: goto label_4713b8;
        case 0x4713bcu: goto label_4713bc;
        case 0x4713c0u: goto label_4713c0;
        case 0x4713c4u: goto label_4713c4;
        case 0x4713c8u: goto label_4713c8;
        case 0x4713ccu: goto label_4713cc;
        case 0x4713d0u: goto label_4713d0;
        case 0x4713d4u: goto label_4713d4;
        case 0x4713d8u: goto label_4713d8;
        case 0x4713dcu: goto label_4713dc;
        case 0x4713e0u: goto label_4713e0;
        case 0x4713e4u: goto label_4713e4;
        case 0x4713e8u: goto label_4713e8;
        case 0x4713ecu: goto label_4713ec;
        case 0x4713f0u: goto label_4713f0;
        case 0x4713f4u: goto label_4713f4;
        case 0x4713f8u: goto label_4713f8;
        case 0x4713fcu: goto label_4713fc;
        case 0x471400u: goto label_471400;
        case 0x471404u: goto label_471404;
        case 0x471408u: goto label_471408;
        case 0x47140cu: goto label_47140c;
        case 0x471410u: goto label_471410;
        case 0x471414u: goto label_471414;
        case 0x471418u: goto label_471418;
        case 0x47141cu: goto label_47141c;
        case 0x471420u: goto label_471420;
        case 0x471424u: goto label_471424;
        case 0x471428u: goto label_471428;
        case 0x47142cu: goto label_47142c;
        case 0x471430u: goto label_471430;
        case 0x471434u: goto label_471434;
        case 0x471438u: goto label_471438;
        case 0x47143cu: goto label_47143c;
        case 0x471440u: goto label_471440;
        case 0x471444u: goto label_471444;
        case 0x471448u: goto label_471448;
        case 0x47144cu: goto label_47144c;
        case 0x471450u: goto label_471450;
        case 0x471454u: goto label_471454;
        case 0x471458u: goto label_471458;
        case 0x47145cu: goto label_47145c;
        case 0x471460u: goto label_471460;
        case 0x471464u: goto label_471464;
        case 0x471468u: goto label_471468;
        case 0x47146cu: goto label_47146c;
        case 0x471470u: goto label_471470;
        case 0x471474u: goto label_471474;
        case 0x471478u: goto label_471478;
        case 0x47147cu: goto label_47147c;
        case 0x471480u: goto label_471480;
        case 0x471484u: goto label_471484;
        case 0x471488u: goto label_471488;
        case 0x47148cu: goto label_47148c;
        case 0x471490u: goto label_471490;
        case 0x471494u: goto label_471494;
        case 0x471498u: goto label_471498;
        case 0x47149cu: goto label_47149c;
        case 0x4714a0u: goto label_4714a0;
        case 0x4714a4u: goto label_4714a4;
        case 0x4714a8u: goto label_4714a8;
        case 0x4714acu: goto label_4714ac;
        case 0x4714b0u: goto label_4714b0;
        case 0x4714b4u: goto label_4714b4;
        case 0x4714b8u: goto label_4714b8;
        case 0x4714bcu: goto label_4714bc;
        case 0x4714c0u: goto label_4714c0;
        case 0x4714c4u: goto label_4714c4;
        case 0x4714c8u: goto label_4714c8;
        case 0x4714ccu: goto label_4714cc;
        case 0x4714d0u: goto label_4714d0;
        case 0x4714d4u: goto label_4714d4;
        case 0x4714d8u: goto label_4714d8;
        case 0x4714dcu: goto label_4714dc;
        case 0x4714e0u: goto label_4714e0;
        case 0x4714e4u: goto label_4714e4;
        case 0x4714e8u: goto label_4714e8;
        case 0x4714ecu: goto label_4714ec;
        case 0x4714f0u: goto label_4714f0;
        case 0x4714f4u: goto label_4714f4;
        case 0x4714f8u: goto label_4714f8;
        case 0x4714fcu: goto label_4714fc;
        case 0x471500u: goto label_471500;
        case 0x471504u: goto label_471504;
        case 0x471508u: goto label_471508;
        case 0x47150cu: goto label_47150c;
        case 0x471510u: goto label_471510;
        case 0x471514u: goto label_471514;
        case 0x471518u: goto label_471518;
        case 0x47151cu: goto label_47151c;
        case 0x471520u: goto label_471520;
        case 0x471524u: goto label_471524;
        case 0x471528u: goto label_471528;
        case 0x47152cu: goto label_47152c;
        case 0x471530u: goto label_471530;
        case 0x471534u: goto label_471534;
        case 0x471538u: goto label_471538;
        case 0x47153cu: goto label_47153c;
        case 0x471540u: goto label_471540;
        case 0x471544u: goto label_471544;
        case 0x471548u: goto label_471548;
        case 0x47154cu: goto label_47154c;
        case 0x471550u: goto label_471550;
        case 0x471554u: goto label_471554;
        case 0x471558u: goto label_471558;
        case 0x47155cu: goto label_47155c;
        case 0x471560u: goto label_471560;
        case 0x471564u: goto label_471564;
        case 0x471568u: goto label_471568;
        case 0x47156cu: goto label_47156c;
        case 0x471570u: goto label_471570;
        case 0x471574u: goto label_471574;
        case 0x471578u: goto label_471578;
        case 0x47157cu: goto label_47157c;
        case 0x471580u: goto label_471580;
        case 0x471584u: goto label_471584;
        case 0x471588u: goto label_471588;
        case 0x47158cu: goto label_47158c;
        case 0x471590u: goto label_471590;
        case 0x471594u: goto label_471594;
        case 0x471598u: goto label_471598;
        case 0x47159cu: goto label_47159c;
        case 0x4715a0u: goto label_4715a0;
        case 0x4715a4u: goto label_4715a4;
        case 0x4715a8u: goto label_4715a8;
        case 0x4715acu: goto label_4715ac;
        case 0x4715b0u: goto label_4715b0;
        case 0x4715b4u: goto label_4715b4;
        case 0x4715b8u: goto label_4715b8;
        case 0x4715bcu: goto label_4715bc;
        case 0x4715c0u: goto label_4715c0;
        case 0x4715c4u: goto label_4715c4;
        case 0x4715c8u: goto label_4715c8;
        case 0x4715ccu: goto label_4715cc;
        case 0x4715d0u: goto label_4715d0;
        case 0x4715d4u: goto label_4715d4;
        case 0x4715d8u: goto label_4715d8;
        case 0x4715dcu: goto label_4715dc;
        case 0x4715e0u: goto label_4715e0;
        case 0x4715e4u: goto label_4715e4;
        case 0x4715e8u: goto label_4715e8;
        case 0x4715ecu: goto label_4715ec;
        case 0x4715f0u: goto label_4715f0;
        case 0x4715f4u: goto label_4715f4;
        case 0x4715f8u: goto label_4715f8;
        case 0x4715fcu: goto label_4715fc;
        case 0x471600u: goto label_471600;
        case 0x471604u: goto label_471604;
        case 0x471608u: goto label_471608;
        case 0x47160cu: goto label_47160c;
        case 0x471610u: goto label_471610;
        case 0x471614u: goto label_471614;
        case 0x471618u: goto label_471618;
        case 0x47161cu: goto label_47161c;
        case 0x471620u: goto label_471620;
        case 0x471624u: goto label_471624;
        case 0x471628u: goto label_471628;
        case 0x47162cu: goto label_47162c;
        case 0x471630u: goto label_471630;
        case 0x471634u: goto label_471634;
        case 0x471638u: goto label_471638;
        case 0x47163cu: goto label_47163c;
        case 0x471640u: goto label_471640;
        case 0x471644u: goto label_471644;
        case 0x471648u: goto label_471648;
        case 0x47164cu: goto label_47164c;
        case 0x471650u: goto label_471650;
        case 0x471654u: goto label_471654;
        case 0x471658u: goto label_471658;
        case 0x47165cu: goto label_47165c;
        case 0x471660u: goto label_471660;
        case 0x471664u: goto label_471664;
        case 0x471668u: goto label_471668;
        case 0x47166cu: goto label_47166c;
        case 0x471670u: goto label_471670;
        case 0x471674u: goto label_471674;
        case 0x471678u: goto label_471678;
        case 0x47167cu: goto label_47167c;
        case 0x471680u: goto label_471680;
        case 0x471684u: goto label_471684;
        case 0x471688u: goto label_471688;
        case 0x47168cu: goto label_47168c;
        case 0x471690u: goto label_471690;
        case 0x471694u: goto label_471694;
        case 0x471698u: goto label_471698;
        case 0x47169cu: goto label_47169c;
        case 0x4716a0u: goto label_4716a0;
        case 0x4716a4u: goto label_4716a4;
        case 0x4716a8u: goto label_4716a8;
        case 0x4716acu: goto label_4716ac;
        case 0x4716b0u: goto label_4716b0;
        case 0x4716b4u: goto label_4716b4;
        case 0x4716b8u: goto label_4716b8;
        case 0x4716bcu: goto label_4716bc;
        case 0x4716c0u: goto label_4716c0;
        case 0x4716c4u: goto label_4716c4;
        case 0x4716c8u: goto label_4716c8;
        case 0x4716ccu: goto label_4716cc;
        case 0x4716d0u: goto label_4716d0;
        case 0x4716d4u: goto label_4716d4;
        case 0x4716d8u: goto label_4716d8;
        case 0x4716dcu: goto label_4716dc;
        case 0x4716e0u: goto label_4716e0;
        case 0x4716e4u: goto label_4716e4;
        case 0x4716e8u: goto label_4716e8;
        case 0x4716ecu: goto label_4716ec;
        case 0x4716f0u: goto label_4716f0;
        case 0x4716f4u: goto label_4716f4;
        case 0x4716f8u: goto label_4716f8;
        case 0x4716fcu: goto label_4716fc;
        case 0x471700u: goto label_471700;
        case 0x471704u: goto label_471704;
        case 0x471708u: goto label_471708;
        case 0x47170cu: goto label_47170c;
        case 0x471710u: goto label_471710;
        case 0x471714u: goto label_471714;
        case 0x471718u: goto label_471718;
        case 0x47171cu: goto label_47171c;
        case 0x471720u: goto label_471720;
        case 0x471724u: goto label_471724;
        case 0x471728u: goto label_471728;
        case 0x47172cu: goto label_47172c;
        case 0x471730u: goto label_471730;
        case 0x471734u: goto label_471734;
        case 0x471738u: goto label_471738;
        case 0x47173cu: goto label_47173c;
        case 0x471740u: goto label_471740;
        case 0x471744u: goto label_471744;
        case 0x471748u: goto label_471748;
        case 0x47174cu: goto label_47174c;
        case 0x471750u: goto label_471750;
        case 0x471754u: goto label_471754;
        case 0x471758u: goto label_471758;
        case 0x47175cu: goto label_47175c;
        case 0x471760u: goto label_471760;
        case 0x471764u: goto label_471764;
        case 0x471768u: goto label_471768;
        case 0x47176cu: goto label_47176c;
        case 0x471770u: goto label_471770;
        case 0x471774u: goto label_471774;
        case 0x471778u: goto label_471778;
        case 0x47177cu: goto label_47177c;
        case 0x471780u: goto label_471780;
        case 0x471784u: goto label_471784;
        case 0x471788u: goto label_471788;
        case 0x47178cu: goto label_47178c;
        case 0x471790u: goto label_471790;
        case 0x471794u: goto label_471794;
        case 0x471798u: goto label_471798;
        case 0x47179cu: goto label_47179c;
        case 0x4717a0u: goto label_4717a0;
        case 0x4717a4u: goto label_4717a4;
        case 0x4717a8u: goto label_4717a8;
        case 0x4717acu: goto label_4717ac;
        case 0x4717b0u: goto label_4717b0;
        case 0x4717b4u: goto label_4717b4;
        case 0x4717b8u: goto label_4717b8;
        case 0x4717bcu: goto label_4717bc;
        case 0x4717c0u: goto label_4717c0;
        case 0x4717c4u: goto label_4717c4;
        case 0x4717c8u: goto label_4717c8;
        case 0x4717ccu: goto label_4717cc;
        case 0x4717d0u: goto label_4717d0;
        case 0x4717d4u: goto label_4717d4;
        case 0x4717d8u: goto label_4717d8;
        case 0x4717dcu: goto label_4717dc;
        case 0x4717e0u: goto label_4717e0;
        case 0x4717e4u: goto label_4717e4;
        case 0x4717e8u: goto label_4717e8;
        case 0x4717ecu: goto label_4717ec;
        case 0x4717f0u: goto label_4717f0;
        case 0x4717f4u: goto label_4717f4;
        case 0x4717f8u: goto label_4717f8;
        case 0x4717fcu: goto label_4717fc;
        case 0x471800u: goto label_471800;
        case 0x471804u: goto label_471804;
        case 0x471808u: goto label_471808;
        case 0x47180cu: goto label_47180c;
        case 0x471810u: goto label_471810;
        case 0x471814u: goto label_471814;
        case 0x471818u: goto label_471818;
        case 0x47181cu: goto label_47181c;
        case 0x471820u: goto label_471820;
        case 0x471824u: goto label_471824;
        case 0x471828u: goto label_471828;
        case 0x47182cu: goto label_47182c;
        case 0x471830u: goto label_471830;
        case 0x471834u: goto label_471834;
        case 0x471838u: goto label_471838;
        case 0x47183cu: goto label_47183c;
        case 0x471840u: goto label_471840;
        case 0x471844u: goto label_471844;
        case 0x471848u: goto label_471848;
        case 0x47184cu: goto label_47184c;
        case 0x471850u: goto label_471850;
        case 0x471854u: goto label_471854;
        case 0x471858u: goto label_471858;
        case 0x47185cu: goto label_47185c;
        case 0x471860u: goto label_471860;
        case 0x471864u: goto label_471864;
        case 0x471868u: goto label_471868;
        case 0x47186cu: goto label_47186c;
        case 0x471870u: goto label_471870;
        case 0x471874u: goto label_471874;
        case 0x471878u: goto label_471878;
        case 0x47187cu: goto label_47187c;
        case 0x471880u: goto label_471880;
        case 0x471884u: goto label_471884;
        case 0x471888u: goto label_471888;
        case 0x47188cu: goto label_47188c;
        case 0x471890u: goto label_471890;
        case 0x471894u: goto label_471894;
        case 0x471898u: goto label_471898;
        case 0x47189cu: goto label_47189c;
        case 0x4718a0u: goto label_4718a0;
        case 0x4718a4u: goto label_4718a4;
        case 0x4718a8u: goto label_4718a8;
        case 0x4718acu: goto label_4718ac;
        case 0x4718b0u: goto label_4718b0;
        case 0x4718b4u: goto label_4718b4;
        case 0x4718b8u: goto label_4718b8;
        case 0x4718bcu: goto label_4718bc;
        case 0x4718c0u: goto label_4718c0;
        case 0x4718c4u: goto label_4718c4;
        case 0x4718c8u: goto label_4718c8;
        case 0x4718ccu: goto label_4718cc;
        case 0x4718d0u: goto label_4718d0;
        case 0x4718d4u: goto label_4718d4;
        case 0x4718d8u: goto label_4718d8;
        case 0x4718dcu: goto label_4718dc;
        case 0x4718e0u: goto label_4718e0;
        case 0x4718e4u: goto label_4718e4;
        case 0x4718e8u: goto label_4718e8;
        case 0x4718ecu: goto label_4718ec;
        case 0x4718f0u: goto label_4718f0;
        case 0x4718f4u: goto label_4718f4;
        case 0x4718f8u: goto label_4718f8;
        case 0x4718fcu: goto label_4718fc;
        case 0x471900u: goto label_471900;
        case 0x471904u: goto label_471904;
        case 0x471908u: goto label_471908;
        case 0x47190cu: goto label_47190c;
        case 0x471910u: goto label_471910;
        case 0x471914u: goto label_471914;
        case 0x471918u: goto label_471918;
        case 0x47191cu: goto label_47191c;
        case 0x471920u: goto label_471920;
        case 0x471924u: goto label_471924;
        case 0x471928u: goto label_471928;
        case 0x47192cu: goto label_47192c;
        case 0x471930u: goto label_471930;
        case 0x471934u: goto label_471934;
        case 0x471938u: goto label_471938;
        case 0x47193cu: goto label_47193c;
        case 0x471940u: goto label_471940;
        case 0x471944u: goto label_471944;
        case 0x471948u: goto label_471948;
        case 0x47194cu: goto label_47194c;
        case 0x471950u: goto label_471950;
        case 0x471954u: goto label_471954;
        case 0x471958u: goto label_471958;
        case 0x47195cu: goto label_47195c;
        case 0x471960u: goto label_471960;
        case 0x471964u: goto label_471964;
        case 0x471968u: goto label_471968;
        case 0x47196cu: goto label_47196c;
        case 0x471970u: goto label_471970;
        case 0x471974u: goto label_471974;
        case 0x471978u: goto label_471978;
        case 0x47197cu: goto label_47197c;
        case 0x471980u: goto label_471980;
        case 0x471984u: goto label_471984;
        case 0x471988u: goto label_471988;
        case 0x47198cu: goto label_47198c;
        case 0x471990u: goto label_471990;
        case 0x471994u: goto label_471994;
        case 0x471998u: goto label_471998;
        case 0x47199cu: goto label_47199c;
        case 0x4719a0u: goto label_4719a0;
        case 0x4719a4u: goto label_4719a4;
        case 0x4719a8u: goto label_4719a8;
        case 0x4719acu: goto label_4719ac;
        case 0x4719b0u: goto label_4719b0;
        case 0x4719b4u: goto label_4719b4;
        case 0x4719b8u: goto label_4719b8;
        case 0x4719bcu: goto label_4719bc;
        case 0x4719c0u: goto label_4719c0;
        case 0x4719c4u: goto label_4719c4;
        case 0x4719c8u: goto label_4719c8;
        case 0x4719ccu: goto label_4719cc;
        case 0x4719d0u: goto label_4719d0;
        case 0x4719d4u: goto label_4719d4;
        case 0x4719d8u: goto label_4719d8;
        case 0x4719dcu: goto label_4719dc;
        case 0x4719e0u: goto label_4719e0;
        case 0x4719e4u: goto label_4719e4;
        case 0x4719e8u: goto label_4719e8;
        case 0x4719ecu: goto label_4719ec;
        case 0x4719f0u: goto label_4719f0;
        case 0x4719f4u: goto label_4719f4;
        case 0x4719f8u: goto label_4719f8;
        case 0x4719fcu: goto label_4719fc;
        case 0x471a00u: goto label_471a00;
        case 0x471a04u: goto label_471a04;
        case 0x471a08u: goto label_471a08;
        case 0x471a0cu: goto label_471a0c;
        case 0x471a10u: goto label_471a10;
        case 0x471a14u: goto label_471a14;
        case 0x471a18u: goto label_471a18;
        case 0x471a1cu: goto label_471a1c;
        default: break;
    }

    ctx->pc = 0x471070u;

label_471070:
    // 0x471070: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x471070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_471074:
    // 0x471074: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x471074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_471078:
    // 0x471078: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x471078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_47107c:
    // 0x47107c: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x47107cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_471080:
    // 0x471080: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x471080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_471084:
    // 0x471084: 0x2463977e  addiu       $v1, $v1, -0x6882
    ctx->pc = 0x471084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940542));
label_471088:
    // 0x471088: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x471088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_47108c:
    // 0x47108c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x47108cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_471090:
    // 0x471090: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x471090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_471094:
    // 0x471094: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x471094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_471098:
    // 0x471098: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x471098u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47109c:
    // 0x47109c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47109cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4710a0:
    // 0x4710a0: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x4710a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_4710a4:
    // 0x4710a4: 0x430c0  sll         $a2, $a0, 3
    ctx->pc = 0x4710a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_4710a8:
    // 0x4710a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4710a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4710ac:
    // 0x4710ac: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x4710acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_4710b0:
    // 0x4710b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4710b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4710b4:
    // 0x4710b4: 0xc52023  subu        $a0, $a2, $a1
    ctx->pc = 0x4710b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_4710b8:
    // 0x4710b8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x4710b8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_4710bc:
    // 0x4710bc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4710bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4710c0:
    // 0x4710c0: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x4710c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_4710c4:
    // 0x4710c4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_4710c8:
    if (ctx->pc == 0x4710C8u) {
        ctx->pc = 0x4710C8u;
            // 0x4710c8: 0x24900070  addiu       $s0, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->pc = 0x4710CCu;
        goto label_4710cc;
    }
    ctx->pc = 0x4710C4u;
    {
        const bool branch_taken_0x4710c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4710C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4710C4u;
            // 0x4710c8: 0x24900070  addiu       $s0, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4710c4) {
            ctx->pc = 0x4710D4u;
            goto label_4710d4;
        }
    }
    ctx->pc = 0x4710CCu;
label_4710cc:
    // 0x4710cc: 0x1000024b  b           . + 4 + (0x24B << 2)
label_4710d0:
    if (ctx->pc == 0x4710D0u) {
        ctx->pc = 0x4710D0u;
            // 0x4710d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4710D4u;
        goto label_4710d4;
    }
    ctx->pc = 0x4710CCu;
    {
        const bool branch_taken_0x4710cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4710D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4710CCu;
            // 0x4710d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4710cc) {
            ctx->pc = 0x4719FCu;
            goto label_4719fc;
        }
    }
    ctx->pc = 0x4710D4u;
label_4710d4:
    // 0x4710d4: 0x96060002  lhu         $a2, 0x2($s0)
    ctx->pc = 0x4710d4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_4710d8:
    // 0x4710d8: 0x30c30400  andi        $v1, $a2, 0x400
    ctx->pc = 0x4710d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1024);
label_4710dc:
    // 0x4710dc: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_4710e0:
    if (ctx->pc == 0x4710E0u) {
        ctx->pc = 0x4710E0u;
            // 0x4710e0: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4710E4u;
        goto label_4710e4;
    }
    ctx->pc = 0x4710DCu;
    {
        const bool branch_taken_0x4710dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4710dc) {
            ctx->pc = 0x4710E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4710DCu;
            // 0x4710e0: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4710ECu;
            goto label_4710ec;
        }
    }
    ctx->pc = 0x4710E4u;
label_4710e4:
    // 0x4710e4: 0x10000246  b           . + 4 + (0x246 << 2)
label_4710e8:
    if (ctx->pc == 0x4710E8u) {
        ctx->pc = 0x4710E8u;
            // 0x4710e8: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x4710ECu;
        goto label_4710ec;
    }
    ctx->pc = 0x4710E4u;
    {
        const bool branch_taken_0x4710e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4710E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4710E4u;
            // 0x4710e8: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4710e4) {
            ctx->pc = 0x471A00u;
            goto label_471a00;
        }
    }
    ctx->pc = 0x4710ECu;
label_4710ec:
    // 0x4710ec: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
label_4710f0:
    if (ctx->pc == 0x4710F0u) {
        ctx->pc = 0x4710F0u;
            // 0x4710f0: 0x8e230054  lw          $v1, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->pc = 0x4710F4u;
        goto label_4710f4;
    }
    ctx->pc = 0x4710ECu;
    {
        const bool branch_taken_0x4710ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4710ec) {
            ctx->pc = 0x4710F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4710ECu;
            // 0x4710f0: 0x8e230054  lw          $v1, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4710FCu;
            goto label_4710fc;
        }
    }
    ctx->pc = 0x4710F4u;
label_4710f4:
    // 0x4710f4: 0x10000241  b           . + 4 + (0x241 << 2)
label_4710f8:
    if (ctx->pc == 0x4710F8u) {
        ctx->pc = 0x4710FCu;
        goto label_4710fc;
    }
    ctx->pc = 0x4710F4u;
    {
        const bool branch_taken_0x4710f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4710f4) {
            ctx->pc = 0x4719FCu;
            goto label_4719fc;
        }
    }
    ctx->pc = 0x4710FCu;
label_4710fc:
    // 0x4710fc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4710fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_471100:
    // 0x471100: 0x506001df  beql        $v1, $zero, . + 4 + (0x1DF << 2)
label_471104:
    if (ctx->pc == 0x471104u) {
        ctx->pc = 0x471104u;
            // 0x471104: 0x30c30200  andi        $v1, $a2, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)512);
        ctx->pc = 0x471108u;
        goto label_471108;
    }
    ctx->pc = 0x471100u;
    {
        const bool branch_taken_0x471100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x471100) {
            ctx->pc = 0x471104u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x471100u;
            // 0x471104: 0x30c30200  andi        $v1, $a2, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
            ctx->pc = 0x471880u;
            goto label_471880;
        }
    }
    ctx->pc = 0x471108u;
label_471108:
    // 0x471108: 0x54820003  bnel        $a0, $v0, . + 4 + (0x3 << 2)
label_47110c:
    if (ctx->pc == 0x47110Cu) {
        ctx->pc = 0x47110Cu;
            // 0x47110c: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x471110u;
        goto label_471110;
    }
    ctx->pc = 0x471108u;
    {
        const bool branch_taken_0x471108 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x471108) {
            ctx->pc = 0x47110Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x471108u;
            // 0x47110c: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x471118u;
            goto label_471118;
        }
    }
    ctx->pc = 0x471110u;
label_471110:
    // 0x471110: 0x1000023a  b           . + 4 + (0x23A << 2)
label_471114:
    if (ctx->pc == 0x471114u) {
        ctx->pc = 0x471118u;
        goto label_471118;
    }
    ctx->pc = 0x471110u;
    {
        const bool branch_taken_0x471110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x471110) {
            ctx->pc = 0x4719FCu;
            goto label_4719fc;
        }
    }
    ctx->pc = 0x471118u;
label_471118:
    // 0x471118: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x471118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_47111c:
    // 0x47111c: 0x1083009f  beq         $a0, $v1, . + 4 + (0x9F << 2)
label_471120:
    if (ctx->pc == 0x471120u) {
        ctx->pc = 0x471120u;
            // 0x471120: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x471124u;
        goto label_471124;
    }
    ctx->pc = 0x47111Cu;
    {
        const bool branch_taken_0x47111c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x471120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47111Cu;
            // 0x471120: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47111c) {
            ctx->pc = 0x47139Cu;
            goto label_47139c;
        }
    }
    ctx->pc = 0x471124u;
label_471124:
    // 0x471124: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x471124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_471128:
    // 0x471128: 0x50820007  beql        $a0, $v0, . + 4 + (0x7 << 2)
label_47112c:
    if (ctx->pc == 0x47112Cu) {
        ctx->pc = 0x47112Cu;
            // 0x47112c: 0x220a82d  daddu       $s5, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x471130u;
        goto label_471130;
    }
    ctx->pc = 0x471128u;
    {
        const bool branch_taken_0x471128 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x471128) {
            ctx->pc = 0x47112Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x471128u;
            // 0x47112c: 0x220a82d  daddu       $s5, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x471148u;
            goto label_471148;
        }
    }
    ctx->pc = 0x471130u;
label_471130:
    // 0x471130: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x471130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_471134:
    // 0x471134: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_471138:
    if (ctx->pc == 0x471138u) {
        ctx->pc = 0x47113Cu;
        goto label_47113c;
    }
    ctx->pc = 0x471134u;
    {
        const bool branch_taken_0x471134 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x471134) {
            ctx->pc = 0x471144u;
            goto label_471144;
        }
    }
    ctx->pc = 0x47113Cu;
label_47113c:
    // 0x47113c: 0x1000022f  b           . + 4 + (0x22F << 2)
label_471140:
    if (ctx->pc == 0x471140u) {
        ctx->pc = 0x471140u;
            // 0x471140: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x471144u;
        goto label_471144;
    }
    ctx->pc = 0x47113Cu;
    {
        const bool branch_taken_0x47113c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x471140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47113Cu;
            // 0x471140: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47113c) {
            ctx->pc = 0x4719FCu;
            goto label_4719fc;
        }
    }
    ctx->pc = 0x471144u;
label_471144:
    // 0x471144: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x471144u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_471148:
    // 0x471148: 0x96a30072  lhu         $v1, 0x72($s5)
    ctx->pc = 0x471148u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 114)));
label_47114c:
    // 0x47114c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x47114cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_471150:
    // 0x471150: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x471150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_471154:
    // 0x471154: 0x30630600  andi        $v1, $v1, 0x600
    ctx->pc = 0x471154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1536);
label_471158:
    // 0x471158: 0xa6a30072  sh          $v1, 0x72($s5)
    ctx->pc = 0x471158u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 114), (uint16_t)GPR_U32(ctx, 3));
label_47115c:
    // 0x47115c: 0xaea00078  sw          $zero, 0x78($s5)
    ctx->pc = 0x47115cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 120), GPR_U32(ctx, 0));
label_471160:
    // 0x471160: 0xa6a00074  sh          $zero, 0x74($s5)
    ctx->pc = 0x471160u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 116), (uint16_t)GPR_U32(ctx, 0));
label_471164:
    // 0x471164: 0xa6a40076  sh          $a0, 0x76($s5)
    ctx->pc = 0x471164u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 118), (uint16_t)GPR_U32(ctx, 4));
label_471168:
    // 0x471168: 0x92a30070  lbu         $v1, 0x70($s5)
    ctx->pc = 0x471168u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 112)));
label_47116c:
    // 0x47116c: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
label_471170:
    if (ctx->pc == 0x471170u) {
        ctx->pc = 0x471170u;
            // 0x471170: 0x26b40070  addiu       $s4, $s5, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
        ctx->pc = 0x471174u;
        goto label_471174;
    }
    ctx->pc = 0x47116Cu;
    {
        const bool branch_taken_0x47116c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x471170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47116Cu;
            // 0x471170: 0x26b40070  addiu       $s4, $s5, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47116c) {
            ctx->pc = 0x471200u;
            goto label_471200;
        }
    }
    ctx->pc = 0x471174u;
label_471174:
    // 0x471174: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x471174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_471178:
    // 0x471178: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
label_47117c:
    if (ctx->pc == 0x47117Cu) {
        ctx->pc = 0x471180u;
        goto label_471180;
    }
    ctx->pc = 0x471178u;
    {
        const bool branch_taken_0x471178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x471178) {
            ctx->pc = 0x471200u;
            goto label_471200;
        }
    }
    ctx->pc = 0x471180u;
label_471180:
    // 0x471180: 0x1064001f  beq         $v1, $a0, . + 4 + (0x1F << 2)
label_471184:
    if (ctx->pc == 0x471184u) {
        ctx->pc = 0x471188u;
        goto label_471188;
    }
    ctx->pc = 0x471180u;
    {
        const bool branch_taken_0x471180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x471180) {
            ctx->pc = 0x471200u;
            goto label_471200;
        }
    }
    ctx->pc = 0x471188u;
label_471188:
    // 0x471188: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x471188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_47118c:
    // 0x47118c: 0x92820001  lbu         $v0, 0x1($s4)
    ctx->pc = 0x47118cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
label_471190:
    // 0x471190: 0x8c730004  lw          $s3, 0x4($v1)
    ctx->pc = 0x471190u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_471194:
    // 0x471194: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x471194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_471198:
    // 0x471198: 0x29080  sll         $s2, $v0, 2
    ctx->pc = 0x471198u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47119c:
    // 0x47119c: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x47119cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_4711a0:
    // 0x4711a0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4711a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4711a4:
    // 0x4711a4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4711a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4711a8:
    // 0x4711a8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4711a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4711ac:
    // 0x4711ac: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x4711acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_4711b0:
    // 0x4711b0: 0x320f809  jalr        $t9
label_4711b4:
    if (ctx->pc == 0x4711B4u) {
        ctx->pc = 0x4711B4u;
            // 0x4711b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4711B8u;
        goto label_4711b8;
    }
    ctx->pc = 0x4711B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4711B8u);
        ctx->pc = 0x4711B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4711B0u;
            // 0x4711b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4711B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4711B8u; }
            if (ctx->pc != 0x4711B8u) { return; }
        }
        }
    }
    ctx->pc = 0x4711B8u;
label_4711b8:
    // 0x4711b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4711b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4711bc:
    // 0x4711bc: 0xa262007c  sb          $v0, 0x7C($s3)
    ctx->pc = 0x4711bcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 124), (uint8_t)GPR_U32(ctx, 2));
label_4711c0:
    // 0x4711c0: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x4711c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_4711c4:
    // 0x4711c4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4711c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4711c8:
    // 0x4711c8: 0xc123848  jal         func_48E120
label_4711cc:
    if (ctx->pc == 0x4711CCu) {
        ctx->pc = 0x4711CCu;
            // 0x4711cc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4711D0u;
        goto label_4711d0;
    }
    ctx->pc = 0x4711C8u;
    SET_GPR_U32(ctx, 31, 0x4711D0u);
    ctx->pc = 0x4711CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4711C8u;
            // 0x4711cc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E120u;
    if (runtime->hasFunction(0x48E120u)) {
        auto targetFn = runtime->lookupFunction(0x48E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4711D0u; }
        if (ctx->pc != 0x4711D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E120_0x48e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4711D0u; }
        if (ctx->pc != 0x4711D0u) { return; }
    }
    ctx->pc = 0x4711D0u;
label_4711d0:
    // 0x4711d0: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x4711d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_4711d4:
    // 0x4711d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4711d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4711d8:
    // 0x4711d8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4711d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4711dc:
    // 0x4711dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4711dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4711e0:
    // 0x4711e0: 0xa4430046  sh          $v1, 0x46($v0)
    ctx->pc = 0x4711e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 3));
label_4711e4:
    // 0x4711e4: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x4711e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_4711e8:
    // 0x4711e8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x4711e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4711ec:
    // 0x4711ec: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x4711ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_4711f0:
    // 0x4711f0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4711f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4711f4:
    // 0x4711f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4711f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4711f8:
    // 0x4711f8: 0xa4400046  sh          $zero, 0x46($v0)
    ctx->pc = 0x4711f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
label_4711fc:
    // 0x4711fc: 0x0  nop
    ctx->pc = 0x4711fcu;
    // NOP
label_471200:
    // 0x471200: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x471200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_471204:
    // 0x471204: 0xa2820000  sb          $v0, 0x0($s4)
    ctx->pc = 0x471204u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
label_471208:
    // 0x471208: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x471208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_47120c:
    // 0x47120c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x47120cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_471210:
    // 0x471210: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x471210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_471214:
    // 0x471214: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x471214u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_471218:
    // 0x471218: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x471218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47121c:
    // 0x47121c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x47121cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_471220:
    // 0x471220: 0x8c450098  lw          $a1, 0x98($v0)
    ctx->pc = 0x471220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
label_471224:
    // 0x471224: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_471228:
    if (ctx->pc == 0x471228u) {
        ctx->pc = 0x471228u;
            // 0x471228: 0x24530070  addiu       $s3, $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
        ctx->pc = 0x47122Cu;
        goto label_47122c;
    }
    ctx->pc = 0x471224u;
    {
        const bool branch_taken_0x471224 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x471228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x471224u;
            // 0x471228: 0x24530070  addiu       $s3, $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471224) {
            ctx->pc = 0x471250u;
            goto label_471250;
        }
    }
    ctx->pc = 0x47122Cu;
label_47122c:
    // 0x47122c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_471230:
    if (ctx->pc == 0x471230u) {
        ctx->pc = 0x471234u;
        goto label_471234;
    }
    ctx->pc = 0x47122Cu;
    {
        const bool branch_taken_0x47122c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x47122c) {
            ctx->pc = 0x471248u;
            goto label_471248;
        }
    }
    ctx->pc = 0x471234u;
label_471234:
    // 0x471234: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x471234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_471238:
    // 0x471238: 0xc0fe48c  jal         func_3F9230
label_47123c:
    if (ctx->pc == 0x47123Cu) {
        ctx->pc = 0x47123Cu;
            // 0x47123c: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x471240u;
        goto label_471240;
    }
    ctx->pc = 0x471238u;
    SET_GPR_U32(ctx, 31, 0x471240u);
    ctx->pc = 0x47123Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x471238u;
            // 0x47123c: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471240u; }
        if (ctx->pc != 0x471240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471240u; }
        if (ctx->pc != 0x471240u) { return; }
    }
    ctx->pc = 0x471240u;
label_471240:
    // 0x471240: 0xae600028  sw          $zero, 0x28($s3)
    ctx->pc = 0x471240u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 0));
label_471244:
    // 0x471244: 0x0  nop
    ctx->pc = 0x471244u;
    // NOP
label_471248:
    // 0x471248: 0xae600028  sw          $zero, 0x28($s3)
    ctx->pc = 0x471248u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 0));
label_47124c:
    // 0x47124c: 0x0  nop
    ctx->pc = 0x47124cu;
    // NOP
label_471250:
    // 0x471250: 0x8e650020  lw          $a1, 0x20($s3)
    ctx->pc = 0x471250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_471254:
    // 0x471254: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_471258:
    if (ctx->pc == 0x471258u) {
        ctx->pc = 0x47125Cu;
        goto label_47125c;
    }
    ctx->pc = 0x471254u;
    {
        const bool branch_taken_0x471254 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x471254) {
            ctx->pc = 0x471280u;
            goto label_471280;
        }
    }
    ctx->pc = 0x47125Cu;
label_47125c:
    // 0x47125c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_471260:
    if (ctx->pc == 0x471260u) {
        ctx->pc = 0x471264u;
        goto label_471264;
    }
    ctx->pc = 0x47125Cu;
    {
        const bool branch_taken_0x47125c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x47125c) {
            ctx->pc = 0x471278u;
            goto label_471278;
        }
    }
    ctx->pc = 0x471264u;
label_471264:
    // 0x471264: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x471264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_471268:
    // 0x471268: 0xc0fe48c  jal         func_3F9230
label_47126c:
    if (ctx->pc == 0x47126Cu) {
        ctx->pc = 0x47126Cu;
            // 0x47126c: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x471270u;
        goto label_471270;
    }
    ctx->pc = 0x471268u;
    SET_GPR_U32(ctx, 31, 0x471270u);
    ctx->pc = 0x47126Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x471268u;
            // 0x47126c: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471270u; }
        if (ctx->pc != 0x471270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471270u; }
        if (ctx->pc != 0x471270u) { return; }
    }
    ctx->pc = 0x471270u;
label_471270:
    // 0x471270: 0xae600020  sw          $zero, 0x20($s3)
    ctx->pc = 0x471270u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
label_471274:
    // 0x471274: 0x0  nop
    ctx->pc = 0x471274u;
    // NOP
label_471278:
    // 0x471278: 0xae600020  sw          $zero, 0x20($s3)
    ctx->pc = 0x471278u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
label_47127c:
    // 0x47127c: 0x0  nop
    ctx->pc = 0x47127cu;
    // NOP
label_471280:
    // 0x471280: 0x8e650024  lw          $a1, 0x24($s3)
    ctx->pc = 0x471280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_471284:
    // 0x471284: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_471288:
    if (ctx->pc == 0x471288u) {
        ctx->pc = 0x47128Cu;
        goto label_47128c;
    }
    ctx->pc = 0x471284u;
    {
        const bool branch_taken_0x471284 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x471284) {
            ctx->pc = 0x4712B0u;
            goto label_4712b0;
        }
    }
    ctx->pc = 0x47128Cu;
label_47128c:
    // 0x47128c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_471290:
    if (ctx->pc == 0x471290u) {
        ctx->pc = 0x471294u;
        goto label_471294;
    }
    ctx->pc = 0x47128Cu;
    {
        const bool branch_taken_0x47128c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x47128c) {
            ctx->pc = 0x4712A8u;
            goto label_4712a8;
        }
    }
    ctx->pc = 0x471294u;
label_471294:
    // 0x471294: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x471294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_471298:
    // 0x471298: 0xc0fe48c  jal         func_3F9230
label_47129c:
    if (ctx->pc == 0x47129Cu) {
        ctx->pc = 0x47129Cu;
            // 0x47129c: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x4712A0u;
        goto label_4712a0;
    }
    ctx->pc = 0x471298u;
    SET_GPR_U32(ctx, 31, 0x4712A0u);
    ctx->pc = 0x47129Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x471298u;
            // 0x47129c: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4712A0u; }
        if (ctx->pc != 0x4712A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4712A0u; }
        if (ctx->pc != 0x4712A0u) { return; }
    }
    ctx->pc = 0x4712A0u;
label_4712a0:
    // 0x4712a0: 0xae600024  sw          $zero, 0x24($s3)
    ctx->pc = 0x4712a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
label_4712a4:
    // 0x4712a4: 0x0  nop
    ctx->pc = 0x4712a4u;
    // NOP
label_4712a8:
    // 0x4712a8: 0xae600024  sw          $zero, 0x24($s3)
    ctx->pc = 0x4712a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
label_4712ac:
    // 0x4712ac: 0x0  nop
    ctx->pc = 0x4712acu;
    // NOP
label_4712b0:
    // 0x4712b0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4712b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4712b4:
    // 0x4712b4: 0x0  nop
    ctx->pc = 0x4712b4u;
    // NOP
label_4712b8:
    // 0x4712b8: 0x8e65002c  lw          $a1, 0x2C($s3)
    ctx->pc = 0x4712b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_4712bc:
    // 0x4712bc: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_4712c0:
    if (ctx->pc == 0x4712C0u) {
        ctx->pc = 0x4712C4u;
        goto label_4712c4;
    }
    ctx->pc = 0x4712BCu;
    {
        const bool branch_taken_0x4712bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4712bc) {
            ctx->pc = 0x4712E8u;
            goto label_4712e8;
        }
    }
    ctx->pc = 0x4712C4u;
label_4712c4:
    // 0x4712c4: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_4712c8:
    if (ctx->pc == 0x4712C8u) {
        ctx->pc = 0x4712CCu;
        goto label_4712cc;
    }
    ctx->pc = 0x4712C4u;
    {
        const bool branch_taken_0x4712c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4712c4) {
            ctx->pc = 0x4712E0u;
            goto label_4712e0;
        }
    }
    ctx->pc = 0x4712CCu;
label_4712cc:
    // 0x4712cc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4712ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4712d0:
    // 0x4712d0: 0xc0fe48c  jal         func_3F9230
label_4712d4:
    if (ctx->pc == 0x4712D4u) {
        ctx->pc = 0x4712D4u;
            // 0x4712d4: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x4712D8u;
        goto label_4712d8;
    }
    ctx->pc = 0x4712D0u;
    SET_GPR_U32(ctx, 31, 0x4712D8u);
    ctx->pc = 0x4712D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4712D0u;
            // 0x4712d4: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4712D8u; }
        if (ctx->pc != 0x4712D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4712D8u; }
        if (ctx->pc != 0x4712D8u) { return; }
    }
    ctx->pc = 0x4712D8u;
label_4712d8:
    // 0x4712d8: 0xae60002c  sw          $zero, 0x2C($s3)
    ctx->pc = 0x4712d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 0));
label_4712dc:
    // 0x4712dc: 0x0  nop
    ctx->pc = 0x4712dcu;
    // NOP
label_4712e0:
    // 0x4712e0: 0xae60002c  sw          $zero, 0x2C($s3)
    ctx->pc = 0x4712e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 0));
label_4712e4:
    // 0x4712e4: 0x0  nop
    ctx->pc = 0x4712e4u;
    // NOP
label_4712e8:
    // 0x4712e8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4712e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4712ec:
    // 0x4712ec: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x4712ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
label_4712f0:
    // 0x4712f0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_4712f4:
    if (ctx->pc == 0x4712F4u) {
        ctx->pc = 0x4712F4u;
            // 0x4712f4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x4712F8u;
        goto label_4712f8;
    }
    ctx->pc = 0x4712F0u;
    {
        const bool branch_taken_0x4712f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4712F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4712F0u;
            // 0x4712f4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4712f0) {
            ctx->pc = 0x4712B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4712b8;
        }
    }
    ctx->pc = 0x4712F8u;
label_4712f8:
    // 0x4712f8: 0x8e85004c  lw          $a1, 0x4C($s4)
    ctx->pc = 0x4712f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_4712fc:
    // 0x4712fc: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_471300:
    if (ctx->pc == 0x471300u) {
        ctx->pc = 0x471304u;
        goto label_471304;
    }
    ctx->pc = 0x4712FCu;
    {
        const bool branch_taken_0x4712fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4712fc) {
            ctx->pc = 0x471320u;
            goto label_471320;
        }
    }
    ctx->pc = 0x471304u;
label_471304:
    // 0x471304: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_471308:
    if (ctx->pc == 0x471308u) {
        ctx->pc = 0x47130Cu;
        goto label_47130c;
    }
    ctx->pc = 0x471304u;
    {
        const bool branch_taken_0x471304 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x471304) {
            ctx->pc = 0x471320u;
            goto label_471320;
        }
    }
    ctx->pc = 0x47130Cu;
label_47130c:
    // 0x47130c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x47130cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_471310:
    // 0x471310: 0xc0fe48c  jal         func_3F9230
label_471314:
    if (ctx->pc == 0x471314u) {
        ctx->pc = 0x471314u;
            // 0x471314: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x471318u;
        goto label_471318;
    }
    ctx->pc = 0x471310u;
    SET_GPR_U32(ctx, 31, 0x471318u);
    ctx->pc = 0x471314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x471310u;
            // 0x471314: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471318u; }
        if (ctx->pc != 0x471318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471318u; }
        if (ctx->pc != 0x471318u) { return; }
    }
    ctx->pc = 0x471318u;
label_471318:
    // 0x471318: 0xae80004c  sw          $zero, 0x4C($s4)
    ctx->pc = 0x471318u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 0));
label_47131c:
    // 0x47131c: 0x0  nop
    ctx->pc = 0x47131cu;
    // NOP
label_471320:
    // 0x471320: 0xae80004c  sw          $zero, 0x4C($s4)
    ctx->pc = 0x471320u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 0));
label_471324:
    // 0x471324: 0x8e850048  lw          $a1, 0x48($s4)
    ctx->pc = 0x471324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
label_471328:
    // 0x471328: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_47132c:
    if (ctx->pc == 0x47132Cu) {
        ctx->pc = 0x471330u;
        goto label_471330;
    }
    ctx->pc = 0x471328u;
    {
        const bool branch_taken_0x471328 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x471328) {
            ctx->pc = 0x471348u;
            goto label_471348;
        }
    }
    ctx->pc = 0x471330u;
label_471330:
    // 0x471330: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_471334:
    if (ctx->pc == 0x471334u) {
        ctx->pc = 0x471338u;
        goto label_471338;
    }
    ctx->pc = 0x471330u;
    {
        const bool branch_taken_0x471330 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x471330) {
            ctx->pc = 0x471348u;
            goto label_471348;
        }
    }
    ctx->pc = 0x471338u;
label_471338:
    // 0x471338: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x471338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_47133c:
    // 0x47133c: 0xc0fe48c  jal         func_3F9230
label_471340:
    if (ctx->pc == 0x471340u) {
        ctx->pc = 0x471340u;
            // 0x471340: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x471344u;
        goto label_471344;
    }
    ctx->pc = 0x47133Cu;
    SET_GPR_U32(ctx, 31, 0x471344u);
    ctx->pc = 0x471340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47133Cu;
            // 0x471340: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471344u; }
        if (ctx->pc != 0x471344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471344u; }
        if (ctx->pc != 0x471344u) { return; }
    }
    ctx->pc = 0x471344u;
label_471344:
    // 0x471344: 0xae800048  sw          $zero, 0x48($s4)
    ctx->pc = 0x471344u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 0));
label_471348:
    // 0x471348: 0xae800048  sw          $zero, 0x48($s4)
    ctx->pc = 0x471348u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 0));
label_47134c:
    // 0x47134c: 0x8e850044  lw          $a1, 0x44($s4)
    ctx->pc = 0x47134cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
label_471350:
    // 0x471350: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_471354:
    if (ctx->pc == 0x471354u) {
        ctx->pc = 0x471358u;
        goto label_471358;
    }
    ctx->pc = 0x471350u;
    {
        const bool branch_taken_0x471350 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x471350) {
            ctx->pc = 0x471370u;
            goto label_471370;
        }
    }
    ctx->pc = 0x471358u;
label_471358:
    // 0x471358: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_47135c:
    if (ctx->pc == 0x47135Cu) {
        ctx->pc = 0x471360u;
        goto label_471360;
    }
    ctx->pc = 0x471358u;
    {
        const bool branch_taken_0x471358 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x471358) {
            ctx->pc = 0x471370u;
            goto label_471370;
        }
    }
    ctx->pc = 0x471360u;
label_471360:
    // 0x471360: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x471360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_471364:
    // 0x471364: 0xc0fe48c  jal         func_3F9230
label_471368:
    if (ctx->pc == 0x471368u) {
        ctx->pc = 0x471368u;
            // 0x471368: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x47136Cu;
        goto label_47136c;
    }
    ctx->pc = 0x471364u;
    SET_GPR_U32(ctx, 31, 0x47136Cu);
    ctx->pc = 0x471368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x471364u;
            // 0x471368: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47136Cu; }
        if (ctx->pc != 0x47136Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47136Cu; }
        if (ctx->pc != 0x47136Cu) { return; }
    }
    ctx->pc = 0x47136Cu;
label_47136c:
    // 0x47136c: 0xae800044  sw          $zero, 0x44($s4)
    ctx->pc = 0x47136cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 0));
label_471370:
    // 0x471370: 0xae800044  sw          $zero, 0x44($s4)
    ctx->pc = 0x471370u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 0));
label_471374:
    // 0x471374: 0xae800058  sw          $zero, 0x58($s4)
    ctx->pc = 0x471374u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 0));
label_471378:
    // 0x471378: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x471378u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_47137c:
    // 0x47137c: 0xae800054  sw          $zero, 0x54($s4)
    ctx->pc = 0x47137cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 0));
label_471380:
    // 0x471380: 0xae800050  sw          $zero, 0x50($s4)
    ctx->pc = 0x471380u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 0));
label_471384:
    // 0x471384: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x471384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_471388:
    // 0x471388: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x471388u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_47138c:
    // 0x47138c: 0x1440ff6e  bnez        $v0, . + 4 + (-0x92 << 2)
label_471390:
    if (ctx->pc == 0x471390u) {
        ctx->pc = 0x471390u;
            // 0x471390: 0x26b5005c  addiu       $s5, $s5, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 92));
        ctx->pc = 0x471394u;
        goto label_471394;
    }
    ctx->pc = 0x47138Cu;
    {
        const bool branch_taken_0x47138c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x471390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47138Cu;
            // 0x471390: 0x26b5005c  addiu       $s5, $s5, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47138c) {
            ctx->pc = 0x471148u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_471148;
        }
    }
    ctx->pc = 0x471394u;
label_471394:
    // 0x471394: 0x10000198  b           . + 4 + (0x198 << 2)
label_471398:
    if (ctx->pc == 0x471398u) {
        ctx->pc = 0x47139Cu;
        goto label_47139c;
    }
    ctx->pc = 0x471394u;
    {
        const bool branch_taken_0x471394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x471394) {
            ctx->pc = 0x4719F8u;
            goto label_4719f8;
        }
    }
    ctx->pc = 0x47139Cu;
label_47139c:
    // 0x47139c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x47139cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4713a0:
    // 0x4713a0: 0x50a300a2  beql        $a1, $v1, . + 4 + (0xA2 << 2)
label_4713a4:
    if (ctx->pc == 0x4713A4u) {
        ctx->pc = 0x4713A4u;
            // 0x4713a4: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4713A8u;
        goto label_4713a8;
    }
    ctx->pc = 0x4713A0u;
    {
        const bool branch_taken_0x4713a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4713a0) {
            ctx->pc = 0x4713A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4713A0u;
            // 0x4713a4: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47162Cu;
            goto label_47162c;
        }
    }
    ctx->pc = 0x4713A8u;
label_4713a8:
    // 0x4713a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4713a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4713ac:
    // 0x4713ac: 0x10a3009e  beq         $a1, $v1, . + 4 + (0x9E << 2)
label_4713b0:
    if (ctx->pc == 0x4713B0u) {
        ctx->pc = 0x4713B4u;
        goto label_4713b4;
    }
    ctx->pc = 0x4713ACu;
    {
        const bool branch_taken_0x4713ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4713ac) {
            ctx->pc = 0x471628u;
            goto label_471628;
        }
    }
    ctx->pc = 0x4713B4u;
label_4713b4:
    // 0x4713b4: 0x50a20006  beql        $a1, $v0, . + 4 + (0x6 << 2)
label_4713b8:
    if (ctx->pc == 0x4713B8u) {
        ctx->pc = 0x4713B8u;
            // 0x4713b8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4713BCu;
        goto label_4713bc;
    }
    ctx->pc = 0x4713B4u;
    {
        const bool branch_taken_0x4713b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x4713b4) {
            ctx->pc = 0x4713B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4713B4u;
            // 0x4713b8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4713D0u;
            goto label_4713d0;
        }
    }
    ctx->pc = 0x4713BCu;
label_4713bc:
    // 0x4713bc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_4713c0:
    if (ctx->pc == 0x4713C0u) {
        ctx->pc = 0x4713C4u;
        goto label_4713c4;
    }
    ctx->pc = 0x4713BCu;
    {
        const bool branch_taken_0x4713bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4713bc) {
            ctx->pc = 0x4713CCu;
            goto label_4713cc;
        }
    }
    ctx->pc = 0x4713C4u;
label_4713c4:
    // 0x4713c4: 0x1000018c  b           . + 4 + (0x18C << 2)
label_4713c8:
    if (ctx->pc == 0x4713C8u) {
        ctx->pc = 0x4713CCu;
        goto label_4713cc;
    }
    ctx->pc = 0x4713C4u;
    {
        const bool branch_taken_0x4713c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4713c4) {
            ctx->pc = 0x4719F8u;
            goto label_4719f8;
        }
    }
    ctx->pc = 0x4713CCu;
label_4713cc:
    // 0x4713cc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4713ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4713d0:
    // 0x4713d0: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x4713d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4713d4:
    // 0x4713d4: 0x96a30072  lhu         $v1, 0x72($s5)
    ctx->pc = 0x4713d4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 114)));
label_4713d8:
    // 0x4713d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4713d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4713dc:
    // 0x4713dc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4713dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4713e0:
    // 0x4713e0: 0x30630600  andi        $v1, $v1, 0x600
    ctx->pc = 0x4713e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1536);
label_4713e4:
    // 0x4713e4: 0xa6a30072  sh          $v1, 0x72($s5)
    ctx->pc = 0x4713e4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 114), (uint16_t)GPR_U32(ctx, 3));
label_4713e8:
    // 0x4713e8: 0xaea00078  sw          $zero, 0x78($s5)
    ctx->pc = 0x4713e8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 120), GPR_U32(ctx, 0));
label_4713ec:
    // 0x4713ec: 0xa6a00074  sh          $zero, 0x74($s5)
    ctx->pc = 0x4713ecu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 116), (uint16_t)GPR_U32(ctx, 0));
label_4713f0:
    // 0x4713f0: 0xa6a40076  sh          $a0, 0x76($s5)
    ctx->pc = 0x4713f0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 118), (uint16_t)GPR_U32(ctx, 4));
label_4713f4:
    // 0x4713f4: 0x92a30070  lbu         $v1, 0x70($s5)
    ctx->pc = 0x4713f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 112)));
label_4713f8:
    // 0x4713f8: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
label_4713fc:
    if (ctx->pc == 0x4713FCu) {
        ctx->pc = 0x4713FCu;
            // 0x4713fc: 0x26b30070  addiu       $s3, $s5, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
        ctx->pc = 0x471400u;
        goto label_471400;
    }
    ctx->pc = 0x4713F8u;
    {
        const bool branch_taken_0x4713f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4713FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4713F8u;
            // 0x4713fc: 0x26b30070  addiu       $s3, $s5, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4713f8) {
            ctx->pc = 0x471490u;
            goto label_471490;
        }
    }
    ctx->pc = 0x471400u;
label_471400:
    // 0x471400: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x471400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_471404:
    // 0x471404: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
label_471408:
    if (ctx->pc == 0x471408u) {
        ctx->pc = 0x47140Cu;
        goto label_47140c;
    }
    ctx->pc = 0x471404u;
    {
        const bool branch_taken_0x471404 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x471404) {
            ctx->pc = 0x471490u;
            goto label_471490;
        }
    }
    ctx->pc = 0x47140Cu;
label_47140c:
    // 0x47140c: 0x10640020  beq         $v1, $a0, . + 4 + (0x20 << 2)
label_471410:
    if (ctx->pc == 0x471410u) {
        ctx->pc = 0x471414u;
        goto label_471414;
    }
    ctx->pc = 0x47140Cu;
    {
        const bool branch_taken_0x47140c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x47140c) {
            ctx->pc = 0x471490u;
            goto label_471490;
        }
    }
    ctx->pc = 0x471414u;
label_471414:
    // 0x471414: 0x0  nop
    ctx->pc = 0x471414u;
    // NOP
label_471418:
    // 0x471418: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x471418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_47141c:
    // 0x47141c: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x47141cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_471420:
    // 0x471420: 0x8c720004  lw          $s2, 0x4($v1)
    ctx->pc = 0x471420u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_471424:
    // 0x471424: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x471424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_471428:
    // 0x471428: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x471428u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47142c:
    // 0x47142c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x47142cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_471430:
    // 0x471430: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x471430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_471434:
    // 0x471434: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x471434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_471438:
    // 0x471438: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x471438u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_47143c:
    // 0x47143c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x47143cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_471440:
    // 0x471440: 0x320f809  jalr        $t9
label_471444:
    if (ctx->pc == 0x471444u) {
        ctx->pc = 0x471444u;
            // 0x471444: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x471448u;
        goto label_471448;
    }
    ctx->pc = 0x471440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x471448u);
        ctx->pc = 0x471444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x471440u;
            // 0x471444: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x471448u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x471448u; }
            if (ctx->pc != 0x471448u) { return; }
        }
        }
    }
    ctx->pc = 0x471448u;
label_471448:
    // 0x471448: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x471448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47144c:
    // 0x47144c: 0xa242007c  sb          $v0, 0x7C($s2)
    ctx->pc = 0x47144cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 124), (uint8_t)GPR_U32(ctx, 2));
label_471450:
    // 0x471450: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x471450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_471454:
    // 0x471454: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x471454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_471458:
    // 0x471458: 0xc123848  jal         func_48E120
label_47145c:
    if (ctx->pc == 0x47145Cu) {
        ctx->pc = 0x47145Cu;
            // 0x47145c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x471460u;
        goto label_471460;
    }
    ctx->pc = 0x471458u;
    SET_GPR_U32(ctx, 31, 0x471460u);
    ctx->pc = 0x47145Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x471458u;
            // 0x47145c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E120u;
    if (runtime->hasFunction(0x48E120u)) {
        auto targetFn = runtime->lookupFunction(0x48E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471460u; }
        if (ctx->pc != 0x471460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E120_0x48e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471460u; }
        if (ctx->pc != 0x471460u) { return; }
    }
    ctx->pc = 0x471460u;
label_471460:
    // 0x471460: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x471460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_471464:
    // 0x471464: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x471464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_471468:
    // 0x471468: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x471468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_47146c:
    // 0x47146c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x47146cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_471470:
    // 0x471470: 0xa4430046  sh          $v1, 0x46($v0)
    ctx->pc = 0x471470u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 3));
label_471474:
    // 0x471474: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x471474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_471478:
    // 0x471478: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x471478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_47147c:
    // 0x47147c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x47147cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_471480:
    // 0x471480: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x471480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_471484:
    // 0x471484: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x471484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_471488:
    // 0x471488: 0xa4400046  sh          $zero, 0x46($v0)
    ctx->pc = 0x471488u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
label_47148c:
    // 0x47148c: 0x0  nop
    ctx->pc = 0x47148cu;
    // NOP
label_471490:
    // 0x471490: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x471490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_471494:
    // 0x471494: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x471494u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_471498:
    // 0x471498: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x471498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
label_47149c:
    // 0x47149c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x47149cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_4714a0:
    // 0x4714a0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4714a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4714a4:
    // 0x4714a4: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x4714a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_4714a8:
    // 0x4714a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4714a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4714ac:
    // 0x4714ac: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x4714acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4714b0:
    // 0x4714b0: 0x8c450098  lw          $a1, 0x98($v0)
    ctx->pc = 0x4714b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
label_4714b4:
    // 0x4714b4: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_4714b8:
    if (ctx->pc == 0x4714B8u) {
        ctx->pc = 0x4714B8u;
            // 0x4714b8: 0x24520070  addiu       $s2, $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
        ctx->pc = 0x4714BCu;
        goto label_4714bc;
    }
    ctx->pc = 0x4714B4u;
    {
        const bool branch_taken_0x4714b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4714B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4714B4u;
            // 0x4714b8: 0x24520070  addiu       $s2, $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4714b4) {
            ctx->pc = 0x4714E0u;
            goto label_4714e0;
        }
    }
    ctx->pc = 0x4714BCu;
label_4714bc:
    // 0x4714bc: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_4714c0:
    if (ctx->pc == 0x4714C0u) {
        ctx->pc = 0x4714C4u;
        goto label_4714c4;
    }
    ctx->pc = 0x4714BCu;
    {
        const bool branch_taken_0x4714bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4714bc) {
            ctx->pc = 0x4714D8u;
            goto label_4714d8;
        }
    }
    ctx->pc = 0x4714C4u;
label_4714c4:
    // 0x4714c4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4714c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4714c8:
    // 0x4714c8: 0xc0fe48c  jal         func_3F9230
label_4714cc:
    if (ctx->pc == 0x4714CCu) {
        ctx->pc = 0x4714CCu;
            // 0x4714cc: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x4714D0u;
        goto label_4714d0;
    }
    ctx->pc = 0x4714C8u;
    SET_GPR_U32(ctx, 31, 0x4714D0u);
    ctx->pc = 0x4714CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4714C8u;
            // 0x4714cc: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4714D0u; }
        if (ctx->pc != 0x4714D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4714D0u; }
        if (ctx->pc != 0x4714D0u) { return; }
    }
    ctx->pc = 0x4714D0u;
label_4714d0:
    // 0x4714d0: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x4714d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
label_4714d4:
    // 0x4714d4: 0x0  nop
    ctx->pc = 0x4714d4u;
    // NOP
label_4714d8:
    // 0x4714d8: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x4714d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
label_4714dc:
    // 0x4714dc: 0x0  nop
    ctx->pc = 0x4714dcu;
    // NOP
label_4714e0:
    // 0x4714e0: 0x8e450020  lw          $a1, 0x20($s2)
    ctx->pc = 0x4714e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_4714e4:
    // 0x4714e4: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_4714e8:
    if (ctx->pc == 0x4714E8u) {
        ctx->pc = 0x4714ECu;
        goto label_4714ec;
    }
    ctx->pc = 0x4714E4u;
    {
        const bool branch_taken_0x4714e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4714e4) {
            ctx->pc = 0x471510u;
            goto label_471510;
        }
    }
    ctx->pc = 0x4714ECu;
label_4714ec:
    // 0x4714ec: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_4714f0:
    if (ctx->pc == 0x4714F0u) {
        ctx->pc = 0x4714F4u;
        goto label_4714f4;
    }
    ctx->pc = 0x4714ECu;
    {
        const bool branch_taken_0x4714ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4714ec) {
            ctx->pc = 0x471508u;
            goto label_471508;
        }
    }
    ctx->pc = 0x4714F4u;
label_4714f4:
    // 0x4714f4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4714f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4714f8:
    // 0x4714f8: 0xc0fe48c  jal         func_3F9230
label_4714fc:
    if (ctx->pc == 0x4714FCu) {
        ctx->pc = 0x4714FCu;
            // 0x4714fc: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x471500u;
        goto label_471500;
    }
    ctx->pc = 0x4714F8u;
    SET_GPR_U32(ctx, 31, 0x471500u);
    ctx->pc = 0x4714FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4714F8u;
            // 0x4714fc: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471500u; }
        if (ctx->pc != 0x471500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471500u; }
        if (ctx->pc != 0x471500u) { return; }
    }
    ctx->pc = 0x471500u;
label_471500:
    // 0x471500: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x471500u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
label_471504:
    // 0x471504: 0x0  nop
    ctx->pc = 0x471504u;
    // NOP
label_471508:
    // 0x471508: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x471508u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
label_47150c:
    // 0x47150c: 0x0  nop
    ctx->pc = 0x47150cu;
    // NOP
label_471510:
    // 0x471510: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x471510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_471514:
    // 0x471514: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_471518:
    if (ctx->pc == 0x471518u) {
        ctx->pc = 0x47151Cu;
        goto label_47151c;
    }
    ctx->pc = 0x471514u;
    {
        const bool branch_taken_0x471514 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x471514) {
            ctx->pc = 0x471540u;
            goto label_471540;
        }
    }
    ctx->pc = 0x47151Cu;
label_47151c:
    // 0x47151c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_471520:
    if (ctx->pc == 0x471520u) {
        ctx->pc = 0x471524u;
        goto label_471524;
    }
    ctx->pc = 0x47151Cu;
    {
        const bool branch_taken_0x47151c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x47151c) {
            ctx->pc = 0x471538u;
            goto label_471538;
        }
    }
    ctx->pc = 0x471524u;
label_471524:
    // 0x471524: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x471524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_471528:
    // 0x471528: 0xc0fe48c  jal         func_3F9230
label_47152c:
    if (ctx->pc == 0x47152Cu) {
        ctx->pc = 0x47152Cu;
            // 0x47152c: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x471530u;
        goto label_471530;
    }
    ctx->pc = 0x471528u;
    SET_GPR_U32(ctx, 31, 0x471530u);
    ctx->pc = 0x47152Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x471528u;
            // 0x47152c: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471530u; }
        if (ctx->pc != 0x471530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471530u; }
        if (ctx->pc != 0x471530u) { return; }
    }
    ctx->pc = 0x471530u;
label_471530:
    // 0x471530: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x471530u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
label_471534:
    // 0x471534: 0x0  nop
    ctx->pc = 0x471534u;
    // NOP
label_471538:
    // 0x471538: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x471538u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
label_47153c:
    // 0x47153c: 0x0  nop
    ctx->pc = 0x47153cu;
    // NOP
label_471540:
    // 0x471540: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x471540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_471544:
    // 0x471544: 0x0  nop
    ctx->pc = 0x471544u;
    // NOP
label_471548:
    // 0x471548: 0x8e45002c  lw          $a1, 0x2C($s2)
    ctx->pc = 0x471548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_47154c:
    // 0x47154c: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_471550:
    if (ctx->pc == 0x471550u) {
        ctx->pc = 0x471554u;
        goto label_471554;
    }
    ctx->pc = 0x47154Cu;
    {
        const bool branch_taken_0x47154c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x47154c) {
            ctx->pc = 0x471578u;
            goto label_471578;
        }
    }
    ctx->pc = 0x471554u;
label_471554:
    // 0x471554: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_471558:
    if (ctx->pc == 0x471558u) {
        ctx->pc = 0x47155Cu;
        goto label_47155c;
    }
    ctx->pc = 0x471554u;
    {
        const bool branch_taken_0x471554 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x471554) {
            ctx->pc = 0x471570u;
            goto label_471570;
        }
    }
    ctx->pc = 0x47155Cu;
label_47155c:
    // 0x47155c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x47155cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_471560:
    // 0x471560: 0xc0fe48c  jal         func_3F9230
label_471564:
    if (ctx->pc == 0x471564u) {
        ctx->pc = 0x471564u;
            // 0x471564: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x471568u;
        goto label_471568;
    }
    ctx->pc = 0x471560u;
    SET_GPR_U32(ctx, 31, 0x471568u);
    ctx->pc = 0x471564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x471560u;
            // 0x471564: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471568u; }
        if (ctx->pc != 0x471568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471568u; }
        if (ctx->pc != 0x471568u) { return; }
    }
    ctx->pc = 0x471568u;
label_471568:
    // 0x471568: 0xae40002c  sw          $zero, 0x2C($s2)
    ctx->pc = 0x471568u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
label_47156c:
    // 0x47156c: 0x0  nop
    ctx->pc = 0x47156cu;
    // NOP
label_471570:
    // 0x471570: 0xae40002c  sw          $zero, 0x2C($s2)
    ctx->pc = 0x471570u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
label_471574:
    // 0x471574: 0x0  nop
    ctx->pc = 0x471574u;
    // NOP
label_471578:
    // 0x471578: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x471578u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_47157c:
    // 0x47157c: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x47157cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_471580:
    // 0x471580: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_471584:
    if (ctx->pc == 0x471584u) {
        ctx->pc = 0x471584u;
            // 0x471584: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x471588u;
        goto label_471588;
    }
    ctx->pc = 0x471580u;
    {
        const bool branch_taken_0x471580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x471584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x471580u;
            // 0x471584: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471580) {
            ctx->pc = 0x471548u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_471548;
        }
    }
    ctx->pc = 0x471588u;
label_471588:
    // 0x471588: 0x8e65004c  lw          $a1, 0x4C($s3)
    ctx->pc = 0x471588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
label_47158c:
    // 0x47158c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_471590:
    if (ctx->pc == 0x471590u) {
        ctx->pc = 0x471594u;
        goto label_471594;
    }
    ctx->pc = 0x47158Cu;
    {
        const bool branch_taken_0x47158c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x47158c) {
            ctx->pc = 0x4715B0u;
            goto label_4715b0;
        }
    }
    ctx->pc = 0x471594u;
label_471594:
    // 0x471594: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_471598:
    if (ctx->pc == 0x471598u) {
        ctx->pc = 0x47159Cu;
        goto label_47159c;
    }
    ctx->pc = 0x471594u;
    {
        const bool branch_taken_0x471594 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x471594) {
            ctx->pc = 0x4715B0u;
            goto label_4715b0;
        }
    }
    ctx->pc = 0x47159Cu;
label_47159c:
    // 0x47159c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x47159cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4715a0:
    // 0x4715a0: 0xc0fe48c  jal         func_3F9230
label_4715a4:
    if (ctx->pc == 0x4715A4u) {
        ctx->pc = 0x4715A4u;
            // 0x4715a4: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x4715A8u;
        goto label_4715a8;
    }
    ctx->pc = 0x4715A0u;
    SET_GPR_U32(ctx, 31, 0x4715A8u);
    ctx->pc = 0x4715A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4715A0u;
            // 0x4715a4: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4715A8u; }
        if (ctx->pc != 0x4715A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4715A8u; }
        if (ctx->pc != 0x4715A8u) { return; }
    }
    ctx->pc = 0x4715A8u;
label_4715a8:
    // 0x4715a8: 0xae60004c  sw          $zero, 0x4C($s3)
    ctx->pc = 0x4715a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
label_4715ac:
    // 0x4715ac: 0x0  nop
    ctx->pc = 0x4715acu;
    // NOP
label_4715b0:
    // 0x4715b0: 0xae60004c  sw          $zero, 0x4C($s3)
    ctx->pc = 0x4715b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
label_4715b4:
    // 0x4715b4: 0x8e650048  lw          $a1, 0x48($s3)
    ctx->pc = 0x4715b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
label_4715b8:
    // 0x4715b8: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_4715bc:
    if (ctx->pc == 0x4715BCu) {
        ctx->pc = 0x4715C0u;
        goto label_4715c0;
    }
    ctx->pc = 0x4715B8u;
    {
        const bool branch_taken_0x4715b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4715b8) {
            ctx->pc = 0x4715D8u;
            goto label_4715d8;
        }
    }
    ctx->pc = 0x4715C0u;
label_4715c0:
    // 0x4715c0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_4715c4:
    if (ctx->pc == 0x4715C4u) {
        ctx->pc = 0x4715C8u;
        goto label_4715c8;
    }
    ctx->pc = 0x4715C0u;
    {
        const bool branch_taken_0x4715c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4715c0) {
            ctx->pc = 0x4715D8u;
            goto label_4715d8;
        }
    }
    ctx->pc = 0x4715C8u;
label_4715c8:
    // 0x4715c8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4715c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4715cc:
    // 0x4715cc: 0xc0fe48c  jal         func_3F9230
label_4715d0:
    if (ctx->pc == 0x4715D0u) {
        ctx->pc = 0x4715D0u;
            // 0x4715d0: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x4715D4u;
        goto label_4715d4;
    }
    ctx->pc = 0x4715CCu;
    SET_GPR_U32(ctx, 31, 0x4715D4u);
    ctx->pc = 0x4715D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4715CCu;
            // 0x4715d0: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4715D4u; }
        if (ctx->pc != 0x4715D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4715D4u; }
        if (ctx->pc != 0x4715D4u) { return; }
    }
    ctx->pc = 0x4715D4u;
label_4715d4:
    // 0x4715d4: 0xae600048  sw          $zero, 0x48($s3)
    ctx->pc = 0x4715d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 0));
label_4715d8:
    // 0x4715d8: 0xae600048  sw          $zero, 0x48($s3)
    ctx->pc = 0x4715d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 0));
label_4715dc:
    // 0x4715dc: 0x8e650044  lw          $a1, 0x44($s3)
    ctx->pc = 0x4715dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
label_4715e0:
    // 0x4715e0: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_4715e4:
    if (ctx->pc == 0x4715E4u) {
        ctx->pc = 0x4715E8u;
        goto label_4715e8;
    }
    ctx->pc = 0x4715E0u;
    {
        const bool branch_taken_0x4715e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4715e0) {
            ctx->pc = 0x471600u;
            goto label_471600;
        }
    }
    ctx->pc = 0x4715E8u;
label_4715e8:
    // 0x4715e8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_4715ec:
    if (ctx->pc == 0x4715ECu) {
        ctx->pc = 0x4715F0u;
        goto label_4715f0;
    }
    ctx->pc = 0x4715E8u;
    {
        const bool branch_taken_0x4715e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4715e8) {
            ctx->pc = 0x471600u;
            goto label_471600;
        }
    }
    ctx->pc = 0x4715F0u;
label_4715f0:
    // 0x4715f0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4715f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4715f4:
    // 0x4715f4: 0xc0fe48c  jal         func_3F9230
label_4715f8:
    if (ctx->pc == 0x4715F8u) {
        ctx->pc = 0x4715F8u;
            // 0x4715f8: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x4715FCu;
        goto label_4715fc;
    }
    ctx->pc = 0x4715F4u;
    SET_GPR_U32(ctx, 31, 0x4715FCu);
    ctx->pc = 0x4715F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4715F4u;
            // 0x4715f8: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4715FCu; }
        if (ctx->pc != 0x4715FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4715FCu; }
        if (ctx->pc != 0x4715FCu) { return; }
    }
    ctx->pc = 0x4715FCu;
label_4715fc:
    // 0x4715fc: 0xae600044  sw          $zero, 0x44($s3)
    ctx->pc = 0x4715fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 0));
label_471600:
    // 0x471600: 0xae600044  sw          $zero, 0x44($s3)
    ctx->pc = 0x471600u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 0));
label_471604:
    // 0x471604: 0xae600058  sw          $zero, 0x58($s3)
    ctx->pc = 0x471604u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 0));
label_471608:
    // 0x471608: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x471608u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_47160c:
    // 0x47160c: 0xae600054  sw          $zero, 0x54($s3)
    ctx->pc = 0x47160cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 0));
label_471610:
    // 0x471610: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x471610u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_471614:
    // 0x471614: 0x26b5005c  addiu       $s5, $s5, 0x5C
    ctx->pc = 0x471614u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 92));
label_471618:
    // 0x471618: 0x1440ff6e  bnez        $v0, . + 4 + (-0x92 << 2)
label_47161c:
    if (ctx->pc == 0x47161Cu) {
        ctx->pc = 0x47161Cu;
            // 0x47161c: 0xae600050  sw          $zero, 0x50($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x471620u;
        goto label_471620;
    }
    ctx->pc = 0x471618u;
    {
        const bool branch_taken_0x471618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47161Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x471618u;
            // 0x47161c: 0xae600050  sw          $zero, 0x50($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471618) {
            ctx->pc = 0x4713D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4713d4;
        }
    }
    ctx->pc = 0x471620u;
label_471620:
    // 0x471620: 0x100000f5  b           . + 4 + (0xF5 << 2)
label_471624:
    if (ctx->pc == 0x471624u) {
        ctx->pc = 0x471628u;
        goto label_471628;
    }
    ctx->pc = 0x471620u;
    {
        const bool branch_taken_0x471620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x471620) {
            ctx->pc = 0x4719F8u;
            goto label_4719f8;
        }
    }
    ctx->pc = 0x471628u;
label_471628:
    // 0x471628: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x471628u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_47162c:
    // 0x47162c: 0x263500b8  addiu       $s5, $s1, 0xB8
    ctx->pc = 0x47162cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 184));
label_471630:
    // 0x471630: 0x96a30072  lhu         $v1, 0x72($s5)
    ctx->pc = 0x471630u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 114)));
label_471634:
    // 0x471634: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x471634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_471638:
    // 0x471638: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x471638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_47163c:
    // 0x47163c: 0x30630600  andi        $v1, $v1, 0x600
    ctx->pc = 0x47163cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1536);
label_471640:
    // 0x471640: 0xa6a30072  sh          $v1, 0x72($s5)
    ctx->pc = 0x471640u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 114), (uint16_t)GPR_U32(ctx, 3));
label_471644:
    // 0x471644: 0xaea00078  sw          $zero, 0x78($s5)
    ctx->pc = 0x471644u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 120), GPR_U32(ctx, 0));
label_471648:
    // 0x471648: 0xa6a00074  sh          $zero, 0x74($s5)
    ctx->pc = 0x471648u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 116), (uint16_t)GPR_U32(ctx, 0));
label_47164c:
    // 0x47164c: 0xa6a40076  sh          $a0, 0x76($s5)
    ctx->pc = 0x47164cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 118), (uint16_t)GPR_U32(ctx, 4));
label_471650:
    // 0x471650: 0x92a30070  lbu         $v1, 0x70($s5)
    ctx->pc = 0x471650u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 112)));
label_471654:
    // 0x471654: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
label_471658:
    if (ctx->pc == 0x471658u) {
        ctx->pc = 0x471658u;
            // 0x471658: 0x26b30070  addiu       $s3, $s5, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
        ctx->pc = 0x47165Cu;
        goto label_47165c;
    }
    ctx->pc = 0x471654u;
    {
        const bool branch_taken_0x471654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x471658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x471654u;
            // 0x471658: 0x26b30070  addiu       $s3, $s5, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471654) {
            ctx->pc = 0x4716E8u;
            goto label_4716e8;
        }
    }
    ctx->pc = 0x47165Cu;
label_47165c:
    // 0x47165c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x47165cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_471660:
    // 0x471660: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
label_471664:
    if (ctx->pc == 0x471664u) {
        ctx->pc = 0x471668u;
        goto label_471668;
    }
    ctx->pc = 0x471660u;
    {
        const bool branch_taken_0x471660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x471660) {
            ctx->pc = 0x4716E8u;
            goto label_4716e8;
        }
    }
    ctx->pc = 0x471668u;
label_471668:
    // 0x471668: 0x1064001f  beq         $v1, $a0, . + 4 + (0x1F << 2)
label_47166c:
    if (ctx->pc == 0x47166Cu) {
        ctx->pc = 0x471670u;
        goto label_471670;
    }
    ctx->pc = 0x471668u;
    {
        const bool branch_taken_0x471668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x471668) {
            ctx->pc = 0x4716E8u;
            goto label_4716e8;
        }
    }
    ctx->pc = 0x471670u;
label_471670:
    // 0x471670: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x471670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_471674:
    // 0x471674: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x471674u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_471678:
    // 0x471678: 0x8c720004  lw          $s2, 0x4($v1)
    ctx->pc = 0x471678u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_47167c:
    // 0x47167c: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x47167cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_471680:
    // 0x471680: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x471680u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_471684:
    // 0x471684: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x471684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_471688:
    // 0x471688: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x471688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_47168c:
    // 0x47168c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x47168cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_471690:
    // 0x471690: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x471690u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_471694:
    // 0x471694: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x471694u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_471698:
    // 0x471698: 0x320f809  jalr        $t9
label_47169c:
    if (ctx->pc == 0x47169Cu) {
        ctx->pc = 0x47169Cu;
            // 0x47169c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4716A0u;
        goto label_4716a0;
    }
    ctx->pc = 0x471698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4716A0u);
        ctx->pc = 0x47169Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x471698u;
            // 0x47169c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4716A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4716A0u; }
            if (ctx->pc != 0x4716A0u) { return; }
        }
        }
    }
    ctx->pc = 0x4716A0u;
label_4716a0:
    // 0x4716a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4716a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4716a4:
    // 0x4716a4: 0xa242007c  sb          $v0, 0x7C($s2)
    ctx->pc = 0x4716a4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 124), (uint8_t)GPR_U32(ctx, 2));
label_4716a8:
    // 0x4716a8: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x4716a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_4716ac:
    // 0x4716ac: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4716acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4716b0:
    // 0x4716b0: 0xc123848  jal         func_48E120
label_4716b4:
    if (ctx->pc == 0x4716B4u) {
        ctx->pc = 0x4716B4u;
            // 0x4716b4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4716B8u;
        goto label_4716b8;
    }
    ctx->pc = 0x4716B0u;
    SET_GPR_U32(ctx, 31, 0x4716B8u);
    ctx->pc = 0x4716B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4716B0u;
            // 0x4716b4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E120u;
    if (runtime->hasFunction(0x48E120u)) {
        auto targetFn = runtime->lookupFunction(0x48E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4716B8u; }
        if (ctx->pc != 0x4716B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E120_0x48e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4716B8u; }
        if (ctx->pc != 0x4716B8u) { return; }
    }
    ctx->pc = 0x4716B8u;
label_4716b8:
    // 0x4716b8: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x4716b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_4716bc:
    // 0x4716bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4716bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4716c0:
    // 0x4716c0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4716c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4716c4:
    // 0x4716c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4716c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4716c8:
    // 0x4716c8: 0xa4430046  sh          $v1, 0x46($v0)
    ctx->pc = 0x4716c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 3));
label_4716cc:
    // 0x4716cc: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x4716ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_4716d0:
    // 0x4716d0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x4716d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4716d4:
    // 0x4716d4: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x4716d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_4716d8:
    // 0x4716d8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4716d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4716dc:
    // 0x4716dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4716dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4716e0:
    // 0x4716e0: 0xa4400046  sh          $zero, 0x46($v0)
    ctx->pc = 0x4716e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
label_4716e4:
    // 0x4716e4: 0x0  nop
    ctx->pc = 0x4716e4u;
    // NOP
label_4716e8:
    // 0x4716e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4716e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4716ec:
    // 0x4716ec: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x4716ecu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_4716f0:
    // 0x4716f0: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x4716f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
label_4716f4:
    // 0x4716f4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x4716f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_4716f8:
    // 0x4716f8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4716f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4716fc:
    // 0x4716fc: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x4716fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_471700:
    // 0x471700: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x471700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_471704:
    // 0x471704: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x471704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_471708:
    // 0x471708: 0x8c450098  lw          $a1, 0x98($v0)
    ctx->pc = 0x471708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
label_47170c:
    // 0x47170c: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_471710:
    if (ctx->pc == 0x471710u) {
        ctx->pc = 0x471710u;
            // 0x471710: 0x24520070  addiu       $s2, $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
        ctx->pc = 0x471714u;
        goto label_471714;
    }
    ctx->pc = 0x47170Cu;
    {
        const bool branch_taken_0x47170c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x471710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47170Cu;
            // 0x471710: 0x24520070  addiu       $s2, $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47170c) {
            ctx->pc = 0x471738u;
            goto label_471738;
        }
    }
    ctx->pc = 0x471714u;
label_471714:
    // 0x471714: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_471718:
    if (ctx->pc == 0x471718u) {
        ctx->pc = 0x47171Cu;
        goto label_47171c;
    }
    ctx->pc = 0x471714u;
    {
        const bool branch_taken_0x471714 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x471714) {
            ctx->pc = 0x471730u;
            goto label_471730;
        }
    }
    ctx->pc = 0x47171Cu;
label_47171c:
    // 0x47171c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x47171cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_471720:
    // 0x471720: 0xc0fe48c  jal         func_3F9230
label_471724:
    if (ctx->pc == 0x471724u) {
        ctx->pc = 0x471724u;
            // 0x471724: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x471728u;
        goto label_471728;
    }
    ctx->pc = 0x471720u;
    SET_GPR_U32(ctx, 31, 0x471728u);
    ctx->pc = 0x471724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x471720u;
            // 0x471724: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471728u; }
        if (ctx->pc != 0x471728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471728u; }
        if (ctx->pc != 0x471728u) { return; }
    }
    ctx->pc = 0x471728u;
label_471728:
    // 0x471728: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x471728u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
label_47172c:
    // 0x47172c: 0x0  nop
    ctx->pc = 0x47172cu;
    // NOP
label_471730:
    // 0x471730: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x471730u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
label_471734:
    // 0x471734: 0x0  nop
    ctx->pc = 0x471734u;
    // NOP
label_471738:
    // 0x471738: 0x8e450020  lw          $a1, 0x20($s2)
    ctx->pc = 0x471738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_47173c:
    // 0x47173c: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_471740:
    if (ctx->pc == 0x471740u) {
        ctx->pc = 0x471744u;
        goto label_471744;
    }
    ctx->pc = 0x47173Cu;
    {
        const bool branch_taken_0x47173c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x47173c) {
            ctx->pc = 0x471768u;
            goto label_471768;
        }
    }
    ctx->pc = 0x471744u;
label_471744:
    // 0x471744: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_471748:
    if (ctx->pc == 0x471748u) {
        ctx->pc = 0x47174Cu;
        goto label_47174c;
    }
    ctx->pc = 0x471744u;
    {
        const bool branch_taken_0x471744 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x471744) {
            ctx->pc = 0x471760u;
            goto label_471760;
        }
    }
    ctx->pc = 0x47174Cu;
label_47174c:
    // 0x47174c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x47174cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_471750:
    // 0x471750: 0xc0fe48c  jal         func_3F9230
label_471754:
    if (ctx->pc == 0x471754u) {
        ctx->pc = 0x471754u;
            // 0x471754: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x471758u;
        goto label_471758;
    }
    ctx->pc = 0x471750u;
    SET_GPR_U32(ctx, 31, 0x471758u);
    ctx->pc = 0x471754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x471750u;
            // 0x471754: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471758u; }
        if (ctx->pc != 0x471758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471758u; }
        if (ctx->pc != 0x471758u) { return; }
    }
    ctx->pc = 0x471758u;
label_471758:
    // 0x471758: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x471758u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
label_47175c:
    // 0x47175c: 0x0  nop
    ctx->pc = 0x47175cu;
    // NOP
label_471760:
    // 0x471760: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x471760u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
label_471764:
    // 0x471764: 0x0  nop
    ctx->pc = 0x471764u;
    // NOP
label_471768:
    // 0x471768: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x471768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_47176c:
    // 0x47176c: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_471770:
    if (ctx->pc == 0x471770u) {
        ctx->pc = 0x471774u;
        goto label_471774;
    }
    ctx->pc = 0x47176Cu;
    {
        const bool branch_taken_0x47176c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x47176c) {
            ctx->pc = 0x471798u;
            goto label_471798;
        }
    }
    ctx->pc = 0x471774u;
label_471774:
    // 0x471774: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_471778:
    if (ctx->pc == 0x471778u) {
        ctx->pc = 0x47177Cu;
        goto label_47177c;
    }
    ctx->pc = 0x471774u;
    {
        const bool branch_taken_0x471774 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x471774) {
            ctx->pc = 0x471790u;
            goto label_471790;
        }
    }
    ctx->pc = 0x47177Cu;
label_47177c:
    // 0x47177c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x47177cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_471780:
    // 0x471780: 0xc0fe48c  jal         func_3F9230
label_471784:
    if (ctx->pc == 0x471784u) {
        ctx->pc = 0x471784u;
            // 0x471784: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x471788u;
        goto label_471788;
    }
    ctx->pc = 0x471780u;
    SET_GPR_U32(ctx, 31, 0x471788u);
    ctx->pc = 0x471784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x471780u;
            // 0x471784: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471788u; }
        if (ctx->pc != 0x471788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471788u; }
        if (ctx->pc != 0x471788u) { return; }
    }
    ctx->pc = 0x471788u;
label_471788:
    // 0x471788: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x471788u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
label_47178c:
    // 0x47178c: 0x0  nop
    ctx->pc = 0x47178cu;
    // NOP
label_471790:
    // 0x471790: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x471790u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
label_471794:
    // 0x471794: 0x0  nop
    ctx->pc = 0x471794u;
    // NOP
label_471798:
    // 0x471798: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x471798u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47179c:
    // 0x47179c: 0x0  nop
    ctx->pc = 0x47179cu;
    // NOP
label_4717a0:
    // 0x4717a0: 0x8e45002c  lw          $a1, 0x2C($s2)
    ctx->pc = 0x4717a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_4717a4:
    // 0x4717a4: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_4717a8:
    if (ctx->pc == 0x4717A8u) {
        ctx->pc = 0x4717ACu;
        goto label_4717ac;
    }
    ctx->pc = 0x4717A4u;
    {
        const bool branch_taken_0x4717a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4717a4) {
            ctx->pc = 0x4717D0u;
            goto label_4717d0;
        }
    }
    ctx->pc = 0x4717ACu;
label_4717ac:
    // 0x4717ac: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_4717b0:
    if (ctx->pc == 0x4717B0u) {
        ctx->pc = 0x4717B4u;
        goto label_4717b4;
    }
    ctx->pc = 0x4717ACu;
    {
        const bool branch_taken_0x4717ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4717ac) {
            ctx->pc = 0x4717C8u;
            goto label_4717c8;
        }
    }
    ctx->pc = 0x4717B4u;
label_4717b4:
    // 0x4717b4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4717b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4717b8:
    // 0x4717b8: 0xc0fe48c  jal         func_3F9230
label_4717bc:
    if (ctx->pc == 0x4717BCu) {
        ctx->pc = 0x4717BCu;
            // 0x4717bc: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x4717C0u;
        goto label_4717c0;
    }
    ctx->pc = 0x4717B8u;
    SET_GPR_U32(ctx, 31, 0x4717C0u);
    ctx->pc = 0x4717BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4717B8u;
            // 0x4717bc: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4717C0u; }
        if (ctx->pc != 0x4717C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4717C0u; }
        if (ctx->pc != 0x4717C0u) { return; }
    }
    ctx->pc = 0x4717C0u;
label_4717c0:
    // 0x4717c0: 0xae40002c  sw          $zero, 0x2C($s2)
    ctx->pc = 0x4717c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
label_4717c4:
    // 0x4717c4: 0x0  nop
    ctx->pc = 0x4717c4u;
    // NOP
label_4717c8:
    // 0x4717c8: 0xae40002c  sw          $zero, 0x2C($s2)
    ctx->pc = 0x4717c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
label_4717cc:
    // 0x4717cc: 0x0  nop
    ctx->pc = 0x4717ccu;
    // NOP
label_4717d0:
    // 0x4717d0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4717d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_4717d4:
    // 0x4717d4: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x4717d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_4717d8:
    // 0x4717d8: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_4717dc:
    if (ctx->pc == 0x4717DCu) {
        ctx->pc = 0x4717DCu;
            // 0x4717dc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4717E0u;
        goto label_4717e0;
    }
    ctx->pc = 0x4717D8u;
    {
        const bool branch_taken_0x4717d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4717DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4717D8u;
            // 0x4717dc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4717d8) {
            ctx->pc = 0x4717A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4717a0;
        }
    }
    ctx->pc = 0x4717E0u;
label_4717e0:
    // 0x4717e0: 0x8e65004c  lw          $a1, 0x4C($s3)
    ctx->pc = 0x4717e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
label_4717e4:
    // 0x4717e4: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_4717e8:
    if (ctx->pc == 0x4717E8u) {
        ctx->pc = 0x4717ECu;
        goto label_4717ec;
    }
    ctx->pc = 0x4717E4u;
    {
        const bool branch_taken_0x4717e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4717e4) {
            ctx->pc = 0x471808u;
            goto label_471808;
        }
    }
    ctx->pc = 0x4717ECu;
label_4717ec:
    // 0x4717ec: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_4717f0:
    if (ctx->pc == 0x4717F0u) {
        ctx->pc = 0x4717F4u;
        goto label_4717f4;
    }
    ctx->pc = 0x4717ECu;
    {
        const bool branch_taken_0x4717ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4717ec) {
            ctx->pc = 0x471808u;
            goto label_471808;
        }
    }
    ctx->pc = 0x4717F4u;
label_4717f4:
    // 0x4717f4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4717f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4717f8:
    // 0x4717f8: 0xc0fe48c  jal         func_3F9230
label_4717fc:
    if (ctx->pc == 0x4717FCu) {
        ctx->pc = 0x4717FCu;
            // 0x4717fc: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x471800u;
        goto label_471800;
    }
    ctx->pc = 0x4717F8u;
    SET_GPR_U32(ctx, 31, 0x471800u);
    ctx->pc = 0x4717FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4717F8u;
            // 0x4717fc: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471800u; }
        if (ctx->pc != 0x471800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471800u; }
        if (ctx->pc != 0x471800u) { return; }
    }
    ctx->pc = 0x471800u;
label_471800:
    // 0x471800: 0xae60004c  sw          $zero, 0x4C($s3)
    ctx->pc = 0x471800u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
label_471804:
    // 0x471804: 0x0  nop
    ctx->pc = 0x471804u;
    // NOP
label_471808:
    // 0x471808: 0xae60004c  sw          $zero, 0x4C($s3)
    ctx->pc = 0x471808u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
label_47180c:
    // 0x47180c: 0x8e650048  lw          $a1, 0x48($s3)
    ctx->pc = 0x47180cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
label_471810:
    // 0x471810: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_471814:
    if (ctx->pc == 0x471814u) {
        ctx->pc = 0x471818u;
        goto label_471818;
    }
    ctx->pc = 0x471810u;
    {
        const bool branch_taken_0x471810 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x471810) {
            ctx->pc = 0x471830u;
            goto label_471830;
        }
    }
    ctx->pc = 0x471818u;
label_471818:
    // 0x471818: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_47181c:
    if (ctx->pc == 0x47181Cu) {
        ctx->pc = 0x471820u;
        goto label_471820;
    }
    ctx->pc = 0x471818u;
    {
        const bool branch_taken_0x471818 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x471818) {
            ctx->pc = 0x471830u;
            goto label_471830;
        }
    }
    ctx->pc = 0x471820u;
label_471820:
    // 0x471820: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x471820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_471824:
    // 0x471824: 0xc0fe48c  jal         func_3F9230
label_471828:
    if (ctx->pc == 0x471828u) {
        ctx->pc = 0x471828u;
            // 0x471828: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x47182Cu;
        goto label_47182c;
    }
    ctx->pc = 0x471824u;
    SET_GPR_U32(ctx, 31, 0x47182Cu);
    ctx->pc = 0x471828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x471824u;
            // 0x471828: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47182Cu; }
        if (ctx->pc != 0x47182Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47182Cu; }
        if (ctx->pc != 0x47182Cu) { return; }
    }
    ctx->pc = 0x47182Cu;
label_47182c:
    // 0x47182c: 0xae600048  sw          $zero, 0x48($s3)
    ctx->pc = 0x47182cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 0));
label_471830:
    // 0x471830: 0xae600048  sw          $zero, 0x48($s3)
    ctx->pc = 0x471830u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 0));
label_471834:
    // 0x471834: 0x8e650044  lw          $a1, 0x44($s3)
    ctx->pc = 0x471834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
label_471838:
    // 0x471838: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_47183c:
    if (ctx->pc == 0x47183Cu) {
        ctx->pc = 0x471840u;
        goto label_471840;
    }
    ctx->pc = 0x471838u;
    {
        const bool branch_taken_0x471838 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x471838) {
            ctx->pc = 0x471858u;
            goto label_471858;
        }
    }
    ctx->pc = 0x471840u;
label_471840:
    // 0x471840: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_471844:
    if (ctx->pc == 0x471844u) {
        ctx->pc = 0x471848u;
        goto label_471848;
    }
    ctx->pc = 0x471840u;
    {
        const bool branch_taken_0x471840 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x471840) {
            ctx->pc = 0x471858u;
            goto label_471858;
        }
    }
    ctx->pc = 0x471848u;
label_471848:
    // 0x471848: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x471848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_47184c:
    // 0x47184c: 0xc0fe48c  jal         func_3F9230
label_471850:
    if (ctx->pc == 0x471850u) {
        ctx->pc = 0x471850u;
            // 0x471850: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x471854u;
        goto label_471854;
    }
    ctx->pc = 0x47184Cu;
    SET_GPR_U32(ctx, 31, 0x471854u);
    ctx->pc = 0x471850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47184Cu;
            // 0x471850: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471854u; }
        if (ctx->pc != 0x471854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471854u; }
        if (ctx->pc != 0x471854u) { return; }
    }
    ctx->pc = 0x471854u;
label_471854:
    // 0x471854: 0xae600044  sw          $zero, 0x44($s3)
    ctx->pc = 0x471854u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 0));
label_471858:
    // 0x471858: 0xae600044  sw          $zero, 0x44($s3)
    ctx->pc = 0x471858u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 0));
label_47185c:
    // 0x47185c: 0xae600058  sw          $zero, 0x58($s3)
    ctx->pc = 0x47185cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 0));
label_471860:
    // 0x471860: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x471860u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_471864:
    // 0x471864: 0xae600054  sw          $zero, 0x54($s3)
    ctx->pc = 0x471864u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 0));
label_471868:
    // 0x471868: 0x2a820004  slti        $v0, $s4, 0x4
    ctx->pc = 0x471868u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
label_47186c:
    // 0x47186c: 0x26b5005c  addiu       $s5, $s5, 0x5C
    ctx->pc = 0x47186cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 92));
label_471870:
    // 0x471870: 0x1440ff6f  bnez        $v0, . + 4 + (-0x91 << 2)
label_471874:
    if (ctx->pc == 0x471874u) {
        ctx->pc = 0x471874u;
            // 0x471874: 0xae600050  sw          $zero, 0x50($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x471878u;
        goto label_471878;
    }
    ctx->pc = 0x471870u;
    {
        const bool branch_taken_0x471870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x471874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x471870u;
            // 0x471874: 0xae600050  sw          $zero, 0x50($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471870) {
            ctx->pc = 0x471630u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_471630;
        }
    }
    ctx->pc = 0x471878u;
label_471878:
    // 0x471878: 0x1000005f  b           . + 4 + (0x5F << 2)
label_47187c:
    if (ctx->pc == 0x47187Cu) {
        ctx->pc = 0x471880u;
        goto label_471880;
    }
    ctx->pc = 0x471878u;
    {
        const bool branch_taken_0x471878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x471878) {
            ctx->pc = 0x4719F8u;
            goto label_4719f8;
        }
    }
    ctx->pc = 0x471880u;
label_471880:
    // 0x471880: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_471884:
    if (ctx->pc == 0x471884u) {
        ctx->pc = 0x471884u;
            // 0x471884: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x471888u;
        goto label_471888;
    }
    ctx->pc = 0x471880u;
    {
        const bool branch_taken_0x471880 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x471880) {
            ctx->pc = 0x471884u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x471880u;
            // 0x471884: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x471890u;
            goto label_471890;
        }
    }
    ctx->pc = 0x471888u;
label_471888:
    // 0x471888: 0x1000005c  b           . + 4 + (0x5C << 2)
label_47188c:
    if (ctx->pc == 0x47188Cu) {
        ctx->pc = 0x471890u;
        goto label_471890;
    }
    ctx->pc = 0x471888u;
    {
        const bool branch_taken_0x471888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x471888) {
            ctx->pc = 0x4719FCu;
            goto label_4719fc;
        }
    }
    ctx->pc = 0x471890u;
label_471890:
    // 0x471890: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x471890u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_471894:
    // 0x471894: 0x30630600  andi        $v1, $v1, 0x600
    ctx->pc = 0x471894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1536);
label_471898:
    // 0x471898: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x471898u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
label_47189c:
    // 0x47189c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x47189cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_4718a0:
    // 0x4718a0: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x4718a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
label_4718a4:
    // 0x4718a4: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x4718a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
label_4718a8:
    // 0x4718a8: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x4718a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_4718ac:
    // 0x4718ac: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
label_4718b0:
    if (ctx->pc == 0x4718B0u) {
        ctx->pc = 0x4718B0u;
            // 0x4718b0: 0x8e050020  lw          $a1, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->pc = 0x4718B4u;
        goto label_4718b4;
    }
    ctx->pc = 0x4718ACu;
    {
        const bool branch_taken_0x4718ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4718ac) {
            ctx->pc = 0x4718B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4718ACu;
            // 0x4718b0: 0x8e050020  lw          $a1, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4718D4u;
            goto label_4718d4;
        }
    }
    ctx->pc = 0x4718B4u;
label_4718b4:
    // 0x4718b4: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_4718b8:
    if (ctx->pc == 0x4718B8u) {
        ctx->pc = 0x4718B8u;
            // 0x4718b8: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        ctx->pc = 0x4718BCu;
        goto label_4718bc;
    }
    ctx->pc = 0x4718B4u;
    {
        const bool branch_taken_0x4718b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4718b4) {
            ctx->pc = 0x4718B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4718B4u;
            // 0x4718b8: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4718D0u;
            goto label_4718d0;
        }
    }
    ctx->pc = 0x4718BCu;
label_4718bc:
    // 0x4718bc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4718bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4718c0:
    // 0x4718c0: 0xc0fe48c  jal         func_3F9230
label_4718c4:
    if (ctx->pc == 0x4718C4u) {
        ctx->pc = 0x4718C4u;
            // 0x4718c4: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x4718C8u;
        goto label_4718c8;
    }
    ctx->pc = 0x4718C0u;
    SET_GPR_U32(ctx, 31, 0x4718C8u);
    ctx->pc = 0x4718C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4718C0u;
            // 0x4718c4: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4718C8u; }
        if (ctx->pc != 0x4718C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4718C8u; }
        if (ctx->pc != 0x4718C8u) { return; }
    }
    ctx->pc = 0x4718C8u;
label_4718c8:
    // 0x4718c8: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x4718c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_4718cc:
    // 0x4718cc: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x4718ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_4718d0:
    // 0x4718d0: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x4718d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_4718d4:
    // 0x4718d4: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
label_4718d8:
    if (ctx->pc == 0x4718D8u) {
        ctx->pc = 0x4718D8u;
            // 0x4718d8: 0x8e050024  lw          $a1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->pc = 0x4718DCu;
        goto label_4718dc;
    }
    ctx->pc = 0x4718D4u;
    {
        const bool branch_taken_0x4718d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4718d4) {
            ctx->pc = 0x4718D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4718D4u;
            // 0x4718d8: 0x8e050024  lw          $a1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4718FCu;
            goto label_4718fc;
        }
    }
    ctx->pc = 0x4718DCu;
label_4718dc:
    // 0x4718dc: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_4718e0:
    if (ctx->pc == 0x4718E0u) {
        ctx->pc = 0x4718E0u;
            // 0x4718e0: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
        ctx->pc = 0x4718E4u;
        goto label_4718e4;
    }
    ctx->pc = 0x4718DCu;
    {
        const bool branch_taken_0x4718dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4718dc) {
            ctx->pc = 0x4718E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4718DCu;
            // 0x4718e0: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4718F8u;
            goto label_4718f8;
        }
    }
    ctx->pc = 0x4718E4u;
label_4718e4:
    // 0x4718e4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4718e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4718e8:
    // 0x4718e8: 0xc0fe48c  jal         func_3F9230
label_4718ec:
    if (ctx->pc == 0x4718ECu) {
        ctx->pc = 0x4718ECu;
            // 0x4718ec: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x4718F0u;
        goto label_4718f0;
    }
    ctx->pc = 0x4718E8u;
    SET_GPR_U32(ctx, 31, 0x4718F0u);
    ctx->pc = 0x4718ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4718E8u;
            // 0x4718ec: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4718F0u; }
        if (ctx->pc != 0x4718F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4718F0u; }
        if (ctx->pc != 0x4718F0u) { return; }
    }
    ctx->pc = 0x4718F0u;
label_4718f0:
    // 0x4718f0: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x4718f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_4718f4:
    // 0x4718f4: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x4718f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_4718f8:
    // 0x4718f8: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x4718f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_4718fc:
    // 0x4718fc: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
label_471900:
    if (ctx->pc == 0x471900u) {
        ctx->pc = 0x471900u;
            // 0x471900: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x471904u;
        goto label_471904;
    }
    ctx->pc = 0x4718FCu;
    {
        const bool branch_taken_0x4718fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4718fc) {
            ctx->pc = 0x471900u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4718FCu;
            // 0x471900: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x471924u;
            goto label_471924;
        }
    }
    ctx->pc = 0x471904u;
label_471904:
    // 0x471904: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_471908:
    if (ctx->pc == 0x471908u) {
        ctx->pc = 0x471908u;
            // 0x471908: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x47190Cu;
        goto label_47190c;
    }
    ctx->pc = 0x471904u;
    {
        const bool branch_taken_0x471904 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x471904) {
            ctx->pc = 0x471908u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x471904u;
            // 0x471908: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x471920u;
            goto label_471920;
        }
    }
    ctx->pc = 0x47190Cu;
label_47190c:
    // 0x47190c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x47190cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_471910:
    // 0x471910: 0xc0fe48c  jal         func_3F9230
label_471914:
    if (ctx->pc == 0x471914u) {
        ctx->pc = 0x471914u;
            // 0x471914: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x471918u;
        goto label_471918;
    }
    ctx->pc = 0x471910u;
    SET_GPR_U32(ctx, 31, 0x471918u);
    ctx->pc = 0x471914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x471910u;
            // 0x471914: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471918u; }
        if (ctx->pc != 0x471918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471918u; }
        if (ctx->pc != 0x471918u) { return; }
    }
    ctx->pc = 0x471918u;
label_471918:
    // 0x471918: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x471918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_47191c:
    // 0x47191c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x47191cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_471920:
    // 0x471920: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x471920u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_471924:
    // 0x471924: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x471924u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_471928:
    // 0x471928: 0x8e45002c  lw          $a1, 0x2C($s2)
    ctx->pc = 0x471928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_47192c:
    // 0x47192c: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_471930:
    if (ctx->pc == 0x471930u) {
        ctx->pc = 0x471934u;
        goto label_471934;
    }
    ctx->pc = 0x47192Cu;
    {
        const bool branch_taken_0x47192c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x47192c) {
            ctx->pc = 0x471958u;
            goto label_471958;
        }
    }
    ctx->pc = 0x471934u;
label_471934:
    // 0x471934: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_471938:
    if (ctx->pc == 0x471938u) {
        ctx->pc = 0x47193Cu;
        goto label_47193c;
    }
    ctx->pc = 0x471934u;
    {
        const bool branch_taken_0x471934 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x471934) {
            ctx->pc = 0x471950u;
            goto label_471950;
        }
    }
    ctx->pc = 0x47193Cu;
label_47193c:
    // 0x47193c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x47193cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_471940:
    // 0x471940: 0xc0fe48c  jal         func_3F9230
label_471944:
    if (ctx->pc == 0x471944u) {
        ctx->pc = 0x471944u;
            // 0x471944: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x471948u;
        goto label_471948;
    }
    ctx->pc = 0x471940u;
    SET_GPR_U32(ctx, 31, 0x471948u);
    ctx->pc = 0x471944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x471940u;
            // 0x471944: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471948u; }
        if (ctx->pc != 0x471948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471948u; }
        if (ctx->pc != 0x471948u) { return; }
    }
    ctx->pc = 0x471948u;
label_471948:
    // 0x471948: 0xae40002c  sw          $zero, 0x2C($s2)
    ctx->pc = 0x471948u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
label_47194c:
    // 0x47194c: 0x0  nop
    ctx->pc = 0x47194cu;
    // NOP
label_471950:
    // 0x471950: 0xae40002c  sw          $zero, 0x2C($s2)
    ctx->pc = 0x471950u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
label_471954:
    // 0x471954: 0x0  nop
    ctx->pc = 0x471954u;
    // NOP
label_471958:
    // 0x471958: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x471958u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_47195c:
    // 0x47195c: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x47195cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
label_471960:
    // 0x471960: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_471964:
    if (ctx->pc == 0x471964u) {
        ctx->pc = 0x471964u;
            // 0x471964: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x471968u;
        goto label_471968;
    }
    ctx->pc = 0x471960u;
    {
        const bool branch_taken_0x471960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x471964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x471960u;
            // 0x471964: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471960) {
            ctx->pc = 0x471928u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_471928;
        }
    }
    ctx->pc = 0x471968u;
label_471968:
    // 0x471968: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x471968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_47196c:
    // 0x47196c: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
label_471970:
    if (ctx->pc == 0x471970u) {
        ctx->pc = 0x471970u;
            // 0x471970: 0xae00004c  sw          $zero, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
        ctx->pc = 0x471974u;
        goto label_471974;
    }
    ctx->pc = 0x47196Cu;
    {
        const bool branch_taken_0x47196c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x47196c) {
            ctx->pc = 0x471970u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47196Cu;
            // 0x471970: 0xae00004c  sw          $zero, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x471990u;
            goto label_471990;
        }
    }
    ctx->pc = 0x471974u;
label_471974:
    // 0x471974: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_471978:
    if (ctx->pc == 0x471978u) {
        ctx->pc = 0x47197Cu;
        goto label_47197c;
    }
    ctx->pc = 0x471974u;
    {
        const bool branch_taken_0x471974 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x471974) {
            ctx->pc = 0x47198Cu;
            goto label_47198c;
        }
    }
    ctx->pc = 0x47197Cu;
label_47197c:
    // 0x47197c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x47197cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_471980:
    // 0x471980: 0xc0fe48c  jal         func_3F9230
label_471984:
    if (ctx->pc == 0x471984u) {
        ctx->pc = 0x471984u;
            // 0x471984: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x471988u;
        goto label_471988;
    }
    ctx->pc = 0x471980u;
    SET_GPR_U32(ctx, 31, 0x471988u);
    ctx->pc = 0x471984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x471980u;
            // 0x471984: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471988u; }
        if (ctx->pc != 0x471988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471988u; }
        if (ctx->pc != 0x471988u) { return; }
    }
    ctx->pc = 0x471988u;
label_471988:
    // 0x471988: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x471988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
label_47198c:
    // 0x47198c: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x47198cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
label_471990:
    // 0x471990: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x471990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_471994:
    // 0x471994: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
label_471998:
    if (ctx->pc == 0x471998u) {
        ctx->pc = 0x471998u;
            // 0x471998: 0xae000048  sw          $zero, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
        ctx->pc = 0x47199Cu;
        goto label_47199c;
    }
    ctx->pc = 0x471994u;
    {
        const bool branch_taken_0x471994 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x471994) {
            ctx->pc = 0x471998u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x471994u;
            // 0x471998: 0xae000048  sw          $zero, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4719B8u;
            goto label_4719b8;
        }
    }
    ctx->pc = 0x47199Cu;
label_47199c:
    // 0x47199c: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_4719a0:
    if (ctx->pc == 0x4719A0u) {
        ctx->pc = 0x4719A4u;
        goto label_4719a4;
    }
    ctx->pc = 0x47199Cu;
    {
        const bool branch_taken_0x47199c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x47199c) {
            ctx->pc = 0x4719B4u;
            goto label_4719b4;
        }
    }
    ctx->pc = 0x4719A4u;
label_4719a4:
    // 0x4719a4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4719a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4719a8:
    // 0x4719a8: 0xc0fe48c  jal         func_3F9230
label_4719ac:
    if (ctx->pc == 0x4719ACu) {
        ctx->pc = 0x4719ACu;
            // 0x4719ac: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x4719B0u;
        goto label_4719b0;
    }
    ctx->pc = 0x4719A8u;
    SET_GPR_U32(ctx, 31, 0x4719B0u);
    ctx->pc = 0x4719ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4719A8u;
            // 0x4719ac: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4719B0u; }
        if (ctx->pc != 0x4719B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4719B0u; }
        if (ctx->pc != 0x4719B0u) { return; }
    }
    ctx->pc = 0x4719B0u;
label_4719b0:
    // 0x4719b0: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x4719b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
label_4719b4:
    // 0x4719b4: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x4719b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
label_4719b8:
    // 0x4719b8: 0x8e050044  lw          $a1, 0x44($s0)
    ctx->pc = 0x4719b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_4719bc:
    // 0x4719bc: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
label_4719c0:
    if (ctx->pc == 0x4719C0u) {
        ctx->pc = 0x4719C0u;
            // 0x4719c0: 0xae000044  sw          $zero, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
        ctx->pc = 0x4719C4u;
        goto label_4719c4;
    }
    ctx->pc = 0x4719BCu;
    {
        const bool branch_taken_0x4719bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4719bc) {
            ctx->pc = 0x4719C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4719BCu;
            // 0x4719c0: 0xae000044  sw          $zero, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4719E0u;
            goto label_4719e0;
        }
    }
    ctx->pc = 0x4719C4u;
label_4719c4:
    // 0x4719c4: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_4719c8:
    if (ctx->pc == 0x4719C8u) {
        ctx->pc = 0x4719CCu;
        goto label_4719cc;
    }
    ctx->pc = 0x4719C4u;
    {
        const bool branch_taken_0x4719c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4719c4) {
            ctx->pc = 0x4719DCu;
            goto label_4719dc;
        }
    }
    ctx->pc = 0x4719CCu;
label_4719cc:
    // 0x4719cc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4719ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4719d0:
    // 0x4719d0: 0xc0fe48c  jal         func_3F9230
label_4719d4:
    if (ctx->pc == 0x4719D4u) {
        ctx->pc = 0x4719D4u;
            // 0x4719d4: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x4719D8u;
        goto label_4719d8;
    }
    ctx->pc = 0x4719D0u;
    SET_GPR_U32(ctx, 31, 0x4719D8u);
    ctx->pc = 0x4719D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4719D0u;
            // 0x4719d4: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4719D8u; }
        if (ctx->pc != 0x4719D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4719D8u; }
        if (ctx->pc != 0x4719D8u) { return; }
    }
    ctx->pc = 0x4719D8u;
label_4719d8:
    // 0x4719d8: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x4719d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_4719dc:
    // 0x4719dc: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x4719dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_4719e0:
    // 0x4719e0: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x4719e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_4719e4:
    // 0x4719e4: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x4719e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
label_4719e8:
    // 0x4719e8: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x4719e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_4719ec:
    // 0x4719ec: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x4719ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_4719f0:
    // 0x4719f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4719f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4719f4:
    // 0x4719f4: 0xae22005c  sw          $v0, 0x5C($s1)
    ctx->pc = 0x4719f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
label_4719f8:
    // 0x4719f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4719f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4719fc:
    // 0x4719fc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4719fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_471a00:
    // 0x471a00: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x471a00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_471a04:
    // 0x471a04: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x471a04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_471a08:
    // 0x471a08: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x471a08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_471a0c:
    // 0x471a0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x471a0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_471a10:
    // 0x471a10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x471a10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_471a14:
    // 0x471a14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x471a14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_471a18:
    // 0x471a18: 0x3e00008  jr          $ra
label_471a1c:
    if (ctx->pc == 0x471A1Cu) {
        ctx->pc = 0x471A1Cu;
            // 0x471a1c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x471A20u;
        goto label_fallthrough_0x471a18;
    }
    ctx->pc = 0x471A18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x471A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x471A18u;
            // 0x471a1c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x471a18:
    ctx->pc = 0x471A20u;
}
