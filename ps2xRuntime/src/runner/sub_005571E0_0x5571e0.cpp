#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005571E0
// Address: 0x5571e0 - 0x557c00
void sub_005571E0_0x5571e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005571E0_0x5571e0");
#endif

    switch (ctx->pc) {
        case 0x5571e0u: goto label_5571e0;
        case 0x5571e4u: goto label_5571e4;
        case 0x5571e8u: goto label_5571e8;
        case 0x5571ecu: goto label_5571ec;
        case 0x5571f0u: goto label_5571f0;
        case 0x5571f4u: goto label_5571f4;
        case 0x5571f8u: goto label_5571f8;
        case 0x5571fcu: goto label_5571fc;
        case 0x557200u: goto label_557200;
        case 0x557204u: goto label_557204;
        case 0x557208u: goto label_557208;
        case 0x55720cu: goto label_55720c;
        case 0x557210u: goto label_557210;
        case 0x557214u: goto label_557214;
        case 0x557218u: goto label_557218;
        case 0x55721cu: goto label_55721c;
        case 0x557220u: goto label_557220;
        case 0x557224u: goto label_557224;
        case 0x557228u: goto label_557228;
        case 0x55722cu: goto label_55722c;
        case 0x557230u: goto label_557230;
        case 0x557234u: goto label_557234;
        case 0x557238u: goto label_557238;
        case 0x55723cu: goto label_55723c;
        case 0x557240u: goto label_557240;
        case 0x557244u: goto label_557244;
        case 0x557248u: goto label_557248;
        case 0x55724cu: goto label_55724c;
        case 0x557250u: goto label_557250;
        case 0x557254u: goto label_557254;
        case 0x557258u: goto label_557258;
        case 0x55725cu: goto label_55725c;
        case 0x557260u: goto label_557260;
        case 0x557264u: goto label_557264;
        case 0x557268u: goto label_557268;
        case 0x55726cu: goto label_55726c;
        case 0x557270u: goto label_557270;
        case 0x557274u: goto label_557274;
        case 0x557278u: goto label_557278;
        case 0x55727cu: goto label_55727c;
        case 0x557280u: goto label_557280;
        case 0x557284u: goto label_557284;
        case 0x557288u: goto label_557288;
        case 0x55728cu: goto label_55728c;
        case 0x557290u: goto label_557290;
        case 0x557294u: goto label_557294;
        case 0x557298u: goto label_557298;
        case 0x55729cu: goto label_55729c;
        case 0x5572a0u: goto label_5572a0;
        case 0x5572a4u: goto label_5572a4;
        case 0x5572a8u: goto label_5572a8;
        case 0x5572acu: goto label_5572ac;
        case 0x5572b0u: goto label_5572b0;
        case 0x5572b4u: goto label_5572b4;
        case 0x5572b8u: goto label_5572b8;
        case 0x5572bcu: goto label_5572bc;
        case 0x5572c0u: goto label_5572c0;
        case 0x5572c4u: goto label_5572c4;
        case 0x5572c8u: goto label_5572c8;
        case 0x5572ccu: goto label_5572cc;
        case 0x5572d0u: goto label_5572d0;
        case 0x5572d4u: goto label_5572d4;
        case 0x5572d8u: goto label_5572d8;
        case 0x5572dcu: goto label_5572dc;
        case 0x5572e0u: goto label_5572e0;
        case 0x5572e4u: goto label_5572e4;
        case 0x5572e8u: goto label_5572e8;
        case 0x5572ecu: goto label_5572ec;
        case 0x5572f0u: goto label_5572f0;
        case 0x5572f4u: goto label_5572f4;
        case 0x5572f8u: goto label_5572f8;
        case 0x5572fcu: goto label_5572fc;
        case 0x557300u: goto label_557300;
        case 0x557304u: goto label_557304;
        case 0x557308u: goto label_557308;
        case 0x55730cu: goto label_55730c;
        case 0x557310u: goto label_557310;
        case 0x557314u: goto label_557314;
        case 0x557318u: goto label_557318;
        case 0x55731cu: goto label_55731c;
        case 0x557320u: goto label_557320;
        case 0x557324u: goto label_557324;
        case 0x557328u: goto label_557328;
        case 0x55732cu: goto label_55732c;
        case 0x557330u: goto label_557330;
        case 0x557334u: goto label_557334;
        case 0x557338u: goto label_557338;
        case 0x55733cu: goto label_55733c;
        case 0x557340u: goto label_557340;
        case 0x557344u: goto label_557344;
        case 0x557348u: goto label_557348;
        case 0x55734cu: goto label_55734c;
        case 0x557350u: goto label_557350;
        case 0x557354u: goto label_557354;
        case 0x557358u: goto label_557358;
        case 0x55735cu: goto label_55735c;
        case 0x557360u: goto label_557360;
        case 0x557364u: goto label_557364;
        case 0x557368u: goto label_557368;
        case 0x55736cu: goto label_55736c;
        case 0x557370u: goto label_557370;
        case 0x557374u: goto label_557374;
        case 0x557378u: goto label_557378;
        case 0x55737cu: goto label_55737c;
        case 0x557380u: goto label_557380;
        case 0x557384u: goto label_557384;
        case 0x557388u: goto label_557388;
        case 0x55738cu: goto label_55738c;
        case 0x557390u: goto label_557390;
        case 0x557394u: goto label_557394;
        case 0x557398u: goto label_557398;
        case 0x55739cu: goto label_55739c;
        case 0x5573a0u: goto label_5573a0;
        case 0x5573a4u: goto label_5573a4;
        case 0x5573a8u: goto label_5573a8;
        case 0x5573acu: goto label_5573ac;
        case 0x5573b0u: goto label_5573b0;
        case 0x5573b4u: goto label_5573b4;
        case 0x5573b8u: goto label_5573b8;
        case 0x5573bcu: goto label_5573bc;
        case 0x5573c0u: goto label_5573c0;
        case 0x5573c4u: goto label_5573c4;
        case 0x5573c8u: goto label_5573c8;
        case 0x5573ccu: goto label_5573cc;
        case 0x5573d0u: goto label_5573d0;
        case 0x5573d4u: goto label_5573d4;
        case 0x5573d8u: goto label_5573d8;
        case 0x5573dcu: goto label_5573dc;
        case 0x5573e0u: goto label_5573e0;
        case 0x5573e4u: goto label_5573e4;
        case 0x5573e8u: goto label_5573e8;
        case 0x5573ecu: goto label_5573ec;
        case 0x5573f0u: goto label_5573f0;
        case 0x5573f4u: goto label_5573f4;
        case 0x5573f8u: goto label_5573f8;
        case 0x5573fcu: goto label_5573fc;
        case 0x557400u: goto label_557400;
        case 0x557404u: goto label_557404;
        case 0x557408u: goto label_557408;
        case 0x55740cu: goto label_55740c;
        case 0x557410u: goto label_557410;
        case 0x557414u: goto label_557414;
        case 0x557418u: goto label_557418;
        case 0x55741cu: goto label_55741c;
        case 0x557420u: goto label_557420;
        case 0x557424u: goto label_557424;
        case 0x557428u: goto label_557428;
        case 0x55742cu: goto label_55742c;
        case 0x557430u: goto label_557430;
        case 0x557434u: goto label_557434;
        case 0x557438u: goto label_557438;
        case 0x55743cu: goto label_55743c;
        case 0x557440u: goto label_557440;
        case 0x557444u: goto label_557444;
        case 0x557448u: goto label_557448;
        case 0x55744cu: goto label_55744c;
        case 0x557450u: goto label_557450;
        case 0x557454u: goto label_557454;
        case 0x557458u: goto label_557458;
        case 0x55745cu: goto label_55745c;
        case 0x557460u: goto label_557460;
        case 0x557464u: goto label_557464;
        case 0x557468u: goto label_557468;
        case 0x55746cu: goto label_55746c;
        case 0x557470u: goto label_557470;
        case 0x557474u: goto label_557474;
        case 0x557478u: goto label_557478;
        case 0x55747cu: goto label_55747c;
        case 0x557480u: goto label_557480;
        case 0x557484u: goto label_557484;
        case 0x557488u: goto label_557488;
        case 0x55748cu: goto label_55748c;
        case 0x557490u: goto label_557490;
        case 0x557494u: goto label_557494;
        case 0x557498u: goto label_557498;
        case 0x55749cu: goto label_55749c;
        case 0x5574a0u: goto label_5574a0;
        case 0x5574a4u: goto label_5574a4;
        case 0x5574a8u: goto label_5574a8;
        case 0x5574acu: goto label_5574ac;
        case 0x5574b0u: goto label_5574b0;
        case 0x5574b4u: goto label_5574b4;
        case 0x5574b8u: goto label_5574b8;
        case 0x5574bcu: goto label_5574bc;
        case 0x5574c0u: goto label_5574c0;
        case 0x5574c4u: goto label_5574c4;
        case 0x5574c8u: goto label_5574c8;
        case 0x5574ccu: goto label_5574cc;
        case 0x5574d0u: goto label_5574d0;
        case 0x5574d4u: goto label_5574d4;
        case 0x5574d8u: goto label_5574d8;
        case 0x5574dcu: goto label_5574dc;
        case 0x5574e0u: goto label_5574e0;
        case 0x5574e4u: goto label_5574e4;
        case 0x5574e8u: goto label_5574e8;
        case 0x5574ecu: goto label_5574ec;
        case 0x5574f0u: goto label_5574f0;
        case 0x5574f4u: goto label_5574f4;
        case 0x5574f8u: goto label_5574f8;
        case 0x5574fcu: goto label_5574fc;
        case 0x557500u: goto label_557500;
        case 0x557504u: goto label_557504;
        case 0x557508u: goto label_557508;
        case 0x55750cu: goto label_55750c;
        case 0x557510u: goto label_557510;
        case 0x557514u: goto label_557514;
        case 0x557518u: goto label_557518;
        case 0x55751cu: goto label_55751c;
        case 0x557520u: goto label_557520;
        case 0x557524u: goto label_557524;
        case 0x557528u: goto label_557528;
        case 0x55752cu: goto label_55752c;
        case 0x557530u: goto label_557530;
        case 0x557534u: goto label_557534;
        case 0x557538u: goto label_557538;
        case 0x55753cu: goto label_55753c;
        case 0x557540u: goto label_557540;
        case 0x557544u: goto label_557544;
        case 0x557548u: goto label_557548;
        case 0x55754cu: goto label_55754c;
        case 0x557550u: goto label_557550;
        case 0x557554u: goto label_557554;
        case 0x557558u: goto label_557558;
        case 0x55755cu: goto label_55755c;
        case 0x557560u: goto label_557560;
        case 0x557564u: goto label_557564;
        case 0x557568u: goto label_557568;
        case 0x55756cu: goto label_55756c;
        case 0x557570u: goto label_557570;
        case 0x557574u: goto label_557574;
        case 0x557578u: goto label_557578;
        case 0x55757cu: goto label_55757c;
        case 0x557580u: goto label_557580;
        case 0x557584u: goto label_557584;
        case 0x557588u: goto label_557588;
        case 0x55758cu: goto label_55758c;
        case 0x557590u: goto label_557590;
        case 0x557594u: goto label_557594;
        case 0x557598u: goto label_557598;
        case 0x55759cu: goto label_55759c;
        case 0x5575a0u: goto label_5575a0;
        case 0x5575a4u: goto label_5575a4;
        case 0x5575a8u: goto label_5575a8;
        case 0x5575acu: goto label_5575ac;
        case 0x5575b0u: goto label_5575b0;
        case 0x5575b4u: goto label_5575b4;
        case 0x5575b8u: goto label_5575b8;
        case 0x5575bcu: goto label_5575bc;
        case 0x5575c0u: goto label_5575c0;
        case 0x5575c4u: goto label_5575c4;
        case 0x5575c8u: goto label_5575c8;
        case 0x5575ccu: goto label_5575cc;
        case 0x5575d0u: goto label_5575d0;
        case 0x5575d4u: goto label_5575d4;
        case 0x5575d8u: goto label_5575d8;
        case 0x5575dcu: goto label_5575dc;
        case 0x5575e0u: goto label_5575e0;
        case 0x5575e4u: goto label_5575e4;
        case 0x5575e8u: goto label_5575e8;
        case 0x5575ecu: goto label_5575ec;
        case 0x5575f0u: goto label_5575f0;
        case 0x5575f4u: goto label_5575f4;
        case 0x5575f8u: goto label_5575f8;
        case 0x5575fcu: goto label_5575fc;
        case 0x557600u: goto label_557600;
        case 0x557604u: goto label_557604;
        case 0x557608u: goto label_557608;
        case 0x55760cu: goto label_55760c;
        case 0x557610u: goto label_557610;
        case 0x557614u: goto label_557614;
        case 0x557618u: goto label_557618;
        case 0x55761cu: goto label_55761c;
        case 0x557620u: goto label_557620;
        case 0x557624u: goto label_557624;
        case 0x557628u: goto label_557628;
        case 0x55762cu: goto label_55762c;
        case 0x557630u: goto label_557630;
        case 0x557634u: goto label_557634;
        case 0x557638u: goto label_557638;
        case 0x55763cu: goto label_55763c;
        case 0x557640u: goto label_557640;
        case 0x557644u: goto label_557644;
        case 0x557648u: goto label_557648;
        case 0x55764cu: goto label_55764c;
        case 0x557650u: goto label_557650;
        case 0x557654u: goto label_557654;
        case 0x557658u: goto label_557658;
        case 0x55765cu: goto label_55765c;
        case 0x557660u: goto label_557660;
        case 0x557664u: goto label_557664;
        case 0x557668u: goto label_557668;
        case 0x55766cu: goto label_55766c;
        case 0x557670u: goto label_557670;
        case 0x557674u: goto label_557674;
        case 0x557678u: goto label_557678;
        case 0x55767cu: goto label_55767c;
        case 0x557680u: goto label_557680;
        case 0x557684u: goto label_557684;
        case 0x557688u: goto label_557688;
        case 0x55768cu: goto label_55768c;
        case 0x557690u: goto label_557690;
        case 0x557694u: goto label_557694;
        case 0x557698u: goto label_557698;
        case 0x55769cu: goto label_55769c;
        case 0x5576a0u: goto label_5576a0;
        case 0x5576a4u: goto label_5576a4;
        case 0x5576a8u: goto label_5576a8;
        case 0x5576acu: goto label_5576ac;
        case 0x5576b0u: goto label_5576b0;
        case 0x5576b4u: goto label_5576b4;
        case 0x5576b8u: goto label_5576b8;
        case 0x5576bcu: goto label_5576bc;
        case 0x5576c0u: goto label_5576c0;
        case 0x5576c4u: goto label_5576c4;
        case 0x5576c8u: goto label_5576c8;
        case 0x5576ccu: goto label_5576cc;
        case 0x5576d0u: goto label_5576d0;
        case 0x5576d4u: goto label_5576d4;
        case 0x5576d8u: goto label_5576d8;
        case 0x5576dcu: goto label_5576dc;
        case 0x5576e0u: goto label_5576e0;
        case 0x5576e4u: goto label_5576e4;
        case 0x5576e8u: goto label_5576e8;
        case 0x5576ecu: goto label_5576ec;
        case 0x5576f0u: goto label_5576f0;
        case 0x5576f4u: goto label_5576f4;
        case 0x5576f8u: goto label_5576f8;
        case 0x5576fcu: goto label_5576fc;
        case 0x557700u: goto label_557700;
        case 0x557704u: goto label_557704;
        case 0x557708u: goto label_557708;
        case 0x55770cu: goto label_55770c;
        case 0x557710u: goto label_557710;
        case 0x557714u: goto label_557714;
        case 0x557718u: goto label_557718;
        case 0x55771cu: goto label_55771c;
        case 0x557720u: goto label_557720;
        case 0x557724u: goto label_557724;
        case 0x557728u: goto label_557728;
        case 0x55772cu: goto label_55772c;
        case 0x557730u: goto label_557730;
        case 0x557734u: goto label_557734;
        case 0x557738u: goto label_557738;
        case 0x55773cu: goto label_55773c;
        case 0x557740u: goto label_557740;
        case 0x557744u: goto label_557744;
        case 0x557748u: goto label_557748;
        case 0x55774cu: goto label_55774c;
        case 0x557750u: goto label_557750;
        case 0x557754u: goto label_557754;
        case 0x557758u: goto label_557758;
        case 0x55775cu: goto label_55775c;
        case 0x557760u: goto label_557760;
        case 0x557764u: goto label_557764;
        case 0x557768u: goto label_557768;
        case 0x55776cu: goto label_55776c;
        case 0x557770u: goto label_557770;
        case 0x557774u: goto label_557774;
        case 0x557778u: goto label_557778;
        case 0x55777cu: goto label_55777c;
        case 0x557780u: goto label_557780;
        case 0x557784u: goto label_557784;
        case 0x557788u: goto label_557788;
        case 0x55778cu: goto label_55778c;
        case 0x557790u: goto label_557790;
        case 0x557794u: goto label_557794;
        case 0x557798u: goto label_557798;
        case 0x55779cu: goto label_55779c;
        case 0x5577a0u: goto label_5577a0;
        case 0x5577a4u: goto label_5577a4;
        case 0x5577a8u: goto label_5577a8;
        case 0x5577acu: goto label_5577ac;
        case 0x5577b0u: goto label_5577b0;
        case 0x5577b4u: goto label_5577b4;
        case 0x5577b8u: goto label_5577b8;
        case 0x5577bcu: goto label_5577bc;
        case 0x5577c0u: goto label_5577c0;
        case 0x5577c4u: goto label_5577c4;
        case 0x5577c8u: goto label_5577c8;
        case 0x5577ccu: goto label_5577cc;
        case 0x5577d0u: goto label_5577d0;
        case 0x5577d4u: goto label_5577d4;
        case 0x5577d8u: goto label_5577d8;
        case 0x5577dcu: goto label_5577dc;
        case 0x5577e0u: goto label_5577e0;
        case 0x5577e4u: goto label_5577e4;
        case 0x5577e8u: goto label_5577e8;
        case 0x5577ecu: goto label_5577ec;
        case 0x5577f0u: goto label_5577f0;
        case 0x5577f4u: goto label_5577f4;
        case 0x5577f8u: goto label_5577f8;
        case 0x5577fcu: goto label_5577fc;
        case 0x557800u: goto label_557800;
        case 0x557804u: goto label_557804;
        case 0x557808u: goto label_557808;
        case 0x55780cu: goto label_55780c;
        case 0x557810u: goto label_557810;
        case 0x557814u: goto label_557814;
        case 0x557818u: goto label_557818;
        case 0x55781cu: goto label_55781c;
        case 0x557820u: goto label_557820;
        case 0x557824u: goto label_557824;
        case 0x557828u: goto label_557828;
        case 0x55782cu: goto label_55782c;
        case 0x557830u: goto label_557830;
        case 0x557834u: goto label_557834;
        case 0x557838u: goto label_557838;
        case 0x55783cu: goto label_55783c;
        case 0x557840u: goto label_557840;
        case 0x557844u: goto label_557844;
        case 0x557848u: goto label_557848;
        case 0x55784cu: goto label_55784c;
        case 0x557850u: goto label_557850;
        case 0x557854u: goto label_557854;
        case 0x557858u: goto label_557858;
        case 0x55785cu: goto label_55785c;
        case 0x557860u: goto label_557860;
        case 0x557864u: goto label_557864;
        case 0x557868u: goto label_557868;
        case 0x55786cu: goto label_55786c;
        case 0x557870u: goto label_557870;
        case 0x557874u: goto label_557874;
        case 0x557878u: goto label_557878;
        case 0x55787cu: goto label_55787c;
        case 0x557880u: goto label_557880;
        case 0x557884u: goto label_557884;
        case 0x557888u: goto label_557888;
        case 0x55788cu: goto label_55788c;
        case 0x557890u: goto label_557890;
        case 0x557894u: goto label_557894;
        case 0x557898u: goto label_557898;
        case 0x55789cu: goto label_55789c;
        case 0x5578a0u: goto label_5578a0;
        case 0x5578a4u: goto label_5578a4;
        case 0x5578a8u: goto label_5578a8;
        case 0x5578acu: goto label_5578ac;
        case 0x5578b0u: goto label_5578b0;
        case 0x5578b4u: goto label_5578b4;
        case 0x5578b8u: goto label_5578b8;
        case 0x5578bcu: goto label_5578bc;
        case 0x5578c0u: goto label_5578c0;
        case 0x5578c4u: goto label_5578c4;
        case 0x5578c8u: goto label_5578c8;
        case 0x5578ccu: goto label_5578cc;
        case 0x5578d0u: goto label_5578d0;
        case 0x5578d4u: goto label_5578d4;
        case 0x5578d8u: goto label_5578d8;
        case 0x5578dcu: goto label_5578dc;
        case 0x5578e0u: goto label_5578e0;
        case 0x5578e4u: goto label_5578e4;
        case 0x5578e8u: goto label_5578e8;
        case 0x5578ecu: goto label_5578ec;
        case 0x5578f0u: goto label_5578f0;
        case 0x5578f4u: goto label_5578f4;
        case 0x5578f8u: goto label_5578f8;
        case 0x5578fcu: goto label_5578fc;
        case 0x557900u: goto label_557900;
        case 0x557904u: goto label_557904;
        case 0x557908u: goto label_557908;
        case 0x55790cu: goto label_55790c;
        case 0x557910u: goto label_557910;
        case 0x557914u: goto label_557914;
        case 0x557918u: goto label_557918;
        case 0x55791cu: goto label_55791c;
        case 0x557920u: goto label_557920;
        case 0x557924u: goto label_557924;
        case 0x557928u: goto label_557928;
        case 0x55792cu: goto label_55792c;
        case 0x557930u: goto label_557930;
        case 0x557934u: goto label_557934;
        case 0x557938u: goto label_557938;
        case 0x55793cu: goto label_55793c;
        case 0x557940u: goto label_557940;
        case 0x557944u: goto label_557944;
        case 0x557948u: goto label_557948;
        case 0x55794cu: goto label_55794c;
        case 0x557950u: goto label_557950;
        case 0x557954u: goto label_557954;
        case 0x557958u: goto label_557958;
        case 0x55795cu: goto label_55795c;
        case 0x557960u: goto label_557960;
        case 0x557964u: goto label_557964;
        case 0x557968u: goto label_557968;
        case 0x55796cu: goto label_55796c;
        case 0x557970u: goto label_557970;
        case 0x557974u: goto label_557974;
        case 0x557978u: goto label_557978;
        case 0x55797cu: goto label_55797c;
        case 0x557980u: goto label_557980;
        case 0x557984u: goto label_557984;
        case 0x557988u: goto label_557988;
        case 0x55798cu: goto label_55798c;
        case 0x557990u: goto label_557990;
        case 0x557994u: goto label_557994;
        case 0x557998u: goto label_557998;
        case 0x55799cu: goto label_55799c;
        case 0x5579a0u: goto label_5579a0;
        case 0x5579a4u: goto label_5579a4;
        case 0x5579a8u: goto label_5579a8;
        case 0x5579acu: goto label_5579ac;
        case 0x5579b0u: goto label_5579b0;
        case 0x5579b4u: goto label_5579b4;
        case 0x5579b8u: goto label_5579b8;
        case 0x5579bcu: goto label_5579bc;
        case 0x5579c0u: goto label_5579c0;
        case 0x5579c4u: goto label_5579c4;
        case 0x5579c8u: goto label_5579c8;
        case 0x5579ccu: goto label_5579cc;
        case 0x5579d0u: goto label_5579d0;
        case 0x5579d4u: goto label_5579d4;
        case 0x5579d8u: goto label_5579d8;
        case 0x5579dcu: goto label_5579dc;
        case 0x5579e0u: goto label_5579e0;
        case 0x5579e4u: goto label_5579e4;
        case 0x5579e8u: goto label_5579e8;
        case 0x5579ecu: goto label_5579ec;
        case 0x5579f0u: goto label_5579f0;
        case 0x5579f4u: goto label_5579f4;
        case 0x5579f8u: goto label_5579f8;
        case 0x5579fcu: goto label_5579fc;
        case 0x557a00u: goto label_557a00;
        case 0x557a04u: goto label_557a04;
        case 0x557a08u: goto label_557a08;
        case 0x557a0cu: goto label_557a0c;
        case 0x557a10u: goto label_557a10;
        case 0x557a14u: goto label_557a14;
        case 0x557a18u: goto label_557a18;
        case 0x557a1cu: goto label_557a1c;
        case 0x557a20u: goto label_557a20;
        case 0x557a24u: goto label_557a24;
        case 0x557a28u: goto label_557a28;
        case 0x557a2cu: goto label_557a2c;
        case 0x557a30u: goto label_557a30;
        case 0x557a34u: goto label_557a34;
        case 0x557a38u: goto label_557a38;
        case 0x557a3cu: goto label_557a3c;
        case 0x557a40u: goto label_557a40;
        case 0x557a44u: goto label_557a44;
        case 0x557a48u: goto label_557a48;
        case 0x557a4cu: goto label_557a4c;
        case 0x557a50u: goto label_557a50;
        case 0x557a54u: goto label_557a54;
        case 0x557a58u: goto label_557a58;
        case 0x557a5cu: goto label_557a5c;
        case 0x557a60u: goto label_557a60;
        case 0x557a64u: goto label_557a64;
        case 0x557a68u: goto label_557a68;
        case 0x557a6cu: goto label_557a6c;
        case 0x557a70u: goto label_557a70;
        case 0x557a74u: goto label_557a74;
        case 0x557a78u: goto label_557a78;
        case 0x557a7cu: goto label_557a7c;
        case 0x557a80u: goto label_557a80;
        case 0x557a84u: goto label_557a84;
        case 0x557a88u: goto label_557a88;
        case 0x557a8cu: goto label_557a8c;
        case 0x557a90u: goto label_557a90;
        case 0x557a94u: goto label_557a94;
        case 0x557a98u: goto label_557a98;
        case 0x557a9cu: goto label_557a9c;
        case 0x557aa0u: goto label_557aa0;
        case 0x557aa4u: goto label_557aa4;
        case 0x557aa8u: goto label_557aa8;
        case 0x557aacu: goto label_557aac;
        case 0x557ab0u: goto label_557ab0;
        case 0x557ab4u: goto label_557ab4;
        case 0x557ab8u: goto label_557ab8;
        case 0x557abcu: goto label_557abc;
        case 0x557ac0u: goto label_557ac0;
        case 0x557ac4u: goto label_557ac4;
        case 0x557ac8u: goto label_557ac8;
        case 0x557accu: goto label_557acc;
        case 0x557ad0u: goto label_557ad0;
        case 0x557ad4u: goto label_557ad4;
        case 0x557ad8u: goto label_557ad8;
        case 0x557adcu: goto label_557adc;
        case 0x557ae0u: goto label_557ae0;
        case 0x557ae4u: goto label_557ae4;
        case 0x557ae8u: goto label_557ae8;
        case 0x557aecu: goto label_557aec;
        case 0x557af0u: goto label_557af0;
        case 0x557af4u: goto label_557af4;
        case 0x557af8u: goto label_557af8;
        case 0x557afcu: goto label_557afc;
        case 0x557b00u: goto label_557b00;
        case 0x557b04u: goto label_557b04;
        case 0x557b08u: goto label_557b08;
        case 0x557b0cu: goto label_557b0c;
        case 0x557b10u: goto label_557b10;
        case 0x557b14u: goto label_557b14;
        case 0x557b18u: goto label_557b18;
        case 0x557b1cu: goto label_557b1c;
        case 0x557b20u: goto label_557b20;
        case 0x557b24u: goto label_557b24;
        case 0x557b28u: goto label_557b28;
        case 0x557b2cu: goto label_557b2c;
        case 0x557b30u: goto label_557b30;
        case 0x557b34u: goto label_557b34;
        case 0x557b38u: goto label_557b38;
        case 0x557b3cu: goto label_557b3c;
        case 0x557b40u: goto label_557b40;
        case 0x557b44u: goto label_557b44;
        case 0x557b48u: goto label_557b48;
        case 0x557b4cu: goto label_557b4c;
        case 0x557b50u: goto label_557b50;
        case 0x557b54u: goto label_557b54;
        case 0x557b58u: goto label_557b58;
        case 0x557b5cu: goto label_557b5c;
        case 0x557b60u: goto label_557b60;
        case 0x557b64u: goto label_557b64;
        case 0x557b68u: goto label_557b68;
        case 0x557b6cu: goto label_557b6c;
        case 0x557b70u: goto label_557b70;
        case 0x557b74u: goto label_557b74;
        case 0x557b78u: goto label_557b78;
        case 0x557b7cu: goto label_557b7c;
        case 0x557b80u: goto label_557b80;
        case 0x557b84u: goto label_557b84;
        case 0x557b88u: goto label_557b88;
        case 0x557b8cu: goto label_557b8c;
        case 0x557b90u: goto label_557b90;
        case 0x557b94u: goto label_557b94;
        case 0x557b98u: goto label_557b98;
        case 0x557b9cu: goto label_557b9c;
        case 0x557ba0u: goto label_557ba0;
        case 0x557ba4u: goto label_557ba4;
        case 0x557ba8u: goto label_557ba8;
        case 0x557bacu: goto label_557bac;
        case 0x557bb0u: goto label_557bb0;
        case 0x557bb4u: goto label_557bb4;
        case 0x557bb8u: goto label_557bb8;
        case 0x557bbcu: goto label_557bbc;
        case 0x557bc0u: goto label_557bc0;
        case 0x557bc4u: goto label_557bc4;
        case 0x557bc8u: goto label_557bc8;
        case 0x557bccu: goto label_557bcc;
        case 0x557bd0u: goto label_557bd0;
        case 0x557bd4u: goto label_557bd4;
        case 0x557bd8u: goto label_557bd8;
        case 0x557bdcu: goto label_557bdc;
        case 0x557be0u: goto label_557be0;
        case 0x557be4u: goto label_557be4;
        case 0x557be8u: goto label_557be8;
        case 0x557becu: goto label_557bec;
        case 0x557bf0u: goto label_557bf0;
        case 0x557bf4u: goto label_557bf4;
        case 0x557bf8u: goto label_557bf8;
        case 0x557bfcu: goto label_557bfc;
        default: break;
    }

    ctx->pc = 0x5571e0u;

label_5571e0:
    // 0x5571e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x5571e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_5571e4:
    // 0x5571e4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x5571e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_5571e8:
    // 0x5571e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x5571e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_5571ec:
    // 0x5571ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x5571ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_5571f0:
    // 0x5571f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x5571f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_5571f4:
    // 0x5571f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x5571f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5571f8:
    // 0x5571f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5571f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5571fc:
    // 0x5571fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5571fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_557200:
    // 0x557200: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x557200u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_557204:
    // 0x557204: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x557204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_557208:
    // 0x557208: 0xc10ca68  jal         func_4329A0
label_55720c:
    if (ctx->pc == 0x55720Cu) {
        ctx->pc = 0x55720Cu;
            // 0x55720c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x557210u;
        goto label_557210;
    }
    ctx->pc = 0x557208u;
    SET_GPR_U32(ctx, 31, 0x557210u);
    ctx->pc = 0x55720Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x557208u;
            // 0x55720c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557210u; }
        if (ctx->pc != 0x557210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557210u; }
        if (ctx->pc != 0x557210u) { return; }
    }
    ctx->pc = 0x557210u;
label_557210:
    // 0x557210: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x557210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_557214:
    // 0x557214: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x557214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_557218:
    // 0x557218: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x557218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_55721c:
    // 0x55721c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x55721cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_557220:
    // 0x557220: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x557220u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_557224:
    // 0x557224: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x557224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_557228:
    // 0x557228: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x557228u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_55722c:
    // 0x55722c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x55722cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_557230:
    // 0x557230: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x557230u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_557234:
    // 0x557234: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x557234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_557238:
    // 0x557238: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x557238u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_55723c:
    // 0x55723c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x55723cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_557240:
    // 0x557240: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x557240u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_557244:
    // 0x557244: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x557244u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_557248:
    // 0x557248: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x557248u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_55724c:
    // 0x55724c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x55724cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_557250:
    // 0x557250: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x557250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_557254:
    // 0x557254: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x557254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_557258:
    // 0x557258: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x557258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_55725c:
    // 0x55725c: 0xc0582cc  jal         func_160B30
label_557260:
    if (ctx->pc == 0x557260u) {
        ctx->pc = 0x557260u;
            // 0x557260: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x557264u;
        goto label_557264;
    }
    ctx->pc = 0x55725Cu;
    SET_GPR_U32(ctx, 31, 0x557264u);
    ctx->pc = 0x557260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55725Cu;
            // 0x557260: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557264u; }
        if (ctx->pc != 0x557264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557264u; }
        if (ctx->pc != 0x557264u) { return; }
    }
    ctx->pc = 0x557264u;
label_557264:
    // 0x557264: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x557264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_557268:
    // 0x557268: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x557268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_55726c:
    // 0x55726c: 0x24637b30  addiu       $v1, $v1, 0x7B30
    ctx->pc = 0x55726cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31536));
label_557270:
    // 0x557270: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x557270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_557274:
    // 0x557274: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x557274u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_557278:
    // 0x557278: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x557278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_55727c:
    // 0x55727c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x55727cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_557280:
    // 0x557280: 0xac44b7b8  sw          $a0, -0x4848($v0)
    ctx->pc = 0x557280u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294948792), GPR_U32(ctx, 4));
label_557284:
    // 0x557284: 0x24637b40  addiu       $v1, $v1, 0x7B40
    ctx->pc = 0x557284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31552));
label_557288:
    // 0x557288: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x557288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_55728c:
    // 0x55728c: 0x24427b78  addiu       $v0, $v0, 0x7B78
    ctx->pc = 0x55728cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31608));
label_557290:
    // 0x557290: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x557290u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_557294:
    // 0x557294: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x557294u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_557298:
    // 0x557298: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x557298u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_55729c:
    // 0x55729c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x55729cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_5572a0:
    // 0x5572a0: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x5572a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_5572a4:
    // 0x5572a4: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x5572a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_5572a8:
    // 0x5572a8: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x5572a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_5572ac:
    // 0x5572ac: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x5572acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_5572b0:
    // 0x5572b0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x5572b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_5572b4:
    // 0x5572b4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x5572b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_5572b8:
    // 0x5572b8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x5572b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_5572bc:
    // 0x5572bc: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x5572bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_5572c0:
    // 0x5572c0: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x5572c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_5572c4:
    // 0x5572c4: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_5572c8:
    if (ctx->pc == 0x5572C8u) {
        ctx->pc = 0x5572CCu;
        goto label_5572cc;
    }
    ctx->pc = 0x5572C4u;
    {
        const bool branch_taken_0x5572c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x5572c4) {
            ctx->pc = 0x557358u;
            goto label_557358;
        }
    }
    ctx->pc = 0x5572CCu;
label_5572cc:
    // 0x5572cc: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x5572ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_5572d0:
    // 0x5572d0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x5572d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_5572d4:
    // 0x5572d4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x5572d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_5572d8:
    // 0x5572d8: 0xc040138  jal         func_1004E0
label_5572dc:
    if (ctx->pc == 0x5572DCu) {
        ctx->pc = 0x5572DCu;
            // 0x5572dc: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x5572E0u;
        goto label_5572e0;
    }
    ctx->pc = 0x5572D8u;
    SET_GPR_U32(ctx, 31, 0x5572E0u);
    ctx->pc = 0x5572DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5572D8u;
            // 0x5572dc: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5572E0u; }
        if (ctx->pc != 0x5572E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5572E0u; }
        if (ctx->pc != 0x5572E0u) { return; }
    }
    ctx->pc = 0x5572E0u;
label_5572e0:
    // 0x5572e0: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x5572e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_5572e4:
    // 0x5572e4: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x5572e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_5572e8:
    // 0x5572e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x5572e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_5572ec:
    // 0x5572ec: 0x24a57380  addiu       $a1, $a1, 0x7380
    ctx->pc = 0x5572ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29568));
label_5572f0:
    // 0x5572f0: 0x24c66be0  addiu       $a2, $a2, 0x6BE0
    ctx->pc = 0x5572f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27616));
label_5572f4:
    // 0x5572f4: 0x240700f0  addiu       $a3, $zero, 0xF0
    ctx->pc = 0x5572f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_5572f8:
    // 0x5572f8: 0xc040840  jal         func_102100
label_5572fc:
    if (ctx->pc == 0x5572FCu) {
        ctx->pc = 0x5572FCu;
            // 0x5572fc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x557300u;
        goto label_557300;
    }
    ctx->pc = 0x5572F8u;
    SET_GPR_U32(ctx, 31, 0x557300u);
    ctx->pc = 0x5572FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5572F8u;
            // 0x5572fc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557300u; }
        if (ctx->pc != 0x557300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557300u; }
        if (ctx->pc != 0x557300u) { return; }
    }
    ctx->pc = 0x557300u;
label_557300:
    // 0x557300: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x557300u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_557304:
    // 0x557304: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x557304u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_557308:
    // 0x557308: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x557308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_55730c:
    // 0x55730c: 0xc0788fc  jal         func_1E23F0
label_557310:
    if (ctx->pc == 0x557310u) {
        ctx->pc = 0x557310u;
            // 0x557310: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x557314u;
        goto label_557314;
    }
    ctx->pc = 0x55730Cu;
    SET_GPR_U32(ctx, 31, 0x557314u);
    ctx->pc = 0x557310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55730Cu;
            // 0x557310: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557314u; }
        if (ctx->pc != 0x557314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557314u; }
        if (ctx->pc != 0x557314u) { return; }
    }
    ctx->pc = 0x557314u;
label_557314:
    // 0x557314: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x557314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_557318:
    // 0x557318: 0xc0788fc  jal         func_1E23F0
label_55731c:
    if (ctx->pc == 0x55731Cu) {
        ctx->pc = 0x55731Cu;
            // 0x55731c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x557320u;
        goto label_557320;
    }
    ctx->pc = 0x557318u;
    SET_GPR_U32(ctx, 31, 0x557320u);
    ctx->pc = 0x55731Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x557318u;
            // 0x55731c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557320u; }
        if (ctx->pc != 0x557320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557320u; }
        if (ctx->pc != 0x557320u) { return; }
    }
    ctx->pc = 0x557320u;
label_557320:
    // 0x557320: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x557320u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_557324:
    // 0x557324: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x557324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_557328:
    // 0x557328: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x557328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_55732c:
    // 0x55732c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x55732cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_557330:
    // 0x557330: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x557330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_557334:
    // 0x557334: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x557334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_557338:
    // 0x557338: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x557338u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_55733c:
    // 0x55733c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x55733cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_557340:
    // 0x557340: 0xc0a997c  jal         func_2A65F0
label_557344:
    if (ctx->pc == 0x557344u) {
        ctx->pc = 0x557344u;
            // 0x557344: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x557348u;
        goto label_557348;
    }
    ctx->pc = 0x557340u;
    SET_GPR_U32(ctx, 31, 0x557348u);
    ctx->pc = 0x557344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x557340u;
            // 0x557344: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557348u; }
        if (ctx->pc != 0x557348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557348u; }
        if (ctx->pc != 0x557348u) { return; }
    }
    ctx->pc = 0x557348u;
label_557348:
    // 0x557348: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x557348u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_55734c:
    // 0x55734c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x55734cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_557350:
    // 0x557350: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_557354:
    if (ctx->pc == 0x557354u) {
        ctx->pc = 0x557354u;
            // 0x557354: 0x265200f0  addiu       $s2, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->pc = 0x557358u;
        goto label_557358;
    }
    ctx->pc = 0x557350u;
    {
        const bool branch_taken_0x557350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x557354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x557350u;
            // 0x557354: 0x265200f0  addiu       $s2, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x557350) {
            ctx->pc = 0x557324u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_557324;
        }
    }
    ctx->pc = 0x557358u;
label_557358:
    // 0x557358: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x557358u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_55735c:
    // 0x55735c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x55735cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_557360:
    // 0x557360: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x557360u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_557364:
    // 0x557364: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x557364u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_557368:
    // 0x557368: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x557368u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_55736c:
    // 0x55736c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x55736cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_557370:
    // 0x557370: 0x3e00008  jr          $ra
label_557374:
    if (ctx->pc == 0x557374u) {
        ctx->pc = 0x557374u;
            // 0x557374: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x557378u;
        goto label_557378;
    }
    ctx->pc = 0x557370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x557374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x557370u;
            // 0x557374: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x557378u;
label_557378:
    // 0x557378: 0x0  nop
    ctx->pc = 0x557378u;
    // NOP
label_55737c:
    // 0x55737c: 0x0  nop
    ctx->pc = 0x55737cu;
    // NOP
label_557380:
    // 0x557380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x557380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_557384:
    // 0x557384: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x557384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_557388:
    // 0x557388: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x557388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_55738c:
    // 0x55738c: 0xc0b1370  jal         func_2C4DC0
label_557390:
    if (ctx->pc == 0x557390u) {
        ctx->pc = 0x557390u;
            // 0x557390: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x557394u;
        goto label_557394;
    }
    ctx->pc = 0x55738Cu;
    SET_GPR_U32(ctx, 31, 0x557394u);
    ctx->pc = 0x557390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55738Cu;
            // 0x557390: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4DC0u;
    if (runtime->hasFunction(0x2C4DC0u)) {
        auto targetFn = runtime->lookupFunction(0x2C4DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557394u; }
        if (ctx->pc != 0x557394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C4DC0_0x2c4dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557394u; }
        if (ctx->pc != 0x557394u) { return; }
    }
    ctx->pc = 0x557394u;
label_557394:
    // 0x557394: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x557394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_557398:
    // 0x557398: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x557398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_55739c:
    // 0x55739c: 0x24638470  addiu       $v1, $v1, -0x7B90
    ctx->pc = 0x55739cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935664));
label_5573a0:
    // 0x5573a0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x5573a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_5573a4:
    // 0x5573a4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x5573a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_5573a8:
    // 0x5573a8: 0x244284b0  addiu       $v0, $v0, -0x7B50
    ctx->pc = 0x5573a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935728));
label_5573ac:
    // 0x5573ac: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x5573acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_5573b0:
    // 0x5573b0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x5573b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_5573b4:
    // 0x5573b4: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x5573b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_5573b8:
    // 0x5573b8: 0x24847a80  addiu       $a0, $a0, 0x7A80
    ctx->pc = 0x5573b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31360));
label_5573bc:
    // 0x5573bc: 0xa20000d4  sb          $zero, 0xD4($s0)
    ctx->pc = 0x5573bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 212), (uint8_t)GPR_U32(ctx, 0));
label_5573c0:
    // 0x5573c0: 0x24637ac0  addiu       $v1, $v1, 0x7AC0
    ctx->pc = 0x5573c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31424));
label_5573c4:
    // 0x5573c4: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x5573c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
label_5573c8:
    // 0x5573c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x5573c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5573cc:
    // 0x5573cc: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x5573ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_5573d0:
    // 0x5573d0: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x5573d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_5573d4:
    // 0x5573d4: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x5573d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
label_5573d8:
    // 0x5573d8: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x5573d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
label_5573dc:
    // 0x5573dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5573dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_5573e0:
    // 0x5573e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5573e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5573e4:
    // 0x5573e4: 0x3e00008  jr          $ra
label_5573e8:
    if (ctx->pc == 0x5573E8u) {
        ctx->pc = 0x5573E8u;
            // 0x5573e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x5573ECu;
        goto label_5573ec;
    }
    ctx->pc = 0x5573E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5573E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5573E4u;
            // 0x5573e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5573ECu;
label_5573ec:
    // 0x5573ec: 0x0  nop
    ctx->pc = 0x5573ecu;
    // NOP
label_5573f0:
    // 0x5573f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x5573f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_5573f4:
    // 0x5573f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x5573f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_5573f8:
    // 0x5573f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5573f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5573fc:
    // 0x5573fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x5573fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_557400:
    // 0x557400: 0x8c8400e4  lw          $a0, 0xE4($a0)
    ctx->pc = 0x557400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
label_557404:
    // 0x557404: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_557408:
    if (ctx->pc == 0x557408u) {
        ctx->pc = 0x557408u;
            // 0x557408: 0xae0000e4  sw          $zero, 0xE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
        ctx->pc = 0x55740Cu;
        goto label_55740c;
    }
    ctx->pc = 0x557404u;
    {
        const bool branch_taken_0x557404 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x557404) {
            ctx->pc = 0x557408u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x557404u;
            // 0x557408: 0xae0000e4  sw          $zero, 0xE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x557420u;
            goto label_557420;
        }
    }
    ctx->pc = 0x55740Cu;
label_55740c:
    // 0x55740c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x55740cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_557410:
    // 0x557410: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x557410u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_557414:
    // 0x557414: 0x320f809  jalr        $t9
label_557418:
    if (ctx->pc == 0x557418u) {
        ctx->pc = 0x557418u;
            // 0x557418: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x55741Cu;
        goto label_55741c;
    }
    ctx->pc = 0x557414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55741Cu);
        ctx->pc = 0x557418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x557414u;
            // 0x557418: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55741Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55741Cu; }
            if (ctx->pc != 0x55741Cu) { return; }
        }
        }
    }
    ctx->pc = 0x55741Cu;
label_55741c:
    // 0x55741c: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x55741cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
label_557420:
    // 0x557420: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x557420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_557424:
    // 0x557424: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_557428:
    if (ctx->pc == 0x557428u) {
        ctx->pc = 0x557428u;
            // 0x557428: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x55742Cu;
        goto label_55742c;
    }
    ctx->pc = 0x557424u;
    {
        const bool branch_taken_0x557424 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x557424) {
            ctx->pc = 0x557428u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x557424u;
            // 0x557428: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x557440u;
            goto label_557440;
        }
    }
    ctx->pc = 0x55742Cu;
label_55742c:
    // 0x55742c: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x55742cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_557430:
    // 0x557430: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x557430u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_557434:
    // 0x557434: 0x320f809  jalr        $t9
label_557438:
    if (ctx->pc == 0x557438u) {
        ctx->pc = 0x557438u;
            // 0x557438: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x55743Cu;
        goto label_55743c;
    }
    ctx->pc = 0x557434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55743Cu);
        ctx->pc = 0x557438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x557434u;
            // 0x557438: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55743Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55743Cu; }
            if (ctx->pc != 0x55743Cu) { return; }
        }
        }
    }
    ctx->pc = 0x55743Cu;
label_55743c:
    // 0x55743c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x55743cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_557440:
    // 0x557440: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x557440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_557444:
    // 0x557444: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_557448:
    if (ctx->pc == 0x557448u) {
        ctx->pc = 0x557448u;
            // 0x557448: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x55744Cu;
        goto label_55744c;
    }
    ctx->pc = 0x557444u;
    {
        const bool branch_taken_0x557444 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x557444) {
            ctx->pc = 0x557448u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x557444u;
            // 0x557448: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x557460u;
            goto label_557460;
        }
    }
    ctx->pc = 0x55744Cu;
label_55744c:
    // 0x55744c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x55744cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_557450:
    // 0x557450: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x557450u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_557454:
    // 0x557454: 0x320f809  jalr        $t9
label_557458:
    if (ctx->pc == 0x557458u) {
        ctx->pc = 0x557458u;
            // 0x557458: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x55745Cu;
        goto label_55745c;
    }
    ctx->pc = 0x557454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55745Cu);
        ctx->pc = 0x557458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x557454u;
            // 0x557458: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55745Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55745Cu; }
            if (ctx->pc != 0x55745Cu) { return; }
        }
        }
    }
    ctx->pc = 0x55745Cu;
label_55745c:
    // 0x55745c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x55745cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_557460:
    // 0x557460: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x557460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_557464:
    // 0x557464: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x557464u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_557468:
    // 0x557468: 0x3e00008  jr          $ra
label_55746c:
    if (ctx->pc == 0x55746Cu) {
        ctx->pc = 0x55746Cu;
            // 0x55746c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x557470u;
        goto label_557470;
    }
    ctx->pc = 0x557468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55746Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x557468u;
            // 0x55746c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x557470u;
label_557470:
    // 0x557470: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x557470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_557474:
    // 0x557474: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x557474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_557478:
    // 0x557478: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x557478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_55747c:
    // 0x55747c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x55747cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_557480:
    // 0x557480: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x557480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_557484:
    // 0x557484: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x557484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_557488:
    // 0x557488: 0xc0892d0  jal         func_224B40
label_55748c:
    if (ctx->pc == 0x55748Cu) {
        ctx->pc = 0x55748Cu;
            // 0x55748c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x557490u;
        goto label_557490;
    }
    ctx->pc = 0x557488u;
    SET_GPR_U32(ctx, 31, 0x557490u);
    ctx->pc = 0x55748Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x557488u;
            // 0x55748c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557490u; }
        if (ctx->pc != 0x557490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557490u; }
        if (ctx->pc != 0x557490u) { return; }
    }
    ctx->pc = 0x557490u;
label_557490:
    // 0x557490: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x557490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_557494:
    // 0x557494: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x557494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_557498:
    // 0x557498: 0x8c42b7b8  lw          $v0, -0x4848($v0)
    ctx->pc = 0x557498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948792)));
label_55749c:
    // 0x55749c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x55749cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_5574a0:
    // 0x5574a0: 0x8c70e3e0  lw          $s0, -0x1C20($v1)
    ctx->pc = 0x5574a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960096)));
label_5574a4:
    // 0x5574a4: 0x8c510060  lw          $s1, 0x60($v0)
    ctx->pc = 0x5574a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_5574a8:
    // 0x5574a8: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x5574a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_5574ac:
    // 0x5574ac: 0xc0b6e68  jal         func_2DB9A0
label_5574b0:
    if (ctx->pc == 0x5574B0u) {
        ctx->pc = 0x5574B0u;
            // 0x5574b0: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x5574B4u;
        goto label_5574b4;
    }
    ctx->pc = 0x5574ACu;
    SET_GPR_U32(ctx, 31, 0x5574B4u);
    ctx->pc = 0x5574B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5574ACu;
            // 0x5574b0: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5574B4u; }
        if (ctx->pc != 0x5574B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5574B4u; }
        if (ctx->pc != 0x5574B4u) { return; }
    }
    ctx->pc = 0x5574B4u;
label_5574b4:
    // 0x5574b4: 0xc0b6dac  jal         func_2DB6B0
label_5574b8:
    if (ctx->pc == 0x5574B8u) {
        ctx->pc = 0x5574B8u;
            // 0x5574b8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x5574BCu;
        goto label_5574bc;
    }
    ctx->pc = 0x5574B4u;
    SET_GPR_U32(ctx, 31, 0x5574BCu);
    ctx->pc = 0x5574B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5574B4u;
            // 0x5574b8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5574BCu; }
        if (ctx->pc != 0x5574BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5574BCu; }
        if (ctx->pc != 0x5574BCu) { return; }
    }
    ctx->pc = 0x5574BCu;
label_5574bc:
    // 0x5574bc: 0xc0cac94  jal         func_32B250
label_5574c0:
    if (ctx->pc == 0x5574C0u) {
        ctx->pc = 0x5574C0u;
            // 0x5574c0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x5574C4u;
        goto label_5574c4;
    }
    ctx->pc = 0x5574BCu;
    SET_GPR_U32(ctx, 31, 0x5574C4u);
    ctx->pc = 0x5574C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5574BCu;
            // 0x5574c0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5574C4u; }
        if (ctx->pc != 0x5574C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5574C4u; }
        if (ctx->pc != 0x5574C4u) { return; }
    }
    ctx->pc = 0x5574C4u;
label_5574c4:
    // 0x5574c4: 0xc0cac84  jal         func_32B210
label_5574c8:
    if (ctx->pc == 0x5574C8u) {
        ctx->pc = 0x5574C8u;
            // 0x5574c8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x5574CCu;
        goto label_5574cc;
    }
    ctx->pc = 0x5574C4u;
    SET_GPR_U32(ctx, 31, 0x5574CCu);
    ctx->pc = 0x5574C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5574C4u;
            // 0x5574c8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5574CCu; }
        if (ctx->pc != 0x5574CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5574CCu; }
        if (ctx->pc != 0x5574CCu) { return; }
    }
    ctx->pc = 0x5574CCu;
label_5574cc:
    // 0x5574cc: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x5574ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_5574d0:
    // 0x5574d0: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x5574d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_5574d4:
    // 0x5574d4: 0xc44cc930  lwc1        $f12, -0x36D0($v0)
    ctx->pc = 0x5574d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_5574d8:
    // 0x5574d8: 0xc0a5a68  jal         func_2969A0
label_5574dc:
    if (ctx->pc == 0x5574DCu) {
        ctx->pc = 0x5574DCu;
            // 0x5574dc: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x5574E0u;
        goto label_5574e0;
    }
    ctx->pc = 0x5574D8u;
    SET_GPR_U32(ctx, 31, 0x5574E0u);
    ctx->pc = 0x5574DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5574D8u;
            // 0x5574dc: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5574E0u; }
        if (ctx->pc != 0x5574E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5574E0u; }
        if (ctx->pc != 0x5574E0u) { return; }
    }
    ctx->pc = 0x5574E0u;
label_5574e0:
    // 0x5574e0: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x5574e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_5574e4:
    // 0x5574e4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x5574e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5574e8:
    // 0x5574e8: 0x8c44b7b8  lw          $a0, -0x4848($v0)
    ctx->pc = 0x5574e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948792)));
label_5574ec:
    // 0x5574ec: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x5574ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_5574f0:
    // 0x5574f0: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x5574f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5574f4:
    // 0x5574f4: 0x3c074000  lui         $a3, 0x4000
    ctx->pc = 0x5574f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
label_5574f8:
    // 0x5574f8: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x5574f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5574fc:
    // 0x5574fc: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x5574fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_557500:
    // 0x557500: 0x8c890060  lw          $t1, 0x60($a0)
    ctx->pc = 0x557500u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_557504:
    // 0x557504: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x557504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_557508:
    // 0x557508: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x557508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_55750c:
    // 0x55750c: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x55750cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_557510:
    // 0x557510: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x557510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_557514:
    // 0x557514: 0xafa900c4  sw          $t1, 0xC4($sp)
    ctx->pc = 0x557514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 9));
label_557518:
    // 0x557518: 0xc7a70090  lwc1        $f7, 0x90($sp)
    ctx->pc = 0x557518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_55751c:
    // 0x55751c: 0xc64a0018  lwc1        $f10, 0x18($s2)
    ctx->pc = 0x55751cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_557520:
    // 0x557520: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x557520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_557524:
    // 0x557524: 0xc6490014  lwc1        $f9, 0x14($s2)
    ctx->pc = 0x557524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_557528:
    // 0x557528: 0xc6480010  lwc1        $f8, 0x10($s2)
    ctx->pc = 0x557528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_55752c:
    // 0x55752c: 0xc7a60094  lwc1        $f6, 0x94($sp)
    ctx->pc = 0x55752cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_557530:
    // 0x557530: 0xc7a50098  lwc1        $f5, 0x98($sp)
    ctx->pc = 0x557530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_557534:
    // 0x557534: 0xe7a20124  swc1        $f2, 0x124($sp)
    ctx->pc = 0x557534u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_557538:
    // 0x557538: 0xa3a80170  sb          $t0, 0x170($sp)
    ctx->pc = 0x557538u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 8));
label_55753c:
    // 0x55753c: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x55753cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_557540:
    // 0x557540: 0xafa7016c  sw          $a3, 0x16C($sp)
    ctx->pc = 0x557540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 7));
label_557544:
    // 0x557544: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x557544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_557548:
    // 0x557548: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x557548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_55754c:
    // 0x55754c: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x55754cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_557550:
    // 0x557550: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x557550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_557554:
    // 0x557554: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x557554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_557558:
    // 0x557558: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x557558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55755c:
    // 0x55755c: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x55755cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_557560:
    // 0x557560: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x557560u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_557564:
    // 0x557564: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x557564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_557568:
    // 0x557568: 0xc7a200bc  lwc1        $f2, 0xBC($sp)
    ctx->pc = 0x557568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_55756c:
    // 0x55756c: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x55756cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_557570:
    // 0x557570: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x557570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_557574:
    // 0x557574: 0xe7a2013c  swc1        $f2, 0x13C($sp)
    ctx->pc = 0x557574u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_557578:
    // 0x557578: 0xe7a10140  swc1        $f1, 0x140($sp)
    ctx->pc = 0x557578u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_55757c:
    // 0x55757c: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x55757cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_557580:
    // 0x557580: 0xc7a4009c  lwc1        $f4, 0x9C($sp)
    ctx->pc = 0x557580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_557584:
    // 0x557584: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x557584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_557588:
    // 0x557588: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x557588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_55758c:
    // 0x55758c: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x55758cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_557590:
    // 0x557590: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x557590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_557594:
    // 0x557594: 0xe7a800d0  swc1        $f8, 0xD0($sp)
    ctx->pc = 0x557594u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_557598:
    // 0x557598: 0xe7a900d4  swc1        $f9, 0xD4($sp)
    ctx->pc = 0x557598u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_55759c:
    // 0x55759c: 0xe7aa00d8  swc1        $f10, 0xD8($sp)
    ctx->pc = 0x55759cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_5575a0:
    // 0x5575a0: 0xe7a70110  swc1        $f7, 0x110($sp)
    ctx->pc = 0x5575a0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_5575a4:
    // 0x5575a4: 0xe7a60114  swc1        $f6, 0x114($sp)
    ctx->pc = 0x5575a4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_5575a8:
    // 0x5575a8: 0xe7a50118  swc1        $f5, 0x118($sp)
    ctx->pc = 0x5575a8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_5575ac:
    // 0x5575ac: 0xe7a4011c  swc1        $f4, 0x11C($sp)
    ctx->pc = 0x5575acu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_5575b0:
    // 0x5575b0: 0xe7a30120  swc1        $f3, 0x120($sp)
    ctx->pc = 0x5575b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_5575b4:
    // 0x5575b4: 0xe7a20148  swc1        $f2, 0x148($sp)
    ctx->pc = 0x5575b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_5575b8:
    // 0x5575b8: 0xe7a1014c  swc1        $f1, 0x14C($sp)
    ctx->pc = 0x5575b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_5575bc:
    // 0x5575bc: 0xc0a7a88  jal         func_29EA20
label_5575c0:
    if (ctx->pc == 0x5575C0u) {
        ctx->pc = 0x5575C0u;
            // 0x5575c0: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x5575C4u;
        goto label_5575c4;
    }
    ctx->pc = 0x5575BCu;
    SET_GPR_U32(ctx, 31, 0x5575C4u);
    ctx->pc = 0x5575C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5575BCu;
            // 0x5575c0: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5575C4u; }
        if (ctx->pc != 0x5575C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5575C4u; }
        if (ctx->pc != 0x5575C4u) { return; }
    }
    ctx->pc = 0x5575C4u;
label_5575c4:
    // 0x5575c4: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x5575c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_5575c8:
    // 0x5575c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x5575c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_5575cc:
    // 0x5575cc: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_5575d0:
    if (ctx->pc == 0x5575D0u) {
        ctx->pc = 0x5575D0u;
            // 0x5575d0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x5575D4u;
        goto label_5575d4;
    }
    ctx->pc = 0x5575CCu;
    {
        const bool branch_taken_0x5575cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x5575D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5575CCu;
            // 0x5575d0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5575cc) {
            ctx->pc = 0x55761Cu;
            goto label_55761c;
        }
    }
    ctx->pc = 0x5575D4u;
label_5575d4:
    // 0x5575d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x5575d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5575d8:
    // 0x5575d8: 0xc088ef4  jal         func_223BD0
label_5575dc:
    if (ctx->pc == 0x5575DCu) {
        ctx->pc = 0x5575DCu;
            // 0x5575dc: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x5575E0u;
        goto label_5575e0;
    }
    ctx->pc = 0x5575D8u;
    SET_GPR_U32(ctx, 31, 0x5575E0u);
    ctx->pc = 0x5575DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5575D8u;
            // 0x5575dc: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5575E0u; }
        if (ctx->pc != 0x5575E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5575E0u; }
        if (ctx->pc != 0x5575E0u) { return; }
    }
    ctx->pc = 0x5575E0u;
label_5575e0:
    // 0x5575e0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x5575e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_5575e4:
    // 0x5575e4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x5575e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_5575e8:
    // 0x5575e8: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x5575e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_5575ec:
    // 0x5575ec: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x5575ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_5575f0:
    // 0x5575f0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x5575f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_5575f4:
    // 0x5575f4: 0xae200200  sw          $zero, 0x200($s1)
    ctx->pc = 0x5575f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 0));
label_5575f8:
    // 0x5575f8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5575f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5575fc:
    // 0x5575fc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x5575fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_557600:
    // 0x557600: 0xae200210  sw          $zero, 0x210($s1)
    ctx->pc = 0x557600u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 0));
label_557604:
    // 0x557604: 0xae200214  sw          $zero, 0x214($s1)
    ctx->pc = 0x557604u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 0));
label_557608:
    // 0x557608: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x557608u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
label_55760c:
    // 0x55760c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x55760cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_557610:
    // 0x557610: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x557610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_557614:
    // 0x557614: 0xc088b38  jal         func_222CE0
label_557618:
    if (ctx->pc == 0x557618u) {
        ctx->pc = 0x557618u;
            // 0x557618: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55761Cu;
        goto label_55761c;
    }
    ctx->pc = 0x557614u;
    SET_GPR_U32(ctx, 31, 0x55761Cu);
    ctx->pc = 0x557618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x557614u;
            // 0x557618: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55761Cu; }
        if (ctx->pc != 0x55761Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55761Cu; }
        if (ctx->pc != 0x55761Cu) { return; }
    }
    ctx->pc = 0x55761Cu;
label_55761c:
    // 0x55761c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x55761cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_557620:
    // 0x557620: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x557620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_557624:
    // 0x557624: 0xc08c164  jal         func_230590
label_557628:
    if (ctx->pc == 0x557628u) {
        ctx->pc = 0x557628u;
            // 0x557628: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x55762Cu;
        goto label_55762c;
    }
    ctx->pc = 0x557624u;
    SET_GPR_U32(ctx, 31, 0x55762Cu);
    ctx->pc = 0x557628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x557624u;
            // 0x557628: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55762Cu; }
        if (ctx->pc != 0x55762Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55762Cu; }
        if (ctx->pc != 0x55762Cu) { return; }
    }
    ctx->pc = 0x55762Cu;
label_55762c:
    // 0x55762c: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x55762cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_557630:
    // 0x557630: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x557630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_557634:
    // 0x557634: 0x24425f20  addiu       $v0, $v0, 0x5F20
    ctx->pc = 0x557634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24352));
label_557638:
    // 0x557638: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x557638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_55763c:
    // 0x55763c: 0xae220200  sw          $v0, 0x200($s1)
    ctx->pc = 0x55763cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 2));
label_557640:
    // 0x557640: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x557640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_557644:
    // 0x557644: 0xc08914c  jal         func_224530
label_557648:
    if (ctx->pc == 0x557648u) {
        ctx->pc = 0x557648u;
            // 0x557648: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55764Cu;
        goto label_55764c;
    }
    ctx->pc = 0x557644u;
    SET_GPR_U32(ctx, 31, 0x55764Cu);
    ctx->pc = 0x557648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x557644u;
            // 0x557648: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55764Cu; }
        if (ctx->pc != 0x55764Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55764Cu; }
        if (ctx->pc != 0x55764Cu) { return; }
    }
    ctx->pc = 0x55764Cu;
label_55764c:
    // 0x55764c: 0x3c0343d1  lui         $v1, 0x43D1
    ctx->pc = 0x55764cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17361 << 16));
label_557650:
    // 0x557650: 0x3c023e32  lui         $v0, 0x3E32
    ctx->pc = 0x557650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15922 << 16));
label_557654:
    // 0x557654: 0x34637084  ori         $v1, $v1, 0x7084
    ctx->pc = 0x557654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28804);
label_557658:
    // 0x557658: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x557658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
label_55765c:
    // 0x55765c: 0xae230154  sw          $v1, 0x154($s1)
    ctx->pc = 0x55765cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 3));
label_557660:
    // 0x557660: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x557660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_557664:
    // 0x557664: 0xae220158  sw          $v0, 0x158($s1)
    ctx->pc = 0x557664u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
label_557668:
    // 0x557668: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x557668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_55766c:
    // 0x55766c: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x55766cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_557670:
    // 0x557670: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x557670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_557674:
    // 0x557674: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x557674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_557678:
    // 0x557678: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x557678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55767c:
    // 0x55767c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x55767cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_557680:
    // 0x557680: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x557680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_557684:
    // 0x557684: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x557684u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_557688:
    // 0x557688: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x557688u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_55768c:
    // 0x55768c: 0xc643002c  lwc1        $f3, 0x2C($s2)
    ctx->pc = 0x55768cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_557690:
    // 0x557690: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x557690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_557694:
    // 0x557694: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x557694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_557698:
    // 0x557698: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x557698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55769c:
    // 0x55769c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x55769cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_5576a0:
    // 0x5576a0: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x5576a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_5576a4:
    // 0x5576a4: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x5576a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_5576a8:
    // 0x5576a8: 0xc0892b0  jal         func_224AC0
label_5576ac:
    if (ctx->pc == 0x5576ACu) {
        ctx->pc = 0x5576ACu;
            // 0x5576ac: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x5576B0u;
        goto label_5576b0;
    }
    ctx->pc = 0x5576A8u;
    SET_GPR_U32(ctx, 31, 0x5576B0u);
    ctx->pc = 0x5576ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5576A8u;
            // 0x5576ac: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5576B0u; }
        if (ctx->pc != 0x5576B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5576B0u; }
        if (ctx->pc != 0x5576B0u) { return; }
    }
    ctx->pc = 0x5576B0u;
label_5576b0:
    // 0x5576b0: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x5576b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_5576b4:
    // 0x5576b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x5576b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5576b8:
    // 0x5576b8: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x5576b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_5576bc:
    // 0x5576bc: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x5576bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_5576c0:
    // 0x5576c0: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x5576c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_5576c4:
    // 0x5576c4: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x5576c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_5576c8:
    // 0x5576c8: 0xc0891d8  jal         func_224760
label_5576cc:
    if (ctx->pc == 0x5576CCu) {
        ctx->pc = 0x5576CCu;
            // 0x5576cc: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x5576D0u;
        goto label_5576d0;
    }
    ctx->pc = 0x5576C8u;
    SET_GPR_U32(ctx, 31, 0x5576D0u);
    ctx->pc = 0x5576CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5576C8u;
            // 0x5576cc: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5576D0u; }
        if (ctx->pc != 0x5576D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5576D0u; }
        if (ctx->pc != 0x5576D0u) { return; }
    }
    ctx->pc = 0x5576D0u;
label_5576d0:
    // 0x5576d0: 0xae510050  sw          $s1, 0x50($s2)
    ctx->pc = 0x5576d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 17));
label_5576d4:
    // 0x5576d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5576d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5576d8:
    // 0x5576d8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x5576d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_5576dc:
    // 0x5576dc: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x5576dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_5576e0:
    // 0x5576e0: 0xc0a7a88  jal         func_29EA20
label_5576e4:
    if (ctx->pc == 0x5576E4u) {
        ctx->pc = 0x5576E4u;
            // 0x5576e4: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x5576E8u;
        goto label_5576e8;
    }
    ctx->pc = 0x5576E0u;
    SET_GPR_U32(ctx, 31, 0x5576E8u);
    ctx->pc = 0x5576E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5576E0u;
            // 0x5576e4: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5576E8u; }
        if (ctx->pc != 0x5576E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5576E8u; }
        if (ctx->pc != 0x5576E8u) { return; }
    }
    ctx->pc = 0x5576E8u;
label_5576e8:
    // 0x5576e8: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x5576e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_5576ec:
    // 0x5576ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x5576ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_5576f0:
    // 0x5576f0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_5576f4:
    if (ctx->pc == 0x5576F4u) {
        ctx->pc = 0x5576F4u;
            // 0x5576f4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x5576F8u;
        goto label_5576f8;
    }
    ctx->pc = 0x5576F0u;
    {
        const bool branch_taken_0x5576f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x5576F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5576F0u;
            // 0x5576f4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5576f0) {
            ctx->pc = 0x557714u;
            goto label_557714;
        }
    }
    ctx->pc = 0x5576F8u;
label_5576f8:
    // 0x5576f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5576f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5576fc:
    // 0x5576fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x5576fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_557700:
    // 0x557700: 0xc0869d0  jal         func_21A740
label_557704:
    if (ctx->pc == 0x557704u) {
        ctx->pc = 0x557704u;
            // 0x557704: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x557708u;
        goto label_557708;
    }
    ctx->pc = 0x557700u;
    SET_GPR_U32(ctx, 31, 0x557708u);
    ctx->pc = 0x557704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x557700u;
            // 0x557704: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557708u; }
        if (ctx->pc != 0x557708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557708u; }
        if (ctx->pc != 0x557708u) { return; }
    }
    ctx->pc = 0x557708u;
label_557708:
    // 0x557708: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x557708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_55770c:
    // 0x55770c: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x55770cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_557710:
    // 0x557710: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x557710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_557714:
    // 0x557714: 0xae300210  sw          $s0, 0x210($s1)
    ctx->pc = 0x557714u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 16));
label_557718:
    // 0x557718: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x557718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55771c:
    // 0x55771c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x55771cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_557720:
    // 0x557720: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x557720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_557724:
    // 0x557724: 0xc08c650  jal         func_231940
label_557728:
    if (ctx->pc == 0x557728u) {
        ctx->pc = 0x557728u;
            // 0x557728: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55772Cu;
        goto label_55772c;
    }
    ctx->pc = 0x557724u;
    SET_GPR_U32(ctx, 31, 0x55772Cu);
    ctx->pc = 0x557728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x557724u;
            // 0x557728: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55772Cu; }
        if (ctx->pc != 0x55772Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55772Cu; }
        if (ctx->pc != 0x55772Cu) { return; }
    }
    ctx->pc = 0x55772Cu;
label_55772c:
    // 0x55772c: 0xc040180  jal         func_100600
label_557730:
    if (ctx->pc == 0x557730u) {
        ctx->pc = 0x557730u;
            // 0x557730: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x557734u;
        goto label_557734;
    }
    ctx->pc = 0x55772Cu;
    SET_GPR_U32(ctx, 31, 0x557734u);
    ctx->pc = 0x557730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55772Cu;
            // 0x557730: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557734u; }
        if (ctx->pc != 0x557734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557734u; }
        if (ctx->pc != 0x557734u) { return; }
    }
    ctx->pc = 0x557734u;
label_557734:
    // 0x557734: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_557738:
    if (ctx->pc == 0x557738u) {
        ctx->pc = 0x557738u;
            // 0x557738: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55773Cu;
        goto label_55773c;
    }
    ctx->pc = 0x557734u;
    {
        const bool branch_taken_0x557734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x557738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x557734u;
            // 0x557738: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x557734) {
            ctx->pc = 0x5577A4u;
            goto label_5577a4;
        }
    }
    ctx->pc = 0x55773Cu;
label_55773c:
    // 0x55773c: 0x8e470050  lw          $a3, 0x50($s2)
    ctx->pc = 0x55773cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_557740:
    // 0x557740: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x557740u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_557744:
    // 0x557744: 0x248421e0  addiu       $a0, $a0, 0x21E0
    ctx->pc = 0x557744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8672));
label_557748:
    // 0x557748: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x557748u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_55774c:
    // 0x55774c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x55774cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_557750:
    // 0x557750: 0x3c023ee6  lui         $v0, 0x3EE6
    ctx->pc = 0x557750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16102 << 16));
label_557754:
    // 0x557754: 0xae040048  sw          $a0, 0x48($s0)
    ctx->pc = 0x557754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 4));
label_557758:
    // 0x557758: 0x3c06c000  lui         $a2, 0xC000
    ctx->pc = 0x557758u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49152 << 16));
label_55775c:
    // 0x55775c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x55775cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_557760:
    // 0x557760: 0x24a5efd0  addiu       $a1, $a1, -0x1030
    ctx->pc = 0x557760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963152));
label_557764:
    // 0x557764: 0xae070024  sw          $a3, 0x24($s0)
    ctx->pc = 0x557764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 7));
label_557768:
    // 0x557768: 0x246385d0  addiu       $v1, $v1, -0x7A30
    ctx->pc = 0x557768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936016));
label_55776c:
    // 0x55776c: 0xae060028  sw          $a2, 0x28($s0)
    ctx->pc = 0x55776cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 6));
label_557770:
    // 0x557770: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x557770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_557774:
    // 0x557774: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x557774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_557778:
    // 0x557778: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x557778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_55777c:
    // 0x55777c: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x55777cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_557780:
    // 0x557780: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x557780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_557784:
    // 0x557784: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x557784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_557788:
    // 0x557788: 0xae05003c  sw          $a1, 0x3C($s0)
    ctx->pc = 0x557788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 5));
label_55778c:
    // 0x55778c: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x55778cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_557790:
    // 0x557790: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x557790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_557794:
    // 0x557794: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x557794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
label_557798:
    // 0x557798: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x557798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_55779c:
    // 0x55779c: 0xc04c968  jal         func_1325A0
label_5577a0:
    if (ctx->pc == 0x5577A0u) {
        ctx->pc = 0x5577A0u;
            // 0x5577a0: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x5577A4u;
        goto label_5577a4;
    }
    ctx->pc = 0x55779Cu;
    SET_GPR_U32(ctx, 31, 0x5577A4u);
    ctx->pc = 0x5577A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55779Cu;
            // 0x5577a0: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5577A4u; }
        if (ctx->pc != 0x5577A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5577A4u; }
        if (ctx->pc != 0x5577A4u) { return; }
    }
    ctx->pc = 0x5577A4u;
label_5577a4:
    // 0x5577a4: 0xae5000a0  sw          $s0, 0xA0($s2)
    ctx->pc = 0x5577a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 16));
label_5577a8:
    // 0x5577a8: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x5577a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_5577ac:
    // 0x5577ac: 0x8e4400b0  lw          $a0, 0xB0($s2)
    ctx->pc = 0x5577acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_5577b0:
    // 0x5577b0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x5577b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5577b4:
    // 0x5577b4: 0x2407fffe  addiu       $a3, $zero, -0x2
    ctx->pc = 0x5577b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_5577b8:
    // 0x5577b8: 0x3c064120  lui         $a2, 0x4120
    ctx->pc = 0x5577b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16672 << 16));
label_5577bc:
    // 0x5577bc: 0x3c054416  lui         $a1, 0x4416
    ctx->pc = 0x5577bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17430 << 16));
label_5577c0:
    // 0x5577c0: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x5577c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_5577c4:
    // 0x5577c4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x5577c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_5577c8:
    // 0x5577c8: 0x34880004  ori         $t0, $a0, 0x4
    ctx->pc = 0x5577c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
label_5577cc:
    // 0x5577cc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x5577ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_5577d0:
    // 0x5577d0: 0xae4800b0  sw          $t0, 0xB0($s2)
    ctx->pc = 0x5577d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 8));
label_5577d4:
    // 0x5577d4: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x5577d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_5577d8:
    // 0x5577d8: 0xa2490064  sb          $t1, 0x64($s2)
    ctx->pc = 0x5577d8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 100), (uint8_t)GPR_U32(ctx, 9));
label_5577dc:
    // 0x5577dc: 0xa2490065  sb          $t1, 0x65($s2)
    ctx->pc = 0x5577dcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 101), (uint8_t)GPR_U32(ctx, 9));
label_5577e0:
    // 0x5577e0: 0x8e080060  lw          $t0, 0x60($s0)
    ctx->pc = 0x5577e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_5577e4:
    // 0x5577e4: 0x1073824  and         $a3, $t0, $a3
    ctx->pc = 0x5577e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
label_5577e8:
    // 0x5577e8: 0xae070060  sw          $a3, 0x60($s0)
    ctx->pc = 0x5577e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 7));
label_5577ec:
    // 0x5577ec: 0xae49008c  sw          $t1, 0x8C($s2)
    ctx->pc = 0x5577ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 9));
label_5577f0:
    // 0x5577f0: 0xae460070  sw          $a2, 0x70($s2)
    ctx->pc = 0x5577f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 6));
label_5577f4:
    // 0x5577f4: 0xae450078  sw          $a1, 0x78($s2)
    ctx->pc = 0x5577f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 5));
label_5577f8:
    // 0x5577f8: 0xae430080  sw          $v1, 0x80($s2)
    ctx->pc = 0x5577f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 3));
label_5577fc:
    // 0x5577fc: 0xa2420068  sb          $v0, 0x68($s2)
    ctx->pc = 0x5577fcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 104), (uint8_t)GPR_U32(ctx, 2));
label_557800:
    // 0x557800: 0xa2400069  sb          $zero, 0x69($s2)
    ctx->pc = 0x557800u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 105), (uint8_t)GPR_U32(ctx, 0));
label_557804:
    // 0x557804: 0xa240006a  sb          $zero, 0x6A($s2)
    ctx->pc = 0x557804u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 106), (uint8_t)GPR_U32(ctx, 0));
label_557808:
    // 0x557808: 0xc040180  jal         func_100600
label_55780c:
    if (ctx->pc == 0x55780Cu) {
        ctx->pc = 0x55780Cu;
            // 0x55780c: 0xa249006b  sb          $t1, 0x6B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 107), (uint8_t)GPR_U32(ctx, 9));
        ctx->pc = 0x557810u;
        goto label_557810;
    }
    ctx->pc = 0x557808u;
    SET_GPR_U32(ctx, 31, 0x557810u);
    ctx->pc = 0x55780Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x557808u;
            // 0x55780c: 0xa249006b  sb          $t1, 0x6B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 107), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557810u; }
        if (ctx->pc != 0x557810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557810u; }
        if (ctx->pc != 0x557810u) { return; }
    }
    ctx->pc = 0x557810u;
label_557810:
    // 0x557810: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x557810u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_557814:
    // 0x557814: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_557818:
    if (ctx->pc == 0x557818u) {
        ctx->pc = 0x557818u;
            // 0x557818: 0x3c02451c  lui         $v0, 0x451C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
        ctx->pc = 0x55781Cu;
        goto label_55781c;
    }
    ctx->pc = 0x557814u;
    {
        const bool branch_taken_0x557814 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x557814) {
            ctx->pc = 0x557818u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x557814u;
            // 0x557818: 0x3c02451c  lui         $v0, 0x451C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x557854u;
            goto label_557854;
        }
    }
    ctx->pc = 0x55781Cu;
label_55781c:
    // 0x55781c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x55781cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_557820:
    // 0x557820: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x557820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_557824:
    // 0x557824: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x557824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_557828:
    // 0x557828: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x557828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_55782c:
    // 0x55782c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x55782cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_557830:
    // 0x557830: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x557830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_557834:
    // 0x557834: 0xc040138  jal         func_1004E0
label_557838:
    if (ctx->pc == 0x557838u) {
        ctx->pc = 0x557838u;
            // 0x557838: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x55783Cu;
        goto label_55783c;
    }
    ctx->pc = 0x557834u;
    SET_GPR_U32(ctx, 31, 0x55783Cu);
    ctx->pc = 0x557838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x557834u;
            // 0x557838: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55783Cu; }
        if (ctx->pc != 0x55783Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55783Cu; }
        if (ctx->pc != 0x55783Cu) { return; }
    }
    ctx->pc = 0x55783Cu;
label_55783c:
    // 0x55783c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x55783cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_557840:
    // 0x557840: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x557840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_557844:
    // 0x557844: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x557844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_557848:
    // 0x557848: 0xc04a576  jal         func_1295D8
label_55784c:
    if (ctx->pc == 0x55784Cu) {
        ctx->pc = 0x55784Cu;
            // 0x55784c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x557850u;
        goto label_557850;
    }
    ctx->pc = 0x557848u;
    SET_GPR_U32(ctx, 31, 0x557850u);
    ctx->pc = 0x55784Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x557848u;
            // 0x55784c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557850u; }
        if (ctx->pc != 0x557850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557850u; }
        if (ctx->pc != 0x557850u) { return; }
    }
    ctx->pc = 0x557850u;
label_557850:
    // 0x557850: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x557850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
label_557854:
    // 0x557854: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x557854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_557858:
    // 0x557858: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x557858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_55785c:
    // 0x55785c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x55785cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_557860:
    // 0x557860: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x557860u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_557864:
    // 0x557864: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x557864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_557868:
    // 0x557868: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x557868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_55786c:
    // 0x55786c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x55786cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_557870:
    // 0x557870: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x557870u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_557874:
    // 0x557874: 0x344601ae  ori         $a2, $v0, 0x1AE
    ctx->pc = 0x557874u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)430);
label_557878:
    // 0x557878: 0xc122cd8  jal         func_48B360
label_55787c:
    if (ctx->pc == 0x55787Cu) {
        ctx->pc = 0x55787Cu;
            // 0x55787c: 0xae5000e4  sw          $s0, 0xE4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 16));
        ctx->pc = 0x557880u;
        goto label_557880;
    }
    ctx->pc = 0x557878u;
    SET_GPR_U32(ctx, 31, 0x557880u);
    ctx->pc = 0x55787Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x557878u;
            // 0x55787c: 0xae5000e4  sw          $s0, 0xE4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557880u; }
        if (ctx->pc != 0x557880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557880u; }
        if (ctx->pc != 0x557880u) { return; }
    }
    ctx->pc = 0x557880u;
label_557880:
    // 0x557880: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x557880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_557884:
    // 0x557884: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x557884u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_557888:
    // 0x557888: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x557888u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_55788c:
    // 0x55788c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x55788cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_557890:
    // 0x557890: 0x3e00008  jr          $ra
label_557894:
    if (ctx->pc == 0x557894u) {
        ctx->pc = 0x557894u;
            // 0x557894: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x557898u;
        goto label_557898;
    }
    ctx->pc = 0x557890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x557894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x557890u;
            // 0x557894: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x557898u;
label_557898:
    // 0x557898: 0x0  nop
    ctx->pc = 0x557898u;
    // NOP
label_55789c:
    // 0x55789c: 0x0  nop
    ctx->pc = 0x55789cu;
    // NOP
label_5578a0:
    // 0x5578a0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x5578a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_5578a4:
    // 0x5578a4: 0xa08300cc  sb          $v1, 0xCC($a0)
    ctx->pc = 0x5578a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 204), (uint8_t)GPR_U32(ctx, 3));
label_5578a8:
    // 0x5578a8: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x5578a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
label_5578ac:
    // 0x5578ac: 0xac8300c4  sw          $v1, 0xC4($a0)
    ctx->pc = 0x5578acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 3));
label_5578b0:
    // 0x5578b0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x5578b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_5578b4:
    // 0x5578b4: 0x8c658a08  lw          $a1, -0x75F8($v1)
    ctx->pc = 0x5578b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_5578b8:
    // 0x5578b8: 0x80a5007a  lb          $a1, 0x7A($a1)
    ctx->pc = 0x5578b8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 122)));
label_5578bc:
    // 0x5578bc: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x5578bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_5578c0:
    // 0x5578c0: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x5578c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_5578c4:
    // 0x5578c4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x5578c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_5578c8:
    // 0x5578c8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x5578c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_5578cc:
    // 0x5578cc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x5578ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_5578d0:
    // 0x5578d0: 0x3e00008  jr          $ra
label_5578d4:
    if (ctx->pc == 0x5578D4u) {
        ctx->pc = 0x5578D4u;
            // 0x5578d4: 0xac8300c8  sw          $v1, 0xC8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 3));
        ctx->pc = 0x5578D8u;
        goto label_5578d8;
    }
    ctx->pc = 0x5578D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5578D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5578D0u;
            // 0x5578d4: 0xac8300c8  sw          $v1, 0xC8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5578D8u;
label_5578d8:
    // 0x5578d8: 0x0  nop
    ctx->pc = 0x5578d8u;
    // NOP
label_5578dc:
    // 0x5578dc: 0x0  nop
    ctx->pc = 0x5578dcu;
    // NOP
label_5578e0:
    // 0x5578e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x5578e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_5578e4:
    // 0x5578e4: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x5578e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_5578e8:
    // 0x5578e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x5578e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_5578ec:
    // 0x5578ec: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x5578ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_5578f0:
    // 0x5578f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x5578f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_5578f4:
    // 0x5578f4: 0x24c6f048  addiu       $a2, $a2, -0xFB8
    ctx->pc = 0x5578f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963272));
label_5578f8:
    // 0x5578f8: 0xc4a202c0  lwc1        $f2, 0x2C0($a1)
    ctx->pc = 0x5578f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_5578fc:
    // 0x5578fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x5578fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_557900:
    // 0x557900: 0xc4a102c4  lwc1        $f1, 0x2C4($a1)
    ctx->pc = 0x557900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_557904:
    // 0x557904: 0xc4a002c8  lwc1        $f0, 0x2C8($a1)
    ctx->pc = 0x557904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_557908:
    // 0x557908: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x557908u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_55790c:
    // 0x55790c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x55790cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_557910:
    // 0x557910: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x557910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_557914:
    // 0x557914: 0xc4a20300  lwc1        $f2, 0x300($a1)
    ctx->pc = 0x557914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_557918:
    // 0x557918: 0xc4a10304  lwc1        $f1, 0x304($a1)
    ctx->pc = 0x557918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55791c:
    // 0x55791c: 0xc4a00308  lwc1        $f0, 0x308($a1)
    ctx->pc = 0x55791cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_557920:
    // 0x557920: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x557920u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_557924:
    // 0x557924: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x557924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_557928:
    // 0x557928: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x557928u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_55792c:
    // 0x55792c: 0xc04cafc  jal         func_132BF0
label_557930:
    if (ctx->pc == 0x557930u) {
        ctx->pc = 0x557930u;
            // 0x557930: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->pc = 0x557934u;
        goto label_557934;
    }
    ctx->pc = 0x55792Cu;
    SET_GPR_U32(ctx, 31, 0x557934u);
    ctx->pc = 0x557930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55792Cu;
            // 0x557930: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132BF0u;
    if (runtime->hasFunction(0x132BF0u)) {
        auto targetFn = runtime->lookupFunction(0x132BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557934u; }
        if (ctx->pc != 0x557934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132BF0_0x132bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557934u; }
        if (ctx->pc != 0x557934u) { return; }
    }
    ctx->pc = 0x557934u;
label_557934:
    // 0x557934: 0xc040180  jal         func_100600
label_557938:
    if (ctx->pc == 0x557938u) {
        ctx->pc = 0x557938u;
            // 0x557938: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->pc = 0x55793Cu;
        goto label_55793c;
    }
    ctx->pc = 0x557934u;
    SET_GPR_U32(ctx, 31, 0x55793Cu);
    ctx->pc = 0x557938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x557934u;
            // 0x557938: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55793Cu; }
        if (ctx->pc != 0x55793Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55793Cu; }
        if (ctx->pc != 0x55793Cu) { return; }
    }
    ctx->pc = 0x55793Cu;
label_55793c:
    // 0x55793c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x55793cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_557940:
    // 0x557940: 0x5080002a  beql        $a0, $zero, . + 4 + (0x2A << 2)
label_557944:
    if (ctx->pc == 0x557944u) {
        ctx->pc = 0x557944u;
            // 0x557944: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x557948u;
        goto label_557948;
    }
    ctx->pc = 0x557940u;
    {
        const bool branch_taken_0x557940 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x557940) {
            ctx->pc = 0x557944u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x557940u;
            // 0x557944: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5579ECu;
            goto label_5579ec;
        }
    }
    ctx->pc = 0x557948u;
label_557948:
    // 0x557948: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x557948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_55794c:
    // 0x55794c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x55794cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_557950:
    // 0x557950: 0xc441f088  lwc1        $f1, -0xF78($v0)
    ctx->pc = 0x557950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294963336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_557954:
    // 0x557954: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x557954u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_557958:
    // 0x557958: 0x0  nop
    ctx->pc = 0x557958u;
    // NOP
label_55795c:
    // 0x55795c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x55795cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_557960:
    // 0x557960: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_557964:
    if (ctx->pc == 0x557964u) {
        ctx->pc = 0x557964u;
            // 0x557964: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x557968u;
        goto label_557968;
    }
    ctx->pc = 0x557960u;
    {
        const bool branch_taken_0x557960 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x557960) {
            ctx->pc = 0x557964u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x557960u;
            // 0x557964: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x557978u;
            goto label_557978;
        }
    }
    ctx->pc = 0x557968u;
label_557968:
    // 0x557968: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x557968u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_55796c:
    // 0x55796c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x55796cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_557970:
    // 0x557970: 0x10000006  b           . + 4 + (0x6 << 2)
label_557974:
    if (ctx->pc == 0x557974u) {
        ctx->pc = 0x557978u;
        goto label_557978;
    }
    ctx->pc = 0x557970u;
    {
        const bool branch_taken_0x557970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x557970) {
            ctx->pc = 0x55798Cu;
            goto label_55798c;
        }
    }
    ctx->pc = 0x557978u;
label_557978:
    // 0x557978: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x557978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_55797c:
    // 0x55797c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x55797cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_557980:
    // 0x557980: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x557980u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_557984:
    // 0x557984: 0x0  nop
    ctx->pc = 0x557984u;
    // NOP
label_557988:
    // 0x557988: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x557988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_55798c:
    // 0x55798c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x55798cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_557990:
    // 0x557990: 0x3c090067  lui         $t1, 0x67
    ctx->pc = 0x557990u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)103 << 16));
label_557994:
    // 0x557994: 0x2442f058  addiu       $v0, $v0, -0xFA8
    ctx->pc = 0x557994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963288));
label_557998:
    // 0x557998: 0x3c0a0067  lui         $t2, 0x67
    ctx->pc = 0x557998u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)103 << 16));
label_55799c:
    // 0x55799c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x55799cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_5579a0:
    // 0x5579a0: 0x26070890  addiu       $a3, $s0, 0x890
    ctx->pc = 0x5579a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_5579a4:
    // 0x5579a4: 0x3c02c47a  lui         $v0, 0xC47A
    ctx->pc = 0x5579a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50298 << 16));
label_5579a8:
    // 0x5579a8: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x5579a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_5579ac:
    // 0x5579ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x5579acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_5579b0:
    // 0x5579b0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x5579b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_5579b4:
    // 0x5579b4: 0x3c02bf33  lui         $v0, 0xBF33
    ctx->pc = 0x5579b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48947 << 16));
label_5579b8:
    // 0x5579b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x5579b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5579bc:
    // 0x5579bc: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x5579bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_5579c0:
    // 0x5579c0: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x5579c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_5579c4:
    // 0x5579c4: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x5579c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_5579c8:
    // 0x5579c8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x5579c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_5579cc:
    // 0x5579cc: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x5579ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_5579d0:
    // 0x5579d0: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x5579d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_5579d4:
    // 0x5579d4: 0x2529f068  addiu       $t1, $t1, -0xF98
    ctx->pc = 0x5579d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294963304));
label_5579d8:
    // 0x5579d8: 0x254af078  addiu       $t2, $t2, -0xF88
    ctx->pc = 0x5579d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294963320));
label_5579dc:
    // 0x5579dc: 0x27ab0030  addiu       $t3, $sp, 0x30
    ctx->pc = 0x5579dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_5579e0:
    // 0x5579e0: 0xc0db488  jal         func_36D220
label_5579e4:
    if (ctx->pc == 0x5579E4u) {
        ctx->pc = 0x5579E4u;
            // 0x5579e4: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x5579E8u;
        goto label_5579e8;
    }
    ctx->pc = 0x5579E0u;
    SET_GPR_U32(ctx, 31, 0x5579E8u);
    ctx->pc = 0x5579E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5579E0u;
            // 0x5579e4: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x36D220u;
    if (runtime->hasFunction(0x36D220u)) {
        auto targetFn = runtime->lookupFunction(0x36D220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5579E8u; }
        if (ctx->pc != 0x5579E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036D220_0x36d220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5579E8u; }
        if (ctx->pc != 0x5579E8u) { return; }
    }
    ctx->pc = 0x5579E8u;
label_5579e8:
    // 0x5579e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5579e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_5579ec:
    // 0x5579ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x5579ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5579f0:
    // 0x5579f0: 0x3e00008  jr          $ra
label_5579f4:
    if (ctx->pc == 0x5579F4u) {
        ctx->pc = 0x5579F4u;
            // 0x5579f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x5579F8u;
        goto label_5579f8;
    }
    ctx->pc = 0x5579F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5579F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5579F0u;
            // 0x5579f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5579F8u;
label_5579f8:
    // 0x5579f8: 0x0  nop
    ctx->pc = 0x5579f8u;
    // NOP
label_5579fc:
    // 0x5579fc: 0x0  nop
    ctx->pc = 0x5579fcu;
    // NOP
label_557a00:
    // 0x557a00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x557a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_557a04:
    // 0x557a04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x557a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_557a08:
    // 0x557a08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x557a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_557a0c:
    // 0x557a0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x557a0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_557a10:
    // 0x557a10: 0xc04ab66  jal         func_12AD98
label_557a14:
    if (ctx->pc == 0x557A14u) {
        ctx->pc = 0x557A14u;
            // 0x557a14: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x557A18u;
        goto label_557a18;
    }
    ctx->pc = 0x557A10u;
    SET_GPR_U32(ctx, 31, 0x557A18u);
    ctx->pc = 0x557A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x557A10u;
            // 0x557a14: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557A18u; }
        if (ctx->pc != 0x557A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557A18u; }
        if (ctx->pc != 0x557A18u) { return; }
    }
    ctx->pc = 0x557A18u;
label_557a18:
    // 0x557a18: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x557a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_557a1c:
    // 0x557a1c: 0xc04ab66  jal         func_12AD98
label_557a20:
    if (ctx->pc == 0x557A20u) {
        ctx->pc = 0x557A20u;
            // 0x557a20: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x557A24u;
        goto label_557a24;
    }
    ctx->pc = 0x557A1Cu;
    SET_GPR_U32(ctx, 31, 0x557A24u);
    ctx->pc = 0x557A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x557A1Cu;
            // 0x557a20: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557A24u; }
        if (ctx->pc != 0x557A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557A24u; }
        if (ctx->pc != 0x557A24u) { return; }
    }
    ctx->pc = 0x557A24u;
label_557a24:
    // 0x557a24: 0x501825  or          $v1, $v0, $s0
    ctx->pc = 0x557a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_557a28:
    // 0x557a28: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x557a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_557a2c:
    // 0x557a2c: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_557a30:
    if (ctx->pc == 0x557A30u) {
        ctx->pc = 0x557A30u;
            // 0x557a30: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x557A34u;
        goto label_557a34;
    }
    ctx->pc = 0x557A2Cu;
    {
        const bool branch_taken_0x557a2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x557a2c) {
            ctx->pc = 0x557A30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x557A2Cu;
            // 0x557a30: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x557A48u;
            goto label_557a48;
        }
    }
    ctx->pc = 0x557A34u;
label_557a34:
    // 0x557a34: 0x8e2400e4  lw          $a0, 0xE4($s1)
    ctx->pc = 0x557a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
label_557a38:
    // 0x557a38: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x557a38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_557a3c:
    // 0x557a3c: 0xc122d2c  jal         func_48B4B0
label_557a40:
    if (ctx->pc == 0x557A40u) {
        ctx->pc = 0x557A40u;
            // 0x557a40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x557A44u;
        goto label_557a44;
    }
    ctx->pc = 0x557A3Cu;
    SET_GPR_U32(ctx, 31, 0x557A44u);
    ctx->pc = 0x557A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x557A3Cu;
            // 0x557a40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557A44u; }
        if (ctx->pc != 0x557A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557A44u; }
        if (ctx->pc != 0x557A44u) { return; }
    }
    ctx->pc = 0x557A44u;
label_557a44:
    // 0x557a44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x557a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_557a48:
    // 0x557a48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x557a48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_557a4c:
    // 0x557a4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x557a4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_557a50:
    // 0x557a50: 0x3e00008  jr          $ra
label_557a54:
    if (ctx->pc == 0x557A54u) {
        ctx->pc = 0x557A54u;
            // 0x557a54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x557A58u;
        goto label_557a58;
    }
    ctx->pc = 0x557A50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x557A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x557A50u;
            // 0x557a54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x557A58u;
label_557a58:
    // 0x557a58: 0x0  nop
    ctx->pc = 0x557a58u;
    // NOP
label_557a5c:
    // 0x557a5c: 0x0  nop
    ctx->pc = 0x557a5cu;
    // NOP
label_557a60:
    // 0x557a60: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x557a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_557a64:
    // 0x557a64: 0x80ba938  j           func_2EA4E0
label_557a68:
    if (ctx->pc == 0x557A68u) {
        ctx->pc = 0x557A68u;
            // 0x557a68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x557A6Cu;
        goto label_557a6c;
    }
    ctx->pc = 0x557A64u;
    ctx->pc = 0x557A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x557A64u;
            // 0x557a68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EA4E0u;
    if (runtime->hasFunction(0x2EA4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2EA4E0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002EA4E0_0x2ea4e0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x557A6Cu;
label_557a6c:
    // 0x557a6c: 0x0  nop
    ctx->pc = 0x557a6cu;
    // NOP
label_557a70:
    // 0x557a70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x557a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_557a74:
    // 0x557a74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x557a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_557a78:
    // 0x557a78: 0xc4ac0000  lwc1        $f12, 0x0($a1)
    ctx->pc = 0x557a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_557a7c:
    // 0x557a7c: 0xc4ad0004  lwc1        $f13, 0x4($a1)
    ctx->pc = 0x557a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_557a80:
    // 0x557a80: 0xc4ae0008  lwc1        $f14, 0x8($a1)
    ctx->pc = 0x557a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_557a84:
    // 0x557a84: 0xc04cbd8  jal         func_132F60
label_557a88:
    if (ctx->pc == 0x557A88u) {
        ctx->pc = 0x557A88u;
            // 0x557a88: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x557A8Cu;
        goto label_557a8c;
    }
    ctx->pc = 0x557A84u;
    SET_GPR_U32(ctx, 31, 0x557A8Cu);
    ctx->pc = 0x557A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x557A84u;
            // 0x557a88: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557A8Cu; }
        if (ctx->pc != 0x557A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557A8Cu; }
        if (ctx->pc != 0x557A8Cu) { return; }
    }
    ctx->pc = 0x557A8Cu;
label_557a8c:
    // 0x557a8c: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x557a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_557a90:
    // 0x557a90: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x557a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_557a94:
    // 0x557a94: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x557a94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_557a98:
    // 0x557a98: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x557a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_557a9c:
    // 0x557a9c: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x557a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_557aa0:
    // 0x557aa0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x557aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_557aa4:
    // 0x557aa4: 0xc7ae0018  lwc1        $f14, 0x18($sp)
    ctx->pc = 0x557aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_557aa8:
    // 0x557aa8: 0x46007c06  mov.s       $f16, $f15
    ctx->pc = 0x557aa8u;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
label_557aac:
    // 0x557aac: 0xc0bafb8  jal         func_2EBEE0
label_557ab0:
    if (ctx->pc == 0x557AB0u) {
        ctx->pc = 0x557AB0u;
            // 0x557ab0: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->pc = 0x557AB4u;
        goto label_557ab4;
    }
    ctx->pc = 0x557AACu;
    SET_GPR_U32(ctx, 31, 0x557AB4u);
    ctx->pc = 0x557AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x557AACu;
            // 0x557ab0: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557AB4u; }
        if (ctx->pc != 0x557AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557AB4u; }
        if (ctx->pc != 0x557AB4u) { return; }
    }
    ctx->pc = 0x557AB4u;
label_557ab4:
    // 0x557ab4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x557ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_557ab8:
    // 0x557ab8: 0x3e00008  jr          $ra
label_557abc:
    if (ctx->pc == 0x557ABCu) {
        ctx->pc = 0x557ABCu;
            // 0x557abc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x557AC0u;
        goto label_557ac0;
    }
    ctx->pc = 0x557AB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x557ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x557AB8u;
            // 0x557abc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x557AC0u;
label_557ac0:
    // 0x557ac0: 0x8c8500e0  lw          $a1, 0xE0($a0)
    ctx->pc = 0x557ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
label_557ac4:
    // 0x557ac4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x557ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_557ac8:
    // 0x557ac8: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_557acc:
    if (ctx->pc == 0x557ACCu) {
        ctx->pc = 0x557AD0u;
        goto label_557ad0;
    }
    ctx->pc = 0x557AC8u;
    {
        const bool branch_taken_0x557ac8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x557ac8) {
            ctx->pc = 0x557AD8u;
            goto label_557ad8;
        }
    }
    ctx->pc = 0x557AD0u;
label_557ad0:
    // 0x557ad0: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
label_557ad4:
    if (ctx->pc == 0x557AD4u) {
        ctx->pc = 0x557AD4u;
            // 0x557ad4: 0xac8300e0  sw          $v1, 0xE0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 3));
        ctx->pc = 0x557AD8u;
        goto label_557ad8;
    }
    ctx->pc = 0x557AD0u;
    {
        const bool branch_taken_0x557ad0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x557ad0) {
            ctx->pc = 0x557AD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x557AD0u;
            // 0x557ad4: 0xac8300e0  sw          $v1, 0xE0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x557AD8u;
            goto label_557ad8;
        }
    }
    ctx->pc = 0x557AD8u;
label_557ad8:
    // 0x557ad8: 0x3e00008  jr          $ra
label_557adc:
    if (ctx->pc == 0x557ADCu) {
        ctx->pc = 0x557AE0u;
        goto label_557ae0;
    }
    ctx->pc = 0x557AD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x557AE0u;
label_557ae0:
    // 0x557ae0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x557ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_557ae4:
    // 0x557ae4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x557ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_557ae8:
    // 0x557ae8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x557ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_557aec:
    // 0x557aec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x557aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_557af0:
    // 0x557af0: 0x8c900050  lw          $s0, 0x50($a0)
    ctx->pc = 0x557af0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_557af4:
    // 0x557af4: 0xc0e393c  jal         func_38E4F0
label_557af8:
    if (ctx->pc == 0x557AF8u) {
        ctx->pc = 0x557AF8u;
            // 0x557af8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x557AFCu;
        goto label_557afc;
    }
    ctx->pc = 0x557AF4u;
    SET_GPR_U32(ctx, 31, 0x557AFCu);
    ctx->pc = 0x557AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x557AF4u;
            // 0x557af8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557AFCu; }
        if (ctx->pc != 0x557AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557AFCu; }
        if (ctx->pc != 0x557AFCu) { return; }
    }
    ctx->pc = 0x557AFCu;
label_557afc:
    // 0x557afc: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x557afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_557b00:
    // 0x557b00: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x557b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_557b04:
    // 0x557b04: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x557b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_557b08:
    // 0x557b08: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x557b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_557b0c:
    // 0x557b0c: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x557b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_557b10:
    // 0x557b10: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x557b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_557b14:
    // 0x557b14: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x557b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_557b18:
    // 0x557b18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x557b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_557b1c:
    // 0x557b1c: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x557b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_557b20:
    // 0x557b20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x557b20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_557b24:
    // 0x557b24: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x557b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_557b28:
    // 0x557b28: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x557b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_557b2c:
    // 0x557b2c: 0xc08bff0  jal         func_22FFC0
label_557b30:
    if (ctx->pc == 0x557B30u) {
        ctx->pc = 0x557B30u;
            // 0x557b30: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x557B34u;
        goto label_557b34;
    }
    ctx->pc = 0x557B2Cu;
    SET_GPR_U32(ctx, 31, 0x557B34u);
    ctx->pc = 0x557B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x557B2Cu;
            // 0x557b30: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557B34u; }
        if (ctx->pc != 0x557B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557B34u; }
        if (ctx->pc != 0x557B34u) { return; }
    }
    ctx->pc = 0x557B34u;
label_557b34:
    // 0x557b34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x557b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_557b38:
    // 0x557b38: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x557b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_557b3c:
    // 0x557b3c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x557b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_557b40:
    // 0x557b40: 0xc08914c  jal         func_224530
label_557b44:
    if (ctx->pc == 0x557B44u) {
        ctx->pc = 0x557B44u;
            // 0x557b44: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x557B48u;
        goto label_557b48;
    }
    ctx->pc = 0x557B40u;
    SET_GPR_U32(ctx, 31, 0x557B48u);
    ctx->pc = 0x557B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x557B40u;
            // 0x557b44: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557B48u; }
        if (ctx->pc != 0x557B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557B48u; }
        if (ctx->pc != 0x557B48u) { return; }
    }
    ctx->pc = 0x557B48u;
label_557b48:
    // 0x557b48: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x557b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_557b4c:
    // 0x557b4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x557b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_557b50:
    // 0x557b50: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x557b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_557b54:
    // 0x557b54: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x557b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_557b58:
    // 0x557b58: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x557b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_557b5c:
    // 0x557b5c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x557b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_557b60:
    // 0x557b60: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x557b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_557b64:
    // 0x557b64: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x557b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_557b68:
    // 0x557b68: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x557b68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_557b6c:
    // 0x557b6c: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x557b6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_557b70:
    // 0x557b70: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x557b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_557b74:
    // 0x557b74: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x557b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_557b78:
    // 0x557b78: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x557b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_557b7c:
    // 0x557b7c: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x557b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_557b80:
    // 0x557b80: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x557b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_557b84:
    // 0x557b84: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x557b84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_557b88:
    // 0x557b88: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x557b88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_557b8c:
    // 0x557b8c: 0xc0892b0  jal         func_224AC0
label_557b90:
    if (ctx->pc == 0x557B90u) {
        ctx->pc = 0x557B90u;
            // 0x557b90: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->pc = 0x557B94u;
        goto label_557b94;
    }
    ctx->pc = 0x557B8Cu;
    SET_GPR_U32(ctx, 31, 0x557B94u);
    ctx->pc = 0x557B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x557B8Cu;
            // 0x557b90: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557B94u; }
        if (ctx->pc != 0x557B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557B94u; }
        if (ctx->pc != 0x557B94u) { return; }
    }
    ctx->pc = 0x557B94u;
label_557b94:
    // 0x557b94: 0xc088b74  jal         func_222DD0
label_557b98:
    if (ctx->pc == 0x557B98u) {
        ctx->pc = 0x557B98u;
            // 0x557b98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x557B9Cu;
        goto label_557b9c;
    }
    ctx->pc = 0x557B94u;
    SET_GPR_U32(ctx, 31, 0x557B9Cu);
    ctx->pc = 0x557B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x557B94u;
            // 0x557b98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557B9Cu; }
        if (ctx->pc != 0x557B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557B9Cu; }
        if (ctx->pc != 0x557B9Cu) { return; }
    }
    ctx->pc = 0x557B9Cu;
label_557b9c:
    // 0x557b9c: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x557b9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_557ba0:
    // 0x557ba0: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x557ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_557ba4:
    // 0x557ba4: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x557ba4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_557ba8:
    // 0x557ba8: 0x320f809  jalr        $t9
label_557bac:
    if (ctx->pc == 0x557BACu) {
        ctx->pc = 0x557BACu;
            // 0x557bac: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x557BB0u;
        goto label_557bb0;
    }
    ctx->pc = 0x557BA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x557BB0u);
        ctx->pc = 0x557BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x557BA8u;
            // 0x557bac: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x557BB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x557BB0u; }
            if (ctx->pc != 0x557BB0u) { return; }
        }
        }
    }
    ctx->pc = 0x557BB0u;
label_557bb0:
    // 0x557bb0: 0xc088b74  jal         func_222DD0
label_557bb4:
    if (ctx->pc == 0x557BB4u) {
        ctx->pc = 0x557BB4u;
            // 0x557bb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x557BB8u;
        goto label_557bb8;
    }
    ctx->pc = 0x557BB0u;
    SET_GPR_U32(ctx, 31, 0x557BB8u);
    ctx->pc = 0x557BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x557BB0u;
            // 0x557bb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557BB8u; }
        if (ctx->pc != 0x557BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557BB8u; }
        if (ctx->pc != 0x557BB8u) { return; }
    }
    ctx->pc = 0x557BB8u;
label_557bb8:
    // 0x557bb8: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x557bb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_557bbc:
    // 0x557bbc: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x557bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_557bc0:
    // 0x557bc0: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x557bc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_557bc4:
    // 0x557bc4: 0x320f809  jalr        $t9
label_557bc8:
    if (ctx->pc == 0x557BC8u) {
        ctx->pc = 0x557BC8u;
            // 0x557bc8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x557BCCu;
        goto label_557bcc;
    }
    ctx->pc = 0x557BC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x557BCCu);
        ctx->pc = 0x557BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x557BC4u;
            // 0x557bc8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x557BCCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x557BCCu; }
            if (ctx->pc != 0x557BCCu) { return; }
        }
        }
    }
    ctx->pc = 0x557BCCu;
label_557bcc:
    // 0x557bcc: 0x3c0443d1  lui         $a0, 0x43D1
    ctx->pc = 0x557bccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17361 << 16));
label_557bd0:
    // 0x557bd0: 0x3c033e32  lui         $v1, 0x3E32
    ctx->pc = 0x557bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15922 << 16));
label_557bd4:
    // 0x557bd4: 0x34847084  ori         $a0, $a0, 0x7084
    ctx->pc = 0x557bd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28804);
label_557bd8:
    // 0x557bd8: 0x3463b8c2  ori         $v1, $v1, 0xB8C2
    ctx->pc = 0x557bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47298);
label_557bdc:
    // 0x557bdc: 0xae040154  sw          $a0, 0x154($s0)
    ctx->pc = 0x557bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 4));
label_557be0:
    // 0x557be0: 0xae030158  sw          $v1, 0x158($s0)
    ctx->pc = 0x557be0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 3));
label_557be4:
    // 0x557be4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x557be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_557be8:
    // 0x557be8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x557be8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_557bec:
    // 0x557bec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x557becu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_557bf0:
    // 0x557bf0: 0x3e00008  jr          $ra
label_557bf4:
    if (ctx->pc == 0x557BF4u) {
        ctx->pc = 0x557BF4u;
            // 0x557bf4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x557BF8u;
        goto label_557bf8;
    }
    ctx->pc = 0x557BF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x557BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x557BF0u;
            // 0x557bf4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x557BF8u;
label_557bf8:
    // 0x557bf8: 0x0  nop
    ctx->pc = 0x557bf8u;
    // NOP
label_557bfc:
    // 0x557bfc: 0x0  nop
    ctx->pc = 0x557bfcu;
    // NOP
}
