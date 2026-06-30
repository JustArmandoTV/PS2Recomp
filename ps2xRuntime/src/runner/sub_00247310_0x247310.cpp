#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00247310
// Address: 0x247310 - 0x248420
void sub_00247310_0x247310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247310_0x247310");
#endif

    switch (ctx->pc) {
        case 0x247310u: goto label_247310;
        case 0x247314u: goto label_247314;
        case 0x247318u: goto label_247318;
        case 0x24731cu: goto label_24731c;
        case 0x247320u: goto label_247320;
        case 0x247324u: goto label_247324;
        case 0x247328u: goto label_247328;
        case 0x24732cu: goto label_24732c;
        case 0x247330u: goto label_247330;
        case 0x247334u: goto label_247334;
        case 0x247338u: goto label_247338;
        case 0x24733cu: goto label_24733c;
        case 0x247340u: goto label_247340;
        case 0x247344u: goto label_247344;
        case 0x247348u: goto label_247348;
        case 0x24734cu: goto label_24734c;
        case 0x247350u: goto label_247350;
        case 0x247354u: goto label_247354;
        case 0x247358u: goto label_247358;
        case 0x24735cu: goto label_24735c;
        case 0x247360u: goto label_247360;
        case 0x247364u: goto label_247364;
        case 0x247368u: goto label_247368;
        case 0x24736cu: goto label_24736c;
        case 0x247370u: goto label_247370;
        case 0x247374u: goto label_247374;
        case 0x247378u: goto label_247378;
        case 0x24737cu: goto label_24737c;
        case 0x247380u: goto label_247380;
        case 0x247384u: goto label_247384;
        case 0x247388u: goto label_247388;
        case 0x24738cu: goto label_24738c;
        case 0x247390u: goto label_247390;
        case 0x247394u: goto label_247394;
        case 0x247398u: goto label_247398;
        case 0x24739cu: goto label_24739c;
        case 0x2473a0u: goto label_2473a0;
        case 0x2473a4u: goto label_2473a4;
        case 0x2473a8u: goto label_2473a8;
        case 0x2473acu: goto label_2473ac;
        case 0x2473b0u: goto label_2473b0;
        case 0x2473b4u: goto label_2473b4;
        case 0x2473b8u: goto label_2473b8;
        case 0x2473bcu: goto label_2473bc;
        case 0x2473c0u: goto label_2473c0;
        case 0x2473c4u: goto label_2473c4;
        case 0x2473c8u: goto label_2473c8;
        case 0x2473ccu: goto label_2473cc;
        case 0x2473d0u: goto label_2473d0;
        case 0x2473d4u: goto label_2473d4;
        case 0x2473d8u: goto label_2473d8;
        case 0x2473dcu: goto label_2473dc;
        case 0x2473e0u: goto label_2473e0;
        case 0x2473e4u: goto label_2473e4;
        case 0x2473e8u: goto label_2473e8;
        case 0x2473ecu: goto label_2473ec;
        case 0x2473f0u: goto label_2473f0;
        case 0x2473f4u: goto label_2473f4;
        case 0x2473f8u: goto label_2473f8;
        case 0x2473fcu: goto label_2473fc;
        case 0x247400u: goto label_247400;
        case 0x247404u: goto label_247404;
        case 0x247408u: goto label_247408;
        case 0x24740cu: goto label_24740c;
        case 0x247410u: goto label_247410;
        case 0x247414u: goto label_247414;
        case 0x247418u: goto label_247418;
        case 0x24741cu: goto label_24741c;
        case 0x247420u: goto label_247420;
        case 0x247424u: goto label_247424;
        case 0x247428u: goto label_247428;
        case 0x24742cu: goto label_24742c;
        case 0x247430u: goto label_247430;
        case 0x247434u: goto label_247434;
        case 0x247438u: goto label_247438;
        case 0x24743cu: goto label_24743c;
        case 0x247440u: goto label_247440;
        case 0x247444u: goto label_247444;
        case 0x247448u: goto label_247448;
        case 0x24744cu: goto label_24744c;
        case 0x247450u: goto label_247450;
        case 0x247454u: goto label_247454;
        case 0x247458u: goto label_247458;
        case 0x24745cu: goto label_24745c;
        case 0x247460u: goto label_247460;
        case 0x247464u: goto label_247464;
        case 0x247468u: goto label_247468;
        case 0x24746cu: goto label_24746c;
        case 0x247470u: goto label_247470;
        case 0x247474u: goto label_247474;
        case 0x247478u: goto label_247478;
        case 0x24747cu: goto label_24747c;
        case 0x247480u: goto label_247480;
        case 0x247484u: goto label_247484;
        case 0x247488u: goto label_247488;
        case 0x24748cu: goto label_24748c;
        case 0x247490u: goto label_247490;
        case 0x247494u: goto label_247494;
        case 0x247498u: goto label_247498;
        case 0x24749cu: goto label_24749c;
        case 0x2474a0u: goto label_2474a0;
        case 0x2474a4u: goto label_2474a4;
        case 0x2474a8u: goto label_2474a8;
        case 0x2474acu: goto label_2474ac;
        case 0x2474b0u: goto label_2474b0;
        case 0x2474b4u: goto label_2474b4;
        case 0x2474b8u: goto label_2474b8;
        case 0x2474bcu: goto label_2474bc;
        case 0x2474c0u: goto label_2474c0;
        case 0x2474c4u: goto label_2474c4;
        case 0x2474c8u: goto label_2474c8;
        case 0x2474ccu: goto label_2474cc;
        case 0x2474d0u: goto label_2474d0;
        case 0x2474d4u: goto label_2474d4;
        case 0x2474d8u: goto label_2474d8;
        case 0x2474dcu: goto label_2474dc;
        case 0x2474e0u: goto label_2474e0;
        case 0x2474e4u: goto label_2474e4;
        case 0x2474e8u: goto label_2474e8;
        case 0x2474ecu: goto label_2474ec;
        case 0x2474f0u: goto label_2474f0;
        case 0x2474f4u: goto label_2474f4;
        case 0x2474f8u: goto label_2474f8;
        case 0x2474fcu: goto label_2474fc;
        case 0x247500u: goto label_247500;
        case 0x247504u: goto label_247504;
        case 0x247508u: goto label_247508;
        case 0x24750cu: goto label_24750c;
        case 0x247510u: goto label_247510;
        case 0x247514u: goto label_247514;
        case 0x247518u: goto label_247518;
        case 0x24751cu: goto label_24751c;
        case 0x247520u: goto label_247520;
        case 0x247524u: goto label_247524;
        case 0x247528u: goto label_247528;
        case 0x24752cu: goto label_24752c;
        case 0x247530u: goto label_247530;
        case 0x247534u: goto label_247534;
        case 0x247538u: goto label_247538;
        case 0x24753cu: goto label_24753c;
        case 0x247540u: goto label_247540;
        case 0x247544u: goto label_247544;
        case 0x247548u: goto label_247548;
        case 0x24754cu: goto label_24754c;
        case 0x247550u: goto label_247550;
        case 0x247554u: goto label_247554;
        case 0x247558u: goto label_247558;
        case 0x24755cu: goto label_24755c;
        case 0x247560u: goto label_247560;
        case 0x247564u: goto label_247564;
        case 0x247568u: goto label_247568;
        case 0x24756cu: goto label_24756c;
        case 0x247570u: goto label_247570;
        case 0x247574u: goto label_247574;
        case 0x247578u: goto label_247578;
        case 0x24757cu: goto label_24757c;
        case 0x247580u: goto label_247580;
        case 0x247584u: goto label_247584;
        case 0x247588u: goto label_247588;
        case 0x24758cu: goto label_24758c;
        case 0x247590u: goto label_247590;
        case 0x247594u: goto label_247594;
        case 0x247598u: goto label_247598;
        case 0x24759cu: goto label_24759c;
        case 0x2475a0u: goto label_2475a0;
        case 0x2475a4u: goto label_2475a4;
        case 0x2475a8u: goto label_2475a8;
        case 0x2475acu: goto label_2475ac;
        case 0x2475b0u: goto label_2475b0;
        case 0x2475b4u: goto label_2475b4;
        case 0x2475b8u: goto label_2475b8;
        case 0x2475bcu: goto label_2475bc;
        case 0x2475c0u: goto label_2475c0;
        case 0x2475c4u: goto label_2475c4;
        case 0x2475c8u: goto label_2475c8;
        case 0x2475ccu: goto label_2475cc;
        case 0x2475d0u: goto label_2475d0;
        case 0x2475d4u: goto label_2475d4;
        case 0x2475d8u: goto label_2475d8;
        case 0x2475dcu: goto label_2475dc;
        case 0x2475e0u: goto label_2475e0;
        case 0x2475e4u: goto label_2475e4;
        case 0x2475e8u: goto label_2475e8;
        case 0x2475ecu: goto label_2475ec;
        case 0x2475f0u: goto label_2475f0;
        case 0x2475f4u: goto label_2475f4;
        case 0x2475f8u: goto label_2475f8;
        case 0x2475fcu: goto label_2475fc;
        case 0x247600u: goto label_247600;
        case 0x247604u: goto label_247604;
        case 0x247608u: goto label_247608;
        case 0x24760cu: goto label_24760c;
        case 0x247610u: goto label_247610;
        case 0x247614u: goto label_247614;
        case 0x247618u: goto label_247618;
        case 0x24761cu: goto label_24761c;
        case 0x247620u: goto label_247620;
        case 0x247624u: goto label_247624;
        case 0x247628u: goto label_247628;
        case 0x24762cu: goto label_24762c;
        case 0x247630u: goto label_247630;
        case 0x247634u: goto label_247634;
        case 0x247638u: goto label_247638;
        case 0x24763cu: goto label_24763c;
        case 0x247640u: goto label_247640;
        case 0x247644u: goto label_247644;
        case 0x247648u: goto label_247648;
        case 0x24764cu: goto label_24764c;
        case 0x247650u: goto label_247650;
        case 0x247654u: goto label_247654;
        case 0x247658u: goto label_247658;
        case 0x24765cu: goto label_24765c;
        case 0x247660u: goto label_247660;
        case 0x247664u: goto label_247664;
        case 0x247668u: goto label_247668;
        case 0x24766cu: goto label_24766c;
        case 0x247670u: goto label_247670;
        case 0x247674u: goto label_247674;
        case 0x247678u: goto label_247678;
        case 0x24767cu: goto label_24767c;
        case 0x247680u: goto label_247680;
        case 0x247684u: goto label_247684;
        case 0x247688u: goto label_247688;
        case 0x24768cu: goto label_24768c;
        case 0x247690u: goto label_247690;
        case 0x247694u: goto label_247694;
        case 0x247698u: goto label_247698;
        case 0x24769cu: goto label_24769c;
        case 0x2476a0u: goto label_2476a0;
        case 0x2476a4u: goto label_2476a4;
        case 0x2476a8u: goto label_2476a8;
        case 0x2476acu: goto label_2476ac;
        case 0x2476b0u: goto label_2476b0;
        case 0x2476b4u: goto label_2476b4;
        case 0x2476b8u: goto label_2476b8;
        case 0x2476bcu: goto label_2476bc;
        case 0x2476c0u: goto label_2476c0;
        case 0x2476c4u: goto label_2476c4;
        case 0x2476c8u: goto label_2476c8;
        case 0x2476ccu: goto label_2476cc;
        case 0x2476d0u: goto label_2476d0;
        case 0x2476d4u: goto label_2476d4;
        case 0x2476d8u: goto label_2476d8;
        case 0x2476dcu: goto label_2476dc;
        case 0x2476e0u: goto label_2476e0;
        case 0x2476e4u: goto label_2476e4;
        case 0x2476e8u: goto label_2476e8;
        case 0x2476ecu: goto label_2476ec;
        case 0x2476f0u: goto label_2476f0;
        case 0x2476f4u: goto label_2476f4;
        case 0x2476f8u: goto label_2476f8;
        case 0x2476fcu: goto label_2476fc;
        case 0x247700u: goto label_247700;
        case 0x247704u: goto label_247704;
        case 0x247708u: goto label_247708;
        case 0x24770cu: goto label_24770c;
        case 0x247710u: goto label_247710;
        case 0x247714u: goto label_247714;
        case 0x247718u: goto label_247718;
        case 0x24771cu: goto label_24771c;
        case 0x247720u: goto label_247720;
        case 0x247724u: goto label_247724;
        case 0x247728u: goto label_247728;
        case 0x24772cu: goto label_24772c;
        case 0x247730u: goto label_247730;
        case 0x247734u: goto label_247734;
        case 0x247738u: goto label_247738;
        case 0x24773cu: goto label_24773c;
        case 0x247740u: goto label_247740;
        case 0x247744u: goto label_247744;
        case 0x247748u: goto label_247748;
        case 0x24774cu: goto label_24774c;
        case 0x247750u: goto label_247750;
        case 0x247754u: goto label_247754;
        case 0x247758u: goto label_247758;
        case 0x24775cu: goto label_24775c;
        case 0x247760u: goto label_247760;
        case 0x247764u: goto label_247764;
        case 0x247768u: goto label_247768;
        case 0x24776cu: goto label_24776c;
        case 0x247770u: goto label_247770;
        case 0x247774u: goto label_247774;
        case 0x247778u: goto label_247778;
        case 0x24777cu: goto label_24777c;
        case 0x247780u: goto label_247780;
        case 0x247784u: goto label_247784;
        case 0x247788u: goto label_247788;
        case 0x24778cu: goto label_24778c;
        case 0x247790u: goto label_247790;
        case 0x247794u: goto label_247794;
        case 0x247798u: goto label_247798;
        case 0x24779cu: goto label_24779c;
        case 0x2477a0u: goto label_2477a0;
        case 0x2477a4u: goto label_2477a4;
        case 0x2477a8u: goto label_2477a8;
        case 0x2477acu: goto label_2477ac;
        case 0x2477b0u: goto label_2477b0;
        case 0x2477b4u: goto label_2477b4;
        case 0x2477b8u: goto label_2477b8;
        case 0x2477bcu: goto label_2477bc;
        case 0x2477c0u: goto label_2477c0;
        case 0x2477c4u: goto label_2477c4;
        case 0x2477c8u: goto label_2477c8;
        case 0x2477ccu: goto label_2477cc;
        case 0x2477d0u: goto label_2477d0;
        case 0x2477d4u: goto label_2477d4;
        case 0x2477d8u: goto label_2477d8;
        case 0x2477dcu: goto label_2477dc;
        case 0x2477e0u: goto label_2477e0;
        case 0x2477e4u: goto label_2477e4;
        case 0x2477e8u: goto label_2477e8;
        case 0x2477ecu: goto label_2477ec;
        case 0x2477f0u: goto label_2477f0;
        case 0x2477f4u: goto label_2477f4;
        case 0x2477f8u: goto label_2477f8;
        case 0x2477fcu: goto label_2477fc;
        case 0x247800u: goto label_247800;
        case 0x247804u: goto label_247804;
        case 0x247808u: goto label_247808;
        case 0x24780cu: goto label_24780c;
        case 0x247810u: goto label_247810;
        case 0x247814u: goto label_247814;
        case 0x247818u: goto label_247818;
        case 0x24781cu: goto label_24781c;
        case 0x247820u: goto label_247820;
        case 0x247824u: goto label_247824;
        case 0x247828u: goto label_247828;
        case 0x24782cu: goto label_24782c;
        case 0x247830u: goto label_247830;
        case 0x247834u: goto label_247834;
        case 0x247838u: goto label_247838;
        case 0x24783cu: goto label_24783c;
        case 0x247840u: goto label_247840;
        case 0x247844u: goto label_247844;
        case 0x247848u: goto label_247848;
        case 0x24784cu: goto label_24784c;
        case 0x247850u: goto label_247850;
        case 0x247854u: goto label_247854;
        case 0x247858u: goto label_247858;
        case 0x24785cu: goto label_24785c;
        case 0x247860u: goto label_247860;
        case 0x247864u: goto label_247864;
        case 0x247868u: goto label_247868;
        case 0x24786cu: goto label_24786c;
        case 0x247870u: goto label_247870;
        case 0x247874u: goto label_247874;
        case 0x247878u: goto label_247878;
        case 0x24787cu: goto label_24787c;
        case 0x247880u: goto label_247880;
        case 0x247884u: goto label_247884;
        case 0x247888u: goto label_247888;
        case 0x24788cu: goto label_24788c;
        case 0x247890u: goto label_247890;
        case 0x247894u: goto label_247894;
        case 0x247898u: goto label_247898;
        case 0x24789cu: goto label_24789c;
        case 0x2478a0u: goto label_2478a0;
        case 0x2478a4u: goto label_2478a4;
        case 0x2478a8u: goto label_2478a8;
        case 0x2478acu: goto label_2478ac;
        case 0x2478b0u: goto label_2478b0;
        case 0x2478b4u: goto label_2478b4;
        case 0x2478b8u: goto label_2478b8;
        case 0x2478bcu: goto label_2478bc;
        case 0x2478c0u: goto label_2478c0;
        case 0x2478c4u: goto label_2478c4;
        case 0x2478c8u: goto label_2478c8;
        case 0x2478ccu: goto label_2478cc;
        case 0x2478d0u: goto label_2478d0;
        case 0x2478d4u: goto label_2478d4;
        case 0x2478d8u: goto label_2478d8;
        case 0x2478dcu: goto label_2478dc;
        case 0x2478e0u: goto label_2478e0;
        case 0x2478e4u: goto label_2478e4;
        case 0x2478e8u: goto label_2478e8;
        case 0x2478ecu: goto label_2478ec;
        case 0x2478f0u: goto label_2478f0;
        case 0x2478f4u: goto label_2478f4;
        case 0x2478f8u: goto label_2478f8;
        case 0x2478fcu: goto label_2478fc;
        case 0x247900u: goto label_247900;
        case 0x247904u: goto label_247904;
        case 0x247908u: goto label_247908;
        case 0x24790cu: goto label_24790c;
        case 0x247910u: goto label_247910;
        case 0x247914u: goto label_247914;
        case 0x247918u: goto label_247918;
        case 0x24791cu: goto label_24791c;
        case 0x247920u: goto label_247920;
        case 0x247924u: goto label_247924;
        case 0x247928u: goto label_247928;
        case 0x24792cu: goto label_24792c;
        case 0x247930u: goto label_247930;
        case 0x247934u: goto label_247934;
        case 0x247938u: goto label_247938;
        case 0x24793cu: goto label_24793c;
        case 0x247940u: goto label_247940;
        case 0x247944u: goto label_247944;
        case 0x247948u: goto label_247948;
        case 0x24794cu: goto label_24794c;
        case 0x247950u: goto label_247950;
        case 0x247954u: goto label_247954;
        case 0x247958u: goto label_247958;
        case 0x24795cu: goto label_24795c;
        case 0x247960u: goto label_247960;
        case 0x247964u: goto label_247964;
        case 0x247968u: goto label_247968;
        case 0x24796cu: goto label_24796c;
        case 0x247970u: goto label_247970;
        case 0x247974u: goto label_247974;
        case 0x247978u: goto label_247978;
        case 0x24797cu: goto label_24797c;
        case 0x247980u: goto label_247980;
        case 0x247984u: goto label_247984;
        case 0x247988u: goto label_247988;
        case 0x24798cu: goto label_24798c;
        case 0x247990u: goto label_247990;
        case 0x247994u: goto label_247994;
        case 0x247998u: goto label_247998;
        case 0x24799cu: goto label_24799c;
        case 0x2479a0u: goto label_2479a0;
        case 0x2479a4u: goto label_2479a4;
        case 0x2479a8u: goto label_2479a8;
        case 0x2479acu: goto label_2479ac;
        case 0x2479b0u: goto label_2479b0;
        case 0x2479b4u: goto label_2479b4;
        case 0x2479b8u: goto label_2479b8;
        case 0x2479bcu: goto label_2479bc;
        case 0x2479c0u: goto label_2479c0;
        case 0x2479c4u: goto label_2479c4;
        case 0x2479c8u: goto label_2479c8;
        case 0x2479ccu: goto label_2479cc;
        case 0x2479d0u: goto label_2479d0;
        case 0x2479d4u: goto label_2479d4;
        case 0x2479d8u: goto label_2479d8;
        case 0x2479dcu: goto label_2479dc;
        case 0x2479e0u: goto label_2479e0;
        case 0x2479e4u: goto label_2479e4;
        case 0x2479e8u: goto label_2479e8;
        case 0x2479ecu: goto label_2479ec;
        case 0x2479f0u: goto label_2479f0;
        case 0x2479f4u: goto label_2479f4;
        case 0x2479f8u: goto label_2479f8;
        case 0x2479fcu: goto label_2479fc;
        case 0x247a00u: goto label_247a00;
        case 0x247a04u: goto label_247a04;
        case 0x247a08u: goto label_247a08;
        case 0x247a0cu: goto label_247a0c;
        case 0x247a10u: goto label_247a10;
        case 0x247a14u: goto label_247a14;
        case 0x247a18u: goto label_247a18;
        case 0x247a1cu: goto label_247a1c;
        case 0x247a20u: goto label_247a20;
        case 0x247a24u: goto label_247a24;
        case 0x247a28u: goto label_247a28;
        case 0x247a2cu: goto label_247a2c;
        case 0x247a30u: goto label_247a30;
        case 0x247a34u: goto label_247a34;
        case 0x247a38u: goto label_247a38;
        case 0x247a3cu: goto label_247a3c;
        case 0x247a40u: goto label_247a40;
        case 0x247a44u: goto label_247a44;
        case 0x247a48u: goto label_247a48;
        case 0x247a4cu: goto label_247a4c;
        case 0x247a50u: goto label_247a50;
        case 0x247a54u: goto label_247a54;
        case 0x247a58u: goto label_247a58;
        case 0x247a5cu: goto label_247a5c;
        case 0x247a60u: goto label_247a60;
        case 0x247a64u: goto label_247a64;
        case 0x247a68u: goto label_247a68;
        case 0x247a6cu: goto label_247a6c;
        case 0x247a70u: goto label_247a70;
        case 0x247a74u: goto label_247a74;
        case 0x247a78u: goto label_247a78;
        case 0x247a7cu: goto label_247a7c;
        case 0x247a80u: goto label_247a80;
        case 0x247a84u: goto label_247a84;
        case 0x247a88u: goto label_247a88;
        case 0x247a8cu: goto label_247a8c;
        case 0x247a90u: goto label_247a90;
        case 0x247a94u: goto label_247a94;
        case 0x247a98u: goto label_247a98;
        case 0x247a9cu: goto label_247a9c;
        case 0x247aa0u: goto label_247aa0;
        case 0x247aa4u: goto label_247aa4;
        case 0x247aa8u: goto label_247aa8;
        case 0x247aacu: goto label_247aac;
        case 0x247ab0u: goto label_247ab0;
        case 0x247ab4u: goto label_247ab4;
        case 0x247ab8u: goto label_247ab8;
        case 0x247abcu: goto label_247abc;
        case 0x247ac0u: goto label_247ac0;
        case 0x247ac4u: goto label_247ac4;
        case 0x247ac8u: goto label_247ac8;
        case 0x247accu: goto label_247acc;
        case 0x247ad0u: goto label_247ad0;
        case 0x247ad4u: goto label_247ad4;
        case 0x247ad8u: goto label_247ad8;
        case 0x247adcu: goto label_247adc;
        case 0x247ae0u: goto label_247ae0;
        case 0x247ae4u: goto label_247ae4;
        case 0x247ae8u: goto label_247ae8;
        case 0x247aecu: goto label_247aec;
        case 0x247af0u: goto label_247af0;
        case 0x247af4u: goto label_247af4;
        case 0x247af8u: goto label_247af8;
        case 0x247afcu: goto label_247afc;
        case 0x247b00u: goto label_247b00;
        case 0x247b04u: goto label_247b04;
        case 0x247b08u: goto label_247b08;
        case 0x247b0cu: goto label_247b0c;
        case 0x247b10u: goto label_247b10;
        case 0x247b14u: goto label_247b14;
        case 0x247b18u: goto label_247b18;
        case 0x247b1cu: goto label_247b1c;
        case 0x247b20u: goto label_247b20;
        case 0x247b24u: goto label_247b24;
        case 0x247b28u: goto label_247b28;
        case 0x247b2cu: goto label_247b2c;
        case 0x247b30u: goto label_247b30;
        case 0x247b34u: goto label_247b34;
        case 0x247b38u: goto label_247b38;
        case 0x247b3cu: goto label_247b3c;
        case 0x247b40u: goto label_247b40;
        case 0x247b44u: goto label_247b44;
        case 0x247b48u: goto label_247b48;
        case 0x247b4cu: goto label_247b4c;
        case 0x247b50u: goto label_247b50;
        case 0x247b54u: goto label_247b54;
        case 0x247b58u: goto label_247b58;
        case 0x247b5cu: goto label_247b5c;
        case 0x247b60u: goto label_247b60;
        case 0x247b64u: goto label_247b64;
        case 0x247b68u: goto label_247b68;
        case 0x247b6cu: goto label_247b6c;
        case 0x247b70u: goto label_247b70;
        case 0x247b74u: goto label_247b74;
        case 0x247b78u: goto label_247b78;
        case 0x247b7cu: goto label_247b7c;
        case 0x247b80u: goto label_247b80;
        case 0x247b84u: goto label_247b84;
        case 0x247b88u: goto label_247b88;
        case 0x247b8cu: goto label_247b8c;
        case 0x247b90u: goto label_247b90;
        case 0x247b94u: goto label_247b94;
        case 0x247b98u: goto label_247b98;
        case 0x247b9cu: goto label_247b9c;
        case 0x247ba0u: goto label_247ba0;
        case 0x247ba4u: goto label_247ba4;
        case 0x247ba8u: goto label_247ba8;
        case 0x247bacu: goto label_247bac;
        case 0x247bb0u: goto label_247bb0;
        case 0x247bb4u: goto label_247bb4;
        case 0x247bb8u: goto label_247bb8;
        case 0x247bbcu: goto label_247bbc;
        case 0x247bc0u: goto label_247bc0;
        case 0x247bc4u: goto label_247bc4;
        case 0x247bc8u: goto label_247bc8;
        case 0x247bccu: goto label_247bcc;
        case 0x247bd0u: goto label_247bd0;
        case 0x247bd4u: goto label_247bd4;
        case 0x247bd8u: goto label_247bd8;
        case 0x247bdcu: goto label_247bdc;
        case 0x247be0u: goto label_247be0;
        case 0x247be4u: goto label_247be4;
        case 0x247be8u: goto label_247be8;
        case 0x247becu: goto label_247bec;
        case 0x247bf0u: goto label_247bf0;
        case 0x247bf4u: goto label_247bf4;
        case 0x247bf8u: goto label_247bf8;
        case 0x247bfcu: goto label_247bfc;
        case 0x247c00u: goto label_247c00;
        case 0x247c04u: goto label_247c04;
        case 0x247c08u: goto label_247c08;
        case 0x247c0cu: goto label_247c0c;
        case 0x247c10u: goto label_247c10;
        case 0x247c14u: goto label_247c14;
        case 0x247c18u: goto label_247c18;
        case 0x247c1cu: goto label_247c1c;
        case 0x247c20u: goto label_247c20;
        case 0x247c24u: goto label_247c24;
        case 0x247c28u: goto label_247c28;
        case 0x247c2cu: goto label_247c2c;
        case 0x247c30u: goto label_247c30;
        case 0x247c34u: goto label_247c34;
        case 0x247c38u: goto label_247c38;
        case 0x247c3cu: goto label_247c3c;
        case 0x247c40u: goto label_247c40;
        case 0x247c44u: goto label_247c44;
        case 0x247c48u: goto label_247c48;
        case 0x247c4cu: goto label_247c4c;
        case 0x247c50u: goto label_247c50;
        case 0x247c54u: goto label_247c54;
        case 0x247c58u: goto label_247c58;
        case 0x247c5cu: goto label_247c5c;
        case 0x247c60u: goto label_247c60;
        case 0x247c64u: goto label_247c64;
        case 0x247c68u: goto label_247c68;
        case 0x247c6cu: goto label_247c6c;
        case 0x247c70u: goto label_247c70;
        case 0x247c74u: goto label_247c74;
        case 0x247c78u: goto label_247c78;
        case 0x247c7cu: goto label_247c7c;
        case 0x247c80u: goto label_247c80;
        case 0x247c84u: goto label_247c84;
        case 0x247c88u: goto label_247c88;
        case 0x247c8cu: goto label_247c8c;
        case 0x247c90u: goto label_247c90;
        case 0x247c94u: goto label_247c94;
        case 0x247c98u: goto label_247c98;
        case 0x247c9cu: goto label_247c9c;
        case 0x247ca0u: goto label_247ca0;
        case 0x247ca4u: goto label_247ca4;
        case 0x247ca8u: goto label_247ca8;
        case 0x247cacu: goto label_247cac;
        case 0x247cb0u: goto label_247cb0;
        case 0x247cb4u: goto label_247cb4;
        case 0x247cb8u: goto label_247cb8;
        case 0x247cbcu: goto label_247cbc;
        case 0x247cc0u: goto label_247cc0;
        case 0x247cc4u: goto label_247cc4;
        case 0x247cc8u: goto label_247cc8;
        case 0x247cccu: goto label_247ccc;
        case 0x247cd0u: goto label_247cd0;
        case 0x247cd4u: goto label_247cd4;
        case 0x247cd8u: goto label_247cd8;
        case 0x247cdcu: goto label_247cdc;
        case 0x247ce0u: goto label_247ce0;
        case 0x247ce4u: goto label_247ce4;
        case 0x247ce8u: goto label_247ce8;
        case 0x247cecu: goto label_247cec;
        case 0x247cf0u: goto label_247cf0;
        case 0x247cf4u: goto label_247cf4;
        case 0x247cf8u: goto label_247cf8;
        case 0x247cfcu: goto label_247cfc;
        case 0x247d00u: goto label_247d00;
        case 0x247d04u: goto label_247d04;
        case 0x247d08u: goto label_247d08;
        case 0x247d0cu: goto label_247d0c;
        case 0x247d10u: goto label_247d10;
        case 0x247d14u: goto label_247d14;
        case 0x247d18u: goto label_247d18;
        case 0x247d1cu: goto label_247d1c;
        case 0x247d20u: goto label_247d20;
        case 0x247d24u: goto label_247d24;
        case 0x247d28u: goto label_247d28;
        case 0x247d2cu: goto label_247d2c;
        case 0x247d30u: goto label_247d30;
        case 0x247d34u: goto label_247d34;
        case 0x247d38u: goto label_247d38;
        case 0x247d3cu: goto label_247d3c;
        case 0x247d40u: goto label_247d40;
        case 0x247d44u: goto label_247d44;
        case 0x247d48u: goto label_247d48;
        case 0x247d4cu: goto label_247d4c;
        case 0x247d50u: goto label_247d50;
        case 0x247d54u: goto label_247d54;
        case 0x247d58u: goto label_247d58;
        case 0x247d5cu: goto label_247d5c;
        case 0x247d60u: goto label_247d60;
        case 0x247d64u: goto label_247d64;
        case 0x247d68u: goto label_247d68;
        case 0x247d6cu: goto label_247d6c;
        case 0x247d70u: goto label_247d70;
        case 0x247d74u: goto label_247d74;
        case 0x247d78u: goto label_247d78;
        case 0x247d7cu: goto label_247d7c;
        case 0x247d80u: goto label_247d80;
        case 0x247d84u: goto label_247d84;
        case 0x247d88u: goto label_247d88;
        case 0x247d8cu: goto label_247d8c;
        case 0x247d90u: goto label_247d90;
        case 0x247d94u: goto label_247d94;
        case 0x247d98u: goto label_247d98;
        case 0x247d9cu: goto label_247d9c;
        case 0x247da0u: goto label_247da0;
        case 0x247da4u: goto label_247da4;
        case 0x247da8u: goto label_247da8;
        case 0x247dacu: goto label_247dac;
        case 0x247db0u: goto label_247db0;
        case 0x247db4u: goto label_247db4;
        case 0x247db8u: goto label_247db8;
        case 0x247dbcu: goto label_247dbc;
        case 0x247dc0u: goto label_247dc0;
        case 0x247dc4u: goto label_247dc4;
        case 0x247dc8u: goto label_247dc8;
        case 0x247dccu: goto label_247dcc;
        case 0x247dd0u: goto label_247dd0;
        case 0x247dd4u: goto label_247dd4;
        case 0x247dd8u: goto label_247dd8;
        case 0x247ddcu: goto label_247ddc;
        case 0x247de0u: goto label_247de0;
        case 0x247de4u: goto label_247de4;
        case 0x247de8u: goto label_247de8;
        case 0x247decu: goto label_247dec;
        case 0x247df0u: goto label_247df0;
        case 0x247df4u: goto label_247df4;
        case 0x247df8u: goto label_247df8;
        case 0x247dfcu: goto label_247dfc;
        case 0x247e00u: goto label_247e00;
        case 0x247e04u: goto label_247e04;
        case 0x247e08u: goto label_247e08;
        case 0x247e0cu: goto label_247e0c;
        case 0x247e10u: goto label_247e10;
        case 0x247e14u: goto label_247e14;
        case 0x247e18u: goto label_247e18;
        case 0x247e1cu: goto label_247e1c;
        case 0x247e20u: goto label_247e20;
        case 0x247e24u: goto label_247e24;
        case 0x247e28u: goto label_247e28;
        case 0x247e2cu: goto label_247e2c;
        case 0x247e30u: goto label_247e30;
        case 0x247e34u: goto label_247e34;
        case 0x247e38u: goto label_247e38;
        case 0x247e3cu: goto label_247e3c;
        case 0x247e40u: goto label_247e40;
        case 0x247e44u: goto label_247e44;
        case 0x247e48u: goto label_247e48;
        case 0x247e4cu: goto label_247e4c;
        case 0x247e50u: goto label_247e50;
        case 0x247e54u: goto label_247e54;
        case 0x247e58u: goto label_247e58;
        case 0x247e5cu: goto label_247e5c;
        case 0x247e60u: goto label_247e60;
        case 0x247e64u: goto label_247e64;
        case 0x247e68u: goto label_247e68;
        case 0x247e6cu: goto label_247e6c;
        case 0x247e70u: goto label_247e70;
        case 0x247e74u: goto label_247e74;
        case 0x247e78u: goto label_247e78;
        case 0x247e7cu: goto label_247e7c;
        case 0x247e80u: goto label_247e80;
        case 0x247e84u: goto label_247e84;
        case 0x247e88u: goto label_247e88;
        case 0x247e8cu: goto label_247e8c;
        case 0x247e90u: goto label_247e90;
        case 0x247e94u: goto label_247e94;
        case 0x247e98u: goto label_247e98;
        case 0x247e9cu: goto label_247e9c;
        case 0x247ea0u: goto label_247ea0;
        case 0x247ea4u: goto label_247ea4;
        case 0x247ea8u: goto label_247ea8;
        case 0x247eacu: goto label_247eac;
        case 0x247eb0u: goto label_247eb0;
        case 0x247eb4u: goto label_247eb4;
        case 0x247eb8u: goto label_247eb8;
        case 0x247ebcu: goto label_247ebc;
        case 0x247ec0u: goto label_247ec0;
        case 0x247ec4u: goto label_247ec4;
        case 0x247ec8u: goto label_247ec8;
        case 0x247eccu: goto label_247ecc;
        case 0x247ed0u: goto label_247ed0;
        case 0x247ed4u: goto label_247ed4;
        case 0x247ed8u: goto label_247ed8;
        case 0x247edcu: goto label_247edc;
        case 0x247ee0u: goto label_247ee0;
        case 0x247ee4u: goto label_247ee4;
        case 0x247ee8u: goto label_247ee8;
        case 0x247eecu: goto label_247eec;
        case 0x247ef0u: goto label_247ef0;
        case 0x247ef4u: goto label_247ef4;
        case 0x247ef8u: goto label_247ef8;
        case 0x247efcu: goto label_247efc;
        case 0x247f00u: goto label_247f00;
        case 0x247f04u: goto label_247f04;
        case 0x247f08u: goto label_247f08;
        case 0x247f0cu: goto label_247f0c;
        case 0x247f10u: goto label_247f10;
        case 0x247f14u: goto label_247f14;
        case 0x247f18u: goto label_247f18;
        case 0x247f1cu: goto label_247f1c;
        case 0x247f20u: goto label_247f20;
        case 0x247f24u: goto label_247f24;
        case 0x247f28u: goto label_247f28;
        case 0x247f2cu: goto label_247f2c;
        case 0x247f30u: goto label_247f30;
        case 0x247f34u: goto label_247f34;
        case 0x247f38u: goto label_247f38;
        case 0x247f3cu: goto label_247f3c;
        case 0x247f40u: goto label_247f40;
        case 0x247f44u: goto label_247f44;
        case 0x247f48u: goto label_247f48;
        case 0x247f4cu: goto label_247f4c;
        case 0x247f50u: goto label_247f50;
        case 0x247f54u: goto label_247f54;
        case 0x247f58u: goto label_247f58;
        case 0x247f5cu: goto label_247f5c;
        case 0x247f60u: goto label_247f60;
        case 0x247f64u: goto label_247f64;
        case 0x247f68u: goto label_247f68;
        case 0x247f6cu: goto label_247f6c;
        case 0x247f70u: goto label_247f70;
        case 0x247f74u: goto label_247f74;
        case 0x247f78u: goto label_247f78;
        case 0x247f7cu: goto label_247f7c;
        case 0x247f80u: goto label_247f80;
        case 0x247f84u: goto label_247f84;
        case 0x247f88u: goto label_247f88;
        case 0x247f8cu: goto label_247f8c;
        case 0x247f90u: goto label_247f90;
        case 0x247f94u: goto label_247f94;
        case 0x247f98u: goto label_247f98;
        case 0x247f9cu: goto label_247f9c;
        case 0x247fa0u: goto label_247fa0;
        case 0x247fa4u: goto label_247fa4;
        case 0x247fa8u: goto label_247fa8;
        case 0x247facu: goto label_247fac;
        case 0x247fb0u: goto label_247fb0;
        case 0x247fb4u: goto label_247fb4;
        case 0x247fb8u: goto label_247fb8;
        case 0x247fbcu: goto label_247fbc;
        case 0x247fc0u: goto label_247fc0;
        case 0x247fc4u: goto label_247fc4;
        case 0x247fc8u: goto label_247fc8;
        case 0x247fccu: goto label_247fcc;
        case 0x247fd0u: goto label_247fd0;
        case 0x247fd4u: goto label_247fd4;
        case 0x247fd8u: goto label_247fd8;
        case 0x247fdcu: goto label_247fdc;
        case 0x247fe0u: goto label_247fe0;
        case 0x247fe4u: goto label_247fe4;
        case 0x247fe8u: goto label_247fe8;
        case 0x247fecu: goto label_247fec;
        case 0x247ff0u: goto label_247ff0;
        case 0x247ff4u: goto label_247ff4;
        case 0x247ff8u: goto label_247ff8;
        case 0x247ffcu: goto label_247ffc;
        case 0x248000u: goto label_248000;
        case 0x248004u: goto label_248004;
        case 0x248008u: goto label_248008;
        case 0x24800cu: goto label_24800c;
        case 0x248010u: goto label_248010;
        case 0x248014u: goto label_248014;
        case 0x248018u: goto label_248018;
        case 0x24801cu: goto label_24801c;
        case 0x248020u: goto label_248020;
        case 0x248024u: goto label_248024;
        case 0x248028u: goto label_248028;
        case 0x24802cu: goto label_24802c;
        case 0x248030u: goto label_248030;
        case 0x248034u: goto label_248034;
        case 0x248038u: goto label_248038;
        case 0x24803cu: goto label_24803c;
        case 0x248040u: goto label_248040;
        case 0x248044u: goto label_248044;
        case 0x248048u: goto label_248048;
        case 0x24804cu: goto label_24804c;
        case 0x248050u: goto label_248050;
        case 0x248054u: goto label_248054;
        case 0x248058u: goto label_248058;
        case 0x24805cu: goto label_24805c;
        case 0x248060u: goto label_248060;
        case 0x248064u: goto label_248064;
        case 0x248068u: goto label_248068;
        case 0x24806cu: goto label_24806c;
        case 0x248070u: goto label_248070;
        case 0x248074u: goto label_248074;
        case 0x248078u: goto label_248078;
        case 0x24807cu: goto label_24807c;
        case 0x248080u: goto label_248080;
        case 0x248084u: goto label_248084;
        case 0x248088u: goto label_248088;
        case 0x24808cu: goto label_24808c;
        case 0x248090u: goto label_248090;
        case 0x248094u: goto label_248094;
        case 0x248098u: goto label_248098;
        case 0x24809cu: goto label_24809c;
        case 0x2480a0u: goto label_2480a0;
        case 0x2480a4u: goto label_2480a4;
        case 0x2480a8u: goto label_2480a8;
        case 0x2480acu: goto label_2480ac;
        case 0x2480b0u: goto label_2480b0;
        case 0x2480b4u: goto label_2480b4;
        case 0x2480b8u: goto label_2480b8;
        case 0x2480bcu: goto label_2480bc;
        case 0x2480c0u: goto label_2480c0;
        case 0x2480c4u: goto label_2480c4;
        case 0x2480c8u: goto label_2480c8;
        case 0x2480ccu: goto label_2480cc;
        case 0x2480d0u: goto label_2480d0;
        case 0x2480d4u: goto label_2480d4;
        case 0x2480d8u: goto label_2480d8;
        case 0x2480dcu: goto label_2480dc;
        case 0x2480e0u: goto label_2480e0;
        case 0x2480e4u: goto label_2480e4;
        case 0x2480e8u: goto label_2480e8;
        case 0x2480ecu: goto label_2480ec;
        case 0x2480f0u: goto label_2480f0;
        case 0x2480f4u: goto label_2480f4;
        case 0x2480f8u: goto label_2480f8;
        case 0x2480fcu: goto label_2480fc;
        case 0x248100u: goto label_248100;
        case 0x248104u: goto label_248104;
        case 0x248108u: goto label_248108;
        case 0x24810cu: goto label_24810c;
        case 0x248110u: goto label_248110;
        case 0x248114u: goto label_248114;
        case 0x248118u: goto label_248118;
        case 0x24811cu: goto label_24811c;
        case 0x248120u: goto label_248120;
        case 0x248124u: goto label_248124;
        case 0x248128u: goto label_248128;
        case 0x24812cu: goto label_24812c;
        case 0x248130u: goto label_248130;
        case 0x248134u: goto label_248134;
        case 0x248138u: goto label_248138;
        case 0x24813cu: goto label_24813c;
        case 0x248140u: goto label_248140;
        case 0x248144u: goto label_248144;
        case 0x248148u: goto label_248148;
        case 0x24814cu: goto label_24814c;
        case 0x248150u: goto label_248150;
        case 0x248154u: goto label_248154;
        case 0x248158u: goto label_248158;
        case 0x24815cu: goto label_24815c;
        case 0x248160u: goto label_248160;
        case 0x248164u: goto label_248164;
        case 0x248168u: goto label_248168;
        case 0x24816cu: goto label_24816c;
        case 0x248170u: goto label_248170;
        case 0x248174u: goto label_248174;
        case 0x248178u: goto label_248178;
        case 0x24817cu: goto label_24817c;
        case 0x248180u: goto label_248180;
        case 0x248184u: goto label_248184;
        case 0x248188u: goto label_248188;
        case 0x24818cu: goto label_24818c;
        case 0x248190u: goto label_248190;
        case 0x248194u: goto label_248194;
        case 0x248198u: goto label_248198;
        case 0x24819cu: goto label_24819c;
        case 0x2481a0u: goto label_2481a0;
        case 0x2481a4u: goto label_2481a4;
        case 0x2481a8u: goto label_2481a8;
        case 0x2481acu: goto label_2481ac;
        case 0x2481b0u: goto label_2481b0;
        case 0x2481b4u: goto label_2481b4;
        case 0x2481b8u: goto label_2481b8;
        case 0x2481bcu: goto label_2481bc;
        case 0x2481c0u: goto label_2481c0;
        case 0x2481c4u: goto label_2481c4;
        case 0x2481c8u: goto label_2481c8;
        case 0x2481ccu: goto label_2481cc;
        case 0x2481d0u: goto label_2481d0;
        case 0x2481d4u: goto label_2481d4;
        case 0x2481d8u: goto label_2481d8;
        case 0x2481dcu: goto label_2481dc;
        case 0x2481e0u: goto label_2481e0;
        case 0x2481e4u: goto label_2481e4;
        case 0x2481e8u: goto label_2481e8;
        case 0x2481ecu: goto label_2481ec;
        case 0x2481f0u: goto label_2481f0;
        case 0x2481f4u: goto label_2481f4;
        case 0x2481f8u: goto label_2481f8;
        case 0x2481fcu: goto label_2481fc;
        case 0x248200u: goto label_248200;
        case 0x248204u: goto label_248204;
        case 0x248208u: goto label_248208;
        case 0x24820cu: goto label_24820c;
        case 0x248210u: goto label_248210;
        case 0x248214u: goto label_248214;
        case 0x248218u: goto label_248218;
        case 0x24821cu: goto label_24821c;
        case 0x248220u: goto label_248220;
        case 0x248224u: goto label_248224;
        case 0x248228u: goto label_248228;
        case 0x24822cu: goto label_24822c;
        case 0x248230u: goto label_248230;
        case 0x248234u: goto label_248234;
        case 0x248238u: goto label_248238;
        case 0x24823cu: goto label_24823c;
        case 0x248240u: goto label_248240;
        case 0x248244u: goto label_248244;
        case 0x248248u: goto label_248248;
        case 0x24824cu: goto label_24824c;
        case 0x248250u: goto label_248250;
        case 0x248254u: goto label_248254;
        case 0x248258u: goto label_248258;
        case 0x24825cu: goto label_24825c;
        case 0x248260u: goto label_248260;
        case 0x248264u: goto label_248264;
        case 0x248268u: goto label_248268;
        case 0x24826cu: goto label_24826c;
        case 0x248270u: goto label_248270;
        case 0x248274u: goto label_248274;
        case 0x248278u: goto label_248278;
        case 0x24827cu: goto label_24827c;
        case 0x248280u: goto label_248280;
        case 0x248284u: goto label_248284;
        case 0x248288u: goto label_248288;
        case 0x24828cu: goto label_24828c;
        case 0x248290u: goto label_248290;
        case 0x248294u: goto label_248294;
        case 0x248298u: goto label_248298;
        case 0x24829cu: goto label_24829c;
        case 0x2482a0u: goto label_2482a0;
        case 0x2482a4u: goto label_2482a4;
        case 0x2482a8u: goto label_2482a8;
        case 0x2482acu: goto label_2482ac;
        case 0x2482b0u: goto label_2482b0;
        case 0x2482b4u: goto label_2482b4;
        case 0x2482b8u: goto label_2482b8;
        case 0x2482bcu: goto label_2482bc;
        case 0x2482c0u: goto label_2482c0;
        case 0x2482c4u: goto label_2482c4;
        case 0x2482c8u: goto label_2482c8;
        case 0x2482ccu: goto label_2482cc;
        case 0x2482d0u: goto label_2482d0;
        case 0x2482d4u: goto label_2482d4;
        case 0x2482d8u: goto label_2482d8;
        case 0x2482dcu: goto label_2482dc;
        case 0x2482e0u: goto label_2482e0;
        case 0x2482e4u: goto label_2482e4;
        case 0x2482e8u: goto label_2482e8;
        case 0x2482ecu: goto label_2482ec;
        case 0x2482f0u: goto label_2482f0;
        case 0x2482f4u: goto label_2482f4;
        case 0x2482f8u: goto label_2482f8;
        case 0x2482fcu: goto label_2482fc;
        case 0x248300u: goto label_248300;
        case 0x248304u: goto label_248304;
        case 0x248308u: goto label_248308;
        case 0x24830cu: goto label_24830c;
        case 0x248310u: goto label_248310;
        case 0x248314u: goto label_248314;
        case 0x248318u: goto label_248318;
        case 0x24831cu: goto label_24831c;
        case 0x248320u: goto label_248320;
        case 0x248324u: goto label_248324;
        case 0x248328u: goto label_248328;
        case 0x24832cu: goto label_24832c;
        case 0x248330u: goto label_248330;
        case 0x248334u: goto label_248334;
        case 0x248338u: goto label_248338;
        case 0x24833cu: goto label_24833c;
        case 0x248340u: goto label_248340;
        case 0x248344u: goto label_248344;
        case 0x248348u: goto label_248348;
        case 0x24834cu: goto label_24834c;
        case 0x248350u: goto label_248350;
        case 0x248354u: goto label_248354;
        case 0x248358u: goto label_248358;
        case 0x24835cu: goto label_24835c;
        case 0x248360u: goto label_248360;
        case 0x248364u: goto label_248364;
        case 0x248368u: goto label_248368;
        case 0x24836cu: goto label_24836c;
        case 0x248370u: goto label_248370;
        case 0x248374u: goto label_248374;
        case 0x248378u: goto label_248378;
        case 0x24837cu: goto label_24837c;
        case 0x248380u: goto label_248380;
        case 0x248384u: goto label_248384;
        case 0x248388u: goto label_248388;
        case 0x24838cu: goto label_24838c;
        case 0x248390u: goto label_248390;
        case 0x248394u: goto label_248394;
        case 0x248398u: goto label_248398;
        case 0x24839cu: goto label_24839c;
        case 0x2483a0u: goto label_2483a0;
        case 0x2483a4u: goto label_2483a4;
        case 0x2483a8u: goto label_2483a8;
        case 0x2483acu: goto label_2483ac;
        case 0x2483b0u: goto label_2483b0;
        case 0x2483b4u: goto label_2483b4;
        case 0x2483b8u: goto label_2483b8;
        case 0x2483bcu: goto label_2483bc;
        case 0x2483c0u: goto label_2483c0;
        case 0x2483c4u: goto label_2483c4;
        case 0x2483c8u: goto label_2483c8;
        case 0x2483ccu: goto label_2483cc;
        case 0x2483d0u: goto label_2483d0;
        case 0x2483d4u: goto label_2483d4;
        case 0x2483d8u: goto label_2483d8;
        case 0x2483dcu: goto label_2483dc;
        case 0x2483e0u: goto label_2483e0;
        case 0x2483e4u: goto label_2483e4;
        case 0x2483e8u: goto label_2483e8;
        case 0x2483ecu: goto label_2483ec;
        case 0x2483f0u: goto label_2483f0;
        case 0x2483f4u: goto label_2483f4;
        case 0x2483f8u: goto label_2483f8;
        case 0x2483fcu: goto label_2483fc;
        case 0x248400u: goto label_248400;
        case 0x248404u: goto label_248404;
        case 0x248408u: goto label_248408;
        case 0x24840cu: goto label_24840c;
        case 0x248410u: goto label_248410;
        case 0x248414u: goto label_248414;
        case 0x248418u: goto label_248418;
        case 0x24841cu: goto label_24841c;
        default: break;
    }

    ctx->pc = 0x247310u;

label_247310:
    // 0x247310: 0x27bde910  addiu       $sp, $sp, -0x16F0
    ctx->pc = 0x247310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294961424));
label_247314:
    // 0x247314: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x247314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_247318:
    // 0x247318: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x247318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_24731c:
    // 0x24731c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x24731cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_247320:
    // 0x247320: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x247320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_247324:
    // 0x247324: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x247324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_247328:
    // 0x247328: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x247328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_24732c:
    // 0x24732c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x24732cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_247330:
    // 0x247330: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x247330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_247334:
    // 0x247334: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x247334u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_247338:
    // 0x247338: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x247338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_24733c:
    // 0x24733c: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x24733cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_247340:
    // 0x247340: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x247340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_247344:
    // 0x247344: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x247344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_247348:
    // 0x247348: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x247348u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_24734c:
    // 0x24734c: 0xafa80150  sw          $t0, 0x150($sp)
    ctx->pc = 0x24734cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 8));
label_247350:
    // 0x247350: 0xafa4016c  sw          $a0, 0x16C($sp)
    ctx->pc = 0x247350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 4));
label_247354:
    // 0x247354: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x247354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_247358:
    // 0x247358: 0xcc600000  pref        0x00, 0x0($v1)
    ctx->pc = 0x247358u;
    // PREF instruction (ignored)
label_24735c:
    // 0x24735c: 0x8e633050  lw          $v1, 0x3050($s3)
    ctx->pc = 0x24735cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12368)));
label_247360:
    // 0x247360: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x247360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
label_247364:
    // 0x247364: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x247364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_247368:
    // 0x247368: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_24736c:
    if (ctx->pc == 0x24736Cu) {
        ctx->pc = 0x247370u;
        goto label_247370;
    }
    ctx->pc = 0x247368u;
    {
        const bool branch_taken_0x247368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x247368) {
            ctx->pc = 0x2473A0u;
            goto label_2473a0;
        }
    }
    ctx->pc = 0x247370u;
label_247370:
    // 0x247370: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x247370u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_247374:
    // 0x247374: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x247374u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_247378:
    // 0x247378: 0x320f809  jalr        $t9
label_24737c:
    if (ctx->pc == 0x24737Cu) {
        ctx->pc = 0x24737Cu;
            // 0x24737c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247380u;
        goto label_247380;
    }
    ctx->pc = 0x247378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x247380u);
        ctx->pc = 0x24737Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247378u;
            // 0x24737c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x247380u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x247380u; }
            if (ctx->pc != 0x247380u) { return; }
        }
        }
    }
    ctx->pc = 0x247380u;
label_247380:
    // 0x247380: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_247384:
    if (ctx->pc == 0x247384u) {
        ctx->pc = 0x247384u;
            // 0x247384: 0x27a30ad8  addiu       $v1, $sp, 0xAD8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 2776));
        ctx->pc = 0x247388u;
        goto label_247388;
    }
    ctx->pc = 0x247380u;
    {
        const bool branch_taken_0x247380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247380u;
            // 0x247384: 0x27a30ad8  addiu       $v1, $sp, 0xAD8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 2776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247380) {
            ctx->pc = 0x2473A0u;
            goto label_2473a0;
        }
    }
    ctx->pc = 0x247388u;
label_247388:
    // 0x247388: 0x27a406d8  addiu       $a0, $sp, 0x6D8
    ctx->pc = 0x247388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1752));
label_24738c:
    // 0x24738c: 0xafa306d0  sw          $v1, 0x6D0($sp)
    ctx->pc = 0x24738cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1744), GPR_U32(ctx, 3));
label_247390:
    // 0x247390: 0x27a306d0  addiu       $v1, $sp, 0x6D0
    ctx->pc = 0x247390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1744));
label_247394:
    // 0x247394: 0xafa406d4  sw          $a0, 0x6D4($sp)
    ctx->pc = 0x247394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1748), GPR_U32(ctx, 4));
label_247398:
    // 0x247398: 0x10000003  b           . + 4 + (0x3 << 2)
label_24739c:
    if (ctx->pc == 0x24739Cu) {
        ctx->pc = 0x24739Cu;
            // 0x24739c: 0xae633050  sw          $v1, 0x3050($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12368), GPR_U32(ctx, 3));
        ctx->pc = 0x2473A0u;
        goto label_2473a0;
    }
    ctx->pc = 0x247398u;
    {
        const bool branch_taken_0x247398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24739Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247398u;
            // 0x24739c: 0xae633050  sw          $v1, 0x3050($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12368), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247398) {
            ctx->pc = 0x2473A8u;
            goto label_2473a8;
        }
    }
    ctx->pc = 0x2473A0u;
label_2473a0:
    // 0x2473a0: 0xae603050  sw          $zero, 0x3050($s3)
    ctx->pc = 0x2473a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12368), GPR_U32(ctx, 0));
label_2473a4:
    // 0x2473a4: 0x0  nop
    ctx->pc = 0x2473a4u;
    // NOP
label_2473a8:
    // 0x2473a8: 0x8e870008  lw          $a3, 0x8($s4)
    ctx->pc = 0x2473a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_2473ac:
    // 0x2473ac: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x2473acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2473b0:
    // 0x2473b0: 0x27a304c0  addiu       $v1, $sp, 0x4C0
    ctx->pc = 0x2473b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
label_2473b4:
    // 0x2473b4: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x2473b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_2473b8:
    // 0x2473b8: 0x64060060  daddiu      $a2, $zero, 0x60
    ctx->pc = 0x2473b8u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)96);
label_2473bc:
    // 0x2473bc: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2473bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2473c0:
    // 0x2473c0: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x2473c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
label_2473c4:
    // 0x2473c4: 0x8cf70000  lw          $s7, 0x0($a3)
    ctx->pc = 0x2473c4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2473c8:
    // 0x2473c8: 0xafa404cc  sw          $a0, 0x4CC($sp)
    ctx->pc = 0x2473c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1228), GPR_U32(ctx, 4));
label_2473cc:
    // 0x2473cc: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x2473ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2473d0:
    // 0x2473d0: 0xafa404c8  sw          $a0, 0x4C8($sp)
    ctx->pc = 0x2473d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1224), GPR_U32(ctx, 4));
label_2473d4:
    // 0x2473d4: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x2473d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
label_2473d8:
    // 0x2473d8: 0x8fa3016c  lw          $v1, 0x16C($sp)
    ctx->pc = 0x2473d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_2473dc:
    // 0x2473dc: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x2473dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_2473e0:
    // 0x2473e0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2473e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2473e4:
    // 0x2473e4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2473e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2473e8:
    // 0x2473e8: 0xafa30120  sw          $v1, 0x120($sp)
    ctx->pc = 0x2473e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
label_2473ec:
    // 0x2473ec: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x2473ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_2473f0:
    // 0x2473f0: 0x8c760024  lw          $s6, 0x24($v1)
    ctx->pc = 0x2473f0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_2473f4:
    // 0x2473f4: 0x12c00008  beqz        $s6, . + 4 + (0x8 << 2)
label_2473f8:
    if (ctx->pc == 0x2473F8u) {
        ctx->pc = 0x2473F8u;
            // 0x2473f8: 0x24660024  addiu       $a2, $v1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
        ctx->pc = 0x2473FCu;
        goto label_2473fc;
    }
    ctx->pc = 0x2473F4u;
    {
        const bool branch_taken_0x2473f4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2473F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2473F4u;
            // 0x2473f8: 0x24660024  addiu       $a2, $v1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2473f4) {
            ctx->pc = 0x247418u;
            goto label_247418;
        }
    }
    ctx->pc = 0x2473FCu;
label_2473fc:
    // 0x2473fc: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x2473fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_247400:
    // 0x247400: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x247400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_247404:
    // 0x247404: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x247404u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_247408:
    // 0x247408: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x247408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_24740c:
    // 0x24740c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x24740cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_247410:
    // 0x247410: 0x10000003  b           . + 4 + (0x3 << 2)
label_247414:
    if (ctx->pc == 0x247414u) {
        ctx->pc = 0x247414u;
            // 0x247414: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x247418u;
        goto label_247418;
    }
    ctx->pc = 0x247410u;
    {
        const bool branch_taken_0x247410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247410u;
            // 0x247414: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247410) {
            ctx->pc = 0x247420u;
            goto label_247420;
        }
    }
    ctx->pc = 0x247418u;
label_247418:
    // 0x247418: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x247418u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24741c:
    // 0x24741c: 0x0  nop
    ctx->pc = 0x24741cu;
    // NOP
label_247420:
    // 0x247420: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
label_247424:
    if (ctx->pc == 0x247424u) {
        ctx->pc = 0x247428u;
        goto label_247428;
    }
    ctx->pc = 0x247420u;
    {
        const bool branch_taken_0x247420 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x247420) {
            ctx->pc = 0x247430u;
            goto label_247430;
        }
    }
    ctx->pc = 0x247428u;
label_247428:
    // 0x247428: 0x10000005  b           . + 4 + (0x5 << 2)
label_24742c:
    if (ctx->pc == 0x24742Cu) {
        ctx->pc = 0x247430u;
        goto label_247430;
    }
    ctx->pc = 0x247428u;
    {
        const bool branch_taken_0x247428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x247428) {
            ctx->pc = 0x247440u;
            goto label_247440;
        }
    }
    ctx->pc = 0x247430u;
label_247430:
    // 0x247430: 0xc0a79c0  jal         func_29E700
label_247434:
    if (ctx->pc == 0x247434u) {
        ctx->pc = 0x247438u;
        goto label_247438;
    }
    ctx->pc = 0x247430u;
    SET_GPR_U32(ctx, 31, 0x247438u);
    ctx->pc = 0x29E700u;
    if (runtime->hasFunction(0x29E700u)) {
        auto targetFn = runtime->lookupFunction(0x29E700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247438u; }
        if (ctx->pc != 0x247438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E700_0x29e700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247438u; }
        if (ctx->pc != 0x247438u) { return; }
    }
    ctx->pc = 0x247438u;
label_247438:
    // 0x247438: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x247438u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24743c:
    // 0x24743c: 0x0  nop
    ctx->pc = 0x24743cu;
    // NOP
label_247440:
    // 0x247440: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
label_247444:
    if (ctx->pc == 0x247444u) {
        ctx->pc = 0x247448u;
        goto label_247448;
    }
    ctx->pc = 0x247440u;
    {
        const bool branch_taken_0x247440 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x247440) {
            ctx->pc = 0x247450u;
            goto label_247450;
        }
    }
    ctx->pc = 0x247448u;
label_247448:
    // 0x247448: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x247448u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
label_24744c:
    // 0x24744c: 0x0  nop
    ctx->pc = 0x24744cu;
    // NOP
label_247450:
    // 0x247450: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x247450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_247454:
    // 0x247454: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x247454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_247458:
    // 0x247458: 0x26d20010  addiu       $s2, $s6, 0x10
    ctx->pc = 0x247458u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
label_24745c:
    // 0x24745c: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x24745cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_247460:
    // 0x247460: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x247460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
label_247464:
    // 0x247464: 0xa3a00100  sb          $zero, 0x100($sp)
    ctx->pc = 0x247464u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 256), (uint8_t)GPR_U32(ctx, 0));
label_247468:
    // 0x247468: 0xa3a000f0  sb          $zero, 0xF0($sp)
    ctx->pc = 0x247468u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 240), (uint8_t)GPR_U32(ctx, 0));
label_24746c:
    // 0x24746c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24746cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_247470:
    // 0x247470: 0x247e0010  addiu       $fp, $v1, 0x10
    ctx->pc = 0x247470u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_247474:
    // 0x247474: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x247474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_247478:
    // 0x247478: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x247478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_24747c:
    // 0x24747c: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x24747cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
label_247480:
    // 0x247480: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x247480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_247484:
    // 0x247484: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
label_247488:
    if (ctx->pc == 0x247488u) {
        ctx->pc = 0x24748Cu;
        goto label_24748c;
    }
    ctx->pc = 0x247484u;
    {
        const bool branch_taken_0x247484 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x247484) {
            ctx->pc = 0x2474F8u;
            goto label_2474f8;
        }
    }
    ctx->pc = 0x24748Cu;
label_24748c:
    // 0x24748c: 0x93c30003  lbu         $v1, 0x3($fp)
    ctx->pc = 0x24748cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 3)));
label_247490:
    // 0x247490: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x247490u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_247494:
    // 0x247494: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x247494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_247498:
    // 0x247498: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x247498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24749c:
    // 0x24749c: 0x1000000e  b           . + 4 + (0xE << 2)
label_2474a0:
    if (ctx->pc == 0x2474A0u) {
        ctx->pc = 0x2474A0u;
            // 0x2474a0: 0x33903  sra         $a3, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 4));
        ctx->pc = 0x2474A4u;
        goto label_2474a4;
    }
    ctx->pc = 0x24749Cu;
    {
        const bool branch_taken_0x24749c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2474A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24749Cu;
            // 0x2474a0: 0x33903  sra         $a3, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24749c) {
            ctx->pc = 0x2474D8u;
            goto label_2474d8;
        }
    }
    ctx->pc = 0x2474A4u;
label_2474a4:
    // 0x2474a4: 0x0  nop
    ctx->pc = 0x2474a4u;
    // NOP
label_2474a8:
    // 0x2474a8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2474a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2474ac:
    // 0x2474ac: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2474acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2474b0:
    // 0x2474b0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2474b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_2474b4:
    // 0x2474b4: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x2474b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_2474b8:
    // 0x2474b8: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x2474b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_2474bc:
    // 0x2474bc: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x2474bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2474c0:
    // 0x2474c0: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2474c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_2474c4:
    // 0x2474c4: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x2474c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_2474c8:
    // 0x2474c8: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x2474c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_2474cc:
    // 0x2474cc: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x2474ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_2474d0:
    // 0x2474d0: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x2474d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_2474d4:
    // 0x2474d4: 0x0  nop
    ctx->pc = 0x2474d4u;
    // NOP
label_2474d8:
    // 0x2474d8: 0x87182a  slt         $v1, $a0, $a3
    ctx->pc = 0x2474d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_2474dc:
    // 0x2474dc: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_2474e0:
    if (ctx->pc == 0x2474E0u) {
        ctx->pc = 0x2474E4u;
        goto label_2474e4;
    }
    ctx->pc = 0x2474DCu;
    {
        const bool branch_taken_0x2474dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2474dc) {
            ctx->pc = 0x2474A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2474a8;
        }
    }
    ctx->pc = 0x2474E4u;
label_2474e4:
    // 0x2474e4: 0x93c30003  lbu         $v1, 0x3($fp)
    ctx->pc = 0x2474e4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 3)));
label_2474e8:
    // 0x2474e8: 0x8fd10008  lw          $s1, 0x8($fp)
    ctx->pc = 0x2474e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_2474ec:
    // 0x2474ec: 0x100000c0  b           . + 4 + (0xC0 << 2)
label_2474f0:
    if (ctx->pc == 0x2474F0u) {
        ctx->pc = 0x2474F0u;
            // 0x2474f0: 0x3c3f021  addu        $fp, $fp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
        ctx->pc = 0x2474F4u;
        goto label_2474f4;
    }
    ctx->pc = 0x2474ECu;
    {
        const bool branch_taken_0x2474ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2474F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2474ECu;
            // 0x2474f0: 0x3c3f021  addu        $fp, $fp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2474ec) {
            ctx->pc = 0x2477F0u;
            goto label_2477f0;
        }
    }
    ctx->pc = 0x2474F4u;
label_2474f4:
    // 0x2474f4: 0x0  nop
    ctx->pc = 0x2474f4u;
    // NOP
label_2474f8:
    // 0x2474f8: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x2474f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2474fc:
    // 0x2474fc: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x2474fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_247500:
    // 0x247500: 0x1471001d  bne         $v1, $s1, . + 4 + (0x1D << 2)
label_247504:
    if (ctx->pc == 0x247504u) {
        ctx->pc = 0x247504u;
            // 0x247504: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247508u;
        goto label_247508;
    }
    ctx->pc = 0x247500u;
    {
        const bool branch_taken_0x247500 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x247504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247500u;
            // 0x247504: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247500) {
            ctx->pc = 0x247578u;
            goto label_247578;
        }
    }
    ctx->pc = 0x247508u;
label_247508:
    // 0x247508: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x247508u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_24750c:
    // 0x24750c: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x24750cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_247510:
    // 0x247510: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x247510u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_247514:
    // 0x247514: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x247514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247518:
    // 0x247518: 0x1000000d  b           . + 4 + (0xD << 2)
label_24751c:
    if (ctx->pc == 0x24751Cu) {
        ctx->pc = 0x24751Cu;
            // 0x24751c: 0x34103  sra         $t0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 3), 4));
        ctx->pc = 0x247520u;
        goto label_247520;
    }
    ctx->pc = 0x247518u;
    {
        const bool branch_taken_0x247518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24751Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247518u;
            // 0x24751c: 0x34103  sra         $t0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247518) {
            ctx->pc = 0x247550u;
            goto label_247550;
        }
    }
    ctx->pc = 0x247520u;
label_247520:
    // 0x247520: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x247520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_247524:
    // 0x247524: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x247524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_247528:
    // 0x247528: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x247528u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_24752c:
    // 0x24752c: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x24752cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_247530:
    // 0x247530: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x247530u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_247534:
    // 0x247534: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x247534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_247538:
    // 0x247538: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x247538u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_24753c:
    // 0x24753c: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x24753cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_247540:
    // 0x247540: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x247540u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
label_247544:
    // 0x247544: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x247544u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_247548:
    // 0x247548: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x247548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_24754c:
    // 0x24754c: 0x0  nop
    ctx->pc = 0x24754cu;
    // NOP
label_247550:
    // 0x247550: 0xa8182a  slt         $v1, $a1, $t0
    ctx->pc = 0x247550u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_247554:
    // 0x247554: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_247558:
    if (ctx->pc == 0x247558u) {
        ctx->pc = 0x24755Cu;
        goto label_24755c;
    }
    ctx->pc = 0x247554u;
    {
        const bool branch_taken_0x247554 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x247554) {
            ctx->pc = 0x247520u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_247520;
        }
    }
    ctx->pc = 0x24755Cu;
label_24755c:
    // 0x24755c: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x24755cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_247560:
    // 0x247560: 0x90840003  lbu         $a0, 0x3($a0)
    ctx->pc = 0x247560u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_247564:
    // 0x247564: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x247564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_247568:
    // 0x247568: 0xafa30150  sw          $v1, 0x150($sp)
    ctx->pc = 0x247568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 3));
label_24756c:
    // 0x24756c: 0x100000a0  b           . + 4 + (0xA0 << 2)
label_247570:
    if (ctx->pc == 0x247570u) {
        ctx->pc = 0x247570u;
            // 0x247570: 0x3c4f021  addu        $fp, $fp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
        ctx->pc = 0x247574u;
        goto label_247574;
    }
    ctx->pc = 0x24756Cu;
    {
        const bool branch_taken_0x24756c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24756Cu;
            // 0x247570: 0x3c4f021  addu        $fp, $fp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24756c) {
            ctx->pc = 0x2477F0u;
            goto label_2477f0;
        }
    }
    ctx->pc = 0x247574u;
label_247574:
    // 0x247574: 0x0  nop
    ctx->pc = 0x247574u;
    // NOP
label_247578:
    // 0x247578: 0x71082b  sltu        $at, $v1, $s1
    ctx->pc = 0x247578u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_24757c:
    // 0x24757c: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
label_247580:
    if (ctx->pc == 0x247580u) {
        ctx->pc = 0x247584u;
        goto label_247584;
    }
    ctx->pc = 0x24757Cu;
    {
        const bool branch_taken_0x24757c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x24757c) {
            ctx->pc = 0x2475E8u;
            goto label_2475e8;
        }
    }
    ctx->pc = 0x247584u;
label_247584:
    // 0x247584: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x247584u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_247588:
    // 0x247588: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x247588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_24758c:
    // 0x24758c: 0x3063000e  andi        $v1, $v1, 0xE
    ctx->pc = 0x24758cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)14);
label_247590:
    // 0x247590: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_247594:
    if (ctx->pc == 0x247594u) {
        ctx->pc = 0x247594u;
            // 0x247594: 0x24850020  addiu       $a1, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->pc = 0x247598u;
        goto label_247598;
    }
    ctx->pc = 0x247590u;
    {
        const bool branch_taken_0x247590 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x247594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247590u;
            // 0x247594: 0x24850020  addiu       $a1, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247590) {
            ctx->pc = 0x2475A0u;
            goto label_2475a0;
        }
    }
    ctx->pc = 0x247598u;
label_247598:
    // 0x247598: 0x10000003  b           . + 4 + (0x3 << 2)
label_24759c:
    if (ctx->pc == 0x24759Cu) {
        ctx->pc = 0x2475A0u;
        goto label_2475a0;
    }
    ctx->pc = 0x247598u;
    {
        const bool branch_taken_0x247598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x247598) {
            ctx->pc = 0x2475A8u;
            goto label_2475a8;
        }
    }
    ctx->pc = 0x2475A0u;
label_2475a0:
    // 0x2475a0: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x2475a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_2475a4:
    // 0x2475a4: 0x0  nop
    ctx->pc = 0x2475a4u;
    // NOP
label_2475a8:
    // 0x2475a8: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x2475a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_2475ac:
    // 0x2475ac: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x2475acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_2475b0:
    // 0x2475b0: 0x8e670004  lw          $a3, 0x4($s3)
    ctx->pc = 0x2475b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2475b4:
    // 0x2475b4: 0x8e86000c  lw          $a2, 0xC($s4)
    ctx->pc = 0x2475b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_2475b8:
    // 0x2475b8: 0x3c2f021  addu        $fp, $fp, $v0
    ctx->pc = 0x2475b8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_2475bc:
    // 0x2475bc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2475bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2475c0:
    // 0x2475c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2475c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2475c4:
    // 0x2475c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2475c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2475c8:
    // 0x2475c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2475c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2475cc:
    // 0x2475cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2475ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2475d0:
    // 0x2475d0: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x2475d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_2475d4:
    // 0x2475d4: 0x8c4216b4  lw          $v0, 0x16B4($v0)
    ctx->pc = 0x2475d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5812)));
label_2475d8:
    // 0x2475d8: 0x40f809  jalr        $v0
label_2475dc:
    if (ctx->pc == 0x2475DCu) {
        ctx->pc = 0x2475DCu;
            // 0x2475dc: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2475E0u;
        goto label_2475e0;
    }
    ctx->pc = 0x2475D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2475E0u);
        ctx->pc = 0x2475DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2475D8u;
            // 0x2475dc: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2475E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2475E0u; }
            if (ctx->pc != 0x2475E0u) { return; }
        }
        }
    }
    ctx->pc = 0x2475E0u;
label_2475e0:
    // 0x2475e0: 0x100002a7  b           . + 4 + (0x2A7 << 2)
label_2475e4:
    if (ctx->pc == 0x2475E4u) {
        ctx->pc = 0x2475E8u;
        goto label_2475e8;
    }
    ctx->pc = 0x2475E0u;
    {
        const bool branch_taken_0x2475e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2475e0) {
            ctx->pc = 0x248080u;
            goto label_248080;
        }
    }
    ctx->pc = 0x2475E8u;
label_2475e8:
    // 0x2475e8: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x2475e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_2475ec:
    // 0x2475ec: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2475ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2475f0:
    // 0x2475f0: 0x27a416ec  addiu       $a0, $sp, 0x16EC
    ctx->pc = 0x2475f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5868));
label_2475f4:
    // 0x2475f4: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x2475f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2475f8:
    // 0x2475f8: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x2475f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2475fc:
    // 0x2475fc: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x2475fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_247600:
    // 0x247600: 0x8c48000c  lw          $t0, 0xC($v0)
    ctx->pc = 0x247600u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_247604:
    // 0x247604: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x247604u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_247608:
    // 0x247608: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x247608u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_24760c:
    // 0x24760c: 0x320f809  jalr        $t9
label_247610:
    if (ctx->pc == 0x247610u) {
        ctx->pc = 0x247610u;
            // 0x247610: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247614u;
        goto label_247614;
    }
    ctx->pc = 0x24760Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x247614u);
        ctx->pc = 0x247610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24760Cu;
            // 0x247610: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x247614u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x247614u; }
            if (ctx->pc != 0x247614u) { return; }
        }
        }
    }
    ctx->pc = 0x247614u;
label_247614:
    // 0x247614: 0x27a316ec  addiu       $v1, $sp, 0x16EC
    ctx->pc = 0x247614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 5868));
label_247618:
    // 0x247618: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x247618u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_24761c:
    // 0x24761c: 0x1060006a  beqz        $v1, . + 4 + (0x6A << 2)
label_247620:
    if (ctx->pc == 0x247620u) {
        ctx->pc = 0x247624u;
        goto label_247624;
    }
    ctx->pc = 0x24761Cu;
    {
        const bool branch_taken_0x24761c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24761c) {
            ctx->pc = 0x2477C8u;
            goto label_2477c8;
        }
    }
    ctx->pc = 0x247624u;
label_247624:
    // 0x247624: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x247624u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_247628:
    // 0x247628: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x247628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_24762c:
    // 0x24762c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24762cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_247630:
    // 0x247630: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x247630u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_247634:
    // 0x247634: 0x320f809  jalr        $t9
label_247638:
    if (ctx->pc == 0x247638u) {
        ctx->pc = 0x247638u;
            // 0x247638: 0x27a604d0  addiu       $a2, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->pc = 0x24763Cu;
        goto label_24763c;
    }
    ctx->pc = 0x247634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24763Cu);
        ctx->pc = 0x247638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247634u;
            // 0x247638: 0x27a604d0  addiu       $a2, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x24763Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24763Cu; }
            if (ctx->pc != 0x24763Cu) { return; }
        }
        }
    }
    ctx->pc = 0x24763Cu;
label_24763c:
    // 0x24763c: 0xafa204c0  sw          $v0, 0x4C0($sp)
    ctx->pc = 0x24763cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1216), GPR_U32(ctx, 2));
label_247640:
    // 0x247640: 0x27a416e8  addiu       $a0, $sp, 0x16E8
    ctx->pc = 0x247640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5864));
label_247644:
    // 0x247644: 0xafb104c4  sw          $s1, 0x4C4($sp)
    ctx->pc = 0x247644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1220), GPR_U32(ctx, 17));
label_247648:
    // 0x247648: 0x27a316e0  addiu       $v1, $sp, 0x16E0
    ctx->pc = 0x247648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 5856));
label_24764c:
    // 0x24764c: 0xae510008  sw          $s1, 0x8($s2)
    ctx->pc = 0x24764cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 17));
label_247650:
    // 0x247650: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x247650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_247654:
    // 0x247654: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x247654u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_247658:
    // 0x247658: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x247658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_24765c:
    // 0x24765c: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x24765cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_247660:
    // 0x247660: 0x80420010  lb          $v0, 0x10($v0)
    ctx->pc = 0x247660u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
label_247664:
    // 0x247664: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x247664u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_247668:
    // 0x247668: 0xa3a216e8  sb          $v0, 0x16E8($sp)
    ctx->pc = 0x247668u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 5864), (uint8_t)GPR_U32(ctx, 2));
label_24766c:
    // 0x24766c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x24766cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_247670:
    // 0x247670: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x247670u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_247674:
    // 0x247674: 0x83a216e0  lb          $v0, 0x16E0($sp)
    ctx->pc = 0x247674u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 5856)));
label_247678:
    // 0x247678: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_24767c:
    if (ctx->pc == 0x24767Cu) {
        ctx->pc = 0x247680u;
        goto label_247680;
    }
    ctx->pc = 0x247678u;
    {
        const bool branch_taken_0x247678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x247678) {
            ctx->pc = 0x247698u;
            goto label_247698;
        }
    }
    ctx->pc = 0x247680u;
label_247680:
    // 0x247680: 0x61140  sll         $v0, $a2, 5
    ctx->pc = 0x247680u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_247684:
    // 0x247684: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x247684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_247688:
    // 0x247688: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x247688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_24768c:
    // 0x24768c: 0x10000006  b           . + 4 + (0x6 << 2)
label_247690:
    if (ctx->pc == 0x247690u) {
        ctx->pc = 0x247690u;
            // 0x247690: 0x904212b0  lbu         $v0, 0x12B0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4784)));
        ctx->pc = 0x247694u;
        goto label_247694;
    }
    ctx->pc = 0x24768Cu;
    {
        const bool branch_taken_0x24768c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24768Cu;
            // 0x247690: 0x904212b0  lbu         $v0, 0x12B0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24768c) {
            ctx->pc = 0x2476A8u;
            goto label_2476a8;
        }
    }
    ctx->pc = 0x247694u;
label_247694:
    // 0x247694: 0x0  nop
    ctx->pc = 0x247694u;
    // NOP
label_247698:
    // 0x247698: 0x61140  sll         $v0, $a2, 5
    ctx->pc = 0x247698u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_24769c:
    // 0x24769c: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x24769cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_2476a0:
    // 0x2476a0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2476a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2476a4:
    // 0x2476a4: 0x90420eb0  lbu         $v0, 0xEB0($v0)
    ctx->pc = 0x2476a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3760)));
label_2476a8:
    // 0x2476a8: 0xa2420001  sb          $v0, 0x1($s2)
    ctx->pc = 0x2476a8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
label_2476ac:
    // 0x2476ac: 0xa2400002  sb          $zero, 0x2($s2)
    ctx->pc = 0x2476acu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 0));
label_2476b0:
    // 0x2476b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2476b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2476b4:
    // 0x2476b4: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x2476b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_2476b8:
    // 0x2476b8: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x2476b8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_2476bc:
    // 0x2476bc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2476bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2476c0:
    // 0x2476c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2476c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2476c4:
    // 0x2476c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2476c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2476c8:
    // 0x2476c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2476c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2476cc:
    // 0x2476cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2476ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2476d0:
    // 0x2476d0: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x2476d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
label_2476d4:
    // 0x2476d4: 0x8c6316e0  lw          $v1, 0x16E0($v1)
    ctx->pc = 0x2476d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5856)));
label_2476d8:
    // 0x2476d8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_2476dc:
    if (ctx->pc == 0x2476DCu) {
        ctx->pc = 0x2476DCu;
            // 0x2476dc: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2476E0u;
        goto label_2476e0;
    }
    ctx->pc = 0x2476D8u;
    {
        const bool branch_taken_0x2476d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2476DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2476D8u;
            // 0x2476dc: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2476d8) {
            ctx->pc = 0x2476F8u;
            goto label_2476f8;
        }
    }
    ctx->pc = 0x2476E0u;
label_2476e0:
    // 0x2476e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2476e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2476e4:
    // 0x2476e4: 0x27b00270  addiu       $s0, $sp, 0x270
    ctx->pc = 0x2476e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_2476e8:
    // 0x2476e8: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x2476e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_2476ec:
    // 0x2476ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2476ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2476f0:
    // 0x2476f0: 0xc091ca4  jal         func_247290
label_2476f4:
    if (ctx->pc == 0x2476F4u) {
        ctx->pc = 0x2476F4u;
            // 0x2476f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2476F8u;
        goto label_2476f8;
    }
    ctx->pc = 0x2476F0u;
    SET_GPR_U32(ctx, 31, 0x2476F8u);
    ctx->pc = 0x2476F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2476F0u;
            // 0x2476f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x247290u;
    if (runtime->hasFunction(0x247290u)) {
        auto targetFn = runtime->lookupFunction(0x247290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2476F8u; }
        if (ctx->pc != 0x2476F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00247290_0x247290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2476F8u; }
        if (ctx->pc != 0x2476F8u) { return; }
    }
    ctx->pc = 0x2476F8u;
label_2476f8:
    // 0x2476f8: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x2476f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_2476fc:
    // 0x2476fc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2476fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_247700:
    // 0x247700: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x247700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_247704:
    // 0x247704: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x247704u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_247708:
    // 0x247708: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x247708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24770c:
    // 0x24770c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24770cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_247710:
    // 0x247710: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x247710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_247714:
    // 0x247714: 0x8c4216d4  lw          $v0, 0x16D4($v0)
    ctx->pc = 0x247714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5844)));
label_247718:
    // 0x247718: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_24771c:
    if (ctx->pc == 0x24771Cu) {
        ctx->pc = 0x247720u;
        goto label_247720;
    }
    ctx->pc = 0x247718u;
    {
        const bool branch_taken_0x247718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x247718) {
            ctx->pc = 0x247780u;
            goto label_247780;
        }
    }
    ctx->pc = 0x247720u;
label_247720:
    // 0x247720: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x247720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_247724:
    // 0x247724: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247728:
    // 0x247728: 0x26460020  addiu       $a2, $s2, 0x20
    ctx->pc = 0x247728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_24772c:
    // 0x24772c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x24772cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_247730:
    // 0x247730: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x247730u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
label_247734:
    // 0x247734: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x247734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_247738:
    // 0x247738: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x247738u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_24773c:
    // 0x24773c: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x24773cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
label_247740:
    // 0x247740: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x247740u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_247744:
    // 0x247744: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x247744u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_247748:
    // 0x247748: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x247748u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_24774c:
    // 0x24774c: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x24774cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_247750:
    // 0x247750: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x247750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_247754:
    // 0x247754: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x247754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_247758:
    // 0x247758: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x247758u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24775c:
    // 0x24775c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24775cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_247760:
    // 0x247760: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x247760u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_247764:
    // 0x247764: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x247764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_247768:
    // 0x247768: 0x8c4216b0  lw          $v0, 0x16B0($v0)
    ctx->pc = 0x247768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5808)));
label_24776c:
    // 0x24776c: 0x40f809  jalr        $v0
label_247770:
    if (ctx->pc == 0x247770u) {
        ctx->pc = 0x247770u;
            // 0x247770: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247774u;
        goto label_247774;
    }
    ctx->pc = 0x24776Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x247774u);
        ctx->pc = 0x247770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24776Cu;
            // 0x247770: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x247774u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x247774u; }
            if (ctx->pc != 0x247774u) { return; }
        }
        }
    }
    ctx->pc = 0x247774u;
label_247774:
    // 0x247774: 0x521823  subu        $v1, $v0, $s2
    ctx->pc = 0x247774u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_247778:
    // 0x247778: 0x10000019  b           . + 4 + (0x19 << 2)
label_24777c:
    if (ctx->pc == 0x24777Cu) {
        ctx->pc = 0x24777Cu;
            // 0x24777c: 0xa2430003  sb          $v1, 0x3($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x247780u;
        goto label_247780;
    }
    ctx->pc = 0x247778u;
    {
        const bool branch_taken_0x247778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24777Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247778u;
            // 0x24777c: 0xa2430003  sb          $v1, 0x3($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247778) {
            ctx->pc = 0x2477E0u;
            goto label_2477e0;
        }
    }
    ctx->pc = 0x247780u;
label_247780:
    // 0x247780: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x247780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_247784:
    // 0x247784: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247788:
    // 0x247788: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x247788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_24778c:
    // 0x24778c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x24778cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_247790:
    // 0x247790: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x247790u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
label_247794:
    // 0x247794: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x247794u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_247798:
    // 0x247798: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x247798u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_24779c:
    // 0x24779c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24779cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2477a0:
    // 0x2477a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2477a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2477a4:
    // 0x2477a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2477a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2477a8:
    // 0x2477a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2477a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2477ac:
    // 0x2477ac: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x2477acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_2477b0:
    // 0x2477b0: 0x8c4216b0  lw          $v0, 0x16B0($v0)
    ctx->pc = 0x2477b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5808)));
label_2477b4:
    // 0x2477b4: 0x40f809  jalr        $v0
label_2477b8:
    if (ctx->pc == 0x2477B8u) {
        ctx->pc = 0x2477B8u;
            // 0x2477b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2477BCu;
        goto label_2477bc;
    }
    ctx->pc = 0x2477B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2477BCu);
        ctx->pc = 0x2477B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2477B4u;
            // 0x2477b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2477BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2477BCu; }
            if (ctx->pc != 0x2477BCu) { return; }
        }
        }
    }
    ctx->pc = 0x2477BCu;
label_2477bc:
    // 0x2477bc: 0x521823  subu        $v1, $v0, $s2
    ctx->pc = 0x2477bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_2477c0:
    // 0x2477c0: 0x10000007  b           . + 4 + (0x7 << 2)
label_2477c4:
    if (ctx->pc == 0x2477C4u) {
        ctx->pc = 0x2477C4u;
            // 0x2477c4: 0xa2430003  sb          $v1, 0x3($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2477C8u;
        goto label_2477c8;
    }
    ctx->pc = 0x2477C0u;
    {
        const bool branch_taken_0x2477c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2477C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2477C0u;
            // 0x2477c4: 0xa2430003  sb          $v1, 0x3($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2477c0) {
            ctx->pc = 0x2477E0u;
            goto label_2477e0;
        }
    }
    ctx->pc = 0x2477C8u;
label_2477c8:
    // 0x2477c8: 0xae510008  sw          $s1, 0x8($s2)
    ctx->pc = 0x2477c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 17));
label_2477cc:
    // 0x2477cc: 0xa2400001  sb          $zero, 0x1($s2)
    ctx->pc = 0x2477ccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
label_2477d0:
    // 0x2477d0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2477d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2477d4:
    // 0x2477d4: 0xa2400002  sb          $zero, 0x2($s2)
    ctx->pc = 0x2477d4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 0));
label_2477d8:
    // 0x2477d8: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x2477d8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
label_2477dc:
    // 0x2477dc: 0xa2430003  sb          $v1, 0x3($s2)
    ctx->pc = 0x2477dcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 3));
label_2477e0:
    // 0x2477e0: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x2477e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_2477e4:
    // 0x2477e4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2477e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_2477e8:
    // 0x2477e8: 0xafa30150  sw          $v1, 0x150($sp)
    ctx->pc = 0x2477e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 3));
label_2477ec:
    // 0x2477ec: 0x0  nop
    ctx->pc = 0x2477ecu;
    // NOP
label_2477f0:
    // 0x2477f0: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x2477f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_2477f4:
    // 0x2477f4: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x2477f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_2477f8:
    // 0x2477f8: 0x10200221  beqz        $at, . + 4 + (0x221 << 2)
label_2477fc:
    if (ctx->pc == 0x2477FCu) {
        ctx->pc = 0x2477FCu;
            // 0x2477fc: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->pc = 0x247800u;
        goto label_247800;
    }
    ctx->pc = 0x2477F8u;
    {
        const bool branch_taken_0x2477f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2477FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2477F8u;
            // 0x2477fc: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2477f8) {
            ctx->pc = 0x248080u;
            goto label_248080;
        }
    }
    ctx->pc = 0x247800u;
label_247800:
    // 0x247800: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x247800u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_247804:
    // 0x247804: 0x2484f820  addiu       $a0, $a0, -0x7E0
    ctx->pc = 0x247804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965280));
label_247808:
    // 0x247808: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x247808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_24780c:
    // 0x24780c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x24780cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_247810:
    // 0x247810: 0x600008  jr          $v1
label_247814:
    if (ctx->pc == 0x247814u) {
        ctx->pc = 0x247818u;
        goto label_247818;
    }
    ctx->pc = 0x247810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x247818u: goto label_247818;
            case 0x247860u: goto label_247860;
            case 0x2478D0u: goto label_2478d0;
            case 0x247AC0u: goto label_247ac0;
            case 0x247E60u: goto label_247e60;
            case 0x248070u: goto label_248070;
            case 0x248078u: goto label_248078;
            default: break;
        }
        return;
    }
    ctx->pc = 0x247818u;
label_247818:
    // 0x247818: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x247818u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_24781c:
    // 0x24781c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x24781cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_247820:
    // 0x247820: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x247820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_247824:
    // 0x247824: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x247824u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_247828:
    // 0x247828: 0x320f809  jalr        $t9
label_24782c:
    if (ctx->pc == 0x24782Cu) {
        ctx->pc = 0x24782Cu;
            // 0x24782c: 0x27a604d0  addiu       $a2, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->pc = 0x247830u;
        goto label_247830;
    }
    ctx->pc = 0x247828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x247830u);
        ctx->pc = 0x24782Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247828u;
            // 0x24782c: 0x27a604d0  addiu       $a2, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x247830u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x247830u; }
            if (ctx->pc != 0x247830u) { return; }
        }
        }
    }
    ctx->pc = 0x247830u;
label_247830:
    // 0x247830: 0xafb104c4  sw          $s1, 0x4C4($sp)
    ctx->pc = 0x247830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1220), GPR_U32(ctx, 17));
label_247834:
    // 0x247834: 0x27a604c0  addiu       $a2, $sp, 0x4C0
    ctx->pc = 0x247834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
label_247838:
    // 0x247838: 0xafa204c0  sw          $v0, 0x4C0($sp)
    ctx->pc = 0x247838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1216), GPR_U32(ctx, 2));
label_24783c:
    // 0x24783c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x24783cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_247840:
    // 0x247840: 0x8e870008  lw          $a3, 0x8($s4)
    ctx->pc = 0x247840u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_247844:
    // 0x247844: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x247844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_247848:
    // 0x247848: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x247848u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24784c:
    // 0x24784c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x24784cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_247850:
    // 0x247850: 0x320f809  jalr        $t9
label_247854:
    if (ctx->pc == 0x247854u) {
        ctx->pc = 0x247854u;
            // 0x247854: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247858u;
        goto label_247858;
    }
    ctx->pc = 0x247850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x247858u);
        ctx->pc = 0x247854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247850u;
            // 0x247854: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x247858u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x247858u; }
            if (ctx->pc != 0x247858u) { return; }
        }
        }
    }
    ctx->pc = 0x247858u;
label_247858:
    // 0x247858: 0x10000209  b           . + 4 + (0x209 << 2)
label_24785c:
    if (ctx->pc == 0x24785Cu) {
        ctx->pc = 0x24785Cu;
            // 0x24785c: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x247860u;
        goto label_247860;
    }
    ctx->pc = 0x247858u;
    {
        const bool branch_taken_0x247858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24785Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247858u;
            // 0x24785c: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247858) {
            ctx->pc = 0x248080u;
            goto label_248080;
        }
    }
    ctx->pc = 0x247860u;
label_247860:
    // 0x247860: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x247860u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_247864:
    // 0x247864: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x247864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_247868:
    // 0x247868: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x247868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24786c:
    // 0x24786c: 0x27a604d0  addiu       $a2, $sp, 0x4D0
    ctx->pc = 0x24786cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
label_247870:
    // 0x247870: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x247870u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_247874:
    // 0x247874: 0x320f809  jalr        $t9
label_247878:
    if (ctx->pc == 0x247878u) {
        ctx->pc = 0x247878u;
            // 0x247878: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24787Cu;
        goto label_24787c;
    }
    ctx->pc = 0x247874u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24787Cu);
        ctx->pc = 0x247878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247874u;
            // 0x247878: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x24787Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24787Cu; }
            if (ctx->pc != 0x24787Cu) { return; }
        }
        }
    }
    ctx->pc = 0x24787Cu;
label_24787c:
    // 0x24787c: 0xafb104c4  sw          $s1, 0x4C4($sp)
    ctx->pc = 0x24787cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1220), GPR_U32(ctx, 17));
label_247880:
    // 0x247880: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x247880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_247884:
    // 0x247884: 0xafa204c0  sw          $v0, 0x4C0($sp)
    ctx->pc = 0x247884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1216), GPR_U32(ctx, 2));
label_247888:
    // 0x247888: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x247888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_24788c:
    // 0x24788c: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x24788cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_247890:
    // 0x247890: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x247890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_247894:
    // 0x247894: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x247894u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247898:
    // 0x247898: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x247898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_24789c:
    // 0x24789c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24789cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2478a0:
    // 0x2478a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2478a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2478a4:
    // 0x2478a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2478a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2478a8:
    // 0x2478a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2478a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2478ac:
    // 0x2478ac: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x2478acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_2478b0:
    // 0x2478b0: 0x8c4216d8  lw          $v0, 0x16D8($v0)
    ctx->pc = 0x2478b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5848)));
label_2478b4:
    // 0x2478b4: 0x40f809  jalr        $v0
label_2478b8:
    if (ctx->pc == 0x2478B8u) {
        ctx->pc = 0x2478B8u;
            // 0x2478b8: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2478BCu;
        goto label_2478bc;
    }
    ctx->pc = 0x2478B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2478BCu);
        ctx->pc = 0x2478B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2478B4u;
            // 0x2478b8: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2478BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2478BCu; }
            if (ctx->pc != 0x2478BCu) { return; }
        }
        }
    }
    ctx->pc = 0x2478BCu;
label_2478bc:
    // 0x2478bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2478bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2478c0:
    // 0x2478c0: 0x2501823  subu        $v1, $s2, $s0
    ctx->pc = 0x2478c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_2478c4:
    // 0x2478c4: 0x100001ee  b           . + 4 + (0x1EE << 2)
label_2478c8:
    if (ctx->pc == 0x2478C8u) {
        ctx->pc = 0x2478C8u;
            // 0x2478c8: 0xa2030003  sb          $v1, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2478CCu;
        goto label_2478cc;
    }
    ctx->pc = 0x2478C4u;
    {
        const bool branch_taken_0x2478c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2478C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2478C4u;
            // 0x2478c8: 0xa2030003  sb          $v1, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2478c4) {
            ctx->pc = 0x248080u;
            goto label_248080;
        }
    }
    ctx->pc = 0x2478CCu;
label_2478cc:
    // 0x2478cc: 0x0  nop
    ctx->pc = 0x2478ccu;
    // NOP
label_2478d0:
    // 0x2478d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2478d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2478d4:
    // 0x2478d4: 0xc091ca4  jal         func_247290
label_2478d8:
    if (ctx->pc == 0x2478D8u) {
        ctx->pc = 0x2478D8u;
            // 0x2478d8: 0x27a50200  addiu       $a1, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->pc = 0x2478DCu;
        goto label_2478dc;
    }
    ctx->pc = 0x2478D4u;
    SET_GPR_U32(ctx, 31, 0x2478DCu);
    ctx->pc = 0x2478D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2478D4u;
            // 0x2478d8: 0x27a50200  addiu       $a1, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x247290u;
    if (runtime->hasFunction(0x247290u)) {
        auto targetFn = runtime->lookupFunction(0x247290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2478DCu; }
        if (ctx->pc != 0x2478DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00247290_0x247290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2478DCu; }
        if (ctx->pc != 0x2478DCu) { return; }
    }
    ctx->pc = 0x2478DCu;
label_2478dc:
    // 0x2478dc: 0xafb200bc  sw          $s2, 0xBC($sp)
    ctx->pc = 0x2478dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 18));
label_2478e0:
    // 0x2478e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2478e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2478e4:
    // 0x2478e4: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x2478e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2478e8:
    // 0x2478e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2478e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2478ec:
    // 0x2478ec: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2478ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2478f0:
    // 0x2478f0: 0x320f809  jalr        $t9
label_2478f4:
    if (ctx->pc == 0x2478F4u) {
        ctx->pc = 0x2478F4u;
            // 0x2478f4: 0x27a604d0  addiu       $a2, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->pc = 0x2478F8u;
        goto label_2478f8;
    }
    ctx->pc = 0x2478F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2478F8u);
        ctx->pc = 0x2478F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2478F0u;
            // 0x2478f4: 0x27a604d0  addiu       $a2, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2478F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2478F8u; }
            if (ctx->pc != 0x2478F8u) { return; }
        }
        }
    }
    ctx->pc = 0x2478F8u;
label_2478f8:
    // 0x2478f8: 0xafb104c4  sw          $s1, 0x4C4($sp)
    ctx->pc = 0x2478f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1220), GPR_U32(ctx, 17));
label_2478fc:
    // 0x2478fc: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x2478fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_247900:
    // 0x247900: 0xafa204c0  sw          $v0, 0x4C0($sp)
    ctx->pc = 0x247900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1216), GPR_U32(ctx, 2));
label_247904:
    // 0x247904: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x247904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_247908:
    // 0x247908: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x247908u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_24790c:
    // 0x24790c: 0xc6743030  lwc1        $f20, 0x3030($s3)
    ctx->pc = 0x24790cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_247910:
    // 0x247910: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x247910u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_247914:
    // 0x247914: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x247914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_247918:
    // 0x247918: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x247918u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24791c:
    // 0x24791c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x24791cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_247920:
    // 0x247920: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x247920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_247924:
    // 0x247924: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x247924u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_247928:
    // 0x247928: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x247928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24792c:
    // 0x24792c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24792cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_247930:
    // 0x247930: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x247930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_247934:
    // 0x247934: 0x8c4216d8  lw          $v0, 0x16D8($v0)
    ctx->pc = 0x247934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5848)));
label_247938:
    // 0x247938: 0x40f809  jalr        $v0
label_24793c:
    if (ctx->pc == 0x24793Cu) {
        ctx->pc = 0x24793Cu;
            // 0x24793c: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247940u;
        goto label_247940;
    }
    ctx->pc = 0x247938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x247940u);
        ctx->pc = 0x24793Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247938u;
            // 0x24793c: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x247940u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x247940u; }
            if (ctx->pc != 0x247940u) { return; }
        }
        }
    }
    ctx->pc = 0x247940u;
label_247940:
    // 0x247940: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x247940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_247944:
    // 0x247944: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x247944u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_247948:
    // 0x247948: 0x2432023  subu        $a0, $s2, $v1
    ctx->pc = 0x247948u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_24794c:
    // 0x24794c: 0x1000002c  b           . + 4 + (0x2C << 2)
label_247950:
    if (ctx->pc == 0x247950u) {
        ctx->pc = 0x247950u;
            // 0x247950: 0xa0640003  sb          $a0, 0x3($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x247954u;
        goto label_247954;
    }
    ctx->pc = 0x24794Cu;
    {
        const bool branch_taken_0x24794c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24794Cu;
            // 0x247950: 0xa0640003  sb          $a0, 0x3($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24794c) {
            ctx->pc = 0x247A00u;
            goto label_247a00;
        }
    }
    ctx->pc = 0x247954u;
label_247954:
    // 0x247954: 0x0  nop
    ctx->pc = 0x247954u;
    // NOP
label_247958:
    // 0x247958: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x247958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24795c:
    // 0x24795c: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x24795cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_247960:
    // 0x247960: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x247960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_247964:
    // 0x247964: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x247964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_247968:
    // 0x247968: 0xe7a0018c  swc1        $f0, 0x18C($sp)
    ctx->pc = 0x247968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
label_24796c:
    // 0x24796c: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x24796cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_247970:
    // 0x247970: 0xc7a10180  lwc1        $f1, 0x180($sp)
    ctx->pc = 0x247970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_247974:
    // 0x247974: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x247974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247978:
    // 0x247978: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x247978u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_24797c:
    // 0x24797c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24797cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_247980:
    // 0x247980: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x247980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_247984:
    // 0x247984: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x247984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_247988:
    // 0x247988: 0xc7a00184  lwc1        $f0, 0x184($sp)
    ctx->pc = 0x247988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24798c:
    // 0x24798c: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x24798cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_247990:
    // 0x247990: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x247990u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_247994:
    // 0x247994: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x247994u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_247998:
    // 0x247998: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x247998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_24799c:
    // 0x24799c: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x24799cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2479a0:
    // 0x2479a0: 0xc7a00188  lwc1        $f0, 0x188($sp)
    ctx->pc = 0x2479a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2479a4:
    // 0x2479a4: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x2479a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2479a8:
    // 0x2479a8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2479a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2479ac:
    // 0x2479ac: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2479acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2479b0:
    // 0x2479b0: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2479b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_2479b4:
    // 0x2479b4: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x2479b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2479b8:
    // 0x2479b8: 0xc7a0018c  lwc1        $f0, 0x18C($sp)
    ctx->pc = 0x2479b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2479bc:
    // 0x2479bc: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x2479bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2479c0:
    // 0x2479c0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2479c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2479c4:
    // 0x2479c4: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2479c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2479c8:
    // 0x2479c8: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x2479c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_2479cc:
    // 0x2479cc: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x2479ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2479d0:
    // 0x2479d0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2479d0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2479d4:
    // 0x2479d4: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x2479d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_2479d8:
    // 0x2479d8: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x2479d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2479dc:
    // 0x2479dc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2479dcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2479e0:
    // 0x2479e0: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x2479e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_2479e4:
    // 0x2479e4: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x2479e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2479e8:
    // 0x2479e8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2479e8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2479ec:
    // 0x2479ec: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x2479ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_2479f0:
    // 0x2479f0: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x2479f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2479f4:
    // 0x2479f4: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x2479f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_2479f8:
    // 0x2479f8: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x2479f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_2479fc:
    // 0x2479fc: 0x0  nop
    ctx->pc = 0x2479fcu;
    // NOP
label_247a00:
    // 0x247a00: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x247a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_247a04:
    // 0x247a04: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x247a04u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_247a08:
    // 0x247a08: 0x1460ffd3  bnez        $v1, . + 4 + (-0x2D << 2)
label_247a0c:
    if (ctx->pc == 0x247A0Cu) {
        ctx->pc = 0x247A10u;
        goto label_247a10;
    }
    ctx->pc = 0x247A08u;
    {
        const bool branch_taken_0x247a08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x247a08) {
            ctx->pc = 0x247958u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_247958;
        }
    }
    ctx->pc = 0x247A10u;
label_247a10:
    // 0x247a10: 0xc6603030  lwc1        $f0, 0x3030($s3)
    ctx->pc = 0x247a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247a14:
    // 0x247a14: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x247a14u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_247a18:
    // 0x247a18: 0x45010199  bc1t        . + 4 + (0x199 << 2)
label_247a1c:
    if (ctx->pc == 0x247A1Cu) {
        ctx->pc = 0x247A20u;
        goto label_247a20;
    }
    ctx->pc = 0x247A18u;
    {
        const bool branch_taken_0x247a18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x247a18) {
            ctx->pc = 0x248080u;
            goto label_248080;
        }
    }
    ctx->pc = 0x247A20u;
label_247a20:
    // 0x247a20: 0xc6603020  lwc1        $f0, 0x3020($s3)
    ctx->pc = 0x247a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247a24:
    // 0x247a24: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x247a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_247a28:
    // 0x247a28: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x247a28u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_247a2c:
    // 0x247a2c: 0xe6603020  swc1        $f0, 0x3020($s3)
    ctx->pc = 0x247a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12320), bits); }
label_247a30:
    // 0x247a30: 0xc6603024  lwc1        $f0, 0x3024($s3)
    ctx->pc = 0x247a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247a34:
    // 0x247a34: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x247a34u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_247a38:
    // 0x247a38: 0xe6603024  swc1        $f0, 0x3024($s3)
    ctx->pc = 0x247a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12324), bits); }
label_247a3c:
    // 0x247a3c: 0xc6603028  lwc1        $f0, 0x3028($s3)
    ctx->pc = 0x247a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247a40:
    // 0x247a40: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x247a40u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_247a44:
    // 0x247a44: 0xe6603028  swc1        $f0, 0x3028($s3)
    ctx->pc = 0x247a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12328), bits); }
label_247a48:
    // 0x247a48: 0xc660302c  lwc1        $f0, 0x302C($s3)
    ctx->pc = 0x247a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247a4c:
    // 0x247a4c: 0xe660302c  swc1        $f0, 0x302C($s3)
    ctx->pc = 0x247a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12332), bits); }
label_247a50:
    // 0x247a50: 0x92653042  lbu         $a1, 0x3042($s3)
    ctx->pc = 0x247a50u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12354)));
label_247a54:
    // 0x247a54: 0x92643043  lbu         $a0, 0x3043($s3)
    ctx->pc = 0x247a54u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12355)));
label_247a58:
    // 0x247a58: 0xa2643042  sb          $a0, 0x3042($s3)
    ctx->pc = 0x247a58u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 12354), (uint8_t)GPR_U32(ctx, 4));
label_247a5c:
    // 0x247a5c: 0xa2653043  sb          $a1, 0x3043($s3)
    ctx->pc = 0x247a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 12355), (uint8_t)GPR_U32(ctx, 5));
label_247a60:
    // 0x247a60: 0x92653040  lbu         $a1, 0x3040($s3)
    ctx->pc = 0x247a60u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12352)));
label_247a64:
    // 0x247a64: 0x92643041  lbu         $a0, 0x3041($s3)
    ctx->pc = 0x247a64u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12353)));
label_247a68:
    // 0x247a68: 0xa2643040  sb          $a0, 0x3040($s3)
    ctx->pc = 0x247a68u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 12352), (uint8_t)GPR_U32(ctx, 4));
label_247a6c:
    // 0x247a6c: 0xa2653041  sb          $a1, 0x3041($s3)
    ctx->pc = 0x247a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 12353), (uint8_t)GPR_U32(ctx, 5));
label_247a70:
    // 0x247a70: 0x92653040  lbu         $a1, 0x3040($s3)
    ctx->pc = 0x247a70u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12352)));
label_247a74:
    // 0x247a74: 0x92643041  lbu         $a0, 0x3041($s3)
    ctx->pc = 0x247a74u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12353)));
label_247a78:
    // 0x247a78: 0x96663038  lhu         $a2, 0x3038($s3)
    ctx->pc = 0x247a78u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12344)));
label_247a7c:
    // 0x247a7c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x247a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_247a80:
    // 0x247a80: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x247a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_247a84:
    // 0x247a84: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x247a84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_247a88:
    // 0x247a88: 0x932821  addu        $a1, $a0, $s3
    ctx->pc = 0x247a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_247a8c:
    // 0x247a8c: 0x94a43038  lhu         $a0, 0x3038($a1)
    ctx->pc = 0x247a8cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12344)));
label_247a90:
    // 0x247a90: 0xa6643038  sh          $a0, 0x3038($s3)
    ctx->pc = 0x247a90u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 12344), (uint16_t)GPR_U32(ctx, 4));
label_247a94:
    // 0x247a94: 0xa4a63038  sh          $a2, 0x3038($a1)
    ctx->pc = 0x247a94u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12344), (uint16_t)GPR_U32(ctx, 6));
label_247a98:
    // 0x247a98: 0x92653040  lbu         $a1, 0x3040($s3)
    ctx->pc = 0x247a98u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12352)));
label_247a9c:
    // 0x247a9c: 0x92643041  lbu         $a0, 0x3041($s3)
    ctx->pc = 0x247a9cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12353)));
label_247aa0:
    // 0x247aa0: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x247aa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_247aa4:
    // 0x247aa4: 0x14830176  bne         $a0, $v1, . + 4 + (0x176 << 2)
label_247aa8:
    if (ctx->pc == 0x247AA8u) {
        ctx->pc = 0x247AACu;
        goto label_247aac;
    }
    ctx->pc = 0x247AA4u;
    {
        const bool branch_taken_0x247aa4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x247aa4) {
            ctx->pc = 0x248080u;
            goto label_248080;
        }
    }
    ctx->pc = 0x247AACu;
label_247aac:
    // 0x247aac: 0x9664303a  lhu         $a0, 0x303A($s3)
    ctx->pc = 0x247aacu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12346)));
label_247ab0:
    // 0x247ab0: 0x9663303c  lhu         $v1, 0x303C($s3)
    ctx->pc = 0x247ab0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12348)));
label_247ab4:
    // 0x247ab4: 0xa663303a  sh          $v1, 0x303A($s3)
    ctx->pc = 0x247ab4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 12346), (uint16_t)GPR_U32(ctx, 3));
label_247ab8:
    // 0x247ab8: 0x10000171  b           . + 4 + (0x171 << 2)
label_247abc:
    if (ctx->pc == 0x247ABCu) {
        ctx->pc = 0x247ABCu;
            // 0x247abc: 0xa664303c  sh          $a0, 0x303C($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 12348), (uint16_t)GPR_U32(ctx, 4));
        ctx->pc = 0x247AC0u;
        goto label_247ac0;
    }
    ctx->pc = 0x247AB8u;
    {
        const bool branch_taken_0x247ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247AB8u;
            // 0x247abc: 0xa664303c  sh          $a0, 0x303C($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 12348), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247ab8) {
            ctx->pc = 0x248080u;
            goto label_248080;
        }
    }
    ctx->pc = 0x247AC0u;
label_247ac0:
    // 0x247ac0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x247ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_247ac4:
    // 0x247ac4: 0xc091ca4  jal         func_247290
label_247ac8:
    if (ctx->pc == 0x247AC8u) {
        ctx->pc = 0x247AC8u;
            // 0x247ac8: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x247ACCu;
        goto label_247acc;
    }
    ctx->pc = 0x247AC4u;
    SET_GPR_U32(ctx, 31, 0x247ACCu);
    ctx->pc = 0x247AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247AC4u;
            // 0x247ac8: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x247290u;
    if (runtime->hasFunction(0x247290u)) {
        auto targetFn = runtime->lookupFunction(0x247290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247ACCu; }
        if (ctx->pc != 0x247ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00247290_0x247290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247ACCu; }
        if (ctx->pc != 0x247ACCu) { return; }
    }
    ctx->pc = 0x247ACCu;
label_247acc:
    // 0x247acc: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x247accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_247ad0:
    // 0x247ad0: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x247ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247ad4:
    // 0x247ad4: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x247ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_247ad8:
    // 0x247ad8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x247ad8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_247adc:
    // 0x247adc: 0x45010036  bc1t        . + 4 + (0x36 << 2)
label_247ae0:
    if (ctx->pc == 0x247AE0u) {
        ctx->pc = 0x247AE0u;
            // 0x247ae0: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247AE4u;
        goto label_247ae4;
    }
    ctx->pc = 0x247ADCu;
    {
        const bool branch_taken_0x247adc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x247AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247ADCu;
            // 0x247ae0: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247adc) {
            ctx->pc = 0x247BB8u;
            goto label_247bb8;
        }
    }
    ctx->pc = 0x247AE4u;
label_247ae4:
    // 0x247ae4: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x247ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_247ae8:
    // 0x247ae8: 0x80820010  lb          $v0, 0x10($a0)
    ctx->pc = 0x247ae8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_247aec:
    // 0x247aec: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_247af0:
    if (ctx->pc == 0x247AF0u) {
        ctx->pc = 0x247AF4u;
        goto label_247af4;
    }
    ctx->pc = 0x247AECu;
    {
        const bool branch_taken_0x247aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x247aec) {
            ctx->pc = 0x247B28u;
            goto label_247b28;
        }
    }
    ctx->pc = 0x247AF4u;
label_247af4:
    // 0x247af4: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x247af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247af8:
    // 0x247af8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x247af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_247afc:
    // 0x247afc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x247afcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_247b00:
    // 0x247b00: 0x0  nop
    ctx->pc = 0x247b00u;
    // NOP
label_247b04:
    // 0x247b04: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x247b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_247b08:
    // 0x247b08: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x247b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247b0c:
    // 0x247b0c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x247b0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_247b10:
    // 0x247b10: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x247b10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
label_247b14:
    // 0x247b14: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x247b14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_247b18:
    // 0x247b18: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x247b18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_247b1c:
    // 0x247b1c: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x247b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_247b20:
    // 0x247b20: 0x10000057  b           . + 4 + (0x57 << 2)
label_247b24:
    if (ctx->pc == 0x247B24u) {
        ctx->pc = 0x247B24u;
            // 0x247b24: 0xe640001c  swc1        $f0, 0x1C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
        ctx->pc = 0x247B28u;
        goto label_247b28;
    }
    ctx->pc = 0x247B20u;
    {
        const bool branch_taken_0x247b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247B20u;
            // 0x247b24: 0xe640001c  swc1        $f0, 0x1C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x247b20) {
            ctx->pc = 0x247C80u;
            goto label_247c80;
        }
    }
    ctx->pc = 0x247B28u;
label_247b28:
    // 0x247b28: 0x93a200f0  lbu         $v0, 0xF0($sp)
    ctx->pc = 0x247b28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 240)));
label_247b2c:
    // 0x247b2c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_247b30:
    if (ctx->pc == 0x247B30u) {
        ctx->pc = 0x247B30u;
            // 0x247b30: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x247B34u;
        goto label_247b34;
    }
    ctx->pc = 0x247B2Cu;
    {
        const bool branch_taken_0x247b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x247B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247B2Cu;
            // 0x247b30: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x247b2c) {
            ctx->pc = 0x247B60u;
            goto label_247b60;
        }
    }
    ctx->pc = 0x247B34u;
label_247b34:
    // 0x247b34: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x247b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_247b38:
    // 0x247b38: 0xa3a200f0  sb          $v0, 0xF0($sp)
    ctx->pc = 0x247b38u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 240), (uint8_t)GPR_U32(ctx, 2));
label_247b3c:
    // 0x247b3c: 0x27a502e0  addiu       $a1, $sp, 0x2E0
    ctx->pc = 0x247b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_247b40:
    // 0x247b40: 0xc091c68  jal         func_2471A0
label_247b44:
    if (ctx->pc == 0x247B44u) {
        ctx->pc = 0x247B44u;
            // 0x247b44: 0x27a60420  addiu       $a2, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->pc = 0x247B48u;
        goto label_247b48;
    }
    ctx->pc = 0x247B40u;
    SET_GPR_U32(ctx, 31, 0x247B48u);
    ctx->pc = 0x247B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247B40u;
            // 0x247b44: 0x27a60420  addiu       $a2, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2471A0u;
    if (runtime->hasFunction(0x2471A0u)) {
        auto targetFn = runtime->lookupFunction(0x2471A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247B48u; }
        if (ctx->pc != 0x247B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002471A0_0x2471a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247B48u; }
        if (ctx->pc != 0x247B48u) { return; }
    }
    ctx->pc = 0x247B48u;
label_247b48:
    // 0x247b48: 0x8fa20194  lw          $v0, 0x194($sp)
    ctx->pc = 0x247b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
label_247b4c:
    // 0x247b4c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x247b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_247b50:
    // 0x247b50: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x247b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_247b54:
    // 0x247b54: 0xafa202f0  sw          $v0, 0x2F0($sp)
    ctx->pc = 0x247b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 752), GPR_U32(ctx, 2));
label_247b58:
    // 0x247b58: 0xafa302f4  sw          $v1, 0x2F4($sp)
    ctx->pc = 0x247b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 756), GPR_U32(ctx, 3));
label_247b5c:
    // 0x247b5c: 0x0  nop
    ctx->pc = 0x247b5cu;
    // NOP
label_247b60:
    // 0x247b60: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x247b60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_247b64:
    // 0x247b64: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x247b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_247b68:
    // 0x247b68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x247b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_247b6c:
    // 0x247b6c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x247b6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_247b70:
    // 0x247b70: 0x320f809  jalr        $t9
label_247b74:
    if (ctx->pc == 0x247B74u) {
        ctx->pc = 0x247B74u;
            // 0x247b74: 0x27a604d0  addiu       $a2, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->pc = 0x247B78u;
        goto label_247b78;
    }
    ctx->pc = 0x247B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x247B78u);
        ctx->pc = 0x247B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247B70u;
            // 0x247b74: 0x27a604d0  addiu       $a2, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x247B78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x247B78u; }
            if (ctx->pc != 0x247B78u) { return; }
        }
        }
    }
    ctx->pc = 0x247B78u;
label_247b78:
    // 0x247b78: 0xafa202e0  sw          $v0, 0x2E0($sp)
    ctx->pc = 0x247b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 2));
label_247b7c:
    // 0x247b7c: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x247b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_247b80:
    // 0x247b80: 0xafb102e4  sw          $s1, 0x2E4($sp)
    ctx->pc = 0x247b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 740), GPR_U32(ctx, 17));
label_247b84:
    // 0x247b84: 0x27a40420  addiu       $a0, $sp, 0x420
    ctx->pc = 0x247b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_247b88:
    // 0x247b88: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x247b88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_247b8c:
    // 0x247b8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x247b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247b90:
    // 0x247b90: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x247b90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_247b94:
    // 0x247b94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x247b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_247b98:
    // 0x247b98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x247b98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_247b9c:
    // 0x247b9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x247b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_247ba0:
    // 0x247ba0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x247ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_247ba4:
    // 0x247ba4: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x247ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_247ba8:
    // 0x247ba8: 0x8c4216d4  lw          $v0, 0x16D4($v0)
    ctx->pc = 0x247ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5844)));
label_247bac:
    // 0x247bac: 0x40f809  jalr        $v0
label_247bb0:
    if (ctx->pc == 0x247BB0u) {
        ctx->pc = 0x247BB0u;
            // 0x247bb0: 0x26070010  addiu       $a3, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x247BB4u;
        goto label_247bb4;
    }
    ctx->pc = 0x247BACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x247BB4u);
        ctx->pc = 0x247BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247BACu;
            // 0x247bb0: 0x26070010  addiu       $a3, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x247BB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x247BB4u; }
            if (ctx->pc != 0x247BB4u) { return; }
        }
        }
    }
    ctx->pc = 0x247BB4u;
label_247bb4:
    // 0x247bb4: 0x0  nop
    ctx->pc = 0x247bb4u;
    // NOP
label_247bb8:
    // 0x247bb8: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x247bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_247bbc:
    // 0x247bbc: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x247bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247bc0:
    // 0x247bc0: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x247bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_247bc4:
    // 0x247bc4: 0xc7a601f0  lwc1        $f6, 0x1F0($sp)
    ctx->pc = 0x247bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_247bc8:
    // 0x247bc8: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x247bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_247bcc:
    // 0x247bcc: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x247bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247bd0:
    // 0x247bd0: 0xc7a501f4  lwc1        $f5, 0x1F4($sp)
    ctx->pc = 0x247bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_247bd4:
    // 0x247bd4: 0xc6040014  lwc1        $f4, 0x14($s0)
    ctx->pc = 0x247bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_247bd8:
    // 0x247bd8: 0xc7a301f8  lwc1        $f3, 0x1F8($sp)
    ctx->pc = 0x247bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_247bdc:
    // 0x247bdc: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x247bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_247be0:
    // 0x247be0: 0xc7a101fc  lwc1        $f1, 0x1FC($sp)
    ctx->pc = 0x247be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_247be4:
    // 0x247be4: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x247be4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_247be8:
    // 0x247be8: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x247be8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_247bec:
    // 0x247bec: 0x46043018  adda.s      $f6, $f4
    ctx->pc = 0x247becu;
    ctx->f[31] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
label_247bf0:
    // 0x247bf0: 0x4602189c  madd.s      $f2, $f3, $f2
    ctx->pc = 0x247bf0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_247bf4:
    // 0x247bf4: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x247bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247bf8:
    // 0x247bf8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x247bf8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_247bfc:
    // 0x247bfc: 0xc4850004  lwc1        $f5, 0x4($a0)
    ctx->pc = 0x247bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_247c00:
    // 0x247c00: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x247c00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_247c04:
    // 0x247c04: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x247c04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_247c08:
    // 0x247c08: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
label_247c0c:
    if (ctx->pc == 0x247C0Cu) {
        ctx->pc = 0x247C0Cu;
            // 0x247c0c: 0x2603001c  addiu       $v1, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->pc = 0x247C10u;
        goto label_247c10;
    }
    ctx->pc = 0x247C08u;
    {
        const bool branch_taken_0x247c08 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x247C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247C08u;
            // 0x247c0c: 0x2603001c  addiu       $v1, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247c08) {
            ctx->pc = 0x247C80u;
            goto label_247c80;
        }
    }
    ctx->pc = 0x247C10u;
label_247c10:
    // 0x247c10: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x247c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_247c14:
    // 0x247c14: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x247c14u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_247c18:
    // 0x247c18: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_247c1c:
    if (ctx->pc == 0x247C1Cu) {
        ctx->pc = 0x247C20u;
        goto label_247c20;
    }
    ctx->pc = 0x247C18u;
    {
        const bool branch_taken_0x247c18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x247c18) {
            ctx->pc = 0x247C30u;
            goto label_247c30;
        }
    }
    ctx->pc = 0x247C20u;
label_247c20:
    // 0x247c20: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x247c20u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_247c24:
    // 0x247c24: 0x10000012  b           . + 4 + (0x12 << 2)
label_247c28:
    if (ctx->pc == 0x247C28u) {
        ctx->pc = 0x247C28u;
            // 0x247c28: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->pc = 0x247C2Cu;
        goto label_247c2c;
    }
    ctx->pc = 0x247C24u;
    {
        const bool branch_taken_0x247c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247C24u;
            // 0x247c28: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247c24) {
            ctx->pc = 0x247C70u;
            goto label_247c70;
        }
    }
    ctx->pc = 0x247C2Cu;
label_247c2c:
    // 0x247c2c: 0x0  nop
    ctx->pc = 0x247c2cu;
    // NOP
label_247c30:
    // 0x247c30: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x247c30u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_247c34:
    // 0x247c34: 0x8e670004  lw          $a3, 0x4($s3)
    ctx->pc = 0x247c34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_247c38:
    // 0x247c38: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x247c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_247c3c:
    // 0x247c3c: 0x8fa6019c  lw          $a2, 0x19C($sp)
    ctx->pc = 0x247c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
label_247c40:
    // 0x247c40: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x247c40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_247c44:
    // 0x247c44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x247c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_247c48:
    // 0x247c48: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x247c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_247c4c:
    // 0x247c4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x247c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_247c50:
    // 0x247c50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x247c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_247c54:
    // 0x247c54: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x247c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_247c58:
    // 0x247c58: 0x8c4216b8  lw          $v0, 0x16B8($v0)
    ctx->pc = 0x247c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5816)));
label_247c5c:
    // 0x247c5c: 0x40f809  jalr        $v0
label_247c60:
    if (ctx->pc == 0x247C60u) {
        ctx->pc = 0x247C60u;
            // 0x247c60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247C64u;
        goto label_247c64;
    }
    ctx->pc = 0x247C5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x247C64u);
        ctx->pc = 0x247C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247C5Cu;
            // 0x247c60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x247C64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x247C64u; }
            if (ctx->pc != 0x247C64u) { return; }
        }
        }
    }
    ctx->pc = 0x247C64u;
label_247c64:
    // 0x247c64: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x247c64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_247c68:
    // 0x247c68: 0x2501823  subu        $v1, $s2, $s0
    ctx->pc = 0x247c68u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_247c6c:
    // 0x247c6c: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x247c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
label_247c70:
    // 0x247c70: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x247c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_247c74:
    // 0x247c74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x247c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_247c78:
    // 0x247c78: 0x10000101  b           . + 4 + (0x101 << 2)
label_247c7c:
    if (ctx->pc == 0x247C7Cu) {
        ctx->pc = 0x247C7Cu;
            // 0x247c7c: 0xafa30130  sw          $v1, 0x130($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 3));
        ctx->pc = 0x247C80u;
        goto label_247c80;
    }
    ctx->pc = 0x247C78u;
    {
        const bool branch_taken_0x247c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247C78u;
            // 0x247c7c: 0xafa30130  sw          $v1, 0x130($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247c78) {
            ctx->pc = 0x248080u;
            goto label_248080;
        }
    }
    ctx->pc = 0x247C80u;
label_247c80:
    // 0x247c80: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x247c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_247c84:
    // 0x247c84: 0xe7a001e0  swc1        $f0, 0x1E0($sp)
    ctx->pc = 0x247c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
label_247c88:
    // 0x247c88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x247c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_247c8c:
    // 0x247c8c: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x247c8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_247c90:
    // 0x247c90: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x247c90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_247c94:
    // 0x247c94: 0x320f809  jalr        $t9
label_247c98:
    if (ctx->pc == 0x247C98u) {
        ctx->pc = 0x247C98u;
            // 0x247c98: 0x27a604d0  addiu       $a2, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->pc = 0x247C9Cu;
        goto label_247c9c;
    }
    ctx->pc = 0x247C94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x247C9Cu);
        ctx->pc = 0x247C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247C94u;
            // 0x247c98: 0x27a604d0  addiu       $a2, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x247C9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x247C9Cu; }
            if (ctx->pc != 0x247C9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x247C9Cu;
label_247c9c:
    // 0x247c9c: 0xafb104c4  sw          $s1, 0x4C4($sp)
    ctx->pc = 0x247c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1220), GPR_U32(ctx, 17));
label_247ca0:
    // 0x247ca0: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x247ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_247ca4:
    // 0x247ca4: 0xafa204c0  sw          $v0, 0x4C0($sp)
    ctx->pc = 0x247ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1216), GPR_U32(ctx, 2));
label_247ca8:
    // 0x247ca8: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x247ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_247cac:
    // 0x247cac: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x247cacu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_247cb0:
    // 0x247cb0: 0xc6743030  lwc1        $f20, 0x3030($s3)
    ctx->pc = 0x247cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_247cb4:
    // 0x247cb4: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x247cb4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_247cb8:
    // 0x247cb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x247cb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247cbc:
    // 0x247cbc: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x247cbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_247cc0:
    // 0x247cc0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x247cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_247cc4:
    // 0x247cc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x247cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_247cc8:
    // 0x247cc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x247cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_247ccc:
    // 0x247ccc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x247cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_247cd0:
    // 0x247cd0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x247cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_247cd4:
    // 0x247cd4: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x247cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_247cd8:
    // 0x247cd8: 0x8c4216d8  lw          $v0, 0x16D8($v0)
    ctx->pc = 0x247cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5848)));
label_247cdc:
    // 0x247cdc: 0x40f809  jalr        $v0
label_247ce0:
    if (ctx->pc == 0x247CE0u) {
        ctx->pc = 0x247CE0u;
            // 0x247ce0: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247CE4u;
        goto label_247ce4;
    }
    ctx->pc = 0x247CDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x247CE4u);
        ctx->pc = 0x247CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247CDCu;
            // 0x247ce0: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x247CE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x247CE4u; }
            if (ctx->pc != 0x247CE4u) { return; }
        }
        }
    }
    ctx->pc = 0x247CE4u;
label_247ce4:
    // 0x247ce4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x247ce4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_247ce8:
    // 0x247ce8: 0x2501823  subu        $v1, $s2, $s0
    ctx->pc = 0x247ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_247cec:
    // 0x247cec: 0x1000002c  b           . + 4 + (0x2C << 2)
label_247cf0:
    if (ctx->pc == 0x247CF0u) {
        ctx->pc = 0x247CF0u;
            // 0x247cf0: 0xa2030003  sb          $v1, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x247CF4u;
        goto label_247cf4;
    }
    ctx->pc = 0x247CECu;
    {
        const bool branch_taken_0x247cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247CECu;
            // 0x247cf0: 0xa2030003  sb          $v1, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247cec) {
            ctx->pc = 0x247DA0u;
            goto label_247da0;
        }
    }
    ctx->pc = 0x247CF4u;
label_247cf4:
    // 0x247cf4: 0x0  nop
    ctx->pc = 0x247cf4u;
    // NOP
label_247cf8:
    // 0x247cf8: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x247cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247cfc:
    // 0x247cfc: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x247cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_247d00:
    // 0x247d00: 0xe7a00174  swc1        $f0, 0x174($sp)
    ctx->pc = 0x247d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
label_247d04:
    // 0x247d04: 0xe7a00178  swc1        $f0, 0x178($sp)
    ctx->pc = 0x247d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_247d08:
    // 0x247d08: 0xe7a0017c  swc1        $f0, 0x17C($sp)
    ctx->pc = 0x247d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
label_247d0c:
    // 0x247d0c: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x247d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_247d10:
    // 0x247d10: 0xc7a10170  lwc1        $f1, 0x170($sp)
    ctx->pc = 0x247d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_247d14:
    // 0x247d14: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x247d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247d18:
    // 0x247d18: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x247d18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_247d1c:
    // 0x247d1c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x247d1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_247d20:
    // 0x247d20: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x247d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_247d24:
    // 0x247d24: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x247d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_247d28:
    // 0x247d28: 0xc7a00174  lwc1        $f0, 0x174($sp)
    ctx->pc = 0x247d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247d2c:
    // 0x247d2c: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x247d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_247d30:
    // 0x247d30: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x247d30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_247d34:
    // 0x247d34: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x247d34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_247d38:
    // 0x247d38: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x247d38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_247d3c:
    // 0x247d3c: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x247d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_247d40:
    // 0x247d40: 0xc7a00178  lwc1        $f0, 0x178($sp)
    ctx->pc = 0x247d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247d44:
    // 0x247d44: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x247d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_247d48:
    // 0x247d48: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x247d48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_247d4c:
    // 0x247d4c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x247d4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_247d50:
    // 0x247d50: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x247d50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_247d54:
    // 0x247d54: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x247d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_247d58:
    // 0x247d58: 0xc7a0017c  lwc1        $f0, 0x17C($sp)
    ctx->pc = 0x247d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247d5c:
    // 0x247d5c: 0xc622000c  lwc1        $f2, 0xC($s1)
    ctx->pc = 0x247d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_247d60:
    // 0x247d60: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x247d60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_247d64:
    // 0x247d64: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x247d64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_247d68:
    // 0x247d68: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x247d68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_247d6c:
    // 0x247d6c: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x247d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247d70:
    // 0x247d70: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x247d70u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_247d74:
    // 0x247d74: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x247d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_247d78:
    // 0x247d78: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x247d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247d7c:
    // 0x247d7c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x247d7cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_247d80:
    // 0x247d80: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x247d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_247d84:
    // 0x247d84: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x247d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247d88:
    // 0x247d88: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x247d88u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_247d8c:
    // 0x247d8c: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x247d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_247d90:
    // 0x247d90: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x247d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247d94:
    // 0x247d94: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x247d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_247d98:
    // 0x247d98: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x247d98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_247d9c:
    // 0x247d9c: 0x0  nop
    ctx->pc = 0x247d9cu;
    // NOP
label_247da0:
    // 0x247da0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x247da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_247da4:
    // 0x247da4: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x247da4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_247da8:
    // 0x247da8: 0x1460ffd3  bnez        $v1, . + 4 + (-0x2D << 2)
label_247dac:
    if (ctx->pc == 0x247DACu) {
        ctx->pc = 0x247DB0u;
        goto label_247db0;
    }
    ctx->pc = 0x247DA8u;
    {
        const bool branch_taken_0x247da8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x247da8) {
            ctx->pc = 0x247CF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_247cf8;
        }
    }
    ctx->pc = 0x247DB0u;
label_247db0:
    // 0x247db0: 0xc6603030  lwc1        $f0, 0x3030($s3)
    ctx->pc = 0x247db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247db4:
    // 0x247db4: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x247db4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_247db8:
    // 0x247db8: 0x450100b1  bc1t        . + 4 + (0xB1 << 2)
label_247dbc:
    if (ctx->pc == 0x247DBCu) {
        ctx->pc = 0x247DC0u;
        goto label_247dc0;
    }
    ctx->pc = 0x247DB8u;
    {
        const bool branch_taken_0x247db8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x247db8) {
            ctx->pc = 0x248080u;
            goto label_248080;
        }
    }
    ctx->pc = 0x247DC0u;
label_247dc0:
    // 0x247dc0: 0xc6603020  lwc1        $f0, 0x3020($s3)
    ctx->pc = 0x247dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247dc4:
    // 0x247dc4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x247dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_247dc8:
    // 0x247dc8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x247dc8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_247dcc:
    // 0x247dcc: 0xe6603020  swc1        $f0, 0x3020($s3)
    ctx->pc = 0x247dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12320), bits); }
label_247dd0:
    // 0x247dd0: 0xc6603024  lwc1        $f0, 0x3024($s3)
    ctx->pc = 0x247dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247dd4:
    // 0x247dd4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x247dd4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_247dd8:
    // 0x247dd8: 0xe6603024  swc1        $f0, 0x3024($s3)
    ctx->pc = 0x247dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12324), bits); }
label_247ddc:
    // 0x247ddc: 0xc6603028  lwc1        $f0, 0x3028($s3)
    ctx->pc = 0x247ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247de0:
    // 0x247de0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x247de0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_247de4:
    // 0x247de4: 0xe6603028  swc1        $f0, 0x3028($s3)
    ctx->pc = 0x247de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12328), bits); }
label_247de8:
    // 0x247de8: 0xc660302c  lwc1        $f0, 0x302C($s3)
    ctx->pc = 0x247de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247dec:
    // 0x247dec: 0xe660302c  swc1        $f0, 0x302C($s3)
    ctx->pc = 0x247decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12332), bits); }
label_247df0:
    // 0x247df0: 0x92653042  lbu         $a1, 0x3042($s3)
    ctx->pc = 0x247df0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12354)));
label_247df4:
    // 0x247df4: 0x92643043  lbu         $a0, 0x3043($s3)
    ctx->pc = 0x247df4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12355)));
label_247df8:
    // 0x247df8: 0xa2643042  sb          $a0, 0x3042($s3)
    ctx->pc = 0x247df8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 12354), (uint8_t)GPR_U32(ctx, 4));
label_247dfc:
    // 0x247dfc: 0xa2653043  sb          $a1, 0x3043($s3)
    ctx->pc = 0x247dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 12355), (uint8_t)GPR_U32(ctx, 5));
label_247e00:
    // 0x247e00: 0x92653040  lbu         $a1, 0x3040($s3)
    ctx->pc = 0x247e00u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12352)));
label_247e04:
    // 0x247e04: 0x92643041  lbu         $a0, 0x3041($s3)
    ctx->pc = 0x247e04u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12353)));
label_247e08:
    // 0x247e08: 0xa2643040  sb          $a0, 0x3040($s3)
    ctx->pc = 0x247e08u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 12352), (uint8_t)GPR_U32(ctx, 4));
label_247e0c:
    // 0x247e0c: 0xa2653041  sb          $a1, 0x3041($s3)
    ctx->pc = 0x247e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 12353), (uint8_t)GPR_U32(ctx, 5));
label_247e10:
    // 0x247e10: 0x92653040  lbu         $a1, 0x3040($s3)
    ctx->pc = 0x247e10u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12352)));
label_247e14:
    // 0x247e14: 0x92643041  lbu         $a0, 0x3041($s3)
    ctx->pc = 0x247e14u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12353)));
label_247e18:
    // 0x247e18: 0x96663038  lhu         $a2, 0x3038($s3)
    ctx->pc = 0x247e18u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12344)));
label_247e1c:
    // 0x247e1c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x247e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_247e20:
    // 0x247e20: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x247e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_247e24:
    // 0x247e24: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x247e24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_247e28:
    // 0x247e28: 0x932821  addu        $a1, $a0, $s3
    ctx->pc = 0x247e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_247e2c:
    // 0x247e2c: 0x94a43038  lhu         $a0, 0x3038($a1)
    ctx->pc = 0x247e2cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12344)));
label_247e30:
    // 0x247e30: 0xa6643038  sh          $a0, 0x3038($s3)
    ctx->pc = 0x247e30u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 12344), (uint16_t)GPR_U32(ctx, 4));
label_247e34:
    // 0x247e34: 0xa4a63038  sh          $a2, 0x3038($a1)
    ctx->pc = 0x247e34u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12344), (uint16_t)GPR_U32(ctx, 6));
label_247e38:
    // 0x247e38: 0x92653040  lbu         $a1, 0x3040($s3)
    ctx->pc = 0x247e38u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12352)));
label_247e3c:
    // 0x247e3c: 0x92643041  lbu         $a0, 0x3041($s3)
    ctx->pc = 0x247e3cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12353)));
label_247e40:
    // 0x247e40: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x247e40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_247e44:
    // 0x247e44: 0x1483008e  bne         $a0, $v1, . + 4 + (0x8E << 2)
label_247e48:
    if (ctx->pc == 0x247E48u) {
        ctx->pc = 0x247E4Cu;
        goto label_247e4c;
    }
    ctx->pc = 0x247E44u;
    {
        const bool branch_taken_0x247e44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x247e44) {
            ctx->pc = 0x248080u;
            goto label_248080;
        }
    }
    ctx->pc = 0x247E4Cu;
label_247e4c:
    // 0x247e4c: 0x9664303a  lhu         $a0, 0x303A($s3)
    ctx->pc = 0x247e4cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12346)));
label_247e50:
    // 0x247e50: 0x9663303c  lhu         $v1, 0x303C($s3)
    ctx->pc = 0x247e50u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12348)));
label_247e54:
    // 0x247e54: 0xa663303a  sh          $v1, 0x303A($s3)
    ctx->pc = 0x247e54u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 12346), (uint16_t)GPR_U32(ctx, 3));
label_247e58:
    // 0x247e58: 0x10000089  b           . + 4 + (0x89 << 2)
label_247e5c:
    if (ctx->pc == 0x247E5Cu) {
        ctx->pc = 0x247E5Cu;
            // 0x247e5c: 0xa664303c  sh          $a0, 0x303C($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 12348), (uint16_t)GPR_U32(ctx, 4));
        ctx->pc = 0x247E60u;
        goto label_247e60;
    }
    ctx->pc = 0x247E58u;
    {
        const bool branch_taken_0x247e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247E58u;
            // 0x247e5c: 0xa664303c  sh          $a0, 0x303C($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 12348), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247e58) {
            ctx->pc = 0x248080u;
            goto label_248080;
        }
    }
    ctx->pc = 0x247E60u;
label_247e60:
    // 0x247e60: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x247e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_247e64:
    // 0x247e64: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x247e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247e68:
    // 0x247e68: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x247e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_247e6c:
    // 0x247e6c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x247e6cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_247e70:
    // 0x247e70: 0x45010031  bc1t        . + 4 + (0x31 << 2)
label_247e74:
    if (ctx->pc == 0x247E74u) {
        ctx->pc = 0x247E74u;
            // 0x247e74: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247E78u;
        goto label_247e78;
    }
    ctx->pc = 0x247E70u;
    {
        const bool branch_taken_0x247e70 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x247E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247E70u;
            // 0x247e74: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247e70) {
            ctx->pc = 0x247F38u;
            goto label_247f38;
        }
    }
    ctx->pc = 0x247E78u;
label_247e78:
    // 0x247e78: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x247e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_247e7c:
    // 0x247e7c: 0x80820010  lb          $v0, 0x10($a0)
    ctx->pc = 0x247e7cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_247e80:
    // 0x247e80: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_247e84:
    if (ctx->pc == 0x247E84u) {
        ctx->pc = 0x247E88u;
        goto label_247e88;
    }
    ctx->pc = 0x247E80u;
    {
        const bool branch_taken_0x247e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x247e80) {
            ctx->pc = 0x247EC0u;
            goto label_247ec0;
        }
    }
    ctx->pc = 0x247E88u;
label_247e88:
    // 0x247e88: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x247e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247e8c:
    // 0x247e8c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x247e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_247e90:
    // 0x247e90: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x247e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_247e94:
    // 0x247e94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x247e94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_247e98:
    // 0x247e98: 0x0  nop
    ctx->pc = 0x247e98u;
    // NOP
label_247e9c:
    // 0x247e9c: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x247e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_247ea0:
    // 0x247ea0: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x247ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247ea4:
    // 0x247ea4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x247ea4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_247ea8:
    // 0x247ea8: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x247ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
label_247eac:
    // 0x247eac: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x247eacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_247eb0:
    // 0x247eb0: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x247eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_247eb4:
    // 0x247eb4: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x247eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_247eb8:
    // 0x247eb8: 0x10000051  b           . + 4 + (0x51 << 2)
label_247ebc:
    if (ctx->pc == 0x247EBCu) {
        ctx->pc = 0x247EBCu;
            // 0x247ebc: 0xe640001c  swc1        $f0, 0x1C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
        ctx->pc = 0x247EC0u;
        goto label_247ec0;
    }
    ctx->pc = 0x247EB8u;
    {
        const bool branch_taken_0x247eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247EB8u;
            // 0x247ebc: 0xe640001c  swc1        $f0, 0x1C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x247eb8) {
            ctx->pc = 0x248000u;
            goto label_248000;
        }
    }
    ctx->pc = 0x247EC0u;
label_247ec0:
    // 0x247ec0: 0x93a20100  lbu         $v0, 0x100($sp)
    ctx->pc = 0x247ec0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 256)));
label_247ec4:
    // 0x247ec4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_247ec8:
    if (ctx->pc == 0x247EC8u) {
        ctx->pc = 0x247EC8u;
            // 0x247ec8: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x247ECCu;
        goto label_247ecc;
    }
    ctx->pc = 0x247EC4u;
    {
        const bool branch_taken_0x247ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x247EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247EC4u;
            // 0x247ec8: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x247ec4) {
            ctx->pc = 0x247EE0u;
            goto label_247ee0;
        }
    }
    ctx->pc = 0x247ECCu;
label_247ecc:
    // 0x247ecc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x247eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_247ed0:
    // 0x247ed0: 0xa3a20100  sb          $v0, 0x100($sp)
    ctx->pc = 0x247ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 256), (uint8_t)GPR_U32(ctx, 2));
label_247ed4:
    // 0x247ed4: 0x27a50380  addiu       $a1, $sp, 0x380
    ctx->pc = 0x247ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
label_247ed8:
    // 0x247ed8: 0xc091c68  jal         func_2471A0
label_247edc:
    if (ctx->pc == 0x247EDCu) {
        ctx->pc = 0x247EDCu;
            // 0x247edc: 0x27a60470  addiu       $a2, $sp, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
        ctx->pc = 0x247EE0u;
        goto label_247ee0;
    }
    ctx->pc = 0x247ED8u;
    SET_GPR_U32(ctx, 31, 0x247EE0u);
    ctx->pc = 0x247EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247ED8u;
            // 0x247edc: 0x27a60470  addiu       $a2, $sp, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2471A0u;
    if (runtime->hasFunction(0x2471A0u)) {
        auto targetFn = runtime->lookupFunction(0x2471A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247EE0u; }
        if (ctx->pc != 0x247EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002471A0_0x2471a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247EE0u; }
        if (ctx->pc != 0x247EE0u) { return; }
    }
    ctx->pc = 0x247EE0u;
label_247ee0:
    // 0x247ee0: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x247ee0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_247ee4:
    // 0x247ee4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x247ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_247ee8:
    // 0x247ee8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x247ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_247eec:
    // 0x247eec: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x247eecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_247ef0:
    // 0x247ef0: 0x320f809  jalr        $t9
label_247ef4:
    if (ctx->pc == 0x247EF4u) {
        ctx->pc = 0x247EF4u;
            // 0x247ef4: 0x27a604d0  addiu       $a2, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->pc = 0x247EF8u;
        goto label_247ef8;
    }
    ctx->pc = 0x247EF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x247EF8u);
        ctx->pc = 0x247EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247EF0u;
            // 0x247ef4: 0x27a604d0  addiu       $a2, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x247EF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x247EF8u; }
            if (ctx->pc != 0x247EF8u) { return; }
        }
        }
    }
    ctx->pc = 0x247EF8u;
label_247ef8:
    // 0x247ef8: 0xafa20390  sw          $v0, 0x390($sp)
    ctx->pc = 0x247ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 912), GPR_U32(ctx, 2));
label_247efc:
    // 0x247efc: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x247efcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_247f00:
    // 0x247f00: 0xafb10394  sw          $s1, 0x394($sp)
    ctx->pc = 0x247f00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 916), GPR_U32(ctx, 17));
label_247f04:
    // 0x247f04: 0x27a40470  addiu       $a0, $sp, 0x470
    ctx->pc = 0x247f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_247f08:
    // 0x247f08: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x247f08u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_247f0c:
    // 0x247f0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x247f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247f10:
    // 0x247f10: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x247f10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_247f14:
    // 0x247f14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x247f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_247f18:
    // 0x247f18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x247f18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_247f1c:
    // 0x247f1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x247f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_247f20:
    // 0x247f20: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x247f20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_247f24:
    // 0x247f24: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x247f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_247f28:
    // 0x247f28: 0x8c4216d4  lw          $v0, 0x16D4($v0)
    ctx->pc = 0x247f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5844)));
label_247f2c:
    // 0x247f2c: 0x40f809  jalr        $v0
label_247f30:
    if (ctx->pc == 0x247F30u) {
        ctx->pc = 0x247F30u;
            // 0x247f30: 0x26070010  addiu       $a3, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x247F34u;
        goto label_247f34;
    }
    ctx->pc = 0x247F2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x247F34u);
        ctx->pc = 0x247F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247F2Cu;
            // 0x247f30: 0x26070010  addiu       $a3, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x247F34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x247F34u; }
            if (ctx->pc != 0x247F34u) { return; }
        }
        }
    }
    ctx->pc = 0x247F34u;
label_247f34:
    // 0x247f34: 0x0  nop
    ctx->pc = 0x247f34u;
    // NOP
label_247f38:
    // 0x247f38: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x247f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_247f3c:
    // 0x247f3c: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x247f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247f40:
    // 0x247f40: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x247f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_247f44:
    // 0x247f44: 0xc6860060  lwc1        $f6, 0x60($s4)
    ctx->pc = 0x247f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_247f48:
    // 0x247f48: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x247f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_247f4c:
    // 0x247f4c: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x247f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247f50:
    // 0x247f50: 0xc6850064  lwc1        $f5, 0x64($s4)
    ctx->pc = 0x247f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_247f54:
    // 0x247f54: 0xc6040014  lwc1        $f4, 0x14($s0)
    ctx->pc = 0x247f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_247f58:
    // 0x247f58: 0xc6830068  lwc1        $f3, 0x68($s4)
    ctx->pc = 0x247f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_247f5c:
    // 0x247f5c: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x247f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_247f60:
    // 0x247f60: 0xc681006c  lwc1        $f1, 0x6C($s4)
    ctx->pc = 0x247f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_247f64:
    // 0x247f64: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x247f64u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_247f68:
    // 0x247f68: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x247f68u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_247f6c:
    // 0x247f6c: 0x46043018  adda.s      $f6, $f4
    ctx->pc = 0x247f6cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
label_247f70:
    // 0x247f70: 0x4602189c  madd.s      $f2, $f3, $f2
    ctx->pc = 0x247f70u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_247f74:
    // 0x247f74: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x247f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247f78:
    // 0x247f78: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x247f78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_247f7c:
    // 0x247f7c: 0xc4850004  lwc1        $f5, 0x4($a0)
    ctx->pc = 0x247f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_247f80:
    // 0x247f80: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x247f80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_247f84:
    // 0x247f84: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x247f84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_247f88:
    // 0x247f88: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
label_247f8c:
    if (ctx->pc == 0x247F8Cu) {
        ctx->pc = 0x247F8Cu;
            // 0x247f8c: 0x2603001c  addiu       $v1, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->pc = 0x247F90u;
        goto label_247f90;
    }
    ctx->pc = 0x247F88u;
    {
        const bool branch_taken_0x247f88 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x247F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247F88u;
            // 0x247f8c: 0x2603001c  addiu       $v1, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247f88) {
            ctx->pc = 0x248000u;
            goto label_248000;
        }
    }
    ctx->pc = 0x247F90u;
label_247f90:
    // 0x247f90: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x247f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_247f94:
    // 0x247f94: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x247f94u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_247f98:
    // 0x247f98: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_247f9c:
    if (ctx->pc == 0x247F9Cu) {
        ctx->pc = 0x247FA0u;
        goto label_247fa0;
    }
    ctx->pc = 0x247F98u;
    {
        const bool branch_taken_0x247f98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x247f98) {
            ctx->pc = 0x247FB0u;
            goto label_247fb0;
        }
    }
    ctx->pc = 0x247FA0u;
label_247fa0:
    // 0x247fa0: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x247fa0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_247fa4:
    // 0x247fa4: 0x10000012  b           . + 4 + (0x12 << 2)
label_247fa8:
    if (ctx->pc == 0x247FA8u) {
        ctx->pc = 0x247FA8u;
            // 0x247fa8: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->pc = 0x247FACu;
        goto label_247fac;
    }
    ctx->pc = 0x247FA4u;
    {
        const bool branch_taken_0x247fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247FA4u;
            // 0x247fa8: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247fa4) {
            ctx->pc = 0x247FF0u;
            goto label_247ff0;
        }
    }
    ctx->pc = 0x247FACu;
label_247fac:
    // 0x247fac: 0x0  nop
    ctx->pc = 0x247facu;
    // NOP
label_247fb0:
    // 0x247fb0: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x247fb0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_247fb4:
    // 0x247fb4: 0x8e670004  lw          $a3, 0x4($s3)
    ctx->pc = 0x247fb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_247fb8:
    // 0x247fb8: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x247fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_247fbc:
    // 0x247fbc: 0x8e86000c  lw          $a2, 0xC($s4)
    ctx->pc = 0x247fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_247fc0:
    // 0x247fc0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x247fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_247fc4:
    // 0x247fc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x247fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_247fc8:
    // 0x247fc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x247fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_247fcc:
    // 0x247fcc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x247fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_247fd0:
    // 0x247fd0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x247fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_247fd4:
    // 0x247fd4: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x247fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_247fd8:
    // 0x247fd8: 0x8c4216b8  lw          $v0, 0x16B8($v0)
    ctx->pc = 0x247fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5816)));
label_247fdc:
    // 0x247fdc: 0x40f809  jalr        $v0
label_247fe0:
    if (ctx->pc == 0x247FE0u) {
        ctx->pc = 0x247FE0u;
            // 0x247fe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247FE4u;
        goto label_247fe4;
    }
    ctx->pc = 0x247FDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x247FE4u);
        ctx->pc = 0x247FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247FDCu;
            // 0x247fe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x247FE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x247FE4u; }
            if (ctx->pc != 0x247FE4u) { return; }
        }
        }
    }
    ctx->pc = 0x247FE4u;
label_247fe4:
    // 0x247fe4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x247fe4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_247fe8:
    // 0x247fe8: 0x2501823  subu        $v1, $s2, $s0
    ctx->pc = 0x247fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_247fec:
    // 0x247fec: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x247fecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
label_247ff0:
    // 0x247ff0: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x247ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_247ff4:
    // 0x247ff4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x247ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_247ff8:
    // 0x247ff8: 0x10000021  b           . + 4 + (0x21 << 2)
label_247ffc:
    if (ctx->pc == 0x247FFCu) {
        ctx->pc = 0x247FFCu;
            // 0x247ffc: 0xafa30130  sw          $v1, 0x130($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 3));
        ctx->pc = 0x248000u;
        goto label_248000;
    }
    ctx->pc = 0x247FF8u;
    {
        const bool branch_taken_0x247ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247FF8u;
            // 0x247ffc: 0xafa30130  sw          $v1, 0x130($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247ff8) {
            ctx->pc = 0x248080u;
            goto label_248080;
        }
    }
    ctx->pc = 0x248000u;
label_248000:
    // 0x248000: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x248000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_248004:
    // 0x248004: 0xe6800050  swc1        $f0, 0x50($s4)
    ctx->pc = 0x248004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 80), bits); }
label_248008:
    // 0x248008: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x248008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24800c:
    // 0x24800c: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x24800cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_248010:
    // 0x248010: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x248010u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_248014:
    // 0x248014: 0x320f809  jalr        $t9
label_248018:
    if (ctx->pc == 0x248018u) {
        ctx->pc = 0x248018u;
            // 0x248018: 0x27a604d0  addiu       $a2, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->pc = 0x24801Cu;
        goto label_24801c;
    }
    ctx->pc = 0x248014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24801Cu);
        ctx->pc = 0x248018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248014u;
            // 0x248018: 0x27a604d0  addiu       $a2, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x24801Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24801Cu; }
            if (ctx->pc != 0x24801Cu) { return; }
        }
        }
    }
    ctx->pc = 0x24801Cu;
label_24801c:
    // 0x24801c: 0xafb104c4  sw          $s1, 0x4C4($sp)
    ctx->pc = 0x24801cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1220), GPR_U32(ctx, 17));
label_248020:
    // 0x248020: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x248020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_248024:
    // 0x248024: 0xafa204c0  sw          $v0, 0x4C0($sp)
    ctx->pc = 0x248024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1216), GPR_U32(ctx, 2));
label_248028:
    // 0x248028: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x248028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_24802c:
    // 0x24802c: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x24802cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_248030:
    // 0x248030: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x248030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_248034:
    // 0x248034: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x248034u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_248038:
    // 0x248038: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x248038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_24803c:
    // 0x24803c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24803cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_248040:
    // 0x248040: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x248040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_248044:
    // 0x248044: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x248044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_248048:
    // 0x248048: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x248048u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24804c:
    // 0x24804c: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x24804cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_248050:
    // 0x248050: 0x8c4216d8  lw          $v0, 0x16D8($v0)
    ctx->pc = 0x248050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5848)));
label_248054:
    // 0x248054: 0x40f809  jalr        $v0
label_248058:
    if (ctx->pc == 0x248058u) {
        ctx->pc = 0x248058u;
            // 0x248058: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24805Cu;
        goto label_24805c;
    }
    ctx->pc = 0x248054u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24805Cu);
        ctx->pc = 0x248058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248054u;
            // 0x248058: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x24805Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24805Cu; }
            if (ctx->pc != 0x24805Cu) { return; }
        }
        }
    }
    ctx->pc = 0x24805Cu;
label_24805c:
    // 0x24805c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x24805cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_248060:
    // 0x248060: 0x2501823  subu        $v1, $s2, $s0
    ctx->pc = 0x248060u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_248064:
    // 0x248064: 0x10000006  b           . + 4 + (0x6 << 2)
label_248068:
    if (ctx->pc == 0x248068u) {
        ctx->pc = 0x248068u;
            // 0x248068: 0xa2030003  sb          $v1, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x24806Cu;
        goto label_24806c;
    }
    ctx->pc = 0x248064u;
    {
        const bool branch_taken_0x248064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248064u;
            // 0x248068: 0xa2030003  sb          $v1, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248064) {
            ctx->pc = 0x248080u;
            goto label_248080;
        }
    }
    ctx->pc = 0x24806Cu;
label_24806c:
    // 0x24806c: 0x0  nop
    ctx->pc = 0x24806cu;
    // NOP
label_248070:
    // 0x248070: 0x10000003  b           . + 4 + (0x3 << 2)
label_248074:
    if (ctx->pc == 0x248074u) {
        ctx->pc = 0x248074u;
            // 0x248074: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x248078u;
        goto label_248078;
    }
    ctx->pc = 0x248070u;
    {
        const bool branch_taken_0x248070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248070u;
            // 0x248074: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248070) {
            ctx->pc = 0x248080u;
            goto label_248080;
        }
    }
    ctx->pc = 0x248078u;
label_248078:
    // 0x248078: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x248078u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_24807c:
    // 0x24807c: 0x0  nop
    ctx->pc = 0x24807cu;
    // NOP
label_248080:
    // 0x248080: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x248080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_248084:
    // 0x248084: 0x17c3002c  bne         $fp, $v1, . + 4 + (0x2C << 2)
label_248088:
    if (ctx->pc == 0x248088u) {
        ctx->pc = 0x248088u;
            // 0x248088: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->pc = 0x24808Cu;
        goto label_24808c;
    }
    ctx->pc = 0x248084u;
    {
        const bool branch_taken_0x248084 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 3));
        ctx->pc = 0x248088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248084u;
            // 0x248088: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248084) {
            ctx->pc = 0x248138u;
            goto label_248138;
        }
    }
    ctx->pc = 0x24808Cu;
label_24808c:
    // 0x24808c: 0x64030060  daddiu      $v1, $zero, 0x60
    ctx->pc = 0x24808cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)96);
label_248090:
    // 0x248090: 0x8c30ea40  lw          $s0, -0x15C0($at)
    ctx->pc = 0x248090u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_248094:
    // 0x248094: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x248094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_248098:
    // 0x248098: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x248098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_24809c:
    // 0x24809c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x24809cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_2480a0:
    // 0x2480a0: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x2480a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2480a4:
    // 0x2480a4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_2480a8:
    if (ctx->pc == 0x2480A8u) {
        ctx->pc = 0x2480A8u;
            // 0x2480a8: 0x2411000c  addiu       $s1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x2480ACu;
        goto label_2480ac;
    }
    ctx->pc = 0x2480A4u;
    {
        const bool branch_taken_0x2480a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2480A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2480A4u;
            // 0x2480a8: 0x2411000c  addiu       $s1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2480a4) {
            ctx->pc = 0x2480C0u;
            goto label_2480c0;
        }
    }
    ctx->pc = 0x2480ACu;
label_2480ac:
    // 0x2480ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2480acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2480b0:
    // 0x2480b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2480b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2480b4:
    // 0x2480b4: 0xc0a79ec  jal         func_29E7B0
label_2480b8:
    if (ctx->pc == 0x2480B8u) {
        ctx->pc = 0x2480B8u;
            // 0x2480b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2480BCu;
        goto label_2480bc;
    }
    ctx->pc = 0x2480B4u;
    SET_GPR_U32(ctx, 31, 0x2480BCu);
    ctx->pc = 0x2480B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2480B4u;
            // 0x2480b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E7B0u;
    if (runtime->hasFunction(0x29E7B0u)) {
        auto targetFn = runtime->lookupFunction(0x29E7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2480BCu; }
        if (ctx->pc != 0x2480BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E7B0_0x29e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2480BCu; }
        if (ctx->pc != 0x2480BCu) { return; }
    }
    ctx->pc = 0x2480BCu;
label_2480bc:
    // 0x2480bc: 0x0  nop
    ctx->pc = 0x2480bcu;
    // NOP
label_2480c0:
    // 0x2480c0: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x2480c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_2480c4:
    // 0x2480c4: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x2480c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_2480c8:
    // 0x2480c8: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x2480c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_2480cc:
    // 0x2480cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2480ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2480d0:
    // 0x2480d0: 0xaca30028  sw          $v1, 0x28($a1)
    ctx->pc = 0x2480d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 3));
label_2480d4:
    // 0x2480d4: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x2480d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_2480d8:
    // 0x2480d8: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x2480d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_2480dc:
    // 0x2480dc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2480dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_2480e0:
    // 0x2480e0: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x2480e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_2480e4:
    // 0x2480e4: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x2480e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
label_2480e8:
    // 0x2480e8: 0x8fa3016c  lw          $v1, 0x16C($sp)
    ctx->pc = 0x2480e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_2480ec:
    // 0x2480ec: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2480ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2480f0:
    // 0x2480f0: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x2480f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2480f4:
    // 0x2480f4: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x2480f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2480f8:
    // 0x2480f8: 0x10200073  beqz        $at, . + 4 + (0x73 << 2)
label_2480fc:
    if (ctx->pc == 0x2480FCu) {
        ctx->pc = 0x2480FCu;
            // 0x2480fc: 0x32880  sll         $a1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x248100u;
        goto label_248100;
    }
    ctx->pc = 0x2480F8u;
    {
        const bool branch_taken_0x2480f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2480FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2480F8u;
            // 0x2480fc: 0x32880  sll         $a1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2480f8) {
            ctx->pc = 0x2482C8u;
            goto label_2482c8;
        }
    }
    ctx->pc = 0x248100u;
label_248100:
    // 0x248100: 0x8fa3016c  lw          $v1, 0x16C($sp)
    ctx->pc = 0x248100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_248104:
    // 0x248104: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x248104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_248108:
    // 0x248108: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x248108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_24810c:
    // 0x24810c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x24810cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_248110:
    // 0x248110: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x248110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_248114:
    // 0x248114: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x248114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_248118:
    // 0x248118: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x248118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_24811c:
    // 0x24811c: 0xafa30120  sw          $v1, 0x120($sp)
    ctx->pc = 0x24811cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
label_248120:
    // 0x248120: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x248120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_248124:
    // 0x248124: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x248124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_248128:
    // 0x248128: 0x247e0010  addiu       $fp, $v1, 0x10
    ctx->pc = 0x248128u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_24812c:
    // 0x24812c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x24812cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_248130:
    // 0x248130: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x248130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_248134:
    // 0x248134: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x248134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
label_248138:
    // 0x248138: 0x93c30003  lbu         $v1, 0x3($fp)
    ctx->pc = 0x248138u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 3)));
label_24813c:
    // 0x24813c: 0x26c40010  addiu       $a0, $s6, 0x10
    ctx->pc = 0x24813cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
label_248140:
    // 0x248140: 0x2442023  subu        $a0, $s2, $a0
    ctx->pc = 0x248140u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_248144:
    // 0x248144: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x248144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_248148:
    // 0x248148: 0x286101a1  slti        $at, $v1, 0x1A1
    ctx->pc = 0x248148u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)417) ? 1 : 0);
label_24814c:
    // 0x24814c: 0x1420fccc  bnez        $at, . + 4 + (-0x334 << 2)
label_248150:
    if (ctx->pc == 0x248150u) {
        ctx->pc = 0x248154u;
        goto label_248154;
    }
    ctx->pc = 0x24814Cu;
    {
        const bool branch_taken_0x24814c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x24814c) {
            ctx->pc = 0x247480u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_247480;
        }
    }
    ctx->pc = 0x248154u;
label_248154:
    // 0x248154: 0xaec40000  sw          $a0, 0x0($s6)
    ctx->pc = 0x248154u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 4));
label_248158:
    // 0x248158: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x248158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_24815c:
    // 0x24815c: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x24815cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_248160:
    // 0x248160: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x248160u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_248164:
    // 0x248164: 0x14600030  bnez        $v1, . + 4 + (0x30 << 2)
label_248168:
    if (ctx->pc == 0x248168u) {
        ctx->pc = 0x24816Cu;
        goto label_24816c;
    }
    ctx->pc = 0x248164u;
    {
        const bool branch_taken_0x248164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x248164) {
            ctx->pc = 0x248228u;
            goto label_248228;
        }
    }
    ctx->pc = 0x24816Cu;
label_24816c:
    // 0x24816c: 0x8fa3016c  lw          $v1, 0x16C($sp)
    ctx->pc = 0x24816cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_248170:
    // 0x248170: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x248170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_248174:
    // 0x248174: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x248174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_248178:
    // 0x248178: 0x24b00001  addiu       $s0, $a1, 0x1
    ctx->pc = 0x248178u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_24817c:
    // 0x24817c: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x24817cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_248180:
    // 0x248180: 0xa38823  subu        $s1, $a1, $v1
    ctx->pc = 0x248180u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_248184:
    // 0x248184: 0x418bc  dsll32      $v1, $a0, 2
    ctx->pc = 0x248184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 2));
label_248188:
    // 0x248188: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x248188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_24818c:
    // 0x24818c: 0x70082a  slt         $at, $v1, $s0
    ctx->pc = 0x24818cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_248190:
    // 0x248190: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
label_248194:
    if (ctx->pc == 0x248194u) {
        ctx->pc = 0x248194u;
            // 0x248194: 0x70082a  slt         $at, $v1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->pc = 0x248198u;
        goto label_248198;
    }
    ctx->pc = 0x248190u;
    {
        const bool branch_taken_0x248190 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x248194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248190u;
            // 0x248194: 0x70082a  slt         $at, $v1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x248190) {
            ctx->pc = 0x2481D0u;
            goto label_2481d0;
        }
    }
    ctx->pc = 0x248198u;
label_248198:
    // 0x248198: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_24819c:
    if (ctx->pc == 0x24819Cu) {
        ctx->pc = 0x24819Cu;
            // 0x24819c: 0x32840  sll         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x2481A0u;
        goto label_2481a0;
    }
    ctx->pc = 0x248198u;
    {
        const bool branch_taken_0x248198 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24819Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248198u;
            // 0x24819c: 0x32840  sll         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248198) {
            ctx->pc = 0x2481D0u;
            goto label_2481d0;
        }
    }
    ctx->pc = 0x2481A0u;
label_2481a0:
    // 0x2481a0: 0x205082a  slt         $at, $s0, $a1
    ctx->pc = 0x2481a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_2481a4:
    // 0x2481a4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_2481a8:
    if (ctx->pc == 0x2481A8u) {
        ctx->pc = 0x2481ACu;
        goto label_2481ac;
    }
    ctx->pc = 0x2481A4u;
    {
        const bool branch_taken_0x2481a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2481a4) {
            ctx->pc = 0x2481B8u;
            goto label_2481b8;
        }
    }
    ctx->pc = 0x2481ACu;
label_2481ac:
    // 0x2481ac: 0x10000004  b           . + 4 + (0x4 << 2)
label_2481b0:
    if (ctx->pc == 0x2481B0u) {
        ctx->pc = 0x2481B4u;
        goto label_2481b4;
    }
    ctx->pc = 0x2481ACu;
    {
        const bool branch_taken_0x2481ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2481ac) {
            ctx->pc = 0x2481C0u;
            goto label_2481c0;
        }
    }
    ctx->pc = 0x2481B4u;
label_2481b4:
    // 0x2481b4: 0x0  nop
    ctx->pc = 0x2481b4u;
    // NOP
label_2481b8:
    // 0x2481b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2481b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2481bc:
    // 0x2481bc: 0x0  nop
    ctx->pc = 0x2481bcu;
    // NOP
label_2481c0:
    // 0x2481c0: 0x8fa4016c  lw          $a0, 0x16C($sp)
    ctx->pc = 0x2481c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_2481c4:
    // 0x2481c4: 0xc0a725c  jal         func_29C970
label_2481c8:
    if (ctx->pc == 0x2481C8u) {
        ctx->pc = 0x2481C8u;
            // 0x2481c8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2481CCu;
        goto label_2481cc;
    }
    ctx->pc = 0x2481C4u;
    SET_GPR_U32(ctx, 31, 0x2481CCu);
    ctx->pc = 0x2481C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2481C4u;
            // 0x2481c8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2481CCu; }
        if (ctx->pc != 0x2481CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2481CCu; }
        if (ctx->pc != 0x2481CCu) { return; }
    }
    ctx->pc = 0x2481CCu;
label_2481cc:
    // 0x2481cc: 0x0  nop
    ctx->pc = 0x2481ccu;
    // NOP
label_2481d0:
    // 0x2481d0: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x2481d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2481d4:
    // 0x2481d4: 0x2625ffff  addiu       $a1, $s1, -0x1
    ctx->pc = 0x2481d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_2481d8:
    // 0x2481d8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2481d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2481dc:
    // 0x2481dc: 0x8fa3016c  lw          $v1, 0x16C($sp)
    ctx->pc = 0x2481dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_2481e0:
    // 0x2481e0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2481e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2481e4:
    // 0x2481e4: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x2481e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2481e8:
    // 0x2481e8: 0x10000007  b           . + 4 + (0x7 << 2)
label_2481ec:
    if (ctx->pc == 0x2481ECu) {
        ctx->pc = 0x2481ECu;
            // 0x2481ec: 0x24c70004  addiu       $a3, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->pc = 0x2481F0u;
        goto label_2481f0;
    }
    ctx->pc = 0x2481E8u;
    {
        const bool branch_taken_0x2481e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2481ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2481E8u;
            // 0x2481ec: 0x24c70004  addiu       $a3, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2481e8) {
            ctx->pc = 0x248208u;
            goto label_248208;
        }
    }
    ctx->pc = 0x2481F0u;
label_2481f0:
    // 0x2481f0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2481f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2481f4:
    // 0x2481f4: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x2481f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_2481f8:
    // 0x2481f8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2481f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_2481fc:
    // 0x2481fc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2481fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_248200:
    // 0x248200: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x248200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_248204:
    // 0x248204: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x248204u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_248208:
    // 0x248208: 0x4a1fff9  bgez        $a1, . + 4 + (-0x7 << 2)
label_24820c:
    if (ctx->pc == 0x24820Cu) {
        ctx->pc = 0x248210u;
        goto label_248210;
    }
    ctx->pc = 0x248208u;
    {
        const bool branch_taken_0x248208 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x248208) {
            ctx->pc = 0x2481F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2481f0;
        }
    }
    ctx->pc = 0x248210u;
label_248210:
    // 0x248210: 0x8fa3016c  lw          $v1, 0x16C($sp)
    ctx->pc = 0x248210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_248214:
    // 0x248214: 0xac700004  sw          $s0, 0x4($v1)
    ctx->pc = 0x248214u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
label_248218:
    // 0x248218: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x248218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_24821c:
    // 0x24821c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x24821cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_248220:
    // 0x248220: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x248220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_248224:
    // 0x248224: 0x0  nop
    ctx->pc = 0x248224u;
    // NOP
label_248228:
    // 0x248228: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x248228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_24822c:
    // 0x24822c: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x24822cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_248230:
    // 0x248230: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x248230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_248234:
    // 0x248234: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x248234u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_248238:
    // 0x248238: 0x8fa3016c  lw          $v1, 0x16C($sp)
    ctx->pc = 0x248238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_24823c:
    // 0x24823c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24823cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_248240:
    // 0x248240: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x248240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_248244:
    // 0x248244: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x248244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_248248:
    // 0x248248: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x248248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_24824c:
    // 0x24824c: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x24824cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
label_248250:
    // 0x248250: 0xac960000  sw          $s6, 0x0($a0)
    ctx->pc = 0x248250u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 22));
label_248254:
    // 0x248254: 0x64030060  daddiu      $v1, $zero, 0x60
    ctx->pc = 0x248254u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)96);
label_248258:
    // 0x248258: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x248258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_24825c:
    // 0x24825c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x24825cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_248260:
    // 0x248260: 0x8c760024  lw          $s6, 0x24($v1)
    ctx->pc = 0x248260u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_248264:
    // 0x248264: 0x12c00008  beqz        $s6, . + 4 + (0x8 << 2)
label_248268:
    if (ctx->pc == 0x248268u) {
        ctx->pc = 0x248268u;
            // 0x248268: 0x24660024  addiu       $a2, $v1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
        ctx->pc = 0x24826Cu;
        goto label_24826c;
    }
    ctx->pc = 0x248264u;
    {
        const bool branch_taken_0x248264 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x248268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248264u;
            // 0x248268: 0x24660024  addiu       $a2, $v1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248264) {
            ctx->pc = 0x248288u;
            goto label_248288;
        }
    }
    ctx->pc = 0x24826Cu;
label_24826c:
    // 0x24826c: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x24826cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_248270:
    // 0x248270: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x248270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_248274:
    // 0x248274: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x248274u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_248278:
    // 0x248278: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x248278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_24827c:
    // 0x24827c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x24827cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_248280:
    // 0x248280: 0x10000003  b           . + 4 + (0x3 << 2)
label_248284:
    if (ctx->pc == 0x248284u) {
        ctx->pc = 0x248284u;
            // 0x248284: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x248288u;
        goto label_248288;
    }
    ctx->pc = 0x248280u;
    {
        const bool branch_taken_0x248280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248280u;
            // 0x248284: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248280) {
            ctx->pc = 0x248290u;
            goto label_248290;
        }
    }
    ctx->pc = 0x248288u;
label_248288:
    // 0x248288: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x248288u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24828c:
    // 0x24828c: 0x0  nop
    ctx->pc = 0x24828cu;
    // NOP
label_248290:
    // 0x248290: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
label_248294:
    if (ctx->pc == 0x248294u) {
        ctx->pc = 0x248298u;
        goto label_248298;
    }
    ctx->pc = 0x248290u;
    {
        const bool branch_taken_0x248290 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x248290) {
            ctx->pc = 0x2482A0u;
            goto label_2482a0;
        }
    }
    ctx->pc = 0x248298u;
label_248298:
    // 0x248298: 0x10000005  b           . + 4 + (0x5 << 2)
label_24829c:
    if (ctx->pc == 0x24829Cu) {
        ctx->pc = 0x2482A0u;
        goto label_2482a0;
    }
    ctx->pc = 0x248298u;
    {
        const bool branch_taken_0x248298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248298) {
            ctx->pc = 0x2482B0u;
            goto label_2482b0;
        }
    }
    ctx->pc = 0x2482A0u;
label_2482a0:
    // 0x2482a0: 0xc0a79c0  jal         func_29E700
label_2482a4:
    if (ctx->pc == 0x2482A4u) {
        ctx->pc = 0x2482A8u;
        goto label_2482a8;
    }
    ctx->pc = 0x2482A0u;
    SET_GPR_U32(ctx, 31, 0x2482A8u);
    ctx->pc = 0x29E700u;
    if (runtime->hasFunction(0x29E700u)) {
        auto targetFn = runtime->lookupFunction(0x29E700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2482A8u; }
        if (ctx->pc != 0x2482A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E700_0x29e700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2482A8u; }
        if (ctx->pc != 0x2482A8u) { return; }
    }
    ctx->pc = 0x2482A8u;
label_2482a8:
    // 0x2482a8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2482a8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2482ac:
    // 0x2482ac: 0x0  nop
    ctx->pc = 0x2482acu;
    // NOP
label_2482b0:
    // 0x2482b0: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
label_2482b4:
    if (ctx->pc == 0x2482B4u) {
        ctx->pc = 0x2482B8u;
        goto label_2482b8;
    }
    ctx->pc = 0x2482B0u;
    {
        const bool branch_taken_0x2482b0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2482b0) {
            ctx->pc = 0x2482C0u;
            goto label_2482c0;
        }
    }
    ctx->pc = 0x2482B8u;
label_2482b8:
    // 0x2482b8: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x2482b8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
label_2482bc:
    // 0x2482bc: 0x0  nop
    ctx->pc = 0x2482bcu;
    // NOP
label_2482c0:
    // 0x2482c0: 0x1000fc6f  b           . + 4 + (-0x391 << 2)
label_2482c4:
    if (ctx->pc == 0x2482C4u) {
        ctx->pc = 0x2482C4u;
            // 0x2482c4: 0x26d20010  addiu       $s2, $s6, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
        ctx->pc = 0x2482C8u;
        goto label_2482c8;
    }
    ctx->pc = 0x2482C0u;
    {
        const bool branch_taken_0x2482c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2482C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2482C0u;
            // 0x2482c4: 0x26d20010  addiu       $s2, $s6, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2482c0) {
            ctx->pc = 0x247480u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_247480;
        }
    }
    ctx->pc = 0x2482C8u;
label_2482c8:
    // 0x2482c8: 0x26c30010  addiu       $v1, $s6, 0x10
    ctx->pc = 0x2482c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
label_2482cc:
    // 0x2482cc: 0x2432823  subu        $a1, $s2, $v1
    ctx->pc = 0x2482ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_2482d0:
    // 0x2482d0: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x2482d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_2482d4:
    // 0x2482d4: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x2482d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2482d8:
    // 0x2482d8: 0xaec50000  sw          $a1, 0x0($s6)
    ctx->pc = 0x2482d8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 5));
label_2482dc:
    // 0x2482dc: 0x8fa3016c  lw          $v1, 0x16C($sp)
    ctx->pc = 0x2482dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_2482e0:
    // 0x2482e0: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x2482e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2482e4:
    // 0x2482e4: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x2482e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_2482e8:
    // 0x2482e8: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x2482e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_2482ec:
    // 0x2482ec: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x2482ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2482f0:
    // 0x2482f0: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_2482f4:
    if (ctx->pc == 0x2482F4u) {
        ctx->pc = 0x2482F4u;
            // 0x2482f4: 0x32840  sll         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x2482F8u;
        goto label_2482f8;
    }
    ctx->pc = 0x2482F0u;
    {
        const bool branch_taken_0x2482f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2482F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2482F0u;
            // 0x2482f4: 0x32840  sll         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2482f0) {
            ctx->pc = 0x248328u;
            goto label_248328;
        }
    }
    ctx->pc = 0x2482F8u;
label_2482f8:
    // 0x2482f8: 0x85082a  slt         $at, $a0, $a1
    ctx->pc = 0x2482f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_2482fc:
    // 0x2482fc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_248300:
    if (ctx->pc == 0x248300u) {
        ctx->pc = 0x248304u;
        goto label_248304;
    }
    ctx->pc = 0x2482FCu;
    {
        const bool branch_taken_0x2482fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2482fc) {
            ctx->pc = 0x248310u;
            goto label_248310;
        }
    }
    ctx->pc = 0x248304u;
label_248304:
    // 0x248304: 0x10000004  b           . + 4 + (0x4 << 2)
label_248308:
    if (ctx->pc == 0x248308u) {
        ctx->pc = 0x24830Cu;
        goto label_24830c;
    }
    ctx->pc = 0x248304u;
    {
        const bool branch_taken_0x248304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248304) {
            ctx->pc = 0x248318u;
            goto label_248318;
        }
    }
    ctx->pc = 0x24830Cu;
label_24830c:
    // 0x24830c: 0x0  nop
    ctx->pc = 0x24830cu;
    // NOP
label_248310:
    // 0x248310: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x248310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_248314:
    // 0x248314: 0x0  nop
    ctx->pc = 0x248314u;
    // NOP
label_248318:
    // 0x248318: 0x8fa4016c  lw          $a0, 0x16C($sp)
    ctx->pc = 0x248318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_24831c:
    // 0x24831c: 0xc0a725c  jal         func_29C970
label_248320:
    if (ctx->pc == 0x248320u) {
        ctx->pc = 0x248320u;
            // 0x248320: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x248324u;
        goto label_248324;
    }
    ctx->pc = 0x24831Cu;
    SET_GPR_U32(ctx, 31, 0x248324u);
    ctx->pc = 0x248320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24831Cu;
            // 0x248320: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248324u; }
        if (ctx->pc != 0x248324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248324u; }
        if (ctx->pc != 0x248324u) { return; }
    }
    ctx->pc = 0x248324u;
label_248324:
    // 0x248324: 0x0  nop
    ctx->pc = 0x248324u;
    // NOP
label_248328:
    // 0x248328: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x248328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_24832c:
    // 0x24832c: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x24832cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_248330:
    // 0x248330: 0x27a516e4  addiu       $a1, $sp, 0x16E4
    ctx->pc = 0x248330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5860));
label_248334:
    // 0x248334: 0x24c6ea60  addiu       $a2, $a2, -0x15A0
    ctx->pc = 0x248334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
label_248338:
    // 0x248338: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x248338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_24833c:
    // 0x24833c: 0x8fa3016c  lw          $v1, 0x16C($sp)
    ctx->pc = 0x24833cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_248340:
    // 0x248340: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x248340u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_248344:
    // 0x248344: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x248344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_248348:
    // 0x248348: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x248348u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_24834c:
    // 0x24834c: 0x8fa3016c  lw          $v1, 0x16C($sp)
    ctx->pc = 0x24834cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_248350:
    // 0x248350: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x248350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_248354:
    // 0x248354: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x248354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_248358:
    // 0x248358: 0xac760000  sw          $s6, 0x0($v1)
    ctx->pc = 0x248358u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 22));
label_24835c:
    // 0x24835c: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x24835cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_248360:
    // 0x248360: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x248360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_248364:
    // 0x248364: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x248364u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_248368:
    // 0x248368: 0xa3a316e4  sb          $v1, 0x16E4($sp)
    ctx->pc = 0x248368u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 5860), (uint8_t)GPR_U32(ctx, 3));
label_24836c:
    // 0x24836c: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x24836cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_248370:
    // 0x248370: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_248374:
    if (ctx->pc == 0x248374u) {
        ctx->pc = 0x248378u;
        goto label_248378;
    }
    ctx->pc = 0x248370u;
    {
        const bool branch_taken_0x248370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x248370) {
            ctx->pc = 0x2483A8u;
            goto label_2483a8;
        }
    }
    ctx->pc = 0x248378u;
label_248378:
    // 0x248378: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x248378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_24837c:
    // 0x24837c: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x24837cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_248380:
    // 0x248380: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x248380u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_248384:
    // 0x248384: 0x0  nop
    ctx->pc = 0x248384u;
    // NOP
label_248388:
    // 0x248388: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x248388u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_24838c:
    // 0x24838c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x24838cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_248390:
    // 0x248390: 0x2463cf20  addiu       $v1, $v1, -0x30E0
    ctx->pc = 0x248390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954784));
label_248394:
    // 0x248394: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x248394u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_248398:
    // 0x248398: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x248398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_24839c:
    // 0x24839c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x24839cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_2483a0:
    // 0x2483a0: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x2483a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_2483a4:
    // 0x2483a4: 0x0  nop
    ctx->pc = 0x2483a4u;
    // NOP
label_2483a8:
    // 0x2483a8: 0x8fa304cc  lw          $v1, 0x4CC($sp)
    ctx->pc = 0x2483a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1228)));
label_2483ac:
    // 0x2483ac: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x2483acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
label_2483b0:
    // 0x2483b0: 0x8e633050  lw          $v1, 0x3050($s3)
    ctx->pc = 0x2483b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12368)));
label_2483b4:
    // 0x2483b4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_2483b8:
    if (ctx->pc == 0x2483B8u) {
        ctx->pc = 0x2483BCu;
        goto label_2483bc;
    }
    ctx->pc = 0x2483B4u;
    {
        const bool branch_taken_0x2483b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2483b4) {
            ctx->pc = 0x2483E0u;
            goto label_2483e0;
        }
    }
    ctx->pc = 0x2483BCu;
label_2483bc:
    // 0x2483bc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2483bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2483c0:
    // 0x2483c0: 0x24630408  addiu       $v1, $v1, 0x408
    ctx->pc = 0x2483c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1032));
label_2483c4:
    // 0x2483c4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x2483c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2483c8:
    // 0x2483c8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_2483cc:
    if (ctx->pc == 0x2483CCu) {
        ctx->pc = 0x2483CCu;
            // 0x2483cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2483D0u;
        goto label_2483d0;
    }
    ctx->pc = 0x2483C8u;
    {
        const bool branch_taken_0x2483c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2483CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2483C8u;
            // 0x2483cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2483c8) {
            ctx->pc = 0x2483E0u;
            goto label_2483e0;
        }
    }
    ctx->pc = 0x2483D0u;
label_2483d0:
    // 0x2483d0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2483d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2483d4:
    // 0x2483d4: 0xc091830  jal         func_2460C0
label_2483d8:
    if (ctx->pc == 0x2483D8u) {
        ctx->pc = 0x2483D8u;
            // 0x2483d8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2483DCu;
        goto label_2483dc;
    }
    ctx->pc = 0x2483D4u;
    SET_GPR_U32(ctx, 31, 0x2483DCu);
    ctx->pc = 0x2483D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2483D4u;
            // 0x2483d8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2460C0u;
    if (runtime->hasFunction(0x2460C0u)) {
        auto targetFn = runtime->lookupFunction(0x2460C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2483DCu; }
        if (ctx->pc != 0x2483DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002460C0_0x2460c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2483DCu; }
        if (ctx->pc != 0x2483DCu) { return; }
    }
    ctx->pc = 0x2483DCu;
label_2483dc:
    // 0x2483dc: 0x0  nop
    ctx->pc = 0x2483dcu;
    // NOP
label_2483e0:
    // 0x2483e0: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x2483e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_2483e4:
    // 0x2483e4: 0xae633050  sw          $v1, 0x3050($s3)
    ctx->pc = 0x2483e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12368), GPR_U32(ctx, 3));
label_2483e8:
    // 0x2483e8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2483e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2483ec:
    // 0x2483ec: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2483ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2483f0:
    // 0x2483f0: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2483f0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2483f4:
    // 0x2483f4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2483f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2483f8:
    // 0x2483f8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2483f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2483fc:
    // 0x2483fc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2483fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_248400:
    // 0x248400: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x248400u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_248404:
    // 0x248404: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x248404u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_248408:
    // 0x248408: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x248408u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24840c:
    // 0x24840c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x24840cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_248410:
    // 0x248410: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x248410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_248414:
    // 0x248414: 0x3e00008  jr          $ra
label_248418:
    if (ctx->pc == 0x248418u) {
        ctx->pc = 0x248418u;
            // 0x248418: 0x27bd16f0  addiu       $sp, $sp, 0x16F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 5872));
        ctx->pc = 0x24841Cu;
        goto label_24841c;
    }
    ctx->pc = 0x248414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248414u;
            // 0x248418: 0x27bd16f0  addiu       $sp, $sp, 0x16F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 5872));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24841Cu;
label_24841c:
    // 0x24841c: 0x0  nop
    ctx->pc = 0x24841cu;
    // NOP
}
