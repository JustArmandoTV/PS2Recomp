#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00467440
// Address: 0x467440 - 0x4681d0
void sub_00467440_0x467440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00467440_0x467440");
#endif

    switch (ctx->pc) {
        case 0x467440u: goto label_467440;
        case 0x467444u: goto label_467444;
        case 0x467448u: goto label_467448;
        case 0x46744cu: goto label_46744c;
        case 0x467450u: goto label_467450;
        case 0x467454u: goto label_467454;
        case 0x467458u: goto label_467458;
        case 0x46745cu: goto label_46745c;
        case 0x467460u: goto label_467460;
        case 0x467464u: goto label_467464;
        case 0x467468u: goto label_467468;
        case 0x46746cu: goto label_46746c;
        case 0x467470u: goto label_467470;
        case 0x467474u: goto label_467474;
        case 0x467478u: goto label_467478;
        case 0x46747cu: goto label_46747c;
        case 0x467480u: goto label_467480;
        case 0x467484u: goto label_467484;
        case 0x467488u: goto label_467488;
        case 0x46748cu: goto label_46748c;
        case 0x467490u: goto label_467490;
        case 0x467494u: goto label_467494;
        case 0x467498u: goto label_467498;
        case 0x46749cu: goto label_46749c;
        case 0x4674a0u: goto label_4674a0;
        case 0x4674a4u: goto label_4674a4;
        case 0x4674a8u: goto label_4674a8;
        case 0x4674acu: goto label_4674ac;
        case 0x4674b0u: goto label_4674b0;
        case 0x4674b4u: goto label_4674b4;
        case 0x4674b8u: goto label_4674b8;
        case 0x4674bcu: goto label_4674bc;
        case 0x4674c0u: goto label_4674c0;
        case 0x4674c4u: goto label_4674c4;
        case 0x4674c8u: goto label_4674c8;
        case 0x4674ccu: goto label_4674cc;
        case 0x4674d0u: goto label_4674d0;
        case 0x4674d4u: goto label_4674d4;
        case 0x4674d8u: goto label_4674d8;
        case 0x4674dcu: goto label_4674dc;
        case 0x4674e0u: goto label_4674e0;
        case 0x4674e4u: goto label_4674e4;
        case 0x4674e8u: goto label_4674e8;
        case 0x4674ecu: goto label_4674ec;
        case 0x4674f0u: goto label_4674f0;
        case 0x4674f4u: goto label_4674f4;
        case 0x4674f8u: goto label_4674f8;
        case 0x4674fcu: goto label_4674fc;
        case 0x467500u: goto label_467500;
        case 0x467504u: goto label_467504;
        case 0x467508u: goto label_467508;
        case 0x46750cu: goto label_46750c;
        case 0x467510u: goto label_467510;
        case 0x467514u: goto label_467514;
        case 0x467518u: goto label_467518;
        case 0x46751cu: goto label_46751c;
        case 0x467520u: goto label_467520;
        case 0x467524u: goto label_467524;
        case 0x467528u: goto label_467528;
        case 0x46752cu: goto label_46752c;
        case 0x467530u: goto label_467530;
        case 0x467534u: goto label_467534;
        case 0x467538u: goto label_467538;
        case 0x46753cu: goto label_46753c;
        case 0x467540u: goto label_467540;
        case 0x467544u: goto label_467544;
        case 0x467548u: goto label_467548;
        case 0x46754cu: goto label_46754c;
        case 0x467550u: goto label_467550;
        case 0x467554u: goto label_467554;
        case 0x467558u: goto label_467558;
        case 0x46755cu: goto label_46755c;
        case 0x467560u: goto label_467560;
        case 0x467564u: goto label_467564;
        case 0x467568u: goto label_467568;
        case 0x46756cu: goto label_46756c;
        case 0x467570u: goto label_467570;
        case 0x467574u: goto label_467574;
        case 0x467578u: goto label_467578;
        case 0x46757cu: goto label_46757c;
        case 0x467580u: goto label_467580;
        case 0x467584u: goto label_467584;
        case 0x467588u: goto label_467588;
        case 0x46758cu: goto label_46758c;
        case 0x467590u: goto label_467590;
        case 0x467594u: goto label_467594;
        case 0x467598u: goto label_467598;
        case 0x46759cu: goto label_46759c;
        case 0x4675a0u: goto label_4675a0;
        case 0x4675a4u: goto label_4675a4;
        case 0x4675a8u: goto label_4675a8;
        case 0x4675acu: goto label_4675ac;
        case 0x4675b0u: goto label_4675b0;
        case 0x4675b4u: goto label_4675b4;
        case 0x4675b8u: goto label_4675b8;
        case 0x4675bcu: goto label_4675bc;
        case 0x4675c0u: goto label_4675c0;
        case 0x4675c4u: goto label_4675c4;
        case 0x4675c8u: goto label_4675c8;
        case 0x4675ccu: goto label_4675cc;
        case 0x4675d0u: goto label_4675d0;
        case 0x4675d4u: goto label_4675d4;
        case 0x4675d8u: goto label_4675d8;
        case 0x4675dcu: goto label_4675dc;
        case 0x4675e0u: goto label_4675e0;
        case 0x4675e4u: goto label_4675e4;
        case 0x4675e8u: goto label_4675e8;
        case 0x4675ecu: goto label_4675ec;
        case 0x4675f0u: goto label_4675f0;
        case 0x4675f4u: goto label_4675f4;
        case 0x4675f8u: goto label_4675f8;
        case 0x4675fcu: goto label_4675fc;
        case 0x467600u: goto label_467600;
        case 0x467604u: goto label_467604;
        case 0x467608u: goto label_467608;
        case 0x46760cu: goto label_46760c;
        case 0x467610u: goto label_467610;
        case 0x467614u: goto label_467614;
        case 0x467618u: goto label_467618;
        case 0x46761cu: goto label_46761c;
        case 0x467620u: goto label_467620;
        case 0x467624u: goto label_467624;
        case 0x467628u: goto label_467628;
        case 0x46762cu: goto label_46762c;
        case 0x467630u: goto label_467630;
        case 0x467634u: goto label_467634;
        case 0x467638u: goto label_467638;
        case 0x46763cu: goto label_46763c;
        case 0x467640u: goto label_467640;
        case 0x467644u: goto label_467644;
        case 0x467648u: goto label_467648;
        case 0x46764cu: goto label_46764c;
        case 0x467650u: goto label_467650;
        case 0x467654u: goto label_467654;
        case 0x467658u: goto label_467658;
        case 0x46765cu: goto label_46765c;
        case 0x467660u: goto label_467660;
        case 0x467664u: goto label_467664;
        case 0x467668u: goto label_467668;
        case 0x46766cu: goto label_46766c;
        case 0x467670u: goto label_467670;
        case 0x467674u: goto label_467674;
        case 0x467678u: goto label_467678;
        case 0x46767cu: goto label_46767c;
        case 0x467680u: goto label_467680;
        case 0x467684u: goto label_467684;
        case 0x467688u: goto label_467688;
        case 0x46768cu: goto label_46768c;
        case 0x467690u: goto label_467690;
        case 0x467694u: goto label_467694;
        case 0x467698u: goto label_467698;
        case 0x46769cu: goto label_46769c;
        case 0x4676a0u: goto label_4676a0;
        case 0x4676a4u: goto label_4676a4;
        case 0x4676a8u: goto label_4676a8;
        case 0x4676acu: goto label_4676ac;
        case 0x4676b0u: goto label_4676b0;
        case 0x4676b4u: goto label_4676b4;
        case 0x4676b8u: goto label_4676b8;
        case 0x4676bcu: goto label_4676bc;
        case 0x4676c0u: goto label_4676c0;
        case 0x4676c4u: goto label_4676c4;
        case 0x4676c8u: goto label_4676c8;
        case 0x4676ccu: goto label_4676cc;
        case 0x4676d0u: goto label_4676d0;
        case 0x4676d4u: goto label_4676d4;
        case 0x4676d8u: goto label_4676d8;
        case 0x4676dcu: goto label_4676dc;
        case 0x4676e0u: goto label_4676e0;
        case 0x4676e4u: goto label_4676e4;
        case 0x4676e8u: goto label_4676e8;
        case 0x4676ecu: goto label_4676ec;
        case 0x4676f0u: goto label_4676f0;
        case 0x4676f4u: goto label_4676f4;
        case 0x4676f8u: goto label_4676f8;
        case 0x4676fcu: goto label_4676fc;
        case 0x467700u: goto label_467700;
        case 0x467704u: goto label_467704;
        case 0x467708u: goto label_467708;
        case 0x46770cu: goto label_46770c;
        case 0x467710u: goto label_467710;
        case 0x467714u: goto label_467714;
        case 0x467718u: goto label_467718;
        case 0x46771cu: goto label_46771c;
        case 0x467720u: goto label_467720;
        case 0x467724u: goto label_467724;
        case 0x467728u: goto label_467728;
        case 0x46772cu: goto label_46772c;
        case 0x467730u: goto label_467730;
        case 0x467734u: goto label_467734;
        case 0x467738u: goto label_467738;
        case 0x46773cu: goto label_46773c;
        case 0x467740u: goto label_467740;
        case 0x467744u: goto label_467744;
        case 0x467748u: goto label_467748;
        case 0x46774cu: goto label_46774c;
        case 0x467750u: goto label_467750;
        case 0x467754u: goto label_467754;
        case 0x467758u: goto label_467758;
        case 0x46775cu: goto label_46775c;
        case 0x467760u: goto label_467760;
        case 0x467764u: goto label_467764;
        case 0x467768u: goto label_467768;
        case 0x46776cu: goto label_46776c;
        case 0x467770u: goto label_467770;
        case 0x467774u: goto label_467774;
        case 0x467778u: goto label_467778;
        case 0x46777cu: goto label_46777c;
        case 0x467780u: goto label_467780;
        case 0x467784u: goto label_467784;
        case 0x467788u: goto label_467788;
        case 0x46778cu: goto label_46778c;
        case 0x467790u: goto label_467790;
        case 0x467794u: goto label_467794;
        case 0x467798u: goto label_467798;
        case 0x46779cu: goto label_46779c;
        case 0x4677a0u: goto label_4677a0;
        case 0x4677a4u: goto label_4677a4;
        case 0x4677a8u: goto label_4677a8;
        case 0x4677acu: goto label_4677ac;
        case 0x4677b0u: goto label_4677b0;
        case 0x4677b4u: goto label_4677b4;
        case 0x4677b8u: goto label_4677b8;
        case 0x4677bcu: goto label_4677bc;
        case 0x4677c0u: goto label_4677c0;
        case 0x4677c4u: goto label_4677c4;
        case 0x4677c8u: goto label_4677c8;
        case 0x4677ccu: goto label_4677cc;
        case 0x4677d0u: goto label_4677d0;
        case 0x4677d4u: goto label_4677d4;
        case 0x4677d8u: goto label_4677d8;
        case 0x4677dcu: goto label_4677dc;
        case 0x4677e0u: goto label_4677e0;
        case 0x4677e4u: goto label_4677e4;
        case 0x4677e8u: goto label_4677e8;
        case 0x4677ecu: goto label_4677ec;
        case 0x4677f0u: goto label_4677f0;
        case 0x4677f4u: goto label_4677f4;
        case 0x4677f8u: goto label_4677f8;
        case 0x4677fcu: goto label_4677fc;
        case 0x467800u: goto label_467800;
        case 0x467804u: goto label_467804;
        case 0x467808u: goto label_467808;
        case 0x46780cu: goto label_46780c;
        case 0x467810u: goto label_467810;
        case 0x467814u: goto label_467814;
        case 0x467818u: goto label_467818;
        case 0x46781cu: goto label_46781c;
        case 0x467820u: goto label_467820;
        case 0x467824u: goto label_467824;
        case 0x467828u: goto label_467828;
        case 0x46782cu: goto label_46782c;
        case 0x467830u: goto label_467830;
        case 0x467834u: goto label_467834;
        case 0x467838u: goto label_467838;
        case 0x46783cu: goto label_46783c;
        case 0x467840u: goto label_467840;
        case 0x467844u: goto label_467844;
        case 0x467848u: goto label_467848;
        case 0x46784cu: goto label_46784c;
        case 0x467850u: goto label_467850;
        case 0x467854u: goto label_467854;
        case 0x467858u: goto label_467858;
        case 0x46785cu: goto label_46785c;
        case 0x467860u: goto label_467860;
        case 0x467864u: goto label_467864;
        case 0x467868u: goto label_467868;
        case 0x46786cu: goto label_46786c;
        case 0x467870u: goto label_467870;
        case 0x467874u: goto label_467874;
        case 0x467878u: goto label_467878;
        case 0x46787cu: goto label_46787c;
        case 0x467880u: goto label_467880;
        case 0x467884u: goto label_467884;
        case 0x467888u: goto label_467888;
        case 0x46788cu: goto label_46788c;
        case 0x467890u: goto label_467890;
        case 0x467894u: goto label_467894;
        case 0x467898u: goto label_467898;
        case 0x46789cu: goto label_46789c;
        case 0x4678a0u: goto label_4678a0;
        case 0x4678a4u: goto label_4678a4;
        case 0x4678a8u: goto label_4678a8;
        case 0x4678acu: goto label_4678ac;
        case 0x4678b0u: goto label_4678b0;
        case 0x4678b4u: goto label_4678b4;
        case 0x4678b8u: goto label_4678b8;
        case 0x4678bcu: goto label_4678bc;
        case 0x4678c0u: goto label_4678c0;
        case 0x4678c4u: goto label_4678c4;
        case 0x4678c8u: goto label_4678c8;
        case 0x4678ccu: goto label_4678cc;
        case 0x4678d0u: goto label_4678d0;
        case 0x4678d4u: goto label_4678d4;
        case 0x4678d8u: goto label_4678d8;
        case 0x4678dcu: goto label_4678dc;
        case 0x4678e0u: goto label_4678e0;
        case 0x4678e4u: goto label_4678e4;
        case 0x4678e8u: goto label_4678e8;
        case 0x4678ecu: goto label_4678ec;
        case 0x4678f0u: goto label_4678f0;
        case 0x4678f4u: goto label_4678f4;
        case 0x4678f8u: goto label_4678f8;
        case 0x4678fcu: goto label_4678fc;
        case 0x467900u: goto label_467900;
        case 0x467904u: goto label_467904;
        case 0x467908u: goto label_467908;
        case 0x46790cu: goto label_46790c;
        case 0x467910u: goto label_467910;
        case 0x467914u: goto label_467914;
        case 0x467918u: goto label_467918;
        case 0x46791cu: goto label_46791c;
        case 0x467920u: goto label_467920;
        case 0x467924u: goto label_467924;
        case 0x467928u: goto label_467928;
        case 0x46792cu: goto label_46792c;
        case 0x467930u: goto label_467930;
        case 0x467934u: goto label_467934;
        case 0x467938u: goto label_467938;
        case 0x46793cu: goto label_46793c;
        case 0x467940u: goto label_467940;
        case 0x467944u: goto label_467944;
        case 0x467948u: goto label_467948;
        case 0x46794cu: goto label_46794c;
        case 0x467950u: goto label_467950;
        case 0x467954u: goto label_467954;
        case 0x467958u: goto label_467958;
        case 0x46795cu: goto label_46795c;
        case 0x467960u: goto label_467960;
        case 0x467964u: goto label_467964;
        case 0x467968u: goto label_467968;
        case 0x46796cu: goto label_46796c;
        case 0x467970u: goto label_467970;
        case 0x467974u: goto label_467974;
        case 0x467978u: goto label_467978;
        case 0x46797cu: goto label_46797c;
        case 0x467980u: goto label_467980;
        case 0x467984u: goto label_467984;
        case 0x467988u: goto label_467988;
        case 0x46798cu: goto label_46798c;
        case 0x467990u: goto label_467990;
        case 0x467994u: goto label_467994;
        case 0x467998u: goto label_467998;
        case 0x46799cu: goto label_46799c;
        case 0x4679a0u: goto label_4679a0;
        case 0x4679a4u: goto label_4679a4;
        case 0x4679a8u: goto label_4679a8;
        case 0x4679acu: goto label_4679ac;
        case 0x4679b0u: goto label_4679b0;
        case 0x4679b4u: goto label_4679b4;
        case 0x4679b8u: goto label_4679b8;
        case 0x4679bcu: goto label_4679bc;
        case 0x4679c0u: goto label_4679c0;
        case 0x4679c4u: goto label_4679c4;
        case 0x4679c8u: goto label_4679c8;
        case 0x4679ccu: goto label_4679cc;
        case 0x4679d0u: goto label_4679d0;
        case 0x4679d4u: goto label_4679d4;
        case 0x4679d8u: goto label_4679d8;
        case 0x4679dcu: goto label_4679dc;
        case 0x4679e0u: goto label_4679e0;
        case 0x4679e4u: goto label_4679e4;
        case 0x4679e8u: goto label_4679e8;
        case 0x4679ecu: goto label_4679ec;
        case 0x4679f0u: goto label_4679f0;
        case 0x4679f4u: goto label_4679f4;
        case 0x4679f8u: goto label_4679f8;
        case 0x4679fcu: goto label_4679fc;
        case 0x467a00u: goto label_467a00;
        case 0x467a04u: goto label_467a04;
        case 0x467a08u: goto label_467a08;
        case 0x467a0cu: goto label_467a0c;
        case 0x467a10u: goto label_467a10;
        case 0x467a14u: goto label_467a14;
        case 0x467a18u: goto label_467a18;
        case 0x467a1cu: goto label_467a1c;
        case 0x467a20u: goto label_467a20;
        case 0x467a24u: goto label_467a24;
        case 0x467a28u: goto label_467a28;
        case 0x467a2cu: goto label_467a2c;
        case 0x467a30u: goto label_467a30;
        case 0x467a34u: goto label_467a34;
        case 0x467a38u: goto label_467a38;
        case 0x467a3cu: goto label_467a3c;
        case 0x467a40u: goto label_467a40;
        case 0x467a44u: goto label_467a44;
        case 0x467a48u: goto label_467a48;
        case 0x467a4cu: goto label_467a4c;
        case 0x467a50u: goto label_467a50;
        case 0x467a54u: goto label_467a54;
        case 0x467a58u: goto label_467a58;
        case 0x467a5cu: goto label_467a5c;
        case 0x467a60u: goto label_467a60;
        case 0x467a64u: goto label_467a64;
        case 0x467a68u: goto label_467a68;
        case 0x467a6cu: goto label_467a6c;
        case 0x467a70u: goto label_467a70;
        case 0x467a74u: goto label_467a74;
        case 0x467a78u: goto label_467a78;
        case 0x467a7cu: goto label_467a7c;
        case 0x467a80u: goto label_467a80;
        case 0x467a84u: goto label_467a84;
        case 0x467a88u: goto label_467a88;
        case 0x467a8cu: goto label_467a8c;
        case 0x467a90u: goto label_467a90;
        case 0x467a94u: goto label_467a94;
        case 0x467a98u: goto label_467a98;
        case 0x467a9cu: goto label_467a9c;
        case 0x467aa0u: goto label_467aa0;
        case 0x467aa4u: goto label_467aa4;
        case 0x467aa8u: goto label_467aa8;
        case 0x467aacu: goto label_467aac;
        case 0x467ab0u: goto label_467ab0;
        case 0x467ab4u: goto label_467ab4;
        case 0x467ab8u: goto label_467ab8;
        case 0x467abcu: goto label_467abc;
        case 0x467ac0u: goto label_467ac0;
        case 0x467ac4u: goto label_467ac4;
        case 0x467ac8u: goto label_467ac8;
        case 0x467accu: goto label_467acc;
        case 0x467ad0u: goto label_467ad0;
        case 0x467ad4u: goto label_467ad4;
        case 0x467ad8u: goto label_467ad8;
        case 0x467adcu: goto label_467adc;
        case 0x467ae0u: goto label_467ae0;
        case 0x467ae4u: goto label_467ae4;
        case 0x467ae8u: goto label_467ae8;
        case 0x467aecu: goto label_467aec;
        case 0x467af0u: goto label_467af0;
        case 0x467af4u: goto label_467af4;
        case 0x467af8u: goto label_467af8;
        case 0x467afcu: goto label_467afc;
        case 0x467b00u: goto label_467b00;
        case 0x467b04u: goto label_467b04;
        case 0x467b08u: goto label_467b08;
        case 0x467b0cu: goto label_467b0c;
        case 0x467b10u: goto label_467b10;
        case 0x467b14u: goto label_467b14;
        case 0x467b18u: goto label_467b18;
        case 0x467b1cu: goto label_467b1c;
        case 0x467b20u: goto label_467b20;
        case 0x467b24u: goto label_467b24;
        case 0x467b28u: goto label_467b28;
        case 0x467b2cu: goto label_467b2c;
        case 0x467b30u: goto label_467b30;
        case 0x467b34u: goto label_467b34;
        case 0x467b38u: goto label_467b38;
        case 0x467b3cu: goto label_467b3c;
        case 0x467b40u: goto label_467b40;
        case 0x467b44u: goto label_467b44;
        case 0x467b48u: goto label_467b48;
        case 0x467b4cu: goto label_467b4c;
        case 0x467b50u: goto label_467b50;
        case 0x467b54u: goto label_467b54;
        case 0x467b58u: goto label_467b58;
        case 0x467b5cu: goto label_467b5c;
        case 0x467b60u: goto label_467b60;
        case 0x467b64u: goto label_467b64;
        case 0x467b68u: goto label_467b68;
        case 0x467b6cu: goto label_467b6c;
        case 0x467b70u: goto label_467b70;
        case 0x467b74u: goto label_467b74;
        case 0x467b78u: goto label_467b78;
        case 0x467b7cu: goto label_467b7c;
        case 0x467b80u: goto label_467b80;
        case 0x467b84u: goto label_467b84;
        case 0x467b88u: goto label_467b88;
        case 0x467b8cu: goto label_467b8c;
        case 0x467b90u: goto label_467b90;
        case 0x467b94u: goto label_467b94;
        case 0x467b98u: goto label_467b98;
        case 0x467b9cu: goto label_467b9c;
        case 0x467ba0u: goto label_467ba0;
        case 0x467ba4u: goto label_467ba4;
        case 0x467ba8u: goto label_467ba8;
        case 0x467bacu: goto label_467bac;
        case 0x467bb0u: goto label_467bb0;
        case 0x467bb4u: goto label_467bb4;
        case 0x467bb8u: goto label_467bb8;
        case 0x467bbcu: goto label_467bbc;
        case 0x467bc0u: goto label_467bc0;
        case 0x467bc4u: goto label_467bc4;
        case 0x467bc8u: goto label_467bc8;
        case 0x467bccu: goto label_467bcc;
        case 0x467bd0u: goto label_467bd0;
        case 0x467bd4u: goto label_467bd4;
        case 0x467bd8u: goto label_467bd8;
        case 0x467bdcu: goto label_467bdc;
        case 0x467be0u: goto label_467be0;
        case 0x467be4u: goto label_467be4;
        case 0x467be8u: goto label_467be8;
        case 0x467becu: goto label_467bec;
        case 0x467bf0u: goto label_467bf0;
        case 0x467bf4u: goto label_467bf4;
        case 0x467bf8u: goto label_467bf8;
        case 0x467bfcu: goto label_467bfc;
        case 0x467c00u: goto label_467c00;
        case 0x467c04u: goto label_467c04;
        case 0x467c08u: goto label_467c08;
        case 0x467c0cu: goto label_467c0c;
        case 0x467c10u: goto label_467c10;
        case 0x467c14u: goto label_467c14;
        case 0x467c18u: goto label_467c18;
        case 0x467c1cu: goto label_467c1c;
        case 0x467c20u: goto label_467c20;
        case 0x467c24u: goto label_467c24;
        case 0x467c28u: goto label_467c28;
        case 0x467c2cu: goto label_467c2c;
        case 0x467c30u: goto label_467c30;
        case 0x467c34u: goto label_467c34;
        case 0x467c38u: goto label_467c38;
        case 0x467c3cu: goto label_467c3c;
        case 0x467c40u: goto label_467c40;
        case 0x467c44u: goto label_467c44;
        case 0x467c48u: goto label_467c48;
        case 0x467c4cu: goto label_467c4c;
        case 0x467c50u: goto label_467c50;
        case 0x467c54u: goto label_467c54;
        case 0x467c58u: goto label_467c58;
        case 0x467c5cu: goto label_467c5c;
        case 0x467c60u: goto label_467c60;
        case 0x467c64u: goto label_467c64;
        case 0x467c68u: goto label_467c68;
        case 0x467c6cu: goto label_467c6c;
        case 0x467c70u: goto label_467c70;
        case 0x467c74u: goto label_467c74;
        case 0x467c78u: goto label_467c78;
        case 0x467c7cu: goto label_467c7c;
        case 0x467c80u: goto label_467c80;
        case 0x467c84u: goto label_467c84;
        case 0x467c88u: goto label_467c88;
        case 0x467c8cu: goto label_467c8c;
        case 0x467c90u: goto label_467c90;
        case 0x467c94u: goto label_467c94;
        case 0x467c98u: goto label_467c98;
        case 0x467c9cu: goto label_467c9c;
        case 0x467ca0u: goto label_467ca0;
        case 0x467ca4u: goto label_467ca4;
        case 0x467ca8u: goto label_467ca8;
        case 0x467cacu: goto label_467cac;
        case 0x467cb0u: goto label_467cb0;
        case 0x467cb4u: goto label_467cb4;
        case 0x467cb8u: goto label_467cb8;
        case 0x467cbcu: goto label_467cbc;
        case 0x467cc0u: goto label_467cc0;
        case 0x467cc4u: goto label_467cc4;
        case 0x467cc8u: goto label_467cc8;
        case 0x467cccu: goto label_467ccc;
        case 0x467cd0u: goto label_467cd0;
        case 0x467cd4u: goto label_467cd4;
        case 0x467cd8u: goto label_467cd8;
        case 0x467cdcu: goto label_467cdc;
        case 0x467ce0u: goto label_467ce0;
        case 0x467ce4u: goto label_467ce4;
        case 0x467ce8u: goto label_467ce8;
        case 0x467cecu: goto label_467cec;
        case 0x467cf0u: goto label_467cf0;
        case 0x467cf4u: goto label_467cf4;
        case 0x467cf8u: goto label_467cf8;
        case 0x467cfcu: goto label_467cfc;
        case 0x467d00u: goto label_467d00;
        case 0x467d04u: goto label_467d04;
        case 0x467d08u: goto label_467d08;
        case 0x467d0cu: goto label_467d0c;
        case 0x467d10u: goto label_467d10;
        case 0x467d14u: goto label_467d14;
        case 0x467d18u: goto label_467d18;
        case 0x467d1cu: goto label_467d1c;
        case 0x467d20u: goto label_467d20;
        case 0x467d24u: goto label_467d24;
        case 0x467d28u: goto label_467d28;
        case 0x467d2cu: goto label_467d2c;
        case 0x467d30u: goto label_467d30;
        case 0x467d34u: goto label_467d34;
        case 0x467d38u: goto label_467d38;
        case 0x467d3cu: goto label_467d3c;
        case 0x467d40u: goto label_467d40;
        case 0x467d44u: goto label_467d44;
        case 0x467d48u: goto label_467d48;
        case 0x467d4cu: goto label_467d4c;
        case 0x467d50u: goto label_467d50;
        case 0x467d54u: goto label_467d54;
        case 0x467d58u: goto label_467d58;
        case 0x467d5cu: goto label_467d5c;
        case 0x467d60u: goto label_467d60;
        case 0x467d64u: goto label_467d64;
        case 0x467d68u: goto label_467d68;
        case 0x467d6cu: goto label_467d6c;
        case 0x467d70u: goto label_467d70;
        case 0x467d74u: goto label_467d74;
        case 0x467d78u: goto label_467d78;
        case 0x467d7cu: goto label_467d7c;
        case 0x467d80u: goto label_467d80;
        case 0x467d84u: goto label_467d84;
        case 0x467d88u: goto label_467d88;
        case 0x467d8cu: goto label_467d8c;
        case 0x467d90u: goto label_467d90;
        case 0x467d94u: goto label_467d94;
        case 0x467d98u: goto label_467d98;
        case 0x467d9cu: goto label_467d9c;
        case 0x467da0u: goto label_467da0;
        case 0x467da4u: goto label_467da4;
        case 0x467da8u: goto label_467da8;
        case 0x467dacu: goto label_467dac;
        case 0x467db0u: goto label_467db0;
        case 0x467db4u: goto label_467db4;
        case 0x467db8u: goto label_467db8;
        case 0x467dbcu: goto label_467dbc;
        case 0x467dc0u: goto label_467dc0;
        case 0x467dc4u: goto label_467dc4;
        case 0x467dc8u: goto label_467dc8;
        case 0x467dccu: goto label_467dcc;
        case 0x467dd0u: goto label_467dd0;
        case 0x467dd4u: goto label_467dd4;
        case 0x467dd8u: goto label_467dd8;
        case 0x467ddcu: goto label_467ddc;
        case 0x467de0u: goto label_467de0;
        case 0x467de4u: goto label_467de4;
        case 0x467de8u: goto label_467de8;
        case 0x467decu: goto label_467dec;
        case 0x467df0u: goto label_467df0;
        case 0x467df4u: goto label_467df4;
        case 0x467df8u: goto label_467df8;
        case 0x467dfcu: goto label_467dfc;
        case 0x467e00u: goto label_467e00;
        case 0x467e04u: goto label_467e04;
        case 0x467e08u: goto label_467e08;
        case 0x467e0cu: goto label_467e0c;
        case 0x467e10u: goto label_467e10;
        case 0x467e14u: goto label_467e14;
        case 0x467e18u: goto label_467e18;
        case 0x467e1cu: goto label_467e1c;
        case 0x467e20u: goto label_467e20;
        case 0x467e24u: goto label_467e24;
        case 0x467e28u: goto label_467e28;
        case 0x467e2cu: goto label_467e2c;
        case 0x467e30u: goto label_467e30;
        case 0x467e34u: goto label_467e34;
        case 0x467e38u: goto label_467e38;
        case 0x467e3cu: goto label_467e3c;
        case 0x467e40u: goto label_467e40;
        case 0x467e44u: goto label_467e44;
        case 0x467e48u: goto label_467e48;
        case 0x467e4cu: goto label_467e4c;
        case 0x467e50u: goto label_467e50;
        case 0x467e54u: goto label_467e54;
        case 0x467e58u: goto label_467e58;
        case 0x467e5cu: goto label_467e5c;
        case 0x467e60u: goto label_467e60;
        case 0x467e64u: goto label_467e64;
        case 0x467e68u: goto label_467e68;
        case 0x467e6cu: goto label_467e6c;
        case 0x467e70u: goto label_467e70;
        case 0x467e74u: goto label_467e74;
        case 0x467e78u: goto label_467e78;
        case 0x467e7cu: goto label_467e7c;
        case 0x467e80u: goto label_467e80;
        case 0x467e84u: goto label_467e84;
        case 0x467e88u: goto label_467e88;
        case 0x467e8cu: goto label_467e8c;
        case 0x467e90u: goto label_467e90;
        case 0x467e94u: goto label_467e94;
        case 0x467e98u: goto label_467e98;
        case 0x467e9cu: goto label_467e9c;
        case 0x467ea0u: goto label_467ea0;
        case 0x467ea4u: goto label_467ea4;
        case 0x467ea8u: goto label_467ea8;
        case 0x467eacu: goto label_467eac;
        case 0x467eb0u: goto label_467eb0;
        case 0x467eb4u: goto label_467eb4;
        case 0x467eb8u: goto label_467eb8;
        case 0x467ebcu: goto label_467ebc;
        case 0x467ec0u: goto label_467ec0;
        case 0x467ec4u: goto label_467ec4;
        case 0x467ec8u: goto label_467ec8;
        case 0x467eccu: goto label_467ecc;
        case 0x467ed0u: goto label_467ed0;
        case 0x467ed4u: goto label_467ed4;
        case 0x467ed8u: goto label_467ed8;
        case 0x467edcu: goto label_467edc;
        case 0x467ee0u: goto label_467ee0;
        case 0x467ee4u: goto label_467ee4;
        case 0x467ee8u: goto label_467ee8;
        case 0x467eecu: goto label_467eec;
        case 0x467ef0u: goto label_467ef0;
        case 0x467ef4u: goto label_467ef4;
        case 0x467ef8u: goto label_467ef8;
        case 0x467efcu: goto label_467efc;
        case 0x467f00u: goto label_467f00;
        case 0x467f04u: goto label_467f04;
        case 0x467f08u: goto label_467f08;
        case 0x467f0cu: goto label_467f0c;
        case 0x467f10u: goto label_467f10;
        case 0x467f14u: goto label_467f14;
        case 0x467f18u: goto label_467f18;
        case 0x467f1cu: goto label_467f1c;
        case 0x467f20u: goto label_467f20;
        case 0x467f24u: goto label_467f24;
        case 0x467f28u: goto label_467f28;
        case 0x467f2cu: goto label_467f2c;
        case 0x467f30u: goto label_467f30;
        case 0x467f34u: goto label_467f34;
        case 0x467f38u: goto label_467f38;
        case 0x467f3cu: goto label_467f3c;
        case 0x467f40u: goto label_467f40;
        case 0x467f44u: goto label_467f44;
        case 0x467f48u: goto label_467f48;
        case 0x467f4cu: goto label_467f4c;
        case 0x467f50u: goto label_467f50;
        case 0x467f54u: goto label_467f54;
        case 0x467f58u: goto label_467f58;
        case 0x467f5cu: goto label_467f5c;
        case 0x467f60u: goto label_467f60;
        case 0x467f64u: goto label_467f64;
        case 0x467f68u: goto label_467f68;
        case 0x467f6cu: goto label_467f6c;
        case 0x467f70u: goto label_467f70;
        case 0x467f74u: goto label_467f74;
        case 0x467f78u: goto label_467f78;
        case 0x467f7cu: goto label_467f7c;
        case 0x467f80u: goto label_467f80;
        case 0x467f84u: goto label_467f84;
        case 0x467f88u: goto label_467f88;
        case 0x467f8cu: goto label_467f8c;
        case 0x467f90u: goto label_467f90;
        case 0x467f94u: goto label_467f94;
        case 0x467f98u: goto label_467f98;
        case 0x467f9cu: goto label_467f9c;
        case 0x467fa0u: goto label_467fa0;
        case 0x467fa4u: goto label_467fa4;
        case 0x467fa8u: goto label_467fa8;
        case 0x467facu: goto label_467fac;
        case 0x467fb0u: goto label_467fb0;
        case 0x467fb4u: goto label_467fb4;
        case 0x467fb8u: goto label_467fb8;
        case 0x467fbcu: goto label_467fbc;
        case 0x467fc0u: goto label_467fc0;
        case 0x467fc4u: goto label_467fc4;
        case 0x467fc8u: goto label_467fc8;
        case 0x467fccu: goto label_467fcc;
        case 0x467fd0u: goto label_467fd0;
        case 0x467fd4u: goto label_467fd4;
        case 0x467fd8u: goto label_467fd8;
        case 0x467fdcu: goto label_467fdc;
        case 0x467fe0u: goto label_467fe0;
        case 0x467fe4u: goto label_467fe4;
        case 0x467fe8u: goto label_467fe8;
        case 0x467fecu: goto label_467fec;
        case 0x467ff0u: goto label_467ff0;
        case 0x467ff4u: goto label_467ff4;
        case 0x467ff8u: goto label_467ff8;
        case 0x467ffcu: goto label_467ffc;
        case 0x468000u: goto label_468000;
        case 0x468004u: goto label_468004;
        case 0x468008u: goto label_468008;
        case 0x46800cu: goto label_46800c;
        case 0x468010u: goto label_468010;
        case 0x468014u: goto label_468014;
        case 0x468018u: goto label_468018;
        case 0x46801cu: goto label_46801c;
        case 0x468020u: goto label_468020;
        case 0x468024u: goto label_468024;
        case 0x468028u: goto label_468028;
        case 0x46802cu: goto label_46802c;
        case 0x468030u: goto label_468030;
        case 0x468034u: goto label_468034;
        case 0x468038u: goto label_468038;
        case 0x46803cu: goto label_46803c;
        case 0x468040u: goto label_468040;
        case 0x468044u: goto label_468044;
        case 0x468048u: goto label_468048;
        case 0x46804cu: goto label_46804c;
        case 0x468050u: goto label_468050;
        case 0x468054u: goto label_468054;
        case 0x468058u: goto label_468058;
        case 0x46805cu: goto label_46805c;
        case 0x468060u: goto label_468060;
        case 0x468064u: goto label_468064;
        case 0x468068u: goto label_468068;
        case 0x46806cu: goto label_46806c;
        case 0x468070u: goto label_468070;
        case 0x468074u: goto label_468074;
        case 0x468078u: goto label_468078;
        case 0x46807cu: goto label_46807c;
        case 0x468080u: goto label_468080;
        case 0x468084u: goto label_468084;
        case 0x468088u: goto label_468088;
        case 0x46808cu: goto label_46808c;
        case 0x468090u: goto label_468090;
        case 0x468094u: goto label_468094;
        case 0x468098u: goto label_468098;
        case 0x46809cu: goto label_46809c;
        case 0x4680a0u: goto label_4680a0;
        case 0x4680a4u: goto label_4680a4;
        case 0x4680a8u: goto label_4680a8;
        case 0x4680acu: goto label_4680ac;
        case 0x4680b0u: goto label_4680b0;
        case 0x4680b4u: goto label_4680b4;
        case 0x4680b8u: goto label_4680b8;
        case 0x4680bcu: goto label_4680bc;
        case 0x4680c0u: goto label_4680c0;
        case 0x4680c4u: goto label_4680c4;
        case 0x4680c8u: goto label_4680c8;
        case 0x4680ccu: goto label_4680cc;
        case 0x4680d0u: goto label_4680d0;
        case 0x4680d4u: goto label_4680d4;
        case 0x4680d8u: goto label_4680d8;
        case 0x4680dcu: goto label_4680dc;
        case 0x4680e0u: goto label_4680e0;
        case 0x4680e4u: goto label_4680e4;
        case 0x4680e8u: goto label_4680e8;
        case 0x4680ecu: goto label_4680ec;
        case 0x4680f0u: goto label_4680f0;
        case 0x4680f4u: goto label_4680f4;
        case 0x4680f8u: goto label_4680f8;
        case 0x4680fcu: goto label_4680fc;
        case 0x468100u: goto label_468100;
        case 0x468104u: goto label_468104;
        case 0x468108u: goto label_468108;
        case 0x46810cu: goto label_46810c;
        case 0x468110u: goto label_468110;
        case 0x468114u: goto label_468114;
        case 0x468118u: goto label_468118;
        case 0x46811cu: goto label_46811c;
        case 0x468120u: goto label_468120;
        case 0x468124u: goto label_468124;
        case 0x468128u: goto label_468128;
        case 0x46812cu: goto label_46812c;
        case 0x468130u: goto label_468130;
        case 0x468134u: goto label_468134;
        case 0x468138u: goto label_468138;
        case 0x46813cu: goto label_46813c;
        case 0x468140u: goto label_468140;
        case 0x468144u: goto label_468144;
        case 0x468148u: goto label_468148;
        case 0x46814cu: goto label_46814c;
        case 0x468150u: goto label_468150;
        case 0x468154u: goto label_468154;
        case 0x468158u: goto label_468158;
        case 0x46815cu: goto label_46815c;
        case 0x468160u: goto label_468160;
        case 0x468164u: goto label_468164;
        case 0x468168u: goto label_468168;
        case 0x46816cu: goto label_46816c;
        case 0x468170u: goto label_468170;
        case 0x468174u: goto label_468174;
        case 0x468178u: goto label_468178;
        case 0x46817cu: goto label_46817c;
        case 0x468180u: goto label_468180;
        case 0x468184u: goto label_468184;
        case 0x468188u: goto label_468188;
        case 0x46818cu: goto label_46818c;
        case 0x468190u: goto label_468190;
        case 0x468194u: goto label_468194;
        case 0x468198u: goto label_468198;
        case 0x46819cu: goto label_46819c;
        case 0x4681a0u: goto label_4681a0;
        case 0x4681a4u: goto label_4681a4;
        case 0x4681a8u: goto label_4681a8;
        case 0x4681acu: goto label_4681ac;
        case 0x4681b0u: goto label_4681b0;
        case 0x4681b4u: goto label_4681b4;
        case 0x4681b8u: goto label_4681b8;
        case 0x4681bcu: goto label_4681bc;
        case 0x4681c0u: goto label_4681c0;
        case 0x4681c4u: goto label_4681c4;
        case 0x4681c8u: goto label_4681c8;
        case 0x4681ccu: goto label_4681cc;
        default: break;
    }

    ctx->pc = 0x467440u;

label_467440:
    // 0x467440: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x467440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_467444:
    // 0x467444: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x467444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_467448:
    // 0x467448: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x467448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_46744c:
    // 0x46744c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x46744cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_467450:
    // 0x467450: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x467450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_467454:
    // 0x467454: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x467454u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_467458:
    // 0x467458: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x467458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_46745c:
    // 0x46745c: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x46745cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_467460:
    // 0x467460: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x467460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_467464:
    // 0x467464: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x467464u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_467468:
    // 0x467468: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x467468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_46746c:
    // 0x46746c: 0x2c21004  sllv        $v0, $v0, $s6
    ctx->pc = 0x46746cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 22) & 0x1F));
label_467470:
    // 0x467470: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x467470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_467474:
    // 0x467474: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x467474u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_467478:
    // 0x467478: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x467478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_46747c:
    // 0x46747c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x46747cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_467480:
    // 0x467480: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x467480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_467484:
    // 0x467484: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x467484u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_467488:
    // 0x467488: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x467488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_46748c:
    // 0x46748c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x46748cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_467490:
    // 0x467490: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x467490u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_467494:
    // 0x467494: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x467494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_467498:
    // 0x467498: 0x9083004d  lbu         $v1, 0x4D($a0)
    ctx->pc = 0x467498u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 77)));
label_46749c:
    // 0x46749c: 0x401027  not         $v0, $v0
    ctx->pc = 0x46749cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_4674a0:
    // 0x4674a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4674a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4674a4:
    // 0x4674a4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4674a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4674a8:
    // 0x4674a8: 0xa082004d  sb          $v0, 0x4D($a0)
    ctx->pc = 0x4674a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 2));
label_4674ac:
    // 0x4674ac: 0x8c900040  lw          $s0, 0x40($a0)
    ctx->pc = 0x4674acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_4674b0:
    // 0x4674b0: 0x8d63009c  lw          $v1, 0x9C($t3)
    ctx->pc = 0x4674b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 156)));
label_4674b4:
    // 0x4674b4: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x4674b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_4674b8:
    // 0x4674b8: 0x1070001a  beq         $v1, $s0, . + 4 + (0x1A << 2)
label_4674bc:
    if (ctx->pc == 0x4674BCu) {
        ctx->pc = 0x4674BCu;
            // 0x4674bc: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x4674C0u;
        goto label_4674c0;
    }
    ctx->pc = 0x4674B8u;
    {
        const bool branch_taken_0x4674b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x4674BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4674B8u;
            // 0x4674bc: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4674b8) {
            ctx->pc = 0x467524u;
            goto label_467524;
        }
    }
    ctx->pc = 0x4674C0u;
label_4674c0:
    // 0x4674c0: 0x8ee20090  lw          $v0, 0x90($s7)
    ctx->pc = 0x4674c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 144)));
label_4674c4:
    // 0x4674c4: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4674c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4674c8:
    // 0x4674c8: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
label_4674cc:
    if (ctx->pc == 0x4674CCu) {
        ctx->pc = 0x4674D0u;
        goto label_4674d0;
    }
    ctx->pc = 0x4674C8u;
    {
        const bool branch_taken_0x4674c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4674c8) {
            ctx->pc = 0x467508u;
            goto label_467508;
        }
    }
    ctx->pc = 0x4674D0u;
label_4674d0:
    // 0x4674d0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x4674d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4674d4:
    // 0x4674d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4674d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4674d8:
    // 0x4674d8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x4674d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_4674dc:
    // 0x4674dc: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x4674dcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_4674e0:
    // 0x4674e0: 0x19200009  blez        $t1, . + 4 + (0x9 << 2)
label_4674e4:
    if (ctx->pc == 0x4674E4u) {
        ctx->pc = 0x4674E4u;
            // 0x4674e4: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x4674E8u;
        goto label_4674e8;
    }
    ctx->pc = 0x4674E0u;
    {
        const bool branch_taken_0x4674e0 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x4674E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4674E0u;
            // 0x4674e4: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4674e0) {
            ctx->pc = 0x467508u;
            goto label_467508;
        }
    }
    ctx->pc = 0x4674E8u;
label_4674e8:
    // 0x4674e8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4674e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4674ec:
    // 0x4674ec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4674ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4674f0:
    // 0x4674f0: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x4674f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_4674f4:
    // 0x4674f4: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4674f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4674f8:
    // 0x4674f8: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x4674f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_4674fc:
    // 0x4674fc: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x4674fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_467500:
    // 0x467500: 0xc055ea8  jal         func_157AA0
label_467504:
    if (ctx->pc == 0x467504u) {
        ctx->pc = 0x467504u;
            // 0x467504: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x467508u;
        goto label_467508;
    }
    ctx->pc = 0x467500u;
    SET_GPR_U32(ctx, 31, 0x467508u);
    ctx->pc = 0x467504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x467500u;
            // 0x467504: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467508u; }
        if (ctx->pc != 0x467508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467508u; }
        if (ctx->pc != 0x467508u) { return; }
    }
    ctx->pc = 0x467508u;
label_467508:
    // 0x467508: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x467508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_46750c:
    // 0x46750c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x46750cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_467510:
    // 0x467510: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x467510u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_467514:
    // 0x467514: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x467514u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_467518:
    // 0x467518: 0xc04e738  jal         func_139CE0
label_46751c:
    if (ctx->pc == 0x46751Cu) {
        ctx->pc = 0x46751Cu;
            // 0x46751c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x467520u;
        goto label_467520;
    }
    ctx->pc = 0x467518u;
    SET_GPR_U32(ctx, 31, 0x467520u);
    ctx->pc = 0x46751Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x467518u;
            // 0x46751c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467520u; }
        if (ctx->pc != 0x467520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467520u; }
        if (ctx->pc != 0x467520u) { return; }
    }
    ctx->pc = 0x467520u;
label_467520:
    // 0x467520: 0xaef0009c  sw          $s0, 0x9C($s7)
    ctx->pc = 0x467520u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 156), GPR_U32(ctx, 16));
label_467524:
    // 0x467524: 0x92a20090  lbu         $v0, 0x90($s5)
    ctx->pc = 0x467524u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 144)));
label_467528:
    // 0x467528: 0x1040009c  beqz        $v0, . + 4 + (0x9C << 2)
label_46752c:
    if (ctx->pc == 0x46752Cu) {
        ctx->pc = 0x467530u;
        goto label_467530;
    }
    ctx->pc = 0x467528u;
    {
        const bool branch_taken_0x467528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x467528) {
            ctx->pc = 0x46779Cu;
            goto label_46779c;
        }
    }
    ctx->pc = 0x467530u;
label_467530:
    // 0x467530: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x467530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_467534:
    // 0x467534: 0xc04f278  jal         func_13C9E0
label_467538:
    if (ctx->pc == 0x467538u) {
        ctx->pc = 0x467538u;
            // 0x467538: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x46753Cu;
        goto label_46753c;
    }
    ctx->pc = 0x467534u;
    SET_GPR_U32(ctx, 31, 0x46753Cu);
    ctx->pc = 0x467538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x467534u;
            // 0x467538: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46753Cu; }
        if (ctx->pc != 0x46753Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46753Cu; }
        if (ctx->pc != 0x46753Cu) { return; }
    }
    ctx->pc = 0x46753Cu;
label_46753c:
    // 0x46753c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x46753cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_467540:
    // 0x467540: 0xc04ce80  jal         func_133A00
label_467544:
    if (ctx->pc == 0x467544u) {
        ctx->pc = 0x467544u;
            // 0x467544: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->pc = 0x467548u;
        goto label_467548;
    }
    ctx->pc = 0x467540u;
    SET_GPR_U32(ctx, 31, 0x467548u);
    ctx->pc = 0x467544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x467540u;
            // 0x467544: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467548u; }
        if (ctx->pc != 0x467548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467548u; }
        if (ctx->pc != 0x467548u) { return; }
    }
    ctx->pc = 0x467548u;
label_467548:
    // 0x467548: 0xc6ac00dc  lwc1        $f12, 0xDC($s5)
    ctx->pc = 0x467548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_46754c:
    // 0x46754c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x46754cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_467550:
    // 0x467550: 0xc6ad00e0  lwc1        $f13, 0xE0($s5)
    ctx->pc = 0x467550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_467554:
    // 0x467554: 0xc6ae00e4  lwc1        $f14, 0xE4($s5)
    ctx->pc = 0x467554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_467558:
    // 0x467558: 0xc04ce50  jal         func_133940
label_46755c:
    if (ctx->pc == 0x46755Cu) {
        ctx->pc = 0x46755Cu;
            // 0x46755c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x467560u;
        goto label_467560;
    }
    ctx->pc = 0x467558u;
    SET_GPR_U32(ctx, 31, 0x467560u);
    ctx->pc = 0x46755Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x467558u;
            // 0x46755c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467560u; }
        if (ctx->pc != 0x467560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467560u; }
        if (ctx->pc != 0x467560u) { return; }
    }
    ctx->pc = 0x467560u;
label_467560:
    // 0x467560: 0xc0d4108  jal         func_350420
label_467564:
    if (ctx->pc == 0x467564u) {
        ctx->pc = 0x467564u;
            // 0x467564: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x467568u;
        goto label_467568;
    }
    ctx->pc = 0x467560u;
    SET_GPR_U32(ctx, 31, 0x467568u);
    ctx->pc = 0x467564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x467560u;
            // 0x467564: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467568u; }
        if (ctx->pc != 0x467568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467568u; }
        if (ctx->pc != 0x467568u) { return; }
    }
    ctx->pc = 0x467568u;
label_467568:
    // 0x467568: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x467568u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46756c:
    // 0x46756c: 0xc0d4104  jal         func_350410
label_467570:
    if (ctx->pc == 0x467570u) {
        ctx->pc = 0x467570u;
            // 0x467570: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x467574u;
        goto label_467574;
    }
    ctx->pc = 0x46756Cu;
    SET_GPR_U32(ctx, 31, 0x467574u);
    ctx->pc = 0x467570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46756Cu;
            // 0x467570: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467574u; }
        if (ctx->pc != 0x467574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467574u; }
        if (ctx->pc != 0x467574u) { return; }
    }
    ctx->pc = 0x467574u;
label_467574:
    // 0x467574: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x467574u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_467578:
    // 0x467578: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x467578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_46757c:
    // 0x46757c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x46757cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_467580:
    // 0x467580: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x467580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_467584:
    // 0x467584: 0xc44ce858  lwc1        $f12, -0x17A8($v0)
    ctx->pc = 0x467584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_467588:
    // 0x467588: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x467588u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46758c:
    // 0x46758c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x46758cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_467590:
    // 0x467590: 0xc0d40ac  jal         func_3502B0
label_467594:
    if (ctx->pc == 0x467594u) {
        ctx->pc = 0x467594u;
            // 0x467594: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x467598u;
        goto label_467598;
    }
    ctx->pc = 0x467590u;
    SET_GPR_U32(ctx, 31, 0x467598u);
    ctx->pc = 0x467594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x467590u;
            // 0x467594: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467598u; }
        if (ctx->pc != 0x467598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467598u; }
        if (ctx->pc != 0x467598u) { return; }
    }
    ctx->pc = 0x467598u;
label_467598:
    // 0x467598: 0xaea20044  sw          $v0, 0x44($s5)
    ctx->pc = 0x467598u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 2));
label_46759c:
    // 0x46759c: 0x28500002  slti        $s0, $v0, 0x2
    ctx->pc = 0x46759cu;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_4675a0:
    // 0x4675a0: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x4675a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_4675a4:
    // 0x4675a4: 0x26a4004d  addiu       $a0, $s5, 0x4D
    ctx->pc = 0x4675a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 77));
label_4675a8:
    // 0x4675a8: 0x27a500cc  addiu       $a1, $sp, 0xCC
    ctx->pc = 0x4675a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
label_4675ac:
    // 0x4675ac: 0x501018  mult        $v0, $v0, $s0
    ctx->pc = 0x4675acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4675b0:
    // 0x4675b0: 0xc0d590c  jal         func_356430
label_4675b4:
    if (ctx->pc == 0x4675B4u) {
        ctx->pc = 0x4675B4u;
            // 0x4675b4: 0xafa200cc  sw          $v0, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
        ctx->pc = 0x4675B8u;
        goto label_4675b8;
    }
    ctx->pc = 0x4675B0u;
    SET_GPR_U32(ctx, 31, 0x4675B8u);
    ctx->pc = 0x4675B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4675B0u;
            // 0x4675b4: 0xafa200cc  sw          $v0, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x356430u;
    if (runtime->hasFunction(0x356430u)) {
        auto targetFn = runtime->lookupFunction(0x356430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4675B8u; }
        if (ctx->pc != 0x4675B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00356430_0x356430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4675B8u; }
        if (ctx->pc != 0x4675B8u) { return; }
    }
    ctx->pc = 0x4675B8u;
label_4675b8:
    // 0x4675b8: 0x5200009a  beql        $s0, $zero, . + 4 + (0x9A << 2)
label_4675bc:
    if (ctx->pc == 0x4675BCu) {
        ctx->pc = 0x4675BCu;
            // 0x4675bc: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x4675C0u;
        goto label_4675c0;
    }
    ctx->pc = 0x4675B8u;
    {
        const bool branch_taken_0x4675b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4675b8) {
            ctx->pc = 0x4675BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4675B8u;
            // 0x4675bc: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x467824u;
            goto label_467824;
        }
    }
    ctx->pc = 0x4675C0u;
label_4675c0:
    // 0x4675c0: 0xc6a10030  lwc1        $f1, 0x30($s5)
    ctx->pc = 0x4675c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4675c4:
    // 0x4675c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4675c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4675c8:
    // 0x4675c8: 0x0  nop
    ctx->pc = 0x4675c8u;
    // NOP
label_4675cc:
    // 0x4675cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4675ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4675d0:
    // 0x4675d0: 0x4501003b  bc1t        . + 4 + (0x3B << 2)
label_4675d4:
    if (ctx->pc == 0x4675D4u) {
        ctx->pc = 0x4675D4u;
            // 0x4675d4: 0x26a6006c  addiu       $a2, $s5, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 108));
        ctx->pc = 0x4675D8u;
        goto label_4675d8;
    }
    ctx->pc = 0x4675D0u;
    {
        const bool branch_taken_0x4675d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4675D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4675D0u;
            // 0x4675d4: 0x26a6006c  addiu       $a2, $s5, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4675d0) {
            ctx->pc = 0x4676C0u;
            goto label_4676c0;
        }
    }
    ctx->pc = 0x4675D8u;
label_4675d8:
    // 0x4675d8: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x4675d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_4675dc:
    // 0x4675dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4675dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4675e0:
    // 0x4675e0: 0x14620037  bne         $v1, $v0, . + 4 + (0x37 << 2)
label_4675e4:
    if (ctx->pc == 0x4675E4u) {
        ctx->pc = 0x4675E8u;
        goto label_4675e8;
    }
    ctx->pc = 0x4675E0u;
    {
        const bool branch_taken_0x4675e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4675e0) {
            ctx->pc = 0x4676C0u;
            goto label_4676c0;
        }
    }
    ctx->pc = 0x4675E8u;
label_4675e8:
    // 0x4675e8: 0xc4d40008  lwc1        $f20, 0x8($a2)
    ctx->pc = 0x4675e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4675ec:
    // 0x4675ec: 0x24d00008  addiu       $s0, $a2, 0x8
    ctx->pc = 0x4675ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_4675f0:
    // 0x4675f0: 0xc049514  jal         func_125450
label_4675f4:
    if (ctx->pc == 0x4675F4u) {
        ctx->pc = 0x4675F4u;
            // 0x4675f4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x4675F8u;
        goto label_4675f8;
    }
    ctx->pc = 0x4675F0u;
    SET_GPR_U32(ctx, 31, 0x4675F8u);
    ctx->pc = 0x4675F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4675F0u;
            // 0x4675f4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4675F8u; }
        if (ctx->pc != 0x4675F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4675F8u; }
        if (ctx->pc != 0x4675F8u) { return; }
    }
    ctx->pc = 0x4675F8u;
label_4675f8:
    // 0x4675f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4675f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4675fc:
    // 0x4675fc: 0xc04020c  jal         func_100830
label_467600:
    if (ctx->pc == 0x467600u) {
        ctx->pc = 0x467600u;
            // 0x467600: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x467604u;
        goto label_467604;
    }
    ctx->pc = 0x4675FCu;
    SET_GPR_U32(ctx, 31, 0x467604u);
    ctx->pc = 0x467600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4675FCu;
            // 0x467600: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100830u;
    if (runtime->hasFunction(0x100830u)) {
        auto targetFn = runtime->lookupFunction(0x100830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467604u; }
        if (ctx->pc != 0x467604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100830_0x100830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467604u; }
        if (ctx->pc != 0x467604u) { return; }
    }
    ctx->pc = 0x467604u;
label_467604:
    // 0x467604: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_467608:
    if (ctx->pc == 0x467608u) {
        ctx->pc = 0x46760Cu;
        goto label_46760c;
    }
    ctx->pc = 0x467604u;
    {
        const bool branch_taken_0x467604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x467604) {
            ctx->pc = 0x467628u;
            goto label_467628;
        }
    }
    ctx->pc = 0x46760Cu;
label_46760c:
    // 0x46760c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x46760cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_467610:
    // 0x467610: 0x0  nop
    ctx->pc = 0x467610u;
    // NOP
label_467614:
    // 0x467614: 0x4600a303  div.s       $f12, $f20, $f0
    ctx->pc = 0x467614u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[0];
label_467618:
    // 0x467618: 0x0  nop
    ctx->pc = 0x467618u;
    // NOP
label_46761c:
    // 0x46761c: 0x0  nop
    ctx->pc = 0x46761cu;
    // NOP
label_467620:
    // 0x467620: 0x10000002  b           . + 4 + (0x2 << 2)
label_467624:
    if (ctx->pc == 0x467624u) {
        ctx->pc = 0x467628u;
        goto label_467628;
    }
    ctx->pc = 0x467620u;
    {
        const bool branch_taken_0x467620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x467620) {
            ctx->pc = 0x46762Cu;
            goto label_46762c;
        }
    }
    ctx->pc = 0x467628u;
label_467628:
    // 0x467628: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x467628u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_46762c:
    // 0x46762c: 0xc054c3c  jal         func_1530F0
label_467630:
    if (ctx->pc == 0x467630u) {
        ctx->pc = 0x467630u;
            // 0x467630: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x467634u;
        goto label_467634;
    }
    ctx->pc = 0x46762Cu;
    SET_GPR_U32(ctx, 31, 0x467634u);
    ctx->pc = 0x467630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46762Cu;
            // 0x467630: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530F0u;
    if (runtime->hasFunction(0x1530F0u)) {
        auto targetFn = runtime->lookupFunction(0x1530F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467634u; }
        if (ctx->pc != 0x467634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530F0_0x1530f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467634u; }
        if (ctx->pc != 0x467634u) { return; }
    }
    ctx->pc = 0x467634u;
label_467634:
    // 0x467634: 0xc054c40  jal         func_153100
label_467638:
    if (ctx->pc == 0x467638u) {
        ctx->pc = 0x467638u;
            // 0x467638: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46763Cu;
        goto label_46763c;
    }
    ctx->pc = 0x467634u;
    SET_GPR_U32(ctx, 31, 0x46763Cu);
    ctx->pc = 0x467638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x467634u;
            // 0x467638: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153100u;
    if (runtime->hasFunction(0x153100u)) {
        auto targetFn = runtime->lookupFunction(0x153100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46763Cu; }
        if (ctx->pc != 0x46763Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153100_0x153100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46763Cu; }
        if (ctx->pc != 0x46763Cu) { return; }
    }
    ctx->pc = 0x46763Cu;
label_46763c:
    // 0x46763c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x46763cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_467640:
    // 0x467640: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x467640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_467644:
    // 0x467644: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x467644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_467648:
    // 0x467648: 0xc04e4a4  jal         func_139290
label_46764c:
    if (ctx->pc == 0x46764Cu) {
        ctx->pc = 0x46764Cu;
            // 0x46764c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x467650u;
        goto label_467650;
    }
    ctx->pc = 0x467648u;
    SET_GPR_U32(ctx, 31, 0x467650u);
    ctx->pc = 0x46764Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x467648u;
            // 0x46764c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467650u; }
        if (ctx->pc != 0x467650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467650u; }
        if (ctx->pc != 0x467650u) { return; }
    }
    ctx->pc = 0x467650u;
label_467650:
    // 0x467650: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x467650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_467654:
    // 0x467654: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x467654u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_467658:
    // 0x467658: 0xc04cd60  jal         func_133580
label_46765c:
    if (ctx->pc == 0x46765Cu) {
        ctx->pc = 0x46765Cu;
            // 0x46765c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x467660u;
        goto label_467660;
    }
    ctx->pc = 0x467658u;
    SET_GPR_U32(ctx, 31, 0x467660u);
    ctx->pc = 0x46765Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x467658u;
            // 0x46765c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467660u; }
        if (ctx->pc != 0x467660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467660u; }
        if (ctx->pc != 0x467660u) { return; }
    }
    ctx->pc = 0x467660u;
label_467660:
    // 0x467660: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x467660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_467664:
    // 0x467664: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x467664u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_467668:
    // 0x467668: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x467668u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_46766c:
    // 0x46766c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x46766cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_467670:
    // 0x467670: 0x320f809  jalr        $t9
label_467674:
    if (ctx->pc == 0x467674u) {
        ctx->pc = 0x467674u;
            // 0x467674: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x467678u;
        goto label_467678;
    }
    ctx->pc = 0x467670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x467678u);
        ctx->pc = 0x467674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x467670u;
            // 0x467674: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x467678u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x467678u; }
            if (ctx->pc != 0x467678u) { return; }
        }
        }
    }
    ctx->pc = 0x467678u;
label_467678:
    // 0x467678: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x467678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_46767c:
    // 0x46767c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x46767cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_467680:
    // 0x467680: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x467680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_467684:
    // 0x467684: 0xc054fd4  jal         func_153F50
label_467688:
    if (ctx->pc == 0x467688u) {
        ctx->pc = 0x467688u;
            // 0x467688: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46768Cu;
        goto label_46768c;
    }
    ctx->pc = 0x467684u;
    SET_GPR_U32(ctx, 31, 0x46768Cu);
    ctx->pc = 0x467688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x467684u;
            // 0x467688: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46768Cu; }
        if (ctx->pc != 0x46768Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46768Cu; }
        if (ctx->pc != 0x46768Cu) { return; }
    }
    ctx->pc = 0x46768Cu;
label_46768c:
    // 0x46768c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x46768cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_467690:
    // 0x467690: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x467690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_467694:
    // 0x467694: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x467694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_467698:
    // 0x467698: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x467698u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_46769c:
    // 0x46769c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x46769cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4676a0:
    // 0x4676a0: 0xc055234  jal         func_1548D0
label_4676a4:
    if (ctx->pc == 0x4676A4u) {
        ctx->pc = 0x4676A4u;
            // 0x4676a4: 0x34480080  ori         $t0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->pc = 0x4676A8u;
        goto label_4676a8;
    }
    ctx->pc = 0x4676A0u;
    SET_GPR_U32(ctx, 31, 0x4676A8u);
    ctx->pc = 0x4676A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4676A0u;
            // 0x4676a4: 0x34480080  ori         $t0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1548D0u;
    if (runtime->hasFunction(0x1548D0u)) {
        auto targetFn = runtime->lookupFunction(0x1548D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4676A8u; }
        if (ctx->pc != 0x4676A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001548D0_0x1548d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4676A8u; }
        if (ctx->pc != 0x4676A8u) { return; }
    }
    ctx->pc = 0x4676A8u;
label_4676a8:
    // 0x4676a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4676a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4676ac:
    // 0x4676ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4676acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4676b0:
    // 0x4676b0: 0xc054c3c  jal         func_1530F0
label_4676b4:
    if (ctx->pc == 0x4676B4u) {
        ctx->pc = 0x4676B4u;
            // 0x4676b4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4676B8u;
        goto label_4676b8;
    }
    ctx->pc = 0x4676B0u;
    SET_GPR_U32(ctx, 31, 0x4676B8u);
    ctx->pc = 0x4676B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4676B0u;
            // 0x4676b4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530F0u;
    if (runtime->hasFunction(0x1530F0u)) {
        auto targetFn = runtime->lookupFunction(0x1530F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4676B8u; }
        if (ctx->pc != 0x4676B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530F0_0x1530f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4676B8u; }
        if (ctx->pc != 0x4676B8u) { return; }
    }
    ctx->pc = 0x4676B8u;
label_4676b8:
    // 0x4676b8: 0x10000059  b           . + 4 + (0x59 << 2)
label_4676bc:
    if (ctx->pc == 0x4676BCu) {
        ctx->pc = 0x4676C0u;
        goto label_4676c0;
    }
    ctx->pc = 0x4676B8u;
    {
        const bool branch_taken_0x4676b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4676b8) {
            ctx->pc = 0x467820u;
            goto label_467820;
        }
    }
    ctx->pc = 0x4676C0u;
label_4676c0:
    // 0x4676c0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4676c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4676c4:
    // 0x4676c4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4676c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4676c8:
    // 0x4676c8: 0x8c66e3c0  lw          $a2, -0x1C40($v1)
    ctx->pc = 0x4676c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4676cc:
    // 0x4676cc: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4676ccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_4676d0:
    // 0x4676d0: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x4676d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_4676d4:
    // 0x4676d4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4676d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4676d8:
    // 0x4676d8: 0x65880  sll         $t3, $a2, 2
    ctx->pc = 0x4676d8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4676dc:
    // 0x4676dc: 0x8c65e3d8  lw          $a1, -0x1C28($v1)
    ctx->pc = 0x4676dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_4676e0:
    // 0x4676e0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4676e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4676e4:
    // 0x4676e4: 0x53180  sll         $a2, $a1, 6
    ctx->pc = 0x4676e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_4676e8:
    // 0x4676e8: 0x8c64e360  lw          $a0, -0x1CA0($v1)
    ctx->pc = 0x4676e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_4676ec:
    // 0x4676ec: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x4676ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_4676f0:
    // 0x4676f0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4676f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4676f4:
    // 0x4676f4: 0x86a021  addu        $s4, $a0, $a2
    ctx->pc = 0x4676f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_4676f8:
    // 0x4676f8: 0x8c63e3b0  lw          $v1, -0x1C50($v1)
    ctx->pc = 0x4676f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_4676fc:
    // 0x4676fc: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x4676fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_467700:
    // 0x467700: 0x6b3021  addu        $a2, $v1, $t3
    ctx->pc = 0x467700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_467704:
    // 0x467704: 0xacd40000  sw          $s4, 0x0($a2)
    ctx->pc = 0x467704u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 20));
label_467708:
    // 0x467708: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x467708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_46770c:
    // 0x46770c: 0x8c89e378  lw          $t1, -0x1C88($a0)
    ctx->pc = 0x46770cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294959992)));
label_467710:
    // 0x467710: 0x8ca6e3d8  lw          $a2, -0x1C28($a1)
    ctx->pc = 0x467710u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960088)));
label_467714:
    // 0x467714: 0x8c64e3b8  lw          $a0, -0x1C48($v1)
    ctx->pc = 0x467714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960056)));
label_467718:
    // 0x467718: 0x65080  sll         $t2, $a2, 2
    ctx->pc = 0x467718u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_46771c:
    // 0x46771c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x46771cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_467720:
    // 0x467720: 0x12a9821  addu        $s3, $t1, $t2
    ctx->pc = 0x467720u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_467724:
    // 0x467724: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x467724u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_467728:
    // 0x467728: 0x8b4821  addu        $t1, $a0, $t3
    ctx->pc = 0x467728u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_46772c:
    // 0x46772c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x46772cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_467730:
    // 0x467730: 0xad330000  sw          $s3, 0x0($t1)
    ctx->pc = 0x467730u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 19));
label_467734:
    // 0x467734: 0x8c490028  lw          $t1, 0x28($v0)
    ctx->pc = 0x467734u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_467738:
    // 0x467738: 0x8d08e3d8  lw          $t0, -0x1C28($t0)
    ctx->pc = 0x467738u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_46773c:
    // 0x46773c: 0x8ca2e3c0  lw          $v0, -0x1C40($a1)
    ctx->pc = 0x46773cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_467740:
    // 0x467740: 0x1092821  addu        $a1, $t0, $t1
    ctx->pc = 0x467740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_467744:
    // 0x467744: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x467744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_467748:
    // 0x467748: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x467748u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_46774c:
    // 0x46774c: 0xac62e3c0  sw          $v0, -0x1C40($v1)
    ctx->pc = 0x46774cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 2));
label_467750:
    // 0x467750: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x467750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_467754:
    // 0x467754: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x467754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_467758:
    // 0x467758: 0xc04e4a4  jal         func_139290
label_46775c:
    if (ctx->pc == 0x46775Cu) {
        ctx->pc = 0x46775Cu;
            // 0x46775c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x467760u;
        goto label_467760;
    }
    ctx->pc = 0x467758u;
    SET_GPR_U32(ctx, 31, 0x467760u);
    ctx->pc = 0x46775Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x467758u;
            // 0x46775c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467760u; }
        if (ctx->pc != 0x467760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467760u; }
        if (ctx->pc != 0x467760u) { return; }
    }
    ctx->pc = 0x467760u;
label_467760:
    // 0x467760: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x467760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_467764:
    // 0x467764: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x467764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_467768:
    // 0x467768: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x467768u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46776c:
    // 0x46776c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x46776cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_467770:
    // 0x467770: 0xc04cd60  jal         func_133580
label_467774:
    if (ctx->pc == 0x467774u) {
        ctx->pc = 0x467774u;
            // 0x467774: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x467778u;
        goto label_467778;
    }
    ctx->pc = 0x467770u;
    SET_GPR_U32(ctx, 31, 0x467778u);
    ctx->pc = 0x467774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x467770u;
            // 0x467774: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467778u; }
        if (ctx->pc != 0x467778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467778u; }
        if (ctx->pc != 0x467778u) { return; }
    }
    ctx->pc = 0x467778u;
label_467778:
    // 0x467778: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x467778u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_46777c:
    // 0x46777c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x46777cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_467780:
    // 0x467780: 0x320f809  jalr        $t9
label_467784:
    if (ctx->pc == 0x467784u) {
        ctx->pc = 0x467784u;
            // 0x467784: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x467788u;
        goto label_467788;
    }
    ctx->pc = 0x467780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x467788u);
        ctx->pc = 0x467784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x467780u;
            // 0x467784: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x467788u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x467788u; }
            if (ctx->pc != 0x467788u) { return; }
        }
        }
    }
    ctx->pc = 0x467788u;
label_467788:
    // 0x467788: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x467788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_46778c:
    // 0x46778c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x46778cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_467790:
    // 0x467790: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x467790u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_467794:
    // 0x467794: 0xc054fd4  jal         func_153F50
label_467798:
    if (ctx->pc == 0x467798u) {
        ctx->pc = 0x467798u;
            // 0x467798: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46779Cu;
        goto label_46779c;
    }
    ctx->pc = 0x467794u;
    SET_GPR_U32(ctx, 31, 0x46779Cu);
    ctx->pc = 0x467798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x467794u;
            // 0x467798: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46779Cu; }
        if (ctx->pc != 0x46779Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46779Cu; }
        if (ctx->pc != 0x46779Cu) { return; }
    }
    ctx->pc = 0x46779Cu;
label_46779c:
    // 0x46779c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x46779cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4677a0:
    // 0x4677a0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4677a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4677a4:
    // 0x4677a4: 0xc44ce858  lwc1        $f12, -0x17A8($v0)
    ctx->pc = 0x4677a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4677a8:
    // 0x4677a8: 0x8ea4009c  lw          $a0, 0x9C($s5)
    ctx->pc = 0x4677a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 156)));
label_4677ac:
    // 0x4677ac: 0xc0e31f8  jal         func_38C7E0
label_4677b0:
    if (ctx->pc == 0x4677B0u) {
        ctx->pc = 0x4677B0u;
            // 0x4677b0: 0x26a60030  addiu       $a2, $s5, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
        ctx->pc = 0x4677B4u;
        goto label_4677b4;
    }
    ctx->pc = 0x4677ACu;
    SET_GPR_U32(ctx, 31, 0x4677B4u);
    ctx->pc = 0x4677B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4677ACu;
            // 0x4677b0: 0x26a60030  addiu       $a2, $s5, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38C7E0u;
    if (runtime->hasFunction(0x38C7E0u)) {
        auto targetFn = runtime->lookupFunction(0x38C7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4677B4u; }
        if (ctx->pc != 0x4677B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038C7E0_0x38c7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4677B4u; }
        if (ctx->pc != 0x4677B4u) { return; }
    }
    ctx->pc = 0x4677B4u;
label_4677b4:
    // 0x4677b4: 0xc6a100e8  lwc1        $f1, 0xE8($s5)
    ctx->pc = 0x4677b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4677b8:
    // 0x4677b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4677b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4677bc:
    // 0x4677bc: 0x0  nop
    ctx->pc = 0x4677bcu;
    // NOP
label_4677c0:
    // 0x4677c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4677c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4677c4:
    // 0x4677c4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_4677c8:
    if (ctx->pc == 0x4677C8u) {
        ctx->pc = 0x4677C8u;
            // 0x4677c8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4677CCu;
        goto label_4677cc;
    }
    ctx->pc = 0x4677C4u;
    {
        const bool branch_taken_0x4677c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4677C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4677C4u;
            // 0x4677c8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4677c4) {
            ctx->pc = 0x4677D0u;
            goto label_4677d0;
        }
    }
    ctx->pc = 0x4677CCu;
label_4677cc:
    // 0x4677cc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4677ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4677d0:
    // 0x4677d0: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_4677d4:
    if (ctx->pc == 0x4677D4u) {
        ctx->pc = 0x4677D4u;
            // 0x4677d4: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x4677D8u;
        goto label_4677d8;
    }
    ctx->pc = 0x4677D0u;
    {
        const bool branch_taken_0x4677d0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x4677d0) {
            ctx->pc = 0x4677D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4677D0u;
            // 0x4677d4: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4677E4u;
            goto label_4677e4;
        }
    }
    ctx->pc = 0x4677D8u;
label_4677d8:
    // 0x4677d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4677d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4677dc:
    // 0x4677dc: 0x10000007  b           . + 4 + (0x7 << 2)
label_4677e0:
    if (ctx->pc == 0x4677E0u) {
        ctx->pc = 0x4677E0u;
            // 0x4677e0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4677E4u;
        goto label_4677e4;
    }
    ctx->pc = 0x4677DCu;
    {
        const bool branch_taken_0x4677dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4677E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4677DCu;
            // 0x4677e0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4677dc) {
            ctx->pc = 0x4677FCu;
            goto label_4677fc;
        }
    }
    ctx->pc = 0x4677E4u;
label_4677e4:
    // 0x4677e4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4677e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_4677e8:
    // 0x4677e8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4677e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4677ec:
    // 0x4677ec: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4677ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4677f0:
    // 0x4677f0: 0x0  nop
    ctx->pc = 0x4677f0u;
    // NOP
label_4677f4:
    // 0x4677f4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x4677f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_4677f8:
    // 0x4677f8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x4677f8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_4677fc:
    // 0x4677fc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4677fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_467800:
    // 0x467800: 0xc6a100e8  lwc1        $f1, 0xE8($s5)
    ctx->pc = 0x467800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_467804:
    // 0x467804: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x467804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_467808:
    // 0x467808: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x467808u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_46780c:
    // 0x46780c: 0x0  nop
    ctx->pc = 0x46780cu;
    // NOP
label_467810:
    // 0x467810: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x467810u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_467814:
    // 0x467814: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x467814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_467818:
    // 0x467818: 0x4600101d  msub.s      $f0, $f2, $f0
    ctx->pc = 0x467818u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_46781c:
    // 0x46781c: 0xe6a000e8  swc1        $f0, 0xE8($s5)
    ctx->pc = 0x46781cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 232), bits); }
label_467820:
    // 0x467820: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x467820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_467824:
    // 0x467824: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x467824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_467828:
    // 0x467828: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x467828u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_46782c:
    // 0x46782c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x46782cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_467830:
    // 0x467830: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x467830u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_467834:
    // 0x467834: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x467834u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_467838:
    // 0x467838: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x467838u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_46783c:
    // 0x46783c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x46783cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_467840:
    // 0x467840: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x467840u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_467844:
    // 0x467844: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x467844u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_467848:
    // 0x467848: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x467848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_46784c:
    // 0x46784c: 0x3e00008  jr          $ra
label_467850:
    if (ctx->pc == 0x467850u) {
        ctx->pc = 0x467850u;
            // 0x467850: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x467854u;
        goto label_467854;
    }
    ctx->pc = 0x46784Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x467850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46784Cu;
            // 0x467850: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x467854u;
label_467854:
    // 0x467854: 0x0  nop
    ctx->pc = 0x467854u;
    // NOP
label_467858:
    // 0x467858: 0x0  nop
    ctx->pc = 0x467858u;
    // NOP
label_46785c:
    // 0x46785c: 0x0  nop
    ctx->pc = 0x46785cu;
    // NOP
label_467860:
    // 0x467860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x467860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_467864:
    // 0x467864: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x467864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_467868:
    // 0x467868: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x467868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_46786c:
    // 0x46786c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46786cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_467870:
    // 0x467870: 0x8c8500d0  lw          $a1, 0xD0($a0)
    ctx->pc = 0x467870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_467874:
    // 0x467874: 0x10a3000a  beq         $a1, $v1, . + 4 + (0xA << 2)
label_467878:
    if (ctx->pc == 0x467878u) {
        ctx->pc = 0x467878u;
            // 0x467878: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46787Cu;
        goto label_46787c;
    }
    ctx->pc = 0x467874u;
    {
        const bool branch_taken_0x467874 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x467878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x467874u;
            // 0x467878: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467874) {
            ctx->pc = 0x4678A0u;
            goto label_4678a0;
        }
    }
    ctx->pc = 0x46787Cu;
label_46787c:
    // 0x46787c: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
label_467880:
    if (ctx->pc == 0x467880u) {
        ctx->pc = 0x467880u;
            // 0x467880: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x467884u;
        goto label_467884;
    }
    ctx->pc = 0x46787Cu;
    {
        const bool branch_taken_0x46787c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46787c) {
            ctx->pc = 0x467880u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46787Cu;
            // 0x467880: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46788Cu;
            goto label_46788c;
        }
    }
    ctx->pc = 0x467884u;
label_467884:
    // 0x467884: 0x1000000f  b           . + 4 + (0xF << 2)
label_467888:
    if (ctx->pc == 0x467888u) {
        ctx->pc = 0x467888u;
            // 0x467888: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x46788Cu;
        goto label_46788c;
    }
    ctx->pc = 0x467884u;
    {
        const bool branch_taken_0x467884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x467888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x467884u;
            // 0x467888: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467884) {
            ctx->pc = 0x4678C4u;
            goto label_4678c4;
        }
    }
    ctx->pc = 0x46788Cu;
label_46788c:
    // 0x46788c: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x46788cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_467890:
    // 0x467890: 0x320f809  jalr        $t9
label_467894:
    if (ctx->pc == 0x467894u) {
        ctx->pc = 0x467898u;
        goto label_467898;
    }
    ctx->pc = 0x467890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x467898u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x467898u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x467898u; }
            if (ctx->pc != 0x467898u) { return; }
        }
        }
    }
    ctx->pc = 0x467898u;
label_467898:
    // 0x467898: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x467898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46789c:
    // 0x46789c: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x46789cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
label_4678a0:
    // 0x4678a0: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x4678a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_4678a4:
    // 0x4678a4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_4678a8:
    if (ctx->pc == 0x4678A8u) {
        ctx->pc = 0x4678ACu;
        goto label_4678ac;
    }
    ctx->pc = 0x4678A4u;
    {
        const bool branch_taken_0x4678a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4678a4) {
            ctx->pc = 0x4678C0u;
            goto label_4678c0;
        }
    }
    ctx->pc = 0x4678ACu;
label_4678ac:
    // 0x4678ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4678acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4678b0:
    // 0x4678b0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4678b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4678b4:
    // 0x4678b4: 0x320f809  jalr        $t9
label_4678b8:
    if (ctx->pc == 0x4678B8u) {
        ctx->pc = 0x4678B8u;
            // 0x4678b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4678BCu;
        goto label_4678bc;
    }
    ctx->pc = 0x4678B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4678BCu);
        ctx->pc = 0x4678B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4678B4u;
            // 0x4678b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4678BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4678BCu; }
            if (ctx->pc != 0x4678BCu) { return; }
        }
        }
    }
    ctx->pc = 0x4678BCu;
label_4678bc:
    // 0x4678bc: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x4678bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_4678c0:
    // 0x4678c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4678c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4678c4:
    // 0x4678c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4678c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4678c8:
    // 0x4678c8: 0x3e00008  jr          $ra
label_4678cc:
    if (ctx->pc == 0x4678CCu) {
        ctx->pc = 0x4678CCu;
            // 0x4678cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4678D0u;
        goto label_4678d0;
    }
    ctx->pc = 0x4678C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4678CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4678C8u;
            // 0x4678cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4678D0u;
label_4678d0:
    // 0x4678d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4678d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4678d4:
    // 0x4678d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4678d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4678d8:
    // 0x4678d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4678d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4678dc:
    // 0x4678dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4678dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4678e0:
    // 0x4678e0: 0xc4810038  lwc1        $f1, 0x38($a0)
    ctx->pc = 0x4678e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4678e4:
    // 0x4678e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4678e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4678e8:
    // 0x4678e8: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_4678ec:
    if (ctx->pc == 0x4678ECu) {
        ctx->pc = 0x4678ECu;
            // 0x4678ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4678F0u;
        goto label_4678f0;
    }
    ctx->pc = 0x4678E8u;
    {
        const bool branch_taken_0x4678e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4678ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4678E8u;
            // 0x4678ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4678e8) {
            ctx->pc = 0x46792Cu;
            goto label_46792c;
        }
    }
    ctx->pc = 0x4678F0u;
label_4678f0:
    // 0x4678f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4678f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4678f4:
    // 0x4678f4: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x4678f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_4678f8:
    // 0x4678f8: 0xae03008c  sw          $v1, 0x8C($s0)
    ctx->pc = 0x4678f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
label_4678fc:
    // 0x4678fc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4678fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_467900:
    // 0x467900: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x467900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
label_467904:
    // 0x467904: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x467904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
label_467908:
    // 0x467908: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x467908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_46790c:
    // 0x46790c: 0xae030084  sw          $v1, 0x84($s0)
    ctx->pc = 0x46790cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
label_467910:
    // 0x467910: 0xc6000078  lwc1        $f0, 0x78($s0)
    ctx->pc = 0x467910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_467914:
    // 0x467914: 0xc0e32a4  jal         func_38CA90
label_467918:
    if (ctx->pc == 0x467918u) {
        ctx->pc = 0x467918u;
            // 0x467918: 0xe6000074  swc1        $f0, 0x74($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
        ctx->pc = 0x46791Cu;
        goto label_46791c;
    }
    ctx->pc = 0x467914u;
    SET_GPR_U32(ctx, 31, 0x46791Cu);
    ctx->pc = 0x467918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x467914u;
            // 0x467918: 0xe6000074  swc1        $f0, 0x74($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x38CA90u;
    if (runtime->hasFunction(0x38CA90u)) {
        auto targetFn = runtime->lookupFunction(0x38CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46791Cu; }
        if (ctx->pc != 0x46791Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038CA90_0x38ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46791Cu; }
        if (ctx->pc != 0x46791Cu) { return; }
    }
    ctx->pc = 0x46791Cu;
label_46791c:
    // 0x46791c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x46791cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_467920:
    // 0x467920: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x467920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_467924:
    // 0x467924: 0xae0400b4  sw          $a0, 0xB4($s0)
    ctx->pc = 0x467924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 4));
label_467928:
    // 0x467928: 0xa203004c  sb          $v1, 0x4C($s0)
    ctx->pc = 0x467928u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 3));
label_46792c:
    // 0x46792c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x46792cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_467930:
    // 0x467930: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x467930u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_467934:
    // 0x467934: 0x3e00008  jr          $ra
label_467938:
    if (ctx->pc == 0x467938u) {
        ctx->pc = 0x467938u;
            // 0x467938: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x46793Cu;
        goto label_46793c;
    }
    ctx->pc = 0x467934u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x467938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x467934u;
            // 0x467938: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x46793Cu;
label_46793c:
    // 0x46793c: 0x0  nop
    ctx->pc = 0x46793cu;
    // NOP
label_467940:
    // 0x467940: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x467940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_467944:
    // 0x467944: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x467944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_467948:
    // 0x467948: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x467948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_46794c:
    // 0x46794c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x46794cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_467950:
    // 0x467950: 0x8c8400d4  lw          $a0, 0xD4($a0)
    ctx->pc = 0x467950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
label_467954:
    // 0x467954: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_467958:
    if (ctx->pc == 0x467958u) {
        ctx->pc = 0x467958u;
            // 0x467958: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x46795Cu;
        goto label_46795c;
    }
    ctx->pc = 0x467954u;
    {
        const bool branch_taken_0x467954 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x467954) {
            ctx->pc = 0x467958u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x467954u;
            // 0x467958: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x467974u;
            goto label_467974;
        }
    }
    ctx->pc = 0x46795Cu;
label_46795c:
    // 0x46795c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46795cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_467960:
    // 0x467960: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x467960u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_467964:
    // 0x467964: 0x320f809  jalr        $t9
label_467968:
    if (ctx->pc == 0x467968u) {
        ctx->pc = 0x467968u;
            // 0x467968: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x46796Cu;
        goto label_46796c;
    }
    ctx->pc = 0x467964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46796Cu);
        ctx->pc = 0x467968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x467964u;
            // 0x467968: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46796Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46796Cu; }
            if (ctx->pc != 0x46796Cu) { return; }
        }
        }
    }
    ctx->pc = 0x46796Cu;
label_46796c:
    // 0x46796c: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x46796cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_467970:
    // 0x467970: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x467970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_467974:
    // 0x467974: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x467974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_467978:
    // 0x467978: 0x3e00008  jr          $ra
label_46797c:
    if (ctx->pc == 0x46797Cu) {
        ctx->pc = 0x46797Cu;
            // 0x46797c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x467980u;
        goto label_467980;
    }
    ctx->pc = 0x467978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46797Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x467978u;
            // 0x46797c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x467980u;
label_467980:
    // 0x467980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x467980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_467984:
    // 0x467984: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x467984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_467988:
    // 0x467988: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x467988u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_46798c:
    // 0x46798c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46798cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_467990:
    // 0x467990: 0xc4810034  lwc1        $f1, 0x34($a0)
    ctx->pc = 0x467990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_467994:
    // 0x467994: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x467994u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_467998:
    // 0x467998: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_46799c:
    if (ctx->pc == 0x46799Cu) {
        ctx->pc = 0x46799Cu;
            // 0x46799c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4679A0u;
        goto label_4679a0;
    }
    ctx->pc = 0x467998u;
    {
        const bool branch_taken_0x467998 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x46799Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x467998u;
            // 0x46799c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467998) {
            ctx->pc = 0x4679F4u;
            goto label_4679f4;
        }
    }
    ctx->pc = 0x4679A0u;
label_4679a0:
    // 0x4679a0: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x4679a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_4679a4:
    // 0x4679a4: 0x54600014  bnel        $v1, $zero, . + 4 + (0x14 << 2)
label_4679a8:
    if (ctx->pc == 0x4679A8u) {
        ctx->pc = 0x4679A8u;
            // 0x4679a8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4679ACu;
        goto label_4679ac;
    }
    ctx->pc = 0x4679A4u;
    {
        const bool branch_taken_0x4679a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4679a4) {
            ctx->pc = 0x4679A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4679A4u;
            // 0x4679a8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4679F8u;
            goto label_4679f8;
        }
    }
    ctx->pc = 0x4679ACu;
label_4679ac:
    // 0x4679ac: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4679acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4679b0:
    // 0x4679b0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x4679b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4679b4:
    // 0x4679b4: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x4679b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4679b8:
    // 0x4679b8: 0x8c630968  lw          $v1, 0x968($v1)
    ctx->pc = 0x4679b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
label_4679bc:
    // 0x4679bc: 0x50640003  beql        $v1, $a0, . + 4 + (0x3 << 2)
label_4679c0:
    if (ctx->pc == 0x4679C0u) {
        ctx->pc = 0x4679C0u;
            // 0x4679c0: 0x8e030040  lw          $v1, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->pc = 0x4679C4u;
        goto label_4679c4;
    }
    ctx->pc = 0x4679BCu;
    {
        const bool branch_taken_0x4679bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x4679bc) {
            ctx->pc = 0x4679C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4679BCu;
            // 0x4679c0: 0x8e030040  lw          $v1, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4679CCu;
            goto label_4679cc;
        }
    }
    ctx->pc = 0x4679C4u;
label_4679c4:
    // 0x4679c4: 0x1000000b  b           . + 4 + (0xB << 2)
label_4679c8:
    if (ctx->pc == 0x4679C8u) {
        ctx->pc = 0x4679CCu;
        goto label_4679cc;
    }
    ctx->pc = 0x4679C4u;
    {
        const bool branch_taken_0x4679c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4679c4) {
            ctx->pc = 0x4679F4u;
            goto label_4679f4;
        }
    }
    ctx->pc = 0x4679CCu;
label_4679cc:
    // 0x4679cc: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_4679d0:
    if (ctx->pc == 0x4679D0u) {
        ctx->pc = 0x4679D4u;
        goto label_4679d4;
    }
    ctx->pc = 0x4679CCu;
    {
        const bool branch_taken_0x4679cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4679cc) {
            ctx->pc = 0x4679F4u;
            goto label_4679f4;
        }
    }
    ctx->pc = 0x4679D4u;
label_4679d4:
    // 0x4679d4: 0x920300ec  lbu         $v1, 0xEC($s0)
    ctx->pc = 0x4679d4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 236)));
label_4679d8:
    // 0x4679d8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_4679dc:
    if (ctx->pc == 0x4679DCu) {
        ctx->pc = 0x4679E0u;
        goto label_4679e0;
    }
    ctx->pc = 0x4679D8u;
    {
        const bool branch_taken_0x4679d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4679d8) {
            ctx->pc = 0x4679F4u;
            goto label_4679f4;
        }
    }
    ctx->pc = 0x4679E0u;
label_4679e0:
    // 0x4679e0: 0x8e0400d8  lw          $a0, 0xD8($s0)
    ctx->pc = 0x4679e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_4679e4:
    // 0x4679e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4679e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4679e8:
    // 0x4679e8: 0xc122d2c  jal         func_48B4B0
label_4679ec:
    if (ctx->pc == 0x4679ECu) {
        ctx->pc = 0x4679ECu;
            // 0x4679ec: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x4679F0u;
        goto label_4679f0;
    }
    ctx->pc = 0x4679E8u;
    SET_GPR_U32(ctx, 31, 0x4679F0u);
    ctx->pc = 0x4679ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4679E8u;
            // 0x4679ec: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4679F0u; }
        if (ctx->pc != 0x4679F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4679F0u; }
        if (ctx->pc != 0x4679F0u) { return; }
    }
    ctx->pc = 0x4679F0u;
label_4679f0:
    // 0x4679f0: 0xa20000ec  sb          $zero, 0xEC($s0)
    ctx->pc = 0x4679f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 236), (uint8_t)GPR_U32(ctx, 0));
label_4679f4:
    // 0x4679f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4679f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4679f8:
    // 0x4679f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4679f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4679fc:
    // 0x4679fc: 0x3e00008  jr          $ra
label_467a00:
    if (ctx->pc == 0x467A00u) {
        ctx->pc = 0x467A00u;
            // 0x467a00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x467A04u;
        goto label_467a04;
    }
    ctx->pc = 0x4679FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x467A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4679FCu;
            // 0x467a00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x467A04u;
label_467a04:
    // 0x467a04: 0x0  nop
    ctx->pc = 0x467a04u;
    // NOP
label_467a08:
    // 0x467a08: 0x0  nop
    ctx->pc = 0x467a08u;
    // NOP
label_467a0c:
    // 0x467a0c: 0x0  nop
    ctx->pc = 0x467a0cu;
    // NOP
label_467a10:
    // 0x467a10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x467a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_467a14:
    // 0x467a14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x467a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_467a18:
    // 0x467a18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x467a18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_467a1c:
    // 0x467a1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x467a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_467a20:
    // 0x467a20: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x467a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_467a24:
    // 0x467a24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x467a24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_467a28:
    // 0x467a28: 0x45000022  bc1f        . + 4 + (0x22 << 2)
label_467a2c:
    if (ctx->pc == 0x467A2Cu) {
        ctx->pc = 0x467A2Cu;
            // 0x467a2c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x467A30u;
        goto label_467a30;
    }
    ctx->pc = 0x467A28u;
    {
        const bool branch_taken_0x467a28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x467A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x467A28u;
            // 0x467a2c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467a28) {
            ctx->pc = 0x467AB4u;
            goto label_467ab4;
        }
    }
    ctx->pc = 0x467A30u;
label_467a30:
    // 0x467a30: 0x9202004d  lbu         $v0, 0x4D($s0)
    ctx->pc = 0x467a30u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
label_467a34:
    // 0x467a34: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_467a38:
    if (ctx->pc == 0x467A38u) {
        ctx->pc = 0x467A3Cu;
        goto label_467a3c;
    }
    ctx->pc = 0x467A34u;
    {
        const bool branch_taken_0x467a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x467a34) {
            ctx->pc = 0x467A48u;
            goto label_467a48;
        }
    }
    ctx->pc = 0x467A3Cu;
label_467a3c:
    // 0x467a3c: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x467a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_467a40:
    // 0x467a40: 0xc0baaa0  jal         func_2EAA80
label_467a44:
    if (ctx->pc == 0x467A44u) {
        ctx->pc = 0x467A44u;
            // 0x467a44: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x467A48u;
        goto label_467a48;
    }
    ctx->pc = 0x467A40u;
    SET_GPR_U32(ctx, 31, 0x467A48u);
    ctx->pc = 0x467A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x467A40u;
            // 0x467a44: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EAA80u;
    if (runtime->hasFunction(0x2EAA80u)) {
        auto targetFn = runtime->lookupFunction(0x2EAA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467A48u; }
        if (ctx->pc != 0x467A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EAA80_0x2eaa80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467A48u; }
        if (ctx->pc != 0x467A48u) { return; }
    }
    ctx->pc = 0x467A48u;
label_467a48:
    // 0x467a48: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x467a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_467a4c:
    // 0x467a4c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x467a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_467a50:
    // 0x467a50: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x467a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_467a54:
    // 0x467a54: 0x8c440968  lw          $a0, 0x968($v0)
    ctx->pc = 0x467a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
label_467a58:
    // 0x467a58: 0x50830007  beql        $a0, $v1, . + 4 + (0x7 << 2)
label_467a5c:
    if (ctx->pc == 0x467A5Cu) {
        ctx->pc = 0x467A5Cu;
            // 0x467a5c: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->pc = 0x467A60u;
        goto label_467a60;
    }
    ctx->pc = 0x467A58u;
    {
        const bool branch_taken_0x467a58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x467a58) {
            ctx->pc = 0x467A5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x467A58u;
            // 0x467a5c: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x467A78u;
            goto label_467a78;
        }
    }
    ctx->pc = 0x467A60u;
label_467a60:
    // 0x467a60: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x467a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_467a64:
    // 0x467a64: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_467a68:
    if (ctx->pc == 0x467A68u) {
        ctx->pc = 0x467A6Cu;
        goto label_467a6c;
    }
    ctx->pc = 0x467A64u;
    {
        const bool branch_taken_0x467a64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x467a64) {
            ctx->pc = 0x467A74u;
            goto label_467a74;
        }
    }
    ctx->pc = 0x467A6Cu;
label_467a6c:
    // 0x467a6c: 0x1000000e  b           . + 4 + (0xE << 2)
label_467a70:
    if (ctx->pc == 0x467A70u) {
        ctx->pc = 0x467A70u;
            // 0x467a70: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->pc = 0x467A74u;
        goto label_467a74;
    }
    ctx->pc = 0x467A6Cu;
    {
        const bool branch_taken_0x467a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x467A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x467A6Cu;
            // 0x467a70: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467a6c) {
            ctx->pc = 0x467AA8u;
            goto label_467aa8;
        }
    }
    ctx->pc = 0x467A74u;
label_467a74:
    // 0x467a74: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x467a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_467a78:
    // 0x467a78: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_467a7c:
    if (ctx->pc == 0x467A7Cu) {
        ctx->pc = 0x467A7Cu;
            // 0x467a7c: 0x3c02000b  lui         $v0, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11 << 16));
        ctx->pc = 0x467A80u;
        goto label_467a80;
    }
    ctx->pc = 0x467A78u;
    {
        const bool branch_taken_0x467a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x467a78) {
            ctx->pc = 0x467A7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x467A78u;
            // 0x467a7c: 0x3c02000b  lui         $v0, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x467A98u;
            goto label_467a98;
        }
    }
    ctx->pc = 0x467A80u;
label_467a80:
    // 0x467a80: 0x8e0400d8  lw          $a0, 0xD8($s0)
    ctx->pc = 0x467a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_467a84:
    // 0x467a84: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x467a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_467a88:
    // 0x467a88: 0xc122d2c  jal         func_48B4B0
label_467a8c:
    if (ctx->pc == 0x467A8Cu) {
        ctx->pc = 0x467A8Cu;
            // 0x467a8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x467A90u;
        goto label_467a90;
    }
    ctx->pc = 0x467A88u;
    SET_GPR_U32(ctx, 31, 0x467A90u);
    ctx->pc = 0x467A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x467A88u;
            // 0x467a8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467A90u; }
        if (ctx->pc != 0x467A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467A90u; }
        if (ctx->pc != 0x467A90u) { return; }
    }
    ctx->pc = 0x467A90u;
label_467a90:
    // 0x467a90: 0x10000009  b           . + 4 + (0x9 << 2)
label_467a94:
    if (ctx->pc == 0x467A94u) {
        ctx->pc = 0x467A94u;
            // 0x467a94: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x467A98u;
        goto label_467a98;
    }
    ctx->pc = 0x467A90u;
    {
        const bool branch_taken_0x467a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x467A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x467A90u;
            // 0x467a94: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467a90) {
            ctx->pc = 0x467AB8u;
            goto label_467ab8;
        }
    }
    ctx->pc = 0x467A98u;
label_467a98:
    // 0x467a98: 0xc073234  jal         func_1CC8D0
label_467a9c:
    if (ctx->pc == 0x467A9Cu) {
        ctx->pc = 0x467A9Cu;
            // 0x467a9c: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x467AA0u;
        goto label_467aa0;
    }
    ctx->pc = 0x467A98u;
    SET_GPR_U32(ctx, 31, 0x467AA0u);
    ctx->pc = 0x467A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x467A98u;
            // 0x467a9c: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467AA0u; }
        if (ctx->pc != 0x467AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467AA0u; }
        if (ctx->pc != 0x467AA0u) { return; }
    }
    ctx->pc = 0x467AA0u;
label_467aa0:
    // 0x467aa0: 0x10000004  b           . + 4 + (0x4 << 2)
label_467aa4:
    if (ctx->pc == 0x467AA4u) {
        ctx->pc = 0x467AA8u;
        goto label_467aa8;
    }
    ctx->pc = 0x467AA0u;
    {
        const bool branch_taken_0x467aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x467aa0) {
            ctx->pc = 0x467AB4u;
            goto label_467ab4;
        }
    }
    ctx->pc = 0x467AA8u;
label_467aa8:
    // 0x467aa8: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x467aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_467aac:
    // 0x467aac: 0xc122d2c  jal         func_48B4B0
label_467ab0:
    if (ctx->pc == 0x467AB0u) {
        ctx->pc = 0x467AB0u;
            // 0x467ab0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x467AB4u;
        goto label_467ab4;
    }
    ctx->pc = 0x467AACu;
    SET_GPR_U32(ctx, 31, 0x467AB4u);
    ctx->pc = 0x467AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x467AACu;
            // 0x467ab0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467AB4u; }
        if (ctx->pc != 0x467AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467AB4u; }
        if (ctx->pc != 0x467AB4u) { return; }
    }
    ctx->pc = 0x467AB4u;
label_467ab4:
    // 0x467ab4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x467ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_467ab8:
    // 0x467ab8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x467ab8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_467abc:
    // 0x467abc: 0x3e00008  jr          $ra
label_467ac0:
    if (ctx->pc == 0x467AC0u) {
        ctx->pc = 0x467AC0u;
            // 0x467ac0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x467AC4u;
        goto label_467ac4;
    }
    ctx->pc = 0x467ABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x467AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x467ABCu;
            // 0x467ac0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x467AC4u;
label_467ac4:
    // 0x467ac4: 0x0  nop
    ctx->pc = 0x467ac4u;
    // NOP
label_467ac8:
    // 0x467ac8: 0x0  nop
    ctx->pc = 0x467ac8u;
    // NOP
label_467acc:
    // 0x467acc: 0x0  nop
    ctx->pc = 0x467accu;
    // NOP
label_467ad0:
    // 0x467ad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x467ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_467ad4:
    // 0x467ad4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x467ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_467ad8:
    // 0x467ad8: 0x9083004d  lbu         $v1, 0x4D($a0)
    ctx->pc = 0x467ad8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 77)));
label_467adc:
    // 0x467adc: 0x5060001c  beql        $v1, $zero, . + 4 + (0x1C << 2)
label_467ae0:
    if (ctx->pc == 0x467AE0u) {
        ctx->pc = 0x467AE0u;
            // 0x467ae0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x467AE4u;
        goto label_467ae4;
    }
    ctx->pc = 0x467ADCu;
    {
        const bool branch_taken_0x467adc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x467adc) {
            ctx->pc = 0x467AE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x467ADCu;
            // 0x467ae0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x467B50u;
            goto label_467b50;
        }
    }
    ctx->pc = 0x467AE4u;
label_467ae4:
    // 0x467ae4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x467ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_467ae8:
    // 0x467ae8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x467ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_467aec:
    // 0x467aec: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x467aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_467af0:
    // 0x467af0: 0x8c420968  lw          $v0, 0x968($v0)
    ctx->pc = 0x467af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
label_467af4:
    // 0x467af4: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
label_467af8:
    if (ctx->pc == 0x467AF8u) {
        ctx->pc = 0x467AF8u;
            // 0x467af8: 0xc4ac0000  lwc1        $f12, 0x0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x467AFCu;
        goto label_467afc;
    }
    ctx->pc = 0x467AF4u;
    {
        const bool branch_taken_0x467af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x467af4) {
            ctx->pc = 0x467AF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x467AF4u;
            // 0x467af8: 0xc4ac0000  lwc1        $f12, 0x0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x467B04u;
            goto label_467b04;
        }
    }
    ctx->pc = 0x467AFCu;
label_467afc:
    // 0x467afc: 0x10000011  b           . + 4 + (0x11 << 2)
label_467b00:
    if (ctx->pc == 0x467B00u) {
        ctx->pc = 0x467B04u;
        goto label_467b04;
    }
    ctx->pc = 0x467AFCu;
    {
        const bool branch_taken_0x467afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x467afc) {
            ctx->pc = 0x467B44u;
            goto label_467b44;
        }
    }
    ctx->pc = 0x467B04u;
label_467b04:
    // 0x467b04: 0xc4ad0004  lwc1        $f13, 0x4($a1)
    ctx->pc = 0x467b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_467b08:
    // 0x467b08: 0xc4ae0008  lwc1        $f14, 0x8($a1)
    ctx->pc = 0x467b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_467b0c:
    // 0x467b0c: 0xc04cbd8  jal         func_132F60
label_467b10:
    if (ctx->pc == 0x467B10u) {
        ctx->pc = 0x467B10u;
            // 0x467b10: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x467B14u;
        goto label_467b14;
    }
    ctx->pc = 0x467B0Cu;
    SET_GPR_U32(ctx, 31, 0x467B14u);
    ctx->pc = 0x467B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x467B0Cu;
            // 0x467b10: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467B14u; }
        if (ctx->pc != 0x467B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467B14u; }
        if (ctx->pc != 0x467B14u) { return; }
    }
    ctx->pc = 0x467B14u;
label_467b14:
    // 0x467b14: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x467b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_467b18:
    // 0x467b18: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x467b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_467b1c:
    // 0x467b1c: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x467b1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_467b20:
    // 0x467b20: 0x2405003e  addiu       $a1, $zero, 0x3E
    ctx->pc = 0x467b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
label_467b24:
    // 0x467b24: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x467b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_467b28:
    // 0x467b28: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x467b28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_467b2c:
    // 0x467b2c: 0xc7ae0018  lwc1        $f14, 0x18($sp)
    ctx->pc = 0x467b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_467b30:
    // 0x467b30: 0x46007c06  mov.s       $f16, $f15
    ctx->pc = 0x467b30u;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
label_467b34:
    // 0x467b34: 0xc0bafb8  jal         func_2EBEE0
label_467b38:
    if (ctx->pc == 0x467B38u) {
        ctx->pc = 0x467B38u;
            // 0x467b38: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->pc = 0x467B3Cu;
        goto label_467b3c;
    }
    ctx->pc = 0x467B34u;
    SET_GPR_U32(ctx, 31, 0x467B3Cu);
    ctx->pc = 0x467B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x467B34u;
            // 0x467b38: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467B3Cu; }
        if (ctx->pc != 0x467B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467B3Cu; }
        if (ctx->pc != 0x467B3Cu) { return; }
    }
    ctx->pc = 0x467B3Cu;
label_467b3c:
    // 0x467b3c: 0x10000003  b           . + 4 + (0x3 << 2)
label_467b40:
    if (ctx->pc == 0x467B40u) {
        ctx->pc = 0x467B44u;
        goto label_467b44;
    }
    ctx->pc = 0x467B3Cu;
    {
        const bool branch_taken_0x467b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x467b3c) {
            ctx->pc = 0x467B4Cu;
            goto label_467b4c;
        }
    }
    ctx->pc = 0x467B44u;
label_467b44:
    // 0x467b44: 0xc0e35e0  jal         func_38D780
label_467b48:
    if (ctx->pc == 0x467B48u) {
        ctx->pc = 0x467B4Cu;
        goto label_467b4c;
    }
    ctx->pc = 0x467B44u;
    SET_GPR_U32(ctx, 31, 0x467B4Cu);
    ctx->pc = 0x38D780u;
    if (runtime->hasFunction(0x38D780u)) {
        auto targetFn = runtime->lookupFunction(0x38D780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467B4Cu; }
        if (ctx->pc != 0x467B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D780_0x38d780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467B4Cu; }
        if (ctx->pc != 0x467B4Cu) { return; }
    }
    ctx->pc = 0x467B4Cu;
label_467b4c:
    // 0x467b4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x467b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_467b50:
    // 0x467b50: 0x3e00008  jr          $ra
label_467b54:
    if (ctx->pc == 0x467B54u) {
        ctx->pc = 0x467B54u;
            // 0x467b54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x467B58u;
        goto label_467b58;
    }
    ctx->pc = 0x467B50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x467B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x467B50u;
            // 0x467b54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x467B58u;
label_467b58:
    // 0x467b58: 0x0  nop
    ctx->pc = 0x467b58u;
    // NOP
label_467b5c:
    // 0x467b5c: 0x0  nop
    ctx->pc = 0x467b5cu;
    // NOP
label_467b60:
    // 0x467b60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x467b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_467b64:
    // 0x467b64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x467b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_467b68:
    // 0x467b68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x467b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_467b6c:
    // 0x467b6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x467b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_467b70:
    // 0x467b70: 0x8c90009c  lw          $s0, 0x9C($a0)
    ctx->pc = 0x467b70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
label_467b74:
    // 0x467b74: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_467b78:
    if (ctx->pc == 0x467B78u) {
        ctx->pc = 0x467B78u;
            // 0x467b78: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x467B7Cu;
        goto label_467b7c;
    }
    ctx->pc = 0x467B74u;
    {
        const bool branch_taken_0x467b74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x467B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x467B74u;
            // 0x467b78: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467b74) {
            ctx->pc = 0x467BACu;
            goto label_467bac;
        }
    }
    ctx->pc = 0x467B7Cu;
label_467b7c:
    // 0x467b7c: 0xc04008c  jal         func_100230
label_467b80:
    if (ctx->pc == 0x467B80u) {
        ctx->pc = 0x467B80u;
            // 0x467b80: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x467B84u;
        goto label_467b84;
    }
    ctx->pc = 0x467B7Cu;
    SET_GPR_U32(ctx, 31, 0x467B84u);
    ctx->pc = 0x467B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x467B7Cu;
            // 0x467b80: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467B84u; }
        if (ctx->pc != 0x467B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467B84u; }
        if (ctx->pc != 0x467B84u) { return; }
    }
    ctx->pc = 0x467B84u;
label_467b84:
    // 0x467b84: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x467b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_467b88:
    // 0x467b88: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x467b88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_467b8c:
    // 0x467b8c: 0xc0407c0  jal         func_101F00
label_467b90:
    if (ctx->pc == 0x467B90u) {
        ctx->pc = 0x467B90u;
            // 0x467b90: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->pc = 0x467B94u;
        goto label_467b94;
    }
    ctx->pc = 0x467B8Cu;
    SET_GPR_U32(ctx, 31, 0x467B94u);
    ctx->pc = 0x467B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x467B8Cu;
            // 0x467b90: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467B94u; }
        if (ctx->pc != 0x467B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467B94u; }
        if (ctx->pc != 0x467B94u) { return; }
    }
    ctx->pc = 0x467B94u;
label_467b94:
    // 0x467b94: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x467b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_467b98:
    // 0x467b98: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x467b98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_467b9c:
    // 0x467b9c: 0xc0407c0  jal         func_101F00
label_467ba0:
    if (ctx->pc == 0x467BA0u) {
        ctx->pc = 0x467BA0u;
            // 0x467ba0: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->pc = 0x467BA4u;
        goto label_467ba4;
    }
    ctx->pc = 0x467B9Cu;
    SET_GPR_U32(ctx, 31, 0x467BA4u);
    ctx->pc = 0x467BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x467B9Cu;
            // 0x467ba0: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467BA4u; }
        if (ctx->pc != 0x467BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467BA4u; }
        if (ctx->pc != 0x467BA4u) { return; }
    }
    ctx->pc = 0x467BA4u;
label_467ba4:
    // 0x467ba4: 0xc0400a8  jal         func_1002A0
label_467ba8:
    if (ctx->pc == 0x467BA8u) {
        ctx->pc = 0x467BA8u;
            // 0x467ba8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x467BACu;
        goto label_467bac;
    }
    ctx->pc = 0x467BA4u;
    SET_GPR_U32(ctx, 31, 0x467BACu);
    ctx->pc = 0x467BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x467BA4u;
            // 0x467ba8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467BACu; }
        if (ctx->pc != 0x467BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467BACu; }
        if (ctx->pc != 0x467BACu) { return; }
    }
    ctx->pc = 0x467BACu;
label_467bac:
    // 0x467bac: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x467bacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_467bb0:
    // 0x467bb0: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x467bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_467bb4:
    // 0x467bb4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_467bb8:
    if (ctx->pc == 0x467BB8u) {
        ctx->pc = 0x467BB8u;
            // 0x467bb8: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x467BBCu;
        goto label_467bbc;
    }
    ctx->pc = 0x467BB4u;
    {
        const bool branch_taken_0x467bb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x467bb4) {
            ctx->pc = 0x467BB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x467BB4u;
            // 0x467bb8: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x467BD0u;
            goto label_467bd0;
        }
    }
    ctx->pc = 0x467BBCu;
label_467bbc:
    // 0x467bbc: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x467bbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_467bc0:
    // 0x467bc0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x467bc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_467bc4:
    // 0x467bc4: 0x320f809  jalr        $t9
label_467bc8:
    if (ctx->pc == 0x467BC8u) {
        ctx->pc = 0x467BC8u;
            // 0x467bc8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x467BCCu;
        goto label_467bcc;
    }
    ctx->pc = 0x467BC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x467BCCu);
        ctx->pc = 0x467BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x467BC4u;
            // 0x467bc8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x467BCCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x467BCCu; }
            if (ctx->pc != 0x467BCCu) { return; }
        }
        }
    }
    ctx->pc = 0x467BCCu;
label_467bcc:
    // 0x467bcc: 0xae2000a0  sw          $zero, 0xA0($s1)
    ctx->pc = 0x467bccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
label_467bd0:
    // 0x467bd0: 0x8e2400d8  lw          $a0, 0xD8($s1)
    ctx->pc = 0x467bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_467bd4:
    // 0x467bd4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_467bd8:
    if (ctx->pc == 0x467BD8u) {
        ctx->pc = 0x467BD8u;
            // 0x467bd8: 0xae2000d8  sw          $zero, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 0));
        ctx->pc = 0x467BDCu;
        goto label_467bdc;
    }
    ctx->pc = 0x467BD4u;
    {
        const bool branch_taken_0x467bd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x467bd4) {
            ctx->pc = 0x467BD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x467BD4u;
            // 0x467bd8: 0xae2000d8  sw          $zero, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x467BF0u;
            goto label_467bf0;
        }
    }
    ctx->pc = 0x467BDCu;
label_467bdc:
    // 0x467bdc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x467bdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_467be0:
    // 0x467be0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x467be0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_467be4:
    // 0x467be4: 0x320f809  jalr        $t9
label_467be8:
    if (ctx->pc == 0x467BE8u) {
        ctx->pc = 0x467BE8u;
            // 0x467be8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x467BECu;
        goto label_467bec;
    }
    ctx->pc = 0x467BE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x467BECu);
        ctx->pc = 0x467BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x467BE4u;
            // 0x467be8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x467BECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x467BECu; }
            if (ctx->pc != 0x467BECu) { return; }
        }
        }
    }
    ctx->pc = 0x467BECu;
label_467bec:
    // 0x467bec: 0xae2000d8  sw          $zero, 0xD8($s1)
    ctx->pc = 0x467becu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 0));
label_467bf0:
    // 0x467bf0: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x467bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_467bf4:
    // 0x467bf4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_467bf8:
    if (ctx->pc == 0x467BF8u) {
        ctx->pc = 0x467BF8u;
            // 0x467bf8: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x467BFCu;
        goto label_467bfc;
    }
    ctx->pc = 0x467BF4u;
    {
        const bool branch_taken_0x467bf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x467bf4) {
            ctx->pc = 0x467BF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x467BF4u;
            // 0x467bf8: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x467C10u;
            goto label_467c10;
        }
    }
    ctx->pc = 0x467BFCu;
label_467bfc:
    // 0x467bfc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x467bfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_467c00:
    // 0x467c00: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x467c00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_467c04:
    // 0x467c04: 0x320f809  jalr        $t9
label_467c08:
    if (ctx->pc == 0x467C08u) {
        ctx->pc = 0x467C08u;
            // 0x467c08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x467C0Cu;
        goto label_467c0c;
    }
    ctx->pc = 0x467C04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x467C0Cu);
        ctx->pc = 0x467C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x467C04u;
            // 0x467c08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x467C0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x467C0Cu; }
            if (ctx->pc != 0x467C0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x467C0Cu;
label_467c0c:
    // 0x467c0c: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x467c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_467c10:
    // 0x467c10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x467c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_467c14:
    // 0x467c14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x467c14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_467c18:
    // 0x467c18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x467c18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_467c1c:
    // 0x467c1c: 0x3e00008  jr          $ra
label_467c20:
    if (ctx->pc == 0x467C20u) {
        ctx->pc = 0x467C20u;
            // 0x467c20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x467C24u;
        goto label_467c24;
    }
    ctx->pc = 0x467C1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x467C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x467C1Cu;
            // 0x467c20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x467C24u;
label_467c24:
    // 0x467c24: 0x0  nop
    ctx->pc = 0x467c24u;
    // NOP
label_467c28:
    // 0x467c28: 0x0  nop
    ctx->pc = 0x467c28u;
    // NOP
label_467c2c:
    // 0x467c2c: 0x0  nop
    ctx->pc = 0x467c2cu;
    // NOP
label_467c30:
    // 0x467c30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x467c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_467c34:
    // 0x467c34: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x467c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_467c38:
    // 0x467c38: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x467c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_467c3c:
    // 0x467c3c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x467c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_467c40:
    // 0x467c40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x467c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_467c44:
    // 0x467c44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x467c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_467c48:
    // 0x467c48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x467c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_467c4c:
    // 0x467c4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x467c4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_467c50:
    // 0x467c50: 0x8c450e80  lw          $a1, 0xE80($v0)
    ctx->pc = 0x467c50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_467c54:
    // 0x467c54: 0x8ca40968  lw          $a0, 0x968($a1)
    ctx->pc = 0x467c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2408)));
label_467c58:
    // 0x467c58: 0x10830099  beq         $a0, $v1, . + 4 + (0x99 << 2)
label_467c5c:
    if (ctx->pc == 0x467C5Cu) {
        ctx->pc = 0x467C60u;
        goto label_467c60;
    }
    ctx->pc = 0x467C58u;
    {
        const bool branch_taken_0x467c58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x467c58) {
            ctx->pc = 0x467EC0u;
            goto label_467ec0;
        }
    }
    ctx->pc = 0x467C60u;
label_467c60:
    // 0x467c60: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x467c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_467c64:
    // 0x467c64: 0x1082006c  beq         $a0, $v0, . + 4 + (0x6C << 2)
label_467c68:
    if (ctx->pc == 0x467C68u) {
        ctx->pc = 0x467C6Cu;
        goto label_467c6c;
    }
    ctx->pc = 0x467C64u;
    {
        const bool branch_taken_0x467c64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x467c64) {
            ctx->pc = 0x467E18u;
            goto label_467e18;
        }
    }
    ctx->pc = 0x467C6Cu;
label_467c6c:
    // 0x467c6c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x467c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_467c70:
    // 0x467c70: 0x50820007  beql        $a0, $v0, . + 4 + (0x7 << 2)
label_467c74:
    if (ctx->pc == 0x467C74u) {
        ctx->pc = 0x467C74u;
            // 0x467c74: 0x8e220040  lw          $v0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->pc = 0x467C78u;
        goto label_467c78;
    }
    ctx->pc = 0x467C70u;
    {
        const bool branch_taken_0x467c70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x467c70) {
            ctx->pc = 0x467C74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x467C70u;
            // 0x467c74: 0x8e220040  lw          $v0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x467C90u;
            goto label_467c90;
        }
    }
    ctx->pc = 0x467C78u;
label_467c78:
    // 0x467c78: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x467c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_467c7c:
    // 0x467c7c: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_467c80:
    if (ctx->pc == 0x467C80u) {
        ctx->pc = 0x467C84u;
        goto label_467c84;
    }
    ctx->pc = 0x467C7Cu;
    {
        const bool branch_taken_0x467c7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x467c7c) {
            ctx->pc = 0x467C8Cu;
            goto label_467c8c;
        }
    }
    ctx->pc = 0x467C84u;
label_467c84:
    // 0x467c84: 0x100000b8  b           . + 4 + (0xB8 << 2)
label_467c88:
    if (ctx->pc == 0x467C88u) {
        ctx->pc = 0x467C88u;
            // 0x467c88: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x467C8Cu;
        goto label_467c8c;
    }
    ctx->pc = 0x467C84u;
    {
        const bool branch_taken_0x467c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x467C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x467C84u;
            // 0x467c88: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467c84) {
            ctx->pc = 0x467F68u;
            goto label_467f68;
        }
    }
    ctx->pc = 0x467C8Cu;
label_467c8c:
    // 0x467c8c: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x467c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_467c90:
    // 0x467c90: 0x54400038  bnel        $v0, $zero, . + 4 + (0x38 << 2)
label_467c94:
    if (ctx->pc == 0x467C94u) {
        ctx->pc = 0x467C94u;
            // 0x467c94: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x467C98u;
        goto label_467c98;
    }
    ctx->pc = 0x467C90u;
    {
        const bool branch_taken_0x467c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x467c90) {
            ctx->pc = 0x467C94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x467C90u;
            // 0x467c94: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
            ctx->pc = 0x467D74u;
            goto label_467d74;
        }
    }
    ctx->pc = 0x467C98u;
label_467c98:
    // 0x467c98: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x467c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_467c9c:
    // 0x467c9c: 0x90a30c6a  lbu         $v1, 0xC6A($a1)
    ctx->pc = 0x467c9cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3178)));
label_467ca0:
    // 0x467ca0: 0xc4420670  lwc1        $f2, 0x670($v0)
    ctx->pc = 0x467ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_467ca4:
    // 0x467ca4: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x467ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_467ca8:
    // 0x467ca8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x467ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_467cac:
    // 0x467cac: 0xc4410674  lwc1        $f1, 0x674($v0)
    ctx->pc = 0x467cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_467cb0:
    // 0x467cb0: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x467cb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_467cb4:
    // 0x467cb4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x467cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_467cb8:
    // 0x467cb8: 0xc4400678  lwc1        $f0, 0x678($v0)
    ctx->pc = 0x467cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_467cbc:
    // 0x467cbc: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x467cbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_467cc0:
    // 0x467cc0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x467cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_467cc4:
    // 0x467cc4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x467cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_467cc8:
    // 0x467cc8: 0x24500040  addiu       $s0, $v0, 0x40
    ctx->pc = 0x467cc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_467ccc:
    // 0x467ccc: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x467cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_467cd0:
    // 0x467cd0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x467cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_467cd4:
    // 0x467cd4: 0xc440067c  lwc1        $f0, 0x67C($v0)
    ctx->pc = 0x467cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_467cd8:
    // 0x467cd8: 0xc040180  jal         func_100600
label_467cdc:
    if (ctx->pc == 0x467CDCu) {
        ctx->pc = 0x467CDCu;
            // 0x467cdc: 0xe7a0004c  swc1        $f0, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x467CE0u;
        goto label_467ce0;
    }
    ctx->pc = 0x467CD8u;
    SET_GPR_U32(ctx, 31, 0x467CE0u);
    ctx->pc = 0x467CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x467CD8u;
            // 0x467cdc: 0xe7a0004c  swc1        $f0, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467CE0u; }
        if (ctx->pc != 0x467CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467CE0u; }
        if (ctx->pc != 0x467CE0u) { return; }
    }
    ctx->pc = 0x467CE0u;
label_467ce0:
    // 0x467ce0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x467ce0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_467ce4:
    // 0x467ce4: 0x5240000f  beql        $s2, $zero, . + 4 + (0xF << 2)
label_467ce8:
    if (ctx->pc == 0x467CE8u) {
        ctx->pc = 0x467CE8u;
            // 0x467ce8: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x467CECu;
        goto label_467cec;
    }
    ctx->pc = 0x467CE4u;
    {
        const bool branch_taken_0x467ce4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x467ce4) {
            ctx->pc = 0x467CE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x467CE4u;
            // 0x467ce8: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x467D24u;
            goto label_467d24;
        }
    }
    ctx->pc = 0x467CECu;
label_467cec:
    // 0x467cec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x467cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_467cf0:
    // 0x467cf0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x467cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_467cf4:
    // 0x467cf4: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x467cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_467cf8:
    // 0x467cf8: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x467cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_467cfc:
    // 0x467cfc: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x467cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_467d00:
    // 0x467d00: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x467d00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_467d04:
    // 0x467d04: 0xc040138  jal         func_1004E0
label_467d08:
    if (ctx->pc == 0x467D08u) {
        ctx->pc = 0x467D08u;
            // 0x467d08: 0xa2420008  sb          $v0, 0x8($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x467D0Cu;
        goto label_467d0c;
    }
    ctx->pc = 0x467D04u;
    SET_GPR_U32(ctx, 31, 0x467D0Cu);
    ctx->pc = 0x467D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x467D04u;
            // 0x467d08: 0xa2420008  sb          $v0, 0x8($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467D0Cu; }
        if (ctx->pc != 0x467D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467D0Cu; }
        if (ctx->pc != 0x467D0Cu) { return; }
    }
    ctx->pc = 0x467D0Cu;
label_467d0c:
    // 0x467d0c: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x467d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_467d10:
    // 0x467d10: 0x2644000c  addiu       $a0, $s2, 0xC
    ctx->pc = 0x467d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_467d14:
    // 0x467d14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x467d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_467d18:
    // 0x467d18: 0xc04a576  jal         func_1295D8
label_467d1c:
    if (ctx->pc == 0x467D1Cu) {
        ctx->pc = 0x467D1Cu;
            // 0x467d1c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x467D20u;
        goto label_467d20;
    }
    ctx->pc = 0x467D18u;
    SET_GPR_U32(ctx, 31, 0x467D20u);
    ctx->pc = 0x467D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x467D18u;
            // 0x467d1c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467D20u; }
        if (ctx->pc != 0x467D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467D20u; }
        if (ctx->pc != 0x467D20u) { return; }
    }
    ctx->pc = 0x467D20u;
label_467d20:
    // 0x467d20: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x467d20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_467d24:
    // 0x467d24: 0x3c034461  lui         $v1, 0x4461
    ctx->pc = 0x467d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17505 << 16));
label_467d28:
    // 0x467d28: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x467d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_467d2c:
    // 0x467d2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x467d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_467d30:
    // 0x467d30: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x467d30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_467d34:
    // 0x467d34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x467d34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_467d38:
    // 0x467d38: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x467d38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_467d3c:
    // 0x467d3c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x467d3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_467d40:
    // 0x467d40: 0xc122cd8  jal         func_48B360
label_467d44:
    if (ctx->pc == 0x467D44u) {
        ctx->pc = 0x467D44u;
            // 0x467d44: 0xae3200d8  sw          $s2, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 18));
        ctx->pc = 0x467D48u;
        goto label_467d48;
    }
    ctx->pc = 0x467D40u;
    SET_GPR_U32(ctx, 31, 0x467D48u);
    ctx->pc = 0x467D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x467D40u;
            // 0x467d44: 0xae3200d8  sw          $s2, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467D48u; }
        if (ctx->pc != 0x467D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467D48u; }
        if (ctx->pc != 0x467D48u) { return; }
    }
    ctx->pc = 0x467D48u;
label_467d48:
    // 0x467d48: 0x3c024461  lui         $v0, 0x4461
    ctx->pc = 0x467d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17505 << 16));
label_467d4c:
    // 0x467d4c: 0x8e2400d8  lw          $a0, 0xD8($s1)
    ctx->pc = 0x467d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_467d50:
    // 0x467d50: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x467d50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_467d54:
    // 0x467d54: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x467d54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_467d58:
    // 0x467d58: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x467d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_467d5c:
    // 0x467d5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x467d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_467d60:
    // 0x467d60: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x467d60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_467d64:
    // 0x467d64: 0xc122cd8  jal         func_48B360
label_467d68:
    if (ctx->pc == 0x467D68u) {
        ctx->pc = 0x467D68u;
            // 0x467d68: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x467D6Cu;
        goto label_467d6c;
    }
    ctx->pc = 0x467D64u;
    SET_GPR_U32(ctx, 31, 0x467D6Cu);
    ctx->pc = 0x467D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x467D64u;
            // 0x467d68: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467D6Cu; }
        if (ctx->pc != 0x467D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467D6Cu; }
        if (ctx->pc != 0x467D6Cu) { return; }
    }
    ctx->pc = 0x467D6Cu;
label_467d6c:
    // 0x467d6c: 0x1000009c  b           . + 4 + (0x9C << 2)
label_467d70:
    if (ctx->pc == 0x467D70u) {
        ctx->pc = 0x467D70u;
            // 0x467d70: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x467D74u;
        goto label_467d74;
    }
    ctx->pc = 0x467D6Cu;
    {
        const bool branch_taken_0x467d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x467D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x467D6Cu;
            // 0x467d70: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467d6c) {
            ctx->pc = 0x467FE0u;
            goto label_467fe0;
        }
    }
    ctx->pc = 0x467D74u;
label_467d74:
    // 0x467d74: 0xc040180  jal         func_100600
label_467d78:
    if (ctx->pc == 0x467D78u) {
        ctx->pc = 0x467D7Cu;
        goto label_467d7c;
    }
    ctx->pc = 0x467D74u;
    SET_GPR_U32(ctx, 31, 0x467D7Cu);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467D7Cu; }
        if (ctx->pc != 0x467D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467D7Cu; }
        if (ctx->pc != 0x467D7Cu) { return; }
    }
    ctx->pc = 0x467D7Cu;
label_467d7c:
    // 0x467d7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x467d7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_467d80:
    // 0x467d80: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_467d84:
    if (ctx->pc == 0x467D84u) {
        ctx->pc = 0x467D84u;
            // 0x467d84: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x467D88u;
        goto label_467d88;
    }
    ctx->pc = 0x467D80u;
    {
        const bool branch_taken_0x467d80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x467d80) {
            ctx->pc = 0x467D84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x467D80u;
            // 0x467d84: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x467DC0u;
            goto label_467dc0;
        }
    }
    ctx->pc = 0x467D88u;
label_467d88:
    // 0x467d88: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x467d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_467d8c:
    // 0x467d8c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x467d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_467d90:
    // 0x467d90: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x467d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_467d94:
    // 0x467d94: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x467d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_467d98:
    // 0x467d98: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x467d98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_467d9c:
    // 0x467d9c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x467d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_467da0:
    // 0x467da0: 0xc040138  jal         func_1004E0
label_467da4:
    if (ctx->pc == 0x467DA4u) {
        ctx->pc = 0x467DA4u;
            // 0x467da4: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x467DA8u;
        goto label_467da8;
    }
    ctx->pc = 0x467DA0u;
    SET_GPR_U32(ctx, 31, 0x467DA8u);
    ctx->pc = 0x467DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x467DA0u;
            // 0x467da4: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467DA8u; }
        if (ctx->pc != 0x467DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467DA8u; }
        if (ctx->pc != 0x467DA8u) { return; }
    }
    ctx->pc = 0x467DA8u;
label_467da8:
    // 0x467da8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x467da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_467dac:
    // 0x467dac: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x467dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_467db0:
    // 0x467db0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x467db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_467db4:
    // 0x467db4: 0xc04a576  jal         func_1295D8
label_467db8:
    if (ctx->pc == 0x467DB8u) {
        ctx->pc = 0x467DB8u;
            // 0x467db8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x467DBCu;
        goto label_467dbc;
    }
    ctx->pc = 0x467DB4u;
    SET_GPR_U32(ctx, 31, 0x467DBCu);
    ctx->pc = 0x467DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x467DB4u;
            // 0x467db8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467DBCu; }
        if (ctx->pc != 0x467DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467DBCu; }
        if (ctx->pc != 0x467DBCu) { return; }
    }
    ctx->pc = 0x467DBCu;
label_467dbc:
    // 0x467dbc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x467dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_467dc0:
    // 0x467dc0: 0x3c034461  lui         $v1, 0x4461
    ctx->pc = 0x467dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17505 << 16));
label_467dc4:
    // 0x467dc4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x467dc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_467dc8:
    // 0x467dc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x467dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_467dcc:
    // 0x467dcc: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x467dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_467dd0:
    // 0x467dd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x467dd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_467dd4:
    // 0x467dd4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x467dd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_467dd8:
    // 0x467dd8: 0x34460fae  ori         $a2, $v0, 0xFAE
    ctx->pc = 0x467dd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4014);
label_467ddc:
    // 0x467ddc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x467ddcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_467de0:
    // 0x467de0: 0xc122cd8  jal         func_48B360
label_467de4:
    if (ctx->pc == 0x467DE4u) {
        ctx->pc = 0x467DE4u;
            // 0x467de4: 0xae3000d8  sw          $s0, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 16));
        ctx->pc = 0x467DE8u;
        goto label_467de8;
    }
    ctx->pc = 0x467DE0u;
    SET_GPR_U32(ctx, 31, 0x467DE8u);
    ctx->pc = 0x467DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x467DE0u;
            // 0x467de4: 0xae3000d8  sw          $s0, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467DE8u; }
        if (ctx->pc != 0x467DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467DE8u; }
        if (ctx->pc != 0x467DE8u) { return; }
    }
    ctx->pc = 0x467DE8u;
label_467de8:
    // 0x467de8: 0x3c024461  lui         $v0, 0x4461
    ctx->pc = 0x467de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17505 << 16));
label_467dec:
    // 0x467dec: 0x8e2400d8  lw          $a0, 0xD8($s1)
    ctx->pc = 0x467decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_467df0:
    // 0x467df0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x467df0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_467df4:
    // 0x467df4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x467df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_467df8:
    // 0x467df8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x467df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_467dfc:
    // 0x467dfc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x467dfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_467e00:
    // 0x467e00: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x467e00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_467e04:
    // 0x467e04: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x467e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_467e08:
    // 0x467e08: 0xc122cd8  jal         func_48B360
label_467e0c:
    if (ctx->pc == 0x467E0Cu) {
        ctx->pc = 0x467E0Cu;
            // 0x467e0c: 0x34460fae  ori         $a2, $v0, 0xFAE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4014);
        ctx->pc = 0x467E10u;
        goto label_467e10;
    }
    ctx->pc = 0x467E08u;
    SET_GPR_U32(ctx, 31, 0x467E10u);
    ctx->pc = 0x467E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x467E08u;
            // 0x467e0c: 0x34460fae  ori         $a2, $v0, 0xFAE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4014);
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467E10u; }
        if (ctx->pc != 0x467E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467E10u; }
        if (ctx->pc != 0x467E10u) { return; }
    }
    ctx->pc = 0x467E10u;
label_467e10:
    // 0x467e10: 0x10000072  b           . + 4 + (0x72 << 2)
label_467e14:
    if (ctx->pc == 0x467E14u) {
        ctx->pc = 0x467E18u;
        goto label_467e18;
    }
    ctx->pc = 0x467E10u;
    {
        const bool branch_taken_0x467e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x467e10) {
            ctx->pc = 0x467FDCu;
            goto label_467fdc;
        }
    }
    ctx->pc = 0x467E18u;
label_467e18:
    // 0x467e18: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x467e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_467e1c:
    // 0x467e1c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x467e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_467e20:
    // 0x467e20: 0xc4420680  lwc1        $f2, 0x680($v0)
    ctx->pc = 0x467e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_467e24:
    // 0x467e24: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x467e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_467e28:
    // 0x467e28: 0xc4610684  lwc1        $f1, 0x684($v1)
    ctx->pc = 0x467e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_467e2c:
    // 0x467e2c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x467e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_467e30:
    // 0x467e30: 0xc4400688  lwc1        $f0, 0x688($v0)
    ctx->pc = 0x467e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_467e34:
    // 0x467e34: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x467e34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_467e38:
    // 0x467e38: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x467e38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_467e3c:
    // 0x467e3c: 0xc040180  jal         func_100600
label_467e40:
    if (ctx->pc == 0x467E40u) {
        ctx->pc = 0x467E40u;
            // 0x467e40: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->pc = 0x467E44u;
        goto label_467e44;
    }
    ctx->pc = 0x467E3Cu;
    SET_GPR_U32(ctx, 31, 0x467E44u);
    ctx->pc = 0x467E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x467E3Cu;
            // 0x467e40: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467E44u; }
        if (ctx->pc != 0x467E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467E44u; }
        if (ctx->pc != 0x467E44u) { return; }
    }
    ctx->pc = 0x467E44u;
label_467e44:
    // 0x467e44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x467e44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_467e48:
    // 0x467e48: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_467e4c:
    if (ctx->pc == 0x467E4Cu) {
        ctx->pc = 0x467E4Cu;
            // 0x467e4c: 0xae3000d8  sw          $s0, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 16));
        ctx->pc = 0x467E50u;
        goto label_467e50;
    }
    ctx->pc = 0x467E48u;
    {
        const bool branch_taken_0x467e48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x467e48) {
            ctx->pc = 0x467E4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x467E48u;
            // 0x467e4c: 0xae3000d8  sw          $s0, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x467E88u;
            goto label_467e88;
        }
    }
    ctx->pc = 0x467E50u;
label_467e50:
    // 0x467e50: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x467e50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_467e54:
    // 0x467e54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x467e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_467e58:
    // 0x467e58: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x467e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_467e5c:
    // 0x467e5c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x467e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_467e60:
    // 0x467e60: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x467e60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_467e64:
    // 0x467e64: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x467e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_467e68:
    // 0x467e68: 0xc040138  jal         func_1004E0
label_467e6c:
    if (ctx->pc == 0x467E6Cu) {
        ctx->pc = 0x467E6Cu;
            // 0x467e6c: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x467E70u;
        goto label_467e70;
    }
    ctx->pc = 0x467E68u;
    SET_GPR_U32(ctx, 31, 0x467E70u);
    ctx->pc = 0x467E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x467E68u;
            // 0x467e6c: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467E70u; }
        if (ctx->pc != 0x467E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467E70u; }
        if (ctx->pc != 0x467E70u) { return; }
    }
    ctx->pc = 0x467E70u;
label_467e70:
    // 0x467e70: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x467e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_467e74:
    // 0x467e74: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x467e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_467e78:
    // 0x467e78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x467e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_467e7c:
    // 0x467e7c: 0xc04a576  jal         func_1295D8
label_467e80:
    if (ctx->pc == 0x467E80u) {
        ctx->pc = 0x467E80u;
            // 0x467e80: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x467E84u;
        goto label_467e84;
    }
    ctx->pc = 0x467E7Cu;
    SET_GPR_U32(ctx, 31, 0x467E84u);
    ctx->pc = 0x467E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x467E7Cu;
            // 0x467e80: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467E84u; }
        if (ctx->pc != 0x467E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467E84u; }
        if (ctx->pc != 0x467E84u) { return; }
    }
    ctx->pc = 0x467E84u;
label_467e84:
    // 0x467e84: 0xae3000d8  sw          $s0, 0xD8($s1)
    ctx->pc = 0x467e84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 16));
label_467e88:
    // 0x467e88: 0x3c024461  lui         $v0, 0x4461
    ctx->pc = 0x467e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17505 << 16));
label_467e8c:
    // 0x467e8c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x467e8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_467e90:
    // 0x467e90: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x467e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_467e94:
    // 0x467e94: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x467e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_467e98:
    // 0x467e98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x467e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_467e9c:
    // 0x467e9c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x467e9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_467ea0:
    // 0x467ea0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x467ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_467ea4:
    // 0x467ea4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x467ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_467ea8:
    // 0x467ea8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x467ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_467eac:
    // 0x467eac: 0x8c460060  lw          $a2, 0x60($v0)
    ctx->pc = 0x467eacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_467eb0:
    // 0x467eb0: 0xc122cd8  jal         func_48B360
label_467eb4:
    if (ctx->pc == 0x467EB4u) {
        ctx->pc = 0x467EB4u;
            // 0x467eb4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x467EB8u;
        goto label_467eb8;
    }
    ctx->pc = 0x467EB0u;
    SET_GPR_U32(ctx, 31, 0x467EB8u);
    ctx->pc = 0x467EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x467EB0u;
            // 0x467eb4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467EB8u; }
        if (ctx->pc != 0x467EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467EB8u; }
        if (ctx->pc != 0x467EB8u) { return; }
    }
    ctx->pc = 0x467EB8u;
label_467eb8:
    // 0x467eb8: 0x10000048  b           . + 4 + (0x48 << 2)
label_467ebc:
    if (ctx->pc == 0x467EBCu) {
        ctx->pc = 0x467EC0u;
        goto label_467ec0;
    }
    ctx->pc = 0x467EB8u;
    {
        const bool branch_taken_0x467eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x467eb8) {
            ctx->pc = 0x467FDCu;
            goto label_467fdc;
        }
    }
    ctx->pc = 0x467EC0u;
label_467ec0:
    // 0x467ec0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x467ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_467ec4:
    // 0x467ec4: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x467ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_467ec8:
    // 0x467ec8: 0xc4420690  lwc1        $f2, 0x690($v0)
    ctx->pc = 0x467ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_467ecc:
    // 0x467ecc: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x467eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_467ed0:
    // 0x467ed0: 0xc4610694  lwc1        $f1, 0x694($v1)
    ctx->pc = 0x467ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_467ed4:
    // 0x467ed4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x467ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_467ed8:
    // 0x467ed8: 0xc4400698  lwc1        $f0, 0x698($v0)
    ctx->pc = 0x467ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_467edc:
    // 0x467edc: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x467edcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_467ee0:
    // 0x467ee0: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x467ee0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_467ee4:
    // 0x467ee4: 0xc040180  jal         func_100600
label_467ee8:
    if (ctx->pc == 0x467EE8u) {
        ctx->pc = 0x467EE8u;
            // 0x467ee8: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->pc = 0x467EECu;
        goto label_467eec;
    }
    ctx->pc = 0x467EE4u;
    SET_GPR_U32(ctx, 31, 0x467EECu);
    ctx->pc = 0x467EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x467EE4u;
            // 0x467ee8: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467EECu; }
        if (ctx->pc != 0x467EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467EECu; }
        if (ctx->pc != 0x467EECu) { return; }
    }
    ctx->pc = 0x467EECu;
label_467eec:
    // 0x467eec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x467eecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_467ef0:
    // 0x467ef0: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_467ef4:
    if (ctx->pc == 0x467EF4u) {
        ctx->pc = 0x467EF4u;
            // 0x467ef4: 0xae3000d8  sw          $s0, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 16));
        ctx->pc = 0x467EF8u;
        goto label_467ef8;
    }
    ctx->pc = 0x467EF0u;
    {
        const bool branch_taken_0x467ef0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x467ef0) {
            ctx->pc = 0x467EF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x467EF0u;
            // 0x467ef4: 0xae3000d8  sw          $s0, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x467F30u;
            goto label_467f30;
        }
    }
    ctx->pc = 0x467EF8u;
label_467ef8:
    // 0x467ef8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x467ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_467efc:
    // 0x467efc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x467efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_467f00:
    // 0x467f00: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x467f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_467f04:
    // 0x467f04: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x467f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_467f08:
    // 0x467f08: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x467f08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_467f0c:
    // 0x467f0c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x467f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_467f10:
    // 0x467f10: 0xc040138  jal         func_1004E0
label_467f14:
    if (ctx->pc == 0x467F14u) {
        ctx->pc = 0x467F14u;
            // 0x467f14: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x467F18u;
        goto label_467f18;
    }
    ctx->pc = 0x467F10u;
    SET_GPR_U32(ctx, 31, 0x467F18u);
    ctx->pc = 0x467F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x467F10u;
            // 0x467f14: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467F18u; }
        if (ctx->pc != 0x467F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467F18u; }
        if (ctx->pc != 0x467F18u) { return; }
    }
    ctx->pc = 0x467F18u;
label_467f18:
    // 0x467f18: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x467f18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_467f1c:
    // 0x467f1c: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x467f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_467f20:
    // 0x467f20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x467f20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_467f24:
    // 0x467f24: 0xc04a576  jal         func_1295D8
label_467f28:
    if (ctx->pc == 0x467F28u) {
        ctx->pc = 0x467F28u;
            // 0x467f28: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x467F2Cu;
        goto label_467f2c;
    }
    ctx->pc = 0x467F24u;
    SET_GPR_U32(ctx, 31, 0x467F2Cu);
    ctx->pc = 0x467F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x467F24u;
            // 0x467f28: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467F2Cu; }
        if (ctx->pc != 0x467F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467F2Cu; }
        if (ctx->pc != 0x467F2Cu) { return; }
    }
    ctx->pc = 0x467F2Cu;
label_467f2c:
    // 0x467f2c: 0xae3000d8  sw          $s0, 0xD8($s1)
    ctx->pc = 0x467f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 16));
label_467f30:
    // 0x467f30: 0x3c024461  lui         $v0, 0x4461
    ctx->pc = 0x467f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17505 << 16));
label_467f34:
    // 0x467f34: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x467f34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_467f38:
    // 0x467f38: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x467f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_467f3c:
    // 0x467f3c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x467f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_467f40:
    // 0x467f40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x467f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_467f44:
    // 0x467f44: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x467f44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_467f48:
    // 0x467f48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x467f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_467f4c:
    // 0x467f4c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x467f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_467f50:
    // 0x467f50: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x467f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_467f54:
    // 0x467f54: 0x8c460050  lw          $a2, 0x50($v0)
    ctx->pc = 0x467f54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_467f58:
    // 0x467f58: 0xc122cd8  jal         func_48B360
label_467f5c:
    if (ctx->pc == 0x467F5Cu) {
        ctx->pc = 0x467F5Cu;
            // 0x467f5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x467F60u;
        goto label_467f60;
    }
    ctx->pc = 0x467F58u;
    SET_GPR_U32(ctx, 31, 0x467F60u);
    ctx->pc = 0x467F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x467F58u;
            // 0x467f5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467F60u; }
        if (ctx->pc != 0x467F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467F60u; }
        if (ctx->pc != 0x467F60u) { return; }
    }
    ctx->pc = 0x467F60u;
label_467f60:
    // 0x467f60: 0x1000001e  b           . + 4 + (0x1E << 2)
label_467f64:
    if (ctx->pc == 0x467F64u) {
        ctx->pc = 0x467F68u;
        goto label_467f68;
    }
    ctx->pc = 0x467F60u;
    {
        const bool branch_taken_0x467f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x467f60) {
            ctx->pc = 0x467FDCu;
            goto label_467fdc;
        }
    }
    ctx->pc = 0x467F68u;
label_467f68:
    // 0x467f68: 0xc040180  jal         func_100600
label_467f6c:
    if (ctx->pc == 0x467F6Cu) {
        ctx->pc = 0x467F70u;
        goto label_467f70;
    }
    ctx->pc = 0x467F68u;
    SET_GPR_U32(ctx, 31, 0x467F70u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467F70u; }
        if (ctx->pc != 0x467F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467F70u; }
        if (ctx->pc != 0x467F70u) { return; }
    }
    ctx->pc = 0x467F70u;
label_467f70:
    // 0x467f70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x467f70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_467f74:
    // 0x467f74: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_467f78:
    if (ctx->pc == 0x467F78u) {
        ctx->pc = 0x467F78u;
            // 0x467f78: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x467F7Cu;
        goto label_467f7c;
    }
    ctx->pc = 0x467F74u;
    {
        const bool branch_taken_0x467f74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x467f74) {
            ctx->pc = 0x467F78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x467F74u;
            // 0x467f78: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x467FB4u;
            goto label_467fb4;
        }
    }
    ctx->pc = 0x467F7Cu;
label_467f7c:
    // 0x467f7c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x467f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_467f80:
    // 0x467f80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x467f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_467f84:
    // 0x467f84: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x467f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_467f88:
    // 0x467f88: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x467f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_467f8c:
    // 0x467f8c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x467f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_467f90:
    // 0x467f90: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x467f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_467f94:
    // 0x467f94: 0xc040138  jal         func_1004E0
label_467f98:
    if (ctx->pc == 0x467F98u) {
        ctx->pc = 0x467F98u;
            // 0x467f98: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x467F9Cu;
        goto label_467f9c;
    }
    ctx->pc = 0x467F94u;
    SET_GPR_U32(ctx, 31, 0x467F9Cu);
    ctx->pc = 0x467F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x467F94u;
            // 0x467f98: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467F9Cu; }
        if (ctx->pc != 0x467F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467F9Cu; }
        if (ctx->pc != 0x467F9Cu) { return; }
    }
    ctx->pc = 0x467F9Cu;
label_467f9c:
    // 0x467f9c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x467f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_467fa0:
    // 0x467fa0: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x467fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_467fa4:
    // 0x467fa4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x467fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_467fa8:
    // 0x467fa8: 0xc04a576  jal         func_1295D8
label_467fac:
    if (ctx->pc == 0x467FACu) {
        ctx->pc = 0x467FACu;
            // 0x467fac: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x467FB0u;
        goto label_467fb0;
    }
    ctx->pc = 0x467FA8u;
    SET_GPR_U32(ctx, 31, 0x467FB0u);
    ctx->pc = 0x467FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x467FA8u;
            // 0x467fac: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467FB0u; }
        if (ctx->pc != 0x467FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467FB0u; }
        if (ctx->pc != 0x467FB0u) { return; }
    }
    ctx->pc = 0x467FB0u;
label_467fb0:
    // 0x467fb0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x467fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_467fb4:
    // 0x467fb4: 0x3c034461  lui         $v1, 0x4461
    ctx->pc = 0x467fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17505 << 16));
label_467fb8:
    // 0x467fb8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x467fb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_467fbc:
    // 0x467fbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x467fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_467fc0:
    // 0x467fc0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x467fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_467fc4:
    // 0x467fc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x467fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_467fc8:
    // 0x467fc8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x467fc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_467fcc:
    // 0x467fcc: 0x344601ae  ori         $a2, $v0, 0x1AE
    ctx->pc = 0x467fccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)430);
label_467fd0:
    // 0x467fd0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x467fd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_467fd4:
    // 0x467fd4: 0xc122cd8  jal         func_48B360
label_467fd8:
    if (ctx->pc == 0x467FD8u) {
        ctx->pc = 0x467FD8u;
            // 0x467fd8: 0xae3000d8  sw          $s0, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 16));
        ctx->pc = 0x467FDCu;
        goto label_467fdc;
    }
    ctx->pc = 0x467FD4u;
    SET_GPR_U32(ctx, 31, 0x467FDCu);
    ctx->pc = 0x467FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x467FD4u;
            // 0x467fd8: 0xae3000d8  sw          $s0, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467FDCu; }
        if (ctx->pc != 0x467FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467FDCu; }
        if (ctx->pc != 0x467FDCu) { return; }
    }
    ctx->pc = 0x467FDCu;
label_467fdc:
    // 0x467fdc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x467fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_467fe0:
    // 0x467fe0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x467fe0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_467fe4:
    // 0x467fe4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x467fe4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_467fe8:
    // 0x467fe8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x467fe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_467fec:
    // 0x467fec: 0x3e00008  jr          $ra
label_467ff0:
    if (ctx->pc == 0x467FF0u) {
        ctx->pc = 0x467FF0u;
            // 0x467ff0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x467FF4u;
        goto label_467ff4;
    }
    ctx->pc = 0x467FECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x467FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x467FECu;
            // 0x467ff0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x467FF4u;
label_467ff4:
    // 0x467ff4: 0x0  nop
    ctx->pc = 0x467ff4u;
    // NOP
label_467ff8:
    // 0x467ff8: 0x0  nop
    ctx->pc = 0x467ff8u;
    // NOP
label_467ffc:
    // 0x467ffc: 0x0  nop
    ctx->pc = 0x467ffcu;
    // NOP
label_468000:
    // 0x468000: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x468000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_468004:
    // 0x468004: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x468004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_468008:
    // 0x468008: 0x3e00008  jr          $ra
label_46800c:
    if (ctx->pc == 0x46800Cu) {
        ctx->pc = 0x468010u;
        goto label_468010;
    }
    ctx->pc = 0x468008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x468010u;
label_468010:
    // 0x468010: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x468010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_468014:
    // 0x468014: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x468014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_468018:
    // 0x468018: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x468018u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_46801c:
    // 0x46801c: 0x3e00008  jr          $ra
label_468020:
    if (ctx->pc == 0x468020u) {
        ctx->pc = 0x468024u;
        goto label_468024;
    }
    ctx->pc = 0x46801Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x468024u;
label_468024:
    // 0x468024: 0x0  nop
    ctx->pc = 0x468024u;
    // NOP
label_468028:
    // 0x468028: 0x0  nop
    ctx->pc = 0x468028u;
    // NOP
label_46802c:
    // 0x46802c: 0x0  nop
    ctx->pc = 0x46802cu;
    // NOP
label_468030:
    // 0x468030: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x468030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_468034:
    // 0x468034: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x468034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_468038:
    // 0x468038: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x468038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_46803c:
    // 0x46803c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x46803cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_468040:
    // 0x468040: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x468040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_468044:
    // 0x468044: 0x24920030  addiu       $s2, $a0, 0x30
    ctx->pc = 0x468044u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_468048:
    // 0x468048: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x468048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_46804c:
    // 0x46804c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x46804cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_468050:
    // 0x468050: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x468050u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_468054:
    // 0x468054: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x468054u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_468058:
    // 0x468058: 0x8c500de0  lw          $s0, 0xDE0($v0)
    ctx->pc = 0x468058u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3552)));
label_46805c:
    // 0x46805c: 0xc0d46b8  jal         func_351AE0
label_468060:
    if (ctx->pc == 0x468060u) {
        ctx->pc = 0x468060u;
            // 0x468060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x468064u;
        goto label_468064;
    }
    ctx->pc = 0x46805Cu;
    SET_GPR_U32(ctx, 31, 0x468064u);
    ctx->pc = 0x468060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46805Cu;
            // 0x468060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x351AE0u;
    if (runtime->hasFunction(0x351AE0u)) {
        auto targetFn = runtime->lookupFunction(0x351AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468064u; }
        if (ctx->pc != 0x468064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00351AE0_0x351ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468064u; }
        if (ctx->pc != 0x468064u) { return; }
    }
    ctx->pc = 0x468064u;
label_468064:
    // 0x468064: 0x5440004e  bnel        $v0, $zero, . + 4 + (0x4E << 2)
label_468068:
    if (ctx->pc == 0x468068u) {
        ctx->pc = 0x468068u;
            // 0x468068: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->pc = 0x46806Cu;
        goto label_46806c;
    }
    ctx->pc = 0x468064u;
    {
        const bool branch_taken_0x468064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x468064) {
            ctx->pc = 0x468068u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x468064u;
            // 0x468068: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4681A0u;
            goto label_4681a0;
        }
    }
    ctx->pc = 0x46806Cu;
label_46806c:
    // 0x46806c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x46806cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_468070:
    // 0x468070: 0xc0d46b0  jal         func_351AC0
label_468074:
    if (ctx->pc == 0x468074u) {
        ctx->pc = 0x468074u;
            // 0x468074: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x468078u;
        goto label_468078;
    }
    ctx->pc = 0x468070u;
    SET_GPR_U32(ctx, 31, 0x468078u);
    ctx->pc = 0x468074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x468070u;
            // 0x468074: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x351AC0u;
    if (runtime->hasFunction(0x351AC0u)) {
        auto targetFn = runtime->lookupFunction(0x351AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468078u; }
        if (ctx->pc != 0x468078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00351AC0_0x351ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468078u; }
        if (ctx->pc != 0x468078u) { return; }
    }
    ctx->pc = 0x468078u;
label_468078:
    // 0x468078: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x468078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_46807c:
    // 0x46807c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x46807cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_468080:
    // 0x468080: 0x0  nop
    ctx->pc = 0x468080u;
    // NOP
label_468084:
    // 0x468084: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x468084u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_468088:
    // 0x468088: 0x4503001d  bc1tl       . + 4 + (0x1D << 2)
label_46808c:
    if (ctx->pc == 0x46808Cu) {
        ctx->pc = 0x46808Cu;
            // 0x46808c: 0xc64c0000  lwc1        $f12, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x468090u;
        goto label_468090;
    }
    ctx->pc = 0x468088u;
    {
        const bool branch_taken_0x468088 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x468088) {
            ctx->pc = 0x46808Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x468088u;
            // 0x46808c: 0xc64c0000  lwc1        $f12, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x468100u;
            goto label_468100;
        }
    }
    ctx->pc = 0x468090u;
label_468090:
    // 0x468090: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x468090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_468094:
    // 0x468094: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x468094u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_468098:
    // 0x468098: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_46809c:
    if (ctx->pc == 0x46809Cu) {
        ctx->pc = 0x46809Cu;
            // 0x46809c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x4680A0u;
        goto label_4680a0;
    }
    ctx->pc = 0x468098u;
    {
        const bool branch_taken_0x468098 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x468098) {
            ctx->pc = 0x46809Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x468098u;
            // 0x46809c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4680B4u;
            goto label_4680b4;
        }
    }
    ctx->pc = 0x4680A0u;
label_4680a0:
    // 0x4680a0: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x4680a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4680a4:
    // 0x4680a4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x4680a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4680a8:
    // 0x4680a8: 0x45000014  bc1f        . + 4 + (0x14 << 2)
label_4680ac:
    if (ctx->pc == 0x4680ACu) {
        ctx->pc = 0x4680B0u;
        goto label_4680b0;
    }
    ctx->pc = 0x4680A8u;
    {
        const bool branch_taken_0x4680a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4680a8) {
            ctx->pc = 0x4680FCu;
            goto label_4680fc;
        }
    }
    ctx->pc = 0x4680B0u;
label_4680b0:
    // 0x4680b0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x4680b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_4680b4:
    // 0x4680b4: 0xc0d46a0  jal         func_351A80
label_4680b8:
    if (ctx->pc == 0x4680B8u) {
        ctx->pc = 0x4680BCu;
        goto label_4680bc;
    }
    ctx->pc = 0x4680B4u;
    SET_GPR_U32(ctx, 31, 0x4680BCu);
    ctx->pc = 0x351A80u;
    if (runtime->hasFunction(0x351A80u)) {
        auto targetFn = runtime->lookupFunction(0x351A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4680BCu; }
        if (ctx->pc != 0x4680BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00351A80_0x351a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4680BCu; }
        if (ctx->pc != 0x4680BCu) { return; }
    }
    ctx->pc = 0x4680BCu;
label_4680bc:
    // 0x4680bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4680bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4680c0:
    // 0x4680c0: 0x52200033  beql        $s1, $zero, . + 4 + (0x33 << 2)
label_4680c4:
    if (ctx->pc == 0x4680C4u) {
        ctx->pc = 0x4680C4u;
            // 0x4680c4: 0xafb1006c  sw          $s1, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 17));
        ctx->pc = 0x4680C8u;
        goto label_4680c8;
    }
    ctx->pc = 0x4680C0u;
    {
        const bool branch_taken_0x4680c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4680c0) {
            ctx->pc = 0x4680C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4680C0u;
            // 0x4680c4: 0xafb1006c  sw          $s1, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x468190u;
            goto label_468190;
        }
    }
    ctx->pc = 0x4680C8u;
label_4680c8:
    // 0x4680c8: 0xc049514  jal         func_125450
label_4680cc:
    if (ctx->pc == 0x4680CCu) {
        ctx->pc = 0x4680CCu;
            // 0x4680cc: 0xc64c0000  lwc1        $f12, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x4680D0u;
        goto label_4680d0;
    }
    ctx->pc = 0x4680C8u;
    SET_GPR_U32(ctx, 31, 0x4680D0u);
    ctx->pc = 0x4680CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4680C8u;
            // 0x4680cc: 0xc64c0000  lwc1        $f12, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4680D0u; }
        if (ctx->pc != 0x4680D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4680D0u; }
        if (ctx->pc != 0x4680D0u) { return; }
    }
    ctx->pc = 0x4680D0u;
label_4680d0:
    // 0x4680d0: 0xc0474b6  jal         func_11D2D8
label_4680d4:
    if (ctx->pc == 0x4680D4u) {
        ctx->pc = 0x4680D4u;
            // 0x4680d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4680D8u;
        goto label_4680d8;
    }
    ctx->pc = 0x4680D0u;
    SET_GPR_U32(ctx, 31, 0x4680D8u);
    ctx->pc = 0x4680D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4680D0u;
            // 0x4680d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4680D8u; }
        if (ctx->pc != 0x4680D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4680D8u; }
        if (ctx->pc != 0x4680D8u) { return; }
    }
    ctx->pc = 0x4680D8u;
label_4680d8:
    // 0x4680d8: 0xc0497dc  jal         func_125F70
label_4680dc:
    if (ctx->pc == 0x4680DCu) {
        ctx->pc = 0x4680DCu;
            // 0x4680dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4680E0u;
        goto label_4680e0;
    }
    ctx->pc = 0x4680D8u;
    SET_GPR_U32(ctx, 31, 0x4680E0u);
    ctx->pc = 0x4680DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4680D8u;
            // 0x4680dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4680E0u; }
        if (ctx->pc != 0x4680E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4680E0u; }
        if (ctx->pc != 0x4680E0u) { return; }
    }
    ctx->pc = 0x4680E0u;
label_4680e0:
    // 0x4680e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4680e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4680e4:
    // 0x4680e4: 0xc0827ac  jal         func_209EB0
label_4680e8:
    if (ctx->pc == 0x4680E8u) {
        ctx->pc = 0x4680E8u;
            // 0x4680e8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x4680ECu;
        goto label_4680ec;
    }
    ctx->pc = 0x4680E4u;
    SET_GPR_U32(ctx, 31, 0x4680ECu);
    ctx->pc = 0x4680E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4680E4u;
            // 0x4680e8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4680ECu; }
        if (ctx->pc != 0x4680ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4680ECu; }
        if (ctx->pc != 0x4680ECu) { return; }
    }
    ctx->pc = 0x4680ECu;
label_4680ec:
    // 0x4680ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4680ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4680f0:
    // 0x4680f0: 0xafb1006c  sw          $s1, 0x6C($sp)
    ctx->pc = 0x4680f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 17));
label_4680f4:
    // 0x4680f4: 0x10000026  b           . + 4 + (0x26 << 2)
label_4680f8:
    if (ctx->pc == 0x4680F8u) {
        ctx->pc = 0x4680FCu;
        goto label_4680fc;
    }
    ctx->pc = 0x4680F4u;
    {
        const bool branch_taken_0x4680f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4680f4) {
            ctx->pc = 0x468190u;
            goto label_468190;
        }
    }
    ctx->pc = 0x4680FCu;
label_4680fc:
    // 0x4680fc: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x4680fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_468100:
    // 0x468100: 0xc049514  jal         func_125450
label_468104:
    if (ctx->pc == 0x468104u) {
        ctx->pc = 0x468108u;
        goto label_468108;
    }
    ctx->pc = 0x468100u;
    SET_GPR_U32(ctx, 31, 0x468108u);
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468108u; }
        if (ctx->pc != 0x468108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468108u; }
        if (ctx->pc != 0x468108u) { return; }
    }
    ctx->pc = 0x468108u;
label_468108:
    // 0x468108: 0xc0474b6  jal         func_11D2D8
label_46810c:
    if (ctx->pc == 0x46810Cu) {
        ctx->pc = 0x46810Cu;
            // 0x46810c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x468110u;
        goto label_468110;
    }
    ctx->pc = 0x468108u;
    SET_GPR_U32(ctx, 31, 0x468110u);
    ctx->pc = 0x46810Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x468108u;
            // 0x46810c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468110u; }
        if (ctx->pc != 0x468110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468110u; }
        if (ctx->pc != 0x468110u) { return; }
    }
    ctx->pc = 0x468110u;
label_468110:
    // 0x468110: 0xc0497dc  jal         func_125F70
label_468114:
    if (ctx->pc == 0x468114u) {
        ctx->pc = 0x468114u;
            // 0x468114: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x468118u;
        goto label_468118;
    }
    ctx->pc = 0x468110u;
    SET_GPR_U32(ctx, 31, 0x468118u);
    ctx->pc = 0x468114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x468110u;
            // 0x468114: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468118u; }
        if (ctx->pc != 0x468118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468118u; }
        if (ctx->pc != 0x468118u) { return; }
    }
    ctx->pc = 0x468118u;
label_468118:
    // 0x468118: 0xc64c0004  lwc1        $f12, 0x4($s2)
    ctx->pc = 0x468118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_46811c:
    // 0x46811c: 0xc049514  jal         func_125450
label_468120:
    if (ctx->pc == 0x468120u) {
        ctx->pc = 0x468120u;
            // 0x468120: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x468124u;
        goto label_468124;
    }
    ctx->pc = 0x46811Cu;
    SET_GPR_U32(ctx, 31, 0x468124u);
    ctx->pc = 0x468120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46811Cu;
            // 0x468120: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468124u; }
        if (ctx->pc != 0x468124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468124u; }
        if (ctx->pc != 0x468124u) { return; }
    }
    ctx->pc = 0x468124u;
label_468124:
    // 0x468124: 0xc0474b6  jal         func_11D2D8
label_468128:
    if (ctx->pc == 0x468128u) {
        ctx->pc = 0x468128u;
            // 0x468128: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46812Cu;
        goto label_46812c;
    }
    ctx->pc = 0x468124u;
    SET_GPR_U32(ctx, 31, 0x46812Cu);
    ctx->pc = 0x468128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x468124u;
            // 0x468128: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46812Cu; }
        if (ctx->pc != 0x46812Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46812Cu; }
        if (ctx->pc != 0x46812Cu) { return; }
    }
    ctx->pc = 0x46812Cu;
label_46812c:
    // 0x46812c: 0xc0497dc  jal         func_125F70
label_468130:
    if (ctx->pc == 0x468130u) {
        ctx->pc = 0x468130u;
            // 0x468130: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x468134u;
        goto label_468134;
    }
    ctx->pc = 0x46812Cu;
    SET_GPR_U32(ctx, 31, 0x468134u);
    ctx->pc = 0x468130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46812Cu;
            // 0x468130: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468134u; }
        if (ctx->pc != 0x468134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468134u; }
        if (ctx->pc != 0x468134u) { return; }
    }
    ctx->pc = 0x468134u;
label_468134:
    // 0x468134: 0xc64c0008  lwc1        $f12, 0x8($s2)
    ctx->pc = 0x468134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_468138:
    // 0x468138: 0xc049514  jal         func_125450
label_46813c:
    if (ctx->pc == 0x46813Cu) {
        ctx->pc = 0x46813Cu;
            // 0x46813c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x468140u;
        goto label_468140;
    }
    ctx->pc = 0x468138u;
    SET_GPR_U32(ctx, 31, 0x468140u);
    ctx->pc = 0x46813Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x468138u;
            // 0x46813c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468140u; }
        if (ctx->pc != 0x468140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468140u; }
        if (ctx->pc != 0x468140u) { return; }
    }
    ctx->pc = 0x468140u;
label_468140:
    // 0x468140: 0xc0474b6  jal         func_11D2D8
label_468144:
    if (ctx->pc == 0x468144u) {
        ctx->pc = 0x468144u;
            // 0x468144: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x468148u;
        goto label_468148;
    }
    ctx->pc = 0x468140u;
    SET_GPR_U32(ctx, 31, 0x468148u);
    ctx->pc = 0x468144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x468140u;
            // 0x468144: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468148u; }
        if (ctx->pc != 0x468148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468148u; }
        if (ctx->pc != 0x468148u) { return; }
    }
    ctx->pc = 0x468148u;
label_468148:
    // 0x468148: 0xc0497dc  jal         func_125F70
label_46814c:
    if (ctx->pc == 0x46814Cu) {
        ctx->pc = 0x46814Cu;
            // 0x46814c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x468150u;
        goto label_468150;
    }
    ctx->pc = 0x468148u;
    SET_GPR_U32(ctx, 31, 0x468150u);
    ctx->pc = 0x46814Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x468148u;
            // 0x46814c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468150u; }
        if (ctx->pc != 0x468150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468150u; }
        if (ctx->pc != 0x468150u) { return; }
    }
    ctx->pc = 0x468150u;
label_468150:
    // 0x468150: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x468150u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_468154:
    // 0x468154: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x468154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_468158:
    // 0x468158: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x468158u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_46815c:
    // 0x46815c: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x46815cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_468160:
    // 0x468160: 0xc0b6df0  jal         func_2DB7C0
label_468164:
    if (ctx->pc == 0x468164u) {
        ctx->pc = 0x468164u;
            // 0x468164: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x468168u;
        goto label_468168;
    }
    ctx->pc = 0x468160u;
    SET_GPR_U32(ctx, 31, 0x468168u);
    ctx->pc = 0x468164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x468160u;
            // 0x468164: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468168u; }
        if (ctx->pc != 0x468168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468168u; }
        if (ctx->pc != 0x468168u) { return; }
    }
    ctx->pc = 0x468168u;
label_468168:
    // 0x468168: 0xc0d46a0  jal         func_351A80
label_46816c:
    if (ctx->pc == 0x46816Cu) {
        ctx->pc = 0x46816Cu;
            // 0x46816c: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x468170u;
        goto label_468170;
    }
    ctx->pc = 0x468168u;
    SET_GPR_U32(ctx, 31, 0x468170u);
    ctx->pc = 0x46816Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x468168u;
            // 0x46816c: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x351A80u;
    if (runtime->hasFunction(0x351A80u)) {
        auto targetFn = runtime->lookupFunction(0x351A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468170u; }
        if (ctx->pc != 0x468170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00351A80_0x351a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468170u; }
        if (ctx->pc != 0x468170u) { return; }
    }
    ctx->pc = 0x468170u;
label_468170:
    // 0x468170: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_468174:
    if (ctx->pc == 0x468174u) {
        ctx->pc = 0x468174u;
            // 0x468174: 0xafa2006c  sw          $v0, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
        ctx->pc = 0x468178u;
        goto label_468178;
    }
    ctx->pc = 0x468170u;
    {
        const bool branch_taken_0x468170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x468170) {
            ctx->pc = 0x468174u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x468170u;
            // 0x468174: 0xafa2006c  sw          $v0, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x468190u;
            goto label_468190;
        }
    }
    ctx->pc = 0x468178u;
label_468178:
    // 0x468178: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x468178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46817c:
    // 0x46817c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x46817cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_468180:
    // 0x468180: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x468180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_468184:
    // 0x468184: 0xc0804bc  jal         func_2012F0
label_468188:
    if (ctx->pc == 0x468188u) {
        ctx->pc = 0x468188u;
            // 0x468188: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x46818Cu;
        goto label_46818c;
    }
    ctx->pc = 0x468184u;
    SET_GPR_U32(ctx, 31, 0x46818Cu);
    ctx->pc = 0x468188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x468184u;
            // 0x468188: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46818Cu; }
        if (ctx->pc != 0x46818Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46818Cu; }
        if (ctx->pc != 0x46818Cu) { return; }
    }
    ctx->pc = 0x46818Cu;
label_46818c:
    // 0x46818c: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x46818cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
label_468190:
    // 0x468190: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x468190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_468194:
    // 0x468194: 0xc0d4698  jal         func_351A60
label_468198:
    if (ctx->pc == 0x468198u) {
        ctx->pc = 0x468198u;
            // 0x468198: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x46819Cu;
        goto label_46819c;
    }
    ctx->pc = 0x468194u;
    SET_GPR_U32(ctx, 31, 0x46819Cu);
    ctx->pc = 0x468198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x468194u;
            // 0x468198: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x351A60u;
    if (runtime->hasFunction(0x351A60u)) {
        auto targetFn = runtime->lookupFunction(0x351A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46819Cu; }
        if (ctx->pc != 0x46819Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00351A60_0x351a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46819Cu; }
        if (ctx->pc != 0x46819Cu) { return; }
    }
    ctx->pc = 0x46819Cu;
label_46819c:
    // 0x46819c: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x46819cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_4681a0:
    // 0x4681a0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4681a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4681a4:
    // 0x4681a4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4681a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4681a8:
    // 0x4681a8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4681a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4681ac:
    // 0x4681ac: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4681acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4681b0:
    // 0x4681b0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4681b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4681b4:
    // 0x4681b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4681b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4681b8:
    // 0x4681b8: 0x3e00008  jr          $ra
label_4681bc:
    if (ctx->pc == 0x4681BCu) {
        ctx->pc = 0x4681BCu;
            // 0x4681bc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4681C0u;
        goto label_4681c0;
    }
    ctx->pc = 0x4681B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4681BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4681B8u;
            // 0x4681bc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4681C0u;
label_4681c0:
    // 0x4681c0: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x4681c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_4681c4:
    // 0x4681c4: 0x3e00008  jr          $ra
label_4681c8:
    if (ctx->pc == 0x4681C8u) {
        ctx->pc = 0x4681C8u;
            // 0x4681c8: 0xc440c910  lwc1        $f0, -0x36F0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x4681CCu;
        goto label_4681cc;
    }
    ctx->pc = 0x4681C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4681C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4681C4u;
            // 0x4681c8: 0xc440c910  lwc1        $f0, -0x36F0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4681CCu;
label_4681cc:
    // 0x4681cc: 0x0  nop
    ctx->pc = 0x4681ccu;
    // NOP
}
