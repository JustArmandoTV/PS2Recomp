#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002571C0
// Address: 0x2571c0 - 0x2592c0
void sub_002571C0_0x2571c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002571C0_0x2571c0");
#endif

    switch (ctx->pc) {
        case 0x2571c0u: goto label_2571c0;
        case 0x2571c4u: goto label_2571c4;
        case 0x2571c8u: goto label_2571c8;
        case 0x2571ccu: goto label_2571cc;
        case 0x2571d0u: goto label_2571d0;
        case 0x2571d4u: goto label_2571d4;
        case 0x2571d8u: goto label_2571d8;
        case 0x2571dcu: goto label_2571dc;
        case 0x2571e0u: goto label_2571e0;
        case 0x2571e4u: goto label_2571e4;
        case 0x2571e8u: goto label_2571e8;
        case 0x2571ecu: goto label_2571ec;
        case 0x2571f0u: goto label_2571f0;
        case 0x2571f4u: goto label_2571f4;
        case 0x2571f8u: goto label_2571f8;
        case 0x2571fcu: goto label_2571fc;
        case 0x257200u: goto label_257200;
        case 0x257204u: goto label_257204;
        case 0x257208u: goto label_257208;
        case 0x25720cu: goto label_25720c;
        case 0x257210u: goto label_257210;
        case 0x257214u: goto label_257214;
        case 0x257218u: goto label_257218;
        case 0x25721cu: goto label_25721c;
        case 0x257220u: goto label_257220;
        case 0x257224u: goto label_257224;
        case 0x257228u: goto label_257228;
        case 0x25722cu: goto label_25722c;
        case 0x257230u: goto label_257230;
        case 0x257234u: goto label_257234;
        case 0x257238u: goto label_257238;
        case 0x25723cu: goto label_25723c;
        case 0x257240u: goto label_257240;
        case 0x257244u: goto label_257244;
        case 0x257248u: goto label_257248;
        case 0x25724cu: goto label_25724c;
        case 0x257250u: goto label_257250;
        case 0x257254u: goto label_257254;
        case 0x257258u: goto label_257258;
        case 0x25725cu: goto label_25725c;
        case 0x257260u: goto label_257260;
        case 0x257264u: goto label_257264;
        case 0x257268u: goto label_257268;
        case 0x25726cu: goto label_25726c;
        case 0x257270u: goto label_257270;
        case 0x257274u: goto label_257274;
        case 0x257278u: goto label_257278;
        case 0x25727cu: goto label_25727c;
        case 0x257280u: goto label_257280;
        case 0x257284u: goto label_257284;
        case 0x257288u: goto label_257288;
        case 0x25728cu: goto label_25728c;
        case 0x257290u: goto label_257290;
        case 0x257294u: goto label_257294;
        case 0x257298u: goto label_257298;
        case 0x25729cu: goto label_25729c;
        case 0x2572a0u: goto label_2572a0;
        case 0x2572a4u: goto label_2572a4;
        case 0x2572a8u: goto label_2572a8;
        case 0x2572acu: goto label_2572ac;
        case 0x2572b0u: goto label_2572b0;
        case 0x2572b4u: goto label_2572b4;
        case 0x2572b8u: goto label_2572b8;
        case 0x2572bcu: goto label_2572bc;
        case 0x2572c0u: goto label_2572c0;
        case 0x2572c4u: goto label_2572c4;
        case 0x2572c8u: goto label_2572c8;
        case 0x2572ccu: goto label_2572cc;
        case 0x2572d0u: goto label_2572d0;
        case 0x2572d4u: goto label_2572d4;
        case 0x2572d8u: goto label_2572d8;
        case 0x2572dcu: goto label_2572dc;
        case 0x2572e0u: goto label_2572e0;
        case 0x2572e4u: goto label_2572e4;
        case 0x2572e8u: goto label_2572e8;
        case 0x2572ecu: goto label_2572ec;
        case 0x2572f0u: goto label_2572f0;
        case 0x2572f4u: goto label_2572f4;
        case 0x2572f8u: goto label_2572f8;
        case 0x2572fcu: goto label_2572fc;
        case 0x257300u: goto label_257300;
        case 0x257304u: goto label_257304;
        case 0x257308u: goto label_257308;
        case 0x25730cu: goto label_25730c;
        case 0x257310u: goto label_257310;
        case 0x257314u: goto label_257314;
        case 0x257318u: goto label_257318;
        case 0x25731cu: goto label_25731c;
        case 0x257320u: goto label_257320;
        case 0x257324u: goto label_257324;
        case 0x257328u: goto label_257328;
        case 0x25732cu: goto label_25732c;
        case 0x257330u: goto label_257330;
        case 0x257334u: goto label_257334;
        case 0x257338u: goto label_257338;
        case 0x25733cu: goto label_25733c;
        case 0x257340u: goto label_257340;
        case 0x257344u: goto label_257344;
        case 0x257348u: goto label_257348;
        case 0x25734cu: goto label_25734c;
        case 0x257350u: goto label_257350;
        case 0x257354u: goto label_257354;
        case 0x257358u: goto label_257358;
        case 0x25735cu: goto label_25735c;
        case 0x257360u: goto label_257360;
        case 0x257364u: goto label_257364;
        case 0x257368u: goto label_257368;
        case 0x25736cu: goto label_25736c;
        case 0x257370u: goto label_257370;
        case 0x257374u: goto label_257374;
        case 0x257378u: goto label_257378;
        case 0x25737cu: goto label_25737c;
        case 0x257380u: goto label_257380;
        case 0x257384u: goto label_257384;
        case 0x257388u: goto label_257388;
        case 0x25738cu: goto label_25738c;
        case 0x257390u: goto label_257390;
        case 0x257394u: goto label_257394;
        case 0x257398u: goto label_257398;
        case 0x25739cu: goto label_25739c;
        case 0x2573a0u: goto label_2573a0;
        case 0x2573a4u: goto label_2573a4;
        case 0x2573a8u: goto label_2573a8;
        case 0x2573acu: goto label_2573ac;
        case 0x2573b0u: goto label_2573b0;
        case 0x2573b4u: goto label_2573b4;
        case 0x2573b8u: goto label_2573b8;
        case 0x2573bcu: goto label_2573bc;
        case 0x2573c0u: goto label_2573c0;
        case 0x2573c4u: goto label_2573c4;
        case 0x2573c8u: goto label_2573c8;
        case 0x2573ccu: goto label_2573cc;
        case 0x2573d0u: goto label_2573d0;
        case 0x2573d4u: goto label_2573d4;
        case 0x2573d8u: goto label_2573d8;
        case 0x2573dcu: goto label_2573dc;
        case 0x2573e0u: goto label_2573e0;
        case 0x2573e4u: goto label_2573e4;
        case 0x2573e8u: goto label_2573e8;
        case 0x2573ecu: goto label_2573ec;
        case 0x2573f0u: goto label_2573f0;
        case 0x2573f4u: goto label_2573f4;
        case 0x2573f8u: goto label_2573f8;
        case 0x2573fcu: goto label_2573fc;
        case 0x257400u: goto label_257400;
        case 0x257404u: goto label_257404;
        case 0x257408u: goto label_257408;
        case 0x25740cu: goto label_25740c;
        case 0x257410u: goto label_257410;
        case 0x257414u: goto label_257414;
        case 0x257418u: goto label_257418;
        case 0x25741cu: goto label_25741c;
        case 0x257420u: goto label_257420;
        case 0x257424u: goto label_257424;
        case 0x257428u: goto label_257428;
        case 0x25742cu: goto label_25742c;
        case 0x257430u: goto label_257430;
        case 0x257434u: goto label_257434;
        case 0x257438u: goto label_257438;
        case 0x25743cu: goto label_25743c;
        case 0x257440u: goto label_257440;
        case 0x257444u: goto label_257444;
        case 0x257448u: goto label_257448;
        case 0x25744cu: goto label_25744c;
        case 0x257450u: goto label_257450;
        case 0x257454u: goto label_257454;
        case 0x257458u: goto label_257458;
        case 0x25745cu: goto label_25745c;
        case 0x257460u: goto label_257460;
        case 0x257464u: goto label_257464;
        case 0x257468u: goto label_257468;
        case 0x25746cu: goto label_25746c;
        case 0x257470u: goto label_257470;
        case 0x257474u: goto label_257474;
        case 0x257478u: goto label_257478;
        case 0x25747cu: goto label_25747c;
        case 0x257480u: goto label_257480;
        case 0x257484u: goto label_257484;
        case 0x257488u: goto label_257488;
        case 0x25748cu: goto label_25748c;
        case 0x257490u: goto label_257490;
        case 0x257494u: goto label_257494;
        case 0x257498u: goto label_257498;
        case 0x25749cu: goto label_25749c;
        case 0x2574a0u: goto label_2574a0;
        case 0x2574a4u: goto label_2574a4;
        case 0x2574a8u: goto label_2574a8;
        case 0x2574acu: goto label_2574ac;
        case 0x2574b0u: goto label_2574b0;
        case 0x2574b4u: goto label_2574b4;
        case 0x2574b8u: goto label_2574b8;
        case 0x2574bcu: goto label_2574bc;
        case 0x2574c0u: goto label_2574c0;
        case 0x2574c4u: goto label_2574c4;
        case 0x2574c8u: goto label_2574c8;
        case 0x2574ccu: goto label_2574cc;
        case 0x2574d0u: goto label_2574d0;
        case 0x2574d4u: goto label_2574d4;
        case 0x2574d8u: goto label_2574d8;
        case 0x2574dcu: goto label_2574dc;
        case 0x2574e0u: goto label_2574e0;
        case 0x2574e4u: goto label_2574e4;
        case 0x2574e8u: goto label_2574e8;
        case 0x2574ecu: goto label_2574ec;
        case 0x2574f0u: goto label_2574f0;
        case 0x2574f4u: goto label_2574f4;
        case 0x2574f8u: goto label_2574f8;
        case 0x2574fcu: goto label_2574fc;
        case 0x257500u: goto label_257500;
        case 0x257504u: goto label_257504;
        case 0x257508u: goto label_257508;
        case 0x25750cu: goto label_25750c;
        case 0x257510u: goto label_257510;
        case 0x257514u: goto label_257514;
        case 0x257518u: goto label_257518;
        case 0x25751cu: goto label_25751c;
        case 0x257520u: goto label_257520;
        case 0x257524u: goto label_257524;
        case 0x257528u: goto label_257528;
        case 0x25752cu: goto label_25752c;
        case 0x257530u: goto label_257530;
        case 0x257534u: goto label_257534;
        case 0x257538u: goto label_257538;
        case 0x25753cu: goto label_25753c;
        case 0x257540u: goto label_257540;
        case 0x257544u: goto label_257544;
        case 0x257548u: goto label_257548;
        case 0x25754cu: goto label_25754c;
        case 0x257550u: goto label_257550;
        case 0x257554u: goto label_257554;
        case 0x257558u: goto label_257558;
        case 0x25755cu: goto label_25755c;
        case 0x257560u: goto label_257560;
        case 0x257564u: goto label_257564;
        case 0x257568u: goto label_257568;
        case 0x25756cu: goto label_25756c;
        case 0x257570u: goto label_257570;
        case 0x257574u: goto label_257574;
        case 0x257578u: goto label_257578;
        case 0x25757cu: goto label_25757c;
        case 0x257580u: goto label_257580;
        case 0x257584u: goto label_257584;
        case 0x257588u: goto label_257588;
        case 0x25758cu: goto label_25758c;
        case 0x257590u: goto label_257590;
        case 0x257594u: goto label_257594;
        case 0x257598u: goto label_257598;
        case 0x25759cu: goto label_25759c;
        case 0x2575a0u: goto label_2575a0;
        case 0x2575a4u: goto label_2575a4;
        case 0x2575a8u: goto label_2575a8;
        case 0x2575acu: goto label_2575ac;
        case 0x2575b0u: goto label_2575b0;
        case 0x2575b4u: goto label_2575b4;
        case 0x2575b8u: goto label_2575b8;
        case 0x2575bcu: goto label_2575bc;
        case 0x2575c0u: goto label_2575c0;
        case 0x2575c4u: goto label_2575c4;
        case 0x2575c8u: goto label_2575c8;
        case 0x2575ccu: goto label_2575cc;
        case 0x2575d0u: goto label_2575d0;
        case 0x2575d4u: goto label_2575d4;
        case 0x2575d8u: goto label_2575d8;
        case 0x2575dcu: goto label_2575dc;
        case 0x2575e0u: goto label_2575e0;
        case 0x2575e4u: goto label_2575e4;
        case 0x2575e8u: goto label_2575e8;
        case 0x2575ecu: goto label_2575ec;
        case 0x2575f0u: goto label_2575f0;
        case 0x2575f4u: goto label_2575f4;
        case 0x2575f8u: goto label_2575f8;
        case 0x2575fcu: goto label_2575fc;
        case 0x257600u: goto label_257600;
        case 0x257604u: goto label_257604;
        case 0x257608u: goto label_257608;
        case 0x25760cu: goto label_25760c;
        case 0x257610u: goto label_257610;
        case 0x257614u: goto label_257614;
        case 0x257618u: goto label_257618;
        case 0x25761cu: goto label_25761c;
        case 0x257620u: goto label_257620;
        case 0x257624u: goto label_257624;
        case 0x257628u: goto label_257628;
        case 0x25762cu: goto label_25762c;
        case 0x257630u: goto label_257630;
        case 0x257634u: goto label_257634;
        case 0x257638u: goto label_257638;
        case 0x25763cu: goto label_25763c;
        case 0x257640u: goto label_257640;
        case 0x257644u: goto label_257644;
        case 0x257648u: goto label_257648;
        case 0x25764cu: goto label_25764c;
        case 0x257650u: goto label_257650;
        case 0x257654u: goto label_257654;
        case 0x257658u: goto label_257658;
        case 0x25765cu: goto label_25765c;
        case 0x257660u: goto label_257660;
        case 0x257664u: goto label_257664;
        case 0x257668u: goto label_257668;
        case 0x25766cu: goto label_25766c;
        case 0x257670u: goto label_257670;
        case 0x257674u: goto label_257674;
        case 0x257678u: goto label_257678;
        case 0x25767cu: goto label_25767c;
        case 0x257680u: goto label_257680;
        case 0x257684u: goto label_257684;
        case 0x257688u: goto label_257688;
        case 0x25768cu: goto label_25768c;
        case 0x257690u: goto label_257690;
        case 0x257694u: goto label_257694;
        case 0x257698u: goto label_257698;
        case 0x25769cu: goto label_25769c;
        case 0x2576a0u: goto label_2576a0;
        case 0x2576a4u: goto label_2576a4;
        case 0x2576a8u: goto label_2576a8;
        case 0x2576acu: goto label_2576ac;
        case 0x2576b0u: goto label_2576b0;
        case 0x2576b4u: goto label_2576b4;
        case 0x2576b8u: goto label_2576b8;
        case 0x2576bcu: goto label_2576bc;
        case 0x2576c0u: goto label_2576c0;
        case 0x2576c4u: goto label_2576c4;
        case 0x2576c8u: goto label_2576c8;
        case 0x2576ccu: goto label_2576cc;
        case 0x2576d0u: goto label_2576d0;
        case 0x2576d4u: goto label_2576d4;
        case 0x2576d8u: goto label_2576d8;
        case 0x2576dcu: goto label_2576dc;
        case 0x2576e0u: goto label_2576e0;
        case 0x2576e4u: goto label_2576e4;
        case 0x2576e8u: goto label_2576e8;
        case 0x2576ecu: goto label_2576ec;
        case 0x2576f0u: goto label_2576f0;
        case 0x2576f4u: goto label_2576f4;
        case 0x2576f8u: goto label_2576f8;
        case 0x2576fcu: goto label_2576fc;
        case 0x257700u: goto label_257700;
        case 0x257704u: goto label_257704;
        case 0x257708u: goto label_257708;
        case 0x25770cu: goto label_25770c;
        case 0x257710u: goto label_257710;
        case 0x257714u: goto label_257714;
        case 0x257718u: goto label_257718;
        case 0x25771cu: goto label_25771c;
        case 0x257720u: goto label_257720;
        case 0x257724u: goto label_257724;
        case 0x257728u: goto label_257728;
        case 0x25772cu: goto label_25772c;
        case 0x257730u: goto label_257730;
        case 0x257734u: goto label_257734;
        case 0x257738u: goto label_257738;
        case 0x25773cu: goto label_25773c;
        case 0x257740u: goto label_257740;
        case 0x257744u: goto label_257744;
        case 0x257748u: goto label_257748;
        case 0x25774cu: goto label_25774c;
        case 0x257750u: goto label_257750;
        case 0x257754u: goto label_257754;
        case 0x257758u: goto label_257758;
        case 0x25775cu: goto label_25775c;
        case 0x257760u: goto label_257760;
        case 0x257764u: goto label_257764;
        case 0x257768u: goto label_257768;
        case 0x25776cu: goto label_25776c;
        case 0x257770u: goto label_257770;
        case 0x257774u: goto label_257774;
        case 0x257778u: goto label_257778;
        case 0x25777cu: goto label_25777c;
        case 0x257780u: goto label_257780;
        case 0x257784u: goto label_257784;
        case 0x257788u: goto label_257788;
        case 0x25778cu: goto label_25778c;
        case 0x257790u: goto label_257790;
        case 0x257794u: goto label_257794;
        case 0x257798u: goto label_257798;
        case 0x25779cu: goto label_25779c;
        case 0x2577a0u: goto label_2577a0;
        case 0x2577a4u: goto label_2577a4;
        case 0x2577a8u: goto label_2577a8;
        case 0x2577acu: goto label_2577ac;
        case 0x2577b0u: goto label_2577b0;
        case 0x2577b4u: goto label_2577b4;
        case 0x2577b8u: goto label_2577b8;
        case 0x2577bcu: goto label_2577bc;
        case 0x2577c0u: goto label_2577c0;
        case 0x2577c4u: goto label_2577c4;
        case 0x2577c8u: goto label_2577c8;
        case 0x2577ccu: goto label_2577cc;
        case 0x2577d0u: goto label_2577d0;
        case 0x2577d4u: goto label_2577d4;
        case 0x2577d8u: goto label_2577d8;
        case 0x2577dcu: goto label_2577dc;
        case 0x2577e0u: goto label_2577e0;
        case 0x2577e4u: goto label_2577e4;
        case 0x2577e8u: goto label_2577e8;
        case 0x2577ecu: goto label_2577ec;
        case 0x2577f0u: goto label_2577f0;
        case 0x2577f4u: goto label_2577f4;
        case 0x2577f8u: goto label_2577f8;
        case 0x2577fcu: goto label_2577fc;
        case 0x257800u: goto label_257800;
        case 0x257804u: goto label_257804;
        case 0x257808u: goto label_257808;
        case 0x25780cu: goto label_25780c;
        case 0x257810u: goto label_257810;
        case 0x257814u: goto label_257814;
        case 0x257818u: goto label_257818;
        case 0x25781cu: goto label_25781c;
        case 0x257820u: goto label_257820;
        case 0x257824u: goto label_257824;
        case 0x257828u: goto label_257828;
        case 0x25782cu: goto label_25782c;
        case 0x257830u: goto label_257830;
        case 0x257834u: goto label_257834;
        case 0x257838u: goto label_257838;
        case 0x25783cu: goto label_25783c;
        case 0x257840u: goto label_257840;
        case 0x257844u: goto label_257844;
        case 0x257848u: goto label_257848;
        case 0x25784cu: goto label_25784c;
        case 0x257850u: goto label_257850;
        case 0x257854u: goto label_257854;
        case 0x257858u: goto label_257858;
        case 0x25785cu: goto label_25785c;
        case 0x257860u: goto label_257860;
        case 0x257864u: goto label_257864;
        case 0x257868u: goto label_257868;
        case 0x25786cu: goto label_25786c;
        case 0x257870u: goto label_257870;
        case 0x257874u: goto label_257874;
        case 0x257878u: goto label_257878;
        case 0x25787cu: goto label_25787c;
        case 0x257880u: goto label_257880;
        case 0x257884u: goto label_257884;
        case 0x257888u: goto label_257888;
        case 0x25788cu: goto label_25788c;
        case 0x257890u: goto label_257890;
        case 0x257894u: goto label_257894;
        case 0x257898u: goto label_257898;
        case 0x25789cu: goto label_25789c;
        case 0x2578a0u: goto label_2578a0;
        case 0x2578a4u: goto label_2578a4;
        case 0x2578a8u: goto label_2578a8;
        case 0x2578acu: goto label_2578ac;
        case 0x2578b0u: goto label_2578b0;
        case 0x2578b4u: goto label_2578b4;
        case 0x2578b8u: goto label_2578b8;
        case 0x2578bcu: goto label_2578bc;
        case 0x2578c0u: goto label_2578c0;
        case 0x2578c4u: goto label_2578c4;
        case 0x2578c8u: goto label_2578c8;
        case 0x2578ccu: goto label_2578cc;
        case 0x2578d0u: goto label_2578d0;
        case 0x2578d4u: goto label_2578d4;
        case 0x2578d8u: goto label_2578d8;
        case 0x2578dcu: goto label_2578dc;
        case 0x2578e0u: goto label_2578e0;
        case 0x2578e4u: goto label_2578e4;
        case 0x2578e8u: goto label_2578e8;
        case 0x2578ecu: goto label_2578ec;
        case 0x2578f0u: goto label_2578f0;
        case 0x2578f4u: goto label_2578f4;
        case 0x2578f8u: goto label_2578f8;
        case 0x2578fcu: goto label_2578fc;
        case 0x257900u: goto label_257900;
        case 0x257904u: goto label_257904;
        case 0x257908u: goto label_257908;
        case 0x25790cu: goto label_25790c;
        case 0x257910u: goto label_257910;
        case 0x257914u: goto label_257914;
        case 0x257918u: goto label_257918;
        case 0x25791cu: goto label_25791c;
        case 0x257920u: goto label_257920;
        case 0x257924u: goto label_257924;
        case 0x257928u: goto label_257928;
        case 0x25792cu: goto label_25792c;
        case 0x257930u: goto label_257930;
        case 0x257934u: goto label_257934;
        case 0x257938u: goto label_257938;
        case 0x25793cu: goto label_25793c;
        case 0x257940u: goto label_257940;
        case 0x257944u: goto label_257944;
        case 0x257948u: goto label_257948;
        case 0x25794cu: goto label_25794c;
        case 0x257950u: goto label_257950;
        case 0x257954u: goto label_257954;
        case 0x257958u: goto label_257958;
        case 0x25795cu: goto label_25795c;
        case 0x257960u: goto label_257960;
        case 0x257964u: goto label_257964;
        case 0x257968u: goto label_257968;
        case 0x25796cu: goto label_25796c;
        case 0x257970u: goto label_257970;
        case 0x257974u: goto label_257974;
        case 0x257978u: goto label_257978;
        case 0x25797cu: goto label_25797c;
        case 0x257980u: goto label_257980;
        case 0x257984u: goto label_257984;
        case 0x257988u: goto label_257988;
        case 0x25798cu: goto label_25798c;
        case 0x257990u: goto label_257990;
        case 0x257994u: goto label_257994;
        case 0x257998u: goto label_257998;
        case 0x25799cu: goto label_25799c;
        case 0x2579a0u: goto label_2579a0;
        case 0x2579a4u: goto label_2579a4;
        case 0x2579a8u: goto label_2579a8;
        case 0x2579acu: goto label_2579ac;
        case 0x2579b0u: goto label_2579b0;
        case 0x2579b4u: goto label_2579b4;
        case 0x2579b8u: goto label_2579b8;
        case 0x2579bcu: goto label_2579bc;
        case 0x2579c0u: goto label_2579c0;
        case 0x2579c4u: goto label_2579c4;
        case 0x2579c8u: goto label_2579c8;
        case 0x2579ccu: goto label_2579cc;
        case 0x2579d0u: goto label_2579d0;
        case 0x2579d4u: goto label_2579d4;
        case 0x2579d8u: goto label_2579d8;
        case 0x2579dcu: goto label_2579dc;
        case 0x2579e0u: goto label_2579e0;
        case 0x2579e4u: goto label_2579e4;
        case 0x2579e8u: goto label_2579e8;
        case 0x2579ecu: goto label_2579ec;
        case 0x2579f0u: goto label_2579f0;
        case 0x2579f4u: goto label_2579f4;
        case 0x2579f8u: goto label_2579f8;
        case 0x2579fcu: goto label_2579fc;
        case 0x257a00u: goto label_257a00;
        case 0x257a04u: goto label_257a04;
        case 0x257a08u: goto label_257a08;
        case 0x257a0cu: goto label_257a0c;
        case 0x257a10u: goto label_257a10;
        case 0x257a14u: goto label_257a14;
        case 0x257a18u: goto label_257a18;
        case 0x257a1cu: goto label_257a1c;
        case 0x257a20u: goto label_257a20;
        case 0x257a24u: goto label_257a24;
        case 0x257a28u: goto label_257a28;
        case 0x257a2cu: goto label_257a2c;
        case 0x257a30u: goto label_257a30;
        case 0x257a34u: goto label_257a34;
        case 0x257a38u: goto label_257a38;
        case 0x257a3cu: goto label_257a3c;
        case 0x257a40u: goto label_257a40;
        case 0x257a44u: goto label_257a44;
        case 0x257a48u: goto label_257a48;
        case 0x257a4cu: goto label_257a4c;
        case 0x257a50u: goto label_257a50;
        case 0x257a54u: goto label_257a54;
        case 0x257a58u: goto label_257a58;
        case 0x257a5cu: goto label_257a5c;
        case 0x257a60u: goto label_257a60;
        case 0x257a64u: goto label_257a64;
        case 0x257a68u: goto label_257a68;
        case 0x257a6cu: goto label_257a6c;
        case 0x257a70u: goto label_257a70;
        case 0x257a74u: goto label_257a74;
        case 0x257a78u: goto label_257a78;
        case 0x257a7cu: goto label_257a7c;
        case 0x257a80u: goto label_257a80;
        case 0x257a84u: goto label_257a84;
        case 0x257a88u: goto label_257a88;
        case 0x257a8cu: goto label_257a8c;
        case 0x257a90u: goto label_257a90;
        case 0x257a94u: goto label_257a94;
        case 0x257a98u: goto label_257a98;
        case 0x257a9cu: goto label_257a9c;
        case 0x257aa0u: goto label_257aa0;
        case 0x257aa4u: goto label_257aa4;
        case 0x257aa8u: goto label_257aa8;
        case 0x257aacu: goto label_257aac;
        case 0x257ab0u: goto label_257ab0;
        case 0x257ab4u: goto label_257ab4;
        case 0x257ab8u: goto label_257ab8;
        case 0x257abcu: goto label_257abc;
        case 0x257ac0u: goto label_257ac0;
        case 0x257ac4u: goto label_257ac4;
        case 0x257ac8u: goto label_257ac8;
        case 0x257accu: goto label_257acc;
        case 0x257ad0u: goto label_257ad0;
        case 0x257ad4u: goto label_257ad4;
        case 0x257ad8u: goto label_257ad8;
        case 0x257adcu: goto label_257adc;
        case 0x257ae0u: goto label_257ae0;
        case 0x257ae4u: goto label_257ae4;
        case 0x257ae8u: goto label_257ae8;
        case 0x257aecu: goto label_257aec;
        case 0x257af0u: goto label_257af0;
        case 0x257af4u: goto label_257af4;
        case 0x257af8u: goto label_257af8;
        case 0x257afcu: goto label_257afc;
        case 0x257b00u: goto label_257b00;
        case 0x257b04u: goto label_257b04;
        case 0x257b08u: goto label_257b08;
        case 0x257b0cu: goto label_257b0c;
        case 0x257b10u: goto label_257b10;
        case 0x257b14u: goto label_257b14;
        case 0x257b18u: goto label_257b18;
        case 0x257b1cu: goto label_257b1c;
        case 0x257b20u: goto label_257b20;
        case 0x257b24u: goto label_257b24;
        case 0x257b28u: goto label_257b28;
        case 0x257b2cu: goto label_257b2c;
        case 0x257b30u: goto label_257b30;
        case 0x257b34u: goto label_257b34;
        case 0x257b38u: goto label_257b38;
        case 0x257b3cu: goto label_257b3c;
        case 0x257b40u: goto label_257b40;
        case 0x257b44u: goto label_257b44;
        case 0x257b48u: goto label_257b48;
        case 0x257b4cu: goto label_257b4c;
        case 0x257b50u: goto label_257b50;
        case 0x257b54u: goto label_257b54;
        case 0x257b58u: goto label_257b58;
        case 0x257b5cu: goto label_257b5c;
        case 0x257b60u: goto label_257b60;
        case 0x257b64u: goto label_257b64;
        case 0x257b68u: goto label_257b68;
        case 0x257b6cu: goto label_257b6c;
        case 0x257b70u: goto label_257b70;
        case 0x257b74u: goto label_257b74;
        case 0x257b78u: goto label_257b78;
        case 0x257b7cu: goto label_257b7c;
        case 0x257b80u: goto label_257b80;
        case 0x257b84u: goto label_257b84;
        case 0x257b88u: goto label_257b88;
        case 0x257b8cu: goto label_257b8c;
        case 0x257b90u: goto label_257b90;
        case 0x257b94u: goto label_257b94;
        case 0x257b98u: goto label_257b98;
        case 0x257b9cu: goto label_257b9c;
        case 0x257ba0u: goto label_257ba0;
        case 0x257ba4u: goto label_257ba4;
        case 0x257ba8u: goto label_257ba8;
        case 0x257bacu: goto label_257bac;
        case 0x257bb0u: goto label_257bb0;
        case 0x257bb4u: goto label_257bb4;
        case 0x257bb8u: goto label_257bb8;
        case 0x257bbcu: goto label_257bbc;
        case 0x257bc0u: goto label_257bc0;
        case 0x257bc4u: goto label_257bc4;
        case 0x257bc8u: goto label_257bc8;
        case 0x257bccu: goto label_257bcc;
        case 0x257bd0u: goto label_257bd0;
        case 0x257bd4u: goto label_257bd4;
        case 0x257bd8u: goto label_257bd8;
        case 0x257bdcu: goto label_257bdc;
        case 0x257be0u: goto label_257be0;
        case 0x257be4u: goto label_257be4;
        case 0x257be8u: goto label_257be8;
        case 0x257becu: goto label_257bec;
        case 0x257bf0u: goto label_257bf0;
        case 0x257bf4u: goto label_257bf4;
        case 0x257bf8u: goto label_257bf8;
        case 0x257bfcu: goto label_257bfc;
        case 0x257c00u: goto label_257c00;
        case 0x257c04u: goto label_257c04;
        case 0x257c08u: goto label_257c08;
        case 0x257c0cu: goto label_257c0c;
        case 0x257c10u: goto label_257c10;
        case 0x257c14u: goto label_257c14;
        case 0x257c18u: goto label_257c18;
        case 0x257c1cu: goto label_257c1c;
        case 0x257c20u: goto label_257c20;
        case 0x257c24u: goto label_257c24;
        case 0x257c28u: goto label_257c28;
        case 0x257c2cu: goto label_257c2c;
        case 0x257c30u: goto label_257c30;
        case 0x257c34u: goto label_257c34;
        case 0x257c38u: goto label_257c38;
        case 0x257c3cu: goto label_257c3c;
        case 0x257c40u: goto label_257c40;
        case 0x257c44u: goto label_257c44;
        case 0x257c48u: goto label_257c48;
        case 0x257c4cu: goto label_257c4c;
        case 0x257c50u: goto label_257c50;
        case 0x257c54u: goto label_257c54;
        case 0x257c58u: goto label_257c58;
        case 0x257c5cu: goto label_257c5c;
        case 0x257c60u: goto label_257c60;
        case 0x257c64u: goto label_257c64;
        case 0x257c68u: goto label_257c68;
        case 0x257c6cu: goto label_257c6c;
        case 0x257c70u: goto label_257c70;
        case 0x257c74u: goto label_257c74;
        case 0x257c78u: goto label_257c78;
        case 0x257c7cu: goto label_257c7c;
        case 0x257c80u: goto label_257c80;
        case 0x257c84u: goto label_257c84;
        case 0x257c88u: goto label_257c88;
        case 0x257c8cu: goto label_257c8c;
        case 0x257c90u: goto label_257c90;
        case 0x257c94u: goto label_257c94;
        case 0x257c98u: goto label_257c98;
        case 0x257c9cu: goto label_257c9c;
        case 0x257ca0u: goto label_257ca0;
        case 0x257ca4u: goto label_257ca4;
        case 0x257ca8u: goto label_257ca8;
        case 0x257cacu: goto label_257cac;
        case 0x257cb0u: goto label_257cb0;
        case 0x257cb4u: goto label_257cb4;
        case 0x257cb8u: goto label_257cb8;
        case 0x257cbcu: goto label_257cbc;
        case 0x257cc0u: goto label_257cc0;
        case 0x257cc4u: goto label_257cc4;
        case 0x257cc8u: goto label_257cc8;
        case 0x257cccu: goto label_257ccc;
        case 0x257cd0u: goto label_257cd0;
        case 0x257cd4u: goto label_257cd4;
        case 0x257cd8u: goto label_257cd8;
        case 0x257cdcu: goto label_257cdc;
        case 0x257ce0u: goto label_257ce0;
        case 0x257ce4u: goto label_257ce4;
        case 0x257ce8u: goto label_257ce8;
        case 0x257cecu: goto label_257cec;
        case 0x257cf0u: goto label_257cf0;
        case 0x257cf4u: goto label_257cf4;
        case 0x257cf8u: goto label_257cf8;
        case 0x257cfcu: goto label_257cfc;
        case 0x257d00u: goto label_257d00;
        case 0x257d04u: goto label_257d04;
        case 0x257d08u: goto label_257d08;
        case 0x257d0cu: goto label_257d0c;
        case 0x257d10u: goto label_257d10;
        case 0x257d14u: goto label_257d14;
        case 0x257d18u: goto label_257d18;
        case 0x257d1cu: goto label_257d1c;
        case 0x257d20u: goto label_257d20;
        case 0x257d24u: goto label_257d24;
        case 0x257d28u: goto label_257d28;
        case 0x257d2cu: goto label_257d2c;
        case 0x257d30u: goto label_257d30;
        case 0x257d34u: goto label_257d34;
        case 0x257d38u: goto label_257d38;
        case 0x257d3cu: goto label_257d3c;
        case 0x257d40u: goto label_257d40;
        case 0x257d44u: goto label_257d44;
        case 0x257d48u: goto label_257d48;
        case 0x257d4cu: goto label_257d4c;
        case 0x257d50u: goto label_257d50;
        case 0x257d54u: goto label_257d54;
        case 0x257d58u: goto label_257d58;
        case 0x257d5cu: goto label_257d5c;
        case 0x257d60u: goto label_257d60;
        case 0x257d64u: goto label_257d64;
        case 0x257d68u: goto label_257d68;
        case 0x257d6cu: goto label_257d6c;
        case 0x257d70u: goto label_257d70;
        case 0x257d74u: goto label_257d74;
        case 0x257d78u: goto label_257d78;
        case 0x257d7cu: goto label_257d7c;
        case 0x257d80u: goto label_257d80;
        case 0x257d84u: goto label_257d84;
        case 0x257d88u: goto label_257d88;
        case 0x257d8cu: goto label_257d8c;
        case 0x257d90u: goto label_257d90;
        case 0x257d94u: goto label_257d94;
        case 0x257d98u: goto label_257d98;
        case 0x257d9cu: goto label_257d9c;
        case 0x257da0u: goto label_257da0;
        case 0x257da4u: goto label_257da4;
        case 0x257da8u: goto label_257da8;
        case 0x257dacu: goto label_257dac;
        case 0x257db0u: goto label_257db0;
        case 0x257db4u: goto label_257db4;
        case 0x257db8u: goto label_257db8;
        case 0x257dbcu: goto label_257dbc;
        case 0x257dc0u: goto label_257dc0;
        case 0x257dc4u: goto label_257dc4;
        case 0x257dc8u: goto label_257dc8;
        case 0x257dccu: goto label_257dcc;
        case 0x257dd0u: goto label_257dd0;
        case 0x257dd4u: goto label_257dd4;
        case 0x257dd8u: goto label_257dd8;
        case 0x257ddcu: goto label_257ddc;
        case 0x257de0u: goto label_257de0;
        case 0x257de4u: goto label_257de4;
        case 0x257de8u: goto label_257de8;
        case 0x257decu: goto label_257dec;
        case 0x257df0u: goto label_257df0;
        case 0x257df4u: goto label_257df4;
        case 0x257df8u: goto label_257df8;
        case 0x257dfcu: goto label_257dfc;
        case 0x257e00u: goto label_257e00;
        case 0x257e04u: goto label_257e04;
        case 0x257e08u: goto label_257e08;
        case 0x257e0cu: goto label_257e0c;
        case 0x257e10u: goto label_257e10;
        case 0x257e14u: goto label_257e14;
        case 0x257e18u: goto label_257e18;
        case 0x257e1cu: goto label_257e1c;
        case 0x257e20u: goto label_257e20;
        case 0x257e24u: goto label_257e24;
        case 0x257e28u: goto label_257e28;
        case 0x257e2cu: goto label_257e2c;
        case 0x257e30u: goto label_257e30;
        case 0x257e34u: goto label_257e34;
        case 0x257e38u: goto label_257e38;
        case 0x257e3cu: goto label_257e3c;
        case 0x257e40u: goto label_257e40;
        case 0x257e44u: goto label_257e44;
        case 0x257e48u: goto label_257e48;
        case 0x257e4cu: goto label_257e4c;
        case 0x257e50u: goto label_257e50;
        case 0x257e54u: goto label_257e54;
        case 0x257e58u: goto label_257e58;
        case 0x257e5cu: goto label_257e5c;
        case 0x257e60u: goto label_257e60;
        case 0x257e64u: goto label_257e64;
        case 0x257e68u: goto label_257e68;
        case 0x257e6cu: goto label_257e6c;
        case 0x257e70u: goto label_257e70;
        case 0x257e74u: goto label_257e74;
        case 0x257e78u: goto label_257e78;
        case 0x257e7cu: goto label_257e7c;
        case 0x257e80u: goto label_257e80;
        case 0x257e84u: goto label_257e84;
        case 0x257e88u: goto label_257e88;
        case 0x257e8cu: goto label_257e8c;
        case 0x257e90u: goto label_257e90;
        case 0x257e94u: goto label_257e94;
        case 0x257e98u: goto label_257e98;
        case 0x257e9cu: goto label_257e9c;
        case 0x257ea0u: goto label_257ea0;
        case 0x257ea4u: goto label_257ea4;
        case 0x257ea8u: goto label_257ea8;
        case 0x257eacu: goto label_257eac;
        case 0x257eb0u: goto label_257eb0;
        case 0x257eb4u: goto label_257eb4;
        case 0x257eb8u: goto label_257eb8;
        case 0x257ebcu: goto label_257ebc;
        case 0x257ec0u: goto label_257ec0;
        case 0x257ec4u: goto label_257ec4;
        case 0x257ec8u: goto label_257ec8;
        case 0x257eccu: goto label_257ecc;
        case 0x257ed0u: goto label_257ed0;
        case 0x257ed4u: goto label_257ed4;
        case 0x257ed8u: goto label_257ed8;
        case 0x257edcu: goto label_257edc;
        case 0x257ee0u: goto label_257ee0;
        case 0x257ee4u: goto label_257ee4;
        case 0x257ee8u: goto label_257ee8;
        case 0x257eecu: goto label_257eec;
        case 0x257ef0u: goto label_257ef0;
        case 0x257ef4u: goto label_257ef4;
        case 0x257ef8u: goto label_257ef8;
        case 0x257efcu: goto label_257efc;
        case 0x257f00u: goto label_257f00;
        case 0x257f04u: goto label_257f04;
        case 0x257f08u: goto label_257f08;
        case 0x257f0cu: goto label_257f0c;
        case 0x257f10u: goto label_257f10;
        case 0x257f14u: goto label_257f14;
        case 0x257f18u: goto label_257f18;
        case 0x257f1cu: goto label_257f1c;
        case 0x257f20u: goto label_257f20;
        case 0x257f24u: goto label_257f24;
        case 0x257f28u: goto label_257f28;
        case 0x257f2cu: goto label_257f2c;
        case 0x257f30u: goto label_257f30;
        case 0x257f34u: goto label_257f34;
        case 0x257f38u: goto label_257f38;
        case 0x257f3cu: goto label_257f3c;
        case 0x257f40u: goto label_257f40;
        case 0x257f44u: goto label_257f44;
        case 0x257f48u: goto label_257f48;
        case 0x257f4cu: goto label_257f4c;
        case 0x257f50u: goto label_257f50;
        case 0x257f54u: goto label_257f54;
        case 0x257f58u: goto label_257f58;
        case 0x257f5cu: goto label_257f5c;
        case 0x257f60u: goto label_257f60;
        case 0x257f64u: goto label_257f64;
        case 0x257f68u: goto label_257f68;
        case 0x257f6cu: goto label_257f6c;
        case 0x257f70u: goto label_257f70;
        case 0x257f74u: goto label_257f74;
        case 0x257f78u: goto label_257f78;
        case 0x257f7cu: goto label_257f7c;
        case 0x257f80u: goto label_257f80;
        case 0x257f84u: goto label_257f84;
        case 0x257f88u: goto label_257f88;
        case 0x257f8cu: goto label_257f8c;
        case 0x257f90u: goto label_257f90;
        case 0x257f94u: goto label_257f94;
        case 0x257f98u: goto label_257f98;
        case 0x257f9cu: goto label_257f9c;
        case 0x257fa0u: goto label_257fa0;
        case 0x257fa4u: goto label_257fa4;
        case 0x257fa8u: goto label_257fa8;
        case 0x257facu: goto label_257fac;
        case 0x257fb0u: goto label_257fb0;
        case 0x257fb4u: goto label_257fb4;
        case 0x257fb8u: goto label_257fb8;
        case 0x257fbcu: goto label_257fbc;
        case 0x257fc0u: goto label_257fc0;
        case 0x257fc4u: goto label_257fc4;
        case 0x257fc8u: goto label_257fc8;
        case 0x257fccu: goto label_257fcc;
        case 0x257fd0u: goto label_257fd0;
        case 0x257fd4u: goto label_257fd4;
        case 0x257fd8u: goto label_257fd8;
        case 0x257fdcu: goto label_257fdc;
        case 0x257fe0u: goto label_257fe0;
        case 0x257fe4u: goto label_257fe4;
        case 0x257fe8u: goto label_257fe8;
        case 0x257fecu: goto label_257fec;
        case 0x257ff0u: goto label_257ff0;
        case 0x257ff4u: goto label_257ff4;
        case 0x257ff8u: goto label_257ff8;
        case 0x257ffcu: goto label_257ffc;
        case 0x258000u: goto label_258000;
        case 0x258004u: goto label_258004;
        case 0x258008u: goto label_258008;
        case 0x25800cu: goto label_25800c;
        case 0x258010u: goto label_258010;
        case 0x258014u: goto label_258014;
        case 0x258018u: goto label_258018;
        case 0x25801cu: goto label_25801c;
        case 0x258020u: goto label_258020;
        case 0x258024u: goto label_258024;
        case 0x258028u: goto label_258028;
        case 0x25802cu: goto label_25802c;
        case 0x258030u: goto label_258030;
        case 0x258034u: goto label_258034;
        case 0x258038u: goto label_258038;
        case 0x25803cu: goto label_25803c;
        case 0x258040u: goto label_258040;
        case 0x258044u: goto label_258044;
        case 0x258048u: goto label_258048;
        case 0x25804cu: goto label_25804c;
        case 0x258050u: goto label_258050;
        case 0x258054u: goto label_258054;
        case 0x258058u: goto label_258058;
        case 0x25805cu: goto label_25805c;
        case 0x258060u: goto label_258060;
        case 0x258064u: goto label_258064;
        case 0x258068u: goto label_258068;
        case 0x25806cu: goto label_25806c;
        case 0x258070u: goto label_258070;
        case 0x258074u: goto label_258074;
        case 0x258078u: goto label_258078;
        case 0x25807cu: goto label_25807c;
        case 0x258080u: goto label_258080;
        case 0x258084u: goto label_258084;
        case 0x258088u: goto label_258088;
        case 0x25808cu: goto label_25808c;
        case 0x258090u: goto label_258090;
        case 0x258094u: goto label_258094;
        case 0x258098u: goto label_258098;
        case 0x25809cu: goto label_25809c;
        case 0x2580a0u: goto label_2580a0;
        case 0x2580a4u: goto label_2580a4;
        case 0x2580a8u: goto label_2580a8;
        case 0x2580acu: goto label_2580ac;
        case 0x2580b0u: goto label_2580b0;
        case 0x2580b4u: goto label_2580b4;
        case 0x2580b8u: goto label_2580b8;
        case 0x2580bcu: goto label_2580bc;
        case 0x2580c0u: goto label_2580c0;
        case 0x2580c4u: goto label_2580c4;
        case 0x2580c8u: goto label_2580c8;
        case 0x2580ccu: goto label_2580cc;
        case 0x2580d0u: goto label_2580d0;
        case 0x2580d4u: goto label_2580d4;
        case 0x2580d8u: goto label_2580d8;
        case 0x2580dcu: goto label_2580dc;
        case 0x2580e0u: goto label_2580e0;
        case 0x2580e4u: goto label_2580e4;
        case 0x2580e8u: goto label_2580e8;
        case 0x2580ecu: goto label_2580ec;
        case 0x2580f0u: goto label_2580f0;
        case 0x2580f4u: goto label_2580f4;
        case 0x2580f8u: goto label_2580f8;
        case 0x2580fcu: goto label_2580fc;
        case 0x258100u: goto label_258100;
        case 0x258104u: goto label_258104;
        case 0x258108u: goto label_258108;
        case 0x25810cu: goto label_25810c;
        case 0x258110u: goto label_258110;
        case 0x258114u: goto label_258114;
        case 0x258118u: goto label_258118;
        case 0x25811cu: goto label_25811c;
        case 0x258120u: goto label_258120;
        case 0x258124u: goto label_258124;
        case 0x258128u: goto label_258128;
        case 0x25812cu: goto label_25812c;
        case 0x258130u: goto label_258130;
        case 0x258134u: goto label_258134;
        case 0x258138u: goto label_258138;
        case 0x25813cu: goto label_25813c;
        case 0x258140u: goto label_258140;
        case 0x258144u: goto label_258144;
        case 0x258148u: goto label_258148;
        case 0x25814cu: goto label_25814c;
        case 0x258150u: goto label_258150;
        case 0x258154u: goto label_258154;
        case 0x258158u: goto label_258158;
        case 0x25815cu: goto label_25815c;
        case 0x258160u: goto label_258160;
        case 0x258164u: goto label_258164;
        case 0x258168u: goto label_258168;
        case 0x25816cu: goto label_25816c;
        case 0x258170u: goto label_258170;
        case 0x258174u: goto label_258174;
        case 0x258178u: goto label_258178;
        case 0x25817cu: goto label_25817c;
        case 0x258180u: goto label_258180;
        case 0x258184u: goto label_258184;
        case 0x258188u: goto label_258188;
        case 0x25818cu: goto label_25818c;
        case 0x258190u: goto label_258190;
        case 0x258194u: goto label_258194;
        case 0x258198u: goto label_258198;
        case 0x25819cu: goto label_25819c;
        case 0x2581a0u: goto label_2581a0;
        case 0x2581a4u: goto label_2581a4;
        case 0x2581a8u: goto label_2581a8;
        case 0x2581acu: goto label_2581ac;
        case 0x2581b0u: goto label_2581b0;
        case 0x2581b4u: goto label_2581b4;
        case 0x2581b8u: goto label_2581b8;
        case 0x2581bcu: goto label_2581bc;
        case 0x2581c0u: goto label_2581c0;
        case 0x2581c4u: goto label_2581c4;
        case 0x2581c8u: goto label_2581c8;
        case 0x2581ccu: goto label_2581cc;
        case 0x2581d0u: goto label_2581d0;
        case 0x2581d4u: goto label_2581d4;
        case 0x2581d8u: goto label_2581d8;
        case 0x2581dcu: goto label_2581dc;
        case 0x2581e0u: goto label_2581e0;
        case 0x2581e4u: goto label_2581e4;
        case 0x2581e8u: goto label_2581e8;
        case 0x2581ecu: goto label_2581ec;
        case 0x2581f0u: goto label_2581f0;
        case 0x2581f4u: goto label_2581f4;
        case 0x2581f8u: goto label_2581f8;
        case 0x2581fcu: goto label_2581fc;
        case 0x258200u: goto label_258200;
        case 0x258204u: goto label_258204;
        case 0x258208u: goto label_258208;
        case 0x25820cu: goto label_25820c;
        case 0x258210u: goto label_258210;
        case 0x258214u: goto label_258214;
        case 0x258218u: goto label_258218;
        case 0x25821cu: goto label_25821c;
        case 0x258220u: goto label_258220;
        case 0x258224u: goto label_258224;
        case 0x258228u: goto label_258228;
        case 0x25822cu: goto label_25822c;
        case 0x258230u: goto label_258230;
        case 0x258234u: goto label_258234;
        case 0x258238u: goto label_258238;
        case 0x25823cu: goto label_25823c;
        case 0x258240u: goto label_258240;
        case 0x258244u: goto label_258244;
        case 0x258248u: goto label_258248;
        case 0x25824cu: goto label_25824c;
        case 0x258250u: goto label_258250;
        case 0x258254u: goto label_258254;
        case 0x258258u: goto label_258258;
        case 0x25825cu: goto label_25825c;
        case 0x258260u: goto label_258260;
        case 0x258264u: goto label_258264;
        case 0x258268u: goto label_258268;
        case 0x25826cu: goto label_25826c;
        case 0x258270u: goto label_258270;
        case 0x258274u: goto label_258274;
        case 0x258278u: goto label_258278;
        case 0x25827cu: goto label_25827c;
        case 0x258280u: goto label_258280;
        case 0x258284u: goto label_258284;
        case 0x258288u: goto label_258288;
        case 0x25828cu: goto label_25828c;
        case 0x258290u: goto label_258290;
        case 0x258294u: goto label_258294;
        case 0x258298u: goto label_258298;
        case 0x25829cu: goto label_25829c;
        case 0x2582a0u: goto label_2582a0;
        case 0x2582a4u: goto label_2582a4;
        case 0x2582a8u: goto label_2582a8;
        case 0x2582acu: goto label_2582ac;
        case 0x2582b0u: goto label_2582b0;
        case 0x2582b4u: goto label_2582b4;
        case 0x2582b8u: goto label_2582b8;
        case 0x2582bcu: goto label_2582bc;
        case 0x2582c0u: goto label_2582c0;
        case 0x2582c4u: goto label_2582c4;
        case 0x2582c8u: goto label_2582c8;
        case 0x2582ccu: goto label_2582cc;
        case 0x2582d0u: goto label_2582d0;
        case 0x2582d4u: goto label_2582d4;
        case 0x2582d8u: goto label_2582d8;
        case 0x2582dcu: goto label_2582dc;
        case 0x2582e0u: goto label_2582e0;
        case 0x2582e4u: goto label_2582e4;
        case 0x2582e8u: goto label_2582e8;
        case 0x2582ecu: goto label_2582ec;
        case 0x2582f0u: goto label_2582f0;
        case 0x2582f4u: goto label_2582f4;
        case 0x2582f8u: goto label_2582f8;
        case 0x2582fcu: goto label_2582fc;
        case 0x258300u: goto label_258300;
        case 0x258304u: goto label_258304;
        case 0x258308u: goto label_258308;
        case 0x25830cu: goto label_25830c;
        case 0x258310u: goto label_258310;
        case 0x258314u: goto label_258314;
        case 0x258318u: goto label_258318;
        case 0x25831cu: goto label_25831c;
        case 0x258320u: goto label_258320;
        case 0x258324u: goto label_258324;
        case 0x258328u: goto label_258328;
        case 0x25832cu: goto label_25832c;
        case 0x258330u: goto label_258330;
        case 0x258334u: goto label_258334;
        case 0x258338u: goto label_258338;
        case 0x25833cu: goto label_25833c;
        case 0x258340u: goto label_258340;
        case 0x258344u: goto label_258344;
        case 0x258348u: goto label_258348;
        case 0x25834cu: goto label_25834c;
        case 0x258350u: goto label_258350;
        case 0x258354u: goto label_258354;
        case 0x258358u: goto label_258358;
        case 0x25835cu: goto label_25835c;
        case 0x258360u: goto label_258360;
        case 0x258364u: goto label_258364;
        case 0x258368u: goto label_258368;
        case 0x25836cu: goto label_25836c;
        case 0x258370u: goto label_258370;
        case 0x258374u: goto label_258374;
        case 0x258378u: goto label_258378;
        case 0x25837cu: goto label_25837c;
        case 0x258380u: goto label_258380;
        case 0x258384u: goto label_258384;
        case 0x258388u: goto label_258388;
        case 0x25838cu: goto label_25838c;
        case 0x258390u: goto label_258390;
        case 0x258394u: goto label_258394;
        case 0x258398u: goto label_258398;
        case 0x25839cu: goto label_25839c;
        case 0x2583a0u: goto label_2583a0;
        case 0x2583a4u: goto label_2583a4;
        case 0x2583a8u: goto label_2583a8;
        case 0x2583acu: goto label_2583ac;
        case 0x2583b0u: goto label_2583b0;
        case 0x2583b4u: goto label_2583b4;
        case 0x2583b8u: goto label_2583b8;
        case 0x2583bcu: goto label_2583bc;
        case 0x2583c0u: goto label_2583c0;
        case 0x2583c4u: goto label_2583c4;
        case 0x2583c8u: goto label_2583c8;
        case 0x2583ccu: goto label_2583cc;
        case 0x2583d0u: goto label_2583d0;
        case 0x2583d4u: goto label_2583d4;
        case 0x2583d8u: goto label_2583d8;
        case 0x2583dcu: goto label_2583dc;
        case 0x2583e0u: goto label_2583e0;
        case 0x2583e4u: goto label_2583e4;
        case 0x2583e8u: goto label_2583e8;
        case 0x2583ecu: goto label_2583ec;
        case 0x2583f0u: goto label_2583f0;
        case 0x2583f4u: goto label_2583f4;
        case 0x2583f8u: goto label_2583f8;
        case 0x2583fcu: goto label_2583fc;
        case 0x258400u: goto label_258400;
        case 0x258404u: goto label_258404;
        case 0x258408u: goto label_258408;
        case 0x25840cu: goto label_25840c;
        case 0x258410u: goto label_258410;
        case 0x258414u: goto label_258414;
        case 0x258418u: goto label_258418;
        case 0x25841cu: goto label_25841c;
        case 0x258420u: goto label_258420;
        case 0x258424u: goto label_258424;
        case 0x258428u: goto label_258428;
        case 0x25842cu: goto label_25842c;
        case 0x258430u: goto label_258430;
        case 0x258434u: goto label_258434;
        case 0x258438u: goto label_258438;
        case 0x25843cu: goto label_25843c;
        case 0x258440u: goto label_258440;
        case 0x258444u: goto label_258444;
        case 0x258448u: goto label_258448;
        case 0x25844cu: goto label_25844c;
        case 0x258450u: goto label_258450;
        case 0x258454u: goto label_258454;
        case 0x258458u: goto label_258458;
        case 0x25845cu: goto label_25845c;
        case 0x258460u: goto label_258460;
        case 0x258464u: goto label_258464;
        case 0x258468u: goto label_258468;
        case 0x25846cu: goto label_25846c;
        case 0x258470u: goto label_258470;
        case 0x258474u: goto label_258474;
        case 0x258478u: goto label_258478;
        case 0x25847cu: goto label_25847c;
        case 0x258480u: goto label_258480;
        case 0x258484u: goto label_258484;
        case 0x258488u: goto label_258488;
        case 0x25848cu: goto label_25848c;
        case 0x258490u: goto label_258490;
        case 0x258494u: goto label_258494;
        case 0x258498u: goto label_258498;
        case 0x25849cu: goto label_25849c;
        case 0x2584a0u: goto label_2584a0;
        case 0x2584a4u: goto label_2584a4;
        case 0x2584a8u: goto label_2584a8;
        case 0x2584acu: goto label_2584ac;
        case 0x2584b0u: goto label_2584b0;
        case 0x2584b4u: goto label_2584b4;
        case 0x2584b8u: goto label_2584b8;
        case 0x2584bcu: goto label_2584bc;
        case 0x2584c0u: goto label_2584c0;
        case 0x2584c4u: goto label_2584c4;
        case 0x2584c8u: goto label_2584c8;
        case 0x2584ccu: goto label_2584cc;
        case 0x2584d0u: goto label_2584d0;
        case 0x2584d4u: goto label_2584d4;
        case 0x2584d8u: goto label_2584d8;
        case 0x2584dcu: goto label_2584dc;
        case 0x2584e0u: goto label_2584e0;
        case 0x2584e4u: goto label_2584e4;
        case 0x2584e8u: goto label_2584e8;
        case 0x2584ecu: goto label_2584ec;
        case 0x2584f0u: goto label_2584f0;
        case 0x2584f4u: goto label_2584f4;
        case 0x2584f8u: goto label_2584f8;
        case 0x2584fcu: goto label_2584fc;
        case 0x258500u: goto label_258500;
        case 0x258504u: goto label_258504;
        case 0x258508u: goto label_258508;
        case 0x25850cu: goto label_25850c;
        case 0x258510u: goto label_258510;
        case 0x258514u: goto label_258514;
        case 0x258518u: goto label_258518;
        case 0x25851cu: goto label_25851c;
        case 0x258520u: goto label_258520;
        case 0x258524u: goto label_258524;
        case 0x258528u: goto label_258528;
        case 0x25852cu: goto label_25852c;
        case 0x258530u: goto label_258530;
        case 0x258534u: goto label_258534;
        case 0x258538u: goto label_258538;
        case 0x25853cu: goto label_25853c;
        case 0x258540u: goto label_258540;
        case 0x258544u: goto label_258544;
        case 0x258548u: goto label_258548;
        case 0x25854cu: goto label_25854c;
        case 0x258550u: goto label_258550;
        case 0x258554u: goto label_258554;
        case 0x258558u: goto label_258558;
        case 0x25855cu: goto label_25855c;
        case 0x258560u: goto label_258560;
        case 0x258564u: goto label_258564;
        case 0x258568u: goto label_258568;
        case 0x25856cu: goto label_25856c;
        case 0x258570u: goto label_258570;
        case 0x258574u: goto label_258574;
        case 0x258578u: goto label_258578;
        case 0x25857cu: goto label_25857c;
        case 0x258580u: goto label_258580;
        case 0x258584u: goto label_258584;
        case 0x258588u: goto label_258588;
        case 0x25858cu: goto label_25858c;
        case 0x258590u: goto label_258590;
        case 0x258594u: goto label_258594;
        case 0x258598u: goto label_258598;
        case 0x25859cu: goto label_25859c;
        case 0x2585a0u: goto label_2585a0;
        case 0x2585a4u: goto label_2585a4;
        case 0x2585a8u: goto label_2585a8;
        case 0x2585acu: goto label_2585ac;
        case 0x2585b0u: goto label_2585b0;
        case 0x2585b4u: goto label_2585b4;
        case 0x2585b8u: goto label_2585b8;
        case 0x2585bcu: goto label_2585bc;
        case 0x2585c0u: goto label_2585c0;
        case 0x2585c4u: goto label_2585c4;
        case 0x2585c8u: goto label_2585c8;
        case 0x2585ccu: goto label_2585cc;
        case 0x2585d0u: goto label_2585d0;
        case 0x2585d4u: goto label_2585d4;
        case 0x2585d8u: goto label_2585d8;
        case 0x2585dcu: goto label_2585dc;
        case 0x2585e0u: goto label_2585e0;
        case 0x2585e4u: goto label_2585e4;
        case 0x2585e8u: goto label_2585e8;
        case 0x2585ecu: goto label_2585ec;
        case 0x2585f0u: goto label_2585f0;
        case 0x2585f4u: goto label_2585f4;
        case 0x2585f8u: goto label_2585f8;
        case 0x2585fcu: goto label_2585fc;
        case 0x258600u: goto label_258600;
        case 0x258604u: goto label_258604;
        case 0x258608u: goto label_258608;
        case 0x25860cu: goto label_25860c;
        case 0x258610u: goto label_258610;
        case 0x258614u: goto label_258614;
        case 0x258618u: goto label_258618;
        case 0x25861cu: goto label_25861c;
        case 0x258620u: goto label_258620;
        case 0x258624u: goto label_258624;
        case 0x258628u: goto label_258628;
        case 0x25862cu: goto label_25862c;
        case 0x258630u: goto label_258630;
        case 0x258634u: goto label_258634;
        case 0x258638u: goto label_258638;
        case 0x25863cu: goto label_25863c;
        case 0x258640u: goto label_258640;
        case 0x258644u: goto label_258644;
        case 0x258648u: goto label_258648;
        case 0x25864cu: goto label_25864c;
        case 0x258650u: goto label_258650;
        case 0x258654u: goto label_258654;
        case 0x258658u: goto label_258658;
        case 0x25865cu: goto label_25865c;
        case 0x258660u: goto label_258660;
        case 0x258664u: goto label_258664;
        case 0x258668u: goto label_258668;
        case 0x25866cu: goto label_25866c;
        case 0x258670u: goto label_258670;
        case 0x258674u: goto label_258674;
        case 0x258678u: goto label_258678;
        case 0x25867cu: goto label_25867c;
        case 0x258680u: goto label_258680;
        case 0x258684u: goto label_258684;
        case 0x258688u: goto label_258688;
        case 0x25868cu: goto label_25868c;
        case 0x258690u: goto label_258690;
        case 0x258694u: goto label_258694;
        case 0x258698u: goto label_258698;
        case 0x25869cu: goto label_25869c;
        case 0x2586a0u: goto label_2586a0;
        case 0x2586a4u: goto label_2586a4;
        case 0x2586a8u: goto label_2586a8;
        case 0x2586acu: goto label_2586ac;
        case 0x2586b0u: goto label_2586b0;
        case 0x2586b4u: goto label_2586b4;
        case 0x2586b8u: goto label_2586b8;
        case 0x2586bcu: goto label_2586bc;
        case 0x2586c0u: goto label_2586c0;
        case 0x2586c4u: goto label_2586c4;
        case 0x2586c8u: goto label_2586c8;
        case 0x2586ccu: goto label_2586cc;
        case 0x2586d0u: goto label_2586d0;
        case 0x2586d4u: goto label_2586d4;
        case 0x2586d8u: goto label_2586d8;
        case 0x2586dcu: goto label_2586dc;
        case 0x2586e0u: goto label_2586e0;
        case 0x2586e4u: goto label_2586e4;
        case 0x2586e8u: goto label_2586e8;
        case 0x2586ecu: goto label_2586ec;
        case 0x2586f0u: goto label_2586f0;
        case 0x2586f4u: goto label_2586f4;
        case 0x2586f8u: goto label_2586f8;
        case 0x2586fcu: goto label_2586fc;
        case 0x258700u: goto label_258700;
        case 0x258704u: goto label_258704;
        case 0x258708u: goto label_258708;
        case 0x25870cu: goto label_25870c;
        case 0x258710u: goto label_258710;
        case 0x258714u: goto label_258714;
        case 0x258718u: goto label_258718;
        case 0x25871cu: goto label_25871c;
        case 0x258720u: goto label_258720;
        case 0x258724u: goto label_258724;
        case 0x258728u: goto label_258728;
        case 0x25872cu: goto label_25872c;
        case 0x258730u: goto label_258730;
        case 0x258734u: goto label_258734;
        case 0x258738u: goto label_258738;
        case 0x25873cu: goto label_25873c;
        case 0x258740u: goto label_258740;
        case 0x258744u: goto label_258744;
        case 0x258748u: goto label_258748;
        case 0x25874cu: goto label_25874c;
        case 0x258750u: goto label_258750;
        case 0x258754u: goto label_258754;
        case 0x258758u: goto label_258758;
        case 0x25875cu: goto label_25875c;
        case 0x258760u: goto label_258760;
        case 0x258764u: goto label_258764;
        case 0x258768u: goto label_258768;
        case 0x25876cu: goto label_25876c;
        case 0x258770u: goto label_258770;
        case 0x258774u: goto label_258774;
        case 0x258778u: goto label_258778;
        case 0x25877cu: goto label_25877c;
        case 0x258780u: goto label_258780;
        case 0x258784u: goto label_258784;
        case 0x258788u: goto label_258788;
        case 0x25878cu: goto label_25878c;
        case 0x258790u: goto label_258790;
        case 0x258794u: goto label_258794;
        case 0x258798u: goto label_258798;
        case 0x25879cu: goto label_25879c;
        case 0x2587a0u: goto label_2587a0;
        case 0x2587a4u: goto label_2587a4;
        case 0x2587a8u: goto label_2587a8;
        case 0x2587acu: goto label_2587ac;
        case 0x2587b0u: goto label_2587b0;
        case 0x2587b4u: goto label_2587b4;
        case 0x2587b8u: goto label_2587b8;
        case 0x2587bcu: goto label_2587bc;
        case 0x2587c0u: goto label_2587c0;
        case 0x2587c4u: goto label_2587c4;
        case 0x2587c8u: goto label_2587c8;
        case 0x2587ccu: goto label_2587cc;
        case 0x2587d0u: goto label_2587d0;
        case 0x2587d4u: goto label_2587d4;
        case 0x2587d8u: goto label_2587d8;
        case 0x2587dcu: goto label_2587dc;
        case 0x2587e0u: goto label_2587e0;
        case 0x2587e4u: goto label_2587e4;
        case 0x2587e8u: goto label_2587e8;
        case 0x2587ecu: goto label_2587ec;
        case 0x2587f0u: goto label_2587f0;
        case 0x2587f4u: goto label_2587f4;
        case 0x2587f8u: goto label_2587f8;
        case 0x2587fcu: goto label_2587fc;
        case 0x258800u: goto label_258800;
        case 0x258804u: goto label_258804;
        case 0x258808u: goto label_258808;
        case 0x25880cu: goto label_25880c;
        case 0x258810u: goto label_258810;
        case 0x258814u: goto label_258814;
        case 0x258818u: goto label_258818;
        case 0x25881cu: goto label_25881c;
        case 0x258820u: goto label_258820;
        case 0x258824u: goto label_258824;
        case 0x258828u: goto label_258828;
        case 0x25882cu: goto label_25882c;
        case 0x258830u: goto label_258830;
        case 0x258834u: goto label_258834;
        case 0x258838u: goto label_258838;
        case 0x25883cu: goto label_25883c;
        case 0x258840u: goto label_258840;
        case 0x258844u: goto label_258844;
        case 0x258848u: goto label_258848;
        case 0x25884cu: goto label_25884c;
        case 0x258850u: goto label_258850;
        case 0x258854u: goto label_258854;
        case 0x258858u: goto label_258858;
        case 0x25885cu: goto label_25885c;
        case 0x258860u: goto label_258860;
        case 0x258864u: goto label_258864;
        case 0x258868u: goto label_258868;
        case 0x25886cu: goto label_25886c;
        case 0x258870u: goto label_258870;
        case 0x258874u: goto label_258874;
        case 0x258878u: goto label_258878;
        case 0x25887cu: goto label_25887c;
        case 0x258880u: goto label_258880;
        case 0x258884u: goto label_258884;
        case 0x258888u: goto label_258888;
        case 0x25888cu: goto label_25888c;
        case 0x258890u: goto label_258890;
        case 0x258894u: goto label_258894;
        case 0x258898u: goto label_258898;
        case 0x25889cu: goto label_25889c;
        case 0x2588a0u: goto label_2588a0;
        case 0x2588a4u: goto label_2588a4;
        case 0x2588a8u: goto label_2588a8;
        case 0x2588acu: goto label_2588ac;
        case 0x2588b0u: goto label_2588b0;
        case 0x2588b4u: goto label_2588b4;
        case 0x2588b8u: goto label_2588b8;
        case 0x2588bcu: goto label_2588bc;
        case 0x2588c0u: goto label_2588c0;
        case 0x2588c4u: goto label_2588c4;
        case 0x2588c8u: goto label_2588c8;
        case 0x2588ccu: goto label_2588cc;
        case 0x2588d0u: goto label_2588d0;
        case 0x2588d4u: goto label_2588d4;
        case 0x2588d8u: goto label_2588d8;
        case 0x2588dcu: goto label_2588dc;
        case 0x2588e0u: goto label_2588e0;
        case 0x2588e4u: goto label_2588e4;
        case 0x2588e8u: goto label_2588e8;
        case 0x2588ecu: goto label_2588ec;
        case 0x2588f0u: goto label_2588f0;
        case 0x2588f4u: goto label_2588f4;
        case 0x2588f8u: goto label_2588f8;
        case 0x2588fcu: goto label_2588fc;
        case 0x258900u: goto label_258900;
        case 0x258904u: goto label_258904;
        case 0x258908u: goto label_258908;
        case 0x25890cu: goto label_25890c;
        case 0x258910u: goto label_258910;
        case 0x258914u: goto label_258914;
        case 0x258918u: goto label_258918;
        case 0x25891cu: goto label_25891c;
        case 0x258920u: goto label_258920;
        case 0x258924u: goto label_258924;
        case 0x258928u: goto label_258928;
        case 0x25892cu: goto label_25892c;
        case 0x258930u: goto label_258930;
        case 0x258934u: goto label_258934;
        case 0x258938u: goto label_258938;
        case 0x25893cu: goto label_25893c;
        case 0x258940u: goto label_258940;
        case 0x258944u: goto label_258944;
        case 0x258948u: goto label_258948;
        case 0x25894cu: goto label_25894c;
        case 0x258950u: goto label_258950;
        case 0x258954u: goto label_258954;
        case 0x258958u: goto label_258958;
        case 0x25895cu: goto label_25895c;
        case 0x258960u: goto label_258960;
        case 0x258964u: goto label_258964;
        case 0x258968u: goto label_258968;
        case 0x25896cu: goto label_25896c;
        case 0x258970u: goto label_258970;
        case 0x258974u: goto label_258974;
        case 0x258978u: goto label_258978;
        case 0x25897cu: goto label_25897c;
        case 0x258980u: goto label_258980;
        case 0x258984u: goto label_258984;
        case 0x258988u: goto label_258988;
        case 0x25898cu: goto label_25898c;
        case 0x258990u: goto label_258990;
        case 0x258994u: goto label_258994;
        case 0x258998u: goto label_258998;
        case 0x25899cu: goto label_25899c;
        case 0x2589a0u: goto label_2589a0;
        case 0x2589a4u: goto label_2589a4;
        case 0x2589a8u: goto label_2589a8;
        case 0x2589acu: goto label_2589ac;
        case 0x2589b0u: goto label_2589b0;
        case 0x2589b4u: goto label_2589b4;
        case 0x2589b8u: goto label_2589b8;
        case 0x2589bcu: goto label_2589bc;
        case 0x2589c0u: goto label_2589c0;
        case 0x2589c4u: goto label_2589c4;
        case 0x2589c8u: goto label_2589c8;
        case 0x2589ccu: goto label_2589cc;
        case 0x2589d0u: goto label_2589d0;
        case 0x2589d4u: goto label_2589d4;
        case 0x2589d8u: goto label_2589d8;
        case 0x2589dcu: goto label_2589dc;
        case 0x2589e0u: goto label_2589e0;
        case 0x2589e4u: goto label_2589e4;
        case 0x2589e8u: goto label_2589e8;
        case 0x2589ecu: goto label_2589ec;
        case 0x2589f0u: goto label_2589f0;
        case 0x2589f4u: goto label_2589f4;
        case 0x2589f8u: goto label_2589f8;
        case 0x2589fcu: goto label_2589fc;
        case 0x258a00u: goto label_258a00;
        case 0x258a04u: goto label_258a04;
        case 0x258a08u: goto label_258a08;
        case 0x258a0cu: goto label_258a0c;
        case 0x258a10u: goto label_258a10;
        case 0x258a14u: goto label_258a14;
        case 0x258a18u: goto label_258a18;
        case 0x258a1cu: goto label_258a1c;
        case 0x258a20u: goto label_258a20;
        case 0x258a24u: goto label_258a24;
        case 0x258a28u: goto label_258a28;
        case 0x258a2cu: goto label_258a2c;
        case 0x258a30u: goto label_258a30;
        case 0x258a34u: goto label_258a34;
        case 0x258a38u: goto label_258a38;
        case 0x258a3cu: goto label_258a3c;
        case 0x258a40u: goto label_258a40;
        case 0x258a44u: goto label_258a44;
        case 0x258a48u: goto label_258a48;
        case 0x258a4cu: goto label_258a4c;
        case 0x258a50u: goto label_258a50;
        case 0x258a54u: goto label_258a54;
        case 0x258a58u: goto label_258a58;
        case 0x258a5cu: goto label_258a5c;
        case 0x258a60u: goto label_258a60;
        case 0x258a64u: goto label_258a64;
        case 0x258a68u: goto label_258a68;
        case 0x258a6cu: goto label_258a6c;
        case 0x258a70u: goto label_258a70;
        case 0x258a74u: goto label_258a74;
        case 0x258a78u: goto label_258a78;
        case 0x258a7cu: goto label_258a7c;
        case 0x258a80u: goto label_258a80;
        case 0x258a84u: goto label_258a84;
        case 0x258a88u: goto label_258a88;
        case 0x258a8cu: goto label_258a8c;
        case 0x258a90u: goto label_258a90;
        case 0x258a94u: goto label_258a94;
        case 0x258a98u: goto label_258a98;
        case 0x258a9cu: goto label_258a9c;
        case 0x258aa0u: goto label_258aa0;
        case 0x258aa4u: goto label_258aa4;
        case 0x258aa8u: goto label_258aa8;
        case 0x258aacu: goto label_258aac;
        case 0x258ab0u: goto label_258ab0;
        case 0x258ab4u: goto label_258ab4;
        case 0x258ab8u: goto label_258ab8;
        case 0x258abcu: goto label_258abc;
        case 0x258ac0u: goto label_258ac0;
        case 0x258ac4u: goto label_258ac4;
        case 0x258ac8u: goto label_258ac8;
        case 0x258accu: goto label_258acc;
        case 0x258ad0u: goto label_258ad0;
        case 0x258ad4u: goto label_258ad4;
        case 0x258ad8u: goto label_258ad8;
        case 0x258adcu: goto label_258adc;
        case 0x258ae0u: goto label_258ae0;
        case 0x258ae4u: goto label_258ae4;
        case 0x258ae8u: goto label_258ae8;
        case 0x258aecu: goto label_258aec;
        case 0x258af0u: goto label_258af0;
        case 0x258af4u: goto label_258af4;
        case 0x258af8u: goto label_258af8;
        case 0x258afcu: goto label_258afc;
        case 0x258b00u: goto label_258b00;
        case 0x258b04u: goto label_258b04;
        case 0x258b08u: goto label_258b08;
        case 0x258b0cu: goto label_258b0c;
        case 0x258b10u: goto label_258b10;
        case 0x258b14u: goto label_258b14;
        case 0x258b18u: goto label_258b18;
        case 0x258b1cu: goto label_258b1c;
        case 0x258b20u: goto label_258b20;
        case 0x258b24u: goto label_258b24;
        case 0x258b28u: goto label_258b28;
        case 0x258b2cu: goto label_258b2c;
        case 0x258b30u: goto label_258b30;
        case 0x258b34u: goto label_258b34;
        case 0x258b38u: goto label_258b38;
        case 0x258b3cu: goto label_258b3c;
        case 0x258b40u: goto label_258b40;
        case 0x258b44u: goto label_258b44;
        case 0x258b48u: goto label_258b48;
        case 0x258b4cu: goto label_258b4c;
        case 0x258b50u: goto label_258b50;
        case 0x258b54u: goto label_258b54;
        case 0x258b58u: goto label_258b58;
        case 0x258b5cu: goto label_258b5c;
        case 0x258b60u: goto label_258b60;
        case 0x258b64u: goto label_258b64;
        case 0x258b68u: goto label_258b68;
        case 0x258b6cu: goto label_258b6c;
        case 0x258b70u: goto label_258b70;
        case 0x258b74u: goto label_258b74;
        case 0x258b78u: goto label_258b78;
        case 0x258b7cu: goto label_258b7c;
        case 0x258b80u: goto label_258b80;
        case 0x258b84u: goto label_258b84;
        case 0x258b88u: goto label_258b88;
        case 0x258b8cu: goto label_258b8c;
        case 0x258b90u: goto label_258b90;
        case 0x258b94u: goto label_258b94;
        case 0x258b98u: goto label_258b98;
        case 0x258b9cu: goto label_258b9c;
        case 0x258ba0u: goto label_258ba0;
        case 0x258ba4u: goto label_258ba4;
        case 0x258ba8u: goto label_258ba8;
        case 0x258bacu: goto label_258bac;
        case 0x258bb0u: goto label_258bb0;
        case 0x258bb4u: goto label_258bb4;
        case 0x258bb8u: goto label_258bb8;
        case 0x258bbcu: goto label_258bbc;
        case 0x258bc0u: goto label_258bc0;
        case 0x258bc4u: goto label_258bc4;
        case 0x258bc8u: goto label_258bc8;
        case 0x258bccu: goto label_258bcc;
        case 0x258bd0u: goto label_258bd0;
        case 0x258bd4u: goto label_258bd4;
        case 0x258bd8u: goto label_258bd8;
        case 0x258bdcu: goto label_258bdc;
        case 0x258be0u: goto label_258be0;
        case 0x258be4u: goto label_258be4;
        case 0x258be8u: goto label_258be8;
        case 0x258becu: goto label_258bec;
        case 0x258bf0u: goto label_258bf0;
        case 0x258bf4u: goto label_258bf4;
        case 0x258bf8u: goto label_258bf8;
        case 0x258bfcu: goto label_258bfc;
        case 0x258c00u: goto label_258c00;
        case 0x258c04u: goto label_258c04;
        case 0x258c08u: goto label_258c08;
        case 0x258c0cu: goto label_258c0c;
        case 0x258c10u: goto label_258c10;
        case 0x258c14u: goto label_258c14;
        case 0x258c18u: goto label_258c18;
        case 0x258c1cu: goto label_258c1c;
        case 0x258c20u: goto label_258c20;
        case 0x258c24u: goto label_258c24;
        case 0x258c28u: goto label_258c28;
        case 0x258c2cu: goto label_258c2c;
        case 0x258c30u: goto label_258c30;
        case 0x258c34u: goto label_258c34;
        case 0x258c38u: goto label_258c38;
        case 0x258c3cu: goto label_258c3c;
        case 0x258c40u: goto label_258c40;
        case 0x258c44u: goto label_258c44;
        case 0x258c48u: goto label_258c48;
        case 0x258c4cu: goto label_258c4c;
        case 0x258c50u: goto label_258c50;
        case 0x258c54u: goto label_258c54;
        case 0x258c58u: goto label_258c58;
        case 0x258c5cu: goto label_258c5c;
        case 0x258c60u: goto label_258c60;
        case 0x258c64u: goto label_258c64;
        case 0x258c68u: goto label_258c68;
        case 0x258c6cu: goto label_258c6c;
        case 0x258c70u: goto label_258c70;
        case 0x258c74u: goto label_258c74;
        case 0x258c78u: goto label_258c78;
        case 0x258c7cu: goto label_258c7c;
        case 0x258c80u: goto label_258c80;
        case 0x258c84u: goto label_258c84;
        case 0x258c88u: goto label_258c88;
        case 0x258c8cu: goto label_258c8c;
        case 0x258c90u: goto label_258c90;
        case 0x258c94u: goto label_258c94;
        case 0x258c98u: goto label_258c98;
        case 0x258c9cu: goto label_258c9c;
        case 0x258ca0u: goto label_258ca0;
        case 0x258ca4u: goto label_258ca4;
        case 0x258ca8u: goto label_258ca8;
        case 0x258cacu: goto label_258cac;
        case 0x258cb0u: goto label_258cb0;
        case 0x258cb4u: goto label_258cb4;
        case 0x258cb8u: goto label_258cb8;
        case 0x258cbcu: goto label_258cbc;
        case 0x258cc0u: goto label_258cc0;
        case 0x258cc4u: goto label_258cc4;
        case 0x258cc8u: goto label_258cc8;
        case 0x258cccu: goto label_258ccc;
        case 0x258cd0u: goto label_258cd0;
        case 0x258cd4u: goto label_258cd4;
        case 0x258cd8u: goto label_258cd8;
        case 0x258cdcu: goto label_258cdc;
        case 0x258ce0u: goto label_258ce0;
        case 0x258ce4u: goto label_258ce4;
        case 0x258ce8u: goto label_258ce8;
        case 0x258cecu: goto label_258cec;
        case 0x258cf0u: goto label_258cf0;
        case 0x258cf4u: goto label_258cf4;
        case 0x258cf8u: goto label_258cf8;
        case 0x258cfcu: goto label_258cfc;
        case 0x258d00u: goto label_258d00;
        case 0x258d04u: goto label_258d04;
        case 0x258d08u: goto label_258d08;
        case 0x258d0cu: goto label_258d0c;
        case 0x258d10u: goto label_258d10;
        case 0x258d14u: goto label_258d14;
        case 0x258d18u: goto label_258d18;
        case 0x258d1cu: goto label_258d1c;
        case 0x258d20u: goto label_258d20;
        case 0x258d24u: goto label_258d24;
        case 0x258d28u: goto label_258d28;
        case 0x258d2cu: goto label_258d2c;
        case 0x258d30u: goto label_258d30;
        case 0x258d34u: goto label_258d34;
        case 0x258d38u: goto label_258d38;
        case 0x258d3cu: goto label_258d3c;
        case 0x258d40u: goto label_258d40;
        case 0x258d44u: goto label_258d44;
        case 0x258d48u: goto label_258d48;
        case 0x258d4cu: goto label_258d4c;
        case 0x258d50u: goto label_258d50;
        case 0x258d54u: goto label_258d54;
        case 0x258d58u: goto label_258d58;
        case 0x258d5cu: goto label_258d5c;
        case 0x258d60u: goto label_258d60;
        case 0x258d64u: goto label_258d64;
        case 0x258d68u: goto label_258d68;
        case 0x258d6cu: goto label_258d6c;
        case 0x258d70u: goto label_258d70;
        case 0x258d74u: goto label_258d74;
        case 0x258d78u: goto label_258d78;
        case 0x258d7cu: goto label_258d7c;
        case 0x258d80u: goto label_258d80;
        case 0x258d84u: goto label_258d84;
        case 0x258d88u: goto label_258d88;
        case 0x258d8cu: goto label_258d8c;
        case 0x258d90u: goto label_258d90;
        case 0x258d94u: goto label_258d94;
        case 0x258d98u: goto label_258d98;
        case 0x258d9cu: goto label_258d9c;
        case 0x258da0u: goto label_258da0;
        case 0x258da4u: goto label_258da4;
        case 0x258da8u: goto label_258da8;
        case 0x258dacu: goto label_258dac;
        case 0x258db0u: goto label_258db0;
        case 0x258db4u: goto label_258db4;
        case 0x258db8u: goto label_258db8;
        case 0x258dbcu: goto label_258dbc;
        case 0x258dc0u: goto label_258dc0;
        case 0x258dc4u: goto label_258dc4;
        case 0x258dc8u: goto label_258dc8;
        case 0x258dccu: goto label_258dcc;
        case 0x258dd0u: goto label_258dd0;
        case 0x258dd4u: goto label_258dd4;
        case 0x258dd8u: goto label_258dd8;
        case 0x258ddcu: goto label_258ddc;
        case 0x258de0u: goto label_258de0;
        case 0x258de4u: goto label_258de4;
        case 0x258de8u: goto label_258de8;
        case 0x258decu: goto label_258dec;
        case 0x258df0u: goto label_258df0;
        case 0x258df4u: goto label_258df4;
        case 0x258df8u: goto label_258df8;
        case 0x258dfcu: goto label_258dfc;
        case 0x258e00u: goto label_258e00;
        case 0x258e04u: goto label_258e04;
        case 0x258e08u: goto label_258e08;
        case 0x258e0cu: goto label_258e0c;
        case 0x258e10u: goto label_258e10;
        case 0x258e14u: goto label_258e14;
        case 0x258e18u: goto label_258e18;
        case 0x258e1cu: goto label_258e1c;
        case 0x258e20u: goto label_258e20;
        case 0x258e24u: goto label_258e24;
        case 0x258e28u: goto label_258e28;
        case 0x258e2cu: goto label_258e2c;
        case 0x258e30u: goto label_258e30;
        case 0x258e34u: goto label_258e34;
        case 0x258e38u: goto label_258e38;
        case 0x258e3cu: goto label_258e3c;
        case 0x258e40u: goto label_258e40;
        case 0x258e44u: goto label_258e44;
        case 0x258e48u: goto label_258e48;
        case 0x258e4cu: goto label_258e4c;
        case 0x258e50u: goto label_258e50;
        case 0x258e54u: goto label_258e54;
        case 0x258e58u: goto label_258e58;
        case 0x258e5cu: goto label_258e5c;
        case 0x258e60u: goto label_258e60;
        case 0x258e64u: goto label_258e64;
        case 0x258e68u: goto label_258e68;
        case 0x258e6cu: goto label_258e6c;
        case 0x258e70u: goto label_258e70;
        case 0x258e74u: goto label_258e74;
        case 0x258e78u: goto label_258e78;
        case 0x258e7cu: goto label_258e7c;
        case 0x258e80u: goto label_258e80;
        case 0x258e84u: goto label_258e84;
        case 0x258e88u: goto label_258e88;
        case 0x258e8cu: goto label_258e8c;
        case 0x258e90u: goto label_258e90;
        case 0x258e94u: goto label_258e94;
        case 0x258e98u: goto label_258e98;
        case 0x258e9cu: goto label_258e9c;
        case 0x258ea0u: goto label_258ea0;
        case 0x258ea4u: goto label_258ea4;
        case 0x258ea8u: goto label_258ea8;
        case 0x258eacu: goto label_258eac;
        case 0x258eb0u: goto label_258eb0;
        case 0x258eb4u: goto label_258eb4;
        case 0x258eb8u: goto label_258eb8;
        case 0x258ebcu: goto label_258ebc;
        case 0x258ec0u: goto label_258ec0;
        case 0x258ec4u: goto label_258ec4;
        case 0x258ec8u: goto label_258ec8;
        case 0x258eccu: goto label_258ecc;
        case 0x258ed0u: goto label_258ed0;
        case 0x258ed4u: goto label_258ed4;
        case 0x258ed8u: goto label_258ed8;
        case 0x258edcu: goto label_258edc;
        case 0x258ee0u: goto label_258ee0;
        case 0x258ee4u: goto label_258ee4;
        case 0x258ee8u: goto label_258ee8;
        case 0x258eecu: goto label_258eec;
        case 0x258ef0u: goto label_258ef0;
        case 0x258ef4u: goto label_258ef4;
        case 0x258ef8u: goto label_258ef8;
        case 0x258efcu: goto label_258efc;
        case 0x258f00u: goto label_258f00;
        case 0x258f04u: goto label_258f04;
        case 0x258f08u: goto label_258f08;
        case 0x258f0cu: goto label_258f0c;
        case 0x258f10u: goto label_258f10;
        case 0x258f14u: goto label_258f14;
        case 0x258f18u: goto label_258f18;
        case 0x258f1cu: goto label_258f1c;
        case 0x258f20u: goto label_258f20;
        case 0x258f24u: goto label_258f24;
        case 0x258f28u: goto label_258f28;
        case 0x258f2cu: goto label_258f2c;
        case 0x258f30u: goto label_258f30;
        case 0x258f34u: goto label_258f34;
        case 0x258f38u: goto label_258f38;
        case 0x258f3cu: goto label_258f3c;
        case 0x258f40u: goto label_258f40;
        case 0x258f44u: goto label_258f44;
        case 0x258f48u: goto label_258f48;
        case 0x258f4cu: goto label_258f4c;
        case 0x258f50u: goto label_258f50;
        case 0x258f54u: goto label_258f54;
        case 0x258f58u: goto label_258f58;
        case 0x258f5cu: goto label_258f5c;
        case 0x258f60u: goto label_258f60;
        case 0x258f64u: goto label_258f64;
        case 0x258f68u: goto label_258f68;
        case 0x258f6cu: goto label_258f6c;
        case 0x258f70u: goto label_258f70;
        case 0x258f74u: goto label_258f74;
        case 0x258f78u: goto label_258f78;
        case 0x258f7cu: goto label_258f7c;
        case 0x258f80u: goto label_258f80;
        case 0x258f84u: goto label_258f84;
        case 0x258f88u: goto label_258f88;
        case 0x258f8cu: goto label_258f8c;
        case 0x258f90u: goto label_258f90;
        case 0x258f94u: goto label_258f94;
        case 0x258f98u: goto label_258f98;
        case 0x258f9cu: goto label_258f9c;
        case 0x258fa0u: goto label_258fa0;
        case 0x258fa4u: goto label_258fa4;
        case 0x258fa8u: goto label_258fa8;
        case 0x258facu: goto label_258fac;
        case 0x258fb0u: goto label_258fb0;
        case 0x258fb4u: goto label_258fb4;
        case 0x258fb8u: goto label_258fb8;
        case 0x258fbcu: goto label_258fbc;
        case 0x258fc0u: goto label_258fc0;
        case 0x258fc4u: goto label_258fc4;
        case 0x258fc8u: goto label_258fc8;
        case 0x258fccu: goto label_258fcc;
        case 0x258fd0u: goto label_258fd0;
        case 0x258fd4u: goto label_258fd4;
        case 0x258fd8u: goto label_258fd8;
        case 0x258fdcu: goto label_258fdc;
        case 0x258fe0u: goto label_258fe0;
        case 0x258fe4u: goto label_258fe4;
        case 0x258fe8u: goto label_258fe8;
        case 0x258fecu: goto label_258fec;
        case 0x258ff0u: goto label_258ff0;
        case 0x258ff4u: goto label_258ff4;
        case 0x258ff8u: goto label_258ff8;
        case 0x258ffcu: goto label_258ffc;
        case 0x259000u: goto label_259000;
        case 0x259004u: goto label_259004;
        case 0x259008u: goto label_259008;
        case 0x25900cu: goto label_25900c;
        case 0x259010u: goto label_259010;
        case 0x259014u: goto label_259014;
        case 0x259018u: goto label_259018;
        case 0x25901cu: goto label_25901c;
        case 0x259020u: goto label_259020;
        case 0x259024u: goto label_259024;
        case 0x259028u: goto label_259028;
        case 0x25902cu: goto label_25902c;
        case 0x259030u: goto label_259030;
        case 0x259034u: goto label_259034;
        case 0x259038u: goto label_259038;
        case 0x25903cu: goto label_25903c;
        case 0x259040u: goto label_259040;
        case 0x259044u: goto label_259044;
        case 0x259048u: goto label_259048;
        case 0x25904cu: goto label_25904c;
        case 0x259050u: goto label_259050;
        case 0x259054u: goto label_259054;
        case 0x259058u: goto label_259058;
        case 0x25905cu: goto label_25905c;
        case 0x259060u: goto label_259060;
        case 0x259064u: goto label_259064;
        case 0x259068u: goto label_259068;
        case 0x25906cu: goto label_25906c;
        case 0x259070u: goto label_259070;
        case 0x259074u: goto label_259074;
        case 0x259078u: goto label_259078;
        case 0x25907cu: goto label_25907c;
        case 0x259080u: goto label_259080;
        case 0x259084u: goto label_259084;
        case 0x259088u: goto label_259088;
        case 0x25908cu: goto label_25908c;
        case 0x259090u: goto label_259090;
        case 0x259094u: goto label_259094;
        case 0x259098u: goto label_259098;
        case 0x25909cu: goto label_25909c;
        case 0x2590a0u: goto label_2590a0;
        case 0x2590a4u: goto label_2590a4;
        case 0x2590a8u: goto label_2590a8;
        case 0x2590acu: goto label_2590ac;
        case 0x2590b0u: goto label_2590b0;
        case 0x2590b4u: goto label_2590b4;
        case 0x2590b8u: goto label_2590b8;
        case 0x2590bcu: goto label_2590bc;
        case 0x2590c0u: goto label_2590c0;
        case 0x2590c4u: goto label_2590c4;
        case 0x2590c8u: goto label_2590c8;
        case 0x2590ccu: goto label_2590cc;
        case 0x2590d0u: goto label_2590d0;
        case 0x2590d4u: goto label_2590d4;
        case 0x2590d8u: goto label_2590d8;
        case 0x2590dcu: goto label_2590dc;
        case 0x2590e0u: goto label_2590e0;
        case 0x2590e4u: goto label_2590e4;
        case 0x2590e8u: goto label_2590e8;
        case 0x2590ecu: goto label_2590ec;
        case 0x2590f0u: goto label_2590f0;
        case 0x2590f4u: goto label_2590f4;
        case 0x2590f8u: goto label_2590f8;
        case 0x2590fcu: goto label_2590fc;
        case 0x259100u: goto label_259100;
        case 0x259104u: goto label_259104;
        case 0x259108u: goto label_259108;
        case 0x25910cu: goto label_25910c;
        case 0x259110u: goto label_259110;
        case 0x259114u: goto label_259114;
        case 0x259118u: goto label_259118;
        case 0x25911cu: goto label_25911c;
        case 0x259120u: goto label_259120;
        case 0x259124u: goto label_259124;
        case 0x259128u: goto label_259128;
        case 0x25912cu: goto label_25912c;
        case 0x259130u: goto label_259130;
        case 0x259134u: goto label_259134;
        case 0x259138u: goto label_259138;
        case 0x25913cu: goto label_25913c;
        case 0x259140u: goto label_259140;
        case 0x259144u: goto label_259144;
        case 0x259148u: goto label_259148;
        case 0x25914cu: goto label_25914c;
        case 0x259150u: goto label_259150;
        case 0x259154u: goto label_259154;
        case 0x259158u: goto label_259158;
        case 0x25915cu: goto label_25915c;
        case 0x259160u: goto label_259160;
        case 0x259164u: goto label_259164;
        case 0x259168u: goto label_259168;
        case 0x25916cu: goto label_25916c;
        case 0x259170u: goto label_259170;
        case 0x259174u: goto label_259174;
        case 0x259178u: goto label_259178;
        case 0x25917cu: goto label_25917c;
        case 0x259180u: goto label_259180;
        case 0x259184u: goto label_259184;
        case 0x259188u: goto label_259188;
        case 0x25918cu: goto label_25918c;
        case 0x259190u: goto label_259190;
        case 0x259194u: goto label_259194;
        case 0x259198u: goto label_259198;
        case 0x25919cu: goto label_25919c;
        case 0x2591a0u: goto label_2591a0;
        case 0x2591a4u: goto label_2591a4;
        case 0x2591a8u: goto label_2591a8;
        case 0x2591acu: goto label_2591ac;
        case 0x2591b0u: goto label_2591b0;
        case 0x2591b4u: goto label_2591b4;
        case 0x2591b8u: goto label_2591b8;
        case 0x2591bcu: goto label_2591bc;
        case 0x2591c0u: goto label_2591c0;
        case 0x2591c4u: goto label_2591c4;
        case 0x2591c8u: goto label_2591c8;
        case 0x2591ccu: goto label_2591cc;
        case 0x2591d0u: goto label_2591d0;
        case 0x2591d4u: goto label_2591d4;
        case 0x2591d8u: goto label_2591d8;
        case 0x2591dcu: goto label_2591dc;
        case 0x2591e0u: goto label_2591e0;
        case 0x2591e4u: goto label_2591e4;
        case 0x2591e8u: goto label_2591e8;
        case 0x2591ecu: goto label_2591ec;
        case 0x2591f0u: goto label_2591f0;
        case 0x2591f4u: goto label_2591f4;
        case 0x2591f8u: goto label_2591f8;
        case 0x2591fcu: goto label_2591fc;
        case 0x259200u: goto label_259200;
        case 0x259204u: goto label_259204;
        case 0x259208u: goto label_259208;
        case 0x25920cu: goto label_25920c;
        case 0x259210u: goto label_259210;
        case 0x259214u: goto label_259214;
        case 0x259218u: goto label_259218;
        case 0x25921cu: goto label_25921c;
        case 0x259220u: goto label_259220;
        case 0x259224u: goto label_259224;
        case 0x259228u: goto label_259228;
        case 0x25922cu: goto label_25922c;
        case 0x259230u: goto label_259230;
        case 0x259234u: goto label_259234;
        case 0x259238u: goto label_259238;
        case 0x25923cu: goto label_25923c;
        case 0x259240u: goto label_259240;
        case 0x259244u: goto label_259244;
        case 0x259248u: goto label_259248;
        case 0x25924cu: goto label_25924c;
        case 0x259250u: goto label_259250;
        case 0x259254u: goto label_259254;
        case 0x259258u: goto label_259258;
        case 0x25925cu: goto label_25925c;
        case 0x259260u: goto label_259260;
        case 0x259264u: goto label_259264;
        case 0x259268u: goto label_259268;
        case 0x25926cu: goto label_25926c;
        case 0x259270u: goto label_259270;
        case 0x259274u: goto label_259274;
        case 0x259278u: goto label_259278;
        case 0x25927cu: goto label_25927c;
        case 0x259280u: goto label_259280;
        case 0x259284u: goto label_259284;
        case 0x259288u: goto label_259288;
        case 0x25928cu: goto label_25928c;
        case 0x259290u: goto label_259290;
        case 0x259294u: goto label_259294;
        case 0x259298u: goto label_259298;
        case 0x25929cu: goto label_25929c;
        case 0x2592a0u: goto label_2592a0;
        case 0x2592a4u: goto label_2592a4;
        case 0x2592a8u: goto label_2592a8;
        case 0x2592acu: goto label_2592ac;
        case 0x2592b0u: goto label_2592b0;
        case 0x2592b4u: goto label_2592b4;
        case 0x2592b8u: goto label_2592b8;
        case 0x2592bcu: goto label_2592bc;
        default: break;
    }

    ctx->pc = 0x2571c0u;

label_2571c0:
    // 0x2571c0: 0x27bdfaf0  addiu       $sp, $sp, -0x510
    ctx->pc = 0x2571c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966000));
label_2571c4:
    // 0x2571c4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2571c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2571c8:
    // 0x2571c8: 0x27a302fc  addiu       $v1, $sp, 0x2FC
    ctx->pc = 0x2571c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 764));
label_2571cc:
    // 0x2571cc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2571ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2571d0:
    // 0x2571d0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2571d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2571d4:
    // 0x2571d4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2571d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2571d8:
    // 0x2571d8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2571d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2571dc:
    // 0x2571dc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2571dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2571e0:
    // 0x2571e0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2571e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2571e4:
    // 0x2571e4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2571e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2571e8:
    // 0x2571e8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2571e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2571ec:
    // 0x2571ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2571ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2571f0:
    // 0x2571f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2571f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2571f4:
    // 0x2571f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2571f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2571f8:
    // 0x2571f8: 0xafa302f0  sw          $v1, 0x2F0($sp)
    ctx->pc = 0x2571f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 752), GPR_U32(ctx, 3));
label_2571fc:
    // 0x2571fc: 0xafa500d8  sw          $a1, 0xD8($sp)
    ctx->pc = 0x2571fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 5));
label_257200:
    // 0x257200: 0x27a302f4  addiu       $v1, $sp, 0x2F4
    ctx->pc = 0x257200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 756));
label_257204:
    // 0x257204: 0xa3a700dc  sb          $a3, 0xDC($sp)
    ctx->pc = 0x257204u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 220), (uint8_t)GPR_U32(ctx, 7));
label_257208:
    // 0x257208: 0x27a500ec  addiu       $a1, $sp, 0xEC
    ctx->pc = 0x257208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
label_25720c:
    // 0x25720c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x25720cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_257210:
    // 0x257210: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x257210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_257214:
    // 0x257214: 0x34660100  ori         $a2, $v1, 0x100
    ctx->pc = 0x257214u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_257218:
    // 0x257218: 0x27a302f8  addiu       $v1, $sp, 0x2F8
    ctx->pc = 0x257218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 760));
label_25721c:
    // 0x25721c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x25721cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_257220:
    // 0x257220: 0xafa500e0  sw          $a1, 0xE0($sp)
    ctx->pc = 0x257220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
label_257224:
    // 0x257224: 0x27a300e4  addiu       $v1, $sp, 0xE4
    ctx->pc = 0x257224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_257228:
    // 0x257228: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x257228u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_25722c:
    // 0x25722c: 0x27a300e8  addiu       $v1, $sp, 0xE8
    ctx->pc = 0x25722cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_257230:
    // 0x257230: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x257230u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_257234:
    // 0x257234: 0x8c85007c  lw          $a1, 0x7C($a0)
    ctx->pc = 0x257234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_257238:
    // 0x257238: 0x8c840080  lw          $a0, 0x80($a0)
    ctx->pc = 0x257238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_25723c:
    // 0x25723c: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x25723cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_257240:
    // 0x257240: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x257240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_257244:
    // 0x257244: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x257244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_257248:
    // 0x257248: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x257248u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_25724c:
    // 0x25724c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x25724cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_257250:
    // 0x257250: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x257250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_257254:
    // 0x257254: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x257254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_257258:
    // 0x257258: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x257258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_25725c:
    // 0x25725c: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x25725cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_257260:
    // 0x257260: 0x1020015f  beqz        $at, . + 4 + (0x15F << 2)
label_257264:
    if (ctx->pc == 0x257264u) {
        ctx->pc = 0x257268u;
        goto label_257268;
    }
    ctx->pc = 0x257260u;
    {
        const bool branch_taken_0x257260 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x257260) {
            ctx->pc = 0x2577E0u;
            goto label_2577e0;
        }
    }
    ctx->pc = 0x257268u;
label_257268:
    // 0x257268: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x257268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_25726c:
    // 0x25726c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25726cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_257270:
    // 0x257270: 0x94770002  lhu         $s7, 0x2($v1)
    ctx->pc = 0x257270u;
    SET_GPR_U32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_257274:
    // 0x257274: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x257274u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_257278:
    // 0x257278: 0x32e6001f  andi        $a2, $s7, 0x1F
    ctx->pc = 0x257278u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)31);
label_25727c:
    // 0x25727c: 0x171943  sra         $v1, $s7, 5
    ctx->pc = 0x25727cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 23), 5));
label_257280:
    // 0x257280: 0xc53004  sllv        $a2, $a1, $a2
    ctx->pc = 0x257280u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
label_257284:
    // 0x257284: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x257284u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_257288:
    // 0x257288: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x257288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_25728c:
    // 0x25728c: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x25728cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_257290:
    // 0x257290: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x257290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_257294:
    // 0x257294: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x257294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_257298:
    // 0x257298: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
label_25729c:
    if (ctx->pc == 0x25729Cu) {
        ctx->pc = 0x25729Cu;
            // 0x25729c: 0xc4f024  and         $fp, $a2, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
        ctx->pc = 0x2572A0u;
        goto label_2572a0;
    }
    ctx->pc = 0x257298u;
    {
        const bool branch_taken_0x257298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25729Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257298u;
            // 0x25729c: 0xc4f024  and         $fp, $a2, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257298) {
            ctx->pc = 0x257330u;
            goto label_257330;
        }
    }
    ctx->pc = 0x2572A0u;
label_2572a0:
    // 0x2572a0: 0x13c00002  beqz        $fp, . + 4 + (0x2 << 2)
label_2572a4:
    if (ctx->pc == 0x2572A4u) {
        ctx->pc = 0x2572A4u;
            // 0x2572a4: 0x27a700e0  addiu       $a3, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x2572A8u;
        goto label_2572a8;
    }
    ctx->pc = 0x2572A0u;
    {
        const bool branch_taken_0x2572a0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2572A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2572A0u;
            // 0x2572a4: 0x27a700e0  addiu       $a3, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2572a0) {
            ctx->pc = 0x2572ACu;
            goto label_2572ac;
        }
    }
    ctx->pc = 0x2572A8u;
label_2572a8:
    // 0x2572a8: 0x27a702f0  addiu       $a3, $sp, 0x2F0
    ctx->pc = 0x2572a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_2572ac:
    // 0x2572ac: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x2572acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_2572b0:
    // 0x2572b0: 0x32e4ffff  andi        $a0, $s7, 0xFFFF
    ctx->pc = 0x2572b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
label_2572b4:
    // 0x2572b4: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2572b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2572b8:
    // 0x2572b8: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
label_2572bc:
    if (ctx->pc == 0x2572BCu) {
        ctx->pc = 0x2572BCu;
            // 0x2572bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2572C0u;
        goto label_2572c0;
    }
    ctx->pc = 0x2572B8u;
    {
        const bool branch_taken_0x2572b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2572BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2572B8u;
            // 0x2572bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2572b8) {
            ctx->pc = 0x2572F8u;
            goto label_2572f8;
        }
    }
    ctx->pc = 0x2572C0u;
label_2572c0:
    // 0x2572c0: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x2572c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2572c4:
    // 0x2572c4: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x2572c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_2572c8:
    // 0x2572c8: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x2572c8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_2572cc:
    // 0x2572cc: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_2572d0:
    if (ctx->pc == 0x2572D0u) {
        ctx->pc = 0x2572D4u;
        goto label_2572d4;
    }
    ctx->pc = 0x2572CCu;
    {
        const bool branch_taken_0x2572cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2572cc) {
            ctx->pc = 0x2572E0u;
            goto label_2572e0;
        }
    }
    ctx->pc = 0x2572D4u;
label_2572d4:
    // 0x2572d4: 0x1000000a  b           . + 4 + (0xA << 2)
label_2572d8:
    if (ctx->pc == 0x2572D8u) {
        ctx->pc = 0x2572DCu;
        goto label_2572dc;
    }
    ctx->pc = 0x2572D4u;
    {
        const bool branch_taken_0x2572d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2572d4) {
            ctx->pc = 0x257300u;
            goto label_257300;
        }
    }
    ctx->pc = 0x2572DCu;
label_2572dc:
    // 0x2572dc: 0x0  nop
    ctx->pc = 0x2572dcu;
    // NOP
label_2572e0:
    // 0x2572e0: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x2572e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_2572e4:
    // 0x2572e4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2572e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2572e8:
    // 0x2572e8: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x2572e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2572ec:
    // 0x2572ec: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_2572f0:
    if (ctx->pc == 0x2572F0u) {
        ctx->pc = 0x2572F0u;
            // 0x2572f0: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x2572F4u;
        goto label_2572f4;
    }
    ctx->pc = 0x2572ECu;
    {
        const bool branch_taken_0x2572ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2572F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2572ECu;
            // 0x2572f0: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2572ec) {
            ctx->pc = 0x2572C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2572c8;
        }
    }
    ctx->pc = 0x2572F4u;
label_2572f4:
    // 0x2572f4: 0x0  nop
    ctx->pc = 0x2572f4u;
    // NOP
label_2572f8:
    // 0x2572f8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2572f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2572fc:
    // 0x2572fc: 0x0  nop
    ctx->pc = 0x2572fcu;
    // NOP
label_257300:
    // 0x257300: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x257300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_257304:
    // 0x257304: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x257304u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_257308:
    // 0x257308: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x257308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_25730c:
    // 0x25730c: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x25730cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
label_257310:
    // 0x257310: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x257310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_257314:
    // 0x257314: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x257314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_257318:
    // 0x257318: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x257318u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_25731c:
    // 0x25731c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x25731cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_257320:
    // 0x257320: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x257320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_257324:
    // 0x257324: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x257324u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_257328:
    // 0x257328: 0x10000125  b           . + 4 + (0x125 << 2)
label_25732c:
    if (ctx->pc == 0x25732Cu) {
        ctx->pc = 0x25732Cu;
            // 0x25732c: 0xa4640000  sh          $a0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->pc = 0x257330u;
        goto label_257330;
    }
    ctx->pc = 0x257328u;
    {
        const bool branch_taken_0x257328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25732Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257328u;
            // 0x25732c: 0xa4640000  sh          $a0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257328) {
            ctx->pc = 0x2577C0u;
            goto label_2577c0;
        }
    }
    ctx->pc = 0x257330u;
label_257330:
    // 0x257330: 0x8ea30070  lw          $v1, 0x70($s5)
    ctx->pc = 0x257330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_257334:
    // 0x257334: 0x172100  sll         $a0, $s7, 4
    ctx->pc = 0x257334u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
label_257338:
    // 0x257338: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x257338u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25733c:
    // 0x25733c: 0x10000156  b           . + 4 + (0x156 << 2)
label_257340:
    if (ctx->pc == 0x257340u) {
        ctx->pc = 0x257340u;
            // 0x257340: 0x649821  addu        $s3, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->pc = 0x257344u;
        goto label_257344;
    }
    ctx->pc = 0x25733Cu;
    {
        const bool branch_taken_0x25733c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25733Cu;
            // 0x257340: 0x649821  addu        $s3, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25733c) {
            ctx->pc = 0x257898u;
            goto label_257898;
        }
    }
    ctx->pc = 0x257344u;
label_257344:
    // 0x257344: 0x0  nop
    ctx->pc = 0x257344u;
    // NOP
label_257348:
    // 0x257348: 0x8fa602f0  lw          $a2, 0x2F0($sp)
    ctx->pc = 0x257348u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_25734c:
    // 0x25734c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x25734cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_257350:
    // 0x257350: 0x8ea30070  lw          $v1, 0x70($s5)
    ctx->pc = 0x257350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_257354:
    // 0x257354: 0x8e680004  lw          $t0, 0x4($s3)
    ctx->pc = 0x257354u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_257358:
    // 0x257358: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x257358u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
label_25735c:
    // 0x25735c: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x25735cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_257360:
    // 0x257360: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x257360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_257364:
    // 0x257364: 0x94c60000  lhu         $a2, 0x0($a2)
    ctx->pc = 0x257364u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_257368:
    // 0x257368: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x257368u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_25736c:
    // 0x25736c: 0x668821  addu        $s1, $v1, $a2
    ctx->pc = 0x25736cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_257370:
    // 0x257370: 0x8e290004  lw          $t1, 0x4($s1)
    ctx->pc = 0x257370u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_257374:
    // 0x257374: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x257374u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_257378:
    // 0x257378: 0x1274823  subu        $t1, $t1, $a3
    ctx->pc = 0x257378u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_25737c:
    // 0x25737c: 0x1064023  subu        $t0, $t0, $a2
    ctx->pc = 0x25737cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_257380:
    // 0x257380: 0x1284825  or          $t1, $t1, $t0
    ctx->pc = 0x257380u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
label_257384:
    // 0x257384: 0x1252824  and         $a1, $t1, $a1
    ctx->pc = 0x257384u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & GPR_U64(ctx, 5));
label_257388:
    // 0x257388: 0x14a0005f  bnez        $a1, . + 4 + (0x5F << 2)
label_25738c:
    if (ctx->pc == 0x25738Cu) {
        ctx->pc = 0x25738Cu;
            // 0x25738c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x257390u;
        goto label_257390;
    }
    ctx->pc = 0x257388u;
    {
        const bool branch_taken_0x257388 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x25738Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257388u;
            // 0x25738c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257388) {
            ctx->pc = 0x257508u;
            goto label_257508;
        }
    }
    ctx->pc = 0x257390u;
label_257390:
    // 0x257390: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x257390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_257394:
    // 0x257394: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x257394u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_257398:
    // 0x257398: 0x14a0001b  bnez        $a1, . + 4 + (0x1B << 2)
label_25739c:
    if (ctx->pc == 0x25739Cu) {
        ctx->pc = 0x2573A0u;
        goto label_2573a0;
    }
    ctx->pc = 0x257398u;
    {
        const bool branch_taken_0x257398 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x257398) {
            ctx->pc = 0x257408u;
            goto label_257408;
        }
    }
    ctx->pc = 0x2573A0u;
label_2573a0:
    // 0x2573a0: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x2573a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2573a4:
    // 0x2573a4: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2573a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_2573a8:
    // 0x2573a8: 0x14800015  bnez        $a0, . + 4 + (0x15 << 2)
label_2573ac:
    if (ctx->pc == 0x2573ACu) {
        ctx->pc = 0x2573B0u;
        goto label_2573b0;
    }
    ctx->pc = 0x2573A8u;
    {
        const bool branch_taken_0x2573a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2573a8) {
            ctx->pc = 0x257400u;
            goto label_257400;
        }
    }
    ctx->pc = 0x2573B0u;
label_2573b0:
    // 0x2573b0: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x2573b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_2573b4:
    // 0x2573b4: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x2573b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2573b8:
    // 0x2573b8: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x2573b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_2573bc:
    // 0x2573bc: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x2573bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_2573c0:
    // 0x2573c0: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_2573c4:
    if (ctx->pc == 0x2573C4u) {
        ctx->pc = 0x2573C4u;
            // 0x2573c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2573C8u;
        goto label_2573c8;
    }
    ctx->pc = 0x2573C0u;
    {
        const bool branch_taken_0x2573c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2573C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2573C0u;
            // 0x2573c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2573c0) {
            ctx->pc = 0x2573D0u;
            goto label_2573d0;
        }
    }
    ctx->pc = 0x2573C8u;
label_2573c8:
    // 0x2573c8: 0xc0a728c  jal         func_29CA30
label_2573cc:
    if (ctx->pc == 0x2573CCu) {
        ctx->pc = 0x2573CCu;
            // 0x2573cc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x2573D0u;
        goto label_2573d0;
    }
    ctx->pc = 0x2573C8u;
    SET_GPR_U32(ctx, 31, 0x2573D0u);
    ctx->pc = 0x2573CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2573C8u;
            // 0x2573cc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2573D0u; }
        if (ctx->pc != 0x2573D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2573D0u; }
        if (ctx->pc != 0x2573D0u) { return; }
    }
    ctx->pc = 0x2573D0u;
label_2573d0:
    // 0x2573d0: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x2573d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2573d4:
    // 0x2573d4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2573d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2573d8:
    // 0x2573d8: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x2573d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2573dc:
    // 0x2573dc: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x2573dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
label_2573e0:
    // 0x2573e0: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2573e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2573e4:
    // 0x2573e4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2573e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2573e8:
    // 0x2573e8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2573e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2573ec:
    // 0x2573ec: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2573ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2573f0:
    // 0x2573f0: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x2573f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_2573f4:
    // 0x2573f4: 0x10000044  b           . + 4 + (0x44 << 2)
label_2573f8:
    if (ctx->pc == 0x2573F8u) {
        ctx->pc = 0x2573F8u;
            // 0x2573f8: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x2573FCu;
        goto label_2573fc;
    }
    ctx->pc = 0x2573F4u;
    {
        const bool branch_taken_0x2573f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2573F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2573F4u;
            // 0x2573f8: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2573f4) {
            ctx->pc = 0x257508u;
            goto label_257508;
        }
    }
    ctx->pc = 0x2573FCu;
label_2573fc:
    // 0x2573fc: 0x0  nop
    ctx->pc = 0x2573fcu;
    // NOP
label_257400:
    // 0x257400: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x257400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_257404:
    // 0x257404: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x257404u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_257408:
    // 0x257408: 0x2231823  subu        $v1, $s1, $v1
    ctx->pc = 0x257408u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_25740c:
    // 0x25740c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_257410:
    if (ctx->pc == 0x257410u) {
        ctx->pc = 0x257410u;
            // 0x257410: 0x33103  sra         $a2, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 4));
        ctx->pc = 0x257414u;
        goto label_257414;
    }
    ctx->pc = 0x25740Cu;
    {
        const bool branch_taken_0x25740c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x257410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25740Cu;
            // 0x257410: 0x33103  sra         $a2, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25740c) {
            ctx->pc = 0x25741Cu;
            goto label_25741c;
        }
    }
    ctx->pc = 0x257414u;
label_257414:
    // 0x257414: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x257414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_257418:
    // 0x257418: 0x33103  sra         $a2, $v1, 4
    ctx->pc = 0x257418u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 4));
label_25741c:
    // 0x25741c: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x25741cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_257420:
    // 0x257420: 0x8ea300a8  lw          $v1, 0xA8($s5)
    ctx->pc = 0x257420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 168)));
label_257424:
    // 0x257424: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x257424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_257428:
    // 0x257428: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x257428u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_25742c:
    // 0x25742c: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x25742cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_257430:
    // 0x257430: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x257430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_257434:
    // 0x257434: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_257438:
    if (ctx->pc == 0x257438u) {
        ctx->pc = 0x25743Cu;
        goto label_25743c;
    }
    ctx->pc = 0x257434u;
    {
        const bool branch_taken_0x257434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x257434) {
            ctx->pc = 0x257488u;
            goto label_257488;
        }
    }
    ctx->pc = 0x25743Cu;
label_25743c:
    // 0x25743c: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x25743cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_257440:
    // 0x257440: 0x30d6ffff  andi        $s6, $a2, 0xFFFF
    ctx->pc = 0x257440u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_257444:
    // 0x257444: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x257444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_257448:
    // 0x257448: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x257448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_25744c:
    // 0x25744c: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x25744cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_257450:
    // 0x257450: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_257454:
    if (ctx->pc == 0x257454u) {
        ctx->pc = 0x257454u;
            // 0x257454: 0x24f10004  addiu       $s1, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->pc = 0x257458u;
        goto label_257458;
    }
    ctx->pc = 0x257450u;
    {
        const bool branch_taken_0x257450 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x257454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257450u;
            // 0x257454: 0x24f10004  addiu       $s1, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257450) {
            ctx->pc = 0x257468u;
            goto label_257468;
        }
    }
    ctx->pc = 0x257458u;
label_257458:
    // 0x257458: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x257458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25745c:
    // 0x25745c: 0xc0a728c  jal         func_29CA30
label_257460:
    if (ctx->pc == 0x257460u) {
        ctx->pc = 0x257460u;
            // 0x257460: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x257464u;
        goto label_257464;
    }
    ctx->pc = 0x25745Cu;
    SET_GPR_U32(ctx, 31, 0x257464u);
    ctx->pc = 0x257460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25745Cu;
            // 0x257460: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257464u; }
        if (ctx->pc != 0x257464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257464u; }
        if (ctx->pc != 0x257464u) { return; }
    }
    ctx->pc = 0x257464u;
label_257464:
    // 0x257464: 0x0  nop
    ctx->pc = 0x257464u;
    // NOP
label_257468:
    // 0x257468: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x257468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_25746c:
    // 0x25746c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x25746cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_257470:
    // 0x257470: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x257470u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_257474:
    // 0x257474: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x257474u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_257478:
    // 0x257478: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x257478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25747c:
    // 0x25747c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25747cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_257480:
    // 0x257480: 0x10000021  b           . + 4 + (0x21 << 2)
label_257484:
    if (ctx->pc == 0x257484u) {
        ctx->pc = 0x257484u;
            // 0x257484: 0xa4760000  sh          $s6, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 22));
        ctx->pc = 0x257488u;
        goto label_257488;
    }
    ctx->pc = 0x257480u;
    {
        const bool branch_taken_0x257480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257480u;
            // 0x257484: 0xa4760000  sh          $s6, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257480) {
            ctx->pc = 0x257508u;
            goto label_257508;
        }
    }
    ctx->pc = 0x257488u;
label_257488:
    // 0x257488: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x257488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_25748c:
    // 0x25748c: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x25748cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_257490:
    // 0x257490: 0x24e50004  addiu       $a1, $a3, 0x4
    ctx->pc = 0x257490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_257494:
    // 0x257494: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x257494u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_257498:
    // 0x257498: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_25749c:
    if (ctx->pc == 0x25749Cu) {
        ctx->pc = 0x25749Cu;
            // 0x25749c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2574A0u;
        goto label_2574a0;
    }
    ctx->pc = 0x257498u;
    {
        const bool branch_taken_0x257498 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x25749Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257498u;
            // 0x25749c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257498) {
            ctx->pc = 0x2574D0u;
            goto label_2574d0;
        }
    }
    ctx->pc = 0x2574A0u;
label_2574a0:
    // 0x2574a0: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x2574a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2574a4:
    // 0x2574a4: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x2574a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2574a8:
    // 0x2574a8: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x2574a8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_2574ac:
    // 0x2574ac: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
label_2574b0:
    if (ctx->pc == 0x2574B0u) {
        ctx->pc = 0x2574B4u;
        goto label_2574b4;
    }
    ctx->pc = 0x2574ACu;
    {
        const bool branch_taken_0x2574ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2574ac) {
            ctx->pc = 0x2574C0u;
            goto label_2574c0;
        }
    }
    ctx->pc = 0x2574B4u;
label_2574b4:
    // 0x2574b4: 0x10000008  b           . + 4 + (0x8 << 2)
label_2574b8:
    if (ctx->pc == 0x2574B8u) {
        ctx->pc = 0x2574BCu;
        goto label_2574bc;
    }
    ctx->pc = 0x2574B4u;
    {
        const bool branch_taken_0x2574b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2574b4) {
            ctx->pc = 0x2574D8u;
            goto label_2574d8;
        }
    }
    ctx->pc = 0x2574BCu;
label_2574bc:
    // 0x2574bc: 0x0  nop
    ctx->pc = 0x2574bcu;
    // NOP
label_2574c0:
    // 0x2574c0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2574c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2574c4:
    // 0x2574c4: 0x104182a  slt         $v1, $t0, $a0
    ctx->pc = 0x2574c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2574c8:
    // 0x2574c8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_2574cc:
    if (ctx->pc == 0x2574CCu) {
        ctx->pc = 0x2574CCu;
            // 0x2574cc: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->pc = 0x2574D0u;
        goto label_2574d0;
    }
    ctx->pc = 0x2574C8u;
    {
        const bool branch_taken_0x2574c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2574CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2574C8u;
            // 0x2574cc: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2574c8) {
            ctx->pc = 0x2574A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2574a8;
        }
    }
    ctx->pc = 0x2574D0u;
label_2574d0:
    // 0x2574d0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2574d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2574d4:
    // 0x2574d4: 0x0  nop
    ctx->pc = 0x2574d4u;
    // NOP
label_2574d8:
    // 0x2574d8: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x2574d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_2574dc:
    // 0x2574dc: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x2574dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_2574e0:
    // 0x2574e0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2574e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2574e4:
    // 0x2574e4: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x2574e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
label_2574e8:
    // 0x2574e8: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x2574e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_2574ec:
    // 0x2574ec: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x2574ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_2574f0:
    // 0x2574f0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2574f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2574f4:
    // 0x2574f4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2574f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2574f8:
    // 0x2574f8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2574f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2574fc:
    // 0x2574fc: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x2574fcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_257500:
    // 0x257500: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x257500u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
label_257504:
    // 0x257504: 0x0  nop
    ctx->pc = 0x257504u;
    // NOP
label_257508:
    // 0x257508: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x257508u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_25750c:
    // 0x25750c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x25750cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_257510:
    // 0x257510: 0x27a302f4  addiu       $v1, $sp, 0x2F4
    ctx->pc = 0x257510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 756));
label_257514:
    // 0x257514: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x257514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_257518:
    // 0x257518: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x257518u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_25751c:
    // 0x25751c: 0x1460ff8a  bnez        $v1, . + 4 + (-0x76 << 2)
label_257520:
    if (ctx->pc == 0x257520u) {
        ctx->pc = 0x257524u;
        goto label_257524;
    }
    ctx->pc = 0x25751Cu;
    {
        const bool branch_taken_0x25751c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25751c) {
            ctx->pc = 0x257348u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_257348;
        }
    }
    ctx->pc = 0x257524u;
label_257524:
    // 0x257524: 0x0  nop
    ctx->pc = 0x257524u;
    // NOP
label_257528:
    // 0x257528: 0x13c0008f  beqz        $fp, . + 4 + (0x8F << 2)
label_25752c:
    if (ctx->pc == 0x25752Cu) {
        ctx->pc = 0x25752Cu;
            // 0x25752c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x257530u;
        goto label_257530;
    }
    ctx->pc = 0x257528u;
    {
        const bool branch_taken_0x257528 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x25752Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257528u;
            // 0x25752c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257528) {
            ctx->pc = 0x257768u;
            goto label_257768;
        }
    }
    ctx->pc = 0x257530u;
label_257530:
    // 0x257530: 0x100000cd  b           . + 4 + (0xCD << 2)
label_257534:
    if (ctx->pc == 0x257534u) {
        ctx->pc = 0x257538u;
        goto label_257538;
    }
    ctx->pc = 0x257530u;
    {
        const bool branch_taken_0x257530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x257530) {
            ctx->pc = 0x257868u;
            goto label_257868;
        }
    }
    ctx->pc = 0x257538u;
label_257538:
    // 0x257538: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x257538u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_25753c:
    // 0x25753c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x25753cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_257540:
    // 0x257540: 0x8ea30070  lw          $v1, 0x70($s5)
    ctx->pc = 0x257540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_257544:
    // 0x257544: 0x8e680004  lw          $t0, 0x4($s3)
    ctx->pc = 0x257544u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_257548:
    // 0x257548: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x257548u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
label_25754c:
    // 0x25754c: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x25754cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_257550:
    // 0x257550: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x257550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_257554:
    // 0x257554: 0x94c60000  lhu         $a2, 0x0($a2)
    ctx->pc = 0x257554u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_257558:
    // 0x257558: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x257558u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_25755c:
    // 0x25755c: 0x668821  addu        $s1, $v1, $a2
    ctx->pc = 0x25755cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_257560:
    // 0x257560: 0x8e290004  lw          $t1, 0x4($s1)
    ctx->pc = 0x257560u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_257564:
    // 0x257564: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x257564u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_257568:
    // 0x257568: 0x1274823  subu        $t1, $t1, $a3
    ctx->pc = 0x257568u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_25756c:
    // 0x25756c: 0x1064023  subu        $t0, $t0, $a2
    ctx->pc = 0x25756cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_257570:
    // 0x257570: 0x1284825  or          $t1, $t1, $t0
    ctx->pc = 0x257570u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
label_257574:
    // 0x257574: 0x1252824  and         $a1, $t1, $a1
    ctx->pc = 0x257574u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & GPR_U64(ctx, 5));
label_257578:
    // 0x257578: 0x14a0005d  bnez        $a1, . + 4 + (0x5D << 2)
label_25757c:
    if (ctx->pc == 0x25757Cu) {
        ctx->pc = 0x25757Cu;
            // 0x25757c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x257580u;
        goto label_257580;
    }
    ctx->pc = 0x257578u;
    {
        const bool branch_taken_0x257578 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x25757Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257578u;
            // 0x25757c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257578) {
            ctx->pc = 0x2576F0u;
            goto label_2576f0;
        }
    }
    ctx->pc = 0x257580u;
label_257580:
    // 0x257580: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x257580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_257584:
    // 0x257584: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x257584u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_257588:
    // 0x257588: 0x14a0001b  bnez        $a1, . + 4 + (0x1B << 2)
label_25758c:
    if (ctx->pc == 0x25758Cu) {
        ctx->pc = 0x257590u;
        goto label_257590;
    }
    ctx->pc = 0x257588u;
    {
        const bool branch_taken_0x257588 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x257588) {
            ctx->pc = 0x2575F8u;
            goto label_2575f8;
        }
    }
    ctx->pc = 0x257590u;
label_257590:
    // 0x257590: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x257590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_257594:
    // 0x257594: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x257594u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_257598:
    // 0x257598: 0x14800015  bnez        $a0, . + 4 + (0x15 << 2)
label_25759c:
    if (ctx->pc == 0x25759Cu) {
        ctx->pc = 0x2575A0u;
        goto label_2575a0;
    }
    ctx->pc = 0x257598u;
    {
        const bool branch_taken_0x257598 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x257598) {
            ctx->pc = 0x2575F0u;
            goto label_2575f0;
        }
    }
    ctx->pc = 0x2575A0u;
label_2575a0:
    // 0x2575a0: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x2575a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_2575a4:
    // 0x2575a4: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x2575a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2575a8:
    // 0x2575a8: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x2575a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_2575ac:
    // 0x2575ac: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x2575acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_2575b0:
    // 0x2575b0: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_2575b4:
    if (ctx->pc == 0x2575B4u) {
        ctx->pc = 0x2575B4u;
            // 0x2575b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2575B8u;
        goto label_2575b8;
    }
    ctx->pc = 0x2575B0u;
    {
        const bool branch_taken_0x2575b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2575B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2575B0u;
            // 0x2575b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2575b0) {
            ctx->pc = 0x2575C0u;
            goto label_2575c0;
        }
    }
    ctx->pc = 0x2575B8u;
label_2575b8:
    // 0x2575b8: 0xc0a728c  jal         func_29CA30
label_2575bc:
    if (ctx->pc == 0x2575BCu) {
        ctx->pc = 0x2575BCu;
            // 0x2575bc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x2575C0u;
        goto label_2575c0;
    }
    ctx->pc = 0x2575B8u;
    SET_GPR_U32(ctx, 31, 0x2575C0u);
    ctx->pc = 0x2575BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2575B8u;
            // 0x2575bc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2575C0u; }
        if (ctx->pc != 0x2575C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2575C0u; }
        if (ctx->pc != 0x2575C0u) { return; }
    }
    ctx->pc = 0x2575C0u;
label_2575c0:
    // 0x2575c0: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x2575c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2575c4:
    // 0x2575c4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2575c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2575c8:
    // 0x2575c8: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x2575c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2575cc:
    // 0x2575cc: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x2575ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
label_2575d0:
    // 0x2575d0: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2575d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2575d4:
    // 0x2575d4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2575d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2575d8:
    // 0x2575d8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2575d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2575dc:
    // 0x2575dc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2575dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2575e0:
    // 0x2575e0: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x2575e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_2575e4:
    // 0x2575e4: 0x10000042  b           . + 4 + (0x42 << 2)
label_2575e8:
    if (ctx->pc == 0x2575E8u) {
        ctx->pc = 0x2575E8u;
            // 0x2575e8: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x2575ECu;
        goto label_2575ec;
    }
    ctx->pc = 0x2575E4u;
    {
        const bool branch_taken_0x2575e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2575E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2575E4u;
            // 0x2575e8: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2575e4) {
            ctx->pc = 0x2576F0u;
            goto label_2576f0;
        }
    }
    ctx->pc = 0x2575ECu;
label_2575ec:
    // 0x2575ec: 0x0  nop
    ctx->pc = 0x2575ecu;
    // NOP
label_2575f0:
    // 0x2575f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2575f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2575f4:
    // 0x2575f4: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x2575f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2575f8:
    // 0x2575f8: 0x2231823  subu        $v1, $s1, $v1
    ctx->pc = 0x2575f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_2575fc:
    // 0x2575fc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_257600:
    if (ctx->pc == 0x257600u) {
        ctx->pc = 0x257600u;
            // 0x257600: 0x33103  sra         $a2, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 4));
        ctx->pc = 0x257604u;
        goto label_257604;
    }
    ctx->pc = 0x2575FCu;
    {
        const bool branch_taken_0x2575fc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x257600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2575FCu;
            // 0x257600: 0x33103  sra         $a2, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2575fc) {
            ctx->pc = 0x25760Cu;
            goto label_25760c;
        }
    }
    ctx->pc = 0x257604u;
label_257604:
    // 0x257604: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x257604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_257608:
    // 0x257608: 0x33103  sra         $a2, $v1, 4
    ctx->pc = 0x257608u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 4));
label_25760c:
    // 0x25760c: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x25760cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_257610:
    // 0x257610: 0x8ea300a8  lw          $v1, 0xA8($s5)
    ctx->pc = 0x257610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 168)));
label_257614:
    // 0x257614: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x257614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_257618:
    // 0x257618: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x257618u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_25761c:
    // 0x25761c: 0x13c00014  beqz        $fp, . + 4 + (0x14 << 2)
label_257620:
    if (ctx->pc == 0x257620u) {
        ctx->pc = 0x257620u;
            // 0x257620: 0x643821  addu        $a3, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->pc = 0x257624u;
        goto label_257624;
    }
    ctx->pc = 0x25761Cu;
    {
        const bool branch_taken_0x25761c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x257620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25761Cu;
            // 0x257620: 0x643821  addu        $a3, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25761c) {
            ctx->pc = 0x257670u;
            goto label_257670;
        }
    }
    ctx->pc = 0x257624u;
label_257624:
    // 0x257624: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x257624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_257628:
    // 0x257628: 0x30d6ffff  andi        $s6, $a2, 0xFFFF
    ctx->pc = 0x257628u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_25762c:
    // 0x25762c: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x25762cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_257630:
    // 0x257630: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x257630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_257634:
    // 0x257634: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x257634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_257638:
    // 0x257638: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_25763c:
    if (ctx->pc == 0x25763Cu) {
        ctx->pc = 0x25763Cu;
            // 0x25763c: 0x24f10004  addiu       $s1, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->pc = 0x257640u;
        goto label_257640;
    }
    ctx->pc = 0x257638u;
    {
        const bool branch_taken_0x257638 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x25763Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257638u;
            // 0x25763c: 0x24f10004  addiu       $s1, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257638) {
            ctx->pc = 0x257650u;
            goto label_257650;
        }
    }
    ctx->pc = 0x257640u;
label_257640:
    // 0x257640: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x257640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_257644:
    // 0x257644: 0xc0a728c  jal         func_29CA30
label_257648:
    if (ctx->pc == 0x257648u) {
        ctx->pc = 0x257648u;
            // 0x257648: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x25764Cu;
        goto label_25764c;
    }
    ctx->pc = 0x257644u;
    SET_GPR_U32(ctx, 31, 0x25764Cu);
    ctx->pc = 0x257648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257644u;
            // 0x257648: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25764Cu; }
        if (ctx->pc != 0x25764Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25764Cu; }
        if (ctx->pc != 0x25764Cu) { return; }
    }
    ctx->pc = 0x25764Cu;
label_25764c:
    // 0x25764c: 0x0  nop
    ctx->pc = 0x25764cu;
    // NOP
label_257650:
    // 0x257650: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x257650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_257654:
    // 0x257654: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x257654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_257658:
    // 0x257658: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x257658u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_25765c:
    // 0x25765c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x25765cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_257660:
    // 0x257660: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x257660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_257664:
    // 0x257664: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x257664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_257668:
    // 0x257668: 0x10000021  b           . + 4 + (0x21 << 2)
label_25766c:
    if (ctx->pc == 0x25766Cu) {
        ctx->pc = 0x25766Cu;
            // 0x25766c: 0xa4760000  sh          $s6, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 22));
        ctx->pc = 0x257670u;
        goto label_257670;
    }
    ctx->pc = 0x257668u;
    {
        const bool branch_taken_0x257668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25766Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257668u;
            // 0x25766c: 0xa4760000  sh          $s6, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257668) {
            ctx->pc = 0x2576F0u;
            goto label_2576f0;
        }
    }
    ctx->pc = 0x257670u;
label_257670:
    // 0x257670: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x257670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_257674:
    // 0x257674: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x257674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_257678:
    // 0x257678: 0x24e50004  addiu       $a1, $a3, 0x4
    ctx->pc = 0x257678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_25767c:
    // 0x25767c: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x25767cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_257680:
    // 0x257680: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_257684:
    if (ctx->pc == 0x257684u) {
        ctx->pc = 0x257684u;
            // 0x257684: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x257688u;
        goto label_257688;
    }
    ctx->pc = 0x257680u;
    {
        const bool branch_taken_0x257680 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x257684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257680u;
            // 0x257684: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257680) {
            ctx->pc = 0x2576B8u;
            goto label_2576b8;
        }
    }
    ctx->pc = 0x257688u;
label_257688:
    // 0x257688: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x257688u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_25768c:
    // 0x25768c: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x25768cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_257690:
    // 0x257690: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x257690u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_257694:
    // 0x257694: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
label_257698:
    if (ctx->pc == 0x257698u) {
        ctx->pc = 0x25769Cu;
        goto label_25769c;
    }
    ctx->pc = 0x257694u;
    {
        const bool branch_taken_0x257694 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x257694) {
            ctx->pc = 0x2576A8u;
            goto label_2576a8;
        }
    }
    ctx->pc = 0x25769Cu;
label_25769c:
    // 0x25769c: 0x10000008  b           . + 4 + (0x8 << 2)
label_2576a0:
    if (ctx->pc == 0x2576A0u) {
        ctx->pc = 0x2576A4u;
        goto label_2576a4;
    }
    ctx->pc = 0x25769Cu;
    {
        const bool branch_taken_0x25769c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25769c) {
            ctx->pc = 0x2576C0u;
            goto label_2576c0;
        }
    }
    ctx->pc = 0x2576A4u;
label_2576a4:
    // 0x2576a4: 0x0  nop
    ctx->pc = 0x2576a4u;
    // NOP
label_2576a8:
    // 0x2576a8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2576a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2576ac:
    // 0x2576ac: 0x104182a  slt         $v1, $t0, $a0
    ctx->pc = 0x2576acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2576b0:
    // 0x2576b0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_2576b4:
    if (ctx->pc == 0x2576B4u) {
        ctx->pc = 0x2576B4u;
            // 0x2576b4: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->pc = 0x2576B8u;
        goto label_2576b8;
    }
    ctx->pc = 0x2576B0u;
    {
        const bool branch_taken_0x2576b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2576B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2576B0u;
            // 0x2576b4: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2576b0) {
            ctx->pc = 0x257690u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_257690;
        }
    }
    ctx->pc = 0x2576B8u;
label_2576b8:
    // 0x2576b8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2576b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2576bc:
    // 0x2576bc: 0x0  nop
    ctx->pc = 0x2576bcu;
    // NOP
label_2576c0:
    // 0x2576c0: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x2576c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_2576c4:
    // 0x2576c4: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x2576c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_2576c8:
    // 0x2576c8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2576c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2576cc:
    // 0x2576cc: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x2576ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
label_2576d0:
    // 0x2576d0: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x2576d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_2576d4:
    // 0x2576d4: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x2576d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_2576d8:
    // 0x2576d8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2576d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2576dc:
    // 0x2576dc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2576dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2576e0:
    // 0x2576e0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2576e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2576e4:
    // 0x2576e4: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x2576e4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_2576e8:
    // 0x2576e8: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x2576e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
label_2576ec:
    // 0x2576ec: 0x0  nop
    ctx->pc = 0x2576ecu;
    // NOP
label_2576f0:
    // 0x2576f0: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x2576f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_2576f4:
    // 0x2576f4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2576f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2576f8:
    // 0x2576f8: 0x27a300e4  addiu       $v1, $sp, 0xE4
    ctx->pc = 0x2576f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_2576fc:
    // 0x2576fc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2576fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_257700:
    // 0x257700: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x257700u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_257704:
    // 0x257704: 0x1460ff8c  bnez        $v1, . + 4 + (-0x74 << 2)
label_257708:
    if (ctx->pc == 0x257708u) {
        ctx->pc = 0x25770Cu;
        goto label_25770c;
    }
    ctx->pc = 0x257704u;
    {
        const bool branch_taken_0x257704 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x257704) {
            ctx->pc = 0x257538u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_257538;
        }
    }
    ctx->pc = 0x25770Cu;
label_25770c:
    // 0x25770c: 0x0  nop
    ctx->pc = 0x25770cu;
    // NOP
label_257710:
    // 0x257710: 0x27a302f4  addiu       $v1, $sp, 0x2F4
    ctx->pc = 0x257710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 756));
label_257714:
    // 0x257714: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x257714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_257718:
    // 0x257718: 0x27a302f8  addiu       $v1, $sp, 0x2F8
    ctx->pc = 0x257718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 760));
label_25771c:
    // 0x25771c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x25771cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_257720:
    // 0x257720: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x257720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_257724:
    // 0x257724: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x257724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_257728:
    // 0x257728: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_25772c:
    if (ctx->pc == 0x25772Cu) {
        ctx->pc = 0x25772Cu;
            // 0x25772c: 0x32f0ffff  andi        $s0, $s7, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x257730u;
        goto label_257730;
    }
    ctx->pc = 0x257728u;
    {
        const bool branch_taken_0x257728 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x25772Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257728u;
            // 0x25772c: 0x32f0ffff  andi        $s0, $s7, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x257728) {
            ctx->pc = 0x257740u;
            goto label_257740;
        }
    }
    ctx->pc = 0x257730u;
label_257730:
    // 0x257730: 0x27a402f0  addiu       $a0, $sp, 0x2F0
    ctx->pc = 0x257730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_257734:
    // 0x257734: 0xc0a728c  jal         func_29CA30
label_257738:
    if (ctx->pc == 0x257738u) {
        ctx->pc = 0x257738u;
            // 0x257738: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x25773Cu;
        goto label_25773c;
    }
    ctx->pc = 0x257734u;
    SET_GPR_U32(ctx, 31, 0x25773Cu);
    ctx->pc = 0x257738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257734u;
            // 0x257738: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25773Cu; }
        if (ctx->pc != 0x25773Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25773Cu; }
        if (ctx->pc != 0x25773Cu) { return; }
    }
    ctx->pc = 0x25773Cu;
label_25773c:
    // 0x25773c: 0x0  nop
    ctx->pc = 0x25773cu;
    // NOP
label_257740:
    // 0x257740: 0x27a302f4  addiu       $v1, $sp, 0x2F4
    ctx->pc = 0x257740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 756));
label_257744:
    // 0x257744: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x257744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_257748:
    // 0x257748: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x257748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_25774c:
    // 0x25774c: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x25774cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_257750:
    // 0x257750: 0x27a302f4  addiu       $v1, $sp, 0x2F4
    ctx->pc = 0x257750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 756));
label_257754:
    // 0x257754: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x257754u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_257758:
    // 0x257758: 0x8fa302f0  lw          $v1, 0x2F0($sp)
    ctx->pc = 0x257758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_25775c:
    // 0x25775c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25775cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_257760:
    // 0x257760: 0x10000017  b           . + 4 + (0x17 << 2)
label_257764:
    if (ctx->pc == 0x257764u) {
        ctx->pc = 0x257764u;
            // 0x257764: 0xa4700000  sh          $s0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 16));
        ctx->pc = 0x257768u;
        goto label_257768;
    }
    ctx->pc = 0x257760u;
    {
        const bool branch_taken_0x257760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257760u;
            // 0x257764: 0xa4700000  sh          $s0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257760) {
            ctx->pc = 0x2577C0u;
            goto label_2577c0;
        }
    }
    ctx->pc = 0x257768u;
label_257768:
    // 0x257768: 0x27a300e4  addiu       $v1, $sp, 0xE4
    ctx->pc = 0x257768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_25776c:
    // 0x25776c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25776cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_257770:
    // 0x257770: 0x27a300e8  addiu       $v1, $sp, 0xE8
    ctx->pc = 0x257770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_257774:
    // 0x257774: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x257774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_257778:
    // 0x257778: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x257778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_25777c:
    // 0x25777c: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x25777cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_257780:
    // 0x257780: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_257784:
    if (ctx->pc == 0x257784u) {
        ctx->pc = 0x257784u;
            // 0x257784: 0x32f0ffff  andi        $s0, $s7, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x257788u;
        goto label_257788;
    }
    ctx->pc = 0x257780u;
    {
        const bool branch_taken_0x257780 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x257784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257780u;
            // 0x257784: 0x32f0ffff  andi        $s0, $s7, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x257780) {
            ctx->pc = 0x257798u;
            goto label_257798;
        }
    }
    ctx->pc = 0x257788u;
label_257788:
    // 0x257788: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x257788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_25778c:
    // 0x25778c: 0xc0a728c  jal         func_29CA30
label_257790:
    if (ctx->pc == 0x257790u) {
        ctx->pc = 0x257790u;
            // 0x257790: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x257794u;
        goto label_257794;
    }
    ctx->pc = 0x25778Cu;
    SET_GPR_U32(ctx, 31, 0x257794u);
    ctx->pc = 0x257790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25778Cu;
            // 0x257790: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257794u; }
        if (ctx->pc != 0x257794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257794u; }
        if (ctx->pc != 0x257794u) { return; }
    }
    ctx->pc = 0x257794u;
label_257794:
    // 0x257794: 0x0  nop
    ctx->pc = 0x257794u;
    // NOP
label_257798:
    // 0x257798: 0x27a300e4  addiu       $v1, $sp, 0xE4
    ctx->pc = 0x257798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_25779c:
    // 0x25779c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x25779cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2577a0:
    // 0x2577a0: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x2577a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2577a4:
    // 0x2577a4: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x2577a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2577a8:
    // 0x2577a8: 0x27a300e4  addiu       $v1, $sp, 0xE4
    ctx->pc = 0x2577a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_2577ac:
    // 0x2577ac: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x2577acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_2577b0:
    // 0x2577b0: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x2577b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2577b4:
    // 0x2577b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2577b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2577b8:
    // 0x2577b8: 0xa4700000  sh          $s0, 0x0($v1)
    ctx->pc = 0x2577b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 16));
label_2577bc:
    // 0x2577bc: 0x0  nop
    ctx->pc = 0x2577bcu;
    // NOP
label_2577c0:
    // 0x2577c0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2577c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2577c4:
    // 0x2577c4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2577c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_2577c8:
    // 0x2577c8: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x2577c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_2577cc:
    // 0x2577cc: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x2577ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2577d0:
    // 0x2577d0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2577d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2577d4:
    // 0x2577d4: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x2577d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2577d8:
    // 0x2577d8: 0x1460fea3  bnez        $v1, . + 4 + (-0x15D << 2)
label_2577dc:
    if (ctx->pc == 0x2577DCu) {
        ctx->pc = 0x2577E0u;
        goto label_2577e0;
    }
    ctx->pc = 0x2577D8u;
    {
        const bool branch_taken_0x2577d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2577d8) {
            ctx->pc = 0x257268u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_257268;
        }
    }
    ctx->pc = 0x2577E0u;
label_2577e0:
    // 0x2577e0: 0x27a300e8  addiu       $v1, $sp, 0xE8
    ctx->pc = 0x2577e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_2577e4:
    // 0x2577e4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2577e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2577e8:
    // 0x2577e8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2577e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2577ec:
    // 0x2577ec: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2577ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2577f0:
    // 0x2577f0: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_2577f4:
    if (ctx->pc == 0x2577F4u) {
        ctx->pc = 0x2577F8u;
        goto label_2577f8;
    }
    ctx->pc = 0x2577F0u;
    {
        const bool branch_taken_0x2577f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2577f0) {
            ctx->pc = 0x257820u;
            goto label_257820;
        }
    }
    ctx->pc = 0x2577F8u;
label_2577f8:
    // 0x2577f8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2577f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2577fc:
    // 0x2577fc: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x2577fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_257800:
    // 0x257800: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x257800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_257804:
    // 0x257804: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x257804u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_257808:
    // 0x257808: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x257808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_25780c:
    // 0x25780c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x25780cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_257810:
    // 0x257810: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x257810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_257814:
    // 0x257814: 0xc0a7ab4  jal         func_29EAD0
label_257818:
    if (ctx->pc == 0x257818u) {
        ctx->pc = 0x257818u;
            // 0x257818: 0x23040  sll         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x25781Cu;
        goto label_25781c;
    }
    ctx->pc = 0x257814u;
    SET_GPR_U32(ctx, 31, 0x25781Cu);
    ctx->pc = 0x257818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257814u;
            // 0x257818: 0x23040  sll         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25781Cu; }
        if (ctx->pc != 0x25781Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25781Cu; }
        if (ctx->pc != 0x25781Cu) { return; }
    }
    ctx->pc = 0x25781Cu;
label_25781c:
    // 0x25781c: 0x0  nop
    ctx->pc = 0x25781cu;
    // NOP
label_257820:
    // 0x257820: 0x27a302f8  addiu       $v1, $sp, 0x2F8
    ctx->pc = 0x257820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 760));
label_257824:
    // 0x257824: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x257824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_257828:
    // 0x257828: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x257828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_25782c:
    // 0x25782c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x25782cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_257830:
    // 0x257830: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_257834:
    if (ctx->pc == 0x257834u) {
        ctx->pc = 0x257838u;
        goto label_257838;
    }
    ctx->pc = 0x257830u;
    {
        const bool branch_taken_0x257830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x257830) {
            ctx->pc = 0x257860u;
            goto label_257860;
        }
    }
    ctx->pc = 0x257838u;
label_257838:
    // 0x257838: 0x8fa202f8  lw          $v0, 0x2F8($sp)
    ctx->pc = 0x257838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 760)));
label_25783c:
    // 0x25783c: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x25783cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_257840:
    // 0x257840: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x257840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_257844:
    // 0x257844: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x257844u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_257848:
    // 0x257848: 0x8fa502f0  lw          $a1, 0x2F0($sp)
    ctx->pc = 0x257848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_25784c:
    // 0x25784c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x25784cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_257850:
    // 0x257850: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x257850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_257854:
    // 0x257854: 0xc0a7ab4  jal         func_29EAD0
label_257858:
    if (ctx->pc == 0x257858u) {
        ctx->pc = 0x257858u;
            // 0x257858: 0x23040  sll         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x25785Cu;
        goto label_25785c;
    }
    ctx->pc = 0x257854u;
    SET_GPR_U32(ctx, 31, 0x25785Cu);
    ctx->pc = 0x257858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257854u;
            // 0x257858: 0x23040  sll         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25785Cu; }
        if (ctx->pc != 0x25785Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25785Cu; }
        if (ctx->pc != 0x25785Cu) { return; }
    }
    ctx->pc = 0x25785Cu;
label_25785c:
    // 0x25785c: 0x0  nop
    ctx->pc = 0x25785cu;
    // NOP
label_257860:
    // 0x257860: 0x10000019  b           . + 4 + (0x19 << 2)
label_257864:
    if (ctx->pc == 0x257864u) {
        ctx->pc = 0x257868u;
        goto label_257868;
    }
    ctx->pc = 0x257860u;
    {
        const bool branch_taken_0x257860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x257860) {
            ctx->pc = 0x2578C8u;
            goto label_2578c8;
        }
    }
    ctx->pc = 0x257868u;
label_257868:
    // 0x257868: 0x27a300e4  addiu       $v1, $sp, 0xE4
    ctx->pc = 0x257868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_25786c:
    // 0x25786c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x25786cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_257870:
    // 0x257870: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x257870u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_257874:
    // 0x257874: 0x1020ffa6  beqz        $at, . + 4 + (-0x5A << 2)
label_257878:
    if (ctx->pc == 0x257878u) {
        ctx->pc = 0x257878u;
            // 0x257878: 0x27a300dc  addiu       $v1, $sp, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
        ctx->pc = 0x25787Cu;
        goto label_25787c;
    }
    ctx->pc = 0x257874u;
    {
        const bool branch_taken_0x257874 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x257878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257874u;
            // 0x257878: 0x27a300dc  addiu       $v1, $sp, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257874) {
            ctx->pc = 0x257710u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_257710;
        }
    }
    ctx->pc = 0x25787Cu;
label_25787c:
    // 0x25787c: 0x27a40508  addiu       $a0, $sp, 0x508
    ctx->pc = 0x25787cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1288));
label_257880:
    // 0x257880: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x257880u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_257884:
    // 0x257884: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x257884u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_257888:
    // 0x257888: 0x83be0508  lb          $fp, 0x508($sp)
    ctx->pc = 0x257888u;
    SET_GPR_S32(ctx, 30, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 1288)));
label_25788c:
    // 0x25788c: 0x1000ff9a  b           . + 4 + (-0x66 << 2)
label_257890:
    if (ctx->pc == 0x257890u) {
        ctx->pc = 0x257890u;
            // 0x257890: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x257894u;
        goto label_257894;
    }
    ctx->pc = 0x25788Cu;
    {
        const bool branch_taken_0x25788c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25788Cu;
            // 0x257890: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25788c) {
            ctx->pc = 0x2576F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2576f8;
        }
    }
    ctx->pc = 0x257894u;
label_257894:
    // 0x257894: 0x0  nop
    ctx->pc = 0x257894u;
    // NOP
label_257898:
    // 0x257898: 0x27a302f4  addiu       $v1, $sp, 0x2F4
    ctx->pc = 0x257898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 756));
label_25789c:
    // 0x25789c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x25789cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2578a0:
    // 0x2578a0: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2578a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2578a4:
    // 0x2578a4: 0x1020ff20  beqz        $at, . + 4 + (-0xE0 << 2)
label_2578a8:
    if (ctx->pc == 0x2578A8u) {
        ctx->pc = 0x2578A8u;
            // 0x2578a8: 0x27a300dc  addiu       $v1, $sp, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
        ctx->pc = 0x2578ACu;
        goto label_2578ac;
    }
    ctx->pc = 0x2578A4u;
    {
        const bool branch_taken_0x2578a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2578A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2578A4u;
            // 0x2578a8: 0x27a300dc  addiu       $v1, $sp, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2578a4) {
            ctx->pc = 0x257528u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_257528;
        }
    }
    ctx->pc = 0x2578ACu;
label_2578ac:
    // 0x2578ac: 0x27a4050c  addiu       $a0, $sp, 0x50C
    ctx->pc = 0x2578acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1292));
label_2578b0:
    // 0x2578b0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2578b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2578b4:
    // 0x2578b4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2578b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2578b8:
    // 0x2578b8: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2578b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_2578bc:
    // 0x2578bc: 0x83a3050c  lb          $v1, 0x50C($sp)
    ctx->pc = 0x2578bcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 1292)));
label_2578c0:
    // 0x2578c0: 0x1000ff13  b           . + 4 + (-0xED << 2)
label_2578c4:
    if (ctx->pc == 0x2578C4u) {
        ctx->pc = 0x2578C4u;
            // 0x2578c4: 0xafa300a0  sw          $v1, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
        ctx->pc = 0x2578C8u;
        goto label_2578c8;
    }
    ctx->pc = 0x2578C0u;
    {
        const bool branch_taken_0x2578c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2578C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2578C0u;
            // 0x2578c4: 0xafa300a0  sw          $v1, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2578c0) {
            ctx->pc = 0x257510u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_257510;
        }
    }
    ctx->pc = 0x2578C8u;
label_2578c8:
    // 0x2578c8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2578c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2578cc:
    // 0x2578cc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2578ccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2578d0:
    // 0x2578d0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2578d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2578d4:
    // 0x2578d4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2578d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2578d8:
    // 0x2578d8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2578d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2578dc:
    // 0x2578dc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2578dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2578e0:
    // 0x2578e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2578e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2578e4:
    // 0x2578e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2578e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2578e8:
    // 0x2578e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2578e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2578ec:
    // 0x2578ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2578ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2578f0:
    // 0x2578f0: 0x3e00008  jr          $ra
label_2578f4:
    if (ctx->pc == 0x2578F4u) {
        ctx->pc = 0x2578F4u;
            // 0x2578f4: 0x27bd0510  addiu       $sp, $sp, 0x510 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1296));
        ctx->pc = 0x2578F8u;
        goto label_2578f8;
    }
    ctx->pc = 0x2578F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2578F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2578F0u;
            // 0x2578f4: 0x27bd0510  addiu       $sp, $sp, 0x510 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1296));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2578F8u;
label_2578f8:
    // 0x2578f8: 0x0  nop
    ctx->pc = 0x2578f8u;
    // NOP
label_2578fc:
    // 0x2578fc: 0x0  nop
    ctx->pc = 0x2578fcu;
    // NOP
label_257900:
    // 0x257900: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x257900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_257904:
    // 0x257904: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x257904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_257908:
    // 0x257908: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x257908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_25790c:
    // 0x25790c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x25790cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_257910:
    // 0x257910: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x257910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_257914:
    // 0x257914: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x257914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_257918:
    // 0x257918: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x257918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_25791c:
    // 0x25791c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x25791cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_257920:
    // 0x257920: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x257920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_257924:
    // 0x257924: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x257924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_257928:
    // 0x257928: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x257928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_25792c:
    // 0x25792c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25792cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_257930:
    // 0x257930: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x257930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_257934:
    // 0x257934: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x257934u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_257938:
    // 0x257938: 0x8c920074  lw          $s2, 0x74($a0)
    ctx->pc = 0x257938u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_25793c:
    // 0x25793c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25793cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_257940:
    // 0x257940: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x257940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_257944:
    // 0x257944: 0x121943  sra         $v1, $s2, 5
    ctx->pc = 0x257944u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 5));
label_257948:
    // 0x257948: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x257948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_25794c:
    // 0x25794c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25794cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_257950:
    // 0x257950: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x257950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_257954:
    // 0x257954: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x257954u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_257958:
    // 0x257958: 0x8c9e000c  lw          $fp, 0xC($a0)
    ctx->pc = 0x257958u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_25795c:
    // 0x25795c: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x25795cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_257960:
    // 0x257960: 0x3c51821  addu        $v1, $fp, $a1
    ctx->pc = 0x257960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
label_257964:
    // 0x257964: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x257964u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_257968:
    // 0x257968: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_25796c:
    if (ctx->pc == 0x25796Cu) {
        ctx->pc = 0x25796Cu;
            // 0x25796c: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x257970u;
        goto label_257970;
    }
    ctx->pc = 0x257968u;
    {
        const bool branch_taken_0x257968 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x25796Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257968u;
            // 0x25796c: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257968) {
            ctx->pc = 0x257978u;
            goto label_257978;
        }
    }
    ctx->pc = 0x257970u;
label_257970:
    // 0x257970: 0x10000007  b           . + 4 + (0x7 << 2)
label_257974:
    if (ctx->pc == 0x257974u) {
        ctx->pc = 0x257974u;
            // 0x257974: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x257978u;
        goto label_257978;
    }
    ctx->pc = 0x257970u;
    {
        const bool branch_taken_0x257970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257970u;
            // 0x257974: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257970) {
            ctx->pc = 0x257990u;
            goto label_257990;
        }
    }
    ctx->pc = 0x257978u;
label_257978:
    // 0x257978: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x257978u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25797c:
    // 0x25797c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x25797cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_257980:
    // 0x257980: 0x320f809  jalr        $t9
label_257984:
    if (ctx->pc == 0x257984u) {
        ctx->pc = 0x257988u;
        goto label_257988;
    }
    ctx->pc = 0x257980u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x257988u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x257988u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x257988u; }
            if (ctx->pc != 0x257988u) { return; }
        }
        }
    }
    ctx->pc = 0x257988u;
label_257988:
    // 0x257988: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x257988u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25798c:
    // 0x25798c: 0x0  nop
    ctx->pc = 0x25798cu;
    // NOP
label_257990:
    // 0x257990: 0x1220c3  sra         $a0, $s2, 3
    ctx->pc = 0x257990u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 18), 3));
label_257994:
    // 0x257994: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x257994u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
label_257998:
    // 0x257998: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
label_25799c:
    if (ctx->pc == 0x25799Cu) {
        ctx->pc = 0x25799Cu;
            // 0x25799c: 0x3c0182d  daddu       $v1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2579A0u;
        goto label_2579a0;
    }
    ctx->pc = 0x257998u;
    {
        const bool branch_taken_0x257998 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x25799Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257998u;
            // 0x25799c: 0x3c0182d  daddu       $v1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257998) {
            ctx->pc = 0x2579C0u;
            goto label_2579c0;
        }
    }
    ctx->pc = 0x2579A0u;
label_2579a0:
    // 0x2579a0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2579a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2579a4:
    // 0x2579a4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2579a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2579a8:
    // 0x2579a8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2579a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2579ac:
    // 0x2579ac: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2579acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2579b0:
    // 0x2579b0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2579b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_2579b4:
    // 0x2579b4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2579b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_2579b8:
    // 0x2579b8: 0x481fff9  bgez        $a0, . + 4 + (-0x7 << 2)
label_2579bc:
    if (ctx->pc == 0x2579BCu) {
        ctx->pc = 0x2579BCu;
            // 0x2579bc: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x2579C0u;
        goto label_2579c0;
    }
    ctx->pc = 0x2579B8u;
    {
        const bool branch_taken_0x2579b8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2579BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2579B8u;
            // 0x2579bc: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2579b8) {
            ctx->pc = 0x2579A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2579a0;
        }
    }
    ctx->pc = 0x2579C0u;
label_2579c0:
    // 0x2579c0: 0x27b300d4  addiu       $s3, $sp, 0xD4
    ctx->pc = 0x2579c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
label_2579c4:
    // 0x2579c4: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2579c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2579c8:
    // 0x2579c8: 0x27b200d8  addiu       $s2, $sp, 0xD8
    ctx->pc = 0x2579c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_2579cc:
    // 0x2579cc: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x2579ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2579d0:
    // 0x2579d0: 0x27b600dc  addiu       $s6, $sp, 0xDC
    ctx->pc = 0x2579d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
label_2579d4:
    // 0x2579d4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2579d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_2579d8:
    // 0x2579d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2579d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2579dc:
    // 0x2579dc: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x2579dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_2579e0:
    // 0x2579e0: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2579e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2579e4:
    // 0x2579e4: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x2579e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2579e8:
    // 0x2579e8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2579e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2579ec:
    // 0x2579ec: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x2579ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_2579f0:
    // 0x2579f0: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x2579f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2579f4:
    // 0x2579f4: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x2579f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2579f8:
    // 0x2579f8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2579f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2579fc:
    // 0x2579fc: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x2579fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_257a00:
    // 0x257a00: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x257a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257a04:
    // 0x257a04: 0xc600004c  lwc1        $f0, 0x4C($s0)
    ctx->pc = 0x257a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257a08:
    // 0x257a08: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x257a08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_257a0c:
    // 0x257a0c: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x257a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
label_257a10:
    // 0x257a10: 0xc6010060  lwc1        $f1, 0x60($s0)
    ctx->pc = 0x257a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257a14:
    // 0x257a14: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x257a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257a18:
    // 0x257a18: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x257a18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_257a1c:
    // 0x257a1c: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x257a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_257a20:
    // 0x257a20: 0xc6010064  lwc1        $f1, 0x64($s0)
    ctx->pc = 0x257a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257a24:
    // 0x257a24: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x257a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257a28:
    // 0x257a28: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x257a28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_257a2c:
    // 0x257a2c: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x257a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_257a30:
    // 0x257a30: 0xc6010068  lwc1        $f1, 0x68($s0)
    ctx->pc = 0x257a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257a34:
    // 0x257a34: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x257a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257a38:
    // 0x257a38: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x257a38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_257a3c:
    // 0x257a3c: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x257a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_257a40:
    // 0x257a40: 0xc601006c  lwc1        $f1, 0x6C($s0)
    ctx->pc = 0x257a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257a44:
    // 0x257a44: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x257a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257a48:
    // 0x257a48: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x257a48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_257a4c:
    // 0x257a4c: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x257a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
label_257a50:
    // 0x257a50: 0xc421cf90  lwc1        $f1, -0x3070($at)
    ctx->pc = 0x257a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294954896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257a54:
    // 0x257a54: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x257a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257a58:
    // 0x257a58: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x257a58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_257a5c:
    // 0x257a5c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_257a60:
    if (ctx->pc == 0x257A60u) {
        ctx->pc = 0x257A60u;
            // 0x257a60: 0xc7a200d0  lwc1        $f2, 0xD0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x257A64u;
        goto label_257a64;
    }
    ctx->pc = 0x257A5Cu;
    {
        const bool branch_taken_0x257a5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x257A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257A5Cu;
            // 0x257a60: 0xc7a200d0  lwc1        $f2, 0xD0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x257a5c) {
            ctx->pc = 0x257A6Cu;
            goto label_257a6c;
        }
    }
    ctx->pc = 0x257A64u;
label_257a64:
    // 0x257a64: 0x10000002  b           . + 4 + (0x2 << 2)
label_257a68:
    if (ctx->pc == 0x257A68u) {
        ctx->pc = 0x257A6Cu;
        goto label_257a6c;
    }
    ctx->pc = 0x257A64u;
    {
        const bool branch_taken_0x257a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x257a64) {
            ctx->pc = 0x257A70u;
            goto label_257a70;
        }
    }
    ctx->pc = 0x257A6Cu;
label_257a6c:
    // 0x257a6c: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x257a6cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_257a70:
    // 0x257a70: 0x3c0f0060  lui         $t7, 0x60
    ctx->pc = 0x257a70u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)96 << 16));
label_257a74:
    // 0x257a74: 0x27a400d4  addiu       $a0, $sp, 0xD4
    ctx->pc = 0x257a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
label_257a78:
    // 0x257a78: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x257a78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_257a7c:
    // 0x257a7c: 0x25efcf94  addiu       $t7, $t7, -0x306C
    ctx->pc = 0x257a7cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954900));
label_257a80:
    // 0x257a80: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x257a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257a84:
    // 0x257a84: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x257a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257a88:
    // 0x257a88: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x257a88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_257a8c:
    // 0x257a8c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_257a90:
    if (ctx->pc == 0x257A90u) {
        ctx->pc = 0x257A94u;
        goto label_257a94;
    }
    ctx->pc = 0x257A8Cu;
    {
        const bool branch_taken_0x257a8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x257a8c) {
            ctx->pc = 0x257A9Cu;
            goto label_257a9c;
        }
    }
    ctx->pc = 0x257A94u;
label_257a94:
    // 0x257a94: 0x10000002  b           . + 4 + (0x2 << 2)
label_257a98:
    if (ctx->pc == 0x257A98u) {
        ctx->pc = 0x257A9Cu;
        goto label_257a9c;
    }
    ctx->pc = 0x257A94u;
    {
        const bool branch_taken_0x257a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x257a94) {
            ctx->pc = 0x257AA0u;
            goto label_257aa0;
        }
    }
    ctx->pc = 0x257A9Cu;
label_257a9c:
    // 0x257a9c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x257a9cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_257aa0:
    // 0x257aa0: 0x3c0e0060  lui         $t6, 0x60
    ctx->pc = 0x257aa0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)96 << 16));
label_257aa4:
    // 0x257aa4: 0x27a300d8  addiu       $v1, $sp, 0xD8
    ctx->pc = 0x257aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_257aa8:
    // 0x257aa8: 0xe6610000  swc1        $f1, 0x0($s3)
    ctx->pc = 0x257aa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_257aac:
    // 0x257aac: 0x25cecf98  addiu       $t6, $t6, -0x3068
    ctx->pc = 0x257aacu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294954904));
label_257ab0:
    // 0x257ab0: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x257ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257ab4:
    // 0x257ab4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x257ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257ab8:
    // 0x257ab8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x257ab8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_257abc:
    // 0x257abc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_257ac0:
    if (ctx->pc == 0x257AC0u) {
        ctx->pc = 0x257AC4u;
        goto label_257ac4;
    }
    ctx->pc = 0x257ABCu;
    {
        const bool branch_taken_0x257abc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x257abc) {
            ctx->pc = 0x257ACCu;
            goto label_257acc;
        }
    }
    ctx->pc = 0x257AC4u;
label_257ac4:
    // 0x257ac4: 0x10000002  b           . + 4 + (0x2 << 2)
label_257ac8:
    if (ctx->pc == 0x257AC8u) {
        ctx->pc = 0x257ACCu;
        goto label_257acc;
    }
    ctx->pc = 0x257AC4u;
    {
        const bool branch_taken_0x257ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x257ac4) {
            ctx->pc = 0x257AD0u;
            goto label_257ad0;
        }
    }
    ctx->pc = 0x257ACCu;
label_257acc:
    // 0x257acc: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x257accu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_257ad0:
    // 0x257ad0: 0x3c0d0060  lui         $t5, 0x60
    ctx->pc = 0x257ad0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)96 << 16));
label_257ad4:
    // 0x257ad4: 0x27a200dc  addiu       $v0, $sp, 0xDC
    ctx->pc = 0x257ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
label_257ad8:
    // 0x257ad8: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x257ad8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_257adc:
    // 0x257adc: 0x25adcf9c  addiu       $t5, $t5, -0x3064
    ctx->pc = 0x257adcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294954908));
label_257ae0:
    // 0x257ae0: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x257ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257ae4:
    // 0x257ae4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x257ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257ae8:
    // 0x257ae8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x257ae8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_257aec:
    // 0x257aec: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_257af0:
    if (ctx->pc == 0x257AF0u) {
        ctx->pc = 0x257AF4u;
        goto label_257af4;
    }
    ctx->pc = 0x257AECu;
    {
        const bool branch_taken_0x257aec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x257aec) {
            ctx->pc = 0x257AFCu;
            goto label_257afc;
        }
    }
    ctx->pc = 0x257AF4u;
label_257af4:
    // 0x257af4: 0x10000003  b           . + 4 + (0x3 << 2)
label_257af8:
    if (ctx->pc == 0x257AF8u) {
        ctx->pc = 0x257AF8u;
            // 0x257af8: 0xe6c10000  swc1        $f1, 0x0($s6) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
        ctx->pc = 0x257AFCu;
        goto label_257afc;
    }
    ctx->pc = 0x257AF4u;
    {
        const bool branch_taken_0x257af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257AF4u;
            // 0x257af8: 0xe6c10000  swc1        $f1, 0x0($s6) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x257af4) {
            ctx->pc = 0x257B04u;
            goto label_257b04;
        }
    }
    ctx->pc = 0x257AFCu;
label_257afc:
    // 0x257afc: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x257afcu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_257b00:
    // 0x257b00: 0xe6c10000  swc1        $f1, 0x0($s6)
    ctx->pc = 0x257b00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
label_257b04:
    // 0x257b04: 0x3c010064  lui         $at, 0x64
    ctx->pc = 0x257b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
label_257b08:
    // 0x257b08: 0xc421f930  lwc1        $f1, -0x6D0($at)
    ctx->pc = 0x257b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257b0c:
    // 0x257b0c: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x257b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257b10:
    // 0x257b10: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x257b10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_257b14:
    // 0x257b14: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_257b18:
    if (ctx->pc == 0x257B18u) {
        ctx->pc = 0x257B18u;
            // 0x257b18: 0xc7a200d0  lwc1        $f2, 0xD0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x257B1Cu;
        goto label_257b1c;
    }
    ctx->pc = 0x257B14u;
    {
        const bool branch_taken_0x257b14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x257B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257B14u;
            // 0x257b18: 0xc7a200d0  lwc1        $f2, 0xD0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x257b14) {
            ctx->pc = 0x257B24u;
            goto label_257b24;
        }
    }
    ctx->pc = 0x257B1Cu;
label_257b1c:
    // 0x257b1c: 0x10000002  b           . + 4 + (0x2 << 2)
label_257b20:
    if (ctx->pc == 0x257B20u) {
        ctx->pc = 0x257B24u;
        goto label_257b24;
    }
    ctx->pc = 0x257B1Cu;
    {
        const bool branch_taken_0x257b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x257b1c) {
            ctx->pc = 0x257B28u;
            goto label_257b28;
        }
    }
    ctx->pc = 0x257B24u;
label_257b24:
    // 0x257b24: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x257b24u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_257b28:
    // 0x257b28: 0x3c0c0064  lui         $t4, 0x64
    ctx->pc = 0x257b28u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)100 << 16));
label_257b2c:
    // 0x257b2c: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x257b2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_257b30:
    // 0x257b30: 0x258cf934  addiu       $t4, $t4, -0x6CC
    ctx->pc = 0x257b30u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294965556));
label_257b34:
    // 0x257b34: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x257b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257b38:
    // 0x257b38: 0xc5800000  lwc1        $f0, 0x0($t4)
    ctx->pc = 0x257b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257b3c:
    // 0x257b3c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x257b3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_257b40:
    // 0x257b40: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_257b44:
    if (ctx->pc == 0x257B44u) {
        ctx->pc = 0x257B48u;
        goto label_257b48;
    }
    ctx->pc = 0x257B40u;
    {
        const bool branch_taken_0x257b40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x257b40) {
            ctx->pc = 0x257B50u;
            goto label_257b50;
        }
    }
    ctx->pc = 0x257B48u;
label_257b48:
    // 0x257b48: 0x10000002  b           . + 4 + (0x2 << 2)
label_257b4c:
    if (ctx->pc == 0x257B4Cu) {
        ctx->pc = 0x257B50u;
        goto label_257b50;
    }
    ctx->pc = 0x257B48u;
    {
        const bool branch_taken_0x257b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x257b48) {
            ctx->pc = 0x257B54u;
            goto label_257b54;
        }
    }
    ctx->pc = 0x257B50u;
label_257b50:
    // 0x257b50: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x257b50u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_257b54:
    // 0x257b54: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x257b54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_257b58:
    // 0x257b58: 0xe6610000  swc1        $f1, 0x0($s3)
    ctx->pc = 0x257b58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_257b5c:
    // 0x257b5c: 0x2484f938  addiu       $a0, $a0, -0x6C8
    ctx->pc = 0x257b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965560));
label_257b60:
    // 0x257b60: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x257b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257b64:
    // 0x257b64: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x257b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257b68:
    // 0x257b68: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x257b68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_257b6c:
    // 0x257b6c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_257b70:
    if (ctx->pc == 0x257B70u) {
        ctx->pc = 0x257B74u;
        goto label_257b74;
    }
    ctx->pc = 0x257B6Cu;
    {
        const bool branch_taken_0x257b6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x257b6c) {
            ctx->pc = 0x257B7Cu;
            goto label_257b7c;
        }
    }
    ctx->pc = 0x257B74u;
label_257b74:
    // 0x257b74: 0x10000002  b           . + 4 + (0x2 << 2)
label_257b78:
    if (ctx->pc == 0x257B78u) {
        ctx->pc = 0x257B7Cu;
        goto label_257b7c;
    }
    ctx->pc = 0x257B74u;
    {
        const bool branch_taken_0x257b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x257b74) {
            ctx->pc = 0x257B80u;
            goto label_257b80;
        }
    }
    ctx->pc = 0x257B7Cu;
label_257b7c:
    // 0x257b7c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x257b7cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_257b80:
    // 0x257b80: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x257b80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_257b84:
    // 0x257b84: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x257b84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_257b88:
    // 0x257b88: 0x2463f93c  addiu       $v1, $v1, -0x6C4
    ctx->pc = 0x257b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965564));
label_257b8c:
    // 0x257b8c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x257b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257b90:
    // 0x257b90: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x257b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257b94:
    // 0x257b94: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x257b94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_257b98:
    // 0x257b98: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_257b9c:
    if (ctx->pc == 0x257B9Cu) {
        ctx->pc = 0x257BA0u;
        goto label_257ba0;
    }
    ctx->pc = 0x257B98u;
    {
        const bool branch_taken_0x257b98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x257b98) {
            ctx->pc = 0x257BA8u;
            goto label_257ba8;
        }
    }
    ctx->pc = 0x257BA0u;
label_257ba0:
    // 0x257ba0: 0x10000003  b           . + 4 + (0x3 << 2)
label_257ba4:
    if (ctx->pc == 0x257BA4u) {
        ctx->pc = 0x257BA4u;
            // 0x257ba4: 0xe6c10000  swc1        $f1, 0x0($s6) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
        ctx->pc = 0x257BA8u;
        goto label_257ba8;
    }
    ctx->pc = 0x257BA0u;
    {
        const bool branch_taken_0x257ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257BA0u;
            // 0x257ba4: 0xe6c10000  swc1        $f1, 0x0($s6) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x257ba0) {
            ctx->pc = 0x257BB0u;
            goto label_257bb0;
        }
    }
    ctx->pc = 0x257BA8u;
label_257ba8:
    // 0x257ba8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x257ba8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_257bac:
    // 0x257bac: 0xe6c10000  swc1        $f1, 0x0($s6)
    ctx->pc = 0x257bacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
label_257bb0:
    // 0x257bb0: 0x3c010064  lui         $at, 0x64
    ctx->pc = 0x257bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
label_257bb4:
    // 0x257bb4: 0xc420f900  lwc1        $f0, -0x700($at)
    ctx->pc = 0x257bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257bb8:
    // 0x257bb8: 0x3c090064  lui         $t1, 0x64
    ctx->pc = 0x257bb8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)100 << 16));
label_257bbc:
    // 0x257bbc: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x257bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257bc0:
    // 0x257bc0: 0x3c080064  lui         $t0, 0x64
    ctx->pc = 0x257bc0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)100 << 16));
label_257bc4:
    // 0x257bc4: 0x3c070064  lui         $a3, 0x64
    ctx->pc = 0x257bc4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)100 << 16));
label_257bc8:
    // 0x257bc8: 0x2529f904  addiu       $t1, $t1, -0x6FC
    ctx->pc = 0x257bc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294965508));
label_257bcc:
    // 0x257bcc: 0x2508f908  addiu       $t0, $t0, -0x6F8
    ctx->pc = 0x257bccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294965512));
label_257bd0:
    // 0x257bd0: 0x24e7f90c  addiu       $a3, $a3, -0x6F4
    ctx->pc = 0x257bd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965516));
label_257bd4:
    // 0x257bd4: 0x27b500d0  addiu       $s5, $sp, 0xD0
    ctx->pc = 0x257bd4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_257bd8:
    // 0x257bd8: 0x27a600f2  addiu       $a2, $sp, 0xF2
    ctx->pc = 0x257bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 242));
label_257bdc:
    // 0x257bdc: 0x27a500f4  addiu       $a1, $sp, 0xF4
    ctx->pc = 0x257bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
label_257be0:
    // 0x257be0: 0x27ab00b4  addiu       $t3, $sp, 0xB4
    ctx->pc = 0x257be0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
label_257be4:
    // 0x257be4: 0x27aa00b8  addiu       $t2, $sp, 0xB8
    ctx->pc = 0x257be4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_257be8:
    // 0x257be8: 0x27a200bc  addiu       $v0, $sp, 0xBC
    ctx->pc = 0x257be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_257bec:
    // 0x257bec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x257becu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_257bf0:
    // 0x257bf0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x257bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_257bf4:
    // 0x257bf4: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x257bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_257bf8:
    // 0x257bf8: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x257bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257bfc:
    // 0x257bfc: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x257bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257c00:
    // 0x257c00: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x257c00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_257c04:
    // 0x257c04: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x257c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_257c08:
    // 0x257c08: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x257c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257c0c:
    // 0x257c0c: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x257c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257c10:
    // 0x257c10: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x257c10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_257c14:
    // 0x257c14: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x257c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_257c18:
    // 0x257c18: 0xc6c10000  lwc1        $f1, 0x0($s6)
    ctx->pc = 0x257c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257c1c:
    // 0x257c1c: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x257c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257c20:
    // 0x257c20: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x257c20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_257c24:
    // 0x257c24: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x257c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
label_257c28:
    // 0x257c28: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x257c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257c2c:
    // 0x257c2c: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x257c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_257c30:
    // 0x257c30: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x257c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257c34:
    // 0x257c34: 0x8fb200c0  lw          $s2, 0xC0($sp)
    ctx->pc = 0x257c34u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_257c38:
    // 0x257c38: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x257c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_257c3c:
    // 0x257c3c: 0x1299c2  srl         $s3, $s2, 7
    ctx->pc = 0x257c3cu;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 18), 7));
label_257c40:
    // 0x257c40: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x257c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257c44:
    // 0x257c44: 0x8fb200c4  lw          $s2, 0xC4($sp)
    ctx->pc = 0x257c44u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_257c48:
    // 0x257c48: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x257c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_257c4c:
    // 0x257c4c: 0x1291c2  srl         $s2, $s2, 7
    ctx->pc = 0x257c4cu;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 18), 7));
label_257c50:
    // 0x257c50: 0xc6a0000c  lwc1        $f0, 0xC($s5)
    ctx->pc = 0x257c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257c54:
    // 0x257c54: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x257c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_257c58:
    // 0x257c58: 0xa7b300f0  sh          $s3, 0xF0($sp)
    ctx->pc = 0x257c58u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 240), (uint16_t)GPR_U32(ctx, 19));
label_257c5c:
    // 0x257c5c: 0xa4d20000  sh          $s2, 0x0($a2)
    ctx->pc = 0x257c5cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 18));
label_257c60:
    // 0x257c60: 0x8fb200c8  lw          $s2, 0xC8($sp)
    ctx->pc = 0x257c60u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_257c64:
    // 0x257c64: 0x1291c2  srl         $s2, $s2, 7
    ctx->pc = 0x257c64u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 18), 7));
label_257c68:
    // 0x257c68: 0xa4b20000  sh          $s2, 0x0($a1)
    ctx->pc = 0x257c68u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 18));
label_257c6c:
    // 0x257c6c: 0x8fb200cc  lw          $s2, 0xCC($sp)
    ctx->pc = 0x257c6cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_257c70:
    // 0x257c70: 0x1291c2  srl         $s2, $s2, 7
    ctx->pc = 0x257c70u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 18), 7));
label_257c74:
    // 0x257c74: 0xa7b200f6  sh          $s2, 0xF6($sp)
    ctx->pc = 0x257c74u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 246), (uint16_t)GPR_U32(ctx, 18));
label_257c78:
    // 0x257c78: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x257c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257c7c:
    // 0x257c7c: 0xc6000050  lwc1        $f0, 0x50($s0)
    ctx->pc = 0x257c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257c80:
    // 0x257c80: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x257c80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_257c84:
    // 0x257c84: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x257c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_257c88:
    // 0x257c88: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x257c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257c8c:
    // 0x257c8c: 0xc6000054  lwc1        $f0, 0x54($s0)
    ctx->pc = 0x257c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257c90:
    // 0x257c90: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x257c90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_257c94:
    // 0x257c94: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x257c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
label_257c98:
    // 0x257c98: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x257c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257c9c:
    // 0x257c9c: 0xc6000058  lwc1        $f0, 0x58($s0)
    ctx->pc = 0x257c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257ca0:
    // 0x257ca0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x257ca0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_257ca4:
    // 0x257ca4: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x257ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
label_257ca8:
    // 0x257ca8: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x257ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257cac:
    // 0x257cac: 0xc600005c  lwc1        $f0, 0x5C($s0)
    ctx->pc = 0x257cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257cb0:
    // 0x257cb0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x257cb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_257cb4:
    // 0x257cb4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x257cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_257cb8:
    // 0x257cb8: 0xc6010060  lwc1        $f1, 0x60($s0)
    ctx->pc = 0x257cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257cbc:
    // 0x257cbc: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x257cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257cc0:
    // 0x257cc0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x257cc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_257cc4:
    // 0x257cc4: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x257cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_257cc8:
    // 0x257cc8: 0xc6010064  lwc1        $f1, 0x64($s0)
    ctx->pc = 0x257cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257ccc:
    // 0x257ccc: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x257cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257cd0:
    // 0x257cd0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x257cd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_257cd4:
    // 0x257cd4: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x257cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
label_257cd8:
    // 0x257cd8: 0xc6010068  lwc1        $f1, 0x68($s0)
    ctx->pc = 0x257cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257cdc:
    // 0x257cdc: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x257cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257ce0:
    // 0x257ce0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x257ce0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_257ce4:
    // 0x257ce4: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x257ce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
label_257ce8:
    // 0x257ce8: 0xc601006c  lwc1        $f1, 0x6C($s0)
    ctx->pc = 0x257ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257cec:
    // 0x257cec: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x257cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257cf0:
    // 0x257cf0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x257cf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_257cf4:
    // 0x257cf4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x257cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_257cf8:
    // 0x257cf8: 0xc421cf90  lwc1        $f1, -0x3070($at)
    ctx->pc = 0x257cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294954896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257cfc:
    // 0x257cfc: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x257cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257d00:
    // 0x257d00: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x257d00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_257d04:
    // 0x257d04: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_257d08:
    if (ctx->pc == 0x257D08u) {
        ctx->pc = 0x257D08u;
            // 0x257d08: 0xc7a200b0  lwc1        $f2, 0xB0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x257D0Cu;
        goto label_257d0c;
    }
    ctx->pc = 0x257D04u;
    {
        const bool branch_taken_0x257d04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x257D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257D04u;
            // 0x257d08: 0xc7a200b0  lwc1        $f2, 0xB0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x257d04) {
            ctx->pc = 0x257D14u;
            goto label_257d14;
        }
    }
    ctx->pc = 0x257D0Cu;
label_257d0c:
    // 0x257d0c: 0x10000003  b           . + 4 + (0x3 << 2)
label_257d10:
    if (ctx->pc == 0x257D10u) {
        ctx->pc = 0x257D10u;
            // 0x257d10: 0xe7a200b0  swc1        $f2, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->pc = 0x257D14u;
        goto label_257d14;
    }
    ctx->pc = 0x257D0Cu;
    {
        const bool branch_taken_0x257d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257D0Cu;
            // 0x257d10: 0xe7a200b0  swc1        $f2, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x257d0c) {
            ctx->pc = 0x257D1Cu;
            goto label_257d1c;
        }
    }
    ctx->pc = 0x257D14u;
label_257d14:
    // 0x257d14: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x257d14u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_257d18:
    // 0x257d18: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x257d18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_257d1c:
    // 0x257d1c: 0x27b100b4  addiu       $s1, $sp, 0xB4
    ctx->pc = 0x257d1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
label_257d20:
    // 0x257d20: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x257d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257d24:
    // 0x257d24: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x257d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257d28:
    // 0x257d28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x257d28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_257d2c:
    // 0x257d2c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_257d30:
    if (ctx->pc == 0x257D30u) {
        ctx->pc = 0x257D34u;
        goto label_257d34;
    }
    ctx->pc = 0x257D2Cu;
    {
        const bool branch_taken_0x257d2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x257d2c) {
            ctx->pc = 0x257D3Cu;
            goto label_257d3c;
        }
    }
    ctx->pc = 0x257D34u;
label_257d34:
    // 0x257d34: 0x10000003  b           . + 4 + (0x3 << 2)
label_257d38:
    if (ctx->pc == 0x257D38u) {
        ctx->pc = 0x257D38u;
            // 0x257d38: 0xe5610000  swc1        $f1, 0x0($t3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
        ctx->pc = 0x257D3Cu;
        goto label_257d3c;
    }
    ctx->pc = 0x257D34u;
    {
        const bool branch_taken_0x257d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257D34u;
            // 0x257d38: 0xe5610000  swc1        $f1, 0x0($t3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x257d34) {
            ctx->pc = 0x257D44u;
            goto label_257d44;
        }
    }
    ctx->pc = 0x257D3Cu;
label_257d3c:
    // 0x257d3c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x257d3cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_257d40:
    // 0x257d40: 0xe5610000  swc1        $f1, 0x0($t3)
    ctx->pc = 0x257d40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
label_257d44:
    // 0x257d44: 0x27af00b8  addiu       $t7, $sp, 0xB8
    ctx->pc = 0x257d44u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_257d48:
    // 0x257d48: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x257d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257d4c:
    // 0x257d4c: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x257d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257d50:
    // 0x257d50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x257d50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_257d54:
    // 0x257d54: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_257d58:
    if (ctx->pc == 0x257D58u) {
        ctx->pc = 0x257D5Cu;
        goto label_257d5c;
    }
    ctx->pc = 0x257D54u;
    {
        const bool branch_taken_0x257d54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x257d54) {
            ctx->pc = 0x257D64u;
            goto label_257d64;
        }
    }
    ctx->pc = 0x257D5Cu;
label_257d5c:
    // 0x257d5c: 0x10000003  b           . + 4 + (0x3 << 2)
label_257d60:
    if (ctx->pc == 0x257D60u) {
        ctx->pc = 0x257D60u;
            // 0x257d60: 0xe5410000  swc1        $f1, 0x0($t2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
        ctx->pc = 0x257D64u;
        goto label_257d64;
    }
    ctx->pc = 0x257D5Cu;
    {
        const bool branch_taken_0x257d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257D5Cu;
            // 0x257d60: 0xe5410000  swc1        $f1, 0x0($t2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x257d5c) {
            ctx->pc = 0x257D6Cu;
            goto label_257d6c;
        }
    }
    ctx->pc = 0x257D64u;
label_257d64:
    // 0x257d64: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x257d64u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_257d68:
    // 0x257d68: 0xe5410000  swc1        $f1, 0x0($t2)
    ctx->pc = 0x257d68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
label_257d6c:
    // 0x257d6c: 0x27ae00bc  addiu       $t6, $sp, 0xBC
    ctx->pc = 0x257d6cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_257d70:
    // 0x257d70: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x257d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257d74:
    // 0x257d74: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x257d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257d78:
    // 0x257d78: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x257d78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_257d7c:
    // 0x257d7c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_257d80:
    if (ctx->pc == 0x257D80u) {
        ctx->pc = 0x257D84u;
        goto label_257d84;
    }
    ctx->pc = 0x257D7Cu;
    {
        const bool branch_taken_0x257d7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x257d7c) {
            ctx->pc = 0x257D8Cu;
            goto label_257d8c;
        }
    }
    ctx->pc = 0x257D84u;
label_257d84:
    // 0x257d84: 0x10000003  b           . + 4 + (0x3 << 2)
label_257d88:
    if (ctx->pc == 0x257D88u) {
        ctx->pc = 0x257D88u;
            // 0x257d88: 0xe4410000  swc1        $f1, 0x0($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->pc = 0x257D8Cu;
        goto label_257d8c;
    }
    ctx->pc = 0x257D84u;
    {
        const bool branch_taken_0x257d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257D84u;
            // 0x257d88: 0xe4410000  swc1        $f1, 0x0($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x257d84) {
            ctx->pc = 0x257D94u;
            goto label_257d94;
        }
    }
    ctx->pc = 0x257D8Cu;
label_257d8c:
    // 0x257d8c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x257d8cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_257d90:
    // 0x257d90: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x257d90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_257d94:
    // 0x257d94: 0x3c010064  lui         $at, 0x64
    ctx->pc = 0x257d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
label_257d98:
    // 0x257d98: 0xc421f930  lwc1        $f1, -0x6D0($at)
    ctx->pc = 0x257d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257d9c:
    // 0x257d9c: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x257d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257da0:
    // 0x257da0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x257da0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_257da4:
    // 0x257da4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_257da8:
    if (ctx->pc == 0x257DA8u) {
        ctx->pc = 0x257DA8u;
            // 0x257da8: 0xc7a200b0  lwc1        $f2, 0xB0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x257DACu;
        goto label_257dac;
    }
    ctx->pc = 0x257DA4u;
    {
        const bool branch_taken_0x257da4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x257DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257DA4u;
            // 0x257da8: 0xc7a200b0  lwc1        $f2, 0xB0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x257da4) {
            ctx->pc = 0x257DB4u;
            goto label_257db4;
        }
    }
    ctx->pc = 0x257DACu;
label_257dac:
    // 0x257dac: 0x10000003  b           . + 4 + (0x3 << 2)
label_257db0:
    if (ctx->pc == 0x257DB0u) {
        ctx->pc = 0x257DB0u;
            // 0x257db0: 0xe7a200b0  swc1        $f2, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->pc = 0x257DB4u;
        goto label_257db4;
    }
    ctx->pc = 0x257DACu;
    {
        const bool branch_taken_0x257dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257DACu;
            // 0x257db0: 0xe7a200b0  swc1        $f2, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x257dac) {
            ctx->pc = 0x257DBCu;
            goto label_257dbc;
        }
    }
    ctx->pc = 0x257DB4u;
label_257db4:
    // 0x257db4: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x257db4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_257db8:
    // 0x257db8: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x257db8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_257dbc:
    // 0x257dbc: 0xc5800000  lwc1        $f0, 0x0($t4)
    ctx->pc = 0x257dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257dc0:
    // 0x257dc0: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x257dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257dc4:
    // 0x257dc4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x257dc4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_257dc8:
    // 0x257dc8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_257dcc:
    if (ctx->pc == 0x257DCCu) {
        ctx->pc = 0x257DD0u;
        goto label_257dd0;
    }
    ctx->pc = 0x257DC8u;
    {
        const bool branch_taken_0x257dc8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x257dc8) {
            ctx->pc = 0x257DD8u;
            goto label_257dd8;
        }
    }
    ctx->pc = 0x257DD0u;
label_257dd0:
    // 0x257dd0: 0x10000003  b           . + 4 + (0x3 << 2)
label_257dd4:
    if (ctx->pc == 0x257DD4u) {
        ctx->pc = 0x257DD4u;
            // 0x257dd4: 0xe5610000  swc1        $f1, 0x0($t3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
        ctx->pc = 0x257DD8u;
        goto label_257dd8;
    }
    ctx->pc = 0x257DD0u;
    {
        const bool branch_taken_0x257dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257DD0u;
            // 0x257dd4: 0xe5610000  swc1        $f1, 0x0($t3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x257dd0) {
            ctx->pc = 0x257DE0u;
            goto label_257de0;
        }
    }
    ctx->pc = 0x257DD8u;
label_257dd8:
    // 0x257dd8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x257dd8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_257ddc:
    // 0x257ddc: 0xe5610000  swc1        $f1, 0x0($t3)
    ctx->pc = 0x257ddcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
label_257de0:
    // 0x257de0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x257de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257de4:
    // 0x257de4: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x257de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257de8:
    // 0x257de8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x257de8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_257dec:
    // 0x257dec: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_257df0:
    if (ctx->pc == 0x257DF0u) {
        ctx->pc = 0x257DF4u;
        goto label_257df4;
    }
    ctx->pc = 0x257DECu;
    {
        const bool branch_taken_0x257dec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x257dec) {
            ctx->pc = 0x257DFCu;
            goto label_257dfc;
        }
    }
    ctx->pc = 0x257DF4u;
label_257df4:
    // 0x257df4: 0x10000003  b           . + 4 + (0x3 << 2)
label_257df8:
    if (ctx->pc == 0x257DF8u) {
        ctx->pc = 0x257DF8u;
            // 0x257df8: 0xe5410000  swc1        $f1, 0x0($t2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
        ctx->pc = 0x257DFCu;
        goto label_257dfc;
    }
    ctx->pc = 0x257DF4u;
    {
        const bool branch_taken_0x257df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257DF4u;
            // 0x257df8: 0xe5410000  swc1        $f1, 0x0($t2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x257df4) {
            ctx->pc = 0x257E04u;
            goto label_257e04;
        }
    }
    ctx->pc = 0x257DFCu;
label_257dfc:
    // 0x257dfc: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x257dfcu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_257e00:
    // 0x257e00: 0xe5410000  swc1        $f1, 0x0($t2)
    ctx->pc = 0x257e00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
label_257e04:
    // 0x257e04: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x257e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257e08:
    // 0x257e08: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x257e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257e0c:
    // 0x257e0c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x257e0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_257e10:
    // 0x257e10: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_257e14:
    if (ctx->pc == 0x257E14u) {
        ctx->pc = 0x257E18u;
        goto label_257e18;
    }
    ctx->pc = 0x257E10u;
    {
        const bool branch_taken_0x257e10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x257e10) {
            ctx->pc = 0x257E20u;
            goto label_257e20;
        }
    }
    ctx->pc = 0x257E18u;
label_257e18:
    // 0x257e18: 0x10000003  b           . + 4 + (0x3 << 2)
label_257e1c:
    if (ctx->pc == 0x257E1Cu) {
        ctx->pc = 0x257E1Cu;
            // 0x257e1c: 0xe4410000  swc1        $f1, 0x0($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->pc = 0x257E20u;
        goto label_257e20;
    }
    ctx->pc = 0x257E18u;
    {
        const bool branch_taken_0x257e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257E18u;
            // 0x257e1c: 0xe4410000  swc1        $f1, 0x0($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x257e18) {
            ctx->pc = 0x257E28u;
            goto label_257e28;
        }
    }
    ctx->pc = 0x257E20u;
label_257e20:
    // 0x257e20: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x257e20u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_257e24:
    // 0x257e24: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x257e24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_257e28:
    // 0x257e28: 0x3c010064  lui         $at, 0x64
    ctx->pc = 0x257e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
label_257e2c:
    // 0x257e2c: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x257e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257e30:
    // 0x257e30: 0x27ac00b0  addiu       $t4, $sp, 0xB0
    ctx->pc = 0x257e30u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_257e34:
    // 0x257e34: 0xc420f900  lwc1        $f0, -0x700($at)
    ctx->pc = 0x257e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257e38:
    // 0x257e38: 0x27a400e2  addiu       $a0, $sp, 0xE2
    ctx->pc = 0x257e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 226));
label_257e3c:
    // 0x257e3c: 0x27a300e4  addiu       $v1, $sp, 0xE4
    ctx->pc = 0x257e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_257e40:
    // 0x257e40: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x257e40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_257e44:
    // 0x257e44: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x257e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_257e48:
    // 0x257e48: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x257e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257e4c:
    // 0x257e4c: 0xc5610000  lwc1        $f1, 0x0($t3)
    ctx->pc = 0x257e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257e50:
    // 0x257e50: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x257e50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_257e54:
    // 0x257e54: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x257e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
label_257e58:
    // 0x257e58: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x257e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257e5c:
    // 0x257e5c: 0xc5410000  lwc1        $f1, 0x0($t2)
    ctx->pc = 0x257e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257e60:
    // 0x257e60: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x257e60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_257e64:
    // 0x257e64: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x257e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
label_257e68:
    // 0x257e68: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x257e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257e6c:
    // 0x257e6c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x257e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257e70:
    // 0x257e70: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x257e70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_257e74:
    // 0x257e74: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x257e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_257e78:
    // 0x257e78: 0xc5800000  lwc1        $f0, 0x0($t4)
    ctx->pc = 0x257e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257e7c:
    // 0x257e7c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x257e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_257e80:
    // 0x257e80: 0xc5800004  lwc1        $f0, 0x4($t4)
    ctx->pc = 0x257e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257e84:
    // 0x257e84: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x257e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_257e88:
    // 0x257e88: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x257e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_257e8c:
    // 0x257e8c: 0x239c2  srl         $a3, $v0, 7
    ctx->pc = 0x257e8cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 7));
label_257e90:
    // 0x257e90: 0xc5800008  lwc1        $f0, 0x8($t4)
    ctx->pc = 0x257e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257e94:
    // 0x257e94: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x257e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_257e98:
    // 0x257e98: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x257e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_257e9c:
    // 0x257e9c: 0x211c2  srl         $v0, $v0, 7
    ctx->pc = 0x257e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 7));
label_257ea0:
    // 0x257ea0: 0xc580000c  lwc1        $f0, 0xC($t4)
    ctx->pc = 0x257ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257ea4:
    // 0x257ea4: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x257ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_257ea8:
    // 0x257ea8: 0xa7a700e0  sh          $a3, 0xE0($sp)
    ctx->pc = 0x257ea8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 224), (uint16_t)GPR_U32(ctx, 7));
label_257eac:
    // 0x257eac: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x257eacu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_257eb0:
    // 0x257eb0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x257eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_257eb4:
    // 0x257eb4: 0x211c2  srl         $v0, $v0, 7
    ctx->pc = 0x257eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 7));
label_257eb8:
    // 0x257eb8: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x257eb8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_257ebc:
    // 0x257ebc: 0x8fa800ac  lw          $t0, 0xAC($sp)
    ctx->pc = 0x257ebcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_257ec0:
    // 0x257ec0: 0x97a700f0  lhu         $a3, 0xF0($sp)
    ctx->pc = 0x257ec0u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 240)));
label_257ec4:
    // 0x257ec4: 0x97a200e0  lhu         $v0, 0xE0($sp)
    ctx->pc = 0x257ec4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
label_257ec8:
    // 0x257ec8: 0x841c2  srl         $t0, $t0, 7
    ctx->pc = 0x257ec8u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 7));
label_257ecc:
    // 0x257ecc: 0xa7a800e6  sh          $t0, 0xE6($sp)
    ctx->pc = 0x257eccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 230), (uint16_t)GPR_U32(ctx, 8));
label_257ed0:
    // 0x257ed0: 0x30e7fffe  andi        $a3, $a3, 0xFFFE
    ctx->pc = 0x257ed0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65534);
label_257ed4:
    // 0x257ed4: 0x94a90000  lhu         $t1, 0x0($a1)
    ctx->pc = 0x257ed4u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_257ed8:
    // 0x257ed8: 0x94880000  lhu         $t0, 0x0($a0)
    ctx->pc = 0x257ed8u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_257edc:
    // 0x257edc: 0x94ca0000  lhu         $t2, 0x0($a2)
    ctx->pc = 0x257edcu;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_257ee0:
    // 0x257ee0: 0x94650000  lhu         $a1, 0x0($v1)
    ctx->pc = 0x257ee0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_257ee4:
    // 0x257ee4: 0x3132fffe  andi        $s2, $t1, 0xFFFE
    ctx->pc = 0x257ee4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65534);
label_257ee8:
    // 0x257ee8: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x257ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_257eec:
    // 0x257eec: 0x35150001  ori         $s5, $t0, 0x1
    ctx->pc = 0x257eecu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
label_257ef0:
    // 0x257ef0: 0x34460001  ori         $a2, $v0, 0x1
    ctx->pc = 0x257ef0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_257ef4:
    // 0x257ef4: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x257ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_257ef8:
    // 0x257ef8: 0x3143fffe  andi        $v1, $t2, 0xFFFE
    ctx->pc = 0x257ef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65534);
label_257efc:
    // 0x257efc: 0x34b60001  ori         $s6, $a1, 0x1
    ctx->pc = 0x257efcu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
label_257f00:
    // 0x257f00: 0x10800059  beqz        $a0, . + 4 + (0x59 << 2)
label_257f04:
    if (ctx->pc == 0x257F04u) {
        ctx->pc = 0x257F04u;
            // 0x257f04: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x257F08u;
        goto label_257f08;
    }
    ctx->pc = 0x257F00u;
    {
        const bool branch_taken_0x257f00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x257F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257F00u;
            // 0x257f04: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257f00) {
            ctx->pc = 0x258068u;
            goto label_258068;
        }
    }
    ctx->pc = 0x257F08u;
label_257f08:
    // 0x257f08: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x257f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_257f0c:
    // 0x257f0c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x257f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_257f10:
    // 0x257f10: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x257f10u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_257f14:
    // 0x257f14: 0x872007  srav        $a0, $a3, $a0
    ctx->pc = 0x257f14u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
label_257f18:
    // 0x257f18: 0x18800053  blez        $a0, . + 4 + (0x53 << 2)
label_257f1c:
    if (ctx->pc == 0x257F1Cu) {
        ctx->pc = 0x257F20u;
        goto label_257f20;
    }
    ctx->pc = 0x257F18u;
    {
        const bool branch_taken_0x257f18 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x257f18) {
            ctx->pc = 0x258068u;
            goto label_258068;
        }
    }
    ctx->pc = 0x257F20u;
label_257f20:
    // 0x257f20: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x257f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_257f24:
    // 0x257f24: 0x8e0400a8  lw          $a0, 0xA8($s0)
    ctx->pc = 0x257f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_257f28:
    // 0x257f28: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x257f28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_257f2c:
    // 0x257f2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x257f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_257f30:
    // 0x257f30: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x257f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_257f34:
    // 0x257f34: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x257f34u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_257f38:
    // 0x257f38: 0x30a8001f  andi        $t0, $a1, 0x1F
    ctx->pc = 0x257f38u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
label_257f3c:
    // 0x257f3c: 0x52943  sra         $a1, $a1, 5
    ctx->pc = 0x257f3cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 5));
label_257f40:
    // 0x257f40: 0x1024804  sllv        $t1, $v0, $t0
    ctx->pc = 0x257f40u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
label_257f44:
    // 0x257f44: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x257f44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_257f48:
    // 0x257f48: 0x3c54021  addu        $t0, $fp, $a1
    ctx->pc = 0x257f48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
label_257f4c:
    // 0x257f4c: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x257f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_257f50:
    // 0x257f50: 0xa92826  xor         $a1, $a1, $t1
    ctx->pc = 0x257f50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 9));
label_257f54:
    // 0x257f54: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x257f54u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
label_257f58:
    // 0x257f58: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x257f58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_257f5c:
    // 0x257f5c: 0x24aaffff  addiu       $t2, $a1, -0x1
    ctx->pc = 0x257f5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_257f60:
    // 0x257f60: 0x540000d  bltz        $t2, . + 4 + (0xD << 2)
label_257f64:
    if (ctx->pc == 0x257F64u) {
        ctx->pc = 0x257F64u;
            // 0x257f64: 0x8c8b0004  lw          $t3, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x257F68u;
        goto label_257f68;
    }
    ctx->pc = 0x257F60u;
    {
        const bool branch_taken_0x257f60 = (GPR_S32(ctx, 10) < 0);
        ctx->pc = 0x257F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257F60u;
            // 0x257f64: 0x8c8b0004  lw          $t3, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257f60) {
            ctx->pc = 0x257F98u;
            goto label_257f98;
        }
    }
    ctx->pc = 0x257F68u;
label_257f68:
    // 0x257f68: 0x95650000  lhu         $a1, 0x0($t3)
    ctx->pc = 0x257f68u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_257f6c:
    // 0x257f6c: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x257f6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_257f70:
    // 0x257f70: 0x30a8001f  andi        $t0, $a1, 0x1F
    ctx->pc = 0x257f70u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
label_257f74:
    // 0x257f74: 0x256b0002  addiu       $t3, $t3, 0x2
    ctx->pc = 0x257f74u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
label_257f78:
    // 0x257f78: 0x52943  sra         $a1, $a1, 5
    ctx->pc = 0x257f78u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 5));
label_257f7c:
    // 0x257f7c: 0x1024804  sllv        $t1, $v0, $t0
    ctx->pc = 0x257f7cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
label_257f80:
    // 0x257f80: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x257f80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_257f84:
    // 0x257f84: 0x3c54021  addu        $t0, $fp, $a1
    ctx->pc = 0x257f84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
label_257f88:
    // 0x257f88: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x257f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_257f8c:
    // 0x257f8c: 0xa92826  xor         $a1, $a1, $t1
    ctx->pc = 0x257f8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 9));
label_257f90:
    // 0x257f90: 0x541fff5  bgez        $t2, . + 4 + (-0xB << 2)
label_257f94:
    if (ctx->pc == 0x257F94u) {
        ctx->pc = 0x257F94u;
            // 0x257f94: 0xad050000  sw          $a1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
        ctx->pc = 0x257F98u;
        goto label_257f98;
    }
    ctx->pc = 0x257F90u;
    {
        const bool branch_taken_0x257f90 = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x257F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257F90u;
            // 0x257f94: 0xad050000  sw          $a1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257f90) {
            ctx->pc = 0x257F68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_257f68;
        }
    }
    ctx->pc = 0x257F98u;
label_257f98:
    // 0x257f98: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x257f98u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_257f9c:
    // 0x257f9c: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x257f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_257fa0:
    // 0x257fa0: 0x8e08007c  lw          $t0, 0x7C($s0)
    ctx->pc = 0x257fa0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_257fa4:
    // 0x257fa4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x257fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_257fa8:
    // 0x257fa8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x257fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_257fac:
    // 0x257fac: 0x94450008  lhu         $a1, 0x8($v0)
    ctx->pc = 0x257facu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_257fb0:
    // 0x257fb0: 0x9444000a  lhu         $a0, 0xA($v0)
    ctx->pc = 0x257fb0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_257fb4:
    // 0x257fb4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x257fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_257fb8:
    // 0x257fb8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x257fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_257fbc:
    // 0x257fbc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x257fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_257fc0:
    // 0x257fc0: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x257fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_257fc4:
    // 0x257fc4: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x257fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_257fc8:
    // 0x257fc8: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x257fc8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_257fcc:
    // 0x257fcc: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_257fd0:
    if (ctx->pc == 0x257FD0u) {
        ctx->pc = 0x257FD0u;
            // 0x257fd0: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x257FD4u;
        goto label_257fd4;
    }
    ctx->pc = 0x257FCCu;
    {
        const bool branch_taken_0x257fcc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x257FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257FCCu;
            // 0x257fd0: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257fcc) {
            ctx->pc = 0x258020u;
            goto label_258020;
        }
    }
    ctx->pc = 0x257FD4u;
label_257fd4:
    // 0x257fd4: 0x0  nop
    ctx->pc = 0x257fd4u;
    // NOP
label_257fd8:
    // 0x257fd8: 0x94a80000  lhu         $t0, 0x0($a1)
    ctx->pc = 0x257fd8u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_257fdc:
    // 0x257fdc: 0x31080001  andi        $t0, $t0, 0x1
    ctx->pc = 0x257fdcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
label_257fe0:
    // 0x257fe0: 0x1500000b  bnez        $t0, . + 4 + (0xB << 2)
label_257fe4:
    if (ctx->pc == 0x257FE4u) {
        ctx->pc = 0x257FE8u;
        goto label_257fe8;
    }
    ctx->pc = 0x257FE0u;
    {
        const bool branch_taken_0x257fe0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x257fe0) {
            ctx->pc = 0x258010u;
            goto label_258010;
        }
    }
    ctx->pc = 0x257FE8u;
label_257fe8:
    // 0x257fe8: 0x94a80002  lhu         $t0, 0x2($a1)
    ctx->pc = 0x257fe8u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_257fec:
    // 0x257fec: 0x3109001f  andi        $t1, $t0, 0x1F
    ctx->pc = 0x257fecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)31);
label_257ff0:
    // 0x257ff0: 0x84143  sra         $t0, $t0, 5
    ctx->pc = 0x257ff0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 5));
label_257ff4:
    // 0x257ff4: 0x12b4804  sllv        $t1, $t3, $t1
    ctx->pc = 0x257ff4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 9) & 0x1F));
label_257ff8:
    // 0x257ff8: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x257ff8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_257ffc:
    // 0x257ffc: 0x1205027  not         $t2, $t1
    ctx->pc = 0x257ffcu;
    SET_GPR_U64(ctx, 10, ~(GPR_U64(ctx, 9) | GPR_U64(ctx, 0)));
label_258000:
    // 0x258000: 0x3c84821  addu        $t1, $fp, $t0
    ctx->pc = 0x258000u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 8)));
label_258004:
    // 0x258004: 0x8d280000  lw          $t0, 0x0($t1)
    ctx->pc = 0x258004u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_258008:
    // 0x258008: 0x10a4024  and         $t0, $t0, $t2
    ctx->pc = 0x258008u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 10));
label_25800c:
    // 0x25800c: 0xad280000  sw          $t0, 0x0($t1)
    ctx->pc = 0x25800cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 8));
label_258010:
    // 0x258010: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x258010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_258014:
    // 0x258014: 0xa4402b  sltu        $t0, $a1, $a0
    ctx->pc = 0x258014u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_258018:
    // 0x258018: 0x1500ffef  bnez        $t0, . + 4 + (-0x11 << 2)
label_25801c:
    if (ctx->pc == 0x25801Cu) {
        ctx->pc = 0x258020u;
        goto label_258020;
    }
    ctx->pc = 0x258018u;
    {
        const bool branch_taken_0x258018 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x258018) {
            ctx->pc = 0x257FD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_257fd8;
        }
    }
    ctx->pc = 0x258020u;
label_258020:
    // 0x258020: 0x94440008  lhu         $a0, 0x8($v0)
    ctx->pc = 0x258020u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_258024:
    // 0x258024: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x258024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_258028:
    // 0x258028: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x258028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_25802c:
    // 0x25802c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x25802cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_258030:
    // 0x258030: 0x1000000d  b           . + 4 + (0xD << 2)
label_258034:
    if (ctx->pc == 0x258034u) {
        ctx->pc = 0x258034u;
            // 0x258034: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->pc = 0x258038u;
        goto label_258038;
    }
    ctx->pc = 0x258030u;
    {
        const bool branch_taken_0x258030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258030u;
            // 0x258034: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258030) {
            ctx->pc = 0x258068u;
            goto label_258068;
        }
    }
    ctx->pc = 0x258038u;
label_258038:
    // 0x258038: 0x94440002  lhu         $a0, 0x2($v0)
    ctx->pc = 0x258038u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_25803c:
    // 0x25803c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25803cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_258040:
    // 0x258040: 0x3088001f  andi        $t0, $a0, 0x1F
    ctx->pc = 0x258040u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
label_258044:
    // 0x258044: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x258044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_258048:
    // 0x258048: 0x42143  sra         $a0, $a0, 5
    ctx->pc = 0x258048u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 5));
label_25804c:
    // 0x25804c: 0x1054004  sllv        $t0, $a1, $t0
    ctx->pc = 0x25804cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
label_258050:
    // 0x258050: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x258050u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_258054:
    // 0x258054: 0x3c42821  addu        $a1, $fp, $a0
    ctx->pc = 0x258054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
label_258058:
    // 0x258058: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x258058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_25805c:
    // 0x25805c: 0x882026  xor         $a0, $a0, $t0
    ctx->pc = 0x25805cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 8));
label_258060:
    // 0x258060: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x258060u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_258064:
    // 0x258064: 0x0  nop
    ctx->pc = 0x258064u;
    // NOP
label_258068:
    // 0x258068: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x258068u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_25806c:
    // 0x25806c: 0xa7202b  sltu        $a0, $a1, $a3
    ctx->pc = 0x25806cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_258070:
    // 0x258070: 0x1480fff1  bnez        $a0, . + 4 + (-0xF << 2)
label_258074:
    if (ctx->pc == 0x258074u) {
        ctx->pc = 0x258074u;
            // 0x258074: 0xa6082b  sltu        $at, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->pc = 0x258078u;
        goto label_258078;
    }
    ctx->pc = 0x258070u;
    {
        const bool branch_taken_0x258070 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x258074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258070u;
            // 0x258074: 0xa6082b  sltu        $at, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x258070) {
            ctx->pc = 0x258038u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_258038;
        }
    }
    ctx->pc = 0x258078u;
label_258078:
    // 0x258078: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
label_25807c:
    if (ctx->pc == 0x25807Cu) {
        ctx->pc = 0x25807Cu;
            // 0x25807c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x258080u;
        goto label_258080;
    }
    ctx->pc = 0x258078u;
    {
        const bool branch_taken_0x258078 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x25807Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258078u;
            // 0x25807c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258078) {
            ctx->pc = 0x2580C8u;
            goto label_2580c8;
        }
    }
    ctx->pc = 0x258080u;
label_258080:
    // 0x258080: 0x30a40001  andi        $a0, $a1, 0x1
    ctx->pc = 0x258080u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_258084:
    // 0x258084: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
label_258088:
    if (ctx->pc == 0x258088u) {
        ctx->pc = 0x25808Cu;
        goto label_25808c;
    }
    ctx->pc = 0x258084u;
    {
        const bool branch_taken_0x258084 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x258084) {
            ctx->pc = 0x2580B0u;
            goto label_2580b0;
        }
    }
    ctx->pc = 0x25808Cu;
label_25808c:
    // 0x25808c: 0x94440002  lhu         $a0, 0x2($v0)
    ctx->pc = 0x25808cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_258090:
    // 0x258090: 0x3085001f  andi        $a1, $a0, 0x1F
    ctx->pc = 0x258090u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
label_258094:
    // 0x258094: 0x42143  sra         $a0, $a0, 5
    ctx->pc = 0x258094u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 5));
label_258098:
    // 0x258098: 0xa83804  sllv        $a3, $t0, $a1
    ctx->pc = 0x258098u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
label_25809c:
    // 0x25809c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x25809cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2580a0:
    // 0x2580a0: 0x3c42821  addu        $a1, $fp, $a0
    ctx->pc = 0x2580a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
label_2580a4:
    // 0x2580a4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2580a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2580a8:
    // 0x2580a8: 0x872026  xor         $a0, $a0, $a3
    ctx->pc = 0x2580a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 7));
label_2580ac:
    // 0x2580ac: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x2580acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_2580b0:
    // 0x2580b0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2580b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2580b4:
    // 0x2580b4: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x2580b4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2580b8:
    // 0x2580b8: 0xa6202b  sltu        $a0, $a1, $a2
    ctx->pc = 0x2580b8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_2580bc:
    // 0x2580bc: 0x1480fff0  bnez        $a0, . + 4 + (-0x10 << 2)
label_2580c0:
    if (ctx->pc == 0x2580C0u) {
        ctx->pc = 0x2580C4u;
        goto label_2580c4;
    }
    ctx->pc = 0x2580BCu;
    {
        const bool branch_taken_0x2580bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2580bc) {
            ctx->pc = 0x258080u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_258080;
        }
    }
    ctx->pc = 0x2580C4u;
label_2580c4:
    // 0x2580c4: 0x0  nop
    ctx->pc = 0x2580c4u;
    // NOP
label_2580c8:
    // 0x2580c8: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x2580c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_2580cc:
    // 0x2580cc: 0x8e110088  lw          $s1, 0x88($s0)
    ctx->pc = 0x2580ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_2580d0:
    // 0x2580d0: 0x26130088  addiu       $s3, $s0, 0x88
    ctx->pc = 0x2580d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
label_2580d4:
    // 0x2580d4: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x2580d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2580d8:
    // 0x2580d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2580d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2580dc:
    // 0x2580dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2580dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2580e0:
    // 0x2580e0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2580e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2580e4:
    // 0x2580e4: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x2580e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2580e8:
    // 0x2580e8: 0xc095c44  jal         func_257110
label_2580ec:
    if (ctx->pc == 0x2580ECu) {
        ctx->pc = 0x2580ECu;
            // 0x2580ec: 0x2446fff8  addiu       $a2, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->pc = 0x2580F0u;
        goto label_2580f0;
    }
    ctx->pc = 0x2580E8u;
    SET_GPR_U32(ctx, 31, 0x2580F0u);
    ctx->pc = 0x2580ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2580E8u;
            // 0x2580ec: 0x2446fff8  addiu       $a2, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x257110u;
    if (runtime->hasFunction(0x257110u)) {
        auto targetFn = runtime->lookupFunction(0x257110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2580F0u; }
        if (ctx->pc != 0x2580F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00257110_0x257110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2580F0u; }
        if (ctx->pc != 0x2580F0u) { return; }
    }
    ctx->pc = 0x2580F0u;
label_2580f0:
    // 0x2580f0: 0x511823  subu        $v1, $v0, $s1
    ctx->pc = 0x2580f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2580f4:
    // 0x2580f4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_2580f8:
    if (ctx->pc == 0x2580F8u) {
        ctx->pc = 0x2580F8u;
            // 0x2580f8: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->pc = 0x2580FCu;
        goto label_2580fc;
    }
    ctx->pc = 0x2580F4u;
    {
        const bool branch_taken_0x2580f4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2580F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2580F4u;
            // 0x2580f8: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2580f4) {
            ctx->pc = 0x258104u;
            goto label_258104;
        }
    }
    ctx->pc = 0x2580FCu;
label_2580fc:
    // 0x2580fc: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2580fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_258100:
    // 0x258100: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x258100u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_258104:
    // 0x258104: 0xa7a20100  sh          $v0, 0x100($sp)
    ctx->pc = 0x258104u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 256), (uint16_t)GPR_U32(ctx, 2));
label_258108:
    // 0x258108: 0x32a7ffff  andi        $a3, $s5, 0xFFFF
    ctx->pc = 0x258108u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
label_25810c:
    // 0x25810c: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x25810cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_258110:
    // 0x258110: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x258110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_258114:
    // 0x258114: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x258114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_258118:
    // 0x258118: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x258118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_25811c:
    // 0x25811c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25811cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_258120:
    // 0x258120: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x258120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_258124:
    // 0x258124: 0xc095c44  jal         func_257110
label_258128:
    if (ctx->pc == 0x258128u) {
        ctx->pc = 0x258128u;
            // 0x258128: 0x2446fff8  addiu       $a2, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->pc = 0x25812Cu;
        goto label_25812c;
    }
    ctx->pc = 0x258124u;
    SET_GPR_U32(ctx, 31, 0x25812Cu);
    ctx->pc = 0x258128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258124u;
            // 0x258128: 0x2446fff8  addiu       $a2, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x257110u;
    if (runtime->hasFunction(0x257110u)) {
        auto targetFn = runtime->lookupFunction(0x257110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25812Cu; }
        if (ctx->pc != 0x25812Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00257110_0x257110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25812Cu; }
        if (ctx->pc != 0x25812Cu) { return; }
    }
    ctx->pc = 0x25812Cu;
label_25812c:
    // 0x25812c: 0x26230004  addiu       $v1, $s1, 0x4
    ctx->pc = 0x25812cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_258130:
    // 0x258130: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x258130u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_258134:
    // 0x258134: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_258138:
    if (ctx->pc == 0x258138u) {
        ctx->pc = 0x258138u;
            // 0x258138: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->pc = 0x25813Cu;
        goto label_25813c;
    }
    ctx->pc = 0x258134u;
    {
        const bool branch_taken_0x258134 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x258138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258134u;
            // 0x258138: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258134) {
            ctx->pc = 0x258144u;
            goto label_258144;
        }
    }
    ctx->pc = 0x25813Cu;
label_25813c:
    // 0x25813c: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x25813cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_258140:
    // 0x258140: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x258140u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_258144:
    // 0x258144: 0xa7a20104  sh          $v0, 0x104($sp)
    ctx->pc = 0x258144u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 260), (uint16_t)GPR_U32(ctx, 2));
label_258148:
    // 0x258148: 0x3247ffff  andi        $a3, $s2, 0xFFFF
    ctx->pc = 0x258148u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
label_25814c:
    // 0x25814c: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x25814cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_258150:
    // 0x258150: 0x26120094  addiu       $s2, $s0, 0x94
    ctx->pc = 0x258150u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
label_258154:
    // 0x258154: 0x8e110094  lw          $s1, 0x94($s0)
    ctx->pc = 0x258154u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_258158:
    // 0x258158: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x258158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25815c:
    // 0x25815c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x25815cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_258160:
    // 0x258160: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x258160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_258164:
    // 0x258164: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x258164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_258168:
    // 0x258168: 0xc095c44  jal         func_257110
label_25816c:
    if (ctx->pc == 0x25816Cu) {
        ctx->pc = 0x25816Cu;
            // 0x25816c: 0x2446fff8  addiu       $a2, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->pc = 0x258170u;
        goto label_258170;
    }
    ctx->pc = 0x258168u;
    SET_GPR_U32(ctx, 31, 0x258170u);
    ctx->pc = 0x25816Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258168u;
            // 0x25816c: 0x2446fff8  addiu       $a2, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x257110u;
    if (runtime->hasFunction(0x257110u)) {
        auto targetFn = runtime->lookupFunction(0x257110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258170u; }
        if (ctx->pc != 0x258170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00257110_0x257110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258170u; }
        if (ctx->pc != 0x258170u) { return; }
    }
    ctx->pc = 0x258170u;
label_258170:
    // 0x258170: 0x511823  subu        $v1, $v0, $s1
    ctx->pc = 0x258170u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_258174:
    // 0x258174: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_258178:
    if (ctx->pc == 0x258178u) {
        ctx->pc = 0x258178u;
            // 0x258178: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->pc = 0x25817Cu;
        goto label_25817c;
    }
    ctx->pc = 0x258174u;
    {
        const bool branch_taken_0x258174 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x258178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258174u;
            // 0x258178: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258174) {
            ctx->pc = 0x258184u;
            goto label_258184;
        }
    }
    ctx->pc = 0x25817Cu;
label_25817c:
    // 0x25817c: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x25817cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_258180:
    // 0x258180: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x258180u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_258184:
    // 0x258184: 0xa7a20102  sh          $v0, 0x102($sp)
    ctx->pc = 0x258184u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 258), (uint16_t)GPR_U32(ctx, 2));
label_258188:
    // 0x258188: 0x32c7ffff  andi        $a3, $s6, 0xFFFF
    ctx->pc = 0x258188u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
label_25818c:
    // 0x25818c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x25818cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_258190:
    // 0x258190: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x258190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_258194:
    // 0x258194: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x258194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_258198:
    // 0x258198: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x258198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_25819c:
    // 0x25819c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25819cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2581a0:
    // 0x2581a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2581a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2581a4:
    // 0x2581a4: 0xc095c44  jal         func_257110
label_2581a8:
    if (ctx->pc == 0x2581A8u) {
        ctx->pc = 0x2581A8u;
            // 0x2581a8: 0x2446fff8  addiu       $a2, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->pc = 0x2581ACu;
        goto label_2581ac;
    }
    ctx->pc = 0x2581A4u;
    SET_GPR_U32(ctx, 31, 0x2581ACu);
    ctx->pc = 0x2581A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2581A4u;
            // 0x2581a8: 0x2446fff8  addiu       $a2, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x257110u;
    if (runtime->hasFunction(0x257110u)) {
        auto targetFn = runtime->lookupFunction(0x257110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2581ACu; }
        if (ctx->pc != 0x2581ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00257110_0x257110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2581ACu; }
        if (ctx->pc != 0x2581ACu) { return; }
    }
    ctx->pc = 0x2581ACu;
label_2581ac:
    // 0x2581ac: 0x26230004  addiu       $v1, $s1, 0x4
    ctx->pc = 0x2581acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2581b0:
    // 0x2581b0: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x2581b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2581b4:
    // 0x2581b4: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_2581b8:
    if (ctx->pc == 0x2581B8u) {
        ctx->pc = 0x2581B8u;
            // 0x2581b8: 0x41883  sra         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
        ctx->pc = 0x2581BCu;
        goto label_2581bc;
    }
    ctx->pc = 0x2581B4u;
    {
        const bool branch_taken_0x2581b4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2581B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2581B4u;
            // 0x2581b8: 0x41883  sra         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2581b4) {
            ctx->pc = 0x2581C4u;
            goto label_2581c4;
        }
    }
    ctx->pc = 0x2581BCu;
label_2581bc:
    // 0x2581bc: 0x24830003  addiu       $v1, $a0, 0x3
    ctx->pc = 0x2581bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
label_2581c0:
    // 0x2581c0: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x2581c0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_2581c4:
    // 0x2581c4: 0xa7a30106  sh          $v1, 0x106($sp)
    ctx->pc = 0x2581c4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 262), (uint16_t)GPR_U32(ctx, 3));
label_2581c8:
    // 0x2581c8: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x2581c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_2581cc:
    // 0x2581cc: 0x8e160070  lw          $s6, 0x70($s0)
    ctx->pc = 0x2581ccu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_2581d0:
    // 0x2581d0: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x2581d0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_2581d4:
    // 0x2581d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2581d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2581d8:
    // 0x2581d8: 0x3c31821  addu        $v1, $fp, $v1
    ctx->pc = 0x2581d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
label_2581dc:
    // 0x2581dc: 0x24770004  addiu       $s7, $v1, 0x4
    ctx->pc = 0x2581dcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_2581e0:
    // 0x2581e0: 0x3d7082b  sltu        $at, $fp, $s7
    ctx->pc = 0x2581e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_2581e4:
    // 0x2581e4: 0x102000a0  beqz        $at, . + 4 + (0xA0 << 2)
label_2581e8:
    if (ctx->pc == 0x2581E8u) {
        ctx->pc = 0x2581E8u;
            // 0x2581e8: 0x3c0982d  daddu       $s3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2581ECu;
        goto label_2581ec;
    }
    ctx->pc = 0x2581E4u;
    {
        const bool branch_taken_0x2581e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2581E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2581E4u;
            // 0x2581e8: 0x3c0982d  daddu       $s3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2581e4) {
            ctx->pc = 0x258468u;
            goto label_258468;
        }
    }
    ctx->pc = 0x2581ECu;
label_2581ec:
    // 0x2581ec: 0x27b00104  addiu       $s0, $sp, 0x104
    ctx->pc = 0x2581ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
label_2581f0:
    // 0x2581f0: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x2581f0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2581f4:
    // 0x2581f4: 0x12400098  beqz        $s2, . + 4 + (0x98 << 2)
label_2581f8:
    if (ctx->pc == 0x2581F8u) {
        ctx->pc = 0x2581F8u;
            // 0x2581f8: 0x2c0882d  daddu       $s1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2581FCu;
        goto label_2581fc;
    }
    ctx->pc = 0x2581F4u;
    {
        const bool branch_taken_0x2581f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2581F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2581F4u;
            // 0x2581f8: 0x2c0882d  daddu       $s1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2581f4) {
            ctx->pc = 0x258458u;
            goto label_258458;
        }
    }
    ctx->pc = 0x2581FCu;
label_2581fc:
    // 0x2581fc: 0x0  nop
    ctx->pc = 0x2581fcu;
    // NOP
label_258200:
    // 0x258200: 0x3243000f  andi        $v1, $s2, 0xF
    ctx->pc = 0x258200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)15);
label_258204:
    // 0x258204: 0x10600090  beqz        $v1, . + 4 + (0x90 << 2)
label_258208:
    if (ctx->pc == 0x258208u) {
        ctx->pc = 0x258208u;
            // 0x258208: 0x32430001  andi        $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x25820Cu;
        goto label_25820c;
    }
    ctx->pc = 0x258204u;
    {
        const bool branch_taken_0x258204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x258208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258204u;
            // 0x258208: 0x32430001  andi        $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x258204) {
            ctx->pc = 0x258448u;
            goto label_258448;
        }
    }
    ctx->pc = 0x25820Cu;
label_25820c:
    // 0x25820c: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_258210:
    if (ctx->pc == 0x258210u) {
        ctx->pc = 0x258214u;
        goto label_258214;
    }
    ctx->pc = 0x25820Cu;
    {
        const bool branch_taken_0x25820c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25820c) {
            ctx->pc = 0x258298u;
            goto label_258298;
        }
    }
    ctx->pc = 0x258214u;
label_258214:
    // 0x258214: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x258214u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_258218:
    // 0x258218: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x258218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_25821c:
    // 0x25821c: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x25821cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_258220:
    // 0x258220: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x258220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_258224:
    // 0x258224: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x258224u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_258228:
    // 0x258228: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x258228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25822c:
    // 0x25822c: 0xe53823  subu        $a3, $a3, $a1
    ctx->pc = 0x25822cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_258230:
    // 0x258230: 0xc43023  subu        $a2, $a2, $a0
    ctx->pc = 0x258230u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_258234:
    // 0x258234: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x258234u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
label_258238:
    // 0x258238: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x258238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
label_25823c:
    // 0x25823c: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
label_258240:
    if (ctx->pc == 0x258240u) {
        ctx->pc = 0x258244u;
        goto label_258244;
    }
    ctx->pc = 0x25823Cu;
    {
        const bool branch_taken_0x25823c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25823c) {
            ctx->pc = 0x258298u;
            goto label_258298;
        }
    }
    ctx->pc = 0x258244u;
label_258244:
    // 0x258244: 0x8e35000c  lw          $s5, 0xC($s1)
    ctx->pc = 0x258244u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_258248:
    // 0x258248: 0x32a30001  andi        $v1, $s5, 0x1
    ctx->pc = 0x258248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_25824c:
    // 0x25824c: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
label_258250:
    if (ctx->pc == 0x258250u) {
        ctx->pc = 0x258254u;
        goto label_258254;
    }
    ctx->pc = 0x25824Cu;
    {
        const bool branch_taken_0x25824c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25824c) {
            ctx->pc = 0x258298u;
            goto label_258298;
        }
    }
    ctx->pc = 0x258254u;
label_258254:
    // 0x258254: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x258254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_258258:
    // 0x258258: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x258258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_25825c:
    // 0x25825c: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x25825cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_258260:
    // 0x258260: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x258260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_258264:
    // 0x258264: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_258268:
    if (ctx->pc == 0x258268u) {
        ctx->pc = 0x258268u;
            // 0x258268: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25826Cu;
        goto label_25826c;
    }
    ctx->pc = 0x258264u;
    {
        const bool branch_taken_0x258264 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x258268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258264u;
            // 0x258268: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258264) {
            ctx->pc = 0x258278u;
            goto label_258278;
        }
    }
    ctx->pc = 0x25826Cu;
label_25826c:
    // 0x25826c: 0xc0a728c  jal         func_29CA30
label_258270:
    if (ctx->pc == 0x258270u) {
        ctx->pc = 0x258270u;
            // 0x258270: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x258274u;
        goto label_258274;
    }
    ctx->pc = 0x25826Cu;
    SET_GPR_U32(ctx, 31, 0x258274u);
    ctx->pc = 0x258270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25826Cu;
            // 0x258270: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258274u; }
        if (ctx->pc != 0x258274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258274u; }
        if (ctx->pc != 0x258274u) { return; }
    }
    ctx->pc = 0x258274u;
label_258274:
    // 0x258274: 0x0  nop
    ctx->pc = 0x258274u;
    // NOP
label_258278:
    // 0x258278: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x258278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_25827c:
    // 0x25827c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x25827cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_258280:
    // 0x258280: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x258280u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
label_258284:
    // 0x258284: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x258284u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_258288:
    // 0x258288: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x258288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_25828c:
    // 0x25828c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25828cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_258290:
    // 0x258290: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x258290u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_258294:
    // 0x258294: 0xac750004  sw          $s5, 0x4($v1)
    ctx->pc = 0x258294u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 21));
label_258298:
    // 0x258298: 0x32430002  andi        $v1, $s2, 0x2
    ctx->pc = 0x258298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
label_25829c:
    // 0x25829c: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_2582a0:
    if (ctx->pc == 0x2582A0u) {
        ctx->pc = 0x2582A4u;
        goto label_2582a4;
    }
    ctx->pc = 0x25829Cu;
    {
        const bool branch_taken_0x25829c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25829c) {
            ctx->pc = 0x258328u;
            goto label_258328;
        }
    }
    ctx->pc = 0x2582A4u;
label_2582a4:
    // 0x2582a4: 0x8e270014  lw          $a3, 0x14($s1)
    ctx->pc = 0x2582a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2582a8:
    // 0x2582a8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2582a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2582ac:
    // 0x2582ac: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x2582acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_2582b0:
    // 0x2582b0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2582b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_2582b4:
    // 0x2582b4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2582b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2582b8:
    // 0x2582b8: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2582b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2582bc:
    // 0x2582bc: 0xe53823  subu        $a3, $a3, $a1
    ctx->pc = 0x2582bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_2582c0:
    // 0x2582c0: 0xc43023  subu        $a2, $a2, $a0
    ctx->pc = 0x2582c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_2582c4:
    // 0x2582c4: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x2582c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
label_2582c8:
    // 0x2582c8: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x2582c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
label_2582cc:
    // 0x2582cc: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
label_2582d0:
    if (ctx->pc == 0x2582D0u) {
        ctx->pc = 0x2582D4u;
        goto label_2582d4;
    }
    ctx->pc = 0x2582CCu;
    {
        const bool branch_taken_0x2582cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2582cc) {
            ctx->pc = 0x258328u;
            goto label_258328;
        }
    }
    ctx->pc = 0x2582D4u;
label_2582d4:
    // 0x2582d4: 0x8e35001c  lw          $s5, 0x1C($s1)
    ctx->pc = 0x2582d4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2582d8:
    // 0x2582d8: 0x32a30001  andi        $v1, $s5, 0x1
    ctx->pc = 0x2582d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_2582dc:
    // 0x2582dc: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
label_2582e0:
    if (ctx->pc == 0x2582E0u) {
        ctx->pc = 0x2582E4u;
        goto label_2582e4;
    }
    ctx->pc = 0x2582DCu;
    {
        const bool branch_taken_0x2582dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2582dc) {
            ctx->pc = 0x258328u;
            goto label_258328;
        }
    }
    ctx->pc = 0x2582E4u;
label_2582e4:
    // 0x2582e4: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x2582e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_2582e8:
    // 0x2582e8: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x2582e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2582ec:
    // 0x2582ec: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x2582ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_2582f0:
    // 0x2582f0: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x2582f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_2582f4:
    // 0x2582f4: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_2582f8:
    if (ctx->pc == 0x2582F8u) {
        ctx->pc = 0x2582F8u;
            // 0x2582f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2582FCu;
        goto label_2582fc;
    }
    ctx->pc = 0x2582F4u;
    {
        const bool branch_taken_0x2582f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2582F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2582F4u;
            // 0x2582f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2582f4) {
            ctx->pc = 0x258308u;
            goto label_258308;
        }
    }
    ctx->pc = 0x2582FCu;
label_2582fc:
    // 0x2582fc: 0xc0a728c  jal         func_29CA30
label_258300:
    if (ctx->pc == 0x258300u) {
        ctx->pc = 0x258300u;
            // 0x258300: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x258304u;
        goto label_258304;
    }
    ctx->pc = 0x2582FCu;
    SET_GPR_U32(ctx, 31, 0x258304u);
    ctx->pc = 0x258300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2582FCu;
            // 0x258300: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258304u; }
        if (ctx->pc != 0x258304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258304u; }
        if (ctx->pc != 0x258304u) { return; }
    }
    ctx->pc = 0x258304u;
label_258304:
    // 0x258304: 0x0  nop
    ctx->pc = 0x258304u;
    // NOP
label_258308:
    // 0x258308: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x258308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_25830c:
    // 0x25830c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x25830cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_258310:
    // 0x258310: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x258310u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
label_258314:
    // 0x258314: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x258314u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_258318:
    // 0x258318: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x258318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_25831c:
    // 0x25831c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25831cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_258320:
    // 0x258320: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x258320u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_258324:
    // 0x258324: 0xac750004  sw          $s5, 0x4($v1)
    ctx->pc = 0x258324u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 21));
label_258328:
    // 0x258328: 0x32430004  andi        $v1, $s2, 0x4
    ctx->pc = 0x258328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
label_25832c:
    // 0x25832c: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_258330:
    if (ctx->pc == 0x258330u) {
        ctx->pc = 0x258334u;
        goto label_258334;
    }
    ctx->pc = 0x25832Cu;
    {
        const bool branch_taken_0x25832c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25832c) {
            ctx->pc = 0x2583B8u;
            goto label_2583b8;
        }
    }
    ctx->pc = 0x258334u;
label_258334:
    // 0x258334: 0x8e270024  lw          $a3, 0x24($s1)
    ctx->pc = 0x258334u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_258338:
    // 0x258338: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x258338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_25833c:
    // 0x25833c: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x25833cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_258340:
    // 0x258340: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x258340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_258344:
    // 0x258344: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x258344u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_258348:
    // 0x258348: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x258348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_25834c:
    // 0x25834c: 0xe53823  subu        $a3, $a3, $a1
    ctx->pc = 0x25834cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_258350:
    // 0x258350: 0xc43023  subu        $a2, $a2, $a0
    ctx->pc = 0x258350u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_258354:
    // 0x258354: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x258354u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
label_258358:
    // 0x258358: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x258358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
label_25835c:
    // 0x25835c: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
label_258360:
    if (ctx->pc == 0x258360u) {
        ctx->pc = 0x258364u;
        goto label_258364;
    }
    ctx->pc = 0x25835Cu;
    {
        const bool branch_taken_0x25835c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25835c) {
            ctx->pc = 0x2583B8u;
            goto label_2583b8;
        }
    }
    ctx->pc = 0x258364u;
label_258364:
    // 0x258364: 0x8e35002c  lw          $s5, 0x2C($s1)
    ctx->pc = 0x258364u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_258368:
    // 0x258368: 0x32a30001  andi        $v1, $s5, 0x1
    ctx->pc = 0x258368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_25836c:
    // 0x25836c: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
label_258370:
    if (ctx->pc == 0x258370u) {
        ctx->pc = 0x258374u;
        goto label_258374;
    }
    ctx->pc = 0x25836Cu;
    {
        const bool branch_taken_0x25836c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25836c) {
            ctx->pc = 0x2583B8u;
            goto label_2583b8;
        }
    }
    ctx->pc = 0x258374u;
label_258374:
    // 0x258374: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x258374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_258378:
    // 0x258378: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x258378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_25837c:
    // 0x25837c: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x25837cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_258380:
    // 0x258380: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x258380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_258384:
    // 0x258384: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_258388:
    if (ctx->pc == 0x258388u) {
        ctx->pc = 0x258388u;
            // 0x258388: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25838Cu;
        goto label_25838c;
    }
    ctx->pc = 0x258384u;
    {
        const bool branch_taken_0x258384 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x258388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258384u;
            // 0x258388: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258384) {
            ctx->pc = 0x258398u;
            goto label_258398;
        }
    }
    ctx->pc = 0x25838Cu;
label_25838c:
    // 0x25838c: 0xc0a728c  jal         func_29CA30
label_258390:
    if (ctx->pc == 0x258390u) {
        ctx->pc = 0x258390u;
            // 0x258390: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x258394u;
        goto label_258394;
    }
    ctx->pc = 0x25838Cu;
    SET_GPR_U32(ctx, 31, 0x258394u);
    ctx->pc = 0x258390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25838Cu;
            // 0x258390: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258394u; }
        if (ctx->pc != 0x258394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258394u; }
        if (ctx->pc != 0x258394u) { return; }
    }
    ctx->pc = 0x258394u;
label_258394:
    // 0x258394: 0x0  nop
    ctx->pc = 0x258394u;
    // NOP
label_258398:
    // 0x258398: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x258398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_25839c:
    // 0x25839c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x25839cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2583a0:
    // 0x2583a0: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x2583a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
label_2583a4:
    // 0x2583a4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2583a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2583a8:
    // 0x2583a8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2583a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2583ac:
    // 0x2583ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2583acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2583b0:
    // 0x2583b0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2583b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_2583b4:
    // 0x2583b4: 0xac750004  sw          $s5, 0x4($v1)
    ctx->pc = 0x2583b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 21));
label_2583b8:
    // 0x2583b8: 0x32430008  andi        $v1, $s2, 0x8
    ctx->pc = 0x2583b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8);
label_2583bc:
    // 0x2583bc: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_2583c0:
    if (ctx->pc == 0x2583C0u) {
        ctx->pc = 0x2583C4u;
        goto label_2583c4;
    }
    ctx->pc = 0x2583BCu;
    {
        const bool branch_taken_0x2583bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2583bc) {
            ctx->pc = 0x258448u;
            goto label_258448;
        }
    }
    ctx->pc = 0x2583C4u;
label_2583c4:
    // 0x2583c4: 0x8e270034  lw          $a3, 0x34($s1)
    ctx->pc = 0x2583c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_2583c8:
    // 0x2583c8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2583c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2583cc:
    // 0x2583cc: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x2583ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_2583d0:
    // 0x2583d0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2583d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_2583d4:
    // 0x2583d4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2583d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2583d8:
    // 0x2583d8: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x2583d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2583dc:
    // 0x2583dc: 0xe53823  subu        $a3, $a3, $a1
    ctx->pc = 0x2583dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_2583e0:
    // 0x2583e0: 0xc43023  subu        $a2, $a2, $a0
    ctx->pc = 0x2583e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_2583e4:
    // 0x2583e4: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x2583e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
label_2583e8:
    // 0x2583e8: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x2583e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
label_2583ec:
    // 0x2583ec: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
label_2583f0:
    if (ctx->pc == 0x2583F0u) {
        ctx->pc = 0x2583F4u;
        goto label_2583f4;
    }
    ctx->pc = 0x2583ECu;
    {
        const bool branch_taken_0x2583ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2583ec) {
            ctx->pc = 0x258448u;
            goto label_258448;
        }
    }
    ctx->pc = 0x2583F4u;
label_2583f4:
    // 0x2583f4: 0x8e35003c  lw          $s5, 0x3C($s1)
    ctx->pc = 0x2583f4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_2583f8:
    // 0x2583f8: 0x32a30001  andi        $v1, $s5, 0x1
    ctx->pc = 0x2583f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_2583fc:
    // 0x2583fc: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
label_258400:
    if (ctx->pc == 0x258400u) {
        ctx->pc = 0x258404u;
        goto label_258404;
    }
    ctx->pc = 0x2583FCu;
    {
        const bool branch_taken_0x2583fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2583fc) {
            ctx->pc = 0x258448u;
            goto label_258448;
        }
    }
    ctx->pc = 0x258404u;
label_258404:
    // 0x258404: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x258404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_258408:
    // 0x258408: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x258408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_25840c:
    // 0x25840c: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x25840cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_258410:
    // 0x258410: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x258410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_258414:
    // 0x258414: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_258418:
    if (ctx->pc == 0x258418u) {
        ctx->pc = 0x258418u;
            // 0x258418: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25841Cu;
        goto label_25841c;
    }
    ctx->pc = 0x258414u;
    {
        const bool branch_taken_0x258414 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x258418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258414u;
            // 0x258418: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258414) {
            ctx->pc = 0x258428u;
            goto label_258428;
        }
    }
    ctx->pc = 0x25841Cu;
label_25841c:
    // 0x25841c: 0xc0a728c  jal         func_29CA30
label_258420:
    if (ctx->pc == 0x258420u) {
        ctx->pc = 0x258420u;
            // 0x258420: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x258424u;
        goto label_258424;
    }
    ctx->pc = 0x25841Cu;
    SET_GPR_U32(ctx, 31, 0x258424u);
    ctx->pc = 0x258420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25841Cu;
            // 0x258420: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258424u; }
        if (ctx->pc != 0x258424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258424u; }
        if (ctx->pc != 0x258424u) { return; }
    }
    ctx->pc = 0x258424u;
label_258424:
    // 0x258424: 0x0  nop
    ctx->pc = 0x258424u;
    // NOP
label_258428:
    // 0x258428: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x258428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_25842c:
    // 0x25842c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x25842cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_258430:
    // 0x258430: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x258430u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
label_258434:
    // 0x258434: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x258434u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_258438:
    // 0x258438: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x258438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_25843c:
    // 0x25843c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25843cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_258440:
    // 0x258440: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x258440u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_258444:
    // 0x258444: 0xac750004  sw          $s5, 0x4($v1)
    ctx->pc = 0x258444u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 21));
label_258448:
    // 0x258448: 0x129102  srl         $s2, $s2, 4
    ctx->pc = 0x258448u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 18), 4));
label_25844c:
    // 0x25844c: 0x1640ff6c  bnez        $s2, . + 4 + (-0x94 << 2)
label_258450:
    if (ctx->pc == 0x258450u) {
        ctx->pc = 0x258450u;
            // 0x258450: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->pc = 0x258454u;
        goto label_258454;
    }
    ctx->pc = 0x25844Cu;
    {
        const bool branch_taken_0x25844c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x258450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25844Cu;
            // 0x258450: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25844c) {
            ctx->pc = 0x258200u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_258200;
        }
    }
    ctx->pc = 0x258454u;
label_258454:
    // 0x258454: 0x0  nop
    ctx->pc = 0x258454u;
    // NOP
label_258458:
    // 0x258458: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x258458u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_25845c:
    // 0x25845c: 0x277182b  sltu        $v1, $s3, $s7
    ctx->pc = 0x25845cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_258460:
    // 0x258460: 0x1460ff63  bnez        $v1, . + 4 + (-0x9D << 2)
label_258464:
    if (ctx->pc == 0x258464u) {
        ctx->pc = 0x258464u;
            // 0x258464: 0x26d60200  addiu       $s6, $s6, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 512));
        ctx->pc = 0x258468u;
        goto label_258468;
    }
    ctx->pc = 0x258460u;
    {
        const bool branch_taken_0x258460 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x258464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258460u;
            // 0x258464: 0x26d60200  addiu       $s6, $s6, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258460) {
            ctx->pc = 0x2581F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2581f0;
        }
    }
    ctx->pc = 0x258468u;
label_258468:
    // 0x258468: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x258468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_25846c:
    // 0x25846c: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x25846cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_258470:
    // 0x258470: 0xac9e000c  sw          $fp, 0xC($a0)
    ctx->pc = 0x258470u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 30));
label_258474:
    // 0x258474: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x258474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_258478:
    // 0x258478: 0x17c30005  bne         $fp, $v1, . + 4 + (0x5 << 2)
label_25847c:
    if (ctx->pc == 0x25847Cu) {
        ctx->pc = 0x258480u;
        goto label_258480;
    }
    ctx->pc = 0x258478u;
    {
        const bool branch_taken_0x258478 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 3));
        if (branch_taken_0x258478) {
            ctx->pc = 0x258490u;
            goto label_258490;
        }
    }
    ctx->pc = 0x258480u;
label_258480:
    // 0x258480: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x258480u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_258484:
    // 0x258484: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x258484u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_258488:
    // 0x258488: 0x320f809  jalr        $t9
label_25848c:
    if (ctx->pc == 0x25848Cu) {
        ctx->pc = 0x25848Cu;
            // 0x25848c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x258490u;
        goto label_258490;
    }
    ctx->pc = 0x258488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x258490u);
        ctx->pc = 0x25848Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258488u;
            // 0x25848c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x258490u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x258490u; }
            if (ctx->pc != 0x258490u) { return; }
        }
        }
    }
    ctx->pc = 0x258490u;
label_258490:
    // 0x258490: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x258490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_258494:
    // 0x258494: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x258494u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_258498:
    // 0x258498: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x258498u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_25849c:
    // 0x25849c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x25849cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2584a0:
    // 0x2584a0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2584a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2584a4:
    // 0x2584a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2584a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2584a8:
    // 0x2584a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2584a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2584ac:
    // 0x2584ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2584acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2584b0:
    // 0x2584b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2584b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2584b4:
    // 0x2584b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2584b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2584b8:
    // 0x2584b8: 0x3e00008  jr          $ra
label_2584bc:
    if (ctx->pc == 0x2584BCu) {
        ctx->pc = 0x2584BCu;
            // 0x2584bc: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x2584C0u;
        goto label_2584c0;
    }
    ctx->pc = 0x2584B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2584BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2584B8u;
            // 0x2584bc: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2584C0u;
label_2584c0:
    // 0x2584c0: 0x8c850074  lw          $a1, 0x74($a0)
    ctx->pc = 0x2584c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_2584c4:
    // 0x2584c4: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x2584c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_2584c8:
    // 0x2584c8: 0x8c8300a0  lw          $v1, 0xA0($a0)
    ctx->pc = 0x2584c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_2584cc:
    // 0x2584cc: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x2584ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2584d0:
    // 0x2584d0: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x2584d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2584d4:
    // 0x2584d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2584d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2584d8:
    // 0x2584d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2584d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2584dc:
    // 0x2584dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2584dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2584e0:
    // 0x2584e0: 0x3e00008  jr          $ra
label_2584e4:
    if (ctx->pc == 0x2584E4u) {
        ctx->pc = 0x2584E4u;
            // 0x2584e4: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2584E8u;
        goto label_2584e8;
    }
    ctx->pc = 0x2584E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2584E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2584E0u;
            // 0x2584e4: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2584E8u;
label_2584e8:
    // 0x2584e8: 0x0  nop
    ctx->pc = 0x2584e8u;
    // NOP
label_2584ec:
    // 0x2584ec: 0x0  nop
    ctx->pc = 0x2584ecu;
    // NOP
label_2584f0:
    // 0x2584f0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x2584f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_2584f4:
    // 0x2584f4: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x2584f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_2584f8:
    // 0x2584f8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2584f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2584fc:
    // 0x2584fc: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2584fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_258500:
    // 0x258500: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x258500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_258504:
    // 0x258504: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x258504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_258508:
    // 0x258508: 0x27be0118  addiu       $fp, $sp, 0x118
    ctx->pc = 0x258508u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_25850c:
    // 0x25850c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x25850cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_258510:
    // 0x258510: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x258510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_258514:
    // 0x258514: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x258514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_258518:
    // 0x258518: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x258518u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25851c:
    // 0x25851c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25851cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_258520:
    // 0x258520: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x258520u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_258524:
    // 0x258524: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x258524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_258528:
    // 0x258528: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x258528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_25852c:
    // 0x25852c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25852cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_258530:
    // 0x258530: 0x8c910074  lw          $s1, 0x74($a0)
    ctx->pc = 0x258530u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_258534:
    // 0x258534: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x258534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_258538:
    // 0x258538: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x258538u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_25853c:
    // 0x25853c: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x25853cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
label_258540:
    // 0x258540: 0xafa00114  sw          $zero, 0x114($sp)
    ctx->pc = 0x258540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 0));
label_258544:
    // 0x258544: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x258544u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_258548:
    // 0x258548: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x258548u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_25854c:
    // 0x25854c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x25854cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_258550:
    // 0x258550: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x258550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_258554:
    // 0x258554: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x258554u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_258558:
    // 0x258558: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x258558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_25855c:
    // 0x25855c: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x25855cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_258560:
    // 0x258560: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x258560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_258564:
    // 0x258564: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x258564u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_258568:
    // 0x258568: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_25856c:
    if (ctx->pc == 0x25856Cu) {
        ctx->pc = 0x25856Cu;
            // 0x25856c: 0x27b20110  addiu       $s2, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x258570u;
        goto label_258570;
    }
    ctx->pc = 0x258568u;
    {
        const bool branch_taken_0x258568 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x25856Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258568u;
            // 0x25856c: 0x27b20110  addiu       $s2, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258568) {
            ctx->pc = 0x258578u;
            goto label_258578;
        }
    }
    ctx->pc = 0x258570u;
label_258570:
    // 0x258570: 0x10000005  b           . + 4 + (0x5 << 2)
label_258574:
    if (ctx->pc == 0x258574u) {
        ctx->pc = 0x258574u;
            // 0x258574: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x258578u;
        goto label_258578;
    }
    ctx->pc = 0x258570u;
    {
        const bool branch_taken_0x258570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258570u;
            // 0x258574: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258570) {
            ctx->pc = 0x258588u;
            goto label_258588;
        }
    }
    ctx->pc = 0x258578u;
label_258578:
    // 0x258578: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x258578u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25857c:
    // 0x25857c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x25857cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_258580:
    // 0x258580: 0x320f809  jalr        $t9
label_258584:
    if (ctx->pc == 0x258584u) {
        ctx->pc = 0x258588u;
        goto label_258588;
    }
    ctx->pc = 0x258580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x258588u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x258588u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x258588u; }
            if (ctx->pc != 0x258588u) { return; }
        }
        }
    }
    ctx->pc = 0x258588u;
label_258588:
    // 0x258588: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x258588u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_25858c:
    // 0x25858c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x25858cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_258590:
    // 0x258590: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x258590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_258594:
    // 0x258594: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x258594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_258598:
    // 0x258598: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x258598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_25859c:
    // 0x25859c: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x25859cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_2585a0:
    // 0x2585a0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2585a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2585a4:
    // 0x2585a4: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x2585a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_2585a8:
    // 0x2585a8: 0x8eb10074  lw          $s1, 0x74($s5)
    ctx->pc = 0x2585a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_2585ac:
    // 0x2585ac: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x2585acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_2585b0:
    // 0x2585b0: 0x111143  sra         $v0, $s1, 5
    ctx->pc = 0x2585b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 5));
label_2585b4:
    // 0x2585b4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2585b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_2585b8:
    // 0x2585b8: 0x8c93000c  lw          $s3, 0xC($a0)
    ctx->pc = 0x2585b8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2585bc:
    // 0x2585bc: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x2585bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2585c0:
    // 0x2585c0: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2585c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_2585c4:
    // 0x2585c4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x2585c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_2585c8:
    // 0x2585c8: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x2585c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_2585cc:
    // 0x2585cc: 0x2651821  addu        $v1, $s3, $a1
    ctx->pc = 0x2585ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_2585d0:
    // 0x2585d0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x2585d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2585d4:
    // 0x2585d4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_2585d8:
    if (ctx->pc == 0x2585D8u) {
        ctx->pc = 0x2585DCu;
        goto label_2585dc;
    }
    ctx->pc = 0x2585D4u;
    {
        const bool branch_taken_0x2585d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2585d4) {
            ctx->pc = 0x2585E8u;
            goto label_2585e8;
        }
    }
    ctx->pc = 0x2585DCu;
label_2585dc:
    // 0x2585dc: 0x10000008  b           . + 4 + (0x8 << 2)
label_2585e0:
    if (ctx->pc == 0x2585E0u) {
        ctx->pc = 0x2585E0u;
            // 0x2585e0: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x2585E4u;
        goto label_2585e4;
    }
    ctx->pc = 0x2585DCu;
    {
        const bool branch_taken_0x2585dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2585E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2585DCu;
            // 0x2585e0: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2585dc) {
            ctx->pc = 0x258600u;
            goto label_258600;
        }
    }
    ctx->pc = 0x2585E4u;
label_2585e4:
    // 0x2585e4: 0x0  nop
    ctx->pc = 0x2585e4u;
    // NOP
label_2585e8:
    // 0x2585e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2585e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2585ec:
    // 0x2585ec: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2585ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2585f0:
    // 0x2585f0: 0x320f809  jalr        $t9
label_2585f4:
    if (ctx->pc == 0x2585F4u) {
        ctx->pc = 0x2585F8u;
        goto label_2585f8;
    }
    ctx->pc = 0x2585F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2585F8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2585F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2585F8u; }
            if (ctx->pc != 0x2585F8u) { return; }
        }
        }
    }
    ctx->pc = 0x2585F8u;
label_2585f8:
    // 0x2585f8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2585f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2585fc:
    // 0x2585fc: 0x0  nop
    ctx->pc = 0x2585fcu;
    // NOP
label_258600:
    // 0x258600: 0x1120c3  sra         $a0, $s1, 3
    ctx->pc = 0x258600u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 17), 3));
label_258604:
    // 0x258604: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x258604u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
label_258608:
    // 0x258608: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
label_25860c:
    if (ctx->pc == 0x25860Cu) {
        ctx->pc = 0x25860Cu;
            // 0x25860c: 0x260182d  daddu       $v1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x258610u;
        goto label_258610;
    }
    ctx->pc = 0x258608u;
    {
        const bool branch_taken_0x258608 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x25860Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258608u;
            // 0x25860c: 0x260182d  daddu       $v1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258608) {
            ctx->pc = 0x258630u;
            goto label_258630;
        }
    }
    ctx->pc = 0x258610u;
label_258610:
    // 0x258610: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x258610u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_258614:
    // 0x258614: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x258614u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_258618:
    // 0x258618: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x258618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_25861c:
    // 0x25861c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x25861cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_258620:
    // 0x258620: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x258620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_258624:
    // 0x258624: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x258624u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_258628:
    // 0x258628: 0x481fff9  bgez        $a0, . + 4 + (-0x7 << 2)
label_25862c:
    if (ctx->pc == 0x25862Cu) {
        ctx->pc = 0x25862Cu;
            // 0x25862c: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x258630u;
        goto label_258630;
    }
    ctx->pc = 0x258628u;
    {
        const bool branch_taken_0x258628 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x25862Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258628u;
            // 0x25862c: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258628) {
            ctx->pc = 0x258610u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_258610;
        }
    }
    ctx->pc = 0x258630u;
label_258630:
    // 0x258630: 0x27b200d4  addiu       $s2, $sp, 0xD4
    ctx->pc = 0x258630u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
label_258634:
    // 0x258634: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x258634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_258638:
    // 0x258638: 0x27b100d8  addiu       $s1, $sp, 0xD8
    ctx->pc = 0x258638u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_25863c:
    // 0x25863c: 0xc6a00040  lwc1        $f0, 0x40($s5)
    ctx->pc = 0x25863cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258640:
    // 0x258640: 0x27b700dc  addiu       $s7, $sp, 0xDC
    ctx->pc = 0x258640u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
label_258644:
    // 0x258644: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x258644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_258648:
    // 0x258648: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x258648u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_25864c:
    // 0x25864c: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x25864cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_258650:
    // 0x258650: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x258650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_258654:
    // 0x258654: 0xc6a00044  lwc1        $f0, 0x44($s5)
    ctx->pc = 0x258654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258658:
    // 0x258658: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x258658u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_25865c:
    // 0x25865c: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x25865cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_258660:
    // 0x258660: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x258660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_258664:
    // 0x258664: 0xc6a00048  lwc1        $f0, 0x48($s5)
    ctx->pc = 0x258664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258668:
    // 0x258668: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x258668u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_25866c:
    // 0x25866c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x25866cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_258670:
    // 0x258670: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x258670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_258674:
    // 0x258674: 0xc6a0004c  lwc1        $f0, 0x4C($s5)
    ctx->pc = 0x258674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258678:
    // 0x258678: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x258678u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_25867c:
    // 0x25867c: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x25867cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
label_258680:
    // 0x258680: 0xc6a10060  lwc1        $f1, 0x60($s5)
    ctx->pc = 0x258680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_258684:
    // 0x258684: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x258684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258688:
    // 0x258688: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x258688u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_25868c:
    // 0x25868c: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x25868cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_258690:
    // 0x258690: 0xc6a10064  lwc1        $f1, 0x64($s5)
    ctx->pc = 0x258690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_258694:
    // 0x258694: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x258694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258698:
    // 0x258698: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x258698u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_25869c:
    // 0x25869c: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x25869cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_2586a0:
    // 0x2586a0: 0xc6a10068  lwc1        $f1, 0x68($s5)
    ctx->pc = 0x2586a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2586a4:
    // 0x2586a4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2586a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2586a8:
    // 0x2586a8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2586a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2586ac:
    // 0x2586ac: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2586acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2586b0:
    // 0x2586b0: 0xc6a1006c  lwc1        $f1, 0x6C($s5)
    ctx->pc = 0x2586b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2586b4:
    // 0x2586b4: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x2586b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2586b8:
    // 0x2586b8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2586b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2586bc:
    // 0x2586bc: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x2586bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
label_2586c0:
    // 0x2586c0: 0xc421cf90  lwc1        $f1, -0x3070($at)
    ctx->pc = 0x2586c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294954896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2586c4:
    // 0x2586c4: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x2586c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2586c8:
    // 0x2586c8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2586c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2586cc:
    // 0x2586cc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2586d0:
    if (ctx->pc == 0x2586D0u) {
        ctx->pc = 0x2586D0u;
            // 0x2586d0: 0xc7a200d0  lwc1        $f2, 0xD0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x2586D4u;
        goto label_2586d4;
    }
    ctx->pc = 0x2586CCu;
    {
        const bool branch_taken_0x2586cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2586D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2586CCu;
            // 0x2586d0: 0xc7a200d0  lwc1        $f2, 0xD0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2586cc) {
            ctx->pc = 0x2586DCu;
            goto label_2586dc;
        }
    }
    ctx->pc = 0x2586D4u;
label_2586d4:
    // 0x2586d4: 0x10000002  b           . + 4 + (0x2 << 2)
label_2586d8:
    if (ctx->pc == 0x2586D8u) {
        ctx->pc = 0x2586DCu;
        goto label_2586dc;
    }
    ctx->pc = 0x2586D4u;
    {
        const bool branch_taken_0x2586d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2586d4) {
            ctx->pc = 0x2586E0u;
            goto label_2586e0;
        }
    }
    ctx->pc = 0x2586DCu;
label_2586dc:
    // 0x2586dc: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x2586dcu;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_2586e0:
    // 0x2586e0: 0x3c0f0060  lui         $t7, 0x60
    ctx->pc = 0x2586e0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)96 << 16));
label_2586e4:
    // 0x2586e4: 0x27a400d4  addiu       $a0, $sp, 0xD4
    ctx->pc = 0x2586e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
label_2586e8:
    // 0x2586e8: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x2586e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_2586ec:
    // 0x2586ec: 0x25efcf94  addiu       $t7, $t7, -0x306C
    ctx->pc = 0x2586ecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954900));
label_2586f0:
    // 0x2586f0: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x2586f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2586f4:
    // 0x2586f4: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2586f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2586f8:
    // 0x2586f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2586f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2586fc:
    // 0x2586fc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_258700:
    if (ctx->pc == 0x258700u) {
        ctx->pc = 0x258704u;
        goto label_258704;
    }
    ctx->pc = 0x2586FCu;
    {
        const bool branch_taken_0x2586fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2586fc) {
            ctx->pc = 0x25870Cu;
            goto label_25870c;
        }
    }
    ctx->pc = 0x258704u;
label_258704:
    // 0x258704: 0x10000002  b           . + 4 + (0x2 << 2)
label_258708:
    if (ctx->pc == 0x258708u) {
        ctx->pc = 0x25870Cu;
        goto label_25870c;
    }
    ctx->pc = 0x258704u;
    {
        const bool branch_taken_0x258704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x258704) {
            ctx->pc = 0x258710u;
            goto label_258710;
        }
    }
    ctx->pc = 0x25870Cu;
label_25870c:
    // 0x25870c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x25870cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_258710:
    // 0x258710: 0x3c0e0060  lui         $t6, 0x60
    ctx->pc = 0x258710u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)96 << 16));
label_258714:
    // 0x258714: 0x27a300d8  addiu       $v1, $sp, 0xD8
    ctx->pc = 0x258714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_258718:
    // 0x258718: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x258718u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_25871c:
    // 0x25871c: 0x25cecf98  addiu       $t6, $t6, -0x3068
    ctx->pc = 0x25871cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294954904));
label_258720:
    // 0x258720: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x258720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258724:
    // 0x258724: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x258724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_258728:
    // 0x258728: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x258728u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25872c:
    // 0x25872c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_258730:
    if (ctx->pc == 0x258730u) {
        ctx->pc = 0x258734u;
        goto label_258734;
    }
    ctx->pc = 0x25872Cu;
    {
        const bool branch_taken_0x25872c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25872c) {
            ctx->pc = 0x25873Cu;
            goto label_25873c;
        }
    }
    ctx->pc = 0x258734u;
label_258734:
    // 0x258734: 0x10000002  b           . + 4 + (0x2 << 2)
label_258738:
    if (ctx->pc == 0x258738u) {
        ctx->pc = 0x25873Cu;
        goto label_25873c;
    }
    ctx->pc = 0x258734u;
    {
        const bool branch_taken_0x258734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x258734) {
            ctx->pc = 0x258740u;
            goto label_258740;
        }
    }
    ctx->pc = 0x25873Cu;
label_25873c:
    // 0x25873c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x25873cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_258740:
    // 0x258740: 0x3c0d0060  lui         $t5, 0x60
    ctx->pc = 0x258740u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)96 << 16));
label_258744:
    // 0x258744: 0x27a200dc  addiu       $v0, $sp, 0xDC
    ctx->pc = 0x258744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
label_258748:
    // 0x258748: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x258748u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_25874c:
    // 0x25874c: 0x25adcf9c  addiu       $t5, $t5, -0x3064
    ctx->pc = 0x25874cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294954908));
label_258750:
    // 0x258750: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x258750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258754:
    // 0x258754: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x258754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_258758:
    // 0x258758: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x258758u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25875c:
    // 0x25875c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_258760:
    if (ctx->pc == 0x258760u) {
        ctx->pc = 0x258764u;
        goto label_258764;
    }
    ctx->pc = 0x25875Cu;
    {
        const bool branch_taken_0x25875c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25875c) {
            ctx->pc = 0x25876Cu;
            goto label_25876c;
        }
    }
    ctx->pc = 0x258764u;
label_258764:
    // 0x258764: 0x10000003  b           . + 4 + (0x3 << 2)
label_258768:
    if (ctx->pc == 0x258768u) {
        ctx->pc = 0x258768u;
            // 0x258768: 0xe6e10000  swc1        $f1, 0x0($s7) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
        ctx->pc = 0x25876Cu;
        goto label_25876c;
    }
    ctx->pc = 0x258764u;
    {
        const bool branch_taken_0x258764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258764u;
            // 0x258768: 0xe6e10000  swc1        $f1, 0x0($s7) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x258764) {
            ctx->pc = 0x258774u;
            goto label_258774;
        }
    }
    ctx->pc = 0x25876Cu;
label_25876c:
    // 0x25876c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x25876cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_258770:
    // 0x258770: 0xe6e10000  swc1        $f1, 0x0($s7)
    ctx->pc = 0x258770u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
label_258774:
    // 0x258774: 0x3c010064  lui         $at, 0x64
    ctx->pc = 0x258774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
label_258778:
    // 0x258778: 0xc421f930  lwc1        $f1, -0x6D0($at)
    ctx->pc = 0x258778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25877c:
    // 0x25877c: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x25877cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258780:
    // 0x258780: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x258780u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_258784:
    // 0x258784: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_258788:
    if (ctx->pc == 0x258788u) {
        ctx->pc = 0x258788u;
            // 0x258788: 0xc7a200d0  lwc1        $f2, 0xD0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x25878Cu;
        goto label_25878c;
    }
    ctx->pc = 0x258784u;
    {
        const bool branch_taken_0x258784 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x258788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258784u;
            // 0x258788: 0xc7a200d0  lwc1        $f2, 0xD0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x258784) {
            ctx->pc = 0x258794u;
            goto label_258794;
        }
    }
    ctx->pc = 0x25878Cu;
label_25878c:
    // 0x25878c: 0x10000002  b           . + 4 + (0x2 << 2)
label_258790:
    if (ctx->pc == 0x258790u) {
        ctx->pc = 0x258794u;
        goto label_258794;
    }
    ctx->pc = 0x25878Cu;
    {
        const bool branch_taken_0x25878c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25878c) {
            ctx->pc = 0x258798u;
            goto label_258798;
        }
    }
    ctx->pc = 0x258794u;
label_258794:
    // 0x258794: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x258794u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_258798:
    // 0x258798: 0x3c0c0064  lui         $t4, 0x64
    ctx->pc = 0x258798u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)100 << 16));
label_25879c:
    // 0x25879c: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x25879cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_2587a0:
    // 0x2587a0: 0x258cf934  addiu       $t4, $t4, -0x6CC
    ctx->pc = 0x2587a0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294965556));
label_2587a4:
    // 0x2587a4: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2587a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2587a8:
    // 0x2587a8: 0xc5800000  lwc1        $f0, 0x0($t4)
    ctx->pc = 0x2587a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2587ac:
    // 0x2587ac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2587acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2587b0:
    // 0x2587b0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_2587b4:
    if (ctx->pc == 0x2587B4u) {
        ctx->pc = 0x2587B8u;
        goto label_2587b8;
    }
    ctx->pc = 0x2587B0u;
    {
        const bool branch_taken_0x2587b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2587b0) {
            ctx->pc = 0x2587C0u;
            goto label_2587c0;
        }
    }
    ctx->pc = 0x2587B8u;
label_2587b8:
    // 0x2587b8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2587bc:
    if (ctx->pc == 0x2587BCu) {
        ctx->pc = 0x2587C0u;
        goto label_2587c0;
    }
    ctx->pc = 0x2587B8u;
    {
        const bool branch_taken_0x2587b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2587b8) {
            ctx->pc = 0x2587C4u;
            goto label_2587c4;
        }
    }
    ctx->pc = 0x2587C0u;
label_2587c0:
    // 0x2587c0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2587c0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2587c4:
    // 0x2587c4: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x2587c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_2587c8:
    // 0x2587c8: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x2587c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_2587cc:
    // 0x2587cc: 0x2484f938  addiu       $a0, $a0, -0x6C8
    ctx->pc = 0x2587ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965560));
label_2587d0:
    // 0x2587d0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2587d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2587d4:
    // 0x2587d4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2587d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2587d8:
    // 0x2587d8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2587d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2587dc:
    // 0x2587dc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_2587e0:
    if (ctx->pc == 0x2587E0u) {
        ctx->pc = 0x2587E4u;
        goto label_2587e4;
    }
    ctx->pc = 0x2587DCu;
    {
        const bool branch_taken_0x2587dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2587dc) {
            ctx->pc = 0x2587ECu;
            goto label_2587ec;
        }
    }
    ctx->pc = 0x2587E4u;
label_2587e4:
    // 0x2587e4: 0x10000002  b           . + 4 + (0x2 << 2)
label_2587e8:
    if (ctx->pc == 0x2587E8u) {
        ctx->pc = 0x2587ECu;
        goto label_2587ec;
    }
    ctx->pc = 0x2587E4u;
    {
        const bool branch_taken_0x2587e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2587e4) {
            ctx->pc = 0x2587F0u;
            goto label_2587f0;
        }
    }
    ctx->pc = 0x2587ECu;
label_2587ec:
    // 0x2587ec: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2587ecu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2587f0:
    // 0x2587f0: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x2587f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_2587f4:
    // 0x2587f4: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x2587f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2587f8:
    // 0x2587f8: 0x2463f93c  addiu       $v1, $v1, -0x6C4
    ctx->pc = 0x2587f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965564));
label_2587fc:
    // 0x2587fc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2587fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_258800:
    // 0x258800: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x258800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258804:
    // 0x258804: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x258804u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_258808:
    // 0x258808: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_25880c:
    if (ctx->pc == 0x25880Cu) {
        ctx->pc = 0x258810u;
        goto label_258810;
    }
    ctx->pc = 0x258808u;
    {
        const bool branch_taken_0x258808 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x258808) {
            ctx->pc = 0x258818u;
            goto label_258818;
        }
    }
    ctx->pc = 0x258810u;
label_258810:
    // 0x258810: 0x10000003  b           . + 4 + (0x3 << 2)
label_258814:
    if (ctx->pc == 0x258814u) {
        ctx->pc = 0x258814u;
            // 0x258814: 0xe6e10000  swc1        $f1, 0x0($s7) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
        ctx->pc = 0x258818u;
        goto label_258818;
    }
    ctx->pc = 0x258810u;
    {
        const bool branch_taken_0x258810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258810u;
            // 0x258814: 0xe6e10000  swc1        $f1, 0x0($s7) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x258810) {
            ctx->pc = 0x258820u;
            goto label_258820;
        }
    }
    ctx->pc = 0x258818u;
label_258818:
    // 0x258818: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x258818u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_25881c:
    // 0x25881c: 0xe6e10000  swc1        $f1, 0x0($s7)
    ctx->pc = 0x25881cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
label_258820:
    // 0x258820: 0x3c010064  lui         $at, 0x64
    ctx->pc = 0x258820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
label_258824:
    // 0x258824: 0xc420f900  lwc1        $f0, -0x700($at)
    ctx->pc = 0x258824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258828:
    // 0x258828: 0x3c090064  lui         $t1, 0x64
    ctx->pc = 0x258828u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)100 << 16));
label_25882c:
    // 0x25882c: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x25882cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_258830:
    // 0x258830: 0x3c080064  lui         $t0, 0x64
    ctx->pc = 0x258830u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)100 << 16));
label_258834:
    // 0x258834: 0x3c070064  lui         $a3, 0x64
    ctx->pc = 0x258834u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)100 << 16));
label_258838:
    // 0x258838: 0x2529f904  addiu       $t1, $t1, -0x6FC
    ctx->pc = 0x258838u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294965508));
label_25883c:
    // 0x25883c: 0x2508f908  addiu       $t0, $t0, -0x6F8
    ctx->pc = 0x25883cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294965512));
label_258840:
    // 0x258840: 0x24e7f90c  addiu       $a3, $a3, -0x6F4
    ctx->pc = 0x258840u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965516));
label_258844:
    // 0x258844: 0x27b600d0  addiu       $s6, $sp, 0xD0
    ctx->pc = 0x258844u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_258848:
    // 0x258848: 0x27a600f2  addiu       $a2, $sp, 0xF2
    ctx->pc = 0x258848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 242));
label_25884c:
    // 0x25884c: 0x27a500f4  addiu       $a1, $sp, 0xF4
    ctx->pc = 0x25884cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
label_258850:
    // 0x258850: 0x27ab00b4  addiu       $t3, $sp, 0xB4
    ctx->pc = 0x258850u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
label_258854:
    // 0x258854: 0x27aa00b8  addiu       $t2, $sp, 0xB8
    ctx->pc = 0x258854u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_258858:
    // 0x258858: 0x27a200bc  addiu       $v0, $sp, 0xBC
    ctx->pc = 0x258858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_25885c:
    // 0x25885c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25885cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_258860:
    // 0x258860: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x258860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_258864:
    // 0x258864: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x258864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_258868:
    // 0x258868: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x258868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25886c:
    // 0x25886c: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x25886cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258870:
    // 0x258870: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x258870u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_258874:
    // 0x258874: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x258874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_258878:
    // 0x258878: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x258878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25887c:
    // 0x25887c: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x25887cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258880:
    // 0x258880: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x258880u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_258884:
    // 0x258884: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x258884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_258888:
    // 0x258888: 0xc6e10000  lwc1        $f1, 0x0($s7)
    ctx->pc = 0x258888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25888c:
    // 0x25888c: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x25888cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258890:
    // 0x258890: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x258890u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_258894:
    // 0x258894: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x258894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
label_258898:
    // 0x258898: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x258898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25889c:
    // 0x25889c: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x25889cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_2588a0:
    // 0x2588a0: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x2588a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2588a4:
    // 0x2588a4: 0x8fb100c0  lw          $s1, 0xC0($sp)
    ctx->pc = 0x2588a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2588a8:
    // 0x2588a8: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2588a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_2588ac:
    // 0x2588ac: 0x1191c2  srl         $s2, $s1, 7
    ctx->pc = 0x2588acu;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 17), 7));
label_2588b0:
    // 0x2588b0: 0xc6c00008  lwc1        $f0, 0x8($s6)
    ctx->pc = 0x2588b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2588b4:
    // 0x2588b4: 0x8fb100c4  lw          $s1, 0xC4($sp)
    ctx->pc = 0x2588b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_2588b8:
    // 0x2588b8: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x2588b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_2588bc:
    // 0x2588bc: 0x1189c2  srl         $s1, $s1, 7
    ctx->pc = 0x2588bcu;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 7));
label_2588c0:
    // 0x2588c0: 0xc6c0000c  lwc1        $f0, 0xC($s6)
    ctx->pc = 0x2588c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2588c4:
    // 0x2588c4: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x2588c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_2588c8:
    // 0x2588c8: 0xa7b200f0  sh          $s2, 0xF0($sp)
    ctx->pc = 0x2588c8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 240), (uint16_t)GPR_U32(ctx, 18));
label_2588cc:
    // 0x2588cc: 0xa4d10000  sh          $s1, 0x0($a2)
    ctx->pc = 0x2588ccu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 17));
label_2588d0:
    // 0x2588d0: 0x8fb100c8  lw          $s1, 0xC8($sp)
    ctx->pc = 0x2588d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_2588d4:
    // 0x2588d4: 0x1189c2  srl         $s1, $s1, 7
    ctx->pc = 0x2588d4u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 7));
label_2588d8:
    // 0x2588d8: 0xa4b10000  sh          $s1, 0x0($a1)
    ctx->pc = 0x2588d8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 17));
label_2588dc:
    // 0x2588dc: 0x8fb100cc  lw          $s1, 0xCC($sp)
    ctx->pc = 0x2588dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_2588e0:
    // 0x2588e0: 0x1189c2  srl         $s1, $s1, 7
    ctx->pc = 0x2588e0u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 7));
label_2588e4:
    // 0x2588e4: 0xa7b100f6  sh          $s1, 0xF6($sp)
    ctx->pc = 0x2588e4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 246), (uint16_t)GPR_U32(ctx, 17));
label_2588e8:
    // 0x2588e8: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x2588e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2588ec:
    // 0x2588ec: 0xc6a00050  lwc1        $f0, 0x50($s5)
    ctx->pc = 0x2588ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2588f0:
    // 0x2588f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2588f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2588f4:
    // 0x2588f4: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x2588f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_2588f8:
    // 0x2588f8: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x2588f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2588fc:
    // 0x2588fc: 0xc6a00054  lwc1        $f0, 0x54($s5)
    ctx->pc = 0x2588fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258900:
    // 0x258900: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x258900u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_258904:
    // 0x258904: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x258904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
label_258908:
    // 0x258908: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x258908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25890c:
    // 0x25890c: 0xc6a00058  lwc1        $f0, 0x58($s5)
    ctx->pc = 0x25890cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258910:
    // 0x258910: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x258910u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_258914:
    // 0x258914: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x258914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
label_258918:
    // 0x258918: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x258918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25891c:
    // 0x25891c: 0xc6a0005c  lwc1        $f0, 0x5C($s5)
    ctx->pc = 0x25891cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258920:
    // 0x258920: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x258920u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_258924:
    // 0x258924: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x258924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_258928:
    // 0x258928: 0xc6a10060  lwc1        $f1, 0x60($s5)
    ctx->pc = 0x258928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25892c:
    // 0x25892c: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x25892cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258930:
    // 0x258930: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x258930u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_258934:
    // 0x258934: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x258934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_258938:
    // 0x258938: 0xc6a10064  lwc1        $f1, 0x64($s5)
    ctx->pc = 0x258938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25893c:
    // 0x25893c: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x25893cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258940:
    // 0x258940: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x258940u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_258944:
    // 0x258944: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x258944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
label_258948:
    // 0x258948: 0xc6a10068  lwc1        $f1, 0x68($s5)
    ctx->pc = 0x258948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25894c:
    // 0x25894c: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x25894cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258950:
    // 0x258950: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x258950u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_258954:
    // 0x258954: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x258954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
label_258958:
    // 0x258958: 0xc6a1006c  lwc1        $f1, 0x6C($s5)
    ctx->pc = 0x258958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25895c:
    // 0x25895c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x25895cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258960:
    // 0x258960: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x258960u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_258964:
    // 0x258964: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x258964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_258968:
    // 0x258968: 0xc421cf90  lwc1        $f1, -0x3070($at)
    ctx->pc = 0x258968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294954896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25896c:
    // 0x25896c: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x25896cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258970:
    // 0x258970: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x258970u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_258974:
    // 0x258974: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_258978:
    if (ctx->pc == 0x258978u) {
        ctx->pc = 0x258978u;
            // 0x258978: 0xc7a200b0  lwc1        $f2, 0xB0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x25897Cu;
        goto label_25897c;
    }
    ctx->pc = 0x258974u;
    {
        const bool branch_taken_0x258974 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x258978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258974u;
            // 0x258978: 0xc7a200b0  lwc1        $f2, 0xB0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x258974) {
            ctx->pc = 0x258984u;
            goto label_258984;
        }
    }
    ctx->pc = 0x25897Cu;
label_25897c:
    // 0x25897c: 0x10000003  b           . + 4 + (0x3 << 2)
label_258980:
    if (ctx->pc == 0x258980u) {
        ctx->pc = 0x258980u;
            // 0x258980: 0xe7a200b0  swc1        $f2, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->pc = 0x258984u;
        goto label_258984;
    }
    ctx->pc = 0x25897Cu;
    {
        const bool branch_taken_0x25897c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25897Cu;
            // 0x258980: 0xe7a200b0  swc1        $f2, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25897c) {
            ctx->pc = 0x25898Cu;
            goto label_25898c;
        }
    }
    ctx->pc = 0x258984u;
label_258984:
    // 0x258984: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x258984u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_258988:
    // 0x258988: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x258988u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_25898c:
    // 0x25898c: 0x27b000b4  addiu       $s0, $sp, 0xB4
    ctx->pc = 0x25898cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
label_258990:
    // 0x258990: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x258990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258994:
    // 0x258994: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x258994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_258998:
    // 0x258998: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x258998u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25899c:
    // 0x25899c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2589a0:
    if (ctx->pc == 0x2589A0u) {
        ctx->pc = 0x2589A4u;
        goto label_2589a4;
    }
    ctx->pc = 0x25899Cu;
    {
        const bool branch_taken_0x25899c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25899c) {
            ctx->pc = 0x2589ACu;
            goto label_2589ac;
        }
    }
    ctx->pc = 0x2589A4u;
label_2589a4:
    // 0x2589a4: 0x10000003  b           . + 4 + (0x3 << 2)
label_2589a8:
    if (ctx->pc == 0x2589A8u) {
        ctx->pc = 0x2589A8u;
            // 0x2589a8: 0xe5610000  swc1        $f1, 0x0($t3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
        ctx->pc = 0x2589ACu;
        goto label_2589ac;
    }
    ctx->pc = 0x2589A4u;
    {
        const bool branch_taken_0x2589a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2589A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2589A4u;
            // 0x2589a8: 0xe5610000  swc1        $f1, 0x0($t3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2589a4) {
            ctx->pc = 0x2589B4u;
            goto label_2589b4;
        }
    }
    ctx->pc = 0x2589ACu;
label_2589ac:
    // 0x2589ac: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2589acu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2589b0:
    // 0x2589b0: 0xe5610000  swc1        $f1, 0x0($t3)
    ctx->pc = 0x2589b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
label_2589b4:
    // 0x2589b4: 0x27af00b8  addiu       $t7, $sp, 0xB8
    ctx->pc = 0x2589b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_2589b8:
    // 0x2589b8: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x2589b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2589bc:
    // 0x2589bc: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x2589bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2589c0:
    // 0x2589c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2589c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2589c4:
    // 0x2589c4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2589c8:
    if (ctx->pc == 0x2589C8u) {
        ctx->pc = 0x2589CCu;
        goto label_2589cc;
    }
    ctx->pc = 0x2589C4u;
    {
        const bool branch_taken_0x2589c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2589c4) {
            ctx->pc = 0x2589D4u;
            goto label_2589d4;
        }
    }
    ctx->pc = 0x2589CCu;
label_2589cc:
    // 0x2589cc: 0x10000003  b           . + 4 + (0x3 << 2)
label_2589d0:
    if (ctx->pc == 0x2589D0u) {
        ctx->pc = 0x2589D0u;
            // 0x2589d0: 0xe5410000  swc1        $f1, 0x0($t2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
        ctx->pc = 0x2589D4u;
        goto label_2589d4;
    }
    ctx->pc = 0x2589CCu;
    {
        const bool branch_taken_0x2589cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2589D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2589CCu;
            // 0x2589d0: 0xe5410000  swc1        $f1, 0x0($t2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2589cc) {
            ctx->pc = 0x2589DCu;
            goto label_2589dc;
        }
    }
    ctx->pc = 0x2589D4u;
label_2589d4:
    // 0x2589d4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2589d4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2589d8:
    // 0x2589d8: 0xe5410000  swc1        $f1, 0x0($t2)
    ctx->pc = 0x2589d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
label_2589dc:
    // 0x2589dc: 0x27ae00bc  addiu       $t6, $sp, 0xBC
    ctx->pc = 0x2589dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_2589e0:
    // 0x2589e0: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x2589e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2589e4:
    // 0x2589e4: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x2589e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2589e8:
    // 0x2589e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2589e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2589ec:
    // 0x2589ec: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2589f0:
    if (ctx->pc == 0x2589F0u) {
        ctx->pc = 0x2589F4u;
        goto label_2589f4;
    }
    ctx->pc = 0x2589ECu;
    {
        const bool branch_taken_0x2589ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2589ec) {
            ctx->pc = 0x2589FCu;
            goto label_2589fc;
        }
    }
    ctx->pc = 0x2589F4u;
label_2589f4:
    // 0x2589f4: 0x10000003  b           . + 4 + (0x3 << 2)
label_2589f8:
    if (ctx->pc == 0x2589F8u) {
        ctx->pc = 0x2589F8u;
            // 0x2589f8: 0xe4410000  swc1        $f1, 0x0($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->pc = 0x2589FCu;
        goto label_2589fc;
    }
    ctx->pc = 0x2589F4u;
    {
        const bool branch_taken_0x2589f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2589F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2589F4u;
            // 0x2589f8: 0xe4410000  swc1        $f1, 0x0($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2589f4) {
            ctx->pc = 0x258A04u;
            goto label_258a04;
        }
    }
    ctx->pc = 0x2589FCu;
label_2589fc:
    // 0x2589fc: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2589fcu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_258a00:
    // 0x258a00: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x258a00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_258a04:
    // 0x258a04: 0x3c010064  lui         $at, 0x64
    ctx->pc = 0x258a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
label_258a08:
    // 0x258a08: 0xc421f930  lwc1        $f1, -0x6D0($at)
    ctx->pc = 0x258a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_258a0c:
    // 0x258a0c: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x258a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258a10:
    // 0x258a10: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x258a10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_258a14:
    // 0x258a14: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_258a18:
    if (ctx->pc == 0x258A18u) {
        ctx->pc = 0x258A18u;
            // 0x258a18: 0xc7a200b0  lwc1        $f2, 0xB0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x258A1Cu;
        goto label_258a1c;
    }
    ctx->pc = 0x258A14u;
    {
        const bool branch_taken_0x258a14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x258A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258A14u;
            // 0x258a18: 0xc7a200b0  lwc1        $f2, 0xB0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x258a14) {
            ctx->pc = 0x258A24u;
            goto label_258a24;
        }
    }
    ctx->pc = 0x258A1Cu;
label_258a1c:
    // 0x258a1c: 0x10000003  b           . + 4 + (0x3 << 2)
label_258a20:
    if (ctx->pc == 0x258A20u) {
        ctx->pc = 0x258A20u;
            // 0x258a20: 0xe7a200b0  swc1        $f2, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->pc = 0x258A24u;
        goto label_258a24;
    }
    ctx->pc = 0x258A1Cu;
    {
        const bool branch_taken_0x258a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258A1Cu;
            // 0x258a20: 0xe7a200b0  swc1        $f2, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x258a1c) {
            ctx->pc = 0x258A2Cu;
            goto label_258a2c;
        }
    }
    ctx->pc = 0x258A24u;
label_258a24:
    // 0x258a24: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x258a24u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_258a28:
    // 0x258a28: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x258a28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_258a2c:
    // 0x258a2c: 0xc5800000  lwc1        $f0, 0x0($t4)
    ctx->pc = 0x258a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258a30:
    // 0x258a30: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x258a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_258a34:
    // 0x258a34: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x258a34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_258a38:
    // 0x258a38: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_258a3c:
    if (ctx->pc == 0x258A3Cu) {
        ctx->pc = 0x258A40u;
        goto label_258a40;
    }
    ctx->pc = 0x258A38u;
    {
        const bool branch_taken_0x258a38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x258a38) {
            ctx->pc = 0x258A48u;
            goto label_258a48;
        }
    }
    ctx->pc = 0x258A40u;
label_258a40:
    // 0x258a40: 0x10000003  b           . + 4 + (0x3 << 2)
label_258a44:
    if (ctx->pc == 0x258A44u) {
        ctx->pc = 0x258A44u;
            // 0x258a44: 0xe5610000  swc1        $f1, 0x0($t3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
        ctx->pc = 0x258A48u;
        goto label_258a48;
    }
    ctx->pc = 0x258A40u;
    {
        const bool branch_taken_0x258a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258A40u;
            // 0x258a44: 0xe5610000  swc1        $f1, 0x0($t3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x258a40) {
            ctx->pc = 0x258A50u;
            goto label_258a50;
        }
    }
    ctx->pc = 0x258A48u;
label_258a48:
    // 0x258a48: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x258a48u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_258a4c:
    // 0x258a4c: 0xe5610000  swc1        $f1, 0x0($t3)
    ctx->pc = 0x258a4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
label_258a50:
    // 0x258a50: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x258a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258a54:
    // 0x258a54: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x258a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_258a58:
    // 0x258a58: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x258a58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_258a5c:
    // 0x258a5c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_258a60:
    if (ctx->pc == 0x258A60u) {
        ctx->pc = 0x258A64u;
        goto label_258a64;
    }
    ctx->pc = 0x258A5Cu;
    {
        const bool branch_taken_0x258a5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x258a5c) {
            ctx->pc = 0x258A6Cu;
            goto label_258a6c;
        }
    }
    ctx->pc = 0x258A64u;
label_258a64:
    // 0x258a64: 0x10000003  b           . + 4 + (0x3 << 2)
label_258a68:
    if (ctx->pc == 0x258A68u) {
        ctx->pc = 0x258A68u;
            // 0x258a68: 0xe5410000  swc1        $f1, 0x0($t2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
        ctx->pc = 0x258A6Cu;
        goto label_258a6c;
    }
    ctx->pc = 0x258A64u;
    {
        const bool branch_taken_0x258a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258A64u;
            // 0x258a68: 0xe5410000  swc1        $f1, 0x0($t2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x258a64) {
            ctx->pc = 0x258A74u;
            goto label_258a74;
        }
    }
    ctx->pc = 0x258A6Cu;
label_258a6c:
    // 0x258a6c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x258a6cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_258a70:
    // 0x258a70: 0xe5410000  swc1        $f1, 0x0($t2)
    ctx->pc = 0x258a70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
label_258a74:
    // 0x258a74: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x258a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258a78:
    // 0x258a78: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x258a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_258a7c:
    // 0x258a7c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x258a7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_258a80:
    // 0x258a80: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_258a84:
    if (ctx->pc == 0x258A84u) {
        ctx->pc = 0x258A88u;
        goto label_258a88;
    }
    ctx->pc = 0x258A80u;
    {
        const bool branch_taken_0x258a80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x258a80) {
            ctx->pc = 0x258A90u;
            goto label_258a90;
        }
    }
    ctx->pc = 0x258A88u;
label_258a88:
    // 0x258a88: 0x10000003  b           . + 4 + (0x3 << 2)
label_258a8c:
    if (ctx->pc == 0x258A8Cu) {
        ctx->pc = 0x258A8Cu;
            // 0x258a8c: 0xe4410000  swc1        $f1, 0x0($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->pc = 0x258A90u;
        goto label_258a90;
    }
    ctx->pc = 0x258A88u;
    {
        const bool branch_taken_0x258a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258A88u;
            // 0x258a8c: 0xe4410000  swc1        $f1, 0x0($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x258a88) {
            ctx->pc = 0x258A98u;
            goto label_258a98;
        }
    }
    ctx->pc = 0x258A90u;
label_258a90:
    // 0x258a90: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x258a90u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_258a94:
    // 0x258a94: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x258a94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_258a98:
    // 0x258a98: 0x3c010064  lui         $at, 0x64
    ctx->pc = 0x258a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
label_258a9c:
    // 0x258a9c: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x258a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_258aa0:
    // 0x258aa0: 0x27ac00b0  addiu       $t4, $sp, 0xB0
    ctx->pc = 0x258aa0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_258aa4:
    // 0x258aa4: 0xc420f900  lwc1        $f0, -0x700($at)
    ctx->pc = 0x258aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258aa8:
    // 0x258aa8: 0x27a400e2  addiu       $a0, $sp, 0xE2
    ctx->pc = 0x258aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 226));
label_258aac:
    // 0x258aac: 0x27a300e4  addiu       $v1, $sp, 0xE4
    ctx->pc = 0x258aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_258ab0:
    // 0x258ab0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x258ab0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_258ab4:
    // 0x258ab4: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x258ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_258ab8:
    // 0x258ab8: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x258ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258abc:
    // 0x258abc: 0xc5610000  lwc1        $f1, 0x0($t3)
    ctx->pc = 0x258abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_258ac0:
    // 0x258ac0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x258ac0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_258ac4:
    // 0x258ac4: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x258ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
label_258ac8:
    // 0x258ac8: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x258ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258acc:
    // 0x258acc: 0xc5410000  lwc1        $f1, 0x0($t2)
    ctx->pc = 0x258accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_258ad0:
    // 0x258ad0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x258ad0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_258ad4:
    // 0x258ad4: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x258ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
label_258ad8:
    // 0x258ad8: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x258ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258adc:
    // 0x258adc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x258adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_258ae0:
    // 0x258ae0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x258ae0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_258ae4:
    // 0x258ae4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x258ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_258ae8:
    // 0x258ae8: 0xc5800000  lwc1        $f0, 0x0($t4)
    ctx->pc = 0x258ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258aec:
    // 0x258aec: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x258aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_258af0:
    // 0x258af0: 0xc5800004  lwc1        $f0, 0x4($t4)
    ctx->pc = 0x258af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258af4:
    // 0x258af4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x258af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_258af8:
    // 0x258af8: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x258af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_258afc:
    // 0x258afc: 0x239c2  srl         $a3, $v0, 7
    ctx->pc = 0x258afcu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 7));
label_258b00:
    // 0x258b00: 0xc5800008  lwc1        $f0, 0x8($t4)
    ctx->pc = 0x258b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258b04:
    // 0x258b04: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x258b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_258b08:
    // 0x258b08: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x258b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_258b0c:
    // 0x258b0c: 0x211c2  srl         $v0, $v0, 7
    ctx->pc = 0x258b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 7));
label_258b10:
    // 0x258b10: 0xc580000c  lwc1        $f0, 0xC($t4)
    ctx->pc = 0x258b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258b14:
    // 0x258b14: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x258b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_258b18:
    // 0x258b18: 0xa7a700e0  sh          $a3, 0xE0($sp)
    ctx->pc = 0x258b18u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 224), (uint16_t)GPR_U32(ctx, 7));
label_258b1c:
    // 0x258b1c: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x258b1cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_258b20:
    // 0x258b20: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x258b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_258b24:
    // 0x258b24: 0x211c2  srl         $v0, $v0, 7
    ctx->pc = 0x258b24u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 7));
label_258b28:
    // 0x258b28: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x258b28u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_258b2c:
    // 0x258b2c: 0x8fa800ac  lw          $t0, 0xAC($sp)
    ctx->pc = 0x258b2cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_258b30:
    // 0x258b30: 0x97a700f0  lhu         $a3, 0xF0($sp)
    ctx->pc = 0x258b30u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 240)));
label_258b34:
    // 0x258b34: 0x97a200e0  lhu         $v0, 0xE0($sp)
    ctx->pc = 0x258b34u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
label_258b38:
    // 0x258b38: 0x841c2  srl         $t0, $t0, 7
    ctx->pc = 0x258b38u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 7));
label_258b3c:
    // 0x258b3c: 0xa7a800e6  sh          $t0, 0xE6($sp)
    ctx->pc = 0x258b3cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 230), (uint16_t)GPR_U32(ctx, 8));
label_258b40:
    // 0x258b40: 0x30e7fffe  andi        $a3, $a3, 0xFFFE
    ctx->pc = 0x258b40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65534);
label_258b44:
    // 0x258b44: 0x94a90000  lhu         $t1, 0x0($a1)
    ctx->pc = 0x258b44u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_258b48:
    // 0x258b48: 0x94880000  lhu         $t0, 0x0($a0)
    ctx->pc = 0x258b48u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_258b4c:
    // 0x258b4c: 0x94ca0000  lhu         $t2, 0x0($a2)
    ctx->pc = 0x258b4cu;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_258b50:
    // 0x258b50: 0x94650000  lhu         $a1, 0x0($v1)
    ctx->pc = 0x258b50u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_258b54:
    // 0x258b54: 0x3131fffe  andi        $s1, $t1, 0xFFFE
    ctx->pc = 0x258b54u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65534);
label_258b58:
    // 0x258b58: 0x8ea400a0  lw          $a0, 0xA0($s5)
    ctx->pc = 0x258b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 160)));
label_258b5c:
    // 0x258b5c: 0x35160001  ori         $s6, $t0, 0x1
    ctx->pc = 0x258b5cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
label_258b60:
    // 0x258b60: 0x34460001  ori         $a2, $v0, 0x1
    ctx->pc = 0x258b60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_258b64:
    // 0x258b64: 0x8ea2007c  lw          $v0, 0x7C($s5)
    ctx->pc = 0x258b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
label_258b68:
    // 0x258b68: 0x3143fffe  andi        $v1, $t2, 0xFFFE
    ctx->pc = 0x258b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65534);
label_258b6c:
    // 0x258b6c: 0x34b70001  ori         $s7, $a1, 0x1
    ctx->pc = 0x258b6cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
label_258b70:
    // 0x258b70: 0x10800059  beqz        $a0, . + 4 + (0x59 << 2)
label_258b74:
    if (ctx->pc == 0x258B74u) {
        ctx->pc = 0x258B74u;
            // 0x258b74: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x258B78u;
        goto label_258b78;
    }
    ctx->pc = 0x258B70u;
    {
        const bool branch_taken_0x258b70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x258B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258B70u;
            // 0x258b74: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258b70) {
            ctx->pc = 0x258CD8u;
            goto label_258cd8;
        }
    }
    ctx->pc = 0x258B78u;
label_258b78:
    // 0x258b78: 0x8ea500a4  lw          $a1, 0xA4($s5)
    ctx->pc = 0x258b78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 164)));
label_258b7c:
    // 0x258b7c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x258b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_258b80:
    // 0x258b80: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x258b80u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_258b84:
    // 0x258b84: 0x872007  srav        $a0, $a3, $a0
    ctx->pc = 0x258b84u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
label_258b88:
    // 0x258b88: 0x18800053  blez        $a0, . + 4 + (0x53 << 2)
label_258b8c:
    if (ctx->pc == 0x258B8Cu) {
        ctx->pc = 0x258B90u;
        goto label_258b90;
    }
    ctx->pc = 0x258B88u;
    {
        const bool branch_taken_0x258b88 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x258b88) {
            ctx->pc = 0x258CD8u;
            goto label_258cd8;
        }
    }
    ctx->pc = 0x258B90u;
label_258b90:
    // 0x258b90: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x258b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_258b94:
    // 0x258b94: 0x8ea400a8  lw          $a0, 0xA8($s5)
    ctx->pc = 0x258b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 168)));
label_258b98:
    // 0x258b98: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x258b98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_258b9c:
    // 0x258b9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x258b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_258ba0:
    // 0x258ba0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x258ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_258ba4:
    // 0x258ba4: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x258ba4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_258ba8:
    // 0x258ba8: 0x30a8001f  andi        $t0, $a1, 0x1F
    ctx->pc = 0x258ba8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
label_258bac:
    // 0x258bac: 0x52943  sra         $a1, $a1, 5
    ctx->pc = 0x258bacu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 5));
label_258bb0:
    // 0x258bb0: 0x1024804  sllv        $t1, $v0, $t0
    ctx->pc = 0x258bb0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
label_258bb4:
    // 0x258bb4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x258bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_258bb8:
    // 0x258bb8: 0x2654021  addu        $t0, $s3, $a1
    ctx->pc = 0x258bb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_258bbc:
    // 0x258bbc: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x258bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_258bc0:
    // 0x258bc0: 0xa92826  xor         $a1, $a1, $t1
    ctx->pc = 0x258bc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 9));
label_258bc4:
    // 0x258bc4: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x258bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
label_258bc8:
    // 0x258bc8: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x258bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_258bcc:
    // 0x258bcc: 0x24aaffff  addiu       $t2, $a1, -0x1
    ctx->pc = 0x258bccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_258bd0:
    // 0x258bd0: 0x540000d  bltz        $t2, . + 4 + (0xD << 2)
label_258bd4:
    if (ctx->pc == 0x258BD4u) {
        ctx->pc = 0x258BD4u;
            // 0x258bd4: 0x8c8b0004  lw          $t3, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x258BD8u;
        goto label_258bd8;
    }
    ctx->pc = 0x258BD0u;
    {
        const bool branch_taken_0x258bd0 = (GPR_S32(ctx, 10) < 0);
        ctx->pc = 0x258BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258BD0u;
            // 0x258bd4: 0x8c8b0004  lw          $t3, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258bd0) {
            ctx->pc = 0x258C08u;
            goto label_258c08;
        }
    }
    ctx->pc = 0x258BD8u;
label_258bd8:
    // 0x258bd8: 0x95650000  lhu         $a1, 0x0($t3)
    ctx->pc = 0x258bd8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_258bdc:
    // 0x258bdc: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x258bdcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_258be0:
    // 0x258be0: 0x30a8001f  andi        $t0, $a1, 0x1F
    ctx->pc = 0x258be0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
label_258be4:
    // 0x258be4: 0x256b0002  addiu       $t3, $t3, 0x2
    ctx->pc = 0x258be4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
label_258be8:
    // 0x258be8: 0x52943  sra         $a1, $a1, 5
    ctx->pc = 0x258be8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 5));
label_258bec:
    // 0x258bec: 0x1024804  sllv        $t1, $v0, $t0
    ctx->pc = 0x258becu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
label_258bf0:
    // 0x258bf0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x258bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_258bf4:
    // 0x258bf4: 0x2654021  addu        $t0, $s3, $a1
    ctx->pc = 0x258bf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_258bf8:
    // 0x258bf8: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x258bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_258bfc:
    // 0x258bfc: 0xa92826  xor         $a1, $a1, $t1
    ctx->pc = 0x258bfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 9));
label_258c00:
    // 0x258c00: 0x541fff5  bgez        $t2, . + 4 + (-0xB << 2)
label_258c04:
    if (ctx->pc == 0x258C04u) {
        ctx->pc = 0x258C04u;
            // 0x258c04: 0xad050000  sw          $a1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
        ctx->pc = 0x258C08u;
        goto label_258c08;
    }
    ctx->pc = 0x258C00u;
    {
        const bool branch_taken_0x258c00 = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x258C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258C00u;
            // 0x258c04: 0xad050000  sw          $a1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258c00) {
            ctx->pc = 0x258BD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_258bd8;
        }
    }
    ctx->pc = 0x258C08u;
label_258c08:
    // 0x258c08: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x258c08u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_258c0c:
    // 0x258c0c: 0x8ea20070  lw          $v0, 0x70($s5)
    ctx->pc = 0x258c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_258c10:
    // 0x258c10: 0x8ea8007c  lw          $t0, 0x7C($s5)
    ctx->pc = 0x258c10u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
label_258c14:
    // 0x258c14: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x258c14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_258c18:
    // 0x258c18: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x258c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_258c1c:
    // 0x258c1c: 0x94450008  lhu         $a1, 0x8($v0)
    ctx->pc = 0x258c1cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_258c20:
    // 0x258c20: 0x9444000a  lhu         $a0, 0xA($v0)
    ctx->pc = 0x258c20u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_258c24:
    // 0x258c24: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x258c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_258c28:
    // 0x258c28: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x258c28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_258c2c:
    // 0x258c2c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x258c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_258c30:
    // 0x258c30: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x258c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_258c34:
    // 0x258c34: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x258c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_258c38:
    // 0x258c38: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x258c38u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_258c3c:
    // 0x258c3c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_258c40:
    if (ctx->pc == 0x258C40u) {
        ctx->pc = 0x258C40u;
            // 0x258c40: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x258C44u;
        goto label_258c44;
    }
    ctx->pc = 0x258C3Cu;
    {
        const bool branch_taken_0x258c3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x258C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258C3Cu;
            // 0x258c40: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258c3c) {
            ctx->pc = 0x258C90u;
            goto label_258c90;
        }
    }
    ctx->pc = 0x258C44u;
label_258c44:
    // 0x258c44: 0x0  nop
    ctx->pc = 0x258c44u;
    // NOP
label_258c48:
    // 0x258c48: 0x94a80000  lhu         $t0, 0x0($a1)
    ctx->pc = 0x258c48u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_258c4c:
    // 0x258c4c: 0x31080001  andi        $t0, $t0, 0x1
    ctx->pc = 0x258c4cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
label_258c50:
    // 0x258c50: 0x1500000b  bnez        $t0, . + 4 + (0xB << 2)
label_258c54:
    if (ctx->pc == 0x258C54u) {
        ctx->pc = 0x258C58u;
        goto label_258c58;
    }
    ctx->pc = 0x258C50u;
    {
        const bool branch_taken_0x258c50 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x258c50) {
            ctx->pc = 0x258C80u;
            goto label_258c80;
        }
    }
    ctx->pc = 0x258C58u;
label_258c58:
    // 0x258c58: 0x94a80002  lhu         $t0, 0x2($a1)
    ctx->pc = 0x258c58u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_258c5c:
    // 0x258c5c: 0x3109001f  andi        $t1, $t0, 0x1F
    ctx->pc = 0x258c5cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)31);
label_258c60:
    // 0x258c60: 0x84143  sra         $t0, $t0, 5
    ctx->pc = 0x258c60u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 5));
label_258c64:
    // 0x258c64: 0x12b4804  sllv        $t1, $t3, $t1
    ctx->pc = 0x258c64u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 9) & 0x1F));
label_258c68:
    // 0x258c68: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x258c68u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_258c6c:
    // 0x258c6c: 0x1205027  not         $t2, $t1
    ctx->pc = 0x258c6cu;
    SET_GPR_U64(ctx, 10, ~(GPR_U64(ctx, 9) | GPR_U64(ctx, 0)));
label_258c70:
    // 0x258c70: 0x2684821  addu        $t1, $s3, $t0
    ctx->pc = 0x258c70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 8)));
label_258c74:
    // 0x258c74: 0x8d280000  lw          $t0, 0x0($t1)
    ctx->pc = 0x258c74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_258c78:
    // 0x258c78: 0x10a4024  and         $t0, $t0, $t2
    ctx->pc = 0x258c78u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 10));
label_258c7c:
    // 0x258c7c: 0xad280000  sw          $t0, 0x0($t1)
    ctx->pc = 0x258c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 8));
label_258c80:
    // 0x258c80: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x258c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_258c84:
    // 0x258c84: 0xa4402b  sltu        $t0, $a1, $a0
    ctx->pc = 0x258c84u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_258c88:
    // 0x258c88: 0x1500ffef  bnez        $t0, . + 4 + (-0x11 << 2)
label_258c8c:
    if (ctx->pc == 0x258C8Cu) {
        ctx->pc = 0x258C90u;
        goto label_258c90;
    }
    ctx->pc = 0x258C88u;
    {
        const bool branch_taken_0x258c88 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x258c88) {
            ctx->pc = 0x258C48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_258c48;
        }
    }
    ctx->pc = 0x258C90u;
label_258c90:
    // 0x258c90: 0x94440008  lhu         $a0, 0x8($v0)
    ctx->pc = 0x258c90u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_258c94:
    // 0x258c94: 0x8ea2007c  lw          $v0, 0x7C($s5)
    ctx->pc = 0x258c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
label_258c98:
    // 0x258c98: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x258c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_258c9c:
    // 0x258c9c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x258c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_258ca0:
    // 0x258ca0: 0x1000000d  b           . + 4 + (0xD << 2)
label_258ca4:
    if (ctx->pc == 0x258CA4u) {
        ctx->pc = 0x258CA4u;
            // 0x258ca4: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->pc = 0x258CA8u;
        goto label_258ca8;
    }
    ctx->pc = 0x258CA0u;
    {
        const bool branch_taken_0x258ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258CA0u;
            // 0x258ca4: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258ca0) {
            ctx->pc = 0x258CD8u;
            goto label_258cd8;
        }
    }
    ctx->pc = 0x258CA8u;
label_258ca8:
    // 0x258ca8: 0x94440002  lhu         $a0, 0x2($v0)
    ctx->pc = 0x258ca8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_258cac:
    // 0x258cac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x258cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_258cb0:
    // 0x258cb0: 0x3088001f  andi        $t0, $a0, 0x1F
    ctx->pc = 0x258cb0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
label_258cb4:
    // 0x258cb4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x258cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_258cb8:
    // 0x258cb8: 0x42143  sra         $a0, $a0, 5
    ctx->pc = 0x258cb8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 5));
label_258cbc:
    // 0x258cbc: 0x1054004  sllv        $t0, $a1, $t0
    ctx->pc = 0x258cbcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
label_258cc0:
    // 0x258cc0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x258cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_258cc4:
    // 0x258cc4: 0x2642821  addu        $a1, $s3, $a0
    ctx->pc = 0x258cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_258cc8:
    // 0x258cc8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x258cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_258ccc:
    // 0x258ccc: 0x882026  xor         $a0, $a0, $t0
    ctx->pc = 0x258cccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 8));
label_258cd0:
    // 0x258cd0: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x258cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_258cd4:
    // 0x258cd4: 0x0  nop
    ctx->pc = 0x258cd4u;
    // NOP
label_258cd8:
    // 0x258cd8: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x258cd8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_258cdc:
    // 0x258cdc: 0xa7202b  sltu        $a0, $a1, $a3
    ctx->pc = 0x258cdcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_258ce0:
    // 0x258ce0: 0x1480fff1  bnez        $a0, . + 4 + (-0xF << 2)
label_258ce4:
    if (ctx->pc == 0x258CE4u) {
        ctx->pc = 0x258CE4u;
            // 0x258ce4: 0xa6082b  sltu        $at, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->pc = 0x258CE8u;
        goto label_258ce8;
    }
    ctx->pc = 0x258CE0u;
    {
        const bool branch_taken_0x258ce0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x258CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258CE0u;
            // 0x258ce4: 0xa6082b  sltu        $at, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x258ce0) {
            ctx->pc = 0x258CA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_258ca8;
        }
    }
    ctx->pc = 0x258CE8u;
label_258ce8:
    // 0x258ce8: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
label_258cec:
    if (ctx->pc == 0x258CECu) {
        ctx->pc = 0x258CECu;
            // 0x258cec: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x258CF0u;
        goto label_258cf0;
    }
    ctx->pc = 0x258CE8u;
    {
        const bool branch_taken_0x258ce8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x258CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258CE8u;
            // 0x258cec: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258ce8) {
            ctx->pc = 0x258D38u;
            goto label_258d38;
        }
    }
    ctx->pc = 0x258CF0u;
label_258cf0:
    // 0x258cf0: 0x30a40001  andi        $a0, $a1, 0x1
    ctx->pc = 0x258cf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_258cf4:
    // 0x258cf4: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
label_258cf8:
    if (ctx->pc == 0x258CF8u) {
        ctx->pc = 0x258CFCu;
        goto label_258cfc;
    }
    ctx->pc = 0x258CF4u;
    {
        const bool branch_taken_0x258cf4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x258cf4) {
            ctx->pc = 0x258D20u;
            goto label_258d20;
        }
    }
    ctx->pc = 0x258CFCu;
label_258cfc:
    // 0x258cfc: 0x94440002  lhu         $a0, 0x2($v0)
    ctx->pc = 0x258cfcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_258d00:
    // 0x258d00: 0x3085001f  andi        $a1, $a0, 0x1F
    ctx->pc = 0x258d00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
label_258d04:
    // 0x258d04: 0x42143  sra         $a0, $a0, 5
    ctx->pc = 0x258d04u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 5));
label_258d08:
    // 0x258d08: 0xa83804  sllv        $a3, $t0, $a1
    ctx->pc = 0x258d08u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
label_258d0c:
    // 0x258d0c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x258d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_258d10:
    // 0x258d10: 0x2642821  addu        $a1, $s3, $a0
    ctx->pc = 0x258d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_258d14:
    // 0x258d14: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x258d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_258d18:
    // 0x258d18: 0x872026  xor         $a0, $a0, $a3
    ctx->pc = 0x258d18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 7));
label_258d1c:
    // 0x258d1c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x258d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_258d20:
    // 0x258d20: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x258d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_258d24:
    // 0x258d24: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x258d24u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_258d28:
    // 0x258d28: 0xa6202b  sltu        $a0, $a1, $a2
    ctx->pc = 0x258d28u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_258d2c:
    // 0x258d2c: 0x1480fff0  bnez        $a0, . + 4 + (-0x10 << 2)
label_258d30:
    if (ctx->pc == 0x258D30u) {
        ctx->pc = 0x258D34u;
        goto label_258d34;
    }
    ctx->pc = 0x258D2Cu;
    {
        const bool branch_taken_0x258d2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x258d2c) {
            ctx->pc = 0x258CF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_258cf0;
        }
    }
    ctx->pc = 0x258D34u;
label_258d34:
    // 0x258d34: 0x0  nop
    ctx->pc = 0x258d34u;
    // NOP
label_258d38:
    // 0x258d38: 0x8ea2008c  lw          $v0, 0x8C($s5)
    ctx->pc = 0x258d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 140)));
label_258d3c:
    // 0x258d3c: 0x8eb00088  lw          $s0, 0x88($s5)
    ctx->pc = 0x258d3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
label_258d40:
    // 0x258d40: 0x26b20088  addiu       $s2, $s5, 0x88
    ctx->pc = 0x258d40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 136));
label_258d44:
    // 0x258d44: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x258d44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_258d48:
    // 0x258d48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x258d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_258d4c:
    // 0x258d4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x258d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_258d50:
    // 0x258d50: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x258d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_258d54:
    // 0x258d54: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x258d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_258d58:
    // 0x258d58: 0xc095c44  jal         func_257110
label_258d5c:
    if (ctx->pc == 0x258D5Cu) {
        ctx->pc = 0x258D5Cu;
            // 0x258d5c: 0x2446fff8  addiu       $a2, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->pc = 0x258D60u;
        goto label_258d60;
    }
    ctx->pc = 0x258D58u;
    SET_GPR_U32(ctx, 31, 0x258D60u);
    ctx->pc = 0x258D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258D58u;
            // 0x258d5c: 0x2446fff8  addiu       $a2, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x257110u;
    if (runtime->hasFunction(0x257110u)) {
        auto targetFn = runtime->lookupFunction(0x257110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258D60u; }
        if (ctx->pc != 0x258D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00257110_0x257110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258D60u; }
        if (ctx->pc != 0x258D60u) { return; }
    }
    ctx->pc = 0x258D60u;
label_258d60:
    // 0x258d60: 0x501823  subu        $v1, $v0, $s0
    ctx->pc = 0x258d60u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_258d64:
    // 0x258d64: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_258d68:
    if (ctx->pc == 0x258D68u) {
        ctx->pc = 0x258D68u;
            // 0x258d68: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->pc = 0x258D6Cu;
        goto label_258d6c;
    }
    ctx->pc = 0x258D64u;
    {
        const bool branch_taken_0x258d64 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x258D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258D64u;
            // 0x258d68: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258d64) {
            ctx->pc = 0x258D74u;
            goto label_258d74;
        }
    }
    ctx->pc = 0x258D6Cu;
label_258d6c:
    // 0x258d6c: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x258d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_258d70:
    // 0x258d70: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x258d70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_258d74:
    // 0x258d74: 0xa7a20100  sh          $v0, 0x100($sp)
    ctx->pc = 0x258d74u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 256), (uint16_t)GPR_U32(ctx, 2));
label_258d78:
    // 0x258d78: 0x32c7ffff  andi        $a3, $s6, 0xFFFF
    ctx->pc = 0x258d78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
label_258d7c:
    // 0x258d7c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x258d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_258d80:
    // 0x258d80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x258d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_258d84:
    // 0x258d84: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x258d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_258d88:
    // 0x258d88: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x258d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_258d8c:
    // 0x258d8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x258d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_258d90:
    // 0x258d90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x258d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_258d94:
    // 0x258d94: 0xc095c44  jal         func_257110
label_258d98:
    if (ctx->pc == 0x258D98u) {
        ctx->pc = 0x258D98u;
            // 0x258d98: 0x2446fff8  addiu       $a2, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->pc = 0x258D9Cu;
        goto label_258d9c;
    }
    ctx->pc = 0x258D94u;
    SET_GPR_U32(ctx, 31, 0x258D9Cu);
    ctx->pc = 0x258D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258D94u;
            // 0x258d98: 0x2446fff8  addiu       $a2, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x257110u;
    if (runtime->hasFunction(0x257110u)) {
        auto targetFn = runtime->lookupFunction(0x257110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258D9Cu; }
        if (ctx->pc != 0x258D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00257110_0x257110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258D9Cu; }
        if (ctx->pc != 0x258D9Cu) { return; }
    }
    ctx->pc = 0x258D9Cu;
label_258d9c:
    // 0x258d9c: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x258d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_258da0:
    // 0x258da0: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x258da0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_258da4:
    // 0x258da4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_258da8:
    if (ctx->pc == 0x258DA8u) {
        ctx->pc = 0x258DA8u;
            // 0x258da8: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->pc = 0x258DACu;
        goto label_258dac;
    }
    ctx->pc = 0x258DA4u;
    {
        const bool branch_taken_0x258da4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x258DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258DA4u;
            // 0x258da8: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258da4) {
            ctx->pc = 0x258DB4u;
            goto label_258db4;
        }
    }
    ctx->pc = 0x258DACu;
label_258dac:
    // 0x258dac: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x258dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_258db0:
    // 0x258db0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x258db0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_258db4:
    // 0x258db4: 0xa7a20104  sh          $v0, 0x104($sp)
    ctx->pc = 0x258db4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 260), (uint16_t)GPR_U32(ctx, 2));
label_258db8:
    // 0x258db8: 0x3227ffff  andi        $a3, $s1, 0xFFFF
    ctx->pc = 0x258db8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_258dbc:
    // 0x258dbc: 0x8ea20098  lw          $v0, 0x98($s5)
    ctx->pc = 0x258dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 152)));
label_258dc0:
    // 0x258dc0: 0x26b10094  addiu       $s1, $s5, 0x94
    ctx->pc = 0x258dc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 148));
label_258dc4:
    // 0x258dc4: 0x8eb00094  lw          $s0, 0x94($s5)
    ctx->pc = 0x258dc4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 148)));
label_258dc8:
    // 0x258dc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x258dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_258dcc:
    // 0x258dcc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x258dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_258dd0:
    // 0x258dd0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x258dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_258dd4:
    // 0x258dd4: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x258dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_258dd8:
    // 0x258dd8: 0xc095c44  jal         func_257110
label_258ddc:
    if (ctx->pc == 0x258DDCu) {
        ctx->pc = 0x258DDCu;
            // 0x258ddc: 0x2446fff8  addiu       $a2, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->pc = 0x258DE0u;
        goto label_258de0;
    }
    ctx->pc = 0x258DD8u;
    SET_GPR_U32(ctx, 31, 0x258DE0u);
    ctx->pc = 0x258DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258DD8u;
            // 0x258ddc: 0x2446fff8  addiu       $a2, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x257110u;
    if (runtime->hasFunction(0x257110u)) {
        auto targetFn = runtime->lookupFunction(0x257110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258DE0u; }
        if (ctx->pc != 0x258DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00257110_0x257110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258DE0u; }
        if (ctx->pc != 0x258DE0u) { return; }
    }
    ctx->pc = 0x258DE0u;
label_258de0:
    // 0x258de0: 0x501823  subu        $v1, $v0, $s0
    ctx->pc = 0x258de0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_258de4:
    // 0x258de4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_258de8:
    if (ctx->pc == 0x258DE8u) {
        ctx->pc = 0x258DE8u;
            // 0x258de8: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->pc = 0x258DECu;
        goto label_258dec;
    }
    ctx->pc = 0x258DE4u;
    {
        const bool branch_taken_0x258de4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x258DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258DE4u;
            // 0x258de8: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258de4) {
            ctx->pc = 0x258DF4u;
            goto label_258df4;
        }
    }
    ctx->pc = 0x258DECu;
label_258dec:
    // 0x258dec: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x258decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_258df0:
    // 0x258df0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x258df0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_258df4:
    // 0x258df4: 0xa7a20102  sh          $v0, 0x102($sp)
    ctx->pc = 0x258df4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 258), (uint16_t)GPR_U32(ctx, 2));
label_258df8:
    // 0x258df8: 0x32e7ffff  andi        $a3, $s7, 0xFFFF
    ctx->pc = 0x258df8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
label_258dfc:
    // 0x258dfc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x258dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_258e00:
    // 0x258e00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x258e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_258e04:
    // 0x258e04: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x258e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_258e08:
    // 0x258e08: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x258e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_258e0c:
    // 0x258e0c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x258e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_258e10:
    // 0x258e10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x258e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_258e14:
    // 0x258e14: 0xc095c44  jal         func_257110
label_258e18:
    if (ctx->pc == 0x258E18u) {
        ctx->pc = 0x258E18u;
            // 0x258e18: 0x2446fff8  addiu       $a2, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->pc = 0x258E1Cu;
        goto label_258e1c;
    }
    ctx->pc = 0x258E14u;
    SET_GPR_U32(ctx, 31, 0x258E1Cu);
    ctx->pc = 0x258E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258E14u;
            // 0x258e18: 0x2446fff8  addiu       $a2, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x257110u;
    if (runtime->hasFunction(0x257110u)) {
        auto targetFn = runtime->lookupFunction(0x257110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258E1Cu; }
        if (ctx->pc != 0x258E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00257110_0x257110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258E1Cu; }
        if (ctx->pc != 0x258E1Cu) { return; }
    }
    ctx->pc = 0x258E1Cu;
label_258e1c:
    // 0x258e1c: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x258e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_258e20:
    // 0x258e20: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x258e20u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_258e24:
    // 0x258e24: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_258e28:
    if (ctx->pc == 0x258E28u) {
        ctx->pc = 0x258E28u;
            // 0x258e28: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->pc = 0x258E2Cu;
        goto label_258e2c;
    }
    ctx->pc = 0x258E24u;
    {
        const bool branch_taken_0x258e24 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x258E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258E24u;
            // 0x258e28: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258e24) {
            ctx->pc = 0x258E34u;
            goto label_258e34;
        }
    }
    ctx->pc = 0x258E2Cu;
label_258e2c:
    // 0x258e2c: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x258e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_258e30:
    // 0x258e30: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x258e30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_258e34:
    // 0x258e34: 0xa7a20106  sh          $v0, 0x106($sp)
    ctx->pc = 0x258e34u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 262), (uint16_t)GPR_U32(ctx, 2));
label_258e38:
    // 0x258e38: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x258e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_258e3c:
    // 0x258e3c: 0x8ea90070  lw          $t1, 0x70($s5)
    ctx->pc = 0x258e3cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_258e40:
    // 0x258e40: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x258e40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_258e44:
    // 0x258e44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x258e44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_258e48:
    // 0x258e48: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x258e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_258e4c:
    // 0x258e4c: 0x24480004  addiu       $t0, $v0, 0x4
    ctx->pc = 0x258e4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_258e50:
    // 0x258e50: 0x268082b  sltu        $at, $s3, $t0
    ctx->pc = 0x258e50u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_258e54:
    // 0x258e54: 0x10200074  beqz        $at, . + 4 + (0x74 << 2)
label_258e58:
    if (ctx->pc == 0x258E58u) {
        ctx->pc = 0x258E58u;
            // 0x258e58: 0x260502d  daddu       $t2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x258E5Cu;
        goto label_258e5c;
    }
    ctx->pc = 0x258E54u;
    {
        const bool branch_taken_0x258e54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x258E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258E54u;
            // 0x258e58: 0x260502d  daddu       $t2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258e54) {
            ctx->pc = 0x259028u;
            goto label_259028;
        }
    }
    ctx->pc = 0x258E5Cu;
label_258e5c:
    // 0x258e5c: 0x27a40104  addiu       $a0, $sp, 0x104
    ctx->pc = 0x258e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
label_258e60:
    // 0x258e60: 0x27a30114  addiu       $v1, $sp, 0x114
    ctx->pc = 0x258e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
label_258e64:
    // 0x258e64: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x258e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_258e68:
    // 0x258e68: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x258e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_258e6c:
    // 0x258e6c: 0x0  nop
    ctx->pc = 0x258e6cu;
    // NOP
label_258e70:
    // 0x258e70: 0x8d470000  lw          $a3, 0x0($t2)
    ctx->pc = 0x258e70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_258e74:
    // 0x258e74: 0x10e00068  beqz        $a3, . + 4 + (0x68 << 2)
label_258e78:
    if (ctx->pc == 0x258E78u) {
        ctx->pc = 0x258E78u;
            // 0x258e78: 0x120302d  daddu       $a2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x258E7Cu;
        goto label_258e7c;
    }
    ctx->pc = 0x258E74u;
    {
        const bool branch_taken_0x258e74 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x258E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258E74u;
            // 0x258e78: 0x120302d  daddu       $a2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258e74) {
            ctx->pc = 0x259018u;
            goto label_259018;
        }
    }
    ctx->pc = 0x258E7Cu;
label_258e7c:
    // 0x258e7c: 0x0  nop
    ctx->pc = 0x258e7cu;
    // NOP
label_258e80:
    // 0x258e80: 0x30e5000f  andi        $a1, $a3, 0xF
    ctx->pc = 0x258e80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
label_258e84:
    // 0x258e84: 0x10a00060  beqz        $a1, . + 4 + (0x60 << 2)
label_258e88:
    if (ctx->pc == 0x258E88u) {
        ctx->pc = 0x258E88u;
            // 0x258e88: 0x30e50001  andi        $a1, $a3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x258E8Cu;
        goto label_258e8c;
    }
    ctx->pc = 0x258E84u;
    {
        const bool branch_taken_0x258e84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x258E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258E84u;
            // 0x258e88: 0x30e50001  andi        $a1, $a3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x258e84) {
            ctx->pc = 0x259008u;
            goto label_259008;
        }
    }
    ctx->pc = 0x258E8Cu;
label_258e8c:
    // 0x258e8c: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
label_258e90:
    if (ctx->pc == 0x258E90u) {
        ctx->pc = 0x258E94u;
        goto label_258e94;
    }
    ctx->pc = 0x258E8Cu;
    {
        const bool branch_taken_0x258e8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x258e8c) {
            ctx->pc = 0x258EE8u;
            goto label_258ee8;
        }
    }
    ctx->pc = 0x258E94u;
label_258e94:
    // 0x258e94: 0x8ccd0004  lw          $t5, 0x4($a2)
    ctx->pc = 0x258e94u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_258e98:
    // 0x258e98: 0x8fab0100  lw          $t3, 0x100($sp)
    ctx->pc = 0x258e98u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_258e9c:
    // 0x258e9c: 0x8c8c0000  lw          $t4, 0x0($a0)
    ctx->pc = 0x258e9cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_258ea0:
    // 0x258ea0: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x258ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_258ea4:
    // 0x258ea4: 0x1ab6823  subu        $t5, $t5, $t3
    ctx->pc = 0x258ea4u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
label_258ea8:
    // 0x258ea8: 0x1856023  subu        $t4, $t4, $a1
    ctx->pc = 0x258ea8u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
label_258eac:
    // 0x258eac: 0x1ac6825  or          $t5, $t5, $t4
    ctx->pc = 0x258eacu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 12));
label_258eb0:
    // 0x258eb0: 0x1a22824  and         $a1, $t5, $v0
    ctx->pc = 0x258eb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 13) & GPR_U64(ctx, 2));
label_258eb4:
    // 0x258eb4: 0x14a0000c  bnez        $a1, . + 4 + (0xC << 2)
label_258eb8:
    if (ctx->pc == 0x258EB8u) {
        ctx->pc = 0x258EBCu;
        goto label_258ebc;
    }
    ctx->pc = 0x258EB4u;
    {
        const bool branch_taken_0x258eb4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x258eb4) {
            ctx->pc = 0x258EE8u;
            goto label_258ee8;
        }
    }
    ctx->pc = 0x258EBCu;
label_258ebc:
    // 0x258ebc: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x258ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_258ec0:
    // 0x258ec0: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x258ec0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_258ec4:
    // 0x258ec4: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
label_258ec8:
    if (ctx->pc == 0x258EC8u) {
        ctx->pc = 0x258ECCu;
        goto label_258ecc;
    }
    ctx->pc = 0x258EC4u;
    {
        const bool branch_taken_0x258ec4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x258ec4) {
            ctx->pc = 0x258EE8u;
            goto label_258ee8;
        }
    }
    ctx->pc = 0x258ECCu;
label_258ecc:
    // 0x258ecc: 0x8c6b0000  lw          $t3, 0x0($v1)
    ctx->pc = 0x258eccu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_258ed0:
    // 0x258ed0: 0x25650001  addiu       $a1, $t3, 0x1
    ctx->pc = 0x258ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_258ed4:
    // 0x258ed4: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x258ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_258ed8:
    // 0x258ed8: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x258ed8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_258edc:
    // 0x258edc: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x258edcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_258ee0:
    // 0x258ee0: 0xab2821  addu        $a1, $a1, $t3
    ctx->pc = 0x258ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
label_258ee4:
    // 0x258ee4: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x258ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_258ee8:
    // 0x258ee8: 0x30e50002  andi        $a1, $a3, 0x2
    ctx->pc = 0x258ee8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
label_258eec:
    // 0x258eec: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
label_258ef0:
    if (ctx->pc == 0x258EF0u) {
        ctx->pc = 0x258EF4u;
        goto label_258ef4;
    }
    ctx->pc = 0x258EECu;
    {
        const bool branch_taken_0x258eec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x258eec) {
            ctx->pc = 0x258F48u;
            goto label_258f48;
        }
    }
    ctx->pc = 0x258EF4u;
label_258ef4:
    // 0x258ef4: 0x8cce0014  lw          $t6, 0x14($a2)
    ctx->pc = 0x258ef4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_258ef8:
    // 0x258ef8: 0x8fac0100  lw          $t4, 0x100($sp)
    ctx->pc = 0x258ef8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_258efc:
    // 0x258efc: 0x8c8d0000  lw          $t5, 0x0($a0)
    ctx->pc = 0x258efcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_258f00:
    // 0x258f00: 0x8ccb0010  lw          $t3, 0x10($a2)
    ctx->pc = 0x258f00u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_258f04:
    // 0x258f04: 0x1cc7023  subu        $t6, $t6, $t4
    ctx->pc = 0x258f04u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
label_258f08:
    // 0x258f08: 0x1ab6823  subu        $t5, $t5, $t3
    ctx->pc = 0x258f08u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
label_258f0c:
    // 0x258f0c: 0x1cd7025  or          $t6, $t6, $t5
    ctx->pc = 0x258f0cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
label_258f10:
    // 0x258f10: 0x1c25824  and         $t3, $t6, $v0
    ctx->pc = 0x258f10u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) & GPR_U64(ctx, 2));
label_258f14:
    // 0x258f14: 0x1560000c  bnez        $t3, . + 4 + (0xC << 2)
label_258f18:
    if (ctx->pc == 0x258F18u) {
        ctx->pc = 0x258F18u;
            // 0x258f18: 0x24c50010  addiu       $a1, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->pc = 0x258F1Cu;
        goto label_258f1c;
    }
    ctx->pc = 0x258F14u;
    {
        const bool branch_taken_0x258f14 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x258F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258F14u;
            // 0x258f18: 0x24c50010  addiu       $a1, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258f14) {
            ctx->pc = 0x258F48u;
            goto label_258f48;
        }
    }
    ctx->pc = 0x258F1Cu;
label_258f1c:
    // 0x258f1c: 0x8ccb001c  lw          $t3, 0x1C($a2)
    ctx->pc = 0x258f1cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_258f20:
    // 0x258f20: 0x316b0001  andi        $t3, $t3, 0x1
    ctx->pc = 0x258f20u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
label_258f24:
    // 0x258f24: 0x15600008  bnez        $t3, . + 4 + (0x8 << 2)
label_258f28:
    if (ctx->pc == 0x258F28u) {
        ctx->pc = 0x258F2Cu;
        goto label_258f2c;
    }
    ctx->pc = 0x258F24u;
    {
        const bool branch_taken_0x258f24 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x258f24) {
            ctx->pc = 0x258F48u;
            goto label_258f48;
        }
    }
    ctx->pc = 0x258F2Cu;
label_258f2c:
    // 0x258f2c: 0x8c6c0000  lw          $t4, 0x0($v1)
    ctx->pc = 0x258f2cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_258f30:
    // 0x258f30: 0x258b0001  addiu       $t3, $t4, 0x1
    ctx->pc = 0x258f30u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_258f34:
    // 0x258f34: 0xac6b0000  sw          $t3, 0x0($v1)
    ctx->pc = 0x258f34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 11));
label_258f38:
    // 0x258f38: 0xc6080  sll         $t4, $t4, 2
    ctx->pc = 0x258f38u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
label_258f3c:
    // 0x258f3c: 0x8fab0110  lw          $t3, 0x110($sp)
    ctx->pc = 0x258f3cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_258f40:
    // 0x258f40: 0x16c5821  addu        $t3, $t3, $t4
    ctx->pc = 0x258f40u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
label_258f44:
    // 0x258f44: 0xad650000  sw          $a1, 0x0($t3)
    ctx->pc = 0x258f44u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
label_258f48:
    // 0x258f48: 0x30e50004  andi        $a1, $a3, 0x4
    ctx->pc = 0x258f48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
label_258f4c:
    // 0x258f4c: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
label_258f50:
    if (ctx->pc == 0x258F50u) {
        ctx->pc = 0x258F54u;
        goto label_258f54;
    }
    ctx->pc = 0x258F4Cu;
    {
        const bool branch_taken_0x258f4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x258f4c) {
            ctx->pc = 0x258FA8u;
            goto label_258fa8;
        }
    }
    ctx->pc = 0x258F54u;
label_258f54:
    // 0x258f54: 0x8cce0024  lw          $t6, 0x24($a2)
    ctx->pc = 0x258f54u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_258f58:
    // 0x258f58: 0x8fac0100  lw          $t4, 0x100($sp)
    ctx->pc = 0x258f58u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_258f5c:
    // 0x258f5c: 0x8c8d0000  lw          $t5, 0x0($a0)
    ctx->pc = 0x258f5cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_258f60:
    // 0x258f60: 0x8ccb0020  lw          $t3, 0x20($a2)
    ctx->pc = 0x258f60u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_258f64:
    // 0x258f64: 0x1cc7023  subu        $t6, $t6, $t4
    ctx->pc = 0x258f64u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
label_258f68:
    // 0x258f68: 0x1ab6823  subu        $t5, $t5, $t3
    ctx->pc = 0x258f68u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
label_258f6c:
    // 0x258f6c: 0x1cd7025  or          $t6, $t6, $t5
    ctx->pc = 0x258f6cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
label_258f70:
    // 0x258f70: 0x1c25824  and         $t3, $t6, $v0
    ctx->pc = 0x258f70u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) & GPR_U64(ctx, 2));
label_258f74:
    // 0x258f74: 0x1560000c  bnez        $t3, . + 4 + (0xC << 2)
label_258f78:
    if (ctx->pc == 0x258F78u) {
        ctx->pc = 0x258F78u;
            // 0x258f78: 0x24c50020  addiu       $a1, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->pc = 0x258F7Cu;
        goto label_258f7c;
    }
    ctx->pc = 0x258F74u;
    {
        const bool branch_taken_0x258f74 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x258F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258F74u;
            // 0x258f78: 0x24c50020  addiu       $a1, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258f74) {
            ctx->pc = 0x258FA8u;
            goto label_258fa8;
        }
    }
    ctx->pc = 0x258F7Cu;
label_258f7c:
    // 0x258f7c: 0x8ccb002c  lw          $t3, 0x2C($a2)
    ctx->pc = 0x258f7cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
label_258f80:
    // 0x258f80: 0x316b0001  andi        $t3, $t3, 0x1
    ctx->pc = 0x258f80u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
label_258f84:
    // 0x258f84: 0x15600008  bnez        $t3, . + 4 + (0x8 << 2)
label_258f88:
    if (ctx->pc == 0x258F88u) {
        ctx->pc = 0x258F8Cu;
        goto label_258f8c;
    }
    ctx->pc = 0x258F84u;
    {
        const bool branch_taken_0x258f84 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x258f84) {
            ctx->pc = 0x258FA8u;
            goto label_258fa8;
        }
    }
    ctx->pc = 0x258F8Cu;
label_258f8c:
    // 0x258f8c: 0x8c6c0000  lw          $t4, 0x0($v1)
    ctx->pc = 0x258f8cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_258f90:
    // 0x258f90: 0x258b0001  addiu       $t3, $t4, 0x1
    ctx->pc = 0x258f90u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_258f94:
    // 0x258f94: 0xac6b0000  sw          $t3, 0x0($v1)
    ctx->pc = 0x258f94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 11));
label_258f98:
    // 0x258f98: 0xc6080  sll         $t4, $t4, 2
    ctx->pc = 0x258f98u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
label_258f9c:
    // 0x258f9c: 0x8fab0110  lw          $t3, 0x110($sp)
    ctx->pc = 0x258f9cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_258fa0:
    // 0x258fa0: 0x16c5821  addu        $t3, $t3, $t4
    ctx->pc = 0x258fa0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
label_258fa4:
    // 0x258fa4: 0xad650000  sw          $a1, 0x0($t3)
    ctx->pc = 0x258fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
label_258fa8:
    // 0x258fa8: 0x30e50008  andi        $a1, $a3, 0x8
    ctx->pc = 0x258fa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
label_258fac:
    // 0x258fac: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
label_258fb0:
    if (ctx->pc == 0x258FB0u) {
        ctx->pc = 0x258FB4u;
        goto label_258fb4;
    }
    ctx->pc = 0x258FACu;
    {
        const bool branch_taken_0x258fac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x258fac) {
            ctx->pc = 0x259008u;
            goto label_259008;
        }
    }
    ctx->pc = 0x258FB4u;
label_258fb4:
    // 0x258fb4: 0x8cce0034  lw          $t6, 0x34($a2)
    ctx->pc = 0x258fb4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_258fb8:
    // 0x258fb8: 0x8fac0100  lw          $t4, 0x100($sp)
    ctx->pc = 0x258fb8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_258fbc:
    // 0x258fbc: 0x8c8d0000  lw          $t5, 0x0($a0)
    ctx->pc = 0x258fbcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_258fc0:
    // 0x258fc0: 0x8ccb0030  lw          $t3, 0x30($a2)
    ctx->pc = 0x258fc0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_258fc4:
    // 0x258fc4: 0x1cc7023  subu        $t6, $t6, $t4
    ctx->pc = 0x258fc4u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
label_258fc8:
    // 0x258fc8: 0x1ab6823  subu        $t5, $t5, $t3
    ctx->pc = 0x258fc8u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
label_258fcc:
    // 0x258fcc: 0x1cd7025  or          $t6, $t6, $t5
    ctx->pc = 0x258fccu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
label_258fd0:
    // 0x258fd0: 0x1c25824  and         $t3, $t6, $v0
    ctx->pc = 0x258fd0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) & GPR_U64(ctx, 2));
label_258fd4:
    // 0x258fd4: 0x1560000c  bnez        $t3, . + 4 + (0xC << 2)
label_258fd8:
    if (ctx->pc == 0x258FD8u) {
        ctx->pc = 0x258FD8u;
            // 0x258fd8: 0x24c50030  addiu       $a1, $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
        ctx->pc = 0x258FDCu;
        goto label_258fdc;
    }
    ctx->pc = 0x258FD4u;
    {
        const bool branch_taken_0x258fd4 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x258FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258FD4u;
            // 0x258fd8: 0x24c50030  addiu       $a1, $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258fd4) {
            ctx->pc = 0x259008u;
            goto label_259008;
        }
    }
    ctx->pc = 0x258FDCu;
label_258fdc:
    // 0x258fdc: 0x8ccb003c  lw          $t3, 0x3C($a2)
    ctx->pc = 0x258fdcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
label_258fe0:
    // 0x258fe0: 0x316b0001  andi        $t3, $t3, 0x1
    ctx->pc = 0x258fe0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
label_258fe4:
    // 0x258fe4: 0x15600008  bnez        $t3, . + 4 + (0x8 << 2)
label_258fe8:
    if (ctx->pc == 0x258FE8u) {
        ctx->pc = 0x258FECu;
        goto label_258fec;
    }
    ctx->pc = 0x258FE4u;
    {
        const bool branch_taken_0x258fe4 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x258fe4) {
            ctx->pc = 0x259008u;
            goto label_259008;
        }
    }
    ctx->pc = 0x258FECu;
label_258fec:
    // 0x258fec: 0x8c6c0000  lw          $t4, 0x0($v1)
    ctx->pc = 0x258fecu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_258ff0:
    // 0x258ff0: 0x258b0001  addiu       $t3, $t4, 0x1
    ctx->pc = 0x258ff0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_258ff4:
    // 0x258ff4: 0xac6b0000  sw          $t3, 0x0($v1)
    ctx->pc = 0x258ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 11));
label_258ff8:
    // 0x258ff8: 0xc6080  sll         $t4, $t4, 2
    ctx->pc = 0x258ff8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
label_258ffc:
    // 0x258ffc: 0x8fab0110  lw          $t3, 0x110($sp)
    ctx->pc = 0x258ffcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_259000:
    // 0x259000: 0x16c5821  addu        $t3, $t3, $t4
    ctx->pc = 0x259000u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
label_259004:
    // 0x259004: 0xad650000  sw          $a1, 0x0($t3)
    ctx->pc = 0x259004u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
label_259008:
    // 0x259008: 0x73902  srl         $a3, $a3, 4
    ctx->pc = 0x259008u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 4));
label_25900c:
    // 0x25900c: 0x14e0ff9c  bnez        $a3, . + 4 + (-0x64 << 2)
label_259010:
    if (ctx->pc == 0x259010u) {
        ctx->pc = 0x259010u;
            // 0x259010: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
        ctx->pc = 0x259014u;
        goto label_259014;
    }
    ctx->pc = 0x25900Cu;
    {
        const bool branch_taken_0x25900c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x259010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25900Cu;
            // 0x259010: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25900c) {
            ctx->pc = 0x258E80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_258e80;
        }
    }
    ctx->pc = 0x259014u;
label_259014:
    // 0x259014: 0x0  nop
    ctx->pc = 0x259014u;
    // NOP
label_259018:
    // 0x259018: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x259018u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_25901c:
    // 0x25901c: 0x148282b  sltu        $a1, $t2, $t0
    ctx->pc = 0x25901cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_259020:
    // 0x259020: 0x14a0ff93  bnez        $a1, . + 4 + (-0x6D << 2)
label_259024:
    if (ctx->pc == 0x259024u) {
        ctx->pc = 0x259024u;
            // 0x259024: 0x25290200  addiu       $t1, $t1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 512));
        ctx->pc = 0x259028u;
        goto label_259028;
    }
    ctx->pc = 0x259020u;
    {
        const bool branch_taken_0x259020 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x259024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259020u;
            // 0x259024: 0x25290200  addiu       $t1, $t1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259020) {
            ctx->pc = 0x258E70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_258e70;
        }
    }
    ctx->pc = 0x259028u;
label_259028:
    // 0x259028: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x259028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_25902c:
    // 0x25902c: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x25902cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_259030:
    // 0x259030: 0xac93000c  sw          $s3, 0xC($a0)
    ctx->pc = 0x259030u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 19));
label_259034:
    // 0x259034: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x259034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_259038:
    // 0x259038: 0x16620005  bne         $s3, $v0, . + 4 + (0x5 << 2)
label_25903c:
    if (ctx->pc == 0x25903Cu) {
        ctx->pc = 0x259040u;
        goto label_259040;
    }
    ctx->pc = 0x259038u;
    {
        const bool branch_taken_0x259038 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x259038) {
            ctx->pc = 0x259050u;
            goto label_259050;
        }
    }
    ctx->pc = 0x259040u;
label_259040:
    // 0x259040: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x259040u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_259044:
    // 0x259044: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x259044u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_259048:
    // 0x259048: 0x320f809  jalr        $t9
label_25904c:
    if (ctx->pc == 0x25904Cu) {
        ctx->pc = 0x25904Cu;
            // 0x25904c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x259050u;
        goto label_259050;
    }
    ctx->pc = 0x259048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x259050u);
        ctx->pc = 0x25904Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259048u;
            // 0x25904c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x259050u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x259050u; }
            if (ctx->pc != 0x259050u) { return; }
        }
        }
    }
    ctx->pc = 0x259050u;
label_259050:
    // 0x259050: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x259050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_259054:
    // 0x259054: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x259054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_259058:
    // 0x259058: 0xc0964b0  jal         func_2592C0
label_25905c:
    if (ctx->pc == 0x25905Cu) {
        ctx->pc = 0x25905Cu;
            // 0x25905c: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x259060u;
        goto label_259060;
    }
    ctx->pc = 0x259058u;
    SET_GPR_U32(ctx, 31, 0x259060u);
    ctx->pc = 0x25905Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259058u;
            // 0x25905c: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2592C0u;
    if (runtime->hasFunction(0x2592C0u)) {
        auto targetFn = runtime->lookupFunction(0x2592C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259060u; }
        if (ctx->pc != 0x259060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002592C0_0x2592c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259060u; }
        if (ctx->pc != 0x259060u) { return; }
    }
    ctx->pc = 0x259060u;
label_259060:
    // 0x259060: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x259060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_259064:
    // 0x259064: 0x8fa5011c  lw          $a1, 0x11C($sp)
    ctx->pc = 0x259064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_259068:
    // 0x259068: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x259068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_25906c:
    // 0x25906c: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x25906cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_259070:
    // 0x259070: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x259070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_259074:
    // 0x259074: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
label_259078:
    if (ctx->pc == 0x259078u) {
        ctx->pc = 0x25907Cu;
        goto label_25907c;
    }
    ctx->pc = 0x259074u;
    {
        const bool branch_taken_0x259074 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x259074) {
            ctx->pc = 0x259090u;
            goto label_259090;
        }
    }
    ctx->pc = 0x25907Cu;
label_25907c:
    // 0x25907c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25907cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_259080:
    // 0x259080: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x259080u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_259084:
    // 0x259084: 0x320f809  jalr        $t9
label_259088:
    if (ctx->pc == 0x259088u) {
        ctx->pc = 0x25908Cu;
        goto label_25908c;
    }
    ctx->pc = 0x259084u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25908Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x25908Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25908Cu; }
            if (ctx->pc != 0x25908Cu) { return; }
        }
        }
    }
    ctx->pc = 0x25908Cu;
label_25908c:
    // 0x25908c: 0x0  nop
    ctx->pc = 0x25908cu;
    // NOP
label_259090:
    // 0x259090: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x259090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_259094:
    // 0x259094: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x259094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_259098:
    // 0x259098: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x259098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_25909c:
    // 0x25909c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_2590a0:
    if (ctx->pc == 0x2590A0u) {
        ctx->pc = 0x2590A4u;
        goto label_2590a4;
    }
    ctx->pc = 0x25909Cu;
    {
        const bool branch_taken_0x25909c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25909c) {
            ctx->pc = 0x2590C8u;
            goto label_2590c8;
        }
    }
    ctx->pc = 0x2590A4u;
label_2590a4:
    // 0x2590a4: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x2590a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2590a8:
    // 0x2590a8: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x2590a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_2590ac:
    // 0x2590ac: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x2590acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_2590b0:
    // 0x2590b0: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2590b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_2590b4:
    // 0x2590b4: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x2590b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_2590b8:
    // 0x2590b8: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x2590b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_2590bc:
    // 0x2590bc: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x2590bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_2590c0:
    // 0x2590c0: 0xc0a7ab4  jal         func_29EAD0
label_2590c4:
    if (ctx->pc == 0x2590C4u) {
        ctx->pc = 0x2590C4u;
            // 0x2590c4: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x2590C8u;
        goto label_2590c8;
    }
    ctx->pc = 0x2590C0u;
    SET_GPR_U32(ctx, 31, 0x2590C8u);
    ctx->pc = 0x2590C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2590C0u;
            // 0x2590c4: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2590C8u; }
        if (ctx->pc != 0x2590C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2590C8u; }
        if (ctx->pc != 0x2590C8u) { return; }
    }
    ctx->pc = 0x2590C8u;
label_2590c8:
    // 0x2590c8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2590c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2590cc:
    // 0x2590cc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2590ccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2590d0:
    // 0x2590d0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2590d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2590d4:
    // 0x2590d4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2590d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2590d8:
    // 0x2590d8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2590d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2590dc:
    // 0x2590dc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2590dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2590e0:
    // 0x2590e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2590e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2590e4:
    // 0x2590e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2590e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2590e8:
    // 0x2590e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2590e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2590ec:
    // 0x2590ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2590ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2590f0:
    // 0x2590f0: 0x3e00008  jr          $ra
label_2590f4:
    if (ctx->pc == 0x2590F4u) {
        ctx->pc = 0x2590F4u;
            // 0x2590f4: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x2590F8u;
        goto label_2590f8;
    }
    ctx->pc = 0x2590F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2590F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2590F0u;
            // 0x2590f4: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2590F8u;
label_2590f8:
    // 0x2590f8: 0x0  nop
    ctx->pc = 0x2590f8u;
    // NOP
label_2590fc:
    // 0x2590fc: 0x0  nop
    ctx->pc = 0x2590fcu;
    // NOP
label_259100:
    // 0x259100: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x259100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_259104:
    // 0x259104: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x259104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_259108:
    // 0x259108: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x259108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_25910c:
    // 0x25910c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x25910cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_259110:
    // 0x259110: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x259110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_259114:
    // 0x259114: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x259114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_259118:
    // 0x259118: 0x27b60088  addiu       $s6, $sp, 0x88
    ctx->pc = 0x259118u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_25911c:
    // 0x25911c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x25911cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_259120:
    // 0x259120: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x259120u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_259124:
    // 0x259124: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x259124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_259128:
    // 0x259128: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x259128u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_25912c:
    // 0x25912c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25912cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_259130:
    // 0x259130: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x259130u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_259134:
    // 0x259134: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x259134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_259138:
    // 0x259138: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x259138u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_25913c:
    // 0x25913c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25913cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_259140:
    // 0x259140: 0x8cb10004  lw          $s1, 0x4($a1)
    ctx->pc = 0x259140u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_259144:
    // 0x259144: 0x27b00084  addiu       $s0, $sp, 0x84
    ctx->pc = 0x259144u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
label_259148:
    // 0x259148: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x259148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_25914c:
    // 0x25914c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x25914cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_259150:
    // 0x259150: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x259150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_259154:
    // 0x259154: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x259154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_259158:
    // 0x259158: 0xaec40000  sw          $a0, 0x0($s6)
    ctx->pc = 0x259158u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 4));
label_25915c:
    // 0x25915c: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x25915cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_259160:
    // 0x259160: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x259160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_259164:
    // 0x259164: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x259164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_259168:
    // 0x259168: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x259168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_25916c:
    // 0x25916c: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x25916cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_259170:
    // 0x259170: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x259170u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_259174:
    // 0x259174: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_259178:
    if (ctx->pc == 0x259178u) {
        ctx->pc = 0x259178u;
            // 0x259178: 0x27b20080  addiu       $s2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x25917Cu;
        goto label_25917c;
    }
    ctx->pc = 0x259174u;
    {
        const bool branch_taken_0x259174 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x259178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259174u;
            // 0x259178: 0x27b20080  addiu       $s2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259174) {
            ctx->pc = 0x259188u;
            goto label_259188;
        }
    }
    ctx->pc = 0x25917Cu;
label_25917c:
    // 0x25917c: 0x10000006  b           . + 4 + (0x6 << 2)
label_259180:
    if (ctx->pc == 0x259180u) {
        ctx->pc = 0x259180u;
            // 0x259180: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x259184u;
        goto label_259184;
    }
    ctx->pc = 0x25917Cu;
    {
        const bool branch_taken_0x25917c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25917Cu;
            // 0x259180: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25917c) {
            ctx->pc = 0x259198u;
            goto label_259198;
        }
    }
    ctx->pc = 0x259184u;
label_259184:
    // 0x259184: 0x0  nop
    ctx->pc = 0x259184u;
    // NOP
label_259188:
    // 0x259188: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x259188u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25918c:
    // 0x25918c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x25918cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_259190:
    // 0x259190: 0x320f809  jalr        $t9
label_259194:
    if (ctx->pc == 0x259194u) {
        ctx->pc = 0x259198u;
        goto label_259198;
    }
    ctx->pc = 0x259190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x259198u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x259198u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x259198u; }
            if (ctx->pc != 0x259198u) { return; }
        }
        }
    }
    ctx->pc = 0x259198u;
label_259198:
    // 0x259198: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x259198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_25919c:
    // 0x25919c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x25919cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_2591a0:
    // 0x2591a0: 0x2231825  or          $v1, $s1, $v1
    ctx->pc = 0x2591a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
label_2591a4:
    // 0x2591a4: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x2591a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_2591a8:
    // 0x2591a8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2591a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2591ac:
    // 0x2591ac: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x2591acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_2591b0:
    // 0x2591b0: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x2591b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2591b4:
    // 0x2591b4: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2591b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2591b8:
    // 0x2591b8: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
label_2591bc:
    if (ctx->pc == 0x2591BCu) {
        ctx->pc = 0x2591BCu;
            // 0x2591bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2591C0u;
        goto label_2591c0;
    }
    ctx->pc = 0x2591B8u;
    {
        const bool branch_taken_0x2591b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2591BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2591B8u;
            // 0x2591bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2591b8) {
            ctx->pc = 0x259218u;
            goto label_259218;
        }
    }
    ctx->pc = 0x2591C0u;
label_2591c0:
    // 0x2591c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2591c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2591c4:
    // 0x2591c4: 0x0  nop
    ctx->pc = 0x2591c4u;
    // NOP
label_2591c8:
    // 0x2591c8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2591c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2591cc:
    // 0x2591cc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2591ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2591d0:
    // 0x2591d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2591d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2591d4:
    // 0x2591d4: 0x8ea50070  lw          $a1, 0x70($s5)
    ctx->pc = 0x2591d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_2591d8:
    // 0x2591d8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2591d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2591dc:
    // 0x2591dc: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2591dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2591e0:
    // 0x2591e0: 0x8cc60014  lw          $a2, 0x14($a2)
    ctx->pc = 0x2591e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_2591e4:
    // 0x2591e4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2591e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2591e8:
    // 0x2591e8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2591e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2591ec:
    // 0x2591ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2591ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2591f0:
    // 0x2591f0: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x2591f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_2591f4:
    // 0x2591f4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2591f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2591f8:
    // 0x2591f8: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2591f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2591fc:
    // 0x2591fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2591fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_259200:
    // 0x259200: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x259200u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_259204:
    // 0x259204: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x259204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_259208:
    // 0x259208: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x259208u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_25920c:
    // 0x25920c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
label_259210:
    if (ctx->pc == 0x259210u) {
        ctx->pc = 0x259210u;
            // 0x259210: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->pc = 0x259214u;
        goto label_259214;
    }
    ctx->pc = 0x25920Cu;
    {
        const bool branch_taken_0x25920c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x259210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25920Cu;
            // 0x259210: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25920c) {
            ctx->pc = 0x2591C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2591c8;
        }
    }
    ctx->pc = 0x259214u;
label_259214:
    // 0x259214: 0x0  nop
    ctx->pc = 0x259214u;
    // NOP
label_259218:
    // 0x259218: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x259218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_25921c:
    // 0x25921c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x25921cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_259220:
    // 0x259220: 0xc0964b0  jal         func_2592C0
label_259224:
    if (ctx->pc == 0x259224u) {
        ctx->pc = 0x259224u;
            // 0x259224: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x259228u;
        goto label_259228;
    }
    ctx->pc = 0x259220u;
    SET_GPR_U32(ctx, 31, 0x259228u);
    ctx->pc = 0x259224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259220u;
            // 0x259224: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2592C0u;
    if (runtime->hasFunction(0x2592C0u)) {
        auto targetFn = runtime->lookupFunction(0x2592C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259228u; }
        if (ctx->pc != 0x259228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002592C0_0x2592c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259228u; }
        if (ctx->pc != 0x259228u) { return; }
    }
    ctx->pc = 0x259228u;
label_259228:
    // 0x259228: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x259228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_25922c:
    // 0x25922c: 0x8fa5008c  lw          $a1, 0x8C($sp)
    ctx->pc = 0x25922cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_259230:
    // 0x259230: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x259230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_259234:
    // 0x259234: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x259234u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_259238:
    // 0x259238: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x259238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_25923c:
    // 0x25923c: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
label_259240:
    if (ctx->pc == 0x259240u) {
        ctx->pc = 0x259244u;
        goto label_259244;
    }
    ctx->pc = 0x25923Cu;
    {
        const bool branch_taken_0x25923c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x25923c) {
            ctx->pc = 0x259258u;
            goto label_259258;
        }
    }
    ctx->pc = 0x259244u;
label_259244:
    // 0x259244: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x259244u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_259248:
    // 0x259248: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x259248u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_25924c:
    // 0x25924c: 0x320f809  jalr        $t9
label_259250:
    if (ctx->pc == 0x259250u) {
        ctx->pc = 0x259254u;
        goto label_259254;
    }
    ctx->pc = 0x25924Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x259254u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x259254u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x259254u; }
            if (ctx->pc != 0x259254u) { return; }
        }
        }
    }
    ctx->pc = 0x259254u;
label_259254:
    // 0x259254: 0x0  nop
    ctx->pc = 0x259254u;
    // NOP
label_259258:
    // 0x259258: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x259258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_25925c:
    // 0x25925c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x25925cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_259260:
    // 0x259260: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x259260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_259264:
    // 0x259264: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_259268:
    if (ctx->pc == 0x259268u) {
        ctx->pc = 0x25926Cu;
        goto label_25926c;
    }
    ctx->pc = 0x259264u;
    {
        const bool branch_taken_0x259264 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x259264) {
            ctx->pc = 0x259290u;
            goto label_259290;
        }
    }
    ctx->pc = 0x25926Cu;
label_25926c:
    // 0x25926c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x25926cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_259270:
    // 0x259270: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x259270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_259274:
    // 0x259274: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x259274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_259278:
    // 0x259278: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x259278u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_25927c:
    // 0x25927c: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x25927cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_259280:
    // 0x259280: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x259280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_259284:
    // 0x259284: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x259284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_259288:
    // 0x259288: 0xc0a7ab4  jal         func_29EAD0
label_25928c:
    if (ctx->pc == 0x25928Cu) {
        ctx->pc = 0x25928Cu;
            // 0x25928c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x259290u;
        goto label_259290;
    }
    ctx->pc = 0x259288u;
    SET_GPR_U32(ctx, 31, 0x259290u);
    ctx->pc = 0x25928Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259288u;
            // 0x25928c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259290u; }
        if (ctx->pc != 0x259290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259290u; }
        if (ctx->pc != 0x259290u) { return; }
    }
    ctx->pc = 0x259290u;
label_259290:
    // 0x259290: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x259290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_259294:
    // 0x259294: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x259294u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_259298:
    // 0x259298: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x259298u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_25929c:
    // 0x25929c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x25929cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2592a0:
    // 0x2592a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2592a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2592a4:
    // 0x2592a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2592a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2592a8:
    // 0x2592a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2592a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2592ac:
    // 0x2592ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2592acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2592b0:
    // 0x2592b0: 0x3e00008  jr          $ra
label_2592b4:
    if (ctx->pc == 0x2592B4u) {
        ctx->pc = 0x2592B4u;
            // 0x2592b4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x2592B8u;
        goto label_2592b8;
    }
    ctx->pc = 0x2592B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2592B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2592B0u;
            // 0x2592b4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2592B8u;
label_2592b8:
    // 0x2592b8: 0x0  nop
    ctx->pc = 0x2592b8u;
    // NOP
label_2592bc:
    // 0x2592bc: 0x0  nop
    ctx->pc = 0x2592bcu;
    // NOP
}
