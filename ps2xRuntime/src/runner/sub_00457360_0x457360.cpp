#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00457360
// Address: 0x457360 - 0x457a60
void sub_00457360_0x457360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00457360_0x457360");
#endif

    switch (ctx->pc) {
        case 0x457360u: goto label_457360;
        case 0x457364u: goto label_457364;
        case 0x457368u: goto label_457368;
        case 0x45736cu: goto label_45736c;
        case 0x457370u: goto label_457370;
        case 0x457374u: goto label_457374;
        case 0x457378u: goto label_457378;
        case 0x45737cu: goto label_45737c;
        case 0x457380u: goto label_457380;
        case 0x457384u: goto label_457384;
        case 0x457388u: goto label_457388;
        case 0x45738cu: goto label_45738c;
        case 0x457390u: goto label_457390;
        case 0x457394u: goto label_457394;
        case 0x457398u: goto label_457398;
        case 0x45739cu: goto label_45739c;
        case 0x4573a0u: goto label_4573a0;
        case 0x4573a4u: goto label_4573a4;
        case 0x4573a8u: goto label_4573a8;
        case 0x4573acu: goto label_4573ac;
        case 0x4573b0u: goto label_4573b0;
        case 0x4573b4u: goto label_4573b4;
        case 0x4573b8u: goto label_4573b8;
        case 0x4573bcu: goto label_4573bc;
        case 0x4573c0u: goto label_4573c0;
        case 0x4573c4u: goto label_4573c4;
        case 0x4573c8u: goto label_4573c8;
        case 0x4573ccu: goto label_4573cc;
        case 0x4573d0u: goto label_4573d0;
        case 0x4573d4u: goto label_4573d4;
        case 0x4573d8u: goto label_4573d8;
        case 0x4573dcu: goto label_4573dc;
        case 0x4573e0u: goto label_4573e0;
        case 0x4573e4u: goto label_4573e4;
        case 0x4573e8u: goto label_4573e8;
        case 0x4573ecu: goto label_4573ec;
        case 0x4573f0u: goto label_4573f0;
        case 0x4573f4u: goto label_4573f4;
        case 0x4573f8u: goto label_4573f8;
        case 0x4573fcu: goto label_4573fc;
        case 0x457400u: goto label_457400;
        case 0x457404u: goto label_457404;
        case 0x457408u: goto label_457408;
        case 0x45740cu: goto label_45740c;
        case 0x457410u: goto label_457410;
        case 0x457414u: goto label_457414;
        case 0x457418u: goto label_457418;
        case 0x45741cu: goto label_45741c;
        case 0x457420u: goto label_457420;
        case 0x457424u: goto label_457424;
        case 0x457428u: goto label_457428;
        case 0x45742cu: goto label_45742c;
        case 0x457430u: goto label_457430;
        case 0x457434u: goto label_457434;
        case 0x457438u: goto label_457438;
        case 0x45743cu: goto label_45743c;
        case 0x457440u: goto label_457440;
        case 0x457444u: goto label_457444;
        case 0x457448u: goto label_457448;
        case 0x45744cu: goto label_45744c;
        case 0x457450u: goto label_457450;
        case 0x457454u: goto label_457454;
        case 0x457458u: goto label_457458;
        case 0x45745cu: goto label_45745c;
        case 0x457460u: goto label_457460;
        case 0x457464u: goto label_457464;
        case 0x457468u: goto label_457468;
        case 0x45746cu: goto label_45746c;
        case 0x457470u: goto label_457470;
        case 0x457474u: goto label_457474;
        case 0x457478u: goto label_457478;
        case 0x45747cu: goto label_45747c;
        case 0x457480u: goto label_457480;
        case 0x457484u: goto label_457484;
        case 0x457488u: goto label_457488;
        case 0x45748cu: goto label_45748c;
        case 0x457490u: goto label_457490;
        case 0x457494u: goto label_457494;
        case 0x457498u: goto label_457498;
        case 0x45749cu: goto label_45749c;
        case 0x4574a0u: goto label_4574a0;
        case 0x4574a4u: goto label_4574a4;
        case 0x4574a8u: goto label_4574a8;
        case 0x4574acu: goto label_4574ac;
        case 0x4574b0u: goto label_4574b0;
        case 0x4574b4u: goto label_4574b4;
        case 0x4574b8u: goto label_4574b8;
        case 0x4574bcu: goto label_4574bc;
        case 0x4574c0u: goto label_4574c0;
        case 0x4574c4u: goto label_4574c4;
        case 0x4574c8u: goto label_4574c8;
        case 0x4574ccu: goto label_4574cc;
        case 0x4574d0u: goto label_4574d0;
        case 0x4574d4u: goto label_4574d4;
        case 0x4574d8u: goto label_4574d8;
        case 0x4574dcu: goto label_4574dc;
        case 0x4574e0u: goto label_4574e0;
        case 0x4574e4u: goto label_4574e4;
        case 0x4574e8u: goto label_4574e8;
        case 0x4574ecu: goto label_4574ec;
        case 0x4574f0u: goto label_4574f0;
        case 0x4574f4u: goto label_4574f4;
        case 0x4574f8u: goto label_4574f8;
        case 0x4574fcu: goto label_4574fc;
        case 0x457500u: goto label_457500;
        case 0x457504u: goto label_457504;
        case 0x457508u: goto label_457508;
        case 0x45750cu: goto label_45750c;
        case 0x457510u: goto label_457510;
        case 0x457514u: goto label_457514;
        case 0x457518u: goto label_457518;
        case 0x45751cu: goto label_45751c;
        case 0x457520u: goto label_457520;
        case 0x457524u: goto label_457524;
        case 0x457528u: goto label_457528;
        case 0x45752cu: goto label_45752c;
        case 0x457530u: goto label_457530;
        case 0x457534u: goto label_457534;
        case 0x457538u: goto label_457538;
        case 0x45753cu: goto label_45753c;
        case 0x457540u: goto label_457540;
        case 0x457544u: goto label_457544;
        case 0x457548u: goto label_457548;
        case 0x45754cu: goto label_45754c;
        case 0x457550u: goto label_457550;
        case 0x457554u: goto label_457554;
        case 0x457558u: goto label_457558;
        case 0x45755cu: goto label_45755c;
        case 0x457560u: goto label_457560;
        case 0x457564u: goto label_457564;
        case 0x457568u: goto label_457568;
        case 0x45756cu: goto label_45756c;
        case 0x457570u: goto label_457570;
        case 0x457574u: goto label_457574;
        case 0x457578u: goto label_457578;
        case 0x45757cu: goto label_45757c;
        case 0x457580u: goto label_457580;
        case 0x457584u: goto label_457584;
        case 0x457588u: goto label_457588;
        case 0x45758cu: goto label_45758c;
        case 0x457590u: goto label_457590;
        case 0x457594u: goto label_457594;
        case 0x457598u: goto label_457598;
        case 0x45759cu: goto label_45759c;
        case 0x4575a0u: goto label_4575a0;
        case 0x4575a4u: goto label_4575a4;
        case 0x4575a8u: goto label_4575a8;
        case 0x4575acu: goto label_4575ac;
        case 0x4575b0u: goto label_4575b0;
        case 0x4575b4u: goto label_4575b4;
        case 0x4575b8u: goto label_4575b8;
        case 0x4575bcu: goto label_4575bc;
        case 0x4575c0u: goto label_4575c0;
        case 0x4575c4u: goto label_4575c4;
        case 0x4575c8u: goto label_4575c8;
        case 0x4575ccu: goto label_4575cc;
        case 0x4575d0u: goto label_4575d0;
        case 0x4575d4u: goto label_4575d4;
        case 0x4575d8u: goto label_4575d8;
        case 0x4575dcu: goto label_4575dc;
        case 0x4575e0u: goto label_4575e0;
        case 0x4575e4u: goto label_4575e4;
        case 0x4575e8u: goto label_4575e8;
        case 0x4575ecu: goto label_4575ec;
        case 0x4575f0u: goto label_4575f0;
        case 0x4575f4u: goto label_4575f4;
        case 0x4575f8u: goto label_4575f8;
        case 0x4575fcu: goto label_4575fc;
        case 0x457600u: goto label_457600;
        case 0x457604u: goto label_457604;
        case 0x457608u: goto label_457608;
        case 0x45760cu: goto label_45760c;
        case 0x457610u: goto label_457610;
        case 0x457614u: goto label_457614;
        case 0x457618u: goto label_457618;
        case 0x45761cu: goto label_45761c;
        case 0x457620u: goto label_457620;
        case 0x457624u: goto label_457624;
        case 0x457628u: goto label_457628;
        case 0x45762cu: goto label_45762c;
        case 0x457630u: goto label_457630;
        case 0x457634u: goto label_457634;
        case 0x457638u: goto label_457638;
        case 0x45763cu: goto label_45763c;
        case 0x457640u: goto label_457640;
        case 0x457644u: goto label_457644;
        case 0x457648u: goto label_457648;
        case 0x45764cu: goto label_45764c;
        case 0x457650u: goto label_457650;
        case 0x457654u: goto label_457654;
        case 0x457658u: goto label_457658;
        case 0x45765cu: goto label_45765c;
        case 0x457660u: goto label_457660;
        case 0x457664u: goto label_457664;
        case 0x457668u: goto label_457668;
        case 0x45766cu: goto label_45766c;
        case 0x457670u: goto label_457670;
        case 0x457674u: goto label_457674;
        case 0x457678u: goto label_457678;
        case 0x45767cu: goto label_45767c;
        case 0x457680u: goto label_457680;
        case 0x457684u: goto label_457684;
        case 0x457688u: goto label_457688;
        case 0x45768cu: goto label_45768c;
        case 0x457690u: goto label_457690;
        case 0x457694u: goto label_457694;
        case 0x457698u: goto label_457698;
        case 0x45769cu: goto label_45769c;
        case 0x4576a0u: goto label_4576a0;
        case 0x4576a4u: goto label_4576a4;
        case 0x4576a8u: goto label_4576a8;
        case 0x4576acu: goto label_4576ac;
        case 0x4576b0u: goto label_4576b0;
        case 0x4576b4u: goto label_4576b4;
        case 0x4576b8u: goto label_4576b8;
        case 0x4576bcu: goto label_4576bc;
        case 0x4576c0u: goto label_4576c0;
        case 0x4576c4u: goto label_4576c4;
        case 0x4576c8u: goto label_4576c8;
        case 0x4576ccu: goto label_4576cc;
        case 0x4576d0u: goto label_4576d0;
        case 0x4576d4u: goto label_4576d4;
        case 0x4576d8u: goto label_4576d8;
        case 0x4576dcu: goto label_4576dc;
        case 0x4576e0u: goto label_4576e0;
        case 0x4576e4u: goto label_4576e4;
        case 0x4576e8u: goto label_4576e8;
        case 0x4576ecu: goto label_4576ec;
        case 0x4576f0u: goto label_4576f0;
        case 0x4576f4u: goto label_4576f4;
        case 0x4576f8u: goto label_4576f8;
        case 0x4576fcu: goto label_4576fc;
        case 0x457700u: goto label_457700;
        case 0x457704u: goto label_457704;
        case 0x457708u: goto label_457708;
        case 0x45770cu: goto label_45770c;
        case 0x457710u: goto label_457710;
        case 0x457714u: goto label_457714;
        case 0x457718u: goto label_457718;
        case 0x45771cu: goto label_45771c;
        case 0x457720u: goto label_457720;
        case 0x457724u: goto label_457724;
        case 0x457728u: goto label_457728;
        case 0x45772cu: goto label_45772c;
        case 0x457730u: goto label_457730;
        case 0x457734u: goto label_457734;
        case 0x457738u: goto label_457738;
        case 0x45773cu: goto label_45773c;
        case 0x457740u: goto label_457740;
        case 0x457744u: goto label_457744;
        case 0x457748u: goto label_457748;
        case 0x45774cu: goto label_45774c;
        case 0x457750u: goto label_457750;
        case 0x457754u: goto label_457754;
        case 0x457758u: goto label_457758;
        case 0x45775cu: goto label_45775c;
        case 0x457760u: goto label_457760;
        case 0x457764u: goto label_457764;
        case 0x457768u: goto label_457768;
        case 0x45776cu: goto label_45776c;
        case 0x457770u: goto label_457770;
        case 0x457774u: goto label_457774;
        case 0x457778u: goto label_457778;
        case 0x45777cu: goto label_45777c;
        case 0x457780u: goto label_457780;
        case 0x457784u: goto label_457784;
        case 0x457788u: goto label_457788;
        case 0x45778cu: goto label_45778c;
        case 0x457790u: goto label_457790;
        case 0x457794u: goto label_457794;
        case 0x457798u: goto label_457798;
        case 0x45779cu: goto label_45779c;
        case 0x4577a0u: goto label_4577a0;
        case 0x4577a4u: goto label_4577a4;
        case 0x4577a8u: goto label_4577a8;
        case 0x4577acu: goto label_4577ac;
        case 0x4577b0u: goto label_4577b0;
        case 0x4577b4u: goto label_4577b4;
        case 0x4577b8u: goto label_4577b8;
        case 0x4577bcu: goto label_4577bc;
        case 0x4577c0u: goto label_4577c0;
        case 0x4577c4u: goto label_4577c4;
        case 0x4577c8u: goto label_4577c8;
        case 0x4577ccu: goto label_4577cc;
        case 0x4577d0u: goto label_4577d0;
        case 0x4577d4u: goto label_4577d4;
        case 0x4577d8u: goto label_4577d8;
        case 0x4577dcu: goto label_4577dc;
        case 0x4577e0u: goto label_4577e0;
        case 0x4577e4u: goto label_4577e4;
        case 0x4577e8u: goto label_4577e8;
        case 0x4577ecu: goto label_4577ec;
        case 0x4577f0u: goto label_4577f0;
        case 0x4577f4u: goto label_4577f4;
        case 0x4577f8u: goto label_4577f8;
        case 0x4577fcu: goto label_4577fc;
        case 0x457800u: goto label_457800;
        case 0x457804u: goto label_457804;
        case 0x457808u: goto label_457808;
        case 0x45780cu: goto label_45780c;
        case 0x457810u: goto label_457810;
        case 0x457814u: goto label_457814;
        case 0x457818u: goto label_457818;
        case 0x45781cu: goto label_45781c;
        case 0x457820u: goto label_457820;
        case 0x457824u: goto label_457824;
        case 0x457828u: goto label_457828;
        case 0x45782cu: goto label_45782c;
        case 0x457830u: goto label_457830;
        case 0x457834u: goto label_457834;
        case 0x457838u: goto label_457838;
        case 0x45783cu: goto label_45783c;
        case 0x457840u: goto label_457840;
        case 0x457844u: goto label_457844;
        case 0x457848u: goto label_457848;
        case 0x45784cu: goto label_45784c;
        case 0x457850u: goto label_457850;
        case 0x457854u: goto label_457854;
        case 0x457858u: goto label_457858;
        case 0x45785cu: goto label_45785c;
        case 0x457860u: goto label_457860;
        case 0x457864u: goto label_457864;
        case 0x457868u: goto label_457868;
        case 0x45786cu: goto label_45786c;
        case 0x457870u: goto label_457870;
        case 0x457874u: goto label_457874;
        case 0x457878u: goto label_457878;
        case 0x45787cu: goto label_45787c;
        case 0x457880u: goto label_457880;
        case 0x457884u: goto label_457884;
        case 0x457888u: goto label_457888;
        case 0x45788cu: goto label_45788c;
        case 0x457890u: goto label_457890;
        case 0x457894u: goto label_457894;
        case 0x457898u: goto label_457898;
        case 0x45789cu: goto label_45789c;
        case 0x4578a0u: goto label_4578a0;
        case 0x4578a4u: goto label_4578a4;
        case 0x4578a8u: goto label_4578a8;
        case 0x4578acu: goto label_4578ac;
        case 0x4578b0u: goto label_4578b0;
        case 0x4578b4u: goto label_4578b4;
        case 0x4578b8u: goto label_4578b8;
        case 0x4578bcu: goto label_4578bc;
        case 0x4578c0u: goto label_4578c0;
        case 0x4578c4u: goto label_4578c4;
        case 0x4578c8u: goto label_4578c8;
        case 0x4578ccu: goto label_4578cc;
        case 0x4578d0u: goto label_4578d0;
        case 0x4578d4u: goto label_4578d4;
        case 0x4578d8u: goto label_4578d8;
        case 0x4578dcu: goto label_4578dc;
        case 0x4578e0u: goto label_4578e0;
        case 0x4578e4u: goto label_4578e4;
        case 0x4578e8u: goto label_4578e8;
        case 0x4578ecu: goto label_4578ec;
        case 0x4578f0u: goto label_4578f0;
        case 0x4578f4u: goto label_4578f4;
        case 0x4578f8u: goto label_4578f8;
        case 0x4578fcu: goto label_4578fc;
        case 0x457900u: goto label_457900;
        case 0x457904u: goto label_457904;
        case 0x457908u: goto label_457908;
        case 0x45790cu: goto label_45790c;
        case 0x457910u: goto label_457910;
        case 0x457914u: goto label_457914;
        case 0x457918u: goto label_457918;
        case 0x45791cu: goto label_45791c;
        case 0x457920u: goto label_457920;
        case 0x457924u: goto label_457924;
        case 0x457928u: goto label_457928;
        case 0x45792cu: goto label_45792c;
        case 0x457930u: goto label_457930;
        case 0x457934u: goto label_457934;
        case 0x457938u: goto label_457938;
        case 0x45793cu: goto label_45793c;
        case 0x457940u: goto label_457940;
        case 0x457944u: goto label_457944;
        case 0x457948u: goto label_457948;
        case 0x45794cu: goto label_45794c;
        case 0x457950u: goto label_457950;
        case 0x457954u: goto label_457954;
        case 0x457958u: goto label_457958;
        case 0x45795cu: goto label_45795c;
        case 0x457960u: goto label_457960;
        case 0x457964u: goto label_457964;
        case 0x457968u: goto label_457968;
        case 0x45796cu: goto label_45796c;
        case 0x457970u: goto label_457970;
        case 0x457974u: goto label_457974;
        case 0x457978u: goto label_457978;
        case 0x45797cu: goto label_45797c;
        case 0x457980u: goto label_457980;
        case 0x457984u: goto label_457984;
        case 0x457988u: goto label_457988;
        case 0x45798cu: goto label_45798c;
        case 0x457990u: goto label_457990;
        case 0x457994u: goto label_457994;
        case 0x457998u: goto label_457998;
        case 0x45799cu: goto label_45799c;
        case 0x4579a0u: goto label_4579a0;
        case 0x4579a4u: goto label_4579a4;
        case 0x4579a8u: goto label_4579a8;
        case 0x4579acu: goto label_4579ac;
        case 0x4579b0u: goto label_4579b0;
        case 0x4579b4u: goto label_4579b4;
        case 0x4579b8u: goto label_4579b8;
        case 0x4579bcu: goto label_4579bc;
        case 0x4579c0u: goto label_4579c0;
        case 0x4579c4u: goto label_4579c4;
        case 0x4579c8u: goto label_4579c8;
        case 0x4579ccu: goto label_4579cc;
        case 0x4579d0u: goto label_4579d0;
        case 0x4579d4u: goto label_4579d4;
        case 0x4579d8u: goto label_4579d8;
        case 0x4579dcu: goto label_4579dc;
        case 0x4579e0u: goto label_4579e0;
        case 0x4579e4u: goto label_4579e4;
        case 0x4579e8u: goto label_4579e8;
        case 0x4579ecu: goto label_4579ec;
        case 0x4579f0u: goto label_4579f0;
        case 0x4579f4u: goto label_4579f4;
        case 0x4579f8u: goto label_4579f8;
        case 0x4579fcu: goto label_4579fc;
        case 0x457a00u: goto label_457a00;
        case 0x457a04u: goto label_457a04;
        case 0x457a08u: goto label_457a08;
        case 0x457a0cu: goto label_457a0c;
        case 0x457a10u: goto label_457a10;
        case 0x457a14u: goto label_457a14;
        case 0x457a18u: goto label_457a18;
        case 0x457a1cu: goto label_457a1c;
        case 0x457a20u: goto label_457a20;
        case 0x457a24u: goto label_457a24;
        case 0x457a28u: goto label_457a28;
        case 0x457a2cu: goto label_457a2c;
        case 0x457a30u: goto label_457a30;
        case 0x457a34u: goto label_457a34;
        case 0x457a38u: goto label_457a38;
        case 0x457a3cu: goto label_457a3c;
        case 0x457a40u: goto label_457a40;
        case 0x457a44u: goto label_457a44;
        case 0x457a48u: goto label_457a48;
        case 0x457a4cu: goto label_457a4c;
        case 0x457a50u: goto label_457a50;
        case 0x457a54u: goto label_457a54;
        case 0x457a58u: goto label_457a58;
        case 0x457a5cu: goto label_457a5c;
        default: break;
    }

    ctx->pc = 0x457360u;

label_457360:
    // 0x457360: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x457360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_457364:
    // 0x457364: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x457364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_457368:
    // 0x457368: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x457368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_45736c:
    // 0x45736c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x45736cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_457370:
    // 0x457370: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x457370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_457374:
    // 0x457374: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x457374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_457378:
    // 0x457378: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x457378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_45737c:
    // 0x45737c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x45737cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_457380:
    // 0x457380: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x457380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_457384:
    // 0x457384: 0x2672005c  addiu       $s2, $s3, 0x5C
    ctx->pc = 0x457384u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 92));
label_457388:
    // 0x457388: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x457388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_45738c:
    // 0x45738c: 0x8c5089e0  lw          $s0, -0x7620($v0)
    ctx->pc = 0x45738cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_457390:
    // 0x457390: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x457390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_457394:
    // 0x457394: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x457394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_457398:
    // 0x457398: 0x24420444  addiu       $v0, $v0, 0x444
    ctx->pc = 0x457398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1092));
label_45739c:
    // 0x45739c: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x45739cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_4573a0:
    // 0x4573a0: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_4573a4:
    if (ctx->pc == 0x4573A4u) {
        ctx->pc = 0x4573A4u;
            // 0x4573a4: 0xac82005c  sw          $v0, 0x5C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 2));
        ctx->pc = 0x4573A8u;
        goto label_4573a8;
    }
    ctx->pc = 0x4573A0u;
    {
        const bool branch_taken_0x4573a0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x4573A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4573A0u;
            // 0x4573a4: 0xac82005c  sw          $v0, 0x5C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4573a0) {
            ctx->pc = 0x4573B4u;
            goto label_4573b4;
        }
    }
    ctx->pc = 0x4573A8u;
label_4573a8:
    // 0x4573a8: 0x24428000  addiu       $v0, $v0, -0x8000
    ctx->pc = 0x4573a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
label_4573ac:
    // 0x4573ac: 0x24428001  addiu       $v0, $v0, -0x7FFF
    ctx->pc = 0x4573acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934529));
label_4573b0:
    // 0x4573b0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4573b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_4573b4:
    // 0x4573b4: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x4573b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4573b8:
    // 0x4573b8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x4573b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_4573bc:
    // 0x4573bc: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x4573bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4573c0:
    // 0x4573c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4573c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4573c4:
    // 0x4573c4: 0x0  nop
    ctx->pc = 0x4573c4u;
    // NOP
label_4573c8:
    // 0x4573c8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x4573c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_4573cc:
    // 0x4573cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4573ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4573d0:
    // 0x4573d0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_4573d4:
    if (ctx->pc == 0x4573D4u) {
        ctx->pc = 0x4573D4u;
            // 0x4573d4: 0xe6410004  swc1        $f1, 0x4($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->pc = 0x4573D8u;
        goto label_4573d8;
    }
    ctx->pc = 0x4573D0u;
    {
        const bool branch_taken_0x4573d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4573D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4573D0u;
            // 0x4573d4: 0xe6410004  swc1        $f1, 0x4($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4573d0) {
            ctx->pc = 0x4573E0u;
            goto label_4573e0;
        }
    }
    ctx->pc = 0x4573D8u;
label_4573d8:
    // 0x4573d8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4573d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4573dc:
    // 0x4573dc: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x4573dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_4573e0:
    // 0x4573e0: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x4573e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4573e4:
    // 0x4573e4: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x4573e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_4573e8:
    // 0x4573e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4573e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4573ec:
    // 0x4573ec: 0x0  nop
    ctx->pc = 0x4573ecu;
    // NOP
label_4573f0:
    // 0x4573f0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x4573f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4573f4:
    // 0x4573f4: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_4573f8:
    if (ctx->pc == 0x4573F8u) {
        ctx->pc = 0x4573F8u;
            // 0x4573f8: 0x46011001  sub.s       $f0, $f2, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->pc = 0x4573FCu;
        goto label_4573fc;
    }
    ctx->pc = 0x4573F4u;
    {
        const bool branch_taken_0x4573f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4573f4) {
            ctx->pc = 0x4573F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4573F4u;
            // 0x4573f8: 0x46011001  sub.s       $f0, $f2, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x457404u;
            goto label_457404;
        }
    }
    ctx->pc = 0x4573FCu;
label_4573fc:
    // 0x4573fc: 0x10000003  b           . + 4 + (0x3 << 2)
label_457400:
    if (ctx->pc == 0x457400u) {
        ctx->pc = 0x457400u;
            // 0x457400: 0x3c024220  lui         $v0, 0x4220 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
        ctx->pc = 0x457404u;
        goto label_457404;
    }
    ctx->pc = 0x4573FCu;
    {
        const bool branch_taken_0x4573fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x457400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4573FCu;
            // 0x457400: 0x3c024220  lui         $v0, 0x4220 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4573fc) {
            ctx->pc = 0x45740Cu;
            goto label_45740c;
        }
    }
    ctx->pc = 0x457404u;
label_457404:
    // 0x457404: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x457404u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_457408:
    // 0x457408: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x457408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_45740c:
    // 0x45740c: 0x92460014  lbu         $a2, 0x14($s2)
    ctx->pc = 0x45740cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 20)));
label_457410:
    // 0x457410: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x457410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_457414:
    // 0x457414: 0x92440018  lbu         $a0, 0x18($s2)
    ctx->pc = 0x457414u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
label_457418:
    // 0x457418: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x457418u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
label_45741c:
    // 0x45741c: 0x92480015  lbu         $t0, 0x15($s2)
    ctx->pc = 0x45741cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 21)));
label_457420:
    // 0x457420: 0x92430016  lbu         $v1, 0x16($s2)
    ctx->pc = 0x457420u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 22)));
label_457424:
    // 0x457424: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x457424u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_457428:
    // 0x457428: 0x92420017  lbu         $v0, 0x17($s2)
    ctx->pc = 0x457428u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 23)));
label_45742c:
    // 0x45742c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x45742cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_457430:
    // 0x457430: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
label_457434:
    if (ctx->pc == 0x457434u) {
        ctx->pc = 0x457434u;
            // 0x457434: 0x468008e0  cvt.s.w     $f3, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x457438u;
        goto label_457438;
    }
    ctx->pc = 0x457430u;
    {
        const bool branch_taken_0x457430 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x457434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x457430u;
            // 0x457434: 0x468008e0  cvt.s.w     $f3, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x457430) {
            ctx->pc = 0x457444u;
            goto label_457444;
        }
    }
    ctx->pc = 0x457438u;
label_457438:
    // 0x457438: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x457438u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45743c:
    // 0x45743c: 0x10000008  b           . + 4 + (0x8 << 2)
label_457440:
    if (ctx->pc == 0x457440u) {
        ctx->pc = 0x457440u;
            // 0x457440: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x457444u;
        goto label_457444;
    }
    ctx->pc = 0x45743Cu;
    {
        const bool branch_taken_0x45743c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x457440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45743Cu;
            // 0x457440: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x45743c) {
            ctx->pc = 0x457460u;
            goto label_457460;
        }
    }
    ctx->pc = 0x457444u;
label_457444:
    // 0x457444: 0x62842  srl         $a1, $a2, 1
    ctx->pc = 0x457444u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
label_457448:
    // 0x457448: 0x30c40001  andi        $a0, $a2, 0x1
    ctx->pc = 0x457448u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_45744c:
    // 0x45744c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x45744cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_457450:
    // 0x457450: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x457450u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_457454:
    // 0x457454: 0x0  nop
    ctx->pc = 0x457454u;
    // NOP
label_457458:
    // 0x457458: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x457458u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_45745c:
    // 0x45745c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x45745cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_457460:
    // 0x457460: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x457460u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_457464:
    // 0x457464: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x457464u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
label_457468:
    // 0x457468: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x457468u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_45746c:
    // 0x45746c: 0x4603009c  madd.s      $f2, $f0, $f3
    ctx->pc = 0x45746cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[3]));
label_457470:
    // 0x457470: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x457470u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_457474:
    // 0x457474: 0x0  nop
    ctx->pc = 0x457474u;
    // NOP
label_457478:
    // 0x457478: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x457478u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_45747c:
    // 0x45747c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_457480:
    if (ctx->pc == 0x457480u) {
        ctx->pc = 0x457480u;
            // 0x457480: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->pc = 0x457484u;
        goto label_457484;
    }
    ctx->pc = 0x45747Cu;
    {
        const bool branch_taken_0x45747c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x45747c) {
            ctx->pc = 0x457480u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45747Cu;
            // 0x457480: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x457494u;
            goto label_457494;
        }
    }
    ctx->pc = 0x457484u;
label_457484:
    // 0x457484: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x457484u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_457488:
    // 0x457488: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x457488u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_45748c:
    // 0x45748c: 0x10000007  b           . + 4 + (0x7 << 2)
label_457490:
    if (ctx->pc == 0x457490u) {
        ctx->pc = 0x457490u;
            // 0x457490: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x457494u;
        goto label_457494;
    }
    ctx->pc = 0x45748Cu;
    {
        const bool branch_taken_0x45748c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x457490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45748Cu;
            // 0x457490: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x45748c) {
            ctx->pc = 0x4574ACu;
            goto label_4574ac;
        }
    }
    ctx->pc = 0x457494u;
label_457494:
    // 0x457494: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x457494u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_457498:
    // 0x457498: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x457498u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_45749c:
    // 0x45749c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x45749cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_4574a0:
    // 0x4574a0: 0x0  nop
    ctx->pc = 0x4574a0u;
    // NOP
label_4574a4:
    // 0x4574a4: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x4574a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_4574a8:
    // 0x4574a8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x4574a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_4574ac:
    // 0x4574ac: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x4574acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_4574b0:
    // 0x4574b0: 0x92450019  lbu         $a1, 0x19($s2)
    ctx->pc = 0x4574b0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 25)));
label_4574b4:
    // 0x4574b4: 0x43e00  sll         $a3, $a0, 24
    ctx->pc = 0x4574b4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_4574b8:
    // 0x4574b8: 0x310400ff  andi        $a0, $t0, 0xFF
    ctx->pc = 0x4574b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_4574bc:
    // 0x4574bc: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x4574bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_4574c0:
    // 0x4574c0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x4574c0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4574c4:
    // 0x4574c4: 0x5000004  bltz        $t0, . + 4 + (0x4 << 2)
label_4574c8:
    if (ctx->pc == 0x4574C8u) {
        ctx->pc = 0x4574C8u;
            // 0x4574c8: 0x468008e0  cvt.s.w     $f3, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4574CCu;
        goto label_4574cc;
    }
    ctx->pc = 0x4574C4u;
    {
        const bool branch_taken_0x4574c4 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x4574C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4574C4u;
            // 0x4574c8: 0x468008e0  cvt.s.w     $f3, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4574c4) {
            ctx->pc = 0x4574D8u;
            goto label_4574d8;
        }
    }
    ctx->pc = 0x4574CCu;
label_4574cc:
    // 0x4574cc: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x4574ccu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4574d0:
    // 0x4574d0: 0x10000008  b           . + 4 + (0x8 << 2)
label_4574d4:
    if (ctx->pc == 0x4574D4u) {
        ctx->pc = 0x4574D4u;
            // 0x4574d4: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4574D8u;
        goto label_4574d8;
    }
    ctx->pc = 0x4574D0u;
    {
        const bool branch_taken_0x4574d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4574D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4574D0u;
            // 0x4574d4: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4574d0) {
            ctx->pc = 0x4574F4u;
            goto label_4574f4;
        }
    }
    ctx->pc = 0x4574D8u;
label_4574d8:
    // 0x4574d8: 0x82842  srl         $a1, $t0, 1
    ctx->pc = 0x4574d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
label_4574dc:
    // 0x4574dc: 0x31040001  andi        $a0, $t0, 0x1
    ctx->pc = 0x4574dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
label_4574e0:
    // 0x4574e0: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x4574e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_4574e4:
    // 0x4574e4: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x4574e4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4574e8:
    // 0x4574e8: 0x0  nop
    ctx->pc = 0x4574e8u;
    // NOP
label_4574ec:
    // 0x4574ec: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x4574ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_4574f0:
    // 0x4574f0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x4574f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_4574f4:
    // 0x4574f4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4574f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4574f8:
    // 0x4574f8: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x4574f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
label_4574fc:
    // 0x4574fc: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x4574fcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_457500:
    // 0x457500: 0x4603009c  madd.s      $f2, $f0, $f3
    ctx->pc = 0x457500u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[3]));
label_457504:
    // 0x457504: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x457504u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_457508:
    // 0x457508: 0x0  nop
    ctx->pc = 0x457508u;
    // NOP
label_45750c:
    // 0x45750c: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x45750cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_457510:
    // 0x457510: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_457514:
    if (ctx->pc == 0x457514u) {
        ctx->pc = 0x457514u;
            // 0x457514: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->pc = 0x457518u;
        goto label_457518;
    }
    ctx->pc = 0x457510u;
    {
        const bool branch_taken_0x457510 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x457510) {
            ctx->pc = 0x457514u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x457510u;
            // 0x457514: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x457528u;
            goto label_457528;
        }
    }
    ctx->pc = 0x457518u;
label_457518:
    // 0x457518: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x457518u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_45751c:
    // 0x45751c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x45751cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_457520:
    // 0x457520: 0x10000007  b           . + 4 + (0x7 << 2)
label_457524:
    if (ctx->pc == 0x457524u) {
        ctx->pc = 0x457524u;
            // 0x457524: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x457528u;
        goto label_457528;
    }
    ctx->pc = 0x457520u;
    {
        const bool branch_taken_0x457520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x457524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x457520u;
            // 0x457524: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x457520) {
            ctx->pc = 0x457540u;
            goto label_457540;
        }
    }
    ctx->pc = 0x457528u;
label_457528:
    // 0x457528: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x457528u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_45752c:
    // 0x45752c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x45752cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_457530:
    // 0x457530: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x457530u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_457534:
    // 0x457534: 0x0  nop
    ctx->pc = 0x457534u;
    // NOP
label_457538:
    // 0x457538: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x457538u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_45753c:
    // 0x45753c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x45753cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_457540:
    // 0x457540: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x457540u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_457544:
    // 0x457544: 0x9245001a  lbu         $a1, 0x1A($s2)
    ctx->pc = 0x457544u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 26)));
label_457548:
    // 0x457548: 0x43400  sll         $a2, $a0, 16
    ctx->pc = 0x457548u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_45754c:
    // 0x45754c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x45754cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_457550:
    // 0x457550: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x457550u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
label_457554:
    // 0x457554: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x457554u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_457558:
    // 0x457558: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x457558u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45755c:
    // 0x45755c: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_457560:
    if (ctx->pc == 0x457560u) {
        ctx->pc = 0x457560u;
            // 0x457560: 0x468008e0  cvt.s.w     $f3, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x457564u;
        goto label_457564;
    }
    ctx->pc = 0x45755Cu;
    {
        const bool branch_taken_0x45755c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x457560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45755Cu;
            // 0x457560: 0x468008e0  cvt.s.w     $f3, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x45755c) {
            ctx->pc = 0x457570u;
            goto label_457570;
        }
    }
    ctx->pc = 0x457564u;
label_457564:
    // 0x457564: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x457564u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_457568:
    // 0x457568: 0x10000008  b           . + 4 + (0x8 << 2)
label_45756c:
    if (ctx->pc == 0x45756Cu) {
        ctx->pc = 0x45756Cu;
            // 0x45756c: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x457570u;
        goto label_457570;
    }
    ctx->pc = 0x457568u;
    {
        const bool branch_taken_0x457568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45756Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x457568u;
            // 0x45756c: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x457568) {
            ctx->pc = 0x45758Cu;
            goto label_45758c;
        }
    }
    ctx->pc = 0x457570u;
label_457570:
    // 0x457570: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x457570u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_457574:
    // 0x457574: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x457574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_457578:
    // 0x457578: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x457578u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_45757c:
    // 0x45757c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x45757cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_457580:
    // 0x457580: 0x0  nop
    ctx->pc = 0x457580u;
    // NOP
label_457584:
    // 0x457584: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x457584u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_457588:
    // 0x457588: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x457588u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_45758c:
    // 0x45758c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x45758cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_457590:
    // 0x457590: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x457590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_457594:
    // 0x457594: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x457594u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_457598:
    // 0x457598: 0x4603009c  madd.s      $f2, $f0, $f3
    ctx->pc = 0x457598u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[3]));
label_45759c:
    // 0x45759c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x45759cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4575a0:
    // 0x4575a0: 0x0  nop
    ctx->pc = 0x4575a0u;
    // NOP
label_4575a4:
    // 0x4575a4: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x4575a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4575a8:
    // 0x4575a8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_4575ac:
    if (ctx->pc == 0x4575ACu) {
        ctx->pc = 0x4575ACu;
            // 0x4575ac: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->pc = 0x4575B0u;
        goto label_4575b0;
    }
    ctx->pc = 0x4575A8u;
    {
        const bool branch_taken_0x4575a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4575a8) {
            ctx->pc = 0x4575ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4575A8u;
            // 0x4575ac: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4575C0u;
            goto label_4575c0;
        }
    }
    ctx->pc = 0x4575B0u;
label_4575b0:
    // 0x4575b0: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4575b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_4575b4:
    // 0x4575b4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x4575b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_4575b8:
    // 0x4575b8: 0x10000007  b           . + 4 + (0x7 << 2)
label_4575bc:
    if (ctx->pc == 0x4575BCu) {
        ctx->pc = 0x4575BCu;
            // 0x4575bc: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x4575C0u;
        goto label_4575c0;
    }
    ctx->pc = 0x4575B8u;
    {
        const bool branch_taken_0x4575b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4575BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4575B8u;
            // 0x4575bc: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4575b8) {
            ctx->pc = 0x4575D8u;
            goto label_4575d8;
        }
    }
    ctx->pc = 0x4575C0u;
label_4575c0:
    // 0x4575c0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x4575c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_4575c4:
    // 0x4575c4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4575c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_4575c8:
    // 0x4575c8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x4575c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_4575cc:
    // 0x4575cc: 0x0  nop
    ctx->pc = 0x4575ccu;
    // NOP
label_4575d0:
    // 0x4575d0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4575d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4575d4:
    // 0x4575d4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x4575d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_4575d8:
    // 0x4575d8: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x4575d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_4575dc:
    // 0x4575dc: 0x9244001b  lbu         $a0, 0x1B($s2)
    ctx->pc = 0x4575dcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 27)));
label_4575e0:
    // 0x4575e0: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x4575e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_4575e4:
    // 0x4575e4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x4575e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4575e8:
    // 0x4575e8: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x4575e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_4575ec:
    // 0x4575ec: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x4575ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_4575f0:
    // 0x4575f0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4575f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4575f4:
    // 0x4575f4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_4575f8:
    if (ctx->pc == 0x4575F8u) {
        ctx->pc = 0x4575F8u;
            // 0x4575f8: 0x468008e0  cvt.s.w     $f3, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4575FCu;
        goto label_4575fc;
    }
    ctx->pc = 0x4575F4u;
    {
        const bool branch_taken_0x4575f4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4575F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4575F4u;
            // 0x4575f8: 0x468008e0  cvt.s.w     $f3, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4575f4) {
            ctx->pc = 0x457608u;
            goto label_457608;
        }
    }
    ctx->pc = 0x4575FCu;
label_4575fc:
    // 0x4575fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4575fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_457600:
    // 0x457600: 0x10000008  b           . + 4 + (0x8 << 2)
label_457604:
    if (ctx->pc == 0x457604u) {
        ctx->pc = 0x457604u;
            // 0x457604: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x457608u;
        goto label_457608;
    }
    ctx->pc = 0x457600u;
    {
        const bool branch_taken_0x457600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x457604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x457600u;
            // 0x457604: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x457600) {
            ctx->pc = 0x457624u;
            goto label_457624;
        }
    }
    ctx->pc = 0x457608u;
label_457608:
    // 0x457608: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x457608u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_45760c:
    // 0x45760c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x45760cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_457610:
    // 0x457610: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x457610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_457614:
    // 0x457614: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x457614u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_457618:
    // 0x457618: 0x0  nop
    ctx->pc = 0x457618u;
    // NOP
label_45761c:
    // 0x45761c: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x45761cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_457620:
    // 0x457620: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x457620u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_457624:
    // 0x457624: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x457624u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_457628:
    // 0x457628: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x457628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_45762c:
    // 0x45762c: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x45762cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_457630:
    // 0x457630: 0x4603005c  madd.s      $f1, $f0, $f3
    ctx->pc = 0x457630u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[3]));
label_457634:
    // 0x457634: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x457634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_457638:
    // 0x457638: 0x0  nop
    ctx->pc = 0x457638u;
    // NOP
label_45763c:
    // 0x45763c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x45763cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_457640:
    // 0x457640: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_457644:
    if (ctx->pc == 0x457644u) {
        ctx->pc = 0x457644u;
            // 0x457644: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x457648u;
        goto label_457648;
    }
    ctx->pc = 0x457640u;
    {
        const bool branch_taken_0x457640 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x457640) {
            ctx->pc = 0x457644u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x457640u;
            // 0x457644: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x457658u;
            goto label_457658;
        }
    }
    ctx->pc = 0x457648u;
label_457648:
    // 0x457648: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x457648u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_45764c:
    // 0x45764c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x45764cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_457650:
    // 0x457650: 0x10000007  b           . + 4 + (0x7 << 2)
label_457654:
    if (ctx->pc == 0x457654u) {
        ctx->pc = 0x457654u;
            // 0x457654: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x457658u;
        goto label_457658;
    }
    ctx->pc = 0x457650u;
    {
        const bool branch_taken_0x457650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x457654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x457650u;
            // 0x457654: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x457650) {
            ctx->pc = 0x457670u;
            goto label_457670;
        }
    }
    ctx->pc = 0x457658u;
label_457658:
    // 0x457658: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x457658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_45765c:
    // 0x45765c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x45765cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_457660:
    // 0x457660: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x457660u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_457664:
    // 0x457664: 0x0  nop
    ctx->pc = 0x457664u;
    // NOP
label_457668:
    // 0x457668: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x457668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_45766c:
    // 0x45766c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x45766cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_457670:
    // 0x457670: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x457670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_457674:
    // 0x457674: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x457674u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_457678:
    // 0x457678: 0x458825  or          $s1, $v0, $a1
    ctx->pc = 0x457678u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_45767c:
    // 0x45767c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x45767cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_457680:
    // 0x457680: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x457680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_457684:
    // 0x457684: 0xc04f380  jal         func_13CE00
label_457688:
    if (ctx->pc == 0x457688u) {
        ctx->pc = 0x457688u;
            // 0x457688: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45768Cu;
        goto label_45768c;
    }
    ctx->pc = 0x457684u;
    SET_GPR_U32(ctx, 31, 0x45768Cu);
    ctx->pc = 0x457688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x457684u;
            // 0x457688: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CE00u;
    if (runtime->hasFunction(0x13CE00u)) {
        auto targetFn = runtime->lookupFunction(0x13CE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45768Cu; }
        if (ctx->pc != 0x45768Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CE00_0x13ce00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45768Cu; }
        if (ctx->pc != 0x45768Cu) { return; }
    }
    ctx->pc = 0x45768Cu;
label_45768c:
    // 0x45768c: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x45768cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_457690:
    // 0x457690: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x457690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_457694:
    // 0x457694: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x457694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_457698:
    // 0x457698: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x457698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45769c:
    // 0x45769c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x45769cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_4576a0:
    // 0x4576a0: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x4576a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
label_4576a4:
    // 0x4576a4: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x4576a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_4576a8:
    // 0x4576a8: 0x8c44012c  lw          $a0, 0x12C($v0)
    ctx->pc = 0x4576a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_4576ac:
    // 0x4576ac: 0xc0506ac  jal         func_141AB0
label_4576b0:
    if (ctx->pc == 0x4576B0u) {
        ctx->pc = 0x4576B0u;
            // 0x4576b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4576B4u;
        goto label_4576b4;
    }
    ctx->pc = 0x4576ACu;
    SET_GPR_U32(ctx, 31, 0x4576B4u);
    ctx->pc = 0x4576B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4576ACu;
            // 0x4576b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4576B4u; }
        if (ctx->pc != 0x4576B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4576B4u; }
        if (ctx->pc != 0x4576B4u) { return; }
    }
    ctx->pc = 0x4576B4u;
label_4576b4:
    // 0x4576b4: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x4576b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4576b8:
    // 0x4576b8: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x4576b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4576bc:
    // 0x4576bc: 0x86530008  lh          $s3, 0x8($s2)
    ctx->pc = 0x4576bcu;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
label_4576c0:
    // 0x4576c0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4576c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4576c4:
    // 0x4576c4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x4576c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_4576c8:
    // 0x4576c8: 0x320f809  jalr        $t9
label_4576cc:
    if (ctx->pc == 0x4576CCu) {
        ctx->pc = 0x4576CCu;
            // 0x4576cc: 0x139023  negu        $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
        ctx->pc = 0x4576D0u;
        goto label_4576d0;
    }
    ctx->pc = 0x4576C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4576D0u);
        ctx->pc = 0x4576CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4576C8u;
            // 0x4576cc: 0x139023  negu        $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4576D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4576D0u; }
            if (ctx->pc != 0x4576D0u) { return; }
        }
        }
    }
    ctx->pc = 0x4576D0u;
label_4576d0:
    // 0x4576d0: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x4576d0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4576d4:
    // 0x4576d4: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x4576d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4576d8:
    // 0x4576d8: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x4576d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_4576dc:
    // 0x4576dc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4576dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4576e0:
    // 0x4576e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4576e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4576e4:
    // 0x4576e4: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x4576e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4576e8:
    // 0x4576e8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x4576e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_4576ec:
    // 0x4576ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4576ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4576f0:
    // 0x4576f0: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x4576f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4576f4:
    // 0x4576f4: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x4576f4u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4576f8:
    // 0x4576f8: 0x0  nop
    ctx->pc = 0x4576f8u;
    // NOP
label_4576fc:
    // 0x4576fc: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x4576fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_457700:
    // 0x457700: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x457700u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_457704:
    // 0x457704: 0x44828000  mtc1        $v0, $f16
    ctx->pc = 0x457704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_457708:
    // 0x457708: 0x320f809  jalr        $t9
label_45770c:
    if (ctx->pc == 0x45770Cu) {
        ctx->pc = 0x45770Cu;
            // 0x45770c: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[14]);
        ctx->pc = 0x457710u;
        goto label_457710;
    }
    ctx->pc = 0x457708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x457710u);
        ctx->pc = 0x45770Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x457708u;
            // 0x45770c: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x457710u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x457710u; }
            if (ctx->pc != 0x457710u) { return; }
        }
        }
    }
    ctx->pc = 0x457710u;
label_457710:
    // 0x457710: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x457710u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_457714:
    // 0x457714: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x457714u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_457718:
    // 0x457718: 0x320f809  jalr        $t9
label_45771c:
    if (ctx->pc == 0x45771Cu) {
        ctx->pc = 0x45771Cu;
            // 0x45771c: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x457720u;
        goto label_457720;
    }
    ctx->pc = 0x457718u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x457720u);
        ctx->pc = 0x45771Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x457718u;
            // 0x45771c: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x457720u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x457720u; }
            if (ctx->pc != 0x457720u) { return; }
        }
        }
    }
    ctx->pc = 0x457720u;
label_457720:
    // 0x457720: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x457720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_457724:
    // 0x457724: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x457724u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_457728:
    // 0x457728: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x457728u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_45772c:
    // 0x45772c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45772cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_457730:
    // 0x457730: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x457730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_457734:
    // 0x457734: 0x3e00008  jr          $ra
label_457738:
    if (ctx->pc == 0x457738u) {
        ctx->pc = 0x457738u;
            // 0x457738: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x45773Cu;
        goto label_45773c;
    }
    ctx->pc = 0x457734u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x457738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x457734u;
            // 0x457738: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x45773Cu;
label_45773c:
    // 0x45773c: 0x0  nop
    ctx->pc = 0x45773cu;
    // NOP
label_457740:
    // 0x457740: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x457740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_457744:
    // 0x457744: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x457744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_457748:
    // 0x457748: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x457748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_45774c:
    // 0x45774c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x45774cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_457750:
    // 0x457750: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x457750u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_457754:
    // 0x457754: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x457754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_457758:
    // 0x457758: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x457758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_45775c:
    // 0x45775c: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x45775cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_457760:
    // 0x457760: 0xc0c9a58  jal         func_326960
label_457764:
    if (ctx->pc == 0x457764u) {
        ctx->pc = 0x457764u;
            // 0x457764: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x457768u;
        goto label_457768;
    }
    ctx->pc = 0x457760u;
    SET_GPR_U32(ctx, 31, 0x457768u);
    ctx->pc = 0x457764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x457760u;
            // 0x457764: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457768u; }
        if (ctx->pc != 0x457768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457768u; }
        if (ctx->pc != 0x457768u) { return; }
    }
    ctx->pc = 0x457768u;
label_457768:
    // 0x457768: 0x92640010  lbu         $a0, 0x10($s3)
    ctx->pc = 0x457768u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 16)));
label_45776c:
    // 0x45776c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x45776cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_457770:
    // 0x457770: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x457770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_457774:
    // 0x457774: 0x1083003e  beq         $a0, $v1, . + 4 + (0x3E << 2)
label_457778:
    if (ctx->pc == 0x457778u) {
        ctx->pc = 0x457778u;
            // 0x457778: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45777Cu;
        goto label_45777c;
    }
    ctx->pc = 0x457774u;
    {
        const bool branch_taken_0x457774 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x457778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x457774u;
            // 0x457778: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x457774) {
            ctx->pc = 0x457870u;
            goto label_457870;
        }
    }
    ctx->pc = 0x45777Cu;
label_45777c:
    // 0x45777c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x45777cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_457780:
    // 0x457780: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_457784:
    if (ctx->pc == 0x457784u) {
        ctx->pc = 0x457788u;
        goto label_457788;
    }
    ctx->pc = 0x457780u;
    {
        const bool branch_taken_0x457780 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x457780) {
            ctx->pc = 0x457790u;
            goto label_457790;
        }
    }
    ctx->pc = 0x457788u;
label_457788:
    // 0x457788: 0x100000af  b           . + 4 + (0xAF << 2)
label_45778c:
    if (ctx->pc == 0x45778Cu) {
        ctx->pc = 0x45778Cu;
            // 0x45778c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x457790u;
        goto label_457790;
    }
    ctx->pc = 0x457788u;
    {
        const bool branch_taken_0x457788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45778Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x457788u;
            // 0x45778c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x457788) {
            ctx->pc = 0x457A48u;
            goto label_457a48;
        }
    }
    ctx->pc = 0x457790u;
label_457790:
    // 0x457790: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x457790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_457794:
    // 0x457794: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x457794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_457798:
    // 0x457798: 0xc05ccc0  jal         func_173300
label_45779c:
    if (ctx->pc == 0x45779Cu) {
        ctx->pc = 0x45779Cu;
            // 0x45779c: 0x8c440188  lw          $a0, 0x188($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 392)));
        ctx->pc = 0x4577A0u;
        goto label_4577a0;
    }
    ctx->pc = 0x457798u;
    SET_GPR_U32(ctx, 31, 0x4577A0u);
    ctx->pc = 0x45779Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x457798u;
            // 0x45779c: 0x8c440188  lw          $a0, 0x188($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 392)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173300u;
    if (runtime->hasFunction(0x173300u)) {
        auto targetFn = runtime->lookupFunction(0x173300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4577A0u; }
        if (ctx->pc != 0x4577A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173300_0x173300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4577A0u; }
        if (ctx->pc != 0x4577A0u) { return; }
    }
    ctx->pc = 0x4577A0u;
label_4577a0:
    // 0x4577a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4577a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4577a4:
    // 0x4577a4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4577a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4577a8:
    // 0x4577a8: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x4577a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_4577ac:
    // 0x4577ac: 0xc05ccc0  jal         func_173300
label_4577b0:
    if (ctx->pc == 0x4577B0u) {
        ctx->pc = 0x4577B0u;
            // 0x4577b0: 0x8c44018c  lw          $a0, 0x18C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 396)));
        ctx->pc = 0x4577B4u;
        goto label_4577b4;
    }
    ctx->pc = 0x4577ACu;
    SET_GPR_U32(ctx, 31, 0x4577B4u);
    ctx->pc = 0x4577B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4577ACu;
            // 0x4577b0: 0x8c44018c  lw          $a0, 0x18C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 396)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173300u;
    if (runtime->hasFunction(0x173300u)) {
        auto targetFn = runtime->lookupFunction(0x173300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4577B4u; }
        if (ctx->pc != 0x4577B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173300_0x173300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4577B4u; }
        if (ctx->pc != 0x4577B4u) { return; }
    }
    ctx->pc = 0x4577B4u;
label_4577b4:
    // 0x4577b4: 0x2e430003  sltiu       $v1, $s2, 0x3
    ctx->pc = 0x4577b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_4577b8:
    // 0x4577b8: 0x146000a2  bnez        $v1, . + 4 + (0xA2 << 2)
label_4577bc:
    if (ctx->pc == 0x4577BCu) {
        ctx->pc = 0x4577C0u;
        goto label_4577c0;
    }
    ctx->pc = 0x4577B8u;
    {
        const bool branch_taken_0x4577b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4577b8) {
            ctx->pc = 0x457A44u;
            goto label_457a44;
        }
    }
    ctx->pc = 0x4577C0u;
label_4577c0:
    // 0x4577c0: 0x2c430003  sltiu       $v1, $v0, 0x3
    ctx->pc = 0x4577c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_4577c4:
    // 0x4577c4: 0x1460009f  bnez        $v1, . + 4 + (0x9F << 2)
label_4577c8:
    if (ctx->pc == 0x4577C8u) {
        ctx->pc = 0x4577CCu;
        goto label_4577cc;
    }
    ctx->pc = 0x4577C4u;
    {
        const bool branch_taken_0x4577c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4577c4) {
            ctx->pc = 0x457A44u;
            goto label_457a44;
        }
    }
    ctx->pc = 0x4577CCu;
label_4577cc:
    // 0x4577cc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4577ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4577d0:
    // 0x4577d0: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x4577d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_4577d4:
    // 0x4577d4: 0x90420092  lbu         $v0, 0x92($v0)
    ctx->pc = 0x4577d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 146)));
label_4577d8:
    // 0x4577d8: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
label_4577dc:
    if (ctx->pc == 0x4577DCu) {
        ctx->pc = 0x4577DCu;
            // 0x4577dc: 0x8e790000  lw          $t9, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x4577E0u;
        goto label_4577e0;
    }
    ctx->pc = 0x4577D8u;
    {
        const bool branch_taken_0x4577d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4577d8) {
            ctx->pc = 0x4577DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4577D8u;
            // 0x4577dc: 0x8e790000  lw          $t9, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x457864u;
            goto label_457864;
        }
    }
    ctx->pc = 0x4577E0u;
label_4577e0:
    // 0x4577e0: 0x8e630054  lw          $v1, 0x54($s3)
    ctx->pc = 0x4577e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_4577e4:
    // 0x4577e4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4577e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4577e8:
    // 0x4577e8: 0x8c630154  lw          $v1, 0x154($v1)
    ctx->pc = 0x4577e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
label_4577ec:
    // 0x4577ec: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_4577f0:
    if (ctx->pc == 0x4577F0u) {
        ctx->pc = 0x4577F4u;
        goto label_4577f4;
    }
    ctx->pc = 0x4577ECu;
    {
        const bool branch_taken_0x4577ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4577ec) {
            ctx->pc = 0x457820u;
            goto label_457820;
        }
    }
    ctx->pc = 0x4577F4u;
label_4577f4:
    // 0x4577f4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4577f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4577f8:
    // 0x4577f8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_4577fc:
    if (ctx->pc == 0x4577FCu) {
        ctx->pc = 0x457800u;
        goto label_457800;
    }
    ctx->pc = 0x4577F8u;
    {
        const bool branch_taken_0x4577f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4577f8) {
            ctx->pc = 0x457820u;
            goto label_457820;
        }
    }
    ctx->pc = 0x457800u;
label_457800:
    // 0x457800: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x457800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_457804:
    // 0x457804: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_457808:
    if (ctx->pc == 0x457808u) {
        ctx->pc = 0x45780Cu;
        goto label_45780c;
    }
    ctx->pc = 0x457804u;
    {
        const bool branch_taken_0x457804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x457804) {
            ctx->pc = 0x457820u;
            goto label_457820;
        }
    }
    ctx->pc = 0x45780Cu;
label_45780c:
    // 0x45780c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45780cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_457810:
    // 0x457810: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_457814:
    if (ctx->pc == 0x457814u) {
        ctx->pc = 0x457818u;
        goto label_457818;
    }
    ctx->pc = 0x457810u;
    {
        const bool branch_taken_0x457810 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x457810) {
            ctx->pc = 0x457820u;
            goto label_457820;
        }
    }
    ctx->pc = 0x457818u;
label_457818:
    // 0x457818: 0x1000000d  b           . + 4 + (0xD << 2)
label_45781c:
    if (ctx->pc == 0x45781Cu) {
        ctx->pc = 0x45781Cu;
            // 0x45781c: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->pc = 0x457820u;
        goto label_457820;
    }
    ctx->pc = 0x457818u;
    {
        const bool branch_taken_0x457818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45781Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x457818u;
            // 0x45781c: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x457818) {
            ctx->pc = 0x457850u;
            goto label_457850;
        }
    }
    ctx->pc = 0x457820u;
label_457820:
    // 0x457820: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x457820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_457824:
    // 0x457824: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x457824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_457828:
    // 0x457828: 0x8c440188  lw          $a0, 0x188($v0)
    ctx->pc = 0x457828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 392)));
label_45782c:
    // 0x45782c: 0xc05d416  jal         func_175058
label_457830:
    if (ctx->pc == 0x457830u) {
        ctx->pc = 0x457830u;
            // 0x457830: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x457834u;
        goto label_457834;
    }
    ctx->pc = 0x45782Cu;
    SET_GPR_U32(ctx, 31, 0x457834u);
    ctx->pc = 0x457830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45782Cu;
            // 0x457830: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175058u;
    if (runtime->hasFunction(0x175058u)) {
        auto targetFn = runtime->lookupFunction(0x175058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457834u; }
        if (ctx->pc != 0x457834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175058_0x175058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457834u; }
        if (ctx->pc != 0x457834u) { return; }
    }
    ctx->pc = 0x457834u;
label_457834:
    // 0x457834: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x457834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_457838:
    // 0x457838: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x457838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_45783c:
    // 0x45783c: 0x8c44018c  lw          $a0, 0x18C($v0)
    ctx->pc = 0x45783cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 396)));
label_457840:
    // 0x457840: 0xc05d416  jal         func_175058
label_457844:
    if (ctx->pc == 0x457844u) {
        ctx->pc = 0x457844u;
            // 0x457844: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x457848u;
        goto label_457848;
    }
    ctx->pc = 0x457840u;
    SET_GPR_U32(ctx, 31, 0x457848u);
    ctx->pc = 0x457844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x457840u;
            // 0x457844: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175058u;
    if (runtime->hasFunction(0x175058u)) {
        auto targetFn = runtime->lookupFunction(0x175058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457848u; }
        if (ctx->pc != 0x457848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175058_0x175058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457848u; }
        if (ctx->pc != 0x457848u) { return; }
    }
    ctx->pc = 0x457848u;
label_457848:
    // 0x457848: 0x10000005  b           . + 4 + (0x5 << 2)
label_45784c:
    if (ctx->pc == 0x45784Cu) {
        ctx->pc = 0x457850u;
        goto label_457850;
    }
    ctx->pc = 0x457848u;
    {
        const bool branch_taken_0x457848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x457848) {
            ctx->pc = 0x457860u;
            goto label_457860;
        }
    }
    ctx->pc = 0x457850u;
label_457850:
    // 0x457850: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x457850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_457854:
    // 0x457854: 0x8c440188  lw          $a0, 0x188($v0)
    ctx->pc = 0x457854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 392)));
label_457858:
    // 0x457858: 0xc05d416  jal         func_175058
label_45785c:
    if (ctx->pc == 0x45785Cu) {
        ctx->pc = 0x45785Cu;
            // 0x45785c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x457860u;
        goto label_457860;
    }
    ctx->pc = 0x457858u;
    SET_GPR_U32(ctx, 31, 0x457860u);
    ctx->pc = 0x45785Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x457858u;
            // 0x45785c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175058u;
    if (runtime->hasFunction(0x175058u)) {
        auto targetFn = runtime->lookupFunction(0x175058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457860u; }
        if (ctx->pc != 0x457860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175058_0x175058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457860u; }
        if (ctx->pc != 0x457860u) { return; }
    }
    ctx->pc = 0x457860u;
label_457860:
    // 0x457860: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x457860u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_457864:
    // 0x457864: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x457864u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_457868:
    // 0x457868: 0x320f809  jalr        $t9
label_45786c:
    if (ctx->pc == 0x45786Cu) {
        ctx->pc = 0x45786Cu;
            // 0x45786c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x457870u;
        goto label_457870;
    }
    ctx->pc = 0x457868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x457870u);
        ctx->pc = 0x45786Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x457868u;
            // 0x45786c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x457870u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x457870u; }
            if (ctx->pc != 0x457870u) { return; }
        }
        }
    }
    ctx->pc = 0x457870u;
label_457870:
    // 0x457870: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x457870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_457874:
    // 0x457874: 0xc0b8cbc  jal         func_2E32F0
label_457878:
    if (ctx->pc == 0x457878u) {
        ctx->pc = 0x457878u;
            // 0x457878: 0x8c4489d0  lw          $a0, -0x7630($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
        ctx->pc = 0x45787Cu;
        goto label_45787c;
    }
    ctx->pc = 0x457874u;
    SET_GPR_U32(ctx, 31, 0x45787Cu);
    ctx->pc = 0x457878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x457874u;
            // 0x457878: 0x8c4489d0  lw          $a0, -0x7630($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32F0u;
    if (runtime->hasFunction(0x2E32F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45787Cu; }
        if (ctx->pc != 0x45787Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E32F0_0x2e32f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45787Cu; }
        if (ctx->pc != 0x45787Cu) { return; }
    }
    ctx->pc = 0x45787Cu;
label_45787c:
    // 0x45787c: 0x8e640054  lw          $a0, 0x54($s3)
    ctx->pc = 0x45787cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_457880:
    // 0x457880: 0xc0c9a58  jal         func_326960
label_457884:
    if (ctx->pc == 0x457884u) {
        ctx->pc = 0x457884u;
            // 0x457884: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x457888u;
        goto label_457888;
    }
    ctx->pc = 0x457880u;
    SET_GPR_U32(ctx, 31, 0x457888u);
    ctx->pc = 0x457884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x457880u;
            // 0x457884: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457888u; }
        if (ctx->pc != 0x457888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457888u; }
        if (ctx->pc != 0x457888u) { return; }
    }
    ctx->pc = 0x457888u;
label_457888:
    // 0x457888: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x457888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_45788c:
    // 0x45788c: 0xc123328  jal         func_48CCA0
label_457890:
    if (ctx->pc == 0x457890u) {
        ctx->pc = 0x457890u;
            // 0x457890: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x457894u;
        goto label_457894;
    }
    ctx->pc = 0x45788Cu;
    SET_GPR_U32(ctx, 31, 0x457894u);
    ctx->pc = 0x457890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45788Cu;
            // 0x457890: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457894u; }
        if (ctx->pc != 0x457894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457894u; }
        if (ctx->pc != 0x457894u) { return; }
    }
    ctx->pc = 0x457894u;
label_457894:
    // 0x457894: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x457894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_457898:
    // 0x457898: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
label_45789c:
    if (ctx->pc == 0x45789Cu) {
        ctx->pc = 0x45789Cu;
            // 0x45789c: 0x8e640054  lw          $a0, 0x54($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
        ctx->pc = 0x4578A0u;
        goto label_4578a0;
    }
    ctx->pc = 0x457898u;
    {
        const bool branch_taken_0x457898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x457898) {
            ctx->pc = 0x45789Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x457898u;
            // 0x45789c: 0x8e640054  lw          $a0, 0x54($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4578B8u;
            goto label_4578b8;
        }
    }
    ctx->pc = 0x4578A0u;
label_4578a0:
    // 0x4578a0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4578a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4578a4:
    // 0x4578a4: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x4578a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_4578a8:
    // 0x4578a8: 0x8c44018c  lw          $a0, 0x18C($v0)
    ctx->pc = 0x4578a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 396)));
label_4578ac:
    // 0x4578ac: 0xc05d416  jal         func_175058
label_4578b0:
    if (ctx->pc == 0x4578B0u) {
        ctx->pc = 0x4578B0u;
            // 0x4578b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4578B4u;
        goto label_4578b4;
    }
    ctx->pc = 0x4578ACu;
    SET_GPR_U32(ctx, 31, 0x4578B4u);
    ctx->pc = 0x4578B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4578ACu;
            // 0x4578b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175058u;
    if (runtime->hasFunction(0x175058u)) {
        auto targetFn = runtime->lookupFunction(0x175058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4578B4u; }
        if (ctx->pc != 0x4578B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175058_0x175058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4578B4u; }
        if (ctx->pc != 0x4578B4u) { return; }
    }
    ctx->pc = 0x4578B4u;
label_4578b4:
    // 0x4578b4: 0x8e640054  lw          $a0, 0x54($s3)
    ctx->pc = 0x4578b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_4578b8:
    // 0x4578b8: 0xc0c901c  jal         func_324070
label_4578bc:
    if (ctx->pc == 0x4578BCu) {
        ctx->pc = 0x4578BCu;
            // 0x4578bc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4578C0u;
        goto label_4578c0;
    }
    ctx->pc = 0x4578B8u;
    SET_GPR_U32(ctx, 31, 0x4578C0u);
    ctx->pc = 0x4578BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4578B8u;
            // 0x4578bc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x324070u;
    if (runtime->hasFunction(0x324070u)) {
        auto targetFn = runtime->lookupFunction(0x324070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4578C0u; }
        if (ctx->pc != 0x4578C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324070_0x324070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4578C0u; }
        if (ctx->pc != 0x4578C0u) { return; }
    }
    ctx->pc = 0x4578C0u;
label_4578c0:
    // 0x4578c0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4578c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4578c4:
    // 0x4578c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4578c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4578c8:
    // 0x4578c8: 0xc1232d8  jal         func_48CB60
label_4578cc:
    if (ctx->pc == 0x4578CCu) {
        ctx->pc = 0x4578CCu;
            // 0x4578cc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4578D0u;
        goto label_4578d0;
    }
    ctx->pc = 0x4578C8u;
    SET_GPR_U32(ctx, 31, 0x4578D0u);
    ctx->pc = 0x4578CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4578C8u;
            // 0x4578cc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4578D0u; }
        if (ctx->pc != 0x4578D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4578D0u; }
        if (ctx->pc != 0x4578D0u) { return; }
    }
    ctx->pc = 0x4578D0u;
label_4578d0:
    // 0x4578d0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4578d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4578d4:
    // 0x4578d4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4578d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4578d8:
    // 0x4578d8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x4578d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_4578dc:
    // 0x4578dc: 0x8ca5000c  lw          $a1, 0xC($a1)
    ctx->pc = 0x4578dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_4578e0:
    // 0x4578e0: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x4578e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_4578e4:
    // 0x4578e4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4578e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4578e8:
    // 0x4578e8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4578e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4578ec:
    // 0x4578ec: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4578ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4578f0:
    // 0x4578f0: 0x94840046  lhu         $a0, 0x46($a0)
    ctx->pc = 0x4578f0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 70)));
label_4578f4:
    // 0x4578f4: 0x14830014  bne         $a0, $v1, . + 4 + (0x14 << 2)
label_4578f8:
    if (ctx->pc == 0x4578F8u) {
        ctx->pc = 0x4578FCu;
        goto label_4578fc;
    }
    ctx->pc = 0x4578F4u;
    {
        const bool branch_taken_0x4578f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4578f4) {
            ctx->pc = 0x457948u;
            goto label_457948;
        }
    }
    ctx->pc = 0x4578FCu;
label_4578fc:
    // 0x4578fc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4578fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_457900:
    // 0x457900: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x457900u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_457904:
    // 0x457904: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x457904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_457908:
    // 0x457908: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x457908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_45790c:
    // 0x45790c: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x45790cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_457910:
    // 0x457910: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x457910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_457914:
    // 0x457914: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x457914u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_457918:
    // 0x457918: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x457918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45791c:
    // 0x45791c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x45791cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_457920:
    // 0x457920: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x457920u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_457924:
    // 0x457924: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x457924u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_457928:
    // 0x457928: 0x320f809  jalr        $t9
label_45792c:
    if (ctx->pc == 0x45792Cu) {
        ctx->pc = 0x45792Cu;
            // 0x45792c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x457930u;
        goto label_457930;
    }
    ctx->pc = 0x457928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x457930u);
        ctx->pc = 0x45792Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x457928u;
            // 0x45792c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x457930u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x457930u; }
            if (ctx->pc != 0x457930u) { return; }
        }
        }
    }
    ctx->pc = 0x457930u;
label_457930:
    // 0x457930: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x457930u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_457934:
    // 0x457934: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x457934u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_457938:
    // 0x457938: 0x2a430004  slti        $v1, $s2, 0x4
    ctx->pc = 0x457938u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
label_45793c:
    // 0x45793c: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_457940:
    if (ctx->pc == 0x457940u) {
        ctx->pc = 0x457940u;
            // 0x457940: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x457944u;
        goto label_457944;
    }
    ctx->pc = 0x45793Cu;
    {
        const bool branch_taken_0x45793c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x457940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45793Cu;
            // 0x457940: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45793c) {
            ctx->pc = 0x457904u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_457904;
        }
    }
    ctx->pc = 0x457944u;
label_457944:
    // 0x457944: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x457944u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_457948:
    // 0x457948: 0x1220003e  beqz        $s1, . + 4 + (0x3E << 2)
label_45794c:
    if (ctx->pc == 0x45794Cu) {
        ctx->pc = 0x457950u;
        goto label_457950;
    }
    ctx->pc = 0x457948u;
    {
        const bool branch_taken_0x457948 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x457948) {
            ctx->pc = 0x457A44u;
            goto label_457a44;
        }
    }
    ctx->pc = 0x457950u;
label_457950:
    // 0x457950: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x457950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_457954:
    // 0x457954: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x457954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_457958:
    // 0x457958: 0x8c440188  lw          $a0, 0x188($v0)
    ctx->pc = 0x457958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 392)));
label_45795c:
    // 0x45795c: 0xc05d416  jal         func_175058
label_457960:
    if (ctx->pc == 0x457960u) {
        ctx->pc = 0x457960u;
            // 0x457960: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x457964u;
        goto label_457964;
    }
    ctx->pc = 0x45795Cu;
    SET_GPR_U32(ctx, 31, 0x457964u);
    ctx->pc = 0x457960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45795Cu;
            // 0x457960: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175058u;
    if (runtime->hasFunction(0x175058u)) {
        auto targetFn = runtime->lookupFunction(0x175058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457964u; }
        if (ctx->pc != 0x457964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175058_0x175058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457964u; }
        if (ctx->pc != 0x457964u) { return; }
    }
    ctx->pc = 0x457964u;
label_457964:
    // 0x457964: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x457964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_457968:
    // 0x457968: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x457968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_45796c:
    // 0x45796c: 0xc05cc84  jal         func_173210
label_457970:
    if (ctx->pc == 0x457970u) {
        ctx->pc = 0x457970u;
            // 0x457970: 0x8c440188  lw          $a0, 0x188($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 392)));
        ctx->pc = 0x457974u;
        goto label_457974;
    }
    ctx->pc = 0x45796Cu;
    SET_GPR_U32(ctx, 31, 0x457974u);
    ctx->pc = 0x457970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45796Cu;
            // 0x457970: 0x8c440188  lw          $a0, 0x188($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 392)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173210u;
    if (runtime->hasFunction(0x173210u)) {
        auto targetFn = runtime->lookupFunction(0x173210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457974u; }
        if (ctx->pc != 0x457974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173210_0x173210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457974u; }
        if (ctx->pc != 0x457974u) { return; }
    }
    ctx->pc = 0x457974u;
label_457974:
    // 0x457974: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x457974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_457978:
    // 0x457978: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x457978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_45797c:
    // 0x45797c: 0x8c44018c  lw          $a0, 0x18C($v0)
    ctx->pc = 0x45797cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 396)));
label_457980:
    // 0x457980: 0xc05d416  jal         func_175058
label_457984:
    if (ctx->pc == 0x457984u) {
        ctx->pc = 0x457984u;
            // 0x457984: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x457988u;
        goto label_457988;
    }
    ctx->pc = 0x457980u;
    SET_GPR_U32(ctx, 31, 0x457988u);
    ctx->pc = 0x457984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x457980u;
            // 0x457984: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175058u;
    if (runtime->hasFunction(0x175058u)) {
        auto targetFn = runtime->lookupFunction(0x175058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457988u; }
        if (ctx->pc != 0x457988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175058_0x175058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457988u; }
        if (ctx->pc != 0x457988u) { return; }
    }
    ctx->pc = 0x457988u;
label_457988:
    // 0x457988: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x457988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_45798c:
    // 0x45798c: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x45798cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_457990:
    // 0x457990: 0xc05cc84  jal         func_173210
label_457994:
    if (ctx->pc == 0x457994u) {
        ctx->pc = 0x457994u;
            // 0x457994: 0x8c44018c  lw          $a0, 0x18C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 396)));
        ctx->pc = 0x457998u;
        goto label_457998;
    }
    ctx->pc = 0x457990u;
    SET_GPR_U32(ctx, 31, 0x457998u);
    ctx->pc = 0x457994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x457990u;
            // 0x457994: 0x8c44018c  lw          $a0, 0x18C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 396)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173210u;
    if (runtime->hasFunction(0x173210u)) {
        auto targetFn = runtime->lookupFunction(0x173210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457998u; }
        if (ctx->pc != 0x457998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173210_0x173210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457998u; }
        if (ctx->pc != 0x457998u) { return; }
    }
    ctx->pc = 0x457998u;
label_457998:
    // 0x457998: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x457998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_45799c:
    // 0x45799c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x45799cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4579a0:
    // 0x4579a0: 0x5064001e  beql        $v1, $a0, . + 4 + (0x1E << 2)
label_4579a4:
    if (ctx->pc == 0x4579A4u) {
        ctx->pc = 0x4579A4u;
            // 0x4579a4: 0x8e630054  lw          $v1, 0x54($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
        ctx->pc = 0x4579A8u;
        goto label_4579a8;
    }
    ctx->pc = 0x4579A0u;
    {
        const bool branch_taken_0x4579a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x4579a0) {
            ctx->pc = 0x4579A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4579A0u;
            // 0x4579a4: 0x8e630054  lw          $v1, 0x54($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x457A1Cu;
            goto label_457a1c;
        }
    }
    ctx->pc = 0x4579A8u;
label_4579a8:
    // 0x4579a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4579a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4579ac:
    // 0x4579ac: 0x50640010  beql        $v1, $a0, . + 4 + (0x10 << 2)
label_4579b0:
    if (ctx->pc == 0x4579B0u) {
        ctx->pc = 0x4579B0u;
            // 0x4579b0: 0x8e630054  lw          $v1, 0x54($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
        ctx->pc = 0x4579B4u;
        goto label_4579b4;
    }
    ctx->pc = 0x4579ACu;
    {
        const bool branch_taken_0x4579ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x4579ac) {
            ctx->pc = 0x4579B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4579ACu;
            // 0x4579b0: 0x8e630054  lw          $v1, 0x54($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4579F0u;
            goto label_4579f0;
        }
    }
    ctx->pc = 0x4579B4u;
label_4579b4:
    // 0x4579b4: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_4579b8:
    if (ctx->pc == 0x4579B8u) {
        ctx->pc = 0x4579B8u;
            // 0x4579b8: 0x8e630054  lw          $v1, 0x54($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
        ctx->pc = 0x4579BCu;
        goto label_4579bc;
    }
    ctx->pc = 0x4579B4u;
    {
        const bool branch_taken_0x4579b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4579b4) {
            ctx->pc = 0x4579B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4579B4u;
            // 0x4579b8: 0x8e630054  lw          $v1, 0x54($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4579C4u;
            goto label_4579c4;
        }
    }
    ctx->pc = 0x4579BCu;
label_4579bc:
    // 0x4579bc: 0x10000021  b           . + 4 + (0x21 << 2)
label_4579c0:
    if (ctx->pc == 0x4579C0u) {
        ctx->pc = 0x4579C4u;
        goto label_4579c4;
    }
    ctx->pc = 0x4579BCu;
    {
        const bool branch_taken_0x4579bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4579bc) {
            ctx->pc = 0x457A44u;
            goto label_457a44;
        }
    }
    ctx->pc = 0x4579C4u;
label_4579c4:
    // 0x4579c4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4579c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4579c8:
    // 0x4579c8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4579c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4579cc:
    // 0x4579cc: 0xac600064  sw          $zero, 0x64($v1)
    ctx->pc = 0x4579ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 0));
label_4579d0:
    // 0x4579d0: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4579d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4579d4:
    // 0x4579d4: 0xc057b7c  jal         func_15EDF0
label_4579d8:
    if (ctx->pc == 0x4579D8u) {
        ctx->pc = 0x4579D8u;
            // 0x4579d8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4579DCu;
        goto label_4579dc;
    }
    ctx->pc = 0x4579D4u;
    SET_GPR_U32(ctx, 31, 0x4579DCu);
    ctx->pc = 0x4579D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4579D4u;
            // 0x4579d8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4579DCu; }
        if (ctx->pc != 0x4579DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4579DCu; }
        if (ctx->pc != 0x4579DCu) { return; }
    }
    ctx->pc = 0x4579DCu;
label_4579dc:
    // 0x4579dc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4579dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4579e0:
    // 0x4579e0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x4579e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4579e4:
    // 0x4579e4: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x4579e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_4579e8:
    // 0x4579e8: 0x10000016  b           . + 4 + (0x16 << 2)
label_4579ec:
    if (ctx->pc == 0x4579ECu) {
        ctx->pc = 0x4579ECu;
            // 0x4579ec: 0xa064008d  sb          $a0, 0x8D($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 141), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x4579F0u;
        goto label_4579f0;
    }
    ctx->pc = 0x4579E8u;
    {
        const bool branch_taken_0x4579e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4579ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4579E8u;
            // 0x4579ec: 0xa064008d  sb          $a0, 0x8D($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 141), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4579e8) {
            ctx->pc = 0x457A44u;
            goto label_457a44;
        }
    }
    ctx->pc = 0x4579F0u;
label_4579f0:
    // 0x4579f0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4579f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4579f4:
    // 0x4579f4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4579f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4579f8:
    // 0x4579f8: 0xac640064  sw          $a0, 0x64($v1)
    ctx->pc = 0x4579f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 4));
label_4579fc:
    // 0x4579fc: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4579fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_457a00:
    // 0x457a00: 0xc057b7c  jal         func_15EDF0
label_457a04:
    if (ctx->pc == 0x457A04u) {
        ctx->pc = 0x457A04u;
            // 0x457a04: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x457A08u;
        goto label_457a08;
    }
    ctx->pc = 0x457A00u;
    SET_GPR_U32(ctx, 31, 0x457A08u);
    ctx->pc = 0x457A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x457A00u;
            // 0x457a04: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457A08u; }
        if (ctx->pc != 0x457A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457A08u; }
        if (ctx->pc != 0x457A08u) { return; }
    }
    ctx->pc = 0x457A08u;
label_457a08:
    // 0x457a08: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x457a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_457a0c:
    // 0x457a0c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x457a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_457a10:
    // 0x457a10: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x457a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_457a14:
    // 0x457a14: 0x1000000b  b           . + 4 + (0xB << 2)
label_457a18:
    if (ctx->pc == 0x457A18u) {
        ctx->pc = 0x457A18u;
            // 0x457a18: 0xa064008d  sb          $a0, 0x8D($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 141), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x457A1Cu;
        goto label_457a1c;
    }
    ctx->pc = 0x457A14u;
    {
        const bool branch_taken_0x457a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x457A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x457A14u;
            // 0x457a18: 0xa064008d  sb          $a0, 0x8D($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 141), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x457a14) {
            ctx->pc = 0x457A44u;
            goto label_457a44;
        }
    }
    ctx->pc = 0x457A1Cu;
label_457a1c:
    // 0x457a1c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x457a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_457a20:
    // 0x457a20: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x457a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_457a24:
    // 0x457a24: 0xac640064  sw          $a0, 0x64($v1)
    ctx->pc = 0x457a24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 4));
label_457a28:
    // 0x457a28: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x457a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_457a2c:
    // 0x457a2c: 0xc057b7c  jal         func_15EDF0
label_457a30:
    if (ctx->pc == 0x457A30u) {
        ctx->pc = 0x457A30u;
            // 0x457a30: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x457A34u;
        goto label_457a34;
    }
    ctx->pc = 0x457A2Cu;
    SET_GPR_U32(ctx, 31, 0x457A34u);
    ctx->pc = 0x457A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x457A2Cu;
            // 0x457a30: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457A34u; }
        if (ctx->pc != 0x457A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457A34u; }
        if (ctx->pc != 0x457A34u) { return; }
    }
    ctx->pc = 0x457A34u;
label_457a34:
    // 0x457a34: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x457a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_457a38:
    // 0x457a38: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x457a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_457a3c:
    // 0x457a3c: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x457a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_457a40:
    // 0x457a40: 0xa064008d  sb          $a0, 0x8D($v1)
    ctx->pc = 0x457a40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 141), (uint8_t)GPR_U32(ctx, 4));
label_457a44:
    // 0x457a44: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x457a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_457a48:
    // 0x457a48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x457a48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_457a4c:
    // 0x457a4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x457a4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_457a50:
    // 0x457a50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x457a50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_457a54:
    // 0x457a54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x457a54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_457a58:
    // 0x457a58: 0x3e00008  jr          $ra
label_457a5c:
    if (ctx->pc == 0x457A5Cu) {
        ctx->pc = 0x457A5Cu;
            // 0x457a5c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x457A60u;
        goto label_fallthrough_0x457a58;
    }
    ctx->pc = 0x457A58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x457A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x457A58u;
            // 0x457a5c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x457a58:
    ctx->pc = 0x457A60u;
}
