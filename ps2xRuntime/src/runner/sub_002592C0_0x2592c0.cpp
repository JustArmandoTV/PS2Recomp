#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002592C0
// Address: 0x2592c0 - 0x25bec0
void sub_002592C0_0x2592c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002592C0_0x2592c0");
#endif

    switch (ctx->pc) {
        case 0x2592c0u: goto label_2592c0;
        case 0x2592c4u: goto label_2592c4;
        case 0x2592c8u: goto label_2592c8;
        case 0x2592ccu: goto label_2592cc;
        case 0x2592d0u: goto label_2592d0;
        case 0x2592d4u: goto label_2592d4;
        case 0x2592d8u: goto label_2592d8;
        case 0x2592dcu: goto label_2592dc;
        case 0x2592e0u: goto label_2592e0;
        case 0x2592e4u: goto label_2592e4;
        case 0x2592e8u: goto label_2592e8;
        case 0x2592ecu: goto label_2592ec;
        case 0x2592f0u: goto label_2592f0;
        case 0x2592f4u: goto label_2592f4;
        case 0x2592f8u: goto label_2592f8;
        case 0x2592fcu: goto label_2592fc;
        case 0x259300u: goto label_259300;
        case 0x259304u: goto label_259304;
        case 0x259308u: goto label_259308;
        case 0x25930cu: goto label_25930c;
        case 0x259310u: goto label_259310;
        case 0x259314u: goto label_259314;
        case 0x259318u: goto label_259318;
        case 0x25931cu: goto label_25931c;
        case 0x259320u: goto label_259320;
        case 0x259324u: goto label_259324;
        case 0x259328u: goto label_259328;
        case 0x25932cu: goto label_25932c;
        case 0x259330u: goto label_259330;
        case 0x259334u: goto label_259334;
        case 0x259338u: goto label_259338;
        case 0x25933cu: goto label_25933c;
        case 0x259340u: goto label_259340;
        case 0x259344u: goto label_259344;
        case 0x259348u: goto label_259348;
        case 0x25934cu: goto label_25934c;
        case 0x259350u: goto label_259350;
        case 0x259354u: goto label_259354;
        case 0x259358u: goto label_259358;
        case 0x25935cu: goto label_25935c;
        case 0x259360u: goto label_259360;
        case 0x259364u: goto label_259364;
        case 0x259368u: goto label_259368;
        case 0x25936cu: goto label_25936c;
        case 0x259370u: goto label_259370;
        case 0x259374u: goto label_259374;
        case 0x259378u: goto label_259378;
        case 0x25937cu: goto label_25937c;
        case 0x259380u: goto label_259380;
        case 0x259384u: goto label_259384;
        case 0x259388u: goto label_259388;
        case 0x25938cu: goto label_25938c;
        case 0x259390u: goto label_259390;
        case 0x259394u: goto label_259394;
        case 0x259398u: goto label_259398;
        case 0x25939cu: goto label_25939c;
        case 0x2593a0u: goto label_2593a0;
        case 0x2593a4u: goto label_2593a4;
        case 0x2593a8u: goto label_2593a8;
        case 0x2593acu: goto label_2593ac;
        case 0x2593b0u: goto label_2593b0;
        case 0x2593b4u: goto label_2593b4;
        case 0x2593b8u: goto label_2593b8;
        case 0x2593bcu: goto label_2593bc;
        case 0x2593c0u: goto label_2593c0;
        case 0x2593c4u: goto label_2593c4;
        case 0x2593c8u: goto label_2593c8;
        case 0x2593ccu: goto label_2593cc;
        case 0x2593d0u: goto label_2593d0;
        case 0x2593d4u: goto label_2593d4;
        case 0x2593d8u: goto label_2593d8;
        case 0x2593dcu: goto label_2593dc;
        case 0x2593e0u: goto label_2593e0;
        case 0x2593e4u: goto label_2593e4;
        case 0x2593e8u: goto label_2593e8;
        case 0x2593ecu: goto label_2593ec;
        case 0x2593f0u: goto label_2593f0;
        case 0x2593f4u: goto label_2593f4;
        case 0x2593f8u: goto label_2593f8;
        case 0x2593fcu: goto label_2593fc;
        case 0x259400u: goto label_259400;
        case 0x259404u: goto label_259404;
        case 0x259408u: goto label_259408;
        case 0x25940cu: goto label_25940c;
        case 0x259410u: goto label_259410;
        case 0x259414u: goto label_259414;
        case 0x259418u: goto label_259418;
        case 0x25941cu: goto label_25941c;
        case 0x259420u: goto label_259420;
        case 0x259424u: goto label_259424;
        case 0x259428u: goto label_259428;
        case 0x25942cu: goto label_25942c;
        case 0x259430u: goto label_259430;
        case 0x259434u: goto label_259434;
        case 0x259438u: goto label_259438;
        case 0x25943cu: goto label_25943c;
        case 0x259440u: goto label_259440;
        case 0x259444u: goto label_259444;
        case 0x259448u: goto label_259448;
        case 0x25944cu: goto label_25944c;
        case 0x259450u: goto label_259450;
        case 0x259454u: goto label_259454;
        case 0x259458u: goto label_259458;
        case 0x25945cu: goto label_25945c;
        case 0x259460u: goto label_259460;
        case 0x259464u: goto label_259464;
        case 0x259468u: goto label_259468;
        case 0x25946cu: goto label_25946c;
        case 0x259470u: goto label_259470;
        case 0x259474u: goto label_259474;
        case 0x259478u: goto label_259478;
        case 0x25947cu: goto label_25947c;
        case 0x259480u: goto label_259480;
        case 0x259484u: goto label_259484;
        case 0x259488u: goto label_259488;
        case 0x25948cu: goto label_25948c;
        case 0x259490u: goto label_259490;
        case 0x259494u: goto label_259494;
        case 0x259498u: goto label_259498;
        case 0x25949cu: goto label_25949c;
        case 0x2594a0u: goto label_2594a0;
        case 0x2594a4u: goto label_2594a4;
        case 0x2594a8u: goto label_2594a8;
        case 0x2594acu: goto label_2594ac;
        case 0x2594b0u: goto label_2594b0;
        case 0x2594b4u: goto label_2594b4;
        case 0x2594b8u: goto label_2594b8;
        case 0x2594bcu: goto label_2594bc;
        case 0x2594c0u: goto label_2594c0;
        case 0x2594c4u: goto label_2594c4;
        case 0x2594c8u: goto label_2594c8;
        case 0x2594ccu: goto label_2594cc;
        case 0x2594d0u: goto label_2594d0;
        case 0x2594d4u: goto label_2594d4;
        case 0x2594d8u: goto label_2594d8;
        case 0x2594dcu: goto label_2594dc;
        case 0x2594e0u: goto label_2594e0;
        case 0x2594e4u: goto label_2594e4;
        case 0x2594e8u: goto label_2594e8;
        case 0x2594ecu: goto label_2594ec;
        case 0x2594f0u: goto label_2594f0;
        case 0x2594f4u: goto label_2594f4;
        case 0x2594f8u: goto label_2594f8;
        case 0x2594fcu: goto label_2594fc;
        case 0x259500u: goto label_259500;
        case 0x259504u: goto label_259504;
        case 0x259508u: goto label_259508;
        case 0x25950cu: goto label_25950c;
        case 0x259510u: goto label_259510;
        case 0x259514u: goto label_259514;
        case 0x259518u: goto label_259518;
        case 0x25951cu: goto label_25951c;
        case 0x259520u: goto label_259520;
        case 0x259524u: goto label_259524;
        case 0x259528u: goto label_259528;
        case 0x25952cu: goto label_25952c;
        case 0x259530u: goto label_259530;
        case 0x259534u: goto label_259534;
        case 0x259538u: goto label_259538;
        case 0x25953cu: goto label_25953c;
        case 0x259540u: goto label_259540;
        case 0x259544u: goto label_259544;
        case 0x259548u: goto label_259548;
        case 0x25954cu: goto label_25954c;
        case 0x259550u: goto label_259550;
        case 0x259554u: goto label_259554;
        case 0x259558u: goto label_259558;
        case 0x25955cu: goto label_25955c;
        case 0x259560u: goto label_259560;
        case 0x259564u: goto label_259564;
        case 0x259568u: goto label_259568;
        case 0x25956cu: goto label_25956c;
        case 0x259570u: goto label_259570;
        case 0x259574u: goto label_259574;
        case 0x259578u: goto label_259578;
        case 0x25957cu: goto label_25957c;
        case 0x259580u: goto label_259580;
        case 0x259584u: goto label_259584;
        case 0x259588u: goto label_259588;
        case 0x25958cu: goto label_25958c;
        case 0x259590u: goto label_259590;
        case 0x259594u: goto label_259594;
        case 0x259598u: goto label_259598;
        case 0x25959cu: goto label_25959c;
        case 0x2595a0u: goto label_2595a0;
        case 0x2595a4u: goto label_2595a4;
        case 0x2595a8u: goto label_2595a8;
        case 0x2595acu: goto label_2595ac;
        case 0x2595b0u: goto label_2595b0;
        case 0x2595b4u: goto label_2595b4;
        case 0x2595b8u: goto label_2595b8;
        case 0x2595bcu: goto label_2595bc;
        case 0x2595c0u: goto label_2595c0;
        case 0x2595c4u: goto label_2595c4;
        case 0x2595c8u: goto label_2595c8;
        case 0x2595ccu: goto label_2595cc;
        case 0x2595d0u: goto label_2595d0;
        case 0x2595d4u: goto label_2595d4;
        case 0x2595d8u: goto label_2595d8;
        case 0x2595dcu: goto label_2595dc;
        case 0x2595e0u: goto label_2595e0;
        case 0x2595e4u: goto label_2595e4;
        case 0x2595e8u: goto label_2595e8;
        case 0x2595ecu: goto label_2595ec;
        case 0x2595f0u: goto label_2595f0;
        case 0x2595f4u: goto label_2595f4;
        case 0x2595f8u: goto label_2595f8;
        case 0x2595fcu: goto label_2595fc;
        case 0x259600u: goto label_259600;
        case 0x259604u: goto label_259604;
        case 0x259608u: goto label_259608;
        case 0x25960cu: goto label_25960c;
        case 0x259610u: goto label_259610;
        case 0x259614u: goto label_259614;
        case 0x259618u: goto label_259618;
        case 0x25961cu: goto label_25961c;
        case 0x259620u: goto label_259620;
        case 0x259624u: goto label_259624;
        case 0x259628u: goto label_259628;
        case 0x25962cu: goto label_25962c;
        case 0x259630u: goto label_259630;
        case 0x259634u: goto label_259634;
        case 0x259638u: goto label_259638;
        case 0x25963cu: goto label_25963c;
        case 0x259640u: goto label_259640;
        case 0x259644u: goto label_259644;
        case 0x259648u: goto label_259648;
        case 0x25964cu: goto label_25964c;
        case 0x259650u: goto label_259650;
        case 0x259654u: goto label_259654;
        case 0x259658u: goto label_259658;
        case 0x25965cu: goto label_25965c;
        case 0x259660u: goto label_259660;
        case 0x259664u: goto label_259664;
        case 0x259668u: goto label_259668;
        case 0x25966cu: goto label_25966c;
        case 0x259670u: goto label_259670;
        case 0x259674u: goto label_259674;
        case 0x259678u: goto label_259678;
        case 0x25967cu: goto label_25967c;
        case 0x259680u: goto label_259680;
        case 0x259684u: goto label_259684;
        case 0x259688u: goto label_259688;
        case 0x25968cu: goto label_25968c;
        case 0x259690u: goto label_259690;
        case 0x259694u: goto label_259694;
        case 0x259698u: goto label_259698;
        case 0x25969cu: goto label_25969c;
        case 0x2596a0u: goto label_2596a0;
        case 0x2596a4u: goto label_2596a4;
        case 0x2596a8u: goto label_2596a8;
        case 0x2596acu: goto label_2596ac;
        case 0x2596b0u: goto label_2596b0;
        case 0x2596b4u: goto label_2596b4;
        case 0x2596b8u: goto label_2596b8;
        case 0x2596bcu: goto label_2596bc;
        case 0x2596c0u: goto label_2596c0;
        case 0x2596c4u: goto label_2596c4;
        case 0x2596c8u: goto label_2596c8;
        case 0x2596ccu: goto label_2596cc;
        case 0x2596d0u: goto label_2596d0;
        case 0x2596d4u: goto label_2596d4;
        case 0x2596d8u: goto label_2596d8;
        case 0x2596dcu: goto label_2596dc;
        case 0x2596e0u: goto label_2596e0;
        case 0x2596e4u: goto label_2596e4;
        case 0x2596e8u: goto label_2596e8;
        case 0x2596ecu: goto label_2596ec;
        case 0x2596f0u: goto label_2596f0;
        case 0x2596f4u: goto label_2596f4;
        case 0x2596f8u: goto label_2596f8;
        case 0x2596fcu: goto label_2596fc;
        case 0x259700u: goto label_259700;
        case 0x259704u: goto label_259704;
        case 0x259708u: goto label_259708;
        case 0x25970cu: goto label_25970c;
        case 0x259710u: goto label_259710;
        case 0x259714u: goto label_259714;
        case 0x259718u: goto label_259718;
        case 0x25971cu: goto label_25971c;
        case 0x259720u: goto label_259720;
        case 0x259724u: goto label_259724;
        case 0x259728u: goto label_259728;
        case 0x25972cu: goto label_25972c;
        case 0x259730u: goto label_259730;
        case 0x259734u: goto label_259734;
        case 0x259738u: goto label_259738;
        case 0x25973cu: goto label_25973c;
        case 0x259740u: goto label_259740;
        case 0x259744u: goto label_259744;
        case 0x259748u: goto label_259748;
        case 0x25974cu: goto label_25974c;
        case 0x259750u: goto label_259750;
        case 0x259754u: goto label_259754;
        case 0x259758u: goto label_259758;
        case 0x25975cu: goto label_25975c;
        case 0x259760u: goto label_259760;
        case 0x259764u: goto label_259764;
        case 0x259768u: goto label_259768;
        case 0x25976cu: goto label_25976c;
        case 0x259770u: goto label_259770;
        case 0x259774u: goto label_259774;
        case 0x259778u: goto label_259778;
        case 0x25977cu: goto label_25977c;
        case 0x259780u: goto label_259780;
        case 0x259784u: goto label_259784;
        case 0x259788u: goto label_259788;
        case 0x25978cu: goto label_25978c;
        case 0x259790u: goto label_259790;
        case 0x259794u: goto label_259794;
        case 0x259798u: goto label_259798;
        case 0x25979cu: goto label_25979c;
        case 0x2597a0u: goto label_2597a0;
        case 0x2597a4u: goto label_2597a4;
        case 0x2597a8u: goto label_2597a8;
        case 0x2597acu: goto label_2597ac;
        case 0x2597b0u: goto label_2597b0;
        case 0x2597b4u: goto label_2597b4;
        case 0x2597b8u: goto label_2597b8;
        case 0x2597bcu: goto label_2597bc;
        case 0x2597c0u: goto label_2597c0;
        case 0x2597c4u: goto label_2597c4;
        case 0x2597c8u: goto label_2597c8;
        case 0x2597ccu: goto label_2597cc;
        case 0x2597d0u: goto label_2597d0;
        case 0x2597d4u: goto label_2597d4;
        case 0x2597d8u: goto label_2597d8;
        case 0x2597dcu: goto label_2597dc;
        case 0x2597e0u: goto label_2597e0;
        case 0x2597e4u: goto label_2597e4;
        case 0x2597e8u: goto label_2597e8;
        case 0x2597ecu: goto label_2597ec;
        case 0x2597f0u: goto label_2597f0;
        case 0x2597f4u: goto label_2597f4;
        case 0x2597f8u: goto label_2597f8;
        case 0x2597fcu: goto label_2597fc;
        case 0x259800u: goto label_259800;
        case 0x259804u: goto label_259804;
        case 0x259808u: goto label_259808;
        case 0x25980cu: goto label_25980c;
        case 0x259810u: goto label_259810;
        case 0x259814u: goto label_259814;
        case 0x259818u: goto label_259818;
        case 0x25981cu: goto label_25981c;
        case 0x259820u: goto label_259820;
        case 0x259824u: goto label_259824;
        case 0x259828u: goto label_259828;
        case 0x25982cu: goto label_25982c;
        case 0x259830u: goto label_259830;
        case 0x259834u: goto label_259834;
        case 0x259838u: goto label_259838;
        case 0x25983cu: goto label_25983c;
        case 0x259840u: goto label_259840;
        case 0x259844u: goto label_259844;
        case 0x259848u: goto label_259848;
        case 0x25984cu: goto label_25984c;
        case 0x259850u: goto label_259850;
        case 0x259854u: goto label_259854;
        case 0x259858u: goto label_259858;
        case 0x25985cu: goto label_25985c;
        case 0x259860u: goto label_259860;
        case 0x259864u: goto label_259864;
        case 0x259868u: goto label_259868;
        case 0x25986cu: goto label_25986c;
        case 0x259870u: goto label_259870;
        case 0x259874u: goto label_259874;
        case 0x259878u: goto label_259878;
        case 0x25987cu: goto label_25987c;
        case 0x259880u: goto label_259880;
        case 0x259884u: goto label_259884;
        case 0x259888u: goto label_259888;
        case 0x25988cu: goto label_25988c;
        case 0x259890u: goto label_259890;
        case 0x259894u: goto label_259894;
        case 0x259898u: goto label_259898;
        case 0x25989cu: goto label_25989c;
        case 0x2598a0u: goto label_2598a0;
        case 0x2598a4u: goto label_2598a4;
        case 0x2598a8u: goto label_2598a8;
        case 0x2598acu: goto label_2598ac;
        case 0x2598b0u: goto label_2598b0;
        case 0x2598b4u: goto label_2598b4;
        case 0x2598b8u: goto label_2598b8;
        case 0x2598bcu: goto label_2598bc;
        case 0x2598c0u: goto label_2598c0;
        case 0x2598c4u: goto label_2598c4;
        case 0x2598c8u: goto label_2598c8;
        case 0x2598ccu: goto label_2598cc;
        case 0x2598d0u: goto label_2598d0;
        case 0x2598d4u: goto label_2598d4;
        case 0x2598d8u: goto label_2598d8;
        case 0x2598dcu: goto label_2598dc;
        case 0x2598e0u: goto label_2598e0;
        case 0x2598e4u: goto label_2598e4;
        case 0x2598e8u: goto label_2598e8;
        case 0x2598ecu: goto label_2598ec;
        case 0x2598f0u: goto label_2598f0;
        case 0x2598f4u: goto label_2598f4;
        case 0x2598f8u: goto label_2598f8;
        case 0x2598fcu: goto label_2598fc;
        case 0x259900u: goto label_259900;
        case 0x259904u: goto label_259904;
        case 0x259908u: goto label_259908;
        case 0x25990cu: goto label_25990c;
        case 0x259910u: goto label_259910;
        case 0x259914u: goto label_259914;
        case 0x259918u: goto label_259918;
        case 0x25991cu: goto label_25991c;
        case 0x259920u: goto label_259920;
        case 0x259924u: goto label_259924;
        case 0x259928u: goto label_259928;
        case 0x25992cu: goto label_25992c;
        case 0x259930u: goto label_259930;
        case 0x259934u: goto label_259934;
        case 0x259938u: goto label_259938;
        case 0x25993cu: goto label_25993c;
        case 0x259940u: goto label_259940;
        case 0x259944u: goto label_259944;
        case 0x259948u: goto label_259948;
        case 0x25994cu: goto label_25994c;
        case 0x259950u: goto label_259950;
        case 0x259954u: goto label_259954;
        case 0x259958u: goto label_259958;
        case 0x25995cu: goto label_25995c;
        case 0x259960u: goto label_259960;
        case 0x259964u: goto label_259964;
        case 0x259968u: goto label_259968;
        case 0x25996cu: goto label_25996c;
        case 0x259970u: goto label_259970;
        case 0x259974u: goto label_259974;
        case 0x259978u: goto label_259978;
        case 0x25997cu: goto label_25997c;
        case 0x259980u: goto label_259980;
        case 0x259984u: goto label_259984;
        case 0x259988u: goto label_259988;
        case 0x25998cu: goto label_25998c;
        case 0x259990u: goto label_259990;
        case 0x259994u: goto label_259994;
        case 0x259998u: goto label_259998;
        case 0x25999cu: goto label_25999c;
        case 0x2599a0u: goto label_2599a0;
        case 0x2599a4u: goto label_2599a4;
        case 0x2599a8u: goto label_2599a8;
        case 0x2599acu: goto label_2599ac;
        case 0x2599b0u: goto label_2599b0;
        case 0x2599b4u: goto label_2599b4;
        case 0x2599b8u: goto label_2599b8;
        case 0x2599bcu: goto label_2599bc;
        case 0x2599c0u: goto label_2599c0;
        case 0x2599c4u: goto label_2599c4;
        case 0x2599c8u: goto label_2599c8;
        case 0x2599ccu: goto label_2599cc;
        case 0x2599d0u: goto label_2599d0;
        case 0x2599d4u: goto label_2599d4;
        case 0x2599d8u: goto label_2599d8;
        case 0x2599dcu: goto label_2599dc;
        case 0x2599e0u: goto label_2599e0;
        case 0x2599e4u: goto label_2599e4;
        case 0x2599e8u: goto label_2599e8;
        case 0x2599ecu: goto label_2599ec;
        case 0x2599f0u: goto label_2599f0;
        case 0x2599f4u: goto label_2599f4;
        case 0x2599f8u: goto label_2599f8;
        case 0x2599fcu: goto label_2599fc;
        case 0x259a00u: goto label_259a00;
        case 0x259a04u: goto label_259a04;
        case 0x259a08u: goto label_259a08;
        case 0x259a0cu: goto label_259a0c;
        case 0x259a10u: goto label_259a10;
        case 0x259a14u: goto label_259a14;
        case 0x259a18u: goto label_259a18;
        case 0x259a1cu: goto label_259a1c;
        case 0x259a20u: goto label_259a20;
        case 0x259a24u: goto label_259a24;
        case 0x259a28u: goto label_259a28;
        case 0x259a2cu: goto label_259a2c;
        case 0x259a30u: goto label_259a30;
        case 0x259a34u: goto label_259a34;
        case 0x259a38u: goto label_259a38;
        case 0x259a3cu: goto label_259a3c;
        case 0x259a40u: goto label_259a40;
        case 0x259a44u: goto label_259a44;
        case 0x259a48u: goto label_259a48;
        case 0x259a4cu: goto label_259a4c;
        case 0x259a50u: goto label_259a50;
        case 0x259a54u: goto label_259a54;
        case 0x259a58u: goto label_259a58;
        case 0x259a5cu: goto label_259a5c;
        case 0x259a60u: goto label_259a60;
        case 0x259a64u: goto label_259a64;
        case 0x259a68u: goto label_259a68;
        case 0x259a6cu: goto label_259a6c;
        case 0x259a70u: goto label_259a70;
        case 0x259a74u: goto label_259a74;
        case 0x259a78u: goto label_259a78;
        case 0x259a7cu: goto label_259a7c;
        case 0x259a80u: goto label_259a80;
        case 0x259a84u: goto label_259a84;
        case 0x259a88u: goto label_259a88;
        case 0x259a8cu: goto label_259a8c;
        case 0x259a90u: goto label_259a90;
        case 0x259a94u: goto label_259a94;
        case 0x259a98u: goto label_259a98;
        case 0x259a9cu: goto label_259a9c;
        case 0x259aa0u: goto label_259aa0;
        case 0x259aa4u: goto label_259aa4;
        case 0x259aa8u: goto label_259aa8;
        case 0x259aacu: goto label_259aac;
        case 0x259ab0u: goto label_259ab0;
        case 0x259ab4u: goto label_259ab4;
        case 0x259ab8u: goto label_259ab8;
        case 0x259abcu: goto label_259abc;
        case 0x259ac0u: goto label_259ac0;
        case 0x259ac4u: goto label_259ac4;
        case 0x259ac8u: goto label_259ac8;
        case 0x259accu: goto label_259acc;
        case 0x259ad0u: goto label_259ad0;
        case 0x259ad4u: goto label_259ad4;
        case 0x259ad8u: goto label_259ad8;
        case 0x259adcu: goto label_259adc;
        case 0x259ae0u: goto label_259ae0;
        case 0x259ae4u: goto label_259ae4;
        case 0x259ae8u: goto label_259ae8;
        case 0x259aecu: goto label_259aec;
        case 0x259af0u: goto label_259af0;
        case 0x259af4u: goto label_259af4;
        case 0x259af8u: goto label_259af8;
        case 0x259afcu: goto label_259afc;
        case 0x259b00u: goto label_259b00;
        case 0x259b04u: goto label_259b04;
        case 0x259b08u: goto label_259b08;
        case 0x259b0cu: goto label_259b0c;
        case 0x259b10u: goto label_259b10;
        case 0x259b14u: goto label_259b14;
        case 0x259b18u: goto label_259b18;
        case 0x259b1cu: goto label_259b1c;
        case 0x259b20u: goto label_259b20;
        case 0x259b24u: goto label_259b24;
        case 0x259b28u: goto label_259b28;
        case 0x259b2cu: goto label_259b2c;
        case 0x259b30u: goto label_259b30;
        case 0x259b34u: goto label_259b34;
        case 0x259b38u: goto label_259b38;
        case 0x259b3cu: goto label_259b3c;
        case 0x259b40u: goto label_259b40;
        case 0x259b44u: goto label_259b44;
        case 0x259b48u: goto label_259b48;
        case 0x259b4cu: goto label_259b4c;
        case 0x259b50u: goto label_259b50;
        case 0x259b54u: goto label_259b54;
        case 0x259b58u: goto label_259b58;
        case 0x259b5cu: goto label_259b5c;
        case 0x259b60u: goto label_259b60;
        case 0x259b64u: goto label_259b64;
        case 0x259b68u: goto label_259b68;
        case 0x259b6cu: goto label_259b6c;
        case 0x259b70u: goto label_259b70;
        case 0x259b74u: goto label_259b74;
        case 0x259b78u: goto label_259b78;
        case 0x259b7cu: goto label_259b7c;
        case 0x259b80u: goto label_259b80;
        case 0x259b84u: goto label_259b84;
        case 0x259b88u: goto label_259b88;
        case 0x259b8cu: goto label_259b8c;
        case 0x259b90u: goto label_259b90;
        case 0x259b94u: goto label_259b94;
        case 0x259b98u: goto label_259b98;
        case 0x259b9cu: goto label_259b9c;
        case 0x259ba0u: goto label_259ba0;
        case 0x259ba4u: goto label_259ba4;
        case 0x259ba8u: goto label_259ba8;
        case 0x259bacu: goto label_259bac;
        case 0x259bb0u: goto label_259bb0;
        case 0x259bb4u: goto label_259bb4;
        case 0x259bb8u: goto label_259bb8;
        case 0x259bbcu: goto label_259bbc;
        case 0x259bc0u: goto label_259bc0;
        case 0x259bc4u: goto label_259bc4;
        case 0x259bc8u: goto label_259bc8;
        case 0x259bccu: goto label_259bcc;
        case 0x259bd0u: goto label_259bd0;
        case 0x259bd4u: goto label_259bd4;
        case 0x259bd8u: goto label_259bd8;
        case 0x259bdcu: goto label_259bdc;
        case 0x259be0u: goto label_259be0;
        case 0x259be4u: goto label_259be4;
        case 0x259be8u: goto label_259be8;
        case 0x259becu: goto label_259bec;
        case 0x259bf0u: goto label_259bf0;
        case 0x259bf4u: goto label_259bf4;
        case 0x259bf8u: goto label_259bf8;
        case 0x259bfcu: goto label_259bfc;
        case 0x259c00u: goto label_259c00;
        case 0x259c04u: goto label_259c04;
        case 0x259c08u: goto label_259c08;
        case 0x259c0cu: goto label_259c0c;
        case 0x259c10u: goto label_259c10;
        case 0x259c14u: goto label_259c14;
        case 0x259c18u: goto label_259c18;
        case 0x259c1cu: goto label_259c1c;
        case 0x259c20u: goto label_259c20;
        case 0x259c24u: goto label_259c24;
        case 0x259c28u: goto label_259c28;
        case 0x259c2cu: goto label_259c2c;
        case 0x259c30u: goto label_259c30;
        case 0x259c34u: goto label_259c34;
        case 0x259c38u: goto label_259c38;
        case 0x259c3cu: goto label_259c3c;
        case 0x259c40u: goto label_259c40;
        case 0x259c44u: goto label_259c44;
        case 0x259c48u: goto label_259c48;
        case 0x259c4cu: goto label_259c4c;
        case 0x259c50u: goto label_259c50;
        case 0x259c54u: goto label_259c54;
        case 0x259c58u: goto label_259c58;
        case 0x259c5cu: goto label_259c5c;
        case 0x259c60u: goto label_259c60;
        case 0x259c64u: goto label_259c64;
        case 0x259c68u: goto label_259c68;
        case 0x259c6cu: goto label_259c6c;
        case 0x259c70u: goto label_259c70;
        case 0x259c74u: goto label_259c74;
        case 0x259c78u: goto label_259c78;
        case 0x259c7cu: goto label_259c7c;
        case 0x259c80u: goto label_259c80;
        case 0x259c84u: goto label_259c84;
        case 0x259c88u: goto label_259c88;
        case 0x259c8cu: goto label_259c8c;
        case 0x259c90u: goto label_259c90;
        case 0x259c94u: goto label_259c94;
        case 0x259c98u: goto label_259c98;
        case 0x259c9cu: goto label_259c9c;
        case 0x259ca0u: goto label_259ca0;
        case 0x259ca4u: goto label_259ca4;
        case 0x259ca8u: goto label_259ca8;
        case 0x259cacu: goto label_259cac;
        case 0x259cb0u: goto label_259cb0;
        case 0x259cb4u: goto label_259cb4;
        case 0x259cb8u: goto label_259cb8;
        case 0x259cbcu: goto label_259cbc;
        case 0x259cc0u: goto label_259cc0;
        case 0x259cc4u: goto label_259cc4;
        case 0x259cc8u: goto label_259cc8;
        case 0x259cccu: goto label_259ccc;
        case 0x259cd0u: goto label_259cd0;
        case 0x259cd4u: goto label_259cd4;
        case 0x259cd8u: goto label_259cd8;
        case 0x259cdcu: goto label_259cdc;
        case 0x259ce0u: goto label_259ce0;
        case 0x259ce4u: goto label_259ce4;
        case 0x259ce8u: goto label_259ce8;
        case 0x259cecu: goto label_259cec;
        case 0x259cf0u: goto label_259cf0;
        case 0x259cf4u: goto label_259cf4;
        case 0x259cf8u: goto label_259cf8;
        case 0x259cfcu: goto label_259cfc;
        case 0x259d00u: goto label_259d00;
        case 0x259d04u: goto label_259d04;
        case 0x259d08u: goto label_259d08;
        case 0x259d0cu: goto label_259d0c;
        case 0x259d10u: goto label_259d10;
        case 0x259d14u: goto label_259d14;
        case 0x259d18u: goto label_259d18;
        case 0x259d1cu: goto label_259d1c;
        case 0x259d20u: goto label_259d20;
        case 0x259d24u: goto label_259d24;
        case 0x259d28u: goto label_259d28;
        case 0x259d2cu: goto label_259d2c;
        case 0x259d30u: goto label_259d30;
        case 0x259d34u: goto label_259d34;
        case 0x259d38u: goto label_259d38;
        case 0x259d3cu: goto label_259d3c;
        case 0x259d40u: goto label_259d40;
        case 0x259d44u: goto label_259d44;
        case 0x259d48u: goto label_259d48;
        case 0x259d4cu: goto label_259d4c;
        case 0x259d50u: goto label_259d50;
        case 0x259d54u: goto label_259d54;
        case 0x259d58u: goto label_259d58;
        case 0x259d5cu: goto label_259d5c;
        case 0x259d60u: goto label_259d60;
        case 0x259d64u: goto label_259d64;
        case 0x259d68u: goto label_259d68;
        case 0x259d6cu: goto label_259d6c;
        case 0x259d70u: goto label_259d70;
        case 0x259d74u: goto label_259d74;
        case 0x259d78u: goto label_259d78;
        case 0x259d7cu: goto label_259d7c;
        case 0x259d80u: goto label_259d80;
        case 0x259d84u: goto label_259d84;
        case 0x259d88u: goto label_259d88;
        case 0x259d8cu: goto label_259d8c;
        case 0x259d90u: goto label_259d90;
        case 0x259d94u: goto label_259d94;
        case 0x259d98u: goto label_259d98;
        case 0x259d9cu: goto label_259d9c;
        case 0x259da0u: goto label_259da0;
        case 0x259da4u: goto label_259da4;
        case 0x259da8u: goto label_259da8;
        case 0x259dacu: goto label_259dac;
        case 0x259db0u: goto label_259db0;
        case 0x259db4u: goto label_259db4;
        case 0x259db8u: goto label_259db8;
        case 0x259dbcu: goto label_259dbc;
        case 0x259dc0u: goto label_259dc0;
        case 0x259dc4u: goto label_259dc4;
        case 0x259dc8u: goto label_259dc8;
        case 0x259dccu: goto label_259dcc;
        case 0x259dd0u: goto label_259dd0;
        case 0x259dd4u: goto label_259dd4;
        case 0x259dd8u: goto label_259dd8;
        case 0x259ddcu: goto label_259ddc;
        case 0x259de0u: goto label_259de0;
        case 0x259de4u: goto label_259de4;
        case 0x259de8u: goto label_259de8;
        case 0x259decu: goto label_259dec;
        case 0x259df0u: goto label_259df0;
        case 0x259df4u: goto label_259df4;
        case 0x259df8u: goto label_259df8;
        case 0x259dfcu: goto label_259dfc;
        case 0x259e00u: goto label_259e00;
        case 0x259e04u: goto label_259e04;
        case 0x259e08u: goto label_259e08;
        case 0x259e0cu: goto label_259e0c;
        case 0x259e10u: goto label_259e10;
        case 0x259e14u: goto label_259e14;
        case 0x259e18u: goto label_259e18;
        case 0x259e1cu: goto label_259e1c;
        case 0x259e20u: goto label_259e20;
        case 0x259e24u: goto label_259e24;
        case 0x259e28u: goto label_259e28;
        case 0x259e2cu: goto label_259e2c;
        case 0x259e30u: goto label_259e30;
        case 0x259e34u: goto label_259e34;
        case 0x259e38u: goto label_259e38;
        case 0x259e3cu: goto label_259e3c;
        case 0x259e40u: goto label_259e40;
        case 0x259e44u: goto label_259e44;
        case 0x259e48u: goto label_259e48;
        case 0x259e4cu: goto label_259e4c;
        case 0x259e50u: goto label_259e50;
        case 0x259e54u: goto label_259e54;
        case 0x259e58u: goto label_259e58;
        case 0x259e5cu: goto label_259e5c;
        case 0x259e60u: goto label_259e60;
        case 0x259e64u: goto label_259e64;
        case 0x259e68u: goto label_259e68;
        case 0x259e6cu: goto label_259e6c;
        case 0x259e70u: goto label_259e70;
        case 0x259e74u: goto label_259e74;
        case 0x259e78u: goto label_259e78;
        case 0x259e7cu: goto label_259e7c;
        case 0x259e80u: goto label_259e80;
        case 0x259e84u: goto label_259e84;
        case 0x259e88u: goto label_259e88;
        case 0x259e8cu: goto label_259e8c;
        case 0x259e90u: goto label_259e90;
        case 0x259e94u: goto label_259e94;
        case 0x259e98u: goto label_259e98;
        case 0x259e9cu: goto label_259e9c;
        case 0x259ea0u: goto label_259ea0;
        case 0x259ea4u: goto label_259ea4;
        case 0x259ea8u: goto label_259ea8;
        case 0x259eacu: goto label_259eac;
        case 0x259eb0u: goto label_259eb0;
        case 0x259eb4u: goto label_259eb4;
        case 0x259eb8u: goto label_259eb8;
        case 0x259ebcu: goto label_259ebc;
        case 0x259ec0u: goto label_259ec0;
        case 0x259ec4u: goto label_259ec4;
        case 0x259ec8u: goto label_259ec8;
        case 0x259eccu: goto label_259ecc;
        case 0x259ed0u: goto label_259ed0;
        case 0x259ed4u: goto label_259ed4;
        case 0x259ed8u: goto label_259ed8;
        case 0x259edcu: goto label_259edc;
        case 0x259ee0u: goto label_259ee0;
        case 0x259ee4u: goto label_259ee4;
        case 0x259ee8u: goto label_259ee8;
        case 0x259eecu: goto label_259eec;
        case 0x259ef0u: goto label_259ef0;
        case 0x259ef4u: goto label_259ef4;
        case 0x259ef8u: goto label_259ef8;
        case 0x259efcu: goto label_259efc;
        case 0x259f00u: goto label_259f00;
        case 0x259f04u: goto label_259f04;
        case 0x259f08u: goto label_259f08;
        case 0x259f0cu: goto label_259f0c;
        case 0x259f10u: goto label_259f10;
        case 0x259f14u: goto label_259f14;
        case 0x259f18u: goto label_259f18;
        case 0x259f1cu: goto label_259f1c;
        case 0x259f20u: goto label_259f20;
        case 0x259f24u: goto label_259f24;
        case 0x259f28u: goto label_259f28;
        case 0x259f2cu: goto label_259f2c;
        case 0x259f30u: goto label_259f30;
        case 0x259f34u: goto label_259f34;
        case 0x259f38u: goto label_259f38;
        case 0x259f3cu: goto label_259f3c;
        case 0x259f40u: goto label_259f40;
        case 0x259f44u: goto label_259f44;
        case 0x259f48u: goto label_259f48;
        case 0x259f4cu: goto label_259f4c;
        case 0x259f50u: goto label_259f50;
        case 0x259f54u: goto label_259f54;
        case 0x259f58u: goto label_259f58;
        case 0x259f5cu: goto label_259f5c;
        case 0x259f60u: goto label_259f60;
        case 0x259f64u: goto label_259f64;
        case 0x259f68u: goto label_259f68;
        case 0x259f6cu: goto label_259f6c;
        case 0x259f70u: goto label_259f70;
        case 0x259f74u: goto label_259f74;
        case 0x259f78u: goto label_259f78;
        case 0x259f7cu: goto label_259f7c;
        case 0x259f80u: goto label_259f80;
        case 0x259f84u: goto label_259f84;
        case 0x259f88u: goto label_259f88;
        case 0x259f8cu: goto label_259f8c;
        case 0x259f90u: goto label_259f90;
        case 0x259f94u: goto label_259f94;
        case 0x259f98u: goto label_259f98;
        case 0x259f9cu: goto label_259f9c;
        case 0x259fa0u: goto label_259fa0;
        case 0x259fa4u: goto label_259fa4;
        case 0x259fa8u: goto label_259fa8;
        case 0x259facu: goto label_259fac;
        case 0x259fb0u: goto label_259fb0;
        case 0x259fb4u: goto label_259fb4;
        case 0x259fb8u: goto label_259fb8;
        case 0x259fbcu: goto label_259fbc;
        case 0x259fc0u: goto label_259fc0;
        case 0x259fc4u: goto label_259fc4;
        case 0x259fc8u: goto label_259fc8;
        case 0x259fccu: goto label_259fcc;
        case 0x259fd0u: goto label_259fd0;
        case 0x259fd4u: goto label_259fd4;
        case 0x259fd8u: goto label_259fd8;
        case 0x259fdcu: goto label_259fdc;
        case 0x259fe0u: goto label_259fe0;
        case 0x259fe4u: goto label_259fe4;
        case 0x259fe8u: goto label_259fe8;
        case 0x259fecu: goto label_259fec;
        case 0x259ff0u: goto label_259ff0;
        case 0x259ff4u: goto label_259ff4;
        case 0x259ff8u: goto label_259ff8;
        case 0x259ffcu: goto label_259ffc;
        case 0x25a000u: goto label_25a000;
        case 0x25a004u: goto label_25a004;
        case 0x25a008u: goto label_25a008;
        case 0x25a00cu: goto label_25a00c;
        case 0x25a010u: goto label_25a010;
        case 0x25a014u: goto label_25a014;
        case 0x25a018u: goto label_25a018;
        case 0x25a01cu: goto label_25a01c;
        case 0x25a020u: goto label_25a020;
        case 0x25a024u: goto label_25a024;
        case 0x25a028u: goto label_25a028;
        case 0x25a02cu: goto label_25a02c;
        case 0x25a030u: goto label_25a030;
        case 0x25a034u: goto label_25a034;
        case 0x25a038u: goto label_25a038;
        case 0x25a03cu: goto label_25a03c;
        case 0x25a040u: goto label_25a040;
        case 0x25a044u: goto label_25a044;
        case 0x25a048u: goto label_25a048;
        case 0x25a04cu: goto label_25a04c;
        case 0x25a050u: goto label_25a050;
        case 0x25a054u: goto label_25a054;
        case 0x25a058u: goto label_25a058;
        case 0x25a05cu: goto label_25a05c;
        case 0x25a060u: goto label_25a060;
        case 0x25a064u: goto label_25a064;
        case 0x25a068u: goto label_25a068;
        case 0x25a06cu: goto label_25a06c;
        case 0x25a070u: goto label_25a070;
        case 0x25a074u: goto label_25a074;
        case 0x25a078u: goto label_25a078;
        case 0x25a07cu: goto label_25a07c;
        case 0x25a080u: goto label_25a080;
        case 0x25a084u: goto label_25a084;
        case 0x25a088u: goto label_25a088;
        case 0x25a08cu: goto label_25a08c;
        case 0x25a090u: goto label_25a090;
        case 0x25a094u: goto label_25a094;
        case 0x25a098u: goto label_25a098;
        case 0x25a09cu: goto label_25a09c;
        case 0x25a0a0u: goto label_25a0a0;
        case 0x25a0a4u: goto label_25a0a4;
        case 0x25a0a8u: goto label_25a0a8;
        case 0x25a0acu: goto label_25a0ac;
        case 0x25a0b0u: goto label_25a0b0;
        case 0x25a0b4u: goto label_25a0b4;
        case 0x25a0b8u: goto label_25a0b8;
        case 0x25a0bcu: goto label_25a0bc;
        case 0x25a0c0u: goto label_25a0c0;
        case 0x25a0c4u: goto label_25a0c4;
        case 0x25a0c8u: goto label_25a0c8;
        case 0x25a0ccu: goto label_25a0cc;
        case 0x25a0d0u: goto label_25a0d0;
        case 0x25a0d4u: goto label_25a0d4;
        case 0x25a0d8u: goto label_25a0d8;
        case 0x25a0dcu: goto label_25a0dc;
        case 0x25a0e0u: goto label_25a0e0;
        case 0x25a0e4u: goto label_25a0e4;
        case 0x25a0e8u: goto label_25a0e8;
        case 0x25a0ecu: goto label_25a0ec;
        case 0x25a0f0u: goto label_25a0f0;
        case 0x25a0f4u: goto label_25a0f4;
        case 0x25a0f8u: goto label_25a0f8;
        case 0x25a0fcu: goto label_25a0fc;
        case 0x25a100u: goto label_25a100;
        case 0x25a104u: goto label_25a104;
        case 0x25a108u: goto label_25a108;
        case 0x25a10cu: goto label_25a10c;
        case 0x25a110u: goto label_25a110;
        case 0x25a114u: goto label_25a114;
        case 0x25a118u: goto label_25a118;
        case 0x25a11cu: goto label_25a11c;
        case 0x25a120u: goto label_25a120;
        case 0x25a124u: goto label_25a124;
        case 0x25a128u: goto label_25a128;
        case 0x25a12cu: goto label_25a12c;
        case 0x25a130u: goto label_25a130;
        case 0x25a134u: goto label_25a134;
        case 0x25a138u: goto label_25a138;
        case 0x25a13cu: goto label_25a13c;
        case 0x25a140u: goto label_25a140;
        case 0x25a144u: goto label_25a144;
        case 0x25a148u: goto label_25a148;
        case 0x25a14cu: goto label_25a14c;
        case 0x25a150u: goto label_25a150;
        case 0x25a154u: goto label_25a154;
        case 0x25a158u: goto label_25a158;
        case 0x25a15cu: goto label_25a15c;
        case 0x25a160u: goto label_25a160;
        case 0x25a164u: goto label_25a164;
        case 0x25a168u: goto label_25a168;
        case 0x25a16cu: goto label_25a16c;
        case 0x25a170u: goto label_25a170;
        case 0x25a174u: goto label_25a174;
        case 0x25a178u: goto label_25a178;
        case 0x25a17cu: goto label_25a17c;
        case 0x25a180u: goto label_25a180;
        case 0x25a184u: goto label_25a184;
        case 0x25a188u: goto label_25a188;
        case 0x25a18cu: goto label_25a18c;
        case 0x25a190u: goto label_25a190;
        case 0x25a194u: goto label_25a194;
        case 0x25a198u: goto label_25a198;
        case 0x25a19cu: goto label_25a19c;
        case 0x25a1a0u: goto label_25a1a0;
        case 0x25a1a4u: goto label_25a1a4;
        case 0x25a1a8u: goto label_25a1a8;
        case 0x25a1acu: goto label_25a1ac;
        case 0x25a1b0u: goto label_25a1b0;
        case 0x25a1b4u: goto label_25a1b4;
        case 0x25a1b8u: goto label_25a1b8;
        case 0x25a1bcu: goto label_25a1bc;
        case 0x25a1c0u: goto label_25a1c0;
        case 0x25a1c4u: goto label_25a1c4;
        case 0x25a1c8u: goto label_25a1c8;
        case 0x25a1ccu: goto label_25a1cc;
        case 0x25a1d0u: goto label_25a1d0;
        case 0x25a1d4u: goto label_25a1d4;
        case 0x25a1d8u: goto label_25a1d8;
        case 0x25a1dcu: goto label_25a1dc;
        case 0x25a1e0u: goto label_25a1e0;
        case 0x25a1e4u: goto label_25a1e4;
        case 0x25a1e8u: goto label_25a1e8;
        case 0x25a1ecu: goto label_25a1ec;
        case 0x25a1f0u: goto label_25a1f0;
        case 0x25a1f4u: goto label_25a1f4;
        case 0x25a1f8u: goto label_25a1f8;
        case 0x25a1fcu: goto label_25a1fc;
        case 0x25a200u: goto label_25a200;
        case 0x25a204u: goto label_25a204;
        case 0x25a208u: goto label_25a208;
        case 0x25a20cu: goto label_25a20c;
        case 0x25a210u: goto label_25a210;
        case 0x25a214u: goto label_25a214;
        case 0x25a218u: goto label_25a218;
        case 0x25a21cu: goto label_25a21c;
        case 0x25a220u: goto label_25a220;
        case 0x25a224u: goto label_25a224;
        case 0x25a228u: goto label_25a228;
        case 0x25a22cu: goto label_25a22c;
        case 0x25a230u: goto label_25a230;
        case 0x25a234u: goto label_25a234;
        case 0x25a238u: goto label_25a238;
        case 0x25a23cu: goto label_25a23c;
        case 0x25a240u: goto label_25a240;
        case 0x25a244u: goto label_25a244;
        case 0x25a248u: goto label_25a248;
        case 0x25a24cu: goto label_25a24c;
        case 0x25a250u: goto label_25a250;
        case 0x25a254u: goto label_25a254;
        case 0x25a258u: goto label_25a258;
        case 0x25a25cu: goto label_25a25c;
        case 0x25a260u: goto label_25a260;
        case 0x25a264u: goto label_25a264;
        case 0x25a268u: goto label_25a268;
        case 0x25a26cu: goto label_25a26c;
        case 0x25a270u: goto label_25a270;
        case 0x25a274u: goto label_25a274;
        case 0x25a278u: goto label_25a278;
        case 0x25a27cu: goto label_25a27c;
        case 0x25a280u: goto label_25a280;
        case 0x25a284u: goto label_25a284;
        case 0x25a288u: goto label_25a288;
        case 0x25a28cu: goto label_25a28c;
        case 0x25a290u: goto label_25a290;
        case 0x25a294u: goto label_25a294;
        case 0x25a298u: goto label_25a298;
        case 0x25a29cu: goto label_25a29c;
        case 0x25a2a0u: goto label_25a2a0;
        case 0x25a2a4u: goto label_25a2a4;
        case 0x25a2a8u: goto label_25a2a8;
        case 0x25a2acu: goto label_25a2ac;
        case 0x25a2b0u: goto label_25a2b0;
        case 0x25a2b4u: goto label_25a2b4;
        case 0x25a2b8u: goto label_25a2b8;
        case 0x25a2bcu: goto label_25a2bc;
        case 0x25a2c0u: goto label_25a2c0;
        case 0x25a2c4u: goto label_25a2c4;
        case 0x25a2c8u: goto label_25a2c8;
        case 0x25a2ccu: goto label_25a2cc;
        case 0x25a2d0u: goto label_25a2d0;
        case 0x25a2d4u: goto label_25a2d4;
        case 0x25a2d8u: goto label_25a2d8;
        case 0x25a2dcu: goto label_25a2dc;
        case 0x25a2e0u: goto label_25a2e0;
        case 0x25a2e4u: goto label_25a2e4;
        case 0x25a2e8u: goto label_25a2e8;
        case 0x25a2ecu: goto label_25a2ec;
        case 0x25a2f0u: goto label_25a2f0;
        case 0x25a2f4u: goto label_25a2f4;
        case 0x25a2f8u: goto label_25a2f8;
        case 0x25a2fcu: goto label_25a2fc;
        case 0x25a300u: goto label_25a300;
        case 0x25a304u: goto label_25a304;
        case 0x25a308u: goto label_25a308;
        case 0x25a30cu: goto label_25a30c;
        case 0x25a310u: goto label_25a310;
        case 0x25a314u: goto label_25a314;
        case 0x25a318u: goto label_25a318;
        case 0x25a31cu: goto label_25a31c;
        case 0x25a320u: goto label_25a320;
        case 0x25a324u: goto label_25a324;
        case 0x25a328u: goto label_25a328;
        case 0x25a32cu: goto label_25a32c;
        case 0x25a330u: goto label_25a330;
        case 0x25a334u: goto label_25a334;
        case 0x25a338u: goto label_25a338;
        case 0x25a33cu: goto label_25a33c;
        case 0x25a340u: goto label_25a340;
        case 0x25a344u: goto label_25a344;
        case 0x25a348u: goto label_25a348;
        case 0x25a34cu: goto label_25a34c;
        case 0x25a350u: goto label_25a350;
        case 0x25a354u: goto label_25a354;
        case 0x25a358u: goto label_25a358;
        case 0x25a35cu: goto label_25a35c;
        case 0x25a360u: goto label_25a360;
        case 0x25a364u: goto label_25a364;
        case 0x25a368u: goto label_25a368;
        case 0x25a36cu: goto label_25a36c;
        case 0x25a370u: goto label_25a370;
        case 0x25a374u: goto label_25a374;
        case 0x25a378u: goto label_25a378;
        case 0x25a37cu: goto label_25a37c;
        case 0x25a380u: goto label_25a380;
        case 0x25a384u: goto label_25a384;
        case 0x25a388u: goto label_25a388;
        case 0x25a38cu: goto label_25a38c;
        case 0x25a390u: goto label_25a390;
        case 0x25a394u: goto label_25a394;
        case 0x25a398u: goto label_25a398;
        case 0x25a39cu: goto label_25a39c;
        case 0x25a3a0u: goto label_25a3a0;
        case 0x25a3a4u: goto label_25a3a4;
        case 0x25a3a8u: goto label_25a3a8;
        case 0x25a3acu: goto label_25a3ac;
        case 0x25a3b0u: goto label_25a3b0;
        case 0x25a3b4u: goto label_25a3b4;
        case 0x25a3b8u: goto label_25a3b8;
        case 0x25a3bcu: goto label_25a3bc;
        case 0x25a3c0u: goto label_25a3c0;
        case 0x25a3c4u: goto label_25a3c4;
        case 0x25a3c8u: goto label_25a3c8;
        case 0x25a3ccu: goto label_25a3cc;
        case 0x25a3d0u: goto label_25a3d0;
        case 0x25a3d4u: goto label_25a3d4;
        case 0x25a3d8u: goto label_25a3d8;
        case 0x25a3dcu: goto label_25a3dc;
        case 0x25a3e0u: goto label_25a3e0;
        case 0x25a3e4u: goto label_25a3e4;
        case 0x25a3e8u: goto label_25a3e8;
        case 0x25a3ecu: goto label_25a3ec;
        case 0x25a3f0u: goto label_25a3f0;
        case 0x25a3f4u: goto label_25a3f4;
        case 0x25a3f8u: goto label_25a3f8;
        case 0x25a3fcu: goto label_25a3fc;
        case 0x25a400u: goto label_25a400;
        case 0x25a404u: goto label_25a404;
        case 0x25a408u: goto label_25a408;
        case 0x25a40cu: goto label_25a40c;
        case 0x25a410u: goto label_25a410;
        case 0x25a414u: goto label_25a414;
        case 0x25a418u: goto label_25a418;
        case 0x25a41cu: goto label_25a41c;
        case 0x25a420u: goto label_25a420;
        case 0x25a424u: goto label_25a424;
        case 0x25a428u: goto label_25a428;
        case 0x25a42cu: goto label_25a42c;
        case 0x25a430u: goto label_25a430;
        case 0x25a434u: goto label_25a434;
        case 0x25a438u: goto label_25a438;
        case 0x25a43cu: goto label_25a43c;
        case 0x25a440u: goto label_25a440;
        case 0x25a444u: goto label_25a444;
        case 0x25a448u: goto label_25a448;
        case 0x25a44cu: goto label_25a44c;
        case 0x25a450u: goto label_25a450;
        case 0x25a454u: goto label_25a454;
        case 0x25a458u: goto label_25a458;
        case 0x25a45cu: goto label_25a45c;
        case 0x25a460u: goto label_25a460;
        case 0x25a464u: goto label_25a464;
        case 0x25a468u: goto label_25a468;
        case 0x25a46cu: goto label_25a46c;
        case 0x25a470u: goto label_25a470;
        case 0x25a474u: goto label_25a474;
        case 0x25a478u: goto label_25a478;
        case 0x25a47cu: goto label_25a47c;
        case 0x25a480u: goto label_25a480;
        case 0x25a484u: goto label_25a484;
        case 0x25a488u: goto label_25a488;
        case 0x25a48cu: goto label_25a48c;
        case 0x25a490u: goto label_25a490;
        case 0x25a494u: goto label_25a494;
        case 0x25a498u: goto label_25a498;
        case 0x25a49cu: goto label_25a49c;
        case 0x25a4a0u: goto label_25a4a0;
        case 0x25a4a4u: goto label_25a4a4;
        case 0x25a4a8u: goto label_25a4a8;
        case 0x25a4acu: goto label_25a4ac;
        case 0x25a4b0u: goto label_25a4b0;
        case 0x25a4b4u: goto label_25a4b4;
        case 0x25a4b8u: goto label_25a4b8;
        case 0x25a4bcu: goto label_25a4bc;
        case 0x25a4c0u: goto label_25a4c0;
        case 0x25a4c4u: goto label_25a4c4;
        case 0x25a4c8u: goto label_25a4c8;
        case 0x25a4ccu: goto label_25a4cc;
        case 0x25a4d0u: goto label_25a4d0;
        case 0x25a4d4u: goto label_25a4d4;
        case 0x25a4d8u: goto label_25a4d8;
        case 0x25a4dcu: goto label_25a4dc;
        case 0x25a4e0u: goto label_25a4e0;
        case 0x25a4e4u: goto label_25a4e4;
        case 0x25a4e8u: goto label_25a4e8;
        case 0x25a4ecu: goto label_25a4ec;
        case 0x25a4f0u: goto label_25a4f0;
        case 0x25a4f4u: goto label_25a4f4;
        case 0x25a4f8u: goto label_25a4f8;
        case 0x25a4fcu: goto label_25a4fc;
        case 0x25a500u: goto label_25a500;
        case 0x25a504u: goto label_25a504;
        case 0x25a508u: goto label_25a508;
        case 0x25a50cu: goto label_25a50c;
        case 0x25a510u: goto label_25a510;
        case 0x25a514u: goto label_25a514;
        case 0x25a518u: goto label_25a518;
        case 0x25a51cu: goto label_25a51c;
        case 0x25a520u: goto label_25a520;
        case 0x25a524u: goto label_25a524;
        case 0x25a528u: goto label_25a528;
        case 0x25a52cu: goto label_25a52c;
        case 0x25a530u: goto label_25a530;
        case 0x25a534u: goto label_25a534;
        case 0x25a538u: goto label_25a538;
        case 0x25a53cu: goto label_25a53c;
        case 0x25a540u: goto label_25a540;
        case 0x25a544u: goto label_25a544;
        case 0x25a548u: goto label_25a548;
        case 0x25a54cu: goto label_25a54c;
        case 0x25a550u: goto label_25a550;
        case 0x25a554u: goto label_25a554;
        case 0x25a558u: goto label_25a558;
        case 0x25a55cu: goto label_25a55c;
        case 0x25a560u: goto label_25a560;
        case 0x25a564u: goto label_25a564;
        case 0x25a568u: goto label_25a568;
        case 0x25a56cu: goto label_25a56c;
        case 0x25a570u: goto label_25a570;
        case 0x25a574u: goto label_25a574;
        case 0x25a578u: goto label_25a578;
        case 0x25a57cu: goto label_25a57c;
        case 0x25a580u: goto label_25a580;
        case 0x25a584u: goto label_25a584;
        case 0x25a588u: goto label_25a588;
        case 0x25a58cu: goto label_25a58c;
        case 0x25a590u: goto label_25a590;
        case 0x25a594u: goto label_25a594;
        case 0x25a598u: goto label_25a598;
        case 0x25a59cu: goto label_25a59c;
        case 0x25a5a0u: goto label_25a5a0;
        case 0x25a5a4u: goto label_25a5a4;
        case 0x25a5a8u: goto label_25a5a8;
        case 0x25a5acu: goto label_25a5ac;
        case 0x25a5b0u: goto label_25a5b0;
        case 0x25a5b4u: goto label_25a5b4;
        case 0x25a5b8u: goto label_25a5b8;
        case 0x25a5bcu: goto label_25a5bc;
        case 0x25a5c0u: goto label_25a5c0;
        case 0x25a5c4u: goto label_25a5c4;
        case 0x25a5c8u: goto label_25a5c8;
        case 0x25a5ccu: goto label_25a5cc;
        case 0x25a5d0u: goto label_25a5d0;
        case 0x25a5d4u: goto label_25a5d4;
        case 0x25a5d8u: goto label_25a5d8;
        case 0x25a5dcu: goto label_25a5dc;
        case 0x25a5e0u: goto label_25a5e0;
        case 0x25a5e4u: goto label_25a5e4;
        case 0x25a5e8u: goto label_25a5e8;
        case 0x25a5ecu: goto label_25a5ec;
        case 0x25a5f0u: goto label_25a5f0;
        case 0x25a5f4u: goto label_25a5f4;
        case 0x25a5f8u: goto label_25a5f8;
        case 0x25a5fcu: goto label_25a5fc;
        case 0x25a600u: goto label_25a600;
        case 0x25a604u: goto label_25a604;
        case 0x25a608u: goto label_25a608;
        case 0x25a60cu: goto label_25a60c;
        case 0x25a610u: goto label_25a610;
        case 0x25a614u: goto label_25a614;
        case 0x25a618u: goto label_25a618;
        case 0x25a61cu: goto label_25a61c;
        case 0x25a620u: goto label_25a620;
        case 0x25a624u: goto label_25a624;
        case 0x25a628u: goto label_25a628;
        case 0x25a62cu: goto label_25a62c;
        case 0x25a630u: goto label_25a630;
        case 0x25a634u: goto label_25a634;
        case 0x25a638u: goto label_25a638;
        case 0x25a63cu: goto label_25a63c;
        case 0x25a640u: goto label_25a640;
        case 0x25a644u: goto label_25a644;
        case 0x25a648u: goto label_25a648;
        case 0x25a64cu: goto label_25a64c;
        case 0x25a650u: goto label_25a650;
        case 0x25a654u: goto label_25a654;
        case 0x25a658u: goto label_25a658;
        case 0x25a65cu: goto label_25a65c;
        case 0x25a660u: goto label_25a660;
        case 0x25a664u: goto label_25a664;
        case 0x25a668u: goto label_25a668;
        case 0x25a66cu: goto label_25a66c;
        case 0x25a670u: goto label_25a670;
        case 0x25a674u: goto label_25a674;
        case 0x25a678u: goto label_25a678;
        case 0x25a67cu: goto label_25a67c;
        case 0x25a680u: goto label_25a680;
        case 0x25a684u: goto label_25a684;
        case 0x25a688u: goto label_25a688;
        case 0x25a68cu: goto label_25a68c;
        case 0x25a690u: goto label_25a690;
        case 0x25a694u: goto label_25a694;
        case 0x25a698u: goto label_25a698;
        case 0x25a69cu: goto label_25a69c;
        case 0x25a6a0u: goto label_25a6a0;
        case 0x25a6a4u: goto label_25a6a4;
        case 0x25a6a8u: goto label_25a6a8;
        case 0x25a6acu: goto label_25a6ac;
        case 0x25a6b0u: goto label_25a6b0;
        case 0x25a6b4u: goto label_25a6b4;
        case 0x25a6b8u: goto label_25a6b8;
        case 0x25a6bcu: goto label_25a6bc;
        case 0x25a6c0u: goto label_25a6c0;
        case 0x25a6c4u: goto label_25a6c4;
        case 0x25a6c8u: goto label_25a6c8;
        case 0x25a6ccu: goto label_25a6cc;
        case 0x25a6d0u: goto label_25a6d0;
        case 0x25a6d4u: goto label_25a6d4;
        case 0x25a6d8u: goto label_25a6d8;
        case 0x25a6dcu: goto label_25a6dc;
        case 0x25a6e0u: goto label_25a6e0;
        case 0x25a6e4u: goto label_25a6e4;
        case 0x25a6e8u: goto label_25a6e8;
        case 0x25a6ecu: goto label_25a6ec;
        case 0x25a6f0u: goto label_25a6f0;
        case 0x25a6f4u: goto label_25a6f4;
        case 0x25a6f8u: goto label_25a6f8;
        case 0x25a6fcu: goto label_25a6fc;
        case 0x25a700u: goto label_25a700;
        case 0x25a704u: goto label_25a704;
        case 0x25a708u: goto label_25a708;
        case 0x25a70cu: goto label_25a70c;
        case 0x25a710u: goto label_25a710;
        case 0x25a714u: goto label_25a714;
        case 0x25a718u: goto label_25a718;
        case 0x25a71cu: goto label_25a71c;
        case 0x25a720u: goto label_25a720;
        case 0x25a724u: goto label_25a724;
        case 0x25a728u: goto label_25a728;
        case 0x25a72cu: goto label_25a72c;
        case 0x25a730u: goto label_25a730;
        case 0x25a734u: goto label_25a734;
        case 0x25a738u: goto label_25a738;
        case 0x25a73cu: goto label_25a73c;
        case 0x25a740u: goto label_25a740;
        case 0x25a744u: goto label_25a744;
        case 0x25a748u: goto label_25a748;
        case 0x25a74cu: goto label_25a74c;
        case 0x25a750u: goto label_25a750;
        case 0x25a754u: goto label_25a754;
        case 0x25a758u: goto label_25a758;
        case 0x25a75cu: goto label_25a75c;
        case 0x25a760u: goto label_25a760;
        case 0x25a764u: goto label_25a764;
        case 0x25a768u: goto label_25a768;
        case 0x25a76cu: goto label_25a76c;
        case 0x25a770u: goto label_25a770;
        case 0x25a774u: goto label_25a774;
        case 0x25a778u: goto label_25a778;
        case 0x25a77cu: goto label_25a77c;
        case 0x25a780u: goto label_25a780;
        case 0x25a784u: goto label_25a784;
        case 0x25a788u: goto label_25a788;
        case 0x25a78cu: goto label_25a78c;
        case 0x25a790u: goto label_25a790;
        case 0x25a794u: goto label_25a794;
        case 0x25a798u: goto label_25a798;
        case 0x25a79cu: goto label_25a79c;
        case 0x25a7a0u: goto label_25a7a0;
        case 0x25a7a4u: goto label_25a7a4;
        case 0x25a7a8u: goto label_25a7a8;
        case 0x25a7acu: goto label_25a7ac;
        case 0x25a7b0u: goto label_25a7b0;
        case 0x25a7b4u: goto label_25a7b4;
        case 0x25a7b8u: goto label_25a7b8;
        case 0x25a7bcu: goto label_25a7bc;
        case 0x25a7c0u: goto label_25a7c0;
        case 0x25a7c4u: goto label_25a7c4;
        case 0x25a7c8u: goto label_25a7c8;
        case 0x25a7ccu: goto label_25a7cc;
        case 0x25a7d0u: goto label_25a7d0;
        case 0x25a7d4u: goto label_25a7d4;
        case 0x25a7d8u: goto label_25a7d8;
        case 0x25a7dcu: goto label_25a7dc;
        case 0x25a7e0u: goto label_25a7e0;
        case 0x25a7e4u: goto label_25a7e4;
        case 0x25a7e8u: goto label_25a7e8;
        case 0x25a7ecu: goto label_25a7ec;
        case 0x25a7f0u: goto label_25a7f0;
        case 0x25a7f4u: goto label_25a7f4;
        case 0x25a7f8u: goto label_25a7f8;
        case 0x25a7fcu: goto label_25a7fc;
        case 0x25a800u: goto label_25a800;
        case 0x25a804u: goto label_25a804;
        case 0x25a808u: goto label_25a808;
        case 0x25a80cu: goto label_25a80c;
        case 0x25a810u: goto label_25a810;
        case 0x25a814u: goto label_25a814;
        case 0x25a818u: goto label_25a818;
        case 0x25a81cu: goto label_25a81c;
        case 0x25a820u: goto label_25a820;
        case 0x25a824u: goto label_25a824;
        case 0x25a828u: goto label_25a828;
        case 0x25a82cu: goto label_25a82c;
        case 0x25a830u: goto label_25a830;
        case 0x25a834u: goto label_25a834;
        case 0x25a838u: goto label_25a838;
        case 0x25a83cu: goto label_25a83c;
        case 0x25a840u: goto label_25a840;
        case 0x25a844u: goto label_25a844;
        case 0x25a848u: goto label_25a848;
        case 0x25a84cu: goto label_25a84c;
        case 0x25a850u: goto label_25a850;
        case 0x25a854u: goto label_25a854;
        case 0x25a858u: goto label_25a858;
        case 0x25a85cu: goto label_25a85c;
        case 0x25a860u: goto label_25a860;
        case 0x25a864u: goto label_25a864;
        case 0x25a868u: goto label_25a868;
        case 0x25a86cu: goto label_25a86c;
        case 0x25a870u: goto label_25a870;
        case 0x25a874u: goto label_25a874;
        case 0x25a878u: goto label_25a878;
        case 0x25a87cu: goto label_25a87c;
        case 0x25a880u: goto label_25a880;
        case 0x25a884u: goto label_25a884;
        case 0x25a888u: goto label_25a888;
        case 0x25a88cu: goto label_25a88c;
        case 0x25a890u: goto label_25a890;
        case 0x25a894u: goto label_25a894;
        case 0x25a898u: goto label_25a898;
        case 0x25a89cu: goto label_25a89c;
        case 0x25a8a0u: goto label_25a8a0;
        case 0x25a8a4u: goto label_25a8a4;
        case 0x25a8a8u: goto label_25a8a8;
        case 0x25a8acu: goto label_25a8ac;
        case 0x25a8b0u: goto label_25a8b0;
        case 0x25a8b4u: goto label_25a8b4;
        case 0x25a8b8u: goto label_25a8b8;
        case 0x25a8bcu: goto label_25a8bc;
        case 0x25a8c0u: goto label_25a8c0;
        case 0x25a8c4u: goto label_25a8c4;
        case 0x25a8c8u: goto label_25a8c8;
        case 0x25a8ccu: goto label_25a8cc;
        case 0x25a8d0u: goto label_25a8d0;
        case 0x25a8d4u: goto label_25a8d4;
        case 0x25a8d8u: goto label_25a8d8;
        case 0x25a8dcu: goto label_25a8dc;
        case 0x25a8e0u: goto label_25a8e0;
        case 0x25a8e4u: goto label_25a8e4;
        case 0x25a8e8u: goto label_25a8e8;
        case 0x25a8ecu: goto label_25a8ec;
        case 0x25a8f0u: goto label_25a8f0;
        case 0x25a8f4u: goto label_25a8f4;
        case 0x25a8f8u: goto label_25a8f8;
        case 0x25a8fcu: goto label_25a8fc;
        case 0x25a900u: goto label_25a900;
        case 0x25a904u: goto label_25a904;
        case 0x25a908u: goto label_25a908;
        case 0x25a90cu: goto label_25a90c;
        case 0x25a910u: goto label_25a910;
        case 0x25a914u: goto label_25a914;
        case 0x25a918u: goto label_25a918;
        case 0x25a91cu: goto label_25a91c;
        case 0x25a920u: goto label_25a920;
        case 0x25a924u: goto label_25a924;
        case 0x25a928u: goto label_25a928;
        case 0x25a92cu: goto label_25a92c;
        case 0x25a930u: goto label_25a930;
        case 0x25a934u: goto label_25a934;
        case 0x25a938u: goto label_25a938;
        case 0x25a93cu: goto label_25a93c;
        case 0x25a940u: goto label_25a940;
        case 0x25a944u: goto label_25a944;
        case 0x25a948u: goto label_25a948;
        case 0x25a94cu: goto label_25a94c;
        case 0x25a950u: goto label_25a950;
        case 0x25a954u: goto label_25a954;
        case 0x25a958u: goto label_25a958;
        case 0x25a95cu: goto label_25a95c;
        case 0x25a960u: goto label_25a960;
        case 0x25a964u: goto label_25a964;
        case 0x25a968u: goto label_25a968;
        case 0x25a96cu: goto label_25a96c;
        case 0x25a970u: goto label_25a970;
        case 0x25a974u: goto label_25a974;
        case 0x25a978u: goto label_25a978;
        case 0x25a97cu: goto label_25a97c;
        case 0x25a980u: goto label_25a980;
        case 0x25a984u: goto label_25a984;
        case 0x25a988u: goto label_25a988;
        case 0x25a98cu: goto label_25a98c;
        case 0x25a990u: goto label_25a990;
        case 0x25a994u: goto label_25a994;
        case 0x25a998u: goto label_25a998;
        case 0x25a99cu: goto label_25a99c;
        case 0x25a9a0u: goto label_25a9a0;
        case 0x25a9a4u: goto label_25a9a4;
        case 0x25a9a8u: goto label_25a9a8;
        case 0x25a9acu: goto label_25a9ac;
        case 0x25a9b0u: goto label_25a9b0;
        case 0x25a9b4u: goto label_25a9b4;
        case 0x25a9b8u: goto label_25a9b8;
        case 0x25a9bcu: goto label_25a9bc;
        case 0x25a9c0u: goto label_25a9c0;
        case 0x25a9c4u: goto label_25a9c4;
        case 0x25a9c8u: goto label_25a9c8;
        case 0x25a9ccu: goto label_25a9cc;
        case 0x25a9d0u: goto label_25a9d0;
        case 0x25a9d4u: goto label_25a9d4;
        case 0x25a9d8u: goto label_25a9d8;
        case 0x25a9dcu: goto label_25a9dc;
        case 0x25a9e0u: goto label_25a9e0;
        case 0x25a9e4u: goto label_25a9e4;
        case 0x25a9e8u: goto label_25a9e8;
        case 0x25a9ecu: goto label_25a9ec;
        case 0x25a9f0u: goto label_25a9f0;
        case 0x25a9f4u: goto label_25a9f4;
        case 0x25a9f8u: goto label_25a9f8;
        case 0x25a9fcu: goto label_25a9fc;
        case 0x25aa00u: goto label_25aa00;
        case 0x25aa04u: goto label_25aa04;
        case 0x25aa08u: goto label_25aa08;
        case 0x25aa0cu: goto label_25aa0c;
        case 0x25aa10u: goto label_25aa10;
        case 0x25aa14u: goto label_25aa14;
        case 0x25aa18u: goto label_25aa18;
        case 0x25aa1cu: goto label_25aa1c;
        case 0x25aa20u: goto label_25aa20;
        case 0x25aa24u: goto label_25aa24;
        case 0x25aa28u: goto label_25aa28;
        case 0x25aa2cu: goto label_25aa2c;
        case 0x25aa30u: goto label_25aa30;
        case 0x25aa34u: goto label_25aa34;
        case 0x25aa38u: goto label_25aa38;
        case 0x25aa3cu: goto label_25aa3c;
        case 0x25aa40u: goto label_25aa40;
        case 0x25aa44u: goto label_25aa44;
        case 0x25aa48u: goto label_25aa48;
        case 0x25aa4cu: goto label_25aa4c;
        case 0x25aa50u: goto label_25aa50;
        case 0x25aa54u: goto label_25aa54;
        case 0x25aa58u: goto label_25aa58;
        case 0x25aa5cu: goto label_25aa5c;
        case 0x25aa60u: goto label_25aa60;
        case 0x25aa64u: goto label_25aa64;
        case 0x25aa68u: goto label_25aa68;
        case 0x25aa6cu: goto label_25aa6c;
        case 0x25aa70u: goto label_25aa70;
        case 0x25aa74u: goto label_25aa74;
        case 0x25aa78u: goto label_25aa78;
        case 0x25aa7cu: goto label_25aa7c;
        case 0x25aa80u: goto label_25aa80;
        case 0x25aa84u: goto label_25aa84;
        case 0x25aa88u: goto label_25aa88;
        case 0x25aa8cu: goto label_25aa8c;
        case 0x25aa90u: goto label_25aa90;
        case 0x25aa94u: goto label_25aa94;
        case 0x25aa98u: goto label_25aa98;
        case 0x25aa9cu: goto label_25aa9c;
        case 0x25aaa0u: goto label_25aaa0;
        case 0x25aaa4u: goto label_25aaa4;
        case 0x25aaa8u: goto label_25aaa8;
        case 0x25aaacu: goto label_25aaac;
        case 0x25aab0u: goto label_25aab0;
        case 0x25aab4u: goto label_25aab4;
        case 0x25aab8u: goto label_25aab8;
        case 0x25aabcu: goto label_25aabc;
        case 0x25aac0u: goto label_25aac0;
        case 0x25aac4u: goto label_25aac4;
        case 0x25aac8u: goto label_25aac8;
        case 0x25aaccu: goto label_25aacc;
        case 0x25aad0u: goto label_25aad0;
        case 0x25aad4u: goto label_25aad4;
        case 0x25aad8u: goto label_25aad8;
        case 0x25aadcu: goto label_25aadc;
        case 0x25aae0u: goto label_25aae0;
        case 0x25aae4u: goto label_25aae4;
        case 0x25aae8u: goto label_25aae8;
        case 0x25aaecu: goto label_25aaec;
        case 0x25aaf0u: goto label_25aaf0;
        case 0x25aaf4u: goto label_25aaf4;
        case 0x25aaf8u: goto label_25aaf8;
        case 0x25aafcu: goto label_25aafc;
        case 0x25ab00u: goto label_25ab00;
        case 0x25ab04u: goto label_25ab04;
        case 0x25ab08u: goto label_25ab08;
        case 0x25ab0cu: goto label_25ab0c;
        case 0x25ab10u: goto label_25ab10;
        case 0x25ab14u: goto label_25ab14;
        case 0x25ab18u: goto label_25ab18;
        case 0x25ab1cu: goto label_25ab1c;
        case 0x25ab20u: goto label_25ab20;
        case 0x25ab24u: goto label_25ab24;
        case 0x25ab28u: goto label_25ab28;
        case 0x25ab2cu: goto label_25ab2c;
        case 0x25ab30u: goto label_25ab30;
        case 0x25ab34u: goto label_25ab34;
        case 0x25ab38u: goto label_25ab38;
        case 0x25ab3cu: goto label_25ab3c;
        case 0x25ab40u: goto label_25ab40;
        case 0x25ab44u: goto label_25ab44;
        case 0x25ab48u: goto label_25ab48;
        case 0x25ab4cu: goto label_25ab4c;
        case 0x25ab50u: goto label_25ab50;
        case 0x25ab54u: goto label_25ab54;
        case 0x25ab58u: goto label_25ab58;
        case 0x25ab5cu: goto label_25ab5c;
        case 0x25ab60u: goto label_25ab60;
        case 0x25ab64u: goto label_25ab64;
        case 0x25ab68u: goto label_25ab68;
        case 0x25ab6cu: goto label_25ab6c;
        case 0x25ab70u: goto label_25ab70;
        case 0x25ab74u: goto label_25ab74;
        case 0x25ab78u: goto label_25ab78;
        case 0x25ab7cu: goto label_25ab7c;
        case 0x25ab80u: goto label_25ab80;
        case 0x25ab84u: goto label_25ab84;
        case 0x25ab88u: goto label_25ab88;
        case 0x25ab8cu: goto label_25ab8c;
        case 0x25ab90u: goto label_25ab90;
        case 0x25ab94u: goto label_25ab94;
        case 0x25ab98u: goto label_25ab98;
        case 0x25ab9cu: goto label_25ab9c;
        case 0x25aba0u: goto label_25aba0;
        case 0x25aba4u: goto label_25aba4;
        case 0x25aba8u: goto label_25aba8;
        case 0x25abacu: goto label_25abac;
        case 0x25abb0u: goto label_25abb0;
        case 0x25abb4u: goto label_25abb4;
        case 0x25abb8u: goto label_25abb8;
        case 0x25abbcu: goto label_25abbc;
        case 0x25abc0u: goto label_25abc0;
        case 0x25abc4u: goto label_25abc4;
        case 0x25abc8u: goto label_25abc8;
        case 0x25abccu: goto label_25abcc;
        case 0x25abd0u: goto label_25abd0;
        case 0x25abd4u: goto label_25abd4;
        case 0x25abd8u: goto label_25abd8;
        case 0x25abdcu: goto label_25abdc;
        case 0x25abe0u: goto label_25abe0;
        case 0x25abe4u: goto label_25abe4;
        case 0x25abe8u: goto label_25abe8;
        case 0x25abecu: goto label_25abec;
        case 0x25abf0u: goto label_25abf0;
        case 0x25abf4u: goto label_25abf4;
        case 0x25abf8u: goto label_25abf8;
        case 0x25abfcu: goto label_25abfc;
        case 0x25ac00u: goto label_25ac00;
        case 0x25ac04u: goto label_25ac04;
        case 0x25ac08u: goto label_25ac08;
        case 0x25ac0cu: goto label_25ac0c;
        case 0x25ac10u: goto label_25ac10;
        case 0x25ac14u: goto label_25ac14;
        case 0x25ac18u: goto label_25ac18;
        case 0x25ac1cu: goto label_25ac1c;
        case 0x25ac20u: goto label_25ac20;
        case 0x25ac24u: goto label_25ac24;
        case 0x25ac28u: goto label_25ac28;
        case 0x25ac2cu: goto label_25ac2c;
        case 0x25ac30u: goto label_25ac30;
        case 0x25ac34u: goto label_25ac34;
        case 0x25ac38u: goto label_25ac38;
        case 0x25ac3cu: goto label_25ac3c;
        case 0x25ac40u: goto label_25ac40;
        case 0x25ac44u: goto label_25ac44;
        case 0x25ac48u: goto label_25ac48;
        case 0x25ac4cu: goto label_25ac4c;
        case 0x25ac50u: goto label_25ac50;
        case 0x25ac54u: goto label_25ac54;
        case 0x25ac58u: goto label_25ac58;
        case 0x25ac5cu: goto label_25ac5c;
        case 0x25ac60u: goto label_25ac60;
        case 0x25ac64u: goto label_25ac64;
        case 0x25ac68u: goto label_25ac68;
        case 0x25ac6cu: goto label_25ac6c;
        case 0x25ac70u: goto label_25ac70;
        case 0x25ac74u: goto label_25ac74;
        case 0x25ac78u: goto label_25ac78;
        case 0x25ac7cu: goto label_25ac7c;
        case 0x25ac80u: goto label_25ac80;
        case 0x25ac84u: goto label_25ac84;
        case 0x25ac88u: goto label_25ac88;
        case 0x25ac8cu: goto label_25ac8c;
        case 0x25ac90u: goto label_25ac90;
        case 0x25ac94u: goto label_25ac94;
        case 0x25ac98u: goto label_25ac98;
        case 0x25ac9cu: goto label_25ac9c;
        case 0x25aca0u: goto label_25aca0;
        case 0x25aca4u: goto label_25aca4;
        case 0x25aca8u: goto label_25aca8;
        case 0x25acacu: goto label_25acac;
        case 0x25acb0u: goto label_25acb0;
        case 0x25acb4u: goto label_25acb4;
        case 0x25acb8u: goto label_25acb8;
        case 0x25acbcu: goto label_25acbc;
        case 0x25acc0u: goto label_25acc0;
        case 0x25acc4u: goto label_25acc4;
        case 0x25acc8u: goto label_25acc8;
        case 0x25acccu: goto label_25accc;
        case 0x25acd0u: goto label_25acd0;
        case 0x25acd4u: goto label_25acd4;
        case 0x25acd8u: goto label_25acd8;
        case 0x25acdcu: goto label_25acdc;
        case 0x25ace0u: goto label_25ace0;
        case 0x25ace4u: goto label_25ace4;
        case 0x25ace8u: goto label_25ace8;
        case 0x25acecu: goto label_25acec;
        case 0x25acf0u: goto label_25acf0;
        case 0x25acf4u: goto label_25acf4;
        case 0x25acf8u: goto label_25acf8;
        case 0x25acfcu: goto label_25acfc;
        case 0x25ad00u: goto label_25ad00;
        case 0x25ad04u: goto label_25ad04;
        case 0x25ad08u: goto label_25ad08;
        case 0x25ad0cu: goto label_25ad0c;
        case 0x25ad10u: goto label_25ad10;
        case 0x25ad14u: goto label_25ad14;
        case 0x25ad18u: goto label_25ad18;
        case 0x25ad1cu: goto label_25ad1c;
        case 0x25ad20u: goto label_25ad20;
        case 0x25ad24u: goto label_25ad24;
        case 0x25ad28u: goto label_25ad28;
        case 0x25ad2cu: goto label_25ad2c;
        case 0x25ad30u: goto label_25ad30;
        case 0x25ad34u: goto label_25ad34;
        case 0x25ad38u: goto label_25ad38;
        case 0x25ad3cu: goto label_25ad3c;
        case 0x25ad40u: goto label_25ad40;
        case 0x25ad44u: goto label_25ad44;
        case 0x25ad48u: goto label_25ad48;
        case 0x25ad4cu: goto label_25ad4c;
        case 0x25ad50u: goto label_25ad50;
        case 0x25ad54u: goto label_25ad54;
        case 0x25ad58u: goto label_25ad58;
        case 0x25ad5cu: goto label_25ad5c;
        case 0x25ad60u: goto label_25ad60;
        case 0x25ad64u: goto label_25ad64;
        case 0x25ad68u: goto label_25ad68;
        case 0x25ad6cu: goto label_25ad6c;
        case 0x25ad70u: goto label_25ad70;
        case 0x25ad74u: goto label_25ad74;
        case 0x25ad78u: goto label_25ad78;
        case 0x25ad7cu: goto label_25ad7c;
        case 0x25ad80u: goto label_25ad80;
        case 0x25ad84u: goto label_25ad84;
        case 0x25ad88u: goto label_25ad88;
        case 0x25ad8cu: goto label_25ad8c;
        case 0x25ad90u: goto label_25ad90;
        case 0x25ad94u: goto label_25ad94;
        case 0x25ad98u: goto label_25ad98;
        case 0x25ad9cu: goto label_25ad9c;
        case 0x25ada0u: goto label_25ada0;
        case 0x25ada4u: goto label_25ada4;
        case 0x25ada8u: goto label_25ada8;
        case 0x25adacu: goto label_25adac;
        case 0x25adb0u: goto label_25adb0;
        case 0x25adb4u: goto label_25adb4;
        case 0x25adb8u: goto label_25adb8;
        case 0x25adbcu: goto label_25adbc;
        case 0x25adc0u: goto label_25adc0;
        case 0x25adc4u: goto label_25adc4;
        case 0x25adc8u: goto label_25adc8;
        case 0x25adccu: goto label_25adcc;
        case 0x25add0u: goto label_25add0;
        case 0x25add4u: goto label_25add4;
        case 0x25add8u: goto label_25add8;
        case 0x25addcu: goto label_25addc;
        case 0x25ade0u: goto label_25ade0;
        case 0x25ade4u: goto label_25ade4;
        case 0x25ade8u: goto label_25ade8;
        case 0x25adecu: goto label_25adec;
        case 0x25adf0u: goto label_25adf0;
        case 0x25adf4u: goto label_25adf4;
        case 0x25adf8u: goto label_25adf8;
        case 0x25adfcu: goto label_25adfc;
        case 0x25ae00u: goto label_25ae00;
        case 0x25ae04u: goto label_25ae04;
        case 0x25ae08u: goto label_25ae08;
        case 0x25ae0cu: goto label_25ae0c;
        case 0x25ae10u: goto label_25ae10;
        case 0x25ae14u: goto label_25ae14;
        case 0x25ae18u: goto label_25ae18;
        case 0x25ae1cu: goto label_25ae1c;
        case 0x25ae20u: goto label_25ae20;
        case 0x25ae24u: goto label_25ae24;
        case 0x25ae28u: goto label_25ae28;
        case 0x25ae2cu: goto label_25ae2c;
        case 0x25ae30u: goto label_25ae30;
        case 0x25ae34u: goto label_25ae34;
        case 0x25ae38u: goto label_25ae38;
        case 0x25ae3cu: goto label_25ae3c;
        case 0x25ae40u: goto label_25ae40;
        case 0x25ae44u: goto label_25ae44;
        case 0x25ae48u: goto label_25ae48;
        case 0x25ae4cu: goto label_25ae4c;
        case 0x25ae50u: goto label_25ae50;
        case 0x25ae54u: goto label_25ae54;
        case 0x25ae58u: goto label_25ae58;
        case 0x25ae5cu: goto label_25ae5c;
        case 0x25ae60u: goto label_25ae60;
        case 0x25ae64u: goto label_25ae64;
        case 0x25ae68u: goto label_25ae68;
        case 0x25ae6cu: goto label_25ae6c;
        case 0x25ae70u: goto label_25ae70;
        case 0x25ae74u: goto label_25ae74;
        case 0x25ae78u: goto label_25ae78;
        case 0x25ae7cu: goto label_25ae7c;
        case 0x25ae80u: goto label_25ae80;
        case 0x25ae84u: goto label_25ae84;
        case 0x25ae88u: goto label_25ae88;
        case 0x25ae8cu: goto label_25ae8c;
        case 0x25ae90u: goto label_25ae90;
        case 0x25ae94u: goto label_25ae94;
        case 0x25ae98u: goto label_25ae98;
        case 0x25ae9cu: goto label_25ae9c;
        case 0x25aea0u: goto label_25aea0;
        case 0x25aea4u: goto label_25aea4;
        case 0x25aea8u: goto label_25aea8;
        case 0x25aeacu: goto label_25aeac;
        case 0x25aeb0u: goto label_25aeb0;
        case 0x25aeb4u: goto label_25aeb4;
        case 0x25aeb8u: goto label_25aeb8;
        case 0x25aebcu: goto label_25aebc;
        case 0x25aec0u: goto label_25aec0;
        case 0x25aec4u: goto label_25aec4;
        case 0x25aec8u: goto label_25aec8;
        case 0x25aeccu: goto label_25aecc;
        case 0x25aed0u: goto label_25aed0;
        case 0x25aed4u: goto label_25aed4;
        case 0x25aed8u: goto label_25aed8;
        case 0x25aedcu: goto label_25aedc;
        case 0x25aee0u: goto label_25aee0;
        case 0x25aee4u: goto label_25aee4;
        case 0x25aee8u: goto label_25aee8;
        case 0x25aeecu: goto label_25aeec;
        case 0x25aef0u: goto label_25aef0;
        case 0x25aef4u: goto label_25aef4;
        case 0x25aef8u: goto label_25aef8;
        case 0x25aefcu: goto label_25aefc;
        case 0x25af00u: goto label_25af00;
        case 0x25af04u: goto label_25af04;
        case 0x25af08u: goto label_25af08;
        case 0x25af0cu: goto label_25af0c;
        case 0x25af10u: goto label_25af10;
        case 0x25af14u: goto label_25af14;
        case 0x25af18u: goto label_25af18;
        case 0x25af1cu: goto label_25af1c;
        case 0x25af20u: goto label_25af20;
        case 0x25af24u: goto label_25af24;
        case 0x25af28u: goto label_25af28;
        case 0x25af2cu: goto label_25af2c;
        case 0x25af30u: goto label_25af30;
        case 0x25af34u: goto label_25af34;
        case 0x25af38u: goto label_25af38;
        case 0x25af3cu: goto label_25af3c;
        case 0x25af40u: goto label_25af40;
        case 0x25af44u: goto label_25af44;
        case 0x25af48u: goto label_25af48;
        case 0x25af4cu: goto label_25af4c;
        case 0x25af50u: goto label_25af50;
        case 0x25af54u: goto label_25af54;
        case 0x25af58u: goto label_25af58;
        case 0x25af5cu: goto label_25af5c;
        case 0x25af60u: goto label_25af60;
        case 0x25af64u: goto label_25af64;
        case 0x25af68u: goto label_25af68;
        case 0x25af6cu: goto label_25af6c;
        case 0x25af70u: goto label_25af70;
        case 0x25af74u: goto label_25af74;
        case 0x25af78u: goto label_25af78;
        case 0x25af7cu: goto label_25af7c;
        case 0x25af80u: goto label_25af80;
        case 0x25af84u: goto label_25af84;
        case 0x25af88u: goto label_25af88;
        case 0x25af8cu: goto label_25af8c;
        case 0x25af90u: goto label_25af90;
        case 0x25af94u: goto label_25af94;
        case 0x25af98u: goto label_25af98;
        case 0x25af9cu: goto label_25af9c;
        case 0x25afa0u: goto label_25afa0;
        case 0x25afa4u: goto label_25afa4;
        case 0x25afa8u: goto label_25afa8;
        case 0x25afacu: goto label_25afac;
        case 0x25afb0u: goto label_25afb0;
        case 0x25afb4u: goto label_25afb4;
        case 0x25afb8u: goto label_25afb8;
        case 0x25afbcu: goto label_25afbc;
        case 0x25afc0u: goto label_25afc0;
        case 0x25afc4u: goto label_25afc4;
        case 0x25afc8u: goto label_25afc8;
        case 0x25afccu: goto label_25afcc;
        case 0x25afd0u: goto label_25afd0;
        case 0x25afd4u: goto label_25afd4;
        case 0x25afd8u: goto label_25afd8;
        case 0x25afdcu: goto label_25afdc;
        case 0x25afe0u: goto label_25afe0;
        case 0x25afe4u: goto label_25afe4;
        case 0x25afe8u: goto label_25afe8;
        case 0x25afecu: goto label_25afec;
        case 0x25aff0u: goto label_25aff0;
        case 0x25aff4u: goto label_25aff4;
        case 0x25aff8u: goto label_25aff8;
        case 0x25affcu: goto label_25affc;
        case 0x25b000u: goto label_25b000;
        case 0x25b004u: goto label_25b004;
        case 0x25b008u: goto label_25b008;
        case 0x25b00cu: goto label_25b00c;
        case 0x25b010u: goto label_25b010;
        case 0x25b014u: goto label_25b014;
        case 0x25b018u: goto label_25b018;
        case 0x25b01cu: goto label_25b01c;
        case 0x25b020u: goto label_25b020;
        case 0x25b024u: goto label_25b024;
        case 0x25b028u: goto label_25b028;
        case 0x25b02cu: goto label_25b02c;
        case 0x25b030u: goto label_25b030;
        case 0x25b034u: goto label_25b034;
        case 0x25b038u: goto label_25b038;
        case 0x25b03cu: goto label_25b03c;
        case 0x25b040u: goto label_25b040;
        case 0x25b044u: goto label_25b044;
        case 0x25b048u: goto label_25b048;
        case 0x25b04cu: goto label_25b04c;
        case 0x25b050u: goto label_25b050;
        case 0x25b054u: goto label_25b054;
        case 0x25b058u: goto label_25b058;
        case 0x25b05cu: goto label_25b05c;
        case 0x25b060u: goto label_25b060;
        case 0x25b064u: goto label_25b064;
        case 0x25b068u: goto label_25b068;
        case 0x25b06cu: goto label_25b06c;
        case 0x25b070u: goto label_25b070;
        case 0x25b074u: goto label_25b074;
        case 0x25b078u: goto label_25b078;
        case 0x25b07cu: goto label_25b07c;
        case 0x25b080u: goto label_25b080;
        case 0x25b084u: goto label_25b084;
        case 0x25b088u: goto label_25b088;
        case 0x25b08cu: goto label_25b08c;
        case 0x25b090u: goto label_25b090;
        case 0x25b094u: goto label_25b094;
        case 0x25b098u: goto label_25b098;
        case 0x25b09cu: goto label_25b09c;
        case 0x25b0a0u: goto label_25b0a0;
        case 0x25b0a4u: goto label_25b0a4;
        case 0x25b0a8u: goto label_25b0a8;
        case 0x25b0acu: goto label_25b0ac;
        case 0x25b0b0u: goto label_25b0b0;
        case 0x25b0b4u: goto label_25b0b4;
        case 0x25b0b8u: goto label_25b0b8;
        case 0x25b0bcu: goto label_25b0bc;
        case 0x25b0c0u: goto label_25b0c0;
        case 0x25b0c4u: goto label_25b0c4;
        case 0x25b0c8u: goto label_25b0c8;
        case 0x25b0ccu: goto label_25b0cc;
        case 0x25b0d0u: goto label_25b0d0;
        case 0x25b0d4u: goto label_25b0d4;
        case 0x25b0d8u: goto label_25b0d8;
        case 0x25b0dcu: goto label_25b0dc;
        case 0x25b0e0u: goto label_25b0e0;
        case 0x25b0e4u: goto label_25b0e4;
        case 0x25b0e8u: goto label_25b0e8;
        case 0x25b0ecu: goto label_25b0ec;
        case 0x25b0f0u: goto label_25b0f0;
        case 0x25b0f4u: goto label_25b0f4;
        case 0x25b0f8u: goto label_25b0f8;
        case 0x25b0fcu: goto label_25b0fc;
        case 0x25b100u: goto label_25b100;
        case 0x25b104u: goto label_25b104;
        case 0x25b108u: goto label_25b108;
        case 0x25b10cu: goto label_25b10c;
        case 0x25b110u: goto label_25b110;
        case 0x25b114u: goto label_25b114;
        case 0x25b118u: goto label_25b118;
        case 0x25b11cu: goto label_25b11c;
        case 0x25b120u: goto label_25b120;
        case 0x25b124u: goto label_25b124;
        case 0x25b128u: goto label_25b128;
        case 0x25b12cu: goto label_25b12c;
        case 0x25b130u: goto label_25b130;
        case 0x25b134u: goto label_25b134;
        case 0x25b138u: goto label_25b138;
        case 0x25b13cu: goto label_25b13c;
        case 0x25b140u: goto label_25b140;
        case 0x25b144u: goto label_25b144;
        case 0x25b148u: goto label_25b148;
        case 0x25b14cu: goto label_25b14c;
        case 0x25b150u: goto label_25b150;
        case 0x25b154u: goto label_25b154;
        case 0x25b158u: goto label_25b158;
        case 0x25b15cu: goto label_25b15c;
        case 0x25b160u: goto label_25b160;
        case 0x25b164u: goto label_25b164;
        case 0x25b168u: goto label_25b168;
        case 0x25b16cu: goto label_25b16c;
        case 0x25b170u: goto label_25b170;
        case 0x25b174u: goto label_25b174;
        case 0x25b178u: goto label_25b178;
        case 0x25b17cu: goto label_25b17c;
        case 0x25b180u: goto label_25b180;
        case 0x25b184u: goto label_25b184;
        case 0x25b188u: goto label_25b188;
        case 0x25b18cu: goto label_25b18c;
        case 0x25b190u: goto label_25b190;
        case 0x25b194u: goto label_25b194;
        case 0x25b198u: goto label_25b198;
        case 0x25b19cu: goto label_25b19c;
        case 0x25b1a0u: goto label_25b1a0;
        case 0x25b1a4u: goto label_25b1a4;
        case 0x25b1a8u: goto label_25b1a8;
        case 0x25b1acu: goto label_25b1ac;
        case 0x25b1b0u: goto label_25b1b0;
        case 0x25b1b4u: goto label_25b1b4;
        case 0x25b1b8u: goto label_25b1b8;
        case 0x25b1bcu: goto label_25b1bc;
        case 0x25b1c0u: goto label_25b1c0;
        case 0x25b1c4u: goto label_25b1c4;
        case 0x25b1c8u: goto label_25b1c8;
        case 0x25b1ccu: goto label_25b1cc;
        case 0x25b1d0u: goto label_25b1d0;
        case 0x25b1d4u: goto label_25b1d4;
        case 0x25b1d8u: goto label_25b1d8;
        case 0x25b1dcu: goto label_25b1dc;
        case 0x25b1e0u: goto label_25b1e0;
        case 0x25b1e4u: goto label_25b1e4;
        case 0x25b1e8u: goto label_25b1e8;
        case 0x25b1ecu: goto label_25b1ec;
        case 0x25b1f0u: goto label_25b1f0;
        case 0x25b1f4u: goto label_25b1f4;
        case 0x25b1f8u: goto label_25b1f8;
        case 0x25b1fcu: goto label_25b1fc;
        case 0x25b200u: goto label_25b200;
        case 0x25b204u: goto label_25b204;
        case 0x25b208u: goto label_25b208;
        case 0x25b20cu: goto label_25b20c;
        case 0x25b210u: goto label_25b210;
        case 0x25b214u: goto label_25b214;
        case 0x25b218u: goto label_25b218;
        case 0x25b21cu: goto label_25b21c;
        case 0x25b220u: goto label_25b220;
        case 0x25b224u: goto label_25b224;
        case 0x25b228u: goto label_25b228;
        case 0x25b22cu: goto label_25b22c;
        case 0x25b230u: goto label_25b230;
        case 0x25b234u: goto label_25b234;
        case 0x25b238u: goto label_25b238;
        case 0x25b23cu: goto label_25b23c;
        case 0x25b240u: goto label_25b240;
        case 0x25b244u: goto label_25b244;
        case 0x25b248u: goto label_25b248;
        case 0x25b24cu: goto label_25b24c;
        case 0x25b250u: goto label_25b250;
        case 0x25b254u: goto label_25b254;
        case 0x25b258u: goto label_25b258;
        case 0x25b25cu: goto label_25b25c;
        case 0x25b260u: goto label_25b260;
        case 0x25b264u: goto label_25b264;
        case 0x25b268u: goto label_25b268;
        case 0x25b26cu: goto label_25b26c;
        case 0x25b270u: goto label_25b270;
        case 0x25b274u: goto label_25b274;
        case 0x25b278u: goto label_25b278;
        case 0x25b27cu: goto label_25b27c;
        case 0x25b280u: goto label_25b280;
        case 0x25b284u: goto label_25b284;
        case 0x25b288u: goto label_25b288;
        case 0x25b28cu: goto label_25b28c;
        case 0x25b290u: goto label_25b290;
        case 0x25b294u: goto label_25b294;
        case 0x25b298u: goto label_25b298;
        case 0x25b29cu: goto label_25b29c;
        case 0x25b2a0u: goto label_25b2a0;
        case 0x25b2a4u: goto label_25b2a4;
        case 0x25b2a8u: goto label_25b2a8;
        case 0x25b2acu: goto label_25b2ac;
        case 0x25b2b0u: goto label_25b2b0;
        case 0x25b2b4u: goto label_25b2b4;
        case 0x25b2b8u: goto label_25b2b8;
        case 0x25b2bcu: goto label_25b2bc;
        case 0x25b2c0u: goto label_25b2c0;
        case 0x25b2c4u: goto label_25b2c4;
        case 0x25b2c8u: goto label_25b2c8;
        case 0x25b2ccu: goto label_25b2cc;
        case 0x25b2d0u: goto label_25b2d0;
        case 0x25b2d4u: goto label_25b2d4;
        case 0x25b2d8u: goto label_25b2d8;
        case 0x25b2dcu: goto label_25b2dc;
        case 0x25b2e0u: goto label_25b2e0;
        case 0x25b2e4u: goto label_25b2e4;
        case 0x25b2e8u: goto label_25b2e8;
        case 0x25b2ecu: goto label_25b2ec;
        case 0x25b2f0u: goto label_25b2f0;
        case 0x25b2f4u: goto label_25b2f4;
        case 0x25b2f8u: goto label_25b2f8;
        case 0x25b2fcu: goto label_25b2fc;
        case 0x25b300u: goto label_25b300;
        case 0x25b304u: goto label_25b304;
        case 0x25b308u: goto label_25b308;
        case 0x25b30cu: goto label_25b30c;
        case 0x25b310u: goto label_25b310;
        case 0x25b314u: goto label_25b314;
        case 0x25b318u: goto label_25b318;
        case 0x25b31cu: goto label_25b31c;
        case 0x25b320u: goto label_25b320;
        case 0x25b324u: goto label_25b324;
        case 0x25b328u: goto label_25b328;
        case 0x25b32cu: goto label_25b32c;
        case 0x25b330u: goto label_25b330;
        case 0x25b334u: goto label_25b334;
        case 0x25b338u: goto label_25b338;
        case 0x25b33cu: goto label_25b33c;
        case 0x25b340u: goto label_25b340;
        case 0x25b344u: goto label_25b344;
        case 0x25b348u: goto label_25b348;
        case 0x25b34cu: goto label_25b34c;
        case 0x25b350u: goto label_25b350;
        case 0x25b354u: goto label_25b354;
        case 0x25b358u: goto label_25b358;
        case 0x25b35cu: goto label_25b35c;
        case 0x25b360u: goto label_25b360;
        case 0x25b364u: goto label_25b364;
        case 0x25b368u: goto label_25b368;
        case 0x25b36cu: goto label_25b36c;
        case 0x25b370u: goto label_25b370;
        case 0x25b374u: goto label_25b374;
        case 0x25b378u: goto label_25b378;
        case 0x25b37cu: goto label_25b37c;
        case 0x25b380u: goto label_25b380;
        case 0x25b384u: goto label_25b384;
        case 0x25b388u: goto label_25b388;
        case 0x25b38cu: goto label_25b38c;
        case 0x25b390u: goto label_25b390;
        case 0x25b394u: goto label_25b394;
        case 0x25b398u: goto label_25b398;
        case 0x25b39cu: goto label_25b39c;
        case 0x25b3a0u: goto label_25b3a0;
        case 0x25b3a4u: goto label_25b3a4;
        case 0x25b3a8u: goto label_25b3a8;
        case 0x25b3acu: goto label_25b3ac;
        case 0x25b3b0u: goto label_25b3b0;
        case 0x25b3b4u: goto label_25b3b4;
        case 0x25b3b8u: goto label_25b3b8;
        case 0x25b3bcu: goto label_25b3bc;
        case 0x25b3c0u: goto label_25b3c0;
        case 0x25b3c4u: goto label_25b3c4;
        case 0x25b3c8u: goto label_25b3c8;
        case 0x25b3ccu: goto label_25b3cc;
        case 0x25b3d0u: goto label_25b3d0;
        case 0x25b3d4u: goto label_25b3d4;
        case 0x25b3d8u: goto label_25b3d8;
        case 0x25b3dcu: goto label_25b3dc;
        case 0x25b3e0u: goto label_25b3e0;
        case 0x25b3e4u: goto label_25b3e4;
        case 0x25b3e8u: goto label_25b3e8;
        case 0x25b3ecu: goto label_25b3ec;
        case 0x25b3f0u: goto label_25b3f0;
        case 0x25b3f4u: goto label_25b3f4;
        case 0x25b3f8u: goto label_25b3f8;
        case 0x25b3fcu: goto label_25b3fc;
        case 0x25b400u: goto label_25b400;
        case 0x25b404u: goto label_25b404;
        case 0x25b408u: goto label_25b408;
        case 0x25b40cu: goto label_25b40c;
        case 0x25b410u: goto label_25b410;
        case 0x25b414u: goto label_25b414;
        case 0x25b418u: goto label_25b418;
        case 0x25b41cu: goto label_25b41c;
        case 0x25b420u: goto label_25b420;
        case 0x25b424u: goto label_25b424;
        case 0x25b428u: goto label_25b428;
        case 0x25b42cu: goto label_25b42c;
        case 0x25b430u: goto label_25b430;
        case 0x25b434u: goto label_25b434;
        case 0x25b438u: goto label_25b438;
        case 0x25b43cu: goto label_25b43c;
        case 0x25b440u: goto label_25b440;
        case 0x25b444u: goto label_25b444;
        case 0x25b448u: goto label_25b448;
        case 0x25b44cu: goto label_25b44c;
        case 0x25b450u: goto label_25b450;
        case 0x25b454u: goto label_25b454;
        case 0x25b458u: goto label_25b458;
        case 0x25b45cu: goto label_25b45c;
        case 0x25b460u: goto label_25b460;
        case 0x25b464u: goto label_25b464;
        case 0x25b468u: goto label_25b468;
        case 0x25b46cu: goto label_25b46c;
        case 0x25b470u: goto label_25b470;
        case 0x25b474u: goto label_25b474;
        case 0x25b478u: goto label_25b478;
        case 0x25b47cu: goto label_25b47c;
        case 0x25b480u: goto label_25b480;
        case 0x25b484u: goto label_25b484;
        case 0x25b488u: goto label_25b488;
        case 0x25b48cu: goto label_25b48c;
        case 0x25b490u: goto label_25b490;
        case 0x25b494u: goto label_25b494;
        case 0x25b498u: goto label_25b498;
        case 0x25b49cu: goto label_25b49c;
        case 0x25b4a0u: goto label_25b4a0;
        case 0x25b4a4u: goto label_25b4a4;
        case 0x25b4a8u: goto label_25b4a8;
        case 0x25b4acu: goto label_25b4ac;
        case 0x25b4b0u: goto label_25b4b0;
        case 0x25b4b4u: goto label_25b4b4;
        case 0x25b4b8u: goto label_25b4b8;
        case 0x25b4bcu: goto label_25b4bc;
        case 0x25b4c0u: goto label_25b4c0;
        case 0x25b4c4u: goto label_25b4c4;
        case 0x25b4c8u: goto label_25b4c8;
        case 0x25b4ccu: goto label_25b4cc;
        case 0x25b4d0u: goto label_25b4d0;
        case 0x25b4d4u: goto label_25b4d4;
        case 0x25b4d8u: goto label_25b4d8;
        case 0x25b4dcu: goto label_25b4dc;
        case 0x25b4e0u: goto label_25b4e0;
        case 0x25b4e4u: goto label_25b4e4;
        case 0x25b4e8u: goto label_25b4e8;
        case 0x25b4ecu: goto label_25b4ec;
        case 0x25b4f0u: goto label_25b4f0;
        case 0x25b4f4u: goto label_25b4f4;
        case 0x25b4f8u: goto label_25b4f8;
        case 0x25b4fcu: goto label_25b4fc;
        case 0x25b500u: goto label_25b500;
        case 0x25b504u: goto label_25b504;
        case 0x25b508u: goto label_25b508;
        case 0x25b50cu: goto label_25b50c;
        case 0x25b510u: goto label_25b510;
        case 0x25b514u: goto label_25b514;
        case 0x25b518u: goto label_25b518;
        case 0x25b51cu: goto label_25b51c;
        case 0x25b520u: goto label_25b520;
        case 0x25b524u: goto label_25b524;
        case 0x25b528u: goto label_25b528;
        case 0x25b52cu: goto label_25b52c;
        case 0x25b530u: goto label_25b530;
        case 0x25b534u: goto label_25b534;
        case 0x25b538u: goto label_25b538;
        case 0x25b53cu: goto label_25b53c;
        case 0x25b540u: goto label_25b540;
        case 0x25b544u: goto label_25b544;
        case 0x25b548u: goto label_25b548;
        case 0x25b54cu: goto label_25b54c;
        case 0x25b550u: goto label_25b550;
        case 0x25b554u: goto label_25b554;
        case 0x25b558u: goto label_25b558;
        case 0x25b55cu: goto label_25b55c;
        case 0x25b560u: goto label_25b560;
        case 0x25b564u: goto label_25b564;
        case 0x25b568u: goto label_25b568;
        case 0x25b56cu: goto label_25b56c;
        case 0x25b570u: goto label_25b570;
        case 0x25b574u: goto label_25b574;
        case 0x25b578u: goto label_25b578;
        case 0x25b57cu: goto label_25b57c;
        case 0x25b580u: goto label_25b580;
        case 0x25b584u: goto label_25b584;
        case 0x25b588u: goto label_25b588;
        case 0x25b58cu: goto label_25b58c;
        case 0x25b590u: goto label_25b590;
        case 0x25b594u: goto label_25b594;
        case 0x25b598u: goto label_25b598;
        case 0x25b59cu: goto label_25b59c;
        case 0x25b5a0u: goto label_25b5a0;
        case 0x25b5a4u: goto label_25b5a4;
        case 0x25b5a8u: goto label_25b5a8;
        case 0x25b5acu: goto label_25b5ac;
        case 0x25b5b0u: goto label_25b5b0;
        case 0x25b5b4u: goto label_25b5b4;
        case 0x25b5b8u: goto label_25b5b8;
        case 0x25b5bcu: goto label_25b5bc;
        case 0x25b5c0u: goto label_25b5c0;
        case 0x25b5c4u: goto label_25b5c4;
        case 0x25b5c8u: goto label_25b5c8;
        case 0x25b5ccu: goto label_25b5cc;
        case 0x25b5d0u: goto label_25b5d0;
        case 0x25b5d4u: goto label_25b5d4;
        case 0x25b5d8u: goto label_25b5d8;
        case 0x25b5dcu: goto label_25b5dc;
        case 0x25b5e0u: goto label_25b5e0;
        case 0x25b5e4u: goto label_25b5e4;
        case 0x25b5e8u: goto label_25b5e8;
        case 0x25b5ecu: goto label_25b5ec;
        case 0x25b5f0u: goto label_25b5f0;
        case 0x25b5f4u: goto label_25b5f4;
        case 0x25b5f8u: goto label_25b5f8;
        case 0x25b5fcu: goto label_25b5fc;
        case 0x25b600u: goto label_25b600;
        case 0x25b604u: goto label_25b604;
        case 0x25b608u: goto label_25b608;
        case 0x25b60cu: goto label_25b60c;
        case 0x25b610u: goto label_25b610;
        case 0x25b614u: goto label_25b614;
        case 0x25b618u: goto label_25b618;
        case 0x25b61cu: goto label_25b61c;
        case 0x25b620u: goto label_25b620;
        case 0x25b624u: goto label_25b624;
        case 0x25b628u: goto label_25b628;
        case 0x25b62cu: goto label_25b62c;
        case 0x25b630u: goto label_25b630;
        case 0x25b634u: goto label_25b634;
        case 0x25b638u: goto label_25b638;
        case 0x25b63cu: goto label_25b63c;
        case 0x25b640u: goto label_25b640;
        case 0x25b644u: goto label_25b644;
        case 0x25b648u: goto label_25b648;
        case 0x25b64cu: goto label_25b64c;
        case 0x25b650u: goto label_25b650;
        case 0x25b654u: goto label_25b654;
        case 0x25b658u: goto label_25b658;
        case 0x25b65cu: goto label_25b65c;
        case 0x25b660u: goto label_25b660;
        case 0x25b664u: goto label_25b664;
        case 0x25b668u: goto label_25b668;
        case 0x25b66cu: goto label_25b66c;
        case 0x25b670u: goto label_25b670;
        case 0x25b674u: goto label_25b674;
        case 0x25b678u: goto label_25b678;
        case 0x25b67cu: goto label_25b67c;
        case 0x25b680u: goto label_25b680;
        case 0x25b684u: goto label_25b684;
        case 0x25b688u: goto label_25b688;
        case 0x25b68cu: goto label_25b68c;
        case 0x25b690u: goto label_25b690;
        case 0x25b694u: goto label_25b694;
        case 0x25b698u: goto label_25b698;
        case 0x25b69cu: goto label_25b69c;
        case 0x25b6a0u: goto label_25b6a0;
        case 0x25b6a4u: goto label_25b6a4;
        case 0x25b6a8u: goto label_25b6a8;
        case 0x25b6acu: goto label_25b6ac;
        case 0x25b6b0u: goto label_25b6b0;
        case 0x25b6b4u: goto label_25b6b4;
        case 0x25b6b8u: goto label_25b6b8;
        case 0x25b6bcu: goto label_25b6bc;
        case 0x25b6c0u: goto label_25b6c0;
        case 0x25b6c4u: goto label_25b6c4;
        case 0x25b6c8u: goto label_25b6c8;
        case 0x25b6ccu: goto label_25b6cc;
        case 0x25b6d0u: goto label_25b6d0;
        case 0x25b6d4u: goto label_25b6d4;
        case 0x25b6d8u: goto label_25b6d8;
        case 0x25b6dcu: goto label_25b6dc;
        case 0x25b6e0u: goto label_25b6e0;
        case 0x25b6e4u: goto label_25b6e4;
        case 0x25b6e8u: goto label_25b6e8;
        case 0x25b6ecu: goto label_25b6ec;
        case 0x25b6f0u: goto label_25b6f0;
        case 0x25b6f4u: goto label_25b6f4;
        case 0x25b6f8u: goto label_25b6f8;
        case 0x25b6fcu: goto label_25b6fc;
        case 0x25b700u: goto label_25b700;
        case 0x25b704u: goto label_25b704;
        case 0x25b708u: goto label_25b708;
        case 0x25b70cu: goto label_25b70c;
        case 0x25b710u: goto label_25b710;
        case 0x25b714u: goto label_25b714;
        case 0x25b718u: goto label_25b718;
        case 0x25b71cu: goto label_25b71c;
        case 0x25b720u: goto label_25b720;
        case 0x25b724u: goto label_25b724;
        case 0x25b728u: goto label_25b728;
        case 0x25b72cu: goto label_25b72c;
        case 0x25b730u: goto label_25b730;
        case 0x25b734u: goto label_25b734;
        case 0x25b738u: goto label_25b738;
        case 0x25b73cu: goto label_25b73c;
        case 0x25b740u: goto label_25b740;
        case 0x25b744u: goto label_25b744;
        case 0x25b748u: goto label_25b748;
        case 0x25b74cu: goto label_25b74c;
        case 0x25b750u: goto label_25b750;
        case 0x25b754u: goto label_25b754;
        case 0x25b758u: goto label_25b758;
        case 0x25b75cu: goto label_25b75c;
        case 0x25b760u: goto label_25b760;
        case 0x25b764u: goto label_25b764;
        case 0x25b768u: goto label_25b768;
        case 0x25b76cu: goto label_25b76c;
        case 0x25b770u: goto label_25b770;
        case 0x25b774u: goto label_25b774;
        case 0x25b778u: goto label_25b778;
        case 0x25b77cu: goto label_25b77c;
        case 0x25b780u: goto label_25b780;
        case 0x25b784u: goto label_25b784;
        case 0x25b788u: goto label_25b788;
        case 0x25b78cu: goto label_25b78c;
        case 0x25b790u: goto label_25b790;
        case 0x25b794u: goto label_25b794;
        case 0x25b798u: goto label_25b798;
        case 0x25b79cu: goto label_25b79c;
        case 0x25b7a0u: goto label_25b7a0;
        case 0x25b7a4u: goto label_25b7a4;
        case 0x25b7a8u: goto label_25b7a8;
        case 0x25b7acu: goto label_25b7ac;
        case 0x25b7b0u: goto label_25b7b0;
        case 0x25b7b4u: goto label_25b7b4;
        case 0x25b7b8u: goto label_25b7b8;
        case 0x25b7bcu: goto label_25b7bc;
        case 0x25b7c0u: goto label_25b7c0;
        case 0x25b7c4u: goto label_25b7c4;
        case 0x25b7c8u: goto label_25b7c8;
        case 0x25b7ccu: goto label_25b7cc;
        case 0x25b7d0u: goto label_25b7d0;
        case 0x25b7d4u: goto label_25b7d4;
        case 0x25b7d8u: goto label_25b7d8;
        case 0x25b7dcu: goto label_25b7dc;
        case 0x25b7e0u: goto label_25b7e0;
        case 0x25b7e4u: goto label_25b7e4;
        case 0x25b7e8u: goto label_25b7e8;
        case 0x25b7ecu: goto label_25b7ec;
        case 0x25b7f0u: goto label_25b7f0;
        case 0x25b7f4u: goto label_25b7f4;
        case 0x25b7f8u: goto label_25b7f8;
        case 0x25b7fcu: goto label_25b7fc;
        case 0x25b800u: goto label_25b800;
        case 0x25b804u: goto label_25b804;
        case 0x25b808u: goto label_25b808;
        case 0x25b80cu: goto label_25b80c;
        case 0x25b810u: goto label_25b810;
        case 0x25b814u: goto label_25b814;
        case 0x25b818u: goto label_25b818;
        case 0x25b81cu: goto label_25b81c;
        case 0x25b820u: goto label_25b820;
        case 0x25b824u: goto label_25b824;
        case 0x25b828u: goto label_25b828;
        case 0x25b82cu: goto label_25b82c;
        case 0x25b830u: goto label_25b830;
        case 0x25b834u: goto label_25b834;
        case 0x25b838u: goto label_25b838;
        case 0x25b83cu: goto label_25b83c;
        case 0x25b840u: goto label_25b840;
        case 0x25b844u: goto label_25b844;
        case 0x25b848u: goto label_25b848;
        case 0x25b84cu: goto label_25b84c;
        case 0x25b850u: goto label_25b850;
        case 0x25b854u: goto label_25b854;
        case 0x25b858u: goto label_25b858;
        case 0x25b85cu: goto label_25b85c;
        case 0x25b860u: goto label_25b860;
        case 0x25b864u: goto label_25b864;
        case 0x25b868u: goto label_25b868;
        case 0x25b86cu: goto label_25b86c;
        case 0x25b870u: goto label_25b870;
        case 0x25b874u: goto label_25b874;
        case 0x25b878u: goto label_25b878;
        case 0x25b87cu: goto label_25b87c;
        case 0x25b880u: goto label_25b880;
        case 0x25b884u: goto label_25b884;
        case 0x25b888u: goto label_25b888;
        case 0x25b88cu: goto label_25b88c;
        case 0x25b890u: goto label_25b890;
        case 0x25b894u: goto label_25b894;
        case 0x25b898u: goto label_25b898;
        case 0x25b89cu: goto label_25b89c;
        case 0x25b8a0u: goto label_25b8a0;
        case 0x25b8a4u: goto label_25b8a4;
        case 0x25b8a8u: goto label_25b8a8;
        case 0x25b8acu: goto label_25b8ac;
        case 0x25b8b0u: goto label_25b8b0;
        case 0x25b8b4u: goto label_25b8b4;
        case 0x25b8b8u: goto label_25b8b8;
        case 0x25b8bcu: goto label_25b8bc;
        case 0x25b8c0u: goto label_25b8c0;
        case 0x25b8c4u: goto label_25b8c4;
        case 0x25b8c8u: goto label_25b8c8;
        case 0x25b8ccu: goto label_25b8cc;
        case 0x25b8d0u: goto label_25b8d0;
        case 0x25b8d4u: goto label_25b8d4;
        case 0x25b8d8u: goto label_25b8d8;
        case 0x25b8dcu: goto label_25b8dc;
        case 0x25b8e0u: goto label_25b8e0;
        case 0x25b8e4u: goto label_25b8e4;
        case 0x25b8e8u: goto label_25b8e8;
        case 0x25b8ecu: goto label_25b8ec;
        case 0x25b8f0u: goto label_25b8f0;
        case 0x25b8f4u: goto label_25b8f4;
        case 0x25b8f8u: goto label_25b8f8;
        case 0x25b8fcu: goto label_25b8fc;
        case 0x25b900u: goto label_25b900;
        case 0x25b904u: goto label_25b904;
        case 0x25b908u: goto label_25b908;
        case 0x25b90cu: goto label_25b90c;
        case 0x25b910u: goto label_25b910;
        case 0x25b914u: goto label_25b914;
        case 0x25b918u: goto label_25b918;
        case 0x25b91cu: goto label_25b91c;
        case 0x25b920u: goto label_25b920;
        case 0x25b924u: goto label_25b924;
        case 0x25b928u: goto label_25b928;
        case 0x25b92cu: goto label_25b92c;
        case 0x25b930u: goto label_25b930;
        case 0x25b934u: goto label_25b934;
        case 0x25b938u: goto label_25b938;
        case 0x25b93cu: goto label_25b93c;
        case 0x25b940u: goto label_25b940;
        case 0x25b944u: goto label_25b944;
        case 0x25b948u: goto label_25b948;
        case 0x25b94cu: goto label_25b94c;
        case 0x25b950u: goto label_25b950;
        case 0x25b954u: goto label_25b954;
        case 0x25b958u: goto label_25b958;
        case 0x25b95cu: goto label_25b95c;
        case 0x25b960u: goto label_25b960;
        case 0x25b964u: goto label_25b964;
        case 0x25b968u: goto label_25b968;
        case 0x25b96cu: goto label_25b96c;
        case 0x25b970u: goto label_25b970;
        case 0x25b974u: goto label_25b974;
        case 0x25b978u: goto label_25b978;
        case 0x25b97cu: goto label_25b97c;
        case 0x25b980u: goto label_25b980;
        case 0x25b984u: goto label_25b984;
        case 0x25b988u: goto label_25b988;
        case 0x25b98cu: goto label_25b98c;
        case 0x25b990u: goto label_25b990;
        case 0x25b994u: goto label_25b994;
        case 0x25b998u: goto label_25b998;
        case 0x25b99cu: goto label_25b99c;
        case 0x25b9a0u: goto label_25b9a0;
        case 0x25b9a4u: goto label_25b9a4;
        case 0x25b9a8u: goto label_25b9a8;
        case 0x25b9acu: goto label_25b9ac;
        case 0x25b9b0u: goto label_25b9b0;
        case 0x25b9b4u: goto label_25b9b4;
        case 0x25b9b8u: goto label_25b9b8;
        case 0x25b9bcu: goto label_25b9bc;
        case 0x25b9c0u: goto label_25b9c0;
        case 0x25b9c4u: goto label_25b9c4;
        case 0x25b9c8u: goto label_25b9c8;
        case 0x25b9ccu: goto label_25b9cc;
        case 0x25b9d0u: goto label_25b9d0;
        case 0x25b9d4u: goto label_25b9d4;
        case 0x25b9d8u: goto label_25b9d8;
        case 0x25b9dcu: goto label_25b9dc;
        case 0x25b9e0u: goto label_25b9e0;
        case 0x25b9e4u: goto label_25b9e4;
        case 0x25b9e8u: goto label_25b9e8;
        case 0x25b9ecu: goto label_25b9ec;
        case 0x25b9f0u: goto label_25b9f0;
        case 0x25b9f4u: goto label_25b9f4;
        case 0x25b9f8u: goto label_25b9f8;
        case 0x25b9fcu: goto label_25b9fc;
        case 0x25ba00u: goto label_25ba00;
        case 0x25ba04u: goto label_25ba04;
        case 0x25ba08u: goto label_25ba08;
        case 0x25ba0cu: goto label_25ba0c;
        case 0x25ba10u: goto label_25ba10;
        case 0x25ba14u: goto label_25ba14;
        case 0x25ba18u: goto label_25ba18;
        case 0x25ba1cu: goto label_25ba1c;
        case 0x25ba20u: goto label_25ba20;
        case 0x25ba24u: goto label_25ba24;
        case 0x25ba28u: goto label_25ba28;
        case 0x25ba2cu: goto label_25ba2c;
        case 0x25ba30u: goto label_25ba30;
        case 0x25ba34u: goto label_25ba34;
        case 0x25ba38u: goto label_25ba38;
        case 0x25ba3cu: goto label_25ba3c;
        case 0x25ba40u: goto label_25ba40;
        case 0x25ba44u: goto label_25ba44;
        case 0x25ba48u: goto label_25ba48;
        case 0x25ba4cu: goto label_25ba4c;
        case 0x25ba50u: goto label_25ba50;
        case 0x25ba54u: goto label_25ba54;
        case 0x25ba58u: goto label_25ba58;
        case 0x25ba5cu: goto label_25ba5c;
        case 0x25ba60u: goto label_25ba60;
        case 0x25ba64u: goto label_25ba64;
        case 0x25ba68u: goto label_25ba68;
        case 0x25ba6cu: goto label_25ba6c;
        case 0x25ba70u: goto label_25ba70;
        case 0x25ba74u: goto label_25ba74;
        case 0x25ba78u: goto label_25ba78;
        case 0x25ba7cu: goto label_25ba7c;
        case 0x25ba80u: goto label_25ba80;
        case 0x25ba84u: goto label_25ba84;
        case 0x25ba88u: goto label_25ba88;
        case 0x25ba8cu: goto label_25ba8c;
        case 0x25ba90u: goto label_25ba90;
        case 0x25ba94u: goto label_25ba94;
        case 0x25ba98u: goto label_25ba98;
        case 0x25ba9cu: goto label_25ba9c;
        case 0x25baa0u: goto label_25baa0;
        case 0x25baa4u: goto label_25baa4;
        case 0x25baa8u: goto label_25baa8;
        case 0x25baacu: goto label_25baac;
        case 0x25bab0u: goto label_25bab0;
        case 0x25bab4u: goto label_25bab4;
        case 0x25bab8u: goto label_25bab8;
        case 0x25babcu: goto label_25babc;
        case 0x25bac0u: goto label_25bac0;
        case 0x25bac4u: goto label_25bac4;
        case 0x25bac8u: goto label_25bac8;
        case 0x25baccu: goto label_25bacc;
        case 0x25bad0u: goto label_25bad0;
        case 0x25bad4u: goto label_25bad4;
        case 0x25bad8u: goto label_25bad8;
        case 0x25badcu: goto label_25badc;
        case 0x25bae0u: goto label_25bae0;
        case 0x25bae4u: goto label_25bae4;
        case 0x25bae8u: goto label_25bae8;
        case 0x25baecu: goto label_25baec;
        case 0x25baf0u: goto label_25baf0;
        case 0x25baf4u: goto label_25baf4;
        case 0x25baf8u: goto label_25baf8;
        case 0x25bafcu: goto label_25bafc;
        case 0x25bb00u: goto label_25bb00;
        case 0x25bb04u: goto label_25bb04;
        case 0x25bb08u: goto label_25bb08;
        case 0x25bb0cu: goto label_25bb0c;
        case 0x25bb10u: goto label_25bb10;
        case 0x25bb14u: goto label_25bb14;
        case 0x25bb18u: goto label_25bb18;
        case 0x25bb1cu: goto label_25bb1c;
        case 0x25bb20u: goto label_25bb20;
        case 0x25bb24u: goto label_25bb24;
        case 0x25bb28u: goto label_25bb28;
        case 0x25bb2cu: goto label_25bb2c;
        case 0x25bb30u: goto label_25bb30;
        case 0x25bb34u: goto label_25bb34;
        case 0x25bb38u: goto label_25bb38;
        case 0x25bb3cu: goto label_25bb3c;
        case 0x25bb40u: goto label_25bb40;
        case 0x25bb44u: goto label_25bb44;
        case 0x25bb48u: goto label_25bb48;
        case 0x25bb4cu: goto label_25bb4c;
        case 0x25bb50u: goto label_25bb50;
        case 0x25bb54u: goto label_25bb54;
        case 0x25bb58u: goto label_25bb58;
        case 0x25bb5cu: goto label_25bb5c;
        case 0x25bb60u: goto label_25bb60;
        case 0x25bb64u: goto label_25bb64;
        case 0x25bb68u: goto label_25bb68;
        case 0x25bb6cu: goto label_25bb6c;
        case 0x25bb70u: goto label_25bb70;
        case 0x25bb74u: goto label_25bb74;
        case 0x25bb78u: goto label_25bb78;
        case 0x25bb7cu: goto label_25bb7c;
        case 0x25bb80u: goto label_25bb80;
        case 0x25bb84u: goto label_25bb84;
        case 0x25bb88u: goto label_25bb88;
        case 0x25bb8cu: goto label_25bb8c;
        case 0x25bb90u: goto label_25bb90;
        case 0x25bb94u: goto label_25bb94;
        case 0x25bb98u: goto label_25bb98;
        case 0x25bb9cu: goto label_25bb9c;
        case 0x25bba0u: goto label_25bba0;
        case 0x25bba4u: goto label_25bba4;
        case 0x25bba8u: goto label_25bba8;
        case 0x25bbacu: goto label_25bbac;
        case 0x25bbb0u: goto label_25bbb0;
        case 0x25bbb4u: goto label_25bbb4;
        case 0x25bbb8u: goto label_25bbb8;
        case 0x25bbbcu: goto label_25bbbc;
        case 0x25bbc0u: goto label_25bbc0;
        case 0x25bbc4u: goto label_25bbc4;
        case 0x25bbc8u: goto label_25bbc8;
        case 0x25bbccu: goto label_25bbcc;
        case 0x25bbd0u: goto label_25bbd0;
        case 0x25bbd4u: goto label_25bbd4;
        case 0x25bbd8u: goto label_25bbd8;
        case 0x25bbdcu: goto label_25bbdc;
        case 0x25bbe0u: goto label_25bbe0;
        case 0x25bbe4u: goto label_25bbe4;
        case 0x25bbe8u: goto label_25bbe8;
        case 0x25bbecu: goto label_25bbec;
        case 0x25bbf0u: goto label_25bbf0;
        case 0x25bbf4u: goto label_25bbf4;
        case 0x25bbf8u: goto label_25bbf8;
        case 0x25bbfcu: goto label_25bbfc;
        case 0x25bc00u: goto label_25bc00;
        case 0x25bc04u: goto label_25bc04;
        case 0x25bc08u: goto label_25bc08;
        case 0x25bc0cu: goto label_25bc0c;
        case 0x25bc10u: goto label_25bc10;
        case 0x25bc14u: goto label_25bc14;
        case 0x25bc18u: goto label_25bc18;
        case 0x25bc1cu: goto label_25bc1c;
        case 0x25bc20u: goto label_25bc20;
        case 0x25bc24u: goto label_25bc24;
        case 0x25bc28u: goto label_25bc28;
        case 0x25bc2cu: goto label_25bc2c;
        case 0x25bc30u: goto label_25bc30;
        case 0x25bc34u: goto label_25bc34;
        case 0x25bc38u: goto label_25bc38;
        case 0x25bc3cu: goto label_25bc3c;
        case 0x25bc40u: goto label_25bc40;
        case 0x25bc44u: goto label_25bc44;
        case 0x25bc48u: goto label_25bc48;
        case 0x25bc4cu: goto label_25bc4c;
        case 0x25bc50u: goto label_25bc50;
        case 0x25bc54u: goto label_25bc54;
        case 0x25bc58u: goto label_25bc58;
        case 0x25bc5cu: goto label_25bc5c;
        case 0x25bc60u: goto label_25bc60;
        case 0x25bc64u: goto label_25bc64;
        case 0x25bc68u: goto label_25bc68;
        case 0x25bc6cu: goto label_25bc6c;
        case 0x25bc70u: goto label_25bc70;
        case 0x25bc74u: goto label_25bc74;
        case 0x25bc78u: goto label_25bc78;
        case 0x25bc7cu: goto label_25bc7c;
        case 0x25bc80u: goto label_25bc80;
        case 0x25bc84u: goto label_25bc84;
        case 0x25bc88u: goto label_25bc88;
        case 0x25bc8cu: goto label_25bc8c;
        case 0x25bc90u: goto label_25bc90;
        case 0x25bc94u: goto label_25bc94;
        case 0x25bc98u: goto label_25bc98;
        case 0x25bc9cu: goto label_25bc9c;
        case 0x25bca0u: goto label_25bca0;
        case 0x25bca4u: goto label_25bca4;
        case 0x25bca8u: goto label_25bca8;
        case 0x25bcacu: goto label_25bcac;
        case 0x25bcb0u: goto label_25bcb0;
        case 0x25bcb4u: goto label_25bcb4;
        case 0x25bcb8u: goto label_25bcb8;
        case 0x25bcbcu: goto label_25bcbc;
        case 0x25bcc0u: goto label_25bcc0;
        case 0x25bcc4u: goto label_25bcc4;
        case 0x25bcc8u: goto label_25bcc8;
        case 0x25bcccu: goto label_25bccc;
        case 0x25bcd0u: goto label_25bcd0;
        case 0x25bcd4u: goto label_25bcd4;
        case 0x25bcd8u: goto label_25bcd8;
        case 0x25bcdcu: goto label_25bcdc;
        case 0x25bce0u: goto label_25bce0;
        case 0x25bce4u: goto label_25bce4;
        case 0x25bce8u: goto label_25bce8;
        case 0x25bcecu: goto label_25bcec;
        case 0x25bcf0u: goto label_25bcf0;
        case 0x25bcf4u: goto label_25bcf4;
        case 0x25bcf8u: goto label_25bcf8;
        case 0x25bcfcu: goto label_25bcfc;
        case 0x25bd00u: goto label_25bd00;
        case 0x25bd04u: goto label_25bd04;
        case 0x25bd08u: goto label_25bd08;
        case 0x25bd0cu: goto label_25bd0c;
        case 0x25bd10u: goto label_25bd10;
        case 0x25bd14u: goto label_25bd14;
        case 0x25bd18u: goto label_25bd18;
        case 0x25bd1cu: goto label_25bd1c;
        case 0x25bd20u: goto label_25bd20;
        case 0x25bd24u: goto label_25bd24;
        case 0x25bd28u: goto label_25bd28;
        case 0x25bd2cu: goto label_25bd2c;
        case 0x25bd30u: goto label_25bd30;
        case 0x25bd34u: goto label_25bd34;
        case 0x25bd38u: goto label_25bd38;
        case 0x25bd3cu: goto label_25bd3c;
        case 0x25bd40u: goto label_25bd40;
        case 0x25bd44u: goto label_25bd44;
        case 0x25bd48u: goto label_25bd48;
        case 0x25bd4cu: goto label_25bd4c;
        case 0x25bd50u: goto label_25bd50;
        case 0x25bd54u: goto label_25bd54;
        case 0x25bd58u: goto label_25bd58;
        case 0x25bd5cu: goto label_25bd5c;
        case 0x25bd60u: goto label_25bd60;
        case 0x25bd64u: goto label_25bd64;
        case 0x25bd68u: goto label_25bd68;
        case 0x25bd6cu: goto label_25bd6c;
        case 0x25bd70u: goto label_25bd70;
        case 0x25bd74u: goto label_25bd74;
        case 0x25bd78u: goto label_25bd78;
        case 0x25bd7cu: goto label_25bd7c;
        case 0x25bd80u: goto label_25bd80;
        case 0x25bd84u: goto label_25bd84;
        case 0x25bd88u: goto label_25bd88;
        case 0x25bd8cu: goto label_25bd8c;
        case 0x25bd90u: goto label_25bd90;
        case 0x25bd94u: goto label_25bd94;
        case 0x25bd98u: goto label_25bd98;
        case 0x25bd9cu: goto label_25bd9c;
        case 0x25bda0u: goto label_25bda0;
        case 0x25bda4u: goto label_25bda4;
        case 0x25bda8u: goto label_25bda8;
        case 0x25bdacu: goto label_25bdac;
        case 0x25bdb0u: goto label_25bdb0;
        case 0x25bdb4u: goto label_25bdb4;
        case 0x25bdb8u: goto label_25bdb8;
        case 0x25bdbcu: goto label_25bdbc;
        case 0x25bdc0u: goto label_25bdc0;
        case 0x25bdc4u: goto label_25bdc4;
        case 0x25bdc8u: goto label_25bdc8;
        case 0x25bdccu: goto label_25bdcc;
        case 0x25bdd0u: goto label_25bdd0;
        case 0x25bdd4u: goto label_25bdd4;
        case 0x25bdd8u: goto label_25bdd8;
        case 0x25bddcu: goto label_25bddc;
        case 0x25bde0u: goto label_25bde0;
        case 0x25bde4u: goto label_25bde4;
        case 0x25bde8u: goto label_25bde8;
        case 0x25bdecu: goto label_25bdec;
        case 0x25bdf0u: goto label_25bdf0;
        case 0x25bdf4u: goto label_25bdf4;
        case 0x25bdf8u: goto label_25bdf8;
        case 0x25bdfcu: goto label_25bdfc;
        case 0x25be00u: goto label_25be00;
        case 0x25be04u: goto label_25be04;
        case 0x25be08u: goto label_25be08;
        case 0x25be0cu: goto label_25be0c;
        case 0x25be10u: goto label_25be10;
        case 0x25be14u: goto label_25be14;
        case 0x25be18u: goto label_25be18;
        case 0x25be1cu: goto label_25be1c;
        case 0x25be20u: goto label_25be20;
        case 0x25be24u: goto label_25be24;
        case 0x25be28u: goto label_25be28;
        case 0x25be2cu: goto label_25be2c;
        case 0x25be30u: goto label_25be30;
        case 0x25be34u: goto label_25be34;
        case 0x25be38u: goto label_25be38;
        case 0x25be3cu: goto label_25be3c;
        case 0x25be40u: goto label_25be40;
        case 0x25be44u: goto label_25be44;
        case 0x25be48u: goto label_25be48;
        case 0x25be4cu: goto label_25be4c;
        case 0x25be50u: goto label_25be50;
        case 0x25be54u: goto label_25be54;
        case 0x25be58u: goto label_25be58;
        case 0x25be5cu: goto label_25be5c;
        case 0x25be60u: goto label_25be60;
        case 0x25be64u: goto label_25be64;
        case 0x25be68u: goto label_25be68;
        case 0x25be6cu: goto label_25be6c;
        case 0x25be70u: goto label_25be70;
        case 0x25be74u: goto label_25be74;
        case 0x25be78u: goto label_25be78;
        case 0x25be7cu: goto label_25be7c;
        case 0x25be80u: goto label_25be80;
        case 0x25be84u: goto label_25be84;
        case 0x25be88u: goto label_25be88;
        case 0x25be8cu: goto label_25be8c;
        case 0x25be90u: goto label_25be90;
        case 0x25be94u: goto label_25be94;
        case 0x25be98u: goto label_25be98;
        case 0x25be9cu: goto label_25be9c;
        case 0x25bea0u: goto label_25bea0;
        case 0x25bea4u: goto label_25bea4;
        case 0x25bea8u: goto label_25bea8;
        case 0x25beacu: goto label_25beac;
        case 0x25beb0u: goto label_25beb0;
        case 0x25beb4u: goto label_25beb4;
        case 0x25beb8u: goto label_25beb8;
        case 0x25bebcu: goto label_25bebc;
        default: break;
    }

    ctx->pc = 0x2592c0u;

label_2592c0:
    // 0x2592c0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2592c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2592c4:
    // 0x2592c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2592c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2592c8:
    // 0x2592c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2592c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2592cc:
    // 0x2592cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2592ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2592d0:
    // 0x2592d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2592d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2592d4:
    // 0x2592d4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2592d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2592d8:
    // 0x2592d8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2592d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2592dc:
    // 0x2592dc: 0x26080024  addiu       $t0, $s0, 0x24
    ctx->pc = 0x2592dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_2592e0:
    // 0x2592e0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2592e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2592e4:
    // 0x2592e4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_2592e8:
    if (ctx->pc == 0x2592E8u) {
        ctx->pc = 0x2592E8u;
            // 0x2592e8: 0x24470002  addiu       $a3, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x2592ECu;
        goto label_2592ec;
    }
    ctx->pc = 0x2592E4u;
    {
        const bool branch_taken_0x2592e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2592E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2592E4u;
            // 0x2592e8: 0x24470002  addiu       $a3, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2592e4) {
            ctx->pc = 0x259308u;
            goto label_259308;
        }
    }
    ctx->pc = 0x2592ECu;
label_2592ec:
    // 0x2592ec: 0x0  nop
    ctx->pc = 0x2592ecu;
    // NOP
label_2592f0:
    // 0x2592f0: 0xafbd0094  sw          $sp, 0x94($sp)
    ctx->pc = 0x2592f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 29));
label_2592f4:
    // 0x2592f4: 0xae080000  sw          $t0, 0x0($s0)
    ctx->pc = 0x2592f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
label_2592f8:
    // 0x2592f8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2592f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2592fc:
    // 0x2592fc: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x2592fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_259300:
    // 0x259300: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x259300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_259304:
    // 0x259304: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x259304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_259308:
    // 0x259308: 0x2606000c  addiu       $a2, $s0, 0xC
    ctx->pc = 0x259308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_25930c:
    // 0x25930c: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
label_259310:
    if (ctx->pc == 0x259310u) {
        ctx->pc = 0x259314u;
        goto label_259314;
    }
    ctx->pc = 0x25930Cu;
    {
        const bool branch_taken_0x25930c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x25930c) {
            ctx->pc = 0x259338u;
            goto label_259338;
        }
    }
    ctx->pc = 0x259314u;
label_259314:
    // 0x259314: 0x0  nop
    ctx->pc = 0x259314u;
    // NOP
label_259318:
    // 0x259318: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x259318u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_25931c:
    // 0x25931c: 0xafbd0074  sw          $sp, 0x74($sp)
    ctx->pc = 0x25931cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 29));
label_259320:
    // 0x259320: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x259320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_259324:
    // 0x259324: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x259324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_259328:
    // 0x259328: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x259328u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_25932c:
    // 0x25932c: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x25932cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_259330:
    // 0x259330: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x259330u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_259334:
    // 0x259334: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x259334u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_259338:
    // 0x259338: 0x26060018  addiu       $a2, $s0, 0x18
    ctx->pc = 0x259338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_25933c:
    // 0x25933c: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
label_259340:
    if (ctx->pc == 0x259340u) {
        ctx->pc = 0x259344u;
        goto label_259344;
    }
    ctx->pc = 0x25933Cu;
    {
        const bool branch_taken_0x25933c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x25933c) {
            ctx->pc = 0x259368u;
            goto label_259368;
        }
    }
    ctx->pc = 0x259344u;
label_259344:
    // 0x259344: 0x0  nop
    ctx->pc = 0x259344u;
    // NOP
label_259348:
    // 0x259348: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x259348u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_25934c:
    // 0x25934c: 0xafbd0054  sw          $sp, 0x54($sp)
    ctx->pc = 0x25934cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 29));
label_259350:
    // 0x259350: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x259350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_259354:
    // 0x259354: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x259354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_259358:
    // 0x259358: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x259358u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_25935c:
    // 0x25935c: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x25935cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_259360:
    // 0x259360: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x259360u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_259364:
    // 0x259364: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x259364u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_259368:
    // 0x259368: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x259368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_25936c:
    // 0x25936c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x25936cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_259370:
    // 0x259370: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x259370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_259374:
    // 0x259374: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x259374u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_259378:
    // 0x259378: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x259378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25937c:
    // 0x25937c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25937cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_259380:
    // 0x259380: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x259380u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
label_259384:
    // 0x259384: 0xa4400002  sh          $zero, 0x2($v0)
    ctx->pc = 0x259384u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
label_259388:
    // 0x259388: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x259388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_25938c:
    // 0x25938c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x25938cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_259390:
    // 0x259390: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x259390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_259394:
    // 0x259394: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x259394u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_259398:
    // 0x259398: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x259398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_25939c:
    // 0x25939c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25939cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2593a0:
    // 0x2593a0: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x2593a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
label_2593a4:
    // 0x2593a4: 0xa4400002  sh          $zero, 0x2($v0)
    ctx->pc = 0x2593a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
label_2593a8:
    // 0x2593a8: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x2593a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2593ac:
    // 0x2593ac: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2593acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2593b0:
    // 0x2593b0: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x2593b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_2593b4:
    // 0x2593b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2593b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2593b8:
    // 0x2593b8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2593b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2593bc:
    // 0x2593bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2593bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2593c0:
    // 0x2593c0: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x2593c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
label_2593c4:
    // 0x2593c4: 0xa4400002  sh          $zero, 0x2($v0)
    ctx->pc = 0x2593c4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
label_2593c8:
    // 0x2593c8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2593c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2593cc:
    // 0x2593cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2593ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2593d0:
    // 0x2593d0: 0x440005f  bltz        $v0, . + 4 + (0x5F << 2)
label_2593d4:
    if (ctx->pc == 0x2593D4u) {
        ctx->pc = 0x2593D4u;
            // 0x2593d4: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->pc = 0x2593D8u;
        goto label_2593d8;
    }
    ctx->pc = 0x2593D0u;
    {
        const bool branch_taken_0x2593d0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2593D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2593D0u;
            // 0x2593d4: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2593d0) {
            ctx->pc = 0x259550u;
            goto label_259550;
        }
    }
    ctx->pc = 0x2593D8u;
label_2593d8:
    // 0x2593d8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2593d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2593dc:
    // 0x2593dc: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x2593dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2593e0:
    // 0x2593e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2593e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2593e4:
    // 0x2593e4: 0x8c88007c  lw          $t0, 0x7C($a0)
    ctx->pc = 0x2593e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_2593e8:
    // 0x2593e8: 0x94a90008  lhu         $t1, 0x8($a1)
    ctx->pc = 0x2593e8u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
label_2593ec:
    // 0x2593ec: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x2593ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2593f0:
    // 0x2593f0: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x2593f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2593f4:
    // 0x2593f4: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x2593f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
label_2593f8:
    // 0x2593f8: 0x92880  sll         $a1, $t1, 2
    ctx->pc = 0x2593f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_2593fc:
    // 0x2593fc: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2593fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_259400:
    // 0x259400: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x259400u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_259404:
    // 0x259404: 0x95050000  lhu         $a1, 0x0($t0)
    ctx->pc = 0x259404u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_259408:
    // 0x259408: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x259408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_25940c:
    // 0x25940c: 0xa4c50000  sh          $a1, 0x0($a2)
    ctx->pc = 0x25940cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
label_259410:
    // 0x259410: 0x95050002  lhu         $a1, 0x2($t0)
    ctx->pc = 0x259410u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
label_259414:
    // 0x259414: 0xa4c50002  sh          $a1, 0x2($a2)
    ctx->pc = 0x259414u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 5));
label_259418:
    // 0x259418: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x259418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25941c:
    // 0x25941c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x25941cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_259420:
    // 0x259420: 0x8c88007c  lw          $t0, 0x7C($a0)
    ctx->pc = 0x259420u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_259424:
    // 0x259424: 0x94a9000a  lhu         $t1, 0xA($a1)
    ctx->pc = 0x259424u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
label_259428:
    // 0x259428: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x259428u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_25942c:
    // 0x25942c: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x25942cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_259430:
    // 0x259430: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x259430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
label_259434:
    // 0x259434: 0x92880  sll         $a1, $t1, 2
    ctx->pc = 0x259434u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_259438:
    // 0x259438: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x259438u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25943c:
    // 0x25943c: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x25943cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_259440:
    // 0x259440: 0x95050000  lhu         $a1, 0x0($t0)
    ctx->pc = 0x259440u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_259444:
    // 0x259444: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x259444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_259448:
    // 0x259448: 0xa4c50000  sh          $a1, 0x0($a2)
    ctx->pc = 0x259448u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
label_25944c:
    // 0x25944c: 0x95050002  lhu         $a1, 0x2($t0)
    ctx->pc = 0x25944cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
label_259450:
    // 0x259450: 0xa4c50002  sh          $a1, 0x2($a2)
    ctx->pc = 0x259450u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 5));
label_259454:
    // 0x259454: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x259454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_259458:
    // 0x259458: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x259458u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_25945c:
    // 0x25945c: 0x8c880088  lw          $t0, 0x88($a0)
    ctx->pc = 0x25945cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_259460:
    // 0x259460: 0x94a90000  lhu         $t1, 0x0($a1)
    ctx->pc = 0x259460u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_259464:
    // 0x259464: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x259464u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_259468:
    // 0x259468: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x259468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_25946c:
    // 0x25946c: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x25946cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
label_259470:
    // 0x259470: 0x92880  sll         $a1, $t1, 2
    ctx->pc = 0x259470u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_259474:
    // 0x259474: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x259474u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_259478:
    // 0x259478: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x259478u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_25947c:
    // 0x25947c: 0x95050000  lhu         $a1, 0x0($t0)
    ctx->pc = 0x25947cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_259480:
    // 0x259480: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x259480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_259484:
    // 0x259484: 0xa4c50000  sh          $a1, 0x0($a2)
    ctx->pc = 0x259484u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
label_259488:
    // 0x259488: 0x95050002  lhu         $a1, 0x2($t0)
    ctx->pc = 0x259488u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
label_25948c:
    // 0x25948c: 0xa4c50002  sh          $a1, 0x2($a2)
    ctx->pc = 0x25948cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 5));
label_259490:
    // 0x259490: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x259490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_259494:
    // 0x259494: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x259494u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_259498:
    // 0x259498: 0x8c880088  lw          $t0, 0x88($a0)
    ctx->pc = 0x259498u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_25949c:
    // 0x25949c: 0x94a90004  lhu         $t1, 0x4($a1)
    ctx->pc = 0x25949cu;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_2594a0:
    // 0x2594a0: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x2594a0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2594a4:
    // 0x2594a4: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x2594a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2594a8:
    // 0x2594a8: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x2594a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
label_2594ac:
    // 0x2594ac: 0x92880  sll         $a1, $t1, 2
    ctx->pc = 0x2594acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_2594b0:
    // 0x2594b0: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x2594b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2594b4:
    // 0x2594b4: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x2594b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_2594b8:
    // 0x2594b8: 0x95050000  lhu         $a1, 0x0($t0)
    ctx->pc = 0x2594b8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_2594bc:
    // 0x2594bc: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2594bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_2594c0:
    // 0x2594c0: 0xa4c50000  sh          $a1, 0x0($a2)
    ctx->pc = 0x2594c0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
label_2594c4:
    // 0x2594c4: 0x95050002  lhu         $a1, 0x2($t0)
    ctx->pc = 0x2594c4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
label_2594c8:
    // 0x2594c8: 0xa4c50002  sh          $a1, 0x2($a2)
    ctx->pc = 0x2594c8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 5));
label_2594cc:
    // 0x2594cc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2594ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2594d0:
    // 0x2594d0: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x2594d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2594d4:
    // 0x2594d4: 0x8c880094  lw          $t0, 0x94($a0)
    ctx->pc = 0x2594d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
label_2594d8:
    // 0x2594d8: 0x94a90002  lhu         $t1, 0x2($a1)
    ctx->pc = 0x2594d8u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_2594dc:
    // 0x2594dc: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x2594dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2594e0:
    // 0x2594e0: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x2594e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2594e4:
    // 0x2594e4: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x2594e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
label_2594e8:
    // 0x2594e8: 0x92880  sll         $a1, $t1, 2
    ctx->pc = 0x2594e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_2594ec:
    // 0x2594ec: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x2594ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2594f0:
    // 0x2594f0: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x2594f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_2594f4:
    // 0x2594f4: 0x95050000  lhu         $a1, 0x0($t0)
    ctx->pc = 0x2594f4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_2594f8:
    // 0x2594f8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2594f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_2594fc:
    // 0x2594fc: 0xa4c50000  sh          $a1, 0x0($a2)
    ctx->pc = 0x2594fcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
label_259500:
    // 0x259500: 0x95050002  lhu         $a1, 0x2($t0)
    ctx->pc = 0x259500u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
label_259504:
    // 0x259504: 0xa4c50002  sh          $a1, 0x2($a2)
    ctx->pc = 0x259504u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 5));
label_259508:
    // 0x259508: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x259508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25950c:
    // 0x25950c: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x25950cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_259510:
    // 0x259510: 0x8c880094  lw          $t0, 0x94($a0)
    ctx->pc = 0x259510u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
label_259514:
    // 0x259514: 0x94a90006  lhu         $t1, 0x6($a1)
    ctx->pc = 0x259514u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
label_259518:
    // 0x259518: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x259518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_25951c:
    // 0x25951c: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x25951cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_259520:
    // 0x259520: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x259520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_259524:
    // 0x259524: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x259524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
label_259528:
    // 0x259528: 0x92880  sll         $a1, $t1, 2
    ctx->pc = 0x259528u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_25952c:
    // 0x25952c: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x25952cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_259530:
    // 0x259530: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x259530u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_259534:
    // 0x259534: 0x95050000  lhu         $a1, 0x0($t0)
    ctx->pc = 0x259534u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_259538:
    // 0x259538: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x259538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_25953c:
    // 0x25953c: 0xa4c50000  sh          $a1, 0x0($a2)
    ctx->pc = 0x25953cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
label_259540:
    // 0x259540: 0x95050002  lhu         $a1, 0x2($t0)
    ctx->pc = 0x259540u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
label_259544:
    // 0x259544: 0x441ffa4  bgez        $v0, . + 4 + (-0x5C << 2)
label_259548:
    if (ctx->pc == 0x259548u) {
        ctx->pc = 0x259548u;
            // 0x259548: 0xa4c50002  sh          $a1, 0x2($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 5));
        ctx->pc = 0x25954Cu;
        goto label_25954c;
    }
    ctx->pc = 0x259544u;
    {
        const bool branch_taken_0x259544 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x259548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259544u;
            // 0x259548: 0xa4c50002  sh          $a1, 0x2($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259544) {
            ctx->pc = 0x2593D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2593d8;
        }
    }
    ctx->pc = 0x25954Cu;
label_25954c:
    // 0x25954c: 0x0  nop
    ctx->pc = 0x25954cu;
    // NOP
label_259550:
    // 0x259550: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x259550u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_259554:
    // 0x259554: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x259554u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_259558:
    // 0x259558: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x259558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25955c:
    // 0x25955c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x25955cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_259560:
    // 0x259560: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x259560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_259564:
    // 0x259564: 0xc0971fc  jal         func_25C7F0
label_259568:
    if (ctx->pc == 0x259568u) {
        ctx->pc = 0x259568u;
            // 0x259568: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->pc = 0x25956Cu;
        goto label_25956c;
    }
    ctx->pc = 0x259564u;
    SET_GPR_U32(ctx, 31, 0x25956Cu);
    ctx->pc = 0x259568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259564u;
            // 0x259568: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C7F0u;
    if (runtime->hasFunction(0x25C7F0u)) {
        auto targetFn = runtime->lookupFunction(0x25C7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25956Cu; }
        if (ctx->pc != 0x25956Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025C7F0_0x25c7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25956Cu; }
        if (ctx->pc != 0x25956Cu) { return; }
    }
    ctx->pc = 0x25956Cu;
label_25956c:
    // 0x25956c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x25956cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_259570:
    // 0x259570: 0x2a430003  slti        $v1, $s2, 0x3
    ctx->pc = 0x259570u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
label_259574:
    // 0x259574: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_259578:
    if (ctx->pc == 0x259578u) {
        ctx->pc = 0x259578u;
            // 0x259578: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->pc = 0x25957Cu;
        goto label_25957c;
    }
    ctx->pc = 0x259574u;
    {
        const bool branch_taken_0x259574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x259578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259574u;
            // 0x259578: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259574) {
            ctx->pc = 0x259558u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_259558;
        }
    }
    ctx->pc = 0x25957Cu;
label_25957c:
    // 0x25957c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x25957cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_259580:
    // 0x259580: 0x3405fffc  ori         $a1, $zero, 0xFFFC
    ctx->pc = 0x259580u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
label_259584:
    // 0x259584: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x259584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_259588:
    // 0x259588: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x259588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_25958c:
    // 0x25958c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x25958cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_259590:
    // 0x259590: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x259590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_259594:
    // 0x259594: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x259594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_259598:
    // 0x259598: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x259598u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
label_25959c:
    // 0x25959c: 0xa4600002  sh          $zero, 0x2($v1)
    ctx->pc = 0x25959cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 0));
label_2595a0:
    // 0x2595a0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2595a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2595a4:
    // 0x2595a4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2595a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2595a8:
    // 0x2595a8: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x2595a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_2595ac:
    // 0x2595ac: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2595acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2595b0:
    // 0x2595b0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2595b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2595b4:
    // 0x2595b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2595b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2595b8:
    // 0x2595b8: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x2595b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
label_2595bc:
    // 0x2595bc: 0xa4600002  sh          $zero, 0x2($v1)
    ctx->pc = 0x2595bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 0));
label_2595c0:
    // 0x2595c0: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x2595c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2595c4:
    // 0x2595c4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2595c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2595c8:
    // 0x2595c8: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x2595c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
label_2595cc:
    // 0x2595cc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2595ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2595d0:
    // 0x2595d0: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x2595d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2595d4:
    // 0x2595d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2595d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2595d8:
    // 0x2595d8: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x2595d8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
label_2595dc:
    // 0x2595dc: 0xa4600002  sh          $zero, 0x2($v1)
    ctx->pc = 0x2595dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 0));
label_2595e0:
    // 0x2595e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2595e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2595e4:
    // 0x2595e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2595e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2595e8:
    // 0x2595e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2595e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2595ec:
    // 0x2595ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2595ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2595f0:
    // 0x2595f0: 0x3e00008  jr          $ra
label_2595f4:
    if (ctx->pc == 0x2595F4u) {
        ctx->pc = 0x2595F4u;
            // 0x2595f4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x2595F8u;
        goto label_2595f8;
    }
    ctx->pc = 0x2595F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2595F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2595F0u;
            // 0x2595f4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2595F8u;
label_2595f8:
    // 0x2595f8: 0x0  nop
    ctx->pc = 0x2595f8u;
    // NOP
label_2595fc:
    // 0x2595fc: 0x0  nop
    ctx->pc = 0x2595fcu;
    // NOP
label_259600:
    // 0x259600: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x259600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_259604:
    // 0x259604: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x259604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_259608:
    // 0x259608: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x259608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_25960c:
    // 0x25960c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x25960cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_259610:
    // 0x259610: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x259610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_259614:
    // 0x259614: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x259614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_259618:
    // 0x259618: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x259618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_25961c:
    // 0x25961c: 0x8c910074  lw          $s1, 0x74($a0)
    ctx->pc = 0x25961cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_259620:
    // 0x259620: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x259620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_259624:
    // 0x259624: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x259624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_259628:
    // 0x259628: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x259628u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_25962c:
    // 0x25962c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x25962cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_259630:
    // 0x259630: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x259630u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_259634:
    // 0x259634: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x259634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_259638:
    // 0x259638: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x259638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_25963c:
    // 0x25963c: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x25963cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_259640:
    // 0x259640: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x259640u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_259644:
    // 0x259644: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_259648:
    if (ctx->pc == 0x259648u) {
        ctx->pc = 0x25964Cu;
        goto label_25964c;
    }
    ctx->pc = 0x259644u;
    {
        const bool branch_taken_0x259644 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x259644) {
            ctx->pc = 0x259658u;
            goto label_259658;
        }
    }
    ctx->pc = 0x25964Cu;
label_25964c:
    // 0x25964c: 0x10000006  b           . + 4 + (0x6 << 2)
label_259650:
    if (ctx->pc == 0x259650u) {
        ctx->pc = 0x259650u;
            // 0x259650: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x259654u;
        goto label_259654;
    }
    ctx->pc = 0x25964Cu;
    {
        const bool branch_taken_0x25964c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25964Cu;
            // 0x259650: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25964c) {
            ctx->pc = 0x259668u;
            goto label_259668;
        }
    }
    ctx->pc = 0x259654u;
label_259654:
    // 0x259654: 0x0  nop
    ctx->pc = 0x259654u;
    // NOP
label_259658:
    // 0x259658: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x259658u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25965c:
    // 0x25965c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x25965cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_259660:
    // 0x259660: 0x320f809  jalr        $t9
label_259664:
    if (ctx->pc == 0x259664u) {
        ctx->pc = 0x259668u;
        goto label_259668;
    }
    ctx->pc = 0x259660u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x259668u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x259668u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x259668u; }
            if (ctx->pc != 0x259668u) { return; }
        }
        }
    }
    ctx->pc = 0x259668u;
label_259668:
    // 0x259668: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x259668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_25966c:
    // 0x25966c: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x25966cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_259670:
    // 0x259670: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x259670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_259674:
    // 0x259674: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x259674u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_259678:
    // 0x259678: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x259678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_25967c:
    // 0x25967c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x25967cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_259680:
    // 0x259680: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x259680u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_259684:
    // 0x259684: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x259684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_259688:
    // 0x259688: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x259688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_25968c:
    // 0x25968c: 0x522821  addu        $a1, $v0, $s2
    ctx->pc = 0x25968cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_259690:
    // 0x259690: 0x65082b  sltu        $at, $v1, $a1
    ctx->pc = 0x259690u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_259694:
    // 0x259694: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_259698:
    if (ctx->pc == 0x259698u) {
        ctx->pc = 0x25969Cu;
        goto label_25969c;
    }
    ctx->pc = 0x259694u;
    {
        const bool branch_taken_0x259694 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x259694) {
            ctx->pc = 0x2596A8u;
            goto label_2596a8;
        }
    }
    ctx->pc = 0x25969Cu;
label_25969c:
    // 0x25969c: 0x10000006  b           . + 4 + (0x6 << 2)
label_2596a0:
    if (ctx->pc == 0x2596A0u) {
        ctx->pc = 0x2596A0u;
            // 0x2596a0: 0xac85000c  sw          $a1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
        ctx->pc = 0x2596A4u;
        goto label_2596a4;
    }
    ctx->pc = 0x25969Cu;
    {
        const bool branch_taken_0x25969c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2596A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25969Cu;
            // 0x2596a0: 0xac85000c  sw          $a1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25969c) {
            ctx->pc = 0x2596B8u;
            goto label_2596b8;
        }
    }
    ctx->pc = 0x2596A4u;
label_2596a4:
    // 0x2596a4: 0x0  nop
    ctx->pc = 0x2596a4u;
    // NOP
label_2596a8:
    // 0x2596a8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2596a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2596ac:
    // 0x2596ac: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2596acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2596b0:
    // 0x2596b0: 0x320f809  jalr        $t9
label_2596b4:
    if (ctx->pc == 0x2596B4u) {
        ctx->pc = 0x2596B4u;
            // 0x2596b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2596B8u;
        goto label_2596b8;
    }
    ctx->pc = 0x2596B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2596B8u);
        ctx->pc = 0x2596B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2596B0u;
            // 0x2596b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2596B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2596B8u; }
            if (ctx->pc != 0x2596B8u) { return; }
        }
        }
    }
    ctx->pc = 0x2596B8u;
label_2596b8:
    // 0x2596b8: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x2596b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_2596bc:
    // 0x2596bc: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x2596bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_2596c0:
    // 0x2596c0: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x2596c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_2596c4:
    // 0x2596c4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2596c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2596c8:
    // 0x2596c8: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x2596c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_2596cc:
    // 0x2596cc: 0x522821  addu        $a1, $v0, $s2
    ctx->pc = 0x2596ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_2596d0:
    // 0x2596d0: 0x65082b  sltu        $at, $v1, $a1
    ctx->pc = 0x2596d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2596d4:
    // 0x2596d4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_2596d8:
    if (ctx->pc == 0x2596D8u) {
        ctx->pc = 0x2596DCu;
        goto label_2596dc;
    }
    ctx->pc = 0x2596D4u;
    {
        const bool branch_taken_0x2596d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2596d4) {
            ctx->pc = 0x2596E8u;
            goto label_2596e8;
        }
    }
    ctx->pc = 0x2596DCu;
label_2596dc:
    // 0x2596dc: 0x10000006  b           . + 4 + (0x6 << 2)
label_2596e0:
    if (ctx->pc == 0x2596E0u) {
        ctx->pc = 0x2596E0u;
            // 0x2596e0: 0xac85000c  sw          $a1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
        ctx->pc = 0x2596E4u;
        goto label_2596e4;
    }
    ctx->pc = 0x2596DCu;
    {
        const bool branch_taken_0x2596dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2596E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2596DCu;
            // 0x2596e0: 0xac85000c  sw          $a1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2596dc) {
            ctx->pc = 0x2596F8u;
            goto label_2596f8;
        }
    }
    ctx->pc = 0x2596E4u;
label_2596e4:
    // 0x2596e4: 0x0  nop
    ctx->pc = 0x2596e4u;
    // NOP
label_2596e8:
    // 0x2596e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2596e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2596ec:
    // 0x2596ec: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2596ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2596f0:
    // 0x2596f0: 0x320f809  jalr        $t9
label_2596f4:
    if (ctx->pc == 0x2596F4u) {
        ctx->pc = 0x2596F4u;
            // 0x2596f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2596F8u;
        goto label_2596f8;
    }
    ctx->pc = 0x2596F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2596F8u);
        ctx->pc = 0x2596F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2596F0u;
            // 0x2596f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2596F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2596F8u; }
            if (ctx->pc != 0x2596F8u) { return; }
        }
        }
    }
    ctx->pc = 0x2596F8u;
label_2596f8:
    // 0x2596f8: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x2596f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_2596fc:
    // 0x2596fc: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x2596fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_259700:
    // 0x259700: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x259700u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_259704:
    // 0x259704: 0x1020002a  beqz        $at, . + 4 + (0x2A << 2)
label_259708:
    if (ctx->pc == 0x259708u) {
        ctx->pc = 0x259708u;
            // 0x259708: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25970Cu;
        goto label_25970c;
    }
    ctx->pc = 0x259704u;
    {
        const bool branch_taken_0x259704 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x259708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259704u;
            // 0x259708: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259704) {
            ctx->pc = 0x2597B0u;
            goto label_2597b0;
        }
    }
    ctx->pc = 0x25970Cu;
label_25970c:
    // 0x25970c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x25970cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_259710:
    // 0x259710: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x259710u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_259714:
    // 0x259714: 0x0  nop
    ctx->pc = 0x259714u;
    // NOP
label_259718:
    // 0x259718: 0x8e060070  lw          $a2, 0x70($s0)
    ctx->pc = 0x259718u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_25971c:
    // 0x25971c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x25971cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_259720:
    // 0x259720: 0xc33821  addu        $a3, $a2, $v1
    ctx->pc = 0x259720u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_259724:
    // 0x259724: 0xa33021  addu        $a2, $a1, $v1
    ctx->pc = 0x259724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_259728:
    // 0x259728: 0x94e50000  lhu         $a1, 0x0($a3)
    ctx->pc = 0x259728u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_25972c:
    // 0x25972c: 0xa4c50000  sh          $a1, 0x0($a2)
    ctx->pc = 0x25972cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
label_259730:
    // 0x259730: 0x94e50002  lhu         $a1, 0x2($a3)
    ctx->pc = 0x259730u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_259734:
    // 0x259734: 0xa4c50002  sh          $a1, 0x2($a2)
    ctx->pc = 0x259734u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 5));
label_259738:
    // 0x259738: 0x94e50004  lhu         $a1, 0x4($a3)
    ctx->pc = 0x259738u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
label_25973c:
    // 0x25973c: 0xa4c50004  sh          $a1, 0x4($a2)
    ctx->pc = 0x25973cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 5));
label_259740:
    // 0x259740: 0x94e50006  lhu         $a1, 0x6($a3)
    ctx->pc = 0x259740u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
label_259744:
    // 0x259744: 0xa4c50006  sh          $a1, 0x6($a2)
    ctx->pc = 0x259744u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 5));
label_259748:
    // 0x259748: 0x94e50008  lhu         $a1, 0x8($a3)
    ctx->pc = 0x259748u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
label_25974c:
    // 0x25974c: 0xa4c50008  sh          $a1, 0x8($a2)
    ctx->pc = 0x25974cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 5));
label_259750:
    // 0x259750: 0x94e5000a  lhu         $a1, 0xA($a3)
    ctx->pc = 0x259750u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_259754:
    // 0x259754: 0xa4c5000a  sh          $a1, 0xA($a2)
    ctx->pc = 0x259754u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 10), (uint16_t)GPR_U32(ctx, 5));
label_259758:
    // 0x259758: 0x8ce5000c  lw          $a1, 0xC($a3)
    ctx->pc = 0x259758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_25975c:
    // 0x25975c: 0xacc5000c  sw          $a1, 0xC($a2)
    ctx->pc = 0x25975cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
label_259760:
    // 0x259760: 0x8e070070  lw          $a3, 0x70($s0)
    ctx->pc = 0x259760u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_259764:
    // 0x259764: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x259764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_259768:
    // 0x259768: 0x8e06007c  lw          $a2, 0x7C($s0)
    ctx->pc = 0x259768u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_25976c:
    // 0x25976c: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x25976cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_259770:
    // 0x259770: 0x94e70008  lhu         $a3, 0x8($a3)
    ctx->pc = 0x259770u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
label_259774:
    // 0x259774: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x259774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_259778:
    // 0x259778: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x259778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_25977c:
    // 0x25977c: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x25977cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_259780:
    // 0x259780: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x259780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_259784:
    // 0x259784: 0x94c60000  lhu         $a2, 0x0($a2)
    ctx->pc = 0x259784u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_259788:
    // 0x259788: 0xa4a60000  sh          $a2, 0x0($a1)
    ctx->pc = 0x259788u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
label_25978c:
    // 0x25978c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x25978cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_259790:
    // 0x259790: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x259790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_259794:
    // 0x259794: 0xa4a40002  sh          $a0, 0x2($a1)
    ctx->pc = 0x259794u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 4));
label_259798:
    // 0x259798: 0x8e050074  lw          $a1, 0x74($s0)
    ctx->pc = 0x259798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_25979c:
    // 0x25979c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x25979cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2597a0:
    // 0x2597a0: 0x85282a  slt         $a1, $a0, $a1
    ctx->pc = 0x2597a0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_2597a4:
    // 0x2597a4: 0x14a0ffdc  bnez        $a1, . + 4 + (-0x24 << 2)
label_2597a8:
    if (ctx->pc == 0x2597A8u) {
        ctx->pc = 0x2597A8u;
            // 0x2597a8: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x2597ACu;
        goto label_2597ac;
    }
    ctx->pc = 0x2597A4u;
    {
        const bool branch_taken_0x2597a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2597A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2597A4u;
            // 0x2597a8: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2597a4) {
            ctx->pc = 0x259718u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_259718;
        }
    }
    ctx->pc = 0x2597ACu;
label_2597ac:
    // 0x2597ac: 0x0  nop
    ctx->pc = 0x2597acu;
    // NOP
label_2597b0:
    // 0x2597b0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2597b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2597b4:
    // 0x2597b4: 0x2625ffff  addiu       $a1, $s1, -0x1
    ctx->pc = 0x2597b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_2597b8:
    // 0x2597b8: 0xc0971f4  jal         func_25C7D0
label_2597bc:
    if (ctx->pc == 0x2597BCu) {
        ctx->pc = 0x2597BCu;
            // 0x2597bc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x2597C0u;
        goto label_2597c0;
    }
    ctx->pc = 0x2597B8u;
    SET_GPR_U32(ctx, 31, 0x2597C0u);
    ctx->pc = 0x2597BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2597B8u;
            // 0x2597bc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C7D0u;
    if (runtime->hasFunction(0x25C7D0u)) {
        auto targetFn = runtime->lookupFunction(0x25C7D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2597C0u; }
        if (ctx->pc != 0x2597C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025C7D0_0x25c7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2597C0u; }
        if (ctx->pc != 0x2597C0u) { return; }
    }
    ctx->pc = 0x2597C0u;
label_2597c0:
    // 0x2597c0: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x2597c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_2597c4:
    // 0x2597c4: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2597c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2597c8:
    // 0x2597c8: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
label_2597cc:
    if (ctx->pc == 0x2597CCu) {
        ctx->pc = 0x2597CCu;
            // 0x2597cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2597D0u;
        goto label_2597d0;
    }
    ctx->pc = 0x2597C8u;
    {
        const bool branch_taken_0x2597c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2597CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2597C8u;
            // 0x2597cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2597c8) {
            ctx->pc = 0x259868u;
            goto label_259868;
        }
    }
    ctx->pc = 0x2597D0u;
label_2597d0:
    // 0x2597d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2597d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2597d4:
    // 0x2597d4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2597d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2597d8:
    // 0x2597d8: 0x8fa70050  lw          $a3, 0x50($sp)
    ctx->pc = 0x2597d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2597dc:
    // 0x2597dc: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x2597dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2597e0:
    // 0x2597e0: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x2597e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_2597e4:
    // 0x2597e4: 0x94e70002  lhu         $a3, 0x2($a3)
    ctx->pc = 0x2597e4u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_2597e8:
    // 0x2597e8: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x2597e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_2597ec:
    // 0x2597ec: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2597ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_2597f0:
    // 0x2597f0: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x2597f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
label_2597f4:
    // 0x2597f4: 0x8fa80050  lw          $t0, 0x50($sp)
    ctx->pc = 0x2597f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2597f8:
    // 0x2597f8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2597f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2597fc:
    // 0x2597fc: 0x8e060070  lw          $a2, 0x70($s0)
    ctx->pc = 0x2597fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_259800:
    // 0x259800: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x259800u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_259804:
    // 0x259804: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x259804u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_259808:
    // 0x259808: 0x95080002  lhu         $t0, 0x2($t0)
    ctx->pc = 0x259808u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
label_25980c:
    // 0x25980c: 0xc34821  addu        $t1, $a2, $v1
    ctx->pc = 0x25980cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_259810:
    // 0x259810: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x259810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_259814:
    // 0x259814: 0x83100  sll         $a2, $t0, 4
    ctx->pc = 0x259814u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_259818:
    // 0x259818: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x259818u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_25981c:
    // 0x25981c: 0x94e60000  lhu         $a2, 0x0($a3)
    ctx->pc = 0x25981cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_259820:
    // 0x259820: 0xa5260000  sh          $a2, 0x0($t1)
    ctx->pc = 0x259820u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 6));
label_259824:
    // 0x259824: 0x94e60002  lhu         $a2, 0x2($a3)
    ctx->pc = 0x259824u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_259828:
    // 0x259828: 0xa5260002  sh          $a2, 0x2($t1)
    ctx->pc = 0x259828u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 2), (uint16_t)GPR_U32(ctx, 6));
label_25982c:
    // 0x25982c: 0x94e60004  lhu         $a2, 0x4($a3)
    ctx->pc = 0x25982cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
label_259830:
    // 0x259830: 0xa5260004  sh          $a2, 0x4($t1)
    ctx->pc = 0x259830u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 4), (uint16_t)GPR_U32(ctx, 6));
label_259834:
    // 0x259834: 0x94e60006  lhu         $a2, 0x6($a3)
    ctx->pc = 0x259834u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
label_259838:
    // 0x259838: 0xa5260006  sh          $a2, 0x6($t1)
    ctx->pc = 0x259838u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 6), (uint16_t)GPR_U32(ctx, 6));
label_25983c:
    // 0x25983c: 0x94e60008  lhu         $a2, 0x8($a3)
    ctx->pc = 0x25983cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
label_259840:
    // 0x259840: 0xa5260008  sh          $a2, 0x8($t1)
    ctx->pc = 0x259840u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 8), (uint16_t)GPR_U32(ctx, 6));
label_259844:
    // 0x259844: 0x94e6000a  lhu         $a2, 0xA($a3)
    ctx->pc = 0x259844u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_259848:
    // 0x259848: 0xa526000a  sh          $a2, 0xA($t1)
    ctx->pc = 0x259848u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 10), (uint16_t)GPR_U32(ctx, 6));
label_25984c:
    // 0x25984c: 0x8ce6000c  lw          $a2, 0xC($a3)
    ctx->pc = 0x25984cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_259850:
    // 0x259850: 0xad26000c  sw          $a2, 0xC($t1)
    ctx->pc = 0x259850u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 6));
label_259854:
    // 0x259854: 0x8e060074  lw          $a2, 0x74($s0)
    ctx->pc = 0x259854u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_259858:
    // 0x259858: 0xa6302a  slt         $a2, $a1, $a2
    ctx->pc = 0x259858u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_25985c:
    // 0x25985c: 0x14c0ffde  bnez        $a2, . + 4 + (-0x22 << 2)
label_259860:
    if (ctx->pc == 0x259860u) {
        ctx->pc = 0x259860u;
            // 0x259860: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->pc = 0x259864u;
        goto label_259864;
    }
    ctx->pc = 0x25985Cu;
    {
        const bool branch_taken_0x25985c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x259860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25985Cu;
            // 0x259860: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25985c) {
            ctx->pc = 0x2597D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2597d8;
        }
    }
    ctx->pc = 0x259864u;
label_259864:
    // 0x259864: 0x0  nop
    ctx->pc = 0x259864u;
    // NOP
label_259868:
    // 0x259868: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x259868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_25986c:
    // 0x25986c: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x25986cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_259870:
    // 0x259870: 0x14200015  bnez        $at, . + 4 + (0x15 << 2)
label_259874:
    if (ctx->pc == 0x259874u) {
        ctx->pc = 0x259874u;
            // 0x259874: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x259878u;
        goto label_259878;
    }
    ctx->pc = 0x259870u;
    {
        const bool branch_taken_0x259870 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x259874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259870u;
            // 0x259874: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259870) {
            ctx->pc = 0x2598C8u;
            goto label_2598c8;
        }
    }
    ctx->pc = 0x259878u;
label_259878:
    // 0x259878: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x259878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_25987c:
    // 0x25987c: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x25987cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_259880:
    // 0x259880: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x259880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_259884:
    // 0x259884: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x259884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_259888:
    // 0x259888: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x259888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_25988c:
    // 0x25988c: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x25988cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_259890:
    // 0x259890: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_259894:
    if (ctx->pc == 0x259894u) {
        ctx->pc = 0x259898u;
        goto label_259898;
    }
    ctx->pc = 0x259890u;
    {
        const bool branch_taken_0x259890 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x259890) {
            ctx->pc = 0x2598A0u;
            goto label_2598a0;
        }
    }
    ctx->pc = 0x259898u;
label_259898:
    // 0x259898: 0x10000005  b           . + 4 + (0x5 << 2)
label_25989c:
    if (ctx->pc == 0x25989Cu) {
        ctx->pc = 0x25989Cu;
            // 0x25989c: 0xac870000  sw          $a3, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
        ctx->pc = 0x2598A0u;
        goto label_2598a0;
    }
    ctx->pc = 0x259898u;
    {
        const bool branch_taken_0x259898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25989Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259898u;
            // 0x25989c: 0xac870000  sw          $a3, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259898) {
            ctx->pc = 0x2598B0u;
            goto label_2598b0;
        }
    }
    ctx->pc = 0x2598A0u;
label_2598a0:
    // 0x2598a0: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x2598a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_2598a4:
    // 0x2598a4: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x2598a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_2598a8:
    // 0x2598a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2598a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2598ac:
    // 0x2598ac: 0xa4670000  sh          $a3, 0x0($v1)
    ctx->pc = 0x2598acu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 7));
label_2598b0:
    // 0x2598b0: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x2598b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_2598b4:
    // 0x2598b4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2598b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2598b8:
    // 0x2598b8: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x2598b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2598bc:
    // 0x2598bc: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_2598c0:
    if (ctx->pc == 0x2598C0u) {
        ctx->pc = 0x2598C0u;
            // 0x2598c0: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->pc = 0x2598C4u;
        goto label_2598c4;
    }
    ctx->pc = 0x2598BCu;
    {
        const bool branch_taken_0x2598bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2598C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2598BCu;
            // 0x2598c0: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2598bc) {
            ctx->pc = 0x259880u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_259880;
        }
    }
    ctx->pc = 0x2598C4u;
label_2598c4:
    // 0x2598c4: 0x0  nop
    ctx->pc = 0x2598c4u;
    // NOP
label_2598c8:
    // 0x2598c8: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x2598c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_2598cc:
    // 0x2598cc: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2598ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2598d0:
    // 0x2598d0: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
label_2598d4:
    if (ctx->pc == 0x2598D4u) {
        ctx->pc = 0x2598D4u;
            // 0x2598d4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2598D8u;
        goto label_2598d8;
    }
    ctx->pc = 0x2598D0u;
    {
        const bool branch_taken_0x2598d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2598D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2598D0u;
            // 0x2598d4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2598d0) {
            ctx->pc = 0x259940u;
            goto label_259940;
        }
    }
    ctx->pc = 0x2598D8u;
label_2598d8:
    // 0x2598d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2598d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2598dc:
    // 0x2598dc: 0x0  nop
    ctx->pc = 0x2598dcu;
    // NOP
label_2598e0:
    // 0x2598e0: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x2598e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_2598e4:
    // 0x2598e4: 0x674821  addu        $t1, $v1, $a3
    ctx->pc = 0x2598e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2598e8:
    // 0x2598e8: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x2598e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_2598ec:
    // 0x2598ec: 0x2468ffff  addiu       $t0, $v1, -0x1
    ctx->pc = 0x2598ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2598f0:
    // 0x2598f0: 0x500000d  bltz        $t0, . + 4 + (0xD << 2)
label_2598f4:
    if (ctx->pc == 0x2598F4u) {
        ctx->pc = 0x2598F4u;
            // 0x2598f4: 0x83040  sll         $a2, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
        ctx->pc = 0x2598F8u;
        goto label_2598f8;
    }
    ctx->pc = 0x2598F0u;
    {
        const bool branch_taken_0x2598f0 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x2598F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2598F0u;
            // 0x2598f4: 0x83040  sll         $a2, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2598f0) {
            ctx->pc = 0x259928u;
            goto label_259928;
        }
    }
    ctx->pc = 0x2598F8u;
label_2598f8:
    // 0x2598f8: 0x8d240004  lw          $a0, 0x4($t1)
    ctx->pc = 0x2598f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_2598fc:
    // 0x2598fc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2598fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_259900:
    // 0x259900: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x259900u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_259904:
    // 0x259904: 0x862821  addu        $a1, $a0, $a2
    ctx->pc = 0x259904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_259908:
    // 0x259908: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x259908u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_25990c:
    // 0x25990c: 0x24c6fffe  addiu       $a2, $a2, -0x2
    ctx->pc = 0x25990cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
label_259910:
    // 0x259910: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x259910u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_259914:
    // 0x259914: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x259914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_259918:
    // 0x259918: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x259918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25991c:
    // 0x25991c: 0x501fff6  bgez        $t0, . + 4 + (-0xA << 2)
label_259920:
    if (ctx->pc == 0x259920u) {
        ctx->pc = 0x259920u;
            // 0x259920: 0xa4a30000  sh          $v1, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x259924u;
        goto label_259924;
    }
    ctx->pc = 0x25991Cu;
    {
        const bool branch_taken_0x25991c = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x259920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25991Cu;
            // 0x259920: 0xa4a30000  sh          $v1, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25991c) {
            ctx->pc = 0x2598F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2598f8;
        }
    }
    ctx->pc = 0x259924u;
label_259924:
    // 0x259924: 0x0  nop
    ctx->pc = 0x259924u;
    // NOP
label_259928:
    // 0x259928: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x259928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_25992c:
    // 0x25992c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x25992cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_259930:
    // 0x259930: 0x143182a  slt         $v1, $t2, $v1
    ctx->pc = 0x259930u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_259934:
    // 0x259934: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
label_259938:
    if (ctx->pc == 0x259938u) {
        ctx->pc = 0x259938u;
            // 0x259938: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->pc = 0x25993Cu;
        goto label_25993c;
    }
    ctx->pc = 0x259934u;
    {
        const bool branch_taken_0x259934 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x259938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259934u;
            // 0x259938: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259934) {
            ctx->pc = 0x2598E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2598e0;
        }
    }
    ctx->pc = 0x25993Cu;
label_25993c:
    // 0x25993c: 0x0  nop
    ctx->pc = 0x25993cu;
    // NOP
label_259940:
    // 0x259940: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x259940u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_259944:
    // 0x259944: 0x0  nop
    ctx->pc = 0x259944u;
    // NOP
label_259948:
    // 0x259948: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x259948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_25994c:
    // 0x25994c: 0x8e06007c  lw          $a2, 0x7C($s0)
    ctx->pc = 0x25994cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_259950:
    // 0x259950: 0x2607007c  addiu       $a3, $s0, 0x7C
    ctx->pc = 0x259950u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
label_259954:
    // 0x259954: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x259954u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_259958:
    // 0x259958: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_25995c:
    if (ctx->pc == 0x25995Cu) {
        ctx->pc = 0x25995Cu;
            // 0x25995c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x259960u;
        goto label_259960;
    }
    ctx->pc = 0x259958u;
    {
        const bool branch_taken_0x259958 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x25995Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259958u;
            // 0x25995c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259958) {
            ctx->pc = 0x259990u;
            goto label_259990;
        }
    }
    ctx->pc = 0x259960u;
label_259960:
    // 0x259960: 0x94c40002  lhu         $a0, 0x2($a2)
    ctx->pc = 0x259960u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_259964:
    // 0x259964: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x259964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_259968:
    // 0x259968: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x259968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_25996c:
    // 0x25996c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x25996cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_259970:
    // 0x259970: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x259970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_259974:
    // 0x259974: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x259974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_259978:
    // 0x259978: 0xa4c30002  sh          $v1, 0x2($a2)
    ctx->pc = 0x259978u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 3));
label_25997c:
    // 0x25997c: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x25997cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_259980:
    // 0x259980: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x259980u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_259984:
    // 0x259984: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_259988:
    if (ctx->pc == 0x259988u) {
        ctx->pc = 0x259988u;
            // 0x259988: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->pc = 0x25998Cu;
        goto label_25998c;
    }
    ctx->pc = 0x259984u;
    {
        const bool branch_taken_0x259984 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x259988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259984u;
            // 0x259988: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259984) {
            ctx->pc = 0x259960u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_259960;
        }
    }
    ctx->pc = 0x25998Cu;
label_25998c:
    // 0x25998c: 0x0  nop
    ctx->pc = 0x25998cu;
    // NOP
label_259990:
    // 0x259990: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x259990u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_259994:
    // 0x259994: 0x29030003  slti        $v1, $t0, 0x3
    ctx->pc = 0x259994u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
label_259998:
    // 0x259998: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
label_25999c:
    if (ctx->pc == 0x25999Cu) {
        ctx->pc = 0x25999Cu;
            // 0x25999c: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->pc = 0x2599A0u;
        goto label_2599a0;
    }
    ctx->pc = 0x259998u;
    {
        const bool branch_taken_0x259998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25999Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259998u;
            // 0x25999c: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259998) {
            ctx->pc = 0x259948u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_259948;
        }
    }
    ctx->pc = 0x2599A0u;
label_2599a0:
    // 0x2599a0: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x2599a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_2599a4:
    // 0x2599a4: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2599a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2599a8:
    // 0x2599a8: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x2599a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_2599ac:
    // 0x2599ac: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x2599acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_2599b0:
    // 0x2599b0: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2599b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2599b4:
    // 0x2599b4: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
label_2599b8:
    if (ctx->pc == 0x2599B8u) {
        ctx->pc = 0x2599BCu;
        goto label_2599bc;
    }
    ctx->pc = 0x2599B4u;
    {
        const bool branch_taken_0x2599b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2599b4) {
            ctx->pc = 0x2599D0u;
            goto label_2599d0;
        }
    }
    ctx->pc = 0x2599BCu;
label_2599bc:
    // 0x2599bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2599bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2599c0:
    // 0x2599c0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2599c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2599c4:
    // 0x2599c4: 0x320f809  jalr        $t9
label_2599c8:
    if (ctx->pc == 0x2599C8u) {
        ctx->pc = 0x2599CCu;
        goto label_2599cc;
    }
    ctx->pc = 0x2599C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2599CCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2599CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2599CCu; }
            if (ctx->pc != 0x2599CCu) { return; }
        }
        }
    }
    ctx->pc = 0x2599CCu;
label_2599cc:
    // 0x2599cc: 0x0  nop
    ctx->pc = 0x2599ccu;
    // NOP
label_2599d0:
    // 0x2599d0: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x2599d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_2599d4:
    // 0x2599d4: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x2599d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2599d8:
    // 0x2599d8: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x2599d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_2599dc:
    // 0x2599dc: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x2599dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_2599e0:
    // 0x2599e0: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2599e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2599e4:
    // 0x2599e4: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
label_2599e8:
    if (ctx->pc == 0x2599E8u) {
        ctx->pc = 0x2599ECu;
        goto label_2599ec;
    }
    ctx->pc = 0x2599E4u;
    {
        const bool branch_taken_0x2599e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2599e4) {
            ctx->pc = 0x259A00u;
            goto label_259a00;
        }
    }
    ctx->pc = 0x2599ECu;
label_2599ec:
    // 0x2599ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2599ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2599f0:
    // 0x2599f0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2599f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2599f4:
    // 0x2599f4: 0x320f809  jalr        $t9
label_2599f8:
    if (ctx->pc == 0x2599F8u) {
        ctx->pc = 0x2599FCu;
        goto label_2599fc;
    }
    ctx->pc = 0x2599F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2599FCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2599FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2599FCu; }
            if (ctx->pc != 0x2599FCu) { return; }
        }
        }
    }
    ctx->pc = 0x2599FCu;
label_2599fc:
    // 0x2599fc: 0x0  nop
    ctx->pc = 0x2599fcu;
    // NOP
label_259a00:
    // 0x259a00: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x259a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_259a04:
    // 0x259a04: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x259a04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_259a08:
    // 0x259a08: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x259a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_259a0c:
    // 0x259a0c: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x259a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_259a10:
    // 0x259a10: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x259a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_259a14:
    // 0x259a14: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
label_259a18:
    if (ctx->pc == 0x259A18u) {
        ctx->pc = 0x259A1Cu;
        goto label_259a1c;
    }
    ctx->pc = 0x259A14u;
    {
        const bool branch_taken_0x259a14 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x259a14) {
            ctx->pc = 0x259A30u;
            goto label_259a30;
        }
    }
    ctx->pc = 0x259A1Cu;
label_259a1c:
    // 0x259a1c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x259a1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_259a20:
    // 0x259a20: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x259a20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_259a24:
    // 0x259a24: 0x320f809  jalr        $t9
label_259a28:
    if (ctx->pc == 0x259A28u) {
        ctx->pc = 0x259A2Cu;
        goto label_259a2c;
    }
    ctx->pc = 0x259A24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x259A2Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x259A2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x259A2Cu; }
            if (ctx->pc != 0x259A2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x259A2Cu;
label_259a2c:
    // 0x259a2c: 0x0  nop
    ctx->pc = 0x259a2cu;
    // NOP
label_259a30:
    // 0x259a30: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x259a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_259a34:
    // 0x259a34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x259a34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_259a38:
    // 0x259a38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x259a38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_259a3c:
    // 0x259a3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x259a3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_259a40:
    // 0x259a40: 0x3e00008  jr          $ra
label_259a44:
    if (ctx->pc == 0x259A44u) {
        ctx->pc = 0x259A44u;
            // 0x259a44: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x259A48u;
        goto label_259a48;
    }
    ctx->pc = 0x259A40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259A40u;
            // 0x259a44: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x259A48u;
label_259a48:
    // 0x259a48: 0x0  nop
    ctx->pc = 0x259a48u;
    // NOP
label_259a4c:
    // 0x259a4c: 0x0  nop
    ctx->pc = 0x259a4cu;
    // NOP
label_259a50:
    // 0x259a50: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x259a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
label_259a54:
    // 0x259a54: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x259a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_259a58:
    // 0x259a58: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x259a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_259a5c:
    // 0x259a5c: 0x27aa0134  addiu       $t2, $sp, 0x134
    ctx->pc = 0x259a5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
label_259a60:
    // 0x259a60: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x259a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_259a64:
    // 0x259a64: 0x27a90138  addiu       $t1, $sp, 0x138
    ctx->pc = 0x259a64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_259a68:
    // 0x259a68: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x259a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_259a6c:
    // 0x259a6c: 0x27a3013c  addiu       $v1, $sp, 0x13C
    ctx->pc = 0x259a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
label_259a70:
    // 0x259a70: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x259a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_259a74:
    // 0x259a74: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x259a74u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_259a78:
    // 0x259a78: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x259a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_259a7c:
    // 0x259a7c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x259a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_259a80:
    // 0x259a80: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x259a80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_259a84:
    // 0x259a84: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x259a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_259a88:
    // 0x259a88: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x259a88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_259a8c:
    // 0x259a8c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x259a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_259a90:
    // 0x259a90: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x259a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_259a94:
    // 0x259a94: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x259a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_259a98:
    // 0x259a98: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x259a98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_259a9c:
    // 0x259a9c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x259a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_259aa0:
    // 0x259aa0: 0xc4800040  lwc1        $f0, 0x40($a0)
    ctx->pc = 0x259aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_259aa4:
    // 0x259aa4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x259aa4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_259aa8:
    // 0x259aa8: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x259aa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_259aac:
    // 0x259aac: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x259aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_259ab0:
    // 0x259ab0: 0xc4800044  lwc1        $f0, 0x44($a0)
    ctx->pc = 0x259ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_259ab4:
    // 0x259ab4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x259ab4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_259ab8:
    // 0x259ab8: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x259ab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
label_259abc:
    // 0x259abc: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x259abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_259ac0:
    // 0x259ac0: 0xc4800048  lwc1        $f0, 0x48($a0)
    ctx->pc = 0x259ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_259ac4:
    // 0x259ac4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x259ac4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_259ac8:
    // 0x259ac8: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x259ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
label_259acc:
    // 0x259acc: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x259accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_259ad0:
    // 0x259ad0: 0xc480004c  lwc1        $f0, 0x4C($a0)
    ctx->pc = 0x259ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_259ad4:
    // 0x259ad4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x259ad4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_259ad8:
    // 0x259ad8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x259ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_259adc:
    // 0x259adc: 0xc4810060  lwc1        $f1, 0x60($a0)
    ctx->pc = 0x259adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_259ae0:
    // 0x259ae0: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x259ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_259ae4:
    // 0x259ae4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x259ae4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_259ae8:
    // 0x259ae8: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x259ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_259aec:
    // 0x259aec: 0xc4810064  lwc1        $f1, 0x64($a0)
    ctx->pc = 0x259aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_259af0:
    // 0x259af0: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x259af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_259af4:
    // 0x259af4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x259af4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_259af8:
    // 0x259af8: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x259af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
label_259afc:
    // 0x259afc: 0xc4810068  lwc1        $f1, 0x68($a0)
    ctx->pc = 0x259afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_259b00:
    // 0x259b00: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x259b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_259b04:
    // 0x259b04: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x259b04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_259b08:
    // 0x259b08: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x259b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
label_259b0c:
    // 0x259b0c: 0xc481006c  lwc1        $f1, 0x6C($a0)
    ctx->pc = 0x259b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_259b10:
    // 0x259b10: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x259b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_259b14:
    // 0x259b14: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x259b14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_259b18:
    // 0x259b18: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x259b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_259b1c:
    // 0x259b1c: 0xc421cf90  lwc1        $f1, -0x3070($at)
    ctx->pc = 0x259b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294954896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_259b20:
    // 0x259b20: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x259b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_259b24:
    // 0x259b24: 0xc7a20130  lwc1        $f2, 0x130($sp)
    ctx->pc = 0x259b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_259b28:
    // 0x259b28: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x259b28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_259b2c:
    // 0x259b2c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_259b30:
    if (ctx->pc == 0x259B30u) {
        ctx->pc = 0x259B30u;
            // 0x259b30: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x259B34u;
        goto label_259b34;
    }
    ctx->pc = 0x259B2Cu;
    {
        const bool branch_taken_0x259b2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x259B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259B2Cu;
            // 0x259b30: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259b2c) {
            ctx->pc = 0x259B3Cu;
            goto label_259b3c;
        }
    }
    ctx->pc = 0x259B34u;
label_259b34:
    // 0x259b34: 0x10000002  b           . + 4 + (0x2 << 2)
label_259b38:
    if (ctx->pc == 0x259B38u) {
        ctx->pc = 0x259B3Cu;
        goto label_259b3c;
    }
    ctx->pc = 0x259B34u;
    {
        const bool branch_taken_0x259b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x259b34) {
            ctx->pc = 0x259B40u;
            goto label_259b40;
        }
    }
    ctx->pc = 0x259B3Cu;
label_259b3c:
    // 0x259b3c: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x259b3cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_259b40:
    // 0x259b40: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x259b40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_259b44:
    // 0x259b44: 0x27a60134  addiu       $a2, $sp, 0x134
    ctx->pc = 0x259b44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
label_259b48:
    // 0x259b48: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x259b48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_259b4c:
    // 0x259b4c: 0xc420cf94  lwc1        $f0, -0x306C($at)
    ctx->pc = 0x259b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294954900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_259b50:
    // 0x259b50: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x259b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_259b54:
    // 0x259b54: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x259b54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_259b58:
    // 0x259b58: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_259b5c:
    if (ctx->pc == 0x259B5Cu) {
        ctx->pc = 0x259B60u;
        goto label_259b60;
    }
    ctx->pc = 0x259B58u;
    {
        const bool branch_taken_0x259b58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x259b58) {
            ctx->pc = 0x259B68u;
            goto label_259b68;
        }
    }
    ctx->pc = 0x259B60u;
label_259b60:
    // 0x259b60: 0x10000003  b           . + 4 + (0x3 << 2)
label_259b64:
    if (ctx->pc == 0x259B64u) {
        ctx->pc = 0x259B64u;
            // 0x259b64: 0xe5410000  swc1        $f1, 0x0($t2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
        ctx->pc = 0x259B68u;
        goto label_259b68;
    }
    ctx->pc = 0x259B60u;
    {
        const bool branch_taken_0x259b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259B60u;
            // 0x259b64: 0xe5410000  swc1        $f1, 0x0($t2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x259b60) {
            ctx->pc = 0x259B70u;
            goto label_259b70;
        }
    }
    ctx->pc = 0x259B68u;
label_259b68:
    // 0x259b68: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x259b68u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_259b6c:
    // 0x259b6c: 0xe5410000  swc1        $f1, 0x0($t2)
    ctx->pc = 0x259b6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
label_259b70:
    // 0x259b70: 0x27a50138  addiu       $a1, $sp, 0x138
    ctx->pc = 0x259b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_259b74:
    // 0x259b74: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x259b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_259b78:
    // 0x259b78: 0xc420cf98  lwc1        $f0, -0x3068($at)
    ctx->pc = 0x259b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294954904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_259b7c:
    // 0x259b7c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x259b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_259b80:
    // 0x259b80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x259b80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_259b84:
    // 0x259b84: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_259b88:
    if (ctx->pc == 0x259B88u) {
        ctx->pc = 0x259B8Cu;
        goto label_259b8c;
    }
    ctx->pc = 0x259B84u;
    {
        const bool branch_taken_0x259b84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x259b84) {
            ctx->pc = 0x259B94u;
            goto label_259b94;
        }
    }
    ctx->pc = 0x259B8Cu;
label_259b8c:
    // 0x259b8c: 0x10000003  b           . + 4 + (0x3 << 2)
label_259b90:
    if (ctx->pc == 0x259B90u) {
        ctx->pc = 0x259B90u;
            // 0x259b90: 0xe5210000  swc1        $f1, 0x0($t1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
        ctx->pc = 0x259B94u;
        goto label_259b94;
    }
    ctx->pc = 0x259B8Cu;
    {
        const bool branch_taken_0x259b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259B8Cu;
            // 0x259b90: 0xe5210000  swc1        $f1, 0x0($t1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x259b8c) {
            ctx->pc = 0x259B9Cu;
            goto label_259b9c;
        }
    }
    ctx->pc = 0x259B94u;
label_259b94:
    // 0x259b94: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x259b94u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_259b98:
    // 0x259b98: 0xe5210000  swc1        $f1, 0x0($t1)
    ctx->pc = 0x259b98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
label_259b9c:
    // 0x259b9c: 0x27a4013c  addiu       $a0, $sp, 0x13C
    ctx->pc = 0x259b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
label_259ba0:
    // 0x259ba0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x259ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_259ba4:
    // 0x259ba4: 0xc420cf9c  lwc1        $f0, -0x3064($at)
    ctx->pc = 0x259ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294954908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_259ba8:
    // 0x259ba8: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x259ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_259bac:
    // 0x259bac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x259bacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_259bb0:
    // 0x259bb0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_259bb4:
    if (ctx->pc == 0x259BB4u) {
        ctx->pc = 0x259BB8u;
        goto label_259bb8;
    }
    ctx->pc = 0x259BB0u;
    {
        const bool branch_taken_0x259bb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x259bb0) {
            ctx->pc = 0x259BC0u;
            goto label_259bc0;
        }
    }
    ctx->pc = 0x259BB8u;
label_259bb8:
    // 0x259bb8: 0x10000003  b           . + 4 + (0x3 << 2)
label_259bbc:
    if (ctx->pc == 0x259BBCu) {
        ctx->pc = 0x259BBCu;
            // 0x259bbc: 0xe4610000  swc1        $f1, 0x0($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->pc = 0x259BC0u;
        goto label_259bc0;
    }
    ctx->pc = 0x259BB8u;
    {
        const bool branch_taken_0x259bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259BB8u;
            // 0x259bbc: 0xe4610000  swc1        $f1, 0x0($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x259bb8) {
            ctx->pc = 0x259BC8u;
            goto label_259bc8;
        }
    }
    ctx->pc = 0x259BC0u;
label_259bc0:
    // 0x259bc0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x259bc0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_259bc4:
    // 0x259bc4: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x259bc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_259bc8:
    // 0x259bc8: 0x3c010064  lui         $at, 0x64
    ctx->pc = 0x259bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
label_259bcc:
    // 0x259bcc: 0xc421f940  lwc1        $f1, -0x6C0($at)
    ctx->pc = 0x259bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_259bd0:
    // 0x259bd0: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x259bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_259bd4:
    // 0x259bd4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x259bd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_259bd8:
    // 0x259bd8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_259bdc:
    if (ctx->pc == 0x259BDCu) {
        ctx->pc = 0x259BDCu;
            // 0x259bdc: 0xc7a20130  lwc1        $f2, 0x130($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x259BE0u;
        goto label_259be0;
    }
    ctx->pc = 0x259BD8u;
    {
        const bool branch_taken_0x259bd8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x259BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259BD8u;
            // 0x259bdc: 0xc7a20130  lwc1        $f2, 0x130($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x259bd8) {
            ctx->pc = 0x259BE8u;
            goto label_259be8;
        }
    }
    ctx->pc = 0x259BE0u;
label_259be0:
    // 0x259be0: 0x10000003  b           . + 4 + (0x3 << 2)
label_259be4:
    if (ctx->pc == 0x259BE4u) {
        ctx->pc = 0x259BE4u;
            // 0x259be4: 0xe7a20130  swc1        $f2, 0x130($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
        ctx->pc = 0x259BE8u;
        goto label_259be8;
    }
    ctx->pc = 0x259BE0u;
    {
        const bool branch_taken_0x259be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259BE0u;
            // 0x259be4: 0xe7a20130  swc1        $f2, 0x130($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x259be0) {
            ctx->pc = 0x259BF0u;
            goto label_259bf0;
        }
    }
    ctx->pc = 0x259BE8u;
label_259be8:
    // 0x259be8: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x259be8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_259bec:
    // 0x259bec: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x259becu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_259bf0:
    // 0x259bf0: 0x3c010064  lui         $at, 0x64
    ctx->pc = 0x259bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
label_259bf4:
    // 0x259bf4: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x259bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_259bf8:
    // 0x259bf8: 0xc420f944  lwc1        $f0, -0x6BC($at)
    ctx->pc = 0x259bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_259bfc:
    // 0x259bfc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x259bfcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_259c00:
    // 0x259c00: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_259c04:
    if (ctx->pc == 0x259C04u) {
        ctx->pc = 0x259C08u;
        goto label_259c08;
    }
    ctx->pc = 0x259C00u;
    {
        const bool branch_taken_0x259c00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x259c00) {
            ctx->pc = 0x259C10u;
            goto label_259c10;
        }
    }
    ctx->pc = 0x259C08u;
label_259c08:
    // 0x259c08: 0x10000003  b           . + 4 + (0x3 << 2)
label_259c0c:
    if (ctx->pc == 0x259C0Cu) {
        ctx->pc = 0x259C0Cu;
            // 0x259c0c: 0xe5410000  swc1        $f1, 0x0($t2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
        ctx->pc = 0x259C10u;
        goto label_259c10;
    }
    ctx->pc = 0x259C08u;
    {
        const bool branch_taken_0x259c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259C08u;
            // 0x259c0c: 0xe5410000  swc1        $f1, 0x0($t2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x259c08) {
            ctx->pc = 0x259C18u;
            goto label_259c18;
        }
    }
    ctx->pc = 0x259C10u;
label_259c10:
    // 0x259c10: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x259c10u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_259c14:
    // 0x259c14: 0xe5410000  swc1        $f1, 0x0($t2)
    ctx->pc = 0x259c14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
label_259c18:
    // 0x259c18: 0x3c010064  lui         $at, 0x64
    ctx->pc = 0x259c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
label_259c1c:
    // 0x259c1c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x259c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_259c20:
    // 0x259c20: 0xc420f948  lwc1        $f0, -0x6B8($at)
    ctx->pc = 0x259c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_259c24:
    // 0x259c24: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x259c24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_259c28:
    // 0x259c28: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_259c2c:
    if (ctx->pc == 0x259C2Cu) {
        ctx->pc = 0x259C30u;
        goto label_259c30;
    }
    ctx->pc = 0x259C28u;
    {
        const bool branch_taken_0x259c28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x259c28) {
            ctx->pc = 0x259C38u;
            goto label_259c38;
        }
    }
    ctx->pc = 0x259C30u;
label_259c30:
    // 0x259c30: 0x10000003  b           . + 4 + (0x3 << 2)
label_259c34:
    if (ctx->pc == 0x259C34u) {
        ctx->pc = 0x259C34u;
            // 0x259c34: 0xe5210000  swc1        $f1, 0x0($t1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
        ctx->pc = 0x259C38u;
        goto label_259c38;
    }
    ctx->pc = 0x259C30u;
    {
        const bool branch_taken_0x259c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259C30u;
            // 0x259c34: 0xe5210000  swc1        $f1, 0x0($t1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x259c30) {
            ctx->pc = 0x259C40u;
            goto label_259c40;
        }
    }
    ctx->pc = 0x259C38u;
label_259c38:
    // 0x259c38: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x259c38u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_259c3c:
    // 0x259c3c: 0xe5210000  swc1        $f1, 0x0($t1)
    ctx->pc = 0x259c3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
label_259c40:
    // 0x259c40: 0x3c010064  lui         $at, 0x64
    ctx->pc = 0x259c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
label_259c44:
    // 0x259c44: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x259c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_259c48:
    // 0x259c48: 0xc420f94c  lwc1        $f0, -0x6B4($at)
    ctx->pc = 0x259c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_259c4c:
    // 0x259c4c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x259c4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_259c50:
    // 0x259c50: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_259c54:
    if (ctx->pc == 0x259C54u) {
        ctx->pc = 0x259C58u;
        goto label_259c58;
    }
    ctx->pc = 0x259C50u;
    {
        const bool branch_taken_0x259c50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x259c50) {
            ctx->pc = 0x259C60u;
            goto label_259c60;
        }
    }
    ctx->pc = 0x259C58u;
label_259c58:
    // 0x259c58: 0x10000003  b           . + 4 + (0x3 << 2)
label_259c5c:
    if (ctx->pc == 0x259C5Cu) {
        ctx->pc = 0x259C5Cu;
            // 0x259c5c: 0xe4610000  swc1        $f1, 0x0($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->pc = 0x259C60u;
        goto label_259c60;
    }
    ctx->pc = 0x259C58u;
    {
        const bool branch_taken_0x259c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259C58u;
            // 0x259c5c: 0xe4610000  swc1        $f1, 0x0($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x259c58) {
            ctx->pc = 0x259C68u;
            goto label_259c68;
        }
    }
    ctx->pc = 0x259C60u;
label_259c60:
    // 0x259c60: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x259c60u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_259c64:
    // 0x259c64: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x259c64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_259c68:
    // 0x259c68: 0x3c010064  lui         $at, 0x64
    ctx->pc = 0x259c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
label_259c6c:
    // 0x259c6c: 0xc420f900  lwc1        $f0, -0x700($at)
    ctx->pc = 0x259c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_259c70:
    // 0x259c70: 0x27ab0130  addiu       $t3, $sp, 0x130
    ctx->pc = 0x259c70u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_259c74:
    // 0x259c74: 0xc7a20130  lwc1        $f2, 0x130($sp)
    ctx->pc = 0x259c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_259c78:
    // 0x259c78: 0x27a80142  addiu       $t0, $sp, 0x142
    ctx->pc = 0x259c78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 322));
label_259c7c:
    // 0x259c7c: 0x27a70144  addiu       $a3, $sp, 0x144
    ctx->pc = 0x259c7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
label_259c80:
    // 0x259c80: 0x27a60146  addiu       $a2, $sp, 0x146
    ctx->pc = 0x259c80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 326));
label_259c84:
    // 0x259c84: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x259c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_259c88:
    // 0x259c88: 0x3c010064  lui         $at, 0x64
    ctx->pc = 0x259c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
label_259c8c:
    // 0x259c8c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x259c8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_259c90:
    // 0x259c90: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x259c90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_259c94:
    // 0x259c94: 0xc421f904  lwc1        $f1, -0x6FC($at)
    ctx->pc = 0x259c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_259c98:
    // 0x259c98: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x259c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_259c9c:
    // 0x259c9c: 0x3c010064  lui         $at, 0x64
    ctx->pc = 0x259c9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
label_259ca0:
    // 0x259ca0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x259ca0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_259ca4:
    // 0x259ca4: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x259ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
label_259ca8:
    // 0x259ca8: 0xc421f908  lwc1        $f1, -0x6F8($at)
    ctx->pc = 0x259ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_259cac:
    // 0x259cac: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x259cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_259cb0:
    // 0x259cb0: 0x3c010064  lui         $at, 0x64
    ctx->pc = 0x259cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
label_259cb4:
    // 0x259cb4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x259cb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_259cb8:
    // 0x259cb8: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x259cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
label_259cbc:
    // 0x259cbc: 0xc421f90c  lwc1        $f1, -0x6F4($at)
    ctx->pc = 0x259cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_259cc0:
    // 0x259cc0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x259cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_259cc4:
    // 0x259cc4: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x259cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_259cc8:
    // 0x259cc8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x259cc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_259ccc:
    // 0x259ccc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x259cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_259cd0:
    // 0x259cd0: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x259cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_259cd4:
    // 0x259cd4: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x259cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_259cd8:
    // 0x259cd8: 0xc5600004  lwc1        $f0, 0x4($t3)
    ctx->pc = 0x259cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_259cdc:
    // 0x259cdc: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x259cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_259ce0:
    // 0x259ce0: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x259ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_259ce4:
    // 0x259ce4: 0x321c2  srl         $a0, $v1, 7
    ctx->pc = 0x259ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
label_259ce8:
    // 0x259ce8: 0xc5600008  lwc1        $f0, 0x8($t3)
    ctx->pc = 0x259ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_259cec:
    // 0x259cec: 0x8fa30124  lw          $v1, 0x124($sp)
    ctx->pc = 0x259cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_259cf0:
    // 0x259cf0: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x259cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_259cf4:
    // 0x259cf4: 0x319c2  srl         $v1, $v1, 7
    ctx->pc = 0x259cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
label_259cf8:
    // 0x259cf8: 0xc560000c  lwc1        $f0, 0xC($t3)
    ctx->pc = 0x259cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_259cfc:
    // 0x259cfc: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x259cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_259d00:
    // 0x259d00: 0xa7a40140  sh          $a0, 0x140($sp)
    ctx->pc = 0x259d00u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 320), (uint16_t)GPR_U32(ctx, 4));
label_259d04:
    // 0x259d04: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x259d04u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
label_259d08:
    // 0x259d08: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x259d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_259d0c:
    // 0x259d0c: 0x319c2  srl         $v1, $v1, 7
    ctx->pc = 0x259d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
label_259d10:
    // 0x259d10: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x259d10u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
label_259d14:
    // 0x259d14: 0x8fa3012c  lw          $v1, 0x12C($sp)
    ctx->pc = 0x259d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_259d18:
    // 0x259d18: 0x319c2  srl         $v1, $v1, 7
    ctx->pc = 0x259d18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
label_259d1c:
    // 0x259d1c: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x259d1cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
label_259d20:
    // 0x259d20: 0x97a30140  lhu         $v1, 0x140($sp)
    ctx->pc = 0x259d20u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 320)));
label_259d24:
    // 0x259d24: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x259d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_259d28:
    // 0x259d28: 0xafa30190  sw          $v1, 0x190($sp)
    ctx->pc = 0x259d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 3));
label_259d2c:
    // 0x259d2c: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x259d2cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_259d30:
    // 0x259d30: 0xafa30194  sw          $v1, 0x194($sp)
    ctx->pc = 0x259d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 3));
label_259d34:
    // 0x259d34: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x259d34u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_259d38:
    // 0x259d38: 0xafa30198  sw          $v1, 0x198($sp)
    ctx->pc = 0x259d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 3));
label_259d3c:
    // 0x259d3c: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x259d3cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_259d40:
    // 0x259d40: 0xafa3019c  sw          $v1, 0x19C($sp)
    ctx->pc = 0x259d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 3));
label_259d44:
    // 0x259d44: 0x8fc60074  lw          $a2, 0x74($fp)
    ctx->pc = 0x259d44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 116)));
label_259d48:
    // 0x259d48: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x259d48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_259d4c:
    // 0x259d4c: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x259d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_259d50:
    // 0x259d50: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x259d50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_259d54:
    // 0x259d54: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x259d54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_259d58:
    // 0x259d58: 0xe53021  addu        $a2, $a3, $a1
    ctx->pc = 0x259d58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_259d5c:
    // 0x259d5c: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x259d5cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_259d60:
    // 0x259d60: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_259d64:
    if (ctx->pc == 0x259D64u) {
        ctx->pc = 0x259D68u;
        goto label_259d68;
    }
    ctx->pc = 0x259D60u;
    {
        const bool branch_taken_0x259d60 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x259d60) {
            ctx->pc = 0x259D70u;
            goto label_259d70;
        }
    }
    ctx->pc = 0x259D68u;
label_259d68:
    // 0x259d68: 0x10000007  b           . + 4 + (0x7 << 2)
label_259d6c:
    if (ctx->pc == 0x259D6Cu) {
        ctx->pc = 0x259D6Cu;
            // 0x259d6c: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x259D70u;
        goto label_259d70;
    }
    ctx->pc = 0x259D68u;
    {
        const bool branch_taken_0x259d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259D68u;
            // 0x259d6c: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259d68) {
            ctx->pc = 0x259D88u;
            goto label_259d88;
        }
    }
    ctx->pc = 0x259D70u;
label_259d70:
    // 0x259d70: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x259d70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_259d74:
    // 0x259d74: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x259d74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_259d78:
    // 0x259d78: 0x320f809  jalr        $t9
label_259d7c:
    if (ctx->pc == 0x259D7Cu) {
        ctx->pc = 0x259D80u;
        goto label_259d80;
    }
    ctx->pc = 0x259D78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x259D80u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x259D80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x259D80u; }
            if (ctx->pc != 0x259D80u) { return; }
        }
        }
    }
    ctx->pc = 0x259D80u;
label_259d80:
    // 0x259d80: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x259d80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_259d84:
    // 0x259d84: 0x0  nop
    ctx->pc = 0x259d84u;
    // NOP
label_259d88:
    // 0x259d88: 0xafa701e8  sw          $a3, 0x1E8($sp)
    ctx->pc = 0x259d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 7));
label_259d8c:
    // 0x259d8c: 0x8fc50074  lw          $a1, 0x74($fp)
    ctx->pc = 0x259d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 116)));
label_259d90:
    // 0x259d90: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x259d90u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
label_259d94:
    // 0x259d94: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_259d98:
    if (ctx->pc == 0x259D98u) {
        ctx->pc = 0x259D98u;
            // 0x259d98: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->pc = 0x259D9Cu;
        goto label_259d9c;
    }
    ctx->pc = 0x259D94u;
    {
        const bool branch_taken_0x259d94 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x259D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259D94u;
            // 0x259d98: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259d94) {
            ctx->pc = 0x259DC0u;
            goto label_259dc0;
        }
    }
    ctx->pc = 0x259D9Cu;
label_259d9c:
    // 0x259d9c: 0x0  nop
    ctx->pc = 0x259d9cu;
    // NOP
label_259da0:
    // 0x259da0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x259da0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_259da4:
    // 0x259da4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x259da4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_259da8:
    // 0x259da8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x259da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_259dac:
    // 0x259dac: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x259dacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_259db0:
    // 0x259db0: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x259db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_259db4:
    // 0x259db4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x259db4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_259db8:
    // 0x259db8: 0x4a1fff9  bgez        $a1, . + 4 + (-0x7 << 2)
label_259dbc:
    if (ctx->pc == 0x259DBCu) {
        ctx->pc = 0x259DBCu;
            // 0x259dbc: 0xac60000c  sw          $zero, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x259DC0u;
        goto label_259dc0;
    }
    ctx->pc = 0x259DB8u;
    {
        const bool branch_taken_0x259db8 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x259DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259DB8u;
            // 0x259dbc: 0xac60000c  sw          $zero, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259db8) {
            ctx->pc = 0x259DA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_259da0;
        }
    }
    ctx->pc = 0x259DC0u;
label_259dc0:
    // 0x259dc0: 0x8ea7001c  lw          $a3, 0x1C($s5)
    ctx->pc = 0x259dc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
label_259dc4:
    // 0x259dc4: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
label_259dc8:
    if (ctx->pc == 0x259DC8u) {
        ctx->pc = 0x259DCCu;
        goto label_259dcc;
    }
    ctx->pc = 0x259DC4u;
    {
        const bool branch_taken_0x259dc4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x259dc4) {
            ctx->pc = 0x259DD4u;
            goto label_259dd4;
        }
    }
    ctx->pc = 0x259DCCu;
label_259dcc:
    // 0x259dcc: 0x10000003  b           . + 4 + (0x3 << 2)
label_259dd0:
    if (ctx->pc == 0x259DD0u) {
        ctx->pc = 0x259DD0u;
            // 0x259dd0: 0x8fac01e8  lw          $t4, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->pc = 0x259DD4u;
        goto label_259dd4;
    }
    ctx->pc = 0x259DCCu;
    {
        const bool branch_taken_0x259dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259DCCu;
            // 0x259dd0: 0x8fac01e8  lw          $t4, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259dcc) {
            ctx->pc = 0x259DDCu;
            goto label_259ddc;
        }
    }
    ctx->pc = 0x259DD4u;
label_259dd4:
    // 0x259dd4: 0x27c7007c  addiu       $a3, $fp, 0x7C
    ctx->pc = 0x259dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 124));
label_259dd8:
    // 0x259dd8: 0x8fac01e8  lw          $t4, 0x1E8($sp)
    ctx->pc = 0x259dd8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_259ddc:
    // 0x259ddc: 0x240b0011  addiu       $t3, $zero, 0x11
    ctx->pc = 0x259ddcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_259de0:
    // 0x259de0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x259de0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_259de4:
    // 0x259de4: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x259de4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_259de8:
    // 0x259de8: 0x27a501d8  addiu       $a1, $sp, 0x1D8
    ctx->pc = 0x259de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
label_259dec:
    // 0x259dec: 0x0  nop
    ctx->pc = 0x259decu;
    // NOP
label_259df0:
    // 0x259df0: 0x8ce90004  lw          $t1, 0x4($a3)
    ctx->pc = 0x259df0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_259df4:
    // 0x259df4: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x259df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_259df8:
    // 0x259df8: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x259df8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_259dfc:
    // 0x259dfc: 0x91843  sra         $v1, $t1, 1
    ctx->pc = 0x259dfcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 9), 1));
label_259e00:
    // 0x259e00: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x259e00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_259e04:
    // 0x259e04: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x259e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_259e08:
    // 0x259e08: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x259e08u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_259e0c:
    // 0x259e0c: 0x103082b  sltu        $at, $t0, $v1
    ctx->pc = 0x259e0cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_259e10:
    // 0x259e10: 0x10200039  beqz        $at, . + 4 + (0x39 << 2)
label_259e14:
    if (ctx->pc == 0x259E14u) {
        ctx->pc = 0x259E14u;
            // 0x259e14: 0x2523fffc  addiu       $v1, $t1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
        ctx->pc = 0x259E18u;
        goto label_259e18;
    }
    ctx->pc = 0x259E10u;
    {
        const bool branch_taken_0x259e10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x259E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259E10u;
            // 0x259e14: 0x2523fffc  addiu       $v1, $t1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259e10) {
            ctx->pc = 0x259EF8u;
            goto label_259ef8;
        }
    }
    ctx->pc = 0x259E18u;
label_259e18:
    // 0x259e18: 0x34080  sll         $t0, $v1, 2
    ctx->pc = 0x259e18u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_259e1c:
    // 0x259e1c: 0x24890004  addiu       $t1, $a0, 0x4
    ctx->pc = 0x259e1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_259e20:
    // 0x259e20: 0x316300ff  andi        $v1, $t3, 0xFF
    ctx->pc = 0x259e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
label_259e24:
    // 0x259e24: 0x10000018  b           . + 4 + (0x18 << 2)
label_259e28:
    if (ctx->pc == 0x259E28u) {
        ctx->pc = 0x259E28u;
            // 0x259e28: 0x882021  addu        $a0, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->pc = 0x259E2Cu;
        goto label_259e2c;
    }
    ctx->pc = 0x259E24u;
    {
        const bool branch_taken_0x259e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259E24u;
            // 0x259e28: 0x882021  addu        $a0, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259e24) {
            ctx->pc = 0x259E88u;
            goto label_259e88;
        }
    }
    ctx->pc = 0x259E2Cu;
label_259e2c:
    // 0x259e2c: 0x0  nop
    ctx->pc = 0x259e2cu;
    // NOP
label_259e30:
    // 0x259e30: 0x95280002  lhu         $t0, 0x2($t1)
    ctx->pc = 0x259e30u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
label_259e34:
    // 0x259e34: 0x1886821  addu        $t5, $t4, $t0
    ctx->pc = 0x259e34u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
label_259e38:
    // 0x259e38: 0x91a80000  lbu         $t0, 0x0($t5)
    ctx->pc = 0x259e38u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
label_259e3c:
    // 0x259e3c: 0x1034026  xor         $t0, $t0, $v1
    ctx->pc = 0x259e3cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 3));
label_259e40:
    // 0x259e40: 0xa1a80000  sb          $t0, 0x0($t5)
    ctx->pc = 0x259e40u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 8));
label_259e44:
    // 0x259e44: 0x95280006  lhu         $t0, 0x6($t1)
    ctx->pc = 0x259e44u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 6)));
label_259e48:
    // 0x259e48: 0x1886821  addu        $t5, $t4, $t0
    ctx->pc = 0x259e48u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
label_259e4c:
    // 0x259e4c: 0x91a80000  lbu         $t0, 0x0($t5)
    ctx->pc = 0x259e4cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
label_259e50:
    // 0x259e50: 0x1034026  xor         $t0, $t0, $v1
    ctx->pc = 0x259e50u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 3));
label_259e54:
    // 0x259e54: 0xa1a80000  sb          $t0, 0x0($t5)
    ctx->pc = 0x259e54u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 8));
label_259e58:
    // 0x259e58: 0x9528000a  lhu         $t0, 0xA($t1)
    ctx->pc = 0x259e58u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 10)));
label_259e5c:
    // 0x259e5c: 0x1886821  addu        $t5, $t4, $t0
    ctx->pc = 0x259e5cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
label_259e60:
    // 0x259e60: 0x91a80000  lbu         $t0, 0x0($t5)
    ctx->pc = 0x259e60u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
label_259e64:
    // 0x259e64: 0x1034026  xor         $t0, $t0, $v1
    ctx->pc = 0x259e64u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 3));
label_259e68:
    // 0x259e68: 0xa1a80000  sb          $t0, 0x0($t5)
    ctx->pc = 0x259e68u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 8));
label_259e6c:
    // 0x259e6c: 0x9528000e  lhu         $t0, 0xE($t1)
    ctx->pc = 0x259e6cu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 14)));
label_259e70:
    // 0x259e70: 0x1886821  addu        $t5, $t4, $t0
    ctx->pc = 0x259e70u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
label_259e74:
    // 0x259e74: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x259e74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_259e78:
    // 0x259e78: 0x91a80000  lbu         $t0, 0x0($t5)
    ctx->pc = 0x259e78u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
label_259e7c:
    // 0x259e7c: 0x1034026  xor         $t0, $t0, $v1
    ctx->pc = 0x259e7cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 3));
label_259e80:
    // 0x259e80: 0xa1a80000  sb          $t0, 0x0($t5)
    ctx->pc = 0x259e80u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 8));
label_259e84:
    // 0x259e84: 0x0  nop
    ctx->pc = 0x259e84u;
    // NOP
label_259e88:
    // 0x259e88: 0x124402b  sltu        $t0, $t1, $a0
    ctx->pc = 0x259e88u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_259e8c:
    // 0x259e8c: 0x39080001  xori        $t0, $t0, 0x1
    ctx->pc = 0x259e8cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)1);
label_259e90:
    // 0x259e90: 0x15000011  bnez        $t0, . + 4 + (0x11 << 2)
label_259e94:
    if (ctx->pc == 0x259E94u) {
        ctx->pc = 0x259E98u;
        goto label_259e98;
    }
    ctx->pc = 0x259E90u;
    {
        const bool branch_taken_0x259e90 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x259e90) {
            ctx->pc = 0x259ED8u;
            goto label_259ed8;
        }
    }
    ctx->pc = 0x259E98u;
label_259e98:
    // 0x259e98: 0x952d000c  lhu         $t5, 0xC($t1)
    ctx->pc = 0x259e98u;
    SET_GPR_U32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 12)));
label_259e9c:
    // 0x259e9c: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x259e9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_259ea0:
    // 0x259ea0: 0x10d082b  sltu        $at, $t0, $t5
    ctx->pc = 0x259ea0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
label_259ea4:
    // 0x259ea4: 0x1020ffe2  beqz        $at, . + 4 + (-0x1E << 2)
label_259ea8:
    if (ctx->pc == 0x259EA8u) {
        ctx->pc = 0x259EACu;
        goto label_259eac;
    }
    ctx->pc = 0x259EA4u;
    {
        const bool branch_taken_0x259ea4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x259ea4) {
            ctx->pc = 0x259E30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_259e30;
        }
    }
    ctx->pc = 0x259EACu;
label_259eac:
    // 0x259eac: 0x1000000a  b           . + 4 + (0xA << 2)
label_259eb0:
    if (ctx->pc == 0x259EB0u) {
        ctx->pc = 0x259EB4u;
        goto label_259eb4;
    }
    ctx->pc = 0x259EACu;
    {
        const bool branch_taken_0x259eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x259eac) {
            ctx->pc = 0x259ED8u;
            goto label_259ed8;
        }
    }
    ctx->pc = 0x259EB4u;
label_259eb4:
    // 0x259eb4: 0x0  nop
    ctx->pc = 0x259eb4u;
    // NOP
label_259eb8:
    // 0x259eb8: 0x95230002  lhu         $v1, 0x2($t1)
    ctx->pc = 0x259eb8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
label_259ebc:
    // 0x259ebc: 0x316400ff  andi        $a0, $t3, 0xFF
    ctx->pc = 0x259ebcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
label_259ec0:
    // 0x259ec0: 0x1834021  addu        $t0, $t4, $v1
    ctx->pc = 0x259ec0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
label_259ec4:
    // 0x259ec4: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x259ec4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_259ec8:
    // 0x259ec8: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x259ec8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_259ecc:
    // 0x259ecc: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x259eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
label_259ed0:
    // 0x259ed0: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x259ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
label_259ed4:
    // 0x259ed4: 0x0  nop
    ctx->pc = 0x259ed4u;
    // NOP
label_259ed8:
    // 0x259ed8: 0x95240000  lhu         $a0, 0x0($t1)
    ctx->pc = 0x259ed8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_259edc:
    // 0x259edc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x259edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_259ee0:
    // 0x259ee0: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x259ee0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_259ee4:
    // 0x259ee4: 0x1020fff4  beqz        $at, . + 4 + (-0xC << 2)
label_259ee8:
    if (ctx->pc == 0x259EE8u) {
        ctx->pc = 0x259EECu;
        goto label_259eec;
    }
    ctx->pc = 0x259EE4u;
    {
        const bool branch_taken_0x259ee4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x259ee4) {
            ctx->pc = 0x259EB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_259eb8;
        }
    }
    ctx->pc = 0x259EECu;
label_259eec:
    // 0x259eec: 0x10000038  b           . + 4 + (0x38 << 2)
label_259ef0:
    if (ctx->pc == 0x259EF0u) {
        ctx->pc = 0x259EF4u;
        goto label_259ef4;
    }
    ctx->pc = 0x259EECu;
    {
        const bool branch_taken_0x259eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x259eec) {
            ctx->pc = 0x259FD0u;
            goto label_259fd0;
        }
    }
    ctx->pc = 0x259EF4u;
label_259ef4:
    // 0x259ef4: 0x0  nop
    ctx->pc = 0x259ef4u;
    // NOP
label_259ef8:
    // 0x259ef8: 0x2523fffe  addiu       $v1, $t1, -0x2
    ctx->pc = 0x259ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967294));
label_259efc:
    // 0x259efc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x259efcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_259f00:
    // 0x259f00: 0x24880010  addiu       $t0, $a0, 0x10
    ctx->pc = 0x259f00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_259f04:
    // 0x259f04: 0x834821  addu        $t1, $a0, $v1
    ctx->pc = 0x259f04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_259f08:
    // 0x259f08: 0x10000017  b           . + 4 + (0x17 << 2)
label_259f0c:
    if (ctx->pc == 0x259F0Cu) {
        ctx->pc = 0x259F0Cu;
            // 0x259f0c: 0x316300ff  andi        $v1, $t3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x259F10u;
        goto label_259f10;
    }
    ctx->pc = 0x259F08u;
    {
        const bool branch_taken_0x259f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259F08u;
            // 0x259f0c: 0x316300ff  andi        $v1, $t3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x259f08) {
            ctx->pc = 0x259F68u;
            goto label_259f68;
        }
    }
    ctx->pc = 0x259F10u;
label_259f10:
    // 0x259f10: 0x95240002  lhu         $a0, 0x2($t1)
    ctx->pc = 0x259f10u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
label_259f14:
    // 0x259f14: 0x1846821  addu        $t5, $t4, $a0
    ctx->pc = 0x259f14u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
label_259f18:
    // 0x259f18: 0x91a40000  lbu         $a0, 0x0($t5)
    ctx->pc = 0x259f18u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
label_259f1c:
    // 0x259f1c: 0x832026  xor         $a0, $a0, $v1
    ctx->pc = 0x259f1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
label_259f20:
    // 0x259f20: 0xa1a40000  sb          $a0, 0x0($t5)
    ctx->pc = 0x259f20u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 4));
label_259f24:
    // 0x259f24: 0x9524fffe  lhu         $a0, -0x2($t1)
    ctx->pc = 0x259f24u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4294967294)));
label_259f28:
    // 0x259f28: 0x1846821  addu        $t5, $t4, $a0
    ctx->pc = 0x259f28u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
label_259f2c:
    // 0x259f2c: 0x91a40000  lbu         $a0, 0x0($t5)
    ctx->pc = 0x259f2cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
label_259f30:
    // 0x259f30: 0x832026  xor         $a0, $a0, $v1
    ctx->pc = 0x259f30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
label_259f34:
    // 0x259f34: 0xa1a40000  sb          $a0, 0x0($t5)
    ctx->pc = 0x259f34u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 4));
label_259f38:
    // 0x259f38: 0x9524fffa  lhu         $a0, -0x6($t1)
    ctx->pc = 0x259f38u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4294967290)));
label_259f3c:
    // 0x259f3c: 0x1846821  addu        $t5, $t4, $a0
    ctx->pc = 0x259f3cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
label_259f40:
    // 0x259f40: 0x91a40000  lbu         $a0, 0x0($t5)
    ctx->pc = 0x259f40u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
label_259f44:
    // 0x259f44: 0x832026  xor         $a0, $a0, $v1
    ctx->pc = 0x259f44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
label_259f48:
    // 0x259f48: 0xa1a40000  sb          $a0, 0x0($t5)
    ctx->pc = 0x259f48u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 4));
label_259f4c:
    // 0x259f4c: 0x9524fff6  lhu         $a0, -0xA($t1)
    ctx->pc = 0x259f4cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4294967286)));
label_259f50:
    // 0x259f50: 0x1846821  addu        $t5, $t4, $a0
    ctx->pc = 0x259f50u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
label_259f54:
    // 0x259f54: 0x2529fff0  addiu       $t1, $t1, -0x10
    ctx->pc = 0x259f54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967280));
label_259f58:
    // 0x259f58: 0x91a40000  lbu         $a0, 0x0($t5)
    ctx->pc = 0x259f58u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
label_259f5c:
    // 0x259f5c: 0x832026  xor         $a0, $a0, $v1
    ctx->pc = 0x259f5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
label_259f60:
    // 0x259f60: 0xa1a40000  sb          $a0, 0x0($t5)
    ctx->pc = 0x259f60u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 4));
label_259f64:
    // 0x259f64: 0x0  nop
    ctx->pc = 0x259f64u;
    // NOP
label_259f68:
    // 0x259f68: 0x128202b  sltu        $a0, $t1, $t0
    ctx->pc = 0x259f68u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_259f6c:
    // 0x259f6c: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x259f6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_259f70:
    // 0x259f70: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x259f70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_259f74:
    // 0x259f74: 0x14800010  bnez        $a0, . + 4 + (0x10 << 2)
label_259f78:
    if (ctx->pc == 0x259F78u) {
        ctx->pc = 0x259F7Cu;
        goto label_259f7c;
    }
    ctx->pc = 0x259F74u;
    {
        const bool branch_taken_0x259f74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x259f74) {
            ctx->pc = 0x259FB8u;
            goto label_259fb8;
        }
    }
    ctx->pc = 0x259F7Cu;
label_259f7c:
    // 0x259f7c: 0x952dfff4  lhu         $t5, -0xC($t1)
    ctx->pc = 0x259f7cu;
    SET_GPR_U32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4294967284)));
label_259f80:
    // 0x259f80: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x259f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_259f84:
    // 0x259f84: 0x8d082b  sltu        $at, $a0, $t5
    ctx->pc = 0x259f84u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
label_259f88:
    // 0x259f88: 0x1420ffe1  bnez        $at, . + 4 + (-0x1F << 2)
label_259f8c:
    if (ctx->pc == 0x259F8Cu) {
        ctx->pc = 0x259F90u;
        goto label_259f90;
    }
    ctx->pc = 0x259F88u;
    {
        const bool branch_taken_0x259f88 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x259f88) {
            ctx->pc = 0x259F10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_259f10;
        }
    }
    ctx->pc = 0x259F90u;
label_259f90:
    // 0x259f90: 0x10000009  b           . + 4 + (0x9 << 2)
label_259f94:
    if (ctx->pc == 0x259F94u) {
        ctx->pc = 0x259F98u;
        goto label_259f98;
    }
    ctx->pc = 0x259F90u;
    {
        const bool branch_taken_0x259f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x259f90) {
            ctx->pc = 0x259FB8u;
            goto label_259fb8;
        }
    }
    ctx->pc = 0x259F98u;
label_259f98:
    // 0x259f98: 0x95230002  lhu         $v1, 0x2($t1)
    ctx->pc = 0x259f98u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
label_259f9c:
    // 0x259f9c: 0x316400ff  andi        $a0, $t3, 0xFF
    ctx->pc = 0x259f9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
label_259fa0:
    // 0x259fa0: 0x1834021  addu        $t0, $t4, $v1
    ctx->pc = 0x259fa0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
label_259fa4:
    // 0x259fa4: 0x2529fffc  addiu       $t1, $t1, -0x4
    ctx->pc = 0x259fa4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
label_259fa8:
    // 0x259fa8: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x259fa8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_259fac:
    // 0x259fac: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x259facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
label_259fb0:
    // 0x259fb0: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x259fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
label_259fb4:
    // 0x259fb4: 0x0  nop
    ctx->pc = 0x259fb4u;
    // NOP
label_259fb8:
    // 0x259fb8: 0x95240000  lhu         $a0, 0x0($t1)
    ctx->pc = 0x259fb8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_259fbc:
    // 0x259fbc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x259fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_259fc0:
    // 0x259fc0: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x259fc0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_259fc4:
    // 0x259fc4: 0x1420fff4  bnez        $at, . + 4 + (-0xC << 2)
label_259fc8:
    if (ctx->pc == 0x259FC8u) {
        ctx->pc = 0x259FCCu;
        goto label_259fcc;
    }
    ctx->pc = 0x259FC4u;
    {
        const bool branch_taken_0x259fc4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x259fc4) {
            ctx->pc = 0x259F98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_259f98;
        }
    }
    ctx->pc = 0x259FCCu;
label_259fcc:
    // 0x259fcc: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x259fccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_259fd0:
    // 0x259fd0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x259fd0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_259fd4:
    // 0x259fd4: 0xaca90000  sw          $t1, 0x0($a1)
    ctx->pc = 0x259fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 9));
label_259fd8:
    // 0x259fd8: 0x29430003  slti        $v1, $t2, 0x3
    ctx->pc = 0x259fd8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)3) ? 1 : 0);
label_259fdc:
    // 0x259fdc: 0xb5840  sll         $t3, $t3, 1
    ctx->pc = 0x259fdcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
label_259fe0:
    // 0x259fe0: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x259fe0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
label_259fe4:
    // 0x259fe4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x259fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_259fe8:
    // 0x259fe8: 0x1460ff81  bnez        $v1, . + 4 + (-0x7F << 2)
label_259fec:
    if (ctx->pc == 0x259FECu) {
        ctx->pc = 0x259FECu;
            // 0x259fec: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x259FF0u;
        goto label_259ff0;
    }
    ctx->pc = 0x259FE8u;
    {
        const bool branch_taken_0x259fe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x259FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259FE8u;
            // 0x259fec: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259fe8) {
            ctx->pc = 0x259DF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_259df0;
        }
    }
    ctx->pc = 0x259FF0u;
label_259ff0:
    // 0x259ff0: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x259ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_259ff4:
    // 0x259ff4: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x259ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_259ff8:
    // 0x259ff8: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x259ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_259ffc:
    // 0x259ffc: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x259ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_25a000:
    // 0x25a000: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x25a000u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_25a004:
    // 0x25a004: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x25a004u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_25a008:
    // 0x25a008: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x25a008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_25a00c:
    // 0x25a00c: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x25a00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_25a010:
    // 0x25a010: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x25a010u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_25a014:
    // 0x25a014: 0xe53021  addu        $a2, $a3, $a1
    ctx->pc = 0x25a014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_25a018:
    // 0x25a018: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x25a018u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_25a01c:
    // 0x25a01c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_25a020:
    if (ctx->pc == 0x25A020u) {
        ctx->pc = 0x25A024u;
        goto label_25a024;
    }
    ctx->pc = 0x25A01Cu;
    {
        const bool branch_taken_0x25a01c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a01c) {
            ctx->pc = 0x25A030u;
            goto label_25a030;
        }
    }
    ctx->pc = 0x25A024u;
label_25a024:
    // 0x25a024: 0x10000008  b           . + 4 + (0x8 << 2)
label_25a028:
    if (ctx->pc == 0x25A028u) {
        ctx->pc = 0x25A028u;
            // 0x25a028: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x25A02Cu;
        goto label_25a02c;
    }
    ctx->pc = 0x25A024u;
    {
        const bool branch_taken_0x25a024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A024u;
            // 0x25a028: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a024) {
            ctx->pc = 0x25A048u;
            goto label_25a048;
        }
    }
    ctx->pc = 0x25A02Cu;
label_25a02c:
    // 0x25a02c: 0x0  nop
    ctx->pc = 0x25a02cu;
    // NOP
label_25a030:
    // 0x25a030: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25a030u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25a034:
    // 0x25a034: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x25a034u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_25a038:
    // 0x25a038: 0x320f809  jalr        $t9
label_25a03c:
    if (ctx->pc == 0x25A03Cu) {
        ctx->pc = 0x25A040u;
        goto label_25a040;
    }
    ctx->pc = 0x25A038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25A040u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x25A040u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25A040u; }
            if (ctx->pc != 0x25A040u) { return; }
        }
        }
    }
    ctx->pc = 0x25A040u;
label_25a040:
    // 0x25a040: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x25a040u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25a044:
    // 0x25a044: 0x0  nop
    ctx->pc = 0x25a044u;
    // NOP
label_25a048:
    // 0x25a048: 0xafa701d0  sw          $a3, 0x1D0($sp)
    ctx->pc = 0x25a048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 7));
label_25a04c:
    // 0x25a04c: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x25a04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_25a050:
    // 0x25a050: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x25a050u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_25a054:
    // 0x25a054: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_25a058:
    if (ctx->pc == 0x25A058u) {
        ctx->pc = 0x25A058u;
            // 0x25a058: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25A05Cu;
        goto label_25a05c;
    }
    ctx->pc = 0x25A054u;
    {
        const bool branch_taken_0x25a054 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A054u;
            // 0x25a058: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a054) {
            ctx->pc = 0x25A088u;
            goto label_25a088;
        }
    }
    ctx->pc = 0x25A05Cu;
label_25a05c:
    // 0x25a05c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25a05cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25a060:
    // 0x25a060: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x25a060u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_25a064:
    // 0x25a064: 0x0  nop
    ctx->pc = 0x25a064u;
    // NOP
label_25a068:
    // 0x25a068: 0x8fa301d0  lw          $v1, 0x1D0($sp)
    ctx->pc = 0x25a068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_25a06c:
    // 0x25a06c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x25a06cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_25a070:
    // 0x25a070: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x25a070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_25a074:
    // 0x25a074: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x25a074u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_25a078:
    // 0x25a078: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x25a078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_25a07c:
    // 0x25a07c: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x25a07cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_25a080:
    // 0x25a080: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_25a084:
    if (ctx->pc == 0x25A084u) {
        ctx->pc = 0x25A084u;
            // 0x25a084: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x25A088u;
        goto label_25a088;
    }
    ctx->pc = 0x25A080u;
    {
        const bool branch_taken_0x25a080 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25A084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A080u;
            // 0x25a084: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a080) {
            ctx->pc = 0x25A068u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25a068;
        }
    }
    ctx->pc = 0x25A088u;
label_25a088:
    // 0x25a088: 0x8fc40074  lw          $a0, 0x74($fp)
    ctx->pc = 0x25a088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 116)));
label_25a08c:
    // 0x25a08c: 0x8fb001e8  lw          $s0, 0x1E8($sp)
    ctx->pc = 0x25a08cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_25a090:
    // 0x25a090: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x25a090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_25a094:
    // 0x25a094: 0x8fd60070  lw          $s6, 0x70($fp)
    ctx->pc = 0x25a094u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 112)));
label_25a098:
    // 0x25a098: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x25a098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_25a09c:
    // 0x25a09c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x25a09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_25a0a0:
    // 0x25a0a0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x25a0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_25a0a4:
    // 0x25a0a4: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x25a0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
label_25a0a8:
    // 0x25a0a8: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x25a0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_25a0ac:
    // 0x25a0ac: 0x203082b  sltu        $at, $s0, $v1
    ctx->pc = 0x25a0acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_25a0b0:
    // 0x25a0b0: 0x102000b5  beqz        $at, . + 4 + (0xB5 << 2)
label_25a0b4:
    if (ctx->pc == 0x25A0B4u) {
        ctx->pc = 0x25A0B8u;
        goto label_25a0b8;
    }
    ctx->pc = 0x25A0B0u;
    {
        const bool branch_taken_0x25a0b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a0b0) {
            ctx->pc = 0x25A388u;
            goto label_25a388;
        }
    }
    ctx->pc = 0x25A0B8u;
label_25a0b8:
    // 0x25a0b8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x25a0b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25a0bc:
    // 0x25a0bc: 0x3c040101  lui         $a0, 0x101
    ctx->pc = 0x25a0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)257 << 16));
label_25a0c0:
    // 0x25a0c0: 0x3c030808  lui         $v1, 0x808
    ctx->pc = 0x25a0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2056 << 16));
label_25a0c4:
    // 0x25a0c4: 0x34850101  ori         $a1, $a0, 0x101
    ctx->pc = 0x25a0c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)257);
label_25a0c8:
    // 0x25a0c8: 0x34640808  ori         $a0, $v1, 0x808
    ctx->pc = 0x25a0c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2056);
label_25a0cc:
    // 0x25a0cc: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x25a0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_25a0d0:
    // 0x25a0d0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x25a0d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_25a0d4:
    // 0x25a0d4: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
label_25a0d8:
    if (ctx->pc == 0x25A0D8u) {
        ctx->pc = 0x25A0DCu;
        goto label_25a0dc;
    }
    ctx->pc = 0x25A0D4u;
    {
        const bool branch_taken_0x25a0d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a0d4) {
            ctx->pc = 0x25A130u;
            goto label_25a130;
        }
    }
    ctx->pc = 0x25A0DCu;
label_25a0dc:
    // 0x25a0dc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x25a0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_25a0e0:
    // 0x25a0e0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x25a0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_25a0e4:
    // 0x25a0e4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x25a0e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_25a0e8:
    // 0x25a0e8: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_25a0ec:
    if (ctx->pc == 0x25A0ECu) {
        ctx->pc = 0x25A0F0u;
        goto label_25a0f0;
    }
    ctx->pc = 0x25A0E8u;
    {
        const bool branch_taken_0x25a0e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a0e8) {
            ctx->pc = 0x25A120u;
            goto label_25a120;
        }
    }
    ctx->pc = 0x25A0F0u;
label_25a0f0:
    // 0x25a0f0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x25a0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_25a0f4:
    // 0x25a0f4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x25a0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_25a0f8:
    // 0x25a0f8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x25a0f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_25a0fc:
    // 0x25a0fc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_25a100:
    if (ctx->pc == 0x25A100u) {
        ctx->pc = 0x25A104u;
        goto label_25a104;
    }
    ctx->pc = 0x25A0FCu;
    {
        const bool branch_taken_0x25a0fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a0fc) {
            ctx->pc = 0x25A110u;
            goto label_25a110;
        }
    }
    ctx->pc = 0x25A104u;
label_25a104:
    // 0x25a104: 0x26d600c0  addiu       $s6, $s6, 0xC0
    ctx->pc = 0x25a104u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 192));
label_25a108:
    // 0x25a108: 0x1000009b  b           . + 4 + (0x9B << 2)
label_25a10c:
    if (ctx->pc == 0x25A10Cu) {
        ctx->pc = 0x25A10Cu;
            // 0x25a10c: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->pc = 0x25A110u;
        goto label_25a110;
    }
    ctx->pc = 0x25A108u;
    {
        const bool branch_taken_0x25a108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A108u;
            // 0x25a10c: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a108) {
            ctx->pc = 0x25A378u;
            goto label_25a378;
        }
    }
    ctx->pc = 0x25A110u;
label_25a110:
    // 0x25a110: 0x26d60080  addiu       $s6, $s6, 0x80
    ctx->pc = 0x25a110u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 128));
label_25a114:
    // 0x25a114: 0x10000098  b           . + 4 + (0x98 << 2)
label_25a118:
    if (ctx->pc == 0x25A118u) {
        ctx->pc = 0x25A118u;
            // 0x25a118: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->pc = 0x25A11Cu;
        goto label_25a11c;
    }
    ctx->pc = 0x25A114u;
    {
        const bool branch_taken_0x25a114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A114u;
            // 0x25a118: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a114) {
            ctx->pc = 0x25A378u;
            goto label_25a378;
        }
    }
    ctx->pc = 0x25A11Cu;
label_25a11c:
    // 0x25a11c: 0x0  nop
    ctx->pc = 0x25a11cu;
    // NOP
label_25a120:
    // 0x25a120: 0x26d60040  addiu       $s6, $s6, 0x40
    ctx->pc = 0x25a120u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 64));
label_25a124:
    // 0x25a124: 0x10000094  b           . + 4 + (0x94 << 2)
label_25a128:
    if (ctx->pc == 0x25A128u) {
        ctx->pc = 0x25A128u;
            // 0x25a128: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x25A12Cu;
        goto label_25a12c;
    }
    ctx->pc = 0x25A124u;
    {
        const bool branch_taken_0x25a124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A124u;
            // 0x25a128: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a124) {
            ctx->pc = 0x25A378u;
            goto label_25a378;
        }
    }
    ctx->pc = 0x25A12Cu;
label_25a12c:
    // 0x25a12c: 0x0  nop
    ctx->pc = 0x25a12cu;
    // NOP
label_25a130:
    // 0x25a130: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x25a130u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_25a134:
    // 0x25a134: 0x24030077  addiu       $v1, $zero, 0x77
    ctx->pc = 0x25a134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
label_25a138:
    // 0x25a138: 0x14830021  bne         $a0, $v1, . + 4 + (0x21 << 2)
label_25a13c:
    if (ctx->pc == 0x25A13Cu) {
        ctx->pc = 0x25A140u;
        goto label_25a140;
    }
    ctx->pc = 0x25A138u;
    {
        const bool branch_taken_0x25a138 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x25a138) {
            ctx->pc = 0x25A1C0u;
            goto label_25a1c0;
        }
    }
    ctx->pc = 0x25A140u;
label_25a140:
    // 0x25a140: 0x8ec3000c  lw          $v1, 0xC($s6)
    ctx->pc = 0x25a140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_25a144:
    // 0x25a144: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x25a144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_25a148:
    // 0x25a148: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
label_25a14c:
    if (ctx->pc == 0x25A14Cu) {
        ctx->pc = 0x25A150u;
        goto label_25a150;
    }
    ctx->pc = 0x25A148u;
    {
        const bool branch_taken_0x25a148 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a148) {
            ctx->pc = 0x25A1C0u;
            goto label_25a1c0;
        }
    }
    ctx->pc = 0x25A150u;
label_25a150:
    // 0x25a150: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x25a150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_25a154:
    // 0x25a154: 0x280b82d  daddu       $s7, $s4, $zero
    ctx->pc = 0x25a154u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25a158:
    // 0x25a158: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x25a158u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_25a15c:
    // 0x25a15c: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
label_25a160:
    if (ctx->pc == 0x25A160u) {
        ctx->pc = 0x25A160u;
            // 0x25a160: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25A164u;
        goto label_25a164;
    }
    ctx->pc = 0x25A15Cu;
    {
        const bool branch_taken_0x25a15c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A15Cu;
            // 0x25a160: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a15c) {
            ctx->pc = 0x25A1C0u;
            goto label_25a1c0;
        }
    }
    ctx->pc = 0x25A164u;
label_25a164:
    // 0x25a164: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x25a164u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25a168:
    // 0x25a168: 0x8ef90000  lw          $t9, 0x0($s7)
    ctx->pc = 0x25a168u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_25a16c:
    // 0x25a16c: 0x8ec5000c  lw          $a1, 0xC($s6)
    ctx->pc = 0x25a16cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_25a170:
    // 0x25a170: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x25a170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_25a174:
    // 0x25a174: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x25a174u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_25a178:
    // 0x25a178: 0x320f809  jalr        $t9
label_25a17c:
    if (ctx->pc == 0x25A17Cu) {
        ctx->pc = 0x25A17Cu;
            // 0x25a17c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25A180u;
        goto label_25a180;
    }
    ctx->pc = 0x25A178u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25A180u);
        ctx->pc = 0x25A17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A178u;
            // 0x25a17c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25A180u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25A180u; }
            if (ctx->pc != 0x25A180u) { return; }
        }
        }
    }
    ctx->pc = 0x25A180u;
label_25a180:
    // 0x25a180: 0x8fa301d0  lw          $v1, 0x1D0($sp)
    ctx->pc = 0x25a180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_25a184:
    // 0x25a184: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x25a184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_25a188:
    // 0x25a188: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x25a188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25a18c:
    // 0x25a18c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25a18cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25a190:
    // 0x25a190: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_25a194:
    if (ctx->pc == 0x25A194u) {
        ctx->pc = 0x25A198u;
        goto label_25a198;
    }
    ctx->pc = 0x25A190u;
    {
        const bool branch_taken_0x25a190 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25a190) {
            ctx->pc = 0x25A1A0u;
            goto label_25a1a0;
        }
    }
    ctx->pc = 0x25A198u;
label_25a198:
    // 0x25a198: 0x10000003  b           . + 4 + (0x3 << 2)
label_25a19c:
    if (ctx->pc == 0x25A19Cu) {
        ctx->pc = 0x25A19Cu;
            // 0x25a19c: 0xe4610000  swc1        $f1, 0x0($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->pc = 0x25A1A0u;
        goto label_25a1a0;
    }
    ctx->pc = 0x25A198u;
    {
        const bool branch_taken_0x25a198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A198u;
            // 0x25a19c: 0xe4610000  swc1        $f1, 0x0($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a198) {
            ctx->pc = 0x25A1A8u;
            goto label_25a1a8;
        }
    }
    ctx->pc = 0x25A1A0u;
label_25a1a0:
    // 0x25a1a0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x25a1a0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_25a1a4:
    // 0x25a1a4: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x25a1a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_25a1a8:
    // 0x25a1a8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x25a1a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_25a1ac:
    // 0x25a1ac: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x25a1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_25a1b0:
    // 0x25a1b0: 0x2f3b821  addu        $s7, $s7, $s3
    ctx->pc = 0x25a1b0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 19)));
label_25a1b4:
    // 0x25a1b4: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x25a1b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_25a1b8:
    // 0x25a1b8: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
label_25a1bc:
    if (ctx->pc == 0x25A1BCu) {
        ctx->pc = 0x25A1BCu;
            // 0x25a1bc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x25A1C0u;
        goto label_25a1c0;
    }
    ctx->pc = 0x25A1B8u;
    {
        const bool branch_taken_0x25a1b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25A1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A1B8u;
            // 0x25a1bc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a1b8) {
            ctx->pc = 0x25A168u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25a168;
        }
    }
    ctx->pc = 0x25A1C0u;
label_25a1c0:
    // 0x25a1c0: 0x92040001  lbu         $a0, 0x1($s0)
    ctx->pc = 0x25a1c0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_25a1c4:
    // 0x25a1c4: 0x24030077  addiu       $v1, $zero, 0x77
    ctx->pc = 0x25a1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
label_25a1c8:
    // 0x25a1c8: 0x14830021  bne         $a0, $v1, . + 4 + (0x21 << 2)
label_25a1cc:
    if (ctx->pc == 0x25A1CCu) {
        ctx->pc = 0x25A1D0u;
        goto label_25a1d0;
    }
    ctx->pc = 0x25A1C8u;
    {
        const bool branch_taken_0x25a1c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x25a1c8) {
            ctx->pc = 0x25A250u;
            goto label_25a250;
        }
    }
    ctx->pc = 0x25A1D0u;
label_25a1d0:
    // 0x25a1d0: 0x8ec3001c  lw          $v1, 0x1C($s6)
    ctx->pc = 0x25a1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 28)));
label_25a1d4:
    // 0x25a1d4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x25a1d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_25a1d8:
    // 0x25a1d8: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
label_25a1dc:
    if (ctx->pc == 0x25A1DCu) {
        ctx->pc = 0x25A1E0u;
        goto label_25a1e0;
    }
    ctx->pc = 0x25A1D8u;
    {
        const bool branch_taken_0x25a1d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a1d8) {
            ctx->pc = 0x25A250u;
            goto label_25a250;
        }
    }
    ctx->pc = 0x25A1E0u;
label_25a1e0:
    // 0x25a1e0: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x25a1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_25a1e4:
    // 0x25a1e4: 0x280b82d  daddu       $s7, $s4, $zero
    ctx->pc = 0x25a1e4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25a1e8:
    // 0x25a1e8: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x25a1e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_25a1ec:
    // 0x25a1ec: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
label_25a1f0:
    if (ctx->pc == 0x25A1F0u) {
        ctx->pc = 0x25A1F0u;
            // 0x25a1f0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25A1F4u;
        goto label_25a1f4;
    }
    ctx->pc = 0x25A1ECu;
    {
        const bool branch_taken_0x25a1ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A1ECu;
            // 0x25a1f0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a1ec) {
            ctx->pc = 0x25A250u;
            goto label_25a250;
        }
    }
    ctx->pc = 0x25A1F4u;
label_25a1f4:
    // 0x25a1f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x25a1f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25a1f8:
    // 0x25a1f8: 0x8ef90000  lw          $t9, 0x0($s7)
    ctx->pc = 0x25a1f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_25a1fc:
    // 0x25a1fc: 0x8ec5001c  lw          $a1, 0x1C($s6)
    ctx->pc = 0x25a1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 28)));
label_25a200:
    // 0x25a200: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x25a200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_25a204:
    // 0x25a204: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x25a204u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_25a208:
    // 0x25a208: 0x320f809  jalr        $t9
label_25a20c:
    if (ctx->pc == 0x25A20Cu) {
        ctx->pc = 0x25A20Cu;
            // 0x25a20c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25A210u;
        goto label_25a210;
    }
    ctx->pc = 0x25A208u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25A210u);
        ctx->pc = 0x25A20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A208u;
            // 0x25a20c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25A210u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25A210u; }
            if (ctx->pc != 0x25A210u) { return; }
        }
        }
    }
    ctx->pc = 0x25A210u;
label_25a210:
    // 0x25a210: 0x8fa301d0  lw          $v1, 0x1D0($sp)
    ctx->pc = 0x25a210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_25a214:
    // 0x25a214: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x25a214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_25a218:
    // 0x25a218: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x25a218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25a21c:
    // 0x25a21c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25a21cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25a220:
    // 0x25a220: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_25a224:
    if (ctx->pc == 0x25A224u) {
        ctx->pc = 0x25A228u;
        goto label_25a228;
    }
    ctx->pc = 0x25A220u;
    {
        const bool branch_taken_0x25a220 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25a220) {
            ctx->pc = 0x25A230u;
            goto label_25a230;
        }
    }
    ctx->pc = 0x25A228u;
label_25a228:
    // 0x25a228: 0x10000003  b           . + 4 + (0x3 << 2)
label_25a22c:
    if (ctx->pc == 0x25A22Cu) {
        ctx->pc = 0x25A22Cu;
            // 0x25a22c: 0xe4610000  swc1        $f1, 0x0($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->pc = 0x25A230u;
        goto label_25a230;
    }
    ctx->pc = 0x25A228u;
    {
        const bool branch_taken_0x25a228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A22Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A228u;
            // 0x25a22c: 0xe4610000  swc1        $f1, 0x0($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a228) {
            ctx->pc = 0x25A238u;
            goto label_25a238;
        }
    }
    ctx->pc = 0x25A230u;
label_25a230:
    // 0x25a230: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x25a230u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_25a234:
    // 0x25a234: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x25a234u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_25a238:
    // 0x25a238: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x25a238u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_25a23c:
    // 0x25a23c: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x25a23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_25a240:
    // 0x25a240: 0x2f3b821  addu        $s7, $s7, $s3
    ctx->pc = 0x25a240u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 19)));
label_25a244:
    // 0x25a244: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x25a244u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_25a248:
    // 0x25a248: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
label_25a24c:
    if (ctx->pc == 0x25A24Cu) {
        ctx->pc = 0x25A24Cu;
            // 0x25a24c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x25A250u;
        goto label_25a250;
    }
    ctx->pc = 0x25A248u;
    {
        const bool branch_taken_0x25a248 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25A24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A248u;
            // 0x25a24c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a248) {
            ctx->pc = 0x25A1F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25a1f8;
        }
    }
    ctx->pc = 0x25A250u;
label_25a250:
    // 0x25a250: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x25a250u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_25a254:
    // 0x25a254: 0x24030077  addiu       $v1, $zero, 0x77
    ctx->pc = 0x25a254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
label_25a258:
    // 0x25a258: 0x14830021  bne         $a0, $v1, . + 4 + (0x21 << 2)
label_25a25c:
    if (ctx->pc == 0x25A25Cu) {
        ctx->pc = 0x25A260u;
        goto label_25a260;
    }
    ctx->pc = 0x25A258u;
    {
        const bool branch_taken_0x25a258 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x25a258) {
            ctx->pc = 0x25A2E0u;
            goto label_25a2e0;
        }
    }
    ctx->pc = 0x25A260u;
label_25a260:
    // 0x25a260: 0x8ec3002c  lw          $v1, 0x2C($s6)
    ctx->pc = 0x25a260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
label_25a264:
    // 0x25a264: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x25a264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_25a268:
    // 0x25a268: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
label_25a26c:
    if (ctx->pc == 0x25A26Cu) {
        ctx->pc = 0x25A270u;
        goto label_25a270;
    }
    ctx->pc = 0x25A268u;
    {
        const bool branch_taken_0x25a268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a268) {
            ctx->pc = 0x25A2E0u;
            goto label_25a2e0;
        }
    }
    ctx->pc = 0x25A270u;
label_25a270:
    // 0x25a270: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x25a270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_25a274:
    // 0x25a274: 0x280b82d  daddu       $s7, $s4, $zero
    ctx->pc = 0x25a274u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25a278:
    // 0x25a278: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x25a278u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_25a27c:
    // 0x25a27c: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
label_25a280:
    if (ctx->pc == 0x25A280u) {
        ctx->pc = 0x25A280u;
            // 0x25a280: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25A284u;
        goto label_25a284;
    }
    ctx->pc = 0x25A27Cu;
    {
        const bool branch_taken_0x25a27c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A27Cu;
            // 0x25a280: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a27c) {
            ctx->pc = 0x25A2E0u;
            goto label_25a2e0;
        }
    }
    ctx->pc = 0x25A284u;
label_25a284:
    // 0x25a284: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x25a284u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25a288:
    // 0x25a288: 0x8ef90000  lw          $t9, 0x0($s7)
    ctx->pc = 0x25a288u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_25a28c:
    // 0x25a28c: 0x8ec5002c  lw          $a1, 0x2C($s6)
    ctx->pc = 0x25a28cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
label_25a290:
    // 0x25a290: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x25a290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_25a294:
    // 0x25a294: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x25a294u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_25a298:
    // 0x25a298: 0x320f809  jalr        $t9
label_25a29c:
    if (ctx->pc == 0x25A29Cu) {
        ctx->pc = 0x25A29Cu;
            // 0x25a29c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25A2A0u;
        goto label_25a2a0;
    }
    ctx->pc = 0x25A298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25A2A0u);
        ctx->pc = 0x25A29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A298u;
            // 0x25a29c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25A2A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25A2A0u; }
            if (ctx->pc != 0x25A2A0u) { return; }
        }
        }
    }
    ctx->pc = 0x25A2A0u;
label_25a2a0:
    // 0x25a2a0: 0x8fa301d0  lw          $v1, 0x1D0($sp)
    ctx->pc = 0x25a2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_25a2a4:
    // 0x25a2a4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x25a2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_25a2a8:
    // 0x25a2a8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x25a2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25a2ac:
    // 0x25a2ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25a2acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25a2b0:
    // 0x25a2b0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_25a2b4:
    if (ctx->pc == 0x25A2B4u) {
        ctx->pc = 0x25A2B8u;
        goto label_25a2b8;
    }
    ctx->pc = 0x25A2B0u;
    {
        const bool branch_taken_0x25a2b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25a2b0) {
            ctx->pc = 0x25A2C0u;
            goto label_25a2c0;
        }
    }
    ctx->pc = 0x25A2B8u;
label_25a2b8:
    // 0x25a2b8: 0x10000003  b           . + 4 + (0x3 << 2)
label_25a2bc:
    if (ctx->pc == 0x25A2BCu) {
        ctx->pc = 0x25A2BCu;
            // 0x25a2bc: 0xe4610000  swc1        $f1, 0x0($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->pc = 0x25A2C0u;
        goto label_25a2c0;
    }
    ctx->pc = 0x25A2B8u;
    {
        const bool branch_taken_0x25a2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A2B8u;
            // 0x25a2bc: 0xe4610000  swc1        $f1, 0x0($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a2b8) {
            ctx->pc = 0x25A2C8u;
            goto label_25a2c8;
        }
    }
    ctx->pc = 0x25A2C0u;
label_25a2c0:
    // 0x25a2c0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x25a2c0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_25a2c4:
    // 0x25a2c4: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x25a2c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_25a2c8:
    // 0x25a2c8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x25a2c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_25a2cc:
    // 0x25a2cc: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x25a2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_25a2d0:
    // 0x25a2d0: 0x2f3b821  addu        $s7, $s7, $s3
    ctx->pc = 0x25a2d0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 19)));
label_25a2d4:
    // 0x25a2d4: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x25a2d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_25a2d8:
    // 0x25a2d8: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
label_25a2dc:
    if (ctx->pc == 0x25A2DCu) {
        ctx->pc = 0x25A2DCu;
            // 0x25a2dc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x25A2E0u;
        goto label_25a2e0;
    }
    ctx->pc = 0x25A2D8u;
    {
        const bool branch_taken_0x25a2d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25A2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A2D8u;
            // 0x25a2dc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a2d8) {
            ctx->pc = 0x25A288u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25a288;
        }
    }
    ctx->pc = 0x25A2E0u;
label_25a2e0:
    // 0x25a2e0: 0x92040003  lbu         $a0, 0x3($s0)
    ctx->pc = 0x25a2e0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_25a2e4:
    // 0x25a2e4: 0x24030077  addiu       $v1, $zero, 0x77
    ctx->pc = 0x25a2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
label_25a2e8:
    // 0x25a2e8: 0x14830021  bne         $a0, $v1, . + 4 + (0x21 << 2)
label_25a2ec:
    if (ctx->pc == 0x25A2ECu) {
        ctx->pc = 0x25A2F0u;
        goto label_25a2f0;
    }
    ctx->pc = 0x25A2E8u;
    {
        const bool branch_taken_0x25a2e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x25a2e8) {
            ctx->pc = 0x25A370u;
            goto label_25a370;
        }
    }
    ctx->pc = 0x25A2F0u;
label_25a2f0:
    // 0x25a2f0: 0x8ec3003c  lw          $v1, 0x3C($s6)
    ctx->pc = 0x25a2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 60)));
label_25a2f4:
    // 0x25a2f4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x25a2f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_25a2f8:
    // 0x25a2f8: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
label_25a2fc:
    if (ctx->pc == 0x25A2FCu) {
        ctx->pc = 0x25A300u;
        goto label_25a300;
    }
    ctx->pc = 0x25A2F8u;
    {
        const bool branch_taken_0x25a2f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a2f8) {
            ctx->pc = 0x25A370u;
            goto label_25a370;
        }
    }
    ctx->pc = 0x25A300u;
label_25a300:
    // 0x25a300: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x25a300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_25a304:
    // 0x25a304: 0x280b82d  daddu       $s7, $s4, $zero
    ctx->pc = 0x25a304u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25a308:
    // 0x25a308: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x25a308u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_25a30c:
    // 0x25a30c: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
label_25a310:
    if (ctx->pc == 0x25A310u) {
        ctx->pc = 0x25A310u;
            // 0x25a310: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25A314u;
        goto label_25a314;
    }
    ctx->pc = 0x25A30Cu;
    {
        const bool branch_taken_0x25a30c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A30Cu;
            // 0x25a310: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a30c) {
            ctx->pc = 0x25A370u;
            goto label_25a370;
        }
    }
    ctx->pc = 0x25A314u;
label_25a314:
    // 0x25a314: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x25a314u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25a318:
    // 0x25a318: 0x8ef90000  lw          $t9, 0x0($s7)
    ctx->pc = 0x25a318u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_25a31c:
    // 0x25a31c: 0x8ec5003c  lw          $a1, 0x3C($s6)
    ctx->pc = 0x25a31cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 60)));
label_25a320:
    // 0x25a320: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x25a320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_25a324:
    // 0x25a324: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x25a324u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_25a328:
    // 0x25a328: 0x320f809  jalr        $t9
label_25a32c:
    if (ctx->pc == 0x25A32Cu) {
        ctx->pc = 0x25A32Cu;
            // 0x25a32c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25A330u;
        goto label_25a330;
    }
    ctx->pc = 0x25A328u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25A330u);
        ctx->pc = 0x25A32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A328u;
            // 0x25a32c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25A330u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25A330u; }
            if (ctx->pc != 0x25A330u) { return; }
        }
        }
    }
    ctx->pc = 0x25A330u;
label_25a330:
    // 0x25a330: 0x8fa301d0  lw          $v1, 0x1D0($sp)
    ctx->pc = 0x25a330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_25a334:
    // 0x25a334: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x25a334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_25a338:
    // 0x25a338: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x25a338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25a33c:
    // 0x25a33c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25a33cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25a340:
    // 0x25a340: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_25a344:
    if (ctx->pc == 0x25A344u) {
        ctx->pc = 0x25A348u;
        goto label_25a348;
    }
    ctx->pc = 0x25A340u;
    {
        const bool branch_taken_0x25a340 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25a340) {
            ctx->pc = 0x25A350u;
            goto label_25a350;
        }
    }
    ctx->pc = 0x25A348u;
label_25a348:
    // 0x25a348: 0x10000003  b           . + 4 + (0x3 << 2)
label_25a34c:
    if (ctx->pc == 0x25A34Cu) {
        ctx->pc = 0x25A34Cu;
            // 0x25a34c: 0xe4610000  swc1        $f1, 0x0($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->pc = 0x25A350u;
        goto label_25a350;
    }
    ctx->pc = 0x25A348u;
    {
        const bool branch_taken_0x25a348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A348u;
            // 0x25a34c: 0xe4610000  swc1        $f1, 0x0($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a348) {
            ctx->pc = 0x25A358u;
            goto label_25a358;
        }
    }
    ctx->pc = 0x25A350u;
label_25a350:
    // 0x25a350: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x25a350u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_25a354:
    // 0x25a354: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x25a354u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_25a358:
    // 0x25a358: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x25a358u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_25a35c:
    // 0x25a35c: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x25a35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_25a360:
    // 0x25a360: 0x2f3b821  addu        $s7, $s7, $s3
    ctx->pc = 0x25a360u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 19)));
label_25a364:
    // 0x25a364: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x25a364u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_25a368:
    // 0x25a368: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
label_25a36c:
    if (ctx->pc == 0x25A36Cu) {
        ctx->pc = 0x25A36Cu;
            // 0x25a36c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x25A370u;
        goto label_25a370;
    }
    ctx->pc = 0x25A368u;
    {
        const bool branch_taken_0x25a368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25A36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A368u;
            // 0x25a36c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a368) {
            ctx->pc = 0x25A318u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25a318;
        }
    }
    ctx->pc = 0x25A370u;
label_25a370:
    // 0x25a370: 0x26d60040  addiu       $s6, $s6, 0x40
    ctx->pc = 0x25a370u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 64));
label_25a374:
    // 0x25a374: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x25a374u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_25a378:
    // 0x25a378: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x25a378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_25a37c:
    // 0x25a37c: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x25a37cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_25a380:
    // 0x25a380: 0x1460ff4d  bnez        $v1, . + 4 + (-0xB3 << 2)
label_25a384:
    if (ctx->pc == 0x25A384u) {
        ctx->pc = 0x25A388u;
        goto label_25a388;
    }
    ctx->pc = 0x25A380u;
    {
        const bool branch_taken_0x25a380 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a380) {
            ctx->pc = 0x25A0B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25a0b8;
        }
    }
    ctx->pc = 0x25A388u;
label_25a388:
    // 0x25a388: 0x8fa301e8  lw          $v1, 0x1E8($sp)
    ctx->pc = 0x25a388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_25a38c:
    // 0x25a38c: 0x24040088  addiu       $a0, $zero, 0x88
    ctx->pc = 0x25a38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
label_25a390:
    // 0x25a390: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x25a390u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_25a394:
    // 0x25a394: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x25a394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_25a398:
    // 0x25a398: 0x8fc40074  lw          $a0, 0x74($fp)
    ctx->pc = 0x25a398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 116)));
label_25a39c:
    // 0x25a39c: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x25a39cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_25a3a0:
    // 0x25a3a0: 0x10200199  beqz        $at, . + 4 + (0x199 << 2)
label_25a3a4:
    if (ctx->pc == 0x25A3A4u) {
        ctx->pc = 0x25A3A4u;
            // 0x25a3a4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25A3A8u;
        goto label_25a3a8;
    }
    ctx->pc = 0x25A3A0u;
    {
        const bool branch_taken_0x25a3a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A3A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A3A0u;
            // 0x25a3a4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a3a0) {
            ctx->pc = 0x25AA08u;
            goto label_25aa08;
        }
    }
    ctx->pc = 0x25A3A8u;
label_25a3a8:
    // 0x25a3a8: 0x8fa301dc  lw          $v1, 0x1DC($sp)
    ctx->pc = 0x25a3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_25a3ac:
    // 0x25a3ac: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x25a3acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
label_25a3b0:
    // 0x25a3b0: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x25a3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_25a3b4:
    // 0x25a3b4: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x25a3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_25a3b8:
    // 0x25a3b8: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x25a3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
label_25a3bc:
    // 0x25a3bc: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x25a3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_25a3c0:
    // 0x25a3c0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x25a3c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_25a3c4:
    // 0x25a3c4: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x25a3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_25a3c8:
    // 0x25a3c8: 0x8fae01d0  lw          $t6, 0x1D0($sp)
    ctx->pc = 0x25a3c8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_25a3cc:
    // 0x25a3cc: 0x8fac00f0  lw          $t4, 0xF0($sp)
    ctx->pc = 0x25a3ccu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_25a3d0:
    // 0x25a3d0: 0x27a70160  addiu       $a3, $sp, 0x160
    ctx->pc = 0x25a3d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_25a3d4:
    // 0x25a3d4: 0x8fad01d8  lw          $t5, 0x1D8($sp)
    ctx->pc = 0x25a3d4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_25a3d8:
    // 0x25a3d8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x25a3d8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25a3dc:
    // 0x25a3dc: 0x27aa0150  addiu       $t2, $sp, 0x150
    ctx->pc = 0x25a3dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_25a3e0:
    // 0x25a3e0: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x25a3e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_25a3e4:
    // 0x25a3e4: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x25a3e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_25a3e8:
    // 0x25a3e8: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x25a3e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_25a3ec:
    // 0x25a3ec: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x25a3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_25a3f0:
    // 0x25a3f0: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x25a3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_25a3f4:
    // 0x25a3f4: 0x27a301c0  addiu       $v1, $sp, 0x1C0
    ctx->pc = 0x25a3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_25a3f8:
    // 0x25a3f8: 0x1cc6021  addu        $t4, $t6, $t4
    ctx->pc = 0x25a3f8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
label_25a3fc:
    // 0x25a3fc: 0xc5940000  lwc1        $f20, 0x0($t4)
    ctx->pc = 0x25a3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_25a400:
    // 0x25a400: 0xafad01c0  sw          $t5, 0x1C0($sp)
    ctx->pc = 0x25a400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 13));
label_25a404:
    // 0x25a404: 0x27ac01c4  addiu       $t4, $sp, 0x1C4
    ctx->pc = 0x25a404u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 452));
label_25a408:
    // 0x25a408: 0x8fad00e0  lw          $t5, 0xE0($sp)
    ctx->pc = 0x25a408u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_25a40c:
    // 0x25a40c: 0xad8d0000  sw          $t5, 0x0($t4)
    ctx->pc = 0x25a40cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 13));
label_25a410:
    // 0x25a410: 0x8fad00d0  lw          $t5, 0xD0($sp)
    ctx->pc = 0x25a410u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_25a414:
    // 0x25a414: 0x27ac01c8  addiu       $t4, $sp, 0x1C8
    ctx->pc = 0x25a414u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
label_25a418:
    // 0x25a418: 0xad8d0000  sw          $t5, 0x0($t4)
    ctx->pc = 0x25a418u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 13));
label_25a41c:
    // 0x25a41c: 0x8ead0018  lw          $t5, 0x18($s5)
    ctx->pc = 0x25a41cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_25a420:
    // 0x25a420: 0x8eac0014  lw          $t4, 0x14($s5)
    ctx->pc = 0x25a420u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_25a424:
    // 0x25a424: 0x1b26818  mult        $t5, $t5, $s2
    ctx->pc = 0x25a424u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_25a428:
    // 0x25a428: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x25a428u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
label_25a42c:
    // 0x25a42c: 0x798c0000  lq          $t4, 0x0($t4)
    ctx->pc = 0x25a42cu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 12), 0)));
label_25a430:
    // 0x25a430: 0x7cec0000  sq          $t4, 0x0($a3)
    ctx->pc = 0x25a430u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 12));
label_25a434:
    // 0x25a434: 0xc7a10160  lwc1        $f1, 0x160($sp)
    ctx->pc = 0x25a434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25a438:
    // 0x25a438: 0x27ac0164  addiu       $t4, $sp, 0x164
    ctx->pc = 0x25a438u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 356));
label_25a43c:
    // 0x25a43c: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x25a43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25a440:
    // 0x25a440: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25a440u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_25a444:
    // 0x25a444: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x25a444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_25a448:
    // 0x25a448: 0xc5810000  lwc1        $f1, 0x0($t4)
    ctx->pc = 0x25a448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25a44c:
    // 0x25a44c: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x25a44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25a450:
    // 0x25a450: 0x27ac0154  addiu       $t4, $sp, 0x154
    ctx->pc = 0x25a450u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
label_25a454:
    // 0x25a454: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25a454u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_25a458:
    // 0x25a458: 0xe5800000  swc1        $f0, 0x0($t4)
    ctx->pc = 0x25a458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
label_25a45c:
    // 0x25a45c: 0x27ac0168  addiu       $t4, $sp, 0x168
    ctx->pc = 0x25a45cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
label_25a460:
    // 0x25a460: 0xc5810000  lwc1        $f1, 0x0($t4)
    ctx->pc = 0x25a460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25a464:
    // 0x25a464: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x25a464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25a468:
    // 0x25a468: 0x27ac0158  addiu       $t4, $sp, 0x158
    ctx->pc = 0x25a468u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
label_25a46c:
    // 0x25a46c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25a46cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_25a470:
    // 0x25a470: 0xe5800000  swc1        $f0, 0x0($t4)
    ctx->pc = 0x25a470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
label_25a474:
    // 0x25a474: 0x27ac016c  addiu       $t4, $sp, 0x16C
    ctx->pc = 0x25a474u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
label_25a478:
    // 0x25a478: 0xc5810000  lwc1        $f1, 0x0($t4)
    ctx->pc = 0x25a478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25a47c:
    // 0x25a47c: 0xc6a0000c  lwc1        $f0, 0xC($s5)
    ctx->pc = 0x25a47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25a480:
    // 0x25a480: 0x27ac015c  addiu       $t4, $sp, 0x15C
    ctx->pc = 0x25a480u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
label_25a484:
    // 0x25a484: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25a484u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_25a488:
    // 0x25a488: 0xe5800000  swc1        $f0, 0x0($t4)
    ctx->pc = 0x25a488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
label_25a48c:
    // 0x25a48c: 0x3c0c3f80  lui         $t4, 0x3F80
    ctx->pc = 0x25a48cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)16256 << 16));
label_25a490:
    // 0x25a490: 0x240dfffc  addiu       $t5, $zero, -0x4
    ctx->pc = 0x25a490u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_25a494:
    // 0x25a494: 0x448c1000  mtc1        $t4, $f2
    ctx->pc = 0x25a494u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_25a498:
    // 0x25a498: 0x240e0004  addiu       $t6, $zero, 0x4
    ctx->pc = 0x25a498u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_25a49c:
    // 0x25a49c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x25a49cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_25a4a0:
    // 0x25a4a0: 0x3c0fc000  lui         $t7, 0xC000
    ctx->pc = 0x25a4a0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)49152 << 16));
label_25a4a4:
    // 0x25a4a4: 0x3c0c3400  lui         $t4, 0x3400
    ctx->pc = 0x25a4a4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)13312 << 16));
label_25a4a8:
    // 0x25a4a8: 0x448c1800  mtc1        $t4, $f3
    ctx->pc = 0x25a4a8u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_25a4ac:
    // 0x25a4ac: 0x0  nop
    ctx->pc = 0x25a4acu;
    // NOP
label_25a4b0:
    // 0x25a4b0: 0xc5270060  lwc1        $f7, 0x60($t1)
    ctx->pc = 0x25a4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_25a4b4:
    // 0x25a4b4: 0xc5450000  lwc1        $f5, 0x0($t2)
    ctx->pc = 0x25a4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_25a4b8:
    // 0x25a4b8: 0xc5260040  lwc1        $f6, 0x40($t1)
    ctx->pc = 0x25a4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_25a4bc:
    // 0x25a4bc: 0xc5040000  lwc1        $f4, 0x0($t0)
    ctx->pc = 0x25a4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_25a4c0:
    // 0x25a4c0: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x25a4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25a4c4:
    // 0x25a4c4: 0x46053a02  mul.s       $f8, $f7, $f5
    ctx->pc = 0x25a4c4u;
    ctx->f[8] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
label_25a4c8:
    // 0x25a4c8: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x25a4c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
label_25a4cc:
    // 0x25a4cc: 0x46062100  add.s       $f4, $f4, $f6
    ctx->pc = 0x25a4ccu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
label_25a4d0:
    // 0x25a4d0: 0x46043982  mul.s       $f6, $f7, $f4
    ctx->pc = 0x25a4d0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
label_25a4d4:
    // 0x25a4d4: 0x46003942  mul.s       $f5, $f7, $f0
    ctx->pc = 0x25a4d4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
label_25a4d8:
    // 0x25a4d8: 0x46061802  mul.s       $f0, $f3, $f6
    ctx->pc = 0x25a4d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
label_25a4dc:
    // 0x25a4dc: 0x46004105  abs.s       $f4, $f8
    ctx->pc = 0x25a4dcu;
    ctx->f[4] = FPU_ABS_S(ctx->f[8]);
label_25a4e0:
    // 0x25a4e0: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x25a4e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25a4e4:
    // 0x25a4e4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_25a4e8:
    if (ctx->pc == 0x25A4E8u) {
        ctx->pc = 0x25A4E8u;
            // 0x25a4e8: 0x46051802  mul.s       $f0, $f3, $f5 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
        ctx->pc = 0x25A4ECu;
        goto label_25a4ec;
    }
    ctx->pc = 0x25A4E4u;
    {
        const bool branch_taken_0x25a4e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25A4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A4E4u;
            // 0x25a4e8: 0x46051802  mul.s       $f0, $f3, $f5 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a4e4) {
            ctx->pc = 0x25A4F8u;
            goto label_25a4f8;
        }
    }
    ctx->pc = 0x25A4ECu;
label_25a4ec:
    // 0x25a4ec: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x25a4ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25a4f0:
    // 0x25a4f0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_25a4f4:
    if (ctx->pc == 0x25A4F4u) {
        ctx->pc = 0x25A4F8u;
        goto label_25a4f8;
    }
    ctx->pc = 0x25A4F0u;
    {
        const bool branch_taken_0x25a4f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25a4f0) {
            ctx->pc = 0x25A508u;
            goto label_25a508;
        }
    }
    ctx->pc = 0x25A4F8u;
label_25a4f8:
    // 0x25a4f8: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x25a4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_25a4fc:
    // 0x25a4fc: 0x10000014  b           . + 4 + (0x14 << 2)
label_25a500:
    if (ctx->pc == 0x25A500u) {
        ctx->pc = 0x25A500u;
            // 0x25a500: 0xacaf0000  sw          $t7, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 15));
        ctx->pc = 0x25A504u;
        goto label_25a504;
    }
    ctx->pc = 0x25A4FCu;
    {
        const bool branch_taken_0x25a4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A4FCu;
            // 0x25a500: 0xacaf0000  sw          $t7, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a4fc) {
            ctx->pc = 0x25A550u;
            goto label_25a550;
        }
    }
    ctx->pc = 0x25A504u;
label_25a504:
    // 0x25a504: 0x0  nop
    ctx->pc = 0x25a504u;
    // NOP
label_25a508:
    // 0x25a508: 0xac8e0000  sw          $t6, 0x0($a0)
    ctx->pc = 0x25a508u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 14));
label_25a50c:
    // 0x25a50c: 0x46081103  div.s       $f4, $f2, $f8
    ctx->pc = 0x25a50cu;
    if (ctx->f[8] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[4] = ctx->f[2] / ctx->f[8];
label_25a510:
    // 0x25a510: 0x46014034  c.lt.s      $f8, $f1
    ctx->pc = 0x25a510u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25a514:
    // 0x25a514: 0x0  nop
    ctx->pc = 0x25a514u;
    // NOP
label_25a518:
    // 0x25a518: 0x0  nop
    ctx->pc = 0x25a518u;
    // NOP
label_25a51c:
    // 0x25a51c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_25a520:
    if (ctx->pc == 0x25A520u) {
        ctx->pc = 0x25A524u;
        goto label_25a524;
    }
    ctx->pc = 0x25A51Cu;
    {
        const bool branch_taken_0x25a51c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25a51c) {
            ctx->pc = 0x25A538u;
            goto label_25a538;
        }
    }
    ctx->pc = 0x25A524u;
label_25a524:
    // 0x25a524: 0xac8d0000  sw          $t5, 0x0($a0)
    ctx->pc = 0x25a524u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 13));
label_25a528:
    // 0x25a528: 0x8c6c0000  lw          $t4, 0x0($v1)
    ctx->pc = 0x25a528u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25a52c:
    // 0x25a52c: 0x258cfffc  addiu       $t4, $t4, -0x4
    ctx->pc = 0x25a52cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967292));
label_25a530:
    // 0x25a530: 0xac6c0000  sw          $t4, 0x0($v1)
    ctx->pc = 0x25a530u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 12));
label_25a534:
    // 0x25a534: 0x0  nop
    ctx->pc = 0x25a534u;
    // NOP
label_25a538:
    // 0x25a538: 0xe4c40000  swc1        $f4, 0x0($a2)
    ctx->pc = 0x25a538u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_25a53c:
    // 0x25a53c: 0xc7c000ac  lwc1        $f0, 0xAC($fp)
    ctx->pc = 0x25a53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25a540:
    // 0x25a540: 0x46003001  sub.s       $f0, $f6, $f0
    ctx->pc = 0x25a540u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_25a544:
    // 0x25a544: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x25a544u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_25a548:
    // 0x25a548: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x25a548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_25a54c:
    // 0x25a54c: 0x0  nop
    ctx->pc = 0x25a54cu;
    // NOP
label_25a550:
    // 0x25a550: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x25a550u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_25a554:
    // 0x25a554: 0x296c0003  slti        $t4, $t3, 0x3
    ctx->pc = 0x25a554u;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)3) ? 1 : 0);
label_25a558:
    // 0x25a558: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x25a558u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_25a55c:
    // 0x25a55c: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x25a55cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_25a560:
    // 0x25a560: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x25a560u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_25a564:
    // 0x25a564: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x25a564u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_25a568:
    // 0x25a568: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x25a568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_25a56c:
    // 0x25a56c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x25a56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_25a570:
    // 0x25a570: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x25a570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_25a574:
    // 0x25a574: 0x1580ffce  bnez        $t4, . + 4 + (-0x32 << 2)
label_25a578:
    if (ctx->pc == 0x25A578u) {
        ctx->pc = 0x25A578u;
            // 0x25a578: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x25A57Cu;
        goto label_25a57c;
    }
    ctx->pc = 0x25A574u;
    {
        const bool branch_taken_0x25a574 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x25A578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A574u;
            // 0x25a578: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a574) {
            ctx->pc = 0x25A4B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25a4b0;
        }
    }
    ctx->pc = 0x25A57Cu;
label_25a57c:
    // 0x25a57c: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x25a57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_25a580:
    // 0x25a580: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x25a580u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_25a584:
    // 0x25a584: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_25a588:
    if (ctx->pc == 0x25A588u) {
        ctx->pc = 0x25A588u;
            // 0x25a588: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x25A58Cu;
        goto label_25a58c;
    }
    ctx->pc = 0x25A584u;
    {
        const bool branch_taken_0x25a584 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x25A588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A584u;
            // 0x25a588: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a584) {
            ctx->pc = 0x25A598u;
            goto label_25a598;
        }
    }
    ctx->pc = 0x25A58Cu;
label_25a58c:
    // 0x25a58c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25a58cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25a590:
    // 0x25a590: 0x10000007  b           . + 4 + (0x7 << 2)
label_25a594:
    if (ctx->pc == 0x25A594u) {
        ctx->pc = 0x25A594u;
            // 0x25a594: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x25A598u;
        goto label_25a598;
    }
    ctx->pc = 0x25A590u;
    {
        const bool branch_taken_0x25a590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A590u;
            // 0x25a594: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a590) {
            ctx->pc = 0x25A5B0u;
            goto label_25a5b0;
        }
    }
    ctx->pc = 0x25A598u;
label_25a598:
    // 0x25a598: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x25a598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_25a59c:
    // 0x25a59c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x25a59cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_25a5a0:
    // 0x25a5a0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x25a5a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25a5a4:
    // 0x25a5a4: 0x0  nop
    ctx->pc = 0x25a5a4u;
    // NOP
label_25a5a8:
    // 0x25a5a8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x25a5a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_25a5ac:
    // 0x25a5ac: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x25a5acu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_25a5b0:
    // 0x25a5b0: 0xc7a10180  lwc1        $f1, 0x180($sp)
    ctx->pc = 0x25a5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25a5b4:
    // 0x25a5b4: 0x27a301c4  addiu       $v1, $sp, 0x1C4
    ctx->pc = 0x25a5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 452));
label_25a5b8:
    // 0x25a5b8: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x25a5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25a5bc:
    // 0x25a5bc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x25a5bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_25a5c0:
    // 0x25a5c0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25a5c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_25a5c4:
    // 0x25a5c4: 0xe7a001a0  swc1        $f0, 0x1A0($sp)
    ctx->pc = 0x25a5c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_25a5c8:
    // 0x25a5c8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x25a5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25a5cc:
    // 0x25a5cc: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x25a5ccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_25a5d0:
    // 0x25a5d0: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_25a5d4:
    if (ctx->pc == 0x25A5D4u) {
        ctx->pc = 0x25A5D4u;
            // 0x25a5d4: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x25A5D8u;
        goto label_25a5d8;
    }
    ctx->pc = 0x25A5D0u;
    {
        const bool branch_taken_0x25a5d0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x25A5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A5D0u;
            // 0x25a5d4: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a5d0) {
            ctx->pc = 0x25A5E4u;
            goto label_25a5e4;
        }
    }
    ctx->pc = 0x25A5D8u;
label_25a5d8:
    // 0x25a5d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25a5d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25a5dc:
    // 0x25a5dc: 0x10000007  b           . + 4 + (0x7 << 2)
label_25a5e0:
    if (ctx->pc == 0x25A5E0u) {
        ctx->pc = 0x25A5E0u;
            // 0x25a5e0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x25A5E4u;
        goto label_25a5e4;
    }
    ctx->pc = 0x25A5DCu;
    {
        const bool branch_taken_0x25a5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A5DCu;
            // 0x25a5e0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a5dc) {
            ctx->pc = 0x25A5FCu;
            goto label_25a5fc;
        }
    }
    ctx->pc = 0x25A5E4u;
label_25a5e4:
    // 0x25a5e4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x25a5e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_25a5e8:
    // 0x25a5e8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x25a5e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_25a5ec:
    // 0x25a5ec: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x25a5ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25a5f0:
    // 0x25a5f0: 0x0  nop
    ctx->pc = 0x25a5f0u;
    // NOP
label_25a5f4:
    // 0x25a5f4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x25a5f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_25a5f8:
    // 0x25a5f8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x25a5f8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_25a5fc:
    // 0x25a5fc: 0x27a30184  addiu       $v1, $sp, 0x184
    ctx->pc = 0x25a5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
label_25a600:
    // 0x25a600: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x25a600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25a604:
    // 0x25a604: 0x27a30174  addiu       $v1, $sp, 0x174
    ctx->pc = 0x25a604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 372));
label_25a608:
    // 0x25a608: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25a608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25a60c:
    // 0x25a60c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x25a60cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_25a610:
    // 0x25a610: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25a610u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_25a614:
    // 0x25a614: 0x27a301a4  addiu       $v1, $sp, 0x1A4
    ctx->pc = 0x25a614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 420));
label_25a618:
    // 0x25a618: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x25a618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_25a61c:
    // 0x25a61c: 0x27a301c8  addiu       $v1, $sp, 0x1C8
    ctx->pc = 0x25a61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
label_25a620:
    // 0x25a620: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x25a620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25a624:
    // 0x25a624: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x25a624u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_25a628:
    // 0x25a628: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_25a62c:
    if (ctx->pc == 0x25A62Cu) {
        ctx->pc = 0x25A62Cu;
            // 0x25a62c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x25A630u;
        goto label_25a630;
    }
    ctx->pc = 0x25A628u;
    {
        const bool branch_taken_0x25a628 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x25A62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A628u;
            // 0x25a62c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a628) {
            ctx->pc = 0x25A63Cu;
            goto label_25a63c;
        }
    }
    ctx->pc = 0x25A630u;
label_25a630:
    // 0x25a630: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25a630u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25a634:
    // 0x25a634: 0x10000007  b           . + 4 + (0x7 << 2)
label_25a638:
    if (ctx->pc == 0x25A638u) {
        ctx->pc = 0x25A638u;
            // 0x25a638: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x25A63Cu;
        goto label_25a63c;
    }
    ctx->pc = 0x25A634u;
    {
        const bool branch_taken_0x25a634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A634u;
            // 0x25a638: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a634) {
            ctx->pc = 0x25A654u;
            goto label_25a654;
        }
    }
    ctx->pc = 0x25A63Cu;
label_25a63c:
    // 0x25a63c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x25a63cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_25a640:
    // 0x25a640: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x25a640u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_25a644:
    // 0x25a644: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x25a644u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25a648:
    // 0x25a648: 0x0  nop
    ctx->pc = 0x25a648u;
    // NOP
label_25a64c:
    // 0x25a64c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x25a64cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_25a650:
    // 0x25a650: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x25a650u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_25a654:
    // 0x25a654: 0x27a30188  addiu       $v1, $sp, 0x188
    ctx->pc = 0x25a654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
label_25a658:
    // 0x25a658: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x25a658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25a65c:
    // 0x25a65c: 0x27a30178  addiu       $v1, $sp, 0x178
    ctx->pc = 0x25a65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_25a660:
    // 0x25a660: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25a660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25a664:
    // 0x25a664: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x25a664u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_25a668:
    // 0x25a668: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25a668u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_25a66c:
    // 0x25a66c: 0x27a301a8  addiu       $v1, $sp, 0x1A8
    ctx->pc = 0x25a66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
label_25a670:
    // 0x25a670: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x25a670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_25a674:
    // 0x25a674: 0x8fa301e8  lw          $v1, 0x1E8($sp)
    ctx->pc = 0x25a674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_25a678:
    // 0x25a678: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x25a678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
label_25a67c:
    // 0x25a67c: 0x0  nop
    ctx->pc = 0x25a67cu;
    // NOP
label_25a680:
    // 0x25a680: 0x27a301a4  addiu       $v1, $sp, 0x1A4
    ctx->pc = 0x25a680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 420));
label_25a684:
    // 0x25a684: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x25a684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25a688:
    // 0x25a688: 0xc7a101a0  lwc1        $f1, 0x1A0($sp)
    ctx->pc = 0x25a688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25a68c:
    // 0x25a68c: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x25a68cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25a690:
    // 0x25a690: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_25a694:
    if (ctx->pc == 0x25A694u) {
        ctx->pc = 0x25A694u;
            // 0x25a694: 0x27a301a8  addiu       $v1, $sp, 0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
        ctx->pc = 0x25A698u;
        goto label_25a698;
    }
    ctx->pc = 0x25A690u;
    {
        const bool branch_taken_0x25a690 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25A694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A690u;
            // 0x25a694: 0x27a301a8  addiu       $v1, $sp, 0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a690) {
            ctx->pc = 0x25A6B8u;
            goto label_25a6b8;
        }
    }
    ctx->pc = 0x25A698u;
label_25a698:
    // 0x25a698: 0x27a301a8  addiu       $v1, $sp, 0x1A8
    ctx->pc = 0x25a698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
label_25a69c:
    // 0x25a69c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25a69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25a6a0:
    // 0x25a6a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25a6a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25a6a4:
    // 0x25a6a4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_25a6a8:
    if (ctx->pc == 0x25A6A8u) {
        ctx->pc = 0x25A6A8u;
            // 0x25a6a8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x25A6ACu;
        goto label_25a6ac;
    }
    ctx->pc = 0x25A6A4u;
    {
        const bool branch_taken_0x25a6a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25A6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A6A4u;
            // 0x25a6a8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a6a4) {
            ctx->pc = 0x25A6B0u;
            goto label_25a6b0;
        }
    }
    ctx->pc = 0x25A6ACu;
label_25a6ac:
    // 0x25a6ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x25a6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25a6b0:
    // 0x25a6b0: 0x10000008  b           . + 4 + (0x8 << 2)
label_25a6b4:
    if (ctx->pc == 0x25A6B4u) {
        ctx->pc = 0x25A6B4u;
            // 0x25a6b4: 0x4b880  sll         $s7, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->pc = 0x25A6B8u;
        goto label_25a6b8;
    }
    ctx->pc = 0x25A6B0u;
    {
        const bool branch_taken_0x25a6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A6B0u;
            // 0x25a6b4: 0x4b880  sll         $s7, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a6b0) {
            ctx->pc = 0x25A6D4u;
            goto label_25a6d4;
        }
    }
    ctx->pc = 0x25A6B8u;
label_25a6b8:
    // 0x25a6b8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25a6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25a6bc:
    // 0x25a6bc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x25a6bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25a6c0:
    // 0x25a6c0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_25a6c4:
    if (ctx->pc == 0x25A6C4u) {
        ctx->pc = 0x25A6C4u;
            // 0x25a6c4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x25A6C8u;
        goto label_25a6c8;
    }
    ctx->pc = 0x25A6C0u;
    {
        const bool branch_taken_0x25a6c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25A6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A6C0u;
            // 0x25a6c4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a6c0) {
            ctx->pc = 0x25A6D0u;
            goto label_25a6d0;
        }
    }
    ctx->pc = 0x25A6C8u;
label_25a6c8:
    // 0x25a6c8: 0x10000001  b           . + 4 + (0x1 << 2)
label_25a6cc:
    if (ctx->pc == 0x25A6CCu) {
        ctx->pc = 0x25A6CCu;
            // 0x25a6cc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25A6D0u;
        goto label_25a6d0;
    }
    ctx->pc = 0x25A6C8u;
    {
        const bool branch_taken_0x25a6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A6C8u;
            // 0x25a6cc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a6c8) {
            ctx->pc = 0x25A6D0u;
            goto label_25a6d0;
        }
    }
    ctx->pc = 0x25A6D0u;
label_25a6d0:
    // 0x25a6d0: 0x4b880  sll         $s7, $a0, 2
    ctx->pc = 0x25a6d0u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_25a6d4:
    // 0x25a6d4: 0x2fd1821  addu        $v1, $s7, $sp
    ctx->pc = 0x25a6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 29)));
label_25a6d8:
    // 0x25a6d8: 0x247601a0  addiu       $s6, $v1, 0x1A0
    ctx->pc = 0x25a6d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 416));
label_25a6dc:
    // 0x25a6dc: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x25a6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25a6e0:
    // 0x25a6e0: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x25a6e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25a6e4:
    // 0x25a6e4: 0x450100e2  bc1t        . + 4 + (0xE2 << 2)
label_25a6e8:
    if (ctx->pc == 0x25A6E8u) {
        ctx->pc = 0x25A6ECu;
        goto label_25a6ec;
    }
    ctx->pc = 0x25A6E4u;
    {
        const bool branch_taken_0x25a6e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25a6e4) {
            ctx->pc = 0x25AA70u;
            goto label_25aa70;
        }
    }
    ctx->pc = 0x25A6ECu;
label_25a6ec:
    // 0x25a6ec: 0x10000044  b           . + 4 + (0x44 << 2)
label_25a6f0:
    if (ctx->pc == 0x25A6F0u) {
        ctx->pc = 0x25A6F4u;
        goto label_25a6f4;
    }
    ctx->pc = 0x25A6ECu;
    {
        const bool branch_taken_0x25a6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a6ec) {
            ctx->pc = 0x25A800u;
            goto label_25a800;
        }
    }
    ctx->pc = 0x25A6F4u;
label_25a6f4:
    // 0x25a6f4: 0x0  nop
    ctx->pc = 0x25a6f4u;
    // NOP
label_25a6f8:
    // 0x25a6f8: 0x93a300b0  lbu         $v1, 0xB0($sp)
    ctx->pc = 0x25a6f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 176)));
label_25a6fc:
    // 0x25a6fc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x25a6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25a700:
    // 0x25a700: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x25a700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_25a704:
    // 0x25a704: 0x94a50002  lhu         $a1, 0x2($a1)
    ctx->pc = 0x25a704u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_25a708:
    // 0x25a708: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x25a708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_25a70c:
    // 0x25a70c: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x25a70cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_25a710:
    // 0x25a710: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x25a710u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_25a714:
    // 0x25a714: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x25a714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
label_25a718:
    // 0x25a718: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x25a718u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
label_25a71c:
    // 0x25a71c: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x25a71cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_25a720:
    // 0x25a720: 0x28630070  slti        $v1, $v1, 0x70
    ctx->pc = 0x25a720u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)112) ? 1 : 0);
label_25a724:
    // 0x25a724: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
label_25a728:
    if (ctx->pc == 0x25A728u) {
        ctx->pc = 0x25A72Cu;
        goto label_25a72c;
    }
    ctx->pc = 0x25A724u;
    {
        const bool branch_taken_0x25a724 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a724) {
            ctx->pc = 0x25A788u;
            goto label_25a788;
        }
    }
    ctx->pc = 0x25A72Cu;
label_25a72c:
    // 0x25a72c: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
label_25a730:
    if (ctx->pc == 0x25A730u) {
        ctx->pc = 0x25A730u;
            // 0x25a730: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->pc = 0x25A734u;
        goto label_25a734;
    }
    ctx->pc = 0x25A72Cu;
    {
        const bool branch_taken_0x25a72c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x25A730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A72Cu;
            // 0x25a730: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a72c) {
            ctx->pc = 0x25A740u;
            goto label_25a740;
        }
    }
    ctx->pc = 0x25A734u;
label_25a734:
    // 0x25a734: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
label_25a738:
    if (ctx->pc == 0x25A738u) {
        ctx->pc = 0x25A738u;
            // 0x25a738: 0xaec30000  sw          $v1, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x25A73Cu;
        goto label_25a73c;
    }
    ctx->pc = 0x25A734u;
    {
        const bool branch_taken_0x25a734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A734u;
            // 0x25a738: 0xaec30000  sw          $v1, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a734) {
            ctx->pc = 0x25A680u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25a680;
        }
    }
    ctx->pc = 0x25A73Cu;
label_25a73c:
    // 0x25a73c: 0x0  nop
    ctx->pc = 0x25a73cu;
    // NOP
label_25a740:
    // 0x25a740: 0x8fc30070  lw          $v1, 0x70($fp)
    ctx->pc = 0x25a740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 112)));
label_25a744:
    // 0x25a744: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x25a744u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_25a748:
    // 0x25a748: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25a748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_25a74c:
    // 0x25a74c: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x25a74cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_25a750:
    // 0x25a750: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x25a750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_25a754:
    // 0x25a754: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_25a758:
    if (ctx->pc == 0x25A758u) {
        ctx->pc = 0x25A75Cu;
        goto label_25a75c;
    }
    ctx->pc = 0x25A754u;
    {
        const bool branch_taken_0x25a754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a754) {
            ctx->pc = 0x25A788u;
            goto label_25a788;
        }
    }
    ctx->pc = 0x25A75Cu;
label_25a75c:
    // 0x25a75c: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x25a75cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_25a760:
    // 0x25a760: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25a760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25a764:
    // 0x25a764: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x25a764u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_25a768:
    // 0x25a768: 0x320f809  jalr        $t9
label_25a76c:
    if (ctx->pc == 0x25A76Cu) {
        ctx->pc = 0x25A76Cu;
            // 0x25a76c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25A770u;
        goto label_25a770;
    }
    ctx->pc = 0x25A768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25A770u);
        ctx->pc = 0x25A76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A768u;
            // 0x25a76c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25A770u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25A770u; }
            if (ctx->pc != 0x25A770u) { return; }
        }
        }
    }
    ctx->pc = 0x25A770u;
label_25a770:
    // 0x25a770: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x25a770u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25a774:
    // 0x25a774: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_25a778:
    if (ctx->pc == 0x25A778u) {
        ctx->pc = 0x25A77Cu;
        goto label_25a77c;
    }
    ctx->pc = 0x25A774u;
    {
        const bool branch_taken_0x25a774 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25a774) {
            ctx->pc = 0x25A784u;
            goto label_25a784;
        }
    }
    ctx->pc = 0x25A77Cu;
label_25a77c:
    // 0x25a77c: 0x10000002  b           . + 4 + (0x2 << 2)
label_25a780:
    if (ctx->pc == 0x25A780u) {
        ctx->pc = 0x25A784u;
        goto label_25a784;
    }
    ctx->pc = 0x25A77Cu;
    {
        const bool branch_taken_0x25a77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a77c) {
            ctx->pc = 0x25A788u;
            goto label_25a788;
        }
    }
    ctx->pc = 0x25A784u;
label_25a784:
    // 0x25a784: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x25a784u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_25a788:
    // 0x25a788: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x25a788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25a78c:
    // 0x25a78c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x25a78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25a790:
    // 0x25a790: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x25a790u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_25a794:
    // 0x25a794: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x25a794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_25a798:
    // 0x25a798: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x25a798u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_25a79c:
    // 0x25a79c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x25a79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25a7a0:
    // 0x25a7a0: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x25a7a0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_25a7a4:
    // 0x25a7a4: 0x1083ffd4  beq         $a0, $v1, . + 4 + (-0x2C << 2)
label_25a7a8:
    if (ctx->pc == 0x25A7A8u) {
        ctx->pc = 0x25A7A8u;
            // 0x25a7a8: 0x2fd1821  addu        $v1, $s7, $sp (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 29)));
        ctx->pc = 0x25A7ACu;
        goto label_25a7ac;
    }
    ctx->pc = 0x25A7A4u;
    {
        const bool branch_taken_0x25a7a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x25A7A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A7A4u;
            // 0x25a7a8: 0x2fd1821  addu        $v1, $s7, $sp (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a7a4) {
            ctx->pc = 0x25A6F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25a6f8;
        }
    }
    ctx->pc = 0x25A7ACu;
label_25a7ac:
    // 0x25a7ac: 0x8c6301c0  lw          $v1, 0x1C0($v1)
    ctx->pc = 0x25a7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 448)));
label_25a7b0:
    // 0x25a7b0: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x25a7b0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_25a7b4:
    // 0x25a7b4: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_25a7b8:
    if (ctx->pc == 0x25A7B8u) {
        ctx->pc = 0x25A7B8u;
            // 0x25a7b8: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x25A7BCu;
        goto label_25a7bc;
    }
    ctx->pc = 0x25A7B4u;
    {
        const bool branch_taken_0x25a7b4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x25A7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A7B4u;
            // 0x25a7b8: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a7b4) {
            ctx->pc = 0x25A7C8u;
            goto label_25a7c8;
        }
    }
    ctx->pc = 0x25A7BCu;
label_25a7bc:
    // 0x25a7bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25a7bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25a7c0:
    // 0x25a7c0: 0x10000007  b           . + 4 + (0x7 << 2)
label_25a7c4:
    if (ctx->pc == 0x25A7C4u) {
        ctx->pc = 0x25A7C4u;
            // 0x25a7c4: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x25A7C8u;
        goto label_25a7c8;
    }
    ctx->pc = 0x25A7C0u;
    {
        const bool branch_taken_0x25a7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A7C0u;
            // 0x25a7c4: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a7c0) {
            ctx->pc = 0x25A7E0u;
            goto label_25a7e0;
        }
    }
    ctx->pc = 0x25A7C8u;
label_25a7c8:
    // 0x25a7c8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x25a7c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_25a7cc:
    // 0x25a7cc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x25a7ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_25a7d0:
    // 0x25a7d0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x25a7d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25a7d4:
    // 0x25a7d4: 0x0  nop
    ctx->pc = 0x25a7d4u;
    // NOP
label_25a7d8:
    // 0x25a7d8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x25a7d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_25a7dc:
    // 0x25a7dc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x25a7dcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_25a7e0:
    // 0x25a7e0: 0x2fd1821  addu        $v1, $s7, $sp
    ctx->pc = 0x25a7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 29)));
label_25a7e4:
    // 0x25a7e4: 0xc4610180  lwc1        $f1, 0x180($v1)
    ctx->pc = 0x25a7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25a7e8:
    // 0x25a7e8: 0xc4600170  lwc1        $f0, 0x170($v1)
    ctx->pc = 0x25a7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25a7ec:
    // 0x25a7ec: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x25a7ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_25a7f0:
    // 0x25a7f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25a7f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_25a7f4:
    // 0x25a7f4: 0x1000ffa2  b           . + 4 + (-0x5E << 2)
label_25a7f8:
    if (ctx->pc == 0x25A7F8u) {
        ctx->pc = 0x25A7F8u;
            // 0x25a7f8: 0xe6c00000  swc1        $f0, 0x0($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
        ctx->pc = 0x25A7FCu;
        goto label_25a7fc;
    }
    ctx->pc = 0x25A7F4u;
    {
        const bool branch_taken_0x25a7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A7F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A7F4u;
            // 0x25a7f8: 0xe6c00000  swc1        $f0, 0x0($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a7f4) {
            ctx->pc = 0x25A680u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25a680;
        }
    }
    ctx->pc = 0x25A7FCu;
label_25a7fc:
    // 0x25a7fc: 0x0  nop
    ctx->pc = 0x25a7fcu;
    // NOP
label_25a800:
    // 0x25a800: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x25a800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_25a804:
    // 0x25a804: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x25a804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_25a808:
    // 0x25a808: 0x243082a  slt         $at, $s2, $v1
    ctx->pc = 0x25a808u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_25a80c:
    // 0x25a80c: 0x10200076  beqz        $at, . + 4 + (0x76 << 2)
label_25a810:
    if (ctx->pc == 0x25A810u) {
        ctx->pc = 0x25A814u;
        goto label_25a814;
    }
    ctx->pc = 0x25A80Cu;
    {
        const bool branch_taken_0x25a80c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a80c) {
            ctx->pc = 0x25A9E8u;
            goto label_25a9e8;
        }
    }
    ctx->pc = 0x25A814u;
label_25a814:
    // 0x25a814: 0x8fa601e8  lw          $a2, 0x1E8($sp)
    ctx->pc = 0x25a814u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_25a818:
    // 0x25a818: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x25a818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_25a81c:
    // 0x25a81c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x25a81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_25a820:
    // 0x25a820: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x25a820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_25a824:
    // 0x25a824: 0xc5082b  sltu        $at, $a2, $a1
    ctx->pc = 0x25a824u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_25a828:
    // 0x25a828: 0x1020006f  beqz        $at, . + 4 + (0x6F << 2)
label_25a82c:
    if (ctx->pc == 0x25A82Cu) {
        ctx->pc = 0x25A82Cu;
            // 0x25a82c: 0xa61823  subu        $v1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->pc = 0x25A830u;
        goto label_25a830;
    }
    ctx->pc = 0x25A828u;
    {
        const bool branch_taken_0x25a828 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A828u;
            // 0x25a82c: 0xa61823  subu        $v1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a828) {
            ctx->pc = 0x25A9E8u;
            goto label_25a9e8;
        }
    }
    ctx->pc = 0x25A830u;
label_25a830:
    // 0x25a830: 0x24630007  addiu       $v1, $v1, 0x7
    ctx->pc = 0x25a830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
label_25a834:
    // 0x25a834: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x25a834u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_25a838:
    // 0x25a838: 0x28610009  slti        $at, $v1, 0x9
    ctx->pc = 0x25a838u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_25a83c:
    // 0x25a83c: 0x14200058  bnez        $at, . + 4 + (0x58 << 2)
label_25a840:
    if (ctx->pc == 0x25A840u) {
        ctx->pc = 0x25A840u;
            // 0x25a840: 0x24a4ffc0  addiu       $a0, $a1, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967232));
        ctx->pc = 0x25A844u;
        goto label_25a844;
    }
    ctx->pc = 0x25A83Cu;
    {
        const bool branch_taken_0x25a83c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x25A840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A83Cu;
            // 0x25a840: 0x24a4ffc0  addiu       $a0, $a1, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a83c) {
            ctx->pc = 0x25A9A0u;
            goto label_25a9a0;
        }
    }
    ctx->pc = 0x25A844u;
label_25a844:
    // 0x25a844: 0x3c030f0f  lui         $v1, 0xF0F
    ctx->pc = 0x25a844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3855 << 16));
label_25a848:
    // 0x25a848: 0x34630f0f  ori         $v1, $v1, 0xF0F
    ctx->pc = 0x25a848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3855);
label_25a84c:
    // 0x25a84c: 0x0  nop
    ctx->pc = 0x25a84cu;
    // NOP
label_25a850:
    // 0x25a850: 0x8cc90000  lw          $t1, 0x0($a2)
    ctx->pc = 0x25a850u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_25a854:
    // 0x25a854: 0x8cc80004  lw          $t0, 0x4($a2)
    ctx->pc = 0x25a854u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_25a858:
    // 0x25a858: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x25a858u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
label_25a85c:
    // 0x25a85c: 0x93900  sll         $a3, $t1, 4
    ctx->pc = 0x25a85cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_25a860:
    // 0x25a860: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x25a860u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
label_25a864:
    // 0x25a864: 0x1274825  or          $t1, $t1, $a3
    ctx->pc = 0x25a864u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 7));
label_25a868:
    // 0x25a868: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x25a868u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_25a86c:
    // 0x25a86c: 0xacc90000  sw          $t1, 0x0($a2)
    ctx->pc = 0x25a86cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
label_25a870:
    // 0x25a870: 0x1074025  or          $t0, $t0, $a3
    ctx->pc = 0x25a870u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
label_25a874:
    // 0x25a874: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x25a874u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
label_25a878:
    // 0x25a878: 0x8cc90008  lw          $t1, 0x8($a2)
    ctx->pc = 0x25a878u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_25a87c:
    // 0x25a87c: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x25a87cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_25a880:
    // 0x25a880: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x25a880u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
label_25a884:
    // 0x25a884: 0x93900  sll         $a3, $t1, 4
    ctx->pc = 0x25a884u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_25a888:
    // 0x25a888: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x25a888u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
label_25a88c:
    // 0x25a88c: 0x1274825  or          $t1, $t1, $a3
    ctx->pc = 0x25a88cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 7));
label_25a890:
    // 0x25a890: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x25a890u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_25a894:
    // 0x25a894: 0xacc90008  sw          $t1, 0x8($a2)
    ctx->pc = 0x25a894u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 9));
label_25a898:
    // 0x25a898: 0x1074025  or          $t0, $t0, $a3
    ctx->pc = 0x25a898u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
label_25a89c:
    // 0x25a89c: 0xacc8000c  sw          $t0, 0xC($a2)
    ctx->pc = 0x25a89cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
label_25a8a0:
    // 0x25a8a0: 0x8cc90010  lw          $t1, 0x10($a2)
    ctx->pc = 0x25a8a0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_25a8a4:
    // 0x25a8a4: 0x8cc80014  lw          $t0, 0x14($a2)
    ctx->pc = 0x25a8a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_25a8a8:
    // 0x25a8a8: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x25a8a8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
label_25a8ac:
    // 0x25a8ac: 0x93900  sll         $a3, $t1, 4
    ctx->pc = 0x25a8acu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_25a8b0:
    // 0x25a8b0: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x25a8b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
label_25a8b4:
    // 0x25a8b4: 0x1274825  or          $t1, $t1, $a3
    ctx->pc = 0x25a8b4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 7));
label_25a8b8:
    // 0x25a8b8: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x25a8b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_25a8bc:
    // 0x25a8bc: 0xacc90010  sw          $t1, 0x10($a2)
    ctx->pc = 0x25a8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 9));
label_25a8c0:
    // 0x25a8c0: 0x1074025  or          $t0, $t0, $a3
    ctx->pc = 0x25a8c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
label_25a8c4:
    // 0x25a8c4: 0xacc80014  sw          $t0, 0x14($a2)
    ctx->pc = 0x25a8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 8));
label_25a8c8:
    // 0x25a8c8: 0x8cc90018  lw          $t1, 0x18($a2)
    ctx->pc = 0x25a8c8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_25a8cc:
    // 0x25a8cc: 0x8cc8001c  lw          $t0, 0x1C($a2)
    ctx->pc = 0x25a8ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_25a8d0:
    // 0x25a8d0: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x25a8d0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
label_25a8d4:
    // 0x25a8d4: 0x93900  sll         $a3, $t1, 4
    ctx->pc = 0x25a8d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_25a8d8:
    // 0x25a8d8: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x25a8d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
label_25a8dc:
    // 0x25a8dc: 0x1274825  or          $t1, $t1, $a3
    ctx->pc = 0x25a8dcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 7));
label_25a8e0:
    // 0x25a8e0: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x25a8e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_25a8e4:
    // 0x25a8e4: 0xacc90018  sw          $t1, 0x18($a2)
    ctx->pc = 0x25a8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 9));
label_25a8e8:
    // 0x25a8e8: 0x1074025  or          $t0, $t0, $a3
    ctx->pc = 0x25a8e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
label_25a8ec:
    // 0x25a8ec: 0xacc8001c  sw          $t0, 0x1C($a2)
    ctx->pc = 0x25a8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 8));
label_25a8f0:
    // 0x25a8f0: 0x8cc90020  lw          $t1, 0x20($a2)
    ctx->pc = 0x25a8f0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_25a8f4:
    // 0x25a8f4: 0x8cc80024  lw          $t0, 0x24($a2)
    ctx->pc = 0x25a8f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_25a8f8:
    // 0x25a8f8: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x25a8f8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
label_25a8fc:
    // 0x25a8fc: 0x93900  sll         $a3, $t1, 4
    ctx->pc = 0x25a8fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_25a900:
    // 0x25a900: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x25a900u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
label_25a904:
    // 0x25a904: 0x1274825  or          $t1, $t1, $a3
    ctx->pc = 0x25a904u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 7));
label_25a908:
    // 0x25a908: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x25a908u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_25a90c:
    // 0x25a90c: 0xacc90020  sw          $t1, 0x20($a2)
    ctx->pc = 0x25a90cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 9));
label_25a910:
    // 0x25a910: 0x1074025  or          $t0, $t0, $a3
    ctx->pc = 0x25a910u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
label_25a914:
    // 0x25a914: 0xacc80024  sw          $t0, 0x24($a2)
    ctx->pc = 0x25a914u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 8));
label_25a918:
    // 0x25a918: 0x8cc90028  lw          $t1, 0x28($a2)
    ctx->pc = 0x25a918u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_25a91c:
    // 0x25a91c: 0x8cc8002c  lw          $t0, 0x2C($a2)
    ctx->pc = 0x25a91cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
label_25a920:
    // 0x25a920: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x25a920u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
label_25a924:
    // 0x25a924: 0x93900  sll         $a3, $t1, 4
    ctx->pc = 0x25a924u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_25a928:
    // 0x25a928: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x25a928u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
label_25a92c:
    // 0x25a92c: 0x1274825  or          $t1, $t1, $a3
    ctx->pc = 0x25a92cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 7));
label_25a930:
    // 0x25a930: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x25a930u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_25a934:
    // 0x25a934: 0xacc90028  sw          $t1, 0x28($a2)
    ctx->pc = 0x25a934u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 9));
label_25a938:
    // 0x25a938: 0x1074025  or          $t0, $t0, $a3
    ctx->pc = 0x25a938u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
label_25a93c:
    // 0x25a93c: 0xacc8002c  sw          $t0, 0x2C($a2)
    ctx->pc = 0x25a93cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 8));
label_25a940:
    // 0x25a940: 0x8cc90030  lw          $t1, 0x30($a2)
    ctx->pc = 0x25a940u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_25a944:
    // 0x25a944: 0x8cc80034  lw          $t0, 0x34($a2)
    ctx->pc = 0x25a944u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_25a948:
    // 0x25a948: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x25a948u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
label_25a94c:
    // 0x25a94c: 0x93900  sll         $a3, $t1, 4
    ctx->pc = 0x25a94cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_25a950:
    // 0x25a950: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x25a950u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
label_25a954:
    // 0x25a954: 0x1274825  or          $t1, $t1, $a3
    ctx->pc = 0x25a954u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 7));
label_25a958:
    // 0x25a958: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x25a958u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_25a95c:
    // 0x25a95c: 0xacc90030  sw          $t1, 0x30($a2)
    ctx->pc = 0x25a95cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 9));
label_25a960:
    // 0x25a960: 0x1074025  or          $t0, $t0, $a3
    ctx->pc = 0x25a960u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
label_25a964:
    // 0x25a964: 0xacc80034  sw          $t0, 0x34($a2)
    ctx->pc = 0x25a964u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 8));
label_25a968:
    // 0x25a968: 0x8cc90038  lw          $t1, 0x38($a2)
    ctx->pc = 0x25a968u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
label_25a96c:
    // 0x25a96c: 0x8cc8003c  lw          $t0, 0x3C($a2)
    ctx->pc = 0x25a96cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
label_25a970:
    // 0x25a970: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x25a970u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
label_25a974:
    // 0x25a974: 0x93900  sll         $a3, $t1, 4
    ctx->pc = 0x25a974u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_25a978:
    // 0x25a978: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x25a978u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
label_25a97c:
    // 0x25a97c: 0x1274825  or          $t1, $t1, $a3
    ctx->pc = 0x25a97cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 7));
label_25a980:
    // 0x25a980: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x25a980u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_25a984:
    // 0x25a984: 0xacc90038  sw          $t1, 0x38($a2)
    ctx->pc = 0x25a984u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 9));
label_25a988:
    // 0x25a988: 0x1074025  or          $t0, $t0, $a3
    ctx->pc = 0x25a988u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
label_25a98c:
    // 0x25a98c: 0xacc8003c  sw          $t0, 0x3C($a2)
    ctx->pc = 0x25a98cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 8));
label_25a990:
    // 0x25a990: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x25a990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
label_25a994:
    // 0x25a994: 0xc4382b  sltu        $a3, $a2, $a0
    ctx->pc = 0x25a994u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_25a998:
    // 0x25a998: 0x14e0ffad  bnez        $a3, . + 4 + (-0x53 << 2)
label_25a99c:
    if (ctx->pc == 0x25A99Cu) {
        ctx->pc = 0x25A9A0u;
        goto label_25a9a0;
    }
    ctx->pc = 0x25A998u;
    {
        const bool branch_taken_0x25a998 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a998) {
            ctx->pc = 0x25A850u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25a850;
        }
    }
    ctx->pc = 0x25A9A0u;
label_25a9a0:
    // 0x25a9a0: 0xc5082b  sltu        $at, $a2, $a1
    ctx->pc = 0x25a9a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_25a9a4:
    // 0x25a9a4: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_25a9a8:
    if (ctx->pc == 0x25A9A8u) {
        ctx->pc = 0x25A9A8u;
            // 0x25a9a8: 0x3c030f0f  lui         $v1, 0xF0F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3855 << 16));
        ctx->pc = 0x25A9ACu;
        goto label_25a9ac;
    }
    ctx->pc = 0x25A9A4u;
    {
        const bool branch_taken_0x25a9a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A9A4u;
            // 0x25a9a8: 0x3c030f0f  lui         $v1, 0xF0F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3855 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a9a4) {
            ctx->pc = 0x25A9E8u;
            goto label_25a9e8;
        }
    }
    ctx->pc = 0x25A9ACu;
label_25a9ac:
    // 0x25a9ac: 0x34640f0f  ori         $a0, $v1, 0xF0F
    ctx->pc = 0x25a9acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3855);
label_25a9b0:
    // 0x25a9b0: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x25a9b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_25a9b4:
    // 0x25a9b4: 0x8cc70004  lw          $a3, 0x4($a2)
    ctx->pc = 0x25a9b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_25a9b8:
    // 0x25a9b8: 0x1044024  and         $t0, $t0, $a0
    ctx->pc = 0x25a9b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
label_25a9bc:
    // 0x25a9bc: 0x81900  sll         $v1, $t0, 4
    ctx->pc = 0x25a9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_25a9c0:
    // 0x25a9c0: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x25a9c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
label_25a9c4:
    // 0x25a9c4: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x25a9c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
label_25a9c8:
    // 0x25a9c8: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x25a9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_25a9cc:
    // 0x25a9cc: 0xacc80000  sw          $t0, 0x0($a2)
    ctx->pc = 0x25a9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
label_25a9d0:
    // 0x25a9d0: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x25a9d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_25a9d4:
    // 0x25a9d4: 0xacc70004  sw          $a3, 0x4($a2)
    ctx->pc = 0x25a9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 7));
label_25a9d8:
    // 0x25a9d8: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x25a9d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_25a9dc:
    // 0x25a9dc: 0xc5182b  sltu        $v1, $a2, $a1
    ctx->pc = 0x25a9dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_25a9e0:
    // 0x25a9e0: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_25a9e4:
    if (ctx->pc == 0x25A9E4u) {
        ctx->pc = 0x25A9E8u;
        goto label_25a9e8;
    }
    ctx->pc = 0x25A9E0u;
    {
        const bool branch_taken_0x25a9e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a9e0) {
            ctx->pc = 0x25A9B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25a9b0;
        }
    }
    ctx->pc = 0x25A9E8u;
label_25a9e8:
    // 0x25a9e8: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x25a9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_25a9ec:
    // 0x25a9ec: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x25a9ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_25a9f0:
    // 0x25a9f0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x25a9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_25a9f4:
    // 0x25a9f4: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x25a9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
label_25a9f8:
    // 0x25a9f8: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x25a9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_25a9fc:
    // 0x25a9fc: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x25a9fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_25aa00:
    // 0x25aa00: 0x1460fe71  bnez        $v1, . + 4 + (-0x18F << 2)
label_25aa04:
    if (ctx->pc == 0x25AA04u) {
        ctx->pc = 0x25AA04u;
            // 0x25aa04: 0x293a021  addu        $s4, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->pc = 0x25AA08u;
        goto label_25aa08;
    }
    ctx->pc = 0x25AA00u;
    {
        const bool branch_taken_0x25aa00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25AA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AA00u;
            // 0x25aa04: 0x293a021  addu        $s4, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aa00) {
            ctx->pc = 0x25A3C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25a3c8;
        }
    }
    ctx->pc = 0x25AA08u;
label_25aa08:
    // 0x25aa08: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x25aa08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_25aa0c:
    // 0x25aa0c: 0x8fa501d0  lw          $a1, 0x1D0($sp)
    ctx->pc = 0x25aa0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_25aa10:
    // 0x25aa10: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x25aa10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_25aa14:
    // 0x25aa14: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x25aa14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_25aa18:
    // 0x25aa18: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x25aa18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_25aa1c:
    // 0x25aa1c: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
label_25aa20:
    if (ctx->pc == 0x25AA20u) {
        ctx->pc = 0x25AA24u;
        goto label_25aa24;
    }
    ctx->pc = 0x25AA1Cu;
    {
        const bool branch_taken_0x25aa1c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x25aa1c) {
            ctx->pc = 0x25AA38u;
            goto label_25aa38;
        }
    }
    ctx->pc = 0x25AA24u;
label_25aa24:
    // 0x25aa24: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25aa24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25aa28:
    // 0x25aa28: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x25aa28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_25aa2c:
    // 0x25aa2c: 0x320f809  jalr        $t9
label_25aa30:
    if (ctx->pc == 0x25AA30u) {
        ctx->pc = 0x25AA34u;
        goto label_25aa34;
    }
    ctx->pc = 0x25AA2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25AA34u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x25AA34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25AA34u; }
            if (ctx->pc != 0x25AA34u) { return; }
        }
        }
    }
    ctx->pc = 0x25AA34u;
label_25aa34:
    // 0x25aa34: 0x0  nop
    ctx->pc = 0x25aa34u;
    // NOP
label_25aa38:
    // 0x25aa38: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x25aa38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_25aa3c:
    // 0x25aa3c: 0x8fa501e8  lw          $a1, 0x1E8($sp)
    ctx->pc = 0x25aa3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_25aa40:
    // 0x25aa40: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x25aa40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_25aa44:
    // 0x25aa44: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x25aa44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_25aa48:
    // 0x25aa48: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x25aa48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_25aa4c:
    // 0x25aa4c: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
label_25aa50:
    if (ctx->pc == 0x25AA50u) {
        ctx->pc = 0x25AA54u;
        goto label_25aa54;
    }
    ctx->pc = 0x25AA4Cu;
    {
        const bool branch_taken_0x25aa4c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x25aa4c) {
            ctx->pc = 0x25AA68u;
            goto label_25aa68;
        }
    }
    ctx->pc = 0x25AA54u;
label_25aa54:
    // 0x25aa54: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25aa54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25aa58:
    // 0x25aa58: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x25aa58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_25aa5c:
    // 0x25aa5c: 0x320f809  jalr        $t9
label_25aa60:
    if (ctx->pc == 0x25AA60u) {
        ctx->pc = 0x25AA64u;
        goto label_25aa64;
    }
    ctx->pc = 0x25AA5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25AA64u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x25AA64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25AA64u; }
            if (ctx->pc != 0x25AA64u) { return; }
        }
        }
    }
    ctx->pc = 0x25AA64u;
label_25aa64:
    // 0x25aa64: 0x0  nop
    ctx->pc = 0x25aa64u;
    // NOP
label_25aa68:
    // 0x25aa68: 0x10000009  b           . + 4 + (0x9 << 2)
label_25aa6c:
    if (ctx->pc == 0x25AA6Cu) {
        ctx->pc = 0x25AA70u;
        goto label_25aa70;
    }
    ctx->pc = 0x25AA68u;
    {
        const bool branch_taken_0x25aa68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25aa68) {
            ctx->pc = 0x25AA90u;
            goto label_25aa90;
        }
    }
    ctx->pc = 0x25AA70u;
label_25aa70:
    // 0x25aa70: 0x247101c0  addiu       $s1, $v1, 0x1C0
    ctx->pc = 0x25aa70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 448));
label_25aa74:
    // 0x25aa74: 0x247001b0  addiu       $s0, $v1, 0x1B0
    ctx->pc = 0x25aa74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 432));
label_25aa78:
    // 0x25aa78: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x25aa78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_25aa7c:
    // 0x25aa7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25aa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25aa80:
    // 0x25aa80: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x25aa80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_25aa84:
    // 0x25aa84: 0x1000ff1c  b           . + 4 + (-0xE4 << 2)
label_25aa88:
    if (ctx->pc == 0x25AA88u) {
        ctx->pc = 0x25AA88u;
            // 0x25aa88: 0xafa300b0  sw          $v1, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
        ctx->pc = 0x25AA8Cu;
        goto label_25aa8c;
    }
    ctx->pc = 0x25AA84u;
    {
        const bool branch_taken_0x25aa84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AA88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AA84u;
            // 0x25aa88: 0xafa300b0  sw          $v1, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aa84) {
            ctx->pc = 0x25A6F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25a6f8;
        }
    }
    ctx->pc = 0x25AA8Cu;
label_25aa8c:
    // 0x25aa8c: 0x0  nop
    ctx->pc = 0x25aa8cu;
    // NOP
label_25aa90:
    // 0x25aa90: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x25aa90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_25aa94:
    // 0x25aa94: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x25aa94u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_25aa98:
    // 0x25aa98: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x25aa98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_25aa9c:
    // 0x25aa9c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x25aa9cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_25aaa0:
    // 0x25aaa0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x25aaa0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_25aaa4:
    // 0x25aaa4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x25aaa4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_25aaa8:
    // 0x25aaa8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x25aaa8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_25aaac:
    // 0x25aaac: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x25aaacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25aab0:
    // 0x25aab0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x25aab0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25aab4:
    // 0x25aab4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x25aab4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25aab8:
    // 0x25aab8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25aab8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25aabc:
    // 0x25aabc: 0x3e00008  jr          $ra
label_25aac0:
    if (ctx->pc == 0x25AAC0u) {
        ctx->pc = 0x25AAC0u;
            // 0x25aac0: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = 0x25AAC4u;
        goto label_25aac4;
    }
    ctx->pc = 0x25AABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25AAC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AABCu;
            // 0x25aac0: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25AAC4u;
label_25aac4:
    // 0x25aac4: 0x0  nop
    ctx->pc = 0x25aac4u;
    // NOP
label_25aac8:
    // 0x25aac8: 0x0  nop
    ctx->pc = 0x25aac8u;
    // NOP
label_25aacc:
    // 0x25aacc: 0x0  nop
    ctx->pc = 0x25aaccu;
    // NOP
label_25aad0:
    // 0x25aad0: 0x27bdfdc0  addiu       $sp, $sp, -0x240
    ctx->pc = 0x25aad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966720));
label_25aad4:
    // 0x25aad4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x25aad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_25aad8:
    // 0x25aad8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x25aad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_25aadc:
    // 0x25aadc: 0x27a30118  addiu       $v1, $sp, 0x118
    ctx->pc = 0x25aadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_25aae0:
    // 0x25aae0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x25aae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_25aae4:
    // 0x25aae4: 0x27a7011c  addiu       $a3, $sp, 0x11C
    ctx->pc = 0x25aae4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
label_25aae8:
    // 0x25aae8: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x25aae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_25aaec:
    // 0x25aaec: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x25aaecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_25aaf0:
    // 0x25aaf0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x25aaf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_25aaf4:
    // 0x25aaf4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x25aaf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_25aaf8:
    // 0x25aaf8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x25aaf8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25aafc:
    // 0x25aafc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x25aafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_25ab00:
    // 0x25ab00: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x25ab00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_25ab04:
    // 0x25ab04: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x25ab04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_25ab08:
    // 0x25ab08: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x25ab08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_25ab0c:
    // 0x25ab0c: 0x27a60114  addiu       $a2, $sp, 0x114
    ctx->pc = 0x25ab0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
label_25ab10:
    // 0x25ab10: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25ab10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_25ab14:
    // 0x25ab14: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x25ab14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_25ab18:
    // 0x25ab18: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x25ab18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25ab1c:
    // 0x25ab1c: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x25ab1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ab20:
    // 0x25ab20: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25ab20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_25ab24:
    // 0x25ab24: 0xe7a00190  swc1        $f0, 0x190($sp)
    ctx->pc = 0x25ab24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_25ab28:
    // 0x25ab28: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x25ab28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25ab2c:
    // 0x25ab2c: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x25ab2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ab30:
    // 0x25ab30: 0xc7a10190  lwc1        $f1, 0x190($sp)
    ctx->pc = 0x25ab30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25ab34:
    // 0x25ab34: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x25ab34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_25ab38:
    // 0x25ab38: 0xe7a00194  swc1        $f0, 0x194($sp)
    ctx->pc = 0x25ab38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
label_25ab3c:
    // 0x25ab3c: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x25ab3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25ab40:
    // 0x25ab40: 0xc4a20028  lwc1        $f2, 0x28($a1)
    ctx->pc = 0x25ab40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25ab44:
    // 0x25ab44: 0xc7a00194  lwc1        $f0, 0x194($sp)
    ctx->pc = 0x25ab44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ab48:
    // 0x25ab48: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x25ab48u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_25ab4c:
    // 0x25ab4c: 0xe7a20198  swc1        $f2, 0x198($sp)
    ctx->pc = 0x25ab4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_25ab50:
    // 0x25ab50: 0xc4a3000c  lwc1        $f3, 0xC($a1)
    ctx->pc = 0x25ab50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25ab54:
    // 0x25ab54: 0xc4a2002c  lwc1        $f2, 0x2C($a1)
    ctx->pc = 0x25ab54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25ab58:
    // 0x25ab58: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x25ab58u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_25ab5c:
    // 0x25ab5c: 0xe7a2019c  swc1        $f2, 0x19C($sp)
    ctx->pc = 0x25ab5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
label_25ab60:
    // 0x25ab60: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x25ab60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25ab64:
    // 0x25ab64: 0xc4a20020  lwc1        $f2, 0x20($a1)
    ctx->pc = 0x25ab64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25ab68:
    // 0x25ab68: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x25ab68u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_25ab6c:
    // 0x25ab6c: 0xe7a20180  swc1        $f2, 0x180($sp)
    ctx->pc = 0x25ab6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_25ab70:
    // 0x25ab70: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x25ab70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25ab74:
    // 0x25ab74: 0xc4a20024  lwc1        $f2, 0x24($a1)
    ctx->pc = 0x25ab74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25ab78:
    // 0x25ab78: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x25ab78u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_25ab7c:
    // 0x25ab7c: 0xe7a20184  swc1        $f2, 0x184($sp)
    ctx->pc = 0x25ab7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_25ab80:
    // 0x25ab80: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x25ab80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25ab84:
    // 0x25ab84: 0xc4a20028  lwc1        $f2, 0x28($a1)
    ctx->pc = 0x25ab84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25ab88:
    // 0x25ab88: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x25ab88u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_25ab8c:
    // 0x25ab8c: 0xe7a20188  swc1        $f2, 0x188($sp)
    ctx->pc = 0x25ab8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_25ab90:
    // 0x25ab90: 0xc4a3000c  lwc1        $f3, 0xC($a1)
    ctx->pc = 0x25ab90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25ab94:
    // 0x25ab94: 0xc4a2002c  lwc1        $f2, 0x2C($a1)
    ctx->pc = 0x25ab94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25ab98:
    // 0x25ab98: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x25ab98u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_25ab9c:
    // 0x25ab9c: 0xe7a2018c  swc1        $f2, 0x18C($sp)
    ctx->pc = 0x25ab9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
label_25aba0:
    // 0x25aba0: 0xc4820040  lwc1        $f2, 0x40($a0)
    ctx->pc = 0x25aba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25aba4:
    // 0x25aba4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x25aba4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_25aba8:
    // 0x25aba8: 0xe7a10110  swc1        $f1, 0x110($sp)
    ctx->pc = 0x25aba8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_25abac:
    // 0x25abac: 0xc4810044  lwc1        $f1, 0x44($a0)
    ctx->pc = 0x25abacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25abb0:
    // 0x25abb0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25abb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_25abb4:
    // 0x25abb4: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x25abb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_25abb8:
    // 0x25abb8: 0xc4810048  lwc1        $f1, 0x48($a0)
    ctx->pc = 0x25abb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25abbc:
    // 0x25abbc: 0xc7a00198  lwc1        $f0, 0x198($sp)
    ctx->pc = 0x25abbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25abc0:
    // 0x25abc0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25abc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_25abc4:
    // 0x25abc4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x25abc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_25abc8:
    // 0x25abc8: 0xc481004c  lwc1        $f1, 0x4C($a0)
    ctx->pc = 0x25abc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25abcc:
    // 0x25abcc: 0xc7a0019c  lwc1        $f0, 0x19C($sp)
    ctx->pc = 0x25abccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25abd0:
    // 0x25abd0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25abd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_25abd4:
    // 0x25abd4: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x25abd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_25abd8:
    // 0x25abd8: 0xc4810060  lwc1        $f1, 0x60($a0)
    ctx->pc = 0x25abd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25abdc:
    // 0x25abdc: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x25abdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25abe0:
    // 0x25abe0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25abe0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_25abe4:
    // 0x25abe4: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x25abe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_25abe8:
    // 0x25abe8: 0xc4810064  lwc1        $f1, 0x64($a0)
    ctx->pc = 0x25abe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25abec:
    // 0x25abec: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x25abecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25abf0:
    // 0x25abf0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25abf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_25abf4:
    // 0x25abf4: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x25abf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_25abf8:
    // 0x25abf8: 0xc4810068  lwc1        $f1, 0x68($a0)
    ctx->pc = 0x25abf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25abfc:
    // 0x25abfc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25abfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ac00:
    // 0x25ac00: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25ac00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_25ac04:
    // 0x25ac04: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x25ac04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_25ac08:
    // 0x25ac08: 0xc481006c  lwc1        $f1, 0x6C($a0)
    ctx->pc = 0x25ac08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25ac0c:
    // 0x25ac0c: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x25ac0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ac10:
    // 0x25ac10: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25ac10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_25ac14:
    // 0x25ac14: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x25ac14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_25ac18:
    // 0x25ac18: 0xc421cf90  lwc1        $f1, -0x3070($at)
    ctx->pc = 0x25ac18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294954896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25ac1c:
    // 0x25ac1c: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x25ac1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ac20:
    // 0x25ac20: 0xc7a20110  lwc1        $f2, 0x110($sp)
    ctx->pc = 0x25ac20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25ac24:
    // 0x25ac24: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x25ac24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25ac28:
    // 0x25ac28: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_25ac2c:
    if (ctx->pc == 0x25AC2Cu) {
        ctx->pc = 0x25AC2Cu;
            // 0x25ac2c: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25AC30u;
        goto label_25ac30;
    }
    ctx->pc = 0x25AC28u;
    {
        const bool branch_taken_0x25ac28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25AC2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AC28u;
            // 0x25ac2c: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ac28) {
            ctx->pc = 0x25AC38u;
            goto label_25ac38;
        }
    }
    ctx->pc = 0x25AC30u;
label_25ac30:
    // 0x25ac30: 0x10000002  b           . + 4 + (0x2 << 2)
label_25ac34:
    if (ctx->pc == 0x25AC34u) {
        ctx->pc = 0x25AC38u;
        goto label_25ac38;
    }
    ctx->pc = 0x25AC30u;
    {
        const bool branch_taken_0x25ac30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ac30) {
            ctx->pc = 0x25AC3Cu;
            goto label_25ac3c;
        }
    }
    ctx->pc = 0x25AC38u;
label_25ac38:
    // 0x25ac38: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x25ac38u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_25ac3c:
    // 0x25ac3c: 0x3c170060  lui         $s7, 0x60
    ctx->pc = 0x25ac3cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)96 << 16));
label_25ac40:
    // 0x25ac40: 0x27a80114  addiu       $t0, $sp, 0x114
    ctx->pc = 0x25ac40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
label_25ac44:
    // 0x25ac44: 0xe7a20110  swc1        $f2, 0x110($sp)
    ctx->pc = 0x25ac44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_25ac48:
    // 0x25ac48: 0x26f7cf94  addiu       $s7, $s7, -0x306C
    ctx->pc = 0x25ac48u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294954900));
label_25ac4c:
    // 0x25ac4c: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x25ac4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ac50:
    // 0x25ac50: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x25ac50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25ac54:
    // 0x25ac54: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25ac54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25ac58:
    // 0x25ac58: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_25ac5c:
    if (ctx->pc == 0x25AC5Cu) {
        ctx->pc = 0x25AC60u;
        goto label_25ac60;
    }
    ctx->pc = 0x25AC58u;
    {
        const bool branch_taken_0x25ac58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25ac58) {
            ctx->pc = 0x25AC68u;
            goto label_25ac68;
        }
    }
    ctx->pc = 0x25AC60u;
label_25ac60:
    // 0x25ac60: 0x10000002  b           . + 4 + (0x2 << 2)
label_25ac64:
    if (ctx->pc == 0x25AC64u) {
        ctx->pc = 0x25AC68u;
        goto label_25ac68;
    }
    ctx->pc = 0x25AC60u;
    {
        const bool branch_taken_0x25ac60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ac60) {
            ctx->pc = 0x25AC6Cu;
            goto label_25ac6c;
        }
    }
    ctx->pc = 0x25AC68u;
label_25ac68:
    // 0x25ac68: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x25ac68u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_25ac6c:
    // 0x25ac6c: 0x3c160060  lui         $s6, 0x60
    ctx->pc = 0x25ac6cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)96 << 16));
label_25ac70:
    // 0x25ac70: 0x27a50118  addiu       $a1, $sp, 0x118
    ctx->pc = 0x25ac70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_25ac74:
    // 0x25ac74: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x25ac74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_25ac78:
    // 0x25ac78: 0x26d6cf98  addiu       $s6, $s6, -0x3068
    ctx->pc = 0x25ac78u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294954904));
label_25ac7c:
    // 0x25ac7c: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x25ac7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ac80:
    // 0x25ac80: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x25ac80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25ac84:
    // 0x25ac84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25ac84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25ac88:
    // 0x25ac88: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_25ac8c:
    if (ctx->pc == 0x25AC8Cu) {
        ctx->pc = 0x25AC90u;
        goto label_25ac90;
    }
    ctx->pc = 0x25AC88u;
    {
        const bool branch_taken_0x25ac88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25ac88) {
            ctx->pc = 0x25AC98u;
            goto label_25ac98;
        }
    }
    ctx->pc = 0x25AC90u;
label_25ac90:
    // 0x25ac90: 0x10000002  b           . + 4 + (0x2 << 2)
label_25ac94:
    if (ctx->pc == 0x25AC94u) {
        ctx->pc = 0x25AC98u;
        goto label_25ac98;
    }
    ctx->pc = 0x25AC90u;
    {
        const bool branch_taken_0x25ac90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ac90) {
            ctx->pc = 0x25AC9Cu;
            goto label_25ac9c;
        }
    }
    ctx->pc = 0x25AC98u;
label_25ac98:
    // 0x25ac98: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x25ac98u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_25ac9c:
    // 0x25ac9c: 0x3c120060  lui         $s2, 0x60
    ctx->pc = 0x25ac9cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)96 << 16));
label_25aca0:
    // 0x25aca0: 0x27a4011c  addiu       $a0, $sp, 0x11C
    ctx->pc = 0x25aca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
label_25aca4:
    // 0x25aca4: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x25aca4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_25aca8:
    // 0x25aca8: 0x2652cf9c  addiu       $s2, $s2, -0x3064
    ctx->pc = 0x25aca8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954908));
label_25acac:
    // 0x25acac: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x25acacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25acb0:
    // 0x25acb0: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x25acb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25acb4:
    // 0x25acb4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25acb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25acb8:
    // 0x25acb8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_25acbc:
    if (ctx->pc == 0x25ACBCu) {
        ctx->pc = 0x25ACC0u;
        goto label_25acc0;
    }
    ctx->pc = 0x25ACB8u;
    {
        const bool branch_taken_0x25acb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25acb8) {
            ctx->pc = 0x25ACC8u;
            goto label_25acc8;
        }
    }
    ctx->pc = 0x25ACC0u;
label_25acc0:
    // 0x25acc0: 0x10000003  b           . + 4 + (0x3 << 2)
label_25acc4:
    if (ctx->pc == 0x25ACC4u) {
        ctx->pc = 0x25ACC4u;
            // 0x25acc4: 0xe4e10000  swc1        $f1, 0x0($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->pc = 0x25ACC8u;
        goto label_25acc8;
    }
    ctx->pc = 0x25ACC0u;
    {
        const bool branch_taken_0x25acc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ACC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25ACC0u;
            // 0x25acc4: 0xe4e10000  swc1        $f1, 0x0($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25acc0) {
            ctx->pc = 0x25ACD0u;
            goto label_25acd0;
        }
    }
    ctx->pc = 0x25ACC8u;
label_25acc8:
    // 0x25acc8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x25acc8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_25accc:
    // 0x25accc: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x25acccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_25acd0:
    // 0x25acd0: 0x3c010064  lui         $at, 0x64
    ctx->pc = 0x25acd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
label_25acd4:
    // 0x25acd4: 0xc421f940  lwc1        $f1, -0x6C0($at)
    ctx->pc = 0x25acd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25acd8:
    // 0x25acd8: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x25acd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25acdc:
    // 0x25acdc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x25acdcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25ace0:
    // 0x25ace0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_25ace4:
    if (ctx->pc == 0x25ACE4u) {
        ctx->pc = 0x25ACE4u;
            // 0x25ace4: 0xc7a20110  lwc1        $f2, 0x110($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x25ACE8u;
        goto label_25ace8;
    }
    ctx->pc = 0x25ACE0u;
    {
        const bool branch_taken_0x25ace0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25ACE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25ACE0u;
            // 0x25ace4: 0xc7a20110  lwc1        $f2, 0x110($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ace0) {
            ctx->pc = 0x25ACF0u;
            goto label_25acf0;
        }
    }
    ctx->pc = 0x25ACE8u;
label_25ace8:
    // 0x25ace8: 0x10000002  b           . + 4 + (0x2 << 2)
label_25acec:
    if (ctx->pc == 0x25ACECu) {
        ctx->pc = 0x25ACF0u;
        goto label_25acf0;
    }
    ctx->pc = 0x25ACE8u;
    {
        const bool branch_taken_0x25ace8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ace8) {
            ctx->pc = 0x25ACF4u;
            goto label_25acf4;
        }
    }
    ctx->pc = 0x25ACF0u;
label_25acf0:
    // 0x25acf0: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x25acf0u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_25acf4:
    // 0x25acf4: 0x3c110064  lui         $s1, 0x64
    ctx->pc = 0x25acf4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)100 << 16));
label_25acf8:
    // 0x25acf8: 0xe7a20110  swc1        $f2, 0x110($sp)
    ctx->pc = 0x25acf8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_25acfc:
    // 0x25acfc: 0x2631f944  addiu       $s1, $s1, -0x6BC
    ctx->pc = 0x25acfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294965572));
label_25ad00:
    // 0x25ad00: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x25ad00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25ad04:
    // 0x25ad04: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x25ad04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ad08:
    // 0x25ad08: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x25ad08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25ad0c:
    // 0x25ad0c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_25ad10:
    if (ctx->pc == 0x25AD10u) {
        ctx->pc = 0x25AD14u;
        goto label_25ad14;
    }
    ctx->pc = 0x25AD0Cu;
    {
        const bool branch_taken_0x25ad0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25ad0c) {
            ctx->pc = 0x25AD1Cu;
            goto label_25ad1c;
        }
    }
    ctx->pc = 0x25AD14u;
label_25ad14:
    // 0x25ad14: 0x10000002  b           . + 4 + (0x2 << 2)
label_25ad18:
    if (ctx->pc == 0x25AD18u) {
        ctx->pc = 0x25AD1Cu;
        goto label_25ad1c;
    }
    ctx->pc = 0x25AD14u;
    {
        const bool branch_taken_0x25ad14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ad14) {
            ctx->pc = 0x25AD20u;
            goto label_25ad20;
        }
    }
    ctx->pc = 0x25AD1Cu;
label_25ad1c:
    // 0x25ad1c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x25ad1cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_25ad20:
    // 0x25ad20: 0x3c100064  lui         $s0, 0x64
    ctx->pc = 0x25ad20u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)100 << 16));
label_25ad24:
    // 0x25ad24: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x25ad24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_25ad28:
    // 0x25ad28: 0x2610f948  addiu       $s0, $s0, -0x6B8
    ctx->pc = 0x25ad28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965576));
label_25ad2c:
    // 0x25ad2c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x25ad2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25ad30:
    // 0x25ad30: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x25ad30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ad34:
    // 0x25ad34: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x25ad34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25ad38:
    // 0x25ad38: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_25ad3c:
    if (ctx->pc == 0x25AD3Cu) {
        ctx->pc = 0x25AD40u;
        goto label_25ad40;
    }
    ctx->pc = 0x25AD38u;
    {
        const bool branch_taken_0x25ad38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25ad38) {
            ctx->pc = 0x25AD48u;
            goto label_25ad48;
        }
    }
    ctx->pc = 0x25AD40u;
label_25ad40:
    // 0x25ad40: 0x10000002  b           . + 4 + (0x2 << 2)
label_25ad44:
    if (ctx->pc == 0x25AD44u) {
        ctx->pc = 0x25AD48u;
        goto label_25ad48;
    }
    ctx->pc = 0x25AD40u;
    {
        const bool branch_taken_0x25ad40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ad40) {
            ctx->pc = 0x25AD4Cu;
            goto label_25ad4c;
        }
    }
    ctx->pc = 0x25AD48u;
label_25ad48:
    // 0x25ad48: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x25ad48u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_25ad4c:
    // 0x25ad4c: 0x3c0f0064  lui         $t7, 0x64
    ctx->pc = 0x25ad4cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)100 << 16));
label_25ad50:
    // 0x25ad50: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x25ad50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_25ad54:
    // 0x25ad54: 0x25eff94c  addiu       $t7, $t7, -0x6B4
    ctx->pc = 0x25ad54u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294965580));
label_25ad58:
    // 0x25ad58: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x25ad58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25ad5c:
    // 0x25ad5c: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x25ad5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ad60:
    // 0x25ad60: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x25ad60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25ad64:
    // 0x25ad64: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_25ad68:
    if (ctx->pc == 0x25AD68u) {
        ctx->pc = 0x25AD6Cu;
        goto label_25ad6c;
    }
    ctx->pc = 0x25AD64u;
    {
        const bool branch_taken_0x25ad64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25ad64) {
            ctx->pc = 0x25AD74u;
            goto label_25ad74;
        }
    }
    ctx->pc = 0x25AD6Cu;
label_25ad6c:
    // 0x25ad6c: 0x10000003  b           . + 4 + (0x3 << 2)
label_25ad70:
    if (ctx->pc == 0x25AD70u) {
        ctx->pc = 0x25AD70u;
            // 0x25ad70: 0xe4e10000  swc1        $f1, 0x0($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->pc = 0x25AD74u;
        goto label_25ad74;
    }
    ctx->pc = 0x25AD6Cu;
    {
        const bool branch_taken_0x25ad6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AD70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AD6Cu;
            // 0x25ad70: 0xe4e10000  swc1        $f1, 0x0($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ad6c) {
            ctx->pc = 0x25AD7Cu;
            goto label_25ad7c;
        }
    }
    ctx->pc = 0x25AD74u;
label_25ad74:
    // 0x25ad74: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x25ad74u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_25ad78:
    // 0x25ad78: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x25ad78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_25ad7c:
    // 0x25ad7c: 0x3c010064  lui         $at, 0x64
    ctx->pc = 0x25ad7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
label_25ad80:
    // 0x25ad80: 0xc420f900  lwc1        $f0, -0x700($at)
    ctx->pc = 0x25ad80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ad84:
    // 0x25ad84: 0x3c0a0064  lui         $t2, 0x64
    ctx->pc = 0x25ad84u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)100 << 16));
label_25ad88:
    // 0x25ad88: 0xc7a10110  lwc1        $f1, 0x110($sp)
    ctx->pc = 0x25ad88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25ad8c:
    // 0x25ad8c: 0x3c090064  lui         $t1, 0x64
    ctx->pc = 0x25ad8cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)100 << 16));
label_25ad90:
    // 0x25ad90: 0x3c080064  lui         $t0, 0x64
    ctx->pc = 0x25ad90u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)100 << 16));
label_25ad94:
    // 0x25ad94: 0x254af904  addiu       $t2, $t2, -0x6FC
    ctx->pc = 0x25ad94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294965508));
label_25ad98:
    // 0x25ad98: 0x2529f908  addiu       $t1, $t1, -0x6F8
    ctx->pc = 0x25ad98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294965512));
label_25ad9c:
    // 0x25ad9c: 0x2508f90c  addiu       $t0, $t0, -0x6F4
    ctx->pc = 0x25ad9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294965516));
label_25ada0:
    // 0x25ada0: 0x27b80110  addiu       $t8, $sp, 0x110
    ctx->pc = 0x25ada0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_25ada4:
    // 0x25ada4: 0x27ae0132  addiu       $t6, $sp, 0x132
    ctx->pc = 0x25ada4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 306));
label_25ada8:
    // 0x25ada8: 0x27ad0134  addiu       $t5, $sp, 0x134
    ctx->pc = 0x25ada8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
label_25adac:
    // 0x25adac: 0x27a50136  addiu       $a1, $sp, 0x136
    ctx->pc = 0x25adacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 310));
label_25adb0:
    // 0x25adb0: 0x27ac00f4  addiu       $t4, $sp, 0xF4
    ctx->pc = 0x25adb0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
label_25adb4:
    // 0x25adb4: 0x27ab00f8  addiu       $t3, $sp, 0xF8
    ctx->pc = 0x25adb4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_25adb8:
    // 0x25adb8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25adb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_25adbc:
    // 0x25adbc: 0x27a400fc  addiu       $a0, $sp, 0xFC
    ctx->pc = 0x25adbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
label_25adc0:
    // 0x25adc0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x25adc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_25adc4:
    // 0x25adc4: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x25adc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_25adc8:
    // 0x25adc8: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x25adc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25adcc:
    // 0x25adcc: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x25adccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25add0:
    // 0x25add0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25add0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_25add4:
    // 0x25add4: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x25add4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_25add8:
    // 0x25add8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x25add8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25addc:
    // 0x25addc: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x25addcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ade0:
    // 0x25ade0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25ade0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_25ade4:
    // 0x25ade4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x25ade4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_25ade8:
    // 0x25ade8: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x25ade8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25adec:
    // 0x25adec: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x25adecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25adf0:
    // 0x25adf0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25adf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_25adf4:
    // 0x25adf4: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x25adf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_25adf8:
    // 0x25adf8: 0xc7000000  lwc1        $f0, 0x0($t8)
    ctx->pc = 0x25adf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25adfc:
    // 0x25adfc: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x25adfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_25ae00:
    // 0x25ae00: 0xc7000004  lwc1        $f0, 0x4($t8)
    ctx->pc = 0x25ae00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ae04:
    // 0x25ae04: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x25ae04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_25ae08:
    // 0x25ae08: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x25ae08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_25ae0c:
    // 0x25ae0c: 0x331c2  srl         $a2, $v1, 7
    ctx->pc = 0x25ae0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
label_25ae10:
    // 0x25ae10: 0xc7000008  lwc1        $f0, 0x8($t8)
    ctx->pc = 0x25ae10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ae14:
    // 0x25ae14: 0x8fa30104  lw          $v1, 0x104($sp)
    ctx->pc = 0x25ae14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_25ae18:
    // 0x25ae18: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x25ae18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_25ae1c:
    // 0x25ae1c: 0x319c2  srl         $v1, $v1, 7
    ctx->pc = 0x25ae1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
label_25ae20:
    // 0x25ae20: 0xc700000c  lwc1        $f0, 0xC($t8)
    ctx->pc = 0x25ae20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ae24:
    // 0x25ae24: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x25ae24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_25ae28:
    // 0x25ae28: 0xa7a60130  sh          $a2, 0x130($sp)
    ctx->pc = 0x25ae28u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 304), (uint16_t)GPR_U32(ctx, 6));
label_25ae2c:
    // 0x25ae2c: 0xa5c30000  sh          $v1, 0x0($t6)
    ctx->pc = 0x25ae2cu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 3));
label_25ae30:
    // 0x25ae30: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x25ae30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_25ae34:
    // 0x25ae34: 0x319c2  srl         $v1, $v1, 7
    ctx->pc = 0x25ae34u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
label_25ae38:
    // 0x25ae38: 0xa5a30000  sh          $v1, 0x0($t5)
    ctx->pc = 0x25ae38u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 3));
label_25ae3c:
    // 0x25ae3c: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x25ae3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_25ae40:
    // 0x25ae40: 0x319c2  srl         $v1, $v1, 7
    ctx->pc = 0x25ae40u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
label_25ae44:
    // 0x25ae44: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x25ae44u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_25ae48:
    // 0x25ae48: 0x97a30130  lhu         $v1, 0x130($sp)
    ctx->pc = 0x25ae48u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 304)));
label_25ae4c:
    // 0x25ae4c: 0xc7a10180  lwc1        $f1, 0x180($sp)
    ctx->pc = 0x25ae4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25ae50:
    // 0x25ae50: 0xc7a00184  lwc1        $f0, 0x184($sp)
    ctx->pc = 0x25ae50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ae54:
    // 0x25ae54: 0xafa301b0  sw          $v1, 0x1B0($sp)
    ctx->pc = 0x25ae54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 3));
label_25ae58:
    // 0x25ae58: 0x95c30000  lhu         $v1, 0x0($t6)
    ctx->pc = 0x25ae58u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
label_25ae5c:
    // 0x25ae5c: 0xafa301b4  sw          $v1, 0x1B4($sp)
    ctx->pc = 0x25ae5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 3));
label_25ae60:
    // 0x25ae60: 0x95a30000  lhu         $v1, 0x0($t5)
    ctx->pc = 0x25ae60u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
label_25ae64:
    // 0x25ae64: 0xafa301b8  sw          $v1, 0x1B8($sp)
    ctx->pc = 0x25ae64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 3));
label_25ae68:
    // 0x25ae68: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x25ae68u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_25ae6c:
    // 0x25ae6c: 0xafa301bc  sw          $v1, 0x1BC($sp)
    ctx->pc = 0x25ae6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 3));
label_25ae70:
    // 0x25ae70: 0xc6a20040  lwc1        $f2, 0x40($s5)
    ctx->pc = 0x25ae70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25ae74:
    // 0x25ae74: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x25ae74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_25ae78:
    // 0x25ae78: 0xe7a100f0  swc1        $f1, 0xF0($sp)
    ctx->pc = 0x25ae78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_25ae7c:
    // 0x25ae7c: 0xc6a10044  lwc1        $f1, 0x44($s5)
    ctx->pc = 0x25ae7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25ae80:
    // 0x25ae80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25ae80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_25ae84:
    // 0x25ae84: 0xe5800000  swc1        $f0, 0x0($t4)
    ctx->pc = 0x25ae84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
label_25ae88:
    // 0x25ae88: 0xc6a10048  lwc1        $f1, 0x48($s5)
    ctx->pc = 0x25ae88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25ae8c:
    // 0x25ae8c: 0xc7a00188  lwc1        $f0, 0x188($sp)
    ctx->pc = 0x25ae8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ae90:
    // 0x25ae90: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25ae90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_25ae94:
    // 0x25ae94: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x25ae94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
label_25ae98:
    // 0x25ae98: 0xc6a1004c  lwc1        $f1, 0x4C($s5)
    ctx->pc = 0x25ae98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25ae9c:
    // 0x25ae9c: 0xc7a0018c  lwc1        $f0, 0x18C($sp)
    ctx->pc = 0x25ae9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25aea0:
    // 0x25aea0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25aea0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_25aea4:
    // 0x25aea4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x25aea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_25aea8:
    // 0x25aea8: 0xc6a10060  lwc1        $f1, 0x60($s5)
    ctx->pc = 0x25aea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25aeac:
    // 0x25aeac: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x25aeacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25aeb0:
    // 0x25aeb0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25aeb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_25aeb4:
    // 0x25aeb4: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x25aeb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_25aeb8:
    // 0x25aeb8: 0xc6a10064  lwc1        $f1, 0x64($s5)
    ctx->pc = 0x25aeb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25aebc:
    // 0x25aebc: 0xc5800000  lwc1        $f0, 0x0($t4)
    ctx->pc = 0x25aebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25aec0:
    // 0x25aec0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25aec0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_25aec4:
    // 0x25aec4: 0xe5800000  swc1        $f0, 0x0($t4)
    ctx->pc = 0x25aec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
label_25aec8:
    // 0x25aec8: 0xc6a10068  lwc1        $f1, 0x68($s5)
    ctx->pc = 0x25aec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25aecc:
    // 0x25aecc: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x25aeccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25aed0:
    // 0x25aed0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25aed0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_25aed4:
    // 0x25aed4: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x25aed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
label_25aed8:
    // 0x25aed8: 0xc6a1006c  lwc1        $f1, 0x6C($s5)
    ctx->pc = 0x25aed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25aedc:
    // 0x25aedc: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x25aedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25aee0:
    // 0x25aee0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25aee0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_25aee4:
    // 0x25aee4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x25aee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_25aee8:
    // 0x25aee8: 0xc421cf90  lwc1        $f1, -0x3070($at)
    ctx->pc = 0x25aee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294954896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25aeec:
    // 0x25aeec: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x25aeecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25aef0:
    // 0x25aef0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x25aef0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25aef4:
    // 0x25aef4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_25aef8:
    if (ctx->pc == 0x25AEF8u) {
        ctx->pc = 0x25AEF8u;
            // 0x25aef8: 0xc7a200f0  lwc1        $f2, 0xF0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x25AEFCu;
        goto label_25aefc;
    }
    ctx->pc = 0x25AEF4u;
    {
        const bool branch_taken_0x25aef4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25AEF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AEF4u;
            // 0x25aef8: 0xc7a200f0  lwc1        $f2, 0xF0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aef4) {
            ctx->pc = 0x25AF04u;
            goto label_25af04;
        }
    }
    ctx->pc = 0x25AEFCu;
label_25aefc:
    // 0x25aefc: 0x10000003  b           . + 4 + (0x3 << 2)
label_25af00:
    if (ctx->pc == 0x25AF00u) {
        ctx->pc = 0x25AF00u;
            // 0x25af00: 0xe7a200f0  swc1        $f2, 0xF0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
        ctx->pc = 0x25AF04u;
        goto label_25af04;
    }
    ctx->pc = 0x25AEFCu;
    {
        const bool branch_taken_0x25aefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AF00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AEFCu;
            // 0x25af00: 0xe7a200f0  swc1        $f2, 0xF0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aefc) {
            ctx->pc = 0x25AF0Cu;
            goto label_25af0c;
        }
    }
    ctx->pc = 0x25AF04u;
label_25af04:
    // 0x25af04: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x25af04u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_25af08:
    // 0x25af08: 0xe7a200f0  swc1        $f2, 0xF0($sp)
    ctx->pc = 0x25af08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_25af0c:
    // 0x25af0c: 0x27a600f4  addiu       $a2, $sp, 0xF4
    ctx->pc = 0x25af0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
label_25af10:
    // 0x25af10: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x25af10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25af14:
    // 0x25af14: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x25af14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25af18:
    // 0x25af18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25af18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25af1c:
    // 0x25af1c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_25af20:
    if (ctx->pc == 0x25AF20u) {
        ctx->pc = 0x25AF24u;
        goto label_25af24;
    }
    ctx->pc = 0x25AF1Cu;
    {
        const bool branch_taken_0x25af1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25af1c) {
            ctx->pc = 0x25AF2Cu;
            goto label_25af2c;
        }
    }
    ctx->pc = 0x25AF24u;
label_25af24:
    // 0x25af24: 0x10000003  b           . + 4 + (0x3 << 2)
label_25af28:
    if (ctx->pc == 0x25AF28u) {
        ctx->pc = 0x25AF28u;
            // 0x25af28: 0xe5810000  swc1        $f1, 0x0($t4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
        ctx->pc = 0x25AF2Cu;
        goto label_25af2c;
    }
    ctx->pc = 0x25AF24u;
    {
        const bool branch_taken_0x25af24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AF24u;
            // 0x25af28: 0xe5810000  swc1        $f1, 0x0($t4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25af24) {
            ctx->pc = 0x25AF34u;
            goto label_25af34;
        }
    }
    ctx->pc = 0x25AF2Cu;
label_25af2c:
    // 0x25af2c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x25af2cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_25af30:
    // 0x25af30: 0xe5810000  swc1        $f1, 0x0($t4)
    ctx->pc = 0x25af30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
label_25af34:
    // 0x25af34: 0x27a500f8  addiu       $a1, $sp, 0xF8
    ctx->pc = 0x25af34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_25af38:
    // 0x25af38: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x25af38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25af3c:
    // 0x25af3c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x25af3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25af40:
    // 0x25af40: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25af40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25af44:
    // 0x25af44: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_25af48:
    if (ctx->pc == 0x25AF48u) {
        ctx->pc = 0x25AF4Cu;
        goto label_25af4c;
    }
    ctx->pc = 0x25AF44u;
    {
        const bool branch_taken_0x25af44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25af44) {
            ctx->pc = 0x25AF54u;
            goto label_25af54;
        }
    }
    ctx->pc = 0x25AF4Cu;
label_25af4c:
    // 0x25af4c: 0x10000003  b           . + 4 + (0x3 << 2)
label_25af50:
    if (ctx->pc == 0x25AF50u) {
        ctx->pc = 0x25AF50u;
            // 0x25af50: 0xe5610000  swc1        $f1, 0x0($t3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
        ctx->pc = 0x25AF54u;
        goto label_25af54;
    }
    ctx->pc = 0x25AF4Cu;
    {
        const bool branch_taken_0x25af4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AF4Cu;
            // 0x25af50: 0xe5610000  swc1        $f1, 0x0($t3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25af4c) {
            ctx->pc = 0x25AF5Cu;
            goto label_25af5c;
        }
    }
    ctx->pc = 0x25AF54u;
label_25af54:
    // 0x25af54: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x25af54u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_25af58:
    // 0x25af58: 0xe5610000  swc1        $f1, 0x0($t3)
    ctx->pc = 0x25af58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
label_25af5c:
    // 0x25af5c: 0x27a300fc  addiu       $v1, $sp, 0xFC
    ctx->pc = 0x25af5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
label_25af60:
    // 0x25af60: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x25af60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25af64:
    // 0x25af64: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x25af64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25af68:
    // 0x25af68: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25af68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25af6c:
    // 0x25af6c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_25af70:
    if (ctx->pc == 0x25AF70u) {
        ctx->pc = 0x25AF74u;
        goto label_25af74;
    }
    ctx->pc = 0x25AF6Cu;
    {
        const bool branch_taken_0x25af6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25af6c) {
            ctx->pc = 0x25AF7Cu;
            goto label_25af7c;
        }
    }
    ctx->pc = 0x25AF74u;
label_25af74:
    // 0x25af74: 0x10000003  b           . + 4 + (0x3 << 2)
label_25af78:
    if (ctx->pc == 0x25AF78u) {
        ctx->pc = 0x25AF78u;
            // 0x25af78: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->pc = 0x25AF7Cu;
        goto label_25af7c;
    }
    ctx->pc = 0x25AF74u;
    {
        const bool branch_taken_0x25af74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AF74u;
            // 0x25af78: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25af74) {
            ctx->pc = 0x25AF84u;
            goto label_25af84;
        }
    }
    ctx->pc = 0x25AF7Cu;
label_25af7c:
    // 0x25af7c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x25af7cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_25af80:
    // 0x25af80: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x25af80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_25af84:
    // 0x25af84: 0x3c010064  lui         $at, 0x64
    ctx->pc = 0x25af84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
label_25af88:
    // 0x25af88: 0xc421f940  lwc1        $f1, -0x6C0($at)
    ctx->pc = 0x25af88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25af8c:
    // 0x25af8c: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x25af8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25af90:
    // 0x25af90: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x25af90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25af94:
    // 0x25af94: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_25af98:
    if (ctx->pc == 0x25AF98u) {
        ctx->pc = 0x25AF98u;
            // 0x25af98: 0xc7a200f0  lwc1        $f2, 0xF0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x25AF9Cu;
        goto label_25af9c;
    }
    ctx->pc = 0x25AF94u;
    {
        const bool branch_taken_0x25af94 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25AF98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AF94u;
            // 0x25af98: 0xc7a200f0  lwc1        $f2, 0xF0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25af94) {
            ctx->pc = 0x25AFA4u;
            goto label_25afa4;
        }
    }
    ctx->pc = 0x25AF9Cu;
label_25af9c:
    // 0x25af9c: 0x10000003  b           . + 4 + (0x3 << 2)
label_25afa0:
    if (ctx->pc == 0x25AFA0u) {
        ctx->pc = 0x25AFA0u;
            // 0x25afa0: 0xe7a200f0  swc1        $f2, 0xF0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
        ctx->pc = 0x25AFA4u;
        goto label_25afa4;
    }
    ctx->pc = 0x25AF9Cu;
    {
        const bool branch_taken_0x25af9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AFA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AF9Cu;
            // 0x25afa0: 0xe7a200f0  swc1        $f2, 0xF0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25af9c) {
            ctx->pc = 0x25AFACu;
            goto label_25afac;
        }
    }
    ctx->pc = 0x25AFA4u;
label_25afa4:
    // 0x25afa4: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x25afa4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_25afa8:
    // 0x25afa8: 0xe7a200f0  swc1        $f2, 0xF0($sp)
    ctx->pc = 0x25afa8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_25afac:
    // 0x25afac: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x25afacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25afb0:
    // 0x25afb0: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x25afb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25afb4:
    // 0x25afb4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x25afb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25afb8:
    // 0x25afb8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_25afbc:
    if (ctx->pc == 0x25AFBCu) {
        ctx->pc = 0x25AFC0u;
        goto label_25afc0;
    }
    ctx->pc = 0x25AFB8u;
    {
        const bool branch_taken_0x25afb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25afb8) {
            ctx->pc = 0x25AFC8u;
            goto label_25afc8;
        }
    }
    ctx->pc = 0x25AFC0u;
label_25afc0:
    // 0x25afc0: 0x10000003  b           . + 4 + (0x3 << 2)
label_25afc4:
    if (ctx->pc == 0x25AFC4u) {
        ctx->pc = 0x25AFC4u;
            // 0x25afc4: 0xe5810000  swc1        $f1, 0x0($t4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
        ctx->pc = 0x25AFC8u;
        goto label_25afc8;
    }
    ctx->pc = 0x25AFC0u;
    {
        const bool branch_taken_0x25afc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AFC0u;
            // 0x25afc4: 0xe5810000  swc1        $f1, 0x0($t4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25afc0) {
            ctx->pc = 0x25AFD0u;
            goto label_25afd0;
        }
    }
    ctx->pc = 0x25AFC8u;
label_25afc8:
    // 0x25afc8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x25afc8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_25afcc:
    // 0x25afcc: 0xe5810000  swc1        $f1, 0x0($t4)
    ctx->pc = 0x25afccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
label_25afd0:
    // 0x25afd0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x25afd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25afd4:
    // 0x25afd4: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x25afd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25afd8:
    // 0x25afd8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x25afd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25afdc:
    // 0x25afdc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_25afe0:
    if (ctx->pc == 0x25AFE0u) {
        ctx->pc = 0x25AFE4u;
        goto label_25afe4;
    }
    ctx->pc = 0x25AFDCu;
    {
        const bool branch_taken_0x25afdc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25afdc) {
            ctx->pc = 0x25AFECu;
            goto label_25afec;
        }
    }
    ctx->pc = 0x25AFE4u;
label_25afe4:
    // 0x25afe4: 0x10000003  b           . + 4 + (0x3 << 2)
label_25afe8:
    if (ctx->pc == 0x25AFE8u) {
        ctx->pc = 0x25AFE8u;
            // 0x25afe8: 0xe5610000  swc1        $f1, 0x0($t3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
        ctx->pc = 0x25AFECu;
        goto label_25afec;
    }
    ctx->pc = 0x25AFE4u;
    {
        const bool branch_taken_0x25afe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AFE4u;
            // 0x25afe8: 0xe5610000  swc1        $f1, 0x0($t3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25afe4) {
            ctx->pc = 0x25AFF4u;
            goto label_25aff4;
        }
    }
    ctx->pc = 0x25AFECu;
label_25afec:
    // 0x25afec: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x25afecu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_25aff0:
    // 0x25aff0: 0xe5610000  swc1        $f1, 0x0($t3)
    ctx->pc = 0x25aff0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
label_25aff4:
    // 0x25aff4: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x25aff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25aff8:
    // 0x25aff8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x25aff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25affc:
    // 0x25affc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x25affcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25b000:
    // 0x25b000: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_25b004:
    if (ctx->pc == 0x25B004u) {
        ctx->pc = 0x25B008u;
        goto label_25b008;
    }
    ctx->pc = 0x25B000u;
    {
        const bool branch_taken_0x25b000 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25b000) {
            ctx->pc = 0x25B010u;
            goto label_25b010;
        }
    }
    ctx->pc = 0x25B008u;
label_25b008:
    // 0x25b008: 0x10000003  b           . + 4 + (0x3 << 2)
label_25b00c:
    if (ctx->pc == 0x25B00Cu) {
        ctx->pc = 0x25B00Cu;
            // 0x25b00c: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->pc = 0x25B010u;
        goto label_25b010;
    }
    ctx->pc = 0x25B008u;
    {
        const bool branch_taken_0x25b008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B008u;
            // 0x25b00c: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b008) {
            ctx->pc = 0x25B018u;
            goto label_25b018;
        }
    }
    ctx->pc = 0x25B010u;
label_25b010:
    // 0x25b010: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x25b010u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_25b014:
    // 0x25b014: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x25b014u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_25b018:
    // 0x25b018: 0x3c010064  lui         $at, 0x64
    ctx->pc = 0x25b018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
label_25b01c:
    // 0x25b01c: 0xc420f900  lwc1        $f0, -0x700($at)
    ctx->pc = 0x25b01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b020:
    // 0x25b020: 0x27ad00f0  addiu       $t5, $sp, 0xF0
    ctx->pc = 0x25b020u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_25b024:
    // 0x25b024: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x25b024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25b028:
    // 0x25b028: 0x27a60122  addiu       $a2, $sp, 0x122
    ctx->pc = 0x25b028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 290));
label_25b02c:
    // 0x25b02c: 0x27a50124  addiu       $a1, $sp, 0x124
    ctx->pc = 0x25b02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
label_25b030:
    // 0x25b030: 0x27a30126  addiu       $v1, $sp, 0x126
    ctx->pc = 0x25b030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 294));
label_25b034:
    // 0x25b034: 0x2407fff0  addiu       $a3, $zero, -0x10
    ctx->pc = 0x25b034u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_25b038:
    // 0x25b038: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x25b038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_25b03c:
    // 0x25b03c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25b03cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_25b040:
    // 0x25b040: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x25b040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_25b044:
    // 0x25b044: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x25b044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b048:
    // 0x25b048: 0xc5810000  lwc1        $f1, 0x0($t4)
    ctx->pc = 0x25b048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25b04c:
    // 0x25b04c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25b04cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_25b050:
    // 0x25b050: 0xe5800000  swc1        $f0, 0x0($t4)
    ctx->pc = 0x25b050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
label_25b054:
    // 0x25b054: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x25b054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b058:
    // 0x25b058: 0xc5610000  lwc1        $f1, 0x0($t3)
    ctx->pc = 0x25b058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25b05c:
    // 0x25b05c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25b05cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_25b060:
    // 0x25b060: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x25b060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
label_25b064:
    // 0x25b064: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x25b064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b068:
    // 0x25b068: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x25b068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25b06c:
    // 0x25b06c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25b06cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_25b070:
    // 0x25b070: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x25b070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_25b074:
    // 0x25b074: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x25b074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b078:
    // 0x25b078: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x25b078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_25b07c:
    // 0x25b07c: 0xc5a00004  lwc1        $f0, 0x4($t5)
    ctx->pc = 0x25b07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b080:
    // 0x25b080: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x25b080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_25b084:
    // 0x25b084: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x25b084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_25b088:
    // 0x25b088: 0x441c2  srl         $t0, $a0, 7
    ctx->pc = 0x25b088u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 4), 7));
label_25b08c:
    // 0x25b08c: 0xc5a00008  lwc1        $f0, 0x8($t5)
    ctx->pc = 0x25b08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b090:
    // 0x25b090: 0x8fa400e4  lw          $a0, 0xE4($sp)
    ctx->pc = 0x25b090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_25b094:
    // 0x25b094: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x25b094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_25b098:
    // 0x25b098: 0x421c2  srl         $a0, $a0, 7
    ctx->pc = 0x25b098u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 7));
label_25b09c:
    // 0x25b09c: 0xc5a0000c  lwc1        $f0, 0xC($t5)
    ctx->pc = 0x25b09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b0a0:
    // 0x25b0a0: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x25b0a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_25b0a4:
    // 0x25b0a4: 0xa7a80120  sh          $t0, 0x120($sp)
    ctx->pc = 0x25b0a4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 288), (uint16_t)GPR_U32(ctx, 8));
label_25b0a8:
    // 0x25b0a8: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x25b0a8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
label_25b0ac:
    // 0x25b0ac: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x25b0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_25b0b0:
    // 0x25b0b0: 0x421c2  srl         $a0, $a0, 7
    ctx->pc = 0x25b0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 7));
label_25b0b4:
    // 0x25b0b4: 0xa4a40000  sh          $a0, 0x0($a1)
    ctx->pc = 0x25b0b4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
label_25b0b8:
    // 0x25b0b8: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x25b0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_25b0bc:
    // 0x25b0bc: 0x421c2  srl         $a0, $a0, 7
    ctx->pc = 0x25b0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 7));
label_25b0c0:
    // 0x25b0c0: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x25b0c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
label_25b0c4:
    // 0x25b0c4: 0x97a80120  lhu         $t0, 0x120($sp)
    ctx->pc = 0x25b0c4u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 288)));
label_25b0c8:
    // 0x25b0c8: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x25b0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_25b0cc:
    // 0x25b0cc: 0xafa801a0  sw          $t0, 0x1A0($sp)
    ctx->pc = 0x25b0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 8));
label_25b0d0:
    // 0x25b0d0: 0x94c60000  lhu         $a2, 0x0($a2)
    ctx->pc = 0x25b0d0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_25b0d4:
    // 0x25b0d4: 0xafa601a4  sw          $a2, 0x1A4($sp)
    ctx->pc = 0x25b0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 6));
label_25b0d8:
    // 0x25b0d8: 0x94a50000  lhu         $a1, 0x0($a1)
    ctx->pc = 0x25b0d8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_25b0dc:
    // 0x25b0dc: 0xafa501a8  sw          $a1, 0x1A8($sp)
    ctx->pc = 0x25b0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 5));
label_25b0e0:
    // 0x25b0e0: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x25b0e0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_25b0e4:
    // 0x25b0e4: 0xafa301ac  sw          $v1, 0x1AC($sp)
    ctx->pc = 0x25b0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 3));
label_25b0e8:
    // 0x25b0e8: 0x8ea50074  lw          $a1, 0x74($s5)
    ctx->pc = 0x25b0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_25b0ec:
    // 0x25b0ec: 0x8c88000c  lw          $t0, 0xC($a0)
    ctx->pc = 0x25b0ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_25b0f0:
    // 0x25b0f0: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x25b0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_25b0f4:
    // 0x25b0f4: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x25b0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_25b0f8:
    // 0x25b0f8: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x25b0f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
label_25b0fc:
    // 0x25b0fc: 0x1053021  addu        $a2, $t0, $a1
    ctx->pc = 0x25b0fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_25b100:
    // 0x25b100: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x25b100u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_25b104:
    // 0x25b104: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_25b108:
    if (ctx->pc == 0x25B108u) {
        ctx->pc = 0x25B10Cu;
        goto label_25b10c;
    }
    ctx->pc = 0x25B104u;
    {
        const bool branch_taken_0x25b104 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b104) {
            ctx->pc = 0x25B118u;
            goto label_25b118;
        }
    }
    ctx->pc = 0x25B10Cu;
label_25b10c:
    // 0x25b10c: 0x10000008  b           . + 4 + (0x8 << 2)
label_25b110:
    if (ctx->pc == 0x25B110u) {
        ctx->pc = 0x25B110u;
            // 0x25b110: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x25B114u;
        goto label_25b114;
    }
    ctx->pc = 0x25B10Cu;
    {
        const bool branch_taken_0x25b10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B10Cu;
            // 0x25b110: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b10c) {
            ctx->pc = 0x25B130u;
            goto label_25b130;
        }
    }
    ctx->pc = 0x25B114u;
label_25b114:
    // 0x25b114: 0x0  nop
    ctx->pc = 0x25b114u;
    // NOP
label_25b118:
    // 0x25b118: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25b118u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25b11c:
    // 0x25b11c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x25b11cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_25b120:
    // 0x25b120: 0x320f809  jalr        $t9
label_25b124:
    if (ctx->pc == 0x25B124u) {
        ctx->pc = 0x25B128u;
        goto label_25b128;
    }
    ctx->pc = 0x25B120u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25B128u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x25B128u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25B128u; }
            if (ctx->pc != 0x25B128u) { return; }
        }
        }
    }
    ctx->pc = 0x25B128u;
label_25b128:
    // 0x25b128: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x25b128u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25b12c:
    // 0x25b12c: 0x0  nop
    ctx->pc = 0x25b12cu;
    // NOP
label_25b130:
    // 0x25b130: 0xafa80238  sw          $t0, 0x238($sp)
    ctx->pc = 0x25b130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 8));
label_25b134:
    // 0x25b134: 0x8ea50074  lw          $a1, 0x74($s5)
    ctx->pc = 0x25b134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_25b138:
    // 0x25b138: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x25b138u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
label_25b13c:
    // 0x25b13c: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_25b140:
    if (ctx->pc == 0x25B140u) {
        ctx->pc = 0x25B140u;
            // 0x25b140: 0x8fa40238  lw          $a0, 0x238($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
        ctx->pc = 0x25B144u;
        goto label_25b144;
    }
    ctx->pc = 0x25B13Cu;
    {
        const bool branch_taken_0x25b13c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x25B140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B13Cu;
            // 0x25b140: 0x8fa40238  lw          $a0, 0x238($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b13c) {
            ctx->pc = 0x25B168u;
            goto label_25b168;
        }
    }
    ctx->pc = 0x25B144u;
label_25b144:
    // 0x25b144: 0x0  nop
    ctx->pc = 0x25b144u;
    // NOP
label_25b148:
    // 0x25b148: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x25b148u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25b14c:
    // 0x25b14c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x25b14cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_25b150:
    // 0x25b150: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x25b150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_25b154:
    // 0x25b154: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x25b154u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_25b158:
    // 0x25b158: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x25b158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_25b15c:
    // 0x25b15c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x25b15cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_25b160:
    // 0x25b160: 0x4a1fff9  bgez        $a1, . + 4 + (-0x7 << 2)
label_25b164:
    if (ctx->pc == 0x25B164u) {
        ctx->pc = 0x25B164u;
            // 0x25b164: 0xac60000c  sw          $zero, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x25B168u;
        goto label_25b168;
    }
    ctx->pc = 0x25B160u;
    {
        const bool branch_taken_0x25b160 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x25B164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B160u;
            // 0x25b164: 0xac60000c  sw          $zero, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b160) {
            ctx->pc = 0x25B148u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25b148;
        }
    }
    ctx->pc = 0x25B168u;
label_25b168:
    // 0x25b168: 0x8e890030  lw          $t1, 0x30($s4)
    ctx->pc = 0x25b168u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_25b16c:
    // 0x25b16c: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
label_25b170:
    if (ctx->pc == 0x25B170u) {
        ctx->pc = 0x25B174u;
        goto label_25b174;
    }
    ctx->pc = 0x25B16Cu;
    {
        const bool branch_taken_0x25b16c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b16c) {
            ctx->pc = 0x25B17Cu;
            goto label_25b17c;
        }
    }
    ctx->pc = 0x25B174u;
label_25b174:
    // 0x25b174: 0x10000003  b           . + 4 + (0x3 << 2)
label_25b178:
    if (ctx->pc == 0x25B178u) {
        ctx->pc = 0x25B178u;
            // 0x25b178: 0x8fad0238  lw          $t5, 0x238($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
        ctx->pc = 0x25B17Cu;
        goto label_25b17c;
    }
    ctx->pc = 0x25B174u;
    {
        const bool branch_taken_0x25b174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B174u;
            // 0x25b178: 0x8fad0238  lw          $t5, 0x238($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b174) {
            ctx->pc = 0x25B184u;
            goto label_25b184;
        }
    }
    ctx->pc = 0x25B17Cu;
label_25b17c:
    // 0x25b17c: 0x26a9007c  addiu       $t1, $s5, 0x7C
    ctx->pc = 0x25b17cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 21), 124));
label_25b180:
    // 0x25b180: 0x8fad0238  lw          $t5, 0x238($sp)
    ctx->pc = 0x25b180u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
label_25b184:
    // 0x25b184: 0x27b701b0  addiu       $s7, $sp, 0x1B0
    ctx->pc = 0x25b184u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_25b188:
    // 0x25b188: 0x27b10228  addiu       $s1, $sp, 0x228
    ctx->pc = 0x25b188u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
label_25b18c:
    // 0x25b18c: 0x27be01a0  addiu       $fp, $sp, 0x1A0
    ctx->pc = 0x25b18cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_25b190:
    // 0x25b190: 0x27b00218  addiu       $s0, $sp, 0x218
    ctx->pc = 0x25b190u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 536));
label_25b194:
    // 0x25b194: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x25b194u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25b198:
    // 0x25b198: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x25b198u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25b19c:
    // 0x25b19c: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x25b19cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_25b1a0:
    // 0x25b1a0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x25b1a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25b1a4:
    // 0x25b1a4: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x25b1a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_25b1a8:
    // 0x25b1a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25b1a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25b1ac:
    // 0x25b1ac: 0x0  nop
    ctx->pc = 0x25b1acu;
    // NOP
label_25b1b0:
    // 0x25b1b0: 0x8d2e0004  lw          $t6, 0x4($t1)
    ctx->pc = 0x25b1b0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_25b1b4:
    // 0x25b1b4: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x25b1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_25b1b8:
    // 0x25b1b8: 0x8d0a0000  lw          $t2, 0x0($t0)
    ctx->pc = 0x25b1b8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_25b1bc:
    // 0x25b1bc: 0xe1843  sra         $v1, $t6, 1
    ctx->pc = 0x25b1bcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 14), 1));
label_25b1c0:
    // 0x25b1c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25b1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_25b1c4:
    // 0x25b1c4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x25b1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_25b1c8:
    // 0x25b1c8: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x25b1c8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_25b1cc:
    // 0x25b1cc: 0x143082b  sltu        $at, $t2, $v1
    ctx->pc = 0x25b1ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_25b1d0:
    // 0x25b1d0: 0x1020004f  beqz        $at, . + 4 + (0x4F << 2)
label_25b1d4:
    if (ctx->pc == 0x25B1D4u) {
        ctx->pc = 0x25B1D4u;
            // 0x25b1d4: 0x25c3fffc  addiu       $v1, $t6, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
        ctx->pc = 0x25B1D8u;
        goto label_25b1d8;
    }
    ctx->pc = 0x25B1D0u;
    {
        const bool branch_taken_0x25b1d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B1D0u;
            // 0x25b1d4: 0x25c3fffc  addiu       $v1, $t6, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b1d0) {
            ctx->pc = 0x25B310u;
            goto label_25b310;
        }
    }
    ctx->pc = 0x25B1D8u;
label_25b1d8:
    // 0x25b1d8: 0x248a0004  addiu       $t2, $a0, 0x4
    ctx->pc = 0x25b1d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_25b1dc:
    // 0x25b1dc: 0x37080  sll         $t6, $v1, 2
    ctx->pc = 0x25b1dcu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_25b1e0:
    // 0x25b1e0: 0x318300ff  andi        $v1, $t4, 0xFF
    ctx->pc = 0x25b1e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)255);
label_25b1e4:
    // 0x25b1e4: 0x10000018  b           . + 4 + (0x18 << 2)
label_25b1e8:
    if (ctx->pc == 0x25B1E8u) {
        ctx->pc = 0x25B1E8u;
            // 0x25b1e8: 0x8e2021  addu        $a0, $a0, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
        ctx->pc = 0x25B1ECu;
        goto label_25b1ec;
    }
    ctx->pc = 0x25B1E4u;
    {
        const bool branch_taken_0x25b1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B1E4u;
            // 0x25b1e8: 0x8e2021  addu        $a0, $a0, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b1e4) {
            ctx->pc = 0x25B248u;
            goto label_25b248;
        }
    }
    ctx->pc = 0x25B1ECu;
label_25b1ec:
    // 0x25b1ec: 0x0  nop
    ctx->pc = 0x25b1ecu;
    // NOP
label_25b1f0:
    // 0x25b1f0: 0x954e0002  lhu         $t6, 0x2($t2)
    ctx->pc = 0x25b1f0u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 2)));
label_25b1f4:
    // 0x25b1f4: 0x1ae7821  addu        $t7, $t5, $t6
    ctx->pc = 0x25b1f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
label_25b1f8:
    // 0x25b1f8: 0x91ee0000  lbu         $t6, 0x0($t7)
    ctx->pc = 0x25b1f8u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
label_25b1fc:
    // 0x25b1fc: 0x1c37026  xor         $t6, $t6, $v1
    ctx->pc = 0x25b1fcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) ^ GPR_U64(ctx, 3));
label_25b200:
    // 0x25b200: 0xa1ee0000  sb          $t6, 0x0($t7)
    ctx->pc = 0x25b200u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 14));
label_25b204:
    // 0x25b204: 0x954e0006  lhu         $t6, 0x6($t2)
    ctx->pc = 0x25b204u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 6)));
label_25b208:
    // 0x25b208: 0x1ae7821  addu        $t7, $t5, $t6
    ctx->pc = 0x25b208u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
label_25b20c:
    // 0x25b20c: 0x91ee0000  lbu         $t6, 0x0($t7)
    ctx->pc = 0x25b20cu;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
label_25b210:
    // 0x25b210: 0x1c37026  xor         $t6, $t6, $v1
    ctx->pc = 0x25b210u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) ^ GPR_U64(ctx, 3));
label_25b214:
    // 0x25b214: 0xa1ee0000  sb          $t6, 0x0($t7)
    ctx->pc = 0x25b214u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 14));
label_25b218:
    // 0x25b218: 0x954e000a  lhu         $t6, 0xA($t2)
    ctx->pc = 0x25b218u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 10)));
label_25b21c:
    // 0x25b21c: 0x1ae7821  addu        $t7, $t5, $t6
    ctx->pc = 0x25b21cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
label_25b220:
    // 0x25b220: 0x91ee0000  lbu         $t6, 0x0($t7)
    ctx->pc = 0x25b220u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
label_25b224:
    // 0x25b224: 0x1c37026  xor         $t6, $t6, $v1
    ctx->pc = 0x25b224u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) ^ GPR_U64(ctx, 3));
label_25b228:
    // 0x25b228: 0xa1ee0000  sb          $t6, 0x0($t7)
    ctx->pc = 0x25b228u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 14));
label_25b22c:
    // 0x25b22c: 0x954e000e  lhu         $t6, 0xE($t2)
    ctx->pc = 0x25b22cu;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 14)));
label_25b230:
    // 0x25b230: 0x1ae7821  addu        $t7, $t5, $t6
    ctx->pc = 0x25b230u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
label_25b234:
    // 0x25b234: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x25b234u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
label_25b238:
    // 0x25b238: 0x91ee0000  lbu         $t6, 0x0($t7)
    ctx->pc = 0x25b238u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
label_25b23c:
    // 0x25b23c: 0x1c37026  xor         $t6, $t6, $v1
    ctx->pc = 0x25b23cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) ^ GPR_U64(ctx, 3));
label_25b240:
    // 0x25b240: 0xa1ee0000  sb          $t6, 0x0($t7)
    ctx->pc = 0x25b240u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 14));
label_25b244:
    // 0x25b244: 0x0  nop
    ctx->pc = 0x25b244u;
    // NOP
label_25b248:
    // 0x25b248: 0x144702b  sltu        $t6, $t2, $a0
    ctx->pc = 0x25b248u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_25b24c:
    // 0x25b24c: 0x39ce0001  xori        $t6, $t6, 0x1
    ctx->pc = 0x25b24cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)1);
label_25b250:
    // 0x25b250: 0x15c00011  bnez        $t6, . + 4 + (0x11 << 2)
label_25b254:
    if (ctx->pc == 0x25B254u) {
        ctx->pc = 0x25B258u;
        goto label_25b258;
    }
    ctx->pc = 0x25B250u;
    {
        const bool branch_taken_0x25b250 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b250) {
            ctx->pc = 0x25B298u;
            goto label_25b298;
        }
    }
    ctx->pc = 0x25B258u;
label_25b258:
    // 0x25b258: 0x954f000c  lhu         $t7, 0xC($t2)
    ctx->pc = 0x25b258u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 12)));
label_25b25c:
    // 0x25b25c: 0x8d0e0000  lw          $t6, 0x0($t0)
    ctx->pc = 0x25b25cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_25b260:
    // 0x25b260: 0x1cf082b  sltu        $at, $t6, $t7
    ctx->pc = 0x25b260u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
label_25b264:
    // 0x25b264: 0x1020ffe2  beqz        $at, . + 4 + (-0x1E << 2)
label_25b268:
    if (ctx->pc == 0x25B268u) {
        ctx->pc = 0x25B26Cu;
        goto label_25b26c;
    }
    ctx->pc = 0x25B264u;
    {
        const bool branch_taken_0x25b264 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b264) {
            ctx->pc = 0x25B1F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25b1f0;
        }
    }
    ctx->pc = 0x25B26Cu;
label_25b26c:
    // 0x25b26c: 0x1000000a  b           . + 4 + (0xA << 2)
label_25b270:
    if (ctx->pc == 0x25B270u) {
        ctx->pc = 0x25B274u;
        goto label_25b274;
    }
    ctx->pc = 0x25B26Cu;
    {
        const bool branch_taken_0x25b26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b26c) {
            ctx->pc = 0x25B298u;
            goto label_25b298;
        }
    }
    ctx->pc = 0x25B274u;
label_25b274:
    // 0x25b274: 0x0  nop
    ctx->pc = 0x25b274u;
    // NOP
label_25b278:
    // 0x25b278: 0x95430002  lhu         $v1, 0x2($t2)
    ctx->pc = 0x25b278u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 2)));
label_25b27c:
    // 0x25b27c: 0x318400ff  andi        $a0, $t4, 0xFF
    ctx->pc = 0x25b27cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)255);
label_25b280:
    // 0x25b280: 0x1a37021  addu        $t6, $t5, $v1
    ctx->pc = 0x25b280u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
label_25b284:
    // 0x25b284: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x25b284u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_25b288:
    // 0x25b288: 0x91c30000  lbu         $v1, 0x0($t6)
    ctx->pc = 0x25b288u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
label_25b28c:
    // 0x25b28c: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x25b28cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
label_25b290:
    // 0x25b290: 0xa1c30000  sb          $v1, 0x0($t6)
    ctx->pc = 0x25b290u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 0), (uint8_t)GPR_U32(ctx, 3));
label_25b294:
    // 0x25b294: 0x0  nop
    ctx->pc = 0x25b294u;
    // NOP
label_25b298:
    // 0x25b298: 0x95440000  lhu         $a0, 0x0($t2)
    ctx->pc = 0x25b298u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
label_25b29c:
    // 0x25b29c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x25b29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_25b2a0:
    // 0x25b2a0: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x25b2a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_25b2a4:
    // 0x25b2a4: 0x1020fff4  beqz        $at, . + 4 + (-0xC << 2)
label_25b2a8:
    if (ctx->pc == 0x25B2A8u) {
        ctx->pc = 0x25B2ACu;
        goto label_25b2ac;
    }
    ctx->pc = 0x25B2A4u;
    {
        const bool branch_taken_0x25b2a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b2a4) {
            ctx->pc = 0x25B278u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25b278;
        }
    }
    ctx->pc = 0x25B2ACu;
label_25b2ac:
    // 0x25b2ac: 0xacea0000  sw          $t2, 0x0($a3)
    ctx->pc = 0x25b2acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 10));
label_25b2b0:
    // 0x25b2b0: 0x95440000  lhu         $a0, 0x0($t2)
    ctx->pc = 0x25b2b0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
label_25b2b4:
    // 0x25b2b4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x25b2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_25b2b8:
    // 0x25b2b8: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x25b2b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_25b2bc:
    // 0x25b2bc: 0x14200012  bnez        $at, . + 4 + (0x12 << 2)
label_25b2c0:
    if (ctx->pc == 0x25B2C0u) {
        ctx->pc = 0x25B2C4u;
        goto label_25b2c4;
    }
    ctx->pc = 0x25B2BCu;
    {
        const bool branch_taken_0x25b2bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b2bc) {
            ctx->pc = 0x25B308u;
            goto label_25b308;
        }
    }
    ctx->pc = 0x25B2C4u;
label_25b2c4:
    // 0x25b2c4: 0x0  nop
    ctx->pc = 0x25b2c4u;
    // NOP
label_25b2c8:
    // 0x25b2c8: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x25b2c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_25b2cc:
    // 0x25b2cc: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x25b2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_25b2d0:
    // 0x25b2d0: 0x95430002  lhu         $v1, 0x2($t2)
    ctx->pc = 0x25b2d0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 2)));
label_25b2d4:
    // 0x25b2d4: 0x1842024  and         $a0, $t4, $a0
    ctx->pc = 0x25b2d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & GPR_U64(ctx, 4));
label_25b2d8:
    // 0x25b2d8: 0x308e00ff  andi        $t6, $a0, 0xFF
    ctx->pc = 0x25b2d8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_25b2dc:
    // 0x25b2dc: 0x1a32021  addu        $a0, $t5, $v1
    ctx->pc = 0x25b2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
label_25b2e0:
    // 0x25b2e0: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x25b2e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_25b2e4:
    // 0x25b2e4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x25b2e4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_25b2e8:
    // 0x25b2e8: 0x6e1826  xor         $v1, $v1, $t6
    ctx->pc = 0x25b2e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 14));
label_25b2ec:
    // 0x25b2ec: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x25b2ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_25b2f0:
    // 0x25b2f0: 0x95440000  lhu         $a0, 0x0($t2)
    ctx->pc = 0x25b2f0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
label_25b2f4:
    // 0x25b2f4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x25b2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_25b2f8:
    // 0x25b2f8: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x25b2f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_25b2fc:
    // 0x25b2fc: 0x1020fff2  beqz        $at, . + 4 + (-0xE << 2)
label_25b300:
    if (ctx->pc == 0x25B300u) {
        ctx->pc = 0x25B304u;
        goto label_25b304;
    }
    ctx->pc = 0x25B2FCu;
    {
        const bool branch_taken_0x25b2fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b2fc) {
            ctx->pc = 0x25B2C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25b2c8;
        }
    }
    ctx->pc = 0x25B304u;
label_25b304:
    // 0x25b304: 0x0  nop
    ctx->pc = 0x25b304u;
    // NOP
label_25b308:
    // 0x25b308: 0x1000004f  b           . + 4 + (0x4F << 2)
label_25b30c:
    if (ctx->pc == 0x25B30Cu) {
        ctx->pc = 0x25B30Cu;
            // 0x25b30c: 0xacaa0000  sw          $t2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 10));
        ctx->pc = 0x25B310u;
        goto label_25b310;
    }
    ctx->pc = 0x25B308u;
    {
        const bool branch_taken_0x25b308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B308u;
            // 0x25b30c: 0xacaa0000  sw          $t2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b308) {
            ctx->pc = 0x25B448u;
            goto label_25b448;
        }
    }
    ctx->pc = 0x25B310u;
label_25b310:
    // 0x25b310: 0x25c3fffe  addiu       $v1, $t6, -0x2
    ctx->pc = 0x25b310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967294));
label_25b314:
    // 0x25b314: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25b314u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_25b318:
    // 0x25b318: 0x248a0010  addiu       $t2, $a0, 0x10
    ctx->pc = 0x25b318u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_25b31c:
    // 0x25b31c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x25b31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_25b320:
    // 0x25b320: 0x10000017  b           . + 4 + (0x17 << 2)
label_25b324:
    if (ctx->pc == 0x25B324u) {
        ctx->pc = 0x25B324u;
            // 0x25b324: 0x318300ff  andi        $v1, $t4, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x25B328u;
        goto label_25b328;
    }
    ctx->pc = 0x25B320u;
    {
        const bool branch_taken_0x25b320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B320u;
            // 0x25b324: 0x318300ff  andi        $v1, $t4, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b320) {
            ctx->pc = 0x25B380u;
            goto label_25b380;
        }
    }
    ctx->pc = 0x25B328u;
label_25b328:
    // 0x25b328: 0x948e0002  lhu         $t6, 0x2($a0)
    ctx->pc = 0x25b328u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_25b32c:
    // 0x25b32c: 0x1ae7821  addu        $t7, $t5, $t6
    ctx->pc = 0x25b32cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
label_25b330:
    // 0x25b330: 0x91ee0000  lbu         $t6, 0x0($t7)
    ctx->pc = 0x25b330u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
label_25b334:
    // 0x25b334: 0x1c37026  xor         $t6, $t6, $v1
    ctx->pc = 0x25b334u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) ^ GPR_U64(ctx, 3));
label_25b338:
    // 0x25b338: 0xa1ee0000  sb          $t6, 0x0($t7)
    ctx->pc = 0x25b338u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 14));
label_25b33c:
    // 0x25b33c: 0x948efffe  lhu         $t6, -0x2($a0)
    ctx->pc = 0x25b33cu;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294967294)));
label_25b340:
    // 0x25b340: 0x1ae7821  addu        $t7, $t5, $t6
    ctx->pc = 0x25b340u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
label_25b344:
    // 0x25b344: 0x91ee0000  lbu         $t6, 0x0($t7)
    ctx->pc = 0x25b344u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
label_25b348:
    // 0x25b348: 0x1c37026  xor         $t6, $t6, $v1
    ctx->pc = 0x25b348u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) ^ GPR_U64(ctx, 3));
label_25b34c:
    // 0x25b34c: 0xa1ee0000  sb          $t6, 0x0($t7)
    ctx->pc = 0x25b34cu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 14));
label_25b350:
    // 0x25b350: 0x948efffa  lhu         $t6, -0x6($a0)
    ctx->pc = 0x25b350u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294967290)));
label_25b354:
    // 0x25b354: 0x1ae7821  addu        $t7, $t5, $t6
    ctx->pc = 0x25b354u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
label_25b358:
    // 0x25b358: 0x91ee0000  lbu         $t6, 0x0($t7)
    ctx->pc = 0x25b358u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
label_25b35c:
    // 0x25b35c: 0x1c37026  xor         $t6, $t6, $v1
    ctx->pc = 0x25b35cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) ^ GPR_U64(ctx, 3));
label_25b360:
    // 0x25b360: 0xa1ee0000  sb          $t6, 0x0($t7)
    ctx->pc = 0x25b360u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 14));
label_25b364:
    // 0x25b364: 0x948efff6  lhu         $t6, -0xA($a0)
    ctx->pc = 0x25b364u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294967286)));
label_25b368:
    // 0x25b368: 0x1ae7821  addu        $t7, $t5, $t6
    ctx->pc = 0x25b368u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
label_25b36c:
    // 0x25b36c: 0x2484fff0  addiu       $a0, $a0, -0x10
    ctx->pc = 0x25b36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
label_25b370:
    // 0x25b370: 0x91ee0000  lbu         $t6, 0x0($t7)
    ctx->pc = 0x25b370u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
label_25b374:
    // 0x25b374: 0x1c37026  xor         $t6, $t6, $v1
    ctx->pc = 0x25b374u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) ^ GPR_U64(ctx, 3));
label_25b378:
    // 0x25b378: 0xa1ee0000  sb          $t6, 0x0($t7)
    ctx->pc = 0x25b378u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 14));
label_25b37c:
    // 0x25b37c: 0x0  nop
    ctx->pc = 0x25b37cu;
    // NOP
label_25b380:
    // 0x25b380: 0x8a702b  sltu        $t6, $a0, $t2
    ctx->pc = 0x25b380u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_25b384:
    // 0x25b384: 0x39ce0001  xori        $t6, $t6, 0x1
    ctx->pc = 0x25b384u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)1);
label_25b388:
    // 0x25b388: 0x39ce0001  xori        $t6, $t6, 0x1
    ctx->pc = 0x25b388u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)1);
label_25b38c:
    // 0x25b38c: 0x15c00010  bnez        $t6, . + 4 + (0x10 << 2)
label_25b390:
    if (ctx->pc == 0x25B390u) {
        ctx->pc = 0x25B394u;
        goto label_25b394;
    }
    ctx->pc = 0x25B38Cu;
    {
        const bool branch_taken_0x25b38c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b38c) {
            ctx->pc = 0x25B3D0u;
            goto label_25b3d0;
        }
    }
    ctx->pc = 0x25B394u;
label_25b394:
    // 0x25b394: 0x948ffff4  lhu         $t7, -0xC($a0)
    ctx->pc = 0x25b394u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294967284)));
label_25b398:
    // 0x25b398: 0x8cce0000  lw          $t6, 0x0($a2)
    ctx->pc = 0x25b398u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_25b39c:
    // 0x25b39c: 0x1cf082b  sltu        $at, $t6, $t7
    ctx->pc = 0x25b39cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
label_25b3a0:
    // 0x25b3a0: 0x1420ffe1  bnez        $at, . + 4 + (-0x1F << 2)
label_25b3a4:
    if (ctx->pc == 0x25B3A4u) {
        ctx->pc = 0x25B3A8u;
        goto label_25b3a8;
    }
    ctx->pc = 0x25B3A0u;
    {
        const bool branch_taken_0x25b3a0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b3a0) {
            ctx->pc = 0x25B328u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25b328;
        }
    }
    ctx->pc = 0x25B3A8u;
label_25b3a8:
    // 0x25b3a8: 0x10000009  b           . + 4 + (0x9 << 2)
label_25b3ac:
    if (ctx->pc == 0x25B3ACu) {
        ctx->pc = 0x25B3B0u;
        goto label_25b3b0;
    }
    ctx->pc = 0x25B3A8u;
    {
        const bool branch_taken_0x25b3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b3a8) {
            ctx->pc = 0x25B3D0u;
            goto label_25b3d0;
        }
    }
    ctx->pc = 0x25B3B0u;
label_25b3b0:
    // 0x25b3b0: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x25b3b0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_25b3b4:
    // 0x25b3b4: 0x318a00ff  andi        $t2, $t4, 0xFF
    ctx->pc = 0x25b3b4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)255);
label_25b3b8:
    // 0x25b3b8: 0x1a37021  addu        $t6, $t5, $v1
    ctx->pc = 0x25b3b8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
label_25b3bc:
    // 0x25b3bc: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x25b3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_25b3c0:
    // 0x25b3c0: 0x91c30000  lbu         $v1, 0x0($t6)
    ctx->pc = 0x25b3c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
label_25b3c4:
    // 0x25b3c4: 0x6a1826  xor         $v1, $v1, $t2
    ctx->pc = 0x25b3c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 10));
label_25b3c8:
    // 0x25b3c8: 0xa1c30000  sb          $v1, 0x0($t6)
    ctx->pc = 0x25b3c8u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 0), (uint8_t)GPR_U32(ctx, 3));
label_25b3cc:
    // 0x25b3cc: 0x0  nop
    ctx->pc = 0x25b3ccu;
    // NOP
label_25b3d0:
    // 0x25b3d0: 0x948a0000  lhu         $t2, 0x0($a0)
    ctx->pc = 0x25b3d0u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_25b3d4:
    // 0x25b3d4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x25b3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_25b3d8:
    // 0x25b3d8: 0x6a082b  sltu        $at, $v1, $t2
    ctx->pc = 0x25b3d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_25b3dc:
    // 0x25b3dc: 0x1420fff4  bnez        $at, . + 4 + (-0xC << 2)
label_25b3e0:
    if (ctx->pc == 0x25B3E0u) {
        ctx->pc = 0x25B3E0u;
            // 0x25b3e0: 0x24830004  addiu       $v1, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x25B3E4u;
        goto label_25b3e4;
    }
    ctx->pc = 0x25B3DCu;
    {
        const bool branch_taken_0x25b3dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B3DCu;
            // 0x25b3e0: 0x24830004  addiu       $v1, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b3dc) {
            ctx->pc = 0x25B3B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25b3b0;
        }
    }
    ctx->pc = 0x25B3E4u;
label_25b3e4:
    // 0x25b3e4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x25b3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_25b3e8:
    // 0x25b3e8: 0x948a0000  lhu         $t2, 0x0($a0)
    ctx->pc = 0x25b3e8u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_25b3ec:
    // 0x25b3ec: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x25b3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_25b3f0:
    // 0x25b3f0: 0x6a082b  sltu        $at, $v1, $t2
    ctx->pc = 0x25b3f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_25b3f4:
    // 0x25b3f4: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
label_25b3f8:
    if (ctx->pc == 0x25B3F8u) {
        ctx->pc = 0x25B3FCu;
        goto label_25b3fc;
    }
    ctx->pc = 0x25B3F4u;
    {
        const bool branch_taken_0x25b3f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b3f4) {
            ctx->pc = 0x25B440u;
            goto label_25b440;
        }
    }
    ctx->pc = 0x25B3FCu;
label_25b3fc:
    // 0x25b3fc: 0x0  nop
    ctx->pc = 0x25b3fcu;
    // NOP
label_25b400:
    // 0x25b400: 0x31430001  andi        $v1, $t2, 0x1
    ctx->pc = 0x25b400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
label_25b404:
    // 0x25b404: 0x35023  negu        $t2, $v1
    ctx->pc = 0x25b404u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_25b408:
    // 0x25b408: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x25b408u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_25b40c:
    // 0x25b40c: 0x18a5024  and         $t2, $t4, $t2
    ctx->pc = 0x25b40cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) & GPR_U64(ctx, 10));
label_25b410:
    // 0x25b410: 0x314e00ff  andi        $t6, $t2, 0xFF
    ctx->pc = 0x25b410u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
label_25b414:
    // 0x25b414: 0x1a35021  addu        $t2, $t5, $v1
    ctx->pc = 0x25b414u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
label_25b418:
    // 0x25b418: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x25b418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_25b41c:
    // 0x25b41c: 0x91430000  lbu         $v1, 0x0($t2)
    ctx->pc = 0x25b41cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_25b420:
    // 0x25b420: 0x6e1826  xor         $v1, $v1, $t6
    ctx->pc = 0x25b420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 14));
label_25b424:
    // 0x25b424: 0xa1430000  sb          $v1, 0x0($t2)
    ctx->pc = 0x25b424u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 3));
label_25b428:
    // 0x25b428: 0x948a0000  lhu         $t2, 0x0($a0)
    ctx->pc = 0x25b428u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_25b42c:
    // 0x25b42c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x25b42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_25b430:
    // 0x25b430: 0x6a082b  sltu        $at, $v1, $t2
    ctx->pc = 0x25b430u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_25b434:
    // 0x25b434: 0x1420fff2  bnez        $at, . + 4 + (-0xE << 2)
label_25b438:
    if (ctx->pc == 0x25B438u) {
        ctx->pc = 0x25B43Cu;
        goto label_25b43c;
    }
    ctx->pc = 0x25B434u;
    {
        const bool branch_taken_0x25b434 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b434) {
            ctx->pc = 0x25B400u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25b400;
        }
    }
    ctx->pc = 0x25B43Cu;
label_25b43c:
    // 0x25b43c: 0x0  nop
    ctx->pc = 0x25b43cu;
    // NOP
label_25b440:
    // 0x25b440: 0x24830004  addiu       $v1, $a0, 0x4
    ctx->pc = 0x25b440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_25b444:
    // 0x25b444: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x25b444u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_25b448:
    // 0x25b448: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x25b448u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_25b44c:
    // 0x25b44c: 0x29630003  slti        $v1, $t3, 0x3
    ctx->pc = 0x25b44cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)3) ? 1 : 0);
label_25b450:
    // 0x25b450: 0xc6040  sll         $t4, $t4, 1
    ctx->pc = 0x25b450u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
label_25b454:
    // 0x25b454: 0x2529000c  addiu       $t1, $t1, 0xC
    ctx->pc = 0x25b454u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
label_25b458:
    // 0x25b458: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x25b458u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_25b45c:
    // 0x25b45c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x25b45cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_25b460:
    // 0x25b460: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x25b460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_25b464:
    // 0x25b464: 0x1460ff52  bnez        $v1, . + 4 + (-0xAE << 2)
label_25b468:
    if (ctx->pc == 0x25B468u) {
        ctx->pc = 0x25B468u;
            // 0x25b468: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x25B46Cu;
        goto label_25b46c;
    }
    ctx->pc = 0x25B464u;
    {
        const bool branch_taken_0x25b464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B464u;
            // 0x25b468: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b464) {
            ctx->pc = 0x25B1B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25b1b0;
        }
    }
    ctx->pc = 0x25B46Cu;
label_25b46c:
    // 0x25b46c: 0x8ea40074  lw          $a0, 0x74($s5)
    ctx->pc = 0x25b46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_25b470:
    // 0x25b470: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x25b470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_25b474:
    // 0x25b474: 0x8fb20238  lw          $s2, 0x238($sp)
    ctx->pc = 0x25b474u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
label_25b478:
    // 0x25b478: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x25b478u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_25b47c:
    // 0x25b47c: 0x8eb60070  lw          $s6, 0x70($s5)
    ctx->pc = 0x25b47cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_25b480:
    // 0x25b480: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x25b480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_25b484:
    // 0x25b484: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x25b484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_25b488:
    // 0x25b488: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x25b488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_25b48c:
    // 0x25b48c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x25b48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_25b490:
    // 0x25b490: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x25b490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
label_25b494:
    // 0x25b494: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x25b494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_25b498:
    // 0x25b498: 0x243082b  sltu        $at, $s2, $v1
    ctx->pc = 0x25b498u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_25b49c:
    // 0x25b49c: 0x10200060  beqz        $at, . + 4 + (0x60 << 2)
label_25b4a0:
    if (ctx->pc == 0x25B4A0u) {
        ctx->pc = 0x25B4A4u;
        goto label_25b4a4;
    }
    ctx->pc = 0x25B49Cu;
    {
        const bool branch_taken_0x25b49c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b49c) {
            ctx->pc = 0x25B620u;
            goto label_25b620;
        }
    }
    ctx->pc = 0x25B4A4u;
label_25b4a4:
    // 0x25b4a4: 0x0  nop
    ctx->pc = 0x25b4a4u;
    // NOP
label_25b4a8:
    // 0x25b4a8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x25b4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25b4ac:
    // 0x25b4ac: 0x3c040101  lui         $a0, 0x101
    ctx->pc = 0x25b4acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)257 << 16));
label_25b4b0:
    // 0x25b4b0: 0x3c030808  lui         $v1, 0x808
    ctx->pc = 0x25b4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2056 << 16));
label_25b4b4:
    // 0x25b4b4: 0x34840101  ori         $a0, $a0, 0x101
    ctx->pc = 0x25b4b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)257);
label_25b4b8:
    // 0x25b4b8: 0x34630808  ori         $v1, $v1, 0x808
    ctx->pc = 0x25b4b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2056);
label_25b4bc:
    // 0x25b4bc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x25b4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_25b4c0:
    // 0x25b4c0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x25b4c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_25b4c4:
    // 0x25b4c4: 0x10600050  beqz        $v1, . + 4 + (0x50 << 2)
label_25b4c8:
    if (ctx->pc == 0x25B4C8u) {
        ctx->pc = 0x25B4CCu;
        goto label_25b4cc;
    }
    ctx->pc = 0x25B4C4u;
    {
        const bool branch_taken_0x25b4c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b4c4) {
            ctx->pc = 0x25B608u;
            goto label_25b608;
        }
    }
    ctx->pc = 0x25B4CCu;
label_25b4cc:
    // 0x25b4cc: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x25b4ccu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_25b4d0:
    // 0x25b4d0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x25b4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_25b4d4:
    // 0x25b4d4: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
label_25b4d8:
    if (ctx->pc == 0x25B4D8u) {
        ctx->pc = 0x25B4DCu;
        goto label_25b4dc;
    }
    ctx->pc = 0x25B4D4u;
    {
        const bool branch_taken_0x25b4d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x25b4d4) {
            ctx->pc = 0x25B518u;
            goto label_25b518;
        }
    }
    ctx->pc = 0x25B4DCu;
label_25b4dc:
    // 0x25b4dc: 0x8ec5000c  lw          $a1, 0xC($s6)
    ctx->pc = 0x25b4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_25b4e0:
    // 0x25b4e0: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x25b4e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_25b4e4:
    // 0x25b4e4: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_25b4e8:
    if (ctx->pc == 0x25B4E8u) {
        ctx->pc = 0x25B4ECu;
        goto label_25b4ec;
    }
    ctx->pc = 0x25B4E4u;
    {
        const bool branch_taken_0x25b4e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b4e4) {
            ctx->pc = 0x25B518u;
            goto label_25b518;
        }
    }
    ctx->pc = 0x25B4ECu;
label_25b4ec:
    // 0x25b4ec: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x25b4ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_25b4f0:
    // 0x25b4f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25b4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25b4f4:
    // 0x25b4f4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x25b4f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_25b4f8:
    // 0x25b4f8: 0x320f809  jalr        $t9
label_25b4fc:
    if (ctx->pc == 0x25B4FCu) {
        ctx->pc = 0x25B4FCu;
            // 0x25b4fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25B500u;
        goto label_25b500;
    }
    ctx->pc = 0x25B4F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25B500u);
        ctx->pc = 0x25B4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B4F8u;
            // 0x25b4fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25B500u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25B500u; }
            if (ctx->pc != 0x25B500u) { return; }
        }
        }
    }
    ctx->pc = 0x25B500u;
label_25b500:
    // 0x25b500: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x25b500u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25b504:
    // 0x25b504: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_25b508:
    if (ctx->pc == 0x25B508u) {
        ctx->pc = 0x25B50Cu;
        goto label_25b50c;
    }
    ctx->pc = 0x25B504u;
    {
        const bool branch_taken_0x25b504 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25b504) {
            ctx->pc = 0x25B514u;
            goto label_25b514;
        }
    }
    ctx->pc = 0x25B50Cu;
label_25b50c:
    // 0x25b50c: 0x10000002  b           . + 4 + (0x2 << 2)
label_25b510:
    if (ctx->pc == 0x25B510u) {
        ctx->pc = 0x25B514u;
        goto label_25b514;
    }
    ctx->pc = 0x25B50Cu;
    {
        const bool branch_taken_0x25b50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b50c) {
            ctx->pc = 0x25B518u;
            goto label_25b518;
        }
    }
    ctx->pc = 0x25B514u;
label_25b514:
    // 0x25b514: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x25b514u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_25b518:
    // 0x25b518: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x25b518u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_25b51c:
    // 0x25b51c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x25b51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_25b520:
    // 0x25b520: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
label_25b524:
    if (ctx->pc == 0x25B524u) {
        ctx->pc = 0x25B528u;
        goto label_25b528;
    }
    ctx->pc = 0x25B520u;
    {
        const bool branch_taken_0x25b520 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x25b520) {
            ctx->pc = 0x25B568u;
            goto label_25b568;
        }
    }
    ctx->pc = 0x25B528u;
label_25b528:
    // 0x25b528: 0x8ec5001c  lw          $a1, 0x1C($s6)
    ctx->pc = 0x25b528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 28)));
label_25b52c:
    // 0x25b52c: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x25b52cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_25b530:
    // 0x25b530: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_25b534:
    if (ctx->pc == 0x25B534u) {
        ctx->pc = 0x25B538u;
        goto label_25b538;
    }
    ctx->pc = 0x25B530u;
    {
        const bool branch_taken_0x25b530 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b530) {
            ctx->pc = 0x25B568u;
            goto label_25b568;
        }
    }
    ctx->pc = 0x25B538u;
label_25b538:
    // 0x25b538: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x25b538u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_25b53c:
    // 0x25b53c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25b53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25b540:
    // 0x25b540: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x25b540u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_25b544:
    // 0x25b544: 0x320f809  jalr        $t9
label_25b548:
    if (ctx->pc == 0x25B548u) {
        ctx->pc = 0x25B548u;
            // 0x25b548: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25B54Cu;
        goto label_25b54c;
    }
    ctx->pc = 0x25B544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25B54Cu);
        ctx->pc = 0x25B548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B544u;
            // 0x25b548: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25B54Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25B54Cu; }
            if (ctx->pc != 0x25B54Cu) { return; }
        }
        }
    }
    ctx->pc = 0x25B54Cu;
label_25b54c:
    // 0x25b54c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x25b54cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25b550:
    // 0x25b550: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_25b554:
    if (ctx->pc == 0x25B554u) {
        ctx->pc = 0x25B558u;
        goto label_25b558;
    }
    ctx->pc = 0x25B550u;
    {
        const bool branch_taken_0x25b550 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25b550) {
            ctx->pc = 0x25B560u;
            goto label_25b560;
        }
    }
    ctx->pc = 0x25B558u;
label_25b558:
    // 0x25b558: 0x10000002  b           . + 4 + (0x2 << 2)
label_25b55c:
    if (ctx->pc == 0x25B55Cu) {
        ctx->pc = 0x25B560u;
        goto label_25b560;
    }
    ctx->pc = 0x25B558u;
    {
        const bool branch_taken_0x25b558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b558) {
            ctx->pc = 0x25B564u;
            goto label_25b564;
        }
    }
    ctx->pc = 0x25B560u;
label_25b560:
    // 0x25b560: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x25b560u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_25b564:
    // 0x25b564: 0x0  nop
    ctx->pc = 0x25b564u;
    // NOP
label_25b568:
    // 0x25b568: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x25b568u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_25b56c:
    // 0x25b56c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x25b56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_25b570:
    // 0x25b570: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
label_25b574:
    if (ctx->pc == 0x25B574u) {
        ctx->pc = 0x25B578u;
        goto label_25b578;
    }
    ctx->pc = 0x25B570u;
    {
        const bool branch_taken_0x25b570 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x25b570) {
            ctx->pc = 0x25B5B8u;
            goto label_25b5b8;
        }
    }
    ctx->pc = 0x25B578u;
label_25b578:
    // 0x25b578: 0x8ec5002c  lw          $a1, 0x2C($s6)
    ctx->pc = 0x25b578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
label_25b57c:
    // 0x25b57c: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x25b57cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_25b580:
    // 0x25b580: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_25b584:
    if (ctx->pc == 0x25B584u) {
        ctx->pc = 0x25B588u;
        goto label_25b588;
    }
    ctx->pc = 0x25B580u;
    {
        const bool branch_taken_0x25b580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b580) {
            ctx->pc = 0x25B5B8u;
            goto label_25b5b8;
        }
    }
    ctx->pc = 0x25B588u;
label_25b588:
    // 0x25b588: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x25b588u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_25b58c:
    // 0x25b58c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25b58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25b590:
    // 0x25b590: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x25b590u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_25b594:
    // 0x25b594: 0x320f809  jalr        $t9
label_25b598:
    if (ctx->pc == 0x25B598u) {
        ctx->pc = 0x25B598u;
            // 0x25b598: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25B59Cu;
        goto label_25b59c;
    }
    ctx->pc = 0x25B594u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25B59Cu);
        ctx->pc = 0x25B598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B594u;
            // 0x25b598: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25B59Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25B59Cu; }
            if (ctx->pc != 0x25B59Cu) { return; }
        }
        }
    }
    ctx->pc = 0x25B59Cu;
label_25b59c:
    // 0x25b59c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x25b59cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25b5a0:
    // 0x25b5a0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_25b5a4:
    if (ctx->pc == 0x25B5A4u) {
        ctx->pc = 0x25B5A8u;
        goto label_25b5a8;
    }
    ctx->pc = 0x25B5A0u;
    {
        const bool branch_taken_0x25b5a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25b5a0) {
            ctx->pc = 0x25B5B0u;
            goto label_25b5b0;
        }
    }
    ctx->pc = 0x25B5A8u;
label_25b5a8:
    // 0x25b5a8: 0x10000002  b           . + 4 + (0x2 << 2)
label_25b5ac:
    if (ctx->pc == 0x25B5ACu) {
        ctx->pc = 0x25B5B0u;
        goto label_25b5b0;
    }
    ctx->pc = 0x25B5A8u;
    {
        const bool branch_taken_0x25b5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b5a8) {
            ctx->pc = 0x25B5B4u;
            goto label_25b5b4;
        }
    }
    ctx->pc = 0x25B5B0u;
label_25b5b0:
    // 0x25b5b0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x25b5b0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_25b5b4:
    // 0x25b5b4: 0x0  nop
    ctx->pc = 0x25b5b4u;
    // NOP
label_25b5b8:
    // 0x25b5b8: 0x92440003  lbu         $a0, 0x3($s2)
    ctx->pc = 0x25b5b8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_25b5bc:
    // 0x25b5bc: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x25b5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_25b5c0:
    // 0x25b5c0: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
label_25b5c4:
    if (ctx->pc == 0x25B5C4u) {
        ctx->pc = 0x25B5C8u;
        goto label_25b5c8;
    }
    ctx->pc = 0x25B5C0u;
    {
        const bool branch_taken_0x25b5c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x25b5c0) {
            ctx->pc = 0x25B608u;
            goto label_25b608;
        }
    }
    ctx->pc = 0x25B5C8u;
label_25b5c8:
    // 0x25b5c8: 0x8ec5003c  lw          $a1, 0x3C($s6)
    ctx->pc = 0x25b5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 60)));
label_25b5cc:
    // 0x25b5cc: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x25b5ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_25b5d0:
    // 0x25b5d0: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_25b5d4:
    if (ctx->pc == 0x25B5D4u) {
        ctx->pc = 0x25B5D8u;
        goto label_25b5d8;
    }
    ctx->pc = 0x25B5D0u;
    {
        const bool branch_taken_0x25b5d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b5d0) {
            ctx->pc = 0x25B608u;
            goto label_25b608;
        }
    }
    ctx->pc = 0x25B5D8u;
label_25b5d8:
    // 0x25b5d8: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x25b5d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_25b5dc:
    // 0x25b5dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25b5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25b5e0:
    // 0x25b5e0: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x25b5e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_25b5e4:
    // 0x25b5e4: 0x320f809  jalr        $t9
label_25b5e8:
    if (ctx->pc == 0x25B5E8u) {
        ctx->pc = 0x25B5E8u;
            // 0x25b5e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25B5ECu;
        goto label_25b5ec;
    }
    ctx->pc = 0x25B5E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25B5ECu);
        ctx->pc = 0x25B5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B5E4u;
            // 0x25b5e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25B5ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25B5ECu; }
            if (ctx->pc != 0x25B5ECu) { return; }
        }
        }
    }
    ctx->pc = 0x25B5ECu;
label_25b5ec:
    // 0x25b5ec: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x25b5ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25b5f0:
    // 0x25b5f0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_25b5f4:
    if (ctx->pc == 0x25B5F4u) {
        ctx->pc = 0x25B5F8u;
        goto label_25b5f8;
    }
    ctx->pc = 0x25B5F0u;
    {
        const bool branch_taken_0x25b5f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25b5f0) {
            ctx->pc = 0x25B600u;
            goto label_25b600;
        }
    }
    ctx->pc = 0x25B5F8u;
label_25b5f8:
    // 0x25b5f8: 0x10000002  b           . + 4 + (0x2 << 2)
label_25b5fc:
    if (ctx->pc == 0x25B5FCu) {
        ctx->pc = 0x25B600u;
        goto label_25b600;
    }
    ctx->pc = 0x25B5F8u;
    {
        const bool branch_taken_0x25b5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b5f8) {
            ctx->pc = 0x25B604u;
            goto label_25b604;
        }
    }
    ctx->pc = 0x25B600u;
label_25b600:
    // 0x25b600: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x25b600u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_25b604:
    // 0x25b604: 0x0  nop
    ctx->pc = 0x25b604u;
    // NOP
label_25b608:
    // 0x25b608: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x25b608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_25b60c:
    // 0x25b60c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x25b60cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_25b610:
    // 0x25b610: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x25b610u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_25b614:
    // 0x25b614: 0x1460ffa4  bnez        $v1, . + 4 + (-0x5C << 2)
label_25b618:
    if (ctx->pc == 0x25B618u) {
        ctx->pc = 0x25B618u;
            // 0x25b618: 0x26d60040  addiu       $s6, $s6, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 64));
        ctx->pc = 0x25B61Cu;
        goto label_25b61c;
    }
    ctx->pc = 0x25B614u;
    {
        const bool branch_taken_0x25b614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B614u;
            // 0x25b618: 0x26d60040  addiu       $s6, $s6, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b614) {
            ctx->pc = 0x25B4A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25b4a8;
        }
    }
    ctx->pc = 0x25B61Cu;
label_25b61c:
    // 0x25b61c: 0x0  nop
    ctx->pc = 0x25b61cu;
    // NOP
label_25b620:
    // 0x25b620: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x25b620u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25b624:
    // 0x25b624: 0xc6810010  lwc1        $f1, 0x10($s4)
    ctx->pc = 0x25b624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25b628:
    // 0x25b628: 0x27b20140  addiu       $s2, $sp, 0x140
    ctx->pc = 0x25b628u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_25b62c:
    // 0x25b62c: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x25b62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b630:
    // 0x25b630: 0x2a0782d  daddu       $t7, $s5, $zero
    ctx->pc = 0x25b630u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_25b634:
    // 0x25b634: 0x27ae0208  addiu       $t6, $sp, 0x208
    ctx->pc = 0x25b634u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
label_25b638:
    // 0x25b638: 0x27ad01e8  addiu       $t5, $sp, 0x1E8
    ctx->pc = 0x25b638u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 488));
label_25b63c:
    // 0x25b63c: 0x27ac01f8  addiu       $t4, $sp, 0x1F8
    ctx->pc = 0x25b63cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 504));
label_25b640:
    // 0x25b640: 0x27ab0180  addiu       $t3, $sp, 0x180
    ctx->pc = 0x25b640u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_25b644:
    // 0x25b644: 0x27aa0190  addiu       $t2, $sp, 0x190
    ctx->pc = 0x25b644u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_25b648:
    // 0x25b648: 0x27a90170  addiu       $t1, $sp, 0x170
    ctx->pc = 0x25b648u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_25b64c:
    // 0x25b64c: 0x27a80160  addiu       $t0, $sp, 0x160
    ctx->pc = 0x25b64cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_25b650:
    // 0x25b650: 0x27a70150  addiu       $a3, $sp, 0x150
    ctx->pc = 0x25b650u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_25b654:
    // 0x25b654: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25b654u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_25b658:
    // 0x25b658: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x25b658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_25b65c:
    // 0x25b65c: 0xc6810014  lwc1        $f1, 0x14($s4)
    ctx->pc = 0x25b65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25b660:
    // 0x25b660: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x25b660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b664:
    // 0x25b664: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25b664u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_25b668:
    // 0x25b668: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x25b668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_25b66c:
    // 0x25b66c: 0xc6810018  lwc1        $f1, 0x18($s4)
    ctx->pc = 0x25b66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25b670:
    // 0x25b670: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x25b670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b674:
    // 0x25b674: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25b674u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_25b678:
    // 0x25b678: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x25b678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_25b67c:
    // 0x25b67c: 0xc681001c  lwc1        $f1, 0x1C($s4)
    ctx->pc = 0x25b67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25b680:
    // 0x25b680: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x25b680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b684:
    // 0x25b684: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25b684u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_25b688:
    // 0x25b688: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x25b688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_25b68c:
    // 0x25b68c: 0x3c043400  lui         $a0, 0x3400
    ctx->pc = 0x25b68cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)13312 << 16));
label_25b690:
    // 0x25b690: 0x2419fffc  addiu       $t9, $zero, -0x4
    ctx->pc = 0x25b690u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_25b694:
    // 0x25b694: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x25b694u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_25b698:
    // 0x25b698: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x25b698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25b69c:
    // 0x25b69c: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x25b69cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_25b6a0:
    // 0x25b6a0: 0x24180004  addiu       $t8, $zero, 0x4
    ctx->pc = 0x25b6a0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_25b6a4:
    // 0x25b6a4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x25b6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_25b6a8:
    // 0x25b6a8: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x25b6a8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_25b6ac:
    // 0x25b6ac: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x25b6acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_25b6b0:
    // 0x25b6b0: 0xc5e10060  lwc1        $f1, 0x60($t7)
    ctx->pc = 0x25b6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25b6b4:
    // 0x25b6b4: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x25b6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b6b8:
    // 0x25b6b8: 0x46000a02  mul.s       $f8, $f1, $f0
    ctx->pc = 0x25b6b8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_25b6bc:
    // 0x25b6bc: 0x46064036  c.le.s      $f8, $f6
    ctx->pc = 0x25b6bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25b6c0:
    // 0x25b6c0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_25b6c4:
    if (ctx->pc == 0x25B6C4u) {
        ctx->pc = 0x25B6C4u;
            // 0x25b6c4: 0x460041c5  abs.s       $f7, $f8 (Delay Slot)
        ctx->f[7] = FPU_ABS_S(ctx->f[8]);
        ctx->pc = 0x25B6C8u;
        goto label_25b6c8;
    }
    ctx->pc = 0x25B6C0u;
    {
        const bool branch_taken_0x25b6c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25B6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B6C0u;
            // 0x25b6c4: 0x460041c5  abs.s       $f7, $f8 (Delay Slot)
        ctx->f[7] = FPU_ABS_S(ctx->f[8]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b6c0) {
            ctx->pc = 0x25B6D8u;
            goto label_25b6d8;
        }
    }
    ctx->pc = 0x25B6C8u;
label_25b6c8:
    // 0x25b6c8: 0xadd80000  sw          $t8, 0x0($t6)
    ctx->pc = 0x25b6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 24));
label_25b6cc:
    // 0x25b6cc: 0xada00000  sw          $zero, 0x0($t5)
    ctx->pc = 0x25b6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 0));
label_25b6d0:
    // 0x25b6d0: 0x10000017  b           . + 4 + (0x17 << 2)
label_25b6d4:
    if (ctx->pc == 0x25B6D4u) {
        ctx->pc = 0x25B6D4u;
            // 0x25b6d4: 0xad860000  sw          $a2, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 6));
        ctx->pc = 0x25B6D8u;
        goto label_25b6d8;
    }
    ctx->pc = 0x25B6D0u;
    {
        const bool branch_taken_0x25b6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B6D0u;
            // 0x25b6d4: 0xad860000  sw          $a2, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b6d0) {
            ctx->pc = 0x25B730u;
            goto label_25b730;
        }
    }
    ctx->pc = 0x25B6D8u;
label_25b6d8:
    // 0x25b6d8: 0xadd90000  sw          $t9, 0x0($t6)
    ctx->pc = 0x25b6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 25));
label_25b6dc:
    // 0x25b6dc: 0x8e360000  lw          $s6, 0x0($s1)
    ctx->pc = 0x25b6dcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25b6e0:
    // 0x25b6e0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x25b6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25b6e4:
    // 0x25b6e4: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x25b6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
label_25b6e8:
    // 0x25b6e8: 0xae160000  sw          $s6, 0x0($s0)
    ctx->pc = 0x25b6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 22));
label_25b6ec:
    // 0x25b6ec: 0xc5410000  lwc1        $f1, 0x0($t2)
    ctx->pc = 0x25b6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25b6f0:
    // 0x25b6f0: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x25b6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b6f4:
    // 0x25b6f4: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x25b6f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
label_25b6f8:
    // 0x25b6f8: 0xe5610000  swc1        $f1, 0x0($t3)
    ctx->pc = 0x25b6f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
label_25b6fc:
    // 0x25b6fc: 0x8ef60000  lw          $s6, 0x0($s7)
    ctx->pc = 0x25b6fcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_25b700:
    // 0x25b700: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x25b700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_25b704:
    // 0x25b704: 0xaee50000  sw          $a1, 0x0($s7)
    ctx->pc = 0x25b704u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 5));
label_25b708:
    // 0x25b708: 0xafd60000  sw          $s6, 0x0($fp)
    ctx->pc = 0x25b708u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 22));
label_25b70c:
    // 0x25b70c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x25b70cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25b710:
    // 0x25b710: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x25b710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
label_25b714:
    // 0x25b714: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x25b714u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
label_25b718:
    // 0x25b718: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x25b718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25b71c:
    // 0x25b71c: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x25b71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
label_25b720:
    // 0x25b720: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x25b720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_25b724:
    // 0x25b724: 0xada60000  sw          $a2, 0x0($t5)
    ctx->pc = 0x25b724u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 6));
label_25b728:
    // 0x25b728: 0xad800000  sw          $zero, 0x0($t4)
    ctx->pc = 0x25b728u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 0));
label_25b72c:
    // 0x25b72c: 0x0  nop
    ctx->pc = 0x25b72cu;
    // NOP
label_25b730:
    // 0x25b730: 0xc5e30040  lwc1        $f3, 0x40($t7)
    ctx->pc = 0x25b730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25b734:
    // 0x25b734: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x25b734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b738:
    // 0x25b738: 0xc6810010  lwc1        $f1, 0x10($s4)
    ctx->pc = 0x25b738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25b73c:
    // 0x25b73c: 0xc5e20060  lwc1        $f2, 0x60($t7)
    ctx->pc = 0x25b73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25b740:
    // 0x25b740: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x25b740u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_25b744:
    // 0x25b744: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x25b744u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_25b748:
    // 0x25b748: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x25b748u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_25b74c:
    // 0x25b74c: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x25b74cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_25b750:
    // 0x25b750: 0x46003834  c.lt.s      $f7, $f0
    ctx->pc = 0x25b750u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25b754:
    // 0x25b754: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_25b758:
    if (ctx->pc == 0x25B758u) {
        ctx->pc = 0x25B758u;
            // 0x25b758: 0x46011042  mul.s       $f1, $f2, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
        ctx->pc = 0x25B75Cu;
        goto label_25b75c;
    }
    ctx->pc = 0x25B754u;
    {
        const bool branch_taken_0x25b754 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25B758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B754u;
            // 0x25b758: 0x46011042  mul.s       $f1, $f2, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b754) {
            ctx->pc = 0x25B770u;
            goto label_25b770;
        }
    }
    ctx->pc = 0x25B75Cu;
label_25b75c:
    // 0x25b75c: 0x46012802  mul.s       $f0, $f5, $f1
    ctx->pc = 0x25b75cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
label_25b760:
    // 0x25b760: 0x46003834  c.lt.s      $f7, $f0
    ctx->pc = 0x25b760u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25b764:
    // 0x25b764: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_25b768:
    if (ctx->pc == 0x25B768u) {
        ctx->pc = 0x25B76Cu;
        goto label_25b76c;
    }
    ctx->pc = 0x25B764u;
    {
        const bool branch_taken_0x25b764 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25b764) {
            ctx->pc = 0x25B780u;
            goto label_25b780;
        }
    }
    ctx->pc = 0x25B76Cu;
label_25b76c:
    // 0x25b76c: 0x0  nop
    ctx->pc = 0x25b76cu;
    // NOP
label_25b770:
    // 0x25b770: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x25b770u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
label_25b774:
    // 0x25b774: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x25b774u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
label_25b778:
    // 0x25b778: 0x10000017  b           . + 4 + (0x17 << 2)
label_25b77c:
    if (ctx->pc == 0x25B77Cu) {
        ctx->pc = 0x25B77Cu;
            // 0x25b77c: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x25B780u;
        goto label_25b780;
    }
    ctx->pc = 0x25B778u;
    {
        const bool branch_taken_0x25b778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B778u;
            // 0x25b77c: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b778) {
            ctx->pc = 0x25B7D8u;
            goto label_25b7d8;
        }
    }
    ctx->pc = 0x25B780u;
label_25b780:
    // 0x25b780: 0x0  nop
    ctx->pc = 0x25b780u;
    // NOP
label_25b784:
    // 0x25b784: 0x460821c3  div.s       $f7, $f4, $f8
    ctx->pc = 0x25b784u;
    if (ctx->f[8] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[7] = ctx->f[4] / ctx->f[8];
label_25b788:
    // 0x25b788: 0xe5270000  swc1        $f7, 0x0($t1)
    ctx->pc = 0x25b788u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
label_25b78c:
    // 0x25b78c: 0xc5430000  lwc1        $f3, 0x0($t2)
    ctx->pc = 0x25b78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25b790:
    // 0x25b790: 0xc5e20040  lwc1        $f2, 0x40($t7)
    ctx->pc = 0x25b790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25b794:
    // 0x25b794: 0xc5e10060  lwc1        $f1, 0x60($t7)
    ctx->pc = 0x25b794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25b798:
    // 0x25b798: 0xc6a000ac  lwc1        $f0, 0xAC($s5)
    ctx->pc = 0x25b798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b79c:
    // 0x25b79c: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x25b79cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_25b7a0:
    // 0x25b7a0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x25b7a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_25b7a4:
    // 0x25b7a4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25b7a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_25b7a8:
    // 0x25b7a8: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x25b7a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_25b7ac:
    // 0x25b7ac: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x25b7acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_25b7b0:
    // 0x25b7b0: 0xc5630000  lwc1        $f3, 0x0($t3)
    ctx->pc = 0x25b7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25b7b4:
    // 0x25b7b4: 0xc5e20040  lwc1        $f2, 0x40($t7)
    ctx->pc = 0x25b7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25b7b8:
    // 0x25b7b8: 0xc5e10060  lwc1        $f1, 0x60($t7)
    ctx->pc = 0x25b7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25b7bc:
    // 0x25b7bc: 0xc6a000ac  lwc1        $f0, 0xAC($s5)
    ctx->pc = 0x25b7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b7c0:
    // 0x25b7c0: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x25b7c0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_25b7c4:
    // 0x25b7c4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x25b7c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_25b7c8:
    // 0x25b7c8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25b7c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_25b7cc:
    // 0x25b7cc: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x25b7ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_25b7d0:
    // 0x25b7d0: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x25b7d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_25b7d4:
    // 0x25b7d4: 0x0  nop
    ctx->pc = 0x25b7d4u;
    // NOP
label_25b7d8:
    // 0x25b7d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x25b7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_25b7dc:
    // 0x25b7dc: 0x28650003  slti        $a1, $v1, 0x3
    ctx->pc = 0x25b7dcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_25b7e0:
    // 0x25b7e0: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x25b7e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_25b7e4:
    // 0x25b7e4: 0x25ef0004  addiu       $t7, $t7, 0x4
    ctx->pc = 0x25b7e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
label_25b7e8:
    // 0x25b7e8: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x25b7e8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
label_25b7ec:
    // 0x25b7ec: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x25b7ecu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
label_25b7f0:
    // 0x25b7f0: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x25b7f0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
label_25b7f4:
    // 0x25b7f4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x25b7f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_25b7f8:
    // 0x25b7f8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x25b7f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_25b7fc:
    // 0x25b7fc: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x25b7fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
label_25b800:
    // 0x25b800: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x25b800u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_25b804:
    // 0x25b804: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x25b804u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
label_25b808:
    // 0x25b808: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x25b808u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
label_25b80c:
    // 0x25b80c: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x25b80cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_25b810:
    // 0x25b810: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x25b810u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_25b814:
    // 0x25b814: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x25b814u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_25b818:
    // 0x25b818: 0x14a0ffa5  bnez        $a1, . + 4 + (-0x5B << 2)
label_25b81c:
    if (ctx->pc == 0x25B81Cu) {
        ctx->pc = 0x25B81Cu;
            // 0x25b81c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->pc = 0x25B820u;
        goto label_25b820;
    }
    ctx->pc = 0x25B818u;
    {
        const bool branch_taken_0x25b818 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B818u;
            // 0x25b81c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b818) {
            ctx->pc = 0x25B6B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25b6b0;
        }
    }
    ctx->pc = 0x25B820u;
label_25b820:
    // 0x25b820: 0x8fa30228  lw          $v1, 0x228($sp)
    ctx->pc = 0x25b820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
label_25b824:
    // 0x25b824: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x25b824u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_25b828:
    // 0x25b828: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_25b82c:
    if (ctx->pc == 0x25B82Cu) {
        ctx->pc = 0x25B82Cu;
            // 0x25b82c: 0xc7a20170  lwc1        $f2, 0x170($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x25B830u;
        goto label_25b830;
    }
    ctx->pc = 0x25B828u;
    {
        const bool branch_taken_0x25b828 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x25B82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B828u;
            // 0x25b82c: 0xc7a20170  lwc1        $f2, 0x170($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b828) {
            ctx->pc = 0x25B83Cu;
            goto label_25b83c;
        }
    }
    ctx->pc = 0x25B830u;
label_25b830:
    // 0x25b830: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25b830u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25b834:
    // 0x25b834: 0x10000008  b           . + 4 + (0x8 << 2)
label_25b838:
    if (ctx->pc == 0x25B838u) {
        ctx->pc = 0x25B838u;
            // 0x25b838: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x25B83Cu;
        goto label_25b83c;
    }
    ctx->pc = 0x25B834u;
    {
        const bool branch_taken_0x25b834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B834u;
            // 0x25b838: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b834) {
            ctx->pc = 0x25B858u;
            goto label_25b858;
        }
    }
    ctx->pc = 0x25B83Cu;
label_25b83c:
    // 0x25b83c: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x25b83cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_25b840:
    // 0x25b840: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x25b840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_25b844:
    // 0x25b844: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x25b844u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_25b848:
    // 0x25b848: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x25b848u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25b84c:
    // 0x25b84c: 0x0  nop
    ctx->pc = 0x25b84cu;
    // NOP
label_25b850:
    // 0x25b850: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25b850u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_25b854:
    // 0x25b854: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x25b854u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_25b858:
    // 0x25b858: 0x46020042  mul.s       $f1, $f0, $f2
    ctx->pc = 0x25b858u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_25b85c:
    // 0x25b85c: 0x8fa3022c  lw          $v1, 0x22C($sp)
    ctx->pc = 0x25b85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 556)));
label_25b860:
    // 0x25b860: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x25b860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b864:
    // 0x25b864: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25b864u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_25b868:
    // 0x25b868: 0xe7a001d8  swc1        $f0, 0x1D8($sp)
    ctx->pc = 0x25b868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
label_25b86c:
    // 0x25b86c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x25b86cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_25b870:
    // 0x25b870: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_25b874:
    if (ctx->pc == 0x25B874u) {
        ctx->pc = 0x25B874u;
            // 0x25b874: 0xc7a40174  lwc1        $f4, 0x174($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->pc = 0x25B878u;
        goto label_25b878;
    }
    ctx->pc = 0x25B870u;
    {
        const bool branch_taken_0x25b870 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x25B874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B870u;
            // 0x25b874: 0xc7a40174  lwc1        $f4, 0x174($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b870) {
            ctx->pc = 0x25B884u;
            goto label_25b884;
        }
    }
    ctx->pc = 0x25B878u;
label_25b878:
    // 0x25b878: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25b878u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25b87c:
    // 0x25b87c: 0x10000008  b           . + 4 + (0x8 << 2)
label_25b880:
    if (ctx->pc == 0x25B880u) {
        ctx->pc = 0x25B880u;
            // 0x25b880: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x25B884u;
        goto label_25b884;
    }
    ctx->pc = 0x25B87Cu;
    {
        const bool branch_taken_0x25b87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B87Cu;
            // 0x25b880: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b87c) {
            ctx->pc = 0x25B8A0u;
            goto label_25b8a0;
        }
    }
    ctx->pc = 0x25B884u;
label_25b884:
    // 0x25b884: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x25b884u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_25b888:
    // 0x25b888: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x25b888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_25b88c:
    // 0x25b88c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x25b88cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_25b890:
    // 0x25b890: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x25b890u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25b894:
    // 0x25b894: 0x0  nop
    ctx->pc = 0x25b894u;
    // NOP
label_25b898:
    // 0x25b898: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25b898u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_25b89c:
    // 0x25b89c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x25b89cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_25b8a0:
    // 0x25b8a0: 0x46040042  mul.s       $f1, $f0, $f4
    ctx->pc = 0x25b8a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_25b8a4:
    // 0x25b8a4: 0x27a301dc  addiu       $v1, $sp, 0x1DC
    ctx->pc = 0x25b8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 476));
label_25b8a8:
    // 0x25b8a8: 0xc7a00164  lwc1        $f0, 0x164($sp)
    ctx->pc = 0x25b8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b8ac:
    // 0x25b8ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25b8acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_25b8b0:
    // 0x25b8b0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x25b8b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_25b8b4:
    // 0x25b8b4: 0x8fa30230  lw          $v1, 0x230($sp)
    ctx->pc = 0x25b8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_25b8b8:
    // 0x25b8b8: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x25b8b8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_25b8bc:
    // 0x25b8bc: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_25b8c0:
    if (ctx->pc == 0x25B8C0u) {
        ctx->pc = 0x25B8C0u;
            // 0x25b8c0: 0xc7a30178  lwc1        $f3, 0x178($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->pc = 0x25B8C4u;
        goto label_25b8c4;
    }
    ctx->pc = 0x25B8BCu;
    {
        const bool branch_taken_0x25b8bc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x25B8C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B8BCu;
            // 0x25b8c0: 0xc7a30178  lwc1        $f3, 0x178($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b8bc) {
            ctx->pc = 0x25B8D0u;
            goto label_25b8d0;
        }
    }
    ctx->pc = 0x25B8C4u;
label_25b8c4:
    // 0x25b8c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25b8c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25b8c8:
    // 0x25b8c8: 0x10000008  b           . + 4 + (0x8 << 2)
label_25b8cc:
    if (ctx->pc == 0x25B8CCu) {
        ctx->pc = 0x25B8CCu;
            // 0x25b8cc: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x25B8D0u;
        goto label_25b8d0;
    }
    ctx->pc = 0x25B8C8u;
    {
        const bool branch_taken_0x25b8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B8C8u;
            // 0x25b8cc: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b8c8) {
            ctx->pc = 0x25B8ECu;
            goto label_25b8ec;
        }
    }
    ctx->pc = 0x25B8D0u;
label_25b8d0:
    // 0x25b8d0: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x25b8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_25b8d4:
    // 0x25b8d4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x25b8d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_25b8d8:
    // 0x25b8d8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x25b8d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_25b8dc:
    // 0x25b8dc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x25b8dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25b8e0:
    // 0x25b8e0: 0x0  nop
    ctx->pc = 0x25b8e0u;
    // NOP
label_25b8e4:
    // 0x25b8e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25b8e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_25b8e8:
    // 0x25b8e8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x25b8e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_25b8ec:
    // 0x25b8ec: 0x46030042  mul.s       $f1, $f0, $f3
    ctx->pc = 0x25b8ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_25b8f0:
    // 0x25b8f0: 0x27a301e0  addiu       $v1, $sp, 0x1E0
    ctx->pc = 0x25b8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_25b8f4:
    // 0x25b8f4: 0xc7a00168  lwc1        $f0, 0x168($sp)
    ctx->pc = 0x25b8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b8f8:
    // 0x25b8f8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25b8f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_25b8fc:
    // 0x25b8fc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x25b8fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_25b900:
    // 0x25b900: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x25b900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
label_25b904:
    // 0x25b904: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x25b904u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_25b908:
    // 0x25b908: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_25b90c:
    if (ctx->pc == 0x25B90Cu) {
        ctx->pc = 0x25B90Cu;
            // 0x25b90c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x25B910u;
        goto label_25b910;
    }
    ctx->pc = 0x25B908u;
    {
        const bool branch_taken_0x25b908 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x25B90Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B908u;
            // 0x25b90c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b908) {
            ctx->pc = 0x25B91Cu;
            goto label_25b91c;
        }
    }
    ctx->pc = 0x25B910u;
label_25b910:
    // 0x25b910: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25b910u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25b914:
    // 0x25b914: 0x10000007  b           . + 4 + (0x7 << 2)
label_25b918:
    if (ctx->pc == 0x25B918u) {
        ctx->pc = 0x25B918u;
            // 0x25b918: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x25B91Cu;
        goto label_25b91c;
    }
    ctx->pc = 0x25B914u;
    {
        const bool branch_taken_0x25b914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B914u;
            // 0x25b918: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b914) {
            ctx->pc = 0x25B934u;
            goto label_25b934;
        }
    }
    ctx->pc = 0x25B91Cu;
label_25b91c:
    // 0x25b91c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x25b91cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_25b920:
    // 0x25b920: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x25b920u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_25b924:
    // 0x25b924: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x25b924u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25b928:
    // 0x25b928: 0x0  nop
    ctx->pc = 0x25b928u;
    // NOP
label_25b92c:
    // 0x25b92c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25b92cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_25b930:
    // 0x25b930: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x25b930u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_25b934:
    // 0x25b934: 0x46020042  mul.s       $f1, $f0, $f2
    ctx->pc = 0x25b934u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_25b938:
    // 0x25b938: 0x8fa3021c  lw          $v1, 0x21C($sp)
    ctx->pc = 0x25b938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
label_25b93c:
    // 0x25b93c: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x25b93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b940:
    // 0x25b940: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25b940u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_25b944:
    // 0x25b944: 0xe7a001c8  swc1        $f0, 0x1C8($sp)
    ctx->pc = 0x25b944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
label_25b948:
    // 0x25b948: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x25b948u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_25b94c:
    // 0x25b94c: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_25b950:
    if (ctx->pc == 0x25B950u) {
        ctx->pc = 0x25B950u;
            // 0x25b950: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x25B954u;
        goto label_25b954;
    }
    ctx->pc = 0x25B94Cu;
    {
        const bool branch_taken_0x25b94c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x25B950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B94Cu;
            // 0x25b950: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b94c) {
            ctx->pc = 0x25B960u;
            goto label_25b960;
        }
    }
    ctx->pc = 0x25B954u;
label_25b954:
    // 0x25b954: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25b954u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25b958:
    // 0x25b958: 0x10000007  b           . + 4 + (0x7 << 2)
label_25b95c:
    if (ctx->pc == 0x25B95Cu) {
        ctx->pc = 0x25B95Cu;
            // 0x25b95c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x25B960u;
        goto label_25b960;
    }
    ctx->pc = 0x25B958u;
    {
        const bool branch_taken_0x25b958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B95Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B958u;
            // 0x25b95c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b958) {
            ctx->pc = 0x25B978u;
            goto label_25b978;
        }
    }
    ctx->pc = 0x25B960u;
label_25b960:
    // 0x25b960: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x25b960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_25b964:
    // 0x25b964: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x25b964u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_25b968:
    // 0x25b968: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x25b968u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25b96c:
    // 0x25b96c: 0x0  nop
    ctx->pc = 0x25b96cu;
    // NOP
label_25b970:
    // 0x25b970: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25b970u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_25b974:
    // 0x25b974: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x25b974u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_25b978:
    // 0x25b978: 0x46040042  mul.s       $f1, $f0, $f4
    ctx->pc = 0x25b978u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_25b97c:
    // 0x25b97c: 0x27a301cc  addiu       $v1, $sp, 0x1CC
    ctx->pc = 0x25b97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 460));
label_25b980:
    // 0x25b980: 0xc7a00154  lwc1        $f0, 0x154($sp)
    ctx->pc = 0x25b980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b984:
    // 0x25b984: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25b984u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_25b988:
    // 0x25b988: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x25b988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_25b98c:
    // 0x25b98c: 0x8fa30220  lw          $v1, 0x220($sp)
    ctx->pc = 0x25b98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
label_25b990:
    // 0x25b990: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x25b990u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_25b994:
    // 0x25b994: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_25b998:
    if (ctx->pc == 0x25B998u) {
        ctx->pc = 0x25B998u;
            // 0x25b998: 0x27be01d0  addiu       $fp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x25B99Cu;
        goto label_25b99c;
    }
    ctx->pc = 0x25B994u;
    {
        const bool branch_taken_0x25b994 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x25B998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B994u;
            // 0x25b998: 0x27be01d0  addiu       $fp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b994) {
            ctx->pc = 0x25B9A8u;
            goto label_25b9a8;
        }
    }
    ctx->pc = 0x25B99Cu;
label_25b99c:
    // 0x25b99c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25b99cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25b9a0:
    // 0x25b9a0: 0x10000008  b           . + 4 + (0x8 << 2)
label_25b9a4:
    if (ctx->pc == 0x25B9A4u) {
        ctx->pc = 0x25B9A4u;
            // 0x25b9a4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x25B9A8u;
        goto label_25b9a8;
    }
    ctx->pc = 0x25B9A0u;
    {
        const bool branch_taken_0x25b9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B9A0u;
            // 0x25b9a4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b9a0) {
            ctx->pc = 0x25B9C4u;
            goto label_25b9c4;
        }
    }
    ctx->pc = 0x25B9A8u;
label_25b9a8:
    // 0x25b9a8: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x25b9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_25b9ac:
    // 0x25b9ac: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x25b9acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_25b9b0:
    // 0x25b9b0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x25b9b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_25b9b4:
    // 0x25b9b4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x25b9b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25b9b8:
    // 0x25b9b8: 0x0  nop
    ctx->pc = 0x25b9b8u;
    // NOP
label_25b9bc:
    // 0x25b9bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25b9bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_25b9c0:
    // 0x25b9c0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x25b9c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_25b9c4:
    // 0x25b9c4: 0x46030042  mul.s       $f1, $f0, $f3
    ctx->pc = 0x25b9c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_25b9c8:
    // 0x25b9c8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x25b9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_25b9cc:
    // 0x25b9cc: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x25b9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b9d0:
    // 0x25b9d0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25b9d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_25b9d4:
    // 0x25b9d4: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x25b9d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
label_25b9d8:
    // 0x25b9d8: 0x8fa30238  lw          $v1, 0x238($sp)
    ctx->pc = 0x25b9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
label_25b9dc:
    // 0x25b9dc: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x25b9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_25b9e0:
    // 0x25b9e0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x25b9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_25b9e4:
    // 0x25b9e4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x25b9e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_25b9e8:
    // 0x25b9e8: 0x27a301dc  addiu       $v1, $sp, 0x1DC
    ctx->pc = 0x25b9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 476));
label_25b9ec:
    // 0x25b9ec: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x25b9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25b9f0:
    // 0x25b9f0: 0xc7a101d8  lwc1        $f1, 0x1D8($sp)
    ctx->pc = 0x25b9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25b9f4:
    // 0x25b9f4: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x25b9f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25b9f8:
    // 0x25b9f8: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_25b9fc:
    if (ctx->pc == 0x25B9FCu) {
        ctx->pc = 0x25B9FCu;
            // 0x25b9fc: 0x27a301e0  addiu       $v1, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->pc = 0x25BA00u;
        goto label_25ba00;
    }
    ctx->pc = 0x25B9F8u;
    {
        const bool branch_taken_0x25b9f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25B9FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B9F8u;
            // 0x25b9fc: 0x27a301e0  addiu       $v1, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b9f8) {
            ctx->pc = 0x25BA20u;
            goto label_25ba20;
        }
    }
    ctx->pc = 0x25BA00u;
label_25ba00:
    // 0x25ba00: 0x27a301e0  addiu       $v1, $sp, 0x1E0
    ctx->pc = 0x25ba00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_25ba04:
    // 0x25ba04: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25ba04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ba08:
    // 0x25ba08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25ba08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25ba0c:
    // 0x25ba0c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_25ba10:
    if (ctx->pc == 0x25BA10u) {
        ctx->pc = 0x25BA10u;
            // 0x25ba10: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x25BA14u;
        goto label_25ba14;
    }
    ctx->pc = 0x25BA0Cu;
    {
        const bool branch_taken_0x25ba0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25BA10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BA0Cu;
            // 0x25ba10: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ba0c) {
            ctx->pc = 0x25BA18u;
            goto label_25ba18;
        }
    }
    ctx->pc = 0x25BA14u;
label_25ba14:
    // 0x25ba14: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x25ba14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25ba18:
    // 0x25ba18: 0x10000008  b           . + 4 + (0x8 << 2)
label_25ba1c:
    if (ctx->pc == 0x25BA1Cu) {
        ctx->pc = 0x25BA1Cu;
            // 0x25ba1c: 0x27a301cc  addiu       $v1, $sp, 0x1CC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 460));
        ctx->pc = 0x25BA20u;
        goto label_25ba20;
    }
    ctx->pc = 0x25BA18u;
    {
        const bool branch_taken_0x25ba18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BA1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BA18u;
            // 0x25ba1c: 0x27a301cc  addiu       $v1, $sp, 0x1CC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 460));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ba18) {
            ctx->pc = 0x25BA3Cu;
            goto label_25ba3c;
        }
    }
    ctx->pc = 0x25BA20u;
label_25ba20:
    // 0x25ba20: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25ba20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ba24:
    // 0x25ba24: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x25ba24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25ba28:
    // 0x25ba28: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_25ba2c:
    if (ctx->pc == 0x25BA2Cu) {
        ctx->pc = 0x25BA2Cu;
            // 0x25ba2c: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x25BA30u;
        goto label_25ba30;
    }
    ctx->pc = 0x25BA28u;
    {
        const bool branch_taken_0x25ba28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25BA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BA28u;
            // 0x25ba2c: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ba28) {
            ctx->pc = 0x25BA38u;
            goto label_25ba38;
        }
    }
    ctx->pc = 0x25BA30u;
label_25ba30:
    // 0x25ba30: 0x10000001  b           . + 4 + (0x1 << 2)
label_25ba34:
    if (ctx->pc == 0x25BA34u) {
        ctx->pc = 0x25BA34u;
            // 0x25ba34: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25BA38u;
        goto label_25ba38;
    }
    ctx->pc = 0x25BA30u;
    {
        const bool branch_taken_0x25ba30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BA30u;
            // 0x25ba34: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ba30) {
            ctx->pc = 0x25BA38u;
            goto label_25ba38;
        }
    }
    ctx->pc = 0x25BA38u;
label_25ba38:
    // 0x25ba38: 0x27a301cc  addiu       $v1, $sp, 0x1CC
    ctx->pc = 0x25ba38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 460));
label_25ba3c:
    // 0x25ba3c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x25ba3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25ba40:
    // 0x25ba40: 0xc7a101c8  lwc1        $f1, 0x1C8($sp)
    ctx->pc = 0x25ba40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25ba44:
    // 0x25ba44: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x25ba44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25ba48:
    // 0x25ba48: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_25ba4c:
    if (ctx->pc == 0x25BA4Cu) {
        ctx->pc = 0x25BA50u;
        goto label_25ba50;
    }
    ctx->pc = 0x25BA48u;
    {
        const bool branch_taken_0x25ba48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25ba48) {
            ctx->pc = 0x25BA6Cu;
            goto label_25ba6c;
        }
    }
    ctx->pc = 0x25BA50u;
label_25ba50:
    // 0x25ba50: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x25ba50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ba54:
    // 0x25ba54: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25ba54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25ba58:
    // 0x25ba58: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_25ba5c:
    if (ctx->pc == 0x25BA5Cu) {
        ctx->pc = 0x25BA5Cu;
            // 0x25ba5c: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x25BA60u;
        goto label_25ba60;
    }
    ctx->pc = 0x25BA58u;
    {
        const bool branch_taken_0x25ba58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25BA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BA58u;
            // 0x25ba5c: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ba58) {
            ctx->pc = 0x25BA64u;
            goto label_25ba64;
        }
    }
    ctx->pc = 0x25BA60u;
label_25ba60:
    // 0x25ba60: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x25ba60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25ba64:
    // 0x25ba64: 0x10000007  b           . + 4 + (0x7 << 2)
label_25ba68:
    if (ctx->pc == 0x25BA68u) {
        ctx->pc = 0x25BA6Cu;
        goto label_25ba6c;
    }
    ctx->pc = 0x25BA64u;
    {
        const bool branch_taken_0x25ba64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ba64) {
            ctx->pc = 0x25BA84u;
            goto label_25ba84;
        }
    }
    ctx->pc = 0x25BA6Cu;
label_25ba6c:
    // 0x25ba6c: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x25ba6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ba70:
    // 0x25ba70: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x25ba70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25ba74:
    // 0x25ba74: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_25ba78:
    if (ctx->pc == 0x25BA78u) {
        ctx->pc = 0x25BA78u;
            // 0x25ba78: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x25BA7Cu;
        goto label_25ba7c;
    }
    ctx->pc = 0x25BA74u;
    {
        const bool branch_taken_0x25ba74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25BA78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BA74u;
            // 0x25ba78: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ba74) {
            ctx->pc = 0x25BA84u;
            goto label_25ba84;
        }
    }
    ctx->pc = 0x25BA7Cu;
label_25ba7c:
    // 0x25ba7c: 0x10000001  b           . + 4 + (0x1 << 2)
label_25ba80:
    if (ctx->pc == 0x25BA80u) {
        ctx->pc = 0x25BA80u;
            // 0x25ba80: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25BA84u;
        goto label_25ba84;
    }
    ctx->pc = 0x25BA7Cu;
    {
        const bool branch_taken_0x25ba7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BA80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BA7Cu;
            // 0x25ba80: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ba7c) {
            ctx->pc = 0x25BA84u;
            goto label_25ba84;
        }
    }
    ctx->pc = 0x25BA84u;
label_25ba84:
    // 0x25ba84: 0x0  nop
    ctx->pc = 0x25ba84u;
    // NOP
label_25ba88:
    // 0x25ba88: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x25ba88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_25ba8c:
    // 0x25ba8c: 0x12b080  sll         $s6, $s2, 2
    ctx->pc = 0x25ba8cu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_25ba90:
    // 0x25ba90: 0x7d2021  addu        $a0, $v1, $sp
    ctx->pc = 0x25ba90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_25ba94:
    // 0x25ba94: 0x2dd2821  addu        $a1, $s6, $sp
    ctx->pc = 0x25ba94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 29)));
label_25ba98:
    // 0x25ba98: 0x248401d8  addiu       $a0, $a0, 0x1D8
    ctx->pc = 0x25ba98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 472));
label_25ba9c:
    // 0x25ba9c: 0x24b701c8  addiu       $s7, $a1, 0x1C8
    ctx->pc = 0x25ba9cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 456));
label_25baa0:
    // 0x25baa0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x25baa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25baa4:
    // 0x25baa4: 0xc6e10000  lwc1        $f1, 0x0($s7)
    ctx->pc = 0x25baa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25baa8:
    // 0x25baa8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25baa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25baac:
    // 0x25baac: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_25bab0:
    if (ctx->pc == 0x25BAB0u) {
        ctx->pc = 0x25BAB0u;
            // 0x25bab0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25BAB4u;
        goto label_25bab4;
    }
    ctx->pc = 0x25BAACu;
    {
        const bool branch_taken_0x25baac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25BAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BAACu;
            // 0x25bab0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25baac) {
            ctx->pc = 0x25BAB8u;
            goto label_25bab8;
        }
    }
    ctx->pc = 0x25BAB4u;
label_25bab4:
    // 0x25bab4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25bab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25bab8:
    // 0x25bab8: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x25bab8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
label_25babc:
    // 0x25babc: 0x14a00076  bnez        $a1, . + 4 + (0x76 << 2)
label_25bac0:
    if (ctx->pc == 0x25BAC0u) {
        ctx->pc = 0x25BAC4u;
        goto label_25bac4;
    }
    ctx->pc = 0x25BABCu;
    {
        const bool branch_taken_0x25babc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x25babc) {
            ctx->pc = 0x25BC98u;
            goto label_25bc98;
        }
    }
    ctx->pc = 0x25BAC4u;
label_25bac4:
    // 0x25bac4: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x25bac4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25bac8:
    // 0x25bac8: 0x450100e9  bc1t        . + 4 + (0xE9 << 2)
label_25bacc:
    if (ctx->pc == 0x25BACCu) {
        ctx->pc = 0x25BAD0u;
        goto label_25bad0;
    }
    ctx->pc = 0x25BAC8u;
    {
        const bool branch_taken_0x25bac8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25bac8) {
            ctx->pc = 0x25BE70u;
            goto label_25be70;
        }
    }
    ctx->pc = 0x25BAD0u;
label_25bad0:
    // 0x25bad0: 0x100000d3  b           . + 4 + (0xD3 << 2)
label_25bad4:
    if (ctx->pc == 0x25BAD4u) {
        ctx->pc = 0x25BAD8u;
        goto label_25bad8;
    }
    ctx->pc = 0x25BAD0u;
    {
        const bool branch_taken_0x25bad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bad0) {
            ctx->pc = 0x25BE20u;
            goto label_25be20;
        }
    }
    ctx->pc = 0x25BAD8u;
label_25bad8:
    // 0x25bad8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x25bad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25badc:
    // 0x25badc: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x25badcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_25bae0:
    // 0x25bae0: 0x94660002  lhu         $a2, 0x2($v1)
    ctx->pc = 0x25bae0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_25bae4:
    // 0x25bae4: 0x30850001  andi        $a1, $a0, 0x1
    ctx->pc = 0x25bae4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_25bae8:
    // 0x25bae8: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x25bae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_25baec:
    // 0x25baec: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x25baecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_25baf0:
    // 0x25baf0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x25baf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_25baf4:
    // 0x25baf4: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x25baf4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_25baf8:
    // 0x25baf8: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x25baf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
label_25bafc:
    // 0x25bafc: 0x2432804  sllv        $a1, $v1, $s2
    ctx->pc = 0x25bafcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 18) & 0x1F));
label_25bb00:
    // 0x25bb00: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x25bb00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_25bb04:
    // 0x25bb04: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x25bb04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
label_25bb08:
    // 0x25bb08: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x25bb08u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
label_25bb0c:
    // 0x25bb0c: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x25bb0cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_25bb10:
    // 0x25bb10: 0x28630007  slti        $v1, $v1, 0x7
    ctx->pc = 0x25bb10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
label_25bb14:
    // 0x25bb14: 0x1460002e  bnez        $v1, . + 4 + (0x2E << 2)
label_25bb18:
    if (ctx->pc == 0x25BB18u) {
        ctx->pc = 0x25BB1Cu;
        goto label_25bb1c;
    }
    ctx->pc = 0x25BB14u;
    {
        const bool branch_taken_0x25bb14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25bb14) {
            ctx->pc = 0x25BBD0u;
            goto label_25bbd0;
        }
    }
    ctx->pc = 0x25BB1Cu;
label_25bb1c:
    // 0x25bb1c: 0x10a0002c  beqz        $a1, . + 4 + (0x2C << 2)
label_25bb20:
    if (ctx->pc == 0x25BB20u) {
        ctx->pc = 0x25BB24u;
        goto label_25bb24;
    }
    ctx->pc = 0x25BB1Cu;
    {
        const bool branch_taken_0x25bb1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bb1c) {
            ctx->pc = 0x25BBD0u;
            goto label_25bbd0;
        }
    }
    ctx->pc = 0x25BB24u;
label_25bb24:
    // 0x25bb24: 0x14c00018  bnez        $a2, . + 4 + (0x18 << 2)
label_25bb28:
    if (ctx->pc == 0x25BB28u) {
        ctx->pc = 0x25BB28u;
            // 0x25bb28: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->pc = 0x25BB2Cu;
        goto label_25bb2c;
    }
    ctx->pc = 0x25BB24u;
    {
        const bool branch_taken_0x25bb24 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x25BB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BB24u;
            // 0x25bb28: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bb24) {
            ctx->pc = 0x25BB88u;
            goto label_25bb88;
        }
    }
    ctx->pc = 0x25BB2Cu;
label_25bb2c:
    // 0x25bb2c: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x25bb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
label_25bb30:
    // 0x25bb30: 0x27a301cc  addiu       $v1, $sp, 0x1CC
    ctx->pc = 0x25bb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 460));
label_25bb34:
    // 0x25bb34: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x25bb34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25bb38:
    // 0x25bb38: 0xc7a101c8  lwc1        $f1, 0x1C8($sp)
    ctx->pc = 0x25bb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25bb3c:
    // 0x25bb3c: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x25bb3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25bb40:
    // 0x25bb40: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_25bb44:
    if (ctx->pc == 0x25BB44u) {
        ctx->pc = 0x25BB48u;
        goto label_25bb48;
    }
    ctx->pc = 0x25BB40u;
    {
        const bool branch_taken_0x25bb40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25bb40) {
            ctx->pc = 0x25BB64u;
            goto label_25bb64;
        }
    }
    ctx->pc = 0x25BB48u;
label_25bb48:
    // 0x25bb48: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x25bb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bb4c:
    // 0x25bb4c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25bb4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25bb50:
    // 0x25bb50: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_25bb54:
    if (ctx->pc == 0x25BB54u) {
        ctx->pc = 0x25BB54u;
            // 0x25bb54: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x25BB58u;
        goto label_25bb58;
    }
    ctx->pc = 0x25BB50u;
    {
        const bool branch_taken_0x25bb50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25BB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BB50u;
            // 0x25bb54: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bb50) {
            ctx->pc = 0x25BB5Cu;
            goto label_25bb5c;
        }
    }
    ctx->pc = 0x25BB58u;
label_25bb58:
    // 0x25bb58: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x25bb58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25bb5c:
    // 0x25bb5c: 0x10000007  b           . + 4 + (0x7 << 2)
label_25bb60:
    if (ctx->pc == 0x25BB60u) {
        ctx->pc = 0x25BB64u;
        goto label_25bb64;
    }
    ctx->pc = 0x25BB5Cu;
    {
        const bool branch_taken_0x25bb5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bb5c) {
            ctx->pc = 0x25BB7Cu;
            goto label_25bb7c;
        }
    }
    ctx->pc = 0x25BB64u;
label_25bb64:
    // 0x25bb64: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x25bb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bb68:
    // 0x25bb68: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x25bb68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25bb6c:
    // 0x25bb6c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_25bb70:
    if (ctx->pc == 0x25BB70u) {
        ctx->pc = 0x25BB70u;
            // 0x25bb70: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x25BB74u;
        goto label_25bb74;
    }
    ctx->pc = 0x25BB6Cu;
    {
        const bool branch_taken_0x25bb6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25BB70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BB6Cu;
            // 0x25bb70: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bb6c) {
            ctx->pc = 0x25BB7Cu;
            goto label_25bb7c;
        }
    }
    ctx->pc = 0x25BB74u;
label_25bb74:
    // 0x25bb74: 0x10000001  b           . + 4 + (0x1 << 2)
label_25bb78:
    if (ctx->pc == 0x25BB78u) {
        ctx->pc = 0x25BB78u;
            // 0x25bb78: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25BB7Cu;
        goto label_25bb7c;
    }
    ctx->pc = 0x25BB74u;
    {
        const bool branch_taken_0x25bb74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BB78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BB74u;
            // 0x25bb78: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bb74) {
            ctx->pc = 0x25BB7Cu;
            goto label_25bb7c;
        }
    }
    ctx->pc = 0x25BB7Cu;
label_25bb7c:
    // 0x25bb7c: 0x1000ffc2  b           . + 4 + (-0x3E << 2)
label_25bb80:
    if (ctx->pc == 0x25BB80u) {
        ctx->pc = 0x25BB84u;
        goto label_25bb84;
    }
    ctx->pc = 0x25BB7Cu;
    {
        const bool branch_taken_0x25bb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bb7c) {
            ctx->pc = 0x25BA88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25ba88;
        }
    }
    ctx->pc = 0x25BB84u;
label_25bb84:
    // 0x25bb84: 0x0  nop
    ctx->pc = 0x25bb84u;
    // NOP
label_25bb88:
    // 0x25bb88: 0x8ea30070  lw          $v1, 0x70($s5)
    ctx->pc = 0x25bb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_25bb8c:
    // 0x25bb8c: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x25bb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_25bb90:
    // 0x25bb90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25bb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_25bb94:
    // 0x25bb94: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x25bb94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_25bb98:
    // 0x25bb98: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x25bb98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_25bb9c:
    // 0x25bb9c: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_25bba0:
    if (ctx->pc == 0x25BBA0u) {
        ctx->pc = 0x25BBA4u;
        goto label_25bba4;
    }
    ctx->pc = 0x25BB9Cu;
    {
        const bool branch_taken_0x25bb9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25bb9c) {
            ctx->pc = 0x25BBD0u;
            goto label_25bbd0;
        }
    }
    ctx->pc = 0x25BBA4u;
label_25bba4:
    // 0x25bba4: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x25bba4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_25bba8:
    // 0x25bba8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25bba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25bbac:
    // 0x25bbac: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x25bbacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_25bbb0:
    // 0x25bbb0: 0x320f809  jalr        $t9
label_25bbb4:
    if (ctx->pc == 0x25BBB4u) {
        ctx->pc = 0x25BBB4u;
            // 0x25bbb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25BBB8u;
        goto label_25bbb8;
    }
    ctx->pc = 0x25BBB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25BBB8u);
        ctx->pc = 0x25BBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BBB0u;
            // 0x25bbb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25BBB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25BBB8u; }
            if (ctx->pc != 0x25BBB8u) { return; }
        }
        }
    }
    ctx->pc = 0x25BBB8u;
label_25bbb8:
    // 0x25bbb8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x25bbb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25bbbc:
    // 0x25bbbc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_25bbc0:
    if (ctx->pc == 0x25BBC0u) {
        ctx->pc = 0x25BBC4u;
        goto label_25bbc4;
    }
    ctx->pc = 0x25BBBCu;
    {
        const bool branch_taken_0x25bbbc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25bbbc) {
            ctx->pc = 0x25BBCCu;
            goto label_25bbcc;
        }
    }
    ctx->pc = 0x25BBC4u;
label_25bbc4:
    // 0x25bbc4: 0x10000002  b           . + 4 + (0x2 << 2)
label_25bbc8:
    if (ctx->pc == 0x25BBC8u) {
        ctx->pc = 0x25BBCCu;
        goto label_25bbcc;
    }
    ctx->pc = 0x25BBC4u;
    {
        const bool branch_taken_0x25bbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bbc4) {
            ctx->pc = 0x25BBD0u;
            goto label_25bbd0;
        }
    }
    ctx->pc = 0x25BBCCu;
label_25bbcc:
    // 0x25bbcc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x25bbccu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_25bbd0:
    // 0x25bbd0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x25bbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25bbd4:
    // 0x25bbd4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x25bbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25bbd8:
    // 0x25bbd8: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x25bbd8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_25bbdc:
    // 0x25bbdc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x25bbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_25bbe0:
    // 0x25bbe0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x25bbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_25bbe4:
    // 0x25bbe4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x25bbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25bbe8:
    // 0x25bbe8: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x25bbe8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_25bbec:
    // 0x25bbec: 0x1083ffba  beq         $a0, $v1, . + 4 + (-0x46 << 2)
label_25bbf0:
    if (ctx->pc == 0x25BBF0u) {
        ctx->pc = 0x25BBF0u;
            // 0x25bbf0: 0x2dd1821  addu        $v1, $s6, $sp (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 29)));
        ctx->pc = 0x25BBF4u;
        goto label_25bbf4;
    }
    ctx->pc = 0x25BBECu;
    {
        const bool branch_taken_0x25bbec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x25BBF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BBECu;
            // 0x25bbf0: 0x2dd1821  addu        $v1, $s6, $sp (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bbec) {
            ctx->pc = 0x25BAD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25bad8;
        }
    }
    ctx->pc = 0x25BBF4u;
label_25bbf4:
    // 0x25bbf4: 0x8c630218  lw          $v1, 0x218($v1)
    ctx->pc = 0x25bbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 536)));
label_25bbf8:
    // 0x25bbf8: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x25bbf8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_25bbfc:
    // 0x25bbfc: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_25bc00:
    if (ctx->pc == 0x25BC00u) {
        ctx->pc = 0x25BC00u;
            // 0x25bc00: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x25BC04u;
        goto label_25bc04;
    }
    ctx->pc = 0x25BBFCu;
    {
        const bool branch_taken_0x25bbfc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x25BC00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BBFCu;
            // 0x25bc00: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bbfc) {
            ctx->pc = 0x25BC10u;
            goto label_25bc10;
        }
    }
    ctx->pc = 0x25BC04u;
label_25bc04:
    // 0x25bc04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25bc04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25bc08:
    // 0x25bc08: 0x10000007  b           . + 4 + (0x7 << 2)
label_25bc0c:
    if (ctx->pc == 0x25BC0Cu) {
        ctx->pc = 0x25BC0Cu;
            // 0x25bc0c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x25BC10u;
        goto label_25bc10;
    }
    ctx->pc = 0x25BC08u;
    {
        const bool branch_taken_0x25bc08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BC08u;
            // 0x25bc0c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bc08) {
            ctx->pc = 0x25BC28u;
            goto label_25bc28;
        }
    }
    ctx->pc = 0x25BC10u;
label_25bc10:
    // 0x25bc10: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x25bc10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_25bc14:
    // 0x25bc14: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x25bc14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_25bc18:
    // 0x25bc18: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x25bc18u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25bc1c:
    // 0x25bc1c: 0x0  nop
    ctx->pc = 0x25bc1cu;
    // NOP
label_25bc20:
    // 0x25bc20: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x25bc20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_25bc24:
    // 0x25bc24: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x25bc24u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_25bc28:
    // 0x25bc28: 0x2dd1821  addu        $v1, $s6, $sp
    ctx->pc = 0x25bc28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 29)));
label_25bc2c:
    // 0x25bc2c: 0xc4610170  lwc1        $f1, 0x170($v1)
    ctx->pc = 0x25bc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25bc30:
    // 0x25bc30: 0xc4600150  lwc1        $f0, 0x150($v1)
    ctx->pc = 0x25bc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bc34:
    // 0x25bc34: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x25bc34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_25bc38:
    // 0x25bc38: 0x27a301cc  addiu       $v1, $sp, 0x1CC
    ctx->pc = 0x25bc38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 460));
label_25bc3c:
    // 0x25bc3c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25bc3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_25bc40:
    // 0x25bc40: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x25bc40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
label_25bc44:
    // 0x25bc44: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x25bc44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25bc48:
    // 0x25bc48: 0xc7a101c8  lwc1        $f1, 0x1C8($sp)
    ctx->pc = 0x25bc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25bc4c:
    // 0x25bc4c: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x25bc4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25bc50:
    // 0x25bc50: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_25bc54:
    if (ctx->pc == 0x25BC54u) {
        ctx->pc = 0x25BC58u;
        goto label_25bc58;
    }
    ctx->pc = 0x25BC50u;
    {
        const bool branch_taken_0x25bc50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25bc50) {
            ctx->pc = 0x25BC74u;
            goto label_25bc74;
        }
    }
    ctx->pc = 0x25BC58u;
label_25bc58:
    // 0x25bc58: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x25bc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bc5c:
    // 0x25bc5c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25bc5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25bc60:
    // 0x25bc60: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_25bc64:
    if (ctx->pc == 0x25BC64u) {
        ctx->pc = 0x25BC64u;
            // 0x25bc64: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x25BC68u;
        goto label_25bc68;
    }
    ctx->pc = 0x25BC60u;
    {
        const bool branch_taken_0x25bc60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25BC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BC60u;
            // 0x25bc64: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bc60) {
            ctx->pc = 0x25BC6Cu;
            goto label_25bc6c;
        }
    }
    ctx->pc = 0x25BC68u;
label_25bc68:
    // 0x25bc68: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x25bc68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25bc6c:
    // 0x25bc6c: 0x10000007  b           . + 4 + (0x7 << 2)
label_25bc70:
    if (ctx->pc == 0x25BC70u) {
        ctx->pc = 0x25BC74u;
        goto label_25bc74;
    }
    ctx->pc = 0x25BC6Cu;
    {
        const bool branch_taken_0x25bc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bc6c) {
            ctx->pc = 0x25BC8Cu;
            goto label_25bc8c;
        }
    }
    ctx->pc = 0x25BC74u;
label_25bc74:
    // 0x25bc74: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x25bc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bc78:
    // 0x25bc78: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x25bc78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25bc7c:
    // 0x25bc7c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_25bc80:
    if (ctx->pc == 0x25BC80u) {
        ctx->pc = 0x25BC80u;
            // 0x25bc80: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x25BC84u;
        goto label_25bc84;
    }
    ctx->pc = 0x25BC7Cu;
    {
        const bool branch_taken_0x25bc7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25BC80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BC7Cu;
            // 0x25bc80: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bc7c) {
            ctx->pc = 0x25BC8Cu;
            goto label_25bc8c;
        }
    }
    ctx->pc = 0x25BC84u;
label_25bc84:
    // 0x25bc84: 0x10000001  b           . + 4 + (0x1 << 2)
label_25bc88:
    if (ctx->pc == 0x25BC88u) {
        ctx->pc = 0x25BC88u;
            // 0x25bc88: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25BC8Cu;
        goto label_25bc8c;
    }
    ctx->pc = 0x25BC84u;
    {
        const bool branch_taken_0x25bc84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BC84u;
            // 0x25bc88: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bc84) {
            ctx->pc = 0x25BC8Cu;
            goto label_25bc8c;
        }
    }
    ctx->pc = 0x25BC8Cu;
label_25bc8c:
    // 0x25bc8c: 0x1000ff7e  b           . + 4 + (-0x82 << 2)
label_25bc90:
    if (ctx->pc == 0x25BC90u) {
        ctx->pc = 0x25BC94u;
        goto label_25bc94;
    }
    ctx->pc = 0x25BC8Cu;
    {
        const bool branch_taken_0x25bc8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bc8c) {
            ctx->pc = 0x25BA88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25ba88;
        }
    }
    ctx->pc = 0x25BC94u;
label_25bc94:
    // 0x25bc94: 0x0  nop
    ctx->pc = 0x25bc94u;
    // NOP
label_25bc98:
    // 0x25bc98: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x25bc98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25bc9c:
    // 0x25bc9c: 0x4501006e  bc1t        . + 4 + (0x6E << 2)
label_25bca0:
    if (ctx->pc == 0x25BCA0u) {
        ctx->pc = 0x25BCA4u;
        goto label_25bca4;
    }
    ctx->pc = 0x25BC9Cu;
    {
        const bool branch_taken_0x25bc9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25bc9c) {
            ctx->pc = 0x25BE58u;
            goto label_25be58;
        }
    }
    ctx->pc = 0x25BCA4u;
label_25bca4:
    // 0x25bca4: 0x1000005e  b           . + 4 + (0x5E << 2)
label_25bca8:
    if (ctx->pc == 0x25BCA8u) {
        ctx->pc = 0x25BCACu;
        goto label_25bcac;
    }
    ctx->pc = 0x25BCA4u;
    {
        const bool branch_taken_0x25bca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bca4) {
            ctx->pc = 0x25BE20u;
            goto label_25be20;
        }
    }
    ctx->pc = 0x25BCACu;
label_25bcac:
    // 0x25bcac: 0x0  nop
    ctx->pc = 0x25bcacu;
    // NOP
label_25bcb0:
    // 0x25bcb0: 0x8ce80000  lw          $t0, 0x0($a3)
    ctx->pc = 0x25bcb0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_25bcb4:
    // 0x25bcb4: 0x95090000  lhu         $t1, 0x0($t0)
    ctx->pc = 0x25bcb4u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_25bcb8:
    // 0x25bcb8: 0x950a0002  lhu         $t2, 0x2($t0)
    ctx->pc = 0x25bcb8u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
label_25bcbc:
    // 0x25bcbc: 0x31290001  andi        $t1, $t1, 0x1
    ctx->pc = 0x25bcbcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
label_25bcc0:
    // 0x25bcc0: 0x8fa800c0  lw          $t0, 0xC0($sp)
    ctx->pc = 0x25bcc0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_25bcc4:
    // 0x25bcc4: 0xc94826  xor         $t1, $a2, $t1
    ctx->pc = 0x25bcc4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 9));
label_25bcc8:
    // 0x25bcc8: 0x2894804  sllv        $t1, $t1, $s4
    ctx->pc = 0x25bcc8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 20) & 0x1F));
label_25bccc:
    // 0x25bccc: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x25bcccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
label_25bcd0:
    // 0x25bcd0: 0x10a5021  addu        $t2, $t0, $t2
    ctx->pc = 0x25bcd0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
label_25bcd4:
    // 0x25bcd4: 0x91480000  lbu         $t0, 0x0($t2)
    ctx->pc = 0x25bcd4u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_25bcd8:
    // 0x25bcd8: 0x1094026  xor         $t0, $t0, $t1
    ctx->pc = 0x25bcd8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 9));
label_25bcdc:
    // 0x25bcdc: 0xa1480000  sb          $t0, 0x0($t2)
    ctx->pc = 0x25bcdcu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 8));
label_25bce0:
    // 0x25bce0: 0x91480000  lbu         $t0, 0x0($t2)
    ctx->pc = 0x25bce0u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_25bce4:
    // 0x25bce4: 0x29010009  slti        $at, $t0, 0x9
    ctx->pc = 0x25bce4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)9) ? 1 : 0);
label_25bce8:
    // 0x25bce8: 0x14200019  bnez        $at, . + 4 + (0x19 << 2)
label_25bcec:
    if (ctx->pc == 0x25BCECu) {
        ctx->pc = 0x25BCF0u;
        goto label_25bcf0;
    }
    ctx->pc = 0x25BCE8u;
    {
        const bool branch_taken_0x25bce8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x25bce8) {
            ctx->pc = 0x25BD50u;
            goto label_25bd50;
        }
    }
    ctx->pc = 0x25BCF0u;
label_25bcf0:
    // 0x25bcf0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x25bcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_25bcf4:
    // 0x25bcf4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x25bcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_25bcf8:
    // 0x25bcf8: 0x27a301dc  addiu       $v1, $sp, 0x1DC
    ctx->pc = 0x25bcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 476));
label_25bcfc:
    // 0x25bcfc: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x25bcfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25bd00:
    // 0x25bd00: 0xc7a101d8  lwc1        $f1, 0x1D8($sp)
    ctx->pc = 0x25bd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25bd04:
    // 0x25bd04: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x25bd04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25bd08:
    // 0x25bd08: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_25bd0c:
    if (ctx->pc == 0x25BD0Cu) {
        ctx->pc = 0x25BD0Cu;
            // 0x25bd0c: 0x27a301e0  addiu       $v1, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->pc = 0x25BD10u;
        goto label_25bd10;
    }
    ctx->pc = 0x25BD08u;
    {
        const bool branch_taken_0x25bd08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25BD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BD08u;
            // 0x25bd0c: 0x27a301e0  addiu       $v1, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bd08) {
            ctx->pc = 0x25BD30u;
            goto label_25bd30;
        }
    }
    ctx->pc = 0x25BD10u;
label_25bd10:
    // 0x25bd10: 0x27a301e0  addiu       $v1, $sp, 0x1E0
    ctx->pc = 0x25bd10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_25bd14:
    // 0x25bd14: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25bd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bd18:
    // 0x25bd18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25bd18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25bd1c:
    // 0x25bd1c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_25bd20:
    if (ctx->pc == 0x25BD20u) {
        ctx->pc = 0x25BD20u;
            // 0x25bd20: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x25BD24u;
        goto label_25bd24;
    }
    ctx->pc = 0x25BD1Cu;
    {
        const bool branch_taken_0x25bd1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25BD20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BD1Cu;
            // 0x25bd20: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bd1c) {
            ctx->pc = 0x25BD28u;
            goto label_25bd28;
        }
    }
    ctx->pc = 0x25BD24u;
label_25bd24:
    // 0x25bd24: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x25bd24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25bd28:
    // 0x25bd28: 0x10000007  b           . + 4 + (0x7 << 2)
label_25bd2c:
    if (ctx->pc == 0x25BD2Cu) {
        ctx->pc = 0x25BD30u;
        goto label_25bd30;
    }
    ctx->pc = 0x25BD28u;
    {
        const bool branch_taken_0x25bd28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bd28) {
            ctx->pc = 0x25BD48u;
            goto label_25bd48;
        }
    }
    ctx->pc = 0x25BD30u;
label_25bd30:
    // 0x25bd30: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25bd30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bd34:
    // 0x25bd34: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x25bd34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25bd38:
    // 0x25bd38: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_25bd3c:
    if (ctx->pc == 0x25BD3Cu) {
        ctx->pc = 0x25BD3Cu;
            // 0x25bd3c: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x25BD40u;
        goto label_25bd40;
    }
    ctx->pc = 0x25BD38u;
    {
        const bool branch_taken_0x25bd38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25BD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BD38u;
            // 0x25bd3c: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bd38) {
            ctx->pc = 0x25BD48u;
            goto label_25bd48;
        }
    }
    ctx->pc = 0x25BD40u;
label_25bd40:
    // 0x25bd40: 0x10000001  b           . + 4 + (0x1 << 2)
label_25bd44:
    if (ctx->pc == 0x25BD44u) {
        ctx->pc = 0x25BD44u;
            // 0x25bd44: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25BD48u;
        goto label_25bd48;
    }
    ctx->pc = 0x25BD40u;
    {
        const bool branch_taken_0x25bd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BD44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BD40u;
            // 0x25bd44: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bd40) {
            ctx->pc = 0x25BD48u;
            goto label_25bd48;
        }
    }
    ctx->pc = 0x25BD48u;
label_25bd48:
    // 0x25bd48: 0x1000ff4f  b           . + 4 + (-0xB1 << 2)
label_25bd4c:
    if (ctx->pc == 0x25BD4Cu) {
        ctx->pc = 0x25BD50u;
        goto label_25bd50;
    }
    ctx->pc = 0x25BD48u;
    {
        const bool branch_taken_0x25bd48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bd48) {
            ctx->pc = 0x25BA88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25ba88;
        }
    }
    ctx->pc = 0x25BD50u;
label_25bd50:
    // 0x25bd50: 0x8cea0000  lw          $t2, 0x0($a3)
    ctx->pc = 0x25bd50u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_25bd54:
    // 0x25bd54: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x25bd54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_25bd58:
    // 0x25bd58: 0x95490000  lhu         $t1, 0x0($t2)
    ctx->pc = 0x25bd58u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
label_25bd5c:
    // 0x25bd5c: 0x1484021  addu        $t0, $t2, $t0
    ctx->pc = 0x25bd5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
label_25bd60:
    // 0x25bd60: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x25bd60u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
label_25bd64:
    // 0x25bd64: 0x8ce80000  lw          $t0, 0x0($a3)
    ctx->pc = 0x25bd64u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_25bd68:
    // 0x25bd68: 0x95080000  lhu         $t0, 0x0($t0)
    ctx->pc = 0x25bd68u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_25bd6c:
    // 0x25bd6c: 0x1128ffd0  beq         $t1, $t0, . + 4 + (-0x30 << 2)
label_25bd70:
    if (ctx->pc == 0x25BD70u) {
        ctx->pc = 0x25BD74u;
        goto label_25bd74;
    }
    ctx->pc = 0x25BD6Cu;
    {
        const bool branch_taken_0x25bd6c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 8));
        if (branch_taken_0x25bd6c) {
            ctx->pc = 0x25BCB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25bcb0;
        }
    }
    ctx->pc = 0x25BD74u;
label_25bd74:
    // 0x25bd74: 0x7d2821  addu        $a1, $v1, $sp
    ctx->pc = 0x25bd74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_25bd78:
    // 0x25bd78: 0x8ca50228  lw          $a1, 0x228($a1)
    ctx->pc = 0x25bd78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 552)));
label_25bd7c:
    // 0x25bd7c: 0x94a50000  lhu         $a1, 0x0($a1)
    ctx->pc = 0x25bd7cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_25bd80:
    // 0x25bd80: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_25bd84:
    if (ctx->pc == 0x25BD84u) {
        ctx->pc = 0x25BD84u;
            // 0x25bd84: 0x53042  srl         $a2, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x25BD88u;
        goto label_25bd88;
    }
    ctx->pc = 0x25BD80u;
    {
        const bool branch_taken_0x25bd80 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x25BD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BD80u;
            // 0x25bd84: 0x53042  srl         $a2, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bd80) {
            ctx->pc = 0x25BD94u;
            goto label_25bd94;
        }
    }
    ctx->pc = 0x25BD88u;
label_25bd88:
    // 0x25bd88: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x25bd88u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25bd8c:
    // 0x25bd8c: 0x10000007  b           . + 4 + (0x7 << 2)
label_25bd90:
    if (ctx->pc == 0x25BD90u) {
        ctx->pc = 0x25BD90u;
            // 0x25bd90: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x25BD94u;
        goto label_25bd94;
    }
    ctx->pc = 0x25BD8Cu;
    {
        const bool branch_taken_0x25bd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BD90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BD8Cu;
            // 0x25bd90: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bd8c) {
            ctx->pc = 0x25BDACu;
            goto label_25bdac;
        }
    }
    ctx->pc = 0x25BD94u;
label_25bd94:
    // 0x25bd94: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x25bd94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_25bd98:
    // 0x25bd98: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x25bd98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_25bd9c:
    // 0x25bd9c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x25bd9cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25bda0:
    // 0x25bda0: 0x0  nop
    ctx->pc = 0x25bda0u;
    // NOP
label_25bda4:
    // 0x25bda4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x25bda4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_25bda8:
    // 0x25bda8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x25bda8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_25bdac:
    // 0x25bdac: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x25bdacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_25bdb0:
    // 0x25bdb0: 0xc4610170  lwc1        $f1, 0x170($v1)
    ctx->pc = 0x25bdb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25bdb4:
    // 0x25bdb4: 0xc4600160  lwc1        $f0, 0x160($v1)
    ctx->pc = 0x25bdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bdb8:
    // 0x25bdb8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x25bdb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_25bdbc:
    // 0x25bdbc: 0x27a301dc  addiu       $v1, $sp, 0x1DC
    ctx->pc = 0x25bdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 476));
label_25bdc0:
    // 0x25bdc0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25bdc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_25bdc4:
    // 0x25bdc4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x25bdc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_25bdc8:
    // 0x25bdc8: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x25bdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25bdcc:
    // 0x25bdcc: 0xc7a101d8  lwc1        $f1, 0x1D8($sp)
    ctx->pc = 0x25bdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25bdd0:
    // 0x25bdd0: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x25bdd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25bdd4:
    // 0x25bdd4: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_25bdd8:
    if (ctx->pc == 0x25BDD8u) {
        ctx->pc = 0x25BDDCu;
        goto label_25bddc;
    }
    ctx->pc = 0x25BDD4u;
    {
        const bool branch_taken_0x25bdd4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25bdd4) {
            ctx->pc = 0x25BDFCu;
            goto label_25bdfc;
        }
    }
    ctx->pc = 0x25BDDCu;
label_25bddc:
    // 0x25bddc: 0x27a301e0  addiu       $v1, $sp, 0x1E0
    ctx->pc = 0x25bddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_25bde0:
    // 0x25bde0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25bde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bde4:
    // 0x25bde4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25bde4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25bde8:
    // 0x25bde8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_25bdec:
    if (ctx->pc == 0x25BDECu) {
        ctx->pc = 0x25BDECu;
            // 0x25bdec: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x25BDF0u;
        goto label_25bdf0;
    }
    ctx->pc = 0x25BDE8u;
    {
        const bool branch_taken_0x25bde8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25BDECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BDE8u;
            // 0x25bdec: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bde8) {
            ctx->pc = 0x25BDF4u;
            goto label_25bdf4;
        }
    }
    ctx->pc = 0x25BDF0u;
label_25bdf0:
    // 0x25bdf0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x25bdf0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25bdf4:
    // 0x25bdf4: 0x10000008  b           . + 4 + (0x8 << 2)
label_25bdf8:
    if (ctx->pc == 0x25BDF8u) {
        ctx->pc = 0x25BDFCu;
        goto label_25bdfc;
    }
    ctx->pc = 0x25BDF4u;
    {
        const bool branch_taken_0x25bdf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bdf4) {
            ctx->pc = 0x25BE18u;
            goto label_25be18;
        }
    }
    ctx->pc = 0x25BDFCu;
label_25bdfc:
    // 0x25bdfc: 0x27a301e0  addiu       $v1, $sp, 0x1E0
    ctx->pc = 0x25bdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_25be00:
    // 0x25be00: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25be00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25be04:
    // 0x25be04: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x25be04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25be08:
    // 0x25be08: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_25be0c:
    if (ctx->pc == 0x25BE0Cu) {
        ctx->pc = 0x25BE0Cu;
            // 0x25be0c: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x25BE10u;
        goto label_25be10;
    }
    ctx->pc = 0x25BE08u;
    {
        const bool branch_taken_0x25be08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25BE0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BE08u;
            // 0x25be0c: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25be08) {
            ctx->pc = 0x25BE18u;
            goto label_25be18;
        }
    }
    ctx->pc = 0x25BE10u;
label_25be10:
    // 0x25be10: 0x10000001  b           . + 4 + (0x1 << 2)
label_25be14:
    if (ctx->pc == 0x25BE14u) {
        ctx->pc = 0x25BE14u;
            // 0x25be14: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25BE18u;
        goto label_25be18;
    }
    ctx->pc = 0x25BE10u;
    {
        const bool branch_taken_0x25be10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BE10u;
            // 0x25be14: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25be10) {
            ctx->pc = 0x25BE18u;
            goto label_25be18;
        }
    }
    ctx->pc = 0x25BE18u;
label_25be18:
    // 0x25be18: 0x1000ff1b  b           . + 4 + (-0xE5 << 2)
label_25be1c:
    if (ctx->pc == 0x25BE1Cu) {
        ctx->pc = 0x25BE20u;
        goto label_25be20;
    }
    ctx->pc = 0x25BE18u;
    {
        const bool branch_taken_0x25be18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25be18) {
            ctx->pc = 0x25BA88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25ba88;
        }
    }
    ctx->pc = 0x25BE20u;
label_25be20:
    // 0x25be20: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x25be20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_25be24:
    // 0x25be24: 0x8fa50238  lw          $a1, 0x238($sp)
    ctx->pc = 0x25be24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
label_25be28:
    // 0x25be28: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x25be28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_25be2c:
    // 0x25be2c: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x25be2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_25be30:
    // 0x25be30: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x25be30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_25be34:
    // 0x25be34: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
label_25be38:
    if (ctx->pc == 0x25BE38u) {
        ctx->pc = 0x25BE3Cu;
        goto label_25be3c;
    }
    ctx->pc = 0x25BE34u;
    {
        const bool branch_taken_0x25be34 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x25be34) {
            ctx->pc = 0x25BE50u;
            goto label_25be50;
        }
    }
    ctx->pc = 0x25BE3Cu;
label_25be3c:
    // 0x25be3c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25be3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25be40:
    // 0x25be40: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x25be40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_25be44:
    // 0x25be44: 0x320f809  jalr        $t9
label_25be48:
    if (ctx->pc == 0x25BE48u) {
        ctx->pc = 0x25BE4Cu;
        goto label_25be4c;
    }
    ctx->pc = 0x25BE44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25BE4Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x25BE4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25BE4Cu; }
            if (ctx->pc != 0x25BE4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x25BE4Cu;
label_25be4c:
    // 0x25be4c: 0x0  nop
    ctx->pc = 0x25be4cu;
    // NOP
label_25be50:
    // 0x25be50: 0x1000000d  b           . + 4 + (0xD << 2)
label_25be54:
    if (ctx->pc == 0x25BE54u) {
        ctx->pc = 0x25BE58u;
        goto label_25be58;
    }
    ctx->pc = 0x25BE50u;
    {
        const bool branch_taken_0x25be50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25be50) {
            ctx->pc = 0x25BE88u;
            goto label_25be88;
        }
    }
    ctx->pc = 0x25BE58u;
label_25be58:
    // 0x25be58: 0x7d2821  addu        $a1, $v1, $sp
    ctx->pc = 0x25be58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_25be5c:
    // 0x25be5c: 0x8ca601e8  lw          $a2, 0x1E8($a1)
    ctx->pc = 0x25be5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 488)));
label_25be60:
    // 0x25be60: 0x24a70228  addiu       $a3, $a1, 0x228
    ctx->pc = 0x25be60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 552));
label_25be64:
    // 0x25be64: 0x1000ff92  b           . + 4 + (-0x6E << 2)
label_25be68:
    if (ctx->pc == 0x25BE68u) {
        ctx->pc = 0x25BE68u;
            // 0x25be68: 0x24a50208  addiu       $a1, $a1, 0x208 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 520));
        ctx->pc = 0x25BE6Cu;
        goto label_25be6c;
    }
    ctx->pc = 0x25BE64u;
    {
        const bool branch_taken_0x25be64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BE64u;
            // 0x25be68: 0x24a50208  addiu       $a1, $a1, 0x208 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25be64) {
            ctx->pc = 0x25BCB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25bcb0;
        }
    }
    ctx->pc = 0x25BE6Cu;
label_25be6c:
    // 0x25be6c: 0x0  nop
    ctx->pc = 0x25be6cu;
    // NOP
label_25be70:
    // 0x25be70: 0x2dd2021  addu        $a0, $s6, $sp
    ctx->pc = 0x25be70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 29)));
label_25be74:
    // 0x25be74: 0x8c8301f8  lw          $v1, 0x1F8($a0)
    ctx->pc = 0x25be74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 504)));
label_25be78:
    // 0x25be78: 0x24910218  addiu       $s1, $a0, 0x218
    ctx->pc = 0x25be78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 536));
label_25be7c:
    // 0x25be7c: 0x24900208  addiu       $s0, $a0, 0x208
    ctx->pc = 0x25be7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 520));
label_25be80:
    // 0x25be80: 0x1000ff15  b           . + 4 + (-0xEB << 2)
label_25be84:
    if (ctx->pc == 0x25BE84u) {
        ctx->pc = 0x25BE84u;
            // 0x25be84: 0xafa300b0  sw          $v1, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
        ctx->pc = 0x25BE88u;
        goto label_25be88;
    }
    ctx->pc = 0x25BE80u;
    {
        const bool branch_taken_0x25be80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BE80u;
            // 0x25be84: 0xafa300b0  sw          $v1, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25be80) {
            ctx->pc = 0x25BAD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25bad8;
        }
    }
    ctx->pc = 0x25BE88u;
label_25be88:
    // 0x25be88: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x25be88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_25be8c:
    // 0x25be8c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x25be8cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_25be90:
    // 0x25be90: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x25be90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_25be94:
    // 0x25be94: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x25be94u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_25be98:
    // 0x25be98: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x25be98u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_25be9c:
    // 0x25be9c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x25be9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_25bea0:
    // 0x25bea0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x25bea0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_25bea4:
    // 0x25bea4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x25bea4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25bea8:
    // 0x25bea8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x25bea8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25beac:
    // 0x25beac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x25beacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25beb0:
    // 0x25beb0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25beb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25beb4:
    // 0x25beb4: 0x3e00008  jr          $ra
label_25beb8:
    if (ctx->pc == 0x25BEB8u) {
        ctx->pc = 0x25BEB8u;
            // 0x25beb8: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->pc = 0x25BEBCu;
        goto label_25bebc;
    }
    ctx->pc = 0x25BEB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25BEB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BEB4u;
            // 0x25beb8: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25BEBCu;
label_25bebc:
    // 0x25bebc: 0x0  nop
    ctx->pc = 0x25bebcu;
    // NOP
}
