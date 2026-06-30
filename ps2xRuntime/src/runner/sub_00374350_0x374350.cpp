#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00374350
// Address: 0x374350 - 0x374c60
void sub_00374350_0x374350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374350_0x374350");
#endif

    switch (ctx->pc) {
        case 0x374350u: goto label_374350;
        case 0x374354u: goto label_374354;
        case 0x374358u: goto label_374358;
        case 0x37435cu: goto label_37435c;
        case 0x374360u: goto label_374360;
        case 0x374364u: goto label_374364;
        case 0x374368u: goto label_374368;
        case 0x37436cu: goto label_37436c;
        case 0x374370u: goto label_374370;
        case 0x374374u: goto label_374374;
        case 0x374378u: goto label_374378;
        case 0x37437cu: goto label_37437c;
        case 0x374380u: goto label_374380;
        case 0x374384u: goto label_374384;
        case 0x374388u: goto label_374388;
        case 0x37438cu: goto label_37438c;
        case 0x374390u: goto label_374390;
        case 0x374394u: goto label_374394;
        case 0x374398u: goto label_374398;
        case 0x37439cu: goto label_37439c;
        case 0x3743a0u: goto label_3743a0;
        case 0x3743a4u: goto label_3743a4;
        case 0x3743a8u: goto label_3743a8;
        case 0x3743acu: goto label_3743ac;
        case 0x3743b0u: goto label_3743b0;
        case 0x3743b4u: goto label_3743b4;
        case 0x3743b8u: goto label_3743b8;
        case 0x3743bcu: goto label_3743bc;
        case 0x3743c0u: goto label_3743c0;
        case 0x3743c4u: goto label_3743c4;
        case 0x3743c8u: goto label_3743c8;
        case 0x3743ccu: goto label_3743cc;
        case 0x3743d0u: goto label_3743d0;
        case 0x3743d4u: goto label_3743d4;
        case 0x3743d8u: goto label_3743d8;
        case 0x3743dcu: goto label_3743dc;
        case 0x3743e0u: goto label_3743e0;
        case 0x3743e4u: goto label_3743e4;
        case 0x3743e8u: goto label_3743e8;
        case 0x3743ecu: goto label_3743ec;
        case 0x3743f0u: goto label_3743f0;
        case 0x3743f4u: goto label_3743f4;
        case 0x3743f8u: goto label_3743f8;
        case 0x3743fcu: goto label_3743fc;
        case 0x374400u: goto label_374400;
        case 0x374404u: goto label_374404;
        case 0x374408u: goto label_374408;
        case 0x37440cu: goto label_37440c;
        case 0x374410u: goto label_374410;
        case 0x374414u: goto label_374414;
        case 0x374418u: goto label_374418;
        case 0x37441cu: goto label_37441c;
        case 0x374420u: goto label_374420;
        case 0x374424u: goto label_374424;
        case 0x374428u: goto label_374428;
        case 0x37442cu: goto label_37442c;
        case 0x374430u: goto label_374430;
        case 0x374434u: goto label_374434;
        case 0x374438u: goto label_374438;
        case 0x37443cu: goto label_37443c;
        case 0x374440u: goto label_374440;
        case 0x374444u: goto label_374444;
        case 0x374448u: goto label_374448;
        case 0x37444cu: goto label_37444c;
        case 0x374450u: goto label_374450;
        case 0x374454u: goto label_374454;
        case 0x374458u: goto label_374458;
        case 0x37445cu: goto label_37445c;
        case 0x374460u: goto label_374460;
        case 0x374464u: goto label_374464;
        case 0x374468u: goto label_374468;
        case 0x37446cu: goto label_37446c;
        case 0x374470u: goto label_374470;
        case 0x374474u: goto label_374474;
        case 0x374478u: goto label_374478;
        case 0x37447cu: goto label_37447c;
        case 0x374480u: goto label_374480;
        case 0x374484u: goto label_374484;
        case 0x374488u: goto label_374488;
        case 0x37448cu: goto label_37448c;
        case 0x374490u: goto label_374490;
        case 0x374494u: goto label_374494;
        case 0x374498u: goto label_374498;
        case 0x37449cu: goto label_37449c;
        case 0x3744a0u: goto label_3744a0;
        case 0x3744a4u: goto label_3744a4;
        case 0x3744a8u: goto label_3744a8;
        case 0x3744acu: goto label_3744ac;
        case 0x3744b0u: goto label_3744b0;
        case 0x3744b4u: goto label_3744b4;
        case 0x3744b8u: goto label_3744b8;
        case 0x3744bcu: goto label_3744bc;
        case 0x3744c0u: goto label_3744c0;
        case 0x3744c4u: goto label_3744c4;
        case 0x3744c8u: goto label_3744c8;
        case 0x3744ccu: goto label_3744cc;
        case 0x3744d0u: goto label_3744d0;
        case 0x3744d4u: goto label_3744d4;
        case 0x3744d8u: goto label_3744d8;
        case 0x3744dcu: goto label_3744dc;
        case 0x3744e0u: goto label_3744e0;
        case 0x3744e4u: goto label_3744e4;
        case 0x3744e8u: goto label_3744e8;
        case 0x3744ecu: goto label_3744ec;
        case 0x3744f0u: goto label_3744f0;
        case 0x3744f4u: goto label_3744f4;
        case 0x3744f8u: goto label_3744f8;
        case 0x3744fcu: goto label_3744fc;
        case 0x374500u: goto label_374500;
        case 0x374504u: goto label_374504;
        case 0x374508u: goto label_374508;
        case 0x37450cu: goto label_37450c;
        case 0x374510u: goto label_374510;
        case 0x374514u: goto label_374514;
        case 0x374518u: goto label_374518;
        case 0x37451cu: goto label_37451c;
        case 0x374520u: goto label_374520;
        case 0x374524u: goto label_374524;
        case 0x374528u: goto label_374528;
        case 0x37452cu: goto label_37452c;
        case 0x374530u: goto label_374530;
        case 0x374534u: goto label_374534;
        case 0x374538u: goto label_374538;
        case 0x37453cu: goto label_37453c;
        case 0x374540u: goto label_374540;
        case 0x374544u: goto label_374544;
        case 0x374548u: goto label_374548;
        case 0x37454cu: goto label_37454c;
        case 0x374550u: goto label_374550;
        case 0x374554u: goto label_374554;
        case 0x374558u: goto label_374558;
        case 0x37455cu: goto label_37455c;
        case 0x374560u: goto label_374560;
        case 0x374564u: goto label_374564;
        case 0x374568u: goto label_374568;
        case 0x37456cu: goto label_37456c;
        case 0x374570u: goto label_374570;
        case 0x374574u: goto label_374574;
        case 0x374578u: goto label_374578;
        case 0x37457cu: goto label_37457c;
        case 0x374580u: goto label_374580;
        case 0x374584u: goto label_374584;
        case 0x374588u: goto label_374588;
        case 0x37458cu: goto label_37458c;
        case 0x374590u: goto label_374590;
        case 0x374594u: goto label_374594;
        case 0x374598u: goto label_374598;
        case 0x37459cu: goto label_37459c;
        case 0x3745a0u: goto label_3745a0;
        case 0x3745a4u: goto label_3745a4;
        case 0x3745a8u: goto label_3745a8;
        case 0x3745acu: goto label_3745ac;
        case 0x3745b0u: goto label_3745b0;
        case 0x3745b4u: goto label_3745b4;
        case 0x3745b8u: goto label_3745b8;
        case 0x3745bcu: goto label_3745bc;
        case 0x3745c0u: goto label_3745c0;
        case 0x3745c4u: goto label_3745c4;
        case 0x3745c8u: goto label_3745c8;
        case 0x3745ccu: goto label_3745cc;
        case 0x3745d0u: goto label_3745d0;
        case 0x3745d4u: goto label_3745d4;
        case 0x3745d8u: goto label_3745d8;
        case 0x3745dcu: goto label_3745dc;
        case 0x3745e0u: goto label_3745e0;
        case 0x3745e4u: goto label_3745e4;
        case 0x3745e8u: goto label_3745e8;
        case 0x3745ecu: goto label_3745ec;
        case 0x3745f0u: goto label_3745f0;
        case 0x3745f4u: goto label_3745f4;
        case 0x3745f8u: goto label_3745f8;
        case 0x3745fcu: goto label_3745fc;
        case 0x374600u: goto label_374600;
        case 0x374604u: goto label_374604;
        case 0x374608u: goto label_374608;
        case 0x37460cu: goto label_37460c;
        case 0x374610u: goto label_374610;
        case 0x374614u: goto label_374614;
        case 0x374618u: goto label_374618;
        case 0x37461cu: goto label_37461c;
        case 0x374620u: goto label_374620;
        case 0x374624u: goto label_374624;
        case 0x374628u: goto label_374628;
        case 0x37462cu: goto label_37462c;
        case 0x374630u: goto label_374630;
        case 0x374634u: goto label_374634;
        case 0x374638u: goto label_374638;
        case 0x37463cu: goto label_37463c;
        case 0x374640u: goto label_374640;
        case 0x374644u: goto label_374644;
        case 0x374648u: goto label_374648;
        case 0x37464cu: goto label_37464c;
        case 0x374650u: goto label_374650;
        case 0x374654u: goto label_374654;
        case 0x374658u: goto label_374658;
        case 0x37465cu: goto label_37465c;
        case 0x374660u: goto label_374660;
        case 0x374664u: goto label_374664;
        case 0x374668u: goto label_374668;
        case 0x37466cu: goto label_37466c;
        case 0x374670u: goto label_374670;
        case 0x374674u: goto label_374674;
        case 0x374678u: goto label_374678;
        case 0x37467cu: goto label_37467c;
        case 0x374680u: goto label_374680;
        case 0x374684u: goto label_374684;
        case 0x374688u: goto label_374688;
        case 0x37468cu: goto label_37468c;
        case 0x374690u: goto label_374690;
        case 0x374694u: goto label_374694;
        case 0x374698u: goto label_374698;
        case 0x37469cu: goto label_37469c;
        case 0x3746a0u: goto label_3746a0;
        case 0x3746a4u: goto label_3746a4;
        case 0x3746a8u: goto label_3746a8;
        case 0x3746acu: goto label_3746ac;
        case 0x3746b0u: goto label_3746b0;
        case 0x3746b4u: goto label_3746b4;
        case 0x3746b8u: goto label_3746b8;
        case 0x3746bcu: goto label_3746bc;
        case 0x3746c0u: goto label_3746c0;
        case 0x3746c4u: goto label_3746c4;
        case 0x3746c8u: goto label_3746c8;
        case 0x3746ccu: goto label_3746cc;
        case 0x3746d0u: goto label_3746d0;
        case 0x3746d4u: goto label_3746d4;
        case 0x3746d8u: goto label_3746d8;
        case 0x3746dcu: goto label_3746dc;
        case 0x3746e0u: goto label_3746e0;
        case 0x3746e4u: goto label_3746e4;
        case 0x3746e8u: goto label_3746e8;
        case 0x3746ecu: goto label_3746ec;
        case 0x3746f0u: goto label_3746f0;
        case 0x3746f4u: goto label_3746f4;
        case 0x3746f8u: goto label_3746f8;
        case 0x3746fcu: goto label_3746fc;
        case 0x374700u: goto label_374700;
        case 0x374704u: goto label_374704;
        case 0x374708u: goto label_374708;
        case 0x37470cu: goto label_37470c;
        case 0x374710u: goto label_374710;
        case 0x374714u: goto label_374714;
        case 0x374718u: goto label_374718;
        case 0x37471cu: goto label_37471c;
        case 0x374720u: goto label_374720;
        case 0x374724u: goto label_374724;
        case 0x374728u: goto label_374728;
        case 0x37472cu: goto label_37472c;
        case 0x374730u: goto label_374730;
        case 0x374734u: goto label_374734;
        case 0x374738u: goto label_374738;
        case 0x37473cu: goto label_37473c;
        case 0x374740u: goto label_374740;
        case 0x374744u: goto label_374744;
        case 0x374748u: goto label_374748;
        case 0x37474cu: goto label_37474c;
        case 0x374750u: goto label_374750;
        case 0x374754u: goto label_374754;
        case 0x374758u: goto label_374758;
        case 0x37475cu: goto label_37475c;
        case 0x374760u: goto label_374760;
        case 0x374764u: goto label_374764;
        case 0x374768u: goto label_374768;
        case 0x37476cu: goto label_37476c;
        case 0x374770u: goto label_374770;
        case 0x374774u: goto label_374774;
        case 0x374778u: goto label_374778;
        case 0x37477cu: goto label_37477c;
        case 0x374780u: goto label_374780;
        case 0x374784u: goto label_374784;
        case 0x374788u: goto label_374788;
        case 0x37478cu: goto label_37478c;
        case 0x374790u: goto label_374790;
        case 0x374794u: goto label_374794;
        case 0x374798u: goto label_374798;
        case 0x37479cu: goto label_37479c;
        case 0x3747a0u: goto label_3747a0;
        case 0x3747a4u: goto label_3747a4;
        case 0x3747a8u: goto label_3747a8;
        case 0x3747acu: goto label_3747ac;
        case 0x3747b0u: goto label_3747b0;
        case 0x3747b4u: goto label_3747b4;
        case 0x3747b8u: goto label_3747b8;
        case 0x3747bcu: goto label_3747bc;
        case 0x3747c0u: goto label_3747c0;
        case 0x3747c4u: goto label_3747c4;
        case 0x3747c8u: goto label_3747c8;
        case 0x3747ccu: goto label_3747cc;
        case 0x3747d0u: goto label_3747d0;
        case 0x3747d4u: goto label_3747d4;
        case 0x3747d8u: goto label_3747d8;
        case 0x3747dcu: goto label_3747dc;
        case 0x3747e0u: goto label_3747e0;
        case 0x3747e4u: goto label_3747e4;
        case 0x3747e8u: goto label_3747e8;
        case 0x3747ecu: goto label_3747ec;
        case 0x3747f0u: goto label_3747f0;
        case 0x3747f4u: goto label_3747f4;
        case 0x3747f8u: goto label_3747f8;
        case 0x3747fcu: goto label_3747fc;
        case 0x374800u: goto label_374800;
        case 0x374804u: goto label_374804;
        case 0x374808u: goto label_374808;
        case 0x37480cu: goto label_37480c;
        case 0x374810u: goto label_374810;
        case 0x374814u: goto label_374814;
        case 0x374818u: goto label_374818;
        case 0x37481cu: goto label_37481c;
        case 0x374820u: goto label_374820;
        case 0x374824u: goto label_374824;
        case 0x374828u: goto label_374828;
        case 0x37482cu: goto label_37482c;
        case 0x374830u: goto label_374830;
        case 0x374834u: goto label_374834;
        case 0x374838u: goto label_374838;
        case 0x37483cu: goto label_37483c;
        case 0x374840u: goto label_374840;
        case 0x374844u: goto label_374844;
        case 0x374848u: goto label_374848;
        case 0x37484cu: goto label_37484c;
        case 0x374850u: goto label_374850;
        case 0x374854u: goto label_374854;
        case 0x374858u: goto label_374858;
        case 0x37485cu: goto label_37485c;
        case 0x374860u: goto label_374860;
        case 0x374864u: goto label_374864;
        case 0x374868u: goto label_374868;
        case 0x37486cu: goto label_37486c;
        case 0x374870u: goto label_374870;
        case 0x374874u: goto label_374874;
        case 0x374878u: goto label_374878;
        case 0x37487cu: goto label_37487c;
        case 0x374880u: goto label_374880;
        case 0x374884u: goto label_374884;
        case 0x374888u: goto label_374888;
        case 0x37488cu: goto label_37488c;
        case 0x374890u: goto label_374890;
        case 0x374894u: goto label_374894;
        case 0x374898u: goto label_374898;
        case 0x37489cu: goto label_37489c;
        case 0x3748a0u: goto label_3748a0;
        case 0x3748a4u: goto label_3748a4;
        case 0x3748a8u: goto label_3748a8;
        case 0x3748acu: goto label_3748ac;
        case 0x3748b0u: goto label_3748b0;
        case 0x3748b4u: goto label_3748b4;
        case 0x3748b8u: goto label_3748b8;
        case 0x3748bcu: goto label_3748bc;
        case 0x3748c0u: goto label_3748c0;
        case 0x3748c4u: goto label_3748c4;
        case 0x3748c8u: goto label_3748c8;
        case 0x3748ccu: goto label_3748cc;
        case 0x3748d0u: goto label_3748d0;
        case 0x3748d4u: goto label_3748d4;
        case 0x3748d8u: goto label_3748d8;
        case 0x3748dcu: goto label_3748dc;
        case 0x3748e0u: goto label_3748e0;
        case 0x3748e4u: goto label_3748e4;
        case 0x3748e8u: goto label_3748e8;
        case 0x3748ecu: goto label_3748ec;
        case 0x3748f0u: goto label_3748f0;
        case 0x3748f4u: goto label_3748f4;
        case 0x3748f8u: goto label_3748f8;
        case 0x3748fcu: goto label_3748fc;
        case 0x374900u: goto label_374900;
        case 0x374904u: goto label_374904;
        case 0x374908u: goto label_374908;
        case 0x37490cu: goto label_37490c;
        case 0x374910u: goto label_374910;
        case 0x374914u: goto label_374914;
        case 0x374918u: goto label_374918;
        case 0x37491cu: goto label_37491c;
        case 0x374920u: goto label_374920;
        case 0x374924u: goto label_374924;
        case 0x374928u: goto label_374928;
        case 0x37492cu: goto label_37492c;
        case 0x374930u: goto label_374930;
        case 0x374934u: goto label_374934;
        case 0x374938u: goto label_374938;
        case 0x37493cu: goto label_37493c;
        case 0x374940u: goto label_374940;
        case 0x374944u: goto label_374944;
        case 0x374948u: goto label_374948;
        case 0x37494cu: goto label_37494c;
        case 0x374950u: goto label_374950;
        case 0x374954u: goto label_374954;
        case 0x374958u: goto label_374958;
        case 0x37495cu: goto label_37495c;
        case 0x374960u: goto label_374960;
        case 0x374964u: goto label_374964;
        case 0x374968u: goto label_374968;
        case 0x37496cu: goto label_37496c;
        case 0x374970u: goto label_374970;
        case 0x374974u: goto label_374974;
        case 0x374978u: goto label_374978;
        case 0x37497cu: goto label_37497c;
        case 0x374980u: goto label_374980;
        case 0x374984u: goto label_374984;
        case 0x374988u: goto label_374988;
        case 0x37498cu: goto label_37498c;
        case 0x374990u: goto label_374990;
        case 0x374994u: goto label_374994;
        case 0x374998u: goto label_374998;
        case 0x37499cu: goto label_37499c;
        case 0x3749a0u: goto label_3749a0;
        case 0x3749a4u: goto label_3749a4;
        case 0x3749a8u: goto label_3749a8;
        case 0x3749acu: goto label_3749ac;
        case 0x3749b0u: goto label_3749b0;
        case 0x3749b4u: goto label_3749b4;
        case 0x3749b8u: goto label_3749b8;
        case 0x3749bcu: goto label_3749bc;
        case 0x3749c0u: goto label_3749c0;
        case 0x3749c4u: goto label_3749c4;
        case 0x3749c8u: goto label_3749c8;
        case 0x3749ccu: goto label_3749cc;
        case 0x3749d0u: goto label_3749d0;
        case 0x3749d4u: goto label_3749d4;
        case 0x3749d8u: goto label_3749d8;
        case 0x3749dcu: goto label_3749dc;
        case 0x3749e0u: goto label_3749e0;
        case 0x3749e4u: goto label_3749e4;
        case 0x3749e8u: goto label_3749e8;
        case 0x3749ecu: goto label_3749ec;
        case 0x3749f0u: goto label_3749f0;
        case 0x3749f4u: goto label_3749f4;
        case 0x3749f8u: goto label_3749f8;
        case 0x3749fcu: goto label_3749fc;
        case 0x374a00u: goto label_374a00;
        case 0x374a04u: goto label_374a04;
        case 0x374a08u: goto label_374a08;
        case 0x374a0cu: goto label_374a0c;
        case 0x374a10u: goto label_374a10;
        case 0x374a14u: goto label_374a14;
        case 0x374a18u: goto label_374a18;
        case 0x374a1cu: goto label_374a1c;
        case 0x374a20u: goto label_374a20;
        case 0x374a24u: goto label_374a24;
        case 0x374a28u: goto label_374a28;
        case 0x374a2cu: goto label_374a2c;
        case 0x374a30u: goto label_374a30;
        case 0x374a34u: goto label_374a34;
        case 0x374a38u: goto label_374a38;
        case 0x374a3cu: goto label_374a3c;
        case 0x374a40u: goto label_374a40;
        case 0x374a44u: goto label_374a44;
        case 0x374a48u: goto label_374a48;
        case 0x374a4cu: goto label_374a4c;
        case 0x374a50u: goto label_374a50;
        case 0x374a54u: goto label_374a54;
        case 0x374a58u: goto label_374a58;
        case 0x374a5cu: goto label_374a5c;
        case 0x374a60u: goto label_374a60;
        case 0x374a64u: goto label_374a64;
        case 0x374a68u: goto label_374a68;
        case 0x374a6cu: goto label_374a6c;
        case 0x374a70u: goto label_374a70;
        case 0x374a74u: goto label_374a74;
        case 0x374a78u: goto label_374a78;
        case 0x374a7cu: goto label_374a7c;
        case 0x374a80u: goto label_374a80;
        case 0x374a84u: goto label_374a84;
        case 0x374a88u: goto label_374a88;
        case 0x374a8cu: goto label_374a8c;
        case 0x374a90u: goto label_374a90;
        case 0x374a94u: goto label_374a94;
        case 0x374a98u: goto label_374a98;
        case 0x374a9cu: goto label_374a9c;
        case 0x374aa0u: goto label_374aa0;
        case 0x374aa4u: goto label_374aa4;
        case 0x374aa8u: goto label_374aa8;
        case 0x374aacu: goto label_374aac;
        case 0x374ab0u: goto label_374ab0;
        case 0x374ab4u: goto label_374ab4;
        case 0x374ab8u: goto label_374ab8;
        case 0x374abcu: goto label_374abc;
        case 0x374ac0u: goto label_374ac0;
        case 0x374ac4u: goto label_374ac4;
        case 0x374ac8u: goto label_374ac8;
        case 0x374accu: goto label_374acc;
        case 0x374ad0u: goto label_374ad0;
        case 0x374ad4u: goto label_374ad4;
        case 0x374ad8u: goto label_374ad8;
        case 0x374adcu: goto label_374adc;
        case 0x374ae0u: goto label_374ae0;
        case 0x374ae4u: goto label_374ae4;
        case 0x374ae8u: goto label_374ae8;
        case 0x374aecu: goto label_374aec;
        case 0x374af0u: goto label_374af0;
        case 0x374af4u: goto label_374af4;
        case 0x374af8u: goto label_374af8;
        case 0x374afcu: goto label_374afc;
        case 0x374b00u: goto label_374b00;
        case 0x374b04u: goto label_374b04;
        case 0x374b08u: goto label_374b08;
        case 0x374b0cu: goto label_374b0c;
        case 0x374b10u: goto label_374b10;
        case 0x374b14u: goto label_374b14;
        case 0x374b18u: goto label_374b18;
        case 0x374b1cu: goto label_374b1c;
        case 0x374b20u: goto label_374b20;
        case 0x374b24u: goto label_374b24;
        case 0x374b28u: goto label_374b28;
        case 0x374b2cu: goto label_374b2c;
        case 0x374b30u: goto label_374b30;
        case 0x374b34u: goto label_374b34;
        case 0x374b38u: goto label_374b38;
        case 0x374b3cu: goto label_374b3c;
        case 0x374b40u: goto label_374b40;
        case 0x374b44u: goto label_374b44;
        case 0x374b48u: goto label_374b48;
        case 0x374b4cu: goto label_374b4c;
        case 0x374b50u: goto label_374b50;
        case 0x374b54u: goto label_374b54;
        case 0x374b58u: goto label_374b58;
        case 0x374b5cu: goto label_374b5c;
        case 0x374b60u: goto label_374b60;
        case 0x374b64u: goto label_374b64;
        case 0x374b68u: goto label_374b68;
        case 0x374b6cu: goto label_374b6c;
        case 0x374b70u: goto label_374b70;
        case 0x374b74u: goto label_374b74;
        case 0x374b78u: goto label_374b78;
        case 0x374b7cu: goto label_374b7c;
        case 0x374b80u: goto label_374b80;
        case 0x374b84u: goto label_374b84;
        case 0x374b88u: goto label_374b88;
        case 0x374b8cu: goto label_374b8c;
        case 0x374b90u: goto label_374b90;
        case 0x374b94u: goto label_374b94;
        case 0x374b98u: goto label_374b98;
        case 0x374b9cu: goto label_374b9c;
        case 0x374ba0u: goto label_374ba0;
        case 0x374ba4u: goto label_374ba4;
        case 0x374ba8u: goto label_374ba8;
        case 0x374bacu: goto label_374bac;
        case 0x374bb0u: goto label_374bb0;
        case 0x374bb4u: goto label_374bb4;
        case 0x374bb8u: goto label_374bb8;
        case 0x374bbcu: goto label_374bbc;
        case 0x374bc0u: goto label_374bc0;
        case 0x374bc4u: goto label_374bc4;
        case 0x374bc8u: goto label_374bc8;
        case 0x374bccu: goto label_374bcc;
        case 0x374bd0u: goto label_374bd0;
        case 0x374bd4u: goto label_374bd4;
        case 0x374bd8u: goto label_374bd8;
        case 0x374bdcu: goto label_374bdc;
        case 0x374be0u: goto label_374be0;
        case 0x374be4u: goto label_374be4;
        case 0x374be8u: goto label_374be8;
        case 0x374becu: goto label_374bec;
        case 0x374bf0u: goto label_374bf0;
        case 0x374bf4u: goto label_374bf4;
        case 0x374bf8u: goto label_374bf8;
        case 0x374bfcu: goto label_374bfc;
        case 0x374c00u: goto label_374c00;
        case 0x374c04u: goto label_374c04;
        case 0x374c08u: goto label_374c08;
        case 0x374c0cu: goto label_374c0c;
        case 0x374c10u: goto label_374c10;
        case 0x374c14u: goto label_374c14;
        case 0x374c18u: goto label_374c18;
        case 0x374c1cu: goto label_374c1c;
        case 0x374c20u: goto label_374c20;
        case 0x374c24u: goto label_374c24;
        case 0x374c28u: goto label_374c28;
        case 0x374c2cu: goto label_374c2c;
        case 0x374c30u: goto label_374c30;
        case 0x374c34u: goto label_374c34;
        case 0x374c38u: goto label_374c38;
        case 0x374c3cu: goto label_374c3c;
        case 0x374c40u: goto label_374c40;
        case 0x374c44u: goto label_374c44;
        case 0x374c48u: goto label_374c48;
        case 0x374c4cu: goto label_374c4c;
        case 0x374c50u: goto label_374c50;
        case 0x374c54u: goto label_374c54;
        case 0x374c58u: goto label_374c58;
        case 0x374c5cu: goto label_374c5c;
        default: break;
    }

    ctx->pc = 0x374350u;

label_374350:
    // 0x374350: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x374350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_374354:
    // 0x374354: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x374354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_374358:
    // 0x374358: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x374358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_37435c:
    // 0x37435c: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x37435cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_374360:
    // 0x374360: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x374360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_374364:
    // 0x374364: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x374364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_374368:
    // 0x374368: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x374368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_37436c:
    // 0x37436c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x37436cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_374370:
    // 0x374370: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x374370u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_374374:
    // 0x374374: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x374374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_374378:
    // 0x374378: 0x26110004  addiu       $s1, $s0, 0x4
    ctx->pc = 0x374378u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_37437c:
    // 0x37437c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x37437cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_374380:
    // 0x374380: 0xc10ca68  jal         func_4329A0
label_374384:
    if (ctx->pc == 0x374384u) {
        ctx->pc = 0x374384u;
            // 0x374384: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x374388u;
        goto label_374388;
    }
    ctx->pc = 0x374380u;
    SET_GPR_U32(ctx, 31, 0x374388u);
    ctx->pc = 0x374384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374380u;
            // 0x374384: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374388u; }
        if (ctx->pc != 0x374388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374388u; }
        if (ctx->pc != 0x374388u) { return; }
    }
    ctx->pc = 0x374388u;
label_374388:
    // 0x374388: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x374388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_37438c:
    // 0x37438c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37438cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_374390:
    // 0x374390: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x374390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_374394:
    // 0x374394: 0x2442cf40  addiu       $v0, $v0, -0x30C0
    ctx->pc = 0x374394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954816));
label_374398:
    // 0x374398: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x374398u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_37439c:
    // 0x37439c: 0x26040440  addiu       $a0, $s0, 0x440
    ctx->pc = 0x37439cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
label_3743a0:
    // 0x3743a0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3743a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3743a4:
    // 0x3743a4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3743a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3743a8:
    // 0x3743a8: 0x2463cf68  addiu       $v1, $v1, -0x3098
    ctx->pc = 0x3743a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954856));
label_3743ac:
    // 0x3743ac: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x3743acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_3743b0:
    // 0x3743b0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x3743b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_3743b4:
    // 0x3743b4: 0xc440c590  lwc1        $f0, -0x3A70($v0)
    ctx->pc = 0x3743b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3743b8:
    // 0x3743b8: 0xae00053c  sw          $zero, 0x53C($s0)
    ctx->pc = 0x3743b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1340), GPR_U32(ctx, 0));
label_3743bc:
    // 0x3743bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3743bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3743c0:
    // 0x3743c0: 0xae000540  sw          $zero, 0x540($s0)
    ctx->pc = 0x3743c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1344), GPR_U32(ctx, 0));
label_3743c4:
    // 0x3743c4: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x3743c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_3743c8:
    // 0x3743c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3743c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3743cc:
    // 0x3743cc: 0xe6000544  swc1        $f0, 0x544($s0)
    ctx->pc = 0x3743ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1348), bits); }
label_3743d0:
    // 0x3743d0: 0xae020548  sw          $v0, 0x548($s0)
    ctx->pc = 0x3743d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1352), GPR_U32(ctx, 2));
label_3743d4:
    // 0x3743d4: 0xc04a576  jal         func_1295D8
label_3743d8:
    if (ctx->pc == 0x3743D8u) {
        ctx->pc = 0x3743D8u;
            // 0x3743d8: 0xae02054c  sw          $v0, 0x54C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1356), GPR_U32(ctx, 2));
        ctx->pc = 0x3743DCu;
        goto label_3743dc;
    }
    ctx->pc = 0x3743D4u;
    SET_GPR_U32(ctx, 31, 0x3743DCu);
    ctx->pc = 0x3743D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3743D4u;
            // 0x3743d8: 0xae02054c  sw          $v0, 0x54C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1356), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3743DCu; }
        if (ctx->pc != 0x3743DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3743DCu; }
        if (ctx->pc != 0x3743DCu) { return; }
    }
    ctx->pc = 0x3743DCu;
label_3743dc:
    // 0x3743dc: 0x26040494  addiu       $a0, $s0, 0x494
    ctx->pc = 0x3743dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1172));
label_3743e0:
    // 0x3743e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3743e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3743e4:
    // 0x3743e4: 0xc04a576  jal         func_1295D8
label_3743e8:
    if (ctx->pc == 0x3743E8u) {
        ctx->pc = 0x3743E8u;
            // 0x3743e8: 0x24060054  addiu       $a2, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->pc = 0x3743ECu;
        goto label_3743ec;
    }
    ctx->pc = 0x3743E4u;
    SET_GPR_U32(ctx, 31, 0x3743ECu);
    ctx->pc = 0x3743E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3743E4u;
            // 0x3743e8: 0x24060054  addiu       $a2, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3743ECu; }
        if (ctx->pc != 0x3743ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3743ECu; }
        if (ctx->pc != 0x3743ECu) { return; }
    }
    ctx->pc = 0x3743ECu;
label_3743ec:
    // 0x3743ec: 0x260404e8  addiu       $a0, $s0, 0x4E8
    ctx->pc = 0x3743ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1256));
label_3743f0:
    // 0x3743f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3743f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3743f4:
    // 0x3743f4: 0xc04a576  jal         func_1295D8
label_3743f8:
    if (ctx->pc == 0x3743F8u) {
        ctx->pc = 0x3743F8u;
            // 0x3743f8: 0x24060054  addiu       $a2, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->pc = 0x3743FCu;
        goto label_3743fc;
    }
    ctx->pc = 0x3743F4u;
    SET_GPR_U32(ctx, 31, 0x3743FCu);
    ctx->pc = 0x3743F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3743F4u;
            // 0x3743f8: 0x24060054  addiu       $a2, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3743FCu; }
        if (ctx->pc != 0x3743FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3743FCu; }
        if (ctx->pc != 0x3743FCu) { return; }
    }
    ctx->pc = 0x3743FCu;
label_3743fc:
    // 0x3743fc: 0x26040560  addiu       $a0, $s0, 0x560
    ctx->pc = 0x3743fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
label_374400:
    // 0x374400: 0xc075368  jal         func_1D4DA0
label_374404:
    if (ctx->pc == 0x374404u) {
        ctx->pc = 0x374404u;
            // 0x374404: 0xae000550  sw          $zero, 0x550($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
        ctx->pc = 0x374408u;
        goto label_374408;
    }
    ctx->pc = 0x374400u;
    SET_GPR_U32(ctx, 31, 0x374408u);
    ctx->pc = 0x374404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374400u;
            // 0x374404: 0xae000550  sw          $zero, 0x550($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DA0u;
    if (runtime->hasFunction(0x1D4DA0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374408u; }
        if (ctx->pc != 0x374408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DA0_0x1d4da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374408u; }
        if (ctx->pc != 0x374408u) { return; }
    }
    ctx->pc = 0x374408u;
label_374408:
    // 0x374408: 0xae1005e0  sw          $s0, 0x5E0($s0)
    ctx->pc = 0x374408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1504), GPR_U32(ctx, 16));
label_37440c:
    // 0x37440c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x37440cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_374410:
    // 0x374410: 0xae000630  sw          $zero, 0x630($s0)
    ctx->pc = 0x374410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1584), GPR_U32(ctx, 0));
label_374414:
    // 0x374414: 0x26110580  addiu       $s1, $s0, 0x580
    ctx->pc = 0x374414u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
label_374418:
    // 0x374418: 0xae000634  sw          $zero, 0x634($s0)
    ctx->pc = 0x374418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1588), GPR_U32(ctx, 0));
label_37441c:
    // 0x37441c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x37441cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_374420:
    // 0x374420: 0xae000638  sw          $zero, 0x638($s0)
    ctx->pc = 0x374420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1592), GPR_U32(ctx, 0));
label_374424:
    // 0x374424: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x374424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_374428:
    // 0x374428: 0xa6000640  sh          $zero, 0x640($s0)
    ctx->pc = 0x374428u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1600), (uint16_t)GPR_U32(ctx, 0));
label_37442c:
    // 0x37442c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x37442cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_374430:
    // 0x374430: 0xa6000642  sh          $zero, 0x642($s0)
    ctx->pc = 0x374430u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1602), (uint16_t)GPR_U32(ctx, 0));
label_374434:
    // 0x374434: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x374434u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_374438:
    // 0x374438: 0xa6020644  sh          $v0, 0x644($s0)
    ctx->pc = 0x374438u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1604), (uint16_t)GPR_U32(ctx, 2));
label_37443c:
    // 0x37443c: 0xc04cbd8  jal         func_132F60
label_374440:
    if (ctx->pc == 0x374440u) {
        ctx->pc = 0x374440u;
            // 0x374440: 0xa6000646  sh          $zero, 0x646($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1606), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x374444u;
        goto label_374444;
    }
    ctx->pc = 0x37443Cu;
    SET_GPR_U32(ctx, 31, 0x374444u);
    ctx->pc = 0x374440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37443Cu;
            // 0x374440: 0xa6000646  sh          $zero, 0x646($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1606), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374444u; }
        if (ctx->pc != 0x374444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374444u; }
        if (ctx->pc != 0x374444u) { return; }
    }
    ctx->pc = 0x374444u;
label_374444:
    // 0x374444: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x374444u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_374448:
    // 0x374448: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x374448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_37444c:
    // 0x37444c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x37444cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_374450:
    // 0x374450: 0xc04cbd8  jal         func_132F60
label_374454:
    if (ctx->pc == 0x374454u) {
        ctx->pc = 0x374454u;
            // 0x374454: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x374458u;
        goto label_374458;
    }
    ctx->pc = 0x374450u;
    SET_GPR_U32(ctx, 31, 0x374458u);
    ctx->pc = 0x374454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374450u;
            // 0x374454: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374458u; }
        if (ctx->pc != 0x374458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374458u; }
        if (ctx->pc != 0x374458u) { return; }
    }
    ctx->pc = 0x374458u;
label_374458:
    // 0x374458: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x374458u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_37445c:
    // 0x37445c: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x37445cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_374460:
    // 0x374460: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x374460u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_374464:
    // 0x374464: 0xc04cbd8  jal         func_132F60
label_374468:
    if (ctx->pc == 0x374468u) {
        ctx->pc = 0x374468u;
            // 0x374468: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x37446Cu;
        goto label_37446c;
    }
    ctx->pc = 0x374464u;
    SET_GPR_U32(ctx, 31, 0x37446Cu);
    ctx->pc = 0x374468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374464u;
            // 0x374468: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37446Cu; }
        if (ctx->pc != 0x37446Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37446Cu; }
        if (ctx->pc != 0x37446Cu) { return; }
    }
    ctx->pc = 0x37446Cu;
label_37446c:
    // 0x37446c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x37446cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_374470:
    // 0x374470: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x374470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_374474:
    // 0x374474: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x374474u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_374478:
    // 0x374478: 0xc04cbd8  jal         func_132F60
label_37447c:
    if (ctx->pc == 0x37447Cu) {
        ctx->pc = 0x37447Cu;
            // 0x37447c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x374480u;
        goto label_374480;
    }
    ctx->pc = 0x374478u;
    SET_GPR_U32(ctx, 31, 0x374480u);
    ctx->pc = 0x37447Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374478u;
            // 0x37447c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374480u; }
        if (ctx->pc != 0x374480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374480u; }
        if (ctx->pc != 0x374480u) { return; }
    }
    ctx->pc = 0x374480u;
label_374480:
    // 0x374480: 0xae200100  sw          $zero, 0x100($s1)
    ctx->pc = 0x374480u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
label_374484:
    // 0x374484: 0x262400d0  addiu       $a0, $s1, 0xD0
    ctx->pc = 0x374484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
label_374488:
    // 0x374488: 0xae200104  sw          $zero, 0x104($s1)
    ctx->pc = 0x374488u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 0));
label_37448c:
    // 0x37448c: 0xc04c968  jal         func_1325A0
label_374490:
    if (ctx->pc == 0x374490u) {
        ctx->pc = 0x374490u;
            // 0x374490: 0xa2200108  sb          $zero, 0x108($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 264), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x374494u;
        goto label_374494;
    }
    ctx->pc = 0x37448Cu;
    SET_GPR_U32(ctx, 31, 0x374494u);
    ctx->pc = 0x374490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37448Cu;
            // 0x374490: 0xa2200108  sb          $zero, 0x108($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 264), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374494u; }
        if (ctx->pc != 0x374494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374494u; }
        if (ctx->pc != 0x374494u) { return; }
    }
    ctx->pc = 0x374494u;
label_374494:
    // 0x374494: 0xc04c968  jal         func_1325A0
label_374498:
    if (ctx->pc == 0x374498u) {
        ctx->pc = 0x374498u;
            // 0x374498: 0x262400e0  addiu       $a0, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->pc = 0x37449Cu;
        goto label_37449c;
    }
    ctx->pc = 0x374494u;
    SET_GPR_U32(ctx, 31, 0x37449Cu);
    ctx->pc = 0x374498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374494u;
            // 0x374498: 0x262400e0  addiu       $a0, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37449Cu; }
        if (ctx->pc != 0x37449Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37449Cu; }
        if (ctx->pc != 0x37449Cu) { return; }
    }
    ctx->pc = 0x37449Cu;
label_37449c:
    // 0x37449c: 0xc04c968  jal         func_1325A0
label_3744a0:
    if (ctx->pc == 0x3744A0u) {
        ctx->pc = 0x3744A0u;
            // 0x3744a0: 0x262400f0  addiu       $a0, $s1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
        ctx->pc = 0x3744A4u;
        goto label_3744a4;
    }
    ctx->pc = 0x37449Cu;
    SET_GPR_U32(ctx, 31, 0x3744A4u);
    ctx->pc = 0x3744A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37449Cu;
            // 0x3744a0: 0x262400f0  addiu       $a0, $s1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3744A4u; }
        if (ctx->pc != 0x3744A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3744A4u; }
        if (ctx->pc != 0x3744A4u) { return; }
    }
    ctx->pc = 0x3744A4u;
label_3744a4:
    // 0x3744a4: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x3744a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_3744a8:
    // 0x3744a8: 0xae20010c  sw          $zero, 0x10C($s1)
    ctx->pc = 0x3744a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 0));
label_3744ac:
    // 0x3744ac: 0xc4541360  lwc1        $f20, 0x1360($v0)
    ctx->pc = 0x3744acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3744b0:
    // 0x3744b0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3744b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3744b4:
    // 0x3744b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3744b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3744b8:
    // 0x3744b8: 0xe6340110  swc1        $f20, 0x110($s1)
    ctx->pc = 0x3744b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 272), bits); }
label_3744bc:
    // 0x3744bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3744bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3744c0:
    // 0x3744c0: 0xae230114  sw          $v1, 0x114($s1)
    ctx->pc = 0x3744c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 276), GPR_U32(ctx, 3));
label_3744c4:
    // 0x3744c4: 0xae200118  sw          $zero, 0x118($s1)
    ctx->pc = 0x3744c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 0));
label_3744c8:
    // 0x3744c8: 0xae22011c  sw          $v0, 0x11C($s1)
    ctx->pc = 0x3744c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 2));
label_3744cc:
    // 0x3744cc: 0xc04f26c  jal         func_13C9B0
label_3744d0:
    if (ctx->pc == 0x3744D0u) {
        ctx->pc = 0x3744D0u;
            // 0x3744d0: 0xae200120  sw          $zero, 0x120($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 0));
        ctx->pc = 0x3744D4u;
        goto label_3744d4;
    }
    ctx->pc = 0x3744CCu;
    SET_GPR_U32(ctx, 31, 0x3744D4u);
    ctx->pc = 0x3744D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3744CCu;
            // 0x3744d0: 0xae200120  sw          $zero, 0x120($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3744D4u; }
        if (ctx->pc != 0x3744D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3744D4u; }
        if (ctx->pc != 0x3744D4u) { return; }
    }
    ctx->pc = 0x3744D4u;
label_3744d4:
    // 0x3744d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3744d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3744d8:
    // 0x3744d8: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x3744d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_3744dc:
    // 0x3744dc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3744dcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3744e0:
    // 0x3744e0: 0xc04cbd8  jal         func_132F60
label_3744e4:
    if (ctx->pc == 0x3744E4u) {
        ctx->pc = 0x3744E4u;
            // 0x3744e4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3744E8u;
        goto label_3744e8;
    }
    ctx->pc = 0x3744E0u;
    SET_GPR_U32(ctx, 31, 0x3744E8u);
    ctx->pc = 0x3744E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3744E0u;
            // 0x3744e4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3744E8u; }
        if (ctx->pc != 0x3744E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3744E8u; }
        if (ctx->pc != 0x3744E8u) { return; }
    }
    ctx->pc = 0x3744E8u;
label_3744e8:
    // 0x3744e8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3744e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3744ec:
    // 0x3744ec: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x3744ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_3744f0:
    // 0x3744f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3744f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3744f4:
    // 0x3744f4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3744f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3744f8:
    // 0x3744f8: 0xc04cbd8  jal         func_132F60
label_3744fc:
    if (ctx->pc == 0x3744FCu) {
        ctx->pc = 0x3744FCu;
            // 0x3744fc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x374500u;
        goto label_374500;
    }
    ctx->pc = 0x3744F8u;
    SET_GPR_U32(ctx, 31, 0x374500u);
    ctx->pc = 0x3744FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3744F8u;
            // 0x3744fc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374500u; }
        if (ctx->pc != 0x374500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374500u; }
        if (ctx->pc != 0x374500u) { return; }
    }
    ctx->pc = 0x374500u;
label_374500:
    // 0x374500: 0xae100710  sw          $s0, 0x710($s0)
    ctx->pc = 0x374500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1808), GPR_U32(ctx, 16));
label_374504:
    // 0x374504: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x374504u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_374508:
    // 0x374508: 0xae000760  sw          $zero, 0x760($s0)
    ctx->pc = 0x374508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1888), GPR_U32(ctx, 0));
label_37450c:
    // 0x37450c: 0x261106b0  addiu       $s1, $s0, 0x6B0
    ctx->pc = 0x37450cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1712));
label_374510:
    // 0x374510: 0xae000764  sw          $zero, 0x764($s0)
    ctx->pc = 0x374510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1892), GPR_U32(ctx, 0));
label_374514:
    // 0x374514: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x374514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_374518:
    // 0x374518: 0xae000768  sw          $zero, 0x768($s0)
    ctx->pc = 0x374518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1896), GPR_U32(ctx, 0));
label_37451c:
    // 0x37451c: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x37451cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_374520:
    // 0x374520: 0xa6000770  sh          $zero, 0x770($s0)
    ctx->pc = 0x374520u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1904), (uint16_t)GPR_U32(ctx, 0));
label_374524:
    // 0x374524: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x374524u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_374528:
    // 0x374528: 0xa6000772  sh          $zero, 0x772($s0)
    ctx->pc = 0x374528u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1906), (uint16_t)GPR_U32(ctx, 0));
label_37452c:
    // 0x37452c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x37452cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_374530:
    // 0x374530: 0xa6020774  sh          $v0, 0x774($s0)
    ctx->pc = 0x374530u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1908), (uint16_t)GPR_U32(ctx, 2));
label_374534:
    // 0x374534: 0xc04cbd8  jal         func_132F60
label_374538:
    if (ctx->pc == 0x374538u) {
        ctx->pc = 0x374538u;
            // 0x374538: 0xa6000776  sh          $zero, 0x776($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1910), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x37453Cu;
        goto label_37453c;
    }
    ctx->pc = 0x374534u;
    SET_GPR_U32(ctx, 31, 0x37453Cu);
    ctx->pc = 0x374538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374534u;
            // 0x374538: 0xa6000776  sh          $zero, 0x776($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1910), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37453Cu; }
        if (ctx->pc != 0x37453Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37453Cu; }
        if (ctx->pc != 0x37453Cu) { return; }
    }
    ctx->pc = 0x37453Cu;
label_37453c:
    // 0x37453c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x37453cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_374540:
    // 0x374540: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x374540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_374544:
    // 0x374544: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x374544u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_374548:
    // 0x374548: 0xc04cbd8  jal         func_132F60
label_37454c:
    if (ctx->pc == 0x37454Cu) {
        ctx->pc = 0x37454Cu;
            // 0x37454c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x374550u;
        goto label_374550;
    }
    ctx->pc = 0x374548u;
    SET_GPR_U32(ctx, 31, 0x374550u);
    ctx->pc = 0x37454Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374548u;
            // 0x37454c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374550u; }
        if (ctx->pc != 0x374550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374550u; }
        if (ctx->pc != 0x374550u) { return; }
    }
    ctx->pc = 0x374550u;
label_374550:
    // 0x374550: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x374550u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_374554:
    // 0x374554: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x374554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_374558:
    // 0x374558: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x374558u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_37455c:
    // 0x37455c: 0xc04cbd8  jal         func_132F60
label_374560:
    if (ctx->pc == 0x374560u) {
        ctx->pc = 0x374560u;
            // 0x374560: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x374564u;
        goto label_374564;
    }
    ctx->pc = 0x37455Cu;
    SET_GPR_U32(ctx, 31, 0x374564u);
    ctx->pc = 0x374560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37455Cu;
            // 0x374560: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374564u; }
        if (ctx->pc != 0x374564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374564u; }
        if (ctx->pc != 0x374564u) { return; }
    }
    ctx->pc = 0x374564u;
label_374564:
    // 0x374564: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x374564u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_374568:
    // 0x374568: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x374568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_37456c:
    // 0x37456c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x37456cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_374570:
    // 0x374570: 0xc04cbd8  jal         func_132F60
label_374574:
    if (ctx->pc == 0x374574u) {
        ctx->pc = 0x374574u;
            // 0x374574: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x374578u;
        goto label_374578;
    }
    ctx->pc = 0x374570u;
    SET_GPR_U32(ctx, 31, 0x374578u);
    ctx->pc = 0x374574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374570u;
            // 0x374574: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374578u; }
        if (ctx->pc != 0x374578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374578u; }
        if (ctx->pc != 0x374578u) { return; }
    }
    ctx->pc = 0x374578u;
label_374578:
    // 0x374578: 0xae200100  sw          $zero, 0x100($s1)
    ctx->pc = 0x374578u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
label_37457c:
    // 0x37457c: 0x262400d0  addiu       $a0, $s1, 0xD0
    ctx->pc = 0x37457cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
label_374580:
    // 0x374580: 0xae200104  sw          $zero, 0x104($s1)
    ctx->pc = 0x374580u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 0));
label_374584:
    // 0x374584: 0xc04c968  jal         func_1325A0
label_374588:
    if (ctx->pc == 0x374588u) {
        ctx->pc = 0x374588u;
            // 0x374588: 0xa2200108  sb          $zero, 0x108($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 264), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x37458Cu;
        goto label_37458c;
    }
    ctx->pc = 0x374584u;
    SET_GPR_U32(ctx, 31, 0x37458Cu);
    ctx->pc = 0x374588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374584u;
            // 0x374588: 0xa2200108  sb          $zero, 0x108($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 264), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37458Cu; }
        if (ctx->pc != 0x37458Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37458Cu; }
        if (ctx->pc != 0x37458Cu) { return; }
    }
    ctx->pc = 0x37458Cu;
label_37458c:
    // 0x37458c: 0xc04c968  jal         func_1325A0
label_374590:
    if (ctx->pc == 0x374590u) {
        ctx->pc = 0x374590u;
            // 0x374590: 0x262400e0  addiu       $a0, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->pc = 0x374594u;
        goto label_374594;
    }
    ctx->pc = 0x37458Cu;
    SET_GPR_U32(ctx, 31, 0x374594u);
    ctx->pc = 0x374590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37458Cu;
            // 0x374590: 0x262400e0  addiu       $a0, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374594u; }
        if (ctx->pc != 0x374594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374594u; }
        if (ctx->pc != 0x374594u) { return; }
    }
    ctx->pc = 0x374594u;
label_374594:
    // 0x374594: 0xc04c968  jal         func_1325A0
label_374598:
    if (ctx->pc == 0x374598u) {
        ctx->pc = 0x374598u;
            // 0x374598: 0x262400f0  addiu       $a0, $s1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
        ctx->pc = 0x37459Cu;
        goto label_37459c;
    }
    ctx->pc = 0x374594u;
    SET_GPR_U32(ctx, 31, 0x37459Cu);
    ctx->pc = 0x374598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374594u;
            // 0x374598: 0x262400f0  addiu       $a0, $s1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37459Cu; }
        if (ctx->pc != 0x37459Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37459Cu; }
        if (ctx->pc != 0x37459Cu) { return; }
    }
    ctx->pc = 0x37459Cu;
label_37459c:
    // 0x37459c: 0xae20010c  sw          $zero, 0x10C($s1)
    ctx->pc = 0x37459cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 0));
label_3745a0:
    // 0x3745a0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3745a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3745a4:
    // 0x3745a4: 0xe6340110  swc1        $f20, 0x110($s1)
    ctx->pc = 0x3745a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 272), bits); }
label_3745a8:
    // 0x3745a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3745a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3745ac:
    // 0x3745ac: 0xae230114  sw          $v1, 0x114($s1)
    ctx->pc = 0x3745acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 276), GPR_U32(ctx, 3));
label_3745b0:
    // 0x3745b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3745b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3745b4:
    // 0x3745b4: 0xae200118  sw          $zero, 0x118($s1)
    ctx->pc = 0x3745b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 0));
label_3745b8:
    // 0x3745b8: 0xae22011c  sw          $v0, 0x11C($s1)
    ctx->pc = 0x3745b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 2));
label_3745bc:
    // 0x3745bc: 0xc04f26c  jal         func_13C9B0
label_3745c0:
    if (ctx->pc == 0x3745C0u) {
        ctx->pc = 0x3745C0u;
            // 0x3745c0: 0xae200120  sw          $zero, 0x120($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 0));
        ctx->pc = 0x3745C4u;
        goto label_3745c4;
    }
    ctx->pc = 0x3745BCu;
    SET_GPR_U32(ctx, 31, 0x3745C4u);
    ctx->pc = 0x3745C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3745BCu;
            // 0x3745c0: 0xae200120  sw          $zero, 0x120($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3745C4u; }
        if (ctx->pc != 0x3745C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3745C4u; }
        if (ctx->pc != 0x3745C4u) { return; }
    }
    ctx->pc = 0x3745C4u;
label_3745c4:
    // 0x3745c4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3745c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3745c8:
    // 0x3745c8: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x3745c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_3745cc:
    // 0x3745cc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3745ccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3745d0:
    // 0x3745d0: 0xc04cbd8  jal         func_132F60
label_3745d4:
    if (ctx->pc == 0x3745D4u) {
        ctx->pc = 0x3745D4u;
            // 0x3745d4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3745D8u;
        goto label_3745d8;
    }
    ctx->pc = 0x3745D0u;
    SET_GPR_U32(ctx, 31, 0x3745D8u);
    ctx->pc = 0x3745D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3745D0u;
            // 0x3745d4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3745D8u; }
        if (ctx->pc != 0x3745D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3745D8u; }
        if (ctx->pc != 0x3745D8u) { return; }
    }
    ctx->pc = 0x3745D8u;
label_3745d8:
    // 0x3745d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3745d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3745dc:
    // 0x3745dc: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x3745dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_3745e0:
    // 0x3745e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3745e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3745e4:
    // 0x3745e4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3745e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3745e8:
    // 0x3745e8: 0xc04cbd8  jal         func_132F60
label_3745ec:
    if (ctx->pc == 0x3745ECu) {
        ctx->pc = 0x3745ECu;
            // 0x3745ec: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3745F0u;
        goto label_3745f0;
    }
    ctx->pc = 0x3745E8u;
    SET_GPR_U32(ctx, 31, 0x3745F0u);
    ctx->pc = 0x3745ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3745E8u;
            // 0x3745ec: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3745F0u; }
        if (ctx->pc != 0x3745F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3745F0u; }
        if (ctx->pc != 0x3745F0u) { return; }
    }
    ctx->pc = 0x3745F0u;
label_3745f0:
    // 0x3745f0: 0xae000870  sw          $zero, 0x870($s0)
    ctx->pc = 0x3745f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2160), GPR_U32(ctx, 0));
label_3745f4:
    // 0x3745f4: 0x261107e0  addiu       $s1, $s0, 0x7E0
    ctx->pc = 0x3745f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2016));
label_3745f8:
    // 0x3745f8: 0xae000874  sw          $zero, 0x874($s0)
    ctx->pc = 0x3745f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2164), GPR_U32(ctx, 0));
label_3745fc:
    // 0x3745fc: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x3745fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_374600:
    // 0x374600: 0xc04c968  jal         func_1325A0
label_374604:
    if (ctx->pc == 0x374604u) {
        ctx->pc = 0x374604u;
            // 0x374604: 0xa2000878  sb          $zero, 0x878($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2168), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x374608u;
        goto label_374608;
    }
    ctx->pc = 0x374600u;
    SET_GPR_U32(ctx, 31, 0x374608u);
    ctx->pc = 0x374604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374600u;
            // 0x374604: 0xa2000878  sb          $zero, 0x878($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2168), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374608u; }
        if (ctx->pc != 0x374608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374608u; }
        if (ctx->pc != 0x374608u) { return; }
    }
    ctx->pc = 0x374608u;
label_374608:
    // 0x374608: 0xc04c968  jal         func_1325A0
label_37460c:
    if (ctx->pc == 0x37460Cu) {
        ctx->pc = 0x37460Cu;
            // 0x37460c: 0x26240070  addiu       $a0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->pc = 0x374610u;
        goto label_374610;
    }
    ctx->pc = 0x374608u;
    SET_GPR_U32(ctx, 31, 0x374610u);
    ctx->pc = 0x37460Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374608u;
            // 0x37460c: 0x26240070  addiu       $a0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374610u; }
        if (ctx->pc != 0x374610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374610u; }
        if (ctx->pc != 0x374610u) { return; }
    }
    ctx->pc = 0x374610u;
label_374610:
    // 0x374610: 0xc04c968  jal         func_1325A0
label_374614:
    if (ctx->pc == 0x374614u) {
        ctx->pc = 0x374614u;
            // 0x374614: 0x26240080  addiu       $a0, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->pc = 0x374618u;
        goto label_374618;
    }
    ctx->pc = 0x374610u;
    SET_GPR_U32(ctx, 31, 0x374618u);
    ctx->pc = 0x374614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374610u;
            // 0x374614: 0x26240080  addiu       $a0, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374618u; }
        if (ctx->pc != 0x374618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374618u; }
        if (ctx->pc != 0x374618u) { return; }
    }
    ctx->pc = 0x374618u;
label_374618:
    // 0x374618: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x374618u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_37461c:
    // 0x37461c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37461cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_374620:
    // 0x374620: 0xae2000a0  sw          $zero, 0xA0($s1)
    ctx->pc = 0x374620u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
label_374624:
    // 0x374624: 0xae2000a4  sw          $zero, 0xA4($s1)
    ctx->pc = 0x374624u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
label_374628:
    // 0x374628: 0xc04f26c  jal         func_13C9B0
label_37462c:
    if (ctx->pc == 0x37462Cu) {
        ctx->pc = 0x37462Cu;
            // 0x37462c: 0xae2000a8  sw          $zero, 0xA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 0));
        ctx->pc = 0x374630u;
        goto label_374630;
    }
    ctx->pc = 0x374628u;
    SET_GPR_U32(ctx, 31, 0x374630u);
    ctx->pc = 0x37462Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374628u;
            // 0x37462c: 0xae2000a8  sw          $zero, 0xA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374630u; }
        if (ctx->pc != 0x374630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374630u; }
        if (ctx->pc != 0x374630u) { return; }
    }
    ctx->pc = 0x374630u;
label_374630:
    // 0x374630: 0xc04c968  jal         func_1325A0
label_374634:
    if (ctx->pc == 0x374634u) {
        ctx->pc = 0x374634u;
            // 0x374634: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->pc = 0x374638u;
        goto label_374638;
    }
    ctx->pc = 0x374630u;
    SET_GPR_U32(ctx, 31, 0x374638u);
    ctx->pc = 0x374634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374630u;
            // 0x374634: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374638u; }
        if (ctx->pc != 0x374638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374638u; }
        if (ctx->pc != 0x374638u) { return; }
    }
    ctx->pc = 0x374638u;
label_374638:
    // 0x374638: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x374638u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_37463c:
    // 0x37463c: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x37463cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_374640:
    // 0x374640: 0xc04cc04  jal         func_133010
label_374644:
    if (ctx->pc == 0x374644u) {
        ctx->pc = 0x374644u;
            // 0x374644: 0x24a54ff0  addiu       $a1, $a1, 0x4FF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20464));
        ctx->pc = 0x374648u;
        goto label_374648;
    }
    ctx->pc = 0x374640u;
    SET_GPR_U32(ctx, 31, 0x374648u);
    ctx->pc = 0x374644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374640u;
            // 0x374644: 0x24a54ff0  addiu       $a1, $a1, 0x4FF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374648u; }
        if (ctx->pc != 0x374648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374648u; }
        if (ctx->pc != 0x374648u) { return; }
    }
    ctx->pc = 0x374648u;
label_374648:
    // 0x374648: 0xae000920  sw          $zero, 0x920($s0)
    ctx->pc = 0x374648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2336), GPR_U32(ctx, 0));
label_37464c:
    // 0x37464c: 0x26110890  addiu       $s1, $s0, 0x890
    ctx->pc = 0x37464cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_374650:
    // 0x374650: 0xae000924  sw          $zero, 0x924($s0)
    ctx->pc = 0x374650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2340), GPR_U32(ctx, 0));
label_374654:
    // 0x374654: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x374654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_374658:
    // 0x374658: 0xc04c968  jal         func_1325A0
label_37465c:
    if (ctx->pc == 0x37465Cu) {
        ctx->pc = 0x37465Cu;
            // 0x37465c: 0xa2000928  sb          $zero, 0x928($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2344), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x374660u;
        goto label_374660;
    }
    ctx->pc = 0x374658u;
    SET_GPR_U32(ctx, 31, 0x374660u);
    ctx->pc = 0x37465Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374658u;
            // 0x37465c: 0xa2000928  sb          $zero, 0x928($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2344), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374660u; }
        if (ctx->pc != 0x374660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374660u; }
        if (ctx->pc != 0x374660u) { return; }
    }
    ctx->pc = 0x374660u;
label_374660:
    // 0x374660: 0xc04c968  jal         func_1325A0
label_374664:
    if (ctx->pc == 0x374664u) {
        ctx->pc = 0x374664u;
            // 0x374664: 0x26240070  addiu       $a0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->pc = 0x374668u;
        goto label_374668;
    }
    ctx->pc = 0x374660u;
    SET_GPR_U32(ctx, 31, 0x374668u);
    ctx->pc = 0x374664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374660u;
            // 0x374664: 0x26240070  addiu       $a0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374668u; }
        if (ctx->pc != 0x374668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374668u; }
        if (ctx->pc != 0x374668u) { return; }
    }
    ctx->pc = 0x374668u;
label_374668:
    // 0x374668: 0xc04c968  jal         func_1325A0
label_37466c:
    if (ctx->pc == 0x37466Cu) {
        ctx->pc = 0x37466Cu;
            // 0x37466c: 0x26240080  addiu       $a0, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->pc = 0x374670u;
        goto label_374670;
    }
    ctx->pc = 0x374668u;
    SET_GPR_U32(ctx, 31, 0x374670u);
    ctx->pc = 0x37466Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374668u;
            // 0x37466c: 0x26240080  addiu       $a0, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374670u; }
        if (ctx->pc != 0x374670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374670u; }
        if (ctx->pc != 0x374670u) { return; }
    }
    ctx->pc = 0x374670u;
label_374670:
    // 0x374670: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x374670u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_374674:
    // 0x374674: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x374674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_374678:
    // 0x374678: 0xae2000a0  sw          $zero, 0xA0($s1)
    ctx->pc = 0x374678u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
label_37467c:
    // 0x37467c: 0xae2000a4  sw          $zero, 0xA4($s1)
    ctx->pc = 0x37467cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
label_374680:
    // 0x374680: 0xc04f26c  jal         func_13C9B0
label_374684:
    if (ctx->pc == 0x374684u) {
        ctx->pc = 0x374684u;
            // 0x374684: 0xae2000a8  sw          $zero, 0xA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 0));
        ctx->pc = 0x374688u;
        goto label_374688;
    }
    ctx->pc = 0x374680u;
    SET_GPR_U32(ctx, 31, 0x374688u);
    ctx->pc = 0x374684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374680u;
            // 0x374684: 0xae2000a8  sw          $zero, 0xA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374688u; }
        if (ctx->pc != 0x374688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374688u; }
        if (ctx->pc != 0x374688u) { return; }
    }
    ctx->pc = 0x374688u;
label_374688:
    // 0x374688: 0xc04c968  jal         func_1325A0
label_37468c:
    if (ctx->pc == 0x37468Cu) {
        ctx->pc = 0x37468Cu;
            // 0x37468c: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->pc = 0x374690u;
        goto label_374690;
    }
    ctx->pc = 0x374688u;
    SET_GPR_U32(ctx, 31, 0x374690u);
    ctx->pc = 0x37468Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374688u;
            // 0x37468c: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374690u; }
        if (ctx->pc != 0x374690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374690u; }
        if (ctx->pc != 0x374690u) { return; }
    }
    ctx->pc = 0x374690u;
label_374690:
    // 0x374690: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x374690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_374694:
    // 0x374694: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x374694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_374698:
    // 0x374698: 0xc04cc04  jal         func_133010
label_37469c:
    if (ctx->pc == 0x37469Cu) {
        ctx->pc = 0x37469Cu;
            // 0x37469c: 0x24a54ff0  addiu       $a1, $a1, 0x4FF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20464));
        ctx->pc = 0x3746A0u;
        goto label_3746a0;
    }
    ctx->pc = 0x374698u;
    SET_GPR_U32(ctx, 31, 0x3746A0u);
    ctx->pc = 0x37469Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374698u;
            // 0x37469c: 0x24a54ff0  addiu       $a1, $a1, 0x4FF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3746A0u; }
        if (ctx->pc != 0x3746A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3746A0u; }
        if (ctx->pc != 0x3746A0u) { return; }
    }
    ctx->pc = 0x3746A0u;
label_3746a0:
    // 0x3746a0: 0x26040940  addiu       $a0, $s0, 0x940
    ctx->pc = 0x3746a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2368));
label_3746a4:
    // 0x3746a4: 0xc142d20  jal         func_50B480
label_3746a8:
    if (ctx->pc == 0x3746A8u) {
        ctx->pc = 0x3746A8u;
            // 0x3746a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3746ACu;
        goto label_3746ac;
    }
    ctx->pc = 0x3746A4u;
    SET_GPR_U32(ctx, 31, 0x3746ACu);
    ctx->pc = 0x3746A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3746A4u;
            // 0x3746a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x50B480u;
    if (runtime->hasFunction(0x50B480u)) {
        auto targetFn = runtime->lookupFunction(0x50B480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3746ACu; }
        if (ctx->pc != 0x3746ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0050B480_0x50b480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3746ACu; }
        if (ctx->pc != 0x3746ACu) { return; }
    }
    ctx->pc = 0x3746ACu;
label_3746ac:
    // 0x3746ac: 0xae100a50  sw          $s0, 0xA50($s0)
    ctx->pc = 0x3746acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2640), GPR_U32(ctx, 16));
label_3746b0:
    // 0x3746b0: 0x26110a50  addiu       $s1, $s0, 0xA50
    ctx->pc = 0x3746b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
label_3746b4:
    // 0x3746b4: 0xae000a54  sw          $zero, 0xA54($s0)
    ctx->pc = 0x3746b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2644), GPR_U32(ctx, 0));
label_3746b8:
    // 0x3746b8: 0x26240028  addiu       $a0, $s1, 0x28
    ctx->pc = 0x3746b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
label_3746bc:
    // 0x3746bc: 0xae000a64  sw          $zero, 0xA64($s0)
    ctx->pc = 0x3746bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2660), GPR_U32(ctx, 0));
label_3746c0:
    // 0x3746c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3746c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3746c4:
    // 0x3746c4: 0xae000a68  sw          $zero, 0xA68($s0)
    ctx->pc = 0x3746c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2664), GPR_U32(ctx, 0));
label_3746c8:
    // 0x3746c8: 0xae000a6c  sw          $zero, 0xA6C($s0)
    ctx->pc = 0x3746c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2668), GPR_U32(ctx, 0));
label_3746cc:
    // 0x3746cc: 0xae000a70  sw          $zero, 0xA70($s0)
    ctx->pc = 0x3746ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2672), GPR_U32(ctx, 0));
label_3746d0:
    // 0x3746d0: 0xc0adf84  jal         func_2B7E10
label_3746d4:
    if (ctx->pc == 0x3746D4u) {
        ctx->pc = 0x3746D4u;
            // 0x3746d4: 0xae000a74  sw          $zero, 0xA74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2676), GPR_U32(ctx, 0));
        ctx->pc = 0x3746D8u;
        goto label_3746d8;
    }
    ctx->pc = 0x3746D0u;
    SET_GPR_U32(ctx, 31, 0x3746D8u);
    ctx->pc = 0x3746D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3746D0u;
            // 0x3746d4: 0xae000a74  sw          $zero, 0xA74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2676), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B7E10u;
    if (runtime->hasFunction(0x2B7E10u)) {
        auto targetFn = runtime->lookupFunction(0x2B7E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3746D8u; }
        if (ctx->pc != 0x3746D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B7E10_0x2b7e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3746D8u; }
        if (ctx->pc != 0x3746D8u) { return; }
    }
    ctx->pc = 0x3746D8u;
label_3746d8:
    // 0x3746d8: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x3746d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_3746dc:
    // 0x3746dc: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3746dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3746e0:
    // 0x3746e0: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x3746e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
label_3746e4:
    // 0x3746e4: 0xc4408348  lwc1        $f0, -0x7CB8($v0)
    ctx->pc = 0x3746e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294935368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3746e8:
    // 0x3746e8: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x3746e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
label_3746ec:
    // 0x3746ec: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x3746ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_3746f0:
    // 0x3746f0: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x3746f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
label_3746f4:
    // 0x3746f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3746f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3746f8:
    // 0x3746f8: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x3746f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
label_3746fc:
    // 0x3746fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3746fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_374700:
    // 0x374700: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x374700u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
label_374704:
    // 0x374704: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x374704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_374708:
    // 0x374708: 0xe6200048  swc1        $f0, 0x48($s1)
    ctx->pc = 0x374708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
label_37470c:
    // 0x37470c: 0xe620004c  swc1        $f0, 0x4C($s1)
    ctx->pc = 0x37470cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
label_374710:
    // 0x374710: 0xc04a576  jal         func_1295D8
label_374714:
    if (ctx->pc == 0x374714u) {
        ctx->pc = 0x374714u;
            // 0x374714: 0xa2220050  sb          $v0, 0x50($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 80), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x374718u;
        goto label_374718;
    }
    ctx->pc = 0x374710u;
    SET_GPR_U32(ctx, 31, 0x374718u);
    ctx->pc = 0x374714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374710u;
            // 0x374714: 0xa2220050  sb          $v0, 0x50($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 80), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374718u; }
        if (ctx->pc != 0x374718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374718u; }
        if (ctx->pc != 0x374718u) { return; }
    }
    ctx->pc = 0x374718u;
label_374718:
    // 0x374718: 0x240401d0  addiu       $a0, $zero, 0x1D0
    ctx->pc = 0x374718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
label_37471c:
    // 0x37471c: 0xc040180  jal         func_100600
label_374720:
    if (ctx->pc == 0x374720u) {
        ctx->pc = 0x374720u;
            // 0x374720: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->pc = 0x374724u;
        goto label_374724;
    }
    ctx->pc = 0x37471Cu;
    SET_GPR_U32(ctx, 31, 0x374724u);
    ctx->pc = 0x374720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37471Cu;
            // 0x374720: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374724u; }
        if (ctx->pc != 0x374724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374724u; }
        if (ctx->pc != 0x374724u) { return; }
    }
    ctx->pc = 0x374724u;
label_374724:
    // 0x374724: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_374728:
    if (ctx->pc == 0x374728u) {
        ctx->pc = 0x374728u;
            // 0x374728: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->pc = 0x37472Cu;
        goto label_37472c;
    }
    ctx->pc = 0x374724u;
    {
        const bool branch_taken_0x374724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x374724) {
            ctx->pc = 0x374728u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x374724u;
            // 0x374728: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37473Cu;
            goto label_37473c;
        }
    }
    ctx->pc = 0x37472Cu;
label_37472c:
    // 0x37472c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x37472cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_374730:
    // 0x374730: 0xc0adf30  jal         func_2B7CC0
label_374734:
    if (ctx->pc == 0x374734u) {
        ctx->pc = 0x374734u;
            // 0x374734: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x374738u;
        goto label_374738;
    }
    ctx->pc = 0x374730u;
    SET_GPR_U32(ctx, 31, 0x374738u);
    ctx->pc = 0x374734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374730u;
            // 0x374734: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CC0u;
    if (runtime->hasFunction(0x2B7CC0u)) {
        auto targetFn = runtime->lookupFunction(0x2B7CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374738u; }
        if (ctx->pc != 0x374738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B7CC0_0x2b7cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374738u; }
        if (ctx->pc != 0x374738u) { return; }
    }
    ctx->pc = 0x374738u;
label_374738:
    // 0x374738: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x374738u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_37473c:
    // 0x37473c: 0xc040180  jal         func_100600
label_374740:
    if (ctx->pc == 0x374740u) {
        ctx->pc = 0x374740u;
            // 0x374740: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->pc = 0x374744u;
        goto label_374744;
    }
    ctx->pc = 0x37473Cu;
    SET_GPR_U32(ctx, 31, 0x374744u);
    ctx->pc = 0x374740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37473Cu;
            // 0x374740: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374744u; }
        if (ctx->pc != 0x374744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374744u; }
        if (ctx->pc != 0x374744u) { return; }
    }
    ctx->pc = 0x374744u;
label_374744:
    // 0x374744: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_374748:
    if (ctx->pc == 0x374748u) {
        ctx->pc = 0x374748u;
            // 0x374748: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x37474Cu;
        goto label_37474c;
    }
    ctx->pc = 0x374744u;
    {
        const bool branch_taken_0x374744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x374744) {
            ctx->pc = 0x374748u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x374744u;
            // 0x374748: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37475Cu;
            goto label_37475c;
        }
    }
    ctx->pc = 0x37474Cu;
label_37474c:
    // 0x37474c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x37474cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_374750:
    // 0x374750: 0xc0adef8  jal         func_2B7BE0
label_374754:
    if (ctx->pc == 0x374754u) {
        ctx->pc = 0x374754u;
            // 0x374754: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x374758u;
        goto label_374758;
    }
    ctx->pc = 0x374750u;
    SET_GPR_U32(ctx, 31, 0x374758u);
    ctx->pc = 0x374754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374750u;
            // 0x374754: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B7BE0u;
    if (runtime->hasFunction(0x2B7BE0u)) {
        auto targetFn = runtime->lookupFunction(0x2B7BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374758u; }
        if (ctx->pc != 0x374758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B7BE0_0x2b7be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374758u; }
        if (ctx->pc != 0x374758u) { return; }
    }
    ctx->pc = 0x374758u;
label_374758:
    // 0x374758: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x374758u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_37475c:
    // 0x37475c: 0x26040ab0  addiu       $a0, $s0, 0xAB0
    ctx->pc = 0x37475cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2736));
label_374760:
    // 0x374760: 0xae000b90  sw          $zero, 0xB90($s0)
    ctx->pc = 0x374760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2960), GPR_U32(ctx, 0));
label_374764:
    // 0x374764: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x374764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_374768:
    // 0x374768: 0xae000b94  sw          $zero, 0xB94($s0)
    ctx->pc = 0x374768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2964), GPR_U32(ctx, 0));
label_37476c:
    // 0x37476c: 0xc04f26c  jal         func_13C9B0
label_374770:
    if (ctx->pc == 0x374770u) {
        ctx->pc = 0x374770u;
            // 0x374770: 0xae020bb0  sw          $v0, 0xBB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2992), GPR_U32(ctx, 2));
        ctx->pc = 0x374774u;
        goto label_374774;
    }
    ctx->pc = 0x37476Cu;
    SET_GPR_U32(ctx, 31, 0x374774u);
    ctx->pc = 0x374770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37476Cu;
            // 0x374770: 0xae020bb0  sw          $v0, 0xBB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2992), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374774u; }
        if (ctx->pc != 0x374774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374774u; }
        if (ctx->pc != 0x374774u) { return; }
    }
    ctx->pc = 0x374774u;
label_374774:
    // 0x374774: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x374774u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_374778:
    // 0x374778: 0x26040b20  addiu       $a0, $s0, 0xB20
    ctx->pc = 0x374778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2848));
label_37477c:
    // 0x37477c: 0xc04cc04  jal         func_133010
label_374780:
    if (ctx->pc == 0x374780u) {
        ctx->pc = 0x374780u;
            // 0x374780: 0x24a55000  addiu       $a1, $a1, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20480));
        ctx->pc = 0x374784u;
        goto label_374784;
    }
    ctx->pc = 0x37477Cu;
    SET_GPR_U32(ctx, 31, 0x374784u);
    ctx->pc = 0x374780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37477Cu;
            // 0x374780: 0x24a55000  addiu       $a1, $a1, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374784u; }
        if (ctx->pc != 0x374784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374784u; }
        if (ctx->pc != 0x374784u) { return; }
    }
    ctx->pc = 0x374784u;
label_374784:
    // 0x374784: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x374784u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_374788:
    // 0x374788: 0x26040b30  addiu       $a0, $s0, 0xB30
    ctx->pc = 0x374788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2864));
label_37478c:
    // 0x37478c: 0xc04cc04  jal         func_133010
label_374790:
    if (ctx->pc == 0x374790u) {
        ctx->pc = 0x374790u;
            // 0x374790: 0x24a55000  addiu       $a1, $a1, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20480));
        ctx->pc = 0x374794u;
        goto label_374794;
    }
    ctx->pc = 0x37478Cu;
    SET_GPR_U32(ctx, 31, 0x374794u);
    ctx->pc = 0x374790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37478Cu;
            // 0x374790: 0x24a55000  addiu       $a1, $a1, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374794u; }
        if (ctx->pc != 0x374794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374794u; }
        if (ctx->pc != 0x374794u) { return; }
    }
    ctx->pc = 0x374794u;
label_374794:
    // 0x374794: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x374794u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_374798:
    // 0x374798: 0x26040b40  addiu       $a0, $s0, 0xB40
    ctx->pc = 0x374798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2880));
label_37479c:
    // 0x37479c: 0xc04cc04  jal         func_133010
label_3747a0:
    if (ctx->pc == 0x3747A0u) {
        ctx->pc = 0x3747A0u;
            // 0x3747a0: 0x24a55000  addiu       $a1, $a1, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20480));
        ctx->pc = 0x3747A4u;
        goto label_3747a4;
    }
    ctx->pc = 0x37479Cu;
    SET_GPR_U32(ctx, 31, 0x3747A4u);
    ctx->pc = 0x3747A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37479Cu;
            // 0x3747a0: 0x24a55000  addiu       $a1, $a1, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3747A4u; }
        if (ctx->pc != 0x3747A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3747A4u; }
        if (ctx->pc != 0x3747A4u) { return; }
    }
    ctx->pc = 0x3747A4u;
label_3747a4:
    // 0x3747a4: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x3747a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_3747a8:
    // 0x3747a8: 0x26040b50  addiu       $a0, $s0, 0xB50
    ctx->pc = 0x3747a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2896));
label_3747ac:
    // 0x3747ac: 0xc04cc04  jal         func_133010
label_3747b0:
    if (ctx->pc == 0x3747B0u) {
        ctx->pc = 0x3747B0u;
            // 0x3747b0: 0x24a55000  addiu       $a1, $a1, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20480));
        ctx->pc = 0x3747B4u;
        goto label_3747b4;
    }
    ctx->pc = 0x3747ACu;
    SET_GPR_U32(ctx, 31, 0x3747B4u);
    ctx->pc = 0x3747B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3747ACu;
            // 0x3747b0: 0x24a55000  addiu       $a1, $a1, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3747B4u; }
        if (ctx->pc != 0x3747B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3747B4u; }
        if (ctx->pc != 0x3747B4u) { return; }
    }
    ctx->pc = 0x3747B4u;
label_3747b4:
    // 0x3747b4: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x3747b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_3747b8:
    // 0x3747b8: 0x26040b60  addiu       $a0, $s0, 0xB60
    ctx->pc = 0x3747b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2912));
label_3747bc:
    // 0x3747bc: 0xc04cc04  jal         func_133010
label_3747c0:
    if (ctx->pc == 0x3747C0u) {
        ctx->pc = 0x3747C0u;
            // 0x3747c0: 0x24a55000  addiu       $a1, $a1, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20480));
        ctx->pc = 0x3747C4u;
        goto label_3747c4;
    }
    ctx->pc = 0x3747BCu;
    SET_GPR_U32(ctx, 31, 0x3747C4u);
    ctx->pc = 0x3747C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3747BCu;
            // 0x3747c0: 0x24a55000  addiu       $a1, $a1, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3747C4u; }
        if (ctx->pc != 0x3747C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3747C4u; }
        if (ctx->pc != 0x3747C4u) { return; }
    }
    ctx->pc = 0x3747C4u;
label_3747c4:
    // 0x3747c4: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x3747c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_3747c8:
    // 0x3747c8: 0x26040b70  addiu       $a0, $s0, 0xB70
    ctx->pc = 0x3747c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2928));
label_3747cc:
    // 0x3747cc: 0xc04cc04  jal         func_133010
label_3747d0:
    if (ctx->pc == 0x3747D0u) {
        ctx->pc = 0x3747D0u;
            // 0x3747d0: 0x24a55000  addiu       $a1, $a1, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20480));
        ctx->pc = 0x3747D4u;
        goto label_3747d4;
    }
    ctx->pc = 0x3747CCu;
    SET_GPR_U32(ctx, 31, 0x3747D4u);
    ctx->pc = 0x3747D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3747CCu;
            // 0x3747d0: 0x24a55000  addiu       $a1, $a1, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3747D4u; }
        if (ctx->pc != 0x3747D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3747D4u; }
        if (ctx->pc != 0x3747D4u) { return; }
    }
    ctx->pc = 0x3747D4u;
label_3747d4:
    // 0x3747d4: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x3747d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_3747d8:
    // 0x3747d8: 0x26040b80  addiu       $a0, $s0, 0xB80
    ctx->pc = 0x3747d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2944));
label_3747dc:
    // 0x3747dc: 0xc04cc04  jal         func_133010
label_3747e0:
    if (ctx->pc == 0x3747E0u) {
        ctx->pc = 0x3747E0u;
            // 0x3747e0: 0x24a55000  addiu       $a1, $a1, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20480));
        ctx->pc = 0x3747E4u;
        goto label_3747e4;
    }
    ctx->pc = 0x3747DCu;
    SET_GPR_U32(ctx, 31, 0x3747E4u);
    ctx->pc = 0x3747E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3747DCu;
            // 0x3747e0: 0x24a55000  addiu       $a1, $a1, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3747E4u; }
        if (ctx->pc != 0x3747E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3747E4u; }
        if (ctx->pc != 0x3747E4u) { return; }
    }
    ctx->pc = 0x3747E4u;
label_3747e4:
    // 0x3747e4: 0xae000b90  sw          $zero, 0xB90($s0)
    ctx->pc = 0x3747e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2960), GPR_U32(ctx, 0));
label_3747e8:
    // 0x3747e8: 0x26040af0  addiu       $a0, $s0, 0xAF0
    ctx->pc = 0x3747e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2800));
label_3747ec:
    // 0x3747ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3747ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3747f0:
    // 0x3747f0: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x3747f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3747f4:
    // 0x3747f4: 0xc04a576  jal         func_1295D8
label_3747f8:
    if (ctx->pc == 0x3747F8u) {
        ctx->pc = 0x3747F8u;
            // 0x3747f8: 0xae000b94  sw          $zero, 0xB94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2964), GPR_U32(ctx, 0));
        ctx->pc = 0x3747FCu;
        goto label_3747fc;
    }
    ctx->pc = 0x3747F4u;
    SET_GPR_U32(ctx, 31, 0x3747FCu);
    ctx->pc = 0x3747F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3747F4u;
            // 0x3747f8: 0xae000b94  sw          $zero, 0xB94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2964), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3747FCu; }
        if (ctx->pc != 0x3747FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3747FCu; }
        if (ctx->pc != 0x3747FCu) { return; }
    }
    ctx->pc = 0x3747FCu;
label_3747fc:
    // 0x3747fc: 0x26040afc  addiu       $a0, $s0, 0xAFC
    ctx->pc = 0x3747fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2812));
label_374800:
    // 0x374800: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x374800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_374804:
    // 0x374804: 0xc04a576  jal         func_1295D8
label_374808:
    if (ctx->pc == 0x374808u) {
        ctx->pc = 0x374808u;
            // 0x374808: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x37480Cu;
        goto label_37480c;
    }
    ctx->pc = 0x374804u;
    SET_GPR_U32(ctx, 31, 0x37480Cu);
    ctx->pc = 0x374808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374804u;
            // 0x374808: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37480Cu; }
        if (ctx->pc != 0x37480Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37480Cu; }
        if (ctx->pc != 0x37480Cu) { return; }
    }
    ctx->pc = 0x37480Cu;
label_37480c:
    // 0x37480c: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x37480cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_374810:
    // 0x374810: 0x26040b10  addiu       $a0, $s0, 0xB10
    ctx->pc = 0x374810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2832));
label_374814:
    // 0x374814: 0xc04cc04  jal         func_133010
label_374818:
    if (ctx->pc == 0x374818u) {
        ctx->pc = 0x374818u;
            // 0x374818: 0x24a55000  addiu       $a1, $a1, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20480));
        ctx->pc = 0x37481Cu;
        goto label_37481c;
    }
    ctx->pc = 0x374814u;
    SET_GPR_U32(ctx, 31, 0x37481Cu);
    ctx->pc = 0x374818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374814u;
            // 0x374818: 0x24a55000  addiu       $a1, $a1, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37481Cu; }
        if (ctx->pc != 0x37481Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37481Cu; }
        if (ctx->pc != 0x37481Cu) { return; }
    }
    ctx->pc = 0x37481Cu;
label_37481c:
    // 0x37481c: 0xae100bd0  sw          $s0, 0xBD0($s0)
    ctx->pc = 0x37481cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3024), GPR_U32(ctx, 16));
label_374820:
    // 0x374820: 0x26040bc0  addiu       $a0, $s0, 0xBC0
    ctx->pc = 0x374820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3008));
label_374824:
    // 0x374824: 0xae000bd4  sw          $zero, 0xBD4($s0)
    ctx->pc = 0x374824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3028), GPR_U32(ctx, 0));
label_374828:
    // 0x374828: 0xae000bd8  sw          $zero, 0xBD8($s0)
    ctx->pc = 0x374828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3032), GPR_U32(ctx, 0));
label_37482c:
    // 0x37482c: 0xae000bdc  sw          $zero, 0xBDC($s0)
    ctx->pc = 0x37482cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3036), GPR_U32(ctx, 0));
label_374830:
    // 0x374830: 0xae000be0  sw          $zero, 0xBE0($s0)
    ctx->pc = 0x374830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3040), GPR_U32(ctx, 0));
label_374834:
    // 0x374834: 0xae000be4  sw          $zero, 0xBE4($s0)
    ctx->pc = 0x374834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3044), GPR_U32(ctx, 0));
label_374838:
    // 0x374838: 0xc0fe000  jal         func_3F8000
label_37483c:
    if (ctx->pc == 0x37483Cu) {
        ctx->pc = 0x37483Cu;
            // 0x37483c: 0xa2000be8  sb          $zero, 0xBE8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3048), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x374840u;
        goto label_374840;
    }
    ctx->pc = 0x374838u;
    SET_GPR_U32(ctx, 31, 0x374840u);
    ctx->pc = 0x37483Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374838u;
            // 0x37483c: 0xa2000be8  sb          $zero, 0xBE8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3048), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F8000u;
    if (runtime->hasFunction(0x3F8000u)) {
        auto targetFn = runtime->lookupFunction(0x3F8000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374840u; }
        if (ctx->pc != 0x374840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F8000_0x3f8000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374840u; }
        if (ctx->pc != 0x374840u) { return; }
    }
    ctx->pc = 0x374840u;
label_374840:
    // 0x374840: 0xae000c30  sw          $zero, 0xC30($s0)
    ctx->pc = 0x374840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3120), GPR_U32(ctx, 0));
label_374844:
    // 0x374844: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x374844u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_374848:
    // 0x374848: 0xae000c34  sw          $zero, 0xC34($s0)
    ctx->pc = 0x374848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3124), GPR_U32(ctx, 0));
label_37484c:
    // 0x37484c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x37484cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_374850:
    // 0x374850: 0xae000c38  sw          $zero, 0xC38($s0)
    ctx->pc = 0x374850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3128), GPR_U32(ctx, 0));
label_374854:
    // 0x374854: 0x26040bf0  addiu       $a0, $s0, 0xBF0
    ctx->pc = 0x374854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3056));
label_374858:
    // 0x374858: 0xa6000c40  sh          $zero, 0xC40($s0)
    ctx->pc = 0x374858u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 3136), (uint16_t)GPR_U32(ctx, 0));
label_37485c:
    // 0x37485c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x37485cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_374860:
    // 0x374860: 0xa6000c42  sh          $zero, 0xC42($s0)
    ctx->pc = 0x374860u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 3138), (uint16_t)GPR_U32(ctx, 0));
label_374864:
    // 0x374864: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x374864u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_374868:
    // 0x374868: 0xa6020c44  sh          $v0, 0xC44($s0)
    ctx->pc = 0x374868u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 3140), (uint16_t)GPR_U32(ctx, 2));
label_37486c:
    // 0x37486c: 0xc04cbd8  jal         func_132F60
label_374870:
    if (ctx->pc == 0x374870u) {
        ctx->pc = 0x374870u;
            // 0x374870: 0xa6000c46  sh          $zero, 0xC46($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 3142), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x374874u;
        goto label_374874;
    }
    ctx->pc = 0x37486Cu;
    SET_GPR_U32(ctx, 31, 0x374874u);
    ctx->pc = 0x374870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37486Cu;
            // 0x374870: 0xa6000c46  sh          $zero, 0xC46($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 3142), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374874u; }
        if (ctx->pc != 0x374874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374874u; }
        if (ctx->pc != 0x374874u) { return; }
    }
    ctx->pc = 0x374874u;
label_374874:
    // 0x374874: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x374874u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_374878:
    // 0x374878: 0x26040c00  addiu       $a0, $s0, 0xC00
    ctx->pc = 0x374878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3072));
label_37487c:
    // 0x37487c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x37487cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_374880:
    // 0x374880: 0xc04cbd8  jal         func_132F60
label_374884:
    if (ctx->pc == 0x374884u) {
        ctx->pc = 0x374884u;
            // 0x374884: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x374888u;
        goto label_374888;
    }
    ctx->pc = 0x374880u;
    SET_GPR_U32(ctx, 31, 0x374888u);
    ctx->pc = 0x374884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374880u;
            // 0x374884: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374888u; }
        if (ctx->pc != 0x374888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374888u; }
        if (ctx->pc != 0x374888u) { return; }
    }
    ctx->pc = 0x374888u;
label_374888:
    // 0x374888: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x374888u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_37488c:
    // 0x37488c: 0x26040c10  addiu       $a0, $s0, 0xC10
    ctx->pc = 0x37488cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3088));
label_374890:
    // 0x374890: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x374890u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_374894:
    // 0x374894: 0xc04cbd8  jal         func_132F60
label_374898:
    if (ctx->pc == 0x374898u) {
        ctx->pc = 0x374898u;
            // 0x374898: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x37489Cu;
        goto label_37489c;
    }
    ctx->pc = 0x374894u;
    SET_GPR_U32(ctx, 31, 0x37489Cu);
    ctx->pc = 0x374898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374894u;
            // 0x374898: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37489Cu; }
        if (ctx->pc != 0x37489Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37489Cu; }
        if (ctx->pc != 0x37489Cu) { return; }
    }
    ctx->pc = 0x37489Cu;
label_37489c:
    // 0x37489c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x37489cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3748a0:
    // 0x3748a0: 0x26040c20  addiu       $a0, $s0, 0xC20
    ctx->pc = 0x3748a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3104));
label_3748a4:
    // 0x3748a4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3748a4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3748a8:
    // 0x3748a8: 0xc04cbd8  jal         func_132F60
label_3748ac:
    if (ctx->pc == 0x3748ACu) {
        ctx->pc = 0x3748ACu;
            // 0x3748ac: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3748B0u;
        goto label_3748b0;
    }
    ctx->pc = 0x3748A8u;
    SET_GPR_U32(ctx, 31, 0x3748B0u);
    ctx->pc = 0x3748ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3748A8u;
            // 0x3748ac: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3748B0u; }
        if (ctx->pc != 0x3748B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3748B0u; }
        if (ctx->pc != 0x3748B0u) { return; }
    }
    ctx->pc = 0x3748B0u;
label_3748b0:
    // 0x3748b0: 0xae000c60  sw          $zero, 0xC60($s0)
    ctx->pc = 0x3748b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3168), GPR_U32(ctx, 0));
label_3748b4:
    // 0x3748b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3748b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3748b8:
    // 0x3748b8: 0xae000c64  sw          $zero, 0xC64($s0)
    ctx->pc = 0x3748b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3172), GPR_U32(ctx, 0));
label_3748bc:
    // 0x3748bc: 0x26040c50  addiu       $a0, $s0, 0xC50
    ctx->pc = 0x3748bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3152));
label_3748c0:
    // 0x3748c0: 0xa6020c68  sh          $v0, 0xC68($s0)
    ctx->pc = 0x3748c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 3176), (uint16_t)GPR_U32(ctx, 2));
label_3748c4:
    // 0x3748c4: 0xc04c968  jal         func_1325A0
label_3748c8:
    if (ctx->pc == 0x3748C8u) {
        ctx->pc = 0x3748C8u;
            // 0x3748c8: 0xa6000c6a  sh          $zero, 0xC6A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 3178), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x3748CCu;
        goto label_3748cc;
    }
    ctx->pc = 0x3748C4u;
    SET_GPR_U32(ctx, 31, 0x3748CCu);
    ctx->pc = 0x3748C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3748C4u;
            // 0x3748c8: 0xa6000c6a  sh          $zero, 0xC6A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 3178), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3748CCu; }
        if (ctx->pc != 0x3748CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3748CCu; }
        if (ctx->pc != 0x3748CCu) { return; }
    }
    ctx->pc = 0x3748CCu;
label_3748cc:
    // 0x3748cc: 0xa6000c7c  sh          $zero, 0xC7C($s0)
    ctx->pc = 0x3748ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 3196), (uint16_t)GPR_U32(ctx, 0));
label_3748d0:
    // 0x3748d0: 0x26040c6c  addiu       $a0, $s0, 0xC6C
    ctx->pc = 0x3748d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3180));
label_3748d4:
    // 0x3748d4: 0xa6000c7e  sh          $zero, 0xC7E($s0)
    ctx->pc = 0x3748d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 3198), (uint16_t)GPR_U32(ctx, 0));
label_3748d8:
    // 0x3748d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3748d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3748dc:
    // 0x3748dc: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3748dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3748e0:
    // 0x3748e0: 0xc04a576  jal         func_1295D8
label_3748e4:
    if (ctx->pc == 0x3748E4u) {
        ctx->pc = 0x3748E4u;
            // 0x3748e4: 0xa6000c80  sh          $zero, 0xC80($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 3200), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x3748E8u;
        goto label_3748e8;
    }
    ctx->pc = 0x3748E0u;
    SET_GPR_U32(ctx, 31, 0x3748E8u);
    ctx->pc = 0x3748E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3748E0u;
            // 0x3748e4: 0xa6000c80  sh          $zero, 0xC80($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 3200), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3748E8u; }
        if (ctx->pc != 0x3748E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3748E8u; }
        if (ctx->pc != 0x3748E8u) { return; }
    }
    ctx->pc = 0x3748E8u;
label_3748e8:
    // 0x3748e8: 0xae000d50  sw          $zero, 0xD50($s0)
    ctx->pc = 0x3748e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3408), GPR_U32(ctx, 0));
label_3748ec:
    // 0x3748ec: 0x26040c90  addiu       $a0, $s0, 0xC90
    ctx->pc = 0x3748ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3216));
label_3748f0:
    // 0x3748f0: 0xae000d54  sw          $zero, 0xD54($s0)
    ctx->pc = 0x3748f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3412), GPR_U32(ctx, 0));
label_3748f4:
    // 0x3748f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3748f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3748f8:
    // 0x3748f8: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x3748f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_3748fc:
    // 0x3748fc: 0xc04a576  jal         func_1295D8
label_374900:
    if (ctx->pc == 0x374900u) {
        ctx->pc = 0x374900u;
            // 0x374900: 0xae000d58  sw          $zero, 0xD58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3416), GPR_U32(ctx, 0));
        ctx->pc = 0x374904u;
        goto label_374904;
    }
    ctx->pc = 0x3748FCu;
    SET_GPR_U32(ctx, 31, 0x374904u);
    ctx->pc = 0x374900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3748FCu;
            // 0x374900: 0xae000d58  sw          $zero, 0xD58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3416), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374904u; }
        if (ctx->pc != 0x374904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374904u; }
        if (ctx->pc != 0x374904u) { return; }
    }
    ctx->pc = 0x374904u;
label_374904:
    // 0x374904: 0xae000d60  sw          $zero, 0xD60($s0)
    ctx->pc = 0x374904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3424), GPR_U32(ctx, 0));
label_374908:
    // 0x374908: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x374908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_37490c:
    // 0x37490c: 0xae000d64  sw          $zero, 0xD64($s0)
    ctx->pc = 0x37490cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3428), GPR_U32(ctx, 0));
label_374910:
    // 0x374910: 0x26040d80  addiu       $a0, $s0, 0xD80
    ctx->pc = 0x374910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3456));
label_374914:
    // 0x374914: 0xae000d68  sw          $zero, 0xD68($s0)
    ctx->pc = 0x374914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3432), GPR_U32(ctx, 0));
label_374918:
    // 0x374918: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x374918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_37491c:
    // 0x37491c: 0xae000d6c  sw          $zero, 0xD6C($s0)
    ctx->pc = 0x37491cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3436), GPR_U32(ctx, 0));
label_374920:
    // 0x374920: 0xae000d70  sw          $zero, 0xD70($s0)
    ctx->pc = 0x374920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3440), GPR_U32(ctx, 0));
label_374924:
    // 0x374924: 0xae000d74  sw          $zero, 0xD74($s0)
    ctx->pc = 0x374924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3444), GPR_U32(ctx, 0));
label_374928:
    // 0x374928: 0xae000d78  sw          $zero, 0xD78($s0)
    ctx->pc = 0x374928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3448), GPR_U32(ctx, 0));
label_37492c:
    // 0x37492c: 0xae000d7c  sw          $zero, 0xD7C($s0)
    ctx->pc = 0x37492cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3452), GPR_U32(ctx, 0));
label_374930:
    // 0x374930: 0x8c4289c8  lw          $v0, -0x7638($v0)
    ctx->pc = 0x374930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937032)));
label_374934:
    // 0x374934: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x374934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_374938:
    // 0x374938: 0xc058300  jal         func_160C00
label_37493c:
    if (ctx->pc == 0x37493Cu) {
        ctx->pc = 0x37493Cu;
            // 0x37493c: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->pc = 0x374940u;
        goto label_374940;
    }
    ctx->pc = 0x374938u;
    SET_GPR_U32(ctx, 31, 0x374940u);
    ctx->pc = 0x37493Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374938u;
            // 0x37493c: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160C00u;
    if (runtime->hasFunction(0x160C00u)) {
        auto targetFn = runtime->lookupFunction(0x160C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374940u; }
        if (ctx->pc != 0x374940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160C00_0x160c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374940u; }
        if (ctx->pc != 0x374940u) { return; }
    }
    ctx->pc = 0x374940u;
label_374940:
    // 0x374940: 0xae000d94  sw          $zero, 0xD94($s0)
    ctx->pc = 0x374940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3476), GPR_U32(ctx, 0));
label_374944:
    // 0x374944: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x374944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_374948:
    // 0x374948: 0xae000d98  sw          $zero, 0xD98($s0)
    ctx->pc = 0x374948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3480), GPR_U32(ctx, 0));
label_37494c:
    // 0x37494c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x37494cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_374950:
    // 0x374950: 0xae020d9c  sw          $v0, 0xD9C($s0)
    ctx->pc = 0x374950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3484), GPR_U32(ctx, 2));
label_374954:
    // 0x374954: 0x2406002f  addiu       $a2, $zero, 0x2F
    ctx->pc = 0x374954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_374958:
    // 0x374958: 0xae000da0  sw          $zero, 0xDA0($s0)
    ctx->pc = 0x374958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3488), GPR_U32(ctx, 0));
label_37495c:
    // 0x37495c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x37495cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_374960:
    // 0x374960: 0xae000da4  sw          $zero, 0xDA4($s0)
    ctx->pc = 0x374960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3492), GPR_U32(ctx, 0));
label_374964:
    // 0x374964: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x374964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_374968:
    // 0x374968: 0xae000da8  sw          $zero, 0xDA8($s0)
    ctx->pc = 0x374968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3496), GPR_U32(ctx, 0));
label_37496c:
    // 0x37496c: 0x26041150  addiu       $a0, $s0, 0x1150
    ctx->pc = 0x37496cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4432));
label_374970:
    // 0x374970: 0xae000dac  sw          $zero, 0xDAC($s0)
    ctx->pc = 0x374970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3500), GPR_U32(ctx, 0));
label_374974:
    // 0x374974: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x374974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_374978:
    // 0x374978: 0xae070db0  sw          $a3, 0xDB0($s0)
    ctx->pc = 0x374978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3504), GPR_U32(ctx, 7));
label_37497c:
    // 0x37497c: 0xae070db4  sw          $a3, 0xDB4($s0)
    ctx->pc = 0x37497cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3508), GPR_U32(ctx, 7));
label_374980:
    // 0x374980: 0xae060db8  sw          $a2, 0xDB8($s0)
    ctx->pc = 0x374980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3512), GPR_U32(ctx, 6));
label_374984:
    // 0x374984: 0xae030dbc  sw          $v1, 0xDBC($s0)
    ctx->pc = 0x374984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3516), GPR_U32(ctx, 3));
label_374988:
    // 0x374988: 0xae000dc0  sw          $zero, 0xDC0($s0)
    ctx->pc = 0x374988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3520), GPR_U32(ctx, 0));
label_37498c:
    // 0x37498c: 0xae000dc4  sw          $zero, 0xDC4($s0)
    ctx->pc = 0x37498cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3524), GPR_U32(ctx, 0));
label_374990:
    // 0x374990: 0xae000dc8  sw          $zero, 0xDC8($s0)
    ctx->pc = 0x374990u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3528), GPR_U32(ctx, 0));
label_374994:
    // 0x374994: 0xae000dcc  sw          $zero, 0xDCC($s0)
    ctx->pc = 0x374994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3532), GPR_U32(ctx, 0));
label_374998:
    // 0x374998: 0xae000dd0  sw          $zero, 0xDD0($s0)
    ctx->pc = 0x374998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3536), GPR_U32(ctx, 0));
label_37499c:
    // 0x37499c: 0xae000dd4  sw          $zero, 0xDD4($s0)
    ctx->pc = 0x37499cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3540), GPR_U32(ctx, 0));
label_3749a0:
    // 0x3749a0: 0xae000dd8  sw          $zero, 0xDD8($s0)
    ctx->pc = 0x3749a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3544), GPR_U32(ctx, 0));
label_3749a4:
    // 0x3749a4: 0xae000ddc  sw          $zero, 0xDDC($s0)
    ctx->pc = 0x3749a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3548), GPR_U32(ctx, 0));
label_3749a8:
    // 0x3749a8: 0xae030de0  sw          $v1, 0xDE0($s0)
    ctx->pc = 0x3749a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3552), GPR_U32(ctx, 3));
label_3749ac:
    // 0x3749ac: 0xae000de4  sw          $zero, 0xDE4($s0)
    ctx->pc = 0x3749acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3556), GPR_U32(ctx, 0));
label_3749b0:
    // 0x3749b0: 0xae000de8  sw          $zero, 0xDE8($s0)
    ctx->pc = 0x3749b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3560), GPR_U32(ctx, 0));
label_3749b4:
    // 0x3749b4: 0xae000dec  sw          $zero, 0xDEC($s0)
    ctx->pc = 0x3749b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3564), GPR_U32(ctx, 0));
label_3749b8:
    // 0x3749b8: 0xae030df0  sw          $v1, 0xDF0($s0)
    ctx->pc = 0x3749b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3568), GPR_U32(ctx, 3));
label_3749bc:
    // 0x3749bc: 0xae000df4  sw          $zero, 0xDF4($s0)
    ctx->pc = 0x3749bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3572), GPR_U32(ctx, 0));
label_3749c0:
    // 0x3749c0: 0xae000df8  sw          $zero, 0xDF8($s0)
    ctx->pc = 0x3749c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3576), GPR_U32(ctx, 0));
label_3749c4:
    // 0x3749c4: 0xae000dfc  sw          $zero, 0xDFC($s0)
    ctx->pc = 0x3749c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3580), GPR_U32(ctx, 0));
label_3749c8:
    // 0x3749c8: 0xae000e00  sw          $zero, 0xE00($s0)
    ctx->pc = 0x3749c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3584), GPR_U32(ctx, 0));
label_3749cc:
    // 0x3749cc: 0xae000e04  sw          $zero, 0xE04($s0)
    ctx->pc = 0x3749ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3588), GPR_U32(ctx, 0));
label_3749d0:
    // 0x3749d0: 0xae030e08  sw          $v1, 0xE08($s0)
    ctx->pc = 0x3749d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3592), GPR_U32(ctx, 3));
label_3749d4:
    // 0x3749d4: 0xae000e0c  sw          $zero, 0xE0C($s0)
    ctx->pc = 0x3749d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3596), GPR_U32(ctx, 0));
label_3749d8:
    // 0x3749d8: 0xae000e10  sw          $zero, 0xE10($s0)
    ctx->pc = 0x3749d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3600), GPR_U32(ctx, 0));
label_3749dc:
    // 0x3749dc: 0xae000e14  sw          $zero, 0xE14($s0)
    ctx->pc = 0x3749dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3604), GPR_U32(ctx, 0));
label_3749e0:
    // 0x3749e0: 0xae000e18  sw          $zero, 0xE18($s0)
    ctx->pc = 0x3749e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3608), GPR_U32(ctx, 0));
label_3749e4:
    // 0x3749e4: 0xae000e28  sw          $zero, 0xE28($s0)
    ctx->pc = 0x3749e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3624), GPR_U32(ctx, 0));
label_3749e8:
    // 0x3749e8: 0xae000e2c  sw          $zero, 0xE2C($s0)
    ctx->pc = 0x3749e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3628), GPR_U32(ctx, 0));
label_3749ec:
    // 0x3749ec: 0xae000e30  sw          $zero, 0xE30($s0)
    ctx->pc = 0x3749ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3632), GPR_U32(ctx, 0));
label_3749f0:
    // 0x3749f0: 0xae020e34  sw          $v0, 0xE34($s0)
    ctx->pc = 0x3749f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3636), GPR_U32(ctx, 2));
label_3749f4:
    // 0x3749f4: 0xae020e38  sw          $v0, 0xE38($s0)
    ctx->pc = 0x3749f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3640), GPR_U32(ctx, 2));
label_3749f8:
    // 0x3749f8: 0xa2000e3c  sb          $zero, 0xE3C($s0)
    ctx->pc = 0x3749f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3644), (uint8_t)GPR_U32(ctx, 0));
label_3749fc:
    // 0x3749fc: 0xa2000e3d  sb          $zero, 0xE3D($s0)
    ctx->pc = 0x3749fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3645), (uint8_t)GPR_U32(ctx, 0));
label_374a00:
    // 0x374a00: 0xa2000e3e  sb          $zero, 0xE3E($s0)
    ctx->pc = 0x374a00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3646), (uint8_t)GPR_U32(ctx, 0));
label_374a04:
    // 0x374a04: 0xa2000e3f  sb          $zero, 0xE3F($s0)
    ctx->pc = 0x374a04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3647), (uint8_t)GPR_U32(ctx, 0));
label_374a08:
    // 0x374a08: 0xae000e48  sw          $zero, 0xE48($s0)
    ctx->pc = 0x374a08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3656), GPR_U32(ctx, 0));
label_374a0c:
    // 0x374a0c: 0xae000e4c  sw          $zero, 0xE4C($s0)
    ctx->pc = 0x374a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3660), GPR_U32(ctx, 0));
label_374a10:
    // 0x374a10: 0xae000e50  sw          $zero, 0xE50($s0)
    ctx->pc = 0x374a10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3664), GPR_U32(ctx, 0));
label_374a14:
    // 0x374a14: 0xae000e54  sw          $zero, 0xE54($s0)
    ctx->pc = 0x374a14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3668), GPR_U32(ctx, 0));
label_374a18:
    // 0x374a18: 0xae000e58  sw          $zero, 0xE58($s0)
    ctx->pc = 0x374a18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3672), GPR_U32(ctx, 0));
label_374a1c:
    // 0x374a1c: 0xae000e5c  sw          $zero, 0xE5C($s0)
    ctx->pc = 0x374a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3676), GPR_U32(ctx, 0));
label_374a20:
    // 0x374a20: 0xae000e60  sw          $zero, 0xE60($s0)
    ctx->pc = 0x374a20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3680), GPR_U32(ctx, 0));
label_374a24:
    // 0x374a24: 0xae000e64  sw          $zero, 0xE64($s0)
    ctx->pc = 0x374a24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3684), GPR_U32(ctx, 0));
label_374a28:
    // 0x374a28: 0xae000e68  sw          $zero, 0xE68($s0)
    ctx->pc = 0x374a28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3688), GPR_U32(ctx, 0));
label_374a2c:
    // 0x374a2c: 0xae000e6c  sw          $zero, 0xE6C($s0)
    ctx->pc = 0x374a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3692), GPR_U32(ctx, 0));
label_374a30:
    // 0x374a30: 0xae000e70  sw          $zero, 0xE70($s0)
    ctx->pc = 0x374a30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3696), GPR_U32(ctx, 0));
label_374a34:
    // 0x374a34: 0xae000e74  sw          $zero, 0xE74($s0)
    ctx->pc = 0x374a34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3700), GPR_U32(ctx, 0));
label_374a38:
    // 0x374a38: 0xae001140  sw          $zero, 0x1140($s0)
    ctx->pc = 0x374a38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4416), GPR_U32(ctx, 0));
label_374a3c:
    // 0x374a3c: 0xae001144  sw          $zero, 0x1144($s0)
    ctx->pc = 0x374a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4420), GPR_U32(ctx, 0));
label_374a40:
    // 0x374a40: 0xae001148  sw          $zero, 0x1148($s0)
    ctx->pc = 0x374a40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4424), GPR_U32(ctx, 0));
label_374a44:
    // 0x374a44: 0xc12cac0  jal         func_4B2B00
label_374a48:
    if (ctx->pc == 0x374A48u) {
        ctx->pc = 0x374A48u;
            // 0x374a48: 0xae00114c  sw          $zero, 0x114C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4428), GPR_U32(ctx, 0));
        ctx->pc = 0x374A4Cu;
        goto label_374a4c;
    }
    ctx->pc = 0x374A44u;
    SET_GPR_U32(ctx, 31, 0x374A4Cu);
    ctx->pc = 0x374A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374A44u;
            // 0x374a48: 0xae00114c  sw          $zero, 0x114C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4428), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B2B00u;
    if (runtime->hasFunction(0x4B2B00u)) {
        auto targetFn = runtime->lookupFunction(0x4B2B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374A4Cu; }
        if (ctx->pc != 0x374A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B2B00_0x4b2b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374A4Cu; }
        if (ctx->pc != 0x374A4Cu) { return; }
    }
    ctx->pc = 0x374A4Cu;
label_374a4c:
    // 0x374a4c: 0xae00117c  sw          $zero, 0x117C($s0)
    ctx->pc = 0x374a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4476), GPR_U32(ctx, 0));
label_374a50:
    // 0x374a50: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x374a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_374a54:
    // 0x374a54: 0xae001180  sw          $zero, 0x1180($s0)
    ctx->pc = 0x374a54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4480), GPR_U32(ctx, 0));
label_374a58:
    // 0x374a58: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x374a58u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
label_374a5c:
    // 0x374a5c: 0xae001188  sw          $zero, 0x1188($s0)
    ctx->pc = 0x374a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4488), GPR_U32(ctx, 0));
label_374a60:
    // 0x374a60: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x374a60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_374a64:
    // 0x374a64: 0xae001190  sw          $zero, 0x1190($s0)
    ctx->pc = 0x374a64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4496), GPR_U32(ctx, 0));
label_374a68:
    // 0x374a68: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x374a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_374a6c:
    // 0x374a6c: 0xae081194  sw          $t0, 0x1194($s0)
    ctx->pc = 0x374a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4500), GPR_U32(ctx, 8));
label_374a70:
    // 0x374a70: 0xc440c6d8  lwc1        $f0, -0x3928($v0)
    ctx->pc = 0x374a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_374a74:
    // 0x374a74: 0xae001198  sw          $zero, 0x1198($s0)
    ctx->pc = 0x374a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4504), GPR_U32(ctx, 0));
label_374a78:
    // 0x374a78: 0x260411f4  addiu       $a0, $s0, 0x11F4
    ctx->pc = 0x374a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4596));
label_374a7c:
    // 0x374a7c: 0xa600119c  sh          $zero, 0x119C($s0)
    ctx->pc = 0x374a7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4508), (uint16_t)GPR_U32(ctx, 0));
label_374a80:
    // 0x374a80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x374a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_374a84:
    // 0x374a84: 0xa200119e  sb          $zero, 0x119E($s0)
    ctx->pc = 0x374a84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4510), (uint8_t)GPR_U32(ctx, 0));
label_374a88:
    // 0x374a88: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x374a88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_374a8c:
    // 0x374a8c: 0xa20711a1  sb          $a3, 0x11A1($s0)
    ctx->pc = 0x374a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4513), (uint8_t)GPR_U32(ctx, 7));
label_374a90:
    // 0x374a90: 0xa20711a4  sb          $a3, 0x11A4($s0)
    ctx->pc = 0x374a90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4516), (uint8_t)GPR_U32(ctx, 7));
label_374a94:
    // 0x374a94: 0xa20711a5  sb          $a3, 0x11A5($s0)
    ctx->pc = 0x374a94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4517), (uint8_t)GPR_U32(ctx, 7));
label_374a98:
    // 0x374a98: 0xa20011a6  sb          $zero, 0x11A6($s0)
    ctx->pc = 0x374a98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4518), (uint8_t)GPR_U32(ctx, 0));
label_374a9c:
    // 0x374a9c: 0xa20011a7  sb          $zero, 0x11A7($s0)
    ctx->pc = 0x374a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4519), (uint8_t)GPR_U32(ctx, 0));
label_374aa0:
    // 0x374aa0: 0xa20311a8  sb          $v1, 0x11A8($s0)
    ctx->pc = 0x374aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4520), (uint8_t)GPR_U32(ctx, 3));
label_374aa4:
    // 0x374aa4: 0xa20011a9  sb          $zero, 0x11A9($s0)
    ctx->pc = 0x374aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4521), (uint8_t)GPR_U32(ctx, 0));
label_374aa8:
    // 0x374aa8: 0xa20311aa  sb          $v1, 0x11AA($s0)
    ctx->pc = 0x374aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4522), (uint8_t)GPR_U32(ctx, 3));
label_374aac:
    // 0x374aac: 0xa20311ab  sb          $v1, 0x11AB($s0)
    ctx->pc = 0x374aacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4523), (uint8_t)GPR_U32(ctx, 3));
label_374ab0:
    // 0x374ab0: 0xa20011ac  sb          $zero, 0x11AC($s0)
    ctx->pc = 0x374ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4524), (uint8_t)GPR_U32(ctx, 0));
label_374ab4:
    // 0x374ab4: 0xa20311ad  sb          $v1, 0x11AD($s0)
    ctx->pc = 0x374ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4525), (uint8_t)GPR_U32(ctx, 3));
label_374ab8:
    // 0x374ab8: 0xa20011c0  sb          $zero, 0x11C0($s0)
    ctx->pc = 0x374ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4544), (uint8_t)GPR_U32(ctx, 0));
label_374abc:
    // 0x374abc: 0xae0011c4  sw          $zero, 0x11C4($s0)
    ctx->pc = 0x374abcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4548), GPR_U32(ctx, 0));
label_374ac0:
    // 0x374ac0: 0xae0011c8  sw          $zero, 0x11C8($s0)
    ctx->pc = 0x374ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4552), GPR_U32(ctx, 0));
label_374ac4:
    // 0x374ac4: 0xa20011cc  sb          $zero, 0x11CC($s0)
    ctx->pc = 0x374ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4556), (uint8_t)GPR_U32(ctx, 0));
label_374ac8:
    // 0x374ac8: 0xae0811d0  sw          $t0, 0x11D0($s0)
    ctx->pc = 0x374ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4560), GPR_U32(ctx, 8));
label_374acc:
    // 0x374acc: 0xae0011d4  sw          $zero, 0x11D4($s0)
    ctx->pc = 0x374accu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4564), GPR_U32(ctx, 0));
label_374ad0:
    // 0x374ad0: 0xae0011d8  sw          $zero, 0x11D8($s0)
    ctx->pc = 0x374ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4568), GPR_U32(ctx, 0));
label_374ad4:
    // 0x374ad4: 0xae0711dc  sw          $a3, 0x11DC($s0)
    ctx->pc = 0x374ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4572), GPR_U32(ctx, 7));
label_374ad8:
    // 0x374ad8: 0xae0011e0  sw          $zero, 0x11E0($s0)
    ctx->pc = 0x374ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4576), GPR_U32(ctx, 0));
label_374adc:
    // 0x374adc: 0xae0011e4  sw          $zero, 0x11E4($s0)
    ctx->pc = 0x374adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4580), GPR_U32(ctx, 0));
label_374ae0:
    // 0x374ae0: 0xc04a576  jal         func_1295D8
label_374ae4:
    if (ctx->pc == 0x374AE4u) {
        ctx->pc = 0x374AE4u;
            // 0x374ae4: 0xe6001204  swc1        $f0, 0x1204($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4612), bits); }
        ctx->pc = 0x374AE8u;
        goto label_374ae8;
    }
    ctx->pc = 0x374AE0u;
    SET_GPR_U32(ctx, 31, 0x374AE8u);
    ctx->pc = 0x374AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374AE0u;
            // 0x374ae4: 0xe6001204  swc1        $f0, 0x1204($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4612), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374AE8u; }
        if (ctx->pc != 0x374AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374AE8u; }
        if (ctx->pc != 0x374AE8u) { return; }
    }
    ctx->pc = 0x374AE8u;
label_374ae8:
    // 0x374ae8: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x374ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_374aec:
    // 0x374aec: 0x26041208  addiu       $a0, $s0, 0x1208
    ctx->pc = 0x374aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4616));
label_374af0:
    // 0x374af0: 0xc440c6e0  lwc1        $f0, -0x3920($v0)
    ctx->pc = 0x374af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_374af4:
    // 0x374af4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x374af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_374af8:
    // 0x374af8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x374af8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_374afc:
    // 0x374afc: 0xc04a576  jal         func_1295D8
label_374b00:
    if (ctx->pc == 0x374B00u) {
        ctx->pc = 0x374B00u;
            // 0x374b00: 0xe6001218  swc1        $f0, 0x1218($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4632), bits); }
        ctx->pc = 0x374B04u;
        goto label_374b04;
    }
    ctx->pc = 0x374AFCu;
    SET_GPR_U32(ctx, 31, 0x374B04u);
    ctx->pc = 0x374B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374AFCu;
            // 0x374b00: 0xe6001218  swc1        $f0, 0x1218($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4632), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374B04u; }
        if (ctx->pc != 0x374B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374B04u; }
        if (ctx->pc != 0x374B04u) { return; }
    }
    ctx->pc = 0x374B04u;
label_374b04:
    // 0x374b04: 0xae00121c  sw          $zero, 0x121C($s0)
    ctx->pc = 0x374b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4636), GPR_U32(ctx, 0));
label_374b08:
    // 0x374b08: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x374b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_374b0c:
    // 0x374b0c: 0xae021220  sw          $v0, 0x1220($s0)
    ctx->pc = 0x374b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4640), GPR_U32(ctx, 2));
label_374b10:
    // 0x374b10: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x374b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_374b14:
    // 0x374b14: 0xae001224  sw          $zero, 0x1224($s0)
    ctx->pc = 0x374b14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4644), GPR_U32(ctx, 0));
label_374b18:
    // 0x374b18: 0xc040180  jal         func_100600
label_374b1c:
    if (ctx->pc == 0x374B1Cu) {
        ctx->pc = 0x374B1Cu;
            // 0x374b1c: 0xae00122c  sw          $zero, 0x122C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4652), GPR_U32(ctx, 0));
        ctx->pc = 0x374B20u;
        goto label_374b20;
    }
    ctx->pc = 0x374B18u;
    SET_GPR_U32(ctx, 31, 0x374B20u);
    ctx->pc = 0x374B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374B18u;
            // 0x374b1c: 0xae00122c  sw          $zero, 0x122C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4652), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374B20u; }
        if (ctx->pc != 0x374B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374B20u; }
        if (ctx->pc != 0x374B20u) { return; }
    }
    ctx->pc = 0x374B20u;
label_374b20:
    // 0x374b20: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_374b24:
    if (ctx->pc == 0x374B24u) {
        ctx->pc = 0x374B24u;
            // 0x374b24: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x374B28u;
        goto label_374b28;
    }
    ctx->pc = 0x374B20u;
    {
        const bool branch_taken_0x374b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x374B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x374B20u;
            // 0x374b24: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374b20) {
            ctx->pc = 0x374B6Cu;
            goto label_374b6c;
        }
    }
    ctx->pc = 0x374B28u;
label_374b28:
    // 0x374b28: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x374b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_374b2c:
    // 0x374b2c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x374b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_374b30:
    // 0x374b30: 0x2442cf10  addiu       $v0, $v0, -0x30F0
    ctx->pc = 0x374b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954768));
label_374b34:
    // 0x374b34: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x374b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_374b38:
    // 0x374b38: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x374b38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_374b3c:
    // 0x374b3c: 0x24a5cfe0  addiu       $a1, $a1, -0x3020
    ctx->pc = 0x374b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954976));
label_374b40:
    // 0x374b40: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x374b40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_374b44:
    // 0x374b44: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x374b44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_374b48:
    // 0x374b48: 0xc04a508  jal         func_129420
label_374b4c:
    if (ctx->pc == 0x374B4Cu) {
        ctx->pc = 0x374B4Cu;
            // 0x374b4c: 0xa220001c  sb          $zero, 0x1C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 28), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x374B50u;
        goto label_374b50;
    }
    ctx->pc = 0x374B48u;
    SET_GPR_U32(ctx, 31, 0x374B50u);
    ctx->pc = 0x374B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374B48u;
            // 0x374b4c: 0xa220001c  sb          $zero, 0x1C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 28), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374B50u; }
        if (ctx->pc != 0x374B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374B50u; }
        if (ctx->pc != 0x374B50u) { return; }
    }
    ctx->pc = 0x374B50u;
label_374b50:
    // 0x374b50: 0x8e390030  lw          $t9, 0x30($s1)
    ctx->pc = 0x374b50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_374b54:
    // 0x374b54: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x374b54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_374b58:
    // 0x374b58: 0x320f809  jalr        $t9
label_374b5c:
    if (ctx->pc == 0x374B5Cu) {
        ctx->pc = 0x374B5Cu;
            // 0x374b5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x374B60u;
        goto label_374b60;
    }
    ctx->pc = 0x374B58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x374B60u);
        ctx->pc = 0x374B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x374B58u;
            // 0x374b5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x374B60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x374B60u; }
            if (ctx->pc != 0x374B60u) { return; }
        }
        }
    }
    ctx->pc = 0x374B60u;
label_374b60:
    // 0x374b60: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x374b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_374b64:
    // 0x374b64: 0x244273a0  addiu       $v0, $v0, 0x73A0
    ctx->pc = 0x374b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29600));
label_374b68:
    // 0x374b68: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x374b68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_374b6c:
    // 0x374b6c: 0xae110d60  sw          $s1, 0xD60($s0)
    ctx->pc = 0x374b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3424), GPR_U32(ctx, 17));
label_374b70:
    // 0x374b70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x374b70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_374b74:
    // 0x374b74: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x374b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_374b78:
    // 0x374b78: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x374b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_374b7c:
    // 0x374b7c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x374b7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_374b80:
    // 0x374b80: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x374b80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_374b84:
    // 0x374b84: 0x3e00008  jr          $ra
label_374b88:
    if (ctx->pc == 0x374B88u) {
        ctx->pc = 0x374B88u;
            // 0x374b88: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x374B8Cu;
        goto label_374b8c;
    }
    ctx->pc = 0x374B84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x374B84u;
            // 0x374b88: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x374B8Cu;
label_374b8c:
    // 0x374b8c: 0x0  nop
    ctx->pc = 0x374b8cu;
    // NOP
label_374b90:
    // 0x374b90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x374b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_374b94:
    // 0x374b94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x374b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_374b98:
    // 0x374b98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x374b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_374b9c:
    // 0x374b9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x374b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_374ba0:
    // 0x374ba0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x374ba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_374ba4:
    // 0x374ba4: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
label_374ba8:
    if (ctx->pc == 0x374BA8u) {
        ctx->pc = 0x374BA8u;
            // 0x374ba8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x374BACu;
        goto label_374bac;
    }
    ctx->pc = 0x374BA4u;
    {
        const bool branch_taken_0x374ba4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x374BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x374BA4u;
            // 0x374ba8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374ba4) {
            ctx->pc = 0x374C44u;
            goto label_374c44;
        }
    }
    ctx->pc = 0x374BACu;
label_374bac:
    // 0x374bac: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x374bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_374bb0:
    // 0x374bb0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x374bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_374bb4:
    // 0x374bb4: 0x24636f70  addiu       $v1, $v1, 0x6F70
    ctx->pc = 0x374bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28528));
label_374bb8:
    // 0x374bb8: 0x24426fa8  addiu       $v0, $v0, 0x6FA8
    ctx->pc = 0x374bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28584));
label_374bbc:
    // 0x374bbc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x374bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_374bc0:
    // 0x374bc0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_374bc4:
    if (ctx->pc == 0x374BC4u) {
        ctx->pc = 0x374BC4u;
            // 0x374bc4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x374BC8u;
        goto label_374bc8;
    }
    ctx->pc = 0x374BC0u;
    {
        const bool branch_taken_0x374bc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x374BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x374BC0u;
            // 0x374bc4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374bc0) {
            ctx->pc = 0x374C2Cu;
            goto label_374c2c;
        }
    }
    ctx->pc = 0x374BC8u;
label_374bc8:
    // 0x374bc8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x374bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_374bcc:
    // 0x374bcc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x374bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_374bd0:
    // 0x374bd0: 0x24636fd0  addiu       $v1, $v1, 0x6FD0
    ctx->pc = 0x374bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28624));
label_374bd4:
    // 0x374bd4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x374bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_374bd8:
    // 0x374bd8: 0x24427008  addiu       $v0, $v0, 0x7008
    ctx->pc = 0x374bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28680));
label_374bdc:
    // 0x374bdc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x374bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_374be0:
    // 0x374be0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x374be0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_374be4:
    // 0x374be4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x374be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_374be8:
    // 0x374be8: 0xc0407c0  jal         func_101F00
label_374bec:
    if (ctx->pc == 0x374BECu) {
        ctx->pc = 0x374BECu;
            // 0x374bec: 0x24a54d30  addiu       $a1, $a1, 0x4D30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19760));
        ctx->pc = 0x374BF0u;
        goto label_374bf0;
    }
    ctx->pc = 0x374BE8u;
    SET_GPR_U32(ctx, 31, 0x374BF0u);
    ctx->pc = 0x374BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374BE8u;
            // 0x374bec: 0x24a54d30  addiu       $a1, $a1, 0x4D30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374BF0u; }
        if (ctx->pc != 0x374BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374BF0u; }
        if (ctx->pc != 0x374BF0u) { return; }
    }
    ctx->pc = 0x374BF0u;
label_374bf0:
    // 0x374bf0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x374bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_374bf4:
    // 0x374bf4: 0xc0a8cf8  jal         func_2A33E0
label_374bf8:
    if (ctx->pc == 0x374BF8u) {
        ctx->pc = 0x374BF8u;
            // 0x374bf8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x374BFCu;
        goto label_374bfc;
    }
    ctx->pc = 0x374BF4u;
    SET_GPR_U32(ctx, 31, 0x374BFCu);
    ctx->pc = 0x374BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374BF4u;
            // 0x374bf8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374BFCu; }
        if (ctx->pc != 0x374BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374BFCu; }
        if (ctx->pc != 0x374BFCu) { return; }
    }
    ctx->pc = 0x374BFCu;
label_374bfc:
    // 0x374bfc: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x374bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_374c00:
    // 0x374c00: 0xc0dd330  jal         func_374CC0
label_374c04:
    if (ctx->pc == 0x374C04u) {
        ctx->pc = 0x374C04u;
            // 0x374c04: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x374C08u;
        goto label_374c08;
    }
    ctx->pc = 0x374C00u;
    SET_GPR_U32(ctx, 31, 0x374C08u);
    ctx->pc = 0x374C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374C00u;
            // 0x374c04: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x374CC0u;
    if (runtime->hasFunction(0x374CC0u)) {
        auto targetFn = runtime->lookupFunction(0x374CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374C08u; }
        if (ctx->pc != 0x374C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00374CC0_0x374cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374C08u; }
        if (ctx->pc != 0x374C08u) { return; }
    }
    ctx->pc = 0x374C08u;
label_374c08:
    // 0x374c08: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x374c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_374c0c:
    // 0x374c0c: 0xc0dd330  jal         func_374CC0
label_374c10:
    if (ctx->pc == 0x374C10u) {
        ctx->pc = 0x374C10u;
            // 0x374c10: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x374C14u;
        goto label_374c14;
    }
    ctx->pc = 0x374C0Cu;
    SET_GPR_U32(ctx, 31, 0x374C14u);
    ctx->pc = 0x374C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374C0Cu;
            // 0x374c10: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x374CC0u;
    if (runtime->hasFunction(0x374CC0u)) {
        auto targetFn = runtime->lookupFunction(0x374CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374C14u; }
        if (ctx->pc != 0x374C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00374CC0_0x374cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374C14u; }
        if (ctx->pc != 0x374C14u) { return; }
    }
    ctx->pc = 0x374C14u;
label_374c14:
    // 0x374c14: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x374c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
label_374c18:
    // 0x374c18: 0xc0dd318  jal         func_374C60
label_374c1c:
    if (ctx->pc == 0x374C1Cu) {
        ctx->pc = 0x374C1Cu;
            // 0x374c1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x374C20u;
        goto label_374c20;
    }
    ctx->pc = 0x374C18u;
    SET_GPR_U32(ctx, 31, 0x374C20u);
    ctx->pc = 0x374C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374C18u;
            // 0x374c1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x374C60u;
    if (runtime->hasFunction(0x374C60u)) {
        auto targetFn = runtime->lookupFunction(0x374C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374C20u; }
        if (ctx->pc != 0x374C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00374C60_0x374c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374C20u; }
        if (ctx->pc != 0x374C20u) { return; }
    }
    ctx->pc = 0x374C20u;
label_374c20:
    // 0x374c20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x374c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_374c24:
    // 0x374c24: 0xc0ae1c0  jal         func_2B8700
label_374c28:
    if (ctx->pc == 0x374C28u) {
        ctx->pc = 0x374C28u;
            // 0x374c28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x374C2Cu;
        goto label_374c2c;
    }
    ctx->pc = 0x374C24u;
    SET_GPR_U32(ctx, 31, 0x374C2Cu);
    ctx->pc = 0x374C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374C24u;
            // 0x374c28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374C2Cu; }
        if (ctx->pc != 0x374C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374C2Cu; }
        if (ctx->pc != 0x374C2Cu) { return; }
    }
    ctx->pc = 0x374C2Cu;
label_374c2c:
    // 0x374c2c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x374c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_374c30:
    // 0x374c30: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x374c30u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_374c34:
    // 0x374c34: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_374c38:
    if (ctx->pc == 0x374C38u) {
        ctx->pc = 0x374C38u;
            // 0x374c38: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x374C3Cu;
        goto label_374c3c;
    }
    ctx->pc = 0x374C34u;
    {
        const bool branch_taken_0x374c34 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x374c34) {
            ctx->pc = 0x374C38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x374C34u;
            // 0x374c38: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x374C48u;
            goto label_374c48;
        }
    }
    ctx->pc = 0x374C3Cu;
label_374c3c:
    // 0x374c3c: 0xc0400a8  jal         func_1002A0
label_374c40:
    if (ctx->pc == 0x374C40u) {
        ctx->pc = 0x374C40u;
            // 0x374c40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x374C44u;
        goto label_374c44;
    }
    ctx->pc = 0x374C3Cu;
    SET_GPR_U32(ctx, 31, 0x374C44u);
    ctx->pc = 0x374C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374C3Cu;
            // 0x374c40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374C44u; }
        if (ctx->pc != 0x374C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374C44u; }
        if (ctx->pc != 0x374C44u) { return; }
    }
    ctx->pc = 0x374C44u;
label_374c44:
    // 0x374c44: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x374c44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_374c48:
    // 0x374c48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x374c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_374c4c:
    // 0x374c4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x374c4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_374c50:
    // 0x374c50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x374c50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_374c54:
    // 0x374c54: 0x3e00008  jr          $ra
label_374c58:
    if (ctx->pc == 0x374C58u) {
        ctx->pc = 0x374C58u;
            // 0x374c58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x374C5Cu;
        goto label_374c5c;
    }
    ctx->pc = 0x374C54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x374C54u;
            // 0x374c58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x374C5Cu;
label_374c5c:
    // 0x374c5c: 0x0  nop
    ctx->pc = 0x374c5cu;
    // NOP
}
