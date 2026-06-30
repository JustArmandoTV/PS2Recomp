#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00533460
// Address: 0x533460 - 0x5341b0
void sub_00533460_0x533460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00533460_0x533460");
#endif

    switch (ctx->pc) {
        case 0x533460u: goto label_533460;
        case 0x533464u: goto label_533464;
        case 0x533468u: goto label_533468;
        case 0x53346cu: goto label_53346c;
        case 0x533470u: goto label_533470;
        case 0x533474u: goto label_533474;
        case 0x533478u: goto label_533478;
        case 0x53347cu: goto label_53347c;
        case 0x533480u: goto label_533480;
        case 0x533484u: goto label_533484;
        case 0x533488u: goto label_533488;
        case 0x53348cu: goto label_53348c;
        case 0x533490u: goto label_533490;
        case 0x533494u: goto label_533494;
        case 0x533498u: goto label_533498;
        case 0x53349cu: goto label_53349c;
        case 0x5334a0u: goto label_5334a0;
        case 0x5334a4u: goto label_5334a4;
        case 0x5334a8u: goto label_5334a8;
        case 0x5334acu: goto label_5334ac;
        case 0x5334b0u: goto label_5334b0;
        case 0x5334b4u: goto label_5334b4;
        case 0x5334b8u: goto label_5334b8;
        case 0x5334bcu: goto label_5334bc;
        case 0x5334c0u: goto label_5334c0;
        case 0x5334c4u: goto label_5334c4;
        case 0x5334c8u: goto label_5334c8;
        case 0x5334ccu: goto label_5334cc;
        case 0x5334d0u: goto label_5334d0;
        case 0x5334d4u: goto label_5334d4;
        case 0x5334d8u: goto label_5334d8;
        case 0x5334dcu: goto label_5334dc;
        case 0x5334e0u: goto label_5334e0;
        case 0x5334e4u: goto label_5334e4;
        case 0x5334e8u: goto label_5334e8;
        case 0x5334ecu: goto label_5334ec;
        case 0x5334f0u: goto label_5334f0;
        case 0x5334f4u: goto label_5334f4;
        case 0x5334f8u: goto label_5334f8;
        case 0x5334fcu: goto label_5334fc;
        case 0x533500u: goto label_533500;
        case 0x533504u: goto label_533504;
        case 0x533508u: goto label_533508;
        case 0x53350cu: goto label_53350c;
        case 0x533510u: goto label_533510;
        case 0x533514u: goto label_533514;
        case 0x533518u: goto label_533518;
        case 0x53351cu: goto label_53351c;
        case 0x533520u: goto label_533520;
        case 0x533524u: goto label_533524;
        case 0x533528u: goto label_533528;
        case 0x53352cu: goto label_53352c;
        case 0x533530u: goto label_533530;
        case 0x533534u: goto label_533534;
        case 0x533538u: goto label_533538;
        case 0x53353cu: goto label_53353c;
        case 0x533540u: goto label_533540;
        case 0x533544u: goto label_533544;
        case 0x533548u: goto label_533548;
        case 0x53354cu: goto label_53354c;
        case 0x533550u: goto label_533550;
        case 0x533554u: goto label_533554;
        case 0x533558u: goto label_533558;
        case 0x53355cu: goto label_53355c;
        case 0x533560u: goto label_533560;
        case 0x533564u: goto label_533564;
        case 0x533568u: goto label_533568;
        case 0x53356cu: goto label_53356c;
        case 0x533570u: goto label_533570;
        case 0x533574u: goto label_533574;
        case 0x533578u: goto label_533578;
        case 0x53357cu: goto label_53357c;
        case 0x533580u: goto label_533580;
        case 0x533584u: goto label_533584;
        case 0x533588u: goto label_533588;
        case 0x53358cu: goto label_53358c;
        case 0x533590u: goto label_533590;
        case 0x533594u: goto label_533594;
        case 0x533598u: goto label_533598;
        case 0x53359cu: goto label_53359c;
        case 0x5335a0u: goto label_5335a0;
        case 0x5335a4u: goto label_5335a4;
        case 0x5335a8u: goto label_5335a8;
        case 0x5335acu: goto label_5335ac;
        case 0x5335b0u: goto label_5335b0;
        case 0x5335b4u: goto label_5335b4;
        case 0x5335b8u: goto label_5335b8;
        case 0x5335bcu: goto label_5335bc;
        case 0x5335c0u: goto label_5335c0;
        case 0x5335c4u: goto label_5335c4;
        case 0x5335c8u: goto label_5335c8;
        case 0x5335ccu: goto label_5335cc;
        case 0x5335d0u: goto label_5335d0;
        case 0x5335d4u: goto label_5335d4;
        case 0x5335d8u: goto label_5335d8;
        case 0x5335dcu: goto label_5335dc;
        case 0x5335e0u: goto label_5335e0;
        case 0x5335e4u: goto label_5335e4;
        case 0x5335e8u: goto label_5335e8;
        case 0x5335ecu: goto label_5335ec;
        case 0x5335f0u: goto label_5335f0;
        case 0x5335f4u: goto label_5335f4;
        case 0x5335f8u: goto label_5335f8;
        case 0x5335fcu: goto label_5335fc;
        case 0x533600u: goto label_533600;
        case 0x533604u: goto label_533604;
        case 0x533608u: goto label_533608;
        case 0x53360cu: goto label_53360c;
        case 0x533610u: goto label_533610;
        case 0x533614u: goto label_533614;
        case 0x533618u: goto label_533618;
        case 0x53361cu: goto label_53361c;
        case 0x533620u: goto label_533620;
        case 0x533624u: goto label_533624;
        case 0x533628u: goto label_533628;
        case 0x53362cu: goto label_53362c;
        case 0x533630u: goto label_533630;
        case 0x533634u: goto label_533634;
        case 0x533638u: goto label_533638;
        case 0x53363cu: goto label_53363c;
        case 0x533640u: goto label_533640;
        case 0x533644u: goto label_533644;
        case 0x533648u: goto label_533648;
        case 0x53364cu: goto label_53364c;
        case 0x533650u: goto label_533650;
        case 0x533654u: goto label_533654;
        case 0x533658u: goto label_533658;
        case 0x53365cu: goto label_53365c;
        case 0x533660u: goto label_533660;
        case 0x533664u: goto label_533664;
        case 0x533668u: goto label_533668;
        case 0x53366cu: goto label_53366c;
        case 0x533670u: goto label_533670;
        case 0x533674u: goto label_533674;
        case 0x533678u: goto label_533678;
        case 0x53367cu: goto label_53367c;
        case 0x533680u: goto label_533680;
        case 0x533684u: goto label_533684;
        case 0x533688u: goto label_533688;
        case 0x53368cu: goto label_53368c;
        case 0x533690u: goto label_533690;
        case 0x533694u: goto label_533694;
        case 0x533698u: goto label_533698;
        case 0x53369cu: goto label_53369c;
        case 0x5336a0u: goto label_5336a0;
        case 0x5336a4u: goto label_5336a4;
        case 0x5336a8u: goto label_5336a8;
        case 0x5336acu: goto label_5336ac;
        case 0x5336b0u: goto label_5336b0;
        case 0x5336b4u: goto label_5336b4;
        case 0x5336b8u: goto label_5336b8;
        case 0x5336bcu: goto label_5336bc;
        case 0x5336c0u: goto label_5336c0;
        case 0x5336c4u: goto label_5336c4;
        case 0x5336c8u: goto label_5336c8;
        case 0x5336ccu: goto label_5336cc;
        case 0x5336d0u: goto label_5336d0;
        case 0x5336d4u: goto label_5336d4;
        case 0x5336d8u: goto label_5336d8;
        case 0x5336dcu: goto label_5336dc;
        case 0x5336e0u: goto label_5336e0;
        case 0x5336e4u: goto label_5336e4;
        case 0x5336e8u: goto label_5336e8;
        case 0x5336ecu: goto label_5336ec;
        case 0x5336f0u: goto label_5336f0;
        case 0x5336f4u: goto label_5336f4;
        case 0x5336f8u: goto label_5336f8;
        case 0x5336fcu: goto label_5336fc;
        case 0x533700u: goto label_533700;
        case 0x533704u: goto label_533704;
        case 0x533708u: goto label_533708;
        case 0x53370cu: goto label_53370c;
        case 0x533710u: goto label_533710;
        case 0x533714u: goto label_533714;
        case 0x533718u: goto label_533718;
        case 0x53371cu: goto label_53371c;
        case 0x533720u: goto label_533720;
        case 0x533724u: goto label_533724;
        case 0x533728u: goto label_533728;
        case 0x53372cu: goto label_53372c;
        case 0x533730u: goto label_533730;
        case 0x533734u: goto label_533734;
        case 0x533738u: goto label_533738;
        case 0x53373cu: goto label_53373c;
        case 0x533740u: goto label_533740;
        case 0x533744u: goto label_533744;
        case 0x533748u: goto label_533748;
        case 0x53374cu: goto label_53374c;
        case 0x533750u: goto label_533750;
        case 0x533754u: goto label_533754;
        case 0x533758u: goto label_533758;
        case 0x53375cu: goto label_53375c;
        case 0x533760u: goto label_533760;
        case 0x533764u: goto label_533764;
        case 0x533768u: goto label_533768;
        case 0x53376cu: goto label_53376c;
        case 0x533770u: goto label_533770;
        case 0x533774u: goto label_533774;
        case 0x533778u: goto label_533778;
        case 0x53377cu: goto label_53377c;
        case 0x533780u: goto label_533780;
        case 0x533784u: goto label_533784;
        case 0x533788u: goto label_533788;
        case 0x53378cu: goto label_53378c;
        case 0x533790u: goto label_533790;
        case 0x533794u: goto label_533794;
        case 0x533798u: goto label_533798;
        case 0x53379cu: goto label_53379c;
        case 0x5337a0u: goto label_5337a0;
        case 0x5337a4u: goto label_5337a4;
        case 0x5337a8u: goto label_5337a8;
        case 0x5337acu: goto label_5337ac;
        case 0x5337b0u: goto label_5337b0;
        case 0x5337b4u: goto label_5337b4;
        case 0x5337b8u: goto label_5337b8;
        case 0x5337bcu: goto label_5337bc;
        case 0x5337c0u: goto label_5337c0;
        case 0x5337c4u: goto label_5337c4;
        case 0x5337c8u: goto label_5337c8;
        case 0x5337ccu: goto label_5337cc;
        case 0x5337d0u: goto label_5337d0;
        case 0x5337d4u: goto label_5337d4;
        case 0x5337d8u: goto label_5337d8;
        case 0x5337dcu: goto label_5337dc;
        case 0x5337e0u: goto label_5337e0;
        case 0x5337e4u: goto label_5337e4;
        case 0x5337e8u: goto label_5337e8;
        case 0x5337ecu: goto label_5337ec;
        case 0x5337f0u: goto label_5337f0;
        case 0x5337f4u: goto label_5337f4;
        case 0x5337f8u: goto label_5337f8;
        case 0x5337fcu: goto label_5337fc;
        case 0x533800u: goto label_533800;
        case 0x533804u: goto label_533804;
        case 0x533808u: goto label_533808;
        case 0x53380cu: goto label_53380c;
        case 0x533810u: goto label_533810;
        case 0x533814u: goto label_533814;
        case 0x533818u: goto label_533818;
        case 0x53381cu: goto label_53381c;
        case 0x533820u: goto label_533820;
        case 0x533824u: goto label_533824;
        case 0x533828u: goto label_533828;
        case 0x53382cu: goto label_53382c;
        case 0x533830u: goto label_533830;
        case 0x533834u: goto label_533834;
        case 0x533838u: goto label_533838;
        case 0x53383cu: goto label_53383c;
        case 0x533840u: goto label_533840;
        case 0x533844u: goto label_533844;
        case 0x533848u: goto label_533848;
        case 0x53384cu: goto label_53384c;
        case 0x533850u: goto label_533850;
        case 0x533854u: goto label_533854;
        case 0x533858u: goto label_533858;
        case 0x53385cu: goto label_53385c;
        case 0x533860u: goto label_533860;
        case 0x533864u: goto label_533864;
        case 0x533868u: goto label_533868;
        case 0x53386cu: goto label_53386c;
        case 0x533870u: goto label_533870;
        case 0x533874u: goto label_533874;
        case 0x533878u: goto label_533878;
        case 0x53387cu: goto label_53387c;
        case 0x533880u: goto label_533880;
        case 0x533884u: goto label_533884;
        case 0x533888u: goto label_533888;
        case 0x53388cu: goto label_53388c;
        case 0x533890u: goto label_533890;
        case 0x533894u: goto label_533894;
        case 0x533898u: goto label_533898;
        case 0x53389cu: goto label_53389c;
        case 0x5338a0u: goto label_5338a0;
        case 0x5338a4u: goto label_5338a4;
        case 0x5338a8u: goto label_5338a8;
        case 0x5338acu: goto label_5338ac;
        case 0x5338b0u: goto label_5338b0;
        case 0x5338b4u: goto label_5338b4;
        case 0x5338b8u: goto label_5338b8;
        case 0x5338bcu: goto label_5338bc;
        case 0x5338c0u: goto label_5338c0;
        case 0x5338c4u: goto label_5338c4;
        case 0x5338c8u: goto label_5338c8;
        case 0x5338ccu: goto label_5338cc;
        case 0x5338d0u: goto label_5338d0;
        case 0x5338d4u: goto label_5338d4;
        case 0x5338d8u: goto label_5338d8;
        case 0x5338dcu: goto label_5338dc;
        case 0x5338e0u: goto label_5338e0;
        case 0x5338e4u: goto label_5338e4;
        case 0x5338e8u: goto label_5338e8;
        case 0x5338ecu: goto label_5338ec;
        case 0x5338f0u: goto label_5338f0;
        case 0x5338f4u: goto label_5338f4;
        case 0x5338f8u: goto label_5338f8;
        case 0x5338fcu: goto label_5338fc;
        case 0x533900u: goto label_533900;
        case 0x533904u: goto label_533904;
        case 0x533908u: goto label_533908;
        case 0x53390cu: goto label_53390c;
        case 0x533910u: goto label_533910;
        case 0x533914u: goto label_533914;
        case 0x533918u: goto label_533918;
        case 0x53391cu: goto label_53391c;
        case 0x533920u: goto label_533920;
        case 0x533924u: goto label_533924;
        case 0x533928u: goto label_533928;
        case 0x53392cu: goto label_53392c;
        case 0x533930u: goto label_533930;
        case 0x533934u: goto label_533934;
        case 0x533938u: goto label_533938;
        case 0x53393cu: goto label_53393c;
        case 0x533940u: goto label_533940;
        case 0x533944u: goto label_533944;
        case 0x533948u: goto label_533948;
        case 0x53394cu: goto label_53394c;
        case 0x533950u: goto label_533950;
        case 0x533954u: goto label_533954;
        case 0x533958u: goto label_533958;
        case 0x53395cu: goto label_53395c;
        case 0x533960u: goto label_533960;
        case 0x533964u: goto label_533964;
        case 0x533968u: goto label_533968;
        case 0x53396cu: goto label_53396c;
        case 0x533970u: goto label_533970;
        case 0x533974u: goto label_533974;
        case 0x533978u: goto label_533978;
        case 0x53397cu: goto label_53397c;
        case 0x533980u: goto label_533980;
        case 0x533984u: goto label_533984;
        case 0x533988u: goto label_533988;
        case 0x53398cu: goto label_53398c;
        case 0x533990u: goto label_533990;
        case 0x533994u: goto label_533994;
        case 0x533998u: goto label_533998;
        case 0x53399cu: goto label_53399c;
        case 0x5339a0u: goto label_5339a0;
        case 0x5339a4u: goto label_5339a4;
        case 0x5339a8u: goto label_5339a8;
        case 0x5339acu: goto label_5339ac;
        case 0x5339b0u: goto label_5339b0;
        case 0x5339b4u: goto label_5339b4;
        case 0x5339b8u: goto label_5339b8;
        case 0x5339bcu: goto label_5339bc;
        case 0x5339c0u: goto label_5339c0;
        case 0x5339c4u: goto label_5339c4;
        case 0x5339c8u: goto label_5339c8;
        case 0x5339ccu: goto label_5339cc;
        case 0x5339d0u: goto label_5339d0;
        case 0x5339d4u: goto label_5339d4;
        case 0x5339d8u: goto label_5339d8;
        case 0x5339dcu: goto label_5339dc;
        case 0x5339e0u: goto label_5339e0;
        case 0x5339e4u: goto label_5339e4;
        case 0x5339e8u: goto label_5339e8;
        case 0x5339ecu: goto label_5339ec;
        case 0x5339f0u: goto label_5339f0;
        case 0x5339f4u: goto label_5339f4;
        case 0x5339f8u: goto label_5339f8;
        case 0x5339fcu: goto label_5339fc;
        case 0x533a00u: goto label_533a00;
        case 0x533a04u: goto label_533a04;
        case 0x533a08u: goto label_533a08;
        case 0x533a0cu: goto label_533a0c;
        case 0x533a10u: goto label_533a10;
        case 0x533a14u: goto label_533a14;
        case 0x533a18u: goto label_533a18;
        case 0x533a1cu: goto label_533a1c;
        case 0x533a20u: goto label_533a20;
        case 0x533a24u: goto label_533a24;
        case 0x533a28u: goto label_533a28;
        case 0x533a2cu: goto label_533a2c;
        case 0x533a30u: goto label_533a30;
        case 0x533a34u: goto label_533a34;
        case 0x533a38u: goto label_533a38;
        case 0x533a3cu: goto label_533a3c;
        case 0x533a40u: goto label_533a40;
        case 0x533a44u: goto label_533a44;
        case 0x533a48u: goto label_533a48;
        case 0x533a4cu: goto label_533a4c;
        case 0x533a50u: goto label_533a50;
        case 0x533a54u: goto label_533a54;
        case 0x533a58u: goto label_533a58;
        case 0x533a5cu: goto label_533a5c;
        case 0x533a60u: goto label_533a60;
        case 0x533a64u: goto label_533a64;
        case 0x533a68u: goto label_533a68;
        case 0x533a6cu: goto label_533a6c;
        case 0x533a70u: goto label_533a70;
        case 0x533a74u: goto label_533a74;
        case 0x533a78u: goto label_533a78;
        case 0x533a7cu: goto label_533a7c;
        case 0x533a80u: goto label_533a80;
        case 0x533a84u: goto label_533a84;
        case 0x533a88u: goto label_533a88;
        case 0x533a8cu: goto label_533a8c;
        case 0x533a90u: goto label_533a90;
        case 0x533a94u: goto label_533a94;
        case 0x533a98u: goto label_533a98;
        case 0x533a9cu: goto label_533a9c;
        case 0x533aa0u: goto label_533aa0;
        case 0x533aa4u: goto label_533aa4;
        case 0x533aa8u: goto label_533aa8;
        case 0x533aacu: goto label_533aac;
        case 0x533ab0u: goto label_533ab0;
        case 0x533ab4u: goto label_533ab4;
        case 0x533ab8u: goto label_533ab8;
        case 0x533abcu: goto label_533abc;
        case 0x533ac0u: goto label_533ac0;
        case 0x533ac4u: goto label_533ac4;
        case 0x533ac8u: goto label_533ac8;
        case 0x533accu: goto label_533acc;
        case 0x533ad0u: goto label_533ad0;
        case 0x533ad4u: goto label_533ad4;
        case 0x533ad8u: goto label_533ad8;
        case 0x533adcu: goto label_533adc;
        case 0x533ae0u: goto label_533ae0;
        case 0x533ae4u: goto label_533ae4;
        case 0x533ae8u: goto label_533ae8;
        case 0x533aecu: goto label_533aec;
        case 0x533af0u: goto label_533af0;
        case 0x533af4u: goto label_533af4;
        case 0x533af8u: goto label_533af8;
        case 0x533afcu: goto label_533afc;
        case 0x533b00u: goto label_533b00;
        case 0x533b04u: goto label_533b04;
        case 0x533b08u: goto label_533b08;
        case 0x533b0cu: goto label_533b0c;
        case 0x533b10u: goto label_533b10;
        case 0x533b14u: goto label_533b14;
        case 0x533b18u: goto label_533b18;
        case 0x533b1cu: goto label_533b1c;
        case 0x533b20u: goto label_533b20;
        case 0x533b24u: goto label_533b24;
        case 0x533b28u: goto label_533b28;
        case 0x533b2cu: goto label_533b2c;
        case 0x533b30u: goto label_533b30;
        case 0x533b34u: goto label_533b34;
        case 0x533b38u: goto label_533b38;
        case 0x533b3cu: goto label_533b3c;
        case 0x533b40u: goto label_533b40;
        case 0x533b44u: goto label_533b44;
        case 0x533b48u: goto label_533b48;
        case 0x533b4cu: goto label_533b4c;
        case 0x533b50u: goto label_533b50;
        case 0x533b54u: goto label_533b54;
        case 0x533b58u: goto label_533b58;
        case 0x533b5cu: goto label_533b5c;
        case 0x533b60u: goto label_533b60;
        case 0x533b64u: goto label_533b64;
        case 0x533b68u: goto label_533b68;
        case 0x533b6cu: goto label_533b6c;
        case 0x533b70u: goto label_533b70;
        case 0x533b74u: goto label_533b74;
        case 0x533b78u: goto label_533b78;
        case 0x533b7cu: goto label_533b7c;
        case 0x533b80u: goto label_533b80;
        case 0x533b84u: goto label_533b84;
        case 0x533b88u: goto label_533b88;
        case 0x533b8cu: goto label_533b8c;
        case 0x533b90u: goto label_533b90;
        case 0x533b94u: goto label_533b94;
        case 0x533b98u: goto label_533b98;
        case 0x533b9cu: goto label_533b9c;
        case 0x533ba0u: goto label_533ba0;
        case 0x533ba4u: goto label_533ba4;
        case 0x533ba8u: goto label_533ba8;
        case 0x533bacu: goto label_533bac;
        case 0x533bb0u: goto label_533bb0;
        case 0x533bb4u: goto label_533bb4;
        case 0x533bb8u: goto label_533bb8;
        case 0x533bbcu: goto label_533bbc;
        case 0x533bc0u: goto label_533bc0;
        case 0x533bc4u: goto label_533bc4;
        case 0x533bc8u: goto label_533bc8;
        case 0x533bccu: goto label_533bcc;
        case 0x533bd0u: goto label_533bd0;
        case 0x533bd4u: goto label_533bd4;
        case 0x533bd8u: goto label_533bd8;
        case 0x533bdcu: goto label_533bdc;
        case 0x533be0u: goto label_533be0;
        case 0x533be4u: goto label_533be4;
        case 0x533be8u: goto label_533be8;
        case 0x533becu: goto label_533bec;
        case 0x533bf0u: goto label_533bf0;
        case 0x533bf4u: goto label_533bf4;
        case 0x533bf8u: goto label_533bf8;
        case 0x533bfcu: goto label_533bfc;
        case 0x533c00u: goto label_533c00;
        case 0x533c04u: goto label_533c04;
        case 0x533c08u: goto label_533c08;
        case 0x533c0cu: goto label_533c0c;
        case 0x533c10u: goto label_533c10;
        case 0x533c14u: goto label_533c14;
        case 0x533c18u: goto label_533c18;
        case 0x533c1cu: goto label_533c1c;
        case 0x533c20u: goto label_533c20;
        case 0x533c24u: goto label_533c24;
        case 0x533c28u: goto label_533c28;
        case 0x533c2cu: goto label_533c2c;
        case 0x533c30u: goto label_533c30;
        case 0x533c34u: goto label_533c34;
        case 0x533c38u: goto label_533c38;
        case 0x533c3cu: goto label_533c3c;
        case 0x533c40u: goto label_533c40;
        case 0x533c44u: goto label_533c44;
        case 0x533c48u: goto label_533c48;
        case 0x533c4cu: goto label_533c4c;
        case 0x533c50u: goto label_533c50;
        case 0x533c54u: goto label_533c54;
        case 0x533c58u: goto label_533c58;
        case 0x533c5cu: goto label_533c5c;
        case 0x533c60u: goto label_533c60;
        case 0x533c64u: goto label_533c64;
        case 0x533c68u: goto label_533c68;
        case 0x533c6cu: goto label_533c6c;
        case 0x533c70u: goto label_533c70;
        case 0x533c74u: goto label_533c74;
        case 0x533c78u: goto label_533c78;
        case 0x533c7cu: goto label_533c7c;
        case 0x533c80u: goto label_533c80;
        case 0x533c84u: goto label_533c84;
        case 0x533c88u: goto label_533c88;
        case 0x533c8cu: goto label_533c8c;
        case 0x533c90u: goto label_533c90;
        case 0x533c94u: goto label_533c94;
        case 0x533c98u: goto label_533c98;
        case 0x533c9cu: goto label_533c9c;
        case 0x533ca0u: goto label_533ca0;
        case 0x533ca4u: goto label_533ca4;
        case 0x533ca8u: goto label_533ca8;
        case 0x533cacu: goto label_533cac;
        case 0x533cb0u: goto label_533cb0;
        case 0x533cb4u: goto label_533cb4;
        case 0x533cb8u: goto label_533cb8;
        case 0x533cbcu: goto label_533cbc;
        case 0x533cc0u: goto label_533cc0;
        case 0x533cc4u: goto label_533cc4;
        case 0x533cc8u: goto label_533cc8;
        case 0x533cccu: goto label_533ccc;
        case 0x533cd0u: goto label_533cd0;
        case 0x533cd4u: goto label_533cd4;
        case 0x533cd8u: goto label_533cd8;
        case 0x533cdcu: goto label_533cdc;
        case 0x533ce0u: goto label_533ce0;
        case 0x533ce4u: goto label_533ce4;
        case 0x533ce8u: goto label_533ce8;
        case 0x533cecu: goto label_533cec;
        case 0x533cf0u: goto label_533cf0;
        case 0x533cf4u: goto label_533cf4;
        case 0x533cf8u: goto label_533cf8;
        case 0x533cfcu: goto label_533cfc;
        case 0x533d00u: goto label_533d00;
        case 0x533d04u: goto label_533d04;
        case 0x533d08u: goto label_533d08;
        case 0x533d0cu: goto label_533d0c;
        case 0x533d10u: goto label_533d10;
        case 0x533d14u: goto label_533d14;
        case 0x533d18u: goto label_533d18;
        case 0x533d1cu: goto label_533d1c;
        case 0x533d20u: goto label_533d20;
        case 0x533d24u: goto label_533d24;
        case 0x533d28u: goto label_533d28;
        case 0x533d2cu: goto label_533d2c;
        case 0x533d30u: goto label_533d30;
        case 0x533d34u: goto label_533d34;
        case 0x533d38u: goto label_533d38;
        case 0x533d3cu: goto label_533d3c;
        case 0x533d40u: goto label_533d40;
        case 0x533d44u: goto label_533d44;
        case 0x533d48u: goto label_533d48;
        case 0x533d4cu: goto label_533d4c;
        case 0x533d50u: goto label_533d50;
        case 0x533d54u: goto label_533d54;
        case 0x533d58u: goto label_533d58;
        case 0x533d5cu: goto label_533d5c;
        case 0x533d60u: goto label_533d60;
        case 0x533d64u: goto label_533d64;
        case 0x533d68u: goto label_533d68;
        case 0x533d6cu: goto label_533d6c;
        case 0x533d70u: goto label_533d70;
        case 0x533d74u: goto label_533d74;
        case 0x533d78u: goto label_533d78;
        case 0x533d7cu: goto label_533d7c;
        case 0x533d80u: goto label_533d80;
        case 0x533d84u: goto label_533d84;
        case 0x533d88u: goto label_533d88;
        case 0x533d8cu: goto label_533d8c;
        case 0x533d90u: goto label_533d90;
        case 0x533d94u: goto label_533d94;
        case 0x533d98u: goto label_533d98;
        case 0x533d9cu: goto label_533d9c;
        case 0x533da0u: goto label_533da0;
        case 0x533da4u: goto label_533da4;
        case 0x533da8u: goto label_533da8;
        case 0x533dacu: goto label_533dac;
        case 0x533db0u: goto label_533db0;
        case 0x533db4u: goto label_533db4;
        case 0x533db8u: goto label_533db8;
        case 0x533dbcu: goto label_533dbc;
        case 0x533dc0u: goto label_533dc0;
        case 0x533dc4u: goto label_533dc4;
        case 0x533dc8u: goto label_533dc8;
        case 0x533dccu: goto label_533dcc;
        case 0x533dd0u: goto label_533dd0;
        case 0x533dd4u: goto label_533dd4;
        case 0x533dd8u: goto label_533dd8;
        case 0x533ddcu: goto label_533ddc;
        case 0x533de0u: goto label_533de0;
        case 0x533de4u: goto label_533de4;
        case 0x533de8u: goto label_533de8;
        case 0x533decu: goto label_533dec;
        case 0x533df0u: goto label_533df0;
        case 0x533df4u: goto label_533df4;
        case 0x533df8u: goto label_533df8;
        case 0x533dfcu: goto label_533dfc;
        case 0x533e00u: goto label_533e00;
        case 0x533e04u: goto label_533e04;
        case 0x533e08u: goto label_533e08;
        case 0x533e0cu: goto label_533e0c;
        case 0x533e10u: goto label_533e10;
        case 0x533e14u: goto label_533e14;
        case 0x533e18u: goto label_533e18;
        case 0x533e1cu: goto label_533e1c;
        case 0x533e20u: goto label_533e20;
        case 0x533e24u: goto label_533e24;
        case 0x533e28u: goto label_533e28;
        case 0x533e2cu: goto label_533e2c;
        case 0x533e30u: goto label_533e30;
        case 0x533e34u: goto label_533e34;
        case 0x533e38u: goto label_533e38;
        case 0x533e3cu: goto label_533e3c;
        case 0x533e40u: goto label_533e40;
        case 0x533e44u: goto label_533e44;
        case 0x533e48u: goto label_533e48;
        case 0x533e4cu: goto label_533e4c;
        case 0x533e50u: goto label_533e50;
        case 0x533e54u: goto label_533e54;
        case 0x533e58u: goto label_533e58;
        case 0x533e5cu: goto label_533e5c;
        case 0x533e60u: goto label_533e60;
        case 0x533e64u: goto label_533e64;
        case 0x533e68u: goto label_533e68;
        case 0x533e6cu: goto label_533e6c;
        case 0x533e70u: goto label_533e70;
        case 0x533e74u: goto label_533e74;
        case 0x533e78u: goto label_533e78;
        case 0x533e7cu: goto label_533e7c;
        case 0x533e80u: goto label_533e80;
        case 0x533e84u: goto label_533e84;
        case 0x533e88u: goto label_533e88;
        case 0x533e8cu: goto label_533e8c;
        case 0x533e90u: goto label_533e90;
        case 0x533e94u: goto label_533e94;
        case 0x533e98u: goto label_533e98;
        case 0x533e9cu: goto label_533e9c;
        case 0x533ea0u: goto label_533ea0;
        case 0x533ea4u: goto label_533ea4;
        case 0x533ea8u: goto label_533ea8;
        case 0x533eacu: goto label_533eac;
        case 0x533eb0u: goto label_533eb0;
        case 0x533eb4u: goto label_533eb4;
        case 0x533eb8u: goto label_533eb8;
        case 0x533ebcu: goto label_533ebc;
        case 0x533ec0u: goto label_533ec0;
        case 0x533ec4u: goto label_533ec4;
        case 0x533ec8u: goto label_533ec8;
        case 0x533eccu: goto label_533ecc;
        case 0x533ed0u: goto label_533ed0;
        case 0x533ed4u: goto label_533ed4;
        case 0x533ed8u: goto label_533ed8;
        case 0x533edcu: goto label_533edc;
        case 0x533ee0u: goto label_533ee0;
        case 0x533ee4u: goto label_533ee4;
        case 0x533ee8u: goto label_533ee8;
        case 0x533eecu: goto label_533eec;
        case 0x533ef0u: goto label_533ef0;
        case 0x533ef4u: goto label_533ef4;
        case 0x533ef8u: goto label_533ef8;
        case 0x533efcu: goto label_533efc;
        case 0x533f00u: goto label_533f00;
        case 0x533f04u: goto label_533f04;
        case 0x533f08u: goto label_533f08;
        case 0x533f0cu: goto label_533f0c;
        case 0x533f10u: goto label_533f10;
        case 0x533f14u: goto label_533f14;
        case 0x533f18u: goto label_533f18;
        case 0x533f1cu: goto label_533f1c;
        case 0x533f20u: goto label_533f20;
        case 0x533f24u: goto label_533f24;
        case 0x533f28u: goto label_533f28;
        case 0x533f2cu: goto label_533f2c;
        case 0x533f30u: goto label_533f30;
        case 0x533f34u: goto label_533f34;
        case 0x533f38u: goto label_533f38;
        case 0x533f3cu: goto label_533f3c;
        case 0x533f40u: goto label_533f40;
        case 0x533f44u: goto label_533f44;
        case 0x533f48u: goto label_533f48;
        case 0x533f4cu: goto label_533f4c;
        case 0x533f50u: goto label_533f50;
        case 0x533f54u: goto label_533f54;
        case 0x533f58u: goto label_533f58;
        case 0x533f5cu: goto label_533f5c;
        case 0x533f60u: goto label_533f60;
        case 0x533f64u: goto label_533f64;
        case 0x533f68u: goto label_533f68;
        case 0x533f6cu: goto label_533f6c;
        case 0x533f70u: goto label_533f70;
        case 0x533f74u: goto label_533f74;
        case 0x533f78u: goto label_533f78;
        case 0x533f7cu: goto label_533f7c;
        case 0x533f80u: goto label_533f80;
        case 0x533f84u: goto label_533f84;
        case 0x533f88u: goto label_533f88;
        case 0x533f8cu: goto label_533f8c;
        case 0x533f90u: goto label_533f90;
        case 0x533f94u: goto label_533f94;
        case 0x533f98u: goto label_533f98;
        case 0x533f9cu: goto label_533f9c;
        case 0x533fa0u: goto label_533fa0;
        case 0x533fa4u: goto label_533fa4;
        case 0x533fa8u: goto label_533fa8;
        case 0x533facu: goto label_533fac;
        case 0x533fb0u: goto label_533fb0;
        case 0x533fb4u: goto label_533fb4;
        case 0x533fb8u: goto label_533fb8;
        case 0x533fbcu: goto label_533fbc;
        case 0x533fc0u: goto label_533fc0;
        case 0x533fc4u: goto label_533fc4;
        case 0x533fc8u: goto label_533fc8;
        case 0x533fccu: goto label_533fcc;
        case 0x533fd0u: goto label_533fd0;
        case 0x533fd4u: goto label_533fd4;
        case 0x533fd8u: goto label_533fd8;
        case 0x533fdcu: goto label_533fdc;
        case 0x533fe0u: goto label_533fe0;
        case 0x533fe4u: goto label_533fe4;
        case 0x533fe8u: goto label_533fe8;
        case 0x533fecu: goto label_533fec;
        case 0x533ff0u: goto label_533ff0;
        case 0x533ff4u: goto label_533ff4;
        case 0x533ff8u: goto label_533ff8;
        case 0x533ffcu: goto label_533ffc;
        case 0x534000u: goto label_534000;
        case 0x534004u: goto label_534004;
        case 0x534008u: goto label_534008;
        case 0x53400cu: goto label_53400c;
        case 0x534010u: goto label_534010;
        case 0x534014u: goto label_534014;
        case 0x534018u: goto label_534018;
        case 0x53401cu: goto label_53401c;
        case 0x534020u: goto label_534020;
        case 0x534024u: goto label_534024;
        case 0x534028u: goto label_534028;
        case 0x53402cu: goto label_53402c;
        case 0x534030u: goto label_534030;
        case 0x534034u: goto label_534034;
        case 0x534038u: goto label_534038;
        case 0x53403cu: goto label_53403c;
        case 0x534040u: goto label_534040;
        case 0x534044u: goto label_534044;
        case 0x534048u: goto label_534048;
        case 0x53404cu: goto label_53404c;
        case 0x534050u: goto label_534050;
        case 0x534054u: goto label_534054;
        case 0x534058u: goto label_534058;
        case 0x53405cu: goto label_53405c;
        case 0x534060u: goto label_534060;
        case 0x534064u: goto label_534064;
        case 0x534068u: goto label_534068;
        case 0x53406cu: goto label_53406c;
        case 0x534070u: goto label_534070;
        case 0x534074u: goto label_534074;
        case 0x534078u: goto label_534078;
        case 0x53407cu: goto label_53407c;
        case 0x534080u: goto label_534080;
        case 0x534084u: goto label_534084;
        case 0x534088u: goto label_534088;
        case 0x53408cu: goto label_53408c;
        case 0x534090u: goto label_534090;
        case 0x534094u: goto label_534094;
        case 0x534098u: goto label_534098;
        case 0x53409cu: goto label_53409c;
        case 0x5340a0u: goto label_5340a0;
        case 0x5340a4u: goto label_5340a4;
        case 0x5340a8u: goto label_5340a8;
        case 0x5340acu: goto label_5340ac;
        case 0x5340b0u: goto label_5340b0;
        case 0x5340b4u: goto label_5340b4;
        case 0x5340b8u: goto label_5340b8;
        case 0x5340bcu: goto label_5340bc;
        case 0x5340c0u: goto label_5340c0;
        case 0x5340c4u: goto label_5340c4;
        case 0x5340c8u: goto label_5340c8;
        case 0x5340ccu: goto label_5340cc;
        case 0x5340d0u: goto label_5340d0;
        case 0x5340d4u: goto label_5340d4;
        case 0x5340d8u: goto label_5340d8;
        case 0x5340dcu: goto label_5340dc;
        case 0x5340e0u: goto label_5340e0;
        case 0x5340e4u: goto label_5340e4;
        case 0x5340e8u: goto label_5340e8;
        case 0x5340ecu: goto label_5340ec;
        case 0x5340f0u: goto label_5340f0;
        case 0x5340f4u: goto label_5340f4;
        case 0x5340f8u: goto label_5340f8;
        case 0x5340fcu: goto label_5340fc;
        case 0x534100u: goto label_534100;
        case 0x534104u: goto label_534104;
        case 0x534108u: goto label_534108;
        case 0x53410cu: goto label_53410c;
        case 0x534110u: goto label_534110;
        case 0x534114u: goto label_534114;
        case 0x534118u: goto label_534118;
        case 0x53411cu: goto label_53411c;
        case 0x534120u: goto label_534120;
        case 0x534124u: goto label_534124;
        case 0x534128u: goto label_534128;
        case 0x53412cu: goto label_53412c;
        case 0x534130u: goto label_534130;
        case 0x534134u: goto label_534134;
        case 0x534138u: goto label_534138;
        case 0x53413cu: goto label_53413c;
        case 0x534140u: goto label_534140;
        case 0x534144u: goto label_534144;
        case 0x534148u: goto label_534148;
        case 0x53414cu: goto label_53414c;
        case 0x534150u: goto label_534150;
        case 0x534154u: goto label_534154;
        case 0x534158u: goto label_534158;
        case 0x53415cu: goto label_53415c;
        case 0x534160u: goto label_534160;
        case 0x534164u: goto label_534164;
        case 0x534168u: goto label_534168;
        case 0x53416cu: goto label_53416c;
        case 0x534170u: goto label_534170;
        case 0x534174u: goto label_534174;
        case 0x534178u: goto label_534178;
        case 0x53417cu: goto label_53417c;
        case 0x534180u: goto label_534180;
        case 0x534184u: goto label_534184;
        case 0x534188u: goto label_534188;
        case 0x53418cu: goto label_53418c;
        case 0x534190u: goto label_534190;
        case 0x534194u: goto label_534194;
        case 0x534198u: goto label_534198;
        case 0x53419cu: goto label_53419c;
        case 0x5341a0u: goto label_5341a0;
        case 0x5341a4u: goto label_5341a4;
        case 0x5341a8u: goto label_5341a8;
        case 0x5341acu: goto label_5341ac;
        default: break;
    }

    ctx->pc = 0x533460u;

label_533460:
    // 0x533460: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x533460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_533464:
    // 0x533464: 0x3c0700be  lui         $a3, 0xBE
    ctx->pc = 0x533464u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)190 << 16));
label_533468:
    // 0x533468: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x533468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_53346c:
    // 0x53346c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x53346cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_533470:
    // 0x533470: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x533470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_533474:
    // 0x533474: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x533474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_533478:
    // 0x533478: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x533478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53347c:
    // 0x53347c: 0x24e7b610  addiu       $a3, $a3, -0x49F0
    ctx->pc = 0x53347cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948368));
label_533480:
    // 0x533480: 0x8c48cf98  lw          $t0, -0x3068($v0)
    ctx->pc = 0x533480u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_533484:
    // 0x533484: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x533484u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_533488:
    // 0x533488: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x533488u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_53348c:
    // 0x53348c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x53348cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_533490:
    // 0x533490: 0xac68cf98  sw          $t0, -0x3068($v1)
    ctx->pc = 0x533490u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 8));
label_533494:
    // 0x533494: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x533494u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_533498:
    // 0x533498: 0x8c42cf98  lw          $v0, -0x3068($v0)
    ctx->pc = 0x533498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_53349c:
    // 0x53349c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x53349cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_5334a0:
    // 0x5334a0: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x5334a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_5334a4:
    // 0x5334a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x5334a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_5334a8:
    // 0x5334a8: 0x2c41000b  sltiu       $at, $v0, 0xB
    ctx->pc = 0x5334a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_5334ac:
    // 0x5334ac: 0x10200307  beqz        $at, . + 4 + (0x307 << 2)
label_5334b0:
    if (ctx->pc == 0x5334B0u) {
        ctx->pc = 0x5334B0u;
            // 0x5334b0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5334B4u;
        goto label_5334b4;
    }
    ctx->pc = 0x5334ACu;
    {
        const bool branch_taken_0x5334ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x5334B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5334ACu;
            // 0x5334b0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5334ac) {
            ctx->pc = 0x5340CCu;
            goto label_5340cc;
        }
    }
    ctx->pc = 0x5334B4u;
label_5334b4:
    // 0x5334b4: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x5334b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_5334b8:
    // 0x5334b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x5334b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_5334bc:
    // 0x5334bc: 0x2463d090  addiu       $v1, $v1, -0x2F70
    ctx->pc = 0x5334bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955152));
label_5334c0:
    // 0x5334c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x5334c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_5334c4:
    // 0x5334c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x5334c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_5334c8:
    // 0x5334c8: 0x400008  jr          $v0
label_5334cc:
    if (ctx->pc == 0x5334CCu) {
        ctx->pc = 0x5334D0u;
        goto label_5334d0;
    }
    ctx->pc = 0x5334C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x5334D0u: goto label_5334d0;
            case 0x533668u: goto label_533668;
            case 0x53374Cu: goto label_53374c;
            case 0x5338D4u: goto label_5338d4;
            case 0x5339C0u: goto label_5339c0;
            case 0x533AB8u: goto label_533ab8;
            case 0x533B98u: goto label_533b98;
            case 0x533DD4u: goto label_533dd4;
            case 0x533ECCu: goto label_533ecc;
            case 0x533FACu: goto label_533fac;
            case 0x5340CCu: goto label_5340cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x5334D0u;
label_5334d0:
    // 0x5334d0: 0xc14d2a4  jal         func_534A90
label_5334d4:
    if (ctx->pc == 0x5334D4u) {
        ctx->pc = 0x5334D8u;
        goto label_5334d8;
    }
    ctx->pc = 0x5334D0u;
    SET_GPR_U32(ctx, 31, 0x5334D8u);
    ctx->pc = 0x534A90u;
    if (runtime->hasFunction(0x534A90u)) {
        auto targetFn = runtime->lookupFunction(0x534A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5334D8u; }
        if (ctx->pc != 0x5334D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00534A90_0x534a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5334D8u; }
        if (ctx->pc != 0x5334D8u) { return; }
    }
    ctx->pc = 0x5334D8u;
label_5334d8:
    // 0x5334d8: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_5334dc:
    if (ctx->pc == 0x5334DCu) {
        ctx->pc = 0x5334DCu;
            // 0x5334dc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x5334E0u;
        goto label_5334e0;
    }
    ctx->pc = 0x5334D8u;
    {
        const bool branch_taken_0x5334d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x5334DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5334D8u;
            // 0x5334dc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5334d8) {
            ctx->pc = 0x5335B4u;
            goto label_5335b4;
        }
    }
    ctx->pc = 0x5334E0u;
label_5334e0:
    // 0x5334e0: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x5334e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_5334e4:
    // 0x5334e4: 0x50430008  beql        $v0, $v1, . + 4 + (0x8 << 2)
label_5334e8:
    if (ctx->pc == 0x5334E8u) {
        ctx->pc = 0x5334E8u;
            // 0x5334e8: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x5334ECu;
        goto label_5334ec;
    }
    ctx->pc = 0x5334E4u;
    {
        const bool branch_taken_0x5334e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x5334e4) {
            ctx->pc = 0x5334E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5334E4u;
            // 0x5334e8: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x533508u;
            goto label_533508;
        }
    }
    ctx->pc = 0x5334ECu;
label_5334ec:
    // 0x5334ec: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x5334ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_5334f0:
    // 0x5334f0: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x5334f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_5334f4:
    // 0x5334f4: 0x8c44cf98  lw          $a0, -0x3068($v0)
    ctx->pc = 0x5334f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_5334f8:
    // 0x5334f8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x5334f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_5334fc:
    // 0x5334fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x5334fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_533500:
    // 0x533500: 0x100002f8  b           . + 4 + (0x2F8 << 2)
label_533504:
    if (ctx->pc == 0x533504u) {
        ctx->pc = 0x533504u;
            // 0x533504: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->pc = 0x533508u;
        goto label_533508;
    }
    ctx->pc = 0x533500u;
    {
        const bool branch_taken_0x533500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x533504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533500u;
            // 0x533504: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x533500) {
            ctx->pc = 0x5340E4u;
            goto label_5340e4;
        }
    }
    ctx->pc = 0x533508u;
label_533508:
    // 0x533508: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x533508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_53350c:
    // 0x53350c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x53350cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_533510:
    // 0x533510: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x533510u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_533514:
    // 0x533514: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x533514u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_533518:
    // 0x533518: 0x320f809  jalr        $t9
label_53351c:
    if (ctx->pc == 0x53351Cu) {
        ctx->pc = 0x53351Cu;
            // 0x53351c: 0x26250338  addiu       $a1, $s1, 0x338 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 824));
        ctx->pc = 0x533520u;
        goto label_533520;
    }
    ctx->pc = 0x533518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x533520u);
        ctx->pc = 0x53351Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533518u;
            // 0x53351c: 0x26250338  addiu       $a1, $s1, 0x338 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 824));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x533520u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x533520u; }
            if (ctx->pc != 0x533520u) { return; }
        }
        }
    }
    ctx->pc = 0x533520u;
label_533520:
    // 0x533520: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x533520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_533524:
    // 0x533524: 0x2402ff2e  addiu       $v0, $zero, -0xD2
    ctx->pc = 0x533524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
label_533528:
    // 0x533528: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
label_53352c:
    if (ctx->pc == 0x53352Cu) {
        ctx->pc = 0x53352Cu;
            // 0x53352c: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x533530u;
        goto label_533530;
    }
    ctx->pc = 0x533528u;
    {
        const bool branch_taken_0x533528 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x533528) {
            ctx->pc = 0x53352Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x533528u;
            // 0x53352c: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x533560u;
            goto label_533560;
        }
    }
    ctx->pc = 0x533530u;
label_533530:
    // 0x533530: 0x2402ff38  addiu       $v0, $zero, -0xC8
    ctx->pc = 0x533530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
label_533534:
    // 0x533534: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_533538:
    if (ctx->pc == 0x533538u) {
        ctx->pc = 0x53353Cu;
        goto label_53353c;
    }
    ctx->pc = 0x533534u;
    {
        const bool branch_taken_0x533534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x533534) {
            ctx->pc = 0x53355Cu;
            goto label_53355c;
        }
    }
    ctx->pc = 0x53353Cu;
label_53353c:
    // 0x53353c: 0x2402ff9c  addiu       $v0, $zero, -0x64
    ctx->pc = 0x53353cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
label_533540:
    // 0x533540: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_533544:
    if (ctx->pc == 0x533544u) {
        ctx->pc = 0x533548u;
        goto label_533548;
    }
    ctx->pc = 0x533540u;
    {
        const bool branch_taken_0x533540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x533540) {
            ctx->pc = 0x53355Cu;
            goto label_53355c;
        }
    }
    ctx->pc = 0x533548u;
label_533548:
    // 0x533548: 0x2402ffa5  addiu       $v0, $zero, -0x5B
    ctx->pc = 0x533548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
label_53354c:
    // 0x53354c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_533550:
    if (ctx->pc == 0x533550u) {
        ctx->pc = 0x533554u;
        goto label_533554;
    }
    ctx->pc = 0x53354Cu;
    {
        const bool branch_taken_0x53354c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x53354c) {
            ctx->pc = 0x53355Cu;
            goto label_53355c;
        }
    }
    ctx->pc = 0x533554u;
label_533554:
    // 0x533554: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
label_533558:
    if (ctx->pc == 0x533558u) {
        ctx->pc = 0x533558u;
            // 0x533558: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x53355Cu;
        goto label_53355c;
    }
    ctx->pc = 0x533554u;
    {
        const bool branch_taken_0x533554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x533554) {
            ctx->pc = 0x533558u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x533554u;
            // 0x533558: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
            ctx->pc = 0x533560u;
            goto label_533560;
        }
    }
    ctx->pc = 0x53355Cu;
label_53355c:
    // 0x53355c: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x53355cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_533560:
    // 0x533560: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x533560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_533564:
    // 0x533564: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_533568:
    if (ctx->pc == 0x533568u) {
        ctx->pc = 0x533568u;
            // 0x533568: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x53356Cu;
        goto label_53356c;
    }
    ctx->pc = 0x533564u;
    {
        const bool branch_taken_0x533564 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x533568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533564u;
            // 0x533568: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x533564) {
            ctx->pc = 0x533590u;
            goto label_533590;
        }
    }
    ctx->pc = 0x53356Cu;
label_53356c:
    // 0x53356c: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x53356cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_533570:
    // 0x533570: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x533570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_533574:
    // 0x533574: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x533574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_533578:
    // 0x533578: 0x8c44cf98  lw          $a0, -0x3068($v0)
    ctx->pc = 0x533578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_53357c:
    // 0x53357c: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x53357cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_533580:
    // 0x533580: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x533580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_533584:
    // 0x533584: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x533584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_533588:
    // 0x533588: 0x100002d6  b           . + 4 + (0x2D6 << 2)
label_53358c:
    if (ctx->pc == 0x53358Cu) {
        ctx->pc = 0x53358Cu;
            // 0x53358c: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->pc = 0x533590u;
        goto label_533590;
    }
    ctx->pc = 0x533588u;
    {
        const bool branch_taken_0x533588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53358Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533588u;
            // 0x53358c: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x533588) {
            ctx->pc = 0x5340E4u;
            goto label_5340e4;
        }
    }
    ctx->pc = 0x533590u;
label_533590:
    // 0x533590: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x533590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_533594:
    // 0x533594: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x533594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_533598:
    // 0x533598: 0x8c43cf98  lw          $v1, -0x3068($v0)
    ctx->pc = 0x533598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_53359c:
    // 0x53359c: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x53359cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_5335a0:
    // 0x5335a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x5335a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_5335a4:
    // 0x5335a4: 0x2442b610  addiu       $v0, $v0, -0x49F0
    ctx->pc = 0x5335a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948368));
label_5335a8:
    // 0x5335a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x5335a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_5335ac:
    // 0x5335ac: 0x100002c7  b           . + 4 + (0x2C7 << 2)
label_5335b0:
    if (ctx->pc == 0x5335B0u) {
        ctx->pc = 0x5335B0u;
            // 0x5335b0: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x5335B4u;
        goto label_5335b4;
    }
    ctx->pc = 0x5335ACu;
    {
        const bool branch_taken_0x5335ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5335B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5335ACu;
            // 0x5335b0: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5335ac) {
            ctx->pc = 0x5340CCu;
            goto label_5340cc;
        }
    }
    ctx->pc = 0x5335B4u;
label_5335b4:
    // 0x5335b4: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x5335b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_5335b8:
    // 0x5335b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x5335b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5335bc:
    // 0x5335bc: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x5335bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_5335c0:
    // 0x5335c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x5335c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5335c4:
    // 0x5335c4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x5335c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_5335c8:
    // 0x5335c8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x5335c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_5335cc:
    // 0x5335cc: 0x320f809  jalr        $t9
label_5335d0:
    if (ctx->pc == 0x5335D0u) {
        ctx->pc = 0x5335D0u;
            // 0x5335d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5335D4u;
        goto label_5335d4;
    }
    ctx->pc = 0x5335CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5335D4u);
        ctx->pc = 0x5335D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5335CCu;
            // 0x5335d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5335D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5335D4u; }
            if (ctx->pc != 0x5335D4u) { return; }
        }
        }
    }
    ctx->pc = 0x5335D4u;
label_5335d4:
    // 0x5335d4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x5335d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_5335d8:
    // 0x5335d8: 0x2402ff2e  addiu       $v0, $zero, -0xD2
    ctx->pc = 0x5335d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
label_5335dc:
    // 0x5335dc: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
label_5335e0:
    if (ctx->pc == 0x5335E0u) {
        ctx->pc = 0x5335E0u;
            // 0x5335e0: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x5335E4u;
        goto label_5335e4;
    }
    ctx->pc = 0x5335DCu;
    {
        const bool branch_taken_0x5335dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x5335dc) {
            ctx->pc = 0x5335E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5335DCu;
            // 0x5335e0: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x533614u;
            goto label_533614;
        }
    }
    ctx->pc = 0x5335E4u;
label_5335e4:
    // 0x5335e4: 0x2402ff38  addiu       $v0, $zero, -0xC8
    ctx->pc = 0x5335e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
label_5335e8:
    // 0x5335e8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_5335ec:
    if (ctx->pc == 0x5335ECu) {
        ctx->pc = 0x5335F0u;
        goto label_5335f0;
    }
    ctx->pc = 0x5335E8u;
    {
        const bool branch_taken_0x5335e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x5335e8) {
            ctx->pc = 0x533610u;
            goto label_533610;
        }
    }
    ctx->pc = 0x5335F0u;
label_5335f0:
    // 0x5335f0: 0x2402ff9c  addiu       $v0, $zero, -0x64
    ctx->pc = 0x5335f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
label_5335f4:
    // 0x5335f4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_5335f8:
    if (ctx->pc == 0x5335F8u) {
        ctx->pc = 0x5335FCu;
        goto label_5335fc;
    }
    ctx->pc = 0x5335F4u;
    {
        const bool branch_taken_0x5335f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x5335f4) {
            ctx->pc = 0x533610u;
            goto label_533610;
        }
    }
    ctx->pc = 0x5335FCu;
label_5335fc:
    // 0x5335fc: 0x2402ffa5  addiu       $v0, $zero, -0x5B
    ctx->pc = 0x5335fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
label_533600:
    // 0x533600: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_533604:
    if (ctx->pc == 0x533604u) {
        ctx->pc = 0x533608u;
        goto label_533608;
    }
    ctx->pc = 0x533600u;
    {
        const bool branch_taken_0x533600 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x533600) {
            ctx->pc = 0x533610u;
            goto label_533610;
        }
    }
    ctx->pc = 0x533608u;
label_533608:
    // 0x533608: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
label_53360c:
    if (ctx->pc == 0x53360Cu) {
        ctx->pc = 0x53360Cu;
            // 0x53360c: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x533610u;
        goto label_533610;
    }
    ctx->pc = 0x533608u;
    {
        const bool branch_taken_0x533608 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x533608) {
            ctx->pc = 0x53360Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x533608u;
            // 0x53360c: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
            ctx->pc = 0x533614u;
            goto label_533614;
        }
    }
    ctx->pc = 0x533610u;
label_533610:
    // 0x533610: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x533610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_533614:
    // 0x533614: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x533614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_533618:
    // 0x533618: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_53361c:
    if (ctx->pc == 0x53361Cu) {
        ctx->pc = 0x53361Cu;
            // 0x53361c: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x533620u;
        goto label_533620;
    }
    ctx->pc = 0x533618u;
    {
        const bool branch_taken_0x533618 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x53361Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533618u;
            // 0x53361c: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x533618) {
            ctx->pc = 0x533644u;
            goto label_533644;
        }
    }
    ctx->pc = 0x533620u;
label_533620:
    // 0x533620: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x533620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_533624:
    // 0x533624: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x533624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_533628:
    // 0x533628: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x533628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_53362c:
    // 0x53362c: 0x8c44cf98  lw          $a0, -0x3068($v0)
    ctx->pc = 0x53362cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_533630:
    // 0x533630: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x533630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_533634:
    // 0x533634: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x533634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_533638:
    // 0x533638: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x533638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53363c:
    // 0x53363c: 0x100002a9  b           . + 4 + (0x2A9 << 2)
label_533640:
    if (ctx->pc == 0x533640u) {
        ctx->pc = 0x533640u;
            // 0x533640: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->pc = 0x533644u;
        goto label_533644;
    }
    ctx->pc = 0x53363Cu;
    {
        const bool branch_taken_0x53363c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x533640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53363Cu;
            // 0x533640: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53363c) {
            ctx->pc = 0x5340E4u;
            goto label_5340e4;
        }
    }
    ctx->pc = 0x533644u;
label_533644:
    // 0x533644: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x533644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_533648:
    // 0x533648: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x533648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_53364c:
    // 0x53364c: 0x8c43cf98  lw          $v1, -0x3068($v0)
    ctx->pc = 0x53364cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_533650:
    // 0x533650: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x533650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_533654:
    // 0x533654: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x533654u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_533658:
    // 0x533658: 0x2442b610  addiu       $v0, $v0, -0x49F0
    ctx->pc = 0x533658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948368));
label_53365c:
    // 0x53365c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x53365cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_533660:
    // 0x533660: 0x1000029a  b           . + 4 + (0x29A << 2)
label_533664:
    if (ctx->pc == 0x533664u) {
        ctx->pc = 0x533664u;
            // 0x533664: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x533668u;
        goto label_533668;
    }
    ctx->pc = 0x533660u;
    {
        const bool branch_taken_0x533660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x533664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533660u;
            // 0x533664: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x533660) {
            ctx->pc = 0x5340CCu;
            goto label_5340cc;
        }
    }
    ctx->pc = 0x533668u;
label_533668:
    // 0x533668: 0xc14d2d8  jal         func_534B60
label_53366c:
    if (ctx->pc == 0x53366Cu) {
        ctx->pc = 0x533670u;
        goto label_533670;
    }
    ctx->pc = 0x533668u;
    SET_GPR_U32(ctx, 31, 0x533670u);
    ctx->pc = 0x534B60u;
    if (runtime->hasFunction(0x534B60u)) {
        auto targetFn = runtime->lookupFunction(0x534B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x533670u; }
        if (ctx->pc != 0x533670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00534B60_0x534b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x533670u; }
        if (ctx->pc != 0x533670u) { return; }
    }
    ctx->pc = 0x533670u;
label_533670:
    // 0x533670: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_533674:
    if (ctx->pc == 0x533674u) {
        ctx->pc = 0x533674u;
            // 0x533674: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x533678u;
        goto label_533678;
    }
    ctx->pc = 0x533670u;
    {
        const bool branch_taken_0x533670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x533674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533670u;
            // 0x533674: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x533670) {
            ctx->pc = 0x5336A0u;
            goto label_5336a0;
        }
    }
    ctx->pc = 0x533678u;
label_533678:
    // 0x533678: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x533678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_53367c:
    // 0x53367c: 0x50430009  beql        $v0, $v1, . + 4 + (0x9 << 2)
label_533680:
    if (ctx->pc == 0x533680u) {
        ctx->pc = 0x533680u;
            // 0x533680: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x533684u;
        goto label_533684;
    }
    ctx->pc = 0x53367Cu;
    {
        const bool branch_taken_0x53367c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x53367c) {
            ctx->pc = 0x533680u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53367Cu;
            // 0x533680: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5336A4u;
            goto label_5336a4;
        }
    }
    ctx->pc = 0x533684u;
label_533684:
    // 0x533684: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x533684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_533688:
    // 0x533688: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x533688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_53368c:
    // 0x53368c: 0x8c44cf98  lw          $a0, -0x3068($v0)
    ctx->pc = 0x53368cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_533690:
    // 0x533690: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x533690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_533694:
    // 0x533694: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x533694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_533698:
    // 0x533698: 0x10000292  b           . + 4 + (0x292 << 2)
label_53369c:
    if (ctx->pc == 0x53369Cu) {
        ctx->pc = 0x53369Cu;
            // 0x53369c: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->pc = 0x5336A0u;
        goto label_5336a0;
    }
    ctx->pc = 0x533698u;
    {
        const bool branch_taken_0x533698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53369Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533698u;
            // 0x53369c: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x533698) {
            ctx->pc = 0x5340E4u;
            goto label_5340e4;
        }
    }
    ctx->pc = 0x5336A0u;
label_5336a0:
    // 0x5336a0: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x5336a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_5336a4:
    // 0x5336a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x5336a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5336a8:
    // 0x5336a8: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x5336a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_5336ac:
    // 0x5336ac: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x5336acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_5336b0:
    // 0x5336b0: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x5336b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_5336b4:
    // 0x5336b4: 0x320f809  jalr        $t9
label_5336b8:
    if (ctx->pc == 0x5336B8u) {
        ctx->pc = 0x5336B8u;
            // 0x5336b8: 0x26250338  addiu       $a1, $s1, 0x338 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 824));
        ctx->pc = 0x5336BCu;
        goto label_5336bc;
    }
    ctx->pc = 0x5336B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5336BCu);
        ctx->pc = 0x5336B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5336B4u;
            // 0x5336b8: 0x26250338  addiu       $a1, $s1, 0x338 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 824));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5336BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5336BCu; }
            if (ctx->pc != 0x5336BCu) { return; }
        }
        }
    }
    ctx->pc = 0x5336BCu;
label_5336bc:
    // 0x5336bc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x5336bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_5336c0:
    // 0x5336c0: 0x2402ff2e  addiu       $v0, $zero, -0xD2
    ctx->pc = 0x5336c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
label_5336c4:
    // 0x5336c4: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
label_5336c8:
    if (ctx->pc == 0x5336C8u) {
        ctx->pc = 0x5336C8u;
            // 0x5336c8: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x5336CCu;
        goto label_5336cc;
    }
    ctx->pc = 0x5336C4u;
    {
        const bool branch_taken_0x5336c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x5336c4) {
            ctx->pc = 0x5336C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5336C4u;
            // 0x5336c8: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5336FCu;
            goto label_5336fc;
        }
    }
    ctx->pc = 0x5336CCu;
label_5336cc:
    // 0x5336cc: 0x2402ff38  addiu       $v0, $zero, -0xC8
    ctx->pc = 0x5336ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
label_5336d0:
    // 0x5336d0: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_5336d4:
    if (ctx->pc == 0x5336D4u) {
        ctx->pc = 0x5336D8u;
        goto label_5336d8;
    }
    ctx->pc = 0x5336D0u;
    {
        const bool branch_taken_0x5336d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x5336d0) {
            ctx->pc = 0x5336F8u;
            goto label_5336f8;
        }
    }
    ctx->pc = 0x5336D8u;
label_5336d8:
    // 0x5336d8: 0x2402ff9c  addiu       $v0, $zero, -0x64
    ctx->pc = 0x5336d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
label_5336dc:
    // 0x5336dc: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_5336e0:
    if (ctx->pc == 0x5336E0u) {
        ctx->pc = 0x5336E4u;
        goto label_5336e4;
    }
    ctx->pc = 0x5336DCu;
    {
        const bool branch_taken_0x5336dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x5336dc) {
            ctx->pc = 0x5336F8u;
            goto label_5336f8;
        }
    }
    ctx->pc = 0x5336E4u;
label_5336e4:
    // 0x5336e4: 0x2402ffa5  addiu       $v0, $zero, -0x5B
    ctx->pc = 0x5336e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
label_5336e8:
    // 0x5336e8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_5336ec:
    if (ctx->pc == 0x5336ECu) {
        ctx->pc = 0x5336F0u;
        goto label_5336f0;
    }
    ctx->pc = 0x5336E8u;
    {
        const bool branch_taken_0x5336e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x5336e8) {
            ctx->pc = 0x5336F8u;
            goto label_5336f8;
        }
    }
    ctx->pc = 0x5336F0u;
label_5336f0:
    // 0x5336f0: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
label_5336f4:
    if (ctx->pc == 0x5336F4u) {
        ctx->pc = 0x5336F4u;
            // 0x5336f4: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x5336F8u;
        goto label_5336f8;
    }
    ctx->pc = 0x5336F0u;
    {
        const bool branch_taken_0x5336f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x5336f0) {
            ctx->pc = 0x5336F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5336F0u;
            // 0x5336f4: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5336FCu;
            goto label_5336fc;
        }
    }
    ctx->pc = 0x5336F8u;
label_5336f8:
    // 0x5336f8: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x5336f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_5336fc:
    // 0x5336fc: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x5336fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_533700:
    // 0x533700: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_533704:
    if (ctx->pc == 0x533704u) {
        ctx->pc = 0x533704u;
            // 0x533704: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x533708u;
        goto label_533708;
    }
    ctx->pc = 0x533700u;
    {
        const bool branch_taken_0x533700 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x533704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533700u;
            // 0x533704: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x533700) {
            ctx->pc = 0x53372Cu;
            goto label_53372c;
        }
    }
    ctx->pc = 0x533708u;
label_533708:
    // 0x533708: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x533708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_53370c:
    // 0x53370c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x53370cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_533710:
    // 0x533710: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x533710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_533714:
    // 0x533714: 0x8c44cf98  lw          $a0, -0x3068($v0)
    ctx->pc = 0x533714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_533718:
    // 0x533718: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x533718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_53371c:
    // 0x53371c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x53371cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_533720:
    // 0x533720: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x533720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_533724:
    // 0x533724: 0x1000026f  b           . + 4 + (0x26F << 2)
label_533728:
    if (ctx->pc == 0x533728u) {
        ctx->pc = 0x533728u;
            // 0x533728: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->pc = 0x53372Cu;
        goto label_53372c;
    }
    ctx->pc = 0x533724u;
    {
        const bool branch_taken_0x533724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x533728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533724u;
            // 0x533728: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x533724) {
            ctx->pc = 0x5340E4u;
            goto label_5340e4;
        }
    }
    ctx->pc = 0x53372Cu;
label_53372c:
    // 0x53372c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x53372cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_533730:
    // 0x533730: 0x3c0300be  lui         $v1, 0xBE
    ctx->pc = 0x533730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)190 << 16));
label_533734:
    // 0x533734: 0x8c42cf98  lw          $v0, -0x3068($v0)
    ctx->pc = 0x533734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_533738:
    // 0x533738: 0x2463b610  addiu       $v1, $v1, -0x49F0
    ctx->pc = 0x533738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948368));
label_53373c:
    // 0x53373c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x53373cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_533740:
    // 0x533740: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x533740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_533744:
    // 0x533744: 0x10000261  b           . + 4 + (0x261 << 2)
label_533748:
    if (ctx->pc == 0x533748u) {
        ctx->pc = 0x533748u;
            // 0x533748: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x53374Cu;
        goto label_53374c;
    }
    ctx->pc = 0x533744u;
    {
        const bool branch_taken_0x533744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x533748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533744u;
            // 0x533748: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x533744) {
            ctx->pc = 0x5340CCu;
            goto label_5340cc;
        }
    }
    ctx->pc = 0x53374Cu;
label_53374c:
    // 0x53374c: 0xc14d3c4  jal         func_534F10
label_533750:
    if (ctx->pc == 0x533750u) {
        ctx->pc = 0x533754u;
        goto label_533754;
    }
    ctx->pc = 0x53374Cu;
    SET_GPR_U32(ctx, 31, 0x533754u);
    ctx->pc = 0x534F10u;
    if (runtime->hasFunction(0x534F10u)) {
        auto targetFn = runtime->lookupFunction(0x534F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x533754u; }
        if (ctx->pc != 0x533754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00534F10_0x534f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x533754u; }
        if (ctx->pc != 0x533754u) { return; }
    }
    ctx->pc = 0x533754u;
label_533754:
    // 0x533754: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_533758:
    if (ctx->pc == 0x533758u) {
        ctx->pc = 0x533758u;
            // 0x533758: 0x922307c1  lbu         $v1, 0x7C1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1985)));
        ctx->pc = 0x53375Cu;
        goto label_53375c;
    }
    ctx->pc = 0x533754u;
    {
        const bool branch_taken_0x533754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x533754) {
            ctx->pc = 0x533758u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x533754u;
            // 0x533758: 0x922307c1  lbu         $v1, 0x7C1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1985)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x533768u;
            goto label_533768;
        }
    }
    ctx->pc = 0x53375Cu;
label_53375c:
    // 0x53375c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x53375cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_533760:
    // 0x533760: 0x1000025a  b           . + 4 + (0x25A << 2)
label_533764:
    if (ctx->pc == 0x533764u) {
        ctx->pc = 0x533764u;
            // 0x533764: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->pc = 0x533768u;
        goto label_533768;
    }
    ctx->pc = 0x533760u;
    {
        const bool branch_taken_0x533760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x533764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533760u;
            // 0x533764: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x533760) {
            ctx->pc = 0x5340CCu;
            goto label_5340cc;
        }
    }
    ctx->pc = 0x533768u;
label_533768:
    // 0x533768: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x533768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_53376c:
    // 0x53376c: 0x1460002d  bnez        $v1, . + 4 + (0x2D << 2)
label_533770:
    if (ctx->pc == 0x533770u) {
        ctx->pc = 0x533770u;
            // 0x533770: 0xac40b630  sw          $zero, -0x49D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294948400), GPR_U32(ctx, 0));
        ctx->pc = 0x533774u;
        goto label_533774;
    }
    ctx->pc = 0x53376Cu;
    {
        const bool branch_taken_0x53376c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x533770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53376Cu;
            // 0x533770: 0xac40b630  sw          $zero, -0x49D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294948400), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53376c) {
            ctx->pc = 0x533824u;
            goto label_533824;
        }
    }
    ctx->pc = 0x533774u;
label_533774:
    // 0x533774: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x533774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_533778:
    // 0x533778: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x533778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_53377c:
    // 0x53377c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x53377cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_533780:
    // 0x533780: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x533780u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_533784:
    // 0x533784: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x533784u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_533788:
    // 0x533788: 0x320f809  jalr        $t9
label_53378c:
    if (ctx->pc == 0x53378Cu) {
        ctx->pc = 0x53378Cu;
            // 0x53378c: 0x26250350  addiu       $a1, $s1, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 848));
        ctx->pc = 0x533790u;
        goto label_533790;
    }
    ctx->pc = 0x533788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x533790u);
        ctx->pc = 0x53378Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533788u;
            // 0x53378c: 0x26250350  addiu       $a1, $s1, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 848));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x533790u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x533790u; }
            if (ctx->pc != 0x533790u) { return; }
        }
        }
    }
    ctx->pc = 0x533790u;
label_533790:
    // 0x533790: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x533790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_533794:
    // 0x533794: 0x2402ff2e  addiu       $v0, $zero, -0xD2
    ctx->pc = 0x533794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
label_533798:
    // 0x533798: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
label_53379c:
    if (ctx->pc == 0x53379Cu) {
        ctx->pc = 0x53379Cu;
            // 0x53379c: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x5337A0u;
        goto label_5337a0;
    }
    ctx->pc = 0x533798u;
    {
        const bool branch_taken_0x533798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x533798) {
            ctx->pc = 0x53379Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x533798u;
            // 0x53379c: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5337D0u;
            goto label_5337d0;
        }
    }
    ctx->pc = 0x5337A0u;
label_5337a0:
    // 0x5337a0: 0x2402ff38  addiu       $v0, $zero, -0xC8
    ctx->pc = 0x5337a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
label_5337a4:
    // 0x5337a4: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_5337a8:
    if (ctx->pc == 0x5337A8u) {
        ctx->pc = 0x5337ACu;
        goto label_5337ac;
    }
    ctx->pc = 0x5337A4u;
    {
        const bool branch_taken_0x5337a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x5337a4) {
            ctx->pc = 0x5337CCu;
            goto label_5337cc;
        }
    }
    ctx->pc = 0x5337ACu;
label_5337ac:
    // 0x5337ac: 0x2402ff9c  addiu       $v0, $zero, -0x64
    ctx->pc = 0x5337acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
label_5337b0:
    // 0x5337b0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_5337b4:
    if (ctx->pc == 0x5337B4u) {
        ctx->pc = 0x5337B8u;
        goto label_5337b8;
    }
    ctx->pc = 0x5337B0u;
    {
        const bool branch_taken_0x5337b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x5337b0) {
            ctx->pc = 0x5337CCu;
            goto label_5337cc;
        }
    }
    ctx->pc = 0x5337B8u;
label_5337b8:
    // 0x5337b8: 0x2402ffa5  addiu       $v0, $zero, -0x5B
    ctx->pc = 0x5337b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
label_5337bc:
    // 0x5337bc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_5337c0:
    if (ctx->pc == 0x5337C0u) {
        ctx->pc = 0x5337C4u;
        goto label_5337c4;
    }
    ctx->pc = 0x5337BCu;
    {
        const bool branch_taken_0x5337bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x5337bc) {
            ctx->pc = 0x5337CCu;
            goto label_5337cc;
        }
    }
    ctx->pc = 0x5337C4u;
label_5337c4:
    // 0x5337c4: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
label_5337c8:
    if (ctx->pc == 0x5337C8u) {
        ctx->pc = 0x5337C8u;
            // 0x5337c8: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x5337CCu;
        goto label_5337cc;
    }
    ctx->pc = 0x5337C4u;
    {
        const bool branch_taken_0x5337c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x5337c4) {
            ctx->pc = 0x5337C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5337C4u;
            // 0x5337c8: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5337D0u;
            goto label_5337d0;
        }
    }
    ctx->pc = 0x5337CCu;
label_5337cc:
    // 0x5337cc: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x5337ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_5337d0:
    // 0x5337d0: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x5337d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_5337d4:
    // 0x5337d4: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_5337d8:
    if (ctx->pc == 0x5337D8u) {
        ctx->pc = 0x5337D8u;
            // 0x5337d8: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x5337DCu;
        goto label_5337dc;
    }
    ctx->pc = 0x5337D4u;
    {
        const bool branch_taken_0x5337d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x5337D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5337D4u;
            // 0x5337d8: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5337d4) {
            ctx->pc = 0x533800u;
            goto label_533800;
        }
    }
    ctx->pc = 0x5337DCu;
label_5337dc:
    // 0x5337dc: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x5337dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_5337e0:
    // 0x5337e0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x5337e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_5337e4:
    // 0x5337e4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x5337e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_5337e8:
    // 0x5337e8: 0x8c44cf98  lw          $a0, -0x3068($v0)
    ctx->pc = 0x5337e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_5337ec:
    // 0x5337ec: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x5337ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_5337f0:
    // 0x5337f0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x5337f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_5337f4:
    // 0x5337f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x5337f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5337f8:
    // 0x5337f8: 0x1000023a  b           . + 4 + (0x23A << 2)
label_5337fc:
    if (ctx->pc == 0x5337FCu) {
        ctx->pc = 0x5337FCu;
            // 0x5337fc: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->pc = 0x533800u;
        goto label_533800;
    }
    ctx->pc = 0x5337F8u;
    {
        const bool branch_taken_0x5337f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5337FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5337F8u;
            // 0x5337fc: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5337f8) {
            ctx->pc = 0x5340E4u;
            goto label_5340e4;
        }
    }
    ctx->pc = 0x533800u;
label_533800:
    // 0x533800: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x533800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_533804:
    // 0x533804: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x533804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_533808:
    // 0x533808: 0x8c43cf98  lw          $v1, -0x3068($v0)
    ctx->pc = 0x533808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_53380c:
    // 0x53380c: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x53380cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_533810:
    // 0x533810: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x533810u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_533814:
    // 0x533814: 0x2442b610  addiu       $v0, $v0, -0x49F0
    ctx->pc = 0x533814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948368));
label_533818:
    // 0x533818: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x533818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_53381c:
    // 0x53381c: 0x1000022b  b           . + 4 + (0x22B << 2)
label_533820:
    if (ctx->pc == 0x533820u) {
        ctx->pc = 0x533820u;
            // 0x533820: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x533824u;
        goto label_533824;
    }
    ctx->pc = 0x53381Cu;
    {
        const bool branch_taken_0x53381c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x533820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53381Cu;
            // 0x533820: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53381c) {
            ctx->pc = 0x5340CCu;
            goto label_5340cc;
        }
    }
    ctx->pc = 0x533824u;
label_533824:
    // 0x533824: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x533824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_533828:
    // 0x533828: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x533828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_53382c:
    // 0x53382c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x53382cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_533830:
    // 0x533830: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x533830u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_533834:
    // 0x533834: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x533834u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_533838:
    // 0x533838: 0x320f809  jalr        $t9
label_53383c:
    if (ctx->pc == 0x53383Cu) {
        ctx->pc = 0x53383Cu;
            // 0x53383c: 0x26250068  addiu       $a1, $s1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
        ctx->pc = 0x533840u;
        goto label_533840;
    }
    ctx->pc = 0x533838u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x533840u);
        ctx->pc = 0x53383Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533838u;
            // 0x53383c: 0x26250068  addiu       $a1, $s1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x533840u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x533840u; }
            if (ctx->pc != 0x533840u) { return; }
        }
        }
    }
    ctx->pc = 0x533840u;
label_533840:
    // 0x533840: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x533840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_533844:
    // 0x533844: 0x2402ff2e  addiu       $v0, $zero, -0xD2
    ctx->pc = 0x533844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
label_533848:
    // 0x533848: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
label_53384c:
    if (ctx->pc == 0x53384Cu) {
        ctx->pc = 0x53384Cu;
            // 0x53384c: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x533850u;
        goto label_533850;
    }
    ctx->pc = 0x533848u;
    {
        const bool branch_taken_0x533848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x533848) {
            ctx->pc = 0x53384Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x533848u;
            // 0x53384c: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x533880u;
            goto label_533880;
        }
    }
    ctx->pc = 0x533850u;
label_533850:
    // 0x533850: 0x2402ff38  addiu       $v0, $zero, -0xC8
    ctx->pc = 0x533850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
label_533854:
    // 0x533854: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_533858:
    if (ctx->pc == 0x533858u) {
        ctx->pc = 0x53385Cu;
        goto label_53385c;
    }
    ctx->pc = 0x533854u;
    {
        const bool branch_taken_0x533854 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x533854) {
            ctx->pc = 0x53387Cu;
            goto label_53387c;
        }
    }
    ctx->pc = 0x53385Cu;
label_53385c:
    // 0x53385c: 0x2402ff9c  addiu       $v0, $zero, -0x64
    ctx->pc = 0x53385cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
label_533860:
    // 0x533860: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_533864:
    if (ctx->pc == 0x533864u) {
        ctx->pc = 0x533868u;
        goto label_533868;
    }
    ctx->pc = 0x533860u;
    {
        const bool branch_taken_0x533860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x533860) {
            ctx->pc = 0x53387Cu;
            goto label_53387c;
        }
    }
    ctx->pc = 0x533868u;
label_533868:
    // 0x533868: 0x2402ffa5  addiu       $v0, $zero, -0x5B
    ctx->pc = 0x533868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
label_53386c:
    // 0x53386c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_533870:
    if (ctx->pc == 0x533870u) {
        ctx->pc = 0x533874u;
        goto label_533874;
    }
    ctx->pc = 0x53386Cu;
    {
        const bool branch_taken_0x53386c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x53386c) {
            ctx->pc = 0x53387Cu;
            goto label_53387c;
        }
    }
    ctx->pc = 0x533874u;
label_533874:
    // 0x533874: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
label_533878:
    if (ctx->pc == 0x533878u) {
        ctx->pc = 0x533878u;
            // 0x533878: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x53387Cu;
        goto label_53387c;
    }
    ctx->pc = 0x533874u;
    {
        const bool branch_taken_0x533874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x533874) {
            ctx->pc = 0x533878u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x533874u;
            // 0x533878: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
            ctx->pc = 0x533880u;
            goto label_533880;
        }
    }
    ctx->pc = 0x53387Cu;
label_53387c:
    // 0x53387c: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x53387cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_533880:
    // 0x533880: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x533880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_533884:
    // 0x533884: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_533888:
    if (ctx->pc == 0x533888u) {
        ctx->pc = 0x533888u;
            // 0x533888: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x53388Cu;
        goto label_53388c;
    }
    ctx->pc = 0x533884u;
    {
        const bool branch_taken_0x533884 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x533888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533884u;
            // 0x533888: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x533884) {
            ctx->pc = 0x5338B0u;
            goto label_5338b0;
        }
    }
    ctx->pc = 0x53388Cu;
label_53388c:
    // 0x53388c: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x53388cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_533890:
    // 0x533890: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x533890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_533894:
    // 0x533894: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x533894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_533898:
    // 0x533898: 0x8c44cf98  lw          $a0, -0x3068($v0)
    ctx->pc = 0x533898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_53389c:
    // 0x53389c: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x53389cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_5338a0:
    // 0x5338a0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x5338a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_5338a4:
    // 0x5338a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x5338a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5338a8:
    // 0x5338a8: 0x1000020e  b           . + 4 + (0x20E << 2)
label_5338ac:
    if (ctx->pc == 0x5338ACu) {
        ctx->pc = 0x5338ACu;
            // 0x5338ac: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->pc = 0x5338B0u;
        goto label_5338b0;
    }
    ctx->pc = 0x5338A8u;
    {
        const bool branch_taken_0x5338a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5338ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5338A8u;
            // 0x5338ac: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5338a8) {
            ctx->pc = 0x5340E4u;
            goto label_5340e4;
        }
    }
    ctx->pc = 0x5338B0u;
label_5338b0:
    // 0x5338b0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x5338b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_5338b4:
    // 0x5338b4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x5338b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_5338b8:
    // 0x5338b8: 0x8c43cf98  lw          $v1, -0x3068($v0)
    ctx->pc = 0x5338b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_5338bc:
    // 0x5338bc: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x5338bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_5338c0:
    // 0x5338c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x5338c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_5338c4:
    // 0x5338c4: 0x2442b610  addiu       $v0, $v0, -0x49F0
    ctx->pc = 0x5338c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948368));
label_5338c8:
    // 0x5338c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x5338c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_5338cc:
    // 0x5338cc: 0x100001ff  b           . + 4 + (0x1FF << 2)
label_5338d0:
    if (ctx->pc == 0x5338D0u) {
        ctx->pc = 0x5338D0u;
            // 0x5338d0: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x5338D4u;
        goto label_5338d4;
    }
    ctx->pc = 0x5338CCu;
    {
        const bool branch_taken_0x5338cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5338D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5338CCu;
            // 0x5338d0: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5338cc) {
            ctx->pc = 0x5340CCu;
            goto label_5340cc;
        }
    }
    ctx->pc = 0x5338D4u;
label_5338d4:
    // 0x5338d4: 0xc14d270  jal         func_5349C0
label_5338d8:
    if (ctx->pc == 0x5338D8u) {
        ctx->pc = 0x5338DCu;
        goto label_5338dc;
    }
    ctx->pc = 0x5338D4u;
    SET_GPR_U32(ctx, 31, 0x5338DCu);
    ctx->pc = 0x5349C0u;
    if (runtime->hasFunction(0x5349C0u)) {
        auto targetFn = runtime->lookupFunction(0x5349C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5338DCu; }
        if (ctx->pc != 0x5338DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005349C0_0x5349c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5338DCu; }
        if (ctx->pc != 0x5338DCu) { return; }
    }
    ctx->pc = 0x5338DCu;
label_5338dc:
    // 0x5338dc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_5338e0:
    if (ctx->pc == 0x5338E0u) {
        ctx->pc = 0x5338E0u;
            // 0x5338e0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x5338E4u;
        goto label_5338e4;
    }
    ctx->pc = 0x5338DCu;
    {
        const bool branch_taken_0x5338dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x5338E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5338DCu;
            // 0x5338e0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5338dc) {
            ctx->pc = 0x533900u;
            goto label_533900;
        }
    }
    ctx->pc = 0x5338E4u;
label_5338e4:
    // 0x5338e4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x5338e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_5338e8:
    // 0x5338e8: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x5338e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_5338ec:
    // 0x5338ec: 0x8c44cf98  lw          $a0, -0x3068($v0)
    ctx->pc = 0x5338ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_5338f0:
    // 0x5338f0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x5338f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_5338f4:
    // 0x5338f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x5338f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5338f8:
    // 0x5338f8: 0x100001fa  b           . + 4 + (0x1FA << 2)
label_5338fc:
    if (ctx->pc == 0x5338FCu) {
        ctx->pc = 0x5338FCu;
            // 0x5338fc: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->pc = 0x533900u;
        goto label_533900;
    }
    ctx->pc = 0x5338F8u;
    {
        const bool branch_taken_0x5338f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5338FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5338F8u;
            // 0x5338fc: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5338f8) {
            ctx->pc = 0x5340E4u;
            goto label_5340e4;
        }
    }
    ctx->pc = 0x533900u;
label_533900:
    // 0x533900: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x533900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_533904:
    // 0x533904: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x533904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_533908:
    // 0x533908: 0xa22307c1  sb          $v1, 0x7C1($s1)
    ctx->pc = 0x533908u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1985), (uint8_t)GPR_U32(ctx, 3));
label_53390c:
    // 0x53390c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x53390cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_533910:
    // 0x533910: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x533910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_533914:
    // 0x533914: 0xac40b630  sw          $zero, -0x49D0($v0)
    ctx->pc = 0x533914u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294948400), GPR_U32(ctx, 0));
label_533918:
    // 0x533918: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x533918u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_53391c:
    // 0x53391c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x53391cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_533920:
    // 0x533920: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x533920u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_533924:
    // 0x533924: 0x320f809  jalr        $t9
label_533928:
    if (ctx->pc == 0x533928u) {
        ctx->pc = 0x533928u;
            // 0x533928: 0x26250068  addiu       $a1, $s1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
        ctx->pc = 0x53392Cu;
        goto label_53392c;
    }
    ctx->pc = 0x533924u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53392Cu);
        ctx->pc = 0x533928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533924u;
            // 0x533928: 0x26250068  addiu       $a1, $s1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53392Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53392Cu; }
            if (ctx->pc != 0x53392Cu) { return; }
        }
        }
    }
    ctx->pc = 0x53392Cu;
label_53392c:
    // 0x53392c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x53392cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_533930:
    // 0x533930: 0x2402ff2e  addiu       $v0, $zero, -0xD2
    ctx->pc = 0x533930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
label_533934:
    // 0x533934: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
label_533938:
    if (ctx->pc == 0x533938u) {
        ctx->pc = 0x533938u;
            // 0x533938: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x53393Cu;
        goto label_53393c;
    }
    ctx->pc = 0x533934u;
    {
        const bool branch_taken_0x533934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x533934) {
            ctx->pc = 0x533938u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x533934u;
            // 0x533938: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53396Cu;
            goto label_53396c;
        }
    }
    ctx->pc = 0x53393Cu;
label_53393c:
    // 0x53393c: 0x2402ff38  addiu       $v0, $zero, -0xC8
    ctx->pc = 0x53393cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
label_533940:
    // 0x533940: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_533944:
    if (ctx->pc == 0x533944u) {
        ctx->pc = 0x533948u;
        goto label_533948;
    }
    ctx->pc = 0x533940u;
    {
        const bool branch_taken_0x533940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x533940) {
            ctx->pc = 0x533968u;
            goto label_533968;
        }
    }
    ctx->pc = 0x533948u;
label_533948:
    // 0x533948: 0x2402ff9c  addiu       $v0, $zero, -0x64
    ctx->pc = 0x533948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
label_53394c:
    // 0x53394c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_533950:
    if (ctx->pc == 0x533950u) {
        ctx->pc = 0x533954u;
        goto label_533954;
    }
    ctx->pc = 0x53394Cu;
    {
        const bool branch_taken_0x53394c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x53394c) {
            ctx->pc = 0x533968u;
            goto label_533968;
        }
    }
    ctx->pc = 0x533954u;
label_533954:
    // 0x533954: 0x2402ffa5  addiu       $v0, $zero, -0x5B
    ctx->pc = 0x533954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
label_533958:
    // 0x533958: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_53395c:
    if (ctx->pc == 0x53395Cu) {
        ctx->pc = 0x533960u;
        goto label_533960;
    }
    ctx->pc = 0x533958u;
    {
        const bool branch_taken_0x533958 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x533958) {
            ctx->pc = 0x533968u;
            goto label_533968;
        }
    }
    ctx->pc = 0x533960u;
label_533960:
    // 0x533960: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
label_533964:
    if (ctx->pc == 0x533964u) {
        ctx->pc = 0x533964u;
            // 0x533964: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x533968u;
        goto label_533968;
    }
    ctx->pc = 0x533960u;
    {
        const bool branch_taken_0x533960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x533960) {
            ctx->pc = 0x533964u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x533960u;
            // 0x533964: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53396Cu;
            goto label_53396c;
        }
    }
    ctx->pc = 0x533968u;
label_533968:
    // 0x533968: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x533968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_53396c:
    // 0x53396c: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x53396cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_533970:
    // 0x533970: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_533974:
    if (ctx->pc == 0x533974u) {
        ctx->pc = 0x533974u;
            // 0x533974: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x533978u;
        goto label_533978;
    }
    ctx->pc = 0x533970u;
    {
        const bool branch_taken_0x533970 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x533974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533970u;
            // 0x533974: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x533970) {
            ctx->pc = 0x53399Cu;
            goto label_53399c;
        }
    }
    ctx->pc = 0x533978u;
label_533978:
    // 0x533978: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x533978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_53397c:
    // 0x53397c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x53397cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_533980:
    // 0x533980: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x533980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_533984:
    // 0x533984: 0x8c44cf98  lw          $a0, -0x3068($v0)
    ctx->pc = 0x533984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_533988:
    // 0x533988: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x533988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_53398c:
    // 0x53398c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x53398cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_533990:
    // 0x533990: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x533990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_533994:
    // 0x533994: 0x100001d3  b           . + 4 + (0x1D3 << 2)
label_533998:
    if (ctx->pc == 0x533998u) {
        ctx->pc = 0x533998u;
            // 0x533998: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->pc = 0x53399Cu;
        goto label_53399c;
    }
    ctx->pc = 0x533994u;
    {
        const bool branch_taken_0x533994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x533998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533994u;
            // 0x533998: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x533994) {
            ctx->pc = 0x5340E4u;
            goto label_5340e4;
        }
    }
    ctx->pc = 0x53399Cu;
label_53399c:
    // 0x53399c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x53399cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_5339a0:
    // 0x5339a0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x5339a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_5339a4:
    // 0x5339a4: 0x8c43cf98  lw          $v1, -0x3068($v0)
    ctx->pc = 0x5339a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_5339a8:
    // 0x5339a8: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x5339a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_5339ac:
    // 0x5339ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x5339acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_5339b0:
    // 0x5339b0: 0x2442b610  addiu       $v0, $v0, -0x49F0
    ctx->pc = 0x5339b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948368));
label_5339b4:
    // 0x5339b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x5339b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_5339b8:
    // 0x5339b8: 0x100001c4  b           . + 4 + (0x1C4 << 2)
label_5339bc:
    if (ctx->pc == 0x5339BCu) {
        ctx->pc = 0x5339BCu;
            // 0x5339bc: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x5339C0u;
        goto label_5339c0;
    }
    ctx->pc = 0x5339B8u;
    {
        const bool branch_taken_0x5339b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5339BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5339B8u;
            // 0x5339bc: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5339b8) {
            ctx->pc = 0x5340CCu;
            goto label_5340cc;
        }
    }
    ctx->pc = 0x5339C0u;
label_5339c0:
    // 0x5339c0: 0xc14d178  jal         func_5345E0
label_5339c4:
    if (ctx->pc == 0x5339C4u) {
        ctx->pc = 0x5339C8u;
        goto label_5339c8;
    }
    ctx->pc = 0x5339C0u;
    SET_GPR_U32(ctx, 31, 0x5339C8u);
    ctx->pc = 0x5345E0u;
    if (runtime->hasFunction(0x5345E0u)) {
        auto targetFn = runtime->lookupFunction(0x5345E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5339C8u; }
        if (ctx->pc != 0x5339C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005345E0_0x5345e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5339C8u; }
        if (ctx->pc != 0x5339C8u) { return; }
    }
    ctx->pc = 0x5339C8u;
label_5339c8:
    // 0x5339c8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_5339cc:
    if (ctx->pc == 0x5339CCu) {
        ctx->pc = 0x5339CCu;
            // 0x5339cc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x5339D0u;
        goto label_5339d0;
    }
    ctx->pc = 0x5339C8u;
    {
        const bool branch_taken_0x5339c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x5339CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5339C8u;
            // 0x5339cc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5339c8) {
            ctx->pc = 0x5339ECu;
            goto label_5339ec;
        }
    }
    ctx->pc = 0x5339D0u;
label_5339d0:
    // 0x5339d0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x5339d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_5339d4:
    // 0x5339d4: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x5339d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_5339d8:
    // 0x5339d8: 0x8c44cf98  lw          $a0, -0x3068($v0)
    ctx->pc = 0x5339d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_5339dc:
    // 0x5339dc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x5339dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_5339e0:
    // 0x5339e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x5339e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5339e4:
    // 0x5339e4: 0x100001bf  b           . + 4 + (0x1BF << 2)
label_5339e8:
    if (ctx->pc == 0x5339E8u) {
        ctx->pc = 0x5339E8u;
            // 0x5339e8: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->pc = 0x5339ECu;
        goto label_5339ec;
    }
    ctx->pc = 0x5339E4u;
    {
        const bool branch_taken_0x5339e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5339E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5339E4u;
            // 0x5339e8: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5339e4) {
            ctx->pc = 0x5340E4u;
            goto label_5340e4;
        }
    }
    ctx->pc = 0x5339ECu;
label_5339ec:
    // 0x5339ec: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x5339ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_5339f0:
    // 0x5339f0: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x5339f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_5339f4:
    // 0x5339f4: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x5339f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_5339f8:
    // 0x5339f8: 0x8c43b630  lw          $v1, -0x49D0($v0)
    ctx->pc = 0x5339f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948400)));
label_5339fc:
    // 0x5339fc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x5339fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_533a00:
    // 0x533a00: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x533a00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_533a04:
    // 0x533a04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x533a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_533a08:
    // 0x533a08: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x533a08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_533a0c:
    // 0x533a0c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x533a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_533a10:
    // 0x533a10: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x533a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_533a14:
    // 0x533a14: 0x8c46008c  lw          $a2, 0x8C($v0)
    ctx->pc = 0x533a14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_533a18:
    // 0x533a18: 0x8c450088  lw          $a1, 0x88($v0)
    ctx->pc = 0x533a18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_533a1c:
    // 0x533a1c: 0x320f809  jalr        $t9
label_533a20:
    if (ctx->pc == 0x533A20u) {
        ctx->pc = 0x533A20u;
            // 0x533a20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x533A24u;
        goto label_533a24;
    }
    ctx->pc = 0x533A1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x533A24u);
        ctx->pc = 0x533A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533A1Cu;
            // 0x533a20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x533A24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x533A24u; }
            if (ctx->pc != 0x533A24u) { return; }
        }
        }
    }
    ctx->pc = 0x533A24u;
label_533a24:
    // 0x533a24: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x533a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_533a28:
    // 0x533a28: 0x2402ff2e  addiu       $v0, $zero, -0xD2
    ctx->pc = 0x533a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
label_533a2c:
    // 0x533a2c: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
label_533a30:
    if (ctx->pc == 0x533A30u) {
        ctx->pc = 0x533A30u;
            // 0x533a30: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x533A34u;
        goto label_533a34;
    }
    ctx->pc = 0x533A2Cu;
    {
        const bool branch_taken_0x533a2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x533a2c) {
            ctx->pc = 0x533A30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x533A2Cu;
            // 0x533a30: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x533A64u;
            goto label_533a64;
        }
    }
    ctx->pc = 0x533A34u;
label_533a34:
    // 0x533a34: 0x2402ff38  addiu       $v0, $zero, -0xC8
    ctx->pc = 0x533a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
label_533a38:
    // 0x533a38: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_533a3c:
    if (ctx->pc == 0x533A3Cu) {
        ctx->pc = 0x533A40u;
        goto label_533a40;
    }
    ctx->pc = 0x533A38u;
    {
        const bool branch_taken_0x533a38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x533a38) {
            ctx->pc = 0x533A60u;
            goto label_533a60;
        }
    }
    ctx->pc = 0x533A40u;
label_533a40:
    // 0x533a40: 0x2402ff9c  addiu       $v0, $zero, -0x64
    ctx->pc = 0x533a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
label_533a44:
    // 0x533a44: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_533a48:
    if (ctx->pc == 0x533A48u) {
        ctx->pc = 0x533A4Cu;
        goto label_533a4c;
    }
    ctx->pc = 0x533A44u;
    {
        const bool branch_taken_0x533a44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x533a44) {
            ctx->pc = 0x533A60u;
            goto label_533a60;
        }
    }
    ctx->pc = 0x533A4Cu;
label_533a4c:
    // 0x533a4c: 0x2402ffa5  addiu       $v0, $zero, -0x5B
    ctx->pc = 0x533a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
label_533a50:
    // 0x533a50: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_533a54:
    if (ctx->pc == 0x533A54u) {
        ctx->pc = 0x533A58u;
        goto label_533a58;
    }
    ctx->pc = 0x533A50u;
    {
        const bool branch_taken_0x533a50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x533a50) {
            ctx->pc = 0x533A60u;
            goto label_533a60;
        }
    }
    ctx->pc = 0x533A58u;
label_533a58:
    // 0x533a58: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
label_533a5c:
    if (ctx->pc == 0x533A5Cu) {
        ctx->pc = 0x533A5Cu;
            // 0x533a5c: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x533A60u;
        goto label_533a60;
    }
    ctx->pc = 0x533A58u;
    {
        const bool branch_taken_0x533a58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x533a58) {
            ctx->pc = 0x533A5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x533A58u;
            // 0x533a5c: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
            ctx->pc = 0x533A64u;
            goto label_533a64;
        }
    }
    ctx->pc = 0x533A60u;
label_533a60:
    // 0x533a60: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x533a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_533a64:
    // 0x533a64: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x533a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_533a68:
    // 0x533a68: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_533a6c:
    if (ctx->pc == 0x533A6Cu) {
        ctx->pc = 0x533A6Cu;
            // 0x533a6c: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x533A70u;
        goto label_533a70;
    }
    ctx->pc = 0x533A68u;
    {
        const bool branch_taken_0x533a68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x533A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533A68u;
            // 0x533a6c: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x533a68) {
            ctx->pc = 0x533A94u;
            goto label_533a94;
        }
    }
    ctx->pc = 0x533A70u;
label_533a70:
    // 0x533a70: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x533a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_533a74:
    // 0x533a74: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x533a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_533a78:
    // 0x533a78: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x533a78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_533a7c:
    // 0x533a7c: 0x8c44cf98  lw          $a0, -0x3068($v0)
    ctx->pc = 0x533a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_533a80:
    // 0x533a80: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x533a80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_533a84:
    // 0x533a84: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x533a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_533a88:
    // 0x533a88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x533a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_533a8c:
    // 0x533a8c: 0x10000195  b           . + 4 + (0x195 << 2)
label_533a90:
    if (ctx->pc == 0x533A90u) {
        ctx->pc = 0x533A90u;
            // 0x533a90: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->pc = 0x533A94u;
        goto label_533a94;
    }
    ctx->pc = 0x533A8Cu;
    {
        const bool branch_taken_0x533a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x533A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533A8Cu;
            // 0x533a90: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x533a8c) {
            ctx->pc = 0x5340E4u;
            goto label_5340e4;
        }
    }
    ctx->pc = 0x533A94u;
label_533a94:
    // 0x533a94: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x533a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_533a98:
    // 0x533a98: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x533a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_533a9c:
    // 0x533a9c: 0x8c43cf98  lw          $v1, -0x3068($v0)
    ctx->pc = 0x533a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_533aa0:
    // 0x533aa0: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x533aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_533aa4:
    // 0x533aa4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x533aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_533aa8:
    // 0x533aa8: 0x2442b610  addiu       $v0, $v0, -0x49F0
    ctx->pc = 0x533aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948368));
label_533aac:
    // 0x533aac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x533aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_533ab0:
    // 0x533ab0: 0x10000186  b           . + 4 + (0x186 << 2)
label_533ab4:
    if (ctx->pc == 0x533AB4u) {
        ctx->pc = 0x533AB4u;
            // 0x533ab4: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x533AB8u;
        goto label_533ab8;
    }
    ctx->pc = 0x533AB0u;
    {
        const bool branch_taken_0x533ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x533AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533AB0u;
            // 0x533ab4: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x533ab0) {
            ctx->pc = 0x5340CCu;
            goto label_5340cc;
        }
    }
    ctx->pc = 0x533AB8u;
label_533ab8:
    // 0x533ab8: 0xc14d06c  jal         func_5341B0
label_533abc:
    if (ctx->pc == 0x533ABCu) {
        ctx->pc = 0x533AC0u;
        goto label_533ac0;
    }
    ctx->pc = 0x533AB8u;
    SET_GPR_U32(ctx, 31, 0x533AC0u);
    ctx->pc = 0x5341B0u;
    if (runtime->hasFunction(0x5341B0u)) {
        auto targetFn = runtime->lookupFunction(0x5341B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x533AC0u; }
        if (ctx->pc != 0x533AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005341B0_0x5341b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x533AC0u; }
        if (ctx->pc != 0x533AC0u) { return; }
    }
    ctx->pc = 0x533AC0u;
label_533ac0:
    // 0x533ac0: 0x10400182  beqz        $v0, . + 4 + (0x182 << 2)
label_533ac4:
    if (ctx->pc == 0x533AC4u) {
        ctx->pc = 0x533AC8u;
        goto label_533ac8;
    }
    ctx->pc = 0x533AC0u;
    {
        const bool branch_taken_0x533ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x533ac0) {
            ctx->pc = 0x5340CCu;
            goto label_5340cc;
        }
    }
    ctx->pc = 0x533AC8u;
label_533ac8:
    // 0x533ac8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x533ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_533acc:
    // 0x533acc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_533ad0:
    if (ctx->pc == 0x533AD0u) {
        ctx->pc = 0x533AD0u;
            // 0x533ad0: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x533AD4u;
        goto label_533ad4;
    }
    ctx->pc = 0x533ACCu;
    {
        const bool branch_taken_0x533acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x533acc) {
            ctx->pc = 0x533AD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x533ACCu;
            // 0x533ad0: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x533AF0u;
            goto label_533af0;
        }
    }
    ctx->pc = 0x533AD4u;
label_533ad4:
    // 0x533ad4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x533ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_533ad8:
    // 0x533ad8: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x533ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_533adc:
    // 0x533adc: 0x8c44cf98  lw          $a0, -0x3068($v0)
    ctx->pc = 0x533adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_533ae0:
    // 0x533ae0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x533ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_533ae4:
    // 0x533ae4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x533ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_533ae8:
    // 0x533ae8: 0x1000017e  b           . + 4 + (0x17E << 2)
label_533aec:
    if (ctx->pc == 0x533AECu) {
        ctx->pc = 0x533AECu;
            // 0x533aec: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->pc = 0x533AF0u;
        goto label_533af0;
    }
    ctx->pc = 0x533AE8u;
    {
        const bool branch_taken_0x533ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x533AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533AE8u;
            // 0x533aec: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x533ae8) {
            ctx->pc = 0x5340E4u;
            goto label_5340e4;
        }
    }
    ctx->pc = 0x533AF0u;
label_533af0:
    // 0x533af0: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x533af0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_533af4:
    // 0x533af4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x533af4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_533af8:
    // 0x533af8: 0x8f390060  lw          $t9, 0x60($t9)
    ctx->pc = 0x533af8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 96)));
label_533afc:
    // 0x533afc: 0x320f809  jalr        $t9
label_533b00:
    if (ctx->pc == 0x533B00u) {
        ctx->pc = 0x533B00u;
            // 0x533b00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x533B04u;
        goto label_533b04;
    }
    ctx->pc = 0x533AFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x533B04u);
        ctx->pc = 0x533B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533AFCu;
            // 0x533b00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x533B04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x533B04u; }
            if (ctx->pc != 0x533B04u) { return; }
        }
        }
    }
    ctx->pc = 0x533B04u;
label_533b04:
    // 0x533b04: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x533b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_533b08:
    // 0x533b08: 0x2402ff2e  addiu       $v0, $zero, -0xD2
    ctx->pc = 0x533b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
label_533b0c:
    // 0x533b0c: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
label_533b10:
    if (ctx->pc == 0x533B10u) {
        ctx->pc = 0x533B10u;
            // 0x533b10: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x533B14u;
        goto label_533b14;
    }
    ctx->pc = 0x533B0Cu;
    {
        const bool branch_taken_0x533b0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x533b0c) {
            ctx->pc = 0x533B10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x533B0Cu;
            // 0x533b10: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x533B44u;
            goto label_533b44;
        }
    }
    ctx->pc = 0x533B14u;
label_533b14:
    // 0x533b14: 0x2402ff38  addiu       $v0, $zero, -0xC8
    ctx->pc = 0x533b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
label_533b18:
    // 0x533b18: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_533b1c:
    if (ctx->pc == 0x533B1Cu) {
        ctx->pc = 0x533B20u;
        goto label_533b20;
    }
    ctx->pc = 0x533B18u;
    {
        const bool branch_taken_0x533b18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x533b18) {
            ctx->pc = 0x533B40u;
            goto label_533b40;
        }
    }
    ctx->pc = 0x533B20u;
label_533b20:
    // 0x533b20: 0x2402ff9c  addiu       $v0, $zero, -0x64
    ctx->pc = 0x533b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
label_533b24:
    // 0x533b24: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_533b28:
    if (ctx->pc == 0x533B28u) {
        ctx->pc = 0x533B2Cu;
        goto label_533b2c;
    }
    ctx->pc = 0x533B24u;
    {
        const bool branch_taken_0x533b24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x533b24) {
            ctx->pc = 0x533B40u;
            goto label_533b40;
        }
    }
    ctx->pc = 0x533B2Cu;
label_533b2c:
    // 0x533b2c: 0x2402ffa5  addiu       $v0, $zero, -0x5B
    ctx->pc = 0x533b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
label_533b30:
    // 0x533b30: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_533b34:
    if (ctx->pc == 0x533B34u) {
        ctx->pc = 0x533B38u;
        goto label_533b38;
    }
    ctx->pc = 0x533B30u;
    {
        const bool branch_taken_0x533b30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x533b30) {
            ctx->pc = 0x533B40u;
            goto label_533b40;
        }
    }
    ctx->pc = 0x533B38u;
label_533b38:
    // 0x533b38: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
label_533b3c:
    if (ctx->pc == 0x533B3Cu) {
        ctx->pc = 0x533B3Cu;
            // 0x533b3c: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x533B40u;
        goto label_533b40;
    }
    ctx->pc = 0x533B38u;
    {
        const bool branch_taken_0x533b38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x533b38) {
            ctx->pc = 0x533B3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x533B38u;
            // 0x533b3c: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
            ctx->pc = 0x533B44u;
            goto label_533b44;
        }
    }
    ctx->pc = 0x533B40u;
label_533b40:
    // 0x533b40: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x533b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_533b44:
    // 0x533b44: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x533b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_533b48:
    // 0x533b48: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_533b4c:
    if (ctx->pc == 0x533B4Cu) {
        ctx->pc = 0x533B4Cu;
            // 0x533b4c: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x533B50u;
        goto label_533b50;
    }
    ctx->pc = 0x533B48u;
    {
        const bool branch_taken_0x533b48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x533B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533B48u;
            // 0x533b4c: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x533b48) {
            ctx->pc = 0x533B74u;
            goto label_533b74;
        }
    }
    ctx->pc = 0x533B50u;
label_533b50:
    // 0x533b50: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x533b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_533b54:
    // 0x533b54: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x533b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_533b58:
    // 0x533b58: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x533b58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_533b5c:
    // 0x533b5c: 0x8c44cf98  lw          $a0, -0x3068($v0)
    ctx->pc = 0x533b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_533b60:
    // 0x533b60: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x533b60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_533b64:
    // 0x533b64: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x533b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_533b68:
    // 0x533b68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x533b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_533b6c:
    // 0x533b6c: 0x1000015d  b           . + 4 + (0x15D << 2)
label_533b70:
    if (ctx->pc == 0x533B70u) {
        ctx->pc = 0x533B70u;
            // 0x533b70: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->pc = 0x533B74u;
        goto label_533b74;
    }
    ctx->pc = 0x533B6Cu;
    {
        const bool branch_taken_0x533b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x533B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533B6Cu;
            // 0x533b70: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x533b6c) {
            ctx->pc = 0x5340E4u;
            goto label_5340e4;
        }
    }
    ctx->pc = 0x533B74u;
label_533b74:
    // 0x533b74: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x533b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_533b78:
    // 0x533b78: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x533b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_533b7c:
    // 0x533b7c: 0x8c43cf98  lw          $v1, -0x3068($v0)
    ctx->pc = 0x533b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_533b80:
    // 0x533b80: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x533b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_533b84:
    // 0x533b84: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x533b84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_533b88:
    // 0x533b88: 0x2442b610  addiu       $v0, $v0, -0x49F0
    ctx->pc = 0x533b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948368));
label_533b8c:
    // 0x533b8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x533b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_533b90:
    // 0x533b90: 0x1000014e  b           . + 4 + (0x14E << 2)
label_533b94:
    if (ctx->pc == 0x533B94u) {
        ctx->pc = 0x533B94u;
            // 0x533b94: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x533B98u;
        goto label_533b98;
    }
    ctx->pc = 0x533B90u;
    {
        const bool branch_taken_0x533b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x533B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533B90u;
            // 0x533b94: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x533b90) {
            ctx->pc = 0x5340CCu;
            goto label_5340cc;
        }
    }
    ctx->pc = 0x533B98u;
label_533b98:
    // 0x533b98: 0xc14cce0  jal         func_533380
label_533b9c:
    if (ctx->pc == 0x533B9Cu) {
        ctx->pc = 0x533BA0u;
        goto label_533ba0;
    }
    ctx->pc = 0x533B98u;
    SET_GPR_U32(ctx, 31, 0x533BA0u);
    ctx->pc = 0x533380u;
    if (runtime->hasFunction(0x533380u)) {
        auto targetFn = runtime->lookupFunction(0x533380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x533BA0u; }
        if (ctx->pc != 0x533BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00533380_0x533380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x533BA0u; }
        if (ctx->pc != 0x533BA0u) { return; }
    }
    ctx->pc = 0x533BA0u;
label_533ba0:
    // 0x533ba0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_533ba4:
    if (ctx->pc == 0x533BA4u) {
        ctx->pc = 0x533BA4u;
            // 0x533ba4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x533BA8u;
        goto label_533ba8;
    }
    ctx->pc = 0x533BA0u;
    {
        const bool branch_taken_0x533ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x533BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533BA0u;
            // 0x533ba4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x533ba0) {
            ctx->pc = 0x533BC4u;
            goto label_533bc4;
        }
    }
    ctx->pc = 0x533BA8u;
label_533ba8:
    // 0x533ba8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x533ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_533bac:
    // 0x533bac: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x533bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_533bb0:
    // 0x533bb0: 0x8c44cf98  lw          $a0, -0x3068($v0)
    ctx->pc = 0x533bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_533bb4:
    // 0x533bb4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x533bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_533bb8:
    // 0x533bb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x533bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_533bbc:
    // 0x533bbc: 0x10000149  b           . + 4 + (0x149 << 2)
label_533bc0:
    if (ctx->pc == 0x533BC0u) {
        ctx->pc = 0x533BC0u;
            // 0x533bc0: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->pc = 0x533BC4u;
        goto label_533bc4;
    }
    ctx->pc = 0x533BBCu;
    {
        const bool branch_taken_0x533bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x533BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533BBCu;
            // 0x533bc0: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x533bbc) {
            ctx->pc = 0x5340E4u;
            goto label_5340e4;
        }
    }
    ctx->pc = 0x533BC4u;
label_533bc4:
    // 0x533bc4: 0x3c0300be  lui         $v1, 0xBE
    ctx->pc = 0x533bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)190 << 16));
label_533bc8:
    // 0x533bc8: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x533bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_533bcc:
    // 0x533bcc: 0x8c64b630  lw          $a0, -0x49D0($v1)
    ctx->pc = 0x533bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948400)));
label_533bd0:
    // 0x533bd0: 0x92230064  lbu         $v1, 0x64($s1)
    ctx->pc = 0x533bd0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 100)));
label_533bd4:
    // 0x533bd4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x533bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_533bd8:
    // 0x533bd8: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x533bd8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_533bdc:
    // 0x533bdc: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
label_533be0:
    if (ctx->pc == 0x533BE0u) {
        ctx->pc = 0x533BE0u;
            // 0x533be0: 0xac44b630  sw          $a0, -0x49D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294948400), GPR_U32(ctx, 4));
        ctx->pc = 0x533BE4u;
        goto label_533be4;
    }
    ctx->pc = 0x533BDCu;
    {
        const bool branch_taken_0x533bdc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x533BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533BDCu;
            // 0x533be0: 0xac44b630  sw          $a0, -0x49D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294948400), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x533bdc) {
            ctx->pc = 0x533CA4u;
            goto label_533ca4;
        }
    }
    ctx->pc = 0x533BE4u;
label_533be4:
    // 0x533be4: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x533be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_533be8:
    // 0x533be8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x533be8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_533bec:
    // 0x533bec: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x533becu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_533bf0:
    // 0x533bf0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x533bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_533bf4:
    // 0x533bf4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x533bf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_533bf8:
    // 0x533bf8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x533bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_533bfc:
    // 0x533bfc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x533bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_533c00:
    // 0x533c00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x533c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_533c04:
    // 0x533c04: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x533c04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_533c08:
    // 0x533c08: 0x320f809  jalr        $t9
label_533c0c:
    if (ctx->pc == 0x533C0Cu) {
        ctx->pc = 0x533C0Cu;
            // 0x533c0c: 0x24450068  addiu       $a1, $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
        ctx->pc = 0x533C10u;
        goto label_533c10;
    }
    ctx->pc = 0x533C08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x533C10u);
        ctx->pc = 0x533C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533C08u;
            // 0x533c0c: 0x24450068  addiu       $a1, $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x533C10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x533C10u; }
            if (ctx->pc != 0x533C10u) { return; }
        }
        }
    }
    ctx->pc = 0x533C10u;
label_533c10:
    // 0x533c10: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x533c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_533c14:
    // 0x533c14: 0x2402ff2e  addiu       $v0, $zero, -0xD2
    ctx->pc = 0x533c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
label_533c18:
    // 0x533c18: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
label_533c1c:
    if (ctx->pc == 0x533C1Cu) {
        ctx->pc = 0x533C1Cu;
            // 0x533c1c: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x533C20u;
        goto label_533c20;
    }
    ctx->pc = 0x533C18u;
    {
        const bool branch_taken_0x533c18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x533c18) {
            ctx->pc = 0x533C1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x533C18u;
            // 0x533c1c: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x533C50u;
            goto label_533c50;
        }
    }
    ctx->pc = 0x533C20u;
label_533c20:
    // 0x533c20: 0x2402ff38  addiu       $v0, $zero, -0xC8
    ctx->pc = 0x533c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
label_533c24:
    // 0x533c24: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_533c28:
    if (ctx->pc == 0x533C28u) {
        ctx->pc = 0x533C2Cu;
        goto label_533c2c;
    }
    ctx->pc = 0x533C24u;
    {
        const bool branch_taken_0x533c24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x533c24) {
            ctx->pc = 0x533C4Cu;
            goto label_533c4c;
        }
    }
    ctx->pc = 0x533C2Cu;
label_533c2c:
    // 0x533c2c: 0x2402ff9c  addiu       $v0, $zero, -0x64
    ctx->pc = 0x533c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
label_533c30:
    // 0x533c30: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_533c34:
    if (ctx->pc == 0x533C34u) {
        ctx->pc = 0x533C38u;
        goto label_533c38;
    }
    ctx->pc = 0x533C30u;
    {
        const bool branch_taken_0x533c30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x533c30) {
            ctx->pc = 0x533C4Cu;
            goto label_533c4c;
        }
    }
    ctx->pc = 0x533C38u;
label_533c38:
    // 0x533c38: 0x2402ffa5  addiu       $v0, $zero, -0x5B
    ctx->pc = 0x533c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
label_533c3c:
    // 0x533c3c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_533c40:
    if (ctx->pc == 0x533C40u) {
        ctx->pc = 0x533C44u;
        goto label_533c44;
    }
    ctx->pc = 0x533C3Cu;
    {
        const bool branch_taken_0x533c3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x533c3c) {
            ctx->pc = 0x533C4Cu;
            goto label_533c4c;
        }
    }
    ctx->pc = 0x533C44u;
label_533c44:
    // 0x533c44: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
label_533c48:
    if (ctx->pc == 0x533C48u) {
        ctx->pc = 0x533C48u;
            // 0x533c48: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x533C4Cu;
        goto label_533c4c;
    }
    ctx->pc = 0x533C44u;
    {
        const bool branch_taken_0x533c44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x533c44) {
            ctx->pc = 0x533C48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x533C44u;
            // 0x533c48: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
            ctx->pc = 0x533C50u;
            goto label_533c50;
        }
    }
    ctx->pc = 0x533C4Cu;
label_533c4c:
    // 0x533c4c: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x533c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_533c50:
    // 0x533c50: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x533c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_533c54:
    // 0x533c54: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_533c58:
    if (ctx->pc == 0x533C58u) {
        ctx->pc = 0x533C58u;
            // 0x533c58: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x533C5Cu;
        goto label_533c5c;
    }
    ctx->pc = 0x533C54u;
    {
        const bool branch_taken_0x533c54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x533C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533C54u;
            // 0x533c58: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x533c54) {
            ctx->pc = 0x533C80u;
            goto label_533c80;
        }
    }
    ctx->pc = 0x533C5Cu;
label_533c5c:
    // 0x533c5c: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x533c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_533c60:
    // 0x533c60: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x533c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_533c64:
    // 0x533c64: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x533c64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_533c68:
    // 0x533c68: 0x8c44cf98  lw          $a0, -0x3068($v0)
    ctx->pc = 0x533c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_533c6c:
    // 0x533c6c: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x533c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_533c70:
    // 0x533c70: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x533c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_533c74:
    // 0x533c74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x533c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_533c78:
    // 0x533c78: 0x1000011a  b           . + 4 + (0x11A << 2)
label_533c7c:
    if (ctx->pc == 0x533C7Cu) {
        ctx->pc = 0x533C7Cu;
            // 0x533c7c: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->pc = 0x533C80u;
        goto label_533c80;
    }
    ctx->pc = 0x533C78u;
    {
        const bool branch_taken_0x533c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x533C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533C78u;
            // 0x533c7c: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x533c78) {
            ctx->pc = 0x5340E4u;
            goto label_5340e4;
        }
    }
    ctx->pc = 0x533C80u;
label_533c80:
    // 0x533c80: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x533c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_533c84:
    // 0x533c84: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x533c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_533c88:
    // 0x533c88: 0x8c43cf98  lw          $v1, -0x3068($v0)
    ctx->pc = 0x533c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_533c8c:
    // 0x533c8c: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x533c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_533c90:
    // 0x533c90: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x533c90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_533c94:
    // 0x533c94: 0x2442b610  addiu       $v0, $v0, -0x49F0
    ctx->pc = 0x533c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948368));
label_533c98:
    // 0x533c98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x533c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_533c9c:
    // 0x533c9c: 0x1000010b  b           . + 4 + (0x10B << 2)
label_533ca0:
    if (ctx->pc == 0x533CA0u) {
        ctx->pc = 0x533CA0u;
            // 0x533ca0: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x533CA4u;
        goto label_533ca4;
    }
    ctx->pc = 0x533C9Cu;
    {
        const bool branch_taken_0x533c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x533CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533C9Cu;
            // 0x533ca0: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x533c9c) {
            ctx->pc = 0x5340CCu;
            goto label_5340cc;
        }
    }
    ctx->pc = 0x533CA4u;
label_533ca4:
    // 0x533ca4: 0x922307c0  lbu         $v1, 0x7C0($s1)
    ctx->pc = 0x533ca4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1984)));
label_533ca8:
    // 0x533ca8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_533cac:
    if (ctx->pc == 0x533CACu) {
        ctx->pc = 0x533CB0u;
        goto label_533cb0;
    }
    ctx->pc = 0x533CA8u;
    {
        const bool branch_taken_0x533ca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x533ca8) {
            ctx->pc = 0x533CBCu;
            goto label_533cbc;
        }
    }
    ctx->pc = 0x533CB0u;
label_533cb0:
    // 0x533cb0: 0x922207c1  lbu         $v0, 0x7C1($s1)
    ctx->pc = 0x533cb0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1985)));
label_533cb4:
    // 0x533cb4: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_533cb8:
    if (ctx->pc == 0x533CB8u) {
        ctx->pc = 0x533CBCu;
        goto label_533cbc;
    }
    ctx->pc = 0x533CB4u;
    {
        const bool branch_taken_0x533cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x533cb4) {
            ctx->pc = 0x533DB8u;
            goto label_533db8;
        }
    }
    ctx->pc = 0x533CBCu;
label_533cbc:
    // 0x533cbc: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
label_533cc0:
    if (ctx->pc == 0x533CC0u) {
        ctx->pc = 0x533CC0u;
            // 0x533cc0: 0x9223034e  lbu         $v1, 0x34E($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 846)));
        ctx->pc = 0x533CC4u;
        goto label_533cc4;
    }
    ctx->pc = 0x533CBCu;
    {
        const bool branch_taken_0x533cbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x533cbc) {
            ctx->pc = 0x533CC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x533CBCu;
            // 0x533cc0: 0x9223034e  lbu         $v1, 0x34E($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 846)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x533CE4u;
            goto label_533ce4;
        }
    }
    ctx->pc = 0x533CC4u;
label_533cc4:
    // 0x533cc4: 0x922207c1  lbu         $v0, 0x7C1($s1)
    ctx->pc = 0x533cc4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1985)));
label_533cc8:
    // 0x533cc8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_533ccc:
    if (ctx->pc == 0x533CCCu) {
        ctx->pc = 0x533CD0u;
        goto label_533cd0;
    }
    ctx->pc = 0x533CC8u;
    {
        const bool branch_taken_0x533cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x533cc8) {
            ctx->pc = 0x533CE0u;
            goto label_533ce0;
        }
    }
    ctx->pc = 0x533CD0u;
label_533cd0:
    // 0x533cd0: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x533cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_533cd4:
    // 0x533cd4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x533cd4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_533cd8:
    // 0x533cd8: 0x10000005  b           . + 4 + (0x5 << 2)
label_533cdc:
    if (ctx->pc == 0x533CDCu) {
        ctx->pc = 0x533CDCu;
            // 0x533cdc: 0xac40b630  sw          $zero, -0x49D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294948400), GPR_U32(ctx, 0));
        ctx->pc = 0x533CE0u;
        goto label_533ce0;
    }
    ctx->pc = 0x533CD8u;
    {
        const bool branch_taken_0x533cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x533CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533CD8u;
            // 0x533cdc: 0xac40b630  sw          $zero, -0x49D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294948400), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x533cd8) {
            ctx->pc = 0x533CF0u;
            goto label_533cf0;
        }
    }
    ctx->pc = 0x533CE0u;
label_533ce0:
    // 0x533ce0: 0x9223034e  lbu         $v1, 0x34E($s1)
    ctx->pc = 0x533ce0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 846)));
label_533ce4:
    // 0x533ce4: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x533ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_533ce8:
    // 0x533ce8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x533ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_533cec:
    // 0x533cec: 0xac43b630  sw          $v1, -0x49D0($v0)
    ctx->pc = 0x533cecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294948400), GPR_U32(ctx, 3));
label_533cf0:
    // 0x533cf0: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x533cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_533cf4:
    // 0x533cf4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x533cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_533cf8:
    // 0x533cf8: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x533cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_533cfc:
    // 0x533cfc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x533cfcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_533d00:
    // 0x533d00: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x533d00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_533d04:
    // 0x533d04: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x533d04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_533d08:
    // 0x533d08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x533d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_533d0c:
    // 0x533d0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x533d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_533d10:
    // 0x533d10: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x533d10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_533d14:
    // 0x533d14: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x533d14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_533d18:
    // 0x533d18: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x533d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_533d1c:
    // 0x533d1c: 0x320f809  jalr        $t9
label_533d20:
    if (ctx->pc == 0x533D20u) {
        ctx->pc = 0x533D20u;
            // 0x533d20: 0x24450350  addiu       $a1, $v0, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 848));
        ctx->pc = 0x533D24u;
        goto label_533d24;
    }
    ctx->pc = 0x533D1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x533D24u);
        ctx->pc = 0x533D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533D1Cu;
            // 0x533d20: 0x24450350  addiu       $a1, $v0, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 848));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x533D24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x533D24u; }
            if (ctx->pc != 0x533D24u) { return; }
        }
        }
    }
    ctx->pc = 0x533D24u;
label_533d24:
    // 0x533d24: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x533d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_533d28:
    // 0x533d28: 0x2402ff2e  addiu       $v0, $zero, -0xD2
    ctx->pc = 0x533d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
label_533d2c:
    // 0x533d2c: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
label_533d30:
    if (ctx->pc == 0x533D30u) {
        ctx->pc = 0x533D30u;
            // 0x533d30: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x533D34u;
        goto label_533d34;
    }
    ctx->pc = 0x533D2Cu;
    {
        const bool branch_taken_0x533d2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x533d2c) {
            ctx->pc = 0x533D30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x533D2Cu;
            // 0x533d30: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x533D64u;
            goto label_533d64;
        }
    }
    ctx->pc = 0x533D34u;
label_533d34:
    // 0x533d34: 0x2402ff38  addiu       $v0, $zero, -0xC8
    ctx->pc = 0x533d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
label_533d38:
    // 0x533d38: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_533d3c:
    if (ctx->pc == 0x533D3Cu) {
        ctx->pc = 0x533D40u;
        goto label_533d40;
    }
    ctx->pc = 0x533D38u;
    {
        const bool branch_taken_0x533d38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x533d38) {
            ctx->pc = 0x533D60u;
            goto label_533d60;
        }
    }
    ctx->pc = 0x533D40u;
label_533d40:
    // 0x533d40: 0x2402ff9c  addiu       $v0, $zero, -0x64
    ctx->pc = 0x533d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
label_533d44:
    // 0x533d44: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_533d48:
    if (ctx->pc == 0x533D48u) {
        ctx->pc = 0x533D4Cu;
        goto label_533d4c;
    }
    ctx->pc = 0x533D44u;
    {
        const bool branch_taken_0x533d44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x533d44) {
            ctx->pc = 0x533D60u;
            goto label_533d60;
        }
    }
    ctx->pc = 0x533D4Cu;
label_533d4c:
    // 0x533d4c: 0x2402ffa5  addiu       $v0, $zero, -0x5B
    ctx->pc = 0x533d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
label_533d50:
    // 0x533d50: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_533d54:
    if (ctx->pc == 0x533D54u) {
        ctx->pc = 0x533D58u;
        goto label_533d58;
    }
    ctx->pc = 0x533D50u;
    {
        const bool branch_taken_0x533d50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x533d50) {
            ctx->pc = 0x533D60u;
            goto label_533d60;
        }
    }
    ctx->pc = 0x533D58u;
label_533d58:
    // 0x533d58: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
label_533d5c:
    if (ctx->pc == 0x533D5Cu) {
        ctx->pc = 0x533D5Cu;
            // 0x533d5c: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x533D60u;
        goto label_533d60;
    }
    ctx->pc = 0x533D58u;
    {
        const bool branch_taken_0x533d58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x533d58) {
            ctx->pc = 0x533D5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x533D58u;
            // 0x533d5c: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
            ctx->pc = 0x533D64u;
            goto label_533d64;
        }
    }
    ctx->pc = 0x533D60u;
label_533d60:
    // 0x533d60: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x533d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_533d64:
    // 0x533d64: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x533d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_533d68:
    // 0x533d68: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_533d6c:
    if (ctx->pc == 0x533D6Cu) {
        ctx->pc = 0x533D6Cu;
            // 0x533d6c: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x533D70u;
        goto label_533d70;
    }
    ctx->pc = 0x533D68u;
    {
        const bool branch_taken_0x533d68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x533D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533D68u;
            // 0x533d6c: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x533d68) {
            ctx->pc = 0x533D94u;
            goto label_533d94;
        }
    }
    ctx->pc = 0x533D70u;
label_533d70:
    // 0x533d70: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x533d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_533d74:
    // 0x533d74: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x533d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_533d78:
    // 0x533d78: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x533d78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_533d7c:
    // 0x533d7c: 0x8c44cf98  lw          $a0, -0x3068($v0)
    ctx->pc = 0x533d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_533d80:
    // 0x533d80: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x533d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_533d84:
    // 0x533d84: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x533d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_533d88:
    // 0x533d88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x533d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_533d8c:
    // 0x533d8c: 0x100000d5  b           . + 4 + (0xD5 << 2)
label_533d90:
    if (ctx->pc == 0x533D90u) {
        ctx->pc = 0x533D90u;
            // 0x533d90: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->pc = 0x533D94u;
        goto label_533d94;
    }
    ctx->pc = 0x533D8Cu;
    {
        const bool branch_taken_0x533d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x533D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533D8Cu;
            // 0x533d90: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x533d8c) {
            ctx->pc = 0x5340E4u;
            goto label_5340e4;
        }
    }
    ctx->pc = 0x533D94u;
label_533d94:
    // 0x533d94: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x533d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_533d98:
    // 0x533d98: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x533d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_533d9c:
    // 0x533d9c: 0x8c43cf98  lw          $v1, -0x3068($v0)
    ctx->pc = 0x533d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_533da0:
    // 0x533da0: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x533da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_533da4:
    // 0x533da4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x533da4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_533da8:
    // 0x533da8: 0x2442b610  addiu       $v0, $v0, -0x49F0
    ctx->pc = 0x533da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948368));
label_533dac:
    // 0x533dac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x533dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_533db0:
    // 0x533db0: 0x100000c6  b           . + 4 + (0xC6 << 2)
label_533db4:
    if (ctx->pc == 0x533DB4u) {
        ctx->pc = 0x533DB4u;
            // 0x533db4: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x533DB8u;
        goto label_533db8;
    }
    ctx->pc = 0x533DB0u;
    {
        const bool branch_taken_0x533db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x533DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533DB0u;
            // 0x533db4: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x533db0) {
            ctx->pc = 0x5340CCu;
            goto label_5340cc;
        }
    }
    ctx->pc = 0x533DB8u;
label_533db8:
    // 0x533db8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x533db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_533dbc:
    // 0x533dbc: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x533dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_533dc0:
    // 0x533dc0: 0x8c44cf98  lw          $a0, -0x3068($v0)
    ctx->pc = 0x533dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_533dc4:
    // 0x533dc4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x533dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_533dc8:
    // 0x533dc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x533dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_533dcc:
    // 0x533dcc: 0x100000c5  b           . + 4 + (0xC5 << 2)
label_533dd0:
    if (ctx->pc == 0x533DD0u) {
        ctx->pc = 0x533DD4u;
        goto label_533dd4;
    }
    ctx->pc = 0x533DCCu;
    {
        const bool branch_taken_0x533dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x533dcc) {
            ctx->pc = 0x5340E4u;
            goto label_5340e4;
        }
    }
    ctx->pc = 0x533DD4u;
label_533dd4:
    // 0x533dd4: 0xc14d178  jal         func_5345E0
label_533dd8:
    if (ctx->pc == 0x533DD8u) {
        ctx->pc = 0x533DDCu;
        goto label_533ddc;
    }
    ctx->pc = 0x533DD4u;
    SET_GPR_U32(ctx, 31, 0x533DDCu);
    ctx->pc = 0x5345E0u;
    if (runtime->hasFunction(0x5345E0u)) {
        auto targetFn = runtime->lookupFunction(0x5345E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x533DDCu; }
        if (ctx->pc != 0x533DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005345E0_0x5345e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x533DDCu; }
        if (ctx->pc != 0x533DDCu) { return; }
    }
    ctx->pc = 0x533DDCu;
label_533ddc:
    // 0x533ddc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_533de0:
    if (ctx->pc == 0x533DE0u) {
        ctx->pc = 0x533DE0u;
            // 0x533de0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x533DE4u;
        goto label_533de4;
    }
    ctx->pc = 0x533DDCu;
    {
        const bool branch_taken_0x533ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x533DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533DDCu;
            // 0x533de0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x533ddc) {
            ctx->pc = 0x533E00u;
            goto label_533e00;
        }
    }
    ctx->pc = 0x533DE4u;
label_533de4:
    // 0x533de4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x533de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_533de8:
    // 0x533de8: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x533de8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_533dec:
    // 0x533dec: 0x8c44cf98  lw          $a0, -0x3068($v0)
    ctx->pc = 0x533decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_533df0:
    // 0x533df0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x533df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_533df4:
    // 0x533df4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x533df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_533df8:
    // 0x533df8: 0x100000ba  b           . + 4 + (0xBA << 2)
label_533dfc:
    if (ctx->pc == 0x533DFCu) {
        ctx->pc = 0x533DFCu;
            // 0x533dfc: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->pc = 0x533E00u;
        goto label_533e00;
    }
    ctx->pc = 0x533DF8u;
    {
        const bool branch_taken_0x533df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x533DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533DF8u;
            // 0x533dfc: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x533df8) {
            ctx->pc = 0x5340E4u;
            goto label_5340e4;
        }
    }
    ctx->pc = 0x533E00u;
label_533e00:
    // 0x533e00: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x533e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_533e04:
    // 0x533e04: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x533e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_533e08:
    // 0x533e08: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x533e08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_533e0c:
    // 0x533e0c: 0x8c43b630  lw          $v1, -0x49D0($v0)
    ctx->pc = 0x533e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948400)));
label_533e10:
    // 0x533e10: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x533e10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_533e14:
    // 0x533e14: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x533e14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_533e18:
    // 0x533e18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x533e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_533e1c:
    // 0x533e1c: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x533e1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_533e20:
    // 0x533e20: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x533e20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_533e24:
    // 0x533e24: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x533e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_533e28:
    // 0x533e28: 0x8c460374  lw          $a2, 0x374($v0)
    ctx->pc = 0x533e28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 884)));
label_533e2c:
    // 0x533e2c: 0x8c450370  lw          $a1, 0x370($v0)
    ctx->pc = 0x533e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
label_533e30:
    // 0x533e30: 0x320f809  jalr        $t9
label_533e34:
    if (ctx->pc == 0x533E34u) {
        ctx->pc = 0x533E34u;
            // 0x533e34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x533E38u;
        goto label_533e38;
    }
    ctx->pc = 0x533E30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x533E38u);
        ctx->pc = 0x533E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533E30u;
            // 0x533e34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x533E38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x533E38u; }
            if (ctx->pc != 0x533E38u) { return; }
        }
        }
    }
    ctx->pc = 0x533E38u;
label_533e38:
    // 0x533e38: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x533e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_533e3c:
    // 0x533e3c: 0x2402ff2e  addiu       $v0, $zero, -0xD2
    ctx->pc = 0x533e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
label_533e40:
    // 0x533e40: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
label_533e44:
    if (ctx->pc == 0x533E44u) {
        ctx->pc = 0x533E44u;
            // 0x533e44: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x533E48u;
        goto label_533e48;
    }
    ctx->pc = 0x533E40u;
    {
        const bool branch_taken_0x533e40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x533e40) {
            ctx->pc = 0x533E44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x533E40u;
            // 0x533e44: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x533E78u;
            goto label_533e78;
        }
    }
    ctx->pc = 0x533E48u;
label_533e48:
    // 0x533e48: 0x2402ff38  addiu       $v0, $zero, -0xC8
    ctx->pc = 0x533e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
label_533e4c:
    // 0x533e4c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_533e50:
    if (ctx->pc == 0x533E50u) {
        ctx->pc = 0x533E54u;
        goto label_533e54;
    }
    ctx->pc = 0x533E4Cu;
    {
        const bool branch_taken_0x533e4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x533e4c) {
            ctx->pc = 0x533E74u;
            goto label_533e74;
        }
    }
    ctx->pc = 0x533E54u;
label_533e54:
    // 0x533e54: 0x2402ff9c  addiu       $v0, $zero, -0x64
    ctx->pc = 0x533e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
label_533e58:
    // 0x533e58: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_533e5c:
    if (ctx->pc == 0x533E5Cu) {
        ctx->pc = 0x533E60u;
        goto label_533e60;
    }
    ctx->pc = 0x533E58u;
    {
        const bool branch_taken_0x533e58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x533e58) {
            ctx->pc = 0x533E74u;
            goto label_533e74;
        }
    }
    ctx->pc = 0x533E60u;
label_533e60:
    // 0x533e60: 0x2402ffa5  addiu       $v0, $zero, -0x5B
    ctx->pc = 0x533e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
label_533e64:
    // 0x533e64: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_533e68:
    if (ctx->pc == 0x533E68u) {
        ctx->pc = 0x533E6Cu;
        goto label_533e6c;
    }
    ctx->pc = 0x533E64u;
    {
        const bool branch_taken_0x533e64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x533e64) {
            ctx->pc = 0x533E74u;
            goto label_533e74;
        }
    }
    ctx->pc = 0x533E6Cu;
label_533e6c:
    // 0x533e6c: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
label_533e70:
    if (ctx->pc == 0x533E70u) {
        ctx->pc = 0x533E70u;
            // 0x533e70: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x533E74u;
        goto label_533e74;
    }
    ctx->pc = 0x533E6Cu;
    {
        const bool branch_taken_0x533e6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x533e6c) {
            ctx->pc = 0x533E70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x533E6Cu;
            // 0x533e70: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
            ctx->pc = 0x533E78u;
            goto label_533e78;
        }
    }
    ctx->pc = 0x533E74u;
label_533e74:
    // 0x533e74: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x533e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_533e78:
    // 0x533e78: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x533e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_533e7c:
    // 0x533e7c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_533e80:
    if (ctx->pc == 0x533E80u) {
        ctx->pc = 0x533E80u;
            // 0x533e80: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x533E84u;
        goto label_533e84;
    }
    ctx->pc = 0x533E7Cu;
    {
        const bool branch_taken_0x533e7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x533E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533E7Cu;
            // 0x533e80: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x533e7c) {
            ctx->pc = 0x533EA8u;
            goto label_533ea8;
        }
    }
    ctx->pc = 0x533E84u;
label_533e84:
    // 0x533e84: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x533e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_533e88:
    // 0x533e88: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x533e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_533e8c:
    // 0x533e8c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x533e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_533e90:
    // 0x533e90: 0x8c44cf98  lw          $a0, -0x3068($v0)
    ctx->pc = 0x533e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_533e94:
    // 0x533e94: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x533e94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_533e98:
    // 0x533e98: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x533e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_533e9c:
    // 0x533e9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x533e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_533ea0:
    // 0x533ea0: 0x10000090  b           . + 4 + (0x90 << 2)
label_533ea4:
    if (ctx->pc == 0x533EA4u) {
        ctx->pc = 0x533EA4u;
            // 0x533ea4: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->pc = 0x533EA8u;
        goto label_533ea8;
    }
    ctx->pc = 0x533EA0u;
    {
        const bool branch_taken_0x533ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x533EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533EA0u;
            // 0x533ea4: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x533ea0) {
            ctx->pc = 0x5340E4u;
            goto label_5340e4;
        }
    }
    ctx->pc = 0x533EA8u;
label_533ea8:
    // 0x533ea8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x533ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_533eac:
    // 0x533eac: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x533eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_533eb0:
    // 0x533eb0: 0x8c43cf98  lw          $v1, -0x3068($v0)
    ctx->pc = 0x533eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_533eb4:
    // 0x533eb4: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x533eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_533eb8:
    // 0x533eb8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x533eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_533ebc:
    // 0x533ebc: 0x2442b610  addiu       $v0, $v0, -0x49F0
    ctx->pc = 0x533ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948368));
label_533ec0:
    // 0x533ec0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x533ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_533ec4:
    // 0x533ec4: 0x10000081  b           . + 4 + (0x81 << 2)
label_533ec8:
    if (ctx->pc == 0x533EC8u) {
        ctx->pc = 0x533EC8u;
            // 0x533ec8: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x533ECCu;
        goto label_533ecc;
    }
    ctx->pc = 0x533EC4u;
    {
        const bool branch_taken_0x533ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x533EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533EC4u;
            // 0x533ec8: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x533ec4) {
            ctx->pc = 0x5340CCu;
            goto label_5340cc;
        }
    }
    ctx->pc = 0x533ECCu;
label_533ecc:
    // 0x533ecc: 0xc14d06c  jal         func_5341B0
label_533ed0:
    if (ctx->pc == 0x533ED0u) {
        ctx->pc = 0x533ED4u;
        goto label_533ed4;
    }
    ctx->pc = 0x533ECCu;
    SET_GPR_U32(ctx, 31, 0x533ED4u);
    ctx->pc = 0x5341B0u;
    if (runtime->hasFunction(0x5341B0u)) {
        auto targetFn = runtime->lookupFunction(0x5341B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x533ED4u; }
        if (ctx->pc != 0x533ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005341B0_0x5341b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x533ED4u; }
        if (ctx->pc != 0x533ED4u) { return; }
    }
    ctx->pc = 0x533ED4u;
label_533ed4:
    // 0x533ed4: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
label_533ed8:
    if (ctx->pc == 0x533ED8u) {
        ctx->pc = 0x533EDCu;
        goto label_533edc;
    }
    ctx->pc = 0x533ED4u;
    {
        const bool branch_taken_0x533ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x533ed4) {
            ctx->pc = 0x5340CCu;
            goto label_5340cc;
        }
    }
    ctx->pc = 0x533EDCu;
label_533edc:
    // 0x533edc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x533edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_533ee0:
    // 0x533ee0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_533ee4:
    if (ctx->pc == 0x533EE4u) {
        ctx->pc = 0x533EE4u;
            // 0x533ee4: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x533EE8u;
        goto label_533ee8;
    }
    ctx->pc = 0x533EE0u;
    {
        const bool branch_taken_0x533ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x533ee0) {
            ctx->pc = 0x533EE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x533EE0u;
            // 0x533ee4: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x533F04u;
            goto label_533f04;
        }
    }
    ctx->pc = 0x533EE8u;
label_533ee8:
    // 0x533ee8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x533ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_533eec:
    // 0x533eec: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x533eecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_533ef0:
    // 0x533ef0: 0x8c44cf98  lw          $a0, -0x3068($v0)
    ctx->pc = 0x533ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_533ef4:
    // 0x533ef4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x533ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_533ef8:
    // 0x533ef8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x533ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_533efc:
    // 0x533efc: 0x10000079  b           . + 4 + (0x79 << 2)
label_533f00:
    if (ctx->pc == 0x533F00u) {
        ctx->pc = 0x533F00u;
            // 0x533f00: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->pc = 0x533F04u;
        goto label_533f04;
    }
    ctx->pc = 0x533EFCu;
    {
        const bool branch_taken_0x533efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x533F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533EFCu;
            // 0x533f00: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x533efc) {
            ctx->pc = 0x5340E4u;
            goto label_5340e4;
        }
    }
    ctx->pc = 0x533F04u;
label_533f04:
    // 0x533f04: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x533f04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_533f08:
    // 0x533f08: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x533f08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_533f0c:
    // 0x533f0c: 0x8f390060  lw          $t9, 0x60($t9)
    ctx->pc = 0x533f0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 96)));
label_533f10:
    // 0x533f10: 0x320f809  jalr        $t9
label_533f14:
    if (ctx->pc == 0x533F14u) {
        ctx->pc = 0x533F14u;
            // 0x533f14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x533F18u;
        goto label_533f18;
    }
    ctx->pc = 0x533F10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x533F18u);
        ctx->pc = 0x533F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533F10u;
            // 0x533f14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x533F18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x533F18u; }
            if (ctx->pc != 0x533F18u) { return; }
        }
        }
    }
    ctx->pc = 0x533F18u;
label_533f18:
    // 0x533f18: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x533f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_533f1c:
    // 0x533f1c: 0x2402ff2e  addiu       $v0, $zero, -0xD2
    ctx->pc = 0x533f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
label_533f20:
    // 0x533f20: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
label_533f24:
    if (ctx->pc == 0x533F24u) {
        ctx->pc = 0x533F24u;
            // 0x533f24: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x533F28u;
        goto label_533f28;
    }
    ctx->pc = 0x533F20u;
    {
        const bool branch_taken_0x533f20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x533f20) {
            ctx->pc = 0x533F24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x533F20u;
            // 0x533f24: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x533F58u;
            goto label_533f58;
        }
    }
    ctx->pc = 0x533F28u;
label_533f28:
    // 0x533f28: 0x2402ff38  addiu       $v0, $zero, -0xC8
    ctx->pc = 0x533f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
label_533f2c:
    // 0x533f2c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_533f30:
    if (ctx->pc == 0x533F30u) {
        ctx->pc = 0x533F34u;
        goto label_533f34;
    }
    ctx->pc = 0x533F2Cu;
    {
        const bool branch_taken_0x533f2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x533f2c) {
            ctx->pc = 0x533F54u;
            goto label_533f54;
        }
    }
    ctx->pc = 0x533F34u;
label_533f34:
    // 0x533f34: 0x2402ff9c  addiu       $v0, $zero, -0x64
    ctx->pc = 0x533f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
label_533f38:
    // 0x533f38: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_533f3c:
    if (ctx->pc == 0x533F3Cu) {
        ctx->pc = 0x533F40u;
        goto label_533f40;
    }
    ctx->pc = 0x533F38u;
    {
        const bool branch_taken_0x533f38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x533f38) {
            ctx->pc = 0x533F54u;
            goto label_533f54;
        }
    }
    ctx->pc = 0x533F40u;
label_533f40:
    // 0x533f40: 0x2402ffa5  addiu       $v0, $zero, -0x5B
    ctx->pc = 0x533f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
label_533f44:
    // 0x533f44: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_533f48:
    if (ctx->pc == 0x533F48u) {
        ctx->pc = 0x533F4Cu;
        goto label_533f4c;
    }
    ctx->pc = 0x533F44u;
    {
        const bool branch_taken_0x533f44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x533f44) {
            ctx->pc = 0x533F54u;
            goto label_533f54;
        }
    }
    ctx->pc = 0x533F4Cu;
label_533f4c:
    // 0x533f4c: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
label_533f50:
    if (ctx->pc == 0x533F50u) {
        ctx->pc = 0x533F50u;
            // 0x533f50: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x533F54u;
        goto label_533f54;
    }
    ctx->pc = 0x533F4Cu;
    {
        const bool branch_taken_0x533f4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x533f4c) {
            ctx->pc = 0x533F50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x533F4Cu;
            // 0x533f50: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
            ctx->pc = 0x533F58u;
            goto label_533f58;
        }
    }
    ctx->pc = 0x533F54u;
label_533f54:
    // 0x533f54: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x533f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_533f58:
    // 0x533f58: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x533f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_533f5c:
    // 0x533f5c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_533f60:
    if (ctx->pc == 0x533F60u) {
        ctx->pc = 0x533F60u;
            // 0x533f60: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x533F64u;
        goto label_533f64;
    }
    ctx->pc = 0x533F5Cu;
    {
        const bool branch_taken_0x533f5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x533F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533F5Cu;
            // 0x533f60: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x533f5c) {
            ctx->pc = 0x533F88u;
            goto label_533f88;
        }
    }
    ctx->pc = 0x533F64u;
label_533f64:
    // 0x533f64: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x533f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_533f68:
    // 0x533f68: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x533f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_533f6c:
    // 0x533f6c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x533f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_533f70:
    // 0x533f70: 0x8c44cf98  lw          $a0, -0x3068($v0)
    ctx->pc = 0x533f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_533f74:
    // 0x533f74: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x533f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_533f78:
    // 0x533f78: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x533f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_533f7c:
    // 0x533f7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x533f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_533f80:
    // 0x533f80: 0x10000058  b           . + 4 + (0x58 << 2)
label_533f84:
    if (ctx->pc == 0x533F84u) {
        ctx->pc = 0x533F84u;
            // 0x533f84: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->pc = 0x533F88u;
        goto label_533f88;
    }
    ctx->pc = 0x533F80u;
    {
        const bool branch_taken_0x533f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x533F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533F80u;
            // 0x533f84: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x533f80) {
            ctx->pc = 0x5340E4u;
            goto label_5340e4;
        }
    }
    ctx->pc = 0x533F88u;
label_533f88:
    // 0x533f88: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x533f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_533f8c:
    // 0x533f8c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x533f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_533f90:
    // 0x533f90: 0x8c43cf98  lw          $v1, -0x3068($v0)
    ctx->pc = 0x533f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_533f94:
    // 0x533f94: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x533f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_533f98:
    // 0x533f98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x533f98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_533f9c:
    // 0x533f9c: 0x2442b610  addiu       $v0, $v0, -0x49F0
    ctx->pc = 0x533f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948368));
label_533fa0:
    // 0x533fa0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x533fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_533fa4:
    // 0x533fa4: 0x10000049  b           . + 4 + (0x49 << 2)
label_533fa8:
    if (ctx->pc == 0x533FA8u) {
        ctx->pc = 0x533FA8u;
            // 0x533fa8: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x533FACu;
        goto label_533fac;
    }
    ctx->pc = 0x533FA4u;
    {
        const bool branch_taken_0x533fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x533FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533FA4u;
            // 0x533fa8: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x533fa4) {
            ctx->pc = 0x5340CCu;
            goto label_5340cc;
        }
    }
    ctx->pc = 0x533FACu;
label_533fac:
    // 0x533fac: 0xc14cce0  jal         func_533380
label_533fb0:
    if (ctx->pc == 0x533FB0u) {
        ctx->pc = 0x533FB4u;
        goto label_533fb4;
    }
    ctx->pc = 0x533FACu;
    SET_GPR_U32(ctx, 31, 0x533FB4u);
    ctx->pc = 0x533380u;
    if (runtime->hasFunction(0x533380u)) {
        auto targetFn = runtime->lookupFunction(0x533380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x533FB4u; }
        if (ctx->pc != 0x533FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00533380_0x533380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x533FB4u; }
        if (ctx->pc != 0x533FB4u) { return; }
    }
    ctx->pc = 0x533FB4u;
label_533fb4:
    // 0x533fb4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_533fb8:
    if (ctx->pc == 0x533FB8u) {
        ctx->pc = 0x533FB8u;
            // 0x533fb8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x533FBCu;
        goto label_533fbc;
    }
    ctx->pc = 0x533FB4u;
    {
        const bool branch_taken_0x533fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x533FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533FB4u;
            // 0x533fb8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x533fb4) {
            ctx->pc = 0x533FD8u;
            goto label_533fd8;
        }
    }
    ctx->pc = 0x533FBCu;
label_533fbc:
    // 0x533fbc: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x533fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_533fc0:
    // 0x533fc0: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x533fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_533fc4:
    // 0x533fc4: 0x8c44cf98  lw          $a0, -0x3068($v0)
    ctx->pc = 0x533fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_533fc8:
    // 0x533fc8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x533fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_533fcc:
    // 0x533fcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x533fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_533fd0:
    // 0x533fd0: 0x10000044  b           . + 4 + (0x44 << 2)
label_533fd4:
    if (ctx->pc == 0x533FD4u) {
        ctx->pc = 0x533FD4u;
            // 0x533fd4: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->pc = 0x533FD8u;
        goto label_533fd8;
    }
    ctx->pc = 0x533FD0u;
    {
        const bool branch_taken_0x533fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x533FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533FD0u;
            // 0x533fd4: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x533fd0) {
            ctx->pc = 0x5340E4u;
            goto label_5340e4;
        }
    }
    ctx->pc = 0x533FD8u;
label_533fd8:
    // 0x533fd8: 0x3c0300be  lui         $v1, 0xBE
    ctx->pc = 0x533fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)190 << 16));
label_533fdc:
    // 0x533fdc: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x533fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_533fe0:
    // 0x533fe0: 0x8c63b630  lw          $v1, -0x49D0($v1)
    ctx->pc = 0x533fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948400)));
label_533fe4:
    // 0x533fe4: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x533fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_533fe8:
    // 0x533fe8: 0x4800031  bltz        $a0, . + 4 + (0x31 << 2)
label_533fec:
    if (ctx->pc == 0x533FECu) {
        ctx->pc = 0x533FECu;
            // 0x533fec: 0xac44b630  sw          $a0, -0x49D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294948400), GPR_U32(ctx, 4));
        ctx->pc = 0x533FF0u;
        goto label_533ff0;
    }
    ctx->pc = 0x533FE8u;
    {
        const bool branch_taken_0x533fe8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x533FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533FE8u;
            // 0x533fec: 0xac44b630  sw          $a0, -0x49D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294948400), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x533fe8) {
            ctx->pc = 0x5340B0u;
            goto label_5340b0;
        }
    }
    ctx->pc = 0x533FF0u;
label_533ff0:
    // 0x533ff0: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x533ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_533ff4:
    // 0x533ff4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x533ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_533ff8:
    // 0x533ff8: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x533ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_533ffc:
    // 0x533ffc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x533ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_534000:
    // 0x534000: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x534000u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_534004:
    // 0x534004: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x534004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_534008:
    // 0x534008: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x534008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_53400c:
    // 0x53400c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x53400cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_534010:
    // 0x534010: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x534010u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_534014:
    // 0x534014: 0x320f809  jalr        $t9
label_534018:
    if (ctx->pc == 0x534018u) {
        ctx->pc = 0x534018u;
            // 0x534018: 0x24450350  addiu       $a1, $v0, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 848));
        ctx->pc = 0x53401Cu;
        goto label_53401c;
    }
    ctx->pc = 0x534014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53401Cu);
        ctx->pc = 0x534018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x534014u;
            // 0x534018: 0x24450350  addiu       $a1, $v0, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 848));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53401Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53401Cu; }
            if (ctx->pc != 0x53401Cu) { return; }
        }
        }
    }
    ctx->pc = 0x53401Cu;
label_53401c:
    // 0x53401c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x53401cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_534020:
    // 0x534020: 0x2402ff2e  addiu       $v0, $zero, -0xD2
    ctx->pc = 0x534020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
label_534024:
    // 0x534024: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
label_534028:
    if (ctx->pc == 0x534028u) {
        ctx->pc = 0x534028u;
            // 0x534028: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x53402Cu;
        goto label_53402c;
    }
    ctx->pc = 0x534024u;
    {
        const bool branch_taken_0x534024 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x534024) {
            ctx->pc = 0x534028u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x534024u;
            // 0x534028: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53405Cu;
            goto label_53405c;
        }
    }
    ctx->pc = 0x53402Cu;
label_53402c:
    // 0x53402c: 0x2402ff38  addiu       $v0, $zero, -0xC8
    ctx->pc = 0x53402cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
label_534030:
    // 0x534030: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_534034:
    if (ctx->pc == 0x534034u) {
        ctx->pc = 0x534038u;
        goto label_534038;
    }
    ctx->pc = 0x534030u;
    {
        const bool branch_taken_0x534030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x534030) {
            ctx->pc = 0x534058u;
            goto label_534058;
        }
    }
    ctx->pc = 0x534038u;
label_534038:
    // 0x534038: 0x2402ff9c  addiu       $v0, $zero, -0x64
    ctx->pc = 0x534038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
label_53403c:
    // 0x53403c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_534040:
    if (ctx->pc == 0x534040u) {
        ctx->pc = 0x534044u;
        goto label_534044;
    }
    ctx->pc = 0x53403Cu;
    {
        const bool branch_taken_0x53403c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x53403c) {
            ctx->pc = 0x534058u;
            goto label_534058;
        }
    }
    ctx->pc = 0x534044u;
label_534044:
    // 0x534044: 0x2402ffa5  addiu       $v0, $zero, -0x5B
    ctx->pc = 0x534044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
label_534048:
    // 0x534048: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_53404c:
    if (ctx->pc == 0x53404Cu) {
        ctx->pc = 0x534050u;
        goto label_534050;
    }
    ctx->pc = 0x534048u;
    {
        const bool branch_taken_0x534048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x534048) {
            ctx->pc = 0x534058u;
            goto label_534058;
        }
    }
    ctx->pc = 0x534050u;
label_534050:
    // 0x534050: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
label_534054:
    if (ctx->pc == 0x534054u) {
        ctx->pc = 0x534054u;
            // 0x534054: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x534058u;
        goto label_534058;
    }
    ctx->pc = 0x534050u;
    {
        const bool branch_taken_0x534050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x534050) {
            ctx->pc = 0x534054u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x534050u;
            // 0x534054: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53405Cu;
            goto label_53405c;
        }
    }
    ctx->pc = 0x534058u;
label_534058:
    // 0x534058: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x534058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_53405c:
    // 0x53405c: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x53405cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_534060:
    // 0x534060: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_534064:
    if (ctx->pc == 0x534064u) {
        ctx->pc = 0x534064u;
            // 0x534064: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x534068u;
        goto label_534068;
    }
    ctx->pc = 0x534060u;
    {
        const bool branch_taken_0x534060 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x534064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x534060u;
            // 0x534064: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x534060) {
            ctx->pc = 0x53408Cu;
            goto label_53408c;
        }
    }
    ctx->pc = 0x534068u;
label_534068:
    // 0x534068: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x534068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_53406c:
    // 0x53406c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x53406cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_534070:
    // 0x534070: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x534070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_534074:
    // 0x534074: 0x8c44cf98  lw          $a0, -0x3068($v0)
    ctx->pc = 0x534074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_534078:
    // 0x534078: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x534078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_53407c:
    // 0x53407c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x53407cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_534080:
    // 0x534080: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x534080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_534084:
    // 0x534084: 0x10000017  b           . + 4 + (0x17 << 2)
label_534088:
    if (ctx->pc == 0x534088u) {
        ctx->pc = 0x534088u;
            // 0x534088: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->pc = 0x53408Cu;
        goto label_53408c;
    }
    ctx->pc = 0x534084u;
    {
        const bool branch_taken_0x534084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x534088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x534084u;
            // 0x534088: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x534084) {
            ctx->pc = 0x5340E4u;
            goto label_5340e4;
        }
    }
    ctx->pc = 0x53408Cu;
label_53408c:
    // 0x53408c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x53408cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_534090:
    // 0x534090: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x534090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_534094:
    // 0x534094: 0x8c43cf98  lw          $v1, -0x3068($v0)
    ctx->pc = 0x534094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_534098:
    // 0x534098: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x534098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_53409c:
    // 0x53409c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x53409cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_5340a0:
    // 0x5340a0: 0x2442b610  addiu       $v0, $v0, -0x49F0
    ctx->pc = 0x5340a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948368));
label_5340a4:
    // 0x5340a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x5340a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_5340a8:
    // 0x5340a8: 0x10000008  b           . + 4 + (0x8 << 2)
label_5340ac:
    if (ctx->pc == 0x5340ACu) {
        ctx->pc = 0x5340ACu;
            // 0x5340ac: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x5340B0u;
        goto label_5340b0;
    }
    ctx->pc = 0x5340A8u;
    {
        const bool branch_taken_0x5340a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5340ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5340A8u;
            // 0x5340ac: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5340a8) {
            ctx->pc = 0x5340CCu;
            goto label_5340cc;
        }
    }
    ctx->pc = 0x5340B0u;
label_5340b0:
    // 0x5340b0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x5340b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_5340b4:
    // 0x5340b4: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x5340b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_5340b8:
    // 0x5340b8: 0x8c44cf98  lw          $a0, -0x3068($v0)
    ctx->pc = 0x5340b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_5340bc:
    // 0x5340bc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x5340bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_5340c0:
    // 0x5340c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x5340c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5340c4:
    // 0x5340c4: 0x10000007  b           . + 4 + (0x7 << 2)
label_5340c8:
    if (ctx->pc == 0x5340C8u) {
        ctx->pc = 0x5340C8u;
            // 0x5340c8: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->pc = 0x5340CCu;
        goto label_5340cc;
    }
    ctx->pc = 0x5340C4u;
    {
        const bool branch_taken_0x5340c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5340C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5340C4u;
            // 0x5340c8: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5340c4) {
            ctx->pc = 0x5340E4u;
            goto label_5340e4;
        }
    }
    ctx->pc = 0x5340CCu;
label_5340cc:
    // 0x5340cc: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x5340ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_5340d0:
    // 0x5340d0: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x5340d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_5340d4:
    // 0x5340d4: 0x8c44cf98  lw          $a0, -0x3068($v0)
    ctx->pc = 0x5340d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_5340d8:
    // 0x5340d8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x5340d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_5340dc:
    // 0x5340dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x5340dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5340e0:
    // 0x5340e0: 0xac64cf98  sw          $a0, -0x3068($v1)
    ctx->pc = 0x5340e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
label_5340e4:
    // 0x5340e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5340e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_5340e8:
    // 0x5340e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5340e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5340ec:
    // 0x5340ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5340ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5340f0:
    // 0x5340f0: 0x3e00008  jr          $ra
label_5340f4:
    if (ctx->pc == 0x5340F4u) {
        ctx->pc = 0x5340F4u;
            // 0x5340f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x5340F8u;
        goto label_5340f8;
    }
    ctx->pc = 0x5340F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5340F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5340F0u;
            // 0x5340f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5340F8u;
label_5340f8:
    // 0x5340f8: 0x0  nop
    ctx->pc = 0x5340f8u;
    // NOP
label_5340fc:
    // 0x5340fc: 0x0  nop
    ctx->pc = 0x5340fcu;
    // NOP
label_534100:
    // 0x534100: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x534100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_534104:
    // 0x534104: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x534104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_534108:
    // 0x534108: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x534108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53410c:
    // 0x53410c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53410cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_534110:
    // 0x534110: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x534110u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_534114:
    // 0x534114: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x534114u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_534118:
    // 0x534118: 0x320f809  jalr        $t9
label_53411c:
    if (ctx->pc == 0x53411Cu) {
        ctx->pc = 0x53411Cu;
            // 0x53411c: 0x26050338  addiu       $a1, $s0, 0x338 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 824));
        ctx->pc = 0x534120u;
        goto label_534120;
    }
    ctx->pc = 0x534118u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x534120u);
        ctx->pc = 0x53411Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x534118u;
            // 0x53411c: 0x26050338  addiu       $a1, $s0, 0x338 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 824));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x534120u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x534120u; }
            if (ctx->pc != 0x534120u) { return; }
        }
        }
    }
    ctx->pc = 0x534120u;
label_534120:
    // 0x534120: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x534120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_534124:
    // 0x534124: 0x3c0500be  lui         $a1, 0xBE
    ctx->pc = 0x534124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)190 << 16));
label_534128:
    // 0x534128: 0x8c86cf98  lw          $a2, -0x3068($a0)
    ctx->pc = 0x534128u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954904)));
label_53412c:
    // 0x53412c: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x53412cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_534130:
    // 0x534130: 0x24a5b610  addiu       $a1, $a1, -0x49F0
    ctx->pc = 0x534130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948368));
label_534134:
    // 0x534134: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x534134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_534138:
    // 0x534138: 0x2404ff2e  addiu       $a0, $zero, -0xD2
    ctx->pc = 0x534138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
label_53413c:
    // 0x53413c: 0xac66cf98  sw          $a2, -0x3068($v1)
    ctx->pc = 0x53413cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 6));
label_534140:
    // 0x534140: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x534140u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_534144:
    // 0x534144: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x534144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_534148:
    // 0x534148: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x534148u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_53414c:
    // 0x53414c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x53414cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_534150:
    // 0x534150: 0x50a4000d  beql        $a1, $a0, . + 4 + (0xD << 2)
label_534154:
    if (ctx->pc == 0x534154u) {
        ctx->pc = 0x534154u;
            // 0x534154: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x534158u;
        goto label_534158;
    }
    ctx->pc = 0x534150u;
    {
        const bool branch_taken_0x534150 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x534150) {
            ctx->pc = 0x534154u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x534150u;
            // 0x534154: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x534188u;
            goto label_534188;
        }
    }
    ctx->pc = 0x534158u;
label_534158:
    // 0x534158: 0x2403ff38  addiu       $v1, $zero, -0xC8
    ctx->pc = 0x534158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
label_53415c:
    // 0x53415c: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
label_534160:
    if (ctx->pc == 0x534160u) {
        ctx->pc = 0x534164u;
        goto label_534164;
    }
    ctx->pc = 0x53415Cu;
    {
        const bool branch_taken_0x53415c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x53415c) {
            ctx->pc = 0x534184u;
            goto label_534184;
        }
    }
    ctx->pc = 0x534164u;
label_534164:
    // 0x534164: 0x2403ff9c  addiu       $v1, $zero, -0x64
    ctx->pc = 0x534164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
label_534168:
    // 0x534168: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
label_53416c:
    if (ctx->pc == 0x53416Cu) {
        ctx->pc = 0x534170u;
        goto label_534170;
    }
    ctx->pc = 0x534168u;
    {
        const bool branch_taken_0x534168 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x534168) {
            ctx->pc = 0x534184u;
            goto label_534184;
        }
    }
    ctx->pc = 0x534170u;
label_534170:
    // 0x534170: 0x2403ffa5  addiu       $v1, $zero, -0x5B
    ctx->pc = 0x534170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
label_534174:
    // 0x534174: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_534178:
    if (ctx->pc == 0x534178u) {
        ctx->pc = 0x53417Cu;
        goto label_53417c;
    }
    ctx->pc = 0x534174u;
    {
        const bool branch_taken_0x534174 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x534174) {
            ctx->pc = 0x534184u;
            goto label_534184;
        }
    }
    ctx->pc = 0x53417Cu;
label_53417c:
    // 0x53417c: 0x50a00002  beql        $a1, $zero, . + 4 + (0x2 << 2)
label_534180:
    if (ctx->pc == 0x534180u) {
        ctx->pc = 0x534180u;
            // 0x534180: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x534184u;
        goto label_534184;
    }
    ctx->pc = 0x53417Cu;
    {
        const bool branch_taken_0x53417c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x53417c) {
            ctx->pc = 0x534180u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53417Cu;
            // 0x534180: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
            ctx->pc = 0x534188u;
            goto label_534188;
        }
    }
    ctx->pc = 0x534184u;
label_534184:
    // 0x534184: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x534184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_534188:
    // 0x534188: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x534188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_53418c:
    // 0x53418c: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x53418cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_534190:
    // 0x534190: 0x8c64cf98  lw          $a0, -0x3068($v1)
    ctx->pc = 0x534190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954904)));
label_534194:
    // 0x534194: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x534194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_534198:
    // 0x534198: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x534198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_53419c:
    // 0x53419c: 0xac64cf98  sw          $a0, -0x3068($v1)
    ctx->pc = 0x53419cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
label_5341a0:
    // 0x5341a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5341a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_5341a4:
    // 0x5341a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5341a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5341a8:
    // 0x5341a8: 0x3e00008  jr          $ra
label_5341ac:
    if (ctx->pc == 0x5341ACu) {
        ctx->pc = 0x5341ACu;
            // 0x5341ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x5341B0u;
        goto label_fallthrough_0x5341a8;
    }
    ctx->pc = 0x5341A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5341ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5341A8u;
            // 0x5341ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x5341a8:
    ctx->pc = 0x5341B0u;
}
