#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004592C0
// Address: 0x4592c0 - 0x459ad0
void sub_004592C0_0x4592c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004592C0_0x4592c0");
#endif

    switch (ctx->pc) {
        case 0x4592c0u: goto label_4592c0;
        case 0x4592c4u: goto label_4592c4;
        case 0x4592c8u: goto label_4592c8;
        case 0x4592ccu: goto label_4592cc;
        case 0x4592d0u: goto label_4592d0;
        case 0x4592d4u: goto label_4592d4;
        case 0x4592d8u: goto label_4592d8;
        case 0x4592dcu: goto label_4592dc;
        case 0x4592e0u: goto label_4592e0;
        case 0x4592e4u: goto label_4592e4;
        case 0x4592e8u: goto label_4592e8;
        case 0x4592ecu: goto label_4592ec;
        case 0x4592f0u: goto label_4592f0;
        case 0x4592f4u: goto label_4592f4;
        case 0x4592f8u: goto label_4592f8;
        case 0x4592fcu: goto label_4592fc;
        case 0x459300u: goto label_459300;
        case 0x459304u: goto label_459304;
        case 0x459308u: goto label_459308;
        case 0x45930cu: goto label_45930c;
        case 0x459310u: goto label_459310;
        case 0x459314u: goto label_459314;
        case 0x459318u: goto label_459318;
        case 0x45931cu: goto label_45931c;
        case 0x459320u: goto label_459320;
        case 0x459324u: goto label_459324;
        case 0x459328u: goto label_459328;
        case 0x45932cu: goto label_45932c;
        case 0x459330u: goto label_459330;
        case 0x459334u: goto label_459334;
        case 0x459338u: goto label_459338;
        case 0x45933cu: goto label_45933c;
        case 0x459340u: goto label_459340;
        case 0x459344u: goto label_459344;
        case 0x459348u: goto label_459348;
        case 0x45934cu: goto label_45934c;
        case 0x459350u: goto label_459350;
        case 0x459354u: goto label_459354;
        case 0x459358u: goto label_459358;
        case 0x45935cu: goto label_45935c;
        case 0x459360u: goto label_459360;
        case 0x459364u: goto label_459364;
        case 0x459368u: goto label_459368;
        case 0x45936cu: goto label_45936c;
        case 0x459370u: goto label_459370;
        case 0x459374u: goto label_459374;
        case 0x459378u: goto label_459378;
        case 0x45937cu: goto label_45937c;
        case 0x459380u: goto label_459380;
        case 0x459384u: goto label_459384;
        case 0x459388u: goto label_459388;
        case 0x45938cu: goto label_45938c;
        case 0x459390u: goto label_459390;
        case 0x459394u: goto label_459394;
        case 0x459398u: goto label_459398;
        case 0x45939cu: goto label_45939c;
        case 0x4593a0u: goto label_4593a0;
        case 0x4593a4u: goto label_4593a4;
        case 0x4593a8u: goto label_4593a8;
        case 0x4593acu: goto label_4593ac;
        case 0x4593b0u: goto label_4593b0;
        case 0x4593b4u: goto label_4593b4;
        case 0x4593b8u: goto label_4593b8;
        case 0x4593bcu: goto label_4593bc;
        case 0x4593c0u: goto label_4593c0;
        case 0x4593c4u: goto label_4593c4;
        case 0x4593c8u: goto label_4593c8;
        case 0x4593ccu: goto label_4593cc;
        case 0x4593d0u: goto label_4593d0;
        case 0x4593d4u: goto label_4593d4;
        case 0x4593d8u: goto label_4593d8;
        case 0x4593dcu: goto label_4593dc;
        case 0x4593e0u: goto label_4593e0;
        case 0x4593e4u: goto label_4593e4;
        case 0x4593e8u: goto label_4593e8;
        case 0x4593ecu: goto label_4593ec;
        case 0x4593f0u: goto label_4593f0;
        case 0x4593f4u: goto label_4593f4;
        case 0x4593f8u: goto label_4593f8;
        case 0x4593fcu: goto label_4593fc;
        case 0x459400u: goto label_459400;
        case 0x459404u: goto label_459404;
        case 0x459408u: goto label_459408;
        case 0x45940cu: goto label_45940c;
        case 0x459410u: goto label_459410;
        case 0x459414u: goto label_459414;
        case 0x459418u: goto label_459418;
        case 0x45941cu: goto label_45941c;
        case 0x459420u: goto label_459420;
        case 0x459424u: goto label_459424;
        case 0x459428u: goto label_459428;
        case 0x45942cu: goto label_45942c;
        case 0x459430u: goto label_459430;
        case 0x459434u: goto label_459434;
        case 0x459438u: goto label_459438;
        case 0x45943cu: goto label_45943c;
        case 0x459440u: goto label_459440;
        case 0x459444u: goto label_459444;
        case 0x459448u: goto label_459448;
        case 0x45944cu: goto label_45944c;
        case 0x459450u: goto label_459450;
        case 0x459454u: goto label_459454;
        case 0x459458u: goto label_459458;
        case 0x45945cu: goto label_45945c;
        case 0x459460u: goto label_459460;
        case 0x459464u: goto label_459464;
        case 0x459468u: goto label_459468;
        case 0x45946cu: goto label_45946c;
        case 0x459470u: goto label_459470;
        case 0x459474u: goto label_459474;
        case 0x459478u: goto label_459478;
        case 0x45947cu: goto label_45947c;
        case 0x459480u: goto label_459480;
        case 0x459484u: goto label_459484;
        case 0x459488u: goto label_459488;
        case 0x45948cu: goto label_45948c;
        case 0x459490u: goto label_459490;
        case 0x459494u: goto label_459494;
        case 0x459498u: goto label_459498;
        case 0x45949cu: goto label_45949c;
        case 0x4594a0u: goto label_4594a0;
        case 0x4594a4u: goto label_4594a4;
        case 0x4594a8u: goto label_4594a8;
        case 0x4594acu: goto label_4594ac;
        case 0x4594b0u: goto label_4594b0;
        case 0x4594b4u: goto label_4594b4;
        case 0x4594b8u: goto label_4594b8;
        case 0x4594bcu: goto label_4594bc;
        case 0x4594c0u: goto label_4594c0;
        case 0x4594c4u: goto label_4594c4;
        case 0x4594c8u: goto label_4594c8;
        case 0x4594ccu: goto label_4594cc;
        case 0x4594d0u: goto label_4594d0;
        case 0x4594d4u: goto label_4594d4;
        case 0x4594d8u: goto label_4594d8;
        case 0x4594dcu: goto label_4594dc;
        case 0x4594e0u: goto label_4594e0;
        case 0x4594e4u: goto label_4594e4;
        case 0x4594e8u: goto label_4594e8;
        case 0x4594ecu: goto label_4594ec;
        case 0x4594f0u: goto label_4594f0;
        case 0x4594f4u: goto label_4594f4;
        case 0x4594f8u: goto label_4594f8;
        case 0x4594fcu: goto label_4594fc;
        case 0x459500u: goto label_459500;
        case 0x459504u: goto label_459504;
        case 0x459508u: goto label_459508;
        case 0x45950cu: goto label_45950c;
        case 0x459510u: goto label_459510;
        case 0x459514u: goto label_459514;
        case 0x459518u: goto label_459518;
        case 0x45951cu: goto label_45951c;
        case 0x459520u: goto label_459520;
        case 0x459524u: goto label_459524;
        case 0x459528u: goto label_459528;
        case 0x45952cu: goto label_45952c;
        case 0x459530u: goto label_459530;
        case 0x459534u: goto label_459534;
        case 0x459538u: goto label_459538;
        case 0x45953cu: goto label_45953c;
        case 0x459540u: goto label_459540;
        case 0x459544u: goto label_459544;
        case 0x459548u: goto label_459548;
        case 0x45954cu: goto label_45954c;
        case 0x459550u: goto label_459550;
        case 0x459554u: goto label_459554;
        case 0x459558u: goto label_459558;
        case 0x45955cu: goto label_45955c;
        case 0x459560u: goto label_459560;
        case 0x459564u: goto label_459564;
        case 0x459568u: goto label_459568;
        case 0x45956cu: goto label_45956c;
        case 0x459570u: goto label_459570;
        case 0x459574u: goto label_459574;
        case 0x459578u: goto label_459578;
        case 0x45957cu: goto label_45957c;
        case 0x459580u: goto label_459580;
        case 0x459584u: goto label_459584;
        case 0x459588u: goto label_459588;
        case 0x45958cu: goto label_45958c;
        case 0x459590u: goto label_459590;
        case 0x459594u: goto label_459594;
        case 0x459598u: goto label_459598;
        case 0x45959cu: goto label_45959c;
        case 0x4595a0u: goto label_4595a0;
        case 0x4595a4u: goto label_4595a4;
        case 0x4595a8u: goto label_4595a8;
        case 0x4595acu: goto label_4595ac;
        case 0x4595b0u: goto label_4595b0;
        case 0x4595b4u: goto label_4595b4;
        case 0x4595b8u: goto label_4595b8;
        case 0x4595bcu: goto label_4595bc;
        case 0x4595c0u: goto label_4595c0;
        case 0x4595c4u: goto label_4595c4;
        case 0x4595c8u: goto label_4595c8;
        case 0x4595ccu: goto label_4595cc;
        case 0x4595d0u: goto label_4595d0;
        case 0x4595d4u: goto label_4595d4;
        case 0x4595d8u: goto label_4595d8;
        case 0x4595dcu: goto label_4595dc;
        case 0x4595e0u: goto label_4595e0;
        case 0x4595e4u: goto label_4595e4;
        case 0x4595e8u: goto label_4595e8;
        case 0x4595ecu: goto label_4595ec;
        case 0x4595f0u: goto label_4595f0;
        case 0x4595f4u: goto label_4595f4;
        case 0x4595f8u: goto label_4595f8;
        case 0x4595fcu: goto label_4595fc;
        case 0x459600u: goto label_459600;
        case 0x459604u: goto label_459604;
        case 0x459608u: goto label_459608;
        case 0x45960cu: goto label_45960c;
        case 0x459610u: goto label_459610;
        case 0x459614u: goto label_459614;
        case 0x459618u: goto label_459618;
        case 0x45961cu: goto label_45961c;
        case 0x459620u: goto label_459620;
        case 0x459624u: goto label_459624;
        case 0x459628u: goto label_459628;
        case 0x45962cu: goto label_45962c;
        case 0x459630u: goto label_459630;
        case 0x459634u: goto label_459634;
        case 0x459638u: goto label_459638;
        case 0x45963cu: goto label_45963c;
        case 0x459640u: goto label_459640;
        case 0x459644u: goto label_459644;
        case 0x459648u: goto label_459648;
        case 0x45964cu: goto label_45964c;
        case 0x459650u: goto label_459650;
        case 0x459654u: goto label_459654;
        case 0x459658u: goto label_459658;
        case 0x45965cu: goto label_45965c;
        case 0x459660u: goto label_459660;
        case 0x459664u: goto label_459664;
        case 0x459668u: goto label_459668;
        case 0x45966cu: goto label_45966c;
        case 0x459670u: goto label_459670;
        case 0x459674u: goto label_459674;
        case 0x459678u: goto label_459678;
        case 0x45967cu: goto label_45967c;
        case 0x459680u: goto label_459680;
        case 0x459684u: goto label_459684;
        case 0x459688u: goto label_459688;
        case 0x45968cu: goto label_45968c;
        case 0x459690u: goto label_459690;
        case 0x459694u: goto label_459694;
        case 0x459698u: goto label_459698;
        case 0x45969cu: goto label_45969c;
        case 0x4596a0u: goto label_4596a0;
        case 0x4596a4u: goto label_4596a4;
        case 0x4596a8u: goto label_4596a8;
        case 0x4596acu: goto label_4596ac;
        case 0x4596b0u: goto label_4596b0;
        case 0x4596b4u: goto label_4596b4;
        case 0x4596b8u: goto label_4596b8;
        case 0x4596bcu: goto label_4596bc;
        case 0x4596c0u: goto label_4596c0;
        case 0x4596c4u: goto label_4596c4;
        case 0x4596c8u: goto label_4596c8;
        case 0x4596ccu: goto label_4596cc;
        case 0x4596d0u: goto label_4596d0;
        case 0x4596d4u: goto label_4596d4;
        case 0x4596d8u: goto label_4596d8;
        case 0x4596dcu: goto label_4596dc;
        case 0x4596e0u: goto label_4596e0;
        case 0x4596e4u: goto label_4596e4;
        case 0x4596e8u: goto label_4596e8;
        case 0x4596ecu: goto label_4596ec;
        case 0x4596f0u: goto label_4596f0;
        case 0x4596f4u: goto label_4596f4;
        case 0x4596f8u: goto label_4596f8;
        case 0x4596fcu: goto label_4596fc;
        case 0x459700u: goto label_459700;
        case 0x459704u: goto label_459704;
        case 0x459708u: goto label_459708;
        case 0x45970cu: goto label_45970c;
        case 0x459710u: goto label_459710;
        case 0x459714u: goto label_459714;
        case 0x459718u: goto label_459718;
        case 0x45971cu: goto label_45971c;
        case 0x459720u: goto label_459720;
        case 0x459724u: goto label_459724;
        case 0x459728u: goto label_459728;
        case 0x45972cu: goto label_45972c;
        case 0x459730u: goto label_459730;
        case 0x459734u: goto label_459734;
        case 0x459738u: goto label_459738;
        case 0x45973cu: goto label_45973c;
        case 0x459740u: goto label_459740;
        case 0x459744u: goto label_459744;
        case 0x459748u: goto label_459748;
        case 0x45974cu: goto label_45974c;
        case 0x459750u: goto label_459750;
        case 0x459754u: goto label_459754;
        case 0x459758u: goto label_459758;
        case 0x45975cu: goto label_45975c;
        case 0x459760u: goto label_459760;
        case 0x459764u: goto label_459764;
        case 0x459768u: goto label_459768;
        case 0x45976cu: goto label_45976c;
        case 0x459770u: goto label_459770;
        case 0x459774u: goto label_459774;
        case 0x459778u: goto label_459778;
        case 0x45977cu: goto label_45977c;
        case 0x459780u: goto label_459780;
        case 0x459784u: goto label_459784;
        case 0x459788u: goto label_459788;
        case 0x45978cu: goto label_45978c;
        case 0x459790u: goto label_459790;
        case 0x459794u: goto label_459794;
        case 0x459798u: goto label_459798;
        case 0x45979cu: goto label_45979c;
        case 0x4597a0u: goto label_4597a0;
        case 0x4597a4u: goto label_4597a4;
        case 0x4597a8u: goto label_4597a8;
        case 0x4597acu: goto label_4597ac;
        case 0x4597b0u: goto label_4597b0;
        case 0x4597b4u: goto label_4597b4;
        case 0x4597b8u: goto label_4597b8;
        case 0x4597bcu: goto label_4597bc;
        case 0x4597c0u: goto label_4597c0;
        case 0x4597c4u: goto label_4597c4;
        case 0x4597c8u: goto label_4597c8;
        case 0x4597ccu: goto label_4597cc;
        case 0x4597d0u: goto label_4597d0;
        case 0x4597d4u: goto label_4597d4;
        case 0x4597d8u: goto label_4597d8;
        case 0x4597dcu: goto label_4597dc;
        case 0x4597e0u: goto label_4597e0;
        case 0x4597e4u: goto label_4597e4;
        case 0x4597e8u: goto label_4597e8;
        case 0x4597ecu: goto label_4597ec;
        case 0x4597f0u: goto label_4597f0;
        case 0x4597f4u: goto label_4597f4;
        case 0x4597f8u: goto label_4597f8;
        case 0x4597fcu: goto label_4597fc;
        case 0x459800u: goto label_459800;
        case 0x459804u: goto label_459804;
        case 0x459808u: goto label_459808;
        case 0x45980cu: goto label_45980c;
        case 0x459810u: goto label_459810;
        case 0x459814u: goto label_459814;
        case 0x459818u: goto label_459818;
        case 0x45981cu: goto label_45981c;
        case 0x459820u: goto label_459820;
        case 0x459824u: goto label_459824;
        case 0x459828u: goto label_459828;
        case 0x45982cu: goto label_45982c;
        case 0x459830u: goto label_459830;
        case 0x459834u: goto label_459834;
        case 0x459838u: goto label_459838;
        case 0x45983cu: goto label_45983c;
        case 0x459840u: goto label_459840;
        case 0x459844u: goto label_459844;
        case 0x459848u: goto label_459848;
        case 0x45984cu: goto label_45984c;
        case 0x459850u: goto label_459850;
        case 0x459854u: goto label_459854;
        case 0x459858u: goto label_459858;
        case 0x45985cu: goto label_45985c;
        case 0x459860u: goto label_459860;
        case 0x459864u: goto label_459864;
        case 0x459868u: goto label_459868;
        case 0x45986cu: goto label_45986c;
        case 0x459870u: goto label_459870;
        case 0x459874u: goto label_459874;
        case 0x459878u: goto label_459878;
        case 0x45987cu: goto label_45987c;
        case 0x459880u: goto label_459880;
        case 0x459884u: goto label_459884;
        case 0x459888u: goto label_459888;
        case 0x45988cu: goto label_45988c;
        case 0x459890u: goto label_459890;
        case 0x459894u: goto label_459894;
        case 0x459898u: goto label_459898;
        case 0x45989cu: goto label_45989c;
        case 0x4598a0u: goto label_4598a0;
        case 0x4598a4u: goto label_4598a4;
        case 0x4598a8u: goto label_4598a8;
        case 0x4598acu: goto label_4598ac;
        case 0x4598b0u: goto label_4598b0;
        case 0x4598b4u: goto label_4598b4;
        case 0x4598b8u: goto label_4598b8;
        case 0x4598bcu: goto label_4598bc;
        case 0x4598c0u: goto label_4598c0;
        case 0x4598c4u: goto label_4598c4;
        case 0x4598c8u: goto label_4598c8;
        case 0x4598ccu: goto label_4598cc;
        case 0x4598d0u: goto label_4598d0;
        case 0x4598d4u: goto label_4598d4;
        case 0x4598d8u: goto label_4598d8;
        case 0x4598dcu: goto label_4598dc;
        case 0x4598e0u: goto label_4598e0;
        case 0x4598e4u: goto label_4598e4;
        case 0x4598e8u: goto label_4598e8;
        case 0x4598ecu: goto label_4598ec;
        case 0x4598f0u: goto label_4598f0;
        case 0x4598f4u: goto label_4598f4;
        case 0x4598f8u: goto label_4598f8;
        case 0x4598fcu: goto label_4598fc;
        case 0x459900u: goto label_459900;
        case 0x459904u: goto label_459904;
        case 0x459908u: goto label_459908;
        case 0x45990cu: goto label_45990c;
        case 0x459910u: goto label_459910;
        case 0x459914u: goto label_459914;
        case 0x459918u: goto label_459918;
        case 0x45991cu: goto label_45991c;
        case 0x459920u: goto label_459920;
        case 0x459924u: goto label_459924;
        case 0x459928u: goto label_459928;
        case 0x45992cu: goto label_45992c;
        case 0x459930u: goto label_459930;
        case 0x459934u: goto label_459934;
        case 0x459938u: goto label_459938;
        case 0x45993cu: goto label_45993c;
        case 0x459940u: goto label_459940;
        case 0x459944u: goto label_459944;
        case 0x459948u: goto label_459948;
        case 0x45994cu: goto label_45994c;
        case 0x459950u: goto label_459950;
        case 0x459954u: goto label_459954;
        case 0x459958u: goto label_459958;
        case 0x45995cu: goto label_45995c;
        case 0x459960u: goto label_459960;
        case 0x459964u: goto label_459964;
        case 0x459968u: goto label_459968;
        case 0x45996cu: goto label_45996c;
        case 0x459970u: goto label_459970;
        case 0x459974u: goto label_459974;
        case 0x459978u: goto label_459978;
        case 0x45997cu: goto label_45997c;
        case 0x459980u: goto label_459980;
        case 0x459984u: goto label_459984;
        case 0x459988u: goto label_459988;
        case 0x45998cu: goto label_45998c;
        case 0x459990u: goto label_459990;
        case 0x459994u: goto label_459994;
        case 0x459998u: goto label_459998;
        case 0x45999cu: goto label_45999c;
        case 0x4599a0u: goto label_4599a0;
        case 0x4599a4u: goto label_4599a4;
        case 0x4599a8u: goto label_4599a8;
        case 0x4599acu: goto label_4599ac;
        case 0x4599b0u: goto label_4599b0;
        case 0x4599b4u: goto label_4599b4;
        case 0x4599b8u: goto label_4599b8;
        case 0x4599bcu: goto label_4599bc;
        case 0x4599c0u: goto label_4599c0;
        case 0x4599c4u: goto label_4599c4;
        case 0x4599c8u: goto label_4599c8;
        case 0x4599ccu: goto label_4599cc;
        case 0x4599d0u: goto label_4599d0;
        case 0x4599d4u: goto label_4599d4;
        case 0x4599d8u: goto label_4599d8;
        case 0x4599dcu: goto label_4599dc;
        case 0x4599e0u: goto label_4599e0;
        case 0x4599e4u: goto label_4599e4;
        case 0x4599e8u: goto label_4599e8;
        case 0x4599ecu: goto label_4599ec;
        case 0x4599f0u: goto label_4599f0;
        case 0x4599f4u: goto label_4599f4;
        case 0x4599f8u: goto label_4599f8;
        case 0x4599fcu: goto label_4599fc;
        case 0x459a00u: goto label_459a00;
        case 0x459a04u: goto label_459a04;
        case 0x459a08u: goto label_459a08;
        case 0x459a0cu: goto label_459a0c;
        case 0x459a10u: goto label_459a10;
        case 0x459a14u: goto label_459a14;
        case 0x459a18u: goto label_459a18;
        case 0x459a1cu: goto label_459a1c;
        case 0x459a20u: goto label_459a20;
        case 0x459a24u: goto label_459a24;
        case 0x459a28u: goto label_459a28;
        case 0x459a2cu: goto label_459a2c;
        case 0x459a30u: goto label_459a30;
        case 0x459a34u: goto label_459a34;
        case 0x459a38u: goto label_459a38;
        case 0x459a3cu: goto label_459a3c;
        case 0x459a40u: goto label_459a40;
        case 0x459a44u: goto label_459a44;
        case 0x459a48u: goto label_459a48;
        case 0x459a4cu: goto label_459a4c;
        case 0x459a50u: goto label_459a50;
        case 0x459a54u: goto label_459a54;
        case 0x459a58u: goto label_459a58;
        case 0x459a5cu: goto label_459a5c;
        case 0x459a60u: goto label_459a60;
        case 0x459a64u: goto label_459a64;
        case 0x459a68u: goto label_459a68;
        case 0x459a6cu: goto label_459a6c;
        case 0x459a70u: goto label_459a70;
        case 0x459a74u: goto label_459a74;
        case 0x459a78u: goto label_459a78;
        case 0x459a7cu: goto label_459a7c;
        case 0x459a80u: goto label_459a80;
        case 0x459a84u: goto label_459a84;
        case 0x459a88u: goto label_459a88;
        case 0x459a8cu: goto label_459a8c;
        case 0x459a90u: goto label_459a90;
        case 0x459a94u: goto label_459a94;
        case 0x459a98u: goto label_459a98;
        case 0x459a9cu: goto label_459a9c;
        case 0x459aa0u: goto label_459aa0;
        case 0x459aa4u: goto label_459aa4;
        case 0x459aa8u: goto label_459aa8;
        case 0x459aacu: goto label_459aac;
        case 0x459ab0u: goto label_459ab0;
        case 0x459ab4u: goto label_459ab4;
        case 0x459ab8u: goto label_459ab8;
        case 0x459abcu: goto label_459abc;
        case 0x459ac0u: goto label_459ac0;
        case 0x459ac4u: goto label_459ac4;
        case 0x459ac8u: goto label_459ac8;
        case 0x459accu: goto label_459acc;
        default: break;
    }

    ctx->pc = 0x4592c0u;

label_4592c0:
    // 0x4592c0: 0x27bdfd90  addiu       $sp, $sp, -0x270
    ctx->pc = 0x4592c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966672));
label_4592c4:
    // 0x4592c4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4592c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4592c8:
    // 0x4592c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4592c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4592cc:
    // 0x4592cc: 0x34468702  ori         $a2, $v0, 0x8702
    ctx->pc = 0x4592ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34562);
label_4592d0:
    // 0x4592d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4592d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4592d4:
    // 0x4592d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4592d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4592d8:
    // 0x4592d8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4592d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4592dc:
    // 0x4592dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4592dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4592e0:
    // 0x4592e0: 0xc1166ec  jal         func_459BB0
label_4592e4:
    if (ctx->pc == 0x4592E4u) {
        ctx->pc = 0x4592E4u;
            // 0x4592e4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x4592E8u;
        goto label_4592e8;
    }
    ctx->pc = 0x4592E0u;
    SET_GPR_U32(ctx, 31, 0x4592E8u);
    ctx->pc = 0x4592E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4592E0u;
            // 0x4592e4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x459BB0u;
    if (runtime->hasFunction(0x459BB0u)) {
        auto targetFn = runtime->lookupFunction(0x459BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4592E8u; }
        if (ctx->pc != 0x4592E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00459BB0_0x459bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4592E8u; }
        if (ctx->pc != 0x4592E8u) { return; }
    }
    ctx->pc = 0x4592E8u;
label_4592e8:
    // 0x4592e8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4592e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4592ec:
    // 0x4592ec: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4592ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4592f0:
    // 0x4592f0: 0x2463e390  addiu       $v1, $v1, -0x1C70
    ctx->pc = 0x4592f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960016));
label_4592f4:
    // 0x4592f4: 0x2442e3c8  addiu       $v0, $v0, -0x1C38
    ctx->pc = 0x4592f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960072));
label_4592f8:
    // 0x4592f8: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4592f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4592fc:
    // 0x4592fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4592fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_459300:
    // 0x459300: 0xc1166e8  jal         func_459BA0
label_459304:
    if (ctx->pc == 0x459304u) {
        ctx->pc = 0x459304u;
            // 0x459304: 0xae620064  sw          $v0, 0x64($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x459308u;
        goto label_459308;
    }
    ctx->pc = 0x459300u;
    SET_GPR_U32(ctx, 31, 0x459308u);
    ctx->pc = 0x459304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x459300u;
            // 0x459304: 0xae620064  sw          $v0, 0x64($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x459BA0u;
    if (runtime->hasFunction(0x459BA0u)) {
        auto targetFn = runtime->lookupFunction(0x459BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459308u; }
        if (ctx->pc != 0x459308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00459BA0_0x459ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459308u; }
        if (ctx->pc != 0x459308u) { return; }
    }
    ctx->pc = 0x459308u;
label_459308:
    // 0x459308: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x459308u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_45930c:
    // 0x45930c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x45930cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_459310:
    // 0x459310: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x459310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_459314:
    // 0x459314: 0x2442e240  addiu       $v0, $v0, -0x1DC0
    ctx->pc = 0x459314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959680));
label_459318:
    // 0x459318: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x459318u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_45931c:
    // 0x45931c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x45931cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_459320:
    // 0x459320: 0x2442e278  addiu       $v0, $v0, -0x1D88
    ctx->pc = 0x459320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959736));
label_459324:
    // 0x459324: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x459324u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_459328:
    // 0x459328: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x459328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_45932c:
    // 0x45932c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x45932cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_459330:
    // 0x459330: 0xc0a7a88  jal         func_29EA20
label_459334:
    if (ctx->pc == 0x459334u) {
        ctx->pc = 0x459334u;
            // 0x459334: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x459338u;
        goto label_459338;
    }
    ctx->pc = 0x459330u;
    SET_GPR_U32(ctx, 31, 0x459338u);
    ctx->pc = 0x459334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x459330u;
            // 0x459334: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459338u; }
        if (ctx->pc != 0x459338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459338u; }
        if (ctx->pc != 0x459338u) { return; }
    }
    ctx->pc = 0x459338u;
label_459338:
    // 0x459338: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x459338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_45933c:
    // 0x45933c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x45933cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_459340:
    // 0x459340: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_459344:
    if (ctx->pc == 0x459344u) {
        ctx->pc = 0x459344u;
            // 0x459344: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x459348u;
        goto label_459348;
    }
    ctx->pc = 0x459340u;
    {
        const bool branch_taken_0x459340 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x459344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x459340u;
            // 0x459344: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x459340) {
            ctx->pc = 0x45935Cu;
            goto label_45935c;
        }
    }
    ctx->pc = 0x459348u;
label_459348:
    // 0x459348: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x459348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_45934c:
    // 0x45934c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x45934cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_459350:
    // 0x459350: 0xc0827ac  jal         func_209EB0
label_459354:
    if (ctx->pc == 0x459354u) {
        ctx->pc = 0x459358u;
        goto label_459358;
    }
    ctx->pc = 0x459350u;
    SET_GPR_U32(ctx, 31, 0x459358u);
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459358u; }
        if (ctx->pc != 0x459358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459358u; }
        if (ctx->pc != 0x459358u) { return; }
    }
    ctx->pc = 0x459358u;
label_459358:
    // 0x459358: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x459358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45935c:
    // 0x45935c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x45935cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_459360:
    // 0x459360: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x459360u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_459364:
    // 0x459364: 0xafa20268  sw          $v0, 0x268($sp)
    ctx->pc = 0x459364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 2));
label_459368:
    // 0x459368: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x459368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_45936c:
    // 0x45936c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x45936cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_459370:
    // 0x459370: 0x27a50250  addiu       $a1, $sp, 0x250
    ctx->pc = 0x459370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_459374:
    // 0x459374: 0xafa2025c  sw          $v0, 0x25C($sp)
    ctx->pc = 0x459374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 2));
label_459378:
    // 0x459378: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x459378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_45937c:
    // 0x45937c: 0xafa00260  sw          $zero, 0x260($sp)
    ctx->pc = 0x45937cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 0));
label_459380:
    // 0x459380: 0xafa20240  sw          $v0, 0x240($sp)
    ctx->pc = 0x459380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 2));
label_459384:
    // 0x459384: 0x3c02c2b4  lui         $v0, 0xC2B4
    ctx->pc = 0x459384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49844 << 16));
label_459388:
    // 0x459388: 0xafa00264  sw          $zero, 0x264($sp)
    ctx->pc = 0x459388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 0));
label_45938c:
    // 0x45938c: 0xafa20200  sw          $v0, 0x200($sp)
    ctx->pc = 0x45938cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 2));
label_459390:
    // 0x459390: 0xafa00250  sw          $zero, 0x250($sp)
    ctx->pc = 0x459390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 0));
label_459394:
    // 0x459394: 0xafa00254  sw          $zero, 0x254($sp)
    ctx->pc = 0x459394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 0));
label_459398:
    // 0x459398: 0xafa00258  sw          $zero, 0x258($sp)
    ctx->pc = 0x459398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 0));
label_45939c:
    // 0x45939c: 0xafa00244  sw          $zero, 0x244($sp)
    ctx->pc = 0x45939cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 0));
label_4593a0:
    // 0x4593a0: 0xafa00248  sw          $zero, 0x248($sp)
    ctx->pc = 0x4593a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 0));
label_4593a4:
    // 0x4593a4: 0xafa0024c  sw          $zero, 0x24C($sp)
    ctx->pc = 0x4593a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 0));
label_4593a8:
    // 0x4593a8: 0xafa00204  sw          $zero, 0x204($sp)
    ctx->pc = 0x4593a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 0));
label_4593ac:
    // 0x4593ac: 0xafa00208  sw          $zero, 0x208($sp)
    ctx->pc = 0x4593acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 0));
label_4593b0:
    // 0x4593b0: 0xc0a3830  jal         func_28E0C0
label_4593b4:
    if (ctx->pc == 0x4593B4u) {
        ctx->pc = 0x4593B4u;
            // 0x4593b4: 0xafa0020c  sw          $zero, 0x20C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 0));
        ctx->pc = 0x4593B8u;
        goto label_4593b8;
    }
    ctx->pc = 0x4593B0u;
    SET_GPR_U32(ctx, 31, 0x4593B8u);
    ctx->pc = 0x4593B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4593B0u;
            // 0x4593b4: 0xafa0020c  sw          $zero, 0x20C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4593B8u; }
        if (ctx->pc != 0x4593B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4593B8u; }
        if (ctx->pc != 0x4593B8u) { return; }
    }
    ctx->pc = 0x4593B8u;
label_4593b8:
    // 0x4593b8: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x4593b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_4593bc:
    // 0x4593bc: 0xc0a3830  jal         func_28E0C0
label_4593c0:
    if (ctx->pc == 0x4593C0u) {
        ctx->pc = 0x4593C0u;
            // 0x4593c0: 0x27a50250  addiu       $a1, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->pc = 0x4593C4u;
        goto label_4593c4;
    }
    ctx->pc = 0x4593BCu;
    SET_GPR_U32(ctx, 31, 0x4593C4u);
    ctx->pc = 0x4593C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4593BCu;
            // 0x4593c0: 0x27a50250  addiu       $a1, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4593C4u; }
        if (ctx->pc != 0x4593C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4593C4u; }
        if (ctx->pc != 0x4593C4u) { return; }
    }
    ctx->pc = 0x4593C4u;
label_4593c4:
    // 0x4593c4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x4593c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_4593c8:
    // 0x4593c8: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x4593c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
label_4593cc:
    // 0x4593cc: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x4593ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
label_4593d0:
    // 0x4593d0: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x4593d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_4593d4:
    // 0x4593d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4593d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4593d8:
    // 0x4593d8: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x4593d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
label_4593dc:
    // 0x4593dc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4593dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4593e0:
    // 0x4593e0: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x4593e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_4593e4:
    // 0x4593e4: 0xafa30088  sw          $v1, 0x88($sp)
    ctx->pc = 0x4593e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 3));
label_4593e8:
    // 0x4593e8: 0xc0a7a88  jal         func_29EA20
label_4593ec:
    if (ctx->pc == 0x4593ECu) {
        ctx->pc = 0x4593ECu;
            // 0x4593ec: 0xafa0008c  sw          $zero, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
        ctx->pc = 0x4593F0u;
        goto label_4593f0;
    }
    ctx->pc = 0x4593E8u;
    SET_GPR_U32(ctx, 31, 0x4593F0u);
    ctx->pc = 0x4593ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4593E8u;
            // 0x4593ec: 0xafa0008c  sw          $zero, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4593F0u; }
        if (ctx->pc != 0x4593F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4593F0u; }
        if (ctx->pc != 0x4593F0u) { return; }
    }
    ctx->pc = 0x4593F0u;
label_4593f0:
    // 0x4593f0: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x4593f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_4593f4:
    // 0x4593f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4593f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4593f8:
    // 0x4593f8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_4593fc:
    if (ctx->pc == 0x4593FCu) {
        ctx->pc = 0x4593FCu;
            // 0x4593fc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x459400u;
        goto label_459400;
    }
    ctx->pc = 0x4593F8u;
    {
        const bool branch_taken_0x4593f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4593FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4593F8u;
            // 0x4593fc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4593f8) {
            ctx->pc = 0x459414u;
            goto label_459414;
        }
    }
    ctx->pc = 0x459400u;
label_459400:
    // 0x459400: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x459400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_459404:
    // 0x459404: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x459404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_459408:
    // 0x459408: 0xc0804bc  jal         func_2012F0
label_45940c:
    if (ctx->pc == 0x45940Cu) {
        ctx->pc = 0x45940Cu;
            // 0x45940c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x459410u;
        goto label_459410;
    }
    ctx->pc = 0x459408u;
    SET_GPR_U32(ctx, 31, 0x459410u);
    ctx->pc = 0x45940Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x459408u;
            // 0x45940c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459410u; }
        if (ctx->pc != 0x459410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459410u; }
        if (ctx->pc != 0x459410u) { return; }
    }
    ctx->pc = 0x459410u;
label_459410:
    // 0x459410: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x459410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_459414:
    // 0x459414: 0x3c024252  lui         $v0, 0x4252
    ctx->pc = 0x459414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16978 << 16));
label_459418:
    // 0x459418: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x459418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_45941c:
    // 0x45941c: 0xafa201c0  sw          $v0, 0x1C0($sp)
    ctx->pc = 0x45941cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 2));
label_459420:
    // 0x459420: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x459420u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_459424:
    // 0x459424: 0x3c024236  lui         $v0, 0x4236
    ctx->pc = 0x459424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16950 << 16));
label_459428:
    // 0x459428: 0xafa301c4  sw          $v1, 0x1C4($sp)
    ctx->pc = 0x459428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 3));
label_45942c:
    // 0x45942c: 0xafa201c8  sw          $v0, 0x1C8($sp)
    ctx->pc = 0x45942cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 2));
label_459430:
    // 0x459430: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x459430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_459434:
    // 0x459434: 0x3c02c252  lui         $v0, 0xC252
    ctx->pc = 0x459434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49746 << 16));
label_459438:
    // 0x459438: 0xafa30184  sw          $v1, 0x184($sp)
    ctx->pc = 0x459438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 3));
label_45943c:
    // 0x45943c: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x45943cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
label_459440:
    // 0x459440: 0x27a50250  addiu       $a1, $sp, 0x250
    ctx->pc = 0x459440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_459444:
    // 0x459444: 0x3c02c236  lui         $v0, 0xC236
    ctx->pc = 0x459444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49718 << 16));
label_459448:
    // 0x459448: 0xafa001cc  sw          $zero, 0x1CC($sp)
    ctx->pc = 0x459448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 0));
label_45944c:
    // 0x45944c: 0xafa20188  sw          $v0, 0x188($sp)
    ctx->pc = 0x45944cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
label_459450:
    // 0x459450: 0xc0a3830  jal         func_28E0C0
label_459454:
    if (ctx->pc == 0x459454u) {
        ctx->pc = 0x459454u;
            // 0x459454: 0xafa0018c  sw          $zero, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 0));
        ctx->pc = 0x459458u;
        goto label_459458;
    }
    ctx->pc = 0x459450u;
    SET_GPR_U32(ctx, 31, 0x459458u);
    ctx->pc = 0x459454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x459450u;
            // 0x459454: 0xafa0018c  sw          $zero, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459458u; }
        if (ctx->pc != 0x459458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459458u; }
        if (ctx->pc != 0x459458u) { return; }
    }
    ctx->pc = 0x459458u;
label_459458:
    // 0x459458: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x459458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_45945c:
    // 0x45945c: 0xc0a3830  jal         func_28E0C0
label_459460:
    if (ctx->pc == 0x459460u) {
        ctx->pc = 0x459460u;
            // 0x459460: 0x27a50250  addiu       $a1, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->pc = 0x459464u;
        goto label_459464;
    }
    ctx->pc = 0x45945Cu;
    SET_GPR_U32(ctx, 31, 0x459464u);
    ctx->pc = 0x459460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45945Cu;
            // 0x459460: 0x27a50250  addiu       $a1, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459464u; }
        if (ctx->pc != 0x459464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459464u; }
        if (ctx->pc != 0x459464u) { return; }
    }
    ctx->pc = 0x459464u;
label_459464:
    // 0x459464: 0x3c024252  lui         $v0, 0x4252
    ctx->pc = 0x459464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16978 << 16));
label_459468:
    // 0x459468: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x459468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_45946c:
    // 0x45946c: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x45946cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
label_459470:
    // 0x459470: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x459470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_459474:
    // 0x459474: 0x3c02c23a  lui         $v0, 0xC23A
    ctx->pc = 0x459474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49722 << 16));
label_459478:
    // 0x459478: 0xafa30144  sw          $v1, 0x144($sp)
    ctx->pc = 0x459478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 3));
label_45947c:
    // 0x45947c: 0xafa20148  sw          $v0, 0x148($sp)
    ctx->pc = 0x45947cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
label_459480:
    // 0x459480: 0x27a50250  addiu       $a1, $sp, 0x250
    ctx->pc = 0x459480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_459484:
    // 0x459484: 0x3c02c252  lui         $v0, 0xC252
    ctx->pc = 0x459484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49746 << 16));
label_459488:
    // 0x459488: 0xafa30104  sw          $v1, 0x104($sp)
    ctx->pc = 0x459488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 3));
label_45948c:
    // 0x45948c: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x45948cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_459490:
    // 0x459490: 0x3c02423a  lui         $v0, 0x423A
    ctx->pc = 0x459490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16954 << 16));
label_459494:
    // 0x459494: 0xafa0014c  sw          $zero, 0x14C($sp)
    ctx->pc = 0x459494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 0));
label_459498:
    // 0x459498: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x459498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
label_45949c:
    // 0x45949c: 0xc0a3830  jal         func_28E0C0
label_4594a0:
    if (ctx->pc == 0x4594A0u) {
        ctx->pc = 0x4594A0u;
            // 0x4594a0: 0xafa0010c  sw          $zero, 0x10C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
        ctx->pc = 0x4594A4u;
        goto label_4594a4;
    }
    ctx->pc = 0x45949Cu;
    SET_GPR_U32(ctx, 31, 0x4594A4u);
    ctx->pc = 0x4594A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45949Cu;
            // 0x4594a0: 0xafa0010c  sw          $zero, 0x10C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4594A4u; }
        if (ctx->pc != 0x4594A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4594A4u; }
        if (ctx->pc != 0x4594A4u) { return; }
    }
    ctx->pc = 0x4594A4u;
label_4594a4:
    // 0x4594a4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x4594a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_4594a8:
    // 0x4594a8: 0xc0a3830  jal         func_28E0C0
label_4594ac:
    if (ctx->pc == 0x4594ACu) {
        ctx->pc = 0x4594ACu;
            // 0x4594ac: 0x27a50250  addiu       $a1, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->pc = 0x4594B0u;
        goto label_4594b0;
    }
    ctx->pc = 0x4594A8u;
    SET_GPR_U32(ctx, 31, 0x4594B0u);
    ctx->pc = 0x4594ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4594A8u;
            // 0x4594ac: 0x27a50250  addiu       $a1, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4594B0u; }
        if (ctx->pc != 0x4594B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4594B0u; }
        if (ctx->pc != 0x4594B0u) { return; }
    }
    ctx->pc = 0x4594B0u;
label_4594b0:
    // 0x4594b0: 0x3c024198  lui         $v0, 0x4198
    ctx->pc = 0x4594b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16792 << 16));
label_4594b4:
    // 0x4594b4: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x4594b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_4594b8:
    // 0x4594b8: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x4594b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_4594bc:
    // 0x4594bc: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x4594bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_4594c0:
    // 0x4594c0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x4594c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_4594c4:
    // 0x4594c4: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x4594c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
label_4594c8:
    // 0x4594c8: 0x3c024158  lui         $v0, 0x4158
    ctx->pc = 0x4594c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16728 << 16));
label_4594cc:
    // 0x4594cc: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x4594ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_4594d0:
    // 0x4594d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4594d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4594d4:
    // 0x4594d4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4594d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4594d8:
    // 0x4594d8: 0xc0a7a88  jal         func_29EA20
label_4594dc:
    if (ctx->pc == 0x4594DCu) {
        ctx->pc = 0x4594DCu;
            // 0x4594dc: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->pc = 0x4594E0u;
        goto label_4594e0;
    }
    ctx->pc = 0x4594D8u;
    SET_GPR_U32(ctx, 31, 0x4594E0u);
    ctx->pc = 0x4594DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4594D8u;
            // 0x4594dc: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4594E0u; }
        if (ctx->pc != 0x4594E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4594E0u; }
        if (ctx->pc != 0x4594E0u) { return; }
    }
    ctx->pc = 0x4594E0u;
label_4594e0:
    // 0x4594e0: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x4594e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_4594e4:
    // 0x4594e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4594e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4594e8:
    // 0x4594e8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_4594ec:
    if (ctx->pc == 0x4594ECu) {
        ctx->pc = 0x4594ECu;
            // 0x4594ec: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4594F0u;
        goto label_4594f0;
    }
    ctx->pc = 0x4594E8u;
    {
        const bool branch_taken_0x4594e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4594ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4594E8u;
            // 0x4594ec: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4594e8) {
            ctx->pc = 0x459504u;
            goto label_459504;
        }
    }
    ctx->pc = 0x4594F0u;
label_4594f0:
    // 0x4594f0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x4594f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_4594f4:
    // 0x4594f4: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x4594f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4594f8:
    // 0x4594f8: 0xc0804bc  jal         func_2012F0
label_4594fc:
    if (ctx->pc == 0x4594FCu) {
        ctx->pc = 0x4594FCu;
            // 0x4594fc: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x459500u;
        goto label_459500;
    }
    ctx->pc = 0x4594F8u;
    SET_GPR_U32(ctx, 31, 0x459500u);
    ctx->pc = 0x4594FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4594F8u;
            // 0x4594fc: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459500u; }
        if (ctx->pc != 0x459500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459500u; }
        if (ctx->pc != 0x459500u) { return; }
    }
    ctx->pc = 0x459500u;
label_459500:
    // 0x459500: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x459500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_459504:
    // 0x459504: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x459504u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_459508:
    // 0x459508: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x459508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45950c:
    // 0x45950c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x45950cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_459510:
    // 0x459510: 0x2406e778  addiu       $a2, $zero, -0x1888
    ctx->pc = 0x459510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294961016));
label_459514:
    // 0x459514: 0xc04ca18  jal         func_132860
label_459518:
    if (ctx->pc == 0x459518u) {
        ctx->pc = 0x459518u;
            // 0x459518: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45951Cu;
        goto label_45951c;
    }
    ctx->pc = 0x459514u;
    SET_GPR_U32(ctx, 31, 0x45951Cu);
    ctx->pc = 0x459518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x459514u;
            // 0x459518: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45951Cu; }
        if (ctx->pc != 0x45951Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45951Cu; }
        if (ctx->pc != 0x45951Cu) { return; }
    }
    ctx->pc = 0x45951Cu;
label_45951c:
    // 0x45951c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x45951cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_459520:
    // 0x459520: 0x3c02c293  lui         $v0, 0xC293
    ctx->pc = 0x459520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49811 << 16));
label_459524:
    // 0x459524: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x459524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_459528:
    // 0x459528: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x459528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_45952c:
    // 0x45952c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x45952cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_459530:
    // 0x459530: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x459530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_459534:
    // 0x459534: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x459534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_459538:
    // 0x459538: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x459538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
label_45953c:
    // 0x45953c: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x45953cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_459540:
    // 0x459540: 0x3c024244  lui         $v0, 0x4244
    ctx->pc = 0x459540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16964 << 16));
label_459544:
    // 0x459544: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x459544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_459548:
    // 0x459548: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x459548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
label_45954c:
    // 0x45954c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x45954cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_459550:
    // 0x459550: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x459550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
label_459554:
    // 0x459554: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x459554u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_459558:
    // 0x459558: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x459558u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_45955c:
    // 0x45955c: 0xc0a3830  jal         func_28E0C0
label_459560:
    if (ctx->pc == 0x459560u) {
        ctx->pc = 0x459560u;
            // 0x459560: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->pc = 0x459564u;
        goto label_459564;
    }
    ctx->pc = 0x45955Cu;
    SET_GPR_U32(ctx, 31, 0x459564u);
    ctx->pc = 0x459560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45955Cu;
            // 0x459560: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459564u; }
        if (ctx->pc != 0x459564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459564u; }
        if (ctx->pc != 0x459564u) { return; }
    }
    ctx->pc = 0x459564u;
label_459564:
    // 0x459564: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x459564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_459568:
    // 0x459568: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x459568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_45956c:
    // 0x45956c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x45956cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_459570:
    // 0x459570: 0xc0a7a88  jal         func_29EA20
label_459574:
    if (ctx->pc == 0x459574u) {
        ctx->pc = 0x459574u;
            // 0x459574: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x459578u;
        goto label_459578;
    }
    ctx->pc = 0x459570u;
    SET_GPR_U32(ctx, 31, 0x459578u);
    ctx->pc = 0x459574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x459570u;
            // 0x459574: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459578u; }
        if (ctx->pc != 0x459578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459578u; }
        if (ctx->pc != 0x459578u) { return; }
    }
    ctx->pc = 0x459578u;
label_459578:
    // 0x459578: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x459578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_45957c:
    // 0x45957c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x45957cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_459580:
    // 0x459580: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_459584:
    if (ctx->pc == 0x459584u) {
        ctx->pc = 0x459584u;
            // 0x459584: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x459588u;
        goto label_459588;
    }
    ctx->pc = 0x459580u;
    {
        const bool branch_taken_0x459580 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x459584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x459580u;
            // 0x459584: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x459580) {
            ctx->pc = 0x459598u;
            goto label_459598;
        }
    }
    ctx->pc = 0x459588u;
label_459588:
    // 0x459588: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x459588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_45958c:
    // 0x45958c: 0xc082940  jal         func_20A500
label_459590:
    if (ctx->pc == 0x459590u) {
        ctx->pc = 0x459590u;
            // 0x459590: 0x27a60210  addiu       $a2, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->pc = 0x459594u;
        goto label_459594;
    }
    ctx->pc = 0x45958Cu;
    SET_GPR_U32(ctx, 31, 0x459594u);
    ctx->pc = 0x459590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45958Cu;
            // 0x459590: 0x27a60210  addiu       $a2, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A500u;
    if (runtime->hasFunction(0x20A500u)) {
        auto targetFn = runtime->lookupFunction(0x20A500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459594u; }
        if (ctx->pc != 0x459594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020A500_0x20a500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459594u; }
        if (ctx->pc != 0x459594u) { return; }
    }
    ctx->pc = 0x459594u;
label_459594:
    // 0x459594: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x459594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_459598:
    // 0x459598: 0xae6400a8  sw          $a0, 0xA8($s3)
    ctx->pc = 0x459598u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 168), GPR_U32(ctx, 4));
label_45959c:
    // 0x45959c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x45959cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4595a0:
    // 0x4595a0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4595a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4595a4:
    // 0x4595a4: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x4595a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_4595a8:
    // 0x4595a8: 0xc0a7a88  jal         func_29EA20
label_4595ac:
    if (ctx->pc == 0x4595ACu) {
        ctx->pc = 0x4595ACu;
            // 0x4595ac: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x4595B0u;
        goto label_4595b0;
    }
    ctx->pc = 0x4595A8u;
    SET_GPR_U32(ctx, 31, 0x4595B0u);
    ctx->pc = 0x4595ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4595A8u;
            // 0x4595ac: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4595B0u; }
        if (ctx->pc != 0x4595B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4595B0u; }
        if (ctx->pc != 0x4595B0u) { return; }
    }
    ctx->pc = 0x4595B0u;
label_4595b0:
    // 0x4595b0: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x4595b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_4595b4:
    // 0x4595b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4595b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4595b8:
    // 0x4595b8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_4595bc:
    if (ctx->pc == 0x4595BCu) {
        ctx->pc = 0x4595BCu;
            // 0x4595bc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4595C0u;
        goto label_4595c0;
    }
    ctx->pc = 0x4595B8u;
    {
        const bool branch_taken_0x4595b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4595BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4595B8u;
            // 0x4595bc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4595b8) {
            ctx->pc = 0x4595D0u;
            goto label_4595d0;
        }
    }
    ctx->pc = 0x4595C0u;
label_4595c0:
    // 0x4595c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4595c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4595c4:
    // 0x4595c4: 0xc082940  jal         func_20A500
label_4595c8:
    if (ctx->pc == 0x4595C8u) {
        ctx->pc = 0x4595C8u;
            // 0x4595c8: 0x27a601d0  addiu       $a2, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x4595CCu;
        goto label_4595cc;
    }
    ctx->pc = 0x4595C4u;
    SET_GPR_U32(ctx, 31, 0x4595CCu);
    ctx->pc = 0x4595C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4595C4u;
            // 0x4595c8: 0x27a601d0  addiu       $a2, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A500u;
    if (runtime->hasFunction(0x20A500u)) {
        auto targetFn = runtime->lookupFunction(0x20A500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4595CCu; }
        if (ctx->pc != 0x4595CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020A500_0x20a500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4595CCu; }
        if (ctx->pc != 0x4595CCu) { return; }
    }
    ctx->pc = 0x4595CCu;
label_4595cc:
    // 0x4595cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4595ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4595d0:
    // 0x4595d0: 0xae6400ac  sw          $a0, 0xAC($s3)
    ctx->pc = 0x4595d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 172), GPR_U32(ctx, 4));
label_4595d4:
    // 0x4595d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4595d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4595d8:
    // 0x4595d8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4595d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4595dc:
    // 0x4595dc: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x4595dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_4595e0:
    // 0x4595e0: 0xc0a7a88  jal         func_29EA20
label_4595e4:
    if (ctx->pc == 0x4595E4u) {
        ctx->pc = 0x4595E4u;
            // 0x4595e4: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x4595E8u;
        goto label_4595e8;
    }
    ctx->pc = 0x4595E0u;
    SET_GPR_U32(ctx, 31, 0x4595E8u);
    ctx->pc = 0x4595E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4595E0u;
            // 0x4595e4: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4595E8u; }
        if (ctx->pc != 0x4595E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4595E8u; }
        if (ctx->pc != 0x4595E8u) { return; }
    }
    ctx->pc = 0x4595E8u;
label_4595e8:
    // 0x4595e8: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x4595e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_4595ec:
    // 0x4595ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4595ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4595f0:
    // 0x4595f0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_4595f4:
    if (ctx->pc == 0x4595F4u) {
        ctx->pc = 0x4595F4u;
            // 0x4595f4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4595F8u;
        goto label_4595f8;
    }
    ctx->pc = 0x4595F0u;
    {
        const bool branch_taken_0x4595f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4595F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4595F0u;
            // 0x4595f4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4595f0) {
            ctx->pc = 0x459608u;
            goto label_459608;
        }
    }
    ctx->pc = 0x4595F8u;
label_4595f8:
    // 0x4595f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4595f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4595fc:
    // 0x4595fc: 0xc082940  jal         func_20A500
label_459600:
    if (ctx->pc == 0x459600u) {
        ctx->pc = 0x459600u;
            // 0x459600: 0x27a60190  addiu       $a2, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x459604u;
        goto label_459604;
    }
    ctx->pc = 0x4595FCu;
    SET_GPR_U32(ctx, 31, 0x459604u);
    ctx->pc = 0x459600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4595FCu;
            // 0x459600: 0x27a60190  addiu       $a2, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A500u;
    if (runtime->hasFunction(0x20A500u)) {
        auto targetFn = runtime->lookupFunction(0x20A500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459604u; }
        if (ctx->pc != 0x459604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020A500_0x20a500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459604u; }
        if (ctx->pc != 0x459604u) { return; }
    }
    ctx->pc = 0x459604u;
label_459604:
    // 0x459604: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x459604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_459608:
    // 0x459608: 0xae6400b0  sw          $a0, 0xB0($s3)
    ctx->pc = 0x459608u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 176), GPR_U32(ctx, 4));
label_45960c:
    // 0x45960c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x45960cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_459610:
    // 0x459610: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x459610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_459614:
    // 0x459614: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x459614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_459618:
    // 0x459618: 0xc0a7a88  jal         func_29EA20
label_45961c:
    if (ctx->pc == 0x45961Cu) {
        ctx->pc = 0x45961Cu;
            // 0x45961c: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x459620u;
        goto label_459620;
    }
    ctx->pc = 0x459618u;
    SET_GPR_U32(ctx, 31, 0x459620u);
    ctx->pc = 0x45961Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x459618u;
            // 0x45961c: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459620u; }
        if (ctx->pc != 0x459620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459620u; }
        if (ctx->pc != 0x459620u) { return; }
    }
    ctx->pc = 0x459620u;
label_459620:
    // 0x459620: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x459620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_459624:
    // 0x459624: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x459624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_459628:
    // 0x459628: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_45962c:
    if (ctx->pc == 0x45962Cu) {
        ctx->pc = 0x45962Cu;
            // 0x45962c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x459630u;
        goto label_459630;
    }
    ctx->pc = 0x459628u;
    {
        const bool branch_taken_0x459628 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x45962Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x459628u;
            // 0x45962c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x459628) {
            ctx->pc = 0x459640u;
            goto label_459640;
        }
    }
    ctx->pc = 0x459630u;
label_459630:
    // 0x459630: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x459630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_459634:
    // 0x459634: 0xc082940  jal         func_20A500
label_459638:
    if (ctx->pc == 0x459638u) {
        ctx->pc = 0x459638u;
            // 0x459638: 0x27a60150  addiu       $a2, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x45963Cu;
        goto label_45963c;
    }
    ctx->pc = 0x459634u;
    SET_GPR_U32(ctx, 31, 0x45963Cu);
    ctx->pc = 0x459638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x459634u;
            // 0x459638: 0x27a60150  addiu       $a2, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A500u;
    if (runtime->hasFunction(0x20A500u)) {
        auto targetFn = runtime->lookupFunction(0x20A500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45963Cu; }
        if (ctx->pc != 0x45963Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020A500_0x20a500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45963Cu; }
        if (ctx->pc != 0x45963Cu) { return; }
    }
    ctx->pc = 0x45963Cu;
label_45963c:
    // 0x45963c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x45963cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_459640:
    // 0x459640: 0xae6400b4  sw          $a0, 0xB4($s3)
    ctx->pc = 0x459640u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 180), GPR_U32(ctx, 4));
label_459644:
    // 0x459644: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x459644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_459648:
    // 0x459648: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x459648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_45964c:
    // 0x45964c: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x45964cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_459650:
    // 0x459650: 0xc0a7a88  jal         func_29EA20
label_459654:
    if (ctx->pc == 0x459654u) {
        ctx->pc = 0x459654u;
            // 0x459654: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x459658u;
        goto label_459658;
    }
    ctx->pc = 0x459650u;
    SET_GPR_U32(ctx, 31, 0x459658u);
    ctx->pc = 0x459654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x459650u;
            // 0x459654: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459658u; }
        if (ctx->pc != 0x459658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459658u; }
        if (ctx->pc != 0x459658u) { return; }
    }
    ctx->pc = 0x459658u;
label_459658:
    // 0x459658: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x459658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_45965c:
    // 0x45965c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x45965cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_459660:
    // 0x459660: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_459664:
    if (ctx->pc == 0x459664u) {
        ctx->pc = 0x459664u;
            // 0x459664: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x459668u;
        goto label_459668;
    }
    ctx->pc = 0x459660u;
    {
        const bool branch_taken_0x459660 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x459664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x459660u;
            // 0x459664: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x459660) {
            ctx->pc = 0x459678u;
            goto label_459678;
        }
    }
    ctx->pc = 0x459668u;
label_459668:
    // 0x459668: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x459668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_45966c:
    // 0x45966c: 0xc082940  jal         func_20A500
label_459670:
    if (ctx->pc == 0x459670u) {
        ctx->pc = 0x459670u;
            // 0x459670: 0x27a60110  addiu       $a2, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x459674u;
        goto label_459674;
    }
    ctx->pc = 0x45966Cu;
    SET_GPR_U32(ctx, 31, 0x459674u);
    ctx->pc = 0x459670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45966Cu;
            // 0x459670: 0x27a60110  addiu       $a2, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A500u;
    if (runtime->hasFunction(0x20A500u)) {
        auto targetFn = runtime->lookupFunction(0x20A500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459674u; }
        if (ctx->pc != 0x459674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020A500_0x20a500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459674u; }
        if (ctx->pc != 0x459674u) { return; }
    }
    ctx->pc = 0x459674u;
label_459674:
    // 0x459674: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x459674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_459678:
    // 0x459678: 0xae6400b8  sw          $a0, 0xB8($s3)
    ctx->pc = 0x459678u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 184), GPR_U32(ctx, 4));
label_45967c:
    // 0x45967c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x45967cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_459680:
    // 0x459680: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x459680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_459684:
    // 0x459684: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x459684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_459688:
    // 0x459688: 0xc0a7a88  jal         func_29EA20
label_45968c:
    if (ctx->pc == 0x45968Cu) {
        ctx->pc = 0x45968Cu;
            // 0x45968c: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x459690u;
        goto label_459690;
    }
    ctx->pc = 0x459688u;
    SET_GPR_U32(ctx, 31, 0x459690u);
    ctx->pc = 0x45968Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x459688u;
            // 0x45968c: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459690u; }
        if (ctx->pc != 0x459690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459690u; }
        if (ctx->pc != 0x459690u) { return; }
    }
    ctx->pc = 0x459690u;
label_459690:
    // 0x459690: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x459690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_459694:
    // 0x459694: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x459694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_459698:
    // 0x459698: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_45969c:
    if (ctx->pc == 0x45969Cu) {
        ctx->pc = 0x45969Cu;
            // 0x45969c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4596A0u;
        goto label_4596a0;
    }
    ctx->pc = 0x459698u;
    {
        const bool branch_taken_0x459698 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x45969Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x459698u;
            // 0x45969c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x459698) {
            ctx->pc = 0x4596B0u;
            goto label_4596b0;
        }
    }
    ctx->pc = 0x4596A0u;
label_4596a0:
    // 0x4596a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4596a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4596a4:
    // 0x4596a4: 0xc082940  jal         func_20A500
label_4596a8:
    if (ctx->pc == 0x4596A8u) {
        ctx->pc = 0x4596A8u;
            // 0x4596a8: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x4596ACu;
        goto label_4596ac;
    }
    ctx->pc = 0x4596A4u;
    SET_GPR_U32(ctx, 31, 0x4596ACu);
    ctx->pc = 0x4596A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4596A4u;
            // 0x4596a8: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A500u;
    if (runtime->hasFunction(0x20A500u)) {
        auto targetFn = runtime->lookupFunction(0x20A500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4596ACu; }
        if (ctx->pc != 0x4596ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020A500_0x20a500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4596ACu; }
        if (ctx->pc != 0x4596ACu) { return; }
    }
    ctx->pc = 0x4596ACu;
label_4596ac:
    // 0x4596ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4596acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4596b0:
    // 0x4596b0: 0xae6400bc  sw          $a0, 0xBC($s3)
    ctx->pc = 0x4596b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 188), GPR_U32(ctx, 4));
label_4596b4:
    // 0x4596b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4596b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4596b8:
    // 0x4596b8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4596b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4596bc:
    // 0x4596bc: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x4596bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_4596c0:
    // 0x4596c0: 0xc0a7a88  jal         func_29EA20
label_4596c4:
    if (ctx->pc == 0x4596C4u) {
        ctx->pc = 0x4596C4u;
            // 0x4596c4: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x4596C8u;
        goto label_4596c8;
    }
    ctx->pc = 0x4596C0u;
    SET_GPR_U32(ctx, 31, 0x4596C8u);
    ctx->pc = 0x4596C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4596C0u;
            // 0x4596c4: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4596C8u; }
        if (ctx->pc != 0x4596C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4596C8u; }
        if (ctx->pc != 0x4596C8u) { return; }
    }
    ctx->pc = 0x4596C8u;
label_4596c8:
    // 0x4596c8: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x4596c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_4596cc:
    // 0x4596cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4596ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4596d0:
    // 0x4596d0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_4596d4:
    if (ctx->pc == 0x4596D4u) {
        ctx->pc = 0x4596D4u;
            // 0x4596d4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4596D8u;
        goto label_4596d8;
    }
    ctx->pc = 0x4596D0u;
    {
        const bool branch_taken_0x4596d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4596D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4596D0u;
            // 0x4596d4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4596d0) {
            ctx->pc = 0x4596E8u;
            goto label_4596e8;
        }
    }
    ctx->pc = 0x4596D8u;
label_4596d8:
    // 0x4596d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4596d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4596dc:
    // 0x4596dc: 0xc082940  jal         func_20A500
label_4596e0:
    if (ctx->pc == 0x4596E0u) {
        ctx->pc = 0x4596E0u;
            // 0x4596e0: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4596E4u;
        goto label_4596e4;
    }
    ctx->pc = 0x4596DCu;
    SET_GPR_U32(ctx, 31, 0x4596E4u);
    ctx->pc = 0x4596E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4596DCu;
            // 0x4596e0: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A500u;
    if (runtime->hasFunction(0x20A500u)) {
        auto targetFn = runtime->lookupFunction(0x20A500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4596E4u; }
        if (ctx->pc != 0x4596E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020A500_0x20a500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4596E4u; }
        if (ctx->pc != 0x4596E4u) { return; }
    }
    ctx->pc = 0x4596E4u;
label_4596e4:
    // 0x4596e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4596e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4596e8:
    // 0x4596e8: 0xae6400c0  sw          $a0, 0xC0($s3)
    ctx->pc = 0x4596e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 192), GPR_U32(ctx, 4));
label_4596ec:
    // 0x4596ec: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x4596ecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_4596f0:
    // 0x4596f0: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_4596f4:
    if (ctx->pc == 0x4596F4u) {
        ctx->pc = 0x4596F4u;
            // 0x4596f4: 0x96220004  lhu         $v0, 0x4($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x4596F8u;
        goto label_4596f8;
    }
    ctx->pc = 0x4596F0u;
    {
        const bool branch_taken_0x4596f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4596f0) {
            ctx->pc = 0x4596F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4596F0u;
            // 0x4596f4: 0x96220004  lhu         $v0, 0x4($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x459734u;
            goto label_459734;
        }
    }
    ctx->pc = 0x4596F8u;
label_4596f8:
    // 0x4596f8: 0x86420006  lh          $v0, 0x6($s2)
    ctx->pc = 0x4596f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_4596fc:
    // 0x4596fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4596fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_459700:
    // 0x459700: 0xa6420006  sh          $v0, 0x6($s2)
    ctx->pc = 0x459700u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 2));
label_459704:
    // 0x459704: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x459704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_459708:
    // 0x459708: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x459708u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_45970c:
    // 0x45970c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_459710:
    if (ctx->pc == 0x459710u) {
        ctx->pc = 0x459714u;
        goto label_459714;
    }
    ctx->pc = 0x45970Cu;
    {
        const bool branch_taken_0x45970c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45970c) {
            ctx->pc = 0x459730u;
            goto label_459730;
        }
    }
    ctx->pc = 0x459714u;
label_459714:
    // 0x459714: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_459718:
    if (ctx->pc == 0x459718u) {
        ctx->pc = 0x45971Cu;
        goto label_45971c;
    }
    ctx->pc = 0x459714u;
    {
        const bool branch_taken_0x459714 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x459714) {
            ctx->pc = 0x459730u;
            goto label_459730;
        }
    }
    ctx->pc = 0x45971Cu;
label_45971c:
    // 0x45971c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x45971cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_459720:
    // 0x459720: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x459720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_459724:
    // 0x459724: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x459724u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_459728:
    // 0x459728: 0x320f809  jalr        $t9
label_45972c:
    if (ctx->pc == 0x45972Cu) {
        ctx->pc = 0x45972Cu;
            // 0x45972c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x459730u;
        goto label_459730;
    }
    ctx->pc = 0x459728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x459730u);
        ctx->pc = 0x45972Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x459728u;
            // 0x45972c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x459730u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x459730u; }
            if (ctx->pc != 0x459730u) { return; }
        }
        }
    }
    ctx->pc = 0x459730u;
label_459730:
    // 0x459730: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x459730u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_459734:
    // 0x459734: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_459738:
    if (ctx->pc == 0x459738u) {
        ctx->pc = 0x459738u;
            // 0x459738: 0x96020004  lhu         $v0, 0x4($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x45973Cu;
        goto label_45973c;
    }
    ctx->pc = 0x459734u;
    {
        const bool branch_taken_0x459734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x459734) {
            ctx->pc = 0x459738u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x459734u;
            // 0x459738: 0x96020004  lhu         $v0, 0x4($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x459778u;
            goto label_459778;
        }
    }
    ctx->pc = 0x45973Cu;
label_45973c:
    // 0x45973c: 0x86220006  lh          $v0, 0x6($s1)
    ctx->pc = 0x45973cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_459740:
    // 0x459740: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x459740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_459744:
    // 0x459744: 0xa6220006  sh          $v0, 0x6($s1)
    ctx->pc = 0x459744u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
label_459748:
    // 0x459748: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x459748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_45974c:
    // 0x45974c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x45974cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_459750:
    // 0x459750: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_459754:
    if (ctx->pc == 0x459754u) {
        ctx->pc = 0x459758u;
        goto label_459758;
    }
    ctx->pc = 0x459750u;
    {
        const bool branch_taken_0x459750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x459750) {
            ctx->pc = 0x459774u;
            goto label_459774;
        }
    }
    ctx->pc = 0x459758u;
label_459758:
    // 0x459758: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_45975c:
    if (ctx->pc == 0x45975Cu) {
        ctx->pc = 0x459760u;
        goto label_459760;
    }
    ctx->pc = 0x459758u;
    {
        const bool branch_taken_0x459758 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x459758) {
            ctx->pc = 0x459774u;
            goto label_459774;
        }
    }
    ctx->pc = 0x459760u;
label_459760:
    // 0x459760: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x459760u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_459764:
    // 0x459764: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x459764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_459768:
    // 0x459768: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x459768u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_45976c:
    // 0x45976c: 0x320f809  jalr        $t9
label_459770:
    if (ctx->pc == 0x459770u) {
        ctx->pc = 0x459770u;
            // 0x459770: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x459774u;
        goto label_459774;
    }
    ctx->pc = 0x45976Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x459774u);
        ctx->pc = 0x459770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45976Cu;
            // 0x459770: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x459774u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x459774u; }
            if (ctx->pc != 0x459774u) { return; }
        }
        }
    }
    ctx->pc = 0x459774u;
label_459774:
    // 0x459774: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x459774u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_459778:
    // 0x459778: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_45977c:
    if (ctx->pc == 0x45977Cu) {
        ctx->pc = 0x45977Cu;
            // 0x45977c: 0x8fa20268  lw          $v0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->pc = 0x459780u;
        goto label_459780;
    }
    ctx->pc = 0x459778u;
    {
        const bool branch_taken_0x459778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x459778) {
            ctx->pc = 0x45977Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x459778u;
            // 0x45977c: 0x8fa20268  lw          $v0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4597BCu;
            goto label_4597bc;
        }
    }
    ctx->pc = 0x459780u;
label_459780:
    // 0x459780: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x459780u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_459784:
    // 0x459784: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x459784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_459788:
    // 0x459788: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x459788u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
label_45978c:
    // 0x45978c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x45978cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_459790:
    // 0x459790: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x459790u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_459794:
    // 0x459794: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_459798:
    if (ctx->pc == 0x459798u) {
        ctx->pc = 0x45979Cu;
        goto label_45979c;
    }
    ctx->pc = 0x459794u;
    {
        const bool branch_taken_0x459794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x459794) {
            ctx->pc = 0x4597B8u;
            goto label_4597b8;
        }
    }
    ctx->pc = 0x45979Cu;
label_45979c:
    // 0x45979c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_4597a0:
    if (ctx->pc == 0x4597A0u) {
        ctx->pc = 0x4597A4u;
        goto label_4597a4;
    }
    ctx->pc = 0x45979Cu;
    {
        const bool branch_taken_0x45979c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x45979c) {
            ctx->pc = 0x4597B8u;
            goto label_4597b8;
        }
    }
    ctx->pc = 0x4597A4u;
label_4597a4:
    // 0x4597a4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4597a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4597a8:
    // 0x4597a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4597a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4597ac:
    // 0x4597ac: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4597acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4597b0:
    // 0x4597b0: 0x320f809  jalr        $t9
label_4597b4:
    if (ctx->pc == 0x4597B4u) {
        ctx->pc = 0x4597B4u;
            // 0x4597b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4597B8u;
        goto label_4597b8;
    }
    ctx->pc = 0x4597B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4597B8u);
        ctx->pc = 0x4597B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4597B0u;
            // 0x4597b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4597B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4597B8u; }
            if (ctx->pc != 0x4597B8u) { return; }
        }
        }
    }
    ctx->pc = 0x4597B8u;
label_4597b8:
    // 0x4597b8: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x4597b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_4597bc:
    // 0x4597bc: 0x8fa30264  lw          $v1, 0x264($sp)
    ctx->pc = 0x4597bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_4597c0:
    // 0x4597c0: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x4597c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_4597c4:
    // 0x4597c4: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x4597c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_4597c8:
    // 0x4597c8: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_4597cc:
    if (ctx->pc == 0x4597CCu) {
        ctx->pc = 0x4597CCu;
            // 0x4597cc: 0x8fa30264  lw          $v1, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->pc = 0x4597D0u;
        goto label_4597d0;
    }
    ctx->pc = 0x4597C8u;
    {
        const bool branch_taken_0x4597c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4597c8) {
            ctx->pc = 0x4597CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4597C8u;
            // 0x4597cc: 0x8fa30264  lw          $v1, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4597E0u;
            goto label_4597e0;
        }
    }
    ctx->pc = 0x4597D0u;
label_4597d0:
    // 0x4597d0: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x4597d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_4597d4:
    // 0x4597d4: 0xc0a728c  jal         func_29CA30
label_4597d8:
    if (ctx->pc == 0x4597D8u) {
        ctx->pc = 0x4597D8u;
            // 0x4597d8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4597DCu;
        goto label_4597dc;
    }
    ctx->pc = 0x4597D4u;
    SET_GPR_U32(ctx, 31, 0x4597DCu);
    ctx->pc = 0x4597D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4597D4u;
            // 0x4597d8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4597DCu; }
        if (ctx->pc != 0x4597DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4597DCu; }
        if (ctx->pc != 0x4597DCu) { return; }
    }
    ctx->pc = 0x4597DCu;
label_4597dc:
    // 0x4597dc: 0x8fa30264  lw          $v1, 0x264($sp)
    ctx->pc = 0x4597dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_4597e0:
    // 0x4597e0: 0x8e6500a8  lw          $a1, 0xA8($s3)
    ctx->pc = 0x4597e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 168)));
label_4597e4:
    // 0x4597e4: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x4597e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_4597e8:
    // 0x4597e8: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x4597e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4597ec:
    // 0x4597ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4597ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4597f0:
    // 0x4597f0: 0xafa40264  sw          $a0, 0x264($sp)
    ctx->pc = 0x4597f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 4));
label_4597f4:
    // 0x4597f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4597f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4597f8:
    // 0x4597f8: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x4597f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_4597fc:
    // 0x4597fc: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x4597fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_459800:
    // 0x459800: 0x8fa30264  lw          $v1, 0x264($sp)
    ctx->pc = 0x459800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_459804:
    // 0x459804: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x459804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_459808:
    // 0x459808: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x459808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_45980c:
    // 0x45980c: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_459810:
    if (ctx->pc == 0x459810u) {
        ctx->pc = 0x459810u;
            // 0x459810: 0x8fa30264  lw          $v1, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->pc = 0x459814u;
        goto label_459814;
    }
    ctx->pc = 0x45980Cu;
    {
        const bool branch_taken_0x45980c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x45980c) {
            ctx->pc = 0x459810u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45980Cu;
            // 0x459810: 0x8fa30264  lw          $v1, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x459824u;
            goto label_459824;
        }
    }
    ctx->pc = 0x459814u;
label_459814:
    // 0x459814: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x459814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_459818:
    // 0x459818: 0xc0a728c  jal         func_29CA30
label_45981c:
    if (ctx->pc == 0x45981Cu) {
        ctx->pc = 0x45981Cu;
            // 0x45981c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x459820u;
        goto label_459820;
    }
    ctx->pc = 0x459818u;
    SET_GPR_U32(ctx, 31, 0x459820u);
    ctx->pc = 0x45981Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x459818u;
            // 0x45981c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459820u; }
        if (ctx->pc != 0x459820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459820u; }
        if (ctx->pc != 0x459820u) { return; }
    }
    ctx->pc = 0x459820u;
label_459820:
    // 0x459820: 0x8fa30264  lw          $v1, 0x264($sp)
    ctx->pc = 0x459820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_459824:
    // 0x459824: 0x8e6500ac  lw          $a1, 0xAC($s3)
    ctx->pc = 0x459824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 172)));
label_459828:
    // 0x459828: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x459828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_45982c:
    // 0x45982c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x45982cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_459830:
    // 0x459830: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x459830u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_459834:
    // 0x459834: 0xafa40264  sw          $a0, 0x264($sp)
    ctx->pc = 0x459834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 4));
label_459838:
    // 0x459838: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x459838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45983c:
    // 0x45983c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x45983cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_459840:
    // 0x459840: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x459840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_459844:
    // 0x459844: 0x8fa30264  lw          $v1, 0x264($sp)
    ctx->pc = 0x459844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_459848:
    // 0x459848: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x459848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_45984c:
    // 0x45984c: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x45984cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_459850:
    // 0x459850: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_459854:
    if (ctx->pc == 0x459854u) {
        ctx->pc = 0x459854u;
            // 0x459854: 0x8fa30264  lw          $v1, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->pc = 0x459858u;
        goto label_459858;
    }
    ctx->pc = 0x459850u;
    {
        const bool branch_taken_0x459850 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x459850) {
            ctx->pc = 0x459854u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x459850u;
            // 0x459854: 0x8fa30264  lw          $v1, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x459868u;
            goto label_459868;
        }
    }
    ctx->pc = 0x459858u;
label_459858:
    // 0x459858: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x459858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_45985c:
    // 0x45985c: 0xc0a728c  jal         func_29CA30
label_459860:
    if (ctx->pc == 0x459860u) {
        ctx->pc = 0x459860u;
            // 0x459860: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x459864u;
        goto label_459864;
    }
    ctx->pc = 0x45985Cu;
    SET_GPR_U32(ctx, 31, 0x459864u);
    ctx->pc = 0x459860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45985Cu;
            // 0x459860: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459864u; }
        if (ctx->pc != 0x459864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459864u; }
        if (ctx->pc != 0x459864u) { return; }
    }
    ctx->pc = 0x459864u;
label_459864:
    // 0x459864: 0x8fa30264  lw          $v1, 0x264($sp)
    ctx->pc = 0x459864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_459868:
    // 0x459868: 0x8e6500b0  lw          $a1, 0xB0($s3)
    ctx->pc = 0x459868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_45986c:
    // 0x45986c: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x45986cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_459870:
    // 0x459870: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x459870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_459874:
    // 0x459874: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x459874u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_459878:
    // 0x459878: 0xafa40264  sw          $a0, 0x264($sp)
    ctx->pc = 0x459878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 4));
label_45987c:
    // 0x45987c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45987cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_459880:
    // 0x459880: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x459880u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_459884:
    // 0x459884: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x459884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_459888:
    // 0x459888: 0x8fa30264  lw          $v1, 0x264($sp)
    ctx->pc = 0x459888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_45988c:
    // 0x45988c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x45988cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_459890:
    // 0x459890: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x459890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_459894:
    // 0x459894: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_459898:
    if (ctx->pc == 0x459898u) {
        ctx->pc = 0x459898u;
            // 0x459898: 0x8fa30264  lw          $v1, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->pc = 0x45989Cu;
        goto label_45989c;
    }
    ctx->pc = 0x459894u;
    {
        const bool branch_taken_0x459894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x459894) {
            ctx->pc = 0x459898u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x459894u;
            // 0x459898: 0x8fa30264  lw          $v1, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4598ACu;
            goto label_4598ac;
        }
    }
    ctx->pc = 0x45989Cu;
label_45989c:
    // 0x45989c: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x45989cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_4598a0:
    // 0x4598a0: 0xc0a728c  jal         func_29CA30
label_4598a4:
    if (ctx->pc == 0x4598A4u) {
        ctx->pc = 0x4598A4u;
            // 0x4598a4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4598A8u;
        goto label_4598a8;
    }
    ctx->pc = 0x4598A0u;
    SET_GPR_U32(ctx, 31, 0x4598A8u);
    ctx->pc = 0x4598A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4598A0u;
            // 0x4598a4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4598A8u; }
        if (ctx->pc != 0x4598A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4598A8u; }
        if (ctx->pc != 0x4598A8u) { return; }
    }
    ctx->pc = 0x4598A8u;
label_4598a8:
    // 0x4598a8: 0x8fa30264  lw          $v1, 0x264($sp)
    ctx->pc = 0x4598a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_4598ac:
    // 0x4598ac: 0x8e6500b4  lw          $a1, 0xB4($s3)
    ctx->pc = 0x4598acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
label_4598b0:
    // 0x4598b0: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x4598b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_4598b4:
    // 0x4598b4: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x4598b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4598b8:
    // 0x4598b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4598b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4598bc:
    // 0x4598bc: 0xafa40264  sw          $a0, 0x264($sp)
    ctx->pc = 0x4598bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 4));
label_4598c0:
    // 0x4598c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4598c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4598c4:
    // 0x4598c4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x4598c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_4598c8:
    // 0x4598c8: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x4598c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_4598cc:
    // 0x4598cc: 0x8fa30264  lw          $v1, 0x264($sp)
    ctx->pc = 0x4598ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_4598d0:
    // 0x4598d0: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x4598d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_4598d4:
    // 0x4598d4: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x4598d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_4598d8:
    // 0x4598d8: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_4598dc:
    if (ctx->pc == 0x4598DCu) {
        ctx->pc = 0x4598DCu;
            // 0x4598dc: 0x8fa30264  lw          $v1, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->pc = 0x4598E0u;
        goto label_4598e0;
    }
    ctx->pc = 0x4598D8u;
    {
        const bool branch_taken_0x4598d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4598d8) {
            ctx->pc = 0x4598DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4598D8u;
            // 0x4598dc: 0x8fa30264  lw          $v1, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4598F0u;
            goto label_4598f0;
        }
    }
    ctx->pc = 0x4598E0u;
label_4598e0:
    // 0x4598e0: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x4598e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_4598e4:
    // 0x4598e4: 0xc0a728c  jal         func_29CA30
label_4598e8:
    if (ctx->pc == 0x4598E8u) {
        ctx->pc = 0x4598E8u;
            // 0x4598e8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4598ECu;
        goto label_4598ec;
    }
    ctx->pc = 0x4598E4u;
    SET_GPR_U32(ctx, 31, 0x4598ECu);
    ctx->pc = 0x4598E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4598E4u;
            // 0x4598e8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4598ECu; }
        if (ctx->pc != 0x4598ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4598ECu; }
        if (ctx->pc != 0x4598ECu) { return; }
    }
    ctx->pc = 0x4598ECu;
label_4598ec:
    // 0x4598ec: 0x8fa30264  lw          $v1, 0x264($sp)
    ctx->pc = 0x4598ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_4598f0:
    // 0x4598f0: 0x8e6500b8  lw          $a1, 0xB8($s3)
    ctx->pc = 0x4598f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
label_4598f4:
    // 0x4598f4: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x4598f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_4598f8:
    // 0x4598f8: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x4598f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4598fc:
    // 0x4598fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4598fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_459900:
    // 0x459900: 0xafa40264  sw          $a0, 0x264($sp)
    ctx->pc = 0x459900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 4));
label_459904:
    // 0x459904: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x459904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_459908:
    // 0x459908: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x459908u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_45990c:
    // 0x45990c: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x45990cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_459910:
    // 0x459910: 0x8fa30264  lw          $v1, 0x264($sp)
    ctx->pc = 0x459910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_459914:
    // 0x459914: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x459914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_459918:
    // 0x459918: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x459918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_45991c:
    // 0x45991c: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_459920:
    if (ctx->pc == 0x459920u) {
        ctx->pc = 0x459920u;
            // 0x459920: 0x8fa30264  lw          $v1, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->pc = 0x459924u;
        goto label_459924;
    }
    ctx->pc = 0x45991Cu;
    {
        const bool branch_taken_0x45991c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x45991c) {
            ctx->pc = 0x459920u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45991Cu;
            // 0x459920: 0x8fa30264  lw          $v1, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x459934u;
            goto label_459934;
        }
    }
    ctx->pc = 0x459924u;
label_459924:
    // 0x459924: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x459924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_459928:
    // 0x459928: 0xc0a728c  jal         func_29CA30
label_45992c:
    if (ctx->pc == 0x45992Cu) {
        ctx->pc = 0x45992Cu;
            // 0x45992c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x459930u;
        goto label_459930;
    }
    ctx->pc = 0x459928u;
    SET_GPR_U32(ctx, 31, 0x459930u);
    ctx->pc = 0x45992Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x459928u;
            // 0x45992c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459930u; }
        if (ctx->pc != 0x459930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459930u; }
        if (ctx->pc != 0x459930u) { return; }
    }
    ctx->pc = 0x459930u;
label_459930:
    // 0x459930: 0x8fa30264  lw          $v1, 0x264($sp)
    ctx->pc = 0x459930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_459934:
    // 0x459934: 0x8e6500bc  lw          $a1, 0xBC($s3)
    ctx->pc = 0x459934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
label_459938:
    // 0x459938: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x459938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_45993c:
    // 0x45993c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x45993cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_459940:
    // 0x459940: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x459940u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_459944:
    // 0x459944: 0xafa40264  sw          $a0, 0x264($sp)
    ctx->pc = 0x459944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 4));
label_459948:
    // 0x459948: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x459948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45994c:
    // 0x45994c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x45994cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_459950:
    // 0x459950: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x459950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_459954:
    // 0x459954: 0x8fa30264  lw          $v1, 0x264($sp)
    ctx->pc = 0x459954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_459958:
    // 0x459958: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x459958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_45995c:
    // 0x45995c: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x45995cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_459960:
    // 0x459960: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_459964:
    if (ctx->pc == 0x459964u) {
        ctx->pc = 0x459964u;
            // 0x459964: 0x8fa40264  lw          $a0, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->pc = 0x459968u;
        goto label_459968;
    }
    ctx->pc = 0x459960u;
    {
        const bool branch_taken_0x459960 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x459960) {
            ctx->pc = 0x459964u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x459960u;
            // 0x459964: 0x8fa40264  lw          $a0, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x459978u;
            goto label_459978;
        }
    }
    ctx->pc = 0x459968u;
label_459968:
    // 0x459968: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x459968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_45996c:
    // 0x45996c: 0xc0a728c  jal         func_29CA30
label_459970:
    if (ctx->pc == 0x459970u) {
        ctx->pc = 0x459970u;
            // 0x459970: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x459974u;
        goto label_459974;
    }
    ctx->pc = 0x45996Cu;
    SET_GPR_U32(ctx, 31, 0x459974u);
    ctx->pc = 0x459970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45996Cu;
            // 0x459970: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459974u; }
        if (ctx->pc != 0x459974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459974u; }
        if (ctx->pc != 0x459974u) { return; }
    }
    ctx->pc = 0x459974u;
label_459974:
    // 0x459974: 0x8fa40264  lw          $a0, 0x264($sp)
    ctx->pc = 0x459974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_459978:
    // 0x459978: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x459978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_45997c:
    // 0x45997c: 0x8e6800c0  lw          $t0, 0xC0($s3)
    ctx->pc = 0x45997cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
label_459980:
    // 0x459980: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x459980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_459984:
    // 0x459984: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x459984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_459988:
    // 0x459988: 0x24870001  addiu       $a3, $a0, 0x1
    ctx->pc = 0x459988u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_45998c:
    // 0x45998c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x45998cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_459990:
    // 0x459990: 0xafa70264  sw          $a3, 0x264($sp)
    ctx->pc = 0x459990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 7));
label_459994:
    // 0x459994: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x459994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_459998:
    // 0x459998: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x459998u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
label_45999c:
    // 0x45999c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x45999cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4599a0:
    // 0x4599a0: 0xc0a7a88  jal         func_29EA20
label_4599a4:
    if (ctx->pc == 0x4599A4u) {
        ctx->pc = 0x4599A4u;
            // 0x4599a4: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x4599A8u;
        goto label_4599a8;
    }
    ctx->pc = 0x4599A0u;
    SET_GPR_U32(ctx, 31, 0x4599A8u);
    ctx->pc = 0x4599A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4599A0u;
            // 0x4599a4: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4599A8u; }
        if (ctx->pc != 0x4599A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4599A8u; }
        if (ctx->pc != 0x4599A8u) { return; }
    }
    ctx->pc = 0x4599A8u;
label_4599a8:
    // 0x4599a8: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x4599a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_4599ac:
    // 0x4599ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4599acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4599b0:
    // 0x4599b0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_4599b4:
    if (ctx->pc == 0x4599B4u) {
        ctx->pc = 0x4599B4u;
            // 0x4599b4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4599B8u;
        goto label_4599b8;
    }
    ctx->pc = 0x4599B0u;
    {
        const bool branch_taken_0x4599b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4599B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4599B0u;
            // 0x4599b4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4599b0) {
            ctx->pc = 0x4599C8u;
            goto label_4599c8;
        }
    }
    ctx->pc = 0x4599B8u;
label_4599b8:
    // 0x4599b8: 0x8fa60264  lw          $a2, 0x264($sp)
    ctx->pc = 0x4599b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_4599bc:
    // 0x4599bc: 0xc081c54  jal         func_207150
label_4599c0:
    if (ctx->pc == 0x4599C0u) {
        ctx->pc = 0x4599C0u;
            // 0x4599c0: 0x8fa50260  lw          $a1, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->pc = 0x4599C4u;
        goto label_4599c4;
    }
    ctx->pc = 0x4599BCu;
    SET_GPR_U32(ctx, 31, 0x4599C4u);
    ctx->pc = 0x4599C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4599BCu;
            // 0x4599c0: 0x8fa50260  lw          $a1, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x207150u;
    if (runtime->hasFunction(0x207150u)) {
        auto targetFn = runtime->lookupFunction(0x207150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4599C4u; }
        if (ctx->pc != 0x4599C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00207150_0x207150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4599C4u; }
        if (ctx->pc != 0x4599C4u) { return; }
    }
    ctx->pc = 0x4599C4u;
label_4599c4:
    // 0x4599c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4599c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4599c8:
    // 0x4599c8: 0xae640060  sw          $a0, 0x60($s3)
    ctx->pc = 0x4599c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 4));
label_4599cc:
    // 0x4599cc: 0xc0b61c4  jal         func_2D8710
label_4599d0:
    if (ctx->pc == 0x4599D0u) {
        ctx->pc = 0x4599D0u;
            // 0x4599d0: 0x27a40260  addiu       $a0, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->pc = 0x4599D4u;
        goto label_4599d4;
    }
    ctx->pc = 0x4599CCu;
    SET_GPR_U32(ctx, 31, 0x4599D4u);
    ctx->pc = 0x4599D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4599CCu;
            // 0x4599d0: 0x27a40260  addiu       $a0, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8710u;
    if (runtime->hasFunction(0x2D8710u)) {
        auto targetFn = runtime->lookupFunction(0x2D8710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4599D4u; }
        if (ctx->pc != 0x4599D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8710_0x2d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4599D4u; }
        if (ctx->pc != 0x4599D4u) { return; }
    }
    ctx->pc = 0x4599D4u;
label_4599d4:
    // 0x4599d4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4599d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4599d8:
    // 0x4599d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4599d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4599dc:
    // 0x4599dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4599dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4599e0:
    // 0x4599e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4599e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4599e4:
    // 0x4599e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4599e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4599e8:
    // 0x4599e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4599e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4599ec:
    // 0x4599ec: 0x3e00008  jr          $ra
label_4599f0:
    if (ctx->pc == 0x4599F0u) {
        ctx->pc = 0x4599F0u;
            // 0x4599f0: 0x27bd0270  addiu       $sp, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->pc = 0x4599F4u;
        goto label_4599f4;
    }
    ctx->pc = 0x4599ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4599F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4599ECu;
            // 0x4599f0: 0x27bd0270  addiu       $sp, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4599F4u;
label_4599f4:
    // 0x4599f4: 0x0  nop
    ctx->pc = 0x4599f4u;
    // NOP
label_4599f8:
    // 0x4599f8: 0x0  nop
    ctx->pc = 0x4599f8u;
    // NOP
label_4599fc:
    // 0x4599fc: 0x0  nop
    ctx->pc = 0x4599fcu;
    // NOP
label_459a00:
    // 0x459a00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x459a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_459a04:
    // 0x459a04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x459a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_459a08:
    // 0x459a08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x459a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_459a0c:
    // 0x459a0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x459a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_459a10:
    // 0x459a10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x459a10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_459a14:
    // 0x459a14: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
label_459a18:
    if (ctx->pc == 0x459A18u) {
        ctx->pc = 0x459A18u;
            // 0x459a18: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x459A1Cu;
        goto label_459a1c;
    }
    ctx->pc = 0x459A14u;
    {
        const bool branch_taken_0x459a14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x459A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x459A14u;
            // 0x459a18: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x459a14) {
            ctx->pc = 0x459AB4u;
            goto label_459ab4;
        }
    }
    ctx->pc = 0x459A1Cu;
label_459a1c:
    // 0x459a1c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x459a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_459a20:
    // 0x459a20: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x459a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_459a24:
    // 0x459a24: 0x2463e390  addiu       $v1, $v1, -0x1C70
    ctx->pc = 0x459a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960016));
label_459a28:
    // 0x459a28: 0x2442e3c8  addiu       $v0, $v0, -0x1C38
    ctx->pc = 0x459a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960072));
label_459a2c:
    // 0x459a2c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x459a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_459a30:
    // 0x459a30: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_459a34:
    if (ctx->pc == 0x459A34u) {
        ctx->pc = 0x459A34u;
            // 0x459a34: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x459A38u;
        goto label_459a38;
    }
    ctx->pc = 0x459A30u;
    {
        const bool branch_taken_0x459a30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x459A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x459A30u;
            // 0x459a34: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x459a30) {
            ctx->pc = 0x459A9Cu;
            goto label_459a9c;
        }
    }
    ctx->pc = 0x459A38u;
label_459a38:
    // 0x459a38: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x459a38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_459a3c:
    // 0x459a3c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x459a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_459a40:
    // 0x459a40: 0x2463e340  addiu       $v1, $v1, -0x1CC0
    ctx->pc = 0x459a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959936));
label_459a44:
    // 0x459a44: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x459a44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_459a48:
    // 0x459a48: 0x2442e378  addiu       $v0, $v0, -0x1C88
    ctx->pc = 0x459a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959992));
label_459a4c:
    // 0x459a4c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x459a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_459a50:
    // 0x459a50: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x459a50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_459a54:
    // 0x459a54: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x459a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_459a58:
    // 0x459a58: 0xc0407c0  jal         func_101F00
label_459a5c:
    if (ctx->pc == 0x459A5Cu) {
        ctx->pc = 0x459A5Cu;
            // 0x459a5c: 0x24a58cc0  addiu       $a1, $a1, -0x7340 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937792));
        ctx->pc = 0x459A60u;
        goto label_459a60;
    }
    ctx->pc = 0x459A58u;
    SET_GPR_U32(ctx, 31, 0x459A60u);
    ctx->pc = 0x459A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x459A58u;
            // 0x459a5c: 0x24a58cc0  addiu       $a1, $a1, -0x7340 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459A60u; }
        if (ctx->pc != 0x459A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459A60u; }
        if (ctx->pc != 0x459A60u) { return; }
    }
    ctx->pc = 0x459A60u;
label_459a60:
    // 0x459a60: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x459a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_459a64:
    // 0x459a64: 0xc0a8c98  jal         func_2A3260
label_459a68:
    if (ctx->pc == 0x459A68u) {
        ctx->pc = 0x459A68u;
            // 0x459a68: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x459A6Cu;
        goto label_459a6c;
    }
    ctx->pc = 0x459A64u;
    SET_GPR_U32(ctx, 31, 0x459A6Cu);
    ctx->pc = 0x459A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x459A64u;
            // 0x459a68: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459A6Cu; }
        if (ctx->pc != 0x459A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459A6Cu; }
        if (ctx->pc != 0x459A6Cu) { return; }
    }
    ctx->pc = 0x459A6Cu;
label_459a6c:
    // 0x459a6c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x459a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_459a70:
    // 0x459a70: 0xc1166cc  jal         func_459B30
label_459a74:
    if (ctx->pc == 0x459A74u) {
        ctx->pc = 0x459A74u;
            // 0x459a74: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x459A78u;
        goto label_459a78;
    }
    ctx->pc = 0x459A70u;
    SET_GPR_U32(ctx, 31, 0x459A78u);
    ctx->pc = 0x459A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x459A70u;
            // 0x459a74: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x459B30u;
    if (runtime->hasFunction(0x459B30u)) {
        auto targetFn = runtime->lookupFunction(0x459B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459A78u; }
        if (ctx->pc != 0x459A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00459B30_0x459b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459A78u; }
        if (ctx->pc != 0x459A78u) { return; }
    }
    ctx->pc = 0x459A78u;
label_459a78:
    // 0x459a78: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x459a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_459a7c:
    // 0x459a7c: 0xc1166cc  jal         func_459B30
label_459a80:
    if (ctx->pc == 0x459A80u) {
        ctx->pc = 0x459A80u;
            // 0x459a80: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x459A84u;
        goto label_459a84;
    }
    ctx->pc = 0x459A7Cu;
    SET_GPR_U32(ctx, 31, 0x459A84u);
    ctx->pc = 0x459A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x459A7Cu;
            // 0x459a80: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x459B30u;
    if (runtime->hasFunction(0x459B30u)) {
        auto targetFn = runtime->lookupFunction(0x459B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459A84u; }
        if (ctx->pc != 0x459A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00459B30_0x459b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459A84u; }
        if (ctx->pc != 0x459A84u) { return; }
    }
    ctx->pc = 0x459A84u;
label_459a84:
    // 0x459a84: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x459a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
label_459a88:
    // 0x459a88: 0xc1166b4  jal         func_459AD0
label_459a8c:
    if (ctx->pc == 0x459A8Cu) {
        ctx->pc = 0x459A8Cu;
            // 0x459a8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x459A90u;
        goto label_459a90;
    }
    ctx->pc = 0x459A88u;
    SET_GPR_U32(ctx, 31, 0x459A90u);
    ctx->pc = 0x459A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x459A88u;
            // 0x459a8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x459AD0u;
    if (runtime->hasFunction(0x459AD0u)) {
        auto targetFn = runtime->lookupFunction(0x459AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459A90u; }
        if (ctx->pc != 0x459A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00459AD0_0x459ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459A90u; }
        if (ctx->pc != 0x459A90u) { return; }
    }
    ctx->pc = 0x459A90u;
label_459a90:
    // 0x459a90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x459a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_459a94:
    // 0x459a94: 0xc0ae1c0  jal         func_2B8700
label_459a98:
    if (ctx->pc == 0x459A98u) {
        ctx->pc = 0x459A98u;
            // 0x459a98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x459A9Cu;
        goto label_459a9c;
    }
    ctx->pc = 0x459A94u;
    SET_GPR_U32(ctx, 31, 0x459A9Cu);
    ctx->pc = 0x459A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x459A94u;
            // 0x459a98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459A9Cu; }
        if (ctx->pc != 0x459A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459A9Cu; }
        if (ctx->pc != 0x459A9Cu) { return; }
    }
    ctx->pc = 0x459A9Cu;
label_459a9c:
    // 0x459a9c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x459a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_459aa0:
    // 0x459aa0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x459aa0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_459aa4:
    // 0x459aa4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_459aa8:
    if (ctx->pc == 0x459AA8u) {
        ctx->pc = 0x459AA8u;
            // 0x459aa8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x459AACu;
        goto label_459aac;
    }
    ctx->pc = 0x459AA4u;
    {
        const bool branch_taken_0x459aa4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x459aa4) {
            ctx->pc = 0x459AA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x459AA4u;
            // 0x459aa8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x459AB8u;
            goto label_459ab8;
        }
    }
    ctx->pc = 0x459AACu;
label_459aac:
    // 0x459aac: 0xc0400a8  jal         func_1002A0
label_459ab0:
    if (ctx->pc == 0x459AB0u) {
        ctx->pc = 0x459AB0u;
            // 0x459ab0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x459AB4u;
        goto label_459ab4;
    }
    ctx->pc = 0x459AACu;
    SET_GPR_U32(ctx, 31, 0x459AB4u);
    ctx->pc = 0x459AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x459AACu;
            // 0x459ab0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459AB4u; }
        if (ctx->pc != 0x459AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459AB4u; }
        if (ctx->pc != 0x459AB4u) { return; }
    }
    ctx->pc = 0x459AB4u;
label_459ab4:
    // 0x459ab4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x459ab4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_459ab8:
    // 0x459ab8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x459ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_459abc:
    // 0x459abc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x459abcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_459ac0:
    // 0x459ac0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x459ac0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_459ac4:
    // 0x459ac4: 0x3e00008  jr          $ra
label_459ac8:
    if (ctx->pc == 0x459AC8u) {
        ctx->pc = 0x459AC8u;
            // 0x459ac8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x459ACCu;
        goto label_459acc;
    }
    ctx->pc = 0x459AC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x459AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x459AC4u;
            // 0x459ac8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x459ACCu;
label_459acc:
    // 0x459acc: 0x0  nop
    ctx->pc = 0x459accu;
    // NOP
}
