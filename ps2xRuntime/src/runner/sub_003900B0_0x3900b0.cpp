#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003900B0
// Address: 0x3900b0 - 0x390d60
void sub_003900B0_0x3900b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003900B0_0x3900b0");
#endif

    switch (ctx->pc) {
        case 0x3900b0u: goto label_3900b0;
        case 0x3900b4u: goto label_3900b4;
        case 0x3900b8u: goto label_3900b8;
        case 0x3900bcu: goto label_3900bc;
        case 0x3900c0u: goto label_3900c0;
        case 0x3900c4u: goto label_3900c4;
        case 0x3900c8u: goto label_3900c8;
        case 0x3900ccu: goto label_3900cc;
        case 0x3900d0u: goto label_3900d0;
        case 0x3900d4u: goto label_3900d4;
        case 0x3900d8u: goto label_3900d8;
        case 0x3900dcu: goto label_3900dc;
        case 0x3900e0u: goto label_3900e0;
        case 0x3900e4u: goto label_3900e4;
        case 0x3900e8u: goto label_3900e8;
        case 0x3900ecu: goto label_3900ec;
        case 0x3900f0u: goto label_3900f0;
        case 0x3900f4u: goto label_3900f4;
        case 0x3900f8u: goto label_3900f8;
        case 0x3900fcu: goto label_3900fc;
        case 0x390100u: goto label_390100;
        case 0x390104u: goto label_390104;
        case 0x390108u: goto label_390108;
        case 0x39010cu: goto label_39010c;
        case 0x390110u: goto label_390110;
        case 0x390114u: goto label_390114;
        case 0x390118u: goto label_390118;
        case 0x39011cu: goto label_39011c;
        case 0x390120u: goto label_390120;
        case 0x390124u: goto label_390124;
        case 0x390128u: goto label_390128;
        case 0x39012cu: goto label_39012c;
        case 0x390130u: goto label_390130;
        case 0x390134u: goto label_390134;
        case 0x390138u: goto label_390138;
        case 0x39013cu: goto label_39013c;
        case 0x390140u: goto label_390140;
        case 0x390144u: goto label_390144;
        case 0x390148u: goto label_390148;
        case 0x39014cu: goto label_39014c;
        case 0x390150u: goto label_390150;
        case 0x390154u: goto label_390154;
        case 0x390158u: goto label_390158;
        case 0x39015cu: goto label_39015c;
        case 0x390160u: goto label_390160;
        case 0x390164u: goto label_390164;
        case 0x390168u: goto label_390168;
        case 0x39016cu: goto label_39016c;
        case 0x390170u: goto label_390170;
        case 0x390174u: goto label_390174;
        case 0x390178u: goto label_390178;
        case 0x39017cu: goto label_39017c;
        case 0x390180u: goto label_390180;
        case 0x390184u: goto label_390184;
        case 0x390188u: goto label_390188;
        case 0x39018cu: goto label_39018c;
        case 0x390190u: goto label_390190;
        case 0x390194u: goto label_390194;
        case 0x390198u: goto label_390198;
        case 0x39019cu: goto label_39019c;
        case 0x3901a0u: goto label_3901a0;
        case 0x3901a4u: goto label_3901a4;
        case 0x3901a8u: goto label_3901a8;
        case 0x3901acu: goto label_3901ac;
        case 0x3901b0u: goto label_3901b0;
        case 0x3901b4u: goto label_3901b4;
        case 0x3901b8u: goto label_3901b8;
        case 0x3901bcu: goto label_3901bc;
        case 0x3901c0u: goto label_3901c0;
        case 0x3901c4u: goto label_3901c4;
        case 0x3901c8u: goto label_3901c8;
        case 0x3901ccu: goto label_3901cc;
        case 0x3901d0u: goto label_3901d0;
        case 0x3901d4u: goto label_3901d4;
        case 0x3901d8u: goto label_3901d8;
        case 0x3901dcu: goto label_3901dc;
        case 0x3901e0u: goto label_3901e0;
        case 0x3901e4u: goto label_3901e4;
        case 0x3901e8u: goto label_3901e8;
        case 0x3901ecu: goto label_3901ec;
        case 0x3901f0u: goto label_3901f0;
        case 0x3901f4u: goto label_3901f4;
        case 0x3901f8u: goto label_3901f8;
        case 0x3901fcu: goto label_3901fc;
        case 0x390200u: goto label_390200;
        case 0x390204u: goto label_390204;
        case 0x390208u: goto label_390208;
        case 0x39020cu: goto label_39020c;
        case 0x390210u: goto label_390210;
        case 0x390214u: goto label_390214;
        case 0x390218u: goto label_390218;
        case 0x39021cu: goto label_39021c;
        case 0x390220u: goto label_390220;
        case 0x390224u: goto label_390224;
        case 0x390228u: goto label_390228;
        case 0x39022cu: goto label_39022c;
        case 0x390230u: goto label_390230;
        case 0x390234u: goto label_390234;
        case 0x390238u: goto label_390238;
        case 0x39023cu: goto label_39023c;
        case 0x390240u: goto label_390240;
        case 0x390244u: goto label_390244;
        case 0x390248u: goto label_390248;
        case 0x39024cu: goto label_39024c;
        case 0x390250u: goto label_390250;
        case 0x390254u: goto label_390254;
        case 0x390258u: goto label_390258;
        case 0x39025cu: goto label_39025c;
        case 0x390260u: goto label_390260;
        case 0x390264u: goto label_390264;
        case 0x390268u: goto label_390268;
        case 0x39026cu: goto label_39026c;
        case 0x390270u: goto label_390270;
        case 0x390274u: goto label_390274;
        case 0x390278u: goto label_390278;
        case 0x39027cu: goto label_39027c;
        case 0x390280u: goto label_390280;
        case 0x390284u: goto label_390284;
        case 0x390288u: goto label_390288;
        case 0x39028cu: goto label_39028c;
        case 0x390290u: goto label_390290;
        case 0x390294u: goto label_390294;
        case 0x390298u: goto label_390298;
        case 0x39029cu: goto label_39029c;
        case 0x3902a0u: goto label_3902a0;
        case 0x3902a4u: goto label_3902a4;
        case 0x3902a8u: goto label_3902a8;
        case 0x3902acu: goto label_3902ac;
        case 0x3902b0u: goto label_3902b0;
        case 0x3902b4u: goto label_3902b4;
        case 0x3902b8u: goto label_3902b8;
        case 0x3902bcu: goto label_3902bc;
        case 0x3902c0u: goto label_3902c0;
        case 0x3902c4u: goto label_3902c4;
        case 0x3902c8u: goto label_3902c8;
        case 0x3902ccu: goto label_3902cc;
        case 0x3902d0u: goto label_3902d0;
        case 0x3902d4u: goto label_3902d4;
        case 0x3902d8u: goto label_3902d8;
        case 0x3902dcu: goto label_3902dc;
        case 0x3902e0u: goto label_3902e0;
        case 0x3902e4u: goto label_3902e4;
        case 0x3902e8u: goto label_3902e8;
        case 0x3902ecu: goto label_3902ec;
        case 0x3902f0u: goto label_3902f0;
        case 0x3902f4u: goto label_3902f4;
        case 0x3902f8u: goto label_3902f8;
        case 0x3902fcu: goto label_3902fc;
        case 0x390300u: goto label_390300;
        case 0x390304u: goto label_390304;
        case 0x390308u: goto label_390308;
        case 0x39030cu: goto label_39030c;
        case 0x390310u: goto label_390310;
        case 0x390314u: goto label_390314;
        case 0x390318u: goto label_390318;
        case 0x39031cu: goto label_39031c;
        case 0x390320u: goto label_390320;
        case 0x390324u: goto label_390324;
        case 0x390328u: goto label_390328;
        case 0x39032cu: goto label_39032c;
        case 0x390330u: goto label_390330;
        case 0x390334u: goto label_390334;
        case 0x390338u: goto label_390338;
        case 0x39033cu: goto label_39033c;
        case 0x390340u: goto label_390340;
        case 0x390344u: goto label_390344;
        case 0x390348u: goto label_390348;
        case 0x39034cu: goto label_39034c;
        case 0x390350u: goto label_390350;
        case 0x390354u: goto label_390354;
        case 0x390358u: goto label_390358;
        case 0x39035cu: goto label_39035c;
        case 0x390360u: goto label_390360;
        case 0x390364u: goto label_390364;
        case 0x390368u: goto label_390368;
        case 0x39036cu: goto label_39036c;
        case 0x390370u: goto label_390370;
        case 0x390374u: goto label_390374;
        case 0x390378u: goto label_390378;
        case 0x39037cu: goto label_39037c;
        case 0x390380u: goto label_390380;
        case 0x390384u: goto label_390384;
        case 0x390388u: goto label_390388;
        case 0x39038cu: goto label_39038c;
        case 0x390390u: goto label_390390;
        case 0x390394u: goto label_390394;
        case 0x390398u: goto label_390398;
        case 0x39039cu: goto label_39039c;
        case 0x3903a0u: goto label_3903a0;
        case 0x3903a4u: goto label_3903a4;
        case 0x3903a8u: goto label_3903a8;
        case 0x3903acu: goto label_3903ac;
        case 0x3903b0u: goto label_3903b0;
        case 0x3903b4u: goto label_3903b4;
        case 0x3903b8u: goto label_3903b8;
        case 0x3903bcu: goto label_3903bc;
        case 0x3903c0u: goto label_3903c0;
        case 0x3903c4u: goto label_3903c4;
        case 0x3903c8u: goto label_3903c8;
        case 0x3903ccu: goto label_3903cc;
        case 0x3903d0u: goto label_3903d0;
        case 0x3903d4u: goto label_3903d4;
        case 0x3903d8u: goto label_3903d8;
        case 0x3903dcu: goto label_3903dc;
        case 0x3903e0u: goto label_3903e0;
        case 0x3903e4u: goto label_3903e4;
        case 0x3903e8u: goto label_3903e8;
        case 0x3903ecu: goto label_3903ec;
        case 0x3903f0u: goto label_3903f0;
        case 0x3903f4u: goto label_3903f4;
        case 0x3903f8u: goto label_3903f8;
        case 0x3903fcu: goto label_3903fc;
        case 0x390400u: goto label_390400;
        case 0x390404u: goto label_390404;
        case 0x390408u: goto label_390408;
        case 0x39040cu: goto label_39040c;
        case 0x390410u: goto label_390410;
        case 0x390414u: goto label_390414;
        case 0x390418u: goto label_390418;
        case 0x39041cu: goto label_39041c;
        case 0x390420u: goto label_390420;
        case 0x390424u: goto label_390424;
        case 0x390428u: goto label_390428;
        case 0x39042cu: goto label_39042c;
        case 0x390430u: goto label_390430;
        case 0x390434u: goto label_390434;
        case 0x390438u: goto label_390438;
        case 0x39043cu: goto label_39043c;
        case 0x390440u: goto label_390440;
        case 0x390444u: goto label_390444;
        case 0x390448u: goto label_390448;
        case 0x39044cu: goto label_39044c;
        case 0x390450u: goto label_390450;
        case 0x390454u: goto label_390454;
        case 0x390458u: goto label_390458;
        case 0x39045cu: goto label_39045c;
        case 0x390460u: goto label_390460;
        case 0x390464u: goto label_390464;
        case 0x390468u: goto label_390468;
        case 0x39046cu: goto label_39046c;
        case 0x390470u: goto label_390470;
        case 0x390474u: goto label_390474;
        case 0x390478u: goto label_390478;
        case 0x39047cu: goto label_39047c;
        case 0x390480u: goto label_390480;
        case 0x390484u: goto label_390484;
        case 0x390488u: goto label_390488;
        case 0x39048cu: goto label_39048c;
        case 0x390490u: goto label_390490;
        case 0x390494u: goto label_390494;
        case 0x390498u: goto label_390498;
        case 0x39049cu: goto label_39049c;
        case 0x3904a0u: goto label_3904a0;
        case 0x3904a4u: goto label_3904a4;
        case 0x3904a8u: goto label_3904a8;
        case 0x3904acu: goto label_3904ac;
        case 0x3904b0u: goto label_3904b0;
        case 0x3904b4u: goto label_3904b4;
        case 0x3904b8u: goto label_3904b8;
        case 0x3904bcu: goto label_3904bc;
        case 0x3904c0u: goto label_3904c0;
        case 0x3904c4u: goto label_3904c4;
        case 0x3904c8u: goto label_3904c8;
        case 0x3904ccu: goto label_3904cc;
        case 0x3904d0u: goto label_3904d0;
        case 0x3904d4u: goto label_3904d4;
        case 0x3904d8u: goto label_3904d8;
        case 0x3904dcu: goto label_3904dc;
        case 0x3904e0u: goto label_3904e0;
        case 0x3904e4u: goto label_3904e4;
        case 0x3904e8u: goto label_3904e8;
        case 0x3904ecu: goto label_3904ec;
        case 0x3904f0u: goto label_3904f0;
        case 0x3904f4u: goto label_3904f4;
        case 0x3904f8u: goto label_3904f8;
        case 0x3904fcu: goto label_3904fc;
        case 0x390500u: goto label_390500;
        case 0x390504u: goto label_390504;
        case 0x390508u: goto label_390508;
        case 0x39050cu: goto label_39050c;
        case 0x390510u: goto label_390510;
        case 0x390514u: goto label_390514;
        case 0x390518u: goto label_390518;
        case 0x39051cu: goto label_39051c;
        case 0x390520u: goto label_390520;
        case 0x390524u: goto label_390524;
        case 0x390528u: goto label_390528;
        case 0x39052cu: goto label_39052c;
        case 0x390530u: goto label_390530;
        case 0x390534u: goto label_390534;
        case 0x390538u: goto label_390538;
        case 0x39053cu: goto label_39053c;
        case 0x390540u: goto label_390540;
        case 0x390544u: goto label_390544;
        case 0x390548u: goto label_390548;
        case 0x39054cu: goto label_39054c;
        case 0x390550u: goto label_390550;
        case 0x390554u: goto label_390554;
        case 0x390558u: goto label_390558;
        case 0x39055cu: goto label_39055c;
        case 0x390560u: goto label_390560;
        case 0x390564u: goto label_390564;
        case 0x390568u: goto label_390568;
        case 0x39056cu: goto label_39056c;
        case 0x390570u: goto label_390570;
        case 0x390574u: goto label_390574;
        case 0x390578u: goto label_390578;
        case 0x39057cu: goto label_39057c;
        case 0x390580u: goto label_390580;
        case 0x390584u: goto label_390584;
        case 0x390588u: goto label_390588;
        case 0x39058cu: goto label_39058c;
        case 0x390590u: goto label_390590;
        case 0x390594u: goto label_390594;
        case 0x390598u: goto label_390598;
        case 0x39059cu: goto label_39059c;
        case 0x3905a0u: goto label_3905a0;
        case 0x3905a4u: goto label_3905a4;
        case 0x3905a8u: goto label_3905a8;
        case 0x3905acu: goto label_3905ac;
        case 0x3905b0u: goto label_3905b0;
        case 0x3905b4u: goto label_3905b4;
        case 0x3905b8u: goto label_3905b8;
        case 0x3905bcu: goto label_3905bc;
        case 0x3905c0u: goto label_3905c0;
        case 0x3905c4u: goto label_3905c4;
        case 0x3905c8u: goto label_3905c8;
        case 0x3905ccu: goto label_3905cc;
        case 0x3905d0u: goto label_3905d0;
        case 0x3905d4u: goto label_3905d4;
        case 0x3905d8u: goto label_3905d8;
        case 0x3905dcu: goto label_3905dc;
        case 0x3905e0u: goto label_3905e0;
        case 0x3905e4u: goto label_3905e4;
        case 0x3905e8u: goto label_3905e8;
        case 0x3905ecu: goto label_3905ec;
        case 0x3905f0u: goto label_3905f0;
        case 0x3905f4u: goto label_3905f4;
        case 0x3905f8u: goto label_3905f8;
        case 0x3905fcu: goto label_3905fc;
        case 0x390600u: goto label_390600;
        case 0x390604u: goto label_390604;
        case 0x390608u: goto label_390608;
        case 0x39060cu: goto label_39060c;
        case 0x390610u: goto label_390610;
        case 0x390614u: goto label_390614;
        case 0x390618u: goto label_390618;
        case 0x39061cu: goto label_39061c;
        case 0x390620u: goto label_390620;
        case 0x390624u: goto label_390624;
        case 0x390628u: goto label_390628;
        case 0x39062cu: goto label_39062c;
        case 0x390630u: goto label_390630;
        case 0x390634u: goto label_390634;
        case 0x390638u: goto label_390638;
        case 0x39063cu: goto label_39063c;
        case 0x390640u: goto label_390640;
        case 0x390644u: goto label_390644;
        case 0x390648u: goto label_390648;
        case 0x39064cu: goto label_39064c;
        case 0x390650u: goto label_390650;
        case 0x390654u: goto label_390654;
        case 0x390658u: goto label_390658;
        case 0x39065cu: goto label_39065c;
        case 0x390660u: goto label_390660;
        case 0x390664u: goto label_390664;
        case 0x390668u: goto label_390668;
        case 0x39066cu: goto label_39066c;
        case 0x390670u: goto label_390670;
        case 0x390674u: goto label_390674;
        case 0x390678u: goto label_390678;
        case 0x39067cu: goto label_39067c;
        case 0x390680u: goto label_390680;
        case 0x390684u: goto label_390684;
        case 0x390688u: goto label_390688;
        case 0x39068cu: goto label_39068c;
        case 0x390690u: goto label_390690;
        case 0x390694u: goto label_390694;
        case 0x390698u: goto label_390698;
        case 0x39069cu: goto label_39069c;
        case 0x3906a0u: goto label_3906a0;
        case 0x3906a4u: goto label_3906a4;
        case 0x3906a8u: goto label_3906a8;
        case 0x3906acu: goto label_3906ac;
        case 0x3906b0u: goto label_3906b0;
        case 0x3906b4u: goto label_3906b4;
        case 0x3906b8u: goto label_3906b8;
        case 0x3906bcu: goto label_3906bc;
        case 0x3906c0u: goto label_3906c0;
        case 0x3906c4u: goto label_3906c4;
        case 0x3906c8u: goto label_3906c8;
        case 0x3906ccu: goto label_3906cc;
        case 0x3906d0u: goto label_3906d0;
        case 0x3906d4u: goto label_3906d4;
        case 0x3906d8u: goto label_3906d8;
        case 0x3906dcu: goto label_3906dc;
        case 0x3906e0u: goto label_3906e0;
        case 0x3906e4u: goto label_3906e4;
        case 0x3906e8u: goto label_3906e8;
        case 0x3906ecu: goto label_3906ec;
        case 0x3906f0u: goto label_3906f0;
        case 0x3906f4u: goto label_3906f4;
        case 0x3906f8u: goto label_3906f8;
        case 0x3906fcu: goto label_3906fc;
        case 0x390700u: goto label_390700;
        case 0x390704u: goto label_390704;
        case 0x390708u: goto label_390708;
        case 0x39070cu: goto label_39070c;
        case 0x390710u: goto label_390710;
        case 0x390714u: goto label_390714;
        case 0x390718u: goto label_390718;
        case 0x39071cu: goto label_39071c;
        case 0x390720u: goto label_390720;
        case 0x390724u: goto label_390724;
        case 0x390728u: goto label_390728;
        case 0x39072cu: goto label_39072c;
        case 0x390730u: goto label_390730;
        case 0x390734u: goto label_390734;
        case 0x390738u: goto label_390738;
        case 0x39073cu: goto label_39073c;
        case 0x390740u: goto label_390740;
        case 0x390744u: goto label_390744;
        case 0x390748u: goto label_390748;
        case 0x39074cu: goto label_39074c;
        case 0x390750u: goto label_390750;
        case 0x390754u: goto label_390754;
        case 0x390758u: goto label_390758;
        case 0x39075cu: goto label_39075c;
        case 0x390760u: goto label_390760;
        case 0x390764u: goto label_390764;
        case 0x390768u: goto label_390768;
        case 0x39076cu: goto label_39076c;
        case 0x390770u: goto label_390770;
        case 0x390774u: goto label_390774;
        case 0x390778u: goto label_390778;
        case 0x39077cu: goto label_39077c;
        case 0x390780u: goto label_390780;
        case 0x390784u: goto label_390784;
        case 0x390788u: goto label_390788;
        case 0x39078cu: goto label_39078c;
        case 0x390790u: goto label_390790;
        case 0x390794u: goto label_390794;
        case 0x390798u: goto label_390798;
        case 0x39079cu: goto label_39079c;
        case 0x3907a0u: goto label_3907a0;
        case 0x3907a4u: goto label_3907a4;
        case 0x3907a8u: goto label_3907a8;
        case 0x3907acu: goto label_3907ac;
        case 0x3907b0u: goto label_3907b0;
        case 0x3907b4u: goto label_3907b4;
        case 0x3907b8u: goto label_3907b8;
        case 0x3907bcu: goto label_3907bc;
        case 0x3907c0u: goto label_3907c0;
        case 0x3907c4u: goto label_3907c4;
        case 0x3907c8u: goto label_3907c8;
        case 0x3907ccu: goto label_3907cc;
        case 0x3907d0u: goto label_3907d0;
        case 0x3907d4u: goto label_3907d4;
        case 0x3907d8u: goto label_3907d8;
        case 0x3907dcu: goto label_3907dc;
        case 0x3907e0u: goto label_3907e0;
        case 0x3907e4u: goto label_3907e4;
        case 0x3907e8u: goto label_3907e8;
        case 0x3907ecu: goto label_3907ec;
        case 0x3907f0u: goto label_3907f0;
        case 0x3907f4u: goto label_3907f4;
        case 0x3907f8u: goto label_3907f8;
        case 0x3907fcu: goto label_3907fc;
        case 0x390800u: goto label_390800;
        case 0x390804u: goto label_390804;
        case 0x390808u: goto label_390808;
        case 0x39080cu: goto label_39080c;
        case 0x390810u: goto label_390810;
        case 0x390814u: goto label_390814;
        case 0x390818u: goto label_390818;
        case 0x39081cu: goto label_39081c;
        case 0x390820u: goto label_390820;
        case 0x390824u: goto label_390824;
        case 0x390828u: goto label_390828;
        case 0x39082cu: goto label_39082c;
        case 0x390830u: goto label_390830;
        case 0x390834u: goto label_390834;
        case 0x390838u: goto label_390838;
        case 0x39083cu: goto label_39083c;
        case 0x390840u: goto label_390840;
        case 0x390844u: goto label_390844;
        case 0x390848u: goto label_390848;
        case 0x39084cu: goto label_39084c;
        case 0x390850u: goto label_390850;
        case 0x390854u: goto label_390854;
        case 0x390858u: goto label_390858;
        case 0x39085cu: goto label_39085c;
        case 0x390860u: goto label_390860;
        case 0x390864u: goto label_390864;
        case 0x390868u: goto label_390868;
        case 0x39086cu: goto label_39086c;
        case 0x390870u: goto label_390870;
        case 0x390874u: goto label_390874;
        case 0x390878u: goto label_390878;
        case 0x39087cu: goto label_39087c;
        case 0x390880u: goto label_390880;
        case 0x390884u: goto label_390884;
        case 0x390888u: goto label_390888;
        case 0x39088cu: goto label_39088c;
        case 0x390890u: goto label_390890;
        case 0x390894u: goto label_390894;
        case 0x390898u: goto label_390898;
        case 0x39089cu: goto label_39089c;
        case 0x3908a0u: goto label_3908a0;
        case 0x3908a4u: goto label_3908a4;
        case 0x3908a8u: goto label_3908a8;
        case 0x3908acu: goto label_3908ac;
        case 0x3908b0u: goto label_3908b0;
        case 0x3908b4u: goto label_3908b4;
        case 0x3908b8u: goto label_3908b8;
        case 0x3908bcu: goto label_3908bc;
        case 0x3908c0u: goto label_3908c0;
        case 0x3908c4u: goto label_3908c4;
        case 0x3908c8u: goto label_3908c8;
        case 0x3908ccu: goto label_3908cc;
        case 0x3908d0u: goto label_3908d0;
        case 0x3908d4u: goto label_3908d4;
        case 0x3908d8u: goto label_3908d8;
        case 0x3908dcu: goto label_3908dc;
        case 0x3908e0u: goto label_3908e0;
        case 0x3908e4u: goto label_3908e4;
        case 0x3908e8u: goto label_3908e8;
        case 0x3908ecu: goto label_3908ec;
        case 0x3908f0u: goto label_3908f0;
        case 0x3908f4u: goto label_3908f4;
        case 0x3908f8u: goto label_3908f8;
        case 0x3908fcu: goto label_3908fc;
        case 0x390900u: goto label_390900;
        case 0x390904u: goto label_390904;
        case 0x390908u: goto label_390908;
        case 0x39090cu: goto label_39090c;
        case 0x390910u: goto label_390910;
        case 0x390914u: goto label_390914;
        case 0x390918u: goto label_390918;
        case 0x39091cu: goto label_39091c;
        case 0x390920u: goto label_390920;
        case 0x390924u: goto label_390924;
        case 0x390928u: goto label_390928;
        case 0x39092cu: goto label_39092c;
        case 0x390930u: goto label_390930;
        case 0x390934u: goto label_390934;
        case 0x390938u: goto label_390938;
        case 0x39093cu: goto label_39093c;
        case 0x390940u: goto label_390940;
        case 0x390944u: goto label_390944;
        case 0x390948u: goto label_390948;
        case 0x39094cu: goto label_39094c;
        case 0x390950u: goto label_390950;
        case 0x390954u: goto label_390954;
        case 0x390958u: goto label_390958;
        case 0x39095cu: goto label_39095c;
        case 0x390960u: goto label_390960;
        case 0x390964u: goto label_390964;
        case 0x390968u: goto label_390968;
        case 0x39096cu: goto label_39096c;
        case 0x390970u: goto label_390970;
        case 0x390974u: goto label_390974;
        case 0x390978u: goto label_390978;
        case 0x39097cu: goto label_39097c;
        case 0x390980u: goto label_390980;
        case 0x390984u: goto label_390984;
        case 0x390988u: goto label_390988;
        case 0x39098cu: goto label_39098c;
        case 0x390990u: goto label_390990;
        case 0x390994u: goto label_390994;
        case 0x390998u: goto label_390998;
        case 0x39099cu: goto label_39099c;
        case 0x3909a0u: goto label_3909a0;
        case 0x3909a4u: goto label_3909a4;
        case 0x3909a8u: goto label_3909a8;
        case 0x3909acu: goto label_3909ac;
        case 0x3909b0u: goto label_3909b0;
        case 0x3909b4u: goto label_3909b4;
        case 0x3909b8u: goto label_3909b8;
        case 0x3909bcu: goto label_3909bc;
        case 0x3909c0u: goto label_3909c0;
        case 0x3909c4u: goto label_3909c4;
        case 0x3909c8u: goto label_3909c8;
        case 0x3909ccu: goto label_3909cc;
        case 0x3909d0u: goto label_3909d0;
        case 0x3909d4u: goto label_3909d4;
        case 0x3909d8u: goto label_3909d8;
        case 0x3909dcu: goto label_3909dc;
        case 0x3909e0u: goto label_3909e0;
        case 0x3909e4u: goto label_3909e4;
        case 0x3909e8u: goto label_3909e8;
        case 0x3909ecu: goto label_3909ec;
        case 0x3909f0u: goto label_3909f0;
        case 0x3909f4u: goto label_3909f4;
        case 0x3909f8u: goto label_3909f8;
        case 0x3909fcu: goto label_3909fc;
        case 0x390a00u: goto label_390a00;
        case 0x390a04u: goto label_390a04;
        case 0x390a08u: goto label_390a08;
        case 0x390a0cu: goto label_390a0c;
        case 0x390a10u: goto label_390a10;
        case 0x390a14u: goto label_390a14;
        case 0x390a18u: goto label_390a18;
        case 0x390a1cu: goto label_390a1c;
        case 0x390a20u: goto label_390a20;
        case 0x390a24u: goto label_390a24;
        case 0x390a28u: goto label_390a28;
        case 0x390a2cu: goto label_390a2c;
        case 0x390a30u: goto label_390a30;
        case 0x390a34u: goto label_390a34;
        case 0x390a38u: goto label_390a38;
        case 0x390a3cu: goto label_390a3c;
        case 0x390a40u: goto label_390a40;
        case 0x390a44u: goto label_390a44;
        case 0x390a48u: goto label_390a48;
        case 0x390a4cu: goto label_390a4c;
        case 0x390a50u: goto label_390a50;
        case 0x390a54u: goto label_390a54;
        case 0x390a58u: goto label_390a58;
        case 0x390a5cu: goto label_390a5c;
        case 0x390a60u: goto label_390a60;
        case 0x390a64u: goto label_390a64;
        case 0x390a68u: goto label_390a68;
        case 0x390a6cu: goto label_390a6c;
        case 0x390a70u: goto label_390a70;
        case 0x390a74u: goto label_390a74;
        case 0x390a78u: goto label_390a78;
        case 0x390a7cu: goto label_390a7c;
        case 0x390a80u: goto label_390a80;
        case 0x390a84u: goto label_390a84;
        case 0x390a88u: goto label_390a88;
        case 0x390a8cu: goto label_390a8c;
        case 0x390a90u: goto label_390a90;
        case 0x390a94u: goto label_390a94;
        case 0x390a98u: goto label_390a98;
        case 0x390a9cu: goto label_390a9c;
        case 0x390aa0u: goto label_390aa0;
        case 0x390aa4u: goto label_390aa4;
        case 0x390aa8u: goto label_390aa8;
        case 0x390aacu: goto label_390aac;
        case 0x390ab0u: goto label_390ab0;
        case 0x390ab4u: goto label_390ab4;
        case 0x390ab8u: goto label_390ab8;
        case 0x390abcu: goto label_390abc;
        case 0x390ac0u: goto label_390ac0;
        case 0x390ac4u: goto label_390ac4;
        case 0x390ac8u: goto label_390ac8;
        case 0x390accu: goto label_390acc;
        case 0x390ad0u: goto label_390ad0;
        case 0x390ad4u: goto label_390ad4;
        case 0x390ad8u: goto label_390ad8;
        case 0x390adcu: goto label_390adc;
        case 0x390ae0u: goto label_390ae0;
        case 0x390ae4u: goto label_390ae4;
        case 0x390ae8u: goto label_390ae8;
        case 0x390aecu: goto label_390aec;
        case 0x390af0u: goto label_390af0;
        case 0x390af4u: goto label_390af4;
        case 0x390af8u: goto label_390af8;
        case 0x390afcu: goto label_390afc;
        case 0x390b00u: goto label_390b00;
        case 0x390b04u: goto label_390b04;
        case 0x390b08u: goto label_390b08;
        case 0x390b0cu: goto label_390b0c;
        case 0x390b10u: goto label_390b10;
        case 0x390b14u: goto label_390b14;
        case 0x390b18u: goto label_390b18;
        case 0x390b1cu: goto label_390b1c;
        case 0x390b20u: goto label_390b20;
        case 0x390b24u: goto label_390b24;
        case 0x390b28u: goto label_390b28;
        case 0x390b2cu: goto label_390b2c;
        case 0x390b30u: goto label_390b30;
        case 0x390b34u: goto label_390b34;
        case 0x390b38u: goto label_390b38;
        case 0x390b3cu: goto label_390b3c;
        case 0x390b40u: goto label_390b40;
        case 0x390b44u: goto label_390b44;
        case 0x390b48u: goto label_390b48;
        case 0x390b4cu: goto label_390b4c;
        case 0x390b50u: goto label_390b50;
        case 0x390b54u: goto label_390b54;
        case 0x390b58u: goto label_390b58;
        case 0x390b5cu: goto label_390b5c;
        case 0x390b60u: goto label_390b60;
        case 0x390b64u: goto label_390b64;
        case 0x390b68u: goto label_390b68;
        case 0x390b6cu: goto label_390b6c;
        case 0x390b70u: goto label_390b70;
        case 0x390b74u: goto label_390b74;
        case 0x390b78u: goto label_390b78;
        case 0x390b7cu: goto label_390b7c;
        case 0x390b80u: goto label_390b80;
        case 0x390b84u: goto label_390b84;
        case 0x390b88u: goto label_390b88;
        case 0x390b8cu: goto label_390b8c;
        case 0x390b90u: goto label_390b90;
        case 0x390b94u: goto label_390b94;
        case 0x390b98u: goto label_390b98;
        case 0x390b9cu: goto label_390b9c;
        case 0x390ba0u: goto label_390ba0;
        case 0x390ba4u: goto label_390ba4;
        case 0x390ba8u: goto label_390ba8;
        case 0x390bacu: goto label_390bac;
        case 0x390bb0u: goto label_390bb0;
        case 0x390bb4u: goto label_390bb4;
        case 0x390bb8u: goto label_390bb8;
        case 0x390bbcu: goto label_390bbc;
        case 0x390bc0u: goto label_390bc0;
        case 0x390bc4u: goto label_390bc4;
        case 0x390bc8u: goto label_390bc8;
        case 0x390bccu: goto label_390bcc;
        case 0x390bd0u: goto label_390bd0;
        case 0x390bd4u: goto label_390bd4;
        case 0x390bd8u: goto label_390bd8;
        case 0x390bdcu: goto label_390bdc;
        case 0x390be0u: goto label_390be0;
        case 0x390be4u: goto label_390be4;
        case 0x390be8u: goto label_390be8;
        case 0x390becu: goto label_390bec;
        case 0x390bf0u: goto label_390bf0;
        case 0x390bf4u: goto label_390bf4;
        case 0x390bf8u: goto label_390bf8;
        case 0x390bfcu: goto label_390bfc;
        case 0x390c00u: goto label_390c00;
        case 0x390c04u: goto label_390c04;
        case 0x390c08u: goto label_390c08;
        case 0x390c0cu: goto label_390c0c;
        case 0x390c10u: goto label_390c10;
        case 0x390c14u: goto label_390c14;
        case 0x390c18u: goto label_390c18;
        case 0x390c1cu: goto label_390c1c;
        case 0x390c20u: goto label_390c20;
        case 0x390c24u: goto label_390c24;
        case 0x390c28u: goto label_390c28;
        case 0x390c2cu: goto label_390c2c;
        case 0x390c30u: goto label_390c30;
        case 0x390c34u: goto label_390c34;
        case 0x390c38u: goto label_390c38;
        case 0x390c3cu: goto label_390c3c;
        case 0x390c40u: goto label_390c40;
        case 0x390c44u: goto label_390c44;
        case 0x390c48u: goto label_390c48;
        case 0x390c4cu: goto label_390c4c;
        case 0x390c50u: goto label_390c50;
        case 0x390c54u: goto label_390c54;
        case 0x390c58u: goto label_390c58;
        case 0x390c5cu: goto label_390c5c;
        case 0x390c60u: goto label_390c60;
        case 0x390c64u: goto label_390c64;
        case 0x390c68u: goto label_390c68;
        case 0x390c6cu: goto label_390c6c;
        case 0x390c70u: goto label_390c70;
        case 0x390c74u: goto label_390c74;
        case 0x390c78u: goto label_390c78;
        case 0x390c7cu: goto label_390c7c;
        case 0x390c80u: goto label_390c80;
        case 0x390c84u: goto label_390c84;
        case 0x390c88u: goto label_390c88;
        case 0x390c8cu: goto label_390c8c;
        case 0x390c90u: goto label_390c90;
        case 0x390c94u: goto label_390c94;
        case 0x390c98u: goto label_390c98;
        case 0x390c9cu: goto label_390c9c;
        case 0x390ca0u: goto label_390ca0;
        case 0x390ca4u: goto label_390ca4;
        case 0x390ca8u: goto label_390ca8;
        case 0x390cacu: goto label_390cac;
        case 0x390cb0u: goto label_390cb0;
        case 0x390cb4u: goto label_390cb4;
        case 0x390cb8u: goto label_390cb8;
        case 0x390cbcu: goto label_390cbc;
        case 0x390cc0u: goto label_390cc0;
        case 0x390cc4u: goto label_390cc4;
        case 0x390cc8u: goto label_390cc8;
        case 0x390cccu: goto label_390ccc;
        case 0x390cd0u: goto label_390cd0;
        case 0x390cd4u: goto label_390cd4;
        case 0x390cd8u: goto label_390cd8;
        case 0x390cdcu: goto label_390cdc;
        case 0x390ce0u: goto label_390ce0;
        case 0x390ce4u: goto label_390ce4;
        case 0x390ce8u: goto label_390ce8;
        case 0x390cecu: goto label_390cec;
        case 0x390cf0u: goto label_390cf0;
        case 0x390cf4u: goto label_390cf4;
        case 0x390cf8u: goto label_390cf8;
        case 0x390cfcu: goto label_390cfc;
        case 0x390d00u: goto label_390d00;
        case 0x390d04u: goto label_390d04;
        case 0x390d08u: goto label_390d08;
        case 0x390d0cu: goto label_390d0c;
        case 0x390d10u: goto label_390d10;
        case 0x390d14u: goto label_390d14;
        case 0x390d18u: goto label_390d18;
        case 0x390d1cu: goto label_390d1c;
        case 0x390d20u: goto label_390d20;
        case 0x390d24u: goto label_390d24;
        case 0x390d28u: goto label_390d28;
        case 0x390d2cu: goto label_390d2c;
        case 0x390d30u: goto label_390d30;
        case 0x390d34u: goto label_390d34;
        case 0x390d38u: goto label_390d38;
        case 0x390d3cu: goto label_390d3c;
        case 0x390d40u: goto label_390d40;
        case 0x390d44u: goto label_390d44;
        case 0x390d48u: goto label_390d48;
        case 0x390d4cu: goto label_390d4c;
        case 0x390d50u: goto label_390d50;
        case 0x390d54u: goto label_390d54;
        case 0x390d58u: goto label_390d58;
        case 0x390d5cu: goto label_390d5c;
        default: break;
    }

    ctx->pc = 0x3900b0u;

label_3900b0:
    // 0x3900b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3900b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3900b4:
    // 0x3900b4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x3900b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3900b8:
    // 0x3900b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3900b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3900bc:
    // 0x3900bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3900bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3900c0:
    // 0x3900c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3900c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3900c4:
    // 0x3900c4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3900c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3900c8:
    // 0x3900c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3900c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3900cc:
    // 0x3900cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3900ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3900d0:
    // 0x3900d0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3900d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3900d4:
    // 0x3900d4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3900d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3900d8:
    // 0x3900d8: 0xc10ca68  jal         func_4329A0
label_3900dc:
    if (ctx->pc == 0x3900DCu) {
        ctx->pc = 0x3900DCu;
            // 0x3900dc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x3900E0u;
        goto label_3900e0;
    }
    ctx->pc = 0x3900D8u;
    SET_GPR_U32(ctx, 31, 0x3900E0u);
    ctx->pc = 0x3900DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3900D8u;
            // 0x3900dc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3900E0u; }
        if (ctx->pc != 0x3900E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3900E0u; }
        if (ctx->pc != 0x3900E0u) { return; }
    }
    ctx->pc = 0x3900E0u;
label_3900e0:
    // 0x3900e0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3900e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3900e4:
    // 0x3900e4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3900e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3900e8:
    // 0x3900e8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x3900e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_3900ec:
    // 0x3900ec: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x3900ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_3900f0:
    // 0x3900f0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x3900f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_3900f4:
    // 0x3900f4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x3900f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_3900f8:
    // 0x3900f8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x3900f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_3900fc:
    // 0x3900fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3900fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_390100:
    // 0x390100: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x390100u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_390104:
    // 0x390104: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x390104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_390108:
    // 0x390108: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x390108u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_39010c:
    // 0x39010c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x39010cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_390110:
    // 0x390110: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x390110u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_390114:
    // 0x390114: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x390114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_390118:
    // 0x390118: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x390118u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_39011c:
    // 0x39011c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x39011cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_390120:
    // 0x390120: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x390120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_390124:
    // 0x390124: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x390124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_390128:
    // 0x390128: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x390128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_39012c:
    // 0x39012c: 0xc0582cc  jal         func_160B30
label_390130:
    if (ctx->pc == 0x390130u) {
        ctx->pc = 0x390130u;
            // 0x390130: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x390134u;
        goto label_390134;
    }
    ctx->pc = 0x39012Cu;
    SET_GPR_U32(ctx, 31, 0x390134u);
    ctx->pc = 0x390130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39012Cu;
            // 0x390130: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390134u; }
        if (ctx->pc != 0x390134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390134u; }
        if (ctx->pc != 0x390134u) { return; }
    }
    ctx->pc = 0x390134u;
label_390134:
    // 0x390134: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x390134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_390138:
    // 0x390138: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x390138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_39013c:
    // 0x39013c: 0x24637dd0  addiu       $v1, $v1, 0x7DD0
    ctx->pc = 0x39013cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32208));
label_390140:
    // 0x390140: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x390140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_390144:
    // 0x390144: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x390144u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_390148:
    // 0x390148: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x390148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_39014c:
    // 0x39014c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x39014cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_390150:
    // 0x390150: 0xac446120  sw          $a0, 0x6120($v0)
    ctx->pc = 0x390150u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24864), GPR_U32(ctx, 4));
label_390154:
    // 0x390154: 0x24637de0  addiu       $v1, $v1, 0x7DE0
    ctx->pc = 0x390154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32224));
label_390158:
    // 0x390158: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x390158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_39015c:
    // 0x39015c: 0x24427e18  addiu       $v0, $v0, 0x7E18
    ctx->pc = 0x39015cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32280));
label_390160:
    // 0x390160: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x390160u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_390164:
    // 0x390164: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x390164u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_390168:
    // 0x390168: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x390168u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_39016c:
    // 0x39016c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x39016cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_390170:
    // 0x390170: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x390170u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_390174:
    // 0x390174: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x390174u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_390178:
    // 0x390178: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x390178u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_39017c:
    // 0x39017c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x39017cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_390180:
    // 0x390180: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x390180u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_390184:
    // 0x390184: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x390184u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_390188:
    // 0x390188: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x390188u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_39018c:
    // 0x39018c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x39018cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_390190:
    // 0x390190: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x390190u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_390194:
    // 0x390194: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_390198:
    if (ctx->pc == 0x390198u) {
        ctx->pc = 0x39019Cu;
        goto label_39019c;
    }
    ctx->pc = 0x390194u;
    {
        const bool branch_taken_0x390194 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x390194) {
            ctx->pc = 0x390228u;
            goto label_390228;
        }
    }
    ctx->pc = 0x39019Cu;
label_39019c:
    // 0x39019c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x39019cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_3901a0:
    // 0x3901a0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3901a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3901a4:
    // 0x3901a4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3901a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_3901a8:
    // 0x3901a8: 0xc040138  jal         func_1004E0
label_3901ac:
    if (ctx->pc == 0x3901ACu) {
        ctx->pc = 0x3901ACu;
            // 0x3901ac: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x3901B0u;
        goto label_3901b0;
    }
    ctx->pc = 0x3901A8u;
    SET_GPR_U32(ctx, 31, 0x3901B0u);
    ctx->pc = 0x3901ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3901A8u;
            // 0x3901ac: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3901B0u; }
        if (ctx->pc != 0x3901B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3901B0u; }
        if (ctx->pc != 0x3901B0u) { return; }
    }
    ctx->pc = 0x3901B0u;
label_3901b0:
    // 0x3901b0: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x3901b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
label_3901b4:
    // 0x3901b4: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x3901b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
label_3901b8:
    // 0x3901b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3901b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3901bc:
    // 0x3901bc: 0x24a50250  addiu       $a1, $a1, 0x250
    ctx->pc = 0x3901bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 592));
label_3901c0:
    // 0x3901c0: 0x24c6f760  addiu       $a2, $a2, -0x8A0
    ctx->pc = 0x3901c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965088));
label_3901c4:
    // 0x3901c4: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x3901c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_3901c8:
    // 0x3901c8: 0xc040840  jal         func_102100
label_3901cc:
    if (ctx->pc == 0x3901CCu) {
        ctx->pc = 0x3901CCu;
            // 0x3901cc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3901D0u;
        goto label_3901d0;
    }
    ctx->pc = 0x3901C8u;
    SET_GPR_U32(ctx, 31, 0x3901D0u);
    ctx->pc = 0x3901CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3901C8u;
            // 0x3901cc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3901D0u; }
        if (ctx->pc != 0x3901D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3901D0u; }
        if (ctx->pc != 0x3901D0u) { return; }
    }
    ctx->pc = 0x3901D0u;
label_3901d0:
    // 0x3901d0: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x3901d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_3901d4:
    // 0x3901d4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3901d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3901d8:
    // 0x3901d8: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x3901d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_3901dc:
    // 0x3901dc: 0xc0788fc  jal         func_1E23F0
label_3901e0:
    if (ctx->pc == 0x3901E0u) {
        ctx->pc = 0x3901E0u;
            // 0x3901e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3901E4u;
        goto label_3901e4;
    }
    ctx->pc = 0x3901DCu;
    SET_GPR_U32(ctx, 31, 0x3901E4u);
    ctx->pc = 0x3901E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3901DCu;
            // 0x3901e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3901E4u; }
        if (ctx->pc != 0x3901E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3901E4u; }
        if (ctx->pc != 0x3901E4u) { return; }
    }
    ctx->pc = 0x3901E4u;
label_3901e4:
    // 0x3901e4: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x3901e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_3901e8:
    // 0x3901e8: 0xc0788fc  jal         func_1E23F0
label_3901ec:
    if (ctx->pc == 0x3901ECu) {
        ctx->pc = 0x3901ECu;
            // 0x3901ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3901F0u;
        goto label_3901f0;
    }
    ctx->pc = 0x3901E8u;
    SET_GPR_U32(ctx, 31, 0x3901F0u);
    ctx->pc = 0x3901ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3901E8u;
            // 0x3901ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3901F0u; }
        if (ctx->pc != 0x3901F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3901F0u; }
        if (ctx->pc != 0x3901F0u) { return; }
    }
    ctx->pc = 0x3901F0u;
label_3901f0:
    // 0x3901f0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3901f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3901f4:
    // 0x3901f4: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x3901f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_3901f8:
    // 0x3901f8: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x3901f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_3901fc:
    // 0x3901fc: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x3901fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_390200:
    // 0x390200: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x390200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_390204:
    // 0x390204: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x390204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_390208:
    // 0x390208: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x390208u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_39020c:
    // 0x39020c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x39020cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_390210:
    // 0x390210: 0xc0a997c  jal         func_2A65F0
label_390214:
    if (ctx->pc == 0x390214u) {
        ctx->pc = 0x390214u;
            // 0x390214: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x390218u;
        goto label_390218;
    }
    ctx->pc = 0x390210u;
    SET_GPR_U32(ctx, 31, 0x390218u);
    ctx->pc = 0x390214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x390210u;
            // 0x390214: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390218u; }
        if (ctx->pc != 0x390218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390218u; }
        if (ctx->pc != 0x390218u) { return; }
    }
    ctx->pc = 0x390218u;
label_390218:
    // 0x390218: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x390218u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_39021c:
    // 0x39021c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x39021cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_390220:
    // 0x390220: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_390224:
    if (ctx->pc == 0x390224u) {
        ctx->pc = 0x390224u;
            // 0x390224: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->pc = 0x390228u;
        goto label_390228;
    }
    ctx->pc = 0x390220u;
    {
        const bool branch_taken_0x390220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x390224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x390220u;
            // 0x390224: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390220) {
            ctx->pc = 0x3901F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3901f4;
        }
    }
    ctx->pc = 0x390228u;
label_390228:
    // 0x390228: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x390228u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39022c:
    // 0x39022c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x39022cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_390230:
    // 0x390230: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x390230u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_390234:
    // 0x390234: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x390234u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_390238:
    // 0x390238: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x390238u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39023c:
    // 0x39023c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39023cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_390240:
    // 0x390240: 0x3e00008  jr          $ra
label_390244:
    if (ctx->pc == 0x390244u) {
        ctx->pc = 0x390244u;
            // 0x390244: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x390248u;
        goto label_390248;
    }
    ctx->pc = 0x390240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x390244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x390240u;
            // 0x390244: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x390248u;
label_390248:
    // 0x390248: 0x0  nop
    ctx->pc = 0x390248u;
    // NOP
label_39024c:
    // 0x39024c: 0x0  nop
    ctx->pc = 0x39024cu;
    // NOP
label_390250:
    // 0x390250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x390250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_390254:
    // 0x390254: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x390254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_390258:
    // 0x390258: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x390258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_39025c:
    // 0x39025c: 0xc0aeebc  jal         func_2BBAF0
label_390260:
    if (ctx->pc == 0x390260u) {
        ctx->pc = 0x390260u;
            // 0x390260: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x390264u;
        goto label_390264;
    }
    ctx->pc = 0x39025Cu;
    SET_GPR_U32(ctx, 31, 0x390264u);
    ctx->pc = 0x390260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39025Cu;
            // 0x390260: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390264u; }
        if (ctx->pc != 0x390264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390264u; }
        if (ctx->pc != 0x390264u) { return; }
    }
    ctx->pc = 0x390264u;
label_390264:
    // 0x390264: 0xc0aeeb4  jal         func_2BBAD0
label_390268:
    if (ctx->pc == 0x390268u) {
        ctx->pc = 0x390268u;
            // 0x390268: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x39026Cu;
        goto label_39026c;
    }
    ctx->pc = 0x390264u;
    SET_GPR_U32(ctx, 31, 0x39026Cu);
    ctx->pc = 0x390268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x390264u;
            // 0x390268: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39026Cu; }
        if (ctx->pc != 0x39026Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39026Cu; }
        if (ctx->pc != 0x39026Cu) { return; }
    }
    ctx->pc = 0x39026Cu;
label_39026c:
    // 0x39026c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x39026cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_390270:
    // 0x390270: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x390270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_390274:
    // 0x390274: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x390274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_390278:
    // 0x390278: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x390278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_39027c:
    // 0x39027c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x39027cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_390280:
    // 0x390280: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x390280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_390284:
    // 0x390284: 0xc0aeea4  jal         func_2BBA90
label_390288:
    if (ctx->pc == 0x390288u) {
        ctx->pc = 0x390288u;
            // 0x390288: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x39028Cu;
        goto label_39028c;
    }
    ctx->pc = 0x390284u;
    SET_GPR_U32(ctx, 31, 0x39028Cu);
    ctx->pc = 0x390288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x390284u;
            // 0x390288: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39028Cu; }
        if (ctx->pc != 0x39028Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39028Cu; }
        if (ctx->pc != 0x39028Cu) { return; }
    }
    ctx->pc = 0x39028Cu;
label_39028c:
    // 0x39028c: 0xc0aee8c  jal         func_2BBA30
label_390290:
    if (ctx->pc == 0x390290u) {
        ctx->pc = 0x390290u;
            // 0x390290: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x390294u;
        goto label_390294;
    }
    ctx->pc = 0x39028Cu;
    SET_GPR_U32(ctx, 31, 0x390294u);
    ctx->pc = 0x390290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39028Cu;
            // 0x390290: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390294u; }
        if (ctx->pc != 0x390294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390294u; }
        if (ctx->pc != 0x390294u) { return; }
    }
    ctx->pc = 0x390294u;
label_390294:
    // 0x390294: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x390294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_390298:
    // 0x390298: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x390298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_39029c:
    // 0x39029c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x39029cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_3902a0:
    // 0x3902a0: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x3902a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_3902a4:
    // 0x3902a4: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x3902a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_3902a8:
    // 0x3902a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3902a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3902ac:
    // 0x3902ac: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x3902acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_3902b0:
    // 0x3902b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3902b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3902b4:
    // 0x3902b4: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x3902b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_3902b8:
    // 0x3902b8: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x3902b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
label_3902bc:
    // 0x3902bc: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x3902bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_3902c0:
    // 0x3902c0: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x3902c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
label_3902c4:
    // 0x3902c4: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x3902c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
label_3902c8:
    // 0x3902c8: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x3902c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
label_3902cc:
    // 0x3902cc: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x3902ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_3902d0:
    // 0x3902d0: 0xc0775b8  jal         func_1DD6E0
label_3902d4:
    if (ctx->pc == 0x3902D4u) {
        ctx->pc = 0x3902D4u;
            // 0x3902d4: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3902D8u;
        goto label_3902d8;
    }
    ctx->pc = 0x3902D0u;
    SET_GPR_U32(ctx, 31, 0x3902D8u);
    ctx->pc = 0x3902D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3902D0u;
            // 0x3902d4: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3902D8u; }
        if (ctx->pc != 0x3902D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3902D8u; }
        if (ctx->pc != 0x3902D8u) { return; }
    }
    ctx->pc = 0x3902D8u;
label_3902d8:
    // 0x3902d8: 0xc077314  jal         func_1DCC50
label_3902dc:
    if (ctx->pc == 0x3902DCu) {
        ctx->pc = 0x3902DCu;
            // 0x3902dc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3902E0u;
        goto label_3902e0;
    }
    ctx->pc = 0x3902D8u;
    SET_GPR_U32(ctx, 31, 0x3902E0u);
    ctx->pc = 0x3902DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3902D8u;
            // 0x3902dc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3902E0u; }
        if (ctx->pc != 0x3902E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3902E0u; }
        if (ctx->pc != 0x3902E0u) { return; }
    }
    ctx->pc = 0x3902E0u;
label_3902e0:
    // 0x3902e0: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x3902e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_3902e4:
    // 0x3902e4: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x3902e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_3902e8:
    // 0x3902e8: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x3902e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_3902ec:
    // 0x3902ec: 0x8e0500c8  lw          $a1, 0xC8($s0)
    ctx->pc = 0x3902ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_3902f0:
    // 0x3902f0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3902f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3902f4:
    // 0x3902f4: 0x24847d30  addiu       $a0, $a0, 0x7D30
    ctx->pc = 0x3902f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32048));
label_3902f8:
    // 0x3902f8: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x3902f8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3902fc:
    // 0x3902fc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3902fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_390300:
    // 0x390300: 0x24637d70  addiu       $v1, $v1, 0x7D70
    ctx->pc = 0x390300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32112));
label_390304:
    // 0x390304: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x390304u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_390308:
    // 0x390308: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x390308u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39030c:
    // 0x39030c: 0xae0500c8  sw          $a1, 0xC8($s0)
    ctx->pc = 0x39030cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 5));
label_390310:
    // 0x390310: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x390310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_390314:
    // 0x390314: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x390314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_390318:
    // 0x390318: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x390318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_39031c:
    // 0x39031c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39031cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_390320:
    // 0x390320: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x390320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_390324:
    // 0x390324: 0x3e00008  jr          $ra
label_390328:
    if (ctx->pc == 0x390328u) {
        ctx->pc = 0x390328u;
            // 0x390328: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x39032Cu;
        goto label_39032c;
    }
    ctx->pc = 0x390324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x390328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x390324u;
            // 0x390328: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39032Cu;
label_39032c:
    // 0x39032c: 0x0  nop
    ctx->pc = 0x39032cu;
    // NOP
label_390330:
    // 0x390330: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x390330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_390334:
    // 0x390334: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x390334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_390338:
    // 0x390338: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x390338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_39033c:
    // 0x39033c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39033cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_390340:
    // 0x390340: 0x8c90009c  lw          $s0, 0x9C($a0)
    ctx->pc = 0x390340u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
label_390344:
    // 0x390344: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_390348:
    if (ctx->pc == 0x390348u) {
        ctx->pc = 0x390348u;
            // 0x390348: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39034Cu;
        goto label_39034c;
    }
    ctx->pc = 0x390344u;
    {
        const bool branch_taken_0x390344 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x390348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x390344u;
            // 0x390348: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390344) {
            ctx->pc = 0x39037Cu;
            goto label_39037c;
        }
    }
    ctx->pc = 0x39034Cu;
label_39034c:
    // 0x39034c: 0xc04008c  jal         func_100230
label_390350:
    if (ctx->pc == 0x390350u) {
        ctx->pc = 0x390350u;
            // 0x390350: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x390354u;
        goto label_390354;
    }
    ctx->pc = 0x39034Cu;
    SET_GPR_U32(ctx, 31, 0x390354u);
    ctx->pc = 0x390350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39034Cu;
            // 0x390350: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390354u; }
        if (ctx->pc != 0x390354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390354u; }
        if (ctx->pc != 0x390354u) { return; }
    }
    ctx->pc = 0x390354u;
label_390354:
    // 0x390354: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x390354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_390358:
    // 0x390358: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x390358u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_39035c:
    // 0x39035c: 0xc0407c0  jal         func_101F00
label_390360:
    if (ctx->pc == 0x390360u) {
        ctx->pc = 0x390360u;
            // 0x390360: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->pc = 0x390364u;
        goto label_390364;
    }
    ctx->pc = 0x39035Cu;
    SET_GPR_U32(ctx, 31, 0x390364u);
    ctx->pc = 0x390360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39035Cu;
            // 0x390360: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390364u; }
        if (ctx->pc != 0x390364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390364u; }
        if (ctx->pc != 0x390364u) { return; }
    }
    ctx->pc = 0x390364u;
label_390364:
    // 0x390364: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x390364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_390368:
    // 0x390368: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x390368u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_39036c:
    // 0x39036c: 0xc0407c0  jal         func_101F00
label_390370:
    if (ctx->pc == 0x390370u) {
        ctx->pc = 0x390370u;
            // 0x390370: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->pc = 0x390374u;
        goto label_390374;
    }
    ctx->pc = 0x39036Cu;
    SET_GPR_U32(ctx, 31, 0x390374u);
    ctx->pc = 0x390370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39036Cu;
            // 0x390370: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390374u; }
        if (ctx->pc != 0x390374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390374u; }
        if (ctx->pc != 0x390374u) { return; }
    }
    ctx->pc = 0x390374u;
label_390374:
    // 0x390374: 0xc0400a8  jal         func_1002A0
label_390378:
    if (ctx->pc == 0x390378u) {
        ctx->pc = 0x390378u;
            // 0x390378: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39037Cu;
        goto label_39037c;
    }
    ctx->pc = 0x390374u;
    SET_GPR_U32(ctx, 31, 0x39037Cu);
    ctx->pc = 0x390378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x390374u;
            // 0x390378: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39037Cu; }
        if (ctx->pc != 0x39037Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39037Cu; }
        if (ctx->pc != 0x39037Cu) { return; }
    }
    ctx->pc = 0x39037Cu;
label_39037c:
    // 0x39037c: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x39037cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_390380:
    // 0x390380: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x390380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_390384:
    // 0x390384: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_390388:
    if (ctx->pc == 0x390388u) {
        ctx->pc = 0x390388u;
            // 0x390388: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x39038Cu;
        goto label_39038c;
    }
    ctx->pc = 0x390384u;
    {
        const bool branch_taken_0x390384 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x390384) {
            ctx->pc = 0x390388u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x390384u;
            // 0x390388: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3903A0u;
            goto label_3903a0;
        }
    }
    ctx->pc = 0x39038Cu;
label_39038c:
    // 0x39038c: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x39038cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_390390:
    // 0x390390: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x390390u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_390394:
    // 0x390394: 0x320f809  jalr        $t9
label_390398:
    if (ctx->pc == 0x390398u) {
        ctx->pc = 0x390398u;
            // 0x390398: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x39039Cu;
        goto label_39039c;
    }
    ctx->pc = 0x390394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39039Cu);
        ctx->pc = 0x390398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x390394u;
            // 0x390398: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39039Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39039Cu; }
            if (ctx->pc != 0x39039Cu) { return; }
        }
        }
    }
    ctx->pc = 0x39039Cu;
label_39039c:
    // 0x39039c: 0xae2000a0  sw          $zero, 0xA0($s1)
    ctx->pc = 0x39039cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
label_3903a0:
    // 0x3903a0: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x3903a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_3903a4:
    // 0x3903a4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3903a8:
    if (ctx->pc == 0x3903A8u) {
        ctx->pc = 0x3903A8u;
            // 0x3903a8: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x3903ACu;
        goto label_3903ac;
    }
    ctx->pc = 0x3903A4u;
    {
        const bool branch_taken_0x3903a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3903a4) {
            ctx->pc = 0x3903A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3903A4u;
            // 0x3903a8: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3903C0u;
            goto label_3903c0;
        }
    }
    ctx->pc = 0x3903ACu;
label_3903ac:
    // 0x3903ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3903acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3903b0:
    // 0x3903b0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3903b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3903b4:
    // 0x3903b4: 0x320f809  jalr        $t9
label_3903b8:
    if (ctx->pc == 0x3903B8u) {
        ctx->pc = 0x3903B8u;
            // 0x3903b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3903BCu;
        goto label_3903bc;
    }
    ctx->pc = 0x3903B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3903BCu);
        ctx->pc = 0x3903B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3903B4u;
            // 0x3903b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3903BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3903BCu; }
            if (ctx->pc != 0x3903BCu) { return; }
        }
        }
    }
    ctx->pc = 0x3903BCu;
label_3903bc:
    // 0x3903bc: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x3903bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_3903c0:
    // 0x3903c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3903c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3903c4:
    // 0x3903c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3903c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3903c8:
    // 0x3903c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3903c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3903cc:
    // 0x3903cc: 0x3e00008  jr          $ra
label_3903d0:
    if (ctx->pc == 0x3903D0u) {
        ctx->pc = 0x3903D0u;
            // 0x3903d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3903D4u;
        goto label_3903d4;
    }
    ctx->pc = 0x3903CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3903D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3903CCu;
            // 0x3903d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3903D4u;
label_3903d4:
    // 0x3903d4: 0x0  nop
    ctx->pc = 0x3903d4u;
    // NOP
label_3903d8:
    // 0x3903d8: 0x0  nop
    ctx->pc = 0x3903d8u;
    // NOP
label_3903dc:
    // 0x3903dc: 0x0  nop
    ctx->pc = 0x3903dcu;
    // NOP
label_3903e0:
    // 0x3903e0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x3903e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_3903e4:
    // 0x3903e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3903e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3903e8:
    // 0x3903e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3903e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3903ec:
    // 0x3903ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3903ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3903f0:
    // 0x3903f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3903f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3903f4:
    // 0x3903f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3903f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3903f8:
    // 0x3903f8: 0xc0892d0  jal         func_224B40
label_3903fc:
    if (ctx->pc == 0x3903FCu) {
        ctx->pc = 0x3903FCu;
            // 0x3903fc: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x390400u;
        goto label_390400;
    }
    ctx->pc = 0x3903F8u;
    SET_GPR_U32(ctx, 31, 0x390400u);
    ctx->pc = 0x3903FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3903F8u;
            // 0x3903fc: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390400u; }
        if (ctx->pc != 0x390400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390400u; }
        if (ctx->pc != 0x390400u) { return; }
    }
    ctx->pc = 0x390400u;
label_390400:
    // 0x390400: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x390400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_390404:
    // 0x390404: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x390404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_390408:
    // 0x390408: 0x8c426120  lw          $v0, 0x6120($v0)
    ctx->pc = 0x390408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24864)));
label_39040c:
    // 0x39040c: 0x8c500060  lw          $s0, 0x60($v0)
    ctx->pc = 0x39040cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_390410:
    // 0x390410: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x390410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_390414:
    // 0x390414: 0xc0b6e68  jal         func_2DB9A0
label_390418:
    if (ctx->pc == 0x390418u) {
        ctx->pc = 0x390418u;
            // 0x390418: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x39041Cu;
        goto label_39041c;
    }
    ctx->pc = 0x390414u;
    SET_GPR_U32(ctx, 31, 0x39041Cu);
    ctx->pc = 0x390418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x390414u;
            // 0x390418: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39041Cu; }
        if (ctx->pc != 0x39041Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39041Cu; }
        if (ctx->pc != 0x39041Cu) { return; }
    }
    ctx->pc = 0x39041Cu;
label_39041c:
    // 0x39041c: 0xc0b6dac  jal         func_2DB6B0
label_390420:
    if (ctx->pc == 0x390420u) {
        ctx->pc = 0x390420u;
            // 0x390420: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x390424u;
        goto label_390424;
    }
    ctx->pc = 0x39041Cu;
    SET_GPR_U32(ctx, 31, 0x390424u);
    ctx->pc = 0x390420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39041Cu;
            // 0x390420: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390424u; }
        if (ctx->pc != 0x390424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390424u; }
        if (ctx->pc != 0x390424u) { return; }
    }
    ctx->pc = 0x390424u;
label_390424:
    // 0x390424: 0xc0cac94  jal         func_32B250
label_390428:
    if (ctx->pc == 0x390428u) {
        ctx->pc = 0x390428u;
            // 0x390428: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x39042Cu;
        goto label_39042c;
    }
    ctx->pc = 0x390424u;
    SET_GPR_U32(ctx, 31, 0x39042Cu);
    ctx->pc = 0x390428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x390424u;
            // 0x390428: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39042Cu; }
        if (ctx->pc != 0x39042Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39042Cu; }
        if (ctx->pc != 0x39042Cu) { return; }
    }
    ctx->pc = 0x39042Cu;
label_39042c:
    // 0x39042c: 0xc0cac84  jal         func_32B210
label_390430:
    if (ctx->pc == 0x390430u) {
        ctx->pc = 0x390430u;
            // 0x390430: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x390434u;
        goto label_390434;
    }
    ctx->pc = 0x39042Cu;
    SET_GPR_U32(ctx, 31, 0x390434u);
    ctx->pc = 0x390430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39042Cu;
            // 0x390430: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390434u; }
        if (ctx->pc != 0x390434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390434u; }
        if (ctx->pc != 0x390434u) { return; }
    }
    ctx->pc = 0x390434u;
label_390434:
    // 0x390434: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x390434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_390438:
    // 0x390438: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x390438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_39043c:
    // 0x39043c: 0xc44dc910  lwc1        $f13, -0x36F0($v0)
    ctx->pc = 0x39043cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_390440:
    // 0x390440: 0xc0a562c  jal         func_2958B0
label_390444:
    if (ctx->pc == 0x390444u) {
        ctx->pc = 0x390444u;
            // 0x390444: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x390448u;
        goto label_390448;
    }
    ctx->pc = 0x390440u;
    SET_GPR_U32(ctx, 31, 0x390448u);
    ctx->pc = 0x390444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x390440u;
            // 0x390444: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2958B0u;
    if (runtime->hasFunction(0x2958B0u)) {
        auto targetFn = runtime->lookupFunction(0x2958B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390448u; }
        if (ctx->pc != 0x390448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002958B0_0x2958b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390448u; }
        if (ctx->pc != 0x390448u) { return; }
    }
    ctx->pc = 0x390448u;
label_390448:
    // 0x390448: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x390448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_39044c:
    // 0x39044c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x39044cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_390450:
    // 0x390450: 0x8c436120  lw          $v1, 0x6120($v0)
    ctx->pc = 0x390450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24864)));
label_390454:
    // 0x390454: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x390454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_390458:
    // 0x390458: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x390458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39045c:
    // 0x39045c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x39045cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_390460:
    // 0x390460: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x390460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_390464:
    // 0x390464: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x390464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_390468:
    // 0x390468: 0x8c640060  lw          $a0, 0x60($v1)
    ctx->pc = 0x390468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_39046c:
    // 0x39046c: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x39046cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_390470:
    // 0x390470: 0x3448d70a  ori         $t0, $v0, 0xD70A
    ctx->pc = 0x390470u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_390474:
    // 0x390474: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x390474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_390478:
    // 0x390478: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x390478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_39047c:
    // 0x39047c: 0xafa400c4  sw          $a0, 0xC4($sp)
    ctx->pc = 0x39047cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 4));
label_390480:
    // 0x390480: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x390480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_390484:
    // 0x390484: 0xc62a0018  lwc1        $f10, 0x18($s1)
    ctx->pc = 0x390484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_390488:
    // 0x390488: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x390488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39048c:
    // 0x39048c: 0xc6290014  lwc1        $f9, 0x14($s1)
    ctx->pc = 0x39048cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_390490:
    // 0x390490: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x390490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_390494:
    // 0x390494: 0xc6280010  lwc1        $f8, 0x10($s1)
    ctx->pc = 0x390494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_390498:
    // 0x390498: 0xc7a70090  lwc1        $f7, 0x90($sp)
    ctx->pc = 0x390498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_39049c:
    // 0x39049c: 0xc7a60094  lwc1        $f6, 0x94($sp)
    ctx->pc = 0x39049cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3904a0:
    // 0x3904a0: 0xe7a20124  swc1        $f2, 0x124($sp)
    ctx->pc = 0x3904a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_3904a4:
    // 0x3904a4: 0xa3a90170  sb          $t1, 0x170($sp)
    ctx->pc = 0x3904a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 9));
label_3904a8:
    // 0x3904a8: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x3904a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_3904ac:
    // 0x3904ac: 0xafa8016c  sw          $t0, 0x16C($sp)
    ctx->pc = 0x3904acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 8));
label_3904b0:
    // 0x3904b0: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x3904b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_3904b4:
    // 0x3904b4: 0xa3a70172  sb          $a3, 0x172($sp)
    ctx->pc = 0x3904b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 370), (uint8_t)GPR_U32(ctx, 7));
label_3904b8:
    // 0x3904b8: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x3904b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3904bc:
    // 0x3904bc: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x3904bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_3904c0:
    // 0x3904c0: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x3904c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3904c4:
    // 0x3904c4: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x3904c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_3904c8:
    // 0x3904c8: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x3904c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3904cc:
    // 0x3904cc: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x3904ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_3904d0:
    // 0x3904d0: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x3904d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_3904d4:
    // 0x3904d4: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x3904d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_3904d8:
    // 0x3904d8: 0xc7a200bc  lwc1        $f2, 0xBC($sp)
    ctx->pc = 0x3904d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3904dc:
    // 0x3904dc: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x3904dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3904e0:
    // 0x3904e0: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x3904e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3904e4:
    // 0x3904e4: 0xe7a2013c  swc1        $f2, 0x13C($sp)
    ctx->pc = 0x3904e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_3904e8:
    // 0x3904e8: 0xe7a10140  swc1        $f1, 0x140($sp)
    ctx->pc = 0x3904e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_3904ec:
    // 0x3904ec: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x3904ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_3904f0:
    // 0x3904f0: 0xc7a50098  lwc1        $f5, 0x98($sp)
    ctx->pc = 0x3904f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3904f4:
    // 0x3904f4: 0xc7a4009c  lwc1        $f4, 0x9C($sp)
    ctx->pc = 0x3904f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3904f8:
    // 0x3904f8: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x3904f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3904fc:
    // 0x3904fc: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x3904fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_390500:
    // 0x390500: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x390500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_390504:
    // 0x390504: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x390504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_390508:
    // 0x390508: 0xe7a800d0  swc1        $f8, 0xD0($sp)
    ctx->pc = 0x390508u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_39050c:
    // 0x39050c: 0xe7a900d4  swc1        $f9, 0xD4($sp)
    ctx->pc = 0x39050cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_390510:
    // 0x390510: 0xe7aa00d8  swc1        $f10, 0xD8($sp)
    ctx->pc = 0x390510u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_390514:
    // 0x390514: 0xe7a70110  swc1        $f7, 0x110($sp)
    ctx->pc = 0x390514u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_390518:
    // 0x390518: 0xe7a60114  swc1        $f6, 0x114($sp)
    ctx->pc = 0x390518u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_39051c:
    // 0x39051c: 0xe7a50118  swc1        $f5, 0x118($sp)
    ctx->pc = 0x39051cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_390520:
    // 0x390520: 0xe7a4011c  swc1        $f4, 0x11C($sp)
    ctx->pc = 0x390520u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_390524:
    // 0x390524: 0xe7a30120  swc1        $f3, 0x120($sp)
    ctx->pc = 0x390524u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_390528:
    // 0x390528: 0xe7a20148  swc1        $f2, 0x148($sp)
    ctx->pc = 0x390528u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_39052c:
    // 0x39052c: 0xe7a1014c  swc1        $f1, 0x14C($sp)
    ctx->pc = 0x39052cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_390530:
    // 0x390530: 0xc0a7a88  jal         func_29EA20
label_390534:
    if (ctx->pc == 0x390534u) {
        ctx->pc = 0x390534u;
            // 0x390534: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x390538u;
        goto label_390538;
    }
    ctx->pc = 0x390530u;
    SET_GPR_U32(ctx, 31, 0x390538u);
    ctx->pc = 0x390534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x390530u;
            // 0x390534: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390538u; }
        if (ctx->pc != 0x390538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390538u; }
        if (ctx->pc != 0x390538u) { return; }
    }
    ctx->pc = 0x390538u;
label_390538:
    // 0x390538: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x390538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_39053c:
    // 0x39053c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x39053cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_390540:
    // 0x390540: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_390544:
    if (ctx->pc == 0x390544u) {
        ctx->pc = 0x390544u;
            // 0x390544: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x390548u;
        goto label_390548;
    }
    ctx->pc = 0x390540u;
    {
        const bool branch_taken_0x390540 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x390544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x390540u;
            // 0x390544: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390540) {
            ctx->pc = 0x390590u;
            goto label_390590;
        }
    }
    ctx->pc = 0x390548u;
label_390548:
    // 0x390548: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x390548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39054c:
    // 0x39054c: 0xc088ef4  jal         func_223BD0
label_390550:
    if (ctx->pc == 0x390550u) {
        ctx->pc = 0x390550u;
            // 0x390550: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x390554u;
        goto label_390554;
    }
    ctx->pc = 0x39054Cu;
    SET_GPR_U32(ctx, 31, 0x390554u);
    ctx->pc = 0x390550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39054Cu;
            // 0x390550: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390554u; }
        if (ctx->pc != 0x390554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390554u; }
        if (ctx->pc != 0x390554u) { return; }
    }
    ctx->pc = 0x390554u;
label_390554:
    // 0x390554: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x390554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_390558:
    // 0x390558: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x390558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_39055c:
    // 0x39055c: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x39055cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_390560:
    // 0x390560: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x390560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_390564:
    // 0x390564: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x390564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_390568:
    // 0x390568: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x390568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_39056c:
    // 0x39056c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39056cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_390570:
    // 0x390570: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x390570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_390574:
    // 0x390574: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x390574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_390578:
    // 0x390578: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x390578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_39057c:
    // 0x39057c: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x39057cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_390580:
    // 0x390580: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x390580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_390584:
    // 0x390584: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x390584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_390588:
    // 0x390588: 0xc088b38  jal         func_222CE0
label_39058c:
    if (ctx->pc == 0x39058Cu) {
        ctx->pc = 0x39058Cu;
            // 0x39058c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x390590u;
        goto label_390590;
    }
    ctx->pc = 0x390588u;
    SET_GPR_U32(ctx, 31, 0x390590u);
    ctx->pc = 0x39058Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x390588u;
            // 0x39058c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390590u; }
        if (ctx->pc != 0x390590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390590u; }
        if (ctx->pc != 0x390590u) { return; }
    }
    ctx->pc = 0x390590u;
label_390590:
    // 0x390590: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x390590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_390594:
    // 0x390594: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x390594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_390598:
    // 0x390598: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x390598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39059c:
    // 0x39059c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x39059cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3905a0:
    // 0x3905a0: 0xc08914c  jal         func_224530
label_3905a4:
    if (ctx->pc == 0x3905A4u) {
        ctx->pc = 0x3905A4u;
            // 0x3905a4: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->pc = 0x3905A8u;
        goto label_3905a8;
    }
    ctx->pc = 0x3905A0u;
    SET_GPR_U32(ctx, 31, 0x3905A8u);
    ctx->pc = 0x3905A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3905A0u;
            // 0x3905a4: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3905A8u; }
        if (ctx->pc != 0x3905A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3905A8u; }
        if (ctx->pc != 0x3905A8u) { return; }
    }
    ctx->pc = 0x3905A8u;
label_3905a8:
    // 0x3905a8: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x3905a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3905ac:
    // 0x3905ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3905acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3905b0:
    // 0x3905b0: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x3905b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3905b4:
    // 0x3905b4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3905b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3905b8:
    // 0x3905b8: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x3905b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3905bc:
    // 0x3905bc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3905bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3905c0:
    // 0x3905c0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3905c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3905c4:
    // 0x3905c4: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x3905c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_3905c8:
    // 0x3905c8: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x3905c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_3905cc:
    // 0x3905cc: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x3905ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_3905d0:
    // 0x3905d0: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x3905d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3905d4:
    // 0x3905d4: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x3905d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3905d8:
    // 0x3905d8: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x3905d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3905dc:
    // 0x3905dc: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x3905dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3905e0:
    // 0x3905e0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3905e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3905e4:
    // 0x3905e4: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x3905e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3905e8:
    // 0x3905e8: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x3905e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_3905ec:
    // 0x3905ec: 0xc0892b0  jal         func_224AC0
label_3905f0:
    if (ctx->pc == 0x3905F0u) {
        ctx->pc = 0x3905F0u;
            // 0x3905f0: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x3905F4u;
        goto label_3905f4;
    }
    ctx->pc = 0x3905ECu;
    SET_GPR_U32(ctx, 31, 0x3905F4u);
    ctx->pc = 0x3905F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3905ECu;
            // 0x3905f0: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3905F4u; }
        if (ctx->pc != 0x3905F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3905F4u; }
        if (ctx->pc != 0x3905F4u) { return; }
    }
    ctx->pc = 0x3905F4u;
label_3905f4:
    // 0x3905f4: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x3905f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_3905f8:
    // 0x3905f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3905f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3905fc:
    // 0x3905fc: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x3905fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_390600:
    // 0x390600: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x390600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_390604:
    // 0x390604: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x390604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_390608:
    // 0x390608: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x390608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_39060c:
    // 0x39060c: 0xc0891d8  jal         func_224760
label_390610:
    if (ctx->pc == 0x390610u) {
        ctx->pc = 0x390610u;
            // 0x390610: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x390614u;
        goto label_390614;
    }
    ctx->pc = 0x39060Cu;
    SET_GPR_U32(ctx, 31, 0x390614u);
    ctx->pc = 0x390610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39060Cu;
            // 0x390610: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390614u; }
        if (ctx->pc != 0x390614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390614u; }
        if (ctx->pc != 0x390614u) { return; }
    }
    ctx->pc = 0x390614u;
label_390614:
    // 0x390614: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x390614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_390618:
    // 0x390618: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x390618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39061c:
    // 0x39061c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x39061cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_390620:
    // 0x390620: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x390620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_390624:
    // 0x390624: 0xc08c164  jal         func_230590
label_390628:
    if (ctx->pc == 0x390628u) {
        ctx->pc = 0x390628u;
            // 0x390628: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x39062Cu;
        goto label_39062c;
    }
    ctx->pc = 0x390624u;
    SET_GPR_U32(ctx, 31, 0x39062Cu);
    ctx->pc = 0x390628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x390624u;
            // 0x390628: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39062Cu; }
        if (ctx->pc != 0x39062Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39062Cu; }
        if (ctx->pc != 0x39062Cu) { return; }
    }
    ctx->pc = 0x39062Cu;
label_39062c:
    // 0x39062c: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x39062cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_390630:
    // 0x390630: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x390630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_390634:
    // 0x390634: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x390634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_390638:
    // 0x390638: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x390638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_39063c:
    // 0x39063c: 0xc0a7a88  jal         func_29EA20
label_390640:
    if (ctx->pc == 0x390640u) {
        ctx->pc = 0x390640u;
            // 0x390640: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x390644u;
        goto label_390644;
    }
    ctx->pc = 0x39063Cu;
    SET_GPR_U32(ctx, 31, 0x390644u);
    ctx->pc = 0x390640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39063Cu;
            // 0x390640: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390644u; }
        if (ctx->pc != 0x390644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390644u; }
        if (ctx->pc != 0x390644u) { return; }
    }
    ctx->pc = 0x390644u;
label_390644:
    // 0x390644: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x390644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_390648:
    // 0x390648: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x390648u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39064c:
    // 0x39064c: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_390650:
    if (ctx->pc == 0x390650u) {
        ctx->pc = 0x390650u;
            // 0x390650: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x390654u;
        goto label_390654;
    }
    ctx->pc = 0x39064Cu;
    {
        const bool branch_taken_0x39064c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x390650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39064Cu;
            // 0x390650: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39064c) {
            ctx->pc = 0x390670u;
            goto label_390670;
        }
    }
    ctx->pc = 0x390654u;
label_390654:
    // 0x390654: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x390654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_390658:
    // 0x390658: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x390658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39065c:
    // 0x39065c: 0xc0869d0  jal         func_21A740
label_390660:
    if (ctx->pc == 0x390660u) {
        ctx->pc = 0x390660u;
            // 0x390660: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x390664u;
        goto label_390664;
    }
    ctx->pc = 0x39065Cu;
    SET_GPR_U32(ctx, 31, 0x390664u);
    ctx->pc = 0x390660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39065Cu;
            // 0x390660: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390664u; }
        if (ctx->pc != 0x390664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390664u; }
        if (ctx->pc != 0x390664u) { return; }
    }
    ctx->pc = 0x390664u;
label_390664:
    // 0x390664: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x390664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_390668:
    // 0x390668: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x390668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_39066c:
    // 0x39066c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x39066cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_390670:
    // 0x390670: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x390670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_390674:
    // 0x390674: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x390674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_390678:
    // 0x390678: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x390678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_39067c:
    // 0x39067c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x39067cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_390680:
    // 0x390680: 0xc08c650  jal         func_231940
label_390684:
    if (ctx->pc == 0x390684u) {
        ctx->pc = 0x390684u;
            // 0x390684: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x390688u;
        goto label_390688;
    }
    ctx->pc = 0x390680u;
    SET_GPR_U32(ctx, 31, 0x390688u);
    ctx->pc = 0x390684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x390680u;
            // 0x390684: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390688u; }
        if (ctx->pc != 0x390688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390688u; }
        if (ctx->pc != 0x390688u) { return; }
    }
    ctx->pc = 0x390688u;
label_390688:
    // 0x390688: 0xc040180  jal         func_100600
label_39068c:
    if (ctx->pc == 0x39068Cu) {
        ctx->pc = 0x39068Cu;
            // 0x39068c: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x390690u;
        goto label_390690;
    }
    ctx->pc = 0x390688u;
    SET_GPR_U32(ctx, 31, 0x390690u);
    ctx->pc = 0x39068Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x390688u;
            // 0x39068c: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390690u; }
        if (ctx->pc != 0x390690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390690u; }
        if (ctx->pc != 0x390690u) { return; }
    }
    ctx->pc = 0x390690u;
label_390690:
    // 0x390690: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_390694:
    if (ctx->pc == 0x390694u) {
        ctx->pc = 0x390694u;
            // 0x390694: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x390698u;
        goto label_390698;
    }
    ctx->pc = 0x390690u;
    {
        const bool branch_taken_0x390690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x390690) {
            ctx->pc = 0x390694u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x390690u;
            // 0x390694: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3906E0u;
            goto label_3906e0;
        }
    }
    ctx->pc = 0x390698u;
label_390698:
    // 0x390698: 0x8e260050  lw          $a2, 0x50($s1)
    ctx->pc = 0x390698u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_39069c:
    // 0x39069c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x39069cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_3906a0:
    // 0x3906a0: 0x24a521e0  addiu       $a1, $a1, 0x21E0
    ctx->pc = 0x3906a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8672));
label_3906a4:
    // 0x3906a4: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x3906a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_3906a8:
    // 0x3906a8: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x3906a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_3906ac:
    // 0x3906ac: 0x24636020  addiu       $v1, $v1, 0x6020
    ctx->pc = 0x3906acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24608));
label_3906b0:
    // 0x3906b0: 0xac450048  sw          $a1, 0x48($v0)
    ctx->pc = 0x3906b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 5));
label_3906b4:
    // 0x3906b4: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x3906b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_3906b8:
    // 0x3906b8: 0xac460024  sw          $a2, 0x24($v0)
    ctx->pc = 0x3906b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
label_3906bc:
    // 0x3906bc: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x3906bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
label_3906c0:
    // 0x3906c0: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x3906c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_3906c4:
    // 0x3906c4: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x3906c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_3906c8:
    // 0x3906c8: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x3906c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_3906cc:
    // 0x3906cc: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x3906ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_3906d0:
    // 0x3906d0: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x3906d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_3906d4:
    // 0x3906d4: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x3906d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_3906d8:
    // 0x3906d8: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x3906d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_3906dc:
    // 0x3906dc: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x3906dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
label_3906e0:
    // 0x3906e0: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x3906e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_3906e4:
    // 0x3906e4: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x3906e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_3906e8:
    // 0x3906e8: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x3906e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3906ec:
    // 0x3906ec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3906ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3906f0:
    // 0x3906f0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3906f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3906f4:
    // 0x3906f4: 0xc040180  jal         func_100600
label_3906f8:
    if (ctx->pc == 0x3906F8u) {
        ctx->pc = 0x3906F8u;
            // 0x3906f8: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->pc = 0x3906FCu;
        goto label_3906fc;
    }
    ctx->pc = 0x3906F4u;
    SET_GPR_U32(ctx, 31, 0x3906FCu);
    ctx->pc = 0x3906F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3906F4u;
            // 0x3906f8: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3906FCu; }
        if (ctx->pc != 0x3906FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3906FCu; }
        if (ctx->pc != 0x3906FCu) { return; }
    }
    ctx->pc = 0x3906FCu;
label_3906fc:
    // 0x3906fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3906fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_390700:
    // 0x390700: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
label_390704:
    if (ctx->pc == 0x390704u) {
        ctx->pc = 0x390708u;
        goto label_390708;
    }
    ctx->pc = 0x390700u;
    {
        const bool branch_taken_0x390700 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x390700) {
            ctx->pc = 0x390780u;
            goto label_390780;
        }
    }
    ctx->pc = 0x390708u;
label_390708:
    // 0x390708: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x390708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_39070c:
    // 0x39070c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x39070cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_390710:
    // 0x390710: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x390710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_390714:
    // 0x390714: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x390714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_390718:
    // 0x390718: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x390718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_39071c:
    // 0x39071c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x39071cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_390720:
    // 0x390720: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x390720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_390724:
    // 0x390724: 0xc040138  jal         func_1004E0
label_390728:
    if (ctx->pc == 0x390728u) {
        ctx->pc = 0x390728u;
            // 0x390728: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x39072Cu;
        goto label_39072c;
    }
    ctx->pc = 0x390724u;
    SET_GPR_U32(ctx, 31, 0x39072Cu);
    ctx->pc = 0x390728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x390724u;
            // 0x390728: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39072Cu; }
        if (ctx->pc != 0x39072Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39072Cu; }
        if (ctx->pc != 0x39072Cu) { return; }
    }
    ctx->pc = 0x39072Cu;
label_39072c:
    // 0x39072c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x39072cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_390730:
    // 0x390730: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x390730u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_390734:
    // 0x390734: 0xc040138  jal         func_1004E0
label_390738:
    if (ctx->pc == 0x390738u) {
        ctx->pc = 0x390738u;
            // 0x390738: 0x24040190  addiu       $a0, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->pc = 0x39073Cu;
        goto label_39073c;
    }
    ctx->pc = 0x390734u;
    SET_GPR_U32(ctx, 31, 0x39073Cu);
    ctx->pc = 0x390738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x390734u;
            // 0x390738: 0x24040190  addiu       $a0, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39073Cu; }
        if (ctx->pc != 0x39073Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39073Cu; }
        if (ctx->pc != 0x39073Cu) { return; }
    }
    ctx->pc = 0x39073Cu;
label_39073c:
    // 0x39073c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x39073cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_390740:
    // 0x390740: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x390740u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
label_390744:
    // 0x390744: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x390744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_390748:
    // 0x390748: 0x24a583b0  addiu       $a1, $a1, -0x7C50
    ctx->pc = 0x390748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935472));
label_39074c:
    // 0x39074c: 0x24c6b410  addiu       $a2, $a2, -0x4BF0
    ctx->pc = 0x39074cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947856));
label_390750:
    // 0x390750: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x390750u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_390754:
    // 0x390754: 0xc040840  jal         func_102100
label_390758:
    if (ctx->pc == 0x390758u) {
        ctx->pc = 0x390758u;
            // 0x390758: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x39075Cu;
        goto label_39075c;
    }
    ctx->pc = 0x390754u;
    SET_GPR_U32(ctx, 31, 0x39075Cu);
    ctx->pc = 0x390758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x390754u;
            // 0x390758: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39075Cu; }
        if (ctx->pc != 0x39075Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39075Cu; }
        if (ctx->pc != 0x39075Cu) { return; }
    }
    ctx->pc = 0x39075Cu;
label_39075c:
    // 0x39075c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x39075cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_390760:
    // 0x390760: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x390760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_390764:
    // 0x390764: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x390764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_390768:
    // 0x390768: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x390768u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_39076c:
    // 0x39076c: 0x28830004  slti        $v1, $a0, 0x4
    ctx->pc = 0x39076cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
label_390770:
    // 0x390770: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x390770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_390774:
    // 0x390774: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x390774u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_390778:
    // 0x390778: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_39077c:
    if (ctx->pc == 0x39077Cu) {
        ctx->pc = 0x390780u;
        goto label_390780;
    }
    ctx->pc = 0x390778u;
    {
        const bool branch_taken_0x390778 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x390778) {
            ctx->pc = 0x390764u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_390764;
        }
    }
    ctx->pc = 0x390780u;
label_390780:
    // 0x390780: 0xae30009c  sw          $s0, 0x9C($s1)
    ctx->pc = 0x390780u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 16));
label_390784:
    // 0x390784: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x390784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_390788:
    // 0x390788: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x390788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_39078c:
    // 0x39078c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x39078cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_390790:
    // 0x390790: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x390790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_390794:
    // 0x390794: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x390794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_390798:
    // 0x390798: 0xc0e7d2c  jal         func_39F4B0
label_39079c:
    if (ctx->pc == 0x39079Cu) {
        ctx->pc = 0x39079Cu;
            // 0x39079c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3907A0u;
        goto label_3907a0;
    }
    ctx->pc = 0x390798u;
    SET_GPR_U32(ctx, 31, 0x3907A0u);
    ctx->pc = 0x39079Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x390798u;
            // 0x39079c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3907A0u; }
        if (ctx->pc != 0x3907A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3907A0u; }
        if (ctx->pc != 0x3907A0u) { return; }
    }
    ctx->pc = 0x3907A0u;
label_3907a0:
    // 0x3907a0: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x3907a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_3907a4:
    // 0x3907a4: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x3907a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_3907a8:
    // 0x3907a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3907a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3907ac:
    // 0x3907ac: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3907acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3907b0:
    // 0x3907b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3907b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3907b4:
    // 0x3907b4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3907b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3907b8:
    // 0x3907b8: 0xc0e7d2c  jal         func_39F4B0
label_3907bc:
    if (ctx->pc == 0x3907BCu) {
        ctx->pc = 0x3907BCu;
            // 0x3907bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3907C0u;
        goto label_3907c0;
    }
    ctx->pc = 0x3907B8u;
    SET_GPR_U32(ctx, 31, 0x3907C0u);
    ctx->pc = 0x3907BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3907B8u;
            // 0x3907bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3907C0u; }
        if (ctx->pc != 0x3907C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3907C0u; }
        if (ctx->pc != 0x3907C0u) { return; }
    }
    ctx->pc = 0x3907C0u;
label_3907c0:
    // 0x3907c0: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x3907c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_3907c4:
    // 0x3907c4: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x3907c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_3907c8:
    // 0x3907c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3907c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3907cc:
    // 0x3907cc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3907ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3907d0:
    // 0x3907d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3907d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3907d4:
    // 0x3907d4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x3907d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3907d8:
    // 0x3907d8: 0xc0e7d2c  jal         func_39F4B0
label_3907dc:
    if (ctx->pc == 0x3907DCu) {
        ctx->pc = 0x3907DCu;
            // 0x3907dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3907E0u;
        goto label_3907e0;
    }
    ctx->pc = 0x3907D8u;
    SET_GPR_U32(ctx, 31, 0x3907E0u);
    ctx->pc = 0x3907DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3907D8u;
            // 0x3907dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3907E0u; }
        if (ctx->pc != 0x3907E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3907E0u; }
        if (ctx->pc != 0x3907E0u) { return; }
    }
    ctx->pc = 0x3907E0u;
label_3907e0:
    // 0x3907e0: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x3907e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_3907e4:
    // 0x3907e4: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x3907e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_3907e8:
    // 0x3907e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3907e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3907ec:
    // 0x3907ec: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3907ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3907f0:
    // 0x3907f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3907f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3907f4:
    // 0x3907f4: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x3907f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3907f8:
    // 0x3907f8: 0xc0e7d2c  jal         func_39F4B0
label_3907fc:
    if (ctx->pc == 0x3907FCu) {
        ctx->pc = 0x3907FCu;
            // 0x3907fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x390800u;
        goto label_390800;
    }
    ctx->pc = 0x3907F8u;
    SET_GPR_U32(ctx, 31, 0x390800u);
    ctx->pc = 0x3907FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3907F8u;
            // 0x3907fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390800u; }
        if (ctx->pc != 0x390800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390800u; }
        if (ctx->pc != 0x390800u) { return; }
    }
    ctx->pc = 0x390800u;
label_390800:
    // 0x390800: 0x8e2600b0  lw          $a2, 0xB0($s1)
    ctx->pc = 0x390800u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_390804:
    // 0x390804: 0x2405fff7  addiu       $a1, $zero, -0x9
    ctx->pc = 0x390804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_390808:
    // 0x390808: 0x2404ffdf  addiu       $a0, $zero, -0x21
    ctx->pc = 0x390808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_39080c:
    // 0x39080c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39080cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_390810:
    // 0x390810: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x390810u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_390814:
    // 0x390814: 0x34a50008  ori         $a1, $a1, 0x8
    ctx->pc = 0x390814u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
label_390818:
    // 0x390818: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x390818u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_39081c:
    // 0x39081c: 0xae2500b0  sw          $a1, 0xB0($s1)
    ctx->pc = 0x39081cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 5));
label_390820:
    // 0x390820: 0xae2400b0  sw          $a0, 0xB0($s1)
    ctx->pc = 0x390820u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 4));
label_390824:
    // 0x390824: 0xa2230064  sb          $v1, 0x64($s1)
    ctx->pc = 0x390824u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 100), (uint8_t)GPR_U32(ctx, 3));
label_390828:
    // 0x390828: 0xa2230065  sb          $v1, 0x65($s1)
    ctx->pc = 0x390828u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 101), (uint8_t)GPR_U32(ctx, 3));
label_39082c:
    // 0x39082c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x39082cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_390830:
    // 0x390830: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x390830u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_390834:
    // 0x390834: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x390834u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_390838:
    // 0x390838: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x390838u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39083c:
    // 0x39083c: 0x3e00008  jr          $ra
label_390840:
    if (ctx->pc == 0x390840u) {
        ctx->pc = 0x390840u;
            // 0x390840: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x390844u;
        goto label_390844;
    }
    ctx->pc = 0x39083Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x390840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39083Cu;
            // 0x390840: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x390844u;
label_390844:
    // 0x390844: 0x0  nop
    ctx->pc = 0x390844u;
    // NOP
label_390848:
    // 0x390848: 0x0  nop
    ctx->pc = 0x390848u;
    // NOP
label_39084c:
    // 0x39084c: 0x0  nop
    ctx->pc = 0x39084cu;
    // NOP
label_390850:
    // 0x390850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x390850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_390854:
    // 0x390854: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x390854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_390858:
    // 0x390858: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x390858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_39085c:
    // 0x39085c: 0xc0e3580  jal         func_38D600
label_390860:
    if (ctx->pc == 0x390860u) {
        ctx->pc = 0x390860u;
            // 0x390860: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x390864u;
        goto label_390864;
    }
    ctx->pc = 0x39085Cu;
    SET_GPR_U32(ctx, 31, 0x390864u);
    ctx->pc = 0x390860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39085Cu;
            // 0x390860: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D600u;
    if (runtime->hasFunction(0x38D600u)) {
        auto targetFn = runtime->lookupFunction(0x38D600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390864u; }
        if (ctx->pc != 0x390864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D600_0x38d600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390864u; }
        if (ctx->pc != 0x390864u) { return; }
    }
    ctx->pc = 0x390864u;
label_390864:
    // 0x390864: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x390864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_390868:
    // 0x390868: 0x3c0543d2  lui         $a1, 0x43D2
    ctx->pc = 0x390868u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17362 << 16));
label_39086c:
    // 0x39086c: 0xae03008c  sw          $v1, 0x8C($s0)
    ctx->pc = 0x39086cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
label_390870:
    // 0x390870: 0x3c044334  lui         $a0, 0x4334
    ctx->pc = 0x390870u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17204 << 16));
label_390874:
    // 0x390874: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x390874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
label_390878:
    // 0x390878: 0x2403f9ff  addiu       $v1, $zero, -0x601
    ctx->pc = 0x390878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965759));
label_39087c:
    // 0x39087c: 0xae050078  sw          $a1, 0x78($s0)
    ctx->pc = 0x39087cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 5));
label_390880:
    // 0x390880: 0xae040080  sw          $a0, 0x80($s0)
    ctx->pc = 0x390880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 4));
label_390884:
    // 0x390884: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x390884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_390888:
    // 0x390888: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x390888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_39088c:
    // 0x39088c: 0x34630600  ori         $v1, $v1, 0x600
    ctx->pc = 0x39088cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1536);
label_390890:
    // 0x390890: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x390890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
label_390894:
    // 0x390894: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x390894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_390898:
    // 0x390898: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x390898u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39089c:
    // 0x39089c: 0x3e00008  jr          $ra
label_3908a0:
    if (ctx->pc == 0x3908A0u) {
        ctx->pc = 0x3908A0u;
            // 0x3908a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3908A4u;
        goto label_3908a4;
    }
    ctx->pc = 0x39089Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3908A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39089Cu;
            // 0x3908a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3908A4u;
label_3908a4:
    // 0x3908a4: 0x0  nop
    ctx->pc = 0x3908a4u;
    // NOP
label_3908a8:
    // 0x3908a8: 0x0  nop
    ctx->pc = 0x3908a8u;
    // NOP
label_3908ac:
    // 0x3908ac: 0x0  nop
    ctx->pc = 0x3908acu;
    // NOP
label_3908b0:
    // 0x3908b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3908b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3908b4:
    // 0x3908b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3908b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3908b8:
    // 0x3908b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3908b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3908bc:
    // 0x3908bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3908bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3908c0:
    // 0x3908c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3908c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3908c4:
    // 0x3908c4: 0xc0baaa0  jal         func_2EAA80
label_3908c8:
    if (ctx->pc == 0x3908C8u) {
        ctx->pc = 0x3908C8u;
            // 0x3908c8: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x3908CCu;
        goto label_3908cc;
    }
    ctx->pc = 0x3908C4u;
    SET_GPR_U32(ctx, 31, 0x3908CCu);
    ctx->pc = 0x3908C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3908C4u;
            // 0x3908c8: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EAA80u;
    if (runtime->hasFunction(0x2EAA80u)) {
        auto targetFn = runtime->lookupFunction(0x2EAA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3908CCu; }
        if (ctx->pc != 0x3908CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EAA80_0x2eaa80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3908CCu; }
        if (ctx->pc != 0x3908CCu) { return; }
    }
    ctx->pc = 0x3908CCu;
label_3908cc:
    // 0x3908cc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3908ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3908d0:
    // 0x3908d0: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x3908d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3908d4:
    // 0x3908d4: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x3908d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_3908d8:
    // 0x3908d8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3908d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3908dc:
    // 0x3908dc: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3908dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3908e0:
    // 0x3908e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3908e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3908e4:
    // 0x3908e4: 0xc04cc90  jal         func_133240
label_3908e8:
    if (ctx->pc == 0x3908E8u) {
        ctx->pc = 0x3908E8u;
            // 0x3908e8: 0x24460200  addiu       $a2, $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
        ctx->pc = 0x3908ECu;
        goto label_3908ec;
    }
    ctx->pc = 0x3908E4u;
    SET_GPR_U32(ctx, 31, 0x3908ECu);
    ctx->pc = 0x3908E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3908E4u;
            // 0x3908e8: 0x24460200  addiu       $a2, $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3908ECu; }
        if (ctx->pc != 0x3908ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3908ECu; }
        if (ctx->pc != 0x3908ECu) { return; }
    }
    ctx->pc = 0x3908ECu;
label_3908ec:
    // 0x3908ec: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x3908ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3908f0:
    // 0x3908f0: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x3908f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
label_3908f4:
    // 0x3908f4: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x3908f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3908f8:
    // 0x3908f8: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x3908f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3908fc:
    // 0x3908fc: 0x4603181a  mula.s      $f3, $f3
    ctx->pc = 0x3908fcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_390900:
    // 0x390900: 0x4601081e  madda.s     $f1, $f1
    ctx->pc = 0x390900u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_390904:
    // 0x390904: 0x4602105c  madd.s      $f1, $f2, $f2
    ctx->pc = 0x390904u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_390908:
    // 0x390908: 0x46010044  c1          0x10044
    ctx->pc = 0x390908u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_39090c:
    // 0x39090c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39090cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_390910:
    // 0x390910: 0x0  nop
    ctx->pc = 0x390910u;
    // NOP
label_390914:
    // 0x390914: 0x0  nop
    ctx->pc = 0x390914u;
    // NOP
label_390918:
    // 0x390918: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x390918u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39091c:
    // 0x39091c: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_390920:
    if (ctx->pc == 0x390920u) {
        ctx->pc = 0x390920u;
            // 0x390920: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x390924u;
        goto label_390924;
    }
    ctx->pc = 0x39091Cu;
    {
        const bool branch_taken_0x39091c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x39091c) {
            ctx->pc = 0x390920u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39091Cu;
            // 0x390920: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x390944u;
            goto label_390944;
        }
    }
    ctx->pc = 0x390924u;
label_390924:
    // 0x390924: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x390924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_390928:
    // 0x390928: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x390928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_39092c:
    // 0x39092c: 0x8c4489e8  lw          $a0, -0x7618($v0)
    ctx->pc = 0x39092cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_390930:
    // 0x390930: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x390930u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_390934:
    // 0x390934: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x390934u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_390938:
    // 0x390938: 0x320f809  jalr        $t9
label_39093c:
    if (ctx->pc == 0x39093Cu) {
        ctx->pc = 0x39093Cu;
            // 0x39093c: 0x346501ae  ori         $a1, $v1, 0x1AE (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)430);
        ctx->pc = 0x390940u;
        goto label_390940;
    }
    ctx->pc = 0x390938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x390940u);
        ctx->pc = 0x39093Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x390938u;
            // 0x39093c: 0x346501ae  ori         $a1, $v1, 0x1AE (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)430);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x390940u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x390940u; }
            if (ctx->pc != 0x390940u) { return; }
        }
        }
    }
    ctx->pc = 0x390940u;
label_390940:
    // 0x390940: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x390940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_390944:
    // 0x390944: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x390944u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_390948:
    // 0x390948: 0x3e00008  jr          $ra
label_39094c:
    if (ctx->pc == 0x39094Cu) {
        ctx->pc = 0x39094Cu;
            // 0x39094c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x390950u;
        goto label_390950;
    }
    ctx->pc = 0x390948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39094Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x390948u;
            // 0x39094c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x390950u;
label_390950:
    // 0x390950: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x390950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_390954:
    // 0x390954: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x390954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_390958:
    // 0x390958: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x390958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_39095c:
    // 0x39095c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x39095cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_390960:
    // 0x390960: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x390960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_390964:
    // 0x390964: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x390964u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_390968:
    // 0x390968: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x390968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_39096c:
    // 0x39096c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39096cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_390970:
    // 0x390970: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x390970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_390974:
    // 0x390974: 0x8c8400d0  lw          $a0, 0xD0($a0)
    ctx->pc = 0x390974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_390978:
    // 0x390978: 0x5083001d  beql        $a0, $v1, . + 4 + (0x1D << 2)
label_39097c:
    if (ctx->pc == 0x39097Cu) {
        ctx->pc = 0x39097Cu;
            // 0x39097c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x390980u;
        goto label_390980;
    }
    ctx->pc = 0x390978u;
    {
        const bool branch_taken_0x390978 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x390978) {
            ctx->pc = 0x39097Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x390978u;
            // 0x39097c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3909F0u;
            goto label_3909f0;
        }
    }
    ctx->pc = 0x390980u;
label_390980:
    // 0x390980: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_390984:
    if (ctx->pc == 0x390984u) {
        ctx->pc = 0x390988u;
        goto label_390988;
    }
    ctx->pc = 0x390980u;
    {
        const bool branch_taken_0x390980 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x390980) {
            ctx->pc = 0x390990u;
            goto label_390990;
        }
    }
    ctx->pc = 0x390988u;
label_390988:
    // 0x390988: 0x10000018  b           . + 4 + (0x18 << 2)
label_39098c:
    if (ctx->pc == 0x39098Cu) {
        ctx->pc = 0x390990u;
        goto label_390990;
    }
    ctx->pc = 0x390988u;
    {
        const bool branch_taken_0x390988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x390988) {
            ctx->pc = 0x3909ECu;
            goto label_3909ec;
        }
    }
    ctx->pc = 0x390990u;
label_390990:
    // 0x390990: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x390990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_390994:
    // 0x390994: 0x8e83009c  lw          $v1, 0x9C($s4)
    ctx->pc = 0x390994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
label_390998:
    // 0x390998: 0x8c426120  lw          $v0, 0x6120($v0)
    ctx->pc = 0x390998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24864)));
label_39099c:
    // 0x39099c: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x39099cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_3909a0:
    // 0x3909a0: 0x8c510030  lw          $s1, 0x30($v0)
    ctx->pc = 0x3909a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_3909a4:
    // 0x3909a4: 0xac71000c  sw          $s1, 0xC($v1)
    ctx->pc = 0x3909a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 17));
label_3909a8:
    // 0x3909a8: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x3909a8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3909ac:
    // 0x3909ac: 0x8c720010  lw          $s2, 0x10($v1)
    ctx->pc = 0x3909acu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_3909b0:
    // 0x3909b0: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x3909b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3909b4:
    // 0x3909b4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3909b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_3909b8:
    // 0x3909b8: 0x24a51bd0  addiu       $a1, $a1, 0x1BD0
    ctx->pc = 0x3909b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7120));
label_3909bc:
    // 0x3909bc: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x3909bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_3909c0:
    // 0x3909c0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3909c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3909c4:
    // 0x3909c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3909c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3909c8:
    // 0x3909c8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3909c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3909cc:
    // 0x3909cc: 0xc0d615c  jal         func_358570
label_3909d0:
    if (ctx->pc == 0x3909D0u) {
        ctx->pc = 0x3909D0u;
            // 0x3909d0: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->pc = 0x3909D4u;
        goto label_3909d4;
    }
    ctx->pc = 0x3909CCu;
    SET_GPR_U32(ctx, 31, 0x3909D4u);
    ctx->pc = 0x3909D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3909CCu;
            // 0x3909d0: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358570u;
    if (runtime->hasFunction(0x358570u)) {
        auto targetFn = runtime->lookupFunction(0x358570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3909D4u; }
        if (ctx->pc != 0x3909D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358570_0x358570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3909D4u; }
        if (ctx->pc != 0x3909D4u) { return; }
    }
    ctx->pc = 0x3909D4u;
label_3909d4:
    // 0x3909d4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3909d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3909d8:
    // 0x3909d8: 0xa2020020  sb          $v0, 0x20($s0)
    ctx->pc = 0x3909d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 2));
label_3909dc:
    // 0x3909dc: 0x1e40fff4  bgtz        $s2, . + 4 + (-0xC << 2)
label_3909e0:
    if (ctx->pc == 0x3909E0u) {
        ctx->pc = 0x3909E0u;
            // 0x3909e0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x3909E4u;
        goto label_3909e4;
    }
    ctx->pc = 0x3909DCu;
    {
        const bool branch_taken_0x3909dc = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x3909E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3909DCu;
            // 0x3909e0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3909dc) {
            ctx->pc = 0x3909B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3909b0;
        }
    }
    ctx->pc = 0x3909E4u;
label_3909e4:
    // 0x3909e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3909e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3909e8:
    // 0x3909e8: 0xae8300d0  sw          $v1, 0xD0($s4)
    ctx->pc = 0x3909e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 208), GPR_U32(ctx, 3));
label_3909ec:
    // 0x3909ec: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3909ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3909f0:
    // 0x3909f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3909f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3909f4:
    // 0x3909f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3909f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3909f8:
    // 0x3909f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3909f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3909fc:
    // 0x3909fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3909fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_390a00:
    // 0x390a00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x390a00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_390a04:
    // 0x390a04: 0x3e00008  jr          $ra
label_390a08:
    if (ctx->pc == 0x390A08u) {
        ctx->pc = 0x390A08u;
            // 0x390a08: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x390A0Cu;
        goto label_390a0c;
    }
    ctx->pc = 0x390A04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x390A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x390A04u;
            // 0x390a08: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x390A0Cu;
label_390a0c:
    // 0x390a0c: 0x0  nop
    ctx->pc = 0x390a0cu;
    // NOP
label_390a10:
    // 0x390a10: 0x3e00008  jr          $ra
label_390a14:
    if (ctx->pc == 0x390A14u) {
        ctx->pc = 0x390A14u;
            // 0x390a14: 0x24022eff  addiu       $v0, $zero, 0x2EFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12031));
        ctx->pc = 0x390A18u;
        goto label_390a18;
    }
    ctx->pc = 0x390A10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x390A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x390A10u;
            // 0x390a14: 0x24022eff  addiu       $v0, $zero, 0x2EFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12031));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x390A18u;
label_390a18:
    // 0x390a18: 0x0  nop
    ctx->pc = 0x390a18u;
    // NOP
label_390a1c:
    // 0x390a1c: 0x0  nop
    ctx->pc = 0x390a1cu;
    // NOP
label_390a20:
    // 0x390a20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x390a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_390a24:
    // 0x390a24: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x390a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_390a28:
    // 0x390a28: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x390a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_390a2c:
    // 0x390a2c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x390a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_390a30:
    // 0x390a30: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x390a30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_390a34:
    // 0x390a34: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x390a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_390a38:
    // 0x390a38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x390a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_390a3c:
    // 0x390a3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x390a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_390a40:
    // 0x390a40: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x390a40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_390a44:
    // 0x390a44: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_390a48:
    if (ctx->pc == 0x390A48u) {
        ctx->pc = 0x390A48u;
            // 0x390a48: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x390A4Cu;
        goto label_390a4c;
    }
    ctx->pc = 0x390A44u;
    {
        const bool branch_taken_0x390a44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x390A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x390A44u;
            // 0x390a48: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390a44) {
            ctx->pc = 0x390A88u;
            goto label_390a88;
        }
    }
    ctx->pc = 0x390A4Cu;
label_390a4c:
    // 0x390a4c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x390a4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_390a50:
    // 0x390a50: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x390a50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_390a54:
    // 0x390a54: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x390a54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_390a58:
    // 0x390a58: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x390a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_390a5c:
    // 0x390a5c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x390a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_390a60:
    // 0x390a60: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x390a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_390a64:
    // 0x390a64: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x390a64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_390a68:
    // 0x390a68: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x390a68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_390a6c:
    // 0x390a6c: 0x320f809  jalr        $t9
label_390a70:
    if (ctx->pc == 0x390A70u) {
        ctx->pc = 0x390A74u;
        goto label_390a74;
    }
    ctx->pc = 0x390A6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x390A74u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x390A74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x390A74u; }
            if (ctx->pc != 0x390A74u) { return; }
        }
        }
    }
    ctx->pc = 0x390A74u;
label_390a74:
    // 0x390a74: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x390a74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_390a78:
    // 0x390a78: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x390a78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_390a7c:
    // 0x390a7c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x390a7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_390a80:
    // 0x390a80: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_390a84:
    if (ctx->pc == 0x390A84u) {
        ctx->pc = 0x390A84u;
            // 0x390a84: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x390A88u;
        goto label_390a88;
    }
    ctx->pc = 0x390A80u;
    {
        const bool branch_taken_0x390a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x390A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x390A80u;
            // 0x390a84: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390a80) {
            ctx->pc = 0x390A58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_390a58;
        }
    }
    ctx->pc = 0x390A88u;
label_390a88:
    // 0x390a88: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x390a88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_390a8c:
    // 0x390a8c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x390a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_390a90:
    // 0x390a90: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x390a90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_390a94:
    // 0x390a94: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x390a94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_390a98:
    // 0x390a98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x390a98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_390a9c:
    // 0x390a9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x390a9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_390aa0:
    // 0x390aa0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x390aa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_390aa4:
    // 0x390aa4: 0x3e00008  jr          $ra
label_390aa8:
    if (ctx->pc == 0x390AA8u) {
        ctx->pc = 0x390AA8u;
            // 0x390aa8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x390AACu;
        goto label_390aac;
    }
    ctx->pc = 0x390AA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x390AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x390AA4u;
            // 0x390aa8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x390AACu;
label_390aac:
    // 0x390aac: 0x0  nop
    ctx->pc = 0x390aacu;
    // NOP
label_390ab0:
    // 0x390ab0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x390ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_390ab4:
    // 0x390ab4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x390ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_390ab8:
    // 0x390ab8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x390ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_390abc:
    // 0x390abc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x390abcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_390ac0:
    // 0x390ac0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x390ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_390ac4:
    // 0x390ac4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x390ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_390ac8:
    // 0x390ac8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x390ac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_390acc:
    // 0x390acc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x390accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_390ad0:
    // 0x390ad0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x390ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_390ad4:
    // 0x390ad4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x390ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_390ad8:
    // 0x390ad8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x390ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_390adc:
    // 0x390adc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x390adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_390ae0:
    // 0x390ae0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x390ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_390ae4:
    // 0x390ae4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x390ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_390ae8:
    // 0x390ae8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x390ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_390aec:
    // 0x390aec: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x390aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_390af0:
    // 0x390af0: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x390af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_390af4:
    // 0x390af4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x390af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_390af8:
    // 0x390af8: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x390af8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_390afc:
    // 0x390afc: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x390afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_390b00:
    // 0x390b00: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x390b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_390b04:
    // 0x390b04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x390b04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_390b08:
    // 0x390b08: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x390b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_390b0c:
    // 0x390b0c: 0xc0a997c  jal         func_2A65F0
label_390b10:
    if (ctx->pc == 0x390B10u) {
        ctx->pc = 0x390B10u;
            // 0x390b10: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x390B14u;
        goto label_390b14;
    }
    ctx->pc = 0x390B0Cu;
    SET_GPR_U32(ctx, 31, 0x390B14u);
    ctx->pc = 0x390B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x390B0Cu;
            // 0x390b10: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390B14u; }
        if (ctx->pc != 0x390B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390B14u; }
        if (ctx->pc != 0x390B14u) { return; }
    }
    ctx->pc = 0x390B14u;
label_390b14:
    // 0x390b14: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x390b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_390b18:
    // 0x390b18: 0xc0d879c  jal         func_361E70
label_390b1c:
    if (ctx->pc == 0x390B1Cu) {
        ctx->pc = 0x390B1Cu;
            // 0x390b1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x390B20u;
        goto label_390b20;
    }
    ctx->pc = 0x390B18u;
    SET_GPR_U32(ctx, 31, 0x390B20u);
    ctx->pc = 0x390B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x390B18u;
            // 0x390b1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390B20u; }
        if (ctx->pc != 0x390B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390B20u; }
        if (ctx->pc != 0x390B20u) { return; }
    }
    ctx->pc = 0x390B20u;
label_390b20:
    // 0x390b20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x390b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_390b24:
    // 0x390b24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x390b24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_390b28:
    // 0x390b28: 0x3e00008  jr          $ra
label_390b2c:
    if (ctx->pc == 0x390B2Cu) {
        ctx->pc = 0x390B2Cu;
            // 0x390b2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x390B30u;
        goto label_390b30;
    }
    ctx->pc = 0x390B28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x390B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x390B28u;
            // 0x390b2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x390B30u;
label_390b30:
    // 0x390b30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x390b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_390b34:
    // 0x390b34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x390b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_390b38:
    // 0x390b38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x390b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_390b3c:
    // 0x390b3c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x390b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_390b40:
    // 0x390b40: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_390b44:
    if (ctx->pc == 0x390B44u) {
        ctx->pc = 0x390B44u;
            // 0x390b44: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x390B48u;
        goto label_390b48;
    }
    ctx->pc = 0x390B40u;
    {
        const bool branch_taken_0x390b40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x390B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x390B40u;
            // 0x390b44: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390b40) {
            ctx->pc = 0x390C60u;
            goto label_390c60;
        }
    }
    ctx->pc = 0x390B48u;
label_390b48:
    // 0x390b48: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x390b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_390b4c:
    // 0x390b4c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x390b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_390b50:
    // 0x390b50: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x390b50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_390b54:
    // 0x390b54: 0xc075128  jal         func_1D44A0
label_390b58:
    if (ctx->pc == 0x390B58u) {
        ctx->pc = 0x390B58u;
            // 0x390b58: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x390B5Cu;
        goto label_390b5c;
    }
    ctx->pc = 0x390B54u;
    SET_GPR_U32(ctx, 31, 0x390B5Cu);
    ctx->pc = 0x390B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x390B54u;
            // 0x390b58: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390B5Cu; }
        if (ctx->pc != 0x390B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390B5Cu; }
        if (ctx->pc != 0x390B5Cu) { return; }
    }
    ctx->pc = 0x390B5Cu;
label_390b5c:
    // 0x390b5c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x390b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_390b60:
    // 0x390b60: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x390b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_390b64:
    // 0x390b64: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x390b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_390b68:
    // 0x390b68: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x390b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_390b6c:
    // 0x390b6c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x390b6cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_390b70:
    // 0x390b70: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_390b74:
    if (ctx->pc == 0x390B74u) {
        ctx->pc = 0x390B74u;
            // 0x390b74: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x390B78u;
        goto label_390b78;
    }
    ctx->pc = 0x390B70u;
    {
        const bool branch_taken_0x390b70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x390B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x390B70u;
            // 0x390b74: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390b70) {
            ctx->pc = 0x390B80u;
            goto label_390b80;
        }
    }
    ctx->pc = 0x390B78u;
label_390b78:
    // 0x390b78: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x390b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_390b7c:
    // 0x390b7c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x390b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_390b80:
    // 0x390b80: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x390b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_390b84:
    // 0x390b84: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x390b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_390b88:
    // 0x390b88: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x390b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_390b8c:
    // 0x390b8c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x390b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_390b90:
    // 0x390b90: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x390b90u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_390b94:
    // 0x390b94: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_390b98:
    if (ctx->pc == 0x390B98u) {
        ctx->pc = 0x390B98u;
            // 0x390b98: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x390B9Cu;
        goto label_390b9c;
    }
    ctx->pc = 0x390B94u;
    {
        const bool branch_taken_0x390b94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x390b94) {
            ctx->pc = 0x390B98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x390B94u;
            // 0x390b98: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x390BA8u;
            goto label_390ba8;
        }
    }
    ctx->pc = 0x390B9Cu;
label_390b9c:
    // 0x390b9c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x390b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_390ba0:
    // 0x390ba0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x390ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_390ba4:
    // 0x390ba4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x390ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_390ba8:
    // 0x390ba8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x390ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_390bac:
    // 0x390bac: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x390bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_390bb0:
    // 0x390bb0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x390bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_390bb4:
    // 0x390bb4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x390bb4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_390bb8:
    // 0x390bb8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_390bbc:
    if (ctx->pc == 0x390BBCu) {
        ctx->pc = 0x390BBCu;
            // 0x390bbc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x390BC0u;
        goto label_390bc0;
    }
    ctx->pc = 0x390BB8u;
    {
        const bool branch_taken_0x390bb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x390bb8) {
            ctx->pc = 0x390BBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x390BB8u;
            // 0x390bbc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x390BCCu;
            goto label_390bcc;
        }
    }
    ctx->pc = 0x390BC0u;
label_390bc0:
    // 0x390bc0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x390bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_390bc4:
    // 0x390bc4: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x390bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_390bc8:
    // 0x390bc8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x390bc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_390bcc:
    // 0x390bcc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x390bccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_390bd0:
    // 0x390bd0: 0x320f809  jalr        $t9
label_390bd4:
    if (ctx->pc == 0x390BD4u) {
        ctx->pc = 0x390BD4u;
            // 0x390bd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x390BD8u;
        goto label_390bd8;
    }
    ctx->pc = 0x390BD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x390BD8u);
        ctx->pc = 0x390BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x390BD0u;
            // 0x390bd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x390BD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x390BD8u; }
            if (ctx->pc != 0x390BD8u) { return; }
        }
        }
    }
    ctx->pc = 0x390BD8u;
label_390bd8:
    // 0x390bd8: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x390bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_390bdc:
    // 0x390bdc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x390bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_390be0:
    // 0x390be0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x390be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_390be4:
    // 0x390be4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x390be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_390be8:
    // 0x390be8: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x390be8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_390bec:
    // 0x390bec: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x390becu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_390bf0:
    // 0x390bf0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_390bf4:
    if (ctx->pc == 0x390BF4u) {
        ctx->pc = 0x390BF4u;
            // 0x390bf4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x390BF8u;
        goto label_390bf8;
    }
    ctx->pc = 0x390BF0u;
    {
        const bool branch_taken_0x390bf0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x390bf0) {
            ctx->pc = 0x390BF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x390BF0u;
            // 0x390bf4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x390C04u;
            goto label_390c04;
        }
    }
    ctx->pc = 0x390BF8u;
label_390bf8:
    // 0x390bf8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x390bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_390bfc:
    // 0x390bfc: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x390bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_390c00:
    // 0x390c00: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x390c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_390c04:
    // 0x390c04: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x390c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_390c08:
    // 0x390c08: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x390c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_390c0c:
    // 0x390c0c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x390c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_390c10:
    // 0x390c10: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x390c10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_390c14:
    // 0x390c14: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x390c14u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_390c18:
    // 0x390c18: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_390c1c:
    if (ctx->pc == 0x390C1Cu) {
        ctx->pc = 0x390C20u;
        goto label_390c20;
    }
    ctx->pc = 0x390C18u;
    {
        const bool branch_taken_0x390c18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x390c18) {
            ctx->pc = 0x390C28u;
            goto label_390c28;
        }
    }
    ctx->pc = 0x390C20u;
label_390c20:
    // 0x390c20: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x390c20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_390c24:
    // 0x390c24: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x390c24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_390c28:
    // 0x390c28: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x390c28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_390c2c:
    // 0x390c2c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x390c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_390c30:
    // 0x390c30: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x390c30u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_390c34:
    // 0x390c34: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_390c38:
    if (ctx->pc == 0x390C38u) {
        ctx->pc = 0x390C3Cu;
        goto label_390c3c;
    }
    ctx->pc = 0x390C34u;
    {
        const bool branch_taken_0x390c34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x390c34) {
            ctx->pc = 0x390C44u;
            goto label_390c44;
        }
    }
    ctx->pc = 0x390C3Cu;
label_390c3c:
    // 0x390c3c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x390c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_390c40:
    // 0x390c40: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x390c40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_390c44:
    // 0x390c44: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x390c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_390c48:
    // 0x390c48: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x390c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_390c4c:
    // 0x390c4c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x390c4cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_390c50:
    // 0x390c50: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_390c54:
    if (ctx->pc == 0x390C54u) {
        ctx->pc = 0x390C54u;
            // 0x390c54: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x390C58u;
        goto label_390c58;
    }
    ctx->pc = 0x390C50u;
    {
        const bool branch_taken_0x390c50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x390c50) {
            ctx->pc = 0x390C54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x390C50u;
            // 0x390c54: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x390C64u;
            goto label_390c64;
        }
    }
    ctx->pc = 0x390C58u;
label_390c58:
    // 0x390c58: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x390c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_390c5c:
    // 0x390c5c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x390c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_390c60:
    // 0x390c60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x390c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_390c64:
    // 0x390c64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x390c64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_390c68:
    // 0x390c68: 0x3e00008  jr          $ra
label_390c6c:
    if (ctx->pc == 0x390C6Cu) {
        ctx->pc = 0x390C6Cu;
            // 0x390c6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x390C70u;
        goto label_390c70;
    }
    ctx->pc = 0x390C68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x390C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x390C68u;
            // 0x390c6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x390C70u;
label_390c70:
    // 0x390c70: 0x80e3fc0  j           func_38FF00
label_390c74:
    if (ctx->pc == 0x390C74u) {
        ctx->pc = 0x390C74u;
            // 0x390c74: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x390C78u;
        goto label_390c78;
    }
    ctx->pc = 0x390C70u;
    ctx->pc = 0x390C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x390C70u;
            // 0x390c74: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38FF00u;
    {
        auto targetFn = runtime->lookupFunction(0x38FF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x390C78u;
label_390c78:
    // 0x390c78: 0x0  nop
    ctx->pc = 0x390c78u;
    // NOP
label_390c7c:
    // 0x390c7c: 0x0  nop
    ctx->pc = 0x390c7cu;
    // NOP
label_390c80:
    // 0x390c80: 0x80e3d80  j           func_38F600
label_390c84:
    if (ctx->pc == 0x390C84u) {
        ctx->pc = 0x390C84u;
            // 0x390c84: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x390C88u;
        goto label_390c88;
    }
    ctx->pc = 0x390C80u;
    ctx->pc = 0x390C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x390C80u;
            // 0x390c84: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38F600u;
    if (runtime->hasFunction(0x38F600u)) {
        auto targetFn = runtime->lookupFunction(0x38F600u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0038F600_0x38f600(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x390C88u;
label_390c88:
    // 0x390c88: 0x0  nop
    ctx->pc = 0x390c88u;
    // NOP
label_390c8c:
    // 0x390c8c: 0x0  nop
    ctx->pc = 0x390c8cu;
    // NOP
label_390c90:
    // 0x390c90: 0x80e3dd8  j           func_38F760
label_390c94:
    if (ctx->pc == 0x390C94u) {
        ctx->pc = 0x390C94u;
            // 0x390c94: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x390C98u;
        goto label_390c98;
    }
    ctx->pc = 0x390C90u;
    ctx->pc = 0x390C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x390C90u;
            // 0x390c94: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38F760u;
    {
        auto targetFn = runtime->lookupFunction(0x38F760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x390C98u;
label_390c98:
    // 0x390c98: 0x0  nop
    ctx->pc = 0x390c98u;
    // NOP
label_390c9c:
    // 0x390c9c: 0x0  nop
    ctx->pc = 0x390c9cu;
    // NOP
label_390ca0:
    // 0x390ca0: 0x80e3d5c  j           func_38F570
label_390ca4:
    if (ctx->pc == 0x390CA4u) {
        ctx->pc = 0x390CA4u;
            // 0x390ca4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x390CA8u;
        goto label_390ca8;
    }
    ctx->pc = 0x390CA0u;
    ctx->pc = 0x390CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x390CA0u;
            // 0x390ca4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38F570u;
    {
        auto targetFn = runtime->lookupFunction(0x38F570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x390CA8u;
label_390ca8:
    // 0x390ca8: 0x0  nop
    ctx->pc = 0x390ca8u;
    // NOP
label_390cac:
    // 0x390cac: 0x0  nop
    ctx->pc = 0x390cacu;
    // NOP
label_390cb0:
    // 0x390cb0: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x390cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_390cb4:
    // 0x390cb4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x390cb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_390cb8:
    // 0x390cb8: 0x0  nop
    ctx->pc = 0x390cb8u;
    // NOP
label_390cbc:
    // 0x390cbc: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x390cbcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_390cc0:
    // 0x390cc0: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_390cc4:
    if (ctx->pc == 0x390CC4u) {
        ctx->pc = 0x390CC8u;
        goto label_390cc8;
    }
    ctx->pc = 0x390CC0u;
    {
        const bool branch_taken_0x390cc0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x390cc0) {
            ctx->pc = 0x390CF0u;
            goto label_390cf0;
        }
    }
    ctx->pc = 0x390CC8u;
label_390cc8:
    // 0x390cc8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x390cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_390ccc:
    // 0x390ccc: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x390cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_390cd0:
    // 0x390cd0: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x390cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_390cd4:
    // 0x390cd4: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x390cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_390cd8:
    // 0x390cd8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x390cd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_390cdc:
    // 0x390cdc: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x390cdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_390ce0:
    // 0x390ce0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_390ce4:
    if (ctx->pc == 0x390CE4u) {
        ctx->pc = 0x390CE4u;
            // 0x390ce4: 0xe4800028  swc1        $f0, 0x28($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
        ctx->pc = 0x390CE8u;
        goto label_390ce8;
    }
    ctx->pc = 0x390CE0u;
    {
        const bool branch_taken_0x390ce0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x390CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x390CE0u;
            // 0x390ce4: 0xe4800028  swc1        $f0, 0x28($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x390ce0) {
            ctx->pc = 0x390D04u;
            goto label_390d04;
        }
    }
    ctx->pc = 0x390CE8u;
label_390ce8:
    // 0x390ce8: 0x10000006  b           . + 4 + (0x6 << 2)
label_390cec:
    if (ctx->pc == 0x390CECu) {
        ctx->pc = 0x390CECu;
            // 0x390cec: 0xe4820028  swc1        $f2, 0x28($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
        ctx->pc = 0x390CF0u;
        goto label_390cf0;
    }
    ctx->pc = 0x390CE8u;
    {
        const bool branch_taken_0x390ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x390CE8u;
            // 0x390cec: 0xe4820028  swc1        $f2, 0x28($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x390ce8) {
            ctx->pc = 0x390D04u;
            goto label_390d04;
        }
    }
    ctx->pc = 0x390CF0u;
label_390cf0:
    // 0x390cf0: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x390cf0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_390cf4:
    // 0x390cf4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_390cf8:
    if (ctx->pc == 0x390CF8u) {
        ctx->pc = 0x390CF8u;
            // 0x390cf8: 0xc4810028  lwc1        $f1, 0x28($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x390CFCu;
        goto label_390cfc;
    }
    ctx->pc = 0x390CF4u;
    {
        const bool branch_taken_0x390cf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x390cf4) {
            ctx->pc = 0x390CF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x390CF4u;
            // 0x390cf8: 0xc4810028  lwc1        $f1, 0x28($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x390D08u;
            goto label_390d08;
        }
    }
    ctx->pc = 0x390CFCu;
label_390cfc:
    // 0x390cfc: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x390cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_390d00:
    // 0x390d00: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x390d00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
label_390d04:
    // 0x390d04: 0xc4810028  lwc1        $f1, 0x28($a0)
    ctx->pc = 0x390d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_390d08:
    // 0x390d08: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x390d08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_390d0c:
    // 0x390d0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x390d0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_390d10:
    // 0x390d10: 0x0  nop
    ctx->pc = 0x390d10u;
    // NOP
label_390d14:
    // 0x390d14: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x390d14u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_390d18:
    // 0x390d18: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_390d1c:
    if (ctx->pc == 0x390D1Cu) {
        ctx->pc = 0x390D1Cu;
            // 0x390d1c: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x390D20u;
        goto label_390d20;
    }
    ctx->pc = 0x390D18u;
    {
        const bool branch_taken_0x390d18 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x390D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x390D18u;
            // 0x390d1c: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x390d18) {
            ctx->pc = 0x390D38u;
            goto label_390d38;
        }
    }
    ctx->pc = 0x390D20u;
label_390d20:
    // 0x390d20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x390d20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_390d24:
    // 0x390d24: 0x0  nop
    ctx->pc = 0x390d24u;
    // NOP
label_390d28:
    // 0x390d28: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x390d28u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_390d2c:
    // 0x390d2c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_390d30:
    if (ctx->pc == 0x390D30u) {
        ctx->pc = 0x390D34u;
        goto label_390d34;
    }
    ctx->pc = 0x390D2Cu;
    {
        const bool branch_taken_0x390d2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x390d2c) {
            ctx->pc = 0x390D38u;
            goto label_390d38;
        }
    }
    ctx->pc = 0x390D34u;
label_390d34:
    // 0x390d34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x390d34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_390d38:
    // 0x390d38: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_390d3c:
    if (ctx->pc == 0x390D3Cu) {
        ctx->pc = 0x390D40u;
        goto label_390d40;
    }
    ctx->pc = 0x390D38u;
    {
        const bool branch_taken_0x390d38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x390d38) {
            ctx->pc = 0x390D50u;
            goto label_390d50;
        }
    }
    ctx->pc = 0x390D40u;
label_390d40:
    // 0x390d40: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x390d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_390d44:
    // 0x390d44: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x390d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_390d48:
    // 0x390d48: 0xac850034  sw          $a1, 0x34($a0)
    ctx->pc = 0x390d48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 5));
label_390d4c:
    // 0x390d4c: 0xac830038  sw          $v1, 0x38($a0)
    ctx->pc = 0x390d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 3));
label_390d50:
    // 0x390d50: 0x3e00008  jr          $ra
label_390d54:
    if (ctx->pc == 0x390D54u) {
        ctx->pc = 0x390D58u;
        goto label_390d58;
    }
    ctx->pc = 0x390D50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x390D58u;
label_390d58:
    // 0x390d58: 0x0  nop
    ctx->pc = 0x390d58u;
    // NOP
label_390d5c:
    // 0x390d5c: 0x0  nop
    ctx->pc = 0x390d5cu;
    // NOP
}
