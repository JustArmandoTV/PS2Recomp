#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005080D0
// Address: 0x5080d0 - 0x509110
void sub_005080D0_0x5080d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005080D0_0x5080d0");
#endif

    switch (ctx->pc) {
        case 0x5080d0u: goto label_5080d0;
        case 0x5080d4u: goto label_5080d4;
        case 0x5080d8u: goto label_5080d8;
        case 0x5080dcu: goto label_5080dc;
        case 0x5080e0u: goto label_5080e0;
        case 0x5080e4u: goto label_5080e4;
        case 0x5080e8u: goto label_5080e8;
        case 0x5080ecu: goto label_5080ec;
        case 0x5080f0u: goto label_5080f0;
        case 0x5080f4u: goto label_5080f4;
        case 0x5080f8u: goto label_5080f8;
        case 0x5080fcu: goto label_5080fc;
        case 0x508100u: goto label_508100;
        case 0x508104u: goto label_508104;
        case 0x508108u: goto label_508108;
        case 0x50810cu: goto label_50810c;
        case 0x508110u: goto label_508110;
        case 0x508114u: goto label_508114;
        case 0x508118u: goto label_508118;
        case 0x50811cu: goto label_50811c;
        case 0x508120u: goto label_508120;
        case 0x508124u: goto label_508124;
        case 0x508128u: goto label_508128;
        case 0x50812cu: goto label_50812c;
        case 0x508130u: goto label_508130;
        case 0x508134u: goto label_508134;
        case 0x508138u: goto label_508138;
        case 0x50813cu: goto label_50813c;
        case 0x508140u: goto label_508140;
        case 0x508144u: goto label_508144;
        case 0x508148u: goto label_508148;
        case 0x50814cu: goto label_50814c;
        case 0x508150u: goto label_508150;
        case 0x508154u: goto label_508154;
        case 0x508158u: goto label_508158;
        case 0x50815cu: goto label_50815c;
        case 0x508160u: goto label_508160;
        case 0x508164u: goto label_508164;
        case 0x508168u: goto label_508168;
        case 0x50816cu: goto label_50816c;
        case 0x508170u: goto label_508170;
        case 0x508174u: goto label_508174;
        case 0x508178u: goto label_508178;
        case 0x50817cu: goto label_50817c;
        case 0x508180u: goto label_508180;
        case 0x508184u: goto label_508184;
        case 0x508188u: goto label_508188;
        case 0x50818cu: goto label_50818c;
        case 0x508190u: goto label_508190;
        case 0x508194u: goto label_508194;
        case 0x508198u: goto label_508198;
        case 0x50819cu: goto label_50819c;
        case 0x5081a0u: goto label_5081a0;
        case 0x5081a4u: goto label_5081a4;
        case 0x5081a8u: goto label_5081a8;
        case 0x5081acu: goto label_5081ac;
        case 0x5081b0u: goto label_5081b0;
        case 0x5081b4u: goto label_5081b4;
        case 0x5081b8u: goto label_5081b8;
        case 0x5081bcu: goto label_5081bc;
        case 0x5081c0u: goto label_5081c0;
        case 0x5081c4u: goto label_5081c4;
        case 0x5081c8u: goto label_5081c8;
        case 0x5081ccu: goto label_5081cc;
        case 0x5081d0u: goto label_5081d0;
        case 0x5081d4u: goto label_5081d4;
        case 0x5081d8u: goto label_5081d8;
        case 0x5081dcu: goto label_5081dc;
        case 0x5081e0u: goto label_5081e0;
        case 0x5081e4u: goto label_5081e4;
        case 0x5081e8u: goto label_5081e8;
        case 0x5081ecu: goto label_5081ec;
        case 0x5081f0u: goto label_5081f0;
        case 0x5081f4u: goto label_5081f4;
        case 0x5081f8u: goto label_5081f8;
        case 0x5081fcu: goto label_5081fc;
        case 0x508200u: goto label_508200;
        case 0x508204u: goto label_508204;
        case 0x508208u: goto label_508208;
        case 0x50820cu: goto label_50820c;
        case 0x508210u: goto label_508210;
        case 0x508214u: goto label_508214;
        case 0x508218u: goto label_508218;
        case 0x50821cu: goto label_50821c;
        case 0x508220u: goto label_508220;
        case 0x508224u: goto label_508224;
        case 0x508228u: goto label_508228;
        case 0x50822cu: goto label_50822c;
        case 0x508230u: goto label_508230;
        case 0x508234u: goto label_508234;
        case 0x508238u: goto label_508238;
        case 0x50823cu: goto label_50823c;
        case 0x508240u: goto label_508240;
        case 0x508244u: goto label_508244;
        case 0x508248u: goto label_508248;
        case 0x50824cu: goto label_50824c;
        case 0x508250u: goto label_508250;
        case 0x508254u: goto label_508254;
        case 0x508258u: goto label_508258;
        case 0x50825cu: goto label_50825c;
        case 0x508260u: goto label_508260;
        case 0x508264u: goto label_508264;
        case 0x508268u: goto label_508268;
        case 0x50826cu: goto label_50826c;
        case 0x508270u: goto label_508270;
        case 0x508274u: goto label_508274;
        case 0x508278u: goto label_508278;
        case 0x50827cu: goto label_50827c;
        case 0x508280u: goto label_508280;
        case 0x508284u: goto label_508284;
        case 0x508288u: goto label_508288;
        case 0x50828cu: goto label_50828c;
        case 0x508290u: goto label_508290;
        case 0x508294u: goto label_508294;
        case 0x508298u: goto label_508298;
        case 0x50829cu: goto label_50829c;
        case 0x5082a0u: goto label_5082a0;
        case 0x5082a4u: goto label_5082a4;
        case 0x5082a8u: goto label_5082a8;
        case 0x5082acu: goto label_5082ac;
        case 0x5082b0u: goto label_5082b0;
        case 0x5082b4u: goto label_5082b4;
        case 0x5082b8u: goto label_5082b8;
        case 0x5082bcu: goto label_5082bc;
        case 0x5082c0u: goto label_5082c0;
        case 0x5082c4u: goto label_5082c4;
        case 0x5082c8u: goto label_5082c8;
        case 0x5082ccu: goto label_5082cc;
        case 0x5082d0u: goto label_5082d0;
        case 0x5082d4u: goto label_5082d4;
        case 0x5082d8u: goto label_5082d8;
        case 0x5082dcu: goto label_5082dc;
        case 0x5082e0u: goto label_5082e0;
        case 0x5082e4u: goto label_5082e4;
        case 0x5082e8u: goto label_5082e8;
        case 0x5082ecu: goto label_5082ec;
        case 0x5082f0u: goto label_5082f0;
        case 0x5082f4u: goto label_5082f4;
        case 0x5082f8u: goto label_5082f8;
        case 0x5082fcu: goto label_5082fc;
        case 0x508300u: goto label_508300;
        case 0x508304u: goto label_508304;
        case 0x508308u: goto label_508308;
        case 0x50830cu: goto label_50830c;
        case 0x508310u: goto label_508310;
        case 0x508314u: goto label_508314;
        case 0x508318u: goto label_508318;
        case 0x50831cu: goto label_50831c;
        case 0x508320u: goto label_508320;
        case 0x508324u: goto label_508324;
        case 0x508328u: goto label_508328;
        case 0x50832cu: goto label_50832c;
        case 0x508330u: goto label_508330;
        case 0x508334u: goto label_508334;
        case 0x508338u: goto label_508338;
        case 0x50833cu: goto label_50833c;
        case 0x508340u: goto label_508340;
        case 0x508344u: goto label_508344;
        case 0x508348u: goto label_508348;
        case 0x50834cu: goto label_50834c;
        case 0x508350u: goto label_508350;
        case 0x508354u: goto label_508354;
        case 0x508358u: goto label_508358;
        case 0x50835cu: goto label_50835c;
        case 0x508360u: goto label_508360;
        case 0x508364u: goto label_508364;
        case 0x508368u: goto label_508368;
        case 0x50836cu: goto label_50836c;
        case 0x508370u: goto label_508370;
        case 0x508374u: goto label_508374;
        case 0x508378u: goto label_508378;
        case 0x50837cu: goto label_50837c;
        case 0x508380u: goto label_508380;
        case 0x508384u: goto label_508384;
        case 0x508388u: goto label_508388;
        case 0x50838cu: goto label_50838c;
        case 0x508390u: goto label_508390;
        case 0x508394u: goto label_508394;
        case 0x508398u: goto label_508398;
        case 0x50839cu: goto label_50839c;
        case 0x5083a0u: goto label_5083a0;
        case 0x5083a4u: goto label_5083a4;
        case 0x5083a8u: goto label_5083a8;
        case 0x5083acu: goto label_5083ac;
        case 0x5083b0u: goto label_5083b0;
        case 0x5083b4u: goto label_5083b4;
        case 0x5083b8u: goto label_5083b8;
        case 0x5083bcu: goto label_5083bc;
        case 0x5083c0u: goto label_5083c0;
        case 0x5083c4u: goto label_5083c4;
        case 0x5083c8u: goto label_5083c8;
        case 0x5083ccu: goto label_5083cc;
        case 0x5083d0u: goto label_5083d0;
        case 0x5083d4u: goto label_5083d4;
        case 0x5083d8u: goto label_5083d8;
        case 0x5083dcu: goto label_5083dc;
        case 0x5083e0u: goto label_5083e0;
        case 0x5083e4u: goto label_5083e4;
        case 0x5083e8u: goto label_5083e8;
        case 0x5083ecu: goto label_5083ec;
        case 0x5083f0u: goto label_5083f0;
        case 0x5083f4u: goto label_5083f4;
        case 0x5083f8u: goto label_5083f8;
        case 0x5083fcu: goto label_5083fc;
        case 0x508400u: goto label_508400;
        case 0x508404u: goto label_508404;
        case 0x508408u: goto label_508408;
        case 0x50840cu: goto label_50840c;
        case 0x508410u: goto label_508410;
        case 0x508414u: goto label_508414;
        case 0x508418u: goto label_508418;
        case 0x50841cu: goto label_50841c;
        case 0x508420u: goto label_508420;
        case 0x508424u: goto label_508424;
        case 0x508428u: goto label_508428;
        case 0x50842cu: goto label_50842c;
        case 0x508430u: goto label_508430;
        case 0x508434u: goto label_508434;
        case 0x508438u: goto label_508438;
        case 0x50843cu: goto label_50843c;
        case 0x508440u: goto label_508440;
        case 0x508444u: goto label_508444;
        case 0x508448u: goto label_508448;
        case 0x50844cu: goto label_50844c;
        case 0x508450u: goto label_508450;
        case 0x508454u: goto label_508454;
        case 0x508458u: goto label_508458;
        case 0x50845cu: goto label_50845c;
        case 0x508460u: goto label_508460;
        case 0x508464u: goto label_508464;
        case 0x508468u: goto label_508468;
        case 0x50846cu: goto label_50846c;
        case 0x508470u: goto label_508470;
        case 0x508474u: goto label_508474;
        case 0x508478u: goto label_508478;
        case 0x50847cu: goto label_50847c;
        case 0x508480u: goto label_508480;
        case 0x508484u: goto label_508484;
        case 0x508488u: goto label_508488;
        case 0x50848cu: goto label_50848c;
        case 0x508490u: goto label_508490;
        case 0x508494u: goto label_508494;
        case 0x508498u: goto label_508498;
        case 0x50849cu: goto label_50849c;
        case 0x5084a0u: goto label_5084a0;
        case 0x5084a4u: goto label_5084a4;
        case 0x5084a8u: goto label_5084a8;
        case 0x5084acu: goto label_5084ac;
        case 0x5084b0u: goto label_5084b0;
        case 0x5084b4u: goto label_5084b4;
        case 0x5084b8u: goto label_5084b8;
        case 0x5084bcu: goto label_5084bc;
        case 0x5084c0u: goto label_5084c0;
        case 0x5084c4u: goto label_5084c4;
        case 0x5084c8u: goto label_5084c8;
        case 0x5084ccu: goto label_5084cc;
        case 0x5084d0u: goto label_5084d0;
        case 0x5084d4u: goto label_5084d4;
        case 0x5084d8u: goto label_5084d8;
        case 0x5084dcu: goto label_5084dc;
        case 0x5084e0u: goto label_5084e0;
        case 0x5084e4u: goto label_5084e4;
        case 0x5084e8u: goto label_5084e8;
        case 0x5084ecu: goto label_5084ec;
        case 0x5084f0u: goto label_5084f0;
        case 0x5084f4u: goto label_5084f4;
        case 0x5084f8u: goto label_5084f8;
        case 0x5084fcu: goto label_5084fc;
        case 0x508500u: goto label_508500;
        case 0x508504u: goto label_508504;
        case 0x508508u: goto label_508508;
        case 0x50850cu: goto label_50850c;
        case 0x508510u: goto label_508510;
        case 0x508514u: goto label_508514;
        case 0x508518u: goto label_508518;
        case 0x50851cu: goto label_50851c;
        case 0x508520u: goto label_508520;
        case 0x508524u: goto label_508524;
        case 0x508528u: goto label_508528;
        case 0x50852cu: goto label_50852c;
        case 0x508530u: goto label_508530;
        case 0x508534u: goto label_508534;
        case 0x508538u: goto label_508538;
        case 0x50853cu: goto label_50853c;
        case 0x508540u: goto label_508540;
        case 0x508544u: goto label_508544;
        case 0x508548u: goto label_508548;
        case 0x50854cu: goto label_50854c;
        case 0x508550u: goto label_508550;
        case 0x508554u: goto label_508554;
        case 0x508558u: goto label_508558;
        case 0x50855cu: goto label_50855c;
        case 0x508560u: goto label_508560;
        case 0x508564u: goto label_508564;
        case 0x508568u: goto label_508568;
        case 0x50856cu: goto label_50856c;
        case 0x508570u: goto label_508570;
        case 0x508574u: goto label_508574;
        case 0x508578u: goto label_508578;
        case 0x50857cu: goto label_50857c;
        case 0x508580u: goto label_508580;
        case 0x508584u: goto label_508584;
        case 0x508588u: goto label_508588;
        case 0x50858cu: goto label_50858c;
        case 0x508590u: goto label_508590;
        case 0x508594u: goto label_508594;
        case 0x508598u: goto label_508598;
        case 0x50859cu: goto label_50859c;
        case 0x5085a0u: goto label_5085a0;
        case 0x5085a4u: goto label_5085a4;
        case 0x5085a8u: goto label_5085a8;
        case 0x5085acu: goto label_5085ac;
        case 0x5085b0u: goto label_5085b0;
        case 0x5085b4u: goto label_5085b4;
        case 0x5085b8u: goto label_5085b8;
        case 0x5085bcu: goto label_5085bc;
        case 0x5085c0u: goto label_5085c0;
        case 0x5085c4u: goto label_5085c4;
        case 0x5085c8u: goto label_5085c8;
        case 0x5085ccu: goto label_5085cc;
        case 0x5085d0u: goto label_5085d0;
        case 0x5085d4u: goto label_5085d4;
        case 0x5085d8u: goto label_5085d8;
        case 0x5085dcu: goto label_5085dc;
        case 0x5085e0u: goto label_5085e0;
        case 0x5085e4u: goto label_5085e4;
        case 0x5085e8u: goto label_5085e8;
        case 0x5085ecu: goto label_5085ec;
        case 0x5085f0u: goto label_5085f0;
        case 0x5085f4u: goto label_5085f4;
        case 0x5085f8u: goto label_5085f8;
        case 0x5085fcu: goto label_5085fc;
        case 0x508600u: goto label_508600;
        case 0x508604u: goto label_508604;
        case 0x508608u: goto label_508608;
        case 0x50860cu: goto label_50860c;
        case 0x508610u: goto label_508610;
        case 0x508614u: goto label_508614;
        case 0x508618u: goto label_508618;
        case 0x50861cu: goto label_50861c;
        case 0x508620u: goto label_508620;
        case 0x508624u: goto label_508624;
        case 0x508628u: goto label_508628;
        case 0x50862cu: goto label_50862c;
        case 0x508630u: goto label_508630;
        case 0x508634u: goto label_508634;
        case 0x508638u: goto label_508638;
        case 0x50863cu: goto label_50863c;
        case 0x508640u: goto label_508640;
        case 0x508644u: goto label_508644;
        case 0x508648u: goto label_508648;
        case 0x50864cu: goto label_50864c;
        case 0x508650u: goto label_508650;
        case 0x508654u: goto label_508654;
        case 0x508658u: goto label_508658;
        case 0x50865cu: goto label_50865c;
        case 0x508660u: goto label_508660;
        case 0x508664u: goto label_508664;
        case 0x508668u: goto label_508668;
        case 0x50866cu: goto label_50866c;
        case 0x508670u: goto label_508670;
        case 0x508674u: goto label_508674;
        case 0x508678u: goto label_508678;
        case 0x50867cu: goto label_50867c;
        case 0x508680u: goto label_508680;
        case 0x508684u: goto label_508684;
        case 0x508688u: goto label_508688;
        case 0x50868cu: goto label_50868c;
        case 0x508690u: goto label_508690;
        case 0x508694u: goto label_508694;
        case 0x508698u: goto label_508698;
        case 0x50869cu: goto label_50869c;
        case 0x5086a0u: goto label_5086a0;
        case 0x5086a4u: goto label_5086a4;
        case 0x5086a8u: goto label_5086a8;
        case 0x5086acu: goto label_5086ac;
        case 0x5086b0u: goto label_5086b0;
        case 0x5086b4u: goto label_5086b4;
        case 0x5086b8u: goto label_5086b8;
        case 0x5086bcu: goto label_5086bc;
        case 0x5086c0u: goto label_5086c0;
        case 0x5086c4u: goto label_5086c4;
        case 0x5086c8u: goto label_5086c8;
        case 0x5086ccu: goto label_5086cc;
        case 0x5086d0u: goto label_5086d0;
        case 0x5086d4u: goto label_5086d4;
        case 0x5086d8u: goto label_5086d8;
        case 0x5086dcu: goto label_5086dc;
        case 0x5086e0u: goto label_5086e0;
        case 0x5086e4u: goto label_5086e4;
        case 0x5086e8u: goto label_5086e8;
        case 0x5086ecu: goto label_5086ec;
        case 0x5086f0u: goto label_5086f0;
        case 0x5086f4u: goto label_5086f4;
        case 0x5086f8u: goto label_5086f8;
        case 0x5086fcu: goto label_5086fc;
        case 0x508700u: goto label_508700;
        case 0x508704u: goto label_508704;
        case 0x508708u: goto label_508708;
        case 0x50870cu: goto label_50870c;
        case 0x508710u: goto label_508710;
        case 0x508714u: goto label_508714;
        case 0x508718u: goto label_508718;
        case 0x50871cu: goto label_50871c;
        case 0x508720u: goto label_508720;
        case 0x508724u: goto label_508724;
        case 0x508728u: goto label_508728;
        case 0x50872cu: goto label_50872c;
        case 0x508730u: goto label_508730;
        case 0x508734u: goto label_508734;
        case 0x508738u: goto label_508738;
        case 0x50873cu: goto label_50873c;
        case 0x508740u: goto label_508740;
        case 0x508744u: goto label_508744;
        case 0x508748u: goto label_508748;
        case 0x50874cu: goto label_50874c;
        case 0x508750u: goto label_508750;
        case 0x508754u: goto label_508754;
        case 0x508758u: goto label_508758;
        case 0x50875cu: goto label_50875c;
        case 0x508760u: goto label_508760;
        case 0x508764u: goto label_508764;
        case 0x508768u: goto label_508768;
        case 0x50876cu: goto label_50876c;
        case 0x508770u: goto label_508770;
        case 0x508774u: goto label_508774;
        case 0x508778u: goto label_508778;
        case 0x50877cu: goto label_50877c;
        case 0x508780u: goto label_508780;
        case 0x508784u: goto label_508784;
        case 0x508788u: goto label_508788;
        case 0x50878cu: goto label_50878c;
        case 0x508790u: goto label_508790;
        case 0x508794u: goto label_508794;
        case 0x508798u: goto label_508798;
        case 0x50879cu: goto label_50879c;
        case 0x5087a0u: goto label_5087a0;
        case 0x5087a4u: goto label_5087a4;
        case 0x5087a8u: goto label_5087a8;
        case 0x5087acu: goto label_5087ac;
        case 0x5087b0u: goto label_5087b0;
        case 0x5087b4u: goto label_5087b4;
        case 0x5087b8u: goto label_5087b8;
        case 0x5087bcu: goto label_5087bc;
        case 0x5087c0u: goto label_5087c0;
        case 0x5087c4u: goto label_5087c4;
        case 0x5087c8u: goto label_5087c8;
        case 0x5087ccu: goto label_5087cc;
        case 0x5087d0u: goto label_5087d0;
        case 0x5087d4u: goto label_5087d4;
        case 0x5087d8u: goto label_5087d8;
        case 0x5087dcu: goto label_5087dc;
        case 0x5087e0u: goto label_5087e0;
        case 0x5087e4u: goto label_5087e4;
        case 0x5087e8u: goto label_5087e8;
        case 0x5087ecu: goto label_5087ec;
        case 0x5087f0u: goto label_5087f0;
        case 0x5087f4u: goto label_5087f4;
        case 0x5087f8u: goto label_5087f8;
        case 0x5087fcu: goto label_5087fc;
        case 0x508800u: goto label_508800;
        case 0x508804u: goto label_508804;
        case 0x508808u: goto label_508808;
        case 0x50880cu: goto label_50880c;
        case 0x508810u: goto label_508810;
        case 0x508814u: goto label_508814;
        case 0x508818u: goto label_508818;
        case 0x50881cu: goto label_50881c;
        case 0x508820u: goto label_508820;
        case 0x508824u: goto label_508824;
        case 0x508828u: goto label_508828;
        case 0x50882cu: goto label_50882c;
        case 0x508830u: goto label_508830;
        case 0x508834u: goto label_508834;
        case 0x508838u: goto label_508838;
        case 0x50883cu: goto label_50883c;
        case 0x508840u: goto label_508840;
        case 0x508844u: goto label_508844;
        case 0x508848u: goto label_508848;
        case 0x50884cu: goto label_50884c;
        case 0x508850u: goto label_508850;
        case 0x508854u: goto label_508854;
        case 0x508858u: goto label_508858;
        case 0x50885cu: goto label_50885c;
        case 0x508860u: goto label_508860;
        case 0x508864u: goto label_508864;
        case 0x508868u: goto label_508868;
        case 0x50886cu: goto label_50886c;
        case 0x508870u: goto label_508870;
        case 0x508874u: goto label_508874;
        case 0x508878u: goto label_508878;
        case 0x50887cu: goto label_50887c;
        case 0x508880u: goto label_508880;
        case 0x508884u: goto label_508884;
        case 0x508888u: goto label_508888;
        case 0x50888cu: goto label_50888c;
        case 0x508890u: goto label_508890;
        case 0x508894u: goto label_508894;
        case 0x508898u: goto label_508898;
        case 0x50889cu: goto label_50889c;
        case 0x5088a0u: goto label_5088a0;
        case 0x5088a4u: goto label_5088a4;
        case 0x5088a8u: goto label_5088a8;
        case 0x5088acu: goto label_5088ac;
        case 0x5088b0u: goto label_5088b0;
        case 0x5088b4u: goto label_5088b4;
        case 0x5088b8u: goto label_5088b8;
        case 0x5088bcu: goto label_5088bc;
        case 0x5088c0u: goto label_5088c0;
        case 0x5088c4u: goto label_5088c4;
        case 0x5088c8u: goto label_5088c8;
        case 0x5088ccu: goto label_5088cc;
        case 0x5088d0u: goto label_5088d0;
        case 0x5088d4u: goto label_5088d4;
        case 0x5088d8u: goto label_5088d8;
        case 0x5088dcu: goto label_5088dc;
        case 0x5088e0u: goto label_5088e0;
        case 0x5088e4u: goto label_5088e4;
        case 0x5088e8u: goto label_5088e8;
        case 0x5088ecu: goto label_5088ec;
        case 0x5088f0u: goto label_5088f0;
        case 0x5088f4u: goto label_5088f4;
        case 0x5088f8u: goto label_5088f8;
        case 0x5088fcu: goto label_5088fc;
        case 0x508900u: goto label_508900;
        case 0x508904u: goto label_508904;
        case 0x508908u: goto label_508908;
        case 0x50890cu: goto label_50890c;
        case 0x508910u: goto label_508910;
        case 0x508914u: goto label_508914;
        case 0x508918u: goto label_508918;
        case 0x50891cu: goto label_50891c;
        case 0x508920u: goto label_508920;
        case 0x508924u: goto label_508924;
        case 0x508928u: goto label_508928;
        case 0x50892cu: goto label_50892c;
        case 0x508930u: goto label_508930;
        case 0x508934u: goto label_508934;
        case 0x508938u: goto label_508938;
        case 0x50893cu: goto label_50893c;
        case 0x508940u: goto label_508940;
        case 0x508944u: goto label_508944;
        case 0x508948u: goto label_508948;
        case 0x50894cu: goto label_50894c;
        case 0x508950u: goto label_508950;
        case 0x508954u: goto label_508954;
        case 0x508958u: goto label_508958;
        case 0x50895cu: goto label_50895c;
        case 0x508960u: goto label_508960;
        case 0x508964u: goto label_508964;
        case 0x508968u: goto label_508968;
        case 0x50896cu: goto label_50896c;
        case 0x508970u: goto label_508970;
        case 0x508974u: goto label_508974;
        case 0x508978u: goto label_508978;
        case 0x50897cu: goto label_50897c;
        case 0x508980u: goto label_508980;
        case 0x508984u: goto label_508984;
        case 0x508988u: goto label_508988;
        case 0x50898cu: goto label_50898c;
        case 0x508990u: goto label_508990;
        case 0x508994u: goto label_508994;
        case 0x508998u: goto label_508998;
        case 0x50899cu: goto label_50899c;
        case 0x5089a0u: goto label_5089a0;
        case 0x5089a4u: goto label_5089a4;
        case 0x5089a8u: goto label_5089a8;
        case 0x5089acu: goto label_5089ac;
        case 0x5089b0u: goto label_5089b0;
        case 0x5089b4u: goto label_5089b4;
        case 0x5089b8u: goto label_5089b8;
        case 0x5089bcu: goto label_5089bc;
        case 0x5089c0u: goto label_5089c0;
        case 0x5089c4u: goto label_5089c4;
        case 0x5089c8u: goto label_5089c8;
        case 0x5089ccu: goto label_5089cc;
        case 0x5089d0u: goto label_5089d0;
        case 0x5089d4u: goto label_5089d4;
        case 0x5089d8u: goto label_5089d8;
        case 0x5089dcu: goto label_5089dc;
        case 0x5089e0u: goto label_5089e0;
        case 0x5089e4u: goto label_5089e4;
        case 0x5089e8u: goto label_5089e8;
        case 0x5089ecu: goto label_5089ec;
        case 0x5089f0u: goto label_5089f0;
        case 0x5089f4u: goto label_5089f4;
        case 0x5089f8u: goto label_5089f8;
        case 0x5089fcu: goto label_5089fc;
        case 0x508a00u: goto label_508a00;
        case 0x508a04u: goto label_508a04;
        case 0x508a08u: goto label_508a08;
        case 0x508a0cu: goto label_508a0c;
        case 0x508a10u: goto label_508a10;
        case 0x508a14u: goto label_508a14;
        case 0x508a18u: goto label_508a18;
        case 0x508a1cu: goto label_508a1c;
        case 0x508a20u: goto label_508a20;
        case 0x508a24u: goto label_508a24;
        case 0x508a28u: goto label_508a28;
        case 0x508a2cu: goto label_508a2c;
        case 0x508a30u: goto label_508a30;
        case 0x508a34u: goto label_508a34;
        case 0x508a38u: goto label_508a38;
        case 0x508a3cu: goto label_508a3c;
        case 0x508a40u: goto label_508a40;
        case 0x508a44u: goto label_508a44;
        case 0x508a48u: goto label_508a48;
        case 0x508a4cu: goto label_508a4c;
        case 0x508a50u: goto label_508a50;
        case 0x508a54u: goto label_508a54;
        case 0x508a58u: goto label_508a58;
        case 0x508a5cu: goto label_508a5c;
        case 0x508a60u: goto label_508a60;
        case 0x508a64u: goto label_508a64;
        case 0x508a68u: goto label_508a68;
        case 0x508a6cu: goto label_508a6c;
        case 0x508a70u: goto label_508a70;
        case 0x508a74u: goto label_508a74;
        case 0x508a78u: goto label_508a78;
        case 0x508a7cu: goto label_508a7c;
        case 0x508a80u: goto label_508a80;
        case 0x508a84u: goto label_508a84;
        case 0x508a88u: goto label_508a88;
        case 0x508a8cu: goto label_508a8c;
        case 0x508a90u: goto label_508a90;
        case 0x508a94u: goto label_508a94;
        case 0x508a98u: goto label_508a98;
        case 0x508a9cu: goto label_508a9c;
        case 0x508aa0u: goto label_508aa0;
        case 0x508aa4u: goto label_508aa4;
        case 0x508aa8u: goto label_508aa8;
        case 0x508aacu: goto label_508aac;
        case 0x508ab0u: goto label_508ab0;
        case 0x508ab4u: goto label_508ab4;
        case 0x508ab8u: goto label_508ab8;
        case 0x508abcu: goto label_508abc;
        case 0x508ac0u: goto label_508ac0;
        case 0x508ac4u: goto label_508ac4;
        case 0x508ac8u: goto label_508ac8;
        case 0x508accu: goto label_508acc;
        case 0x508ad0u: goto label_508ad0;
        case 0x508ad4u: goto label_508ad4;
        case 0x508ad8u: goto label_508ad8;
        case 0x508adcu: goto label_508adc;
        case 0x508ae0u: goto label_508ae0;
        case 0x508ae4u: goto label_508ae4;
        case 0x508ae8u: goto label_508ae8;
        case 0x508aecu: goto label_508aec;
        case 0x508af0u: goto label_508af0;
        case 0x508af4u: goto label_508af4;
        case 0x508af8u: goto label_508af8;
        case 0x508afcu: goto label_508afc;
        case 0x508b00u: goto label_508b00;
        case 0x508b04u: goto label_508b04;
        case 0x508b08u: goto label_508b08;
        case 0x508b0cu: goto label_508b0c;
        case 0x508b10u: goto label_508b10;
        case 0x508b14u: goto label_508b14;
        case 0x508b18u: goto label_508b18;
        case 0x508b1cu: goto label_508b1c;
        case 0x508b20u: goto label_508b20;
        case 0x508b24u: goto label_508b24;
        case 0x508b28u: goto label_508b28;
        case 0x508b2cu: goto label_508b2c;
        case 0x508b30u: goto label_508b30;
        case 0x508b34u: goto label_508b34;
        case 0x508b38u: goto label_508b38;
        case 0x508b3cu: goto label_508b3c;
        case 0x508b40u: goto label_508b40;
        case 0x508b44u: goto label_508b44;
        case 0x508b48u: goto label_508b48;
        case 0x508b4cu: goto label_508b4c;
        case 0x508b50u: goto label_508b50;
        case 0x508b54u: goto label_508b54;
        case 0x508b58u: goto label_508b58;
        case 0x508b5cu: goto label_508b5c;
        case 0x508b60u: goto label_508b60;
        case 0x508b64u: goto label_508b64;
        case 0x508b68u: goto label_508b68;
        case 0x508b6cu: goto label_508b6c;
        case 0x508b70u: goto label_508b70;
        case 0x508b74u: goto label_508b74;
        case 0x508b78u: goto label_508b78;
        case 0x508b7cu: goto label_508b7c;
        case 0x508b80u: goto label_508b80;
        case 0x508b84u: goto label_508b84;
        case 0x508b88u: goto label_508b88;
        case 0x508b8cu: goto label_508b8c;
        case 0x508b90u: goto label_508b90;
        case 0x508b94u: goto label_508b94;
        case 0x508b98u: goto label_508b98;
        case 0x508b9cu: goto label_508b9c;
        case 0x508ba0u: goto label_508ba0;
        case 0x508ba4u: goto label_508ba4;
        case 0x508ba8u: goto label_508ba8;
        case 0x508bacu: goto label_508bac;
        case 0x508bb0u: goto label_508bb0;
        case 0x508bb4u: goto label_508bb4;
        case 0x508bb8u: goto label_508bb8;
        case 0x508bbcu: goto label_508bbc;
        case 0x508bc0u: goto label_508bc0;
        case 0x508bc4u: goto label_508bc4;
        case 0x508bc8u: goto label_508bc8;
        case 0x508bccu: goto label_508bcc;
        case 0x508bd0u: goto label_508bd0;
        case 0x508bd4u: goto label_508bd4;
        case 0x508bd8u: goto label_508bd8;
        case 0x508bdcu: goto label_508bdc;
        case 0x508be0u: goto label_508be0;
        case 0x508be4u: goto label_508be4;
        case 0x508be8u: goto label_508be8;
        case 0x508becu: goto label_508bec;
        case 0x508bf0u: goto label_508bf0;
        case 0x508bf4u: goto label_508bf4;
        case 0x508bf8u: goto label_508bf8;
        case 0x508bfcu: goto label_508bfc;
        case 0x508c00u: goto label_508c00;
        case 0x508c04u: goto label_508c04;
        case 0x508c08u: goto label_508c08;
        case 0x508c0cu: goto label_508c0c;
        case 0x508c10u: goto label_508c10;
        case 0x508c14u: goto label_508c14;
        case 0x508c18u: goto label_508c18;
        case 0x508c1cu: goto label_508c1c;
        case 0x508c20u: goto label_508c20;
        case 0x508c24u: goto label_508c24;
        case 0x508c28u: goto label_508c28;
        case 0x508c2cu: goto label_508c2c;
        case 0x508c30u: goto label_508c30;
        case 0x508c34u: goto label_508c34;
        case 0x508c38u: goto label_508c38;
        case 0x508c3cu: goto label_508c3c;
        case 0x508c40u: goto label_508c40;
        case 0x508c44u: goto label_508c44;
        case 0x508c48u: goto label_508c48;
        case 0x508c4cu: goto label_508c4c;
        case 0x508c50u: goto label_508c50;
        case 0x508c54u: goto label_508c54;
        case 0x508c58u: goto label_508c58;
        case 0x508c5cu: goto label_508c5c;
        case 0x508c60u: goto label_508c60;
        case 0x508c64u: goto label_508c64;
        case 0x508c68u: goto label_508c68;
        case 0x508c6cu: goto label_508c6c;
        case 0x508c70u: goto label_508c70;
        case 0x508c74u: goto label_508c74;
        case 0x508c78u: goto label_508c78;
        case 0x508c7cu: goto label_508c7c;
        case 0x508c80u: goto label_508c80;
        case 0x508c84u: goto label_508c84;
        case 0x508c88u: goto label_508c88;
        case 0x508c8cu: goto label_508c8c;
        case 0x508c90u: goto label_508c90;
        case 0x508c94u: goto label_508c94;
        case 0x508c98u: goto label_508c98;
        case 0x508c9cu: goto label_508c9c;
        case 0x508ca0u: goto label_508ca0;
        case 0x508ca4u: goto label_508ca4;
        case 0x508ca8u: goto label_508ca8;
        case 0x508cacu: goto label_508cac;
        case 0x508cb0u: goto label_508cb0;
        case 0x508cb4u: goto label_508cb4;
        case 0x508cb8u: goto label_508cb8;
        case 0x508cbcu: goto label_508cbc;
        case 0x508cc0u: goto label_508cc0;
        case 0x508cc4u: goto label_508cc4;
        case 0x508cc8u: goto label_508cc8;
        case 0x508cccu: goto label_508ccc;
        case 0x508cd0u: goto label_508cd0;
        case 0x508cd4u: goto label_508cd4;
        case 0x508cd8u: goto label_508cd8;
        case 0x508cdcu: goto label_508cdc;
        case 0x508ce0u: goto label_508ce0;
        case 0x508ce4u: goto label_508ce4;
        case 0x508ce8u: goto label_508ce8;
        case 0x508cecu: goto label_508cec;
        case 0x508cf0u: goto label_508cf0;
        case 0x508cf4u: goto label_508cf4;
        case 0x508cf8u: goto label_508cf8;
        case 0x508cfcu: goto label_508cfc;
        case 0x508d00u: goto label_508d00;
        case 0x508d04u: goto label_508d04;
        case 0x508d08u: goto label_508d08;
        case 0x508d0cu: goto label_508d0c;
        case 0x508d10u: goto label_508d10;
        case 0x508d14u: goto label_508d14;
        case 0x508d18u: goto label_508d18;
        case 0x508d1cu: goto label_508d1c;
        case 0x508d20u: goto label_508d20;
        case 0x508d24u: goto label_508d24;
        case 0x508d28u: goto label_508d28;
        case 0x508d2cu: goto label_508d2c;
        case 0x508d30u: goto label_508d30;
        case 0x508d34u: goto label_508d34;
        case 0x508d38u: goto label_508d38;
        case 0x508d3cu: goto label_508d3c;
        case 0x508d40u: goto label_508d40;
        case 0x508d44u: goto label_508d44;
        case 0x508d48u: goto label_508d48;
        case 0x508d4cu: goto label_508d4c;
        case 0x508d50u: goto label_508d50;
        case 0x508d54u: goto label_508d54;
        case 0x508d58u: goto label_508d58;
        case 0x508d5cu: goto label_508d5c;
        case 0x508d60u: goto label_508d60;
        case 0x508d64u: goto label_508d64;
        case 0x508d68u: goto label_508d68;
        case 0x508d6cu: goto label_508d6c;
        case 0x508d70u: goto label_508d70;
        case 0x508d74u: goto label_508d74;
        case 0x508d78u: goto label_508d78;
        case 0x508d7cu: goto label_508d7c;
        case 0x508d80u: goto label_508d80;
        case 0x508d84u: goto label_508d84;
        case 0x508d88u: goto label_508d88;
        case 0x508d8cu: goto label_508d8c;
        case 0x508d90u: goto label_508d90;
        case 0x508d94u: goto label_508d94;
        case 0x508d98u: goto label_508d98;
        case 0x508d9cu: goto label_508d9c;
        case 0x508da0u: goto label_508da0;
        case 0x508da4u: goto label_508da4;
        case 0x508da8u: goto label_508da8;
        case 0x508dacu: goto label_508dac;
        case 0x508db0u: goto label_508db0;
        case 0x508db4u: goto label_508db4;
        case 0x508db8u: goto label_508db8;
        case 0x508dbcu: goto label_508dbc;
        case 0x508dc0u: goto label_508dc0;
        case 0x508dc4u: goto label_508dc4;
        case 0x508dc8u: goto label_508dc8;
        case 0x508dccu: goto label_508dcc;
        case 0x508dd0u: goto label_508dd0;
        case 0x508dd4u: goto label_508dd4;
        case 0x508dd8u: goto label_508dd8;
        case 0x508ddcu: goto label_508ddc;
        case 0x508de0u: goto label_508de0;
        case 0x508de4u: goto label_508de4;
        case 0x508de8u: goto label_508de8;
        case 0x508decu: goto label_508dec;
        case 0x508df0u: goto label_508df0;
        case 0x508df4u: goto label_508df4;
        case 0x508df8u: goto label_508df8;
        case 0x508dfcu: goto label_508dfc;
        case 0x508e00u: goto label_508e00;
        case 0x508e04u: goto label_508e04;
        case 0x508e08u: goto label_508e08;
        case 0x508e0cu: goto label_508e0c;
        case 0x508e10u: goto label_508e10;
        case 0x508e14u: goto label_508e14;
        case 0x508e18u: goto label_508e18;
        case 0x508e1cu: goto label_508e1c;
        case 0x508e20u: goto label_508e20;
        case 0x508e24u: goto label_508e24;
        case 0x508e28u: goto label_508e28;
        case 0x508e2cu: goto label_508e2c;
        case 0x508e30u: goto label_508e30;
        case 0x508e34u: goto label_508e34;
        case 0x508e38u: goto label_508e38;
        case 0x508e3cu: goto label_508e3c;
        case 0x508e40u: goto label_508e40;
        case 0x508e44u: goto label_508e44;
        case 0x508e48u: goto label_508e48;
        case 0x508e4cu: goto label_508e4c;
        case 0x508e50u: goto label_508e50;
        case 0x508e54u: goto label_508e54;
        case 0x508e58u: goto label_508e58;
        case 0x508e5cu: goto label_508e5c;
        case 0x508e60u: goto label_508e60;
        case 0x508e64u: goto label_508e64;
        case 0x508e68u: goto label_508e68;
        case 0x508e6cu: goto label_508e6c;
        case 0x508e70u: goto label_508e70;
        case 0x508e74u: goto label_508e74;
        case 0x508e78u: goto label_508e78;
        case 0x508e7cu: goto label_508e7c;
        case 0x508e80u: goto label_508e80;
        case 0x508e84u: goto label_508e84;
        case 0x508e88u: goto label_508e88;
        case 0x508e8cu: goto label_508e8c;
        case 0x508e90u: goto label_508e90;
        case 0x508e94u: goto label_508e94;
        case 0x508e98u: goto label_508e98;
        case 0x508e9cu: goto label_508e9c;
        case 0x508ea0u: goto label_508ea0;
        case 0x508ea4u: goto label_508ea4;
        case 0x508ea8u: goto label_508ea8;
        case 0x508eacu: goto label_508eac;
        case 0x508eb0u: goto label_508eb0;
        case 0x508eb4u: goto label_508eb4;
        case 0x508eb8u: goto label_508eb8;
        case 0x508ebcu: goto label_508ebc;
        case 0x508ec0u: goto label_508ec0;
        case 0x508ec4u: goto label_508ec4;
        case 0x508ec8u: goto label_508ec8;
        case 0x508eccu: goto label_508ecc;
        case 0x508ed0u: goto label_508ed0;
        case 0x508ed4u: goto label_508ed4;
        case 0x508ed8u: goto label_508ed8;
        case 0x508edcu: goto label_508edc;
        case 0x508ee0u: goto label_508ee0;
        case 0x508ee4u: goto label_508ee4;
        case 0x508ee8u: goto label_508ee8;
        case 0x508eecu: goto label_508eec;
        case 0x508ef0u: goto label_508ef0;
        case 0x508ef4u: goto label_508ef4;
        case 0x508ef8u: goto label_508ef8;
        case 0x508efcu: goto label_508efc;
        case 0x508f00u: goto label_508f00;
        case 0x508f04u: goto label_508f04;
        case 0x508f08u: goto label_508f08;
        case 0x508f0cu: goto label_508f0c;
        case 0x508f10u: goto label_508f10;
        case 0x508f14u: goto label_508f14;
        case 0x508f18u: goto label_508f18;
        case 0x508f1cu: goto label_508f1c;
        case 0x508f20u: goto label_508f20;
        case 0x508f24u: goto label_508f24;
        case 0x508f28u: goto label_508f28;
        case 0x508f2cu: goto label_508f2c;
        case 0x508f30u: goto label_508f30;
        case 0x508f34u: goto label_508f34;
        case 0x508f38u: goto label_508f38;
        case 0x508f3cu: goto label_508f3c;
        case 0x508f40u: goto label_508f40;
        case 0x508f44u: goto label_508f44;
        case 0x508f48u: goto label_508f48;
        case 0x508f4cu: goto label_508f4c;
        case 0x508f50u: goto label_508f50;
        case 0x508f54u: goto label_508f54;
        case 0x508f58u: goto label_508f58;
        case 0x508f5cu: goto label_508f5c;
        case 0x508f60u: goto label_508f60;
        case 0x508f64u: goto label_508f64;
        case 0x508f68u: goto label_508f68;
        case 0x508f6cu: goto label_508f6c;
        case 0x508f70u: goto label_508f70;
        case 0x508f74u: goto label_508f74;
        case 0x508f78u: goto label_508f78;
        case 0x508f7cu: goto label_508f7c;
        case 0x508f80u: goto label_508f80;
        case 0x508f84u: goto label_508f84;
        case 0x508f88u: goto label_508f88;
        case 0x508f8cu: goto label_508f8c;
        case 0x508f90u: goto label_508f90;
        case 0x508f94u: goto label_508f94;
        case 0x508f98u: goto label_508f98;
        case 0x508f9cu: goto label_508f9c;
        case 0x508fa0u: goto label_508fa0;
        case 0x508fa4u: goto label_508fa4;
        case 0x508fa8u: goto label_508fa8;
        case 0x508facu: goto label_508fac;
        case 0x508fb0u: goto label_508fb0;
        case 0x508fb4u: goto label_508fb4;
        case 0x508fb8u: goto label_508fb8;
        case 0x508fbcu: goto label_508fbc;
        case 0x508fc0u: goto label_508fc0;
        case 0x508fc4u: goto label_508fc4;
        case 0x508fc8u: goto label_508fc8;
        case 0x508fccu: goto label_508fcc;
        case 0x508fd0u: goto label_508fd0;
        case 0x508fd4u: goto label_508fd4;
        case 0x508fd8u: goto label_508fd8;
        case 0x508fdcu: goto label_508fdc;
        case 0x508fe0u: goto label_508fe0;
        case 0x508fe4u: goto label_508fe4;
        case 0x508fe8u: goto label_508fe8;
        case 0x508fecu: goto label_508fec;
        case 0x508ff0u: goto label_508ff0;
        case 0x508ff4u: goto label_508ff4;
        case 0x508ff8u: goto label_508ff8;
        case 0x508ffcu: goto label_508ffc;
        case 0x509000u: goto label_509000;
        case 0x509004u: goto label_509004;
        case 0x509008u: goto label_509008;
        case 0x50900cu: goto label_50900c;
        case 0x509010u: goto label_509010;
        case 0x509014u: goto label_509014;
        case 0x509018u: goto label_509018;
        case 0x50901cu: goto label_50901c;
        case 0x509020u: goto label_509020;
        case 0x509024u: goto label_509024;
        case 0x509028u: goto label_509028;
        case 0x50902cu: goto label_50902c;
        case 0x509030u: goto label_509030;
        case 0x509034u: goto label_509034;
        case 0x509038u: goto label_509038;
        case 0x50903cu: goto label_50903c;
        case 0x509040u: goto label_509040;
        case 0x509044u: goto label_509044;
        case 0x509048u: goto label_509048;
        case 0x50904cu: goto label_50904c;
        case 0x509050u: goto label_509050;
        case 0x509054u: goto label_509054;
        case 0x509058u: goto label_509058;
        case 0x50905cu: goto label_50905c;
        case 0x509060u: goto label_509060;
        case 0x509064u: goto label_509064;
        case 0x509068u: goto label_509068;
        case 0x50906cu: goto label_50906c;
        case 0x509070u: goto label_509070;
        case 0x509074u: goto label_509074;
        case 0x509078u: goto label_509078;
        case 0x50907cu: goto label_50907c;
        case 0x509080u: goto label_509080;
        case 0x509084u: goto label_509084;
        case 0x509088u: goto label_509088;
        case 0x50908cu: goto label_50908c;
        case 0x509090u: goto label_509090;
        case 0x509094u: goto label_509094;
        case 0x509098u: goto label_509098;
        case 0x50909cu: goto label_50909c;
        case 0x5090a0u: goto label_5090a0;
        case 0x5090a4u: goto label_5090a4;
        case 0x5090a8u: goto label_5090a8;
        case 0x5090acu: goto label_5090ac;
        case 0x5090b0u: goto label_5090b0;
        case 0x5090b4u: goto label_5090b4;
        case 0x5090b8u: goto label_5090b8;
        case 0x5090bcu: goto label_5090bc;
        case 0x5090c0u: goto label_5090c0;
        case 0x5090c4u: goto label_5090c4;
        case 0x5090c8u: goto label_5090c8;
        case 0x5090ccu: goto label_5090cc;
        case 0x5090d0u: goto label_5090d0;
        case 0x5090d4u: goto label_5090d4;
        case 0x5090d8u: goto label_5090d8;
        case 0x5090dcu: goto label_5090dc;
        case 0x5090e0u: goto label_5090e0;
        case 0x5090e4u: goto label_5090e4;
        case 0x5090e8u: goto label_5090e8;
        case 0x5090ecu: goto label_5090ec;
        case 0x5090f0u: goto label_5090f0;
        case 0x5090f4u: goto label_5090f4;
        case 0x5090f8u: goto label_5090f8;
        case 0x5090fcu: goto label_5090fc;
        case 0x509100u: goto label_509100;
        case 0x509104u: goto label_509104;
        case 0x509108u: goto label_509108;
        case 0x50910cu: goto label_50910c;
        default: break;
    }

    ctx->pc = 0x5080d0u;

label_5080d0:
    // 0x5080d0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x5080d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_5080d4:
    // 0x5080d4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x5080d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_5080d8:
    // 0x5080d8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x5080d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_5080dc:
    // 0x5080dc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x5080dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_5080e0:
    // 0x5080e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x5080e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_5080e4:
    // 0x5080e4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x5080e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5080e8:
    // 0x5080e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x5080e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_5080ec:
    // 0x5080ec: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x5080ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_5080f0:
    // 0x5080f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5080f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5080f4:
    // 0x5080f4: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x5080f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_5080f8:
    // 0x5080f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5080f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5080fc:
    // 0x5080fc: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x5080fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_508100:
    // 0x508100: 0x90830090  lbu         $v1, 0x90($a0)
    ctx->pc = 0x508100u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 144)));
label_508104:
    // 0x508104: 0x1060008a  beqz        $v1, . + 4 + (0x8A << 2)
label_508108:
    if (ctx->pc == 0x508108u) {
        ctx->pc = 0x508108u;
            // 0x508108: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50810Cu;
        goto label_50810c;
    }
    ctx->pc = 0x508104u;
    {
        const bool branch_taken_0x508104 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x508108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x508104u;
            // 0x508108: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x508104) {
            ctx->pc = 0x508330u;
            goto label_508330;
        }
    }
    ctx->pc = 0x50810Cu;
label_50810c:
    // 0x50810c: 0x8e8300e0  lw          $v1, 0xE0($s4)
    ctx->pc = 0x50810cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 224)));
label_508110:
    // 0x508110: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x508110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
label_508114:
    // 0x508114: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x508114u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_508118:
    // 0x508118: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_50811c:
    if (ctx->pc == 0x50811Cu) {
        ctx->pc = 0x508120u;
        goto label_508120;
    }
    ctx->pc = 0x508118u;
    {
        const bool branch_taken_0x508118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x508118) {
            ctx->pc = 0x50812Cu;
            goto label_50812c;
        }
    }
    ctx->pc = 0x508120u;
label_508120:
    // 0x508120: 0x8e8300e4  lw          $v1, 0xE4($s4)
    ctx->pc = 0x508120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 228)));
label_508124:
    // 0x508124: 0x38630006  xori        $v1, $v1, 0x6
    ctx->pc = 0x508124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)6);
label_508128:
    // 0x508128: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x508128u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_50812c:
    // 0x50812c: 0x50600081  beql        $v1, $zero, . + 4 + (0x81 << 2)
label_508130:
    if (ctx->pc == 0x508130u) {
        ctx->pc = 0x508130u;
            // 0x508130: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x508134u;
        goto label_508134;
    }
    ctx->pc = 0x50812Cu;
    {
        const bool branch_taken_0x50812c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x50812c) {
            ctx->pc = 0x508130u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50812Cu;
            // 0x508130: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x508334u;
            goto label_508334;
        }
    }
    ctx->pc = 0x508134u;
label_508134:
    // 0x508134: 0x8e8400d4  lw          $a0, 0xD4($s4)
    ctx->pc = 0x508134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
label_508138:
    // 0x508138: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x508138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50813c:
    // 0x50813c: 0x1483007c  bne         $a0, $v1, . + 4 + (0x7C << 2)
label_508140:
    if (ctx->pc == 0x508140u) {
        ctx->pc = 0x508144u;
        goto label_508144;
    }
    ctx->pc = 0x50813Cu;
    {
        const bool branch_taken_0x50813c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x50813c) {
            ctx->pc = 0x508330u;
            goto label_508330;
        }
    }
    ctx->pc = 0x508144u;
label_508144:
    // 0x508144: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x508144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_508148:
    // 0x508148: 0xc04f278  jal         func_13C9E0
label_50814c:
    if (ctx->pc == 0x50814Cu) {
        ctx->pc = 0x50814Cu;
            // 0x50814c: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->pc = 0x508150u;
        goto label_508150;
    }
    ctx->pc = 0x508148u;
    SET_GPR_U32(ctx, 31, 0x508150u);
    ctx->pc = 0x50814Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x508148u;
            // 0x50814c: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508150u; }
        if (ctx->pc != 0x508150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508150u; }
        if (ctx->pc != 0x508150u) { return; }
    }
    ctx->pc = 0x508150u;
label_508150:
    // 0x508150: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x508150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_508154:
    // 0x508154: 0xc04ce80  jal         func_133A00
label_508158:
    if (ctx->pc == 0x508158u) {
        ctx->pc = 0x508158u;
            // 0x508158: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->pc = 0x50815Cu;
        goto label_50815c;
    }
    ctx->pc = 0x508154u;
    SET_GPR_U32(ctx, 31, 0x50815Cu);
    ctx->pc = 0x508158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x508154u;
            // 0x508158: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50815Cu; }
        if (ctx->pc != 0x50815Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50815Cu; }
        if (ctx->pc != 0x50815Cu) { return; }
    }
    ctx->pc = 0x50815Cu;
label_50815c:
    // 0x50815c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x50815cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_508160:
    // 0x508160: 0x9286004c  lbu         $a2, 0x4C($s4)
    ctx->pc = 0x508160u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 76)));
label_508164:
    // 0x508164: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x508164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_508168:
    // 0x508168: 0x8e750000  lw          $s5, 0x0($s3)
    ctx->pc = 0x508168u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_50816c:
    // 0x50816c: 0xc07698c  jal         func_1DA630
label_508170:
    if (ctx->pc == 0x508170u) {
        ctx->pc = 0x508170u;
            // 0x508170: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x508174u;
        goto label_508174;
    }
    ctx->pc = 0x50816Cu;
    SET_GPR_U32(ctx, 31, 0x508174u);
    ctx->pc = 0x508170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50816Cu;
            // 0x508170: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508174u; }
        if (ctx->pc != 0x508174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508174u; }
        if (ctx->pc != 0x508174u) { return; }
    }
    ctx->pc = 0x508174u;
label_508174:
    // 0x508174: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x508174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_508178:
    // 0x508178: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_50817c:
    if (ctx->pc == 0x50817Cu) {
        ctx->pc = 0x508180u;
        goto label_508180;
    }
    ctx->pc = 0x508178u;
    {
        const bool branch_taken_0x508178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x508178) {
            ctx->pc = 0x508188u;
            goto label_508188;
        }
    }
    ctx->pc = 0x508180u;
label_508180:
    // 0x508180: 0x10000033  b           . + 4 + (0x33 << 2)
label_508184:
    if (ctx->pc == 0x508184u) {
        ctx->pc = 0x508184u;
            // 0x508184: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x508188u;
        goto label_508188;
    }
    ctx->pc = 0x508180u;
    {
        const bool branch_taken_0x508180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x508184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x508180u;
            // 0x508184: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x508180) {
            ctx->pc = 0x508250u;
            goto label_508250;
        }
    }
    ctx->pc = 0x508188u;
label_508188:
    // 0x508188: 0xc0576f4  jal         func_15DBD0
label_50818c:
    if (ctx->pc == 0x50818Cu) {
        ctx->pc = 0x508190u;
        goto label_508190;
    }
    ctx->pc = 0x508188u;
    SET_GPR_U32(ctx, 31, 0x508190u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508190u; }
        if (ctx->pc != 0x508190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508190u; }
        if (ctx->pc != 0x508190u) { return; }
    }
    ctx->pc = 0x508190u;
label_508190:
    // 0x508190: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x508190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_508194:
    // 0x508194: 0xc076984  jal         func_1DA610
label_508198:
    if (ctx->pc == 0x508198u) {
        ctx->pc = 0x508198u;
            // 0x508198: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50819Cu;
        goto label_50819c;
    }
    ctx->pc = 0x508194u;
    SET_GPR_U32(ctx, 31, 0x50819Cu);
    ctx->pc = 0x508198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x508194u;
            // 0x508198: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50819Cu; }
        if (ctx->pc != 0x50819Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50819Cu; }
        if (ctx->pc != 0x50819Cu) { return; }
    }
    ctx->pc = 0x50819Cu;
label_50819c:
    // 0x50819c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x50819cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_5081a0:
    // 0x5081a0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x5081a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_5081a4:
    // 0x5081a4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x5081a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_5081a8:
    // 0x5081a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x5081a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5081ac:
    // 0x5081ac: 0xc442cce0  lwc1        $f2, -0x3320($v0)
    ctx->pc = 0x5081acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_5081b0:
    // 0x5081b0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x5081b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5081b4:
    // 0x5081b4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x5081b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_5081b8:
    // 0x5081b8: 0xc441cce8  lwc1        $f1, -0x3318($v0)
    ctx->pc = 0x5081b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5081bc:
    // 0x5081bc: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x5081bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_5081c0:
    // 0x5081c0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x5081c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_5081c4:
    // 0x5081c4: 0xc440ccec  lwc1        $f0, -0x3314($v0)
    ctx->pc = 0x5081c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5081c8:
    // 0x5081c8: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x5081c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_5081cc:
    // 0x5081cc: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x5081ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_5081d0:
    // 0x5081d0: 0x8c42cce4  lw          $v0, -0x331C($v0)
    ctx->pc = 0x5081d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954212)));
label_5081d4:
    // 0x5081d4: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x5081d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_5081d8:
    // 0x5081d8: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x5081d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_5081dc:
    // 0x5081dc: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x5081dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5081e0:
    // 0x5081e0: 0xc04cca0  jal         func_133280
label_5081e4:
    if (ctx->pc == 0x5081E4u) {
        ctx->pc = 0x5081E4u;
            // 0x5081e4: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->pc = 0x5081E8u;
        goto label_5081e8;
    }
    ctx->pc = 0x5081E0u;
    SET_GPR_U32(ctx, 31, 0x5081E8u);
    ctx->pc = 0x5081E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5081E0u;
            // 0x5081e4: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5081E8u; }
        if (ctx->pc != 0x5081E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5081E8u; }
        if (ctx->pc != 0x5081E8u) { return; }
    }
    ctx->pc = 0x5081E8u;
label_5081e8:
    // 0x5081e8: 0xc076980  jal         func_1DA600
label_5081ec:
    if (ctx->pc == 0x5081ECu) {
        ctx->pc = 0x5081ECu;
            // 0x5081ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5081F0u;
        goto label_5081f0;
    }
    ctx->pc = 0x5081E8u;
    SET_GPR_U32(ctx, 31, 0x5081F0u);
    ctx->pc = 0x5081ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5081E8u;
            // 0x5081ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5081F0u; }
        if (ctx->pc != 0x5081F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5081F0u; }
        if (ctx->pc != 0x5081F0u) { return; }
    }
    ctx->pc = 0x5081F0u;
label_5081f0:
    // 0x5081f0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x5081f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_5081f4:
    // 0x5081f4: 0xc04cc34  jal         func_1330D0
label_5081f8:
    if (ctx->pc == 0x5081F8u) {
        ctx->pc = 0x5081F8u;
            // 0x5081f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5081FCu;
        goto label_5081fc;
    }
    ctx->pc = 0x5081F4u;
    SET_GPR_U32(ctx, 31, 0x5081FCu);
    ctx->pc = 0x5081F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5081F4u;
            // 0x5081f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5081FCu; }
        if (ctx->pc != 0x5081FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5081FCu; }
        if (ctx->pc != 0x5081FCu) { return; }
    }
    ctx->pc = 0x5081FCu;
label_5081fc:
    // 0x5081fc: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x5081fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_508200:
    // 0x508200: 0xc461b350  lwc1        $f1, -0x4CB0($v1)
    ctx->pc = 0x508200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294947664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_508204:
    // 0x508204: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x508204u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_508208:
    // 0x508208: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_50820c:
    if (ctx->pc == 0x50820Cu) {
        ctx->pc = 0x50820Cu;
            // 0x50820c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x508210u;
        goto label_508210;
    }
    ctx->pc = 0x508208u;
    {
        const bool branch_taken_0x508208 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x508208) {
            ctx->pc = 0x50820Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x508208u;
            // 0x50820c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x508218u;
            goto label_508218;
        }
    }
    ctx->pc = 0x508210u;
label_508210:
    // 0x508210: 0x1000000f  b           . + 4 + (0xF << 2)
label_508214:
    if (ctx->pc == 0x508214u) {
        ctx->pc = 0x508214u;
            // 0x508214: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x508218u;
        goto label_508218;
    }
    ctx->pc = 0x508210u;
    {
        const bool branch_taken_0x508210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x508214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x508210u;
            // 0x508214: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x508210) {
            ctx->pc = 0x508250u;
            goto label_508250;
        }
    }
    ctx->pc = 0x508218u;
label_508218:
    // 0x508218: 0xc07697c  jal         func_1DA5F0
label_50821c:
    if (ctx->pc == 0x50821Cu) {
        ctx->pc = 0x508220u;
        goto label_508220;
    }
    ctx->pc = 0x508218u;
    SET_GPR_U32(ctx, 31, 0x508220u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508220u; }
        if (ctx->pc != 0x508220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508220u; }
        if (ctx->pc != 0x508220u) { return; }
    }
    ctx->pc = 0x508220u;
label_508220:
    // 0x508220: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x508220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_508224:
    // 0x508224: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x508224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_508228:
    // 0x508228: 0xc04cd60  jal         func_133580
label_50822c:
    if (ctx->pc == 0x50822Cu) {
        ctx->pc = 0x50822Cu;
            // 0x50822c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x508230u;
        goto label_508230;
    }
    ctx->pc = 0x508228u;
    SET_GPR_U32(ctx, 31, 0x508230u);
    ctx->pc = 0x50822Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x508228u;
            // 0x50822c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508230u; }
        if (ctx->pc != 0x508230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508230u; }
        if (ctx->pc != 0x508230u) { return; }
    }
    ctx->pc = 0x508230u;
label_508230:
    // 0x508230: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x508230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_508234:
    // 0x508234: 0xc04c650  jal         func_131940
label_508238:
    if (ctx->pc == 0x508238u) {
        ctx->pc = 0x508238u;
            // 0x508238: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x50823Cu;
        goto label_50823c;
    }
    ctx->pc = 0x508234u;
    SET_GPR_U32(ctx, 31, 0x50823Cu);
    ctx->pc = 0x508238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x508234u;
            // 0x508238: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50823Cu; }
        if (ctx->pc != 0x50823Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50823Cu; }
        if (ctx->pc != 0x50823Cu) { return; }
    }
    ctx->pc = 0x50823Cu;
label_50823c:
    // 0x50823c: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x50823cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_508240:
    // 0x508240: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x508240u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_508244:
    // 0x508244: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x508244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_508248:
    // 0x508248: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x508248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_50824c:
    // 0x50824c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x50824cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_508250:
    // 0x508250: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x508250u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_508254:
    // 0x508254: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
label_508258:
    if (ctx->pc == 0x508258u) {
        ctx->pc = 0x508258u;
            // 0x508258: 0xae830044  sw          $v1, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 3));
        ctx->pc = 0x50825Cu;
        goto label_50825c;
    }
    ctx->pc = 0x508254u;
    {
        const bool branch_taken_0x508254 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x508258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x508254u;
            // 0x508258: 0xae830044  sw          $v1, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x508254) {
            ctx->pc = 0x508330u;
            goto label_508330;
        }
    }
    ctx->pc = 0x50825Cu;
label_50825c:
    // 0x50825c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x50825cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_508260:
    // 0x508260: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x508260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_508264:
    // 0x508264: 0x8c66e3c0  lw          $a2, -0x1C40($v1)
    ctx->pc = 0x508264u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_508268:
    // 0x508268: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x508268u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_50826c:
    // 0x50826c: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x50826cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_508270:
    // 0x508270: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x508270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_508274:
    // 0x508274: 0x65880  sll         $t3, $a2, 2
    ctx->pc = 0x508274u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_508278:
    // 0x508278: 0x8c65e3d8  lw          $a1, -0x1C28($v1)
    ctx->pc = 0x508278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_50827c:
    // 0x50827c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x50827cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_508280:
    // 0x508280: 0x53180  sll         $a2, $a1, 6
    ctx->pc = 0x508280u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_508284:
    // 0x508284: 0x8c64e360  lw          $a0, -0x1CA0($v1)
    ctx->pc = 0x508284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_508288:
    // 0x508288: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x508288u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_50828c:
    // 0x50828c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x50828cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_508290:
    // 0x508290: 0x869021  addu        $s2, $a0, $a2
    ctx->pc = 0x508290u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_508294:
    // 0x508294: 0x8c63e3b0  lw          $v1, -0x1C50($v1)
    ctx->pc = 0x508294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_508298:
    // 0x508298: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x508298u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_50829c:
    // 0x50829c: 0x6b3021  addu        $a2, $v1, $t3
    ctx->pc = 0x50829cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_5082a0:
    // 0x5082a0: 0xacd20000  sw          $s2, 0x0($a2)
    ctx->pc = 0x5082a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 18));
label_5082a4:
    // 0x5082a4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5082a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5082a8:
    // 0x5082a8: 0x8c89e378  lw          $t1, -0x1C88($a0)
    ctx->pc = 0x5082a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294959992)));
label_5082ac:
    // 0x5082ac: 0x8ca6e3d8  lw          $a2, -0x1C28($a1)
    ctx->pc = 0x5082acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960088)));
label_5082b0:
    // 0x5082b0: 0x8c64e3b8  lw          $a0, -0x1C48($v1)
    ctx->pc = 0x5082b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960056)));
label_5082b4:
    // 0x5082b4: 0x65080  sll         $t2, $a2, 2
    ctx->pc = 0x5082b4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_5082b8:
    // 0x5082b8: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x5082b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_5082bc:
    // 0x5082bc: 0x12aa821  addu        $s5, $t1, $t2
    ctx->pc = 0x5082bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_5082c0:
    // 0x5082c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x5082c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5082c4:
    // 0x5082c4: 0x8b4821  addu        $t1, $a0, $t3
    ctx->pc = 0x5082c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_5082c8:
    // 0x5082c8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5082c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5082cc:
    // 0x5082cc: 0xad350000  sw          $s5, 0x0($t1)
    ctx->pc = 0x5082ccu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 21));
label_5082d0:
    // 0x5082d0: 0x8c490028  lw          $t1, 0x28($v0)
    ctx->pc = 0x5082d0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_5082d4:
    // 0x5082d4: 0x8d08e3d8  lw          $t0, -0x1C28($t0)
    ctx->pc = 0x5082d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_5082d8:
    // 0x5082d8: 0x8ca2e3c0  lw          $v0, -0x1C40($a1)
    ctx->pc = 0x5082d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_5082dc:
    // 0x5082dc: 0x1092821  addu        $a1, $t0, $t1
    ctx->pc = 0x5082dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_5082e0:
    // 0x5082e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x5082e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_5082e4:
    // 0x5082e4: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x5082e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_5082e8:
    // 0x5082e8: 0xac62e3c0  sw          $v0, -0x1C40($v1)
    ctx->pc = 0x5082e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 2));
label_5082ec:
    // 0x5082ec: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x5082ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_5082f0:
    // 0x5082f0: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x5082f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_5082f4:
    // 0x5082f4: 0xc04e4a4  jal         func_139290
label_5082f8:
    if (ctx->pc == 0x5082F8u) {
        ctx->pc = 0x5082F8u;
            // 0x5082f8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5082FCu;
        goto label_5082fc;
    }
    ctx->pc = 0x5082F4u;
    SET_GPR_U32(ctx, 31, 0x5082FCu);
    ctx->pc = 0x5082F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5082F4u;
            // 0x5082f8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5082FCu; }
        if (ctx->pc != 0x5082FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5082FCu; }
        if (ctx->pc != 0x5082FCu) { return; }
    }
    ctx->pc = 0x5082FCu;
label_5082fc:
    // 0x5082fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x5082fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_508300:
    // 0x508300: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x508300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_508304:
    // 0x508304: 0xc04cd60  jal         func_133580
label_508308:
    if (ctx->pc == 0x508308u) {
        ctx->pc = 0x508308u;
            // 0x508308: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50830Cu;
        goto label_50830c;
    }
    ctx->pc = 0x508304u;
    SET_GPR_U32(ctx, 31, 0x50830Cu);
    ctx->pc = 0x508308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x508304u;
            // 0x508308: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50830Cu; }
        if (ctx->pc != 0x50830Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50830Cu; }
        if (ctx->pc != 0x50830Cu) { return; }
    }
    ctx->pc = 0x50830Cu;
label_50830c:
    // 0x50830c: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x50830cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_508310:
    // 0x508310: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x508310u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_508314:
    // 0x508314: 0x320f809  jalr        $t9
label_508318:
    if (ctx->pc == 0x508318u) {
        ctx->pc = 0x508318u;
            // 0x508318: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50831Cu;
        goto label_50831c;
    }
    ctx->pc = 0x508314u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50831Cu);
        ctx->pc = 0x508318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x508314u;
            // 0x508318: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50831Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50831Cu; }
            if (ctx->pc != 0x50831Cu) { return; }
        }
        }
    }
    ctx->pc = 0x50831Cu;
label_50831c:
    // 0x50831c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x50831cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_508320:
    // 0x508320: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x508320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_508324:
    // 0x508324: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x508324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_508328:
    // 0x508328: 0xc054fd4  jal         func_153F50
label_50832c:
    if (ctx->pc == 0x50832Cu) {
        ctx->pc = 0x50832Cu;
            // 0x50832c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x508330u;
        goto label_508330;
    }
    ctx->pc = 0x508328u;
    SET_GPR_U32(ctx, 31, 0x508330u);
    ctx->pc = 0x50832Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x508328u;
            // 0x50832c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508330u; }
        if (ctx->pc != 0x508330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508330u; }
        if (ctx->pc != 0x508330u) { return; }
    }
    ctx->pc = 0x508330u;
label_508330:
    // 0x508330: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x508330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_508334:
    // 0x508334: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x508334u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_508338:
    // 0x508338: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x508338u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_50833c:
    // 0x50833c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x50833cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_508340:
    // 0x508340: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x508340u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_508344:
    // 0x508344: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x508344u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_508348:
    // 0x508348: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x508348u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_50834c:
    // 0x50834c: 0x3e00008  jr          $ra
label_508350:
    if (ctx->pc == 0x508350u) {
        ctx->pc = 0x508350u;
            // 0x508350: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x508354u;
        goto label_508354;
    }
    ctx->pc = 0x50834Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x508350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50834Cu;
            // 0x508350: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x508354u;
label_508354:
    // 0x508354: 0x0  nop
    ctx->pc = 0x508354u;
    // NOP
label_508358:
    // 0x508358: 0x0  nop
    ctx->pc = 0x508358u;
    // NOP
label_50835c:
    // 0x50835c: 0x0  nop
    ctx->pc = 0x50835cu;
    // NOP
label_508360:
    // 0x508360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x508360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_508364:
    // 0x508364: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x508364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_508368:
    // 0x508368: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x508368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_50836c:
    // 0x50836c: 0xc141068  jal         func_5041A0
label_508370:
    if (ctx->pc == 0x508370u) {
        ctx->pc = 0x508370u;
            // 0x508370: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x508374u;
        goto label_508374;
    }
    ctx->pc = 0x50836Cu;
    SET_GPR_U32(ctx, 31, 0x508374u);
    ctx->pc = 0x508370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50836Cu;
            // 0x508370: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5041A0u;
    if (runtime->hasFunction(0x5041A0u)) {
        auto targetFn = runtime->lookupFunction(0x5041A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508374u; }
        if (ctx->pc != 0x508374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005041A0_0x5041a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508374u; }
        if (ctx->pc != 0x508374u) { return; }
    }
    ctx->pc = 0x508374u;
label_508374:
    // 0x508374: 0xc0e3658  jal         func_38D960
label_508378:
    if (ctx->pc == 0x508378u) {
        ctx->pc = 0x508378u;
            // 0x508378: 0x260402b0  addiu       $a0, $s0, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
        ctx->pc = 0x50837Cu;
        goto label_50837c;
    }
    ctx->pc = 0x508374u;
    SET_GPR_U32(ctx, 31, 0x50837Cu);
    ctx->pc = 0x508378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x508374u;
            // 0x508378: 0x260402b0  addiu       $a0, $s0, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50837Cu; }
        if (ctx->pc != 0x50837Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50837Cu; }
        if (ctx->pc != 0x50837Cu) { return; }
    }
    ctx->pc = 0x50837Cu;
label_50837c:
    // 0x50837c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x50837cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_508380:
    // 0x508380: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x508380u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_508384:
    // 0x508384: 0x3e00008  jr          $ra
label_508388:
    if (ctx->pc == 0x508388u) {
        ctx->pc = 0x508388u;
            // 0x508388: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x50838Cu;
        goto label_50838c;
    }
    ctx->pc = 0x508384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x508388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x508384u;
            // 0x508388: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50838Cu;
label_50838c:
    // 0x50838c: 0x0  nop
    ctx->pc = 0x50838cu;
    // NOP
label_508390:
    // 0x508390: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x508390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_508394:
    // 0x508394: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x508394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_508398:
    // 0x508398: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x508398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_50839c:
    // 0x50839c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50839cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5083a0:
    // 0x5083a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x5083a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5083a4:
    // 0x5083a4: 0xc0ba938  jal         func_2EA4E0
label_5083a8:
    if (ctx->pc == 0x5083A8u) {
        ctx->pc = 0x5083A8u;
            // 0x5083a8: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x5083ACu;
        goto label_5083ac;
    }
    ctx->pc = 0x5083A4u;
    SET_GPR_U32(ctx, 31, 0x5083ACu);
    ctx->pc = 0x5083A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5083A4u;
            // 0x5083a8: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EA4E0u;
    if (runtime->hasFunction(0x2EA4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2EA4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5083ACu; }
        if (ctx->pc != 0x5083ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EA4E0_0x2ea4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5083ACu; }
        if (ctx->pc != 0x5083ACu) { return; }
    }
    ctx->pc = 0x5083ACu;
label_5083ac:
    // 0x5083ac: 0x8e0403b0  lw          $a0, 0x3B0($s0)
    ctx->pc = 0x5083acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
label_5083b0:
    // 0x5083b0: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x5083b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_5083b4:
    // 0x5083b4: 0xc122d2c  jal         func_48B4B0
label_5083b8:
    if (ctx->pc == 0x5083B8u) {
        ctx->pc = 0x5083B8u;
            // 0x5083b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x5083BCu;
        goto label_5083bc;
    }
    ctx->pc = 0x5083B4u;
    SET_GPR_U32(ctx, 31, 0x5083BCu);
    ctx->pc = 0x5083B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5083B4u;
            // 0x5083b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5083BCu; }
        if (ctx->pc != 0x5083BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5083BCu; }
        if (ctx->pc != 0x5083BCu) { return; }
    }
    ctx->pc = 0x5083BCu;
label_5083bc:
    // 0x5083bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5083bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_5083c0:
    // 0x5083c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5083c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5083c4:
    // 0x5083c4: 0x3e00008  jr          $ra
label_5083c8:
    if (ctx->pc == 0x5083C8u) {
        ctx->pc = 0x5083C8u;
            // 0x5083c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x5083CCu;
        goto label_5083cc;
    }
    ctx->pc = 0x5083C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5083C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5083C4u;
            // 0x5083c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5083CCu;
label_5083cc:
    // 0x5083cc: 0x0  nop
    ctx->pc = 0x5083ccu;
    // NOP
label_5083d0:
    // 0x5083d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x5083d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5083d4:
    // 0x5083d4: 0xa0820064  sb          $v0, 0x64($a0)
    ctx->pc = 0x5083d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 100), (uint8_t)GPR_U32(ctx, 2));
label_5083d8:
    // 0x5083d8: 0xa0820065  sb          $v0, 0x65($a0)
    ctx->pc = 0x5083d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 101), (uint8_t)GPR_U32(ctx, 2));
label_5083dc:
    // 0x5083dc: 0x8141ae4  j           func_506B90
label_5083e0:
    if (ctx->pc == 0x5083E0u) {
        ctx->pc = 0x5083E0u;
            // 0x5083e0: 0x248402b0  addiu       $a0, $a0, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 688));
        ctx->pc = 0x5083E4u;
        goto label_5083e4;
    }
    ctx->pc = 0x5083DCu;
    ctx->pc = 0x5083E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5083DCu;
            // 0x5083e0: 0x248402b0  addiu       $a0, $a0, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x506B90u;
    {
        auto targetFn = runtime->lookupFunction(0x506B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x5083E4u;
label_5083e4:
    // 0x5083e4: 0x0  nop
    ctx->pc = 0x5083e4u;
    // NOP
label_5083e8:
    // 0x5083e8: 0x0  nop
    ctx->pc = 0x5083e8u;
    // NOP
label_5083ec:
    // 0x5083ec: 0x0  nop
    ctx->pc = 0x5083ecu;
    // NOP
label_5083f0:
    // 0x5083f0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x5083f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_5083f4:
    // 0x5083f4: 0xa0820064  sb          $v0, 0x64($a0)
    ctx->pc = 0x5083f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 100), (uint8_t)GPR_U32(ctx, 2));
label_5083f8:
    // 0x5083f8: 0xa0800065  sb          $zero, 0x65($a0)
    ctx->pc = 0x5083f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 101), (uint8_t)GPR_U32(ctx, 0));
label_5083fc:
    // 0x5083fc: 0x8141ae0  j           func_506B80
label_508400:
    if (ctx->pc == 0x508400u) {
        ctx->pc = 0x508400u;
            // 0x508400: 0x248402b0  addiu       $a0, $a0, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 688));
        ctx->pc = 0x508404u;
        goto label_508404;
    }
    ctx->pc = 0x5083FCu;
    ctx->pc = 0x508400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5083FCu;
            // 0x508400: 0x248402b0  addiu       $a0, $a0, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x506B80u;
    {
        auto targetFn = runtime->lookupFunction(0x506B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x508404u;
label_508404:
    // 0x508404: 0x0  nop
    ctx->pc = 0x508404u;
    // NOP
label_508408:
    // 0x508408: 0x0  nop
    ctx->pc = 0x508408u;
    // NOP
label_50840c:
    // 0x50840c: 0x0  nop
    ctx->pc = 0x50840cu;
    // NOP
label_508410:
    // 0x508410: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x508410u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_508414:
    // 0x508414: 0x8c5902b0  lw          $t9, 0x2B0($v0)
    ctx->pc = 0x508414u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 688)));
label_508418:
    // 0x508418: 0x244402b0  addiu       $a0, $v0, 0x2B0
    ctx->pc = 0x508418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
label_50841c:
    // 0x50841c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x50841cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_508420:
    // 0x508420: 0x3200008  jr          $t9
label_508424:
    if (ctx->pc == 0x508424u) {
        ctx->pc = 0x508428u;
        goto label_508428;
    }
    ctx->pc = 0x508420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x508428u;
label_508428:
    // 0x508428: 0x0  nop
    ctx->pc = 0x508428u;
    // NOP
label_50842c:
    // 0x50842c: 0x0  nop
    ctx->pc = 0x50842cu;
    // NOP
label_508430:
    // 0x508430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x508430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_508434:
    // 0x508434: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x508434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_508438:
    // 0x508438: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x508438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_50843c:
    // 0x50843c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x50843cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_508440:
    // 0x508440: 0x8c8400a0  lw          $a0, 0xA0($a0)
    ctx->pc = 0x508440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_508444:
    // 0x508444: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_508448:
    if (ctx->pc == 0x508448u) {
        ctx->pc = 0x508448u;
            // 0x508448: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x50844Cu;
        goto label_50844c;
    }
    ctx->pc = 0x508444u;
    {
        const bool branch_taken_0x508444 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x508444) {
            ctx->pc = 0x508448u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x508444u;
            // 0x508448: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x508460u;
            goto label_508460;
        }
    }
    ctx->pc = 0x50844Cu;
label_50844c:
    // 0x50844c: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x50844cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_508450:
    // 0x508450: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x508450u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_508454:
    // 0x508454: 0x320f809  jalr        $t9
label_508458:
    if (ctx->pc == 0x508458u) {
        ctx->pc = 0x508458u;
            // 0x508458: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x50845Cu;
        goto label_50845c;
    }
    ctx->pc = 0x508454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50845Cu);
        ctx->pc = 0x508458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x508454u;
            // 0x508458: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50845Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50845Cu; }
            if (ctx->pc != 0x50845Cu) { return; }
        }
        }
    }
    ctx->pc = 0x50845Cu;
label_50845c:
    // 0x50845c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x50845cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_508460:
    // 0x508460: 0x8e0403b0  lw          $a0, 0x3B0($s0)
    ctx->pc = 0x508460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
label_508464:
    // 0x508464: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_508468:
    if (ctx->pc == 0x508468u) {
        ctx->pc = 0x508468u;
            // 0x508468: 0xae0003b0  sw          $zero, 0x3B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 944), GPR_U32(ctx, 0));
        ctx->pc = 0x50846Cu;
        goto label_50846c;
    }
    ctx->pc = 0x508464u;
    {
        const bool branch_taken_0x508464 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x508464) {
            ctx->pc = 0x508468u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x508464u;
            // 0x508468: 0xae0003b0  sw          $zero, 0x3B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 944), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x508480u;
            goto label_508480;
        }
    }
    ctx->pc = 0x50846Cu;
label_50846c:
    // 0x50846c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x50846cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_508470:
    // 0x508470: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x508470u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_508474:
    // 0x508474: 0x320f809  jalr        $t9
label_508478:
    if (ctx->pc == 0x508478u) {
        ctx->pc = 0x508478u;
            // 0x508478: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x50847Cu;
        goto label_50847c;
    }
    ctx->pc = 0x508474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50847Cu);
        ctx->pc = 0x508478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x508474u;
            // 0x508478: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50847Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50847Cu; }
            if (ctx->pc != 0x50847Cu) { return; }
        }
        }
    }
    ctx->pc = 0x50847Cu;
label_50847c:
    // 0x50847c: 0xae0003b0  sw          $zero, 0x3B0($s0)
    ctx->pc = 0x50847cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 944), GPR_U32(ctx, 0));
label_508480:
    // 0x508480: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x508480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_508484:
    // 0x508484: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_508488:
    if (ctx->pc == 0x508488u) {
        ctx->pc = 0x508488u;
            // 0x508488: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x50848Cu;
        goto label_50848c;
    }
    ctx->pc = 0x508484u;
    {
        const bool branch_taken_0x508484 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x508484) {
            ctx->pc = 0x508488u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x508484u;
            // 0x508488: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5084A0u;
            goto label_5084a0;
        }
    }
    ctx->pc = 0x50848Cu;
label_50848c:
    // 0x50848c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x50848cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_508490:
    // 0x508490: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x508490u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_508494:
    // 0x508494: 0x320f809  jalr        $t9
label_508498:
    if (ctx->pc == 0x508498u) {
        ctx->pc = 0x508498u;
            // 0x508498: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x50849Cu;
        goto label_50849c;
    }
    ctx->pc = 0x508494u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50849Cu);
        ctx->pc = 0x508498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x508494u;
            // 0x508498: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50849Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50849Cu; }
            if (ctx->pc != 0x50849Cu) { return; }
        }
        }
    }
    ctx->pc = 0x50849Cu;
label_50849c:
    // 0x50849c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x50849cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_5084a0:
    // 0x5084a0: 0x8e1902b0  lw          $t9, 0x2B0($s0)
    ctx->pc = 0x5084a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 688)));
label_5084a4:
    // 0x5084a4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x5084a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_5084a8:
    // 0x5084a8: 0x320f809  jalr        $t9
label_5084ac:
    if (ctx->pc == 0x5084ACu) {
        ctx->pc = 0x5084ACu;
            // 0x5084ac: 0x260402b0  addiu       $a0, $s0, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
        ctx->pc = 0x5084B0u;
        goto label_5084b0;
    }
    ctx->pc = 0x5084A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5084B0u);
        ctx->pc = 0x5084ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5084A8u;
            // 0x5084ac: 0x260402b0  addiu       $a0, $s0, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5084B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5084B0u; }
            if (ctx->pc != 0x5084B0u) { return; }
        }
        }
    }
    ctx->pc = 0x5084B0u;
label_5084b0:
    // 0x5084b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5084b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_5084b4:
    // 0x5084b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5084b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5084b8:
    // 0x5084b8: 0x3e00008  jr          $ra
label_5084bc:
    if (ctx->pc == 0x5084BCu) {
        ctx->pc = 0x5084BCu;
            // 0x5084bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x5084C0u;
        goto label_5084c0;
    }
    ctx->pc = 0x5084B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5084BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5084B8u;
            // 0x5084bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5084C0u;
label_5084c0:
    // 0x5084c0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x5084c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_5084c4:
    // 0x5084c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x5084c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_5084c8:
    // 0x5084c8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x5084c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_5084cc:
    // 0x5084cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x5084ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_5084d0:
    // 0x5084d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x5084d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5084d4:
    // 0x5084d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x5084d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_5084d8:
    // 0x5084d8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x5084d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_5084dc:
    // 0x5084dc: 0xc0892d0  jal         func_224B40
label_5084e0:
    if (ctx->pc == 0x5084E0u) {
        ctx->pc = 0x5084E0u;
            // 0x5084e0: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x5084E4u;
        goto label_5084e4;
    }
    ctx->pc = 0x5084DCu;
    SET_GPR_U32(ctx, 31, 0x5084E4u);
    ctx->pc = 0x5084E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5084DCu;
            // 0x5084e0: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5084E4u; }
        if (ctx->pc != 0x5084E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5084E4u; }
        if (ctx->pc != 0x5084E4u) { return; }
    }
    ctx->pc = 0x5084E4u;
label_5084e4:
    // 0x5084e4: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x5084e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_5084e8:
    // 0x5084e8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x5084e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_5084ec:
    // 0x5084ec: 0x8c42aaf8  lw          $v0, -0x5508($v0)
    ctx->pc = 0x5084ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945528)));
label_5084f0:
    // 0x5084f0: 0x8c500060  lw          $s0, 0x60($v0)
    ctx->pc = 0x5084f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_5084f4:
    // 0x5084f4: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x5084f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_5084f8:
    // 0x5084f8: 0xc0b6e68  jal         func_2DB9A0
label_5084fc:
    if (ctx->pc == 0x5084FCu) {
        ctx->pc = 0x5084FCu;
            // 0x5084fc: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
        ctx->pc = 0x508500u;
        goto label_508500;
    }
    ctx->pc = 0x5084F8u;
    SET_GPR_U32(ctx, 31, 0x508500u);
    ctx->pc = 0x5084FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5084F8u;
            // 0x5084fc: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508500u; }
        if (ctx->pc != 0x508500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508500u; }
        if (ctx->pc != 0x508500u) { return; }
    }
    ctx->pc = 0x508500u;
label_508500:
    // 0x508500: 0xc0b6dac  jal         func_2DB6B0
label_508504:
    if (ctx->pc == 0x508504u) {
        ctx->pc = 0x508504u;
            // 0x508504: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x508508u;
        goto label_508508;
    }
    ctx->pc = 0x508500u;
    SET_GPR_U32(ctx, 31, 0x508508u);
    ctx->pc = 0x508504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x508500u;
            // 0x508504: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508508u; }
        if (ctx->pc != 0x508508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508508u; }
        if (ctx->pc != 0x508508u) { return; }
    }
    ctx->pc = 0x508508u;
label_508508:
    // 0x508508: 0xc0cac94  jal         func_32B250
label_50850c:
    if (ctx->pc == 0x50850Cu) {
        ctx->pc = 0x50850Cu;
            // 0x50850c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x508510u;
        goto label_508510;
    }
    ctx->pc = 0x508508u;
    SET_GPR_U32(ctx, 31, 0x508510u);
    ctx->pc = 0x50850Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x508508u;
            // 0x50850c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508510u; }
        if (ctx->pc != 0x508510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508510u; }
        if (ctx->pc != 0x508510u) { return; }
    }
    ctx->pc = 0x508510u;
label_508510:
    // 0x508510: 0xc0cac84  jal         func_32B210
label_508514:
    if (ctx->pc == 0x508514u) {
        ctx->pc = 0x508514u;
            // 0x508514: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x508518u;
        goto label_508518;
    }
    ctx->pc = 0x508510u;
    SET_GPR_U32(ctx, 31, 0x508518u);
    ctx->pc = 0x508514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x508510u;
            // 0x508514: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508518u; }
        if (ctx->pc != 0x508518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508518u; }
        if (ctx->pc != 0x508518u) { return; }
    }
    ctx->pc = 0x508518u;
label_508518:
    // 0x508518: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x508518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_50851c:
    // 0x50851c: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x50851cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_508520:
    // 0x508520: 0xc44cc920  lwc1        $f12, -0x36E0($v0)
    ctx->pc = 0x508520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_508524:
    // 0x508524: 0xc0a5a68  jal         func_2969A0
label_508528:
    if (ctx->pc == 0x508528u) {
        ctx->pc = 0x508528u;
            // 0x508528: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x50852Cu;
        goto label_50852c;
    }
    ctx->pc = 0x508524u;
    SET_GPR_U32(ctx, 31, 0x50852Cu);
    ctx->pc = 0x508528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x508524u;
            // 0x508528: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50852Cu; }
        if (ctx->pc != 0x50852Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50852Cu; }
        if (ctx->pc != 0x50852Cu) { return; }
    }
    ctx->pc = 0x50852Cu;
label_50852c:
    // 0x50852c: 0xafb000d4  sw          $s0, 0xD4($sp)
    ctx->pc = 0x50852cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 16));
label_508530:
    // 0x508530: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x508530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_508534:
    // 0x508534: 0xc6280018  lwc1        $f8, 0x18($s1)
    ctx->pc = 0x508534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_508538:
    // 0x508538: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x508538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_50853c:
    // 0x50853c: 0xc6270014  lwc1        $f7, 0x14($s1)
    ctx->pc = 0x50853cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_508540:
    // 0x508540: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x508540u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_508544:
    // 0x508544: 0xc6260010  lwc1        $f6, 0x10($s1)
    ctx->pc = 0x508544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_508548:
    // 0x508548: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x508548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_50854c:
    // 0x50854c: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x50854cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_508550:
    // 0x508550: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x508550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_508554:
    // 0x508554: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x508554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_508558:
    // 0x508558: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x508558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50855c:
    // 0x50855c: 0xa3a40182  sb          $a0, 0x182($sp)
    ctx->pc = 0x50855cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 386), (uint8_t)GPR_U32(ctx, 4));
label_508560:
    // 0x508560: 0xe7a20128  swc1        $f2, 0x128($sp)
    ctx->pc = 0x508560u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_508564:
    // 0x508564: 0xa3a80180  sb          $t0, 0x180($sp)
    ctx->pc = 0x508564u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 8));
label_508568:
    // 0x508568: 0xe7a1012c  swc1        $f1, 0x12C($sp)
    ctx->pc = 0x508568u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_50856c:
    // 0x50856c: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x50856cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
label_508570:
    // 0x508570: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x508570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_508574:
    // 0x508574: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x508574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_508578:
    // 0x508578: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x508578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50857c:
    // 0x50857c: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x50857cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_508580:
    // 0x508580: 0xc454b0e8  lwc1        $f20, -0x4F18($v0)
    ctx->pc = 0x508580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294947048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_508584:
    // 0x508584: 0xe7a20134  swc1        $f2, 0x134($sp)
    ctx->pc = 0x508584u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_508588:
    // 0x508588: 0xe7a10138  swc1        $f1, 0x138($sp)
    ctx->pc = 0x508588u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_50858c:
    // 0x50858c: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x50858cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_508590:
    // 0x508590: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x508590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_508594:
    // 0x508594: 0xc445b0e8  lwc1        $f5, -0x4F18($v0)
    ctx->pc = 0x508594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294947048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_508598:
    // 0x508598: 0xc7a200c0  lwc1        $f2, 0xC0($sp)
    ctx->pc = 0x508598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_50859c:
    // 0x50859c: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x50859cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5085a0:
    // 0x5085a0: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x5085a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5085a4:
    // 0x5085a4: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x5085a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_5085a8:
    // 0x5085a8: 0x3447cccd  ori         $a3, $v0, 0xCCCD
    ctx->pc = 0x5085a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_5085ac:
    // 0x5085ac: 0xe7a20140  swc1        $f2, 0x140($sp)
    ctx->pc = 0x5085acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_5085b0:
    // 0x5085b0: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x5085b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_5085b4:
    // 0x5085b4: 0x34430180  ori         $v1, $v0, 0x180
    ctx->pc = 0x5085b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)384);
label_5085b8:
    // 0x5085b8: 0xafa7017c  sw          $a3, 0x17C($sp)
    ctx->pc = 0x5085b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 7));
label_5085bc:
    // 0x5085bc: 0xe7a10144  swc1        $f1, 0x144($sp)
    ctx->pc = 0x5085bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_5085c0:
    // 0x5085c0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5085c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5085c4:
    // 0x5085c4: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x5085c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_5085c8:
    // 0x5085c8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x5085c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_5085cc:
    // 0x5085cc: 0xc7a200cc  lwc1        $f2, 0xCC($sp)
    ctx->pc = 0x5085ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_5085d0:
    // 0x5085d0: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x5085d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
label_5085d4:
    // 0x5085d4: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x5085d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5085d8:
    // 0x5085d8: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x5085d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5085dc:
    // 0x5085dc: 0xe7a2014c  swc1        $f2, 0x14C($sp)
    ctx->pc = 0x5085dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_5085e0:
    // 0x5085e0: 0xe7a10150  swc1        $f1, 0x150($sp)
    ctx->pc = 0x5085e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_5085e4:
    // 0x5085e4: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x5085e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_5085e8:
    // 0x5085e8: 0xc7a400a0  lwc1        $f4, 0xA0($sp)
    ctx->pc = 0x5085e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_5085ec:
    // 0x5085ec: 0xc7a300a4  lwc1        $f3, 0xA4($sp)
    ctx->pc = 0x5085ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_5085f0:
    // 0x5085f0: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x5085f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_5085f4:
    // 0x5085f4: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x5085f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5085f8:
    // 0x5085f8: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x5085f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5085fc:
    // 0x5085fc: 0xe7a600e0  swc1        $f6, 0xE0($sp)
    ctx->pc = 0x5085fcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_508600:
    // 0x508600: 0xe7a700e4  swc1        $f7, 0xE4($sp)
    ctx->pc = 0x508600u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_508604:
    // 0x508604: 0xe7a800e8  swc1        $f8, 0xE8($sp)
    ctx->pc = 0x508604u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_508608:
    // 0x508608: 0xe7a50178  swc1        $f5, 0x178($sp)
    ctx->pc = 0x508608u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_50860c:
    // 0x50860c: 0xe7a40120  swc1        $f4, 0x120($sp)
    ctx->pc = 0x50860cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_508610:
    // 0x508610: 0xe7a30124  swc1        $f3, 0x124($sp)
    ctx->pc = 0x508610u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_508614:
    // 0x508614: 0xe7a20158  swc1        $f2, 0x158($sp)
    ctx->pc = 0x508614u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_508618:
    // 0x508618: 0xe7a1015c  swc1        $f1, 0x15C($sp)
    ctx->pc = 0x508618u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_50861c:
    // 0x50861c: 0xc0a7a88  jal         func_29EA20
label_508620:
    if (ctx->pc == 0x508620u) {
        ctx->pc = 0x508620u;
            // 0x508620: 0xe7a00160  swc1        $f0, 0x160($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
        ctx->pc = 0x508624u;
        goto label_508624;
    }
    ctx->pc = 0x50861Cu;
    SET_GPR_U32(ctx, 31, 0x508624u);
    ctx->pc = 0x508620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50861Cu;
            // 0x508620: 0xe7a00160  swc1        $f0, 0x160($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508624u; }
        if (ctx->pc != 0x508624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508624u; }
        if (ctx->pc != 0x508624u) { return; }
    }
    ctx->pc = 0x508624u;
label_508624:
    // 0x508624: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x508624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_508628:
    // 0x508628: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x508628u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50862c:
    // 0x50862c: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_508630:
    if (ctx->pc == 0x508630u) {
        ctx->pc = 0x508630u;
            // 0x508630: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x508634u;
        goto label_508634;
    }
    ctx->pc = 0x50862Cu;
    {
        const bool branch_taken_0x50862c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x508630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50862Cu;
            // 0x508630: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50862c) {
            ctx->pc = 0x50867Cu;
            goto label_50867c;
        }
    }
    ctx->pc = 0x508634u;
label_508634:
    // 0x508634: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x508634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_508638:
    // 0x508638: 0xc088ef4  jal         func_223BD0
label_50863c:
    if (ctx->pc == 0x50863Cu) {
        ctx->pc = 0x50863Cu;
            // 0x50863c: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x508640u;
        goto label_508640;
    }
    ctx->pc = 0x508638u;
    SET_GPR_U32(ctx, 31, 0x508640u);
    ctx->pc = 0x50863Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x508638u;
            // 0x50863c: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508640u; }
        if (ctx->pc != 0x508640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508640u; }
        if (ctx->pc != 0x508640u) { return; }
    }
    ctx->pc = 0x508640u;
label_508640:
    // 0x508640: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x508640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_508644:
    // 0x508644: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x508644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_508648:
    // 0x508648: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x508648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_50864c:
    // 0x50864c: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x50864cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_508650:
    // 0x508650: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x508650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_508654:
    // 0x508654: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x508654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_508658:
    // 0x508658: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x508658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_50865c:
    // 0x50865c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x50865cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_508660:
    // 0x508660: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x508660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_508664:
    // 0x508664: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x508664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_508668:
    // 0x508668: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x508668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_50866c:
    // 0x50866c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x50866cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_508670:
    // 0x508670: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x508670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_508674:
    // 0x508674: 0xc088b38  jal         func_222CE0
label_508678:
    if (ctx->pc == 0x508678u) {
        ctx->pc = 0x508678u;
            // 0x508678: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50867Cu;
        goto label_50867c;
    }
    ctx->pc = 0x508674u;
    SET_GPR_U32(ctx, 31, 0x50867Cu);
    ctx->pc = 0x508678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x508674u;
            // 0x508678: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50867Cu; }
        if (ctx->pc != 0x50867Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50867Cu; }
        if (ctx->pc != 0x50867Cu) { return; }
    }
    ctx->pc = 0x50867Cu;
label_50867c:
    // 0x50867c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x50867cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_508680:
    // 0x508680: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x508680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_508684:
    // 0x508684: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x508684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_508688:
    // 0x508688: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x508688u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50868c:
    // 0x50868c: 0xc08914c  jal         func_224530
label_508690:
    if (ctx->pc == 0x508690u) {
        ctx->pc = 0x508690u;
            // 0x508690: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->pc = 0x508694u;
        goto label_508694;
    }
    ctx->pc = 0x50868Cu;
    SET_GPR_U32(ctx, 31, 0x508694u);
    ctx->pc = 0x508690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50868Cu;
            // 0x508690: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508694u; }
        if (ctx->pc != 0x508694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508694u; }
        if (ctx->pc != 0x508694u) { return; }
    }
    ctx->pc = 0x508694u;
label_508694:
    // 0x508694: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x508694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_508698:
    // 0x508698: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x508698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_50869c:
    // 0x50869c: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x50869cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5086a0:
    // 0x5086a0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x5086a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_5086a4:
    // 0x5086a4: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x5086a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5086a8:
    // 0x5086a8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x5086a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_5086ac:
    // 0x5086ac: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x5086acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_5086b0:
    // 0x5086b0: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x5086b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_5086b4:
    // 0x5086b4: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x5086b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_5086b8:
    // 0x5086b8: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x5086b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_5086bc:
    // 0x5086bc: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x5086bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_5086c0:
    // 0x5086c0: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x5086c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_5086c4:
    // 0x5086c4: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x5086c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5086c8:
    // 0x5086c8: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x5086c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5086cc:
    // 0x5086cc: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x5086ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_5086d0:
    // 0x5086d0: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x5086d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_5086d4:
    // 0x5086d4: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x5086d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_5086d8:
    // 0x5086d8: 0xc0892b0  jal         func_224AC0
label_5086dc:
    if (ctx->pc == 0x5086DCu) {
        ctx->pc = 0x5086DCu;
            // 0x5086dc: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->pc = 0x5086E0u;
        goto label_5086e0;
    }
    ctx->pc = 0x5086D8u;
    SET_GPR_U32(ctx, 31, 0x5086E0u);
    ctx->pc = 0x5086DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5086D8u;
            // 0x5086dc: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5086E0u; }
        if (ctx->pc != 0x5086E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5086E0u; }
        if (ctx->pc != 0x5086E0u) { return; }
    }
    ctx->pc = 0x5086E0u;
label_5086e0:
    // 0x5086e0: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x5086e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_5086e4:
    // 0x5086e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5086e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5086e8:
    // 0x5086e8: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x5086e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
label_5086ec:
    // 0x5086ec: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x5086ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_5086f0:
    // 0x5086f0: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x5086f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_5086f4:
    // 0x5086f4: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x5086f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_5086f8:
    // 0x5086f8: 0xc0891d8  jal         func_224760
label_5086fc:
    if (ctx->pc == 0x5086FCu) {
        ctx->pc = 0x5086FCu;
            // 0x5086fc: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->pc = 0x508700u;
        goto label_508700;
    }
    ctx->pc = 0x5086F8u;
    SET_GPR_U32(ctx, 31, 0x508700u);
    ctx->pc = 0x5086FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5086F8u;
            // 0x5086fc: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508700u; }
        if (ctx->pc != 0x508700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508700u; }
        if (ctx->pc != 0x508700u) { return; }
    }
    ctx->pc = 0x508700u;
label_508700:
    // 0x508700: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x508700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_508704:
    // 0x508704: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x508704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_508708:
    // 0x508708: 0xc460b0e0  lwc1        $f0, -0x4F20($v1)
    ctx->pc = 0x508708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294947040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50870c:
    // 0x50870c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x50870cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_508710:
    // 0x508710: 0xe6000154  swc1        $f0, 0x154($s0)
    ctx->pc = 0x508710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 340), bits); }
label_508714:
    // 0x508714: 0xe6140158  swc1        $f20, 0x158($s0)
    ctx->pc = 0x508714u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 344), bits); }
label_508718:
    // 0x508718: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x508718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_50871c:
    // 0x50871c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x50871cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_508720:
    // 0x508720: 0xc08c164  jal         func_230590
label_508724:
    if (ctx->pc == 0x508724u) {
        ctx->pc = 0x508724u;
            // 0x508724: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x508728u;
        goto label_508728;
    }
    ctx->pc = 0x508720u;
    SET_GPR_U32(ctx, 31, 0x508728u);
    ctx->pc = 0x508724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x508720u;
            // 0x508724: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508728u; }
        if (ctx->pc != 0x508728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508728u; }
        if (ctx->pc != 0x508728u) { return; }
    }
    ctx->pc = 0x508728u;
label_508728:
    // 0x508728: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x508728u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_50872c:
    // 0x50872c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x50872cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_508730:
    // 0x508730: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x508730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_508734:
    // 0x508734: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x508734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_508738:
    // 0x508738: 0xc0a7a88  jal         func_29EA20
label_50873c:
    if (ctx->pc == 0x50873Cu) {
        ctx->pc = 0x50873Cu;
            // 0x50873c: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x508740u;
        goto label_508740;
    }
    ctx->pc = 0x508738u;
    SET_GPR_U32(ctx, 31, 0x508740u);
    ctx->pc = 0x50873Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x508738u;
            // 0x50873c: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508740u; }
        if (ctx->pc != 0x508740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508740u; }
        if (ctx->pc != 0x508740u) { return; }
    }
    ctx->pc = 0x508740u;
label_508740:
    // 0x508740: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x508740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_508744:
    // 0x508744: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x508744u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_508748:
    // 0x508748: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_50874c:
    if (ctx->pc == 0x50874Cu) {
        ctx->pc = 0x50874Cu;
            // 0x50874c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x508750u;
        goto label_508750;
    }
    ctx->pc = 0x508748u;
    {
        const bool branch_taken_0x508748 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x50874Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x508748u;
            // 0x50874c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x508748) {
            ctx->pc = 0x50876Cu;
            goto label_50876c;
        }
    }
    ctx->pc = 0x508750u;
label_508750:
    // 0x508750: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x508750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_508754:
    // 0x508754: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x508754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_508758:
    // 0x508758: 0xc0869d0  jal         func_21A740
label_50875c:
    if (ctx->pc == 0x50875Cu) {
        ctx->pc = 0x50875Cu;
            // 0x50875c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x508760u;
        goto label_508760;
    }
    ctx->pc = 0x508758u;
    SET_GPR_U32(ctx, 31, 0x508760u);
    ctx->pc = 0x50875Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x508758u;
            // 0x50875c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508760u; }
        if (ctx->pc != 0x508760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508760u; }
        if (ctx->pc != 0x508760u) { return; }
    }
    ctx->pc = 0x508760u;
label_508760:
    // 0x508760: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x508760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_508764:
    // 0x508764: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x508764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_508768:
    // 0x508768: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x508768u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_50876c:
    // 0x50876c: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x50876cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_508770:
    // 0x508770: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x508770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_508774:
    // 0x508774: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x508774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_508778:
    // 0x508778: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x508778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_50877c:
    // 0x50877c: 0xc08c650  jal         func_231940
label_508780:
    if (ctx->pc == 0x508780u) {
        ctx->pc = 0x508780u;
            // 0x508780: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x508784u;
        goto label_508784;
    }
    ctx->pc = 0x50877Cu;
    SET_GPR_U32(ctx, 31, 0x508784u);
    ctx->pc = 0x508780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50877Cu;
            // 0x508780: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508784u; }
        if (ctx->pc != 0x508784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508784u; }
        if (ctx->pc != 0x508784u) { return; }
    }
    ctx->pc = 0x508784u;
label_508784:
    // 0x508784: 0xc040180  jal         func_100600
label_508788:
    if (ctx->pc == 0x508788u) {
        ctx->pc = 0x508788u;
            // 0x508788: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x50878Cu;
        goto label_50878c;
    }
    ctx->pc = 0x508784u;
    SET_GPR_U32(ctx, 31, 0x50878Cu);
    ctx->pc = 0x508788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x508784u;
            // 0x508788: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50878Cu; }
        if (ctx->pc != 0x50878Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50878Cu; }
        if (ctx->pc != 0x50878Cu) { return; }
    }
    ctx->pc = 0x50878Cu;
label_50878c:
    // 0x50878c: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_508790:
    if (ctx->pc == 0x508790u) {
        ctx->pc = 0x508790u;
            // 0x508790: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x508794u;
        goto label_508794;
    }
    ctx->pc = 0x50878Cu;
    {
        const bool branch_taken_0x50878c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x50878c) {
            ctx->pc = 0x508790u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50878Cu;
            // 0x508790: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5087DCu;
            goto label_5087dc;
        }
    }
    ctx->pc = 0x508794u;
label_508794:
    // 0x508794: 0x8e260050  lw          $a2, 0x50($s1)
    ctx->pc = 0x508794u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_508798:
    // 0x508798: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x508798u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_50879c:
    // 0x50879c: 0x24a521e0  addiu       $a1, $a1, 0x21E0
    ctx->pc = 0x50879cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8672));
label_5087a0:
    // 0x5087a0: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x5087a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_5087a4:
    // 0x5087a4: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x5087a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_5087a8:
    // 0x5087a8: 0x2463b360  addiu       $v1, $v1, -0x4CA0
    ctx->pc = 0x5087a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947680));
label_5087ac:
    // 0x5087ac: 0xac450048  sw          $a1, 0x48($v0)
    ctx->pc = 0x5087acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 5));
label_5087b0:
    // 0x5087b0: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x5087b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_5087b4:
    // 0x5087b4: 0xac460024  sw          $a2, 0x24($v0)
    ctx->pc = 0x5087b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
label_5087b8:
    // 0x5087b8: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x5087b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
label_5087bc:
    // 0x5087bc: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x5087bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_5087c0:
    // 0x5087c0: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x5087c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_5087c4:
    // 0x5087c4: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x5087c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_5087c8:
    // 0x5087c8: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x5087c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_5087cc:
    // 0x5087cc: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x5087ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_5087d0:
    // 0x5087d0: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x5087d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_5087d4:
    // 0x5087d4: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x5087d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_5087d8:
    // 0x5087d8: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x5087d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
label_5087dc:
    // 0x5087dc: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x5087dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_5087e0:
    // 0x5087e0: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x5087e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_5087e4:
    // 0x5087e4: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x5087e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_5087e8:
    // 0x5087e8: 0x3c074416  lui         $a3, 0x4416
    ctx->pc = 0x5087e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17430 << 16));
label_5087ec:
    // 0x5087ec: 0x3c064396  lui         $a2, 0x4396
    ctx->pc = 0x5087ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17302 << 16));
label_5087f0:
    // 0x5087f0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x5087f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_5087f4:
    // 0x5087f4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x5087f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_5087f8:
    // 0x5087f8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x5087f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_5087fc:
    // 0x5087fc: 0x34890004  ori         $t1, $a0, 0x4
    ctx->pc = 0x5087fcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
label_508800:
    // 0x508800: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x508800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_508804:
    // 0x508804: 0xae2900b0  sw          $t1, 0xB0($s1)
    ctx->pc = 0x508804u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 9));
label_508808:
    // 0x508808: 0xae28008c  sw          $t0, 0x8C($s1)
    ctx->pc = 0x508808u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 8));
label_50880c:
    // 0x50880c: 0xae270070  sw          $a3, 0x70($s1)
    ctx->pc = 0x50880cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 7));
label_508810:
    // 0x508810: 0xae270078  sw          $a3, 0x78($s1)
    ctx->pc = 0x508810u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 7));
label_508814:
    // 0x508814: 0xae260080  sw          $a2, 0x80($s1)
    ctx->pc = 0x508814u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 6));
label_508818:
    // 0x508818: 0xa2250064  sb          $a1, 0x64($s1)
    ctx->pc = 0x508818u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 100), (uint8_t)GPR_U32(ctx, 5));
label_50881c:
    // 0x50881c: 0xa2200065  sb          $zero, 0x65($s1)
    ctx->pc = 0x50881cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 101), (uint8_t)GPR_U32(ctx, 0));
label_508820:
    // 0x508820: 0xa2230066  sb          $v1, 0x66($s1)
    ctx->pc = 0x508820u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 102), (uint8_t)GPR_U32(ctx, 3));
label_508824:
    // 0x508824: 0xa2220067  sb          $v0, 0x67($s1)
    ctx->pc = 0x508824u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 103), (uint8_t)GPR_U32(ctx, 2));
label_508828:
    // 0x508828: 0xa2200068  sb          $zero, 0x68($s1)
    ctx->pc = 0x508828u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 104), (uint8_t)GPR_U32(ctx, 0));
label_50882c:
    // 0x50882c: 0xa2280069  sb          $t0, 0x69($s1)
    ctx->pc = 0x50882cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 105), (uint8_t)GPR_U32(ctx, 8));
label_508830:
    // 0x508830: 0x8e3902b0  lw          $t9, 0x2B0($s1)
    ctx->pc = 0x508830u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_508834:
    // 0x508834: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x508834u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_508838:
    // 0x508838: 0x320f809  jalr        $t9
label_50883c:
    if (ctx->pc == 0x50883Cu) {
        ctx->pc = 0x50883Cu;
            // 0x50883c: 0x262402b0  addiu       $a0, $s1, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 688));
        ctx->pc = 0x508840u;
        goto label_508840;
    }
    ctx->pc = 0x508838u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x508840u);
        ctx->pc = 0x50883Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x508838u;
            // 0x50883c: 0x262402b0  addiu       $a0, $s1, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 688));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x508840u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x508840u; }
            if (ctx->pc != 0x508840u) { return; }
        }
        }
    }
    ctx->pc = 0x508840u;
label_508840:
    // 0x508840: 0xc040180  jal         func_100600
label_508844:
    if (ctx->pc == 0x508844u) {
        ctx->pc = 0x508844u;
            // 0x508844: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x508848u;
        goto label_508848;
    }
    ctx->pc = 0x508840u;
    SET_GPR_U32(ctx, 31, 0x508848u);
    ctx->pc = 0x508844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x508840u;
            // 0x508844: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508848u; }
        if (ctx->pc != 0x508848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508848u; }
        if (ctx->pc != 0x508848u) { return; }
    }
    ctx->pc = 0x508848u;
label_508848:
    // 0x508848: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x508848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50884c:
    // 0x50884c: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_508850:
    if (ctx->pc == 0x508850u) {
        ctx->pc = 0x508850u;
            // 0x508850: 0x3c0246af  lui         $v0, 0x46AF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18095 << 16));
        ctx->pc = 0x508854u;
        goto label_508854;
    }
    ctx->pc = 0x50884Cu;
    {
        const bool branch_taken_0x50884c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x50884c) {
            ctx->pc = 0x508850u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50884Cu;
            // 0x508850: 0x3c0246af  lui         $v0, 0x46AF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18095 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50888Cu;
            goto label_50888c;
        }
    }
    ctx->pc = 0x508854u;
label_508854:
    // 0x508854: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x508854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_508858:
    // 0x508858: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x508858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_50885c:
    // 0x50885c: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x50885cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_508860:
    // 0x508860: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x508860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_508864:
    // 0x508864: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x508864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_508868:
    // 0x508868: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x508868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_50886c:
    // 0x50886c: 0xc040138  jal         func_1004E0
label_508870:
    if (ctx->pc == 0x508870u) {
        ctx->pc = 0x508870u;
            // 0x508870: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x508874u;
        goto label_508874;
    }
    ctx->pc = 0x50886Cu;
    SET_GPR_U32(ctx, 31, 0x508874u);
    ctx->pc = 0x508870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50886Cu;
            // 0x508870: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508874u; }
        if (ctx->pc != 0x508874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508874u; }
        if (ctx->pc != 0x508874u) { return; }
    }
    ctx->pc = 0x508874u;
label_508874:
    // 0x508874: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x508874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_508878:
    // 0x508878: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x508878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_50887c:
    // 0x50887c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x50887cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_508880:
    // 0x508880: 0xc04a576  jal         func_1295D8
label_508884:
    if (ctx->pc == 0x508884u) {
        ctx->pc = 0x508884u;
            // 0x508884: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x508888u;
        goto label_508888;
    }
    ctx->pc = 0x508880u;
    SET_GPR_U32(ctx, 31, 0x508888u);
    ctx->pc = 0x508884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x508880u;
            // 0x508884: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508888u; }
        if (ctx->pc != 0x508888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508888u; }
        if (ctx->pc != 0x508888u) { return; }
    }
    ctx->pc = 0x508888u;
label_508888:
    // 0x508888: 0x3c0246af  lui         $v0, 0x46AF
    ctx->pc = 0x508888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18095 << 16));
label_50888c:
    // 0x50888c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x50888cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_508890:
    // 0x508890: 0x3443c800  ori         $v1, $v0, 0xC800
    ctx->pc = 0x508890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51200);
label_508894:
    // 0x508894: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x508894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_508898:
    // 0x508898: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x508898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_50889c:
    // 0x50889c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x50889cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5088a0:
    // 0x5088a0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x5088a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_5088a4:
    // 0x5088a4: 0xae3003b0  sw          $s0, 0x3B0($s1)
    ctx->pc = 0x5088a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 944), GPR_U32(ctx, 16));
label_5088a8:
    // 0x5088a8: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x5088a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_5088ac:
    // 0x5088ac: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x5088acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_5088b0:
    // 0x5088b0: 0xc122cd8  jal         func_48B360
label_5088b4:
    if (ctx->pc == 0x5088B4u) {
        ctx->pc = 0x5088B4u;
            // 0x5088b4: 0x344611ae  ori         $a2, $v0, 0x11AE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4526);
        ctx->pc = 0x5088B8u;
        goto label_5088b8;
    }
    ctx->pc = 0x5088B0u;
    SET_GPR_U32(ctx, 31, 0x5088B8u);
    ctx->pc = 0x5088B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5088B0u;
            // 0x5088b4: 0x344611ae  ori         $a2, $v0, 0x11AE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4526);
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5088B8u; }
        if (ctx->pc != 0x5088B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5088B8u; }
        if (ctx->pc != 0x5088B8u) { return; }
    }
    ctx->pc = 0x5088B8u;
label_5088b8:
    // 0x5088b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x5088b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_5088bc:
    // 0x5088bc: 0x3c0346af  lui         $v1, 0x46AF
    ctx->pc = 0x5088bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18095 << 16));
label_5088c0:
    // 0x5088c0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x5088c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_5088c4:
    // 0x5088c4: 0x3463c800  ori         $v1, $v1, 0xC800
    ctx->pc = 0x5088c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51200);
label_5088c8:
    // 0x5088c8: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x5088c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_5088cc:
    // 0x5088cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5088ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5088d0:
    // 0x5088d0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x5088d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_5088d4:
    // 0x5088d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x5088d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5088d8:
    // 0x5088d8: 0x344611ae  ori         $a2, $v0, 0x11AE
    ctx->pc = 0x5088d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4526);
label_5088dc:
    // 0x5088dc: 0xc122cd8  jal         func_48B360
label_5088e0:
    if (ctx->pc == 0x5088E0u) {
        ctx->pc = 0x5088E0u;
            // 0x5088e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5088E4u;
        goto label_5088e4;
    }
    ctx->pc = 0x5088DCu;
    SET_GPR_U32(ctx, 31, 0x5088E4u);
    ctx->pc = 0x5088E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5088DCu;
            // 0x5088e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5088E4u; }
        if (ctx->pc != 0x5088E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5088E4u; }
        if (ctx->pc != 0x5088E4u) { return; }
    }
    ctx->pc = 0x5088E4u;
label_5088e4:
    // 0x5088e4: 0x3c0246af  lui         $v0, 0x46AF
    ctx->pc = 0x5088e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18095 << 16));
label_5088e8:
    // 0x5088e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5088e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5088ec:
    // 0x5088ec: 0x3443c800  ori         $v1, $v0, 0xC800
    ctx->pc = 0x5088ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51200);
label_5088f0:
    // 0x5088f0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x5088f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_5088f4:
    // 0x5088f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x5088f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_5088f8:
    // 0x5088f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x5088f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5088fc:
    // 0x5088fc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x5088fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_508900:
    // 0x508900: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x508900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_508904:
    // 0x508904: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x508904u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_508908:
    // 0x508908: 0xc122cd8  jal         func_48B360
label_50890c:
    if (ctx->pc == 0x50890Cu) {
        ctx->pc = 0x50890Cu;
            // 0x50890c: 0x344601ae  ori         $a2, $v0, 0x1AE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)430);
        ctx->pc = 0x508910u;
        goto label_508910;
    }
    ctx->pc = 0x508908u;
    SET_GPR_U32(ctx, 31, 0x508910u);
    ctx->pc = 0x50890Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x508908u;
            // 0x50890c: 0x344601ae  ori         $a2, $v0, 0x1AE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)430);
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508910u; }
        if (ctx->pc != 0x508910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508910u; }
        if (ctx->pc != 0x508910u) { return; }
    }
    ctx->pc = 0x508910u;
label_508910:
    // 0x508910: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x508910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_508914:
    // 0x508914: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x508914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_508918:
    // 0x508918: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x508918u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_50891c:
    // 0x50891c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x50891cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_508920:
    // 0x508920: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x508920u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_508924:
    // 0x508924: 0x3e00008  jr          $ra
label_508928:
    if (ctx->pc == 0x508928u) {
        ctx->pc = 0x508928u;
            // 0x508928: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x50892Cu;
        goto label_50892c;
    }
    ctx->pc = 0x508924u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x508928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x508924u;
            // 0x508928: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50892Cu;
label_50892c:
    // 0x50892c: 0x0  nop
    ctx->pc = 0x50892cu;
    // NOP
label_508930:
    // 0x508930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x508930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_508934:
    // 0x508934: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x508934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_508938:
    // 0x508938: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x508938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_50893c:
    // 0x50893c: 0xc1410c4  jal         func_504310
label_508940:
    if (ctx->pc == 0x508940u) {
        ctx->pc = 0x508940u;
            // 0x508940: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x508944u;
        goto label_508944;
    }
    ctx->pc = 0x50893Cu;
    SET_GPR_U32(ctx, 31, 0x508944u);
    ctx->pc = 0x508940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50893Cu;
            // 0x508940: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x504310u;
    if (runtime->hasFunction(0x504310u)) {
        auto targetFn = runtime->lookupFunction(0x504310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508944u; }
        if (ctx->pc != 0x508944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00504310_0x504310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508944u; }
        if (ctx->pc != 0x508944u) { return; }
    }
    ctx->pc = 0x508944u;
label_508944:
    // 0x508944: 0xc145ed8  jal         func_517B60
label_508948:
    if (ctx->pc == 0x508948u) {
        ctx->pc = 0x508948u;
            // 0x508948: 0x260400e0  addiu       $a0, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->pc = 0x50894Cu;
        goto label_50894c;
    }
    ctx->pc = 0x508944u;
    SET_GPR_U32(ctx, 31, 0x50894Cu);
    ctx->pc = 0x508948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x508944u;
            // 0x508948: 0x260400e0  addiu       $a0, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x517B60u;
    if (runtime->hasFunction(0x517B60u)) {
        auto targetFn = runtime->lookupFunction(0x517B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50894Cu; }
        if (ctx->pc != 0x50894Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00517B60_0x517b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50894Cu; }
        if (ctx->pc != 0x50894Cu) { return; }
    }
    ctx->pc = 0x50894Cu;
label_50894c:
    // 0x50894c: 0x8e1902b0  lw          $t9, 0x2B0($s0)
    ctx->pc = 0x50894cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 688)));
label_508950:
    // 0x508950: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x508950u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_508954:
    // 0x508954: 0x320f809  jalr        $t9
label_508958:
    if (ctx->pc == 0x508958u) {
        ctx->pc = 0x508958u;
            // 0x508958: 0x260402b0  addiu       $a0, $s0, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
        ctx->pc = 0x50895Cu;
        goto label_50895c;
    }
    ctx->pc = 0x508954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50895Cu);
        ctx->pc = 0x508958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x508954u;
            // 0x508958: 0x260402b0  addiu       $a0, $s0, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50895Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50895Cu; }
            if (ctx->pc != 0x50895Cu) { return; }
        }
        }
    }
    ctx->pc = 0x50895Cu;
label_50895c:
    // 0x50895c: 0xc122c94  jal         func_48B250
label_508960:
    if (ctx->pc == 0x508960u) {
        ctx->pc = 0x508960u;
            // 0x508960: 0x8e0403b0  lw          $a0, 0x3B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
        ctx->pc = 0x508964u;
        goto label_508964;
    }
    ctx->pc = 0x50895Cu;
    SET_GPR_U32(ctx, 31, 0x508964u);
    ctx->pc = 0x508960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50895Cu;
            // 0x508960: 0x8e0403b0  lw          $a0, 0x3B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B250u;
    if (runtime->hasFunction(0x48B250u)) {
        auto targetFn = runtime->lookupFunction(0x48B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508964u; }
        if (ctx->pc != 0x508964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B250_0x48b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508964u; }
        if (ctx->pc != 0x508964u) { return; }
    }
    ctx->pc = 0x508964u;
label_508964:
    // 0x508964: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x508964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_508968:
    // 0x508968: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x508968u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_50896c:
    // 0x50896c: 0x3e00008  jr          $ra
label_508970:
    if (ctx->pc == 0x508970u) {
        ctx->pc = 0x508970u;
            // 0x508970: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x508974u;
        goto label_508974;
    }
    ctx->pc = 0x50896Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x508970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50896Cu;
            // 0x508970: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x508974u;
label_508974:
    // 0x508974: 0x0  nop
    ctx->pc = 0x508974u;
    // NOP
label_508978:
    // 0x508978: 0x0  nop
    ctx->pc = 0x508978u;
    // NOP
label_50897c:
    // 0x50897c: 0x0  nop
    ctx->pc = 0x50897cu;
    // NOP
label_508980:
    // 0x508980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x508980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_508984:
    // 0x508984: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x508984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_508988:
    // 0x508988: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x508988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_50898c:
    // 0x50898c: 0xc1410c4  jal         func_504310
label_508990:
    if (ctx->pc == 0x508990u) {
        ctx->pc = 0x508990u;
            // 0x508990: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x508994u;
        goto label_508994;
    }
    ctx->pc = 0x50898Cu;
    SET_GPR_U32(ctx, 31, 0x508994u);
    ctx->pc = 0x508990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50898Cu;
            // 0x508990: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x504310u;
    if (runtime->hasFunction(0x504310u)) {
        auto targetFn = runtime->lookupFunction(0x504310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508994u; }
        if (ctx->pc != 0x508994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00504310_0x504310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508994u; }
        if (ctx->pc != 0x508994u) { return; }
    }
    ctx->pc = 0x508994u;
label_508994:
    // 0x508994: 0x8e1902b0  lw          $t9, 0x2B0($s0)
    ctx->pc = 0x508994u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 688)));
label_508998:
    // 0x508998: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x508998u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_50899c:
    // 0x50899c: 0x320f809  jalr        $t9
label_5089a0:
    if (ctx->pc == 0x5089A0u) {
        ctx->pc = 0x5089A0u;
            // 0x5089a0: 0x260402b0  addiu       $a0, $s0, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
        ctx->pc = 0x5089A4u;
        goto label_5089a4;
    }
    ctx->pc = 0x50899Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5089A4u);
        ctx->pc = 0x5089A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50899Cu;
            // 0x5089a0: 0x260402b0  addiu       $a0, $s0, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5089A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5089A4u; }
            if (ctx->pc != 0x5089A4u) { return; }
        }
        }
    }
    ctx->pc = 0x5089A4u;
label_5089a4:
    // 0x5089a4: 0xc122c94  jal         func_48B250
label_5089a8:
    if (ctx->pc == 0x5089A8u) {
        ctx->pc = 0x5089A8u;
            // 0x5089a8: 0x8e0403b0  lw          $a0, 0x3B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
        ctx->pc = 0x5089ACu;
        goto label_5089ac;
    }
    ctx->pc = 0x5089A4u;
    SET_GPR_U32(ctx, 31, 0x5089ACu);
    ctx->pc = 0x5089A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5089A4u;
            // 0x5089a8: 0x8e0403b0  lw          $a0, 0x3B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B250u;
    if (runtime->hasFunction(0x48B250u)) {
        auto targetFn = runtime->lookupFunction(0x48B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5089ACu; }
        if (ctx->pc != 0x5089ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B250_0x48b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5089ACu; }
        if (ctx->pc != 0x5089ACu) { return; }
    }
    ctx->pc = 0x5089ACu;
label_5089ac:
    // 0x5089ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5089acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_5089b0:
    // 0x5089b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5089b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5089b4:
    // 0x5089b4: 0x3e00008  jr          $ra
label_5089b8:
    if (ctx->pc == 0x5089B8u) {
        ctx->pc = 0x5089B8u;
            // 0x5089b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x5089BCu;
        goto label_5089bc;
    }
    ctx->pc = 0x5089B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5089B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5089B4u;
            // 0x5089b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5089BCu;
label_5089bc:
    // 0x5089bc: 0x0  nop
    ctx->pc = 0x5089bcu;
    // NOP
label_5089c0:
    // 0x5089c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x5089c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_5089c4:
    // 0x5089c4: 0x3c034118  lui         $v1, 0x4118
    ctx->pc = 0x5089c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16664 << 16));
label_5089c8:
    // 0x5089c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x5089c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_5089cc:
    // 0x5089cc: 0x3c024019  lui         $v0, 0x4019
    ctx->pc = 0x5089ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16409 << 16));
label_5089d0:
    // 0x5089d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5089d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5089d4:
    // 0x5089d4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x5089d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_5089d8:
    // 0x5089d8: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x5089d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5089dc:
    // 0x5089dc: 0x90850040  lbu         $a1, 0x40($a0)
    ctx->pc = 0x5089dcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 64)));
label_5089e0:
    // 0x5089e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x5089e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5089e4:
    // 0x5089e4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x5089e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_5089e8:
    // 0x5089e8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x5089e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_5089ec:
    // 0x5089ec: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x5089ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
label_5089f0:
    // 0x5089f0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x5089f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_5089f4:
    // 0x5089f4: 0x0  nop
    ctx->pc = 0x5089f4u;
    // NOP
label_5089f8:
    // 0x5089f8: 0x3363c  dsll32      $a2, $v1, 24
    ctx->pc = 0x5089f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 24));
label_5089fc:
    // 0x5089fc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x5089fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_508a00:
    // 0x508a00: 0xc145ef4  jal         func_517BD0
label_508a04:
    if (ctx->pc == 0x508A04u) {
        ctx->pc = 0x508A04u;
            // 0x508a04: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
        ctx->pc = 0x508A08u;
        goto label_508a08;
    }
    ctx->pc = 0x508A00u;
    SET_GPR_U32(ctx, 31, 0x508A08u);
    ctx->pc = 0x508A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x508A00u;
            // 0x508a04: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x517BD0u;
    if (runtime->hasFunction(0x517BD0u)) {
        auto targetFn = runtime->lookupFunction(0x517BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508A08u; }
        if (ctx->pc != 0x508A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00517BD0_0x517bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508A08u; }
        if (ctx->pc != 0x508A08u) { return; }
    }
    ctx->pc = 0x508A08u;
label_508a08:
    // 0x508a08: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x508a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_508a0c:
    // 0x508a0c: 0x3c044270  lui         $a0, 0x4270
    ctx->pc = 0x508a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17008 << 16));
label_508a10:
    // 0x508a10: 0xa20300cc  sb          $v1, 0xCC($s0)
    ctx->pc = 0x508a10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 3));
label_508a14:
    // 0x508a14: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x508a14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
label_508a18:
    // 0x508a18: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x508a18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_508a1c:
    // 0x508a1c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x508a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_508a20:
    // 0x508a20: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x508a20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_508a24:
    // 0x508a24: 0x24845f60  addiu       $a0, $a0, 0x5F60
    ctx->pc = 0x508a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24416));
label_508a28:
    // 0x508a28: 0x8063007a  lb          $v1, 0x7A($v1)
    ctx->pc = 0x508a28u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 122)));
label_508a2c:
    // 0x508a2c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x508a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_508a30:
    // 0x508a30: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x508a30u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_508a34:
    // 0x508a34: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x508a34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_508a38:
    // 0x508a38: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x508a38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_508a3c:
    // 0x508a3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x508a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_508a40:
    // 0x508a40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x508a40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_508a44:
    // 0x508a44: 0x3e00008  jr          $ra
label_508a48:
    if (ctx->pc == 0x508A48u) {
        ctx->pc = 0x508A48u;
            // 0x508a48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x508A4Cu;
        goto label_508a4c;
    }
    ctx->pc = 0x508A44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x508A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x508A44u;
            // 0x508a48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x508A4Cu;
label_508a4c:
    // 0x508a4c: 0x0  nop
    ctx->pc = 0x508a4cu;
    // NOP
label_508a50:
    // 0x508a50: 0x3e00008  jr          $ra
label_508a54:
    if (ctx->pc == 0x508A54u) {
        ctx->pc = 0x508A54u;
            // 0x508a54: 0x24024679  addiu       $v0, $zero, 0x4679 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18041));
        ctx->pc = 0x508A58u;
        goto label_508a58;
    }
    ctx->pc = 0x508A50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x508A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x508A50u;
            // 0x508a54: 0x24024679  addiu       $v0, $zero, 0x4679 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18041));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x508A58u;
label_508a58:
    // 0x508a58: 0x0  nop
    ctx->pc = 0x508a58u;
    // NOP
label_508a5c:
    // 0x508a5c: 0x0  nop
    ctx->pc = 0x508a5cu;
    // NOP
label_508a60:
    // 0x508a60: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x508a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_508a64:
    // 0x508a64: 0x3e00008  jr          $ra
label_508a68:
    if (ctx->pc == 0x508A68u) {
        ctx->pc = 0x508A68u;
            // 0x508a68: 0x2442b258  addiu       $v0, $v0, -0x4DA8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947416));
        ctx->pc = 0x508A6Cu;
        goto label_508a6c;
    }
    ctx->pc = 0x508A64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x508A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x508A64u;
            // 0x508a68: 0x2442b258  addiu       $v0, $v0, -0x4DA8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x508A6Cu;
label_508a6c:
    // 0x508a6c: 0x0  nop
    ctx->pc = 0x508a6cu;
    // NOP
label_508a70:
    // 0x508a70: 0x3e00008  jr          $ra
label_508a74:
    if (ctx->pc == 0x508A74u) {
        ctx->pc = 0x508A74u;
            // 0x508a74: 0x24024678  addiu       $v0, $zero, 0x4678 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18040));
        ctx->pc = 0x508A78u;
        goto label_508a78;
    }
    ctx->pc = 0x508A70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x508A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x508A70u;
            // 0x508a74: 0x24024678  addiu       $v0, $zero, 0x4678 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18040));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x508A78u;
label_508a78:
    // 0x508a78: 0x0  nop
    ctx->pc = 0x508a78u;
    // NOP
label_508a7c:
    // 0x508a7c: 0x0  nop
    ctx->pc = 0x508a7cu;
    // NOP
label_508a80:
    // 0x508a80: 0x8c8403b0  lw          $a0, 0x3B0($a0)
    ctx->pc = 0x508a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 944)));
label_508a84:
    // 0x508a84: 0x8122c5c  j           func_48B170
label_508a88:
    if (ctx->pc == 0x508A88u) {
        ctx->pc = 0x508A88u;
            // 0x508a88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x508A8Cu;
        goto label_508a8c;
    }
    ctx->pc = 0x508A84u;
    ctx->pc = 0x508A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x508A84u;
            // 0x508a88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B170u;
    if (runtime->hasFunction(0x48B170u)) {
        auto targetFn = runtime->lookupFunction(0x48B170u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0048B170_0x48b170(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x508A8Cu;
label_508a8c:
    // 0x508a8c: 0x0  nop
    ctx->pc = 0x508a8cu;
    // NOP
label_508a90:
    // 0x508a90: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x508a90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_508a94:
    // 0x508a94: 0x8c8403b0  lw          $a0, 0x3B0($a0)
    ctx->pc = 0x508a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 944)));
label_508a98:
    // 0x508a98: 0x8122d2c  j           func_48B4B0
label_508a9c:
    if (ctx->pc == 0x508A9Cu) {
        ctx->pc = 0x508A9Cu;
            // 0x508a9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x508AA0u;
        goto label_508aa0;
    }
    ctx->pc = 0x508A98u;
    ctx->pc = 0x508A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x508A98u;
            // 0x508a9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x508AA0u;
label_508aa0:
    // 0x508aa0: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x508aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_508aa4:
    // 0x508aa4: 0x8c8403b0  lw          $a0, 0x3B0($a0)
    ctx->pc = 0x508aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 944)));
label_508aa8:
    // 0x508aa8: 0x8122d2c  j           func_48B4B0
label_508aac:
    if (ctx->pc == 0x508AACu) {
        ctx->pc = 0x508AACu;
            // 0x508aac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x508AB0u;
        goto label_508ab0;
    }
    ctx->pc = 0x508AA8u;
    ctx->pc = 0x508AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x508AA8u;
            // 0x508aac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x508AB0u;
label_508ab0:
    // 0x508ab0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x508ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_508ab4:
    // 0x508ab4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x508ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_508ab8:
    // 0x508ab8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x508ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_508abc:
    // 0x508abc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x508abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_508ac0:
    // 0x508ac0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x508ac0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_508ac4:
    // 0x508ac4: 0x1220002c  beqz        $s1, . + 4 + (0x2C << 2)
label_508ac8:
    if (ctx->pc == 0x508AC8u) {
        ctx->pc = 0x508AC8u;
            // 0x508ac8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x508ACCu;
        goto label_508acc;
    }
    ctx->pc = 0x508AC4u;
    {
        const bool branch_taken_0x508ac4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x508AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x508AC4u;
            // 0x508ac8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x508ac4) {
            ctx->pc = 0x508B78u;
            goto label_508b78;
        }
    }
    ctx->pc = 0x508ACCu;
label_508acc:
    // 0x508acc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x508accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_508ad0:
    // 0x508ad0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x508ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_508ad4:
    // 0x508ad4: 0x24635010  addiu       $v1, $v1, 0x5010
    ctx->pc = 0x508ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20496));
label_508ad8:
    // 0x508ad8: 0x24425048  addiu       $v0, $v0, 0x5048
    ctx->pc = 0x508ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20552));
label_508adc:
    // 0x508adc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x508adcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_508ae0:
    // 0x508ae0: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x508ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_508ae4:
    // 0x508ae4: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x508ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_508ae8:
    // 0x508ae8: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x508ae8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_508aec:
    // 0x508aec: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_508af0:
    if (ctx->pc == 0x508AF0u) {
        ctx->pc = 0x508AF4u;
        goto label_508af4;
    }
    ctx->pc = 0x508AECu;
    {
        const bool branch_taken_0x508aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x508aec) {
            ctx->pc = 0x508B28u;
            goto label_508b28;
        }
    }
    ctx->pc = 0x508AF4u;
label_508af4:
    // 0x508af4: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x508af4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_508af8:
    // 0x508af8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x508af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_508afc:
    // 0x508afc: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x508afcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_508b00:
    // 0x508b00: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x508b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_508b04:
    // 0x508b04: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x508b04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_508b08:
    // 0x508b08: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_508b0c:
    if (ctx->pc == 0x508B0Cu) {
        ctx->pc = 0x508B10u;
        goto label_508b10;
    }
    ctx->pc = 0x508B08u;
    {
        const bool branch_taken_0x508b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x508b08) {
            ctx->pc = 0x508B28u;
            goto label_508b28;
        }
    }
    ctx->pc = 0x508B10u;
label_508b10:
    // 0x508b10: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_508b14:
    if (ctx->pc == 0x508B14u) {
        ctx->pc = 0x508B18u;
        goto label_508b18;
    }
    ctx->pc = 0x508B10u;
    {
        const bool branch_taken_0x508b10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x508b10) {
            ctx->pc = 0x508B28u;
            goto label_508b28;
        }
    }
    ctx->pc = 0x508B18u;
label_508b18:
    // 0x508b18: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x508b18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_508b1c:
    // 0x508b1c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x508b1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_508b20:
    // 0x508b20: 0x320f809  jalr        $t9
label_508b24:
    if (ctx->pc == 0x508B24u) {
        ctx->pc = 0x508B24u;
            // 0x508b24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x508B28u;
        goto label_508b28;
    }
    ctx->pc = 0x508B20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x508B28u);
        ctx->pc = 0x508B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x508B20u;
            // 0x508b24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x508B28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x508B28u; }
            if (ctx->pc != 0x508B28u) { return; }
        }
        }
    }
    ctx->pc = 0x508B28u;
label_508b28:
    // 0x508b28: 0x5220000e  beql        $s1, $zero, . + 4 + (0xE << 2)
label_508b2c:
    if (ctx->pc == 0x508B2Cu) {
        ctx->pc = 0x508B2Cu;
            // 0x508b2c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x508B30u;
        goto label_508b30;
    }
    ctx->pc = 0x508B28u;
    {
        const bool branch_taken_0x508b28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x508b28) {
            ctx->pc = 0x508B2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x508B28u;
            // 0x508b2c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x508B64u;
            goto label_508b64;
        }
    }
    ctx->pc = 0x508B30u;
label_508b30:
    // 0x508b30: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x508b30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_508b34:
    // 0x508b34: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x508b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_508b38:
    // 0x508b38: 0x24635060  addiu       $v1, $v1, 0x5060
    ctx->pc = 0x508b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20576));
label_508b3c:
    // 0x508b3c: 0x24425098  addiu       $v0, $v0, 0x5098
    ctx->pc = 0x508b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20632));
label_508b40:
    // 0x508b40: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x508b40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_508b44:
    // 0x508b44: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x508b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_508b48:
    // 0x508b48: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x508b48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_508b4c:
    // 0x508b4c: 0xc0aed1c  jal         func_2BB470
label_508b50:
    if (ctx->pc == 0x508B50u) {
        ctx->pc = 0x508B50u;
            // 0x508b50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x508B54u;
        goto label_508b54;
    }
    ctx->pc = 0x508B4Cu;
    SET_GPR_U32(ctx, 31, 0x508B54u);
    ctx->pc = 0x508B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x508B4Cu;
            // 0x508b50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB470u;
    if (runtime->hasFunction(0x2BB470u)) {
        auto targetFn = runtime->lookupFunction(0x2BB470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508B54u; }
        if (ctx->pc != 0x508B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB470_0x2bb470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508B54u; }
        if (ctx->pc != 0x508B54u) { return; }
    }
    ctx->pc = 0x508B54u;
label_508b54:
    // 0x508b54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x508b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_508b58:
    // 0x508b58: 0xc141f08  jal         func_507C20
label_508b5c:
    if (ctx->pc == 0x508B5Cu) {
        ctx->pc = 0x508B5Cu;
            // 0x508b5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x508B60u;
        goto label_508b60;
    }
    ctx->pc = 0x508B58u;
    SET_GPR_U32(ctx, 31, 0x508B60u);
    ctx->pc = 0x508B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x508B58u;
            // 0x508b5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x507C20u;
    if (runtime->hasFunction(0x507C20u)) {
        auto targetFn = runtime->lookupFunction(0x507C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508B60u; }
        if (ctx->pc != 0x508B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00507C20_0x507c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508B60u; }
        if (ctx->pc != 0x508B60u) { return; }
    }
    ctx->pc = 0x508B60u;
label_508b60:
    // 0x508b60: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x508b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_508b64:
    // 0x508b64: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x508b64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_508b68:
    // 0x508b68: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_508b6c:
    if (ctx->pc == 0x508B6Cu) {
        ctx->pc = 0x508B6Cu;
            // 0x508b6c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x508B70u;
        goto label_508b70;
    }
    ctx->pc = 0x508B68u;
    {
        const bool branch_taken_0x508b68 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x508b68) {
            ctx->pc = 0x508B6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x508B68u;
            // 0x508b6c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x508B7Cu;
            goto label_508b7c;
        }
    }
    ctx->pc = 0x508B70u;
label_508b70:
    // 0x508b70: 0xc0400a8  jal         func_1002A0
label_508b74:
    if (ctx->pc == 0x508B74u) {
        ctx->pc = 0x508B74u;
            // 0x508b74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x508B78u;
        goto label_508b78;
    }
    ctx->pc = 0x508B70u;
    SET_GPR_U32(ctx, 31, 0x508B78u);
    ctx->pc = 0x508B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x508B70u;
            // 0x508b74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508B78u; }
        if (ctx->pc != 0x508B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508B78u; }
        if (ctx->pc != 0x508B78u) { return; }
    }
    ctx->pc = 0x508B78u;
label_508b78:
    // 0x508b78: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x508b78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_508b7c:
    // 0x508b7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x508b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_508b80:
    // 0x508b80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x508b80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_508b84:
    // 0x508b84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x508b84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_508b88:
    // 0x508b88: 0x3e00008  jr          $ra
label_508b8c:
    if (ctx->pc == 0x508B8Cu) {
        ctx->pc = 0x508B8Cu;
            // 0x508b8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x508B90u;
        goto label_508b90;
    }
    ctx->pc = 0x508B88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x508B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x508B88u;
            // 0x508b8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x508B90u;
label_508b90:
    // 0x508b90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x508b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_508b94:
    // 0x508b94: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x508b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_508b98:
    // 0x508b98: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x508b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_508b9c:
    // 0x508b9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x508b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_508ba0:
    // 0x508ba0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x508ba0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_508ba4:
    // 0x508ba4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x508ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_508ba8:
    // 0x508ba8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x508ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_508bac:
    // 0x508bac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x508bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_508bb0:
    // 0x508bb0: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x508bb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_508bb4:
    // 0x508bb4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_508bb8:
    if (ctx->pc == 0x508BB8u) {
        ctx->pc = 0x508BB8u;
            // 0x508bb8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x508BBCu;
        goto label_508bbc;
    }
    ctx->pc = 0x508BB4u;
    {
        const bool branch_taken_0x508bb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x508BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x508BB4u;
            // 0x508bb8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x508bb4) {
            ctx->pc = 0x508BF8u;
            goto label_508bf8;
        }
    }
    ctx->pc = 0x508BBCu;
label_508bbc:
    // 0x508bbc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x508bbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_508bc0:
    // 0x508bc0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x508bc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_508bc4:
    // 0x508bc4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x508bc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_508bc8:
    // 0x508bc8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x508bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_508bcc:
    // 0x508bcc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x508bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_508bd0:
    // 0x508bd0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x508bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_508bd4:
    // 0x508bd4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x508bd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_508bd8:
    // 0x508bd8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x508bd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_508bdc:
    // 0x508bdc: 0x320f809  jalr        $t9
label_508be0:
    if (ctx->pc == 0x508BE0u) {
        ctx->pc = 0x508BE4u;
        goto label_508be4;
    }
    ctx->pc = 0x508BDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x508BE4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x508BE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x508BE4u; }
            if (ctx->pc != 0x508BE4u) { return; }
        }
        }
    }
    ctx->pc = 0x508BE4u;
label_508be4:
    // 0x508be4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x508be4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_508be8:
    // 0x508be8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x508be8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_508bec:
    // 0x508bec: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x508becu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_508bf0:
    // 0x508bf0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_508bf4:
    if (ctx->pc == 0x508BF4u) {
        ctx->pc = 0x508BF4u;
            // 0x508bf4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x508BF8u;
        goto label_508bf8;
    }
    ctx->pc = 0x508BF0u;
    {
        const bool branch_taken_0x508bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x508BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x508BF0u;
            // 0x508bf4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x508bf0) {
            ctx->pc = 0x508BC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_508bc8;
        }
    }
    ctx->pc = 0x508BF8u;
label_508bf8:
    // 0x508bf8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x508bf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_508bfc:
    // 0x508bfc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x508bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_508c00:
    // 0x508c00: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x508c00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_508c04:
    // 0x508c04: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x508c04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_508c08:
    // 0x508c08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x508c08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_508c0c:
    // 0x508c0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x508c0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_508c10:
    // 0x508c10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x508c10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_508c14:
    // 0x508c14: 0x3e00008  jr          $ra
label_508c18:
    if (ctx->pc == 0x508C18u) {
        ctx->pc = 0x508C18u;
            // 0x508c18: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x508C1Cu;
        goto label_508c1c;
    }
    ctx->pc = 0x508C14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x508C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x508C14u;
            // 0x508c18: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x508C1Cu;
label_508c1c:
    // 0x508c1c: 0x0  nop
    ctx->pc = 0x508c1cu;
    // NOP
label_508c20:
    // 0x508c20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x508c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_508c24:
    // 0x508c24: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x508c24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_508c28:
    // 0x508c28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x508c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_508c2c:
    // 0x508c2c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x508c2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_508c30:
    // 0x508c30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x508c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_508c34:
    // 0x508c34: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x508c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_508c38:
    // 0x508c38: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x508c38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_508c3c:
    // 0x508c3c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x508c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_508c40:
    // 0x508c40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x508c40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_508c44:
    // 0x508c44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x508c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_508c48:
    // 0x508c48: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x508c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_508c4c:
    // 0x508c4c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x508c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_508c50:
    // 0x508c50: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x508c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_508c54:
    // 0x508c54: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x508c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_508c58:
    // 0x508c58: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x508c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_508c5c:
    // 0x508c5c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x508c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_508c60:
    // 0x508c60: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x508c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_508c64:
    // 0x508c64: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x508c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_508c68:
    // 0x508c68: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x508c68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_508c6c:
    // 0x508c6c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x508c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_508c70:
    // 0x508c70: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x508c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_508c74:
    // 0x508c74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x508c74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_508c78:
    // 0x508c78: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x508c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_508c7c:
    // 0x508c7c: 0xc0a997c  jal         func_2A65F0
label_508c80:
    if (ctx->pc == 0x508C80u) {
        ctx->pc = 0x508C80u;
            // 0x508c80: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x508C84u;
        goto label_508c84;
    }
    ctx->pc = 0x508C7Cu;
    SET_GPR_U32(ctx, 31, 0x508C84u);
    ctx->pc = 0x508C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x508C7Cu;
            // 0x508c80: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508C84u; }
        if (ctx->pc != 0x508C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508C84u; }
        if (ctx->pc != 0x508C84u) { return; }
    }
    ctx->pc = 0x508C84u;
label_508c84:
    // 0x508c84: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x508c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_508c88:
    // 0x508c88: 0xc0d879c  jal         func_361E70
label_508c8c:
    if (ctx->pc == 0x508C8Cu) {
        ctx->pc = 0x508C8Cu;
            // 0x508c8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x508C90u;
        goto label_508c90;
    }
    ctx->pc = 0x508C88u;
    SET_GPR_U32(ctx, 31, 0x508C90u);
    ctx->pc = 0x508C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x508C88u;
            // 0x508c8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508C90u; }
        if (ctx->pc != 0x508C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508C90u; }
        if (ctx->pc != 0x508C90u) { return; }
    }
    ctx->pc = 0x508C90u;
label_508c90:
    // 0x508c90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x508c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_508c94:
    // 0x508c94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x508c94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_508c98:
    // 0x508c98: 0x3e00008  jr          $ra
label_508c9c:
    if (ctx->pc == 0x508C9Cu) {
        ctx->pc = 0x508C9Cu;
            // 0x508c9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x508CA0u;
        goto label_508ca0;
    }
    ctx->pc = 0x508C98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x508C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x508C98u;
            // 0x508c9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x508CA0u;
label_508ca0:
    // 0x508ca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x508ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_508ca4:
    // 0x508ca4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x508ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_508ca8:
    // 0x508ca8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x508ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_508cac:
    // 0x508cac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x508cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_508cb0:
    // 0x508cb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x508cb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_508cb4:
    // 0x508cb4: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x508cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_508cb8:
    // 0x508cb8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_508cbc:
    if (ctx->pc == 0x508CBCu) {
        ctx->pc = 0x508CBCu;
            // 0x508cbc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x508CC0u;
        goto label_508cc0;
    }
    ctx->pc = 0x508CB8u;
    {
        const bool branch_taken_0x508cb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x508CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x508CB8u;
            // 0x508cbc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x508cb8) {
            ctx->pc = 0x508CE8u;
            goto label_508ce8;
        }
    }
    ctx->pc = 0x508CC0u;
label_508cc0:
    // 0x508cc0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x508cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_508cc4:
    // 0x508cc4: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x508cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_508cc8:
    // 0x508cc8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x508cc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_508ccc:
    // 0x508ccc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x508cccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_508cd0:
    // 0x508cd0: 0x320f809  jalr        $t9
label_508cd4:
    if (ctx->pc == 0x508CD4u) {
        ctx->pc = 0x508CD8u;
        goto label_508cd8;
    }
    ctx->pc = 0x508CD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x508CD8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x508CD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x508CD8u; }
            if (ctx->pc != 0x508CD8u) { return; }
        }
        }
    }
    ctx->pc = 0x508CD8u;
label_508cd8:
    // 0x508cd8: 0x26240084  addiu       $a0, $s1, 0x84
    ctx->pc = 0x508cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_508cdc:
    // 0x508cdc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x508cdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_508ce0:
    // 0x508ce0: 0xc0d86a0  jal         func_361A80
label_508ce4:
    if (ctx->pc == 0x508CE4u) {
        ctx->pc = 0x508CE4u;
            // 0x508ce4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x508CE8u;
        goto label_508ce8;
    }
    ctx->pc = 0x508CE0u;
    SET_GPR_U32(ctx, 31, 0x508CE8u);
    ctx->pc = 0x508CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x508CE0u;
            // 0x508ce4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361A80u;
    if (runtime->hasFunction(0x361A80u)) {
        auto targetFn = runtime->lookupFunction(0x361A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508CE8u; }
        if (ctx->pc != 0x508CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361A80_0x361a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508CE8u; }
        if (ctx->pc != 0x508CE8u) { return; }
    }
    ctx->pc = 0x508CE8u;
label_508ce8:
    // 0x508ce8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x508ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_508cec:
    // 0x508cec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x508cecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_508cf0:
    // 0x508cf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x508cf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_508cf4:
    // 0x508cf4: 0x3e00008  jr          $ra
label_508cf8:
    if (ctx->pc == 0x508CF8u) {
        ctx->pc = 0x508CF8u;
            // 0x508cf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x508CFCu;
        goto label_508cfc;
    }
    ctx->pc = 0x508CF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x508CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x508CF4u;
            // 0x508cf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x508CFCu;
label_508cfc:
    // 0x508cfc: 0x0  nop
    ctx->pc = 0x508cfcu;
    // NOP
label_508d00:
    // 0x508d00: 0x8141e5c  j           func_507970
label_508d04:
    if (ctx->pc == 0x508D04u) {
        ctx->pc = 0x508D04u;
            // 0x508d04: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x508D08u;
        goto label_508d08;
    }
    ctx->pc = 0x508D00u;
    ctx->pc = 0x508D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x508D00u;
            // 0x508d04: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x507970u;
    {
        auto targetFn = runtime->lookupFunction(0x507970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x508D08u;
label_508d08:
    // 0x508d08: 0x0  nop
    ctx->pc = 0x508d08u;
    // NOP
label_508d0c:
    // 0x508d0c: 0x0  nop
    ctx->pc = 0x508d0cu;
    // NOP
label_508d10:
    // 0x508d10: 0x81422ac  j           func_508AB0
label_508d14:
    if (ctx->pc == 0x508D14u) {
        ctx->pc = 0x508D14u;
            // 0x508d14: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x508D18u;
        goto label_508d18;
    }
    ctx->pc = 0x508D10u;
    ctx->pc = 0x508D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x508D10u;
            // 0x508d14: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x508AB0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_508ab0;
    ctx->pc = 0x508D18u;
label_508d18:
    // 0x508d18: 0x0  nop
    ctx->pc = 0x508d18u;
    // NOP
label_508d1c:
    // 0x508d1c: 0x0  nop
    ctx->pc = 0x508d1cu;
    // NOP
label_508d20:
    // 0x508d20: 0x8141f08  j           func_507C20
label_508d24:
    if (ctx->pc == 0x508D24u) {
        ctx->pc = 0x508D24u;
            // 0x508d24: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x508D28u;
        goto label_508d28;
    }
    ctx->pc = 0x508D20u;
    ctx->pc = 0x508D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x508D20u;
            // 0x508d24: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x507C20u;
    if (runtime->hasFunction(0x507C20u)) {
        auto targetFn = runtime->lookupFunction(0x507C20u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00507C20_0x507c20(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x508D28u;
label_508d28:
    // 0x508d28: 0x0  nop
    ctx->pc = 0x508d28u;
    // NOP
label_508d2c:
    // 0x508d2c: 0x0  nop
    ctx->pc = 0x508d2cu;
    // NOP
label_508d30:
    // 0x508d30: 0x8141ec4  j           func_507B10
label_508d34:
    if (ctx->pc == 0x508D34u) {
        ctx->pc = 0x508D34u;
            // 0x508d34: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x508D38u;
        goto label_508d38;
    }
    ctx->pc = 0x508D30u;
    ctx->pc = 0x508D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x508D30u;
            // 0x508d34: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x507B10u;
    {
        auto targetFn = runtime->lookupFunction(0x507B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x508D38u;
label_508d38:
    // 0x508d38: 0x0  nop
    ctx->pc = 0x508d38u;
    // NOP
label_508d3c:
    // 0x508d3c: 0x0  nop
    ctx->pc = 0x508d3cu;
    // NOP
label_508d40:
    // 0x508d40: 0x81422a0  j           func_508A80
label_508d44:
    if (ctx->pc == 0x508D44u) {
        ctx->pc = 0x508D44u;
            // 0x508d44: 0x2484ff30  addiu       $a0, $a0, -0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967088));
        ctx->pc = 0x508D48u;
        goto label_508d48;
    }
    ctx->pc = 0x508D40u;
    ctx->pc = 0x508D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x508D40u;
            // 0x508d44: 0x2484ff30  addiu       $a0, $a0, -0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x508A80u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_508a80;
    ctx->pc = 0x508D48u;
label_508d48:
    // 0x508d48: 0x0  nop
    ctx->pc = 0x508d48u;
    // NOP
label_508d4c:
    // 0x508d4c: 0x0  nop
    ctx->pc = 0x508d4cu;
    // NOP
label_508d50:
    // 0x508d50: 0x81422a4  j           func_508A90
label_508d54:
    if (ctx->pc == 0x508D54u) {
        ctx->pc = 0x508D54u;
            // 0x508d54: 0x2484ff30  addiu       $a0, $a0, -0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967088));
        ctx->pc = 0x508D58u;
        goto label_508d58;
    }
    ctx->pc = 0x508D50u;
    ctx->pc = 0x508D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x508D50u;
            // 0x508d54: 0x2484ff30  addiu       $a0, $a0, -0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x508A90u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_508a90;
    ctx->pc = 0x508D58u;
label_508d58:
    // 0x508d58: 0x0  nop
    ctx->pc = 0x508d58u;
    // NOP
label_508d5c:
    // 0x508d5c: 0x0  nop
    ctx->pc = 0x508d5cu;
    // NOP
label_508d60:
    // 0x508d60: 0x81422a8  j           func_508AA0
label_508d64:
    if (ctx->pc == 0x508D64u) {
        ctx->pc = 0x508D64u;
            // 0x508d64: 0x2484ff30  addiu       $a0, $a0, -0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967088));
        ctx->pc = 0x508D68u;
        goto label_508d68;
    }
    ctx->pc = 0x508D60u;
    ctx->pc = 0x508D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x508D60u;
            // 0x508d64: 0x2484ff30  addiu       $a0, $a0, -0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x508AA0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_508aa0;
    ctx->pc = 0x508D68u;
label_508d68:
    // 0x508d68: 0x0  nop
    ctx->pc = 0x508d68u;
    // NOP
label_508d6c:
    // 0x508d6c: 0x0  nop
    ctx->pc = 0x508d6cu;
    // NOP
label_508d70:
    // 0x508d70: 0x81420f4  j           func_5083D0
label_508d74:
    if (ctx->pc == 0x508D74u) {
        ctx->pc = 0x508D74u;
            // 0x508d74: 0x2484ff30  addiu       $a0, $a0, -0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967088));
        ctx->pc = 0x508D78u;
        goto label_508d78;
    }
    ctx->pc = 0x508D70u;
    ctx->pc = 0x508D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x508D70u;
            // 0x508d74: 0x2484ff30  addiu       $a0, $a0, -0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5083D0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_5083d0;
    ctx->pc = 0x508D78u;
label_508d78:
    // 0x508d78: 0x0  nop
    ctx->pc = 0x508d78u;
    // NOP
label_508d7c:
    // 0x508d7c: 0x0  nop
    ctx->pc = 0x508d7cu;
    // NOP
label_508d80:
    // 0x508d80: 0x81420fc  j           func_5083F0
label_508d84:
    if (ctx->pc == 0x508D84u) {
        ctx->pc = 0x508D84u;
            // 0x508d84: 0x2484ff30  addiu       $a0, $a0, -0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967088));
        ctx->pc = 0x508D88u;
        goto label_508d88;
    }
    ctx->pc = 0x508D80u;
    ctx->pc = 0x508D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x508D80u;
            // 0x508d84: 0x2484ff30  addiu       $a0, $a0, -0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5083F0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_5083f0;
    ctx->pc = 0x508D88u;
label_508d88:
    // 0x508d88: 0x0  nop
    ctx->pc = 0x508d88u;
    // NOP
label_508d8c:
    // 0x508d8c: 0x0  nop
    ctx->pc = 0x508d8cu;
    // NOP
label_508d90:
    // 0x508d90: 0x8142104  j           func_508410
label_508d94:
    if (ctx->pc == 0x508D94u) {
        ctx->pc = 0x508D94u;
            // 0x508d94: 0x2484ff30  addiu       $a0, $a0, -0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967088));
        ctx->pc = 0x508D98u;
        goto label_508d98;
    }
    ctx->pc = 0x508D90u;
    ctx->pc = 0x508D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x508D90u;
            // 0x508d94: 0x2484ff30  addiu       $a0, $a0, -0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x508410u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_508410;
    ctx->pc = 0x508D98u;
label_508d98:
    // 0x508d98: 0x0  nop
    ctx->pc = 0x508d98u;
    // NOP
label_508d9c:
    // 0x508d9c: 0x0  nop
    ctx->pc = 0x508d9cu;
    // NOP
label_508da0:
    // 0x508da0: 0x8141ec4  j           func_507B10
label_508da4:
    if (ctx->pc == 0x508DA4u) {
        ctx->pc = 0x508DA4u;
            // 0x508da4: 0x2484ff30  addiu       $a0, $a0, -0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967088));
        ctx->pc = 0x508DA8u;
        goto label_508da8;
    }
    ctx->pc = 0x508DA0u;
    ctx->pc = 0x508DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x508DA0u;
            // 0x508da4: 0x2484ff30  addiu       $a0, $a0, -0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x507B10u;
    {
        auto targetFn = runtime->lookupFunction(0x507B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x508DA8u;
label_508da8:
    // 0x508da8: 0x0  nop
    ctx->pc = 0x508da8u;
    // NOP
label_508dac:
    // 0x508dac: 0x0  nop
    ctx->pc = 0x508dacu;
    // NOP
label_508db0:
    // 0x508db0: 0x8142008  j           func_508020
label_508db4:
    if (ctx->pc == 0x508DB4u) {
        ctx->pc = 0x508DB4u;
            // 0x508db4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x508DB8u;
        goto label_508db8;
    }
    ctx->pc = 0x508DB0u;
    ctx->pc = 0x508DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x508DB0u;
            // 0x508db4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x508020u;
    {
        auto targetFn = runtime->lookupFunction(0x508020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x508DB8u;
label_508db8:
    // 0x508db8: 0x0  nop
    ctx->pc = 0x508db8u;
    // NOP
label_508dbc:
    // 0x508dbc: 0x0  nop
    ctx->pc = 0x508dbcu;
    // NOP
label_508dc0:
    // 0x508dc0: 0x24036202  addiu       $v1, $zero, 0x6202
    ctx->pc = 0x508dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25090));
label_508dc4:
    // 0x508dc4: 0x3e00008  jr          $ra
label_508dc8:
    if (ctx->pc == 0x508DC8u) {
        ctx->pc = 0x508DC8u;
            // 0x508dc8: 0xac830054  sw          $v1, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x508DCCu;
        goto label_508dcc;
    }
    ctx->pc = 0x508DC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x508DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x508DC4u;
            // 0x508dc8: 0xac830054  sw          $v1, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x508DCCu;
label_508dcc:
    // 0x508dcc: 0x0  nop
    ctx->pc = 0x508dccu;
    // NOP
label_508dd0:
    // 0x508dd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x508dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_508dd4:
    // 0x508dd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x508dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_508dd8:
    // 0x508dd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x508dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_508ddc:
    // 0x508ddc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x508ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_508de0:
    // 0x508de0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x508de0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_508de4:
    // 0x508de4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_508de8:
    if (ctx->pc == 0x508DE8u) {
        ctx->pc = 0x508DE8u;
            // 0x508de8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x508DECu;
        goto label_508dec;
    }
    ctx->pc = 0x508DE4u;
    {
        const bool branch_taken_0x508de4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x508DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x508DE4u;
            // 0x508de8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x508de4) {
            ctx->pc = 0x508E40u;
            goto label_508e40;
        }
    }
    ctx->pc = 0x508DECu;
label_508dec:
    // 0x508dec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x508decu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_508df0:
    // 0x508df0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x508df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_508df4:
    // 0x508df4: 0x246350b0  addiu       $v1, $v1, 0x50B0
    ctx->pc = 0x508df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20656));
label_508df8:
    // 0x508df8: 0x244250e8  addiu       $v0, $v0, 0x50E8
    ctx->pc = 0x508df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20712));
label_508dfc:
    // 0x508dfc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x508dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_508e00:
    // 0x508e00: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_508e04:
    if (ctx->pc == 0x508E04u) {
        ctx->pc = 0x508E04u;
            // 0x508e04: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x508E08u;
        goto label_508e08;
    }
    ctx->pc = 0x508E00u;
    {
        const bool branch_taken_0x508e00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x508E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x508E00u;
            // 0x508e04: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x508e00) {
            ctx->pc = 0x508E28u;
            goto label_508e28;
        }
    }
    ctx->pc = 0x508E08u;
label_508e08:
    // 0x508e08: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x508e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_508e0c:
    // 0x508e0c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x508e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_508e10:
    // 0x508e10: 0x246320e0  addiu       $v1, $v1, 0x20E0
    ctx->pc = 0x508e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8416));
label_508e14:
    // 0x508e14: 0x24422118  addiu       $v0, $v0, 0x2118
    ctx->pc = 0x508e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8472));
label_508e18:
    // 0x508e18: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x508e18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_508e1c:
    // 0x508e1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x508e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_508e20:
    // 0x508e20: 0xc0af188  jal         func_2BC620
label_508e24:
    if (ctx->pc == 0x508E24u) {
        ctx->pc = 0x508E24u;
            // 0x508e24: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x508E28u;
        goto label_508e28;
    }
    ctx->pc = 0x508E20u;
    SET_GPR_U32(ctx, 31, 0x508E28u);
    ctx->pc = 0x508E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x508E20u;
            // 0x508e24: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC620u;
    if (runtime->hasFunction(0x2BC620u)) {
        auto targetFn = runtime->lookupFunction(0x2BC620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508E28u; }
        if (ctx->pc != 0x508E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC620_0x2bc620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508E28u; }
        if (ctx->pc != 0x508E28u) { return; }
    }
    ctx->pc = 0x508E28u;
label_508e28:
    // 0x508e28: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x508e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_508e2c:
    // 0x508e2c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x508e2cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_508e30:
    // 0x508e30: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_508e34:
    if (ctx->pc == 0x508E34u) {
        ctx->pc = 0x508E34u;
            // 0x508e34: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x508E38u;
        goto label_508e38;
    }
    ctx->pc = 0x508E30u;
    {
        const bool branch_taken_0x508e30 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x508e30) {
            ctx->pc = 0x508E34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x508E30u;
            // 0x508e34: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x508E44u;
            goto label_508e44;
        }
    }
    ctx->pc = 0x508E38u;
label_508e38:
    // 0x508e38: 0xc0400a8  jal         func_1002A0
label_508e3c:
    if (ctx->pc == 0x508E3Cu) {
        ctx->pc = 0x508E3Cu;
            // 0x508e3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x508E40u;
        goto label_508e40;
    }
    ctx->pc = 0x508E38u;
    SET_GPR_U32(ctx, 31, 0x508E40u);
    ctx->pc = 0x508E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x508E38u;
            // 0x508e3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508E40u; }
        if (ctx->pc != 0x508E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508E40u; }
        if (ctx->pc != 0x508E40u) { return; }
    }
    ctx->pc = 0x508E40u;
label_508e40:
    // 0x508e40: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x508e40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_508e44:
    // 0x508e44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x508e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_508e48:
    // 0x508e48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x508e48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_508e4c:
    // 0x508e4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x508e4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_508e50:
    // 0x508e50: 0x3e00008  jr          $ra
label_508e54:
    if (ctx->pc == 0x508E54u) {
        ctx->pc = 0x508E54u;
            // 0x508e54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x508E58u;
        goto label_508e58;
    }
    ctx->pc = 0x508E50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x508E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x508E50u;
            // 0x508e54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x508E58u;
label_508e58:
    // 0x508e58: 0x0  nop
    ctx->pc = 0x508e58u;
    // NOP
label_508e5c:
    // 0x508e5c: 0x0  nop
    ctx->pc = 0x508e5cu;
    // NOP
label_508e60:
    // 0x508e60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x508e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_508e64:
    // 0x508e64: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x508e64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_508e68:
    // 0x508e68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x508e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_508e6c:
    // 0x508e6c: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x508e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_508e70:
    // 0x508e70: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x508e70u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_508e74:
    // 0x508e74: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x508e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_508e78:
    // 0x508e78: 0x50a3000f  beql        $a1, $v1, . + 4 + (0xF << 2)
label_508e7c:
    if (ctx->pc == 0x508E7Cu) {
        ctx->pc = 0x508E7Cu;
            // 0x508e7c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x508E80u;
        goto label_508e80;
    }
    ctx->pc = 0x508E78u;
    {
        const bool branch_taken_0x508e78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x508e78) {
            ctx->pc = 0x508E7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x508E78u;
            // 0x508e7c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x508EB8u;
            goto label_508eb8;
        }
    }
    ctx->pc = 0x508E80u;
label_508e80:
    // 0x508e80: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x508e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_508e84:
    // 0x508e84: 0x10a3000b  beq         $a1, $v1, . + 4 + (0xB << 2)
label_508e88:
    if (ctx->pc == 0x508E88u) {
        ctx->pc = 0x508E8Cu;
        goto label_508e8c;
    }
    ctx->pc = 0x508E84u;
    {
        const bool branch_taken_0x508e84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x508e84) {
            ctx->pc = 0x508EB4u;
            goto label_508eb4;
        }
    }
    ctx->pc = 0x508E8Cu;
label_508e8c:
    // 0x508e8c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x508e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_508e90:
    // 0x508e90: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_508e94:
    if (ctx->pc == 0x508E94u) {
        ctx->pc = 0x508E94u;
            // 0x508e94: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x508E98u;
        goto label_508e98;
    }
    ctx->pc = 0x508E90u;
    {
        const bool branch_taken_0x508e90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x508e90) {
            ctx->pc = 0x508E94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x508E90u;
            // 0x508e94: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x508EA0u;
            goto label_508ea0;
        }
    }
    ctx->pc = 0x508E98u;
label_508e98:
    // 0x508e98: 0x10000006  b           . + 4 + (0x6 << 2)
label_508e9c:
    if (ctx->pc == 0x508E9Cu) {
        ctx->pc = 0x508EA0u;
        goto label_508ea0;
    }
    ctx->pc = 0x508E98u;
    {
        const bool branch_taken_0x508e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x508e98) {
            ctx->pc = 0x508EB4u;
            goto label_508eb4;
        }
    }
    ctx->pc = 0x508EA0u;
label_508ea0:
    // 0x508ea0: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x508ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_508ea4:
    // 0x508ea4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x508ea4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_508ea8:
    // 0x508ea8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x508ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_508eac:
    // 0x508eac: 0x320f809  jalr        $t9
label_508eb0:
    if (ctx->pc == 0x508EB0u) {
        ctx->pc = 0x508EB0u;
            // 0x508eb0: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x508EB4u;
        goto label_508eb4;
    }
    ctx->pc = 0x508EACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x508EB4u);
        ctx->pc = 0x508EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x508EACu;
            // 0x508eb0: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x508EB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x508EB4u; }
            if (ctx->pc != 0x508EB4u) { return; }
        }
        }
    }
    ctx->pc = 0x508EB4u;
label_508eb4:
    // 0x508eb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x508eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_508eb8:
    // 0x508eb8: 0x3e00008  jr          $ra
label_508ebc:
    if (ctx->pc == 0x508EBCu) {
        ctx->pc = 0x508EBCu;
            // 0x508ebc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x508EC0u;
        goto label_508ec0;
    }
    ctx->pc = 0x508EB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x508EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x508EB8u;
            // 0x508ebc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x508EC0u;
label_508ec0:
    // 0x508ec0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x508ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_508ec4:
    // 0x508ec4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x508ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_508ec8:
    // 0x508ec8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x508ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_508ecc:
    // 0x508ecc: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x508eccu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_508ed0:
    // 0x508ed0: 0x50a3000d  beql        $a1, $v1, . + 4 + (0xD << 2)
label_508ed4:
    if (ctx->pc == 0x508ED4u) {
        ctx->pc = 0x508ED4u;
            // 0x508ed4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x508ED8u;
        goto label_508ed8;
    }
    ctx->pc = 0x508ED0u;
    {
        const bool branch_taken_0x508ed0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x508ed0) {
            ctx->pc = 0x508ED4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x508ED0u;
            // 0x508ed4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x508F08u;
            goto label_508f08;
        }
    }
    ctx->pc = 0x508ED8u;
label_508ed8:
    // 0x508ed8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x508ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_508edc:
    // 0x508edc: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_508ee0:
    if (ctx->pc == 0x508EE0u) {
        ctx->pc = 0x508EE0u;
            // 0x508ee0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x508EE4u;
        goto label_508ee4;
    }
    ctx->pc = 0x508EDCu;
    {
        const bool branch_taken_0x508edc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x508edc) {
            ctx->pc = 0x508EE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x508EDCu;
            // 0x508ee0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x508EF8u;
            goto label_508ef8;
        }
    }
    ctx->pc = 0x508EE4u;
label_508ee4:
    // 0x508ee4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x508ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_508ee8:
    // 0x508ee8: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
label_508eec:
    if (ctx->pc == 0x508EECu) {
        ctx->pc = 0x508EF0u;
        goto label_508ef0;
    }
    ctx->pc = 0x508EE8u;
    {
        const bool branch_taken_0x508ee8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x508ee8) {
            ctx->pc = 0x508F04u;
            goto label_508f04;
        }
    }
    ctx->pc = 0x508EF0u;
label_508ef0:
    // 0x508ef0: 0x10000004  b           . + 4 + (0x4 << 2)
label_508ef4:
    if (ctx->pc == 0x508EF4u) {
        ctx->pc = 0x508EF8u;
        goto label_508ef8;
    }
    ctx->pc = 0x508EF0u;
    {
        const bool branch_taken_0x508ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x508ef0) {
            ctx->pc = 0x508F04u;
            goto label_508f04;
        }
    }
    ctx->pc = 0x508EF8u;
label_508ef8:
    // 0x508ef8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x508ef8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_508efc:
    // 0x508efc: 0x320f809  jalr        $t9
label_508f00:
    if (ctx->pc == 0x508F00u) {
        ctx->pc = 0x508F04u;
        goto label_508f04;
    }
    ctx->pc = 0x508EFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x508F04u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x508F04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x508F04u; }
            if (ctx->pc != 0x508F04u) { return; }
        }
        }
    }
    ctx->pc = 0x508F04u;
label_508f04:
    // 0x508f04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x508f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_508f08:
    // 0x508f08: 0x3e00008  jr          $ra
label_508f0c:
    if (ctx->pc == 0x508F0Cu) {
        ctx->pc = 0x508F0Cu;
            // 0x508f0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x508F10u;
        goto label_508f10;
    }
    ctx->pc = 0x508F08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x508F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x508F08u;
            // 0x508f0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x508F10u;
label_508f10:
    // 0x508f10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x508f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_508f14:
    // 0x508f14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x508f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_508f18:
    // 0x508f18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x508f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_508f1c:
    // 0x508f1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x508f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_508f20:
    // 0x508f20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x508f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_508f24:
    // 0x508f24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x508f24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_508f28:
    // 0x508f28: 0x8cc30e38  lw          $v1, 0xE38($a2)
    ctx->pc = 0x508f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3640)));
label_508f2c:
    // 0x508f2c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x508f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_508f30:
    // 0x508f30: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_508f34:
    if (ctx->pc == 0x508F34u) {
        ctx->pc = 0x508F34u;
            // 0x508f34: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x508F38u;
        goto label_508f38;
    }
    ctx->pc = 0x508F30u;
    {
        const bool branch_taken_0x508f30 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x508F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x508F30u;
            // 0x508f34: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x508f30) {
            ctx->pc = 0x508F48u;
            goto label_508f48;
        }
    }
    ctx->pc = 0x508F38u;
label_508f38:
    // 0x508f38: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x508f38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_508f3c:
    // 0x508f3c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_508f40:
    if (ctx->pc == 0x508F40u) {
        ctx->pc = 0x508F44u;
        goto label_508f44;
    }
    ctx->pc = 0x508F3Cu;
    {
        const bool branch_taken_0x508f3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x508f3c) {
            ctx->pc = 0x508F48u;
            goto label_508f48;
        }
    }
    ctx->pc = 0x508F44u;
label_508f44:
    // 0x508f44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x508f44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_508f48:
    // 0x508f48: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_508f4c:
    if (ctx->pc == 0x508F4Cu) {
        ctx->pc = 0x508F50u;
        goto label_508f50;
    }
    ctx->pc = 0x508F48u;
    {
        const bool branch_taken_0x508f48 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x508f48) {
            ctx->pc = 0x508F64u;
            goto label_508f64;
        }
    }
    ctx->pc = 0x508F50u;
label_508f50:
    // 0x508f50: 0xc075eb4  jal         func_1D7AD0
label_508f54:
    if (ctx->pc == 0x508F54u) {
        ctx->pc = 0x508F58u;
        goto label_508f58;
    }
    ctx->pc = 0x508F50u;
    SET_GPR_U32(ctx, 31, 0x508F58u);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508F58u; }
        if (ctx->pc != 0x508F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508F58u; }
        if (ctx->pc != 0x508F58u) { return; }
    }
    ctx->pc = 0x508F58u;
label_508f58:
    // 0x508f58: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_508f5c:
    if (ctx->pc == 0x508F5Cu) {
        ctx->pc = 0x508F60u;
        goto label_508f60;
    }
    ctx->pc = 0x508F58u;
    {
        const bool branch_taken_0x508f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x508f58) {
            ctx->pc = 0x508F64u;
            goto label_508f64;
        }
    }
    ctx->pc = 0x508F60u;
label_508f60:
    // 0x508f60: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x508f60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_508f64:
    // 0x508f64: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
label_508f68:
    if (ctx->pc == 0x508F68u) {
        ctx->pc = 0x508F68u;
            // 0x508f68: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x508F6Cu;
        goto label_508f6c;
    }
    ctx->pc = 0x508F64u;
    {
        const bool branch_taken_0x508f64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x508f64) {
            ctx->pc = 0x508F68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x508F64u;
            // 0x508f68: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x508F88u;
            goto label_508f88;
        }
    }
    ctx->pc = 0x508F6Cu;
label_508f6c:
    // 0x508f6c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x508f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_508f70:
    // 0x508f70: 0x8c6464c0  lw          $a0, 0x64C0($v1)
    ctx->pc = 0x508f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 25792)));
label_508f74:
    // 0x508f74: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_508f78:
    if (ctx->pc == 0x508F78u) {
        ctx->pc = 0x508F7Cu;
        goto label_508f7c;
    }
    ctx->pc = 0x508F74u;
    {
        const bool branch_taken_0x508f74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x508f74) {
            ctx->pc = 0x508F84u;
            goto label_508f84;
        }
    }
    ctx->pc = 0x508F7Cu;
label_508f7c:
    // 0x508f7c: 0xc13d01c  jal         func_4F4070
label_508f80:
    if (ctx->pc == 0x508F80u) {
        ctx->pc = 0x508F80u;
            // 0x508f80: 0x8e250040  lw          $a1, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->pc = 0x508F84u;
        goto label_508f84;
    }
    ctx->pc = 0x508F7Cu;
    SET_GPR_U32(ctx, 31, 0x508F84u);
    ctx->pc = 0x508F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x508F7Cu;
            // 0x508f80: 0x8e250040  lw          $a1, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F4070u;
    if (runtime->hasFunction(0x4F4070u)) {
        auto targetFn = runtime->lookupFunction(0x4F4070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508F84u; }
        if (ctx->pc != 0x508F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F4070_0x4f4070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508F84u; }
        if (ctx->pc != 0x508F84u) { return; }
    }
    ctx->pc = 0x508F84u;
label_508f84:
    // 0x508f84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x508f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_508f88:
    // 0x508f88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x508f88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_508f8c:
    // 0x508f8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x508f8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_508f90:
    // 0x508f90: 0x3e00008  jr          $ra
label_508f94:
    if (ctx->pc == 0x508F94u) {
        ctx->pc = 0x508F94u;
            // 0x508f94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x508F98u;
        goto label_508f98;
    }
    ctx->pc = 0x508F90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x508F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x508F90u;
            // 0x508f94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x508F98u;
label_508f98:
    // 0x508f98: 0x0  nop
    ctx->pc = 0x508f98u;
    // NOP
label_508f9c:
    // 0x508f9c: 0x0  nop
    ctx->pc = 0x508f9cu;
    // NOP
label_508fa0:
    // 0x508fa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x508fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_508fa4:
    // 0x508fa4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x508fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_508fa8:
    // 0x508fa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x508fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_508fac:
    // 0x508fac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x508facu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_508fb0:
    // 0x508fb0: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x508fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_508fb4:
    // 0x508fb4: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_508fb8:
    if (ctx->pc == 0x508FB8u) {
        ctx->pc = 0x508FB8u;
            // 0x508fb8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x508FBCu;
        goto label_508fbc;
    }
    ctx->pc = 0x508FB4u;
    {
        const bool branch_taken_0x508fb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x508fb4) {
            ctx->pc = 0x508FB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x508FB4u;
            // 0x508fb8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x508FDCu;
            goto label_508fdc;
        }
    }
    ctx->pc = 0x508FBCu;
label_508fbc:
    // 0x508fbc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_508fc0:
    if (ctx->pc == 0x508FC0u) {
        ctx->pc = 0x508FC0u;
            // 0x508fc0: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x508FC4u;
        goto label_508fc4;
    }
    ctx->pc = 0x508FBCu;
    {
        const bool branch_taken_0x508fbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x508fbc) {
            ctx->pc = 0x508FC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x508FBCu;
            // 0x508fc0: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x508FD8u;
            goto label_508fd8;
        }
    }
    ctx->pc = 0x508FC4u;
label_508fc4:
    // 0x508fc4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x508fc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_508fc8:
    // 0x508fc8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x508fc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_508fcc:
    // 0x508fcc: 0x320f809  jalr        $t9
label_508fd0:
    if (ctx->pc == 0x508FD0u) {
        ctx->pc = 0x508FD0u;
            // 0x508fd0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x508FD4u;
        goto label_508fd4;
    }
    ctx->pc = 0x508FCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x508FD4u);
        ctx->pc = 0x508FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x508FCCu;
            // 0x508fd0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x508FD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x508FD4u; }
            if (ctx->pc != 0x508FD4u) { return; }
        }
        }
    }
    ctx->pc = 0x508FD4u;
label_508fd4:
    // 0x508fd4: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x508fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_508fd8:
    // 0x508fd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x508fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_508fdc:
    // 0x508fdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x508fdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_508fe0:
    // 0x508fe0: 0x3e00008  jr          $ra
label_508fe4:
    if (ctx->pc == 0x508FE4u) {
        ctx->pc = 0x508FE4u;
            // 0x508fe4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x508FE8u;
        goto label_508fe8;
    }
    ctx->pc = 0x508FE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x508FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x508FE0u;
            // 0x508fe4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x508FE8u;
label_508fe8:
    // 0x508fe8: 0x0  nop
    ctx->pc = 0x508fe8u;
    // NOP
label_508fec:
    // 0x508fec: 0x0  nop
    ctx->pc = 0x508fecu;
    // NOP
label_508ff0:
    // 0x508ff0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x508ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_508ff4:
    // 0x508ff4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x508ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_508ff8:
    // 0x508ff8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x508ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_508ffc:
    // 0x508ffc: 0x24050150  addiu       $a1, $zero, 0x150
    ctx->pc = 0x508ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_509000:
    // 0x509000: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x509000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_509004:
    // 0x509004: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x509004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_509008:
    // 0x509008: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x509008u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_50900c:
    // 0x50900c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x50900cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_509010:
    // 0x509010: 0xc0a7a88  jal         func_29EA20
label_509014:
    if (ctx->pc == 0x509014u) {
        ctx->pc = 0x509014u;
            // 0x509014: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x509018u;
        goto label_509018;
    }
    ctx->pc = 0x509010u;
    SET_GPR_U32(ctx, 31, 0x509018u);
    ctx->pc = 0x509014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x509010u;
            // 0x509014: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x509018u; }
        if (ctx->pc != 0x509018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x509018u; }
        if (ctx->pc != 0x509018u) { return; }
    }
    ctx->pc = 0x509018u;
label_509018:
    // 0x509018: 0x24030150  addiu       $v1, $zero, 0x150
    ctx->pc = 0x509018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_50901c:
    // 0x50901c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x50901cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_509020:
    // 0x509020: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_509024:
    if (ctx->pc == 0x509024u) {
        ctx->pc = 0x509024u;
            // 0x509024: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x509028u;
        goto label_509028;
    }
    ctx->pc = 0x509020u;
    {
        const bool branch_taken_0x509020 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x509024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x509020u;
            // 0x509024: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x509020) {
            ctx->pc = 0x50905Cu;
            goto label_50905c;
        }
    }
    ctx->pc = 0x509028u;
label_509028:
    // 0x509028: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x509028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_50902c:
    // 0x50902c: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x50902cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_509030:
    // 0x509030: 0x8c420d40  lw          $v0, 0xD40($v0)
    ctx->pc = 0x509030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3392)));
label_509034:
    // 0x509034: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x509034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_509038:
    // 0x509038: 0x24c6d6e0  addiu       $a2, $a2, -0x2920
    ctx->pc = 0x509038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956768));
label_50903c:
    // 0x50903c: 0x8c45005c  lw          $a1, 0x5C($v0)
    ctx->pc = 0x50903cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_509040:
    // 0x509040: 0xc08afe0  jal         func_22BF80
label_509044:
    if (ctx->pc == 0x509044u) {
        ctx->pc = 0x509044u;
            // 0x509044: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x509048u;
        goto label_509048;
    }
    ctx->pc = 0x509040u;
    SET_GPR_U32(ctx, 31, 0x509048u);
    ctx->pc = 0x509044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x509040u;
            // 0x509044: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BF80u;
    if (runtime->hasFunction(0x22BF80u)) {
        auto targetFn = runtime->lookupFunction(0x22BF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x509048u; }
        if (ctx->pc != 0x509048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BF80_0x22bf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x509048u; }
        if (ctx->pc != 0x509048u) { return; }
    }
    ctx->pc = 0x509048u;
label_509048:
    // 0x509048: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x509048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_50904c:
    // 0x50904c: 0x244225d0  addiu       $v0, $v0, 0x25D0
    ctx->pc = 0x50904cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9680));
label_509050:
    // 0x509050: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x509050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_509054:
    // 0x509054: 0xae000140  sw          $zero, 0x140($s0)
    ctx->pc = 0x509054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 0));
label_509058:
    // 0x509058: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x509058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_50905c:
    // 0x50905c: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x50905cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_509060:
    // 0x509060: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x509060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_509064:
    // 0x509064: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x509064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_509068:
    // 0x509068: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x509068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_50906c:
    // 0x50906c: 0xc08c798  jal         func_231E60
label_509070:
    if (ctx->pc == 0x509070u) {
        ctx->pc = 0x509070u;
            // 0x509070: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x509074u;
        goto label_509074;
    }
    ctx->pc = 0x50906Cu;
    SET_GPR_U32(ctx, 31, 0x509074u);
    ctx->pc = 0x509070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50906Cu;
            // 0x509070: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231E60u;
    if (runtime->hasFunction(0x231E60u)) {
        auto targetFn = runtime->lookupFunction(0x231E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x509074u; }
        if (ctx->pc != 0x509074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231E60_0x231e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x509074u; }
        if (ctx->pc != 0x509074u) { return; }
    }
    ctx->pc = 0x509074u;
label_509074:
    // 0x509074: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x509074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_509078:
    // 0x509078: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x509078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_50907c:
    // 0x50907c: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x50907cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_509080:
    // 0x509080: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x509080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_509084:
    // 0x509084: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x509084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_509088:
    // 0x509088: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x509088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50908c:
    // 0x50908c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x50908cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_509090:
    // 0x509090: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x509090u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_509094:
    // 0x509094: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x509094u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_509098:
    // 0x509098: 0xe7a3007c  swc1        $f3, 0x7C($sp)
    ctx->pc = 0x509098u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_50909c:
    // 0x50909c: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x50909cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_5090a0:
    // 0x5090a0: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x5090a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5090a4:
    // 0x5090a4: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x5090a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5090a8:
    // 0x5090a8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x5090a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_5090ac:
    // 0x5090ac: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x5090acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_5090b0:
    // 0x5090b0: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x5090b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_5090b4:
    // 0x5090b4: 0xc0a3830  jal         func_28E0C0
label_5090b8:
    if (ctx->pc == 0x5090B8u) {
        ctx->pc = 0x5090B8u;
            // 0x5090b8: 0xe7a20068  swc1        $f2, 0x68($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->pc = 0x5090BCu;
        goto label_5090bc;
    }
    ctx->pc = 0x5090B4u;
    SET_GPR_U32(ctx, 31, 0x5090BCu);
    ctx->pc = 0x5090B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5090B4u;
            // 0x5090b8: 0xe7a20068  swc1        $f2, 0x68($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5090BCu; }
        if (ctx->pc != 0x5090BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5090BCu; }
        if (ctx->pc != 0x5090BCu) { return; }
    }
    ctx->pc = 0x5090BCu;
label_5090bc:
    // 0x5090bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5090bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5090c0:
    // 0x5090c0: 0xc08af10  jal         func_22BC40
label_5090c4:
    if (ctx->pc == 0x5090C4u) {
        ctx->pc = 0x5090C4u;
            // 0x5090c4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x5090C8u;
        goto label_5090c8;
    }
    ctx->pc = 0x5090C0u;
    SET_GPR_U32(ctx, 31, 0x5090C8u);
    ctx->pc = 0x5090C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5090C0u;
            // 0x5090c4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BC40u;
    if (runtime->hasFunction(0x22BC40u)) {
        auto targetFn = runtime->lookupFunction(0x22BC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5090C8u; }
        if (ctx->pc != 0x5090C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BC40_0x22bc40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5090C8u; }
        if (ctx->pc != 0x5090C8u) { return; }
    }
    ctx->pc = 0x5090C8u;
label_5090c8:
    // 0x5090c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5090c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_5090cc:
    // 0x5090cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5090ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5090d0:
    // 0x5090d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5090d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5090d4:
    // 0x5090d4: 0x3e00008  jr          $ra
label_5090d8:
    if (ctx->pc == 0x5090D8u) {
        ctx->pc = 0x5090D8u;
            // 0x5090d8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x5090DCu;
        goto label_5090dc;
    }
    ctx->pc = 0x5090D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5090D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5090D4u;
            // 0x5090d8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5090DCu;
label_5090dc:
    // 0x5090dc: 0x0  nop
    ctx->pc = 0x5090dcu;
    // NOP
label_5090e0:
    // 0x5090e0: 0x3e00008  jr          $ra
label_5090e4:
    if (ctx->pc == 0x5090E4u) {
        ctx->pc = 0x5090E4u;
            // 0x5090e4: 0x24026202  addiu       $v0, $zero, 0x6202 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25090));
        ctx->pc = 0x5090E8u;
        goto label_5090e8;
    }
    ctx->pc = 0x5090E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5090E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5090E0u;
            // 0x5090e4: 0x24026202  addiu       $v0, $zero, 0x6202 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25090));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5090E8u;
label_5090e8:
    // 0x5090e8: 0x0  nop
    ctx->pc = 0x5090e8u;
    // NOP
label_5090ec:
    // 0x5090ec: 0x0  nop
    ctx->pc = 0x5090ecu;
    // NOP
label_5090f0:
    // 0x5090f0: 0x80af148  j           func_2BC520
label_5090f4:
    if (ctx->pc == 0x5090F4u) {
        ctx->pc = 0x5090F4u;
            // 0x5090f4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x5090F8u;
        goto label_5090f8;
    }
    ctx->pc = 0x5090F0u;
    ctx->pc = 0x5090F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5090F0u;
            // 0x5090f4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC520u;
    {
        auto targetFn = runtime->lookupFunction(0x2BC520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x5090F8u;
label_5090f8:
    // 0x5090f8: 0x0  nop
    ctx->pc = 0x5090f8u;
    // NOP
label_5090fc:
    // 0x5090fc: 0x0  nop
    ctx->pc = 0x5090fcu;
    // NOP
label_509100:
    // 0x509100: 0x8142374  j           func_508DD0
label_509104:
    if (ctx->pc == 0x509104u) {
        ctx->pc = 0x509104u;
            // 0x509104: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x509108u;
        goto label_509108;
    }
    ctx->pc = 0x509100u;
    ctx->pc = 0x509104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x509100u;
            // 0x509104: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x508DD0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_508dd0;
    ctx->pc = 0x509108u;
label_509108:
    // 0x509108: 0x0  nop
    ctx->pc = 0x509108u;
    // NOP
label_50910c:
    // 0x50910c: 0x0  nop
    ctx->pc = 0x50910cu;
    // NOP
}
