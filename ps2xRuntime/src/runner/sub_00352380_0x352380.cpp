#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00352380
// Address: 0x352380 - 0x352c00
void sub_00352380_0x352380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00352380_0x352380");
#endif

    switch (ctx->pc) {
        case 0x352380u: goto label_352380;
        case 0x352384u: goto label_352384;
        case 0x352388u: goto label_352388;
        case 0x35238cu: goto label_35238c;
        case 0x352390u: goto label_352390;
        case 0x352394u: goto label_352394;
        case 0x352398u: goto label_352398;
        case 0x35239cu: goto label_35239c;
        case 0x3523a0u: goto label_3523a0;
        case 0x3523a4u: goto label_3523a4;
        case 0x3523a8u: goto label_3523a8;
        case 0x3523acu: goto label_3523ac;
        case 0x3523b0u: goto label_3523b0;
        case 0x3523b4u: goto label_3523b4;
        case 0x3523b8u: goto label_3523b8;
        case 0x3523bcu: goto label_3523bc;
        case 0x3523c0u: goto label_3523c0;
        case 0x3523c4u: goto label_3523c4;
        case 0x3523c8u: goto label_3523c8;
        case 0x3523ccu: goto label_3523cc;
        case 0x3523d0u: goto label_3523d0;
        case 0x3523d4u: goto label_3523d4;
        case 0x3523d8u: goto label_3523d8;
        case 0x3523dcu: goto label_3523dc;
        case 0x3523e0u: goto label_3523e0;
        case 0x3523e4u: goto label_3523e4;
        case 0x3523e8u: goto label_3523e8;
        case 0x3523ecu: goto label_3523ec;
        case 0x3523f0u: goto label_3523f0;
        case 0x3523f4u: goto label_3523f4;
        case 0x3523f8u: goto label_3523f8;
        case 0x3523fcu: goto label_3523fc;
        case 0x352400u: goto label_352400;
        case 0x352404u: goto label_352404;
        case 0x352408u: goto label_352408;
        case 0x35240cu: goto label_35240c;
        case 0x352410u: goto label_352410;
        case 0x352414u: goto label_352414;
        case 0x352418u: goto label_352418;
        case 0x35241cu: goto label_35241c;
        case 0x352420u: goto label_352420;
        case 0x352424u: goto label_352424;
        case 0x352428u: goto label_352428;
        case 0x35242cu: goto label_35242c;
        case 0x352430u: goto label_352430;
        case 0x352434u: goto label_352434;
        case 0x352438u: goto label_352438;
        case 0x35243cu: goto label_35243c;
        case 0x352440u: goto label_352440;
        case 0x352444u: goto label_352444;
        case 0x352448u: goto label_352448;
        case 0x35244cu: goto label_35244c;
        case 0x352450u: goto label_352450;
        case 0x352454u: goto label_352454;
        case 0x352458u: goto label_352458;
        case 0x35245cu: goto label_35245c;
        case 0x352460u: goto label_352460;
        case 0x352464u: goto label_352464;
        case 0x352468u: goto label_352468;
        case 0x35246cu: goto label_35246c;
        case 0x352470u: goto label_352470;
        case 0x352474u: goto label_352474;
        case 0x352478u: goto label_352478;
        case 0x35247cu: goto label_35247c;
        case 0x352480u: goto label_352480;
        case 0x352484u: goto label_352484;
        case 0x352488u: goto label_352488;
        case 0x35248cu: goto label_35248c;
        case 0x352490u: goto label_352490;
        case 0x352494u: goto label_352494;
        case 0x352498u: goto label_352498;
        case 0x35249cu: goto label_35249c;
        case 0x3524a0u: goto label_3524a0;
        case 0x3524a4u: goto label_3524a4;
        case 0x3524a8u: goto label_3524a8;
        case 0x3524acu: goto label_3524ac;
        case 0x3524b0u: goto label_3524b0;
        case 0x3524b4u: goto label_3524b4;
        case 0x3524b8u: goto label_3524b8;
        case 0x3524bcu: goto label_3524bc;
        case 0x3524c0u: goto label_3524c0;
        case 0x3524c4u: goto label_3524c4;
        case 0x3524c8u: goto label_3524c8;
        case 0x3524ccu: goto label_3524cc;
        case 0x3524d0u: goto label_3524d0;
        case 0x3524d4u: goto label_3524d4;
        case 0x3524d8u: goto label_3524d8;
        case 0x3524dcu: goto label_3524dc;
        case 0x3524e0u: goto label_3524e0;
        case 0x3524e4u: goto label_3524e4;
        case 0x3524e8u: goto label_3524e8;
        case 0x3524ecu: goto label_3524ec;
        case 0x3524f0u: goto label_3524f0;
        case 0x3524f4u: goto label_3524f4;
        case 0x3524f8u: goto label_3524f8;
        case 0x3524fcu: goto label_3524fc;
        case 0x352500u: goto label_352500;
        case 0x352504u: goto label_352504;
        case 0x352508u: goto label_352508;
        case 0x35250cu: goto label_35250c;
        case 0x352510u: goto label_352510;
        case 0x352514u: goto label_352514;
        case 0x352518u: goto label_352518;
        case 0x35251cu: goto label_35251c;
        case 0x352520u: goto label_352520;
        case 0x352524u: goto label_352524;
        case 0x352528u: goto label_352528;
        case 0x35252cu: goto label_35252c;
        case 0x352530u: goto label_352530;
        case 0x352534u: goto label_352534;
        case 0x352538u: goto label_352538;
        case 0x35253cu: goto label_35253c;
        case 0x352540u: goto label_352540;
        case 0x352544u: goto label_352544;
        case 0x352548u: goto label_352548;
        case 0x35254cu: goto label_35254c;
        case 0x352550u: goto label_352550;
        case 0x352554u: goto label_352554;
        case 0x352558u: goto label_352558;
        case 0x35255cu: goto label_35255c;
        case 0x352560u: goto label_352560;
        case 0x352564u: goto label_352564;
        case 0x352568u: goto label_352568;
        case 0x35256cu: goto label_35256c;
        case 0x352570u: goto label_352570;
        case 0x352574u: goto label_352574;
        case 0x352578u: goto label_352578;
        case 0x35257cu: goto label_35257c;
        case 0x352580u: goto label_352580;
        case 0x352584u: goto label_352584;
        case 0x352588u: goto label_352588;
        case 0x35258cu: goto label_35258c;
        case 0x352590u: goto label_352590;
        case 0x352594u: goto label_352594;
        case 0x352598u: goto label_352598;
        case 0x35259cu: goto label_35259c;
        case 0x3525a0u: goto label_3525a0;
        case 0x3525a4u: goto label_3525a4;
        case 0x3525a8u: goto label_3525a8;
        case 0x3525acu: goto label_3525ac;
        case 0x3525b0u: goto label_3525b0;
        case 0x3525b4u: goto label_3525b4;
        case 0x3525b8u: goto label_3525b8;
        case 0x3525bcu: goto label_3525bc;
        case 0x3525c0u: goto label_3525c0;
        case 0x3525c4u: goto label_3525c4;
        case 0x3525c8u: goto label_3525c8;
        case 0x3525ccu: goto label_3525cc;
        case 0x3525d0u: goto label_3525d0;
        case 0x3525d4u: goto label_3525d4;
        case 0x3525d8u: goto label_3525d8;
        case 0x3525dcu: goto label_3525dc;
        case 0x3525e0u: goto label_3525e0;
        case 0x3525e4u: goto label_3525e4;
        case 0x3525e8u: goto label_3525e8;
        case 0x3525ecu: goto label_3525ec;
        case 0x3525f0u: goto label_3525f0;
        case 0x3525f4u: goto label_3525f4;
        case 0x3525f8u: goto label_3525f8;
        case 0x3525fcu: goto label_3525fc;
        case 0x352600u: goto label_352600;
        case 0x352604u: goto label_352604;
        case 0x352608u: goto label_352608;
        case 0x35260cu: goto label_35260c;
        case 0x352610u: goto label_352610;
        case 0x352614u: goto label_352614;
        case 0x352618u: goto label_352618;
        case 0x35261cu: goto label_35261c;
        case 0x352620u: goto label_352620;
        case 0x352624u: goto label_352624;
        case 0x352628u: goto label_352628;
        case 0x35262cu: goto label_35262c;
        case 0x352630u: goto label_352630;
        case 0x352634u: goto label_352634;
        case 0x352638u: goto label_352638;
        case 0x35263cu: goto label_35263c;
        case 0x352640u: goto label_352640;
        case 0x352644u: goto label_352644;
        case 0x352648u: goto label_352648;
        case 0x35264cu: goto label_35264c;
        case 0x352650u: goto label_352650;
        case 0x352654u: goto label_352654;
        case 0x352658u: goto label_352658;
        case 0x35265cu: goto label_35265c;
        case 0x352660u: goto label_352660;
        case 0x352664u: goto label_352664;
        case 0x352668u: goto label_352668;
        case 0x35266cu: goto label_35266c;
        case 0x352670u: goto label_352670;
        case 0x352674u: goto label_352674;
        case 0x352678u: goto label_352678;
        case 0x35267cu: goto label_35267c;
        case 0x352680u: goto label_352680;
        case 0x352684u: goto label_352684;
        case 0x352688u: goto label_352688;
        case 0x35268cu: goto label_35268c;
        case 0x352690u: goto label_352690;
        case 0x352694u: goto label_352694;
        case 0x352698u: goto label_352698;
        case 0x35269cu: goto label_35269c;
        case 0x3526a0u: goto label_3526a0;
        case 0x3526a4u: goto label_3526a4;
        case 0x3526a8u: goto label_3526a8;
        case 0x3526acu: goto label_3526ac;
        case 0x3526b0u: goto label_3526b0;
        case 0x3526b4u: goto label_3526b4;
        case 0x3526b8u: goto label_3526b8;
        case 0x3526bcu: goto label_3526bc;
        case 0x3526c0u: goto label_3526c0;
        case 0x3526c4u: goto label_3526c4;
        case 0x3526c8u: goto label_3526c8;
        case 0x3526ccu: goto label_3526cc;
        case 0x3526d0u: goto label_3526d0;
        case 0x3526d4u: goto label_3526d4;
        case 0x3526d8u: goto label_3526d8;
        case 0x3526dcu: goto label_3526dc;
        case 0x3526e0u: goto label_3526e0;
        case 0x3526e4u: goto label_3526e4;
        case 0x3526e8u: goto label_3526e8;
        case 0x3526ecu: goto label_3526ec;
        case 0x3526f0u: goto label_3526f0;
        case 0x3526f4u: goto label_3526f4;
        case 0x3526f8u: goto label_3526f8;
        case 0x3526fcu: goto label_3526fc;
        case 0x352700u: goto label_352700;
        case 0x352704u: goto label_352704;
        case 0x352708u: goto label_352708;
        case 0x35270cu: goto label_35270c;
        case 0x352710u: goto label_352710;
        case 0x352714u: goto label_352714;
        case 0x352718u: goto label_352718;
        case 0x35271cu: goto label_35271c;
        case 0x352720u: goto label_352720;
        case 0x352724u: goto label_352724;
        case 0x352728u: goto label_352728;
        case 0x35272cu: goto label_35272c;
        case 0x352730u: goto label_352730;
        case 0x352734u: goto label_352734;
        case 0x352738u: goto label_352738;
        case 0x35273cu: goto label_35273c;
        case 0x352740u: goto label_352740;
        case 0x352744u: goto label_352744;
        case 0x352748u: goto label_352748;
        case 0x35274cu: goto label_35274c;
        case 0x352750u: goto label_352750;
        case 0x352754u: goto label_352754;
        case 0x352758u: goto label_352758;
        case 0x35275cu: goto label_35275c;
        case 0x352760u: goto label_352760;
        case 0x352764u: goto label_352764;
        case 0x352768u: goto label_352768;
        case 0x35276cu: goto label_35276c;
        case 0x352770u: goto label_352770;
        case 0x352774u: goto label_352774;
        case 0x352778u: goto label_352778;
        case 0x35277cu: goto label_35277c;
        case 0x352780u: goto label_352780;
        case 0x352784u: goto label_352784;
        case 0x352788u: goto label_352788;
        case 0x35278cu: goto label_35278c;
        case 0x352790u: goto label_352790;
        case 0x352794u: goto label_352794;
        case 0x352798u: goto label_352798;
        case 0x35279cu: goto label_35279c;
        case 0x3527a0u: goto label_3527a0;
        case 0x3527a4u: goto label_3527a4;
        case 0x3527a8u: goto label_3527a8;
        case 0x3527acu: goto label_3527ac;
        case 0x3527b0u: goto label_3527b0;
        case 0x3527b4u: goto label_3527b4;
        case 0x3527b8u: goto label_3527b8;
        case 0x3527bcu: goto label_3527bc;
        case 0x3527c0u: goto label_3527c0;
        case 0x3527c4u: goto label_3527c4;
        case 0x3527c8u: goto label_3527c8;
        case 0x3527ccu: goto label_3527cc;
        case 0x3527d0u: goto label_3527d0;
        case 0x3527d4u: goto label_3527d4;
        case 0x3527d8u: goto label_3527d8;
        case 0x3527dcu: goto label_3527dc;
        case 0x3527e0u: goto label_3527e0;
        case 0x3527e4u: goto label_3527e4;
        case 0x3527e8u: goto label_3527e8;
        case 0x3527ecu: goto label_3527ec;
        case 0x3527f0u: goto label_3527f0;
        case 0x3527f4u: goto label_3527f4;
        case 0x3527f8u: goto label_3527f8;
        case 0x3527fcu: goto label_3527fc;
        case 0x352800u: goto label_352800;
        case 0x352804u: goto label_352804;
        case 0x352808u: goto label_352808;
        case 0x35280cu: goto label_35280c;
        case 0x352810u: goto label_352810;
        case 0x352814u: goto label_352814;
        case 0x352818u: goto label_352818;
        case 0x35281cu: goto label_35281c;
        case 0x352820u: goto label_352820;
        case 0x352824u: goto label_352824;
        case 0x352828u: goto label_352828;
        case 0x35282cu: goto label_35282c;
        case 0x352830u: goto label_352830;
        case 0x352834u: goto label_352834;
        case 0x352838u: goto label_352838;
        case 0x35283cu: goto label_35283c;
        case 0x352840u: goto label_352840;
        case 0x352844u: goto label_352844;
        case 0x352848u: goto label_352848;
        case 0x35284cu: goto label_35284c;
        case 0x352850u: goto label_352850;
        case 0x352854u: goto label_352854;
        case 0x352858u: goto label_352858;
        case 0x35285cu: goto label_35285c;
        case 0x352860u: goto label_352860;
        case 0x352864u: goto label_352864;
        case 0x352868u: goto label_352868;
        case 0x35286cu: goto label_35286c;
        case 0x352870u: goto label_352870;
        case 0x352874u: goto label_352874;
        case 0x352878u: goto label_352878;
        case 0x35287cu: goto label_35287c;
        case 0x352880u: goto label_352880;
        case 0x352884u: goto label_352884;
        case 0x352888u: goto label_352888;
        case 0x35288cu: goto label_35288c;
        case 0x352890u: goto label_352890;
        case 0x352894u: goto label_352894;
        case 0x352898u: goto label_352898;
        case 0x35289cu: goto label_35289c;
        case 0x3528a0u: goto label_3528a0;
        case 0x3528a4u: goto label_3528a4;
        case 0x3528a8u: goto label_3528a8;
        case 0x3528acu: goto label_3528ac;
        case 0x3528b0u: goto label_3528b0;
        case 0x3528b4u: goto label_3528b4;
        case 0x3528b8u: goto label_3528b8;
        case 0x3528bcu: goto label_3528bc;
        case 0x3528c0u: goto label_3528c0;
        case 0x3528c4u: goto label_3528c4;
        case 0x3528c8u: goto label_3528c8;
        case 0x3528ccu: goto label_3528cc;
        case 0x3528d0u: goto label_3528d0;
        case 0x3528d4u: goto label_3528d4;
        case 0x3528d8u: goto label_3528d8;
        case 0x3528dcu: goto label_3528dc;
        case 0x3528e0u: goto label_3528e0;
        case 0x3528e4u: goto label_3528e4;
        case 0x3528e8u: goto label_3528e8;
        case 0x3528ecu: goto label_3528ec;
        case 0x3528f0u: goto label_3528f0;
        case 0x3528f4u: goto label_3528f4;
        case 0x3528f8u: goto label_3528f8;
        case 0x3528fcu: goto label_3528fc;
        case 0x352900u: goto label_352900;
        case 0x352904u: goto label_352904;
        case 0x352908u: goto label_352908;
        case 0x35290cu: goto label_35290c;
        case 0x352910u: goto label_352910;
        case 0x352914u: goto label_352914;
        case 0x352918u: goto label_352918;
        case 0x35291cu: goto label_35291c;
        case 0x352920u: goto label_352920;
        case 0x352924u: goto label_352924;
        case 0x352928u: goto label_352928;
        case 0x35292cu: goto label_35292c;
        case 0x352930u: goto label_352930;
        case 0x352934u: goto label_352934;
        case 0x352938u: goto label_352938;
        case 0x35293cu: goto label_35293c;
        case 0x352940u: goto label_352940;
        case 0x352944u: goto label_352944;
        case 0x352948u: goto label_352948;
        case 0x35294cu: goto label_35294c;
        case 0x352950u: goto label_352950;
        case 0x352954u: goto label_352954;
        case 0x352958u: goto label_352958;
        case 0x35295cu: goto label_35295c;
        case 0x352960u: goto label_352960;
        case 0x352964u: goto label_352964;
        case 0x352968u: goto label_352968;
        case 0x35296cu: goto label_35296c;
        case 0x352970u: goto label_352970;
        case 0x352974u: goto label_352974;
        case 0x352978u: goto label_352978;
        case 0x35297cu: goto label_35297c;
        case 0x352980u: goto label_352980;
        case 0x352984u: goto label_352984;
        case 0x352988u: goto label_352988;
        case 0x35298cu: goto label_35298c;
        case 0x352990u: goto label_352990;
        case 0x352994u: goto label_352994;
        case 0x352998u: goto label_352998;
        case 0x35299cu: goto label_35299c;
        case 0x3529a0u: goto label_3529a0;
        case 0x3529a4u: goto label_3529a4;
        case 0x3529a8u: goto label_3529a8;
        case 0x3529acu: goto label_3529ac;
        case 0x3529b0u: goto label_3529b0;
        case 0x3529b4u: goto label_3529b4;
        case 0x3529b8u: goto label_3529b8;
        case 0x3529bcu: goto label_3529bc;
        case 0x3529c0u: goto label_3529c0;
        case 0x3529c4u: goto label_3529c4;
        case 0x3529c8u: goto label_3529c8;
        case 0x3529ccu: goto label_3529cc;
        case 0x3529d0u: goto label_3529d0;
        case 0x3529d4u: goto label_3529d4;
        case 0x3529d8u: goto label_3529d8;
        case 0x3529dcu: goto label_3529dc;
        case 0x3529e0u: goto label_3529e0;
        case 0x3529e4u: goto label_3529e4;
        case 0x3529e8u: goto label_3529e8;
        case 0x3529ecu: goto label_3529ec;
        case 0x3529f0u: goto label_3529f0;
        case 0x3529f4u: goto label_3529f4;
        case 0x3529f8u: goto label_3529f8;
        case 0x3529fcu: goto label_3529fc;
        case 0x352a00u: goto label_352a00;
        case 0x352a04u: goto label_352a04;
        case 0x352a08u: goto label_352a08;
        case 0x352a0cu: goto label_352a0c;
        case 0x352a10u: goto label_352a10;
        case 0x352a14u: goto label_352a14;
        case 0x352a18u: goto label_352a18;
        case 0x352a1cu: goto label_352a1c;
        case 0x352a20u: goto label_352a20;
        case 0x352a24u: goto label_352a24;
        case 0x352a28u: goto label_352a28;
        case 0x352a2cu: goto label_352a2c;
        case 0x352a30u: goto label_352a30;
        case 0x352a34u: goto label_352a34;
        case 0x352a38u: goto label_352a38;
        case 0x352a3cu: goto label_352a3c;
        case 0x352a40u: goto label_352a40;
        case 0x352a44u: goto label_352a44;
        case 0x352a48u: goto label_352a48;
        case 0x352a4cu: goto label_352a4c;
        case 0x352a50u: goto label_352a50;
        case 0x352a54u: goto label_352a54;
        case 0x352a58u: goto label_352a58;
        case 0x352a5cu: goto label_352a5c;
        case 0x352a60u: goto label_352a60;
        case 0x352a64u: goto label_352a64;
        case 0x352a68u: goto label_352a68;
        case 0x352a6cu: goto label_352a6c;
        case 0x352a70u: goto label_352a70;
        case 0x352a74u: goto label_352a74;
        case 0x352a78u: goto label_352a78;
        case 0x352a7cu: goto label_352a7c;
        case 0x352a80u: goto label_352a80;
        case 0x352a84u: goto label_352a84;
        case 0x352a88u: goto label_352a88;
        case 0x352a8cu: goto label_352a8c;
        case 0x352a90u: goto label_352a90;
        case 0x352a94u: goto label_352a94;
        case 0x352a98u: goto label_352a98;
        case 0x352a9cu: goto label_352a9c;
        case 0x352aa0u: goto label_352aa0;
        case 0x352aa4u: goto label_352aa4;
        case 0x352aa8u: goto label_352aa8;
        case 0x352aacu: goto label_352aac;
        case 0x352ab0u: goto label_352ab0;
        case 0x352ab4u: goto label_352ab4;
        case 0x352ab8u: goto label_352ab8;
        case 0x352abcu: goto label_352abc;
        case 0x352ac0u: goto label_352ac0;
        case 0x352ac4u: goto label_352ac4;
        case 0x352ac8u: goto label_352ac8;
        case 0x352accu: goto label_352acc;
        case 0x352ad0u: goto label_352ad0;
        case 0x352ad4u: goto label_352ad4;
        case 0x352ad8u: goto label_352ad8;
        case 0x352adcu: goto label_352adc;
        case 0x352ae0u: goto label_352ae0;
        case 0x352ae4u: goto label_352ae4;
        case 0x352ae8u: goto label_352ae8;
        case 0x352aecu: goto label_352aec;
        case 0x352af0u: goto label_352af0;
        case 0x352af4u: goto label_352af4;
        case 0x352af8u: goto label_352af8;
        case 0x352afcu: goto label_352afc;
        case 0x352b00u: goto label_352b00;
        case 0x352b04u: goto label_352b04;
        case 0x352b08u: goto label_352b08;
        case 0x352b0cu: goto label_352b0c;
        case 0x352b10u: goto label_352b10;
        case 0x352b14u: goto label_352b14;
        case 0x352b18u: goto label_352b18;
        case 0x352b1cu: goto label_352b1c;
        case 0x352b20u: goto label_352b20;
        case 0x352b24u: goto label_352b24;
        case 0x352b28u: goto label_352b28;
        case 0x352b2cu: goto label_352b2c;
        case 0x352b30u: goto label_352b30;
        case 0x352b34u: goto label_352b34;
        case 0x352b38u: goto label_352b38;
        case 0x352b3cu: goto label_352b3c;
        case 0x352b40u: goto label_352b40;
        case 0x352b44u: goto label_352b44;
        case 0x352b48u: goto label_352b48;
        case 0x352b4cu: goto label_352b4c;
        case 0x352b50u: goto label_352b50;
        case 0x352b54u: goto label_352b54;
        case 0x352b58u: goto label_352b58;
        case 0x352b5cu: goto label_352b5c;
        case 0x352b60u: goto label_352b60;
        case 0x352b64u: goto label_352b64;
        case 0x352b68u: goto label_352b68;
        case 0x352b6cu: goto label_352b6c;
        case 0x352b70u: goto label_352b70;
        case 0x352b74u: goto label_352b74;
        case 0x352b78u: goto label_352b78;
        case 0x352b7cu: goto label_352b7c;
        case 0x352b80u: goto label_352b80;
        case 0x352b84u: goto label_352b84;
        case 0x352b88u: goto label_352b88;
        case 0x352b8cu: goto label_352b8c;
        case 0x352b90u: goto label_352b90;
        case 0x352b94u: goto label_352b94;
        case 0x352b98u: goto label_352b98;
        case 0x352b9cu: goto label_352b9c;
        case 0x352ba0u: goto label_352ba0;
        case 0x352ba4u: goto label_352ba4;
        case 0x352ba8u: goto label_352ba8;
        case 0x352bacu: goto label_352bac;
        case 0x352bb0u: goto label_352bb0;
        case 0x352bb4u: goto label_352bb4;
        case 0x352bb8u: goto label_352bb8;
        case 0x352bbcu: goto label_352bbc;
        case 0x352bc0u: goto label_352bc0;
        case 0x352bc4u: goto label_352bc4;
        case 0x352bc8u: goto label_352bc8;
        case 0x352bccu: goto label_352bcc;
        case 0x352bd0u: goto label_352bd0;
        case 0x352bd4u: goto label_352bd4;
        case 0x352bd8u: goto label_352bd8;
        case 0x352bdcu: goto label_352bdc;
        case 0x352be0u: goto label_352be0;
        case 0x352be4u: goto label_352be4;
        case 0x352be8u: goto label_352be8;
        case 0x352becu: goto label_352bec;
        case 0x352bf0u: goto label_352bf0;
        case 0x352bf4u: goto label_352bf4;
        case 0x352bf8u: goto label_352bf8;
        case 0x352bfcu: goto label_352bfc;
        default: break;
    }

    ctx->pc = 0x352380u;

label_352380:
    // 0x352380: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x352380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_352384:
    // 0x352384: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x352384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_352388:
    // 0x352388: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x352388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
label_35238c:
    // 0x35238c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_352390:
    if (ctx->pc == 0x352390u) {
        ctx->pc = 0x352390u;
            // 0x352390: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x352394u;
        goto label_352394;
    }
    ctx->pc = 0x35238Cu;
    {
        const bool branch_taken_0x35238c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x352390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35238Cu;
            // 0x352390: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35238c) {
            ctx->pc = 0x3523A4u;
            goto label_3523a4;
        }
    }
    ctx->pc = 0x352394u;
label_352394:
    // 0x352394: 0xc055234  jal         func_1548D0
label_352398:
    if (ctx->pc == 0x352398u) {
        ctx->pc = 0x35239Cu;
        goto label_35239c;
    }
    ctx->pc = 0x352394u;
    SET_GPR_U32(ctx, 31, 0x35239Cu);
    ctx->pc = 0x1548D0u;
    if (runtime->hasFunction(0x1548D0u)) {
        auto targetFn = runtime->lookupFunction(0x1548D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35239Cu; }
        if (ctx->pc != 0x35239Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001548D0_0x1548d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35239Cu; }
        if (ctx->pc != 0x35239Cu) { return; }
    }
    ctx->pc = 0x35239Cu;
label_35239c:
    // 0x35239c: 0x10000004  b           . + 4 + (0x4 << 2)
label_3523a0:
    if (ctx->pc == 0x3523A0u) {
        ctx->pc = 0x3523A0u;
            // 0x3523a0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x3523A4u;
        goto label_3523a4;
    }
    ctx->pc = 0x35239Cu;
    {
        const bool branch_taken_0x35239c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3523A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35239Cu;
            // 0x3523a0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35239c) {
            ctx->pc = 0x3523B0u;
            goto label_3523b0;
        }
    }
    ctx->pc = 0x3523A4u;
label_3523a4:
    // 0x3523a4: 0xc0550f8  jal         func_1543E0
label_3523a8:
    if (ctx->pc == 0x3523A8u) {
        ctx->pc = 0x3523ACu;
        goto label_3523ac;
    }
    ctx->pc = 0x3523A4u;
    SET_GPR_U32(ctx, 31, 0x3523ACu);
    ctx->pc = 0x1543E0u;
    if (runtime->hasFunction(0x1543E0u)) {
        auto targetFn = runtime->lookupFunction(0x1543E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3523ACu; }
        if (ctx->pc != 0x3523ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001543E0_0x1543e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3523ACu; }
        if (ctx->pc != 0x3523ACu) { return; }
    }
    ctx->pc = 0x3523ACu;
label_3523ac:
    // 0x3523ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3523acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3523b0:
    // 0x3523b0: 0x3e00008  jr          $ra
label_3523b4:
    if (ctx->pc == 0x3523B4u) {
        ctx->pc = 0x3523B4u;
            // 0x3523b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x3523B8u;
        goto label_3523b8;
    }
    ctx->pc = 0x3523B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3523B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3523B0u;
            // 0x3523b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3523B8u;
label_3523b8:
    // 0x3523b8: 0x0  nop
    ctx->pc = 0x3523b8u;
    // NOP
label_3523bc:
    // 0x3523bc: 0x0  nop
    ctx->pc = 0x3523bcu;
    // NOP
label_3523c0:
    // 0x3523c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3523c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3523c4:
    // 0x3523c4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3523c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3523c8:
    // 0x3523c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3523c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3523cc:
    // 0x3523cc: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3523ccu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3523d0:
    // 0x3523d0: 0x50a3000d  beql        $a1, $v1, . + 4 + (0xD << 2)
label_3523d4:
    if (ctx->pc == 0x3523D4u) {
        ctx->pc = 0x3523D4u;
            // 0x3523d4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x3523D8u;
        goto label_3523d8;
    }
    ctx->pc = 0x3523D0u;
    {
        const bool branch_taken_0x3523d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3523d0) {
            ctx->pc = 0x3523D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3523D0u;
            // 0x3523d4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x352408u;
            goto label_352408;
        }
    }
    ctx->pc = 0x3523D8u;
label_3523d8:
    // 0x3523d8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3523d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3523dc:
    // 0x3523dc: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_3523e0:
    if (ctx->pc == 0x3523E0u) {
        ctx->pc = 0x3523E0u;
            // 0x3523e0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3523E4u;
        goto label_3523e4;
    }
    ctx->pc = 0x3523DCu;
    {
        const bool branch_taken_0x3523dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3523dc) {
            ctx->pc = 0x3523E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3523DCu;
            // 0x3523e0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3523F8u;
            goto label_3523f8;
        }
    }
    ctx->pc = 0x3523E4u;
label_3523e4:
    // 0x3523e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3523e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3523e8:
    // 0x3523e8: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
label_3523ec:
    if (ctx->pc == 0x3523ECu) {
        ctx->pc = 0x3523F0u;
        goto label_3523f0;
    }
    ctx->pc = 0x3523E8u;
    {
        const bool branch_taken_0x3523e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3523e8) {
            ctx->pc = 0x352404u;
            goto label_352404;
        }
    }
    ctx->pc = 0x3523F0u;
label_3523f0:
    // 0x3523f0: 0x10000004  b           . + 4 + (0x4 << 2)
label_3523f4:
    if (ctx->pc == 0x3523F4u) {
        ctx->pc = 0x3523F8u;
        goto label_3523f8;
    }
    ctx->pc = 0x3523F0u;
    {
        const bool branch_taken_0x3523f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3523f0) {
            ctx->pc = 0x352404u;
            goto label_352404;
        }
    }
    ctx->pc = 0x3523F8u;
label_3523f8:
    // 0x3523f8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3523f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3523fc:
    // 0x3523fc: 0x320f809  jalr        $t9
label_352400:
    if (ctx->pc == 0x352400u) {
        ctx->pc = 0x352404u;
        goto label_352404;
    }
    ctx->pc = 0x3523FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x352404u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x352404u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x352404u; }
            if (ctx->pc != 0x352404u) { return; }
        }
        }
    }
    ctx->pc = 0x352404u;
label_352404:
    // 0x352404: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x352404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_352408:
    // 0x352408: 0x3e00008  jr          $ra
label_35240c:
    if (ctx->pc == 0x35240Cu) {
        ctx->pc = 0x35240Cu;
            // 0x35240c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x352410u;
        goto label_352410;
    }
    ctx->pc = 0x352408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35240Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x352408u;
            // 0x35240c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x352410u;
label_352410:
    // 0x352410: 0x80d4824  j           func_352090
label_352414:
    if (ctx->pc == 0x352414u) {
        ctx->pc = 0x352414u;
            // 0x352414: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x352418u;
        goto label_352418;
    }
    ctx->pc = 0x352410u;
    ctx->pc = 0x352414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352410u;
            // 0x352414: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x352090u;
    {
        auto targetFn = runtime->lookupFunction(0x352090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x352418u;
label_352418:
    // 0x352418: 0x0  nop
    ctx->pc = 0x352418u;
    // NOP
label_35241c:
    // 0x35241c: 0x0  nop
    ctx->pc = 0x35241cu;
    // NOP
label_352420:
    // 0x352420: 0x3e00008  jr          $ra
label_352424:
    if (ctx->pc == 0x352424u) {
        ctx->pc = 0x352424u;
            // 0x352424: 0x240207da  addiu       $v0, $zero, 0x7DA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2010));
        ctx->pc = 0x352428u;
        goto label_352428;
    }
    ctx->pc = 0x352420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x352424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x352420u;
            // 0x352424: 0x240207da  addiu       $v0, $zero, 0x7DA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2010));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x352428u;
label_352428:
    // 0x352428: 0x0  nop
    ctx->pc = 0x352428u;
    // NOP
label_35242c:
    // 0x35242c: 0x0  nop
    ctx->pc = 0x35242cu;
    // NOP
label_352430:
    // 0x352430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x352430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_352434:
    // 0x352434: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x352434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_352438:
    // 0x352438: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x352438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_35243c:
    // 0x35243c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35243cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_352440:
    // 0x352440: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x352440u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_352444:
    // 0x352444: 0x12200031  beqz        $s1, . + 4 + (0x31 << 2)
label_352448:
    if (ctx->pc == 0x352448u) {
        ctx->pc = 0x352448u;
            // 0x352448: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35244Cu;
        goto label_35244c;
    }
    ctx->pc = 0x352444u;
    {
        const bool branch_taken_0x352444 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x352448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x352444u;
            // 0x352448: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352444) {
            ctx->pc = 0x35250Cu;
            goto label_35250c;
        }
    }
    ctx->pc = 0x35244Cu;
label_35244c:
    // 0x35244c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x35244cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_352450:
    // 0x352450: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x352450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_352454:
    // 0x352454: 0x24635dc0  addiu       $v1, $v1, 0x5DC0
    ctx->pc = 0x352454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24000));
label_352458:
    // 0x352458: 0x24425e00  addiu       $v0, $v0, 0x5E00
    ctx->pc = 0x352458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24064));
label_35245c:
    // 0x35245c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x35245cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_352460:
    // 0x352460: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x352460u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_352464:
    // 0x352464: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x352464u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_352468:
    // 0x352468: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x352468u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_35246c:
    // 0x35246c: 0x320f809  jalr        $t9
label_352470:
    if (ctx->pc == 0x352470u) {
        ctx->pc = 0x352474u;
        goto label_352474;
    }
    ctx->pc = 0x35246Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x352474u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x352474u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x352474u; }
            if (ctx->pc != 0x352474u) { return; }
        }
        }
    }
    ctx->pc = 0x352474u;
label_352474:
    // 0x352474: 0x52200020  beql        $s1, $zero, . + 4 + (0x20 << 2)
label_352478:
    if (ctx->pc == 0x352478u) {
        ctx->pc = 0x352478u;
            // 0x352478: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x35247Cu;
        goto label_35247c;
    }
    ctx->pc = 0x352474u;
    {
        const bool branch_taken_0x352474 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x352474) {
            ctx->pc = 0x352478u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x352474u;
            // 0x352478: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3524F8u;
            goto label_3524f8;
        }
    }
    ctx->pc = 0x35247Cu;
label_35247c:
    // 0x35247c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x35247cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_352480:
    // 0x352480: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x352480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_352484:
    // 0x352484: 0x24422670  addiu       $v0, $v0, 0x2670
    ctx->pc = 0x352484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9840));
label_352488:
    // 0x352488: 0x246326b0  addiu       $v1, $v1, 0x26B0
    ctx->pc = 0x352488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9904));
label_35248c:
    // 0x35248c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x35248cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_352490:
    // 0x352490: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x352490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_352494:
    // 0x352494: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_352498:
    if (ctx->pc == 0x352498u) {
        ctx->pc = 0x352498u;
            // 0x352498: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x35249Cu;
        goto label_35249c;
    }
    ctx->pc = 0x352494u;
    {
        const bool branch_taken_0x352494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x352498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x352494u;
            // 0x352498: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352494) {
            ctx->pc = 0x3524D0u;
            goto label_3524d0;
        }
    }
    ctx->pc = 0x35249Cu;
label_35249c:
    // 0x35249c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x35249cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3524a0:
    // 0x3524a0: 0x24422660  addiu       $v0, $v0, 0x2660
    ctx->pc = 0x3524a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9824));
label_3524a4:
    // 0x3524a4: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3524a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3524a8:
    // 0x3524a8: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x3524a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_3524ac:
    // 0x3524ac: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_3524b0:
    if (ctx->pc == 0x3524B0u) {
        ctx->pc = 0x3524B4u;
        goto label_3524b4;
    }
    ctx->pc = 0x3524ACu;
    {
        const bool branch_taken_0x3524ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3524ac) {
            ctx->pc = 0x3524D0u;
            goto label_3524d0;
        }
    }
    ctx->pc = 0x3524B4u;
label_3524b4:
    // 0x3524b4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3524b8:
    if (ctx->pc == 0x3524B8u) {
        ctx->pc = 0x3524B8u;
            // 0x3524b8: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x3524BCu;
        goto label_3524bc;
    }
    ctx->pc = 0x3524B4u;
    {
        const bool branch_taken_0x3524b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3524b4) {
            ctx->pc = 0x3524B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3524B4u;
            // 0x3524b8: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3524D0u;
            goto label_3524d0;
        }
    }
    ctx->pc = 0x3524BCu;
label_3524bc:
    // 0x3524bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3524bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3524c0:
    // 0x3524c0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3524c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3524c4:
    // 0x3524c4: 0x320f809  jalr        $t9
label_3524c8:
    if (ctx->pc == 0x3524C8u) {
        ctx->pc = 0x3524C8u;
            // 0x3524c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3524CCu;
        goto label_3524cc;
    }
    ctx->pc = 0x3524C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3524CCu);
        ctx->pc = 0x3524C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3524C4u;
            // 0x3524c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3524CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3524CCu; }
            if (ctx->pc != 0x3524CCu) { return; }
        }
        }
    }
    ctx->pc = 0x3524CCu;
label_3524cc:
    // 0x3524cc: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x3524ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_3524d0:
    // 0x3524d0: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_3524d4:
    if (ctx->pc == 0x3524D4u) {
        ctx->pc = 0x3524D8u;
        goto label_3524d8;
    }
    ctx->pc = 0x3524D0u;
    {
        const bool branch_taken_0x3524d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3524d0) {
            ctx->pc = 0x3524F4u;
            goto label_3524f4;
        }
    }
    ctx->pc = 0x3524D8u;
label_3524d8:
    // 0x3524d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3524d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3524dc:
    // 0x3524dc: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x3524dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_3524e0:
    // 0x3524e0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_3524e4:
    if (ctx->pc == 0x3524E4u) {
        ctx->pc = 0x3524E4u;
            // 0x3524e4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3524E8u;
        goto label_3524e8;
    }
    ctx->pc = 0x3524E0u;
    {
        const bool branch_taken_0x3524e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3524E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3524E0u;
            // 0x3524e4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3524e0) {
            ctx->pc = 0x3524F4u;
            goto label_3524f4;
        }
    }
    ctx->pc = 0x3524E8u;
label_3524e8:
    // 0x3524e8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3524e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3524ec:
    // 0x3524ec: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x3524ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_3524f0:
    // 0x3524f0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3524f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3524f4:
    // 0x3524f4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3524f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3524f8:
    // 0x3524f8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3524f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3524fc:
    // 0x3524fc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_352500:
    if (ctx->pc == 0x352500u) {
        ctx->pc = 0x352500u;
            // 0x352500: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x352504u;
        goto label_352504;
    }
    ctx->pc = 0x3524FCu;
    {
        const bool branch_taken_0x3524fc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3524fc) {
            ctx->pc = 0x352500u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3524FCu;
            // 0x352500: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x352510u;
            goto label_352510;
        }
    }
    ctx->pc = 0x352504u;
label_352504:
    // 0x352504: 0xc0400a8  jal         func_1002A0
label_352508:
    if (ctx->pc == 0x352508u) {
        ctx->pc = 0x352508u;
            // 0x352508: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35250Cu;
        goto label_35250c;
    }
    ctx->pc = 0x352504u;
    SET_GPR_U32(ctx, 31, 0x35250Cu);
    ctx->pc = 0x352508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352504u;
            // 0x352508: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35250Cu; }
        if (ctx->pc != 0x35250Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35250Cu; }
        if (ctx->pc != 0x35250Cu) { return; }
    }
    ctx->pc = 0x35250Cu;
label_35250c:
    // 0x35250c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x35250cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_352510:
    // 0x352510: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x352510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_352514:
    // 0x352514: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x352514u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_352518:
    // 0x352518: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x352518u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35251c:
    // 0x35251c: 0x3e00008  jr          $ra
label_352520:
    if (ctx->pc == 0x352520u) {
        ctx->pc = 0x352520u;
            // 0x352520: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x352524u;
        goto label_352524;
    }
    ctx->pc = 0x35251Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x352520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35251Cu;
            // 0x352520: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x352524u;
label_352524:
    // 0x352524: 0x0  nop
    ctx->pc = 0x352524u;
    // NOP
label_352528:
    // 0x352528: 0x0  nop
    ctx->pc = 0x352528u;
    // NOP
label_35252c:
    // 0x35252c: 0x0  nop
    ctx->pc = 0x35252cu;
    // NOP
label_352530:
    // 0x352530: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x352530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
label_352534:
    // 0x352534: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x352534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_352538:
    // 0x352538: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x352538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_35253c:
    // 0x35253c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x35253cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_352540:
    // 0x352540: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x352540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_352544:
    // 0x352544: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x352544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_352548:
    // 0x352548: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x352548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_35254c:
    // 0x35254c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x35254cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_352550:
    // 0x352550: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x352550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_352554:
    // 0x352554: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x352554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_352558:
    // 0x352558: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x352558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_35255c:
    // 0x35255c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x35255cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_352560:
    // 0x352560: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x352560u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_352564:
    // 0x352564: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x352564u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_352568:
    // 0x352568: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x352568u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_35256c:
    // 0x35256c: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_352570:
    if (ctx->pc == 0x352570u) {
        ctx->pc = 0x352570u;
            // 0x352570: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x352574u;
        goto label_352574;
    }
    ctx->pc = 0x35256Cu;
    {
        const bool branch_taken_0x35256c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x352570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35256Cu;
            // 0x352570: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35256c) {
            ctx->pc = 0x3525BCu;
            goto label_3525bc;
        }
    }
    ctx->pc = 0x352574u;
label_352574:
    // 0x352574: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x352574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_352578:
    // 0x352578: 0x50a30192  beql        $a1, $v1, . + 4 + (0x192 << 2)
label_35257c:
    if (ctx->pc == 0x35257Cu) {
        ctx->pc = 0x35257Cu;
            // 0x35257c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x352580u;
        goto label_352580;
    }
    ctx->pc = 0x352578u;
    {
        const bool branch_taken_0x352578 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x352578) {
            ctx->pc = 0x35257Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x352578u;
            // 0x35257c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x352BC4u;
            goto label_352bc4;
        }
    }
    ctx->pc = 0x352580u;
label_352580:
    // 0x352580: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x352580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_352584:
    // 0x352584: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_352588:
    if (ctx->pc == 0x352588u) {
        ctx->pc = 0x35258Cu;
        goto label_35258c;
    }
    ctx->pc = 0x352584u;
    {
        const bool branch_taken_0x352584 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x352584) {
            ctx->pc = 0x352594u;
            goto label_352594;
        }
    }
    ctx->pc = 0x35258Cu;
label_35258c:
    // 0x35258c: 0x1000018c  b           . + 4 + (0x18C << 2)
label_352590:
    if (ctx->pc == 0x352590u) {
        ctx->pc = 0x352594u;
        goto label_352594;
    }
    ctx->pc = 0x35258Cu;
    {
        const bool branch_taken_0x35258c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35258c) {
            ctx->pc = 0x352BC0u;
            goto label_352bc0;
        }
    }
    ctx->pc = 0x352594u;
label_352594:
    // 0x352594: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x352594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_352598:
    // 0x352598: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x352598u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_35259c:
    // 0x35259c: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x35259cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3525a0:
    // 0x3525a0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x3525a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_3525a4:
    // 0x3525a4: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x3525a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_3525a8:
    // 0x3525a8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3525a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3525ac:
    // 0x3525ac: 0x320f809  jalr        $t9
label_3525b0:
    if (ctx->pc == 0x3525B0u) {
        ctx->pc = 0x3525B0u;
            // 0x3525b0: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x3525B4u;
        goto label_3525b4;
    }
    ctx->pc = 0x3525ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3525B4u);
        ctx->pc = 0x3525B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3525ACu;
            // 0x3525b0: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3525B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3525B4u; }
            if (ctx->pc != 0x3525B4u) { return; }
        }
        }
    }
    ctx->pc = 0x3525B4u;
label_3525b4:
    // 0x3525b4: 0x10000182  b           . + 4 + (0x182 << 2)
label_3525b8:
    if (ctx->pc == 0x3525B8u) {
        ctx->pc = 0x3525BCu;
        goto label_3525bc;
    }
    ctx->pc = 0x3525B4u;
    {
        const bool branch_taken_0x3525b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3525b4) {
            ctx->pc = 0x352BC0u;
            goto label_352bc0;
        }
    }
    ctx->pc = 0x3525BCu;
label_3525bc:
    // 0x3525bc: 0x8ea30070  lw          $v1, 0x70($s5)
    ctx->pc = 0x3525bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_3525c0:
    // 0x3525c0: 0x1060017f  beqz        $v1, . + 4 + (0x17F << 2)
label_3525c4:
    if (ctx->pc == 0x3525C4u) {
        ctx->pc = 0x3525C4u;
            // 0x3525c4: 0x7fa300d0  sq          $v1, 0xD0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
        ctx->pc = 0x3525C8u;
        goto label_3525c8;
    }
    ctx->pc = 0x3525C0u;
    {
        const bool branch_taken_0x3525c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3525C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3525C0u;
            // 0x3525c4: 0x7fa300d0  sq          $v1, 0xD0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3525c0) {
            ctx->pc = 0x352BC0u;
            goto label_352bc0;
        }
    }
    ctx->pc = 0x3525C8u;
label_3525c8:
    // 0x3525c8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3525c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3525cc:
    // 0x3525cc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3525ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3525d0:
    // 0x3525d0: 0x8c74e378  lw          $s4, -0x1C88($v1)
    ctx->pc = 0x3525d0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_3525d4:
    // 0x3525d4: 0x26b00090  addiu       $s0, $s5, 0x90
    ctx->pc = 0x3525d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
label_3525d8:
    // 0x3525d8: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x3525d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_3525dc:
    // 0x3525dc: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x3525dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_3525e0:
    // 0x3525e0: 0x8c64d120  lw          $a0, -0x2EE0($v1)
    ctx->pc = 0x3525e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_3525e4:
    // 0x3525e4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3525e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3525e8:
    // 0x3525e8: 0x8c57e370  lw          $s7, -0x1C90($v0)
    ctx->pc = 0x3525e8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_3525ec:
    // 0x3525ec: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3525ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3525f0:
    // 0x3525f0: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x3525f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3525f4:
    // 0x3525f4: 0x8ca20130  lw          $v0, 0x130($a1)
    ctx->pc = 0x3525f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_3525f8:
    // 0x3525f8: 0x8c668a08  lw          $a2, -0x75F8($v1)
    ctx->pc = 0x3525f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3525fc:
    // 0x3525fc: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3525fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_352600:
    // 0x352600: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x352600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_352604:
    // 0x352604: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x352604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_352608:
    // 0x352608: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x352608u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_35260c:
    // 0x35260c: 0x8ea20084  lw          $v0, 0x84($s5)
    ctx->pc = 0x35260cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
label_352610:
    // 0x352610: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x352610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_352614:
    // 0x352614: 0xe31021  addu        $v0, $a3, $v1
    ctx->pc = 0x352614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_352618:
    // 0x352618: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x352618u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35261c:
    // 0x35261c: 0x8ea3008c  lw          $v1, 0x8C($s5)
    ctx->pc = 0x35261cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 140)));
label_352620:
    // 0x352620: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x352620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_352624:
    // 0x352624: 0x24f60010  addiu       $s6, $a3, 0x10
    ctx->pc = 0x352624u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_352628:
    // 0x352628: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_35262c:
    if (ctx->pc == 0x35262Cu) {
        ctx->pc = 0x35262Cu;
            // 0x35262c: 0x7fa200c0  sq          $v0, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
        ctx->pc = 0x352630u;
        goto label_352630;
    }
    ctx->pc = 0x352628u;
    {
        const bool branch_taken_0x352628 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x35262Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x352628u;
            // 0x35262c: 0x7fa200c0  sq          $v0, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352628) {
            ctx->pc = 0x35264Cu;
            goto label_35264c;
        }
    }
    ctx->pc = 0x352630u;
label_352630:
    // 0x352630: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x352630u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
label_352634:
    // 0x352634: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x352634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_352638:
    // 0x352638: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x352638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_35263c:
    // 0x35263c: 0x0  nop
    ctx->pc = 0x35263cu;
    // NOP
label_352640:
    // 0x352640: 0x0  nop
    ctx->pc = 0x352640u;
    // NOP
label_352644:
    // 0x352644: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
label_352648:
    if (ctx->pc == 0x352648u) {
        ctx->pc = 0x35264Cu;
        goto label_35264c;
    }
    ctx->pc = 0x352644u;
    {
        const bool branch_taken_0x352644 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x352644) {
            ctx->pc = 0x352630u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_352630;
        }
    }
    ctx->pc = 0x35264Cu;
label_35264c:
    // 0x35264c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35264cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_352650:
    // 0x352650: 0xafa301d4  sw          $v1, 0x1D4($sp)
    ctx->pc = 0x352650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 3));
label_352654:
    // 0x352654: 0xac40e3d8  sw          $zero, -0x1C28($v0)
    ctx->pc = 0x352654u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960088), GPR_U32(ctx, 0));
label_352658:
    // 0x352658: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x352658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35265c:
    // 0x35265c: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x35265cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_352660:
    // 0x352660: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x352660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_352664:
    // 0x352664: 0x8ea40088  lw          $a0, 0x88($s5)
    ctx->pc = 0x352664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
label_352668:
    // 0x352668: 0xc04e738  jal         func_139CE0
label_35266c:
    if (ctx->pc == 0x35266Cu) {
        ctx->pc = 0x35266Cu;
            // 0x35266c: 0xafa201d0  sw          $v0, 0x1D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 2));
        ctx->pc = 0x352670u;
        goto label_352670;
    }
    ctx->pc = 0x352668u;
    SET_GPR_U32(ctx, 31, 0x352670u);
    ctx->pc = 0x35266Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352668u;
            // 0x35266c: 0xafa201d0  sw          $v0, 0x1D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352670u; }
        if (ctx->pc != 0x352670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352670u; }
        if (ctx->pc != 0x352670u) { return; }
    }
    ctx->pc = 0x352670u;
label_352670:
    // 0x352670: 0x92a200b4  lbu         $v0, 0xB4($s5)
    ctx->pc = 0x352670u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 180)));
label_352674:
    // 0x352674: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_352678:
    if (ctx->pc == 0x352678u) {
        ctx->pc = 0x35267Cu;
        goto label_35267c;
    }
    ctx->pc = 0x352674u;
    {
        const bool branch_taken_0x352674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x352674) {
            ctx->pc = 0x352694u;
            goto label_352694;
        }
    }
    ctx->pc = 0x35267Cu;
label_35267c:
    // 0x35267c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35267cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_352680:
    // 0x352680: 0x8c44e3e8  lw          $a0, -0x1C18($v0)
    ctx->pc = 0x352680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_352684:
    // 0x352684: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x352684u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_352688:
    // 0x352688: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x352688u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_35268c:
    // 0x35268c: 0x320f809  jalr        $t9
label_352690:
    if (ctx->pc == 0x352690u) {
        ctx->pc = 0x352694u;
        goto label_352694;
    }
    ctx->pc = 0x35268Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x352694u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x352694u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x352694u; }
            if (ctx->pc != 0x352694u) { return; }
        }
        }
    }
    ctx->pc = 0x352694u;
label_352694:
    // 0x352694: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x352694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_352698:
    // 0x352698: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x352698u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35269c:
    // 0x35269c: 0xc45436e8  lwc1        $f20, 0x36E8($v0)
    ctx->pc = 0x35269cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3526a0:
    // 0x3526a0: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x3526a0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3526a4:
    // 0x3526a4: 0x8ea30074  lw          $v1, 0x74($s5)
    ctx->pc = 0x3526a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_3526a8:
    // 0x3526a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3526a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3526ac:
    // 0x3526ac: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x3526acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_3526b0:
    // 0x3526b0: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x3526b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3526b4:
    // 0x3526b4: 0x8e230068  lw          $v1, 0x68($s1)
    ctx->pc = 0x3526b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_3526b8:
    // 0x3526b8: 0x1462006f  bne         $v1, $v0, . + 4 + (0x6F << 2)
label_3526bc:
    if (ctx->pc == 0x3526BCu) {
        ctx->pc = 0x3526C0u;
        goto label_3526c0;
    }
    ctx->pc = 0x3526B8u;
    {
        const bool branch_taken_0x3526b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3526b8) {
            ctx->pc = 0x352878u;
            goto label_352878;
        }
    }
    ctx->pc = 0x3526C0u;
label_3526c0:
    // 0x3526c0: 0xc04e738  jal         func_139CE0
label_3526c4:
    if (ctx->pc == 0x3526C4u) {
        ctx->pc = 0x3526C4u;
            // 0x3526c4: 0x8ea40094  lw          $a0, 0x94($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 148)));
        ctx->pc = 0x3526C8u;
        goto label_3526c8;
    }
    ctx->pc = 0x3526C0u;
    SET_GPR_U32(ctx, 31, 0x3526C8u);
    ctx->pc = 0x3526C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3526C0u;
            // 0x3526c4: 0x8ea40094  lw          $a0, 0x94($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 148)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3526C8u; }
        if (ctx->pc != 0x3526C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3526C8u; }
        if (ctx->pc != 0x3526C8u) { return; }
    }
    ctx->pc = 0x3526C8u;
label_3526c8:
    // 0x3526c8: 0xc0d410c  jal         func_350430
label_3526cc:
    if (ctx->pc == 0x3526CCu) {
        ctx->pc = 0x3526CCu;
            // 0x3526cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3526D0u;
        goto label_3526d0;
    }
    ctx->pc = 0x3526C8u;
    SET_GPR_U32(ctx, 31, 0x3526D0u);
    ctx->pc = 0x3526CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3526C8u;
            // 0x3526cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350430u;
    if (runtime->hasFunction(0x350430u)) {
        auto targetFn = runtime->lookupFunction(0x350430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3526D0u; }
        if (ctx->pc != 0x3526D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350430_0x350430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3526D0u; }
        if (ctx->pc != 0x3526D0u) { return; }
    }
    ctx->pc = 0x3526D0u;
label_3526d0:
    // 0x3526d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3526d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3526d4:
    // 0x3526d4: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
label_3526d8:
    if (ctx->pc == 0x3526D8u) {
        ctx->pc = 0x3526DCu;
        goto label_3526dc;
    }
    ctx->pc = 0x3526D4u;
    {
        const bool branch_taken_0x3526d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3526d4) {
            ctx->pc = 0x352868u;
            goto label_352868;
        }
    }
    ctx->pc = 0x3526DCu;
label_3526dc:
    // 0x3526dc: 0xc0d1c14  jal         func_347050
label_3526e0:
    if (ctx->pc == 0x3526E0u) {
        ctx->pc = 0x3526E0u;
            // 0x3526e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3526E4u;
        goto label_3526e4;
    }
    ctx->pc = 0x3526DCu;
    SET_GPR_U32(ctx, 31, 0x3526E4u);
    ctx->pc = 0x3526E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3526DCu;
            // 0x3526e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3526E4u; }
        if (ctx->pc != 0x3526E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3526E4u; }
        if (ctx->pc != 0x3526E4u) { return; }
    }
    ctx->pc = 0x3526E4u;
label_3526e4:
    // 0x3526e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3526e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3526e8:
    // 0x3526e8: 0xc04f278  jal         func_13C9E0
label_3526ec:
    if (ctx->pc == 0x3526ECu) {
        ctx->pc = 0x3526ECu;
            // 0x3526ec: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x3526F0u;
        goto label_3526f0;
    }
    ctx->pc = 0x3526E8u;
    SET_GPR_U32(ctx, 31, 0x3526F0u);
    ctx->pc = 0x3526ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3526E8u;
            // 0x3526ec: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3526F0u; }
        if (ctx->pc != 0x3526F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3526F0u; }
        if (ctx->pc != 0x3526F0u) { return; }
    }
    ctx->pc = 0x3526F0u;
label_3526f0:
    // 0x3526f0: 0xc0d1c10  jal         func_347040
label_3526f4:
    if (ctx->pc == 0x3526F4u) {
        ctx->pc = 0x3526F4u;
            // 0x3526f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3526F8u;
        goto label_3526f8;
    }
    ctx->pc = 0x3526F0u;
    SET_GPR_U32(ctx, 31, 0x3526F8u);
    ctx->pc = 0x3526F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3526F0u;
            // 0x3526f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3526F8u; }
        if (ctx->pc != 0x3526F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3526F8u; }
        if (ctx->pc != 0x3526F8u) { return; }
    }
    ctx->pc = 0x3526F8u;
label_3526f8:
    // 0x3526f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3526f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3526fc:
    // 0x3526fc: 0xc04ce80  jal         func_133A00
label_352700:
    if (ctx->pc == 0x352700u) {
        ctx->pc = 0x352700u;
            // 0x352700: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x352704u;
        goto label_352704;
    }
    ctx->pc = 0x3526FCu;
    SET_GPR_U32(ctx, 31, 0x352704u);
    ctx->pc = 0x352700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3526FCu;
            // 0x352700: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352704u; }
        if (ctx->pc != 0x352704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352704u; }
        if (ctx->pc != 0x352704u) { return; }
    }
    ctx->pc = 0x352704u;
label_352704:
    // 0x352704: 0xc0d4108  jal         func_350420
label_352708:
    if (ctx->pc == 0x352708u) {
        ctx->pc = 0x35270Cu;
        goto label_35270c;
    }
    ctx->pc = 0x352704u;
    SET_GPR_U32(ctx, 31, 0x35270Cu);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35270Cu; }
        if (ctx->pc != 0x35270Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35270Cu; }
        if (ctx->pc != 0x35270Cu) { return; }
    }
    ctx->pc = 0x35270Cu;
label_35270c:
    // 0x35270c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35270cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_352710:
    // 0x352710: 0xc0d4104  jal         func_350410
label_352714:
    if (ctx->pc == 0x352714u) {
        ctx->pc = 0x352714u;
            // 0x352714: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x352718u;
        goto label_352718;
    }
    ctx->pc = 0x352710u;
    SET_GPR_U32(ctx, 31, 0x352718u);
    ctx->pc = 0x352714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352710u;
            // 0x352714: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352718u; }
        if (ctx->pc != 0x352718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352718u; }
        if (ctx->pc != 0x352718u) { return; }
    }
    ctx->pc = 0x352718u;
label_352718:
    // 0x352718: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x352718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_35271c:
    // 0x35271c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35271cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_352720:
    // 0x352720: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x352720u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_352724:
    // 0x352724: 0x27a70190  addiu       $a3, $sp, 0x190
    ctx->pc = 0x352724u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_352728:
    // 0x352728: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x352728u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35272c:
    // 0x35272c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x35272cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_352730:
    // 0x352730: 0xc0d40ac  jal         func_3502B0
label_352734:
    if (ctx->pc == 0x352734u) {
        ctx->pc = 0x352734u;
            // 0x352734: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x352738u;
        goto label_352738;
    }
    ctx->pc = 0x352730u;
    SET_GPR_U32(ctx, 31, 0x352738u);
    ctx->pc = 0x352734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352730u;
            // 0x352734: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352738u; }
        if (ctx->pc != 0x352738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352738u; }
        if (ctx->pc != 0x352738u) { return; }
    }
    ctx->pc = 0x352738u;
label_352738:
    // 0x352738: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x352738u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_35273c:
    // 0x35273c: 0x1020004a  beqz        $at, . + 4 + (0x4A << 2)
label_352740:
    if (ctx->pc == 0x352740u) {
        ctx->pc = 0x352740u;
            // 0x352740: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x352744u;
        goto label_352744;
    }
    ctx->pc = 0x35273Cu;
    {
        const bool branch_taken_0x35273c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x352740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35273Cu;
            // 0x352740: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35273c) {
            ctx->pc = 0x352868u;
            goto label_352868;
        }
    }
    ctx->pc = 0x352744u;
label_352744:
    // 0x352744: 0xc0d4b54  jal         func_352D50
label_352748:
    if (ctx->pc == 0x352748u) {
        ctx->pc = 0x352748u;
            // 0x352748: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35274Cu;
        goto label_35274c;
    }
    ctx->pc = 0x352744u;
    SET_GPR_U32(ctx, 31, 0x35274Cu);
    ctx->pc = 0x352748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352744u;
            // 0x352748: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x352D50u;
    if (runtime->hasFunction(0x352D50u)) {
        auto targetFn = runtime->lookupFunction(0x352D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35274Cu; }
        if (ctx->pc != 0x35274Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00352D50_0x352d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35274Cu; }
        if (ctx->pc != 0x35274Cu) { return; }
    }
    ctx->pc = 0x35274Cu;
label_35274c:
    // 0x35274c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_352750:
    if (ctx->pc == 0x352750u) {
        ctx->pc = 0x352754u;
        goto label_352754;
    }
    ctx->pc = 0x35274Cu;
    {
        const bool branch_taken_0x35274c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35274c) {
            ctx->pc = 0x352770u;
            goto label_352770;
        }
    }
    ctx->pc = 0x352754u;
label_352754:
    // 0x352754: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x352754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_352758:
    // 0x352758: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x352758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_35275c:
    // 0x35275c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x35275cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_352760:
    // 0x352760: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x352760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_352764:
    // 0x352764: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x352764u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_352768:
    // 0x352768: 0xc04ce50  jal         func_133940
label_35276c:
    if (ctx->pc == 0x35276Cu) {
        ctx->pc = 0x35276Cu;
            // 0x35276c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x352770u;
        goto label_352770;
    }
    ctx->pc = 0x352768u;
    SET_GPR_U32(ctx, 31, 0x352770u);
    ctx->pc = 0x35276Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352768u;
            // 0x35276c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352770u; }
        if (ctx->pc != 0x352770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352770u; }
        if (ctx->pc != 0x352770u) { return; }
    }
    ctx->pc = 0x352770u;
label_352770:
    // 0x352770: 0xc0d4b50  jal         func_352D40
label_352774:
    if (ctx->pc == 0x352774u) {
        ctx->pc = 0x352778u;
        goto label_352778;
    }
    ctx->pc = 0x352770u;
    SET_GPR_U32(ctx, 31, 0x352778u);
    ctx->pc = 0x352D40u;
    if (runtime->hasFunction(0x352D40u)) {
        auto targetFn = runtime->lookupFunction(0x352D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352778u; }
        if (ctx->pc != 0x352778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00352D40_0x352d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352778u; }
        if (ctx->pc != 0x352778u) { return; }
    }
    ctx->pc = 0x352778u;
label_352778:
    // 0x352778: 0xc0d4b4c  jal         func_352D30
label_35277c:
    if (ctx->pc == 0x35277Cu) {
        ctx->pc = 0x35277Cu;
            // 0x35277c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x352780u;
        goto label_352780;
    }
    ctx->pc = 0x352778u;
    SET_GPR_U32(ctx, 31, 0x352780u);
    ctx->pc = 0x35277Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352778u;
            // 0x35277c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x352D30u;
    if (runtime->hasFunction(0x352D30u)) {
        auto targetFn = runtime->lookupFunction(0x352D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352780u; }
        if (ctx->pc != 0x352780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00352D30_0x352d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352780u; }
        if (ctx->pc != 0x352780u) { return; }
    }
    ctx->pc = 0x352780u;
label_352780:
    // 0x352780: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x352780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_352784:
    // 0x352784: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x352784u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_352788:
    // 0x352788: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x352788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35278c:
    // 0x35278c: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x35278cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_352790:
    // 0x352790: 0xc04ce50  jal         func_133940
label_352794:
    if (ctx->pc == 0x352794u) {
        ctx->pc = 0x352794u;
            // 0x352794: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x352798u;
        goto label_352798;
    }
    ctx->pc = 0x352790u;
    SET_GPR_U32(ctx, 31, 0x352798u);
    ctx->pc = 0x352794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352790u;
            // 0x352794: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352798u; }
        if (ctx->pc != 0x352798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352798u; }
        if (ctx->pc != 0x352798u) { return; }
    }
    ctx->pc = 0x352798u;
label_352798:
    // 0x352798: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x352798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_35279c:
    // 0x35279c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x35279cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3527a0:
    // 0x3527a0: 0xc04cd60  jal         func_133580
label_3527a4:
    if (ctx->pc == 0x3527A4u) {
        ctx->pc = 0x3527A4u;
            // 0x3527a4: 0x27a60190  addiu       $a2, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x3527A8u;
        goto label_3527a8;
    }
    ctx->pc = 0x3527A0u;
    SET_GPR_U32(ctx, 31, 0x3527A8u);
    ctx->pc = 0x3527A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3527A0u;
            // 0x3527a4: 0x27a60190  addiu       $a2, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3527A8u; }
        if (ctx->pc != 0x3527A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3527A8u; }
        if (ctx->pc != 0x3527A8u) { return; }
    }
    ctx->pc = 0x3527A8u;
label_3527a8:
    // 0x3527a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3527a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3527ac:
    // 0x3527ac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3527acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3527b0:
    // 0x3527b0: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x3527b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_3527b4:
    // 0x3527b4: 0xc04e4a4  jal         func_139290
label_3527b8:
    if (ctx->pc == 0x3527B8u) {
        ctx->pc = 0x3527B8u;
            // 0x3527b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3527BCu;
        goto label_3527bc;
    }
    ctx->pc = 0x3527B4u;
    SET_GPR_U32(ctx, 31, 0x3527BCu);
    ctx->pc = 0x3527B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3527B4u;
            // 0x3527b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3527BCu; }
        if (ctx->pc != 0x3527BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3527BCu; }
        if (ctx->pc != 0x3527BCu) { return; }
    }
    ctx->pc = 0x3527BCu;
label_3527bc:
    // 0x3527bc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3527bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3527c0:
    // 0x3527c0: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x3527c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_3527c4:
    // 0x3527c4: 0x320f809  jalr        $t9
label_3527c8:
    if (ctx->pc == 0x3527C8u) {
        ctx->pc = 0x3527C8u;
            // 0x3527c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3527CCu;
        goto label_3527cc;
    }
    ctx->pc = 0x3527C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3527CCu);
        ctx->pc = 0x3527C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3527C4u;
            // 0x3527c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3527CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3527CCu; }
            if (ctx->pc != 0x3527CCu) { return; }
        }
        }
    }
    ctx->pc = 0x3527CCu;
label_3527cc:
    // 0x3527cc: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x3527ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3527d0:
    // 0x3527d0: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x3527d0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_3527d4:
    // 0x3527d4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x3527d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3527d8:
    // 0x3527d8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3527d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3527dc:
    // 0x3527dc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3527dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3527e0:
    // 0x3527e0: 0x27a70150  addiu       $a3, $sp, 0x150
    ctx->pc = 0x3527e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_3527e4:
    // 0x3527e4: 0xc04cfcc  jal         func_133F30
label_3527e8:
    if (ctx->pc == 0x3527E8u) {
        ctx->pc = 0x3527E8u;
            // 0x3527e8: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->pc = 0x3527ECu;
        goto label_3527ec;
    }
    ctx->pc = 0x3527E4u;
    SET_GPR_U32(ctx, 31, 0x3527ECu);
    ctx->pc = 0x3527E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3527E4u;
            // 0x3527e8: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3527ECu; }
        if (ctx->pc != 0x3527ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3527ECu; }
        if (ctx->pc != 0x3527ECu) { return; }
    }
    ctx->pc = 0x3527ECu;
label_3527ec:
    // 0x3527ec: 0xc62c0090  lwc1        $f12, 0x90($s1)
    ctx->pc = 0x3527ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3527f0:
    // 0x3527f0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3527f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3527f4:
    // 0x3527f4: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x3527f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3527f8:
    // 0x3527f8: 0xc054bbc  jal         func_152EF0
label_3527fc:
    if (ctx->pc == 0x3527FCu) {
        ctx->pc = 0x3527FCu;
            // 0x3527fc: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x352800u;
        goto label_352800;
    }
    ctx->pc = 0x3527F8u;
    SET_GPR_U32(ctx, 31, 0x352800u);
    ctx->pc = 0x3527FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3527F8u;
            // 0x3527fc: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352800u; }
        if (ctx->pc != 0x352800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352800u; }
        if (ctx->pc != 0x352800u) { return; }
    }
    ctx->pc = 0x352800u;
label_352800:
    // 0x352800: 0xc62c009c  lwc1        $f12, 0x9C($s1)
    ctx->pc = 0x352800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_352804:
    // 0x352804: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x352804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_352808:
    // 0x352808: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x352808u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35280c:
    // 0x35280c: 0x0  nop
    ctx->pc = 0x35280cu;
    // NOP
label_352810:
    // 0x352810: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x352810u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_352814:
    // 0x352814: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_352818:
    if (ctx->pc == 0x352818u) {
        ctx->pc = 0x352818u;
            // 0x352818: 0x24110080  addiu       $s1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x35281Cu;
        goto label_35281c;
    }
    ctx->pc = 0x352814u;
    {
        const bool branch_taken_0x352814 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x352818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x352814u;
            // 0x352818: 0x24110080  addiu       $s1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352814) {
            ctx->pc = 0x352838u;
            goto label_352838;
        }
    }
    ctx->pc = 0x35281Cu;
label_35281c:
    // 0x35281c: 0xc054c3c  jal         func_1530F0
label_352820:
    if (ctx->pc == 0x352820u) {
        ctx->pc = 0x352820u;
            // 0x352820: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x352824u;
        goto label_352824;
    }
    ctx->pc = 0x35281Cu;
    SET_GPR_U32(ctx, 31, 0x352824u);
    ctx->pc = 0x352820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35281Cu;
            // 0x352820: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530F0u;
    if (runtime->hasFunction(0x1530F0u)) {
        auto targetFn = runtime->lookupFunction(0x1530F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352824u; }
        if (ctx->pc != 0x352824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530F0_0x1530f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352824u; }
        if (ctx->pc != 0x352824u) { return; }
    }
    ctx->pc = 0x352824u;
label_352824:
    // 0x352824: 0xc054c40  jal         func_153100
label_352828:
    if (ctx->pc == 0x352828u) {
        ctx->pc = 0x352828u;
            // 0x352828: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35282Cu;
        goto label_35282c;
    }
    ctx->pc = 0x352824u;
    SET_GPR_U32(ctx, 31, 0x35282Cu);
    ctx->pc = 0x352828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352824u;
            // 0x352828: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153100u;
    if (runtime->hasFunction(0x153100u)) {
        auto targetFn = runtime->lookupFunction(0x153100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35282Cu; }
        if (ctx->pc != 0x35282Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153100_0x153100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35282Cu; }
        if (ctx->pc != 0x35282Cu) { return; }
    }
    ctx->pc = 0x35282Cu;
label_35282c:
    // 0x35282c: 0x3c020280  lui         $v0, 0x280
    ctx->pc = 0x35282cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)640 << 16));
label_352830:
    // 0x352830: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x352830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
label_352834:
    // 0x352834: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x352834u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_352838:
    // 0x352838: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x352838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_35283c:
    // 0x35283c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x35283cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_352840:
    // 0x352840: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x352840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_352844:
    // 0x352844: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x352844u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_352848:
    // 0x352848: 0xc054c2c  jal         func_1530B0
label_35284c:
    if (ctx->pc == 0x35284Cu) {
        ctx->pc = 0x35284Cu;
            // 0x35284c: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->pc = 0x352850u;
        goto label_352850;
    }
    ctx->pc = 0x352848u;
    SET_GPR_U32(ctx, 31, 0x352850u);
    ctx->pc = 0x35284Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352848u;
            // 0x35284c: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352850u; }
        if (ctx->pc != 0x352850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352850u; }
        if (ctx->pc != 0x352850u) { return; }
    }
    ctx->pc = 0x352850u;
label_352850:
    // 0x352850: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x352850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_352854:
    // 0x352854: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x352854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_352858:
    // 0x352858: 0xc054c3c  jal         func_1530F0
label_35285c:
    if (ctx->pc == 0x35285Cu) {
        ctx->pc = 0x35285Cu;
            // 0x35285c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x352860u;
        goto label_352860;
    }
    ctx->pc = 0x352858u;
    SET_GPR_U32(ctx, 31, 0x352860u);
    ctx->pc = 0x35285Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352858u;
            // 0x35285c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530F0u;
    if (runtime->hasFunction(0x1530F0u)) {
        auto targetFn = runtime->lookupFunction(0x1530F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352860u; }
        if (ctx->pc != 0x352860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530F0_0x1530f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352860u; }
        if (ctx->pc != 0x352860u) { return; }
    }
    ctx->pc = 0x352860u;
label_352860:
    // 0x352860: 0xc054c40  jal         func_153100
label_352864:
    if (ctx->pc == 0x352864u) {
        ctx->pc = 0x352864u;
            // 0x352864: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x352868u;
        goto label_352868;
    }
    ctx->pc = 0x352860u;
    SET_GPR_U32(ctx, 31, 0x352868u);
    ctx->pc = 0x352864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352860u;
            // 0x352864: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153100u;
    if (runtime->hasFunction(0x153100u)) {
        auto targetFn = runtime->lookupFunction(0x153100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352868u; }
        if (ctx->pc != 0x352868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153100_0x153100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352868u; }
        if (ctx->pc != 0x352868u) { return; }
    }
    ctx->pc = 0x352868u;
label_352868:
    // 0x352868: 0xc04e738  jal         func_139CE0
label_35286c:
    if (ctx->pc == 0x35286Cu) {
        ctx->pc = 0x35286Cu;
            // 0x35286c: 0x8ea40088  lw          $a0, 0x88($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
        ctx->pc = 0x352870u;
        goto label_352870;
    }
    ctx->pc = 0x352868u;
    SET_GPR_U32(ctx, 31, 0x352870u);
    ctx->pc = 0x35286Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352868u;
            // 0x35286c: 0x8ea40088  lw          $a0, 0x88($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352870u; }
        if (ctx->pc != 0x352870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352870u; }
        if (ctx->pc != 0x352870u) { return; }
    }
    ctx->pc = 0x352870u;
label_352870:
    // 0x352870: 0x100000b1  b           . + 4 + (0xB1 << 2)
label_352874:
    if (ctx->pc == 0x352874u) {
        ctx->pc = 0x352878u;
        goto label_352878;
    }
    ctx->pc = 0x352870u;
    {
        const bool branch_taken_0x352870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x352870) {
            ctx->pc = 0x352B38u;
            goto label_352b38;
        }
    }
    ctx->pc = 0x352878u;
label_352878:
    // 0x352878: 0xafb401dc  sw          $s4, 0x1DC($sp)
    ctx->pc = 0x352878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 20));
label_35287c:
    // 0x35287c: 0xafb70140  sw          $s7, 0x140($sp)
    ctx->pc = 0x35287cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 23));
label_352880:
    // 0x352880: 0x92220074  lbu         $v0, 0x74($s1)
    ctx->pc = 0x352880u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 116)));
label_352884:
    // 0x352884: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x352884u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_352888:
    // 0x352888: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x352888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_35288c:
    // 0x35288c: 0x8c5201d0  lw          $s2, 0x1D0($v0)
    ctx->pc = 0x35288cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 464)));
label_352890:
    // 0x352890: 0xc0d410c  jal         func_350430
label_352894:
    if (ctx->pc == 0x352894u) {
        ctx->pc = 0x352894u;
            // 0x352894: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x352898u;
        goto label_352898;
    }
    ctx->pc = 0x352890u;
    SET_GPR_U32(ctx, 31, 0x352898u);
    ctx->pc = 0x352894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352890u;
            // 0x352894: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350430u;
    if (runtime->hasFunction(0x350430u)) {
        auto targetFn = runtime->lookupFunction(0x350430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352898u; }
        if (ctx->pc != 0x352898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350430_0x350430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352898u; }
        if (ctx->pc != 0x352898u) { return; }
    }
    ctx->pc = 0x352898u;
label_352898:
    // 0x352898: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x352898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_35289c:
    // 0x35289c: 0x106000a6  beqz        $v1, . + 4 + (0xA6 << 2)
label_3528a0:
    if (ctx->pc == 0x3528A0u) {
        ctx->pc = 0x3528A4u;
        goto label_3528a4;
    }
    ctx->pc = 0x35289Cu;
    {
        const bool branch_taken_0x35289c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35289c) {
            ctx->pc = 0x352B38u;
            goto label_352b38;
        }
    }
    ctx->pc = 0x3528A4u;
label_3528a4:
    // 0x3528a4: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x3528a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_3528a8:
    // 0x3528a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3528a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3528ac:
    // 0x3528ac: 0x148300a2  bne         $a0, $v1, . + 4 + (0xA2 << 2)
label_3528b0:
    if (ctx->pc == 0x3528B0u) {
        ctx->pc = 0x3528B4u;
        goto label_3528b4;
    }
    ctx->pc = 0x3528ACu;
    {
        const bool branch_taken_0x3528ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3528ac) {
            ctx->pc = 0x352B38u;
            goto label_352b38;
        }
    }
    ctx->pc = 0x3528B4u;
label_3528b4:
    // 0x3528b4: 0xc0d1c14  jal         func_347050
label_3528b8:
    if (ctx->pc == 0x3528B8u) {
        ctx->pc = 0x3528B8u;
            // 0x3528b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3528BCu;
        goto label_3528bc;
    }
    ctx->pc = 0x3528B4u;
    SET_GPR_U32(ctx, 31, 0x3528BCu);
    ctx->pc = 0x3528B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3528B4u;
            // 0x3528b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3528BCu; }
        if (ctx->pc != 0x3528BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3528BCu; }
        if (ctx->pc != 0x3528BCu) { return; }
    }
    ctx->pc = 0x3528BCu;
label_3528bc:
    // 0x3528bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3528bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3528c0:
    // 0x3528c0: 0xc04f278  jal         func_13C9E0
label_3528c4:
    if (ctx->pc == 0x3528C4u) {
        ctx->pc = 0x3528C4u;
            // 0x3528c4: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x3528C8u;
        goto label_3528c8;
    }
    ctx->pc = 0x3528C0u;
    SET_GPR_U32(ctx, 31, 0x3528C8u);
    ctx->pc = 0x3528C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3528C0u;
            // 0x3528c4: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3528C8u; }
        if (ctx->pc != 0x3528C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3528C8u; }
        if (ctx->pc != 0x3528C8u) { return; }
    }
    ctx->pc = 0x3528C8u;
label_3528c8:
    // 0x3528c8: 0xc0d1c10  jal         func_347040
label_3528cc:
    if (ctx->pc == 0x3528CCu) {
        ctx->pc = 0x3528CCu;
            // 0x3528cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3528D0u;
        goto label_3528d0;
    }
    ctx->pc = 0x3528C8u;
    SET_GPR_U32(ctx, 31, 0x3528D0u);
    ctx->pc = 0x3528CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3528C8u;
            // 0x3528cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3528D0u; }
        if (ctx->pc != 0x3528D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3528D0u; }
        if (ctx->pc != 0x3528D0u) { return; }
    }
    ctx->pc = 0x3528D0u;
label_3528d0:
    // 0x3528d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3528d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3528d4:
    // 0x3528d4: 0xc04ce80  jal         func_133A00
label_3528d8:
    if (ctx->pc == 0x3528D8u) {
        ctx->pc = 0x3528D8u;
            // 0x3528d8: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x3528DCu;
        goto label_3528dc;
    }
    ctx->pc = 0x3528D4u;
    SET_GPR_U32(ctx, 31, 0x3528DCu);
    ctx->pc = 0x3528D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3528D4u;
            // 0x3528d8: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3528DCu; }
        if (ctx->pc != 0x3528DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3528DCu; }
        if (ctx->pc != 0x3528DCu) { return; }
    }
    ctx->pc = 0x3528DCu;
label_3528dc:
    // 0x3528dc: 0xc0d4108  jal         func_350420
label_3528e0:
    if (ctx->pc == 0x3528E0u) {
        ctx->pc = 0x3528E4u;
        goto label_3528e4;
    }
    ctx->pc = 0x3528DCu;
    SET_GPR_U32(ctx, 31, 0x3528E4u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3528E4u; }
        if (ctx->pc != 0x3528E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3528E4u; }
        if (ctx->pc != 0x3528E4u) { return; }
    }
    ctx->pc = 0x3528E4u;
label_3528e4:
    // 0x3528e4: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3528e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3528e8:
    // 0x3528e8: 0xc0d4104  jal         func_350410
label_3528ec:
    if (ctx->pc == 0x3528ECu) {
        ctx->pc = 0x3528ECu;
            // 0x3528ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3528F0u;
        goto label_3528f0;
    }
    ctx->pc = 0x3528E8u;
    SET_GPR_U32(ctx, 31, 0x3528F0u);
    ctx->pc = 0x3528ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3528E8u;
            // 0x3528ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3528F0u; }
        if (ctx->pc != 0x3528F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3528F0u; }
        if (ctx->pc != 0x3528F0u) { return; }
    }
    ctx->pc = 0x3528F0u;
label_3528f0:
    // 0x3528f0: 0x7ba400b0  lq          $a0, 0xB0($sp)
    ctx->pc = 0x3528f0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3528f4:
    // 0x3528f4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3528f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3528f8:
    // 0x3528f8: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x3528f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_3528fc:
    // 0x3528fc: 0x27a70190  addiu       $a3, $sp, 0x190
    ctx->pc = 0x3528fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_352900:
    // 0x352900: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x352900u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_352904:
    // 0x352904: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x352904u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_352908:
    // 0x352908: 0xc0d40ac  jal         func_3502B0
label_35290c:
    if (ctx->pc == 0x35290Cu) {
        ctx->pc = 0x35290Cu;
            // 0x35290c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x352910u;
        goto label_352910;
    }
    ctx->pc = 0x352908u;
    SET_GPR_U32(ctx, 31, 0x352910u);
    ctx->pc = 0x35290Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352908u;
            // 0x35290c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352910u; }
        if (ctx->pc != 0x352910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352910u; }
        if (ctx->pc != 0x352910u) { return; }
    }
    ctx->pc = 0x352910u;
label_352910:
    // 0x352910: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x352910u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_352914:
    // 0x352914: 0x10200088  beqz        $at, . + 4 + (0x88 << 2)
label_352918:
    if (ctx->pc == 0x352918u) {
        ctx->pc = 0x352918u;
            // 0x352918: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x35291Cu;
        goto label_35291c;
    }
    ctx->pc = 0x352914u;
    {
        const bool branch_taken_0x352914 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x352918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x352914u;
            // 0x352918: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352914) {
            ctx->pc = 0x352B38u;
            goto label_352b38;
        }
    }
    ctx->pc = 0x35291Cu;
label_35291c:
    // 0x35291c: 0xc0d4b54  jal         func_352D50
label_352920:
    if (ctx->pc == 0x352920u) {
        ctx->pc = 0x352920u;
            // 0x352920: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x352924u;
        goto label_352924;
    }
    ctx->pc = 0x35291Cu;
    SET_GPR_U32(ctx, 31, 0x352924u);
    ctx->pc = 0x352920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35291Cu;
            // 0x352920: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x352D50u;
    if (runtime->hasFunction(0x352D50u)) {
        auto targetFn = runtime->lookupFunction(0x352D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352924u; }
        if (ctx->pc != 0x352924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00352D50_0x352d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352924u; }
        if (ctx->pc != 0x352924u) { return; }
    }
    ctx->pc = 0x352924u;
label_352924:
    // 0x352924: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_352928:
    if (ctx->pc == 0x352928u) {
        ctx->pc = 0x35292Cu;
        goto label_35292c;
    }
    ctx->pc = 0x352924u;
    {
        const bool branch_taken_0x352924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x352924) {
            ctx->pc = 0x352948u;
            goto label_352948;
        }
    }
    ctx->pc = 0x35292Cu;
label_35292c:
    // 0x35292c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x35292cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_352930:
    // 0x352930: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x352930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_352934:
    // 0x352934: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x352934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_352938:
    // 0x352938: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x352938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35293c:
    // 0x35293c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x35293cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_352940:
    // 0x352940: 0xc04ce50  jal         func_133940
label_352944:
    if (ctx->pc == 0x352944u) {
        ctx->pc = 0x352944u;
            // 0x352944: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x352948u;
        goto label_352948;
    }
    ctx->pc = 0x352940u;
    SET_GPR_U32(ctx, 31, 0x352948u);
    ctx->pc = 0x352944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352940u;
            // 0x352944: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352948u; }
        if (ctx->pc != 0x352948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352948u; }
        if (ctx->pc != 0x352948u) { return; }
    }
    ctx->pc = 0x352948u;
label_352948:
    // 0x352948: 0xc0d4b50  jal         func_352D40
label_35294c:
    if (ctx->pc == 0x35294Cu) {
        ctx->pc = 0x352950u;
        goto label_352950;
    }
    ctx->pc = 0x352948u;
    SET_GPR_U32(ctx, 31, 0x352950u);
    ctx->pc = 0x352D40u;
    if (runtime->hasFunction(0x352D40u)) {
        auto targetFn = runtime->lookupFunction(0x352D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352950u; }
        if (ctx->pc != 0x352950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00352D40_0x352d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352950u; }
        if (ctx->pc != 0x352950u) { return; }
    }
    ctx->pc = 0x352950u;
label_352950:
    // 0x352950: 0xc0d4b4c  jal         func_352D30
label_352954:
    if (ctx->pc == 0x352954u) {
        ctx->pc = 0x352954u;
            // 0x352954: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x352958u;
        goto label_352958;
    }
    ctx->pc = 0x352950u;
    SET_GPR_U32(ctx, 31, 0x352958u);
    ctx->pc = 0x352954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352950u;
            // 0x352954: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x352D30u;
    if (runtime->hasFunction(0x352D30u)) {
        auto targetFn = runtime->lookupFunction(0x352D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352958u; }
        if (ctx->pc != 0x352958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00352D30_0x352d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352958u; }
        if (ctx->pc != 0x352958u) { return; }
    }
    ctx->pc = 0x352958u;
label_352958:
    // 0x352958: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x352958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_35295c:
    // 0x35295c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x35295cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_352960:
    // 0x352960: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x352960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_352964:
    // 0x352964: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x352964u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_352968:
    // 0x352968: 0xc04ce50  jal         func_133940
label_35296c:
    if (ctx->pc == 0x35296Cu) {
        ctx->pc = 0x35296Cu;
            // 0x35296c: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x352970u;
        goto label_352970;
    }
    ctx->pc = 0x352968u;
    SET_GPR_U32(ctx, 31, 0x352970u);
    ctx->pc = 0x35296Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352968u;
            // 0x35296c: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352970u; }
        if (ctx->pc != 0x352970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352970u; }
        if (ctx->pc != 0x352970u) { return; }
    }
    ctx->pc = 0x352970u;
label_352970:
    // 0x352970: 0xc0d4b48  jal         func_352D20
label_352974:
    if (ctx->pc == 0x352974u) {
        ctx->pc = 0x352974u;
            // 0x352974: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x352978u;
        goto label_352978;
    }
    ctx->pc = 0x352970u;
    SET_GPR_U32(ctx, 31, 0x352978u);
    ctx->pc = 0x352974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352970u;
            // 0x352974: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x352D20u;
    if (runtime->hasFunction(0x352D20u)) {
        auto targetFn = runtime->lookupFunction(0x352D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352978u; }
        if (ctx->pc != 0x352978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00352D20_0x352d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352978u; }
        if (ctx->pc != 0x352978u) { return; }
    }
    ctx->pc = 0x352978u;
label_352978:
    // 0x352978: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_35297c:
    if (ctx->pc == 0x35297Cu) {
        ctx->pc = 0x352980u;
        goto label_352980;
    }
    ctx->pc = 0x352978u;
    {
        const bool branch_taken_0x352978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x352978) {
            ctx->pc = 0x352990u;
            goto label_352990;
        }
    }
    ctx->pc = 0x352980u;
label_352980:
    // 0x352980: 0xc0d4b44  jal         func_352D10
label_352984:
    if (ctx->pc == 0x352984u) {
        ctx->pc = 0x352984u;
            // 0x352984: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x352988u;
        goto label_352988;
    }
    ctx->pc = 0x352980u;
    SET_GPR_U32(ctx, 31, 0x352988u);
    ctx->pc = 0x352984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352980u;
            // 0x352984: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x352D10u;
    if (runtime->hasFunction(0x352D10u)) {
        auto targetFn = runtime->lookupFunction(0x352D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352988u; }
        if (ctx->pc != 0x352988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00352D10_0x352d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352988u; }
        if (ctx->pc != 0x352988u) { return; }
    }
    ctx->pc = 0x352988u;
label_352988:
    // 0x352988: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
label_35298c:
    if (ctx->pc == 0x35298Cu) {
        ctx->pc = 0x352990u;
        goto label_352990;
    }
    ctx->pc = 0x352988u;
    {
        const bool branch_taken_0x352988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x352988) {
            ctx->pc = 0x352AD8u;
            goto label_352ad8;
        }
    }
    ctx->pc = 0x352990u;
label_352990:
    // 0x352990: 0xc0775b8  jal         func_1DD6E0
label_352994:
    if (ctx->pc == 0x352994u) {
        ctx->pc = 0x352998u;
        goto label_352998;
    }
    ctx->pc = 0x352990u;
    SET_GPR_U32(ctx, 31, 0x352998u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352998u; }
        if (ctx->pc != 0x352998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352998u; }
        if (ctx->pc != 0x352998u) { return; }
    }
    ctx->pc = 0x352998u;
label_352998:
    // 0x352998: 0xc0775b4  jal         func_1DD6D0
label_35299c:
    if (ctx->pc == 0x35299Cu) {
        ctx->pc = 0x35299Cu;
            // 0x35299c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3529A0u;
        goto label_3529a0;
    }
    ctx->pc = 0x352998u;
    SET_GPR_U32(ctx, 31, 0x3529A0u);
    ctx->pc = 0x35299Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352998u;
            // 0x35299c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3529A0u; }
        if (ctx->pc != 0x3529A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3529A0u; }
        if (ctx->pc != 0x3529A0u) { return; }
    }
    ctx->pc = 0x3529A0u;
label_3529a0:
    // 0x3529a0: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x3529a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3529a4:
    // 0x3529a4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x3529a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_3529a8:
    // 0x3529a8: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_3529ac:
    if (ctx->pc == 0x3529ACu) {
        ctx->pc = 0x3529ACu;
            // 0x3529ac: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x3529B0u;
        goto label_3529b0;
    }
    ctx->pc = 0x3529A8u;
    {
        const bool branch_taken_0x3529a8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3529a8) {
            ctx->pc = 0x3529ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3529A8u;
            // 0x3529ac: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3529BCu;
            goto label_3529bc;
        }
    }
    ctx->pc = 0x3529B0u;
label_3529b0:
    // 0x3529b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3529b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3529b4:
    // 0x3529b4: 0x10000007  b           . + 4 + (0x7 << 2)
label_3529b8:
    if (ctx->pc == 0x3529B8u) {
        ctx->pc = 0x3529B8u;
            // 0x3529b8: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3529BCu;
        goto label_3529bc;
    }
    ctx->pc = 0x3529B4u;
    {
        const bool branch_taken_0x3529b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3529B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3529B4u;
            // 0x3529b8: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3529b4) {
            ctx->pc = 0x3529D4u;
            goto label_3529d4;
        }
    }
    ctx->pc = 0x3529BCu;
label_3529bc:
    // 0x3529bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3529bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3529c0:
    // 0x3529c0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3529c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3529c4:
    // 0x3529c4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3529c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3529c8:
    // 0x3529c8: 0x0  nop
    ctx->pc = 0x3529c8u;
    // NOP
label_3529cc:
    // 0x3529cc: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x3529ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3529d0:
    // 0x3529d0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3529d0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3529d4:
    // 0x3529d4: 0x3c023e19  lui         $v0, 0x3E19
    ctx->pc = 0x3529d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15897 << 16));
label_3529d8:
    // 0x3529d8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x3529d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_3529dc:
    // 0x3529dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3529dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3529e0:
    // 0x3529e0: 0x0  nop
    ctx->pc = 0x3529e0u;
    // NOP
label_3529e4:
    // 0x3529e4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3529e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3529e8:
    // 0x3529e8: 0xc0477a8  jal         func_11DEA0
label_3529ec:
    if (ctx->pc == 0x3529ECu) {
        ctx->pc = 0x3529ECu;
            // 0x3529ec: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3529F0u;
        goto label_3529f0;
    }
    ctx->pc = 0x3529E8u;
    SET_GPR_U32(ctx, 31, 0x3529F0u);
    ctx->pc = 0x3529ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3529E8u;
            // 0x3529ec: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3529F0u; }
        if (ctx->pc != 0x3529F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3529F0u; }
        if (ctx->pc != 0x3529F0u) { return; }
    }
    ctx->pc = 0x3529F0u;
label_3529f0:
    // 0x3529f0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3529f0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3529f4:
    // 0x3529f4: 0xc0d4b44  jal         func_352D10
label_3529f8:
    if (ctx->pc == 0x3529F8u) {
        ctx->pc = 0x3529F8u;
            // 0x3529f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3529FCu;
        goto label_3529fc;
    }
    ctx->pc = 0x3529F4u;
    SET_GPR_U32(ctx, 31, 0x3529FCu);
    ctx->pc = 0x3529F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3529F4u;
            // 0x3529f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x352D10u;
    if (runtime->hasFunction(0x352D10u)) {
        auto targetFn = runtime->lookupFunction(0x352D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3529FCu; }
        if (ctx->pc != 0x3529FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00352D10_0x352d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3529FCu; }
        if (ctx->pc != 0x3529FCu) { return; }
    }
    ctx->pc = 0x3529FCu;
label_3529fc:
    // 0x3529fc: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_352a00:
    if (ctx->pc == 0x352A00u) {
        ctx->pc = 0x352A00u;
            // 0x352a00: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x352A04u;
        goto label_352a04;
    }
    ctx->pc = 0x3529FCu;
    {
        const bool branch_taken_0x3529fc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3529fc) {
            ctx->pc = 0x352A00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3529FCu;
            // 0x352a00: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x352A10u;
            goto label_352a10;
        }
    }
    ctx->pc = 0x352A04u;
label_352a04:
    // 0x352a04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x352a04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_352a08:
    // 0x352a08: 0x10000007  b           . + 4 + (0x7 << 2)
label_352a0c:
    if (ctx->pc == 0x352A0Cu) {
        ctx->pc = 0x352A0Cu;
            // 0x352a0c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x352A10u;
        goto label_352a10;
    }
    ctx->pc = 0x352A08u;
    {
        const bool branch_taken_0x352a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x352A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x352A08u;
            // 0x352a0c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x352a08) {
            ctx->pc = 0x352A28u;
            goto label_352a28;
        }
    }
    ctx->pc = 0x352A10u;
label_352a10:
    // 0x352a10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x352a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_352a14:
    // 0x352a14: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x352a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_352a18:
    // 0x352a18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x352a18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_352a1c:
    // 0x352a1c: 0x0  nop
    ctx->pc = 0x352a1cu;
    // NOP
label_352a20:
    // 0x352a20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x352a20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_352a24:
    // 0x352a24: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x352a24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_352a28:
    // 0x352a28: 0x461500c2  mul.s       $f3, $f0, $f21
    ctx->pc = 0x352a28u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_352a2c:
    // 0x352a2c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x352a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_352a30:
    // 0x352a30: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x352a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_352a34:
    // 0x352a34: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x352a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_352a38:
    // 0x352a38: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x352a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_352a3c:
    // 0x352a3c: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x352a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_352a40:
    // 0x352a40: 0xc7a101c4  lwc1        $f1, 0x1C4($sp)
    ctx->pc = 0x352a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_352a44:
    // 0x352a44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x352a44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_352a48:
    // 0x352a48: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x352a48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_352a4c:
    // 0x352a4c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x352a4cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_352a50:
    // 0x352a50: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x352a50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_352a54:
    // 0x352a54: 0xc04cd60  jal         func_133580
label_352a58:
    if (ctx->pc == 0x352A58u) {
        ctx->pc = 0x352A58u;
            // 0x352a58: 0xe7a001c4  swc1        $f0, 0x1C4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
        ctx->pc = 0x352A5Cu;
        goto label_352a5c;
    }
    ctx->pc = 0x352A54u;
    SET_GPR_U32(ctx, 31, 0x352A5Cu);
    ctx->pc = 0x352A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352A54u;
            // 0x352a58: 0xe7a001c4  swc1        $f0, 0x1C4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352A5Cu; }
        if (ctx->pc != 0x352A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352A5Cu; }
        if (ctx->pc != 0x352A5Cu) { return; }
    }
    ctx->pc = 0x352A5Cu;
label_352a5c:
    // 0x352a5c: 0xc0d4b44  jal         func_352D10
label_352a60:
    if (ctx->pc == 0x352A60u) {
        ctx->pc = 0x352A60u;
            // 0x352a60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x352A64u;
        goto label_352a64;
    }
    ctx->pc = 0x352A5Cu;
    SET_GPR_U32(ctx, 31, 0x352A64u);
    ctx->pc = 0x352A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352A5Cu;
            // 0x352a60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x352D10u;
    if (runtime->hasFunction(0x352D10u)) {
        auto targetFn = runtime->lookupFunction(0x352D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352A64u; }
        if (ctx->pc != 0x352A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00352D10_0x352d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352A64u; }
        if (ctx->pc != 0x352A64u) { return; }
    }
    ctx->pc = 0x352A64u;
label_352a64:
    // 0x352a64: 0x8e260060  lw          $a2, 0x60($s1)
    ctx->pc = 0x352a64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_352a68:
    // 0x352a68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x352a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_352a6c:
    // 0x352a6c: 0x8e270064  lw          $a3, 0x64($s1)
    ctx->pc = 0x352a6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_352a70:
    // 0x352a70: 0xc0d4b38  jal         func_352CE0
label_352a74:
    if (ctx->pc == 0x352A74u) {
        ctx->pc = 0x352A74u;
            // 0x352a74: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x352A78u;
        goto label_352a78;
    }
    ctx->pc = 0x352A70u;
    SET_GPR_U32(ctx, 31, 0x352A78u);
    ctx->pc = 0x352A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352A70u;
            // 0x352a74: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x352CE0u;
    if (runtime->hasFunction(0x352CE0u)) {
        auto targetFn = runtime->lookupFunction(0x352CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352A78u; }
        if (ctx->pc != 0x352A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00352CE0_0x352ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352A78u; }
        if (ctx->pc != 0x352A78u) { return; }
    }
    ctx->pc = 0x352A78u;
label_352a78:
    // 0x352a78: 0x8fa401dc  lw          $a0, 0x1DC($sp)
    ctx->pc = 0x352a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_352a7c:
    // 0x352a7c: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x352a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_352a80:
    // 0x352a80: 0xc04e4a4  jal         func_139290
label_352a84:
    if (ctx->pc == 0x352A84u) {
        ctx->pc = 0x352A84u;
            // 0x352a84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x352A88u;
        goto label_352a88;
    }
    ctx->pc = 0x352A80u;
    SET_GPR_U32(ctx, 31, 0x352A88u);
    ctx->pc = 0x352A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352A80u;
            // 0x352a84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352A88u; }
        if (ctx->pc != 0x352A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352A88u; }
        if (ctx->pc != 0x352A88u) { return; }
    }
    ctx->pc = 0x352A88u;
label_352a88:
    // 0x352a88: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x352a88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_352a8c:
    // 0x352a8c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x352a8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_352a90:
    // 0x352a90: 0x320f809  jalr        $t9
label_352a94:
    if (ctx->pc == 0x352A94u) {
        ctx->pc = 0x352A94u;
            // 0x352a94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x352A98u;
        goto label_352a98;
    }
    ctx->pc = 0x352A90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x352A98u);
        ctx->pc = 0x352A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x352A90u;
            // 0x352a94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x352A98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x352A98u; }
            if (ctx->pc != 0x352A98u) { return; }
        }
        }
    }
    ctx->pc = 0x352A98u;
label_352a98:
    // 0x352a98: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x352a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_352a9c:
    // 0x352a9c: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x352a9cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_352aa0:
    // 0x352aa0: 0x8fa501dc  lw          $a1, 0x1DC($sp)
    ctx->pc = 0x352aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_352aa4:
    // 0x352aa4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x352aa4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_352aa8:
    // 0x352aa8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x352aa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_352aac:
    // 0x352aac: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x352aacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_352ab0:
    // 0x352ab0: 0xc04cfcc  jal         func_133F30
label_352ab4:
    if (ctx->pc == 0x352AB4u) {
        ctx->pc = 0x352AB4u;
            // 0x352ab4: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->pc = 0x352AB8u;
        goto label_352ab8;
    }
    ctx->pc = 0x352AB0u;
    SET_GPR_U32(ctx, 31, 0x352AB8u);
    ctx->pc = 0x352AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352AB0u;
            // 0x352ab4: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352AB8u; }
        if (ctx->pc != 0x352AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352AB8u; }
        if (ctx->pc != 0x352AB8u) { return; }
    }
    ctx->pc = 0x352AB8u;
label_352ab8:
    // 0x352ab8: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x352ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_352abc:
    // 0x352abc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x352abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_352ac0:
    // 0x352ac0: 0x8fa601dc  lw          $a2, 0x1DC($sp)
    ctx->pc = 0x352ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_352ac4:
    // 0x352ac4: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x352ac4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_352ac8:
    // 0x352ac8: 0xc0d4b28  jal         func_352CA0
label_352acc:
    if (ctx->pc == 0x352ACCu) {
        ctx->pc = 0x352ACCu;
            // 0x352acc: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x352AD0u;
        goto label_352ad0;
    }
    ctx->pc = 0x352AC8u;
    SET_GPR_U32(ctx, 31, 0x352AD0u);
    ctx->pc = 0x352ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352AC8u;
            // 0x352acc: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x352CA0u;
    if (runtime->hasFunction(0x352CA0u)) {
        auto targetFn = runtime->lookupFunction(0x352CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352AD0u; }
        if (ctx->pc != 0x352AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00352CA0_0x352ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352AD0u; }
        if (ctx->pc != 0x352AD0u) { return; }
    }
    ctx->pc = 0x352AD0u;
label_352ad0:
    // 0x352ad0: 0x10000019  b           . + 4 + (0x19 << 2)
label_352ad4:
    if (ctx->pc == 0x352AD4u) {
        ctx->pc = 0x352AD8u;
        goto label_352ad8;
    }
    ctx->pc = 0x352AD0u;
    {
        const bool branch_taken_0x352ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x352ad0) {
            ctx->pc = 0x352B38u;
            goto label_352b38;
        }
    }
    ctx->pc = 0x352AD8u;
label_352ad8:
    // 0x352ad8: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x352ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_352adc:
    // 0x352adc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x352adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_352ae0:
    // 0x352ae0: 0xc04cd60  jal         func_133580
label_352ae4:
    if (ctx->pc == 0x352AE4u) {
        ctx->pc = 0x352AE4u;
            // 0x352ae4: 0x27a60190  addiu       $a2, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x352AE8u;
        goto label_352ae8;
    }
    ctx->pc = 0x352AE0u;
    SET_GPR_U32(ctx, 31, 0x352AE8u);
    ctx->pc = 0x352AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352AE0u;
            // 0x352ae4: 0x27a60190  addiu       $a2, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352AE8u; }
        if (ctx->pc != 0x352AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352AE8u; }
        if (ctx->pc != 0x352AE8u) { return; }
    }
    ctx->pc = 0x352AE8u;
label_352ae8:
    // 0x352ae8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x352ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_352aec:
    // 0x352aec: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x352aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_352af0:
    // 0x352af0: 0xc0d4b00  jal         func_352C00
label_352af4:
    if (ctx->pc == 0x352AF4u) {
        ctx->pc = 0x352AF4u;
            // 0x352af4: 0x27a601dc  addiu       $a2, $sp, 0x1DC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 476));
        ctx->pc = 0x352AF8u;
        goto label_352af8;
    }
    ctx->pc = 0x352AF0u;
    SET_GPR_U32(ctx, 31, 0x352AF8u);
    ctx->pc = 0x352AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352AF0u;
            // 0x352af4: 0x27a601dc  addiu       $a2, $sp, 0x1DC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 476));
        ctx->in_delay_slot = false;
    ctx->pc = 0x352C00u;
    if (runtime->hasFunction(0x352C00u)) {
        auto targetFn = runtime->lookupFunction(0x352C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352AF8u; }
        if (ctx->pc != 0x352AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00352C00_0x352c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352AF8u; }
        if (ctx->pc != 0x352AF8u) { return; }
    }
    ctx->pc = 0x352AF8u;
label_352af8:
    // 0x352af8: 0x8fa401dc  lw          $a0, 0x1DC($sp)
    ctx->pc = 0x352af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_352afc:
    // 0x352afc: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x352afcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_352b00:
    // 0x352b00: 0xc04e4a4  jal         func_139290
label_352b04:
    if (ctx->pc == 0x352B04u) {
        ctx->pc = 0x352B04u;
            // 0x352b04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x352B08u;
        goto label_352b08;
    }
    ctx->pc = 0x352B00u;
    SET_GPR_U32(ctx, 31, 0x352B08u);
    ctx->pc = 0x352B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352B00u;
            // 0x352b04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352B08u; }
        if (ctx->pc != 0x352B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352B08u; }
        if (ctx->pc != 0x352B08u) { return; }
    }
    ctx->pc = 0x352B08u;
label_352b08:
    // 0x352b08: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x352b08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_352b0c:
    // 0x352b0c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x352b0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_352b10:
    // 0x352b10: 0x320f809  jalr        $t9
label_352b14:
    if (ctx->pc == 0x352B14u) {
        ctx->pc = 0x352B14u;
            // 0x352b14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x352B18u;
        goto label_352b18;
    }
    ctx->pc = 0x352B10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x352B18u);
        ctx->pc = 0x352B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x352B10u;
            // 0x352b14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x352B18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x352B18u; }
            if (ctx->pc != 0x352B18u) { return; }
        }
        }
    }
    ctx->pc = 0x352B18u;
label_352b18:
    // 0x352b18: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x352b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_352b1c:
    // 0x352b1c: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x352b1cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_352b20:
    // 0x352b20: 0x8fa501dc  lw          $a1, 0x1DC($sp)
    ctx->pc = 0x352b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_352b24:
    // 0x352b24: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x352b24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_352b28:
    // 0x352b28: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x352b28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_352b2c:
    // 0x352b2c: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x352b2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_352b30:
    // 0x352b30: 0xc04cfcc  jal         func_133F30
label_352b34:
    if (ctx->pc == 0x352B34u) {
        ctx->pc = 0x352B34u;
            // 0x352b34: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x352B38u;
        goto label_352b38;
    }
    ctx->pc = 0x352B30u;
    SET_GPR_U32(ctx, 31, 0x352B38u);
    ctx->pc = 0x352B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352B30u;
            // 0x352b34: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352B38u; }
        if (ctx->pc != 0x352B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352B38u; }
        if (ctx->pc != 0x352B38u) { return; }
    }
    ctx->pc = 0x352B38u;
label_352b38:
    // 0x352b38: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x352b38u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_352b3c:
    // 0x352b3c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x352b3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_352b40:
    // 0x352b40: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x352b40u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_352b44:
    // 0x352b44: 0x1460fed7  bnez        $v1, . + 4 + (-0x129 << 2)
label_352b48:
    if (ctx->pc == 0x352B48u) {
        ctx->pc = 0x352B48u;
            // 0x352b48: 0x27de0004  addiu       $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
        ctx->pc = 0x352B4Cu;
        goto label_352b4c;
    }
    ctx->pc = 0x352B44u;
    {
        const bool branch_taken_0x352b44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x352B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x352B44u;
            // 0x352b48: 0x27de0004  addiu       $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352b44) {
            ctx->pc = 0x3526A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3526a4;
        }
    }
    ctx->pc = 0x352B4Cu;
label_352b4c:
    // 0x352b4c: 0x8ea300b8  lw          $v1, 0xB8($s5)
    ctx->pc = 0x352b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 184)));
label_352b50:
    // 0x352b50: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x352b50u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
label_352b54:
    // 0x352b54: 0x92a300e4  lbu         $v1, 0xE4($s5)
    ctx->pc = 0x352b54u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 228)));
label_352b58:
    // 0x352b58: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_352b5c:
    if (ctx->pc == 0x352B5Cu) {
        ctx->pc = 0x352B60u;
        goto label_352b60;
    }
    ctx->pc = 0x352B58u;
    {
        const bool branch_taken_0x352b58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x352b58) {
            ctx->pc = 0x352B6Cu;
            goto label_352b6c;
        }
    }
    ctx->pc = 0x352B60u;
label_352b60:
    // 0x352b60: 0x8ea300c0  lw          $v1, 0xC0($s5)
    ctx->pc = 0x352b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 192)));
label_352b64:
    // 0x352b64: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x352b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_352b68:
    // 0x352b68: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x352b68u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
label_352b6c:
    // 0x352b6c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x352b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_352b70:
    // 0x352b70: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x352b70u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_352b74:
    // 0x352b74: 0x5920000a  blezl       $t1, . + 4 + (0xA << 2)
label_352b78:
    if (ctx->pc == 0x352B78u) {
        ctx->pc = 0x352B78u;
            // 0x352b78: 0x92a300b4  lbu         $v1, 0xB4($s5) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 180)));
        ctx->pc = 0x352B7Cu;
        goto label_352b7c;
    }
    ctx->pc = 0x352B74u;
    {
        const bool branch_taken_0x352b74 = (GPR_S32(ctx, 9) <= 0);
        if (branch_taken_0x352b74) {
            ctx->pc = 0x352B78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x352B74u;
            // 0x352b78: 0x92a300b4  lbu         $v1, 0xB4($s5) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 180)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x352BA0u;
            goto label_352ba0;
        }
    }
    ctx->pc = 0x352B7Cu;
label_352b7c:
    // 0x352b7c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x352b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_352b80:
    // 0x352b80: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x352b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_352b84:
    // 0x352b84: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x352b84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_352b88:
    // 0x352b88: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x352b88u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_352b8c:
    // 0x352b8c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x352b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_352b90:
    // 0x352b90: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x352b90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_352b94:
    // 0x352b94: 0xc055754  jal         func_155D50
label_352b98:
    if (ctx->pc == 0x352B98u) {
        ctx->pc = 0x352B98u;
            // 0x352b98: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x352B9Cu;
        goto label_352b9c;
    }
    ctx->pc = 0x352B94u;
    SET_GPR_U32(ctx, 31, 0x352B9Cu);
    ctx->pc = 0x352B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352B94u;
            // 0x352b98: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155D50u;
    if (runtime->hasFunction(0x155D50u)) {
        auto targetFn = runtime->lookupFunction(0x155D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352B9Cu; }
        if (ctx->pc != 0x352B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155D50_0x155d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352B9Cu; }
        if (ctx->pc != 0x352B9Cu) { return; }
    }
    ctx->pc = 0x352B9Cu;
label_352b9c:
    // 0x352b9c: 0x92a300b4  lbu         $v1, 0xB4($s5)
    ctx->pc = 0x352b9cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 180)));
label_352ba0:
    // 0x352ba0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_352ba4:
    if (ctx->pc == 0x352BA4u) {
        ctx->pc = 0x352BA8u;
        goto label_352ba8;
    }
    ctx->pc = 0x352BA0u;
    {
        const bool branch_taken_0x352ba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x352ba0) {
            ctx->pc = 0x352BC0u;
            goto label_352bc0;
        }
    }
    ctx->pc = 0x352BA8u;
label_352ba8:
    // 0x352ba8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x352ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_352bac:
    // 0x352bac: 0x8c44e3e8  lw          $a0, -0x1C18($v0)
    ctx->pc = 0x352bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_352bb0:
    // 0x352bb0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x352bb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_352bb4:
    // 0x352bb4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x352bb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_352bb8:
    // 0x352bb8: 0x320f809  jalr        $t9
label_352bbc:
    if (ctx->pc == 0x352BBCu) {
        ctx->pc = 0x352BC0u;
        goto label_352bc0;
    }
    ctx->pc = 0x352BB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x352BC0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x352BC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x352BC0u; }
            if (ctx->pc != 0x352BC0u) { return; }
        }
        }
    }
    ctx->pc = 0x352BC0u;
label_352bc0:
    // 0x352bc0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x352bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_352bc4:
    // 0x352bc4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x352bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_352bc8:
    // 0x352bc8: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x352bc8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_352bcc:
    // 0x352bcc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x352bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_352bd0:
    // 0x352bd0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x352bd0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_352bd4:
    // 0x352bd4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x352bd4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_352bd8:
    // 0x352bd8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x352bd8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_352bdc:
    // 0x352bdc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x352bdcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_352be0:
    // 0x352be0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x352be0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_352be4:
    // 0x352be4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x352be4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_352be8:
    // 0x352be8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x352be8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_352bec:
    // 0x352bec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x352becu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_352bf0:
    // 0x352bf0: 0x3e00008  jr          $ra
label_352bf4:
    if (ctx->pc == 0x352BF4u) {
        ctx->pc = 0x352BF4u;
            // 0x352bf4: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->pc = 0x352BF8u;
        goto label_352bf8;
    }
    ctx->pc = 0x352BF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x352BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x352BF0u;
            // 0x352bf4: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x352BF8u;
label_352bf8:
    // 0x352bf8: 0x0  nop
    ctx->pc = 0x352bf8u;
    // NOP
label_352bfc:
    // 0x352bfc: 0x0  nop
    ctx->pc = 0x352bfcu;
    // NOP
}
