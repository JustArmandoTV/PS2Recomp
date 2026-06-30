#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C0330
// Address: 0x3c0330 - 0x3c2390
void sub_003C0330_0x3c0330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C0330_0x3c0330");
#endif

    switch (ctx->pc) {
        case 0x3c0330u: goto label_3c0330;
        case 0x3c0334u: goto label_3c0334;
        case 0x3c0338u: goto label_3c0338;
        case 0x3c033cu: goto label_3c033c;
        case 0x3c0340u: goto label_3c0340;
        case 0x3c0344u: goto label_3c0344;
        case 0x3c0348u: goto label_3c0348;
        case 0x3c034cu: goto label_3c034c;
        case 0x3c0350u: goto label_3c0350;
        case 0x3c0354u: goto label_3c0354;
        case 0x3c0358u: goto label_3c0358;
        case 0x3c035cu: goto label_3c035c;
        case 0x3c0360u: goto label_3c0360;
        case 0x3c0364u: goto label_3c0364;
        case 0x3c0368u: goto label_3c0368;
        case 0x3c036cu: goto label_3c036c;
        case 0x3c0370u: goto label_3c0370;
        case 0x3c0374u: goto label_3c0374;
        case 0x3c0378u: goto label_3c0378;
        case 0x3c037cu: goto label_3c037c;
        case 0x3c0380u: goto label_3c0380;
        case 0x3c0384u: goto label_3c0384;
        case 0x3c0388u: goto label_3c0388;
        case 0x3c038cu: goto label_3c038c;
        case 0x3c0390u: goto label_3c0390;
        case 0x3c0394u: goto label_3c0394;
        case 0x3c0398u: goto label_3c0398;
        case 0x3c039cu: goto label_3c039c;
        case 0x3c03a0u: goto label_3c03a0;
        case 0x3c03a4u: goto label_3c03a4;
        case 0x3c03a8u: goto label_3c03a8;
        case 0x3c03acu: goto label_3c03ac;
        case 0x3c03b0u: goto label_3c03b0;
        case 0x3c03b4u: goto label_3c03b4;
        case 0x3c03b8u: goto label_3c03b8;
        case 0x3c03bcu: goto label_3c03bc;
        case 0x3c03c0u: goto label_3c03c0;
        case 0x3c03c4u: goto label_3c03c4;
        case 0x3c03c8u: goto label_3c03c8;
        case 0x3c03ccu: goto label_3c03cc;
        case 0x3c03d0u: goto label_3c03d0;
        case 0x3c03d4u: goto label_3c03d4;
        case 0x3c03d8u: goto label_3c03d8;
        case 0x3c03dcu: goto label_3c03dc;
        case 0x3c03e0u: goto label_3c03e0;
        case 0x3c03e4u: goto label_3c03e4;
        case 0x3c03e8u: goto label_3c03e8;
        case 0x3c03ecu: goto label_3c03ec;
        case 0x3c03f0u: goto label_3c03f0;
        case 0x3c03f4u: goto label_3c03f4;
        case 0x3c03f8u: goto label_3c03f8;
        case 0x3c03fcu: goto label_3c03fc;
        case 0x3c0400u: goto label_3c0400;
        case 0x3c0404u: goto label_3c0404;
        case 0x3c0408u: goto label_3c0408;
        case 0x3c040cu: goto label_3c040c;
        case 0x3c0410u: goto label_3c0410;
        case 0x3c0414u: goto label_3c0414;
        case 0x3c0418u: goto label_3c0418;
        case 0x3c041cu: goto label_3c041c;
        case 0x3c0420u: goto label_3c0420;
        case 0x3c0424u: goto label_3c0424;
        case 0x3c0428u: goto label_3c0428;
        case 0x3c042cu: goto label_3c042c;
        case 0x3c0430u: goto label_3c0430;
        case 0x3c0434u: goto label_3c0434;
        case 0x3c0438u: goto label_3c0438;
        case 0x3c043cu: goto label_3c043c;
        case 0x3c0440u: goto label_3c0440;
        case 0x3c0444u: goto label_3c0444;
        case 0x3c0448u: goto label_3c0448;
        case 0x3c044cu: goto label_3c044c;
        case 0x3c0450u: goto label_3c0450;
        case 0x3c0454u: goto label_3c0454;
        case 0x3c0458u: goto label_3c0458;
        case 0x3c045cu: goto label_3c045c;
        case 0x3c0460u: goto label_3c0460;
        case 0x3c0464u: goto label_3c0464;
        case 0x3c0468u: goto label_3c0468;
        case 0x3c046cu: goto label_3c046c;
        case 0x3c0470u: goto label_3c0470;
        case 0x3c0474u: goto label_3c0474;
        case 0x3c0478u: goto label_3c0478;
        case 0x3c047cu: goto label_3c047c;
        case 0x3c0480u: goto label_3c0480;
        case 0x3c0484u: goto label_3c0484;
        case 0x3c0488u: goto label_3c0488;
        case 0x3c048cu: goto label_3c048c;
        case 0x3c0490u: goto label_3c0490;
        case 0x3c0494u: goto label_3c0494;
        case 0x3c0498u: goto label_3c0498;
        case 0x3c049cu: goto label_3c049c;
        case 0x3c04a0u: goto label_3c04a0;
        case 0x3c04a4u: goto label_3c04a4;
        case 0x3c04a8u: goto label_3c04a8;
        case 0x3c04acu: goto label_3c04ac;
        case 0x3c04b0u: goto label_3c04b0;
        case 0x3c04b4u: goto label_3c04b4;
        case 0x3c04b8u: goto label_3c04b8;
        case 0x3c04bcu: goto label_3c04bc;
        case 0x3c04c0u: goto label_3c04c0;
        case 0x3c04c4u: goto label_3c04c4;
        case 0x3c04c8u: goto label_3c04c8;
        case 0x3c04ccu: goto label_3c04cc;
        case 0x3c04d0u: goto label_3c04d0;
        case 0x3c04d4u: goto label_3c04d4;
        case 0x3c04d8u: goto label_3c04d8;
        case 0x3c04dcu: goto label_3c04dc;
        case 0x3c04e0u: goto label_3c04e0;
        case 0x3c04e4u: goto label_3c04e4;
        case 0x3c04e8u: goto label_3c04e8;
        case 0x3c04ecu: goto label_3c04ec;
        case 0x3c04f0u: goto label_3c04f0;
        case 0x3c04f4u: goto label_3c04f4;
        case 0x3c04f8u: goto label_3c04f8;
        case 0x3c04fcu: goto label_3c04fc;
        case 0x3c0500u: goto label_3c0500;
        case 0x3c0504u: goto label_3c0504;
        case 0x3c0508u: goto label_3c0508;
        case 0x3c050cu: goto label_3c050c;
        case 0x3c0510u: goto label_3c0510;
        case 0x3c0514u: goto label_3c0514;
        case 0x3c0518u: goto label_3c0518;
        case 0x3c051cu: goto label_3c051c;
        case 0x3c0520u: goto label_3c0520;
        case 0x3c0524u: goto label_3c0524;
        case 0x3c0528u: goto label_3c0528;
        case 0x3c052cu: goto label_3c052c;
        case 0x3c0530u: goto label_3c0530;
        case 0x3c0534u: goto label_3c0534;
        case 0x3c0538u: goto label_3c0538;
        case 0x3c053cu: goto label_3c053c;
        case 0x3c0540u: goto label_3c0540;
        case 0x3c0544u: goto label_3c0544;
        case 0x3c0548u: goto label_3c0548;
        case 0x3c054cu: goto label_3c054c;
        case 0x3c0550u: goto label_3c0550;
        case 0x3c0554u: goto label_3c0554;
        case 0x3c0558u: goto label_3c0558;
        case 0x3c055cu: goto label_3c055c;
        case 0x3c0560u: goto label_3c0560;
        case 0x3c0564u: goto label_3c0564;
        case 0x3c0568u: goto label_3c0568;
        case 0x3c056cu: goto label_3c056c;
        case 0x3c0570u: goto label_3c0570;
        case 0x3c0574u: goto label_3c0574;
        case 0x3c0578u: goto label_3c0578;
        case 0x3c057cu: goto label_3c057c;
        case 0x3c0580u: goto label_3c0580;
        case 0x3c0584u: goto label_3c0584;
        case 0x3c0588u: goto label_3c0588;
        case 0x3c058cu: goto label_3c058c;
        case 0x3c0590u: goto label_3c0590;
        case 0x3c0594u: goto label_3c0594;
        case 0x3c0598u: goto label_3c0598;
        case 0x3c059cu: goto label_3c059c;
        case 0x3c05a0u: goto label_3c05a0;
        case 0x3c05a4u: goto label_3c05a4;
        case 0x3c05a8u: goto label_3c05a8;
        case 0x3c05acu: goto label_3c05ac;
        case 0x3c05b0u: goto label_3c05b0;
        case 0x3c05b4u: goto label_3c05b4;
        case 0x3c05b8u: goto label_3c05b8;
        case 0x3c05bcu: goto label_3c05bc;
        case 0x3c05c0u: goto label_3c05c0;
        case 0x3c05c4u: goto label_3c05c4;
        case 0x3c05c8u: goto label_3c05c8;
        case 0x3c05ccu: goto label_3c05cc;
        case 0x3c05d0u: goto label_3c05d0;
        case 0x3c05d4u: goto label_3c05d4;
        case 0x3c05d8u: goto label_3c05d8;
        case 0x3c05dcu: goto label_3c05dc;
        case 0x3c05e0u: goto label_3c05e0;
        case 0x3c05e4u: goto label_3c05e4;
        case 0x3c05e8u: goto label_3c05e8;
        case 0x3c05ecu: goto label_3c05ec;
        case 0x3c05f0u: goto label_3c05f0;
        case 0x3c05f4u: goto label_3c05f4;
        case 0x3c05f8u: goto label_3c05f8;
        case 0x3c05fcu: goto label_3c05fc;
        case 0x3c0600u: goto label_3c0600;
        case 0x3c0604u: goto label_3c0604;
        case 0x3c0608u: goto label_3c0608;
        case 0x3c060cu: goto label_3c060c;
        case 0x3c0610u: goto label_3c0610;
        case 0x3c0614u: goto label_3c0614;
        case 0x3c0618u: goto label_3c0618;
        case 0x3c061cu: goto label_3c061c;
        case 0x3c0620u: goto label_3c0620;
        case 0x3c0624u: goto label_3c0624;
        case 0x3c0628u: goto label_3c0628;
        case 0x3c062cu: goto label_3c062c;
        case 0x3c0630u: goto label_3c0630;
        case 0x3c0634u: goto label_3c0634;
        case 0x3c0638u: goto label_3c0638;
        case 0x3c063cu: goto label_3c063c;
        case 0x3c0640u: goto label_3c0640;
        case 0x3c0644u: goto label_3c0644;
        case 0x3c0648u: goto label_3c0648;
        case 0x3c064cu: goto label_3c064c;
        case 0x3c0650u: goto label_3c0650;
        case 0x3c0654u: goto label_3c0654;
        case 0x3c0658u: goto label_3c0658;
        case 0x3c065cu: goto label_3c065c;
        case 0x3c0660u: goto label_3c0660;
        case 0x3c0664u: goto label_3c0664;
        case 0x3c0668u: goto label_3c0668;
        case 0x3c066cu: goto label_3c066c;
        case 0x3c0670u: goto label_3c0670;
        case 0x3c0674u: goto label_3c0674;
        case 0x3c0678u: goto label_3c0678;
        case 0x3c067cu: goto label_3c067c;
        case 0x3c0680u: goto label_3c0680;
        case 0x3c0684u: goto label_3c0684;
        case 0x3c0688u: goto label_3c0688;
        case 0x3c068cu: goto label_3c068c;
        case 0x3c0690u: goto label_3c0690;
        case 0x3c0694u: goto label_3c0694;
        case 0x3c0698u: goto label_3c0698;
        case 0x3c069cu: goto label_3c069c;
        case 0x3c06a0u: goto label_3c06a0;
        case 0x3c06a4u: goto label_3c06a4;
        case 0x3c06a8u: goto label_3c06a8;
        case 0x3c06acu: goto label_3c06ac;
        case 0x3c06b0u: goto label_3c06b0;
        case 0x3c06b4u: goto label_3c06b4;
        case 0x3c06b8u: goto label_3c06b8;
        case 0x3c06bcu: goto label_3c06bc;
        case 0x3c06c0u: goto label_3c06c0;
        case 0x3c06c4u: goto label_3c06c4;
        case 0x3c06c8u: goto label_3c06c8;
        case 0x3c06ccu: goto label_3c06cc;
        case 0x3c06d0u: goto label_3c06d0;
        case 0x3c06d4u: goto label_3c06d4;
        case 0x3c06d8u: goto label_3c06d8;
        case 0x3c06dcu: goto label_3c06dc;
        case 0x3c06e0u: goto label_3c06e0;
        case 0x3c06e4u: goto label_3c06e4;
        case 0x3c06e8u: goto label_3c06e8;
        case 0x3c06ecu: goto label_3c06ec;
        case 0x3c06f0u: goto label_3c06f0;
        case 0x3c06f4u: goto label_3c06f4;
        case 0x3c06f8u: goto label_3c06f8;
        case 0x3c06fcu: goto label_3c06fc;
        case 0x3c0700u: goto label_3c0700;
        case 0x3c0704u: goto label_3c0704;
        case 0x3c0708u: goto label_3c0708;
        case 0x3c070cu: goto label_3c070c;
        case 0x3c0710u: goto label_3c0710;
        case 0x3c0714u: goto label_3c0714;
        case 0x3c0718u: goto label_3c0718;
        case 0x3c071cu: goto label_3c071c;
        case 0x3c0720u: goto label_3c0720;
        case 0x3c0724u: goto label_3c0724;
        case 0x3c0728u: goto label_3c0728;
        case 0x3c072cu: goto label_3c072c;
        case 0x3c0730u: goto label_3c0730;
        case 0x3c0734u: goto label_3c0734;
        case 0x3c0738u: goto label_3c0738;
        case 0x3c073cu: goto label_3c073c;
        case 0x3c0740u: goto label_3c0740;
        case 0x3c0744u: goto label_3c0744;
        case 0x3c0748u: goto label_3c0748;
        case 0x3c074cu: goto label_3c074c;
        case 0x3c0750u: goto label_3c0750;
        case 0x3c0754u: goto label_3c0754;
        case 0x3c0758u: goto label_3c0758;
        case 0x3c075cu: goto label_3c075c;
        case 0x3c0760u: goto label_3c0760;
        case 0x3c0764u: goto label_3c0764;
        case 0x3c0768u: goto label_3c0768;
        case 0x3c076cu: goto label_3c076c;
        case 0x3c0770u: goto label_3c0770;
        case 0x3c0774u: goto label_3c0774;
        case 0x3c0778u: goto label_3c0778;
        case 0x3c077cu: goto label_3c077c;
        case 0x3c0780u: goto label_3c0780;
        case 0x3c0784u: goto label_3c0784;
        case 0x3c0788u: goto label_3c0788;
        case 0x3c078cu: goto label_3c078c;
        case 0x3c0790u: goto label_3c0790;
        case 0x3c0794u: goto label_3c0794;
        case 0x3c0798u: goto label_3c0798;
        case 0x3c079cu: goto label_3c079c;
        case 0x3c07a0u: goto label_3c07a0;
        case 0x3c07a4u: goto label_3c07a4;
        case 0x3c07a8u: goto label_3c07a8;
        case 0x3c07acu: goto label_3c07ac;
        case 0x3c07b0u: goto label_3c07b0;
        case 0x3c07b4u: goto label_3c07b4;
        case 0x3c07b8u: goto label_3c07b8;
        case 0x3c07bcu: goto label_3c07bc;
        case 0x3c07c0u: goto label_3c07c0;
        case 0x3c07c4u: goto label_3c07c4;
        case 0x3c07c8u: goto label_3c07c8;
        case 0x3c07ccu: goto label_3c07cc;
        case 0x3c07d0u: goto label_3c07d0;
        case 0x3c07d4u: goto label_3c07d4;
        case 0x3c07d8u: goto label_3c07d8;
        case 0x3c07dcu: goto label_3c07dc;
        case 0x3c07e0u: goto label_3c07e0;
        case 0x3c07e4u: goto label_3c07e4;
        case 0x3c07e8u: goto label_3c07e8;
        case 0x3c07ecu: goto label_3c07ec;
        case 0x3c07f0u: goto label_3c07f0;
        case 0x3c07f4u: goto label_3c07f4;
        case 0x3c07f8u: goto label_3c07f8;
        case 0x3c07fcu: goto label_3c07fc;
        case 0x3c0800u: goto label_3c0800;
        case 0x3c0804u: goto label_3c0804;
        case 0x3c0808u: goto label_3c0808;
        case 0x3c080cu: goto label_3c080c;
        case 0x3c0810u: goto label_3c0810;
        case 0x3c0814u: goto label_3c0814;
        case 0x3c0818u: goto label_3c0818;
        case 0x3c081cu: goto label_3c081c;
        case 0x3c0820u: goto label_3c0820;
        case 0x3c0824u: goto label_3c0824;
        case 0x3c0828u: goto label_3c0828;
        case 0x3c082cu: goto label_3c082c;
        case 0x3c0830u: goto label_3c0830;
        case 0x3c0834u: goto label_3c0834;
        case 0x3c0838u: goto label_3c0838;
        case 0x3c083cu: goto label_3c083c;
        case 0x3c0840u: goto label_3c0840;
        case 0x3c0844u: goto label_3c0844;
        case 0x3c0848u: goto label_3c0848;
        case 0x3c084cu: goto label_3c084c;
        case 0x3c0850u: goto label_3c0850;
        case 0x3c0854u: goto label_3c0854;
        case 0x3c0858u: goto label_3c0858;
        case 0x3c085cu: goto label_3c085c;
        case 0x3c0860u: goto label_3c0860;
        case 0x3c0864u: goto label_3c0864;
        case 0x3c0868u: goto label_3c0868;
        case 0x3c086cu: goto label_3c086c;
        case 0x3c0870u: goto label_3c0870;
        case 0x3c0874u: goto label_3c0874;
        case 0x3c0878u: goto label_3c0878;
        case 0x3c087cu: goto label_3c087c;
        case 0x3c0880u: goto label_3c0880;
        case 0x3c0884u: goto label_3c0884;
        case 0x3c0888u: goto label_3c0888;
        case 0x3c088cu: goto label_3c088c;
        case 0x3c0890u: goto label_3c0890;
        case 0x3c0894u: goto label_3c0894;
        case 0x3c0898u: goto label_3c0898;
        case 0x3c089cu: goto label_3c089c;
        case 0x3c08a0u: goto label_3c08a0;
        case 0x3c08a4u: goto label_3c08a4;
        case 0x3c08a8u: goto label_3c08a8;
        case 0x3c08acu: goto label_3c08ac;
        case 0x3c08b0u: goto label_3c08b0;
        case 0x3c08b4u: goto label_3c08b4;
        case 0x3c08b8u: goto label_3c08b8;
        case 0x3c08bcu: goto label_3c08bc;
        case 0x3c08c0u: goto label_3c08c0;
        case 0x3c08c4u: goto label_3c08c4;
        case 0x3c08c8u: goto label_3c08c8;
        case 0x3c08ccu: goto label_3c08cc;
        case 0x3c08d0u: goto label_3c08d0;
        case 0x3c08d4u: goto label_3c08d4;
        case 0x3c08d8u: goto label_3c08d8;
        case 0x3c08dcu: goto label_3c08dc;
        case 0x3c08e0u: goto label_3c08e0;
        case 0x3c08e4u: goto label_3c08e4;
        case 0x3c08e8u: goto label_3c08e8;
        case 0x3c08ecu: goto label_3c08ec;
        case 0x3c08f0u: goto label_3c08f0;
        case 0x3c08f4u: goto label_3c08f4;
        case 0x3c08f8u: goto label_3c08f8;
        case 0x3c08fcu: goto label_3c08fc;
        case 0x3c0900u: goto label_3c0900;
        case 0x3c0904u: goto label_3c0904;
        case 0x3c0908u: goto label_3c0908;
        case 0x3c090cu: goto label_3c090c;
        case 0x3c0910u: goto label_3c0910;
        case 0x3c0914u: goto label_3c0914;
        case 0x3c0918u: goto label_3c0918;
        case 0x3c091cu: goto label_3c091c;
        case 0x3c0920u: goto label_3c0920;
        case 0x3c0924u: goto label_3c0924;
        case 0x3c0928u: goto label_3c0928;
        case 0x3c092cu: goto label_3c092c;
        case 0x3c0930u: goto label_3c0930;
        case 0x3c0934u: goto label_3c0934;
        case 0x3c0938u: goto label_3c0938;
        case 0x3c093cu: goto label_3c093c;
        case 0x3c0940u: goto label_3c0940;
        case 0x3c0944u: goto label_3c0944;
        case 0x3c0948u: goto label_3c0948;
        case 0x3c094cu: goto label_3c094c;
        case 0x3c0950u: goto label_3c0950;
        case 0x3c0954u: goto label_3c0954;
        case 0x3c0958u: goto label_3c0958;
        case 0x3c095cu: goto label_3c095c;
        case 0x3c0960u: goto label_3c0960;
        case 0x3c0964u: goto label_3c0964;
        case 0x3c0968u: goto label_3c0968;
        case 0x3c096cu: goto label_3c096c;
        case 0x3c0970u: goto label_3c0970;
        case 0x3c0974u: goto label_3c0974;
        case 0x3c0978u: goto label_3c0978;
        case 0x3c097cu: goto label_3c097c;
        case 0x3c0980u: goto label_3c0980;
        case 0x3c0984u: goto label_3c0984;
        case 0x3c0988u: goto label_3c0988;
        case 0x3c098cu: goto label_3c098c;
        case 0x3c0990u: goto label_3c0990;
        case 0x3c0994u: goto label_3c0994;
        case 0x3c0998u: goto label_3c0998;
        case 0x3c099cu: goto label_3c099c;
        case 0x3c09a0u: goto label_3c09a0;
        case 0x3c09a4u: goto label_3c09a4;
        case 0x3c09a8u: goto label_3c09a8;
        case 0x3c09acu: goto label_3c09ac;
        case 0x3c09b0u: goto label_3c09b0;
        case 0x3c09b4u: goto label_3c09b4;
        case 0x3c09b8u: goto label_3c09b8;
        case 0x3c09bcu: goto label_3c09bc;
        case 0x3c09c0u: goto label_3c09c0;
        case 0x3c09c4u: goto label_3c09c4;
        case 0x3c09c8u: goto label_3c09c8;
        case 0x3c09ccu: goto label_3c09cc;
        case 0x3c09d0u: goto label_3c09d0;
        case 0x3c09d4u: goto label_3c09d4;
        case 0x3c09d8u: goto label_3c09d8;
        case 0x3c09dcu: goto label_3c09dc;
        case 0x3c09e0u: goto label_3c09e0;
        case 0x3c09e4u: goto label_3c09e4;
        case 0x3c09e8u: goto label_3c09e8;
        case 0x3c09ecu: goto label_3c09ec;
        case 0x3c09f0u: goto label_3c09f0;
        case 0x3c09f4u: goto label_3c09f4;
        case 0x3c09f8u: goto label_3c09f8;
        case 0x3c09fcu: goto label_3c09fc;
        case 0x3c0a00u: goto label_3c0a00;
        case 0x3c0a04u: goto label_3c0a04;
        case 0x3c0a08u: goto label_3c0a08;
        case 0x3c0a0cu: goto label_3c0a0c;
        case 0x3c0a10u: goto label_3c0a10;
        case 0x3c0a14u: goto label_3c0a14;
        case 0x3c0a18u: goto label_3c0a18;
        case 0x3c0a1cu: goto label_3c0a1c;
        case 0x3c0a20u: goto label_3c0a20;
        case 0x3c0a24u: goto label_3c0a24;
        case 0x3c0a28u: goto label_3c0a28;
        case 0x3c0a2cu: goto label_3c0a2c;
        case 0x3c0a30u: goto label_3c0a30;
        case 0x3c0a34u: goto label_3c0a34;
        case 0x3c0a38u: goto label_3c0a38;
        case 0x3c0a3cu: goto label_3c0a3c;
        case 0x3c0a40u: goto label_3c0a40;
        case 0x3c0a44u: goto label_3c0a44;
        case 0x3c0a48u: goto label_3c0a48;
        case 0x3c0a4cu: goto label_3c0a4c;
        case 0x3c0a50u: goto label_3c0a50;
        case 0x3c0a54u: goto label_3c0a54;
        case 0x3c0a58u: goto label_3c0a58;
        case 0x3c0a5cu: goto label_3c0a5c;
        case 0x3c0a60u: goto label_3c0a60;
        case 0x3c0a64u: goto label_3c0a64;
        case 0x3c0a68u: goto label_3c0a68;
        case 0x3c0a6cu: goto label_3c0a6c;
        case 0x3c0a70u: goto label_3c0a70;
        case 0x3c0a74u: goto label_3c0a74;
        case 0x3c0a78u: goto label_3c0a78;
        case 0x3c0a7cu: goto label_3c0a7c;
        case 0x3c0a80u: goto label_3c0a80;
        case 0x3c0a84u: goto label_3c0a84;
        case 0x3c0a88u: goto label_3c0a88;
        case 0x3c0a8cu: goto label_3c0a8c;
        case 0x3c0a90u: goto label_3c0a90;
        case 0x3c0a94u: goto label_3c0a94;
        case 0x3c0a98u: goto label_3c0a98;
        case 0x3c0a9cu: goto label_3c0a9c;
        case 0x3c0aa0u: goto label_3c0aa0;
        case 0x3c0aa4u: goto label_3c0aa4;
        case 0x3c0aa8u: goto label_3c0aa8;
        case 0x3c0aacu: goto label_3c0aac;
        case 0x3c0ab0u: goto label_3c0ab0;
        case 0x3c0ab4u: goto label_3c0ab4;
        case 0x3c0ab8u: goto label_3c0ab8;
        case 0x3c0abcu: goto label_3c0abc;
        case 0x3c0ac0u: goto label_3c0ac0;
        case 0x3c0ac4u: goto label_3c0ac4;
        case 0x3c0ac8u: goto label_3c0ac8;
        case 0x3c0accu: goto label_3c0acc;
        case 0x3c0ad0u: goto label_3c0ad0;
        case 0x3c0ad4u: goto label_3c0ad4;
        case 0x3c0ad8u: goto label_3c0ad8;
        case 0x3c0adcu: goto label_3c0adc;
        case 0x3c0ae0u: goto label_3c0ae0;
        case 0x3c0ae4u: goto label_3c0ae4;
        case 0x3c0ae8u: goto label_3c0ae8;
        case 0x3c0aecu: goto label_3c0aec;
        case 0x3c0af0u: goto label_3c0af0;
        case 0x3c0af4u: goto label_3c0af4;
        case 0x3c0af8u: goto label_3c0af8;
        case 0x3c0afcu: goto label_3c0afc;
        case 0x3c0b00u: goto label_3c0b00;
        case 0x3c0b04u: goto label_3c0b04;
        case 0x3c0b08u: goto label_3c0b08;
        case 0x3c0b0cu: goto label_3c0b0c;
        case 0x3c0b10u: goto label_3c0b10;
        case 0x3c0b14u: goto label_3c0b14;
        case 0x3c0b18u: goto label_3c0b18;
        case 0x3c0b1cu: goto label_3c0b1c;
        case 0x3c0b20u: goto label_3c0b20;
        case 0x3c0b24u: goto label_3c0b24;
        case 0x3c0b28u: goto label_3c0b28;
        case 0x3c0b2cu: goto label_3c0b2c;
        case 0x3c0b30u: goto label_3c0b30;
        case 0x3c0b34u: goto label_3c0b34;
        case 0x3c0b38u: goto label_3c0b38;
        case 0x3c0b3cu: goto label_3c0b3c;
        case 0x3c0b40u: goto label_3c0b40;
        case 0x3c0b44u: goto label_3c0b44;
        case 0x3c0b48u: goto label_3c0b48;
        case 0x3c0b4cu: goto label_3c0b4c;
        case 0x3c0b50u: goto label_3c0b50;
        case 0x3c0b54u: goto label_3c0b54;
        case 0x3c0b58u: goto label_3c0b58;
        case 0x3c0b5cu: goto label_3c0b5c;
        case 0x3c0b60u: goto label_3c0b60;
        case 0x3c0b64u: goto label_3c0b64;
        case 0x3c0b68u: goto label_3c0b68;
        case 0x3c0b6cu: goto label_3c0b6c;
        case 0x3c0b70u: goto label_3c0b70;
        case 0x3c0b74u: goto label_3c0b74;
        case 0x3c0b78u: goto label_3c0b78;
        case 0x3c0b7cu: goto label_3c0b7c;
        case 0x3c0b80u: goto label_3c0b80;
        case 0x3c0b84u: goto label_3c0b84;
        case 0x3c0b88u: goto label_3c0b88;
        case 0x3c0b8cu: goto label_3c0b8c;
        case 0x3c0b90u: goto label_3c0b90;
        case 0x3c0b94u: goto label_3c0b94;
        case 0x3c0b98u: goto label_3c0b98;
        case 0x3c0b9cu: goto label_3c0b9c;
        case 0x3c0ba0u: goto label_3c0ba0;
        case 0x3c0ba4u: goto label_3c0ba4;
        case 0x3c0ba8u: goto label_3c0ba8;
        case 0x3c0bacu: goto label_3c0bac;
        case 0x3c0bb0u: goto label_3c0bb0;
        case 0x3c0bb4u: goto label_3c0bb4;
        case 0x3c0bb8u: goto label_3c0bb8;
        case 0x3c0bbcu: goto label_3c0bbc;
        case 0x3c0bc0u: goto label_3c0bc0;
        case 0x3c0bc4u: goto label_3c0bc4;
        case 0x3c0bc8u: goto label_3c0bc8;
        case 0x3c0bccu: goto label_3c0bcc;
        case 0x3c0bd0u: goto label_3c0bd0;
        case 0x3c0bd4u: goto label_3c0bd4;
        case 0x3c0bd8u: goto label_3c0bd8;
        case 0x3c0bdcu: goto label_3c0bdc;
        case 0x3c0be0u: goto label_3c0be0;
        case 0x3c0be4u: goto label_3c0be4;
        case 0x3c0be8u: goto label_3c0be8;
        case 0x3c0becu: goto label_3c0bec;
        case 0x3c0bf0u: goto label_3c0bf0;
        case 0x3c0bf4u: goto label_3c0bf4;
        case 0x3c0bf8u: goto label_3c0bf8;
        case 0x3c0bfcu: goto label_3c0bfc;
        case 0x3c0c00u: goto label_3c0c00;
        case 0x3c0c04u: goto label_3c0c04;
        case 0x3c0c08u: goto label_3c0c08;
        case 0x3c0c0cu: goto label_3c0c0c;
        case 0x3c0c10u: goto label_3c0c10;
        case 0x3c0c14u: goto label_3c0c14;
        case 0x3c0c18u: goto label_3c0c18;
        case 0x3c0c1cu: goto label_3c0c1c;
        case 0x3c0c20u: goto label_3c0c20;
        case 0x3c0c24u: goto label_3c0c24;
        case 0x3c0c28u: goto label_3c0c28;
        case 0x3c0c2cu: goto label_3c0c2c;
        case 0x3c0c30u: goto label_3c0c30;
        case 0x3c0c34u: goto label_3c0c34;
        case 0x3c0c38u: goto label_3c0c38;
        case 0x3c0c3cu: goto label_3c0c3c;
        case 0x3c0c40u: goto label_3c0c40;
        case 0x3c0c44u: goto label_3c0c44;
        case 0x3c0c48u: goto label_3c0c48;
        case 0x3c0c4cu: goto label_3c0c4c;
        case 0x3c0c50u: goto label_3c0c50;
        case 0x3c0c54u: goto label_3c0c54;
        case 0x3c0c58u: goto label_3c0c58;
        case 0x3c0c5cu: goto label_3c0c5c;
        case 0x3c0c60u: goto label_3c0c60;
        case 0x3c0c64u: goto label_3c0c64;
        case 0x3c0c68u: goto label_3c0c68;
        case 0x3c0c6cu: goto label_3c0c6c;
        case 0x3c0c70u: goto label_3c0c70;
        case 0x3c0c74u: goto label_3c0c74;
        case 0x3c0c78u: goto label_3c0c78;
        case 0x3c0c7cu: goto label_3c0c7c;
        case 0x3c0c80u: goto label_3c0c80;
        case 0x3c0c84u: goto label_3c0c84;
        case 0x3c0c88u: goto label_3c0c88;
        case 0x3c0c8cu: goto label_3c0c8c;
        case 0x3c0c90u: goto label_3c0c90;
        case 0x3c0c94u: goto label_3c0c94;
        case 0x3c0c98u: goto label_3c0c98;
        case 0x3c0c9cu: goto label_3c0c9c;
        case 0x3c0ca0u: goto label_3c0ca0;
        case 0x3c0ca4u: goto label_3c0ca4;
        case 0x3c0ca8u: goto label_3c0ca8;
        case 0x3c0cacu: goto label_3c0cac;
        case 0x3c0cb0u: goto label_3c0cb0;
        case 0x3c0cb4u: goto label_3c0cb4;
        case 0x3c0cb8u: goto label_3c0cb8;
        case 0x3c0cbcu: goto label_3c0cbc;
        case 0x3c0cc0u: goto label_3c0cc0;
        case 0x3c0cc4u: goto label_3c0cc4;
        case 0x3c0cc8u: goto label_3c0cc8;
        case 0x3c0cccu: goto label_3c0ccc;
        case 0x3c0cd0u: goto label_3c0cd0;
        case 0x3c0cd4u: goto label_3c0cd4;
        case 0x3c0cd8u: goto label_3c0cd8;
        case 0x3c0cdcu: goto label_3c0cdc;
        case 0x3c0ce0u: goto label_3c0ce0;
        case 0x3c0ce4u: goto label_3c0ce4;
        case 0x3c0ce8u: goto label_3c0ce8;
        case 0x3c0cecu: goto label_3c0cec;
        case 0x3c0cf0u: goto label_3c0cf0;
        case 0x3c0cf4u: goto label_3c0cf4;
        case 0x3c0cf8u: goto label_3c0cf8;
        case 0x3c0cfcu: goto label_3c0cfc;
        case 0x3c0d00u: goto label_3c0d00;
        case 0x3c0d04u: goto label_3c0d04;
        case 0x3c0d08u: goto label_3c0d08;
        case 0x3c0d0cu: goto label_3c0d0c;
        case 0x3c0d10u: goto label_3c0d10;
        case 0x3c0d14u: goto label_3c0d14;
        case 0x3c0d18u: goto label_3c0d18;
        case 0x3c0d1cu: goto label_3c0d1c;
        case 0x3c0d20u: goto label_3c0d20;
        case 0x3c0d24u: goto label_3c0d24;
        case 0x3c0d28u: goto label_3c0d28;
        case 0x3c0d2cu: goto label_3c0d2c;
        case 0x3c0d30u: goto label_3c0d30;
        case 0x3c0d34u: goto label_3c0d34;
        case 0x3c0d38u: goto label_3c0d38;
        case 0x3c0d3cu: goto label_3c0d3c;
        case 0x3c0d40u: goto label_3c0d40;
        case 0x3c0d44u: goto label_3c0d44;
        case 0x3c0d48u: goto label_3c0d48;
        case 0x3c0d4cu: goto label_3c0d4c;
        case 0x3c0d50u: goto label_3c0d50;
        case 0x3c0d54u: goto label_3c0d54;
        case 0x3c0d58u: goto label_3c0d58;
        case 0x3c0d5cu: goto label_3c0d5c;
        case 0x3c0d60u: goto label_3c0d60;
        case 0x3c0d64u: goto label_3c0d64;
        case 0x3c0d68u: goto label_3c0d68;
        case 0x3c0d6cu: goto label_3c0d6c;
        case 0x3c0d70u: goto label_3c0d70;
        case 0x3c0d74u: goto label_3c0d74;
        case 0x3c0d78u: goto label_3c0d78;
        case 0x3c0d7cu: goto label_3c0d7c;
        case 0x3c0d80u: goto label_3c0d80;
        case 0x3c0d84u: goto label_3c0d84;
        case 0x3c0d88u: goto label_3c0d88;
        case 0x3c0d8cu: goto label_3c0d8c;
        case 0x3c0d90u: goto label_3c0d90;
        case 0x3c0d94u: goto label_3c0d94;
        case 0x3c0d98u: goto label_3c0d98;
        case 0x3c0d9cu: goto label_3c0d9c;
        case 0x3c0da0u: goto label_3c0da0;
        case 0x3c0da4u: goto label_3c0da4;
        case 0x3c0da8u: goto label_3c0da8;
        case 0x3c0dacu: goto label_3c0dac;
        case 0x3c0db0u: goto label_3c0db0;
        case 0x3c0db4u: goto label_3c0db4;
        case 0x3c0db8u: goto label_3c0db8;
        case 0x3c0dbcu: goto label_3c0dbc;
        case 0x3c0dc0u: goto label_3c0dc0;
        case 0x3c0dc4u: goto label_3c0dc4;
        case 0x3c0dc8u: goto label_3c0dc8;
        case 0x3c0dccu: goto label_3c0dcc;
        case 0x3c0dd0u: goto label_3c0dd0;
        case 0x3c0dd4u: goto label_3c0dd4;
        case 0x3c0dd8u: goto label_3c0dd8;
        case 0x3c0ddcu: goto label_3c0ddc;
        case 0x3c0de0u: goto label_3c0de0;
        case 0x3c0de4u: goto label_3c0de4;
        case 0x3c0de8u: goto label_3c0de8;
        case 0x3c0decu: goto label_3c0dec;
        case 0x3c0df0u: goto label_3c0df0;
        case 0x3c0df4u: goto label_3c0df4;
        case 0x3c0df8u: goto label_3c0df8;
        case 0x3c0dfcu: goto label_3c0dfc;
        case 0x3c0e00u: goto label_3c0e00;
        case 0x3c0e04u: goto label_3c0e04;
        case 0x3c0e08u: goto label_3c0e08;
        case 0x3c0e0cu: goto label_3c0e0c;
        case 0x3c0e10u: goto label_3c0e10;
        case 0x3c0e14u: goto label_3c0e14;
        case 0x3c0e18u: goto label_3c0e18;
        case 0x3c0e1cu: goto label_3c0e1c;
        case 0x3c0e20u: goto label_3c0e20;
        case 0x3c0e24u: goto label_3c0e24;
        case 0x3c0e28u: goto label_3c0e28;
        case 0x3c0e2cu: goto label_3c0e2c;
        case 0x3c0e30u: goto label_3c0e30;
        case 0x3c0e34u: goto label_3c0e34;
        case 0x3c0e38u: goto label_3c0e38;
        case 0x3c0e3cu: goto label_3c0e3c;
        case 0x3c0e40u: goto label_3c0e40;
        case 0x3c0e44u: goto label_3c0e44;
        case 0x3c0e48u: goto label_3c0e48;
        case 0x3c0e4cu: goto label_3c0e4c;
        case 0x3c0e50u: goto label_3c0e50;
        case 0x3c0e54u: goto label_3c0e54;
        case 0x3c0e58u: goto label_3c0e58;
        case 0x3c0e5cu: goto label_3c0e5c;
        case 0x3c0e60u: goto label_3c0e60;
        case 0x3c0e64u: goto label_3c0e64;
        case 0x3c0e68u: goto label_3c0e68;
        case 0x3c0e6cu: goto label_3c0e6c;
        case 0x3c0e70u: goto label_3c0e70;
        case 0x3c0e74u: goto label_3c0e74;
        case 0x3c0e78u: goto label_3c0e78;
        case 0x3c0e7cu: goto label_3c0e7c;
        case 0x3c0e80u: goto label_3c0e80;
        case 0x3c0e84u: goto label_3c0e84;
        case 0x3c0e88u: goto label_3c0e88;
        case 0x3c0e8cu: goto label_3c0e8c;
        case 0x3c0e90u: goto label_3c0e90;
        case 0x3c0e94u: goto label_3c0e94;
        case 0x3c0e98u: goto label_3c0e98;
        case 0x3c0e9cu: goto label_3c0e9c;
        case 0x3c0ea0u: goto label_3c0ea0;
        case 0x3c0ea4u: goto label_3c0ea4;
        case 0x3c0ea8u: goto label_3c0ea8;
        case 0x3c0eacu: goto label_3c0eac;
        case 0x3c0eb0u: goto label_3c0eb0;
        case 0x3c0eb4u: goto label_3c0eb4;
        case 0x3c0eb8u: goto label_3c0eb8;
        case 0x3c0ebcu: goto label_3c0ebc;
        case 0x3c0ec0u: goto label_3c0ec0;
        case 0x3c0ec4u: goto label_3c0ec4;
        case 0x3c0ec8u: goto label_3c0ec8;
        case 0x3c0eccu: goto label_3c0ecc;
        case 0x3c0ed0u: goto label_3c0ed0;
        case 0x3c0ed4u: goto label_3c0ed4;
        case 0x3c0ed8u: goto label_3c0ed8;
        case 0x3c0edcu: goto label_3c0edc;
        case 0x3c0ee0u: goto label_3c0ee0;
        case 0x3c0ee4u: goto label_3c0ee4;
        case 0x3c0ee8u: goto label_3c0ee8;
        case 0x3c0eecu: goto label_3c0eec;
        case 0x3c0ef0u: goto label_3c0ef0;
        case 0x3c0ef4u: goto label_3c0ef4;
        case 0x3c0ef8u: goto label_3c0ef8;
        case 0x3c0efcu: goto label_3c0efc;
        case 0x3c0f00u: goto label_3c0f00;
        case 0x3c0f04u: goto label_3c0f04;
        case 0x3c0f08u: goto label_3c0f08;
        case 0x3c0f0cu: goto label_3c0f0c;
        case 0x3c0f10u: goto label_3c0f10;
        case 0x3c0f14u: goto label_3c0f14;
        case 0x3c0f18u: goto label_3c0f18;
        case 0x3c0f1cu: goto label_3c0f1c;
        case 0x3c0f20u: goto label_3c0f20;
        case 0x3c0f24u: goto label_3c0f24;
        case 0x3c0f28u: goto label_3c0f28;
        case 0x3c0f2cu: goto label_3c0f2c;
        case 0x3c0f30u: goto label_3c0f30;
        case 0x3c0f34u: goto label_3c0f34;
        case 0x3c0f38u: goto label_3c0f38;
        case 0x3c0f3cu: goto label_3c0f3c;
        case 0x3c0f40u: goto label_3c0f40;
        case 0x3c0f44u: goto label_3c0f44;
        case 0x3c0f48u: goto label_3c0f48;
        case 0x3c0f4cu: goto label_3c0f4c;
        case 0x3c0f50u: goto label_3c0f50;
        case 0x3c0f54u: goto label_3c0f54;
        case 0x3c0f58u: goto label_3c0f58;
        case 0x3c0f5cu: goto label_3c0f5c;
        case 0x3c0f60u: goto label_3c0f60;
        case 0x3c0f64u: goto label_3c0f64;
        case 0x3c0f68u: goto label_3c0f68;
        case 0x3c0f6cu: goto label_3c0f6c;
        case 0x3c0f70u: goto label_3c0f70;
        case 0x3c0f74u: goto label_3c0f74;
        case 0x3c0f78u: goto label_3c0f78;
        case 0x3c0f7cu: goto label_3c0f7c;
        case 0x3c0f80u: goto label_3c0f80;
        case 0x3c0f84u: goto label_3c0f84;
        case 0x3c0f88u: goto label_3c0f88;
        case 0x3c0f8cu: goto label_3c0f8c;
        case 0x3c0f90u: goto label_3c0f90;
        case 0x3c0f94u: goto label_3c0f94;
        case 0x3c0f98u: goto label_3c0f98;
        case 0x3c0f9cu: goto label_3c0f9c;
        case 0x3c0fa0u: goto label_3c0fa0;
        case 0x3c0fa4u: goto label_3c0fa4;
        case 0x3c0fa8u: goto label_3c0fa8;
        case 0x3c0facu: goto label_3c0fac;
        case 0x3c0fb0u: goto label_3c0fb0;
        case 0x3c0fb4u: goto label_3c0fb4;
        case 0x3c0fb8u: goto label_3c0fb8;
        case 0x3c0fbcu: goto label_3c0fbc;
        case 0x3c0fc0u: goto label_3c0fc0;
        case 0x3c0fc4u: goto label_3c0fc4;
        case 0x3c0fc8u: goto label_3c0fc8;
        case 0x3c0fccu: goto label_3c0fcc;
        case 0x3c0fd0u: goto label_3c0fd0;
        case 0x3c0fd4u: goto label_3c0fd4;
        case 0x3c0fd8u: goto label_3c0fd8;
        case 0x3c0fdcu: goto label_3c0fdc;
        case 0x3c0fe0u: goto label_3c0fe0;
        case 0x3c0fe4u: goto label_3c0fe4;
        case 0x3c0fe8u: goto label_3c0fe8;
        case 0x3c0fecu: goto label_3c0fec;
        case 0x3c0ff0u: goto label_3c0ff0;
        case 0x3c0ff4u: goto label_3c0ff4;
        case 0x3c0ff8u: goto label_3c0ff8;
        case 0x3c0ffcu: goto label_3c0ffc;
        case 0x3c1000u: goto label_3c1000;
        case 0x3c1004u: goto label_3c1004;
        case 0x3c1008u: goto label_3c1008;
        case 0x3c100cu: goto label_3c100c;
        case 0x3c1010u: goto label_3c1010;
        case 0x3c1014u: goto label_3c1014;
        case 0x3c1018u: goto label_3c1018;
        case 0x3c101cu: goto label_3c101c;
        case 0x3c1020u: goto label_3c1020;
        case 0x3c1024u: goto label_3c1024;
        case 0x3c1028u: goto label_3c1028;
        case 0x3c102cu: goto label_3c102c;
        case 0x3c1030u: goto label_3c1030;
        case 0x3c1034u: goto label_3c1034;
        case 0x3c1038u: goto label_3c1038;
        case 0x3c103cu: goto label_3c103c;
        case 0x3c1040u: goto label_3c1040;
        case 0x3c1044u: goto label_3c1044;
        case 0x3c1048u: goto label_3c1048;
        case 0x3c104cu: goto label_3c104c;
        case 0x3c1050u: goto label_3c1050;
        case 0x3c1054u: goto label_3c1054;
        case 0x3c1058u: goto label_3c1058;
        case 0x3c105cu: goto label_3c105c;
        case 0x3c1060u: goto label_3c1060;
        case 0x3c1064u: goto label_3c1064;
        case 0x3c1068u: goto label_3c1068;
        case 0x3c106cu: goto label_3c106c;
        case 0x3c1070u: goto label_3c1070;
        case 0x3c1074u: goto label_3c1074;
        case 0x3c1078u: goto label_3c1078;
        case 0x3c107cu: goto label_3c107c;
        case 0x3c1080u: goto label_3c1080;
        case 0x3c1084u: goto label_3c1084;
        case 0x3c1088u: goto label_3c1088;
        case 0x3c108cu: goto label_3c108c;
        case 0x3c1090u: goto label_3c1090;
        case 0x3c1094u: goto label_3c1094;
        case 0x3c1098u: goto label_3c1098;
        case 0x3c109cu: goto label_3c109c;
        case 0x3c10a0u: goto label_3c10a0;
        case 0x3c10a4u: goto label_3c10a4;
        case 0x3c10a8u: goto label_3c10a8;
        case 0x3c10acu: goto label_3c10ac;
        case 0x3c10b0u: goto label_3c10b0;
        case 0x3c10b4u: goto label_3c10b4;
        case 0x3c10b8u: goto label_3c10b8;
        case 0x3c10bcu: goto label_3c10bc;
        case 0x3c10c0u: goto label_3c10c0;
        case 0x3c10c4u: goto label_3c10c4;
        case 0x3c10c8u: goto label_3c10c8;
        case 0x3c10ccu: goto label_3c10cc;
        case 0x3c10d0u: goto label_3c10d0;
        case 0x3c10d4u: goto label_3c10d4;
        case 0x3c10d8u: goto label_3c10d8;
        case 0x3c10dcu: goto label_3c10dc;
        case 0x3c10e0u: goto label_3c10e0;
        case 0x3c10e4u: goto label_3c10e4;
        case 0x3c10e8u: goto label_3c10e8;
        case 0x3c10ecu: goto label_3c10ec;
        case 0x3c10f0u: goto label_3c10f0;
        case 0x3c10f4u: goto label_3c10f4;
        case 0x3c10f8u: goto label_3c10f8;
        case 0x3c10fcu: goto label_3c10fc;
        case 0x3c1100u: goto label_3c1100;
        case 0x3c1104u: goto label_3c1104;
        case 0x3c1108u: goto label_3c1108;
        case 0x3c110cu: goto label_3c110c;
        case 0x3c1110u: goto label_3c1110;
        case 0x3c1114u: goto label_3c1114;
        case 0x3c1118u: goto label_3c1118;
        case 0x3c111cu: goto label_3c111c;
        case 0x3c1120u: goto label_3c1120;
        case 0x3c1124u: goto label_3c1124;
        case 0x3c1128u: goto label_3c1128;
        case 0x3c112cu: goto label_3c112c;
        case 0x3c1130u: goto label_3c1130;
        case 0x3c1134u: goto label_3c1134;
        case 0x3c1138u: goto label_3c1138;
        case 0x3c113cu: goto label_3c113c;
        case 0x3c1140u: goto label_3c1140;
        case 0x3c1144u: goto label_3c1144;
        case 0x3c1148u: goto label_3c1148;
        case 0x3c114cu: goto label_3c114c;
        case 0x3c1150u: goto label_3c1150;
        case 0x3c1154u: goto label_3c1154;
        case 0x3c1158u: goto label_3c1158;
        case 0x3c115cu: goto label_3c115c;
        case 0x3c1160u: goto label_3c1160;
        case 0x3c1164u: goto label_3c1164;
        case 0x3c1168u: goto label_3c1168;
        case 0x3c116cu: goto label_3c116c;
        case 0x3c1170u: goto label_3c1170;
        case 0x3c1174u: goto label_3c1174;
        case 0x3c1178u: goto label_3c1178;
        case 0x3c117cu: goto label_3c117c;
        case 0x3c1180u: goto label_3c1180;
        case 0x3c1184u: goto label_3c1184;
        case 0x3c1188u: goto label_3c1188;
        case 0x3c118cu: goto label_3c118c;
        case 0x3c1190u: goto label_3c1190;
        case 0x3c1194u: goto label_3c1194;
        case 0x3c1198u: goto label_3c1198;
        case 0x3c119cu: goto label_3c119c;
        case 0x3c11a0u: goto label_3c11a0;
        case 0x3c11a4u: goto label_3c11a4;
        case 0x3c11a8u: goto label_3c11a8;
        case 0x3c11acu: goto label_3c11ac;
        case 0x3c11b0u: goto label_3c11b0;
        case 0x3c11b4u: goto label_3c11b4;
        case 0x3c11b8u: goto label_3c11b8;
        case 0x3c11bcu: goto label_3c11bc;
        case 0x3c11c0u: goto label_3c11c0;
        case 0x3c11c4u: goto label_3c11c4;
        case 0x3c11c8u: goto label_3c11c8;
        case 0x3c11ccu: goto label_3c11cc;
        case 0x3c11d0u: goto label_3c11d0;
        case 0x3c11d4u: goto label_3c11d4;
        case 0x3c11d8u: goto label_3c11d8;
        case 0x3c11dcu: goto label_3c11dc;
        case 0x3c11e0u: goto label_3c11e0;
        case 0x3c11e4u: goto label_3c11e4;
        case 0x3c11e8u: goto label_3c11e8;
        case 0x3c11ecu: goto label_3c11ec;
        case 0x3c11f0u: goto label_3c11f0;
        case 0x3c11f4u: goto label_3c11f4;
        case 0x3c11f8u: goto label_3c11f8;
        case 0x3c11fcu: goto label_3c11fc;
        case 0x3c1200u: goto label_3c1200;
        case 0x3c1204u: goto label_3c1204;
        case 0x3c1208u: goto label_3c1208;
        case 0x3c120cu: goto label_3c120c;
        case 0x3c1210u: goto label_3c1210;
        case 0x3c1214u: goto label_3c1214;
        case 0x3c1218u: goto label_3c1218;
        case 0x3c121cu: goto label_3c121c;
        case 0x3c1220u: goto label_3c1220;
        case 0x3c1224u: goto label_3c1224;
        case 0x3c1228u: goto label_3c1228;
        case 0x3c122cu: goto label_3c122c;
        case 0x3c1230u: goto label_3c1230;
        case 0x3c1234u: goto label_3c1234;
        case 0x3c1238u: goto label_3c1238;
        case 0x3c123cu: goto label_3c123c;
        case 0x3c1240u: goto label_3c1240;
        case 0x3c1244u: goto label_3c1244;
        case 0x3c1248u: goto label_3c1248;
        case 0x3c124cu: goto label_3c124c;
        case 0x3c1250u: goto label_3c1250;
        case 0x3c1254u: goto label_3c1254;
        case 0x3c1258u: goto label_3c1258;
        case 0x3c125cu: goto label_3c125c;
        case 0x3c1260u: goto label_3c1260;
        case 0x3c1264u: goto label_3c1264;
        case 0x3c1268u: goto label_3c1268;
        case 0x3c126cu: goto label_3c126c;
        case 0x3c1270u: goto label_3c1270;
        case 0x3c1274u: goto label_3c1274;
        case 0x3c1278u: goto label_3c1278;
        case 0x3c127cu: goto label_3c127c;
        case 0x3c1280u: goto label_3c1280;
        case 0x3c1284u: goto label_3c1284;
        case 0x3c1288u: goto label_3c1288;
        case 0x3c128cu: goto label_3c128c;
        case 0x3c1290u: goto label_3c1290;
        case 0x3c1294u: goto label_3c1294;
        case 0x3c1298u: goto label_3c1298;
        case 0x3c129cu: goto label_3c129c;
        case 0x3c12a0u: goto label_3c12a0;
        case 0x3c12a4u: goto label_3c12a4;
        case 0x3c12a8u: goto label_3c12a8;
        case 0x3c12acu: goto label_3c12ac;
        case 0x3c12b0u: goto label_3c12b0;
        case 0x3c12b4u: goto label_3c12b4;
        case 0x3c12b8u: goto label_3c12b8;
        case 0x3c12bcu: goto label_3c12bc;
        case 0x3c12c0u: goto label_3c12c0;
        case 0x3c12c4u: goto label_3c12c4;
        case 0x3c12c8u: goto label_3c12c8;
        case 0x3c12ccu: goto label_3c12cc;
        case 0x3c12d0u: goto label_3c12d0;
        case 0x3c12d4u: goto label_3c12d4;
        case 0x3c12d8u: goto label_3c12d8;
        case 0x3c12dcu: goto label_3c12dc;
        case 0x3c12e0u: goto label_3c12e0;
        case 0x3c12e4u: goto label_3c12e4;
        case 0x3c12e8u: goto label_3c12e8;
        case 0x3c12ecu: goto label_3c12ec;
        case 0x3c12f0u: goto label_3c12f0;
        case 0x3c12f4u: goto label_3c12f4;
        case 0x3c12f8u: goto label_3c12f8;
        case 0x3c12fcu: goto label_3c12fc;
        case 0x3c1300u: goto label_3c1300;
        case 0x3c1304u: goto label_3c1304;
        case 0x3c1308u: goto label_3c1308;
        case 0x3c130cu: goto label_3c130c;
        case 0x3c1310u: goto label_3c1310;
        case 0x3c1314u: goto label_3c1314;
        case 0x3c1318u: goto label_3c1318;
        case 0x3c131cu: goto label_3c131c;
        case 0x3c1320u: goto label_3c1320;
        case 0x3c1324u: goto label_3c1324;
        case 0x3c1328u: goto label_3c1328;
        case 0x3c132cu: goto label_3c132c;
        case 0x3c1330u: goto label_3c1330;
        case 0x3c1334u: goto label_3c1334;
        case 0x3c1338u: goto label_3c1338;
        case 0x3c133cu: goto label_3c133c;
        case 0x3c1340u: goto label_3c1340;
        case 0x3c1344u: goto label_3c1344;
        case 0x3c1348u: goto label_3c1348;
        case 0x3c134cu: goto label_3c134c;
        case 0x3c1350u: goto label_3c1350;
        case 0x3c1354u: goto label_3c1354;
        case 0x3c1358u: goto label_3c1358;
        case 0x3c135cu: goto label_3c135c;
        case 0x3c1360u: goto label_3c1360;
        case 0x3c1364u: goto label_3c1364;
        case 0x3c1368u: goto label_3c1368;
        case 0x3c136cu: goto label_3c136c;
        case 0x3c1370u: goto label_3c1370;
        case 0x3c1374u: goto label_3c1374;
        case 0x3c1378u: goto label_3c1378;
        case 0x3c137cu: goto label_3c137c;
        case 0x3c1380u: goto label_3c1380;
        case 0x3c1384u: goto label_3c1384;
        case 0x3c1388u: goto label_3c1388;
        case 0x3c138cu: goto label_3c138c;
        case 0x3c1390u: goto label_3c1390;
        case 0x3c1394u: goto label_3c1394;
        case 0x3c1398u: goto label_3c1398;
        case 0x3c139cu: goto label_3c139c;
        case 0x3c13a0u: goto label_3c13a0;
        case 0x3c13a4u: goto label_3c13a4;
        case 0x3c13a8u: goto label_3c13a8;
        case 0x3c13acu: goto label_3c13ac;
        case 0x3c13b0u: goto label_3c13b0;
        case 0x3c13b4u: goto label_3c13b4;
        case 0x3c13b8u: goto label_3c13b8;
        case 0x3c13bcu: goto label_3c13bc;
        case 0x3c13c0u: goto label_3c13c0;
        case 0x3c13c4u: goto label_3c13c4;
        case 0x3c13c8u: goto label_3c13c8;
        case 0x3c13ccu: goto label_3c13cc;
        case 0x3c13d0u: goto label_3c13d0;
        case 0x3c13d4u: goto label_3c13d4;
        case 0x3c13d8u: goto label_3c13d8;
        case 0x3c13dcu: goto label_3c13dc;
        case 0x3c13e0u: goto label_3c13e0;
        case 0x3c13e4u: goto label_3c13e4;
        case 0x3c13e8u: goto label_3c13e8;
        case 0x3c13ecu: goto label_3c13ec;
        case 0x3c13f0u: goto label_3c13f0;
        case 0x3c13f4u: goto label_3c13f4;
        case 0x3c13f8u: goto label_3c13f8;
        case 0x3c13fcu: goto label_3c13fc;
        case 0x3c1400u: goto label_3c1400;
        case 0x3c1404u: goto label_3c1404;
        case 0x3c1408u: goto label_3c1408;
        case 0x3c140cu: goto label_3c140c;
        case 0x3c1410u: goto label_3c1410;
        case 0x3c1414u: goto label_3c1414;
        case 0x3c1418u: goto label_3c1418;
        case 0x3c141cu: goto label_3c141c;
        case 0x3c1420u: goto label_3c1420;
        case 0x3c1424u: goto label_3c1424;
        case 0x3c1428u: goto label_3c1428;
        case 0x3c142cu: goto label_3c142c;
        case 0x3c1430u: goto label_3c1430;
        case 0x3c1434u: goto label_3c1434;
        case 0x3c1438u: goto label_3c1438;
        case 0x3c143cu: goto label_3c143c;
        case 0x3c1440u: goto label_3c1440;
        case 0x3c1444u: goto label_3c1444;
        case 0x3c1448u: goto label_3c1448;
        case 0x3c144cu: goto label_3c144c;
        case 0x3c1450u: goto label_3c1450;
        case 0x3c1454u: goto label_3c1454;
        case 0x3c1458u: goto label_3c1458;
        case 0x3c145cu: goto label_3c145c;
        case 0x3c1460u: goto label_3c1460;
        case 0x3c1464u: goto label_3c1464;
        case 0x3c1468u: goto label_3c1468;
        case 0x3c146cu: goto label_3c146c;
        case 0x3c1470u: goto label_3c1470;
        case 0x3c1474u: goto label_3c1474;
        case 0x3c1478u: goto label_3c1478;
        case 0x3c147cu: goto label_3c147c;
        case 0x3c1480u: goto label_3c1480;
        case 0x3c1484u: goto label_3c1484;
        case 0x3c1488u: goto label_3c1488;
        case 0x3c148cu: goto label_3c148c;
        case 0x3c1490u: goto label_3c1490;
        case 0x3c1494u: goto label_3c1494;
        case 0x3c1498u: goto label_3c1498;
        case 0x3c149cu: goto label_3c149c;
        case 0x3c14a0u: goto label_3c14a0;
        case 0x3c14a4u: goto label_3c14a4;
        case 0x3c14a8u: goto label_3c14a8;
        case 0x3c14acu: goto label_3c14ac;
        case 0x3c14b0u: goto label_3c14b0;
        case 0x3c14b4u: goto label_3c14b4;
        case 0x3c14b8u: goto label_3c14b8;
        case 0x3c14bcu: goto label_3c14bc;
        case 0x3c14c0u: goto label_3c14c0;
        case 0x3c14c4u: goto label_3c14c4;
        case 0x3c14c8u: goto label_3c14c8;
        case 0x3c14ccu: goto label_3c14cc;
        case 0x3c14d0u: goto label_3c14d0;
        case 0x3c14d4u: goto label_3c14d4;
        case 0x3c14d8u: goto label_3c14d8;
        case 0x3c14dcu: goto label_3c14dc;
        case 0x3c14e0u: goto label_3c14e0;
        case 0x3c14e4u: goto label_3c14e4;
        case 0x3c14e8u: goto label_3c14e8;
        case 0x3c14ecu: goto label_3c14ec;
        case 0x3c14f0u: goto label_3c14f0;
        case 0x3c14f4u: goto label_3c14f4;
        case 0x3c14f8u: goto label_3c14f8;
        case 0x3c14fcu: goto label_3c14fc;
        case 0x3c1500u: goto label_3c1500;
        case 0x3c1504u: goto label_3c1504;
        case 0x3c1508u: goto label_3c1508;
        case 0x3c150cu: goto label_3c150c;
        case 0x3c1510u: goto label_3c1510;
        case 0x3c1514u: goto label_3c1514;
        case 0x3c1518u: goto label_3c1518;
        case 0x3c151cu: goto label_3c151c;
        case 0x3c1520u: goto label_3c1520;
        case 0x3c1524u: goto label_3c1524;
        case 0x3c1528u: goto label_3c1528;
        case 0x3c152cu: goto label_3c152c;
        case 0x3c1530u: goto label_3c1530;
        case 0x3c1534u: goto label_3c1534;
        case 0x3c1538u: goto label_3c1538;
        case 0x3c153cu: goto label_3c153c;
        case 0x3c1540u: goto label_3c1540;
        case 0x3c1544u: goto label_3c1544;
        case 0x3c1548u: goto label_3c1548;
        case 0x3c154cu: goto label_3c154c;
        case 0x3c1550u: goto label_3c1550;
        case 0x3c1554u: goto label_3c1554;
        case 0x3c1558u: goto label_3c1558;
        case 0x3c155cu: goto label_3c155c;
        case 0x3c1560u: goto label_3c1560;
        case 0x3c1564u: goto label_3c1564;
        case 0x3c1568u: goto label_3c1568;
        case 0x3c156cu: goto label_3c156c;
        case 0x3c1570u: goto label_3c1570;
        case 0x3c1574u: goto label_3c1574;
        case 0x3c1578u: goto label_3c1578;
        case 0x3c157cu: goto label_3c157c;
        case 0x3c1580u: goto label_3c1580;
        case 0x3c1584u: goto label_3c1584;
        case 0x3c1588u: goto label_3c1588;
        case 0x3c158cu: goto label_3c158c;
        case 0x3c1590u: goto label_3c1590;
        case 0x3c1594u: goto label_3c1594;
        case 0x3c1598u: goto label_3c1598;
        case 0x3c159cu: goto label_3c159c;
        case 0x3c15a0u: goto label_3c15a0;
        case 0x3c15a4u: goto label_3c15a4;
        case 0x3c15a8u: goto label_3c15a8;
        case 0x3c15acu: goto label_3c15ac;
        case 0x3c15b0u: goto label_3c15b0;
        case 0x3c15b4u: goto label_3c15b4;
        case 0x3c15b8u: goto label_3c15b8;
        case 0x3c15bcu: goto label_3c15bc;
        case 0x3c15c0u: goto label_3c15c0;
        case 0x3c15c4u: goto label_3c15c4;
        case 0x3c15c8u: goto label_3c15c8;
        case 0x3c15ccu: goto label_3c15cc;
        case 0x3c15d0u: goto label_3c15d0;
        case 0x3c15d4u: goto label_3c15d4;
        case 0x3c15d8u: goto label_3c15d8;
        case 0x3c15dcu: goto label_3c15dc;
        case 0x3c15e0u: goto label_3c15e0;
        case 0x3c15e4u: goto label_3c15e4;
        case 0x3c15e8u: goto label_3c15e8;
        case 0x3c15ecu: goto label_3c15ec;
        case 0x3c15f0u: goto label_3c15f0;
        case 0x3c15f4u: goto label_3c15f4;
        case 0x3c15f8u: goto label_3c15f8;
        case 0x3c15fcu: goto label_3c15fc;
        case 0x3c1600u: goto label_3c1600;
        case 0x3c1604u: goto label_3c1604;
        case 0x3c1608u: goto label_3c1608;
        case 0x3c160cu: goto label_3c160c;
        case 0x3c1610u: goto label_3c1610;
        case 0x3c1614u: goto label_3c1614;
        case 0x3c1618u: goto label_3c1618;
        case 0x3c161cu: goto label_3c161c;
        case 0x3c1620u: goto label_3c1620;
        case 0x3c1624u: goto label_3c1624;
        case 0x3c1628u: goto label_3c1628;
        case 0x3c162cu: goto label_3c162c;
        case 0x3c1630u: goto label_3c1630;
        case 0x3c1634u: goto label_3c1634;
        case 0x3c1638u: goto label_3c1638;
        case 0x3c163cu: goto label_3c163c;
        case 0x3c1640u: goto label_3c1640;
        case 0x3c1644u: goto label_3c1644;
        case 0x3c1648u: goto label_3c1648;
        case 0x3c164cu: goto label_3c164c;
        case 0x3c1650u: goto label_3c1650;
        case 0x3c1654u: goto label_3c1654;
        case 0x3c1658u: goto label_3c1658;
        case 0x3c165cu: goto label_3c165c;
        case 0x3c1660u: goto label_3c1660;
        case 0x3c1664u: goto label_3c1664;
        case 0x3c1668u: goto label_3c1668;
        case 0x3c166cu: goto label_3c166c;
        case 0x3c1670u: goto label_3c1670;
        case 0x3c1674u: goto label_3c1674;
        case 0x3c1678u: goto label_3c1678;
        case 0x3c167cu: goto label_3c167c;
        case 0x3c1680u: goto label_3c1680;
        case 0x3c1684u: goto label_3c1684;
        case 0x3c1688u: goto label_3c1688;
        case 0x3c168cu: goto label_3c168c;
        case 0x3c1690u: goto label_3c1690;
        case 0x3c1694u: goto label_3c1694;
        case 0x3c1698u: goto label_3c1698;
        case 0x3c169cu: goto label_3c169c;
        case 0x3c16a0u: goto label_3c16a0;
        case 0x3c16a4u: goto label_3c16a4;
        case 0x3c16a8u: goto label_3c16a8;
        case 0x3c16acu: goto label_3c16ac;
        case 0x3c16b0u: goto label_3c16b0;
        case 0x3c16b4u: goto label_3c16b4;
        case 0x3c16b8u: goto label_3c16b8;
        case 0x3c16bcu: goto label_3c16bc;
        case 0x3c16c0u: goto label_3c16c0;
        case 0x3c16c4u: goto label_3c16c4;
        case 0x3c16c8u: goto label_3c16c8;
        case 0x3c16ccu: goto label_3c16cc;
        case 0x3c16d0u: goto label_3c16d0;
        case 0x3c16d4u: goto label_3c16d4;
        case 0x3c16d8u: goto label_3c16d8;
        case 0x3c16dcu: goto label_3c16dc;
        case 0x3c16e0u: goto label_3c16e0;
        case 0x3c16e4u: goto label_3c16e4;
        case 0x3c16e8u: goto label_3c16e8;
        case 0x3c16ecu: goto label_3c16ec;
        case 0x3c16f0u: goto label_3c16f0;
        case 0x3c16f4u: goto label_3c16f4;
        case 0x3c16f8u: goto label_3c16f8;
        case 0x3c16fcu: goto label_3c16fc;
        case 0x3c1700u: goto label_3c1700;
        case 0x3c1704u: goto label_3c1704;
        case 0x3c1708u: goto label_3c1708;
        case 0x3c170cu: goto label_3c170c;
        case 0x3c1710u: goto label_3c1710;
        case 0x3c1714u: goto label_3c1714;
        case 0x3c1718u: goto label_3c1718;
        case 0x3c171cu: goto label_3c171c;
        case 0x3c1720u: goto label_3c1720;
        case 0x3c1724u: goto label_3c1724;
        case 0x3c1728u: goto label_3c1728;
        case 0x3c172cu: goto label_3c172c;
        case 0x3c1730u: goto label_3c1730;
        case 0x3c1734u: goto label_3c1734;
        case 0x3c1738u: goto label_3c1738;
        case 0x3c173cu: goto label_3c173c;
        case 0x3c1740u: goto label_3c1740;
        case 0x3c1744u: goto label_3c1744;
        case 0x3c1748u: goto label_3c1748;
        case 0x3c174cu: goto label_3c174c;
        case 0x3c1750u: goto label_3c1750;
        case 0x3c1754u: goto label_3c1754;
        case 0x3c1758u: goto label_3c1758;
        case 0x3c175cu: goto label_3c175c;
        case 0x3c1760u: goto label_3c1760;
        case 0x3c1764u: goto label_3c1764;
        case 0x3c1768u: goto label_3c1768;
        case 0x3c176cu: goto label_3c176c;
        case 0x3c1770u: goto label_3c1770;
        case 0x3c1774u: goto label_3c1774;
        case 0x3c1778u: goto label_3c1778;
        case 0x3c177cu: goto label_3c177c;
        case 0x3c1780u: goto label_3c1780;
        case 0x3c1784u: goto label_3c1784;
        case 0x3c1788u: goto label_3c1788;
        case 0x3c178cu: goto label_3c178c;
        case 0x3c1790u: goto label_3c1790;
        case 0x3c1794u: goto label_3c1794;
        case 0x3c1798u: goto label_3c1798;
        case 0x3c179cu: goto label_3c179c;
        case 0x3c17a0u: goto label_3c17a0;
        case 0x3c17a4u: goto label_3c17a4;
        case 0x3c17a8u: goto label_3c17a8;
        case 0x3c17acu: goto label_3c17ac;
        case 0x3c17b0u: goto label_3c17b0;
        case 0x3c17b4u: goto label_3c17b4;
        case 0x3c17b8u: goto label_3c17b8;
        case 0x3c17bcu: goto label_3c17bc;
        case 0x3c17c0u: goto label_3c17c0;
        case 0x3c17c4u: goto label_3c17c4;
        case 0x3c17c8u: goto label_3c17c8;
        case 0x3c17ccu: goto label_3c17cc;
        case 0x3c17d0u: goto label_3c17d0;
        case 0x3c17d4u: goto label_3c17d4;
        case 0x3c17d8u: goto label_3c17d8;
        case 0x3c17dcu: goto label_3c17dc;
        case 0x3c17e0u: goto label_3c17e0;
        case 0x3c17e4u: goto label_3c17e4;
        case 0x3c17e8u: goto label_3c17e8;
        case 0x3c17ecu: goto label_3c17ec;
        case 0x3c17f0u: goto label_3c17f0;
        case 0x3c17f4u: goto label_3c17f4;
        case 0x3c17f8u: goto label_3c17f8;
        case 0x3c17fcu: goto label_3c17fc;
        case 0x3c1800u: goto label_3c1800;
        case 0x3c1804u: goto label_3c1804;
        case 0x3c1808u: goto label_3c1808;
        case 0x3c180cu: goto label_3c180c;
        case 0x3c1810u: goto label_3c1810;
        case 0x3c1814u: goto label_3c1814;
        case 0x3c1818u: goto label_3c1818;
        case 0x3c181cu: goto label_3c181c;
        case 0x3c1820u: goto label_3c1820;
        case 0x3c1824u: goto label_3c1824;
        case 0x3c1828u: goto label_3c1828;
        case 0x3c182cu: goto label_3c182c;
        case 0x3c1830u: goto label_3c1830;
        case 0x3c1834u: goto label_3c1834;
        case 0x3c1838u: goto label_3c1838;
        case 0x3c183cu: goto label_3c183c;
        case 0x3c1840u: goto label_3c1840;
        case 0x3c1844u: goto label_3c1844;
        case 0x3c1848u: goto label_3c1848;
        case 0x3c184cu: goto label_3c184c;
        case 0x3c1850u: goto label_3c1850;
        case 0x3c1854u: goto label_3c1854;
        case 0x3c1858u: goto label_3c1858;
        case 0x3c185cu: goto label_3c185c;
        case 0x3c1860u: goto label_3c1860;
        case 0x3c1864u: goto label_3c1864;
        case 0x3c1868u: goto label_3c1868;
        case 0x3c186cu: goto label_3c186c;
        case 0x3c1870u: goto label_3c1870;
        case 0x3c1874u: goto label_3c1874;
        case 0x3c1878u: goto label_3c1878;
        case 0x3c187cu: goto label_3c187c;
        case 0x3c1880u: goto label_3c1880;
        case 0x3c1884u: goto label_3c1884;
        case 0x3c1888u: goto label_3c1888;
        case 0x3c188cu: goto label_3c188c;
        case 0x3c1890u: goto label_3c1890;
        case 0x3c1894u: goto label_3c1894;
        case 0x3c1898u: goto label_3c1898;
        case 0x3c189cu: goto label_3c189c;
        case 0x3c18a0u: goto label_3c18a0;
        case 0x3c18a4u: goto label_3c18a4;
        case 0x3c18a8u: goto label_3c18a8;
        case 0x3c18acu: goto label_3c18ac;
        case 0x3c18b0u: goto label_3c18b0;
        case 0x3c18b4u: goto label_3c18b4;
        case 0x3c18b8u: goto label_3c18b8;
        case 0x3c18bcu: goto label_3c18bc;
        case 0x3c18c0u: goto label_3c18c0;
        case 0x3c18c4u: goto label_3c18c4;
        case 0x3c18c8u: goto label_3c18c8;
        case 0x3c18ccu: goto label_3c18cc;
        case 0x3c18d0u: goto label_3c18d0;
        case 0x3c18d4u: goto label_3c18d4;
        case 0x3c18d8u: goto label_3c18d8;
        case 0x3c18dcu: goto label_3c18dc;
        case 0x3c18e0u: goto label_3c18e0;
        case 0x3c18e4u: goto label_3c18e4;
        case 0x3c18e8u: goto label_3c18e8;
        case 0x3c18ecu: goto label_3c18ec;
        case 0x3c18f0u: goto label_3c18f0;
        case 0x3c18f4u: goto label_3c18f4;
        case 0x3c18f8u: goto label_3c18f8;
        case 0x3c18fcu: goto label_3c18fc;
        case 0x3c1900u: goto label_3c1900;
        case 0x3c1904u: goto label_3c1904;
        case 0x3c1908u: goto label_3c1908;
        case 0x3c190cu: goto label_3c190c;
        case 0x3c1910u: goto label_3c1910;
        case 0x3c1914u: goto label_3c1914;
        case 0x3c1918u: goto label_3c1918;
        case 0x3c191cu: goto label_3c191c;
        case 0x3c1920u: goto label_3c1920;
        case 0x3c1924u: goto label_3c1924;
        case 0x3c1928u: goto label_3c1928;
        case 0x3c192cu: goto label_3c192c;
        case 0x3c1930u: goto label_3c1930;
        case 0x3c1934u: goto label_3c1934;
        case 0x3c1938u: goto label_3c1938;
        case 0x3c193cu: goto label_3c193c;
        case 0x3c1940u: goto label_3c1940;
        case 0x3c1944u: goto label_3c1944;
        case 0x3c1948u: goto label_3c1948;
        case 0x3c194cu: goto label_3c194c;
        case 0x3c1950u: goto label_3c1950;
        case 0x3c1954u: goto label_3c1954;
        case 0x3c1958u: goto label_3c1958;
        case 0x3c195cu: goto label_3c195c;
        case 0x3c1960u: goto label_3c1960;
        case 0x3c1964u: goto label_3c1964;
        case 0x3c1968u: goto label_3c1968;
        case 0x3c196cu: goto label_3c196c;
        case 0x3c1970u: goto label_3c1970;
        case 0x3c1974u: goto label_3c1974;
        case 0x3c1978u: goto label_3c1978;
        case 0x3c197cu: goto label_3c197c;
        case 0x3c1980u: goto label_3c1980;
        case 0x3c1984u: goto label_3c1984;
        case 0x3c1988u: goto label_3c1988;
        case 0x3c198cu: goto label_3c198c;
        case 0x3c1990u: goto label_3c1990;
        case 0x3c1994u: goto label_3c1994;
        case 0x3c1998u: goto label_3c1998;
        case 0x3c199cu: goto label_3c199c;
        case 0x3c19a0u: goto label_3c19a0;
        case 0x3c19a4u: goto label_3c19a4;
        case 0x3c19a8u: goto label_3c19a8;
        case 0x3c19acu: goto label_3c19ac;
        case 0x3c19b0u: goto label_3c19b0;
        case 0x3c19b4u: goto label_3c19b4;
        case 0x3c19b8u: goto label_3c19b8;
        case 0x3c19bcu: goto label_3c19bc;
        case 0x3c19c0u: goto label_3c19c0;
        case 0x3c19c4u: goto label_3c19c4;
        case 0x3c19c8u: goto label_3c19c8;
        case 0x3c19ccu: goto label_3c19cc;
        case 0x3c19d0u: goto label_3c19d0;
        case 0x3c19d4u: goto label_3c19d4;
        case 0x3c19d8u: goto label_3c19d8;
        case 0x3c19dcu: goto label_3c19dc;
        case 0x3c19e0u: goto label_3c19e0;
        case 0x3c19e4u: goto label_3c19e4;
        case 0x3c19e8u: goto label_3c19e8;
        case 0x3c19ecu: goto label_3c19ec;
        case 0x3c19f0u: goto label_3c19f0;
        case 0x3c19f4u: goto label_3c19f4;
        case 0x3c19f8u: goto label_3c19f8;
        case 0x3c19fcu: goto label_3c19fc;
        case 0x3c1a00u: goto label_3c1a00;
        case 0x3c1a04u: goto label_3c1a04;
        case 0x3c1a08u: goto label_3c1a08;
        case 0x3c1a0cu: goto label_3c1a0c;
        case 0x3c1a10u: goto label_3c1a10;
        case 0x3c1a14u: goto label_3c1a14;
        case 0x3c1a18u: goto label_3c1a18;
        case 0x3c1a1cu: goto label_3c1a1c;
        case 0x3c1a20u: goto label_3c1a20;
        case 0x3c1a24u: goto label_3c1a24;
        case 0x3c1a28u: goto label_3c1a28;
        case 0x3c1a2cu: goto label_3c1a2c;
        case 0x3c1a30u: goto label_3c1a30;
        case 0x3c1a34u: goto label_3c1a34;
        case 0x3c1a38u: goto label_3c1a38;
        case 0x3c1a3cu: goto label_3c1a3c;
        case 0x3c1a40u: goto label_3c1a40;
        case 0x3c1a44u: goto label_3c1a44;
        case 0x3c1a48u: goto label_3c1a48;
        case 0x3c1a4cu: goto label_3c1a4c;
        case 0x3c1a50u: goto label_3c1a50;
        case 0x3c1a54u: goto label_3c1a54;
        case 0x3c1a58u: goto label_3c1a58;
        case 0x3c1a5cu: goto label_3c1a5c;
        case 0x3c1a60u: goto label_3c1a60;
        case 0x3c1a64u: goto label_3c1a64;
        case 0x3c1a68u: goto label_3c1a68;
        case 0x3c1a6cu: goto label_3c1a6c;
        case 0x3c1a70u: goto label_3c1a70;
        case 0x3c1a74u: goto label_3c1a74;
        case 0x3c1a78u: goto label_3c1a78;
        case 0x3c1a7cu: goto label_3c1a7c;
        case 0x3c1a80u: goto label_3c1a80;
        case 0x3c1a84u: goto label_3c1a84;
        case 0x3c1a88u: goto label_3c1a88;
        case 0x3c1a8cu: goto label_3c1a8c;
        case 0x3c1a90u: goto label_3c1a90;
        case 0x3c1a94u: goto label_3c1a94;
        case 0x3c1a98u: goto label_3c1a98;
        case 0x3c1a9cu: goto label_3c1a9c;
        case 0x3c1aa0u: goto label_3c1aa0;
        case 0x3c1aa4u: goto label_3c1aa4;
        case 0x3c1aa8u: goto label_3c1aa8;
        case 0x3c1aacu: goto label_3c1aac;
        case 0x3c1ab0u: goto label_3c1ab0;
        case 0x3c1ab4u: goto label_3c1ab4;
        case 0x3c1ab8u: goto label_3c1ab8;
        case 0x3c1abcu: goto label_3c1abc;
        case 0x3c1ac0u: goto label_3c1ac0;
        case 0x3c1ac4u: goto label_3c1ac4;
        case 0x3c1ac8u: goto label_3c1ac8;
        case 0x3c1accu: goto label_3c1acc;
        case 0x3c1ad0u: goto label_3c1ad0;
        case 0x3c1ad4u: goto label_3c1ad4;
        case 0x3c1ad8u: goto label_3c1ad8;
        case 0x3c1adcu: goto label_3c1adc;
        case 0x3c1ae0u: goto label_3c1ae0;
        case 0x3c1ae4u: goto label_3c1ae4;
        case 0x3c1ae8u: goto label_3c1ae8;
        case 0x3c1aecu: goto label_3c1aec;
        case 0x3c1af0u: goto label_3c1af0;
        case 0x3c1af4u: goto label_3c1af4;
        case 0x3c1af8u: goto label_3c1af8;
        case 0x3c1afcu: goto label_3c1afc;
        case 0x3c1b00u: goto label_3c1b00;
        case 0x3c1b04u: goto label_3c1b04;
        case 0x3c1b08u: goto label_3c1b08;
        case 0x3c1b0cu: goto label_3c1b0c;
        case 0x3c1b10u: goto label_3c1b10;
        case 0x3c1b14u: goto label_3c1b14;
        case 0x3c1b18u: goto label_3c1b18;
        case 0x3c1b1cu: goto label_3c1b1c;
        case 0x3c1b20u: goto label_3c1b20;
        case 0x3c1b24u: goto label_3c1b24;
        case 0x3c1b28u: goto label_3c1b28;
        case 0x3c1b2cu: goto label_3c1b2c;
        case 0x3c1b30u: goto label_3c1b30;
        case 0x3c1b34u: goto label_3c1b34;
        case 0x3c1b38u: goto label_3c1b38;
        case 0x3c1b3cu: goto label_3c1b3c;
        case 0x3c1b40u: goto label_3c1b40;
        case 0x3c1b44u: goto label_3c1b44;
        case 0x3c1b48u: goto label_3c1b48;
        case 0x3c1b4cu: goto label_3c1b4c;
        case 0x3c1b50u: goto label_3c1b50;
        case 0x3c1b54u: goto label_3c1b54;
        case 0x3c1b58u: goto label_3c1b58;
        case 0x3c1b5cu: goto label_3c1b5c;
        case 0x3c1b60u: goto label_3c1b60;
        case 0x3c1b64u: goto label_3c1b64;
        case 0x3c1b68u: goto label_3c1b68;
        case 0x3c1b6cu: goto label_3c1b6c;
        case 0x3c1b70u: goto label_3c1b70;
        case 0x3c1b74u: goto label_3c1b74;
        case 0x3c1b78u: goto label_3c1b78;
        case 0x3c1b7cu: goto label_3c1b7c;
        case 0x3c1b80u: goto label_3c1b80;
        case 0x3c1b84u: goto label_3c1b84;
        case 0x3c1b88u: goto label_3c1b88;
        case 0x3c1b8cu: goto label_3c1b8c;
        case 0x3c1b90u: goto label_3c1b90;
        case 0x3c1b94u: goto label_3c1b94;
        case 0x3c1b98u: goto label_3c1b98;
        case 0x3c1b9cu: goto label_3c1b9c;
        case 0x3c1ba0u: goto label_3c1ba0;
        case 0x3c1ba4u: goto label_3c1ba4;
        case 0x3c1ba8u: goto label_3c1ba8;
        case 0x3c1bacu: goto label_3c1bac;
        case 0x3c1bb0u: goto label_3c1bb0;
        case 0x3c1bb4u: goto label_3c1bb4;
        case 0x3c1bb8u: goto label_3c1bb8;
        case 0x3c1bbcu: goto label_3c1bbc;
        case 0x3c1bc0u: goto label_3c1bc0;
        case 0x3c1bc4u: goto label_3c1bc4;
        case 0x3c1bc8u: goto label_3c1bc8;
        case 0x3c1bccu: goto label_3c1bcc;
        case 0x3c1bd0u: goto label_3c1bd0;
        case 0x3c1bd4u: goto label_3c1bd4;
        case 0x3c1bd8u: goto label_3c1bd8;
        case 0x3c1bdcu: goto label_3c1bdc;
        case 0x3c1be0u: goto label_3c1be0;
        case 0x3c1be4u: goto label_3c1be4;
        case 0x3c1be8u: goto label_3c1be8;
        case 0x3c1becu: goto label_3c1bec;
        case 0x3c1bf0u: goto label_3c1bf0;
        case 0x3c1bf4u: goto label_3c1bf4;
        case 0x3c1bf8u: goto label_3c1bf8;
        case 0x3c1bfcu: goto label_3c1bfc;
        case 0x3c1c00u: goto label_3c1c00;
        case 0x3c1c04u: goto label_3c1c04;
        case 0x3c1c08u: goto label_3c1c08;
        case 0x3c1c0cu: goto label_3c1c0c;
        case 0x3c1c10u: goto label_3c1c10;
        case 0x3c1c14u: goto label_3c1c14;
        case 0x3c1c18u: goto label_3c1c18;
        case 0x3c1c1cu: goto label_3c1c1c;
        case 0x3c1c20u: goto label_3c1c20;
        case 0x3c1c24u: goto label_3c1c24;
        case 0x3c1c28u: goto label_3c1c28;
        case 0x3c1c2cu: goto label_3c1c2c;
        case 0x3c1c30u: goto label_3c1c30;
        case 0x3c1c34u: goto label_3c1c34;
        case 0x3c1c38u: goto label_3c1c38;
        case 0x3c1c3cu: goto label_3c1c3c;
        case 0x3c1c40u: goto label_3c1c40;
        case 0x3c1c44u: goto label_3c1c44;
        case 0x3c1c48u: goto label_3c1c48;
        case 0x3c1c4cu: goto label_3c1c4c;
        case 0x3c1c50u: goto label_3c1c50;
        case 0x3c1c54u: goto label_3c1c54;
        case 0x3c1c58u: goto label_3c1c58;
        case 0x3c1c5cu: goto label_3c1c5c;
        case 0x3c1c60u: goto label_3c1c60;
        case 0x3c1c64u: goto label_3c1c64;
        case 0x3c1c68u: goto label_3c1c68;
        case 0x3c1c6cu: goto label_3c1c6c;
        case 0x3c1c70u: goto label_3c1c70;
        case 0x3c1c74u: goto label_3c1c74;
        case 0x3c1c78u: goto label_3c1c78;
        case 0x3c1c7cu: goto label_3c1c7c;
        case 0x3c1c80u: goto label_3c1c80;
        case 0x3c1c84u: goto label_3c1c84;
        case 0x3c1c88u: goto label_3c1c88;
        case 0x3c1c8cu: goto label_3c1c8c;
        case 0x3c1c90u: goto label_3c1c90;
        case 0x3c1c94u: goto label_3c1c94;
        case 0x3c1c98u: goto label_3c1c98;
        case 0x3c1c9cu: goto label_3c1c9c;
        case 0x3c1ca0u: goto label_3c1ca0;
        case 0x3c1ca4u: goto label_3c1ca4;
        case 0x3c1ca8u: goto label_3c1ca8;
        case 0x3c1cacu: goto label_3c1cac;
        case 0x3c1cb0u: goto label_3c1cb0;
        case 0x3c1cb4u: goto label_3c1cb4;
        case 0x3c1cb8u: goto label_3c1cb8;
        case 0x3c1cbcu: goto label_3c1cbc;
        case 0x3c1cc0u: goto label_3c1cc0;
        case 0x3c1cc4u: goto label_3c1cc4;
        case 0x3c1cc8u: goto label_3c1cc8;
        case 0x3c1cccu: goto label_3c1ccc;
        case 0x3c1cd0u: goto label_3c1cd0;
        case 0x3c1cd4u: goto label_3c1cd4;
        case 0x3c1cd8u: goto label_3c1cd8;
        case 0x3c1cdcu: goto label_3c1cdc;
        case 0x3c1ce0u: goto label_3c1ce0;
        case 0x3c1ce4u: goto label_3c1ce4;
        case 0x3c1ce8u: goto label_3c1ce8;
        case 0x3c1cecu: goto label_3c1cec;
        case 0x3c1cf0u: goto label_3c1cf0;
        case 0x3c1cf4u: goto label_3c1cf4;
        case 0x3c1cf8u: goto label_3c1cf8;
        case 0x3c1cfcu: goto label_3c1cfc;
        case 0x3c1d00u: goto label_3c1d00;
        case 0x3c1d04u: goto label_3c1d04;
        case 0x3c1d08u: goto label_3c1d08;
        case 0x3c1d0cu: goto label_3c1d0c;
        case 0x3c1d10u: goto label_3c1d10;
        case 0x3c1d14u: goto label_3c1d14;
        case 0x3c1d18u: goto label_3c1d18;
        case 0x3c1d1cu: goto label_3c1d1c;
        case 0x3c1d20u: goto label_3c1d20;
        case 0x3c1d24u: goto label_3c1d24;
        case 0x3c1d28u: goto label_3c1d28;
        case 0x3c1d2cu: goto label_3c1d2c;
        case 0x3c1d30u: goto label_3c1d30;
        case 0x3c1d34u: goto label_3c1d34;
        case 0x3c1d38u: goto label_3c1d38;
        case 0x3c1d3cu: goto label_3c1d3c;
        case 0x3c1d40u: goto label_3c1d40;
        case 0x3c1d44u: goto label_3c1d44;
        case 0x3c1d48u: goto label_3c1d48;
        case 0x3c1d4cu: goto label_3c1d4c;
        case 0x3c1d50u: goto label_3c1d50;
        case 0x3c1d54u: goto label_3c1d54;
        case 0x3c1d58u: goto label_3c1d58;
        case 0x3c1d5cu: goto label_3c1d5c;
        case 0x3c1d60u: goto label_3c1d60;
        case 0x3c1d64u: goto label_3c1d64;
        case 0x3c1d68u: goto label_3c1d68;
        case 0x3c1d6cu: goto label_3c1d6c;
        case 0x3c1d70u: goto label_3c1d70;
        case 0x3c1d74u: goto label_3c1d74;
        case 0x3c1d78u: goto label_3c1d78;
        case 0x3c1d7cu: goto label_3c1d7c;
        case 0x3c1d80u: goto label_3c1d80;
        case 0x3c1d84u: goto label_3c1d84;
        case 0x3c1d88u: goto label_3c1d88;
        case 0x3c1d8cu: goto label_3c1d8c;
        case 0x3c1d90u: goto label_3c1d90;
        case 0x3c1d94u: goto label_3c1d94;
        case 0x3c1d98u: goto label_3c1d98;
        case 0x3c1d9cu: goto label_3c1d9c;
        case 0x3c1da0u: goto label_3c1da0;
        case 0x3c1da4u: goto label_3c1da4;
        case 0x3c1da8u: goto label_3c1da8;
        case 0x3c1dacu: goto label_3c1dac;
        case 0x3c1db0u: goto label_3c1db0;
        case 0x3c1db4u: goto label_3c1db4;
        case 0x3c1db8u: goto label_3c1db8;
        case 0x3c1dbcu: goto label_3c1dbc;
        case 0x3c1dc0u: goto label_3c1dc0;
        case 0x3c1dc4u: goto label_3c1dc4;
        case 0x3c1dc8u: goto label_3c1dc8;
        case 0x3c1dccu: goto label_3c1dcc;
        case 0x3c1dd0u: goto label_3c1dd0;
        case 0x3c1dd4u: goto label_3c1dd4;
        case 0x3c1dd8u: goto label_3c1dd8;
        case 0x3c1ddcu: goto label_3c1ddc;
        case 0x3c1de0u: goto label_3c1de0;
        case 0x3c1de4u: goto label_3c1de4;
        case 0x3c1de8u: goto label_3c1de8;
        case 0x3c1decu: goto label_3c1dec;
        case 0x3c1df0u: goto label_3c1df0;
        case 0x3c1df4u: goto label_3c1df4;
        case 0x3c1df8u: goto label_3c1df8;
        case 0x3c1dfcu: goto label_3c1dfc;
        case 0x3c1e00u: goto label_3c1e00;
        case 0x3c1e04u: goto label_3c1e04;
        case 0x3c1e08u: goto label_3c1e08;
        case 0x3c1e0cu: goto label_3c1e0c;
        case 0x3c1e10u: goto label_3c1e10;
        case 0x3c1e14u: goto label_3c1e14;
        case 0x3c1e18u: goto label_3c1e18;
        case 0x3c1e1cu: goto label_3c1e1c;
        case 0x3c1e20u: goto label_3c1e20;
        case 0x3c1e24u: goto label_3c1e24;
        case 0x3c1e28u: goto label_3c1e28;
        case 0x3c1e2cu: goto label_3c1e2c;
        case 0x3c1e30u: goto label_3c1e30;
        case 0x3c1e34u: goto label_3c1e34;
        case 0x3c1e38u: goto label_3c1e38;
        case 0x3c1e3cu: goto label_3c1e3c;
        case 0x3c1e40u: goto label_3c1e40;
        case 0x3c1e44u: goto label_3c1e44;
        case 0x3c1e48u: goto label_3c1e48;
        case 0x3c1e4cu: goto label_3c1e4c;
        case 0x3c1e50u: goto label_3c1e50;
        case 0x3c1e54u: goto label_3c1e54;
        case 0x3c1e58u: goto label_3c1e58;
        case 0x3c1e5cu: goto label_3c1e5c;
        case 0x3c1e60u: goto label_3c1e60;
        case 0x3c1e64u: goto label_3c1e64;
        case 0x3c1e68u: goto label_3c1e68;
        case 0x3c1e6cu: goto label_3c1e6c;
        case 0x3c1e70u: goto label_3c1e70;
        case 0x3c1e74u: goto label_3c1e74;
        case 0x3c1e78u: goto label_3c1e78;
        case 0x3c1e7cu: goto label_3c1e7c;
        case 0x3c1e80u: goto label_3c1e80;
        case 0x3c1e84u: goto label_3c1e84;
        case 0x3c1e88u: goto label_3c1e88;
        case 0x3c1e8cu: goto label_3c1e8c;
        case 0x3c1e90u: goto label_3c1e90;
        case 0x3c1e94u: goto label_3c1e94;
        case 0x3c1e98u: goto label_3c1e98;
        case 0x3c1e9cu: goto label_3c1e9c;
        case 0x3c1ea0u: goto label_3c1ea0;
        case 0x3c1ea4u: goto label_3c1ea4;
        case 0x3c1ea8u: goto label_3c1ea8;
        case 0x3c1eacu: goto label_3c1eac;
        case 0x3c1eb0u: goto label_3c1eb0;
        case 0x3c1eb4u: goto label_3c1eb4;
        case 0x3c1eb8u: goto label_3c1eb8;
        case 0x3c1ebcu: goto label_3c1ebc;
        case 0x3c1ec0u: goto label_3c1ec0;
        case 0x3c1ec4u: goto label_3c1ec4;
        case 0x3c1ec8u: goto label_3c1ec8;
        case 0x3c1eccu: goto label_3c1ecc;
        case 0x3c1ed0u: goto label_3c1ed0;
        case 0x3c1ed4u: goto label_3c1ed4;
        case 0x3c1ed8u: goto label_3c1ed8;
        case 0x3c1edcu: goto label_3c1edc;
        case 0x3c1ee0u: goto label_3c1ee0;
        case 0x3c1ee4u: goto label_3c1ee4;
        case 0x3c1ee8u: goto label_3c1ee8;
        case 0x3c1eecu: goto label_3c1eec;
        case 0x3c1ef0u: goto label_3c1ef0;
        case 0x3c1ef4u: goto label_3c1ef4;
        case 0x3c1ef8u: goto label_3c1ef8;
        case 0x3c1efcu: goto label_3c1efc;
        case 0x3c1f00u: goto label_3c1f00;
        case 0x3c1f04u: goto label_3c1f04;
        case 0x3c1f08u: goto label_3c1f08;
        case 0x3c1f0cu: goto label_3c1f0c;
        case 0x3c1f10u: goto label_3c1f10;
        case 0x3c1f14u: goto label_3c1f14;
        case 0x3c1f18u: goto label_3c1f18;
        case 0x3c1f1cu: goto label_3c1f1c;
        case 0x3c1f20u: goto label_3c1f20;
        case 0x3c1f24u: goto label_3c1f24;
        case 0x3c1f28u: goto label_3c1f28;
        case 0x3c1f2cu: goto label_3c1f2c;
        case 0x3c1f30u: goto label_3c1f30;
        case 0x3c1f34u: goto label_3c1f34;
        case 0x3c1f38u: goto label_3c1f38;
        case 0x3c1f3cu: goto label_3c1f3c;
        case 0x3c1f40u: goto label_3c1f40;
        case 0x3c1f44u: goto label_3c1f44;
        case 0x3c1f48u: goto label_3c1f48;
        case 0x3c1f4cu: goto label_3c1f4c;
        case 0x3c1f50u: goto label_3c1f50;
        case 0x3c1f54u: goto label_3c1f54;
        case 0x3c1f58u: goto label_3c1f58;
        case 0x3c1f5cu: goto label_3c1f5c;
        case 0x3c1f60u: goto label_3c1f60;
        case 0x3c1f64u: goto label_3c1f64;
        case 0x3c1f68u: goto label_3c1f68;
        case 0x3c1f6cu: goto label_3c1f6c;
        case 0x3c1f70u: goto label_3c1f70;
        case 0x3c1f74u: goto label_3c1f74;
        case 0x3c1f78u: goto label_3c1f78;
        case 0x3c1f7cu: goto label_3c1f7c;
        case 0x3c1f80u: goto label_3c1f80;
        case 0x3c1f84u: goto label_3c1f84;
        case 0x3c1f88u: goto label_3c1f88;
        case 0x3c1f8cu: goto label_3c1f8c;
        case 0x3c1f90u: goto label_3c1f90;
        case 0x3c1f94u: goto label_3c1f94;
        case 0x3c1f98u: goto label_3c1f98;
        case 0x3c1f9cu: goto label_3c1f9c;
        case 0x3c1fa0u: goto label_3c1fa0;
        case 0x3c1fa4u: goto label_3c1fa4;
        case 0x3c1fa8u: goto label_3c1fa8;
        case 0x3c1facu: goto label_3c1fac;
        case 0x3c1fb0u: goto label_3c1fb0;
        case 0x3c1fb4u: goto label_3c1fb4;
        case 0x3c1fb8u: goto label_3c1fb8;
        case 0x3c1fbcu: goto label_3c1fbc;
        case 0x3c1fc0u: goto label_3c1fc0;
        case 0x3c1fc4u: goto label_3c1fc4;
        case 0x3c1fc8u: goto label_3c1fc8;
        case 0x3c1fccu: goto label_3c1fcc;
        case 0x3c1fd0u: goto label_3c1fd0;
        case 0x3c1fd4u: goto label_3c1fd4;
        case 0x3c1fd8u: goto label_3c1fd8;
        case 0x3c1fdcu: goto label_3c1fdc;
        case 0x3c1fe0u: goto label_3c1fe0;
        case 0x3c1fe4u: goto label_3c1fe4;
        case 0x3c1fe8u: goto label_3c1fe8;
        case 0x3c1fecu: goto label_3c1fec;
        case 0x3c1ff0u: goto label_3c1ff0;
        case 0x3c1ff4u: goto label_3c1ff4;
        case 0x3c1ff8u: goto label_3c1ff8;
        case 0x3c1ffcu: goto label_3c1ffc;
        case 0x3c2000u: goto label_3c2000;
        case 0x3c2004u: goto label_3c2004;
        case 0x3c2008u: goto label_3c2008;
        case 0x3c200cu: goto label_3c200c;
        case 0x3c2010u: goto label_3c2010;
        case 0x3c2014u: goto label_3c2014;
        case 0x3c2018u: goto label_3c2018;
        case 0x3c201cu: goto label_3c201c;
        case 0x3c2020u: goto label_3c2020;
        case 0x3c2024u: goto label_3c2024;
        case 0x3c2028u: goto label_3c2028;
        case 0x3c202cu: goto label_3c202c;
        case 0x3c2030u: goto label_3c2030;
        case 0x3c2034u: goto label_3c2034;
        case 0x3c2038u: goto label_3c2038;
        case 0x3c203cu: goto label_3c203c;
        case 0x3c2040u: goto label_3c2040;
        case 0x3c2044u: goto label_3c2044;
        case 0x3c2048u: goto label_3c2048;
        case 0x3c204cu: goto label_3c204c;
        case 0x3c2050u: goto label_3c2050;
        case 0x3c2054u: goto label_3c2054;
        case 0x3c2058u: goto label_3c2058;
        case 0x3c205cu: goto label_3c205c;
        case 0x3c2060u: goto label_3c2060;
        case 0x3c2064u: goto label_3c2064;
        case 0x3c2068u: goto label_3c2068;
        case 0x3c206cu: goto label_3c206c;
        case 0x3c2070u: goto label_3c2070;
        case 0x3c2074u: goto label_3c2074;
        case 0x3c2078u: goto label_3c2078;
        case 0x3c207cu: goto label_3c207c;
        case 0x3c2080u: goto label_3c2080;
        case 0x3c2084u: goto label_3c2084;
        case 0x3c2088u: goto label_3c2088;
        case 0x3c208cu: goto label_3c208c;
        case 0x3c2090u: goto label_3c2090;
        case 0x3c2094u: goto label_3c2094;
        case 0x3c2098u: goto label_3c2098;
        case 0x3c209cu: goto label_3c209c;
        case 0x3c20a0u: goto label_3c20a0;
        case 0x3c20a4u: goto label_3c20a4;
        case 0x3c20a8u: goto label_3c20a8;
        case 0x3c20acu: goto label_3c20ac;
        case 0x3c20b0u: goto label_3c20b0;
        case 0x3c20b4u: goto label_3c20b4;
        case 0x3c20b8u: goto label_3c20b8;
        case 0x3c20bcu: goto label_3c20bc;
        case 0x3c20c0u: goto label_3c20c0;
        case 0x3c20c4u: goto label_3c20c4;
        case 0x3c20c8u: goto label_3c20c8;
        case 0x3c20ccu: goto label_3c20cc;
        case 0x3c20d0u: goto label_3c20d0;
        case 0x3c20d4u: goto label_3c20d4;
        case 0x3c20d8u: goto label_3c20d8;
        case 0x3c20dcu: goto label_3c20dc;
        case 0x3c20e0u: goto label_3c20e0;
        case 0x3c20e4u: goto label_3c20e4;
        case 0x3c20e8u: goto label_3c20e8;
        case 0x3c20ecu: goto label_3c20ec;
        case 0x3c20f0u: goto label_3c20f0;
        case 0x3c20f4u: goto label_3c20f4;
        case 0x3c20f8u: goto label_3c20f8;
        case 0x3c20fcu: goto label_3c20fc;
        case 0x3c2100u: goto label_3c2100;
        case 0x3c2104u: goto label_3c2104;
        case 0x3c2108u: goto label_3c2108;
        case 0x3c210cu: goto label_3c210c;
        case 0x3c2110u: goto label_3c2110;
        case 0x3c2114u: goto label_3c2114;
        case 0x3c2118u: goto label_3c2118;
        case 0x3c211cu: goto label_3c211c;
        case 0x3c2120u: goto label_3c2120;
        case 0x3c2124u: goto label_3c2124;
        case 0x3c2128u: goto label_3c2128;
        case 0x3c212cu: goto label_3c212c;
        case 0x3c2130u: goto label_3c2130;
        case 0x3c2134u: goto label_3c2134;
        case 0x3c2138u: goto label_3c2138;
        case 0x3c213cu: goto label_3c213c;
        case 0x3c2140u: goto label_3c2140;
        case 0x3c2144u: goto label_3c2144;
        case 0x3c2148u: goto label_3c2148;
        case 0x3c214cu: goto label_3c214c;
        case 0x3c2150u: goto label_3c2150;
        case 0x3c2154u: goto label_3c2154;
        case 0x3c2158u: goto label_3c2158;
        case 0x3c215cu: goto label_3c215c;
        case 0x3c2160u: goto label_3c2160;
        case 0x3c2164u: goto label_3c2164;
        case 0x3c2168u: goto label_3c2168;
        case 0x3c216cu: goto label_3c216c;
        case 0x3c2170u: goto label_3c2170;
        case 0x3c2174u: goto label_3c2174;
        case 0x3c2178u: goto label_3c2178;
        case 0x3c217cu: goto label_3c217c;
        case 0x3c2180u: goto label_3c2180;
        case 0x3c2184u: goto label_3c2184;
        case 0x3c2188u: goto label_3c2188;
        case 0x3c218cu: goto label_3c218c;
        case 0x3c2190u: goto label_3c2190;
        case 0x3c2194u: goto label_3c2194;
        case 0x3c2198u: goto label_3c2198;
        case 0x3c219cu: goto label_3c219c;
        case 0x3c21a0u: goto label_3c21a0;
        case 0x3c21a4u: goto label_3c21a4;
        case 0x3c21a8u: goto label_3c21a8;
        case 0x3c21acu: goto label_3c21ac;
        case 0x3c21b0u: goto label_3c21b0;
        case 0x3c21b4u: goto label_3c21b4;
        case 0x3c21b8u: goto label_3c21b8;
        case 0x3c21bcu: goto label_3c21bc;
        case 0x3c21c0u: goto label_3c21c0;
        case 0x3c21c4u: goto label_3c21c4;
        case 0x3c21c8u: goto label_3c21c8;
        case 0x3c21ccu: goto label_3c21cc;
        case 0x3c21d0u: goto label_3c21d0;
        case 0x3c21d4u: goto label_3c21d4;
        case 0x3c21d8u: goto label_3c21d8;
        case 0x3c21dcu: goto label_3c21dc;
        case 0x3c21e0u: goto label_3c21e0;
        case 0x3c21e4u: goto label_3c21e4;
        case 0x3c21e8u: goto label_3c21e8;
        case 0x3c21ecu: goto label_3c21ec;
        case 0x3c21f0u: goto label_3c21f0;
        case 0x3c21f4u: goto label_3c21f4;
        case 0x3c21f8u: goto label_3c21f8;
        case 0x3c21fcu: goto label_3c21fc;
        case 0x3c2200u: goto label_3c2200;
        case 0x3c2204u: goto label_3c2204;
        case 0x3c2208u: goto label_3c2208;
        case 0x3c220cu: goto label_3c220c;
        case 0x3c2210u: goto label_3c2210;
        case 0x3c2214u: goto label_3c2214;
        case 0x3c2218u: goto label_3c2218;
        case 0x3c221cu: goto label_3c221c;
        case 0x3c2220u: goto label_3c2220;
        case 0x3c2224u: goto label_3c2224;
        case 0x3c2228u: goto label_3c2228;
        case 0x3c222cu: goto label_3c222c;
        case 0x3c2230u: goto label_3c2230;
        case 0x3c2234u: goto label_3c2234;
        case 0x3c2238u: goto label_3c2238;
        case 0x3c223cu: goto label_3c223c;
        case 0x3c2240u: goto label_3c2240;
        case 0x3c2244u: goto label_3c2244;
        case 0x3c2248u: goto label_3c2248;
        case 0x3c224cu: goto label_3c224c;
        case 0x3c2250u: goto label_3c2250;
        case 0x3c2254u: goto label_3c2254;
        case 0x3c2258u: goto label_3c2258;
        case 0x3c225cu: goto label_3c225c;
        case 0x3c2260u: goto label_3c2260;
        case 0x3c2264u: goto label_3c2264;
        case 0x3c2268u: goto label_3c2268;
        case 0x3c226cu: goto label_3c226c;
        case 0x3c2270u: goto label_3c2270;
        case 0x3c2274u: goto label_3c2274;
        case 0x3c2278u: goto label_3c2278;
        case 0x3c227cu: goto label_3c227c;
        case 0x3c2280u: goto label_3c2280;
        case 0x3c2284u: goto label_3c2284;
        case 0x3c2288u: goto label_3c2288;
        case 0x3c228cu: goto label_3c228c;
        case 0x3c2290u: goto label_3c2290;
        case 0x3c2294u: goto label_3c2294;
        case 0x3c2298u: goto label_3c2298;
        case 0x3c229cu: goto label_3c229c;
        case 0x3c22a0u: goto label_3c22a0;
        case 0x3c22a4u: goto label_3c22a4;
        case 0x3c22a8u: goto label_3c22a8;
        case 0x3c22acu: goto label_3c22ac;
        case 0x3c22b0u: goto label_3c22b0;
        case 0x3c22b4u: goto label_3c22b4;
        case 0x3c22b8u: goto label_3c22b8;
        case 0x3c22bcu: goto label_3c22bc;
        case 0x3c22c0u: goto label_3c22c0;
        case 0x3c22c4u: goto label_3c22c4;
        case 0x3c22c8u: goto label_3c22c8;
        case 0x3c22ccu: goto label_3c22cc;
        case 0x3c22d0u: goto label_3c22d0;
        case 0x3c22d4u: goto label_3c22d4;
        case 0x3c22d8u: goto label_3c22d8;
        case 0x3c22dcu: goto label_3c22dc;
        case 0x3c22e0u: goto label_3c22e0;
        case 0x3c22e4u: goto label_3c22e4;
        case 0x3c22e8u: goto label_3c22e8;
        case 0x3c22ecu: goto label_3c22ec;
        case 0x3c22f0u: goto label_3c22f0;
        case 0x3c22f4u: goto label_3c22f4;
        case 0x3c22f8u: goto label_3c22f8;
        case 0x3c22fcu: goto label_3c22fc;
        case 0x3c2300u: goto label_3c2300;
        case 0x3c2304u: goto label_3c2304;
        case 0x3c2308u: goto label_3c2308;
        case 0x3c230cu: goto label_3c230c;
        case 0x3c2310u: goto label_3c2310;
        case 0x3c2314u: goto label_3c2314;
        case 0x3c2318u: goto label_3c2318;
        case 0x3c231cu: goto label_3c231c;
        case 0x3c2320u: goto label_3c2320;
        case 0x3c2324u: goto label_3c2324;
        case 0x3c2328u: goto label_3c2328;
        case 0x3c232cu: goto label_3c232c;
        case 0x3c2330u: goto label_3c2330;
        case 0x3c2334u: goto label_3c2334;
        case 0x3c2338u: goto label_3c2338;
        case 0x3c233cu: goto label_3c233c;
        case 0x3c2340u: goto label_3c2340;
        case 0x3c2344u: goto label_3c2344;
        case 0x3c2348u: goto label_3c2348;
        case 0x3c234cu: goto label_3c234c;
        case 0x3c2350u: goto label_3c2350;
        case 0x3c2354u: goto label_3c2354;
        case 0x3c2358u: goto label_3c2358;
        case 0x3c235cu: goto label_3c235c;
        case 0x3c2360u: goto label_3c2360;
        case 0x3c2364u: goto label_3c2364;
        case 0x3c2368u: goto label_3c2368;
        case 0x3c236cu: goto label_3c236c;
        case 0x3c2370u: goto label_3c2370;
        case 0x3c2374u: goto label_3c2374;
        case 0x3c2378u: goto label_3c2378;
        case 0x3c237cu: goto label_3c237c;
        case 0x3c2380u: goto label_3c2380;
        case 0x3c2384u: goto label_3c2384;
        case 0x3c2388u: goto label_3c2388;
        case 0x3c238cu: goto label_3c238c;
        default: break;
    }

    ctx->pc = 0x3c0330u;

label_3c0330:
    // 0x3c0330: 0x3e00008  jr          $ra
label_3c0334:
    if (ctx->pc == 0x3C0334u) {
        ctx->pc = 0x3C0334u;
            // 0x3c0334: 0x94820056  lhu         $v0, 0x56($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 86)));
        ctx->pc = 0x3C0338u;
        goto label_3c0338;
    }
    ctx->pc = 0x3C0330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C0334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0330u;
            // 0x3c0334: 0x94820056  lhu         $v0, 0x56($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 86)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C0338u;
label_3c0338:
    // 0x3c0338: 0x0  nop
    ctx->pc = 0x3c0338u;
    // NOP
label_3c033c:
    // 0x3c033c: 0x0  nop
    ctx->pc = 0x3c033cu;
    // NOP
label_3c0340:
    // 0x3c0340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3c0340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3c0344:
    // 0x3c0344: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3c0344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3c0348:
    // 0x3c0348: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3c0348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3c034c:
    // 0x3c034c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3c034cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3c0350:
    // 0x3c0350: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c0350u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c0354:
    // 0x3c0354: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3c0354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c0358:
    // 0x3c0358: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3c0358u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_3c035c:
    // 0x3c035c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3c035cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3c0360:
    // 0x3c0360: 0xc0754b4  jal         func_1D52D0
label_3c0364:
    if (ctx->pc == 0x3C0364u) {
        ctx->pc = 0x3C0364u;
            // 0x3c0364: 0x24440440  addiu       $a0, $v0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1088));
        ctx->pc = 0x3C0368u;
        goto label_3c0368;
    }
    ctx->pc = 0x3C0360u;
    SET_GPR_U32(ctx, 31, 0x3C0368u);
    ctx->pc = 0x3C0364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0360u;
            // 0x3c0364: 0x24440440  addiu       $a0, $v0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0368u; }
        if (ctx->pc != 0x3C0368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0368u; }
        if (ctx->pc != 0x3C0368u) { return; }
    }
    ctx->pc = 0x3C0368u;
label_3c0368:
    // 0x3c0368: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x3c0368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_3c036c:
    // 0x3c036c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x3c036cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_3c0370:
    // 0x3c0370: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3c0374:
    if (ctx->pc == 0x3C0374u) {
        ctx->pc = 0x3C0374u;
            // 0x3c0374: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3C0378u;
        goto label_3c0378;
    }
    ctx->pc = 0x3C0370u;
    {
        const bool branch_taken_0x3c0370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c0370) {
            ctx->pc = 0x3C0374u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0370u;
            // 0x3c0374: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C0384u;
            goto label_3c0384;
        }
    }
    ctx->pc = 0x3C0378u;
label_3c0378:
    // 0x3c0378: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c0378u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c037c:
    // 0x3c037c: 0x10000007  b           . + 4 + (0x7 << 2)
label_3c0380:
    if (ctx->pc == 0x3C0380u) {
        ctx->pc = 0x3C0380u;
            // 0x3c0380: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x3C0384u;
        goto label_3c0384;
    }
    ctx->pc = 0x3C037Cu;
    {
        const bool branch_taken_0x3c037c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C037Cu;
            // 0x3c0380: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c037c) {
            ctx->pc = 0x3C039Cu;
            goto label_3c039c;
        }
    }
    ctx->pc = 0x3C0384u;
label_3c0384:
    // 0x3c0384: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3c0384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3c0388:
    // 0x3c0388: 0xc0754b4  jal         func_1D52D0
label_3c038c:
    if (ctx->pc == 0x3C038Cu) {
        ctx->pc = 0x3C038Cu;
            // 0x3c038c: 0x24440440  addiu       $a0, $v0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1088));
        ctx->pc = 0x3C0390u;
        goto label_3c0390;
    }
    ctx->pc = 0x3C0388u;
    SET_GPR_U32(ctx, 31, 0x3C0390u);
    ctx->pc = 0x3C038Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0388u;
            // 0x3c038c: 0x24440440  addiu       $a0, $v0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0390u; }
        if (ctx->pc != 0x3C0390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0390u; }
        if (ctx->pc != 0x3C0390u) { return; }
    }
    ctx->pc = 0x3C0390u;
label_3c0390:
    // 0x3c0390: 0xc4400048  lwc1        $f0, 0x48($v0)
    ctx->pc = 0x3c0390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c0394:
    // 0x3c0394: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x3c0394u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_3c0398:
    // 0x3c0398: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3c0398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3c039c:
    // 0x3c039c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3c039cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3c03a0:
    // 0x3c03a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3c03a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c03a4:
    // 0x3c03a4: 0x3e00008  jr          $ra
label_3c03a8:
    if (ctx->pc == 0x3C03A8u) {
        ctx->pc = 0x3C03A8u;
            // 0x3c03a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3C03ACu;
        goto label_3c03ac;
    }
    ctx->pc = 0x3C03A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C03A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C03A4u;
            // 0x3c03a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C03ACu;
label_3c03ac:
    // 0x3c03ac: 0x0  nop
    ctx->pc = 0x3c03acu;
    // NOP
label_3c03b0:
    // 0x3c03b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3c03b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3c03b4:
    // 0x3c03b4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c03b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3c03b8:
    // 0x3c03b8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3c03b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3c03bc:
    // 0x3c03bc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3c03bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3c03c0:
    // 0x3c03c0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3c03c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3c03c4:
    // 0x3c03c4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3c03c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3c03c8:
    // 0x3c03c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3c03c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3c03cc:
    // 0x3c03cc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3c03ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3c03d0:
    // 0x3c03d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c03d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c03d4:
    // 0x3c03d4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3c03d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3c03d8:
    // 0x3c03d8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3c03d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c03dc:
    // 0x3c03dc: 0x8c420ea4  lw          $v0, 0xEA4($v0)
    ctx->pc = 0x3c03dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_3c03e0:
    // 0x3c03e0: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x3c03e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3c03e4:
    // 0x3c03e4: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x3c03e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_3c03e8:
    // 0x3c03e8: 0x8c46012c  lw          $a2, 0x12C($v0)
    ctx->pc = 0x3c03e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_3c03ec:
    // 0x3c03ec: 0xc0febd8  jal         func_3FAF60
label_3c03f0:
    if (ctx->pc == 0x3C03F0u) {
        ctx->pc = 0x3C03F0u;
            // 0x3c03f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C03F4u;
        goto label_3c03f4;
    }
    ctx->pc = 0x3C03ECu;
    SET_GPR_U32(ctx, 31, 0x3C03F4u);
    ctx->pc = 0x3C03F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C03ECu;
            // 0x3c03f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FAF60u;
    if (runtime->hasFunction(0x3FAF60u)) {
        auto targetFn = runtime->lookupFunction(0x3FAF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C03F4u; }
        if (ctx->pc != 0x3C03F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FAF60_0x3faf60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C03F4u; }
        if (ctx->pc != 0x3C03F4u) { return; }
    }
    ctx->pc = 0x3C03F4u;
label_3c03f4:
    // 0x3c03f4: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x3c03f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3c03f8:
    // 0x3c03f8: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
label_3c03fc:
    if (ctx->pc == 0x3C03FCu) {
        ctx->pc = 0x3C03FCu;
            // 0x3c03fc: 0x8e240d6c  lw          $a0, 0xD6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
        ctx->pc = 0x3C0400u;
        goto label_3c0400;
    }
    ctx->pc = 0x3C03F8u;
    {
        const bool branch_taken_0x3c03f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c03f8) {
            ctx->pc = 0x3C03FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C03F8u;
            // 0x3c03fc: 0x8e240d6c  lw          $a0, 0xD6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C042Cu;
            goto label_3c042c;
        }
    }
    ctx->pc = 0x3C0400u;
label_3c0400:
    // 0x3c0400: 0x8e190014  lw          $t9, 0x14($s0)
    ctx->pc = 0x3c0400u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3c0404:
    // 0x3c0404: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3c0404u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3c0408:
    // 0x3c0408: 0x320f809  jalr        $t9
label_3c040c:
    if (ctx->pc == 0x3C040Cu) {
        ctx->pc = 0x3C040Cu;
            // 0x3c040c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0410u;
        goto label_3c0410;
    }
    ctx->pc = 0x3C0408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C0410u);
        ctx->pc = 0x3C040Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0408u;
            // 0x3c040c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C0410u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C0410u; }
            if (ctx->pc != 0x3C0410u) { return; }
        }
        }
    }
    ctx->pc = 0x3C0410u;
label_3c0410:
    // 0x3c0410: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3c0410u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c0414:
    // 0x3c0414: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c0414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c0418:
    // 0x3c0418: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x3c0418u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_3c041c:
    // 0x3c041c: 0x320f809  jalr        $t9
label_3c0420:
    if (ctx->pc == 0x3C0420u) {
        ctx->pc = 0x3C0420u;
            // 0x3c0420: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x3C0424u;
        goto label_3c0424;
    }
    ctx->pc = 0x3C041Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C0424u);
        ctx->pc = 0x3C0420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C041Cu;
            // 0x3c0420: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C0424u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C0424u; }
            if (ctx->pc != 0x3C0424u) { return; }
        }
        }
    }
    ctx->pc = 0x3C0424u;
label_3c0424:
    // 0x3c0424: 0x100007d0  b           . + 4 + (0x7D0 << 2)
label_3c0428:
    if (ctx->pc == 0x3C0428u) {
        ctx->pc = 0x3C0428u;
            // 0x3c0428: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x3C042Cu;
        goto label_3c042c;
    }
    ctx->pc = 0x3C0424u;
    {
        const bool branch_taken_0x3c0424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0424u;
            // 0x3c0428: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0424) {
            ctx->pc = 0x3C2368u;
            goto label_3c2368;
        }
    }
    ctx->pc = 0x3C042Cu;
label_3c042c:
    // 0x3c042c: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x3c042cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_3c0430:
    // 0x3c0430: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x3c0430u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3c0434:
    // 0x3c0434: 0x54830017  bnel        $a0, $v1, . + 4 + (0x17 << 2)
label_3c0438:
    if (ctx->pc == 0x3C0438u) {
        ctx->pc = 0x3C0438u;
            // 0x3c0438: 0x8e0301a8  lw          $v1, 0x1A8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
        ctx->pc = 0x3C043Cu;
        goto label_3c043c;
    }
    ctx->pc = 0x3C0434u;
    {
        const bool branch_taken_0x3c0434 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3c0434) {
            ctx->pc = 0x3C0438u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0434u;
            // 0x3c0438: 0x8e0301a8  lw          $v1, 0x1A8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C0494u;
            goto label_3c0494;
        }
    }
    ctx->pc = 0x3C043Cu;
label_3c043c:
    // 0x3c043c: 0x8e2411d4  lw          $a0, 0x11D4($s1)
    ctx->pc = 0x3c043cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4564)));
label_3c0440:
    // 0x3c0440: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3c0440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c0444:
    // 0x3c0444: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
label_3c0448:
    if (ctx->pc == 0x3C0448u) {
        ctx->pc = 0x3C044Cu;
        goto label_3c044c;
    }
    ctx->pc = 0x3C0444u;
    {
        const bool branch_taken_0x3c0444 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3c0444) {
            ctx->pc = 0x3C0490u;
            goto label_3c0490;
        }
    }
    ctx->pc = 0x3C044Cu;
label_3c044c:
    // 0x3c044c: 0xc62111e0  lwc1        $f1, 0x11E0($s1)
    ctx->pc = 0x3c044cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c0450:
    // 0x3c0450: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c0450u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c0454:
    // 0x3c0454: 0x0  nop
    ctx->pc = 0x3c0454u;
    // NOP
label_3c0458:
    // 0x3c0458: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x3c0458u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c045c:
    // 0x3c045c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_3c0460:
    if (ctx->pc == 0x3C0460u) {
        ctx->pc = 0x3C0464u;
        goto label_3c0464;
    }
    ctx->pc = 0x3C045Cu;
    {
        const bool branch_taken_0x3c045c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c045c) {
            ctx->pc = 0x3C0490u;
            goto label_3c0490;
        }
    }
    ctx->pc = 0x3C0464u;
label_3c0464:
    // 0x3c0464: 0x8e190014  lw          $t9, 0x14($s0)
    ctx->pc = 0x3c0464u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3c0468:
    // 0x3c0468: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3c0468u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3c046c:
    // 0x3c046c: 0x320f809  jalr        $t9
label_3c0470:
    if (ctx->pc == 0x3C0470u) {
        ctx->pc = 0x3C0470u;
            // 0x3c0470: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0474u;
        goto label_3c0474;
    }
    ctx->pc = 0x3C046Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C0474u);
        ctx->pc = 0x3C0470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C046Cu;
            // 0x3c0470: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C0474u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C0474u; }
            if (ctx->pc != 0x3C0474u) { return; }
        }
        }
    }
    ctx->pc = 0x3C0474u;
label_3c0474:
    // 0x3c0474: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3c0474u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c0478:
    // 0x3c0478: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c0478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c047c:
    // 0x3c047c: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x3c047cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_3c0480:
    // 0x3c0480: 0x320f809  jalr        $t9
label_3c0484:
    if (ctx->pc == 0x3C0484u) {
        ctx->pc = 0x3C0484u;
            // 0x3c0484: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x3C0488u;
        goto label_3c0488;
    }
    ctx->pc = 0x3C0480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C0488u);
        ctx->pc = 0x3C0484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0480u;
            // 0x3c0484: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C0488u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C0488u; }
            if (ctx->pc != 0x3C0488u) { return; }
        }
        }
    }
    ctx->pc = 0x3C0488u;
label_3c0488:
    // 0x3c0488: 0x100007b6  b           . + 4 + (0x7B6 << 2)
label_3c048c:
    if (ctx->pc == 0x3C048Cu) {
        ctx->pc = 0x3C0490u;
        goto label_3c0490;
    }
    ctx->pc = 0x3C0488u;
    {
        const bool branch_taken_0x3c0488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c0488) {
            ctx->pc = 0x3C2364u;
            goto label_3c2364;
        }
    }
    ctx->pc = 0x3C0490u;
label_3c0490:
    // 0x3c0490: 0x8e0301a8  lw          $v1, 0x1A8($s0)
    ctx->pc = 0x3c0490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
label_3c0494:
    // 0x3c0494: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x3c0494u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_3c0498:
    // 0x3c0498: 0x102007b2  beqz        $at, . + 4 + (0x7B2 << 2)
label_3c049c:
    if (ctx->pc == 0x3C049Cu) {
        ctx->pc = 0x3C04A0u;
        goto label_3c04a0;
    }
    ctx->pc = 0x3C0498u;
    {
        const bool branch_taken_0x3c0498 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c0498) {
            ctx->pc = 0x3C2364u;
            goto label_3c2364;
        }
    }
    ctx->pc = 0x3C04A0u;
label_3c04a0:
    // 0x3c04a0: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3c04a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_3c04a4:
    // 0x3c04a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3c04a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3c04a8:
    // 0x3c04a8: 0x24848410  addiu       $a0, $a0, -0x7BF0
    ctx->pc = 0x3c04a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935568));
label_3c04ac:
    // 0x3c04ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3c04acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3c04b0:
    // 0x3c04b0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3c04b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3c04b4:
    // 0x3c04b4: 0x600008  jr          $v1
label_3c04b8:
    if (ctx->pc == 0x3C04B8u) {
        ctx->pc = 0x3C04BCu;
        goto label_3c04bc;
    }
    ctx->pc = 0x3C04B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3C04BCu: goto label_3c04bc;
            case 0x3C0970u: goto label_3c0970;
            case 0x3C1104u: goto label_3c1104;
            case 0x3C1138u: goto label_3c1138;
            case 0x3C145Cu: goto label_3c145c;
            case 0x3C15B8u: goto label_3c15b8;
            case 0x3C1DA4u: goto label_3c1da4;
            case 0x3C2060u: goto label_3c2060;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3C04BCu;
label_3c04bc:
    // 0x3c04bc: 0xc0efea4  jal         func_3BFA90
label_3c04c0:
    if (ctx->pc == 0x3C04C0u) {
        ctx->pc = 0x3C04C0u;
            // 0x3c04c0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3C04C4u;
        goto label_3c04c4;
    }
    ctx->pc = 0x3C04BCu;
    SET_GPR_U32(ctx, 31, 0x3C04C4u);
    ctx->pc = 0x3C04C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C04BCu;
            // 0x3c04c0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BFA90u;
    if (runtime->hasFunction(0x3BFA90u)) {
        auto targetFn = runtime->lookupFunction(0x3BFA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C04C4u; }
        if (ctx->pc != 0x3C04C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BFA90_0x3bfa90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C04C4u; }
        if (ctx->pc != 0x3C04C4u) { return; }
    }
    ctx->pc = 0x3C04C4u;
label_3c04c4:
    // 0x3c04c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c04c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c04c8:
    // 0x3c04c8: 0xc0770c0  jal         func_1DC300
label_3c04cc:
    if (ctx->pc == 0x3C04CCu) {
        ctx->pc = 0x3C04CCu;
            // 0x3c04cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C04D0u;
        goto label_3c04d0;
    }
    ctx->pc = 0x3C04C8u;
    SET_GPR_U32(ctx, 31, 0x3C04D0u);
    ctx->pc = 0x3C04CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C04C8u;
            // 0x3c04cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC300u;
    if (runtime->hasFunction(0x1DC300u)) {
        auto targetFn = runtime->lookupFunction(0x1DC300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C04D0u; }
        if (ctx->pc != 0x3C04D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC300_0x1dc300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C04D0u; }
        if (ctx->pc != 0x3C04D0u) { return; }
    }
    ctx->pc = 0x3C04D0u;
label_3c04d0:
    // 0x3c04d0: 0xc0efea0  jal         func_3BFA80
label_3c04d4:
    if (ctx->pc == 0x3C04D4u) {
        ctx->pc = 0x3C04D4u;
            // 0x3c04d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C04D8u;
        goto label_3c04d8;
    }
    ctx->pc = 0x3C04D0u;
    SET_GPR_U32(ctx, 31, 0x3C04D8u);
    ctx->pc = 0x3C04D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C04D0u;
            // 0x3c04d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BFA80u;
    if (runtime->hasFunction(0x3BFA80u)) {
        auto targetFn = runtime->lookupFunction(0x3BFA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C04D8u; }
        if (ctx->pc != 0x3C04D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BFA80_0x3bfa80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C04D8u; }
        if (ctx->pc != 0x3C04D8u) { return; }
    }
    ctx->pc = 0x3C04D8u;
label_3c04d8:
    // 0x3c04d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c04d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c04dc:
    // 0x3c04dc: 0x504300e3  beql        $v0, $v1, . + 4 + (0xE3 << 2)
label_3c04e0:
    if (ctx->pc == 0x3C04E0u) {
        ctx->pc = 0x3C04E0u;
            // 0x3c04e0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3C04E4u;
        goto label_3c04e4;
    }
    ctx->pc = 0x3C04DCu;
    {
        const bool branch_taken_0x3c04dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c04dc) {
            ctx->pc = 0x3C04E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C04DCu;
            // 0x3c04e0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C086Cu;
            goto label_3c086c;
        }
    }
    ctx->pc = 0x3C04E4u;
label_3c04e4:
    // 0x3c04e4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_3c04e8:
    if (ctx->pc == 0x3C04E8u) {
        ctx->pc = 0x3C04E8u;
            // 0x3c04e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C04ECu;
        goto label_3c04ec;
    }
    ctx->pc = 0x3C04E4u;
    {
        const bool branch_taken_0x3c04e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c04e4) {
            ctx->pc = 0x3C04E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C04E4u;
            // 0x3c04e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C04F4u;
            goto label_3c04f4;
        }
    }
    ctx->pc = 0x3C04ECu;
label_3c04ec:
    // 0x3c04ec: 0x1000079d  b           . + 4 + (0x79D << 2)
label_3c04f0:
    if (ctx->pc == 0x3C04F0u) {
        ctx->pc = 0x3C04F4u;
        goto label_3c04f4;
    }
    ctx->pc = 0x3C04ECu;
    {
        const bool branch_taken_0x3c04ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c04ec) {
            ctx->pc = 0x3C2364u;
            goto label_3c2364;
        }
    }
    ctx->pc = 0x3C04F4u;
label_3c04f4:
    // 0x3c04f4: 0xc0f0e98  jal         func_3C3A60
label_3c04f8:
    if (ctx->pc == 0x3C04F8u) {
        ctx->pc = 0x3C04FCu;
        goto label_3c04fc;
    }
    ctx->pc = 0x3C04F4u;
    SET_GPR_U32(ctx, 31, 0x3C04FCu);
    ctx->pc = 0x3C3A60u;
    if (runtime->hasFunction(0x3C3A60u)) {
        auto targetFn = runtime->lookupFunction(0x3C3A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C04FCu; }
        if (ctx->pc != 0x3C04FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3A60_0x3c3a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C04FCu; }
        if (ctx->pc != 0x3C04FCu) { return; }
    }
    ctx->pc = 0x3C04FCu;
label_3c04fc:
    // 0x3c04fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c04fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c0500:
    // 0x3c0500: 0xc0f0e94  jal         func_3C3A50
label_3c0504:
    if (ctx->pc == 0x3C0504u) {
        ctx->pc = 0x3C0504u;
            // 0x3c0504: 0xae0001ac  sw          $zero, 0x1AC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 0));
        ctx->pc = 0x3C0508u;
        goto label_3c0508;
    }
    ctx->pc = 0x3C0500u;
    SET_GPR_U32(ctx, 31, 0x3C0508u);
    ctx->pc = 0x3C0504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0500u;
            // 0x3c0504: 0xae0001ac  sw          $zero, 0x1AC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3A50u;
    if (runtime->hasFunction(0x3C3A50u)) {
        auto targetFn = runtime->lookupFunction(0x3C3A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0508u; }
        if (ctx->pc != 0x3C0508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3A50_0x3c3a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0508u; }
        if (ctx->pc != 0x3C0508u) { return; }
    }
    ctx->pc = 0x3C0508u;
label_3c0508:
    // 0x3c0508: 0xc077228  jal         func_1DC8A0
label_3c050c:
    if (ctx->pc == 0x3C050Cu) {
        ctx->pc = 0x3C050Cu;
            // 0x3c050c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0510u;
        goto label_3c0510;
    }
    ctx->pc = 0x3C0508u;
    SET_GPR_U32(ctx, 31, 0x3C0510u);
    ctx->pc = 0x3C050Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0508u;
            // 0x3c050c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC8A0u;
    if (runtime->hasFunction(0x1DC8A0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0510u; }
        if (ctx->pc != 0x3C0510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC8A0_0x1dc8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0510u; }
        if (ctx->pc != 0x3C0510u) { return; }
    }
    ctx->pc = 0x3C0510u;
label_3c0510:
    // 0x3c0510: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_3c0514:
    if (ctx->pc == 0x3C0514u) {
        ctx->pc = 0x3C0514u;
            // 0x3c0514: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0518u;
        goto label_3c0518;
    }
    ctx->pc = 0x3C0510u;
    {
        const bool branch_taken_0x3c0510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c0510) {
            ctx->pc = 0x3C0514u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0510u;
            // 0x3c0514: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C056Cu;
            goto label_3c056c;
        }
    }
    ctx->pc = 0x3C0518u;
label_3c0518:
    // 0x3c0518: 0xc0f0e90  jal         func_3C3A40
label_3c051c:
    if (ctx->pc == 0x3C051Cu) {
        ctx->pc = 0x3C0520u;
        goto label_3c0520;
    }
    ctx->pc = 0x3C0518u;
    SET_GPR_U32(ctx, 31, 0x3C0520u);
    ctx->pc = 0x3C3A40u;
    if (runtime->hasFunction(0x3C3A40u)) {
        auto targetFn = runtime->lookupFunction(0x3C3A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0520u; }
        if (ctx->pc != 0x3C0520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3A40_0x3c3a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0520u; }
        if (ctx->pc != 0x3C0520u) { return; }
    }
    ctx->pc = 0x3C0520u;
label_3c0520:
    // 0x3c0520: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3c0520u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c0524:
    // 0x3c0524: 0xc077320  jal         func_1DCC80
label_3c0528:
    if (ctx->pc == 0x3C0528u) {
        ctx->pc = 0x3C0528u;
            // 0x3c0528: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C052Cu;
        goto label_3c052c;
    }
    ctx->pc = 0x3C0524u;
    SET_GPR_U32(ctx, 31, 0x3C052Cu);
    ctx->pc = 0x3C0528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0524u;
            // 0x3c0528: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC80u;
    if (runtime->hasFunction(0x1DCC80u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C052Cu; }
        if (ctx->pc != 0x3C052Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC80_0x1dcc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C052Cu; }
        if (ctx->pc != 0x3C052Cu) { return; }
    }
    ctx->pc = 0x3C052Cu;
label_3c052c:
    // 0x3c052c: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x3c052cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_3c0530:
    // 0x3c0530: 0xc0f0e8c  jal         func_3C3A30
label_3c0534:
    if (ctx->pc == 0x3C0534u) {
        ctx->pc = 0x3C0534u;
            // 0x3c0534: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0538u;
        goto label_3c0538;
    }
    ctx->pc = 0x3C0530u;
    SET_GPR_U32(ctx, 31, 0x3C0538u);
    ctx->pc = 0x3C0534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0530u;
            // 0x3c0534: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3A30u;
    if (runtime->hasFunction(0x3C3A30u)) {
        auto targetFn = runtime->lookupFunction(0x3C3A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0538u; }
        if (ctx->pc != 0x3C0538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3A30_0x3c3a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0538u; }
        if (ctx->pc != 0x3C0538u) { return; }
    }
    ctx->pc = 0x3C0538u;
label_3c0538:
    // 0x3c0538: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3c0538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3c053c:
    // 0x3c053c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_3c0540:
    if (ctx->pc == 0x3C0540u) {
        ctx->pc = 0x3C0544u;
        goto label_3c0544;
    }
    ctx->pc = 0x3C053Cu;
    {
        const bool branch_taken_0x3c053c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c053c) {
            ctx->pc = 0x3C0568u;
            goto label_3c0568;
        }
    }
    ctx->pc = 0x3C0544u;
label_3c0544:
    // 0x3c0544: 0xc0f0e90  jal         func_3C3A40
label_3c0548:
    if (ctx->pc == 0x3C0548u) {
        ctx->pc = 0x3C054Cu;
        goto label_3c054c;
    }
    ctx->pc = 0x3C0544u;
    SET_GPR_U32(ctx, 31, 0x3C054Cu);
    ctx->pc = 0x3C3A40u;
    if (runtime->hasFunction(0x3C3A40u)) {
        auto targetFn = runtime->lookupFunction(0x3C3A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C054Cu; }
        if (ctx->pc != 0x3C054Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3A40_0x3c3a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C054Cu; }
        if (ctx->pc != 0x3C054Cu) { return; }
    }
    ctx->pc = 0x3C054Cu;
label_3c054c:
    // 0x3c054c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3c054cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c0550:
    // 0x3c0550: 0xc077320  jal         func_1DCC80
label_3c0554:
    if (ctx->pc == 0x3C0554u) {
        ctx->pc = 0x3C0554u;
            // 0x3c0554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0558u;
        goto label_3c0558;
    }
    ctx->pc = 0x3C0550u;
    SET_GPR_U32(ctx, 31, 0x3C0558u);
    ctx->pc = 0x3C0554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0550u;
            // 0x3c0554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC80u;
    if (runtime->hasFunction(0x1DCC80u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0558u; }
        if (ctx->pc != 0x3C0558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC80_0x1dcc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0558u; }
        if (ctx->pc != 0x3C0558u) { return; }
    }
    ctx->pc = 0x3C0558u;
label_3c0558:
    // 0x3c0558: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x3c0558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_3c055c:
    // 0x3c055c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3c055cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c0560:
    // 0x3c0560: 0xc0f0e84  jal         func_3C3A10
label_3c0564:
    if (ctx->pc == 0x3C0564u) {
        ctx->pc = 0x3C0564u;
            // 0x3c0564: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3C0568u;
        goto label_3c0568;
    }
    ctx->pc = 0x3C0560u;
    SET_GPR_U32(ctx, 31, 0x3C0568u);
    ctx->pc = 0x3C0564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0560u;
            // 0x3c0564: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3A10u;
    if (runtime->hasFunction(0x3C3A10u)) {
        auto targetFn = runtime->lookupFunction(0x3C3A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0568u; }
        if (ctx->pc != 0x3C0568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3A10_0x3c3a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0568u; }
        if (ctx->pc != 0x3C0568u) { return; }
    }
    ctx->pc = 0x3C0568u;
label_3c0568:
    // 0x3c0568: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c0568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c056c:
    // 0x3c056c: 0xc0b6cec  jal         func_2DB3B0
label_3c0570:
    if (ctx->pc == 0x3C0570u) {
        ctx->pc = 0x3C0574u;
        goto label_3c0574;
    }
    ctx->pc = 0x3C056Cu;
    SET_GPR_U32(ctx, 31, 0x3C0574u);
    ctx->pc = 0x2DB3B0u;
    if (runtime->hasFunction(0x2DB3B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0574u; }
        if (ctx->pc != 0x3C0574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB3B0_0x2db3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0574u; }
        if (ctx->pc != 0x3C0574u) { return; }
    }
    ctx->pc = 0x3C0574u;
label_3c0574:
    // 0x3c0574: 0xc0b6ce8  jal         func_2DB3A0
label_3c0578:
    if (ctx->pc == 0x3C0578u) {
        ctx->pc = 0x3C0578u;
            // 0x3c0578: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C057Cu;
        goto label_3c057c;
    }
    ctx->pc = 0x3C0574u;
    SET_GPR_U32(ctx, 31, 0x3C057Cu);
    ctx->pc = 0x3C0578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0574u;
            // 0x3c0578: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3A0u;
    if (runtime->hasFunction(0x2DB3A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C057Cu; }
        if (ctx->pc != 0x3C057Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB3A0_0x2db3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C057Cu; }
        if (ctx->pc != 0x3C057Cu) { return; }
    }
    ctx->pc = 0x3C057Cu;
label_3c057c:
    // 0x3c057c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3c057cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c0580:
    // 0x3c0580: 0xc04cce8  jal         func_1333A0
label_3c0584:
    if (ctx->pc == 0x3C0584u) {
        ctx->pc = 0x3C0584u;
            // 0x3c0584: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x3C0588u;
        goto label_3c0588;
    }
    ctx->pc = 0x3C0580u;
    SET_GPR_U32(ctx, 31, 0x3C0588u);
    ctx->pc = 0x3C0584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0580u;
            // 0x3c0584: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0588u; }
        if (ctx->pc != 0x3C0588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0588u; }
        if (ctx->pc != 0x3C0588u) { return; }
    }
    ctx->pc = 0x3C0588u;
label_3c0588:
    // 0x3c0588: 0x3c023d84  lui         $v0, 0x3D84
    ctx->pc = 0x3c0588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15748 << 16));
label_3c058c:
    // 0x3c058c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c058cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c0590:
    // 0x3c0590: 0x3442bda1  ori         $v0, $v0, 0xBDA1
    ctx->pc = 0x3c0590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48545);
label_3c0594:
    // 0x3c0594: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3c0594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c0598:
    // 0x3c0598: 0xc0efe80  jal         func_3BFA00
label_3c059c:
    if (ctx->pc == 0x3C059Cu) {
        ctx->pc = 0x3C059Cu;
            // 0x3c059c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3C05A0u;
        goto label_3c05a0;
    }
    ctx->pc = 0x3C0598u;
    SET_GPR_U32(ctx, 31, 0x3C05A0u);
    ctx->pc = 0x3C059Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0598u;
            // 0x3c059c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BFA00u;
    if (runtime->hasFunction(0x3BFA00u)) {
        auto targetFn = runtime->lookupFunction(0x3BFA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C05A0u; }
        if (ctx->pc != 0x3C05A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BFA00_0x3bfa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C05A0u; }
        if (ctx->pc != 0x3C05A0u) { return; }
    }
    ctx->pc = 0x3C05A0u;
label_3c05a0:
    // 0x3c05a0: 0xc07731c  jal         func_1DCC70
label_3c05a4:
    if (ctx->pc == 0x3C05A4u) {
        ctx->pc = 0x3C05A4u;
            // 0x3c05a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C05A8u;
        goto label_3c05a8;
    }
    ctx->pc = 0x3C05A0u;
    SET_GPR_U32(ctx, 31, 0x3C05A8u);
    ctx->pc = 0x3C05A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C05A0u;
            // 0x3c05a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC70u;
    if (runtime->hasFunction(0x1DCC70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C05A8u; }
        if (ctx->pc != 0x3C05A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC70_0x1dcc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C05A8u; }
        if (ctx->pc != 0x3C05A8u) { return; }
    }
    ctx->pc = 0x3C05A8u;
label_3c05a8:
    // 0x3c05a8: 0x8c590030  lw          $t9, 0x30($v0)
    ctx->pc = 0x3c05a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_3c05ac:
    // 0x3c05ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c05acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c05b0:
    // 0x3c05b0: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3c05b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3c05b4:
    // 0x3c05b4: 0x320f809  jalr        $t9
label_3c05b8:
    if (ctx->pc == 0x3C05B8u) {
        ctx->pc = 0x3C05B8u;
            // 0x3c05b8: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x3C05BCu;
        goto label_3c05bc;
    }
    ctx->pc = 0x3C05B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C05BCu);
        ctx->pc = 0x3C05B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C05B4u;
            // 0x3c05b8: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C05BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C05BCu; }
            if (ctx->pc != 0x3C05BCu) { return; }
        }
        }
    }
    ctx->pc = 0x3C05BCu;
label_3c05bc:
    // 0x3c05bc: 0xc0f0e80  jal         func_3C3A00
label_3c05c0:
    if (ctx->pc == 0x3C05C0u) {
        ctx->pc = 0x3C05C0u;
            // 0x3c05c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C05C4u;
        goto label_3c05c4;
    }
    ctx->pc = 0x3C05BCu;
    SET_GPR_U32(ctx, 31, 0x3C05C4u);
    ctx->pc = 0x3C05C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C05BCu;
            // 0x3c05c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3A00u;
    if (runtime->hasFunction(0x3C3A00u)) {
        auto targetFn = runtime->lookupFunction(0x3C3A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C05C4u; }
        if (ctx->pc != 0x3C05C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3A00_0x3c3a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C05C4u; }
        if (ctx->pc != 0x3C05C4u) { return; }
    }
    ctx->pc = 0x3C05C4u;
label_3c05c4:
    // 0x3c05c4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3c05c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c05c8:
    // 0x3c05c8: 0xc0eeb2c  jal         func_3BACB0
label_3c05cc:
    if (ctx->pc == 0x3C05CCu) {
        ctx->pc = 0x3C05CCu;
            // 0x3c05cc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x3C05D0u;
        goto label_3c05d0;
    }
    ctx->pc = 0x3C05C8u;
    SET_GPR_U32(ctx, 31, 0x3C05D0u);
    ctx->pc = 0x3C05CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C05C8u;
            // 0x3c05cc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BACB0u;
    if (runtime->hasFunction(0x3BACB0u)) {
        auto targetFn = runtime->lookupFunction(0x3BACB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C05D0u; }
        if (ctx->pc != 0x3C05D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BACB0_0x3bacb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C05D0u; }
        if (ctx->pc != 0x3C05D0u) { return; }
    }
    ctx->pc = 0x3C05D0u;
label_3c05d0:
    // 0x3c05d0: 0xc0efdd0  jal         func_3BF740
label_3c05d4:
    if (ctx->pc == 0x3C05D4u) {
        ctx->pc = 0x3C05D4u;
            // 0x3c05d4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3C05D8u;
        goto label_3c05d8;
    }
    ctx->pc = 0x3C05D0u;
    SET_GPR_U32(ctx, 31, 0x3C05D8u);
    ctx->pc = 0x3C05D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C05D0u;
            // 0x3c05d4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF740u;
    if (runtime->hasFunction(0x3BF740u)) {
        auto targetFn = runtime->lookupFunction(0x3BF740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C05D8u; }
        if (ctx->pc != 0x3C05D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF740_0x3bf740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C05D8u; }
        if (ctx->pc != 0x3C05D8u) { return; }
    }
    ctx->pc = 0x3C05D8u;
label_3c05d8:
    // 0x3c05d8: 0xc0efdcc  jal         func_3BF730
label_3c05dc:
    if (ctx->pc == 0x3C05DCu) {
        ctx->pc = 0x3C05DCu;
            // 0x3c05dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C05E0u;
        goto label_3c05e0;
    }
    ctx->pc = 0x3C05D8u;
    SET_GPR_U32(ctx, 31, 0x3C05E0u);
    ctx->pc = 0x3C05DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C05D8u;
            // 0x3c05dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF730u;
    if (runtime->hasFunction(0x3BF730u)) {
        auto targetFn = runtime->lookupFunction(0x3BF730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C05E0u; }
        if (ctx->pc != 0x3C05E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF730_0x3bf730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C05E0u; }
        if (ctx->pc != 0x3C05E0u) { return; }
    }
    ctx->pc = 0x3C05E0u;
label_3c05e0:
    // 0x3c05e0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3c05e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_3c05e4:
    // 0x3c05e4: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_3c05e8:
    if (ctx->pc == 0x3C05E8u) {
        ctx->pc = 0x3C05E8u;
            // 0x3c05e8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3C05ECu;
        goto label_3c05ec;
    }
    ctx->pc = 0x3C05E4u;
    {
        const bool branch_taken_0x3c05e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c05e4) {
            ctx->pc = 0x3C05E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C05E4u;
            // 0x3c05e8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C0620u;
            goto label_3c0620;
        }
    }
    ctx->pc = 0x3C05ECu;
label_3c05ec:
    // 0x3c05ec: 0xc0efd68  jal         func_3BF5A0
label_3c05f0:
    if (ctx->pc == 0x3C05F0u) {
        ctx->pc = 0x3C05F0u;
            // 0x3c05f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C05F4u;
        goto label_3c05f4;
    }
    ctx->pc = 0x3C05ECu;
    SET_GPR_U32(ctx, 31, 0x3C05F4u);
    ctx->pc = 0x3C05F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C05ECu;
            // 0x3c05f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF5A0u;
    if (runtime->hasFunction(0x3BF5A0u)) {
        auto targetFn = runtime->lookupFunction(0x3BF5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C05F4u; }
        if (ctx->pc != 0x3C05F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF5A0_0x3bf5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C05F4u; }
        if (ctx->pc != 0x3C05F4u) { return; }
    }
    ctx->pc = 0x3C05F4u;
label_3c05f4:
    // 0x3c05f4: 0xc60101c4  lwc1        $f1, 0x1C4($s0)
    ctx->pc = 0x3c05f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c05f8:
    // 0x3c05f8: 0x8e190014  lw          $t9, 0x14($s0)
    ctx->pc = 0x3c05f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3c05fc:
    // 0x3c05fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c05fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c0600:
    // 0x3c0600: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x3c0600u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_3c0604:
    // 0x3c0604: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x3c0604u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_3c0608:
    // 0x3c0608: 0x320f809  jalr        $t9
label_3c060c:
    if (ctx->pc == 0x3C060Cu) {
        ctx->pc = 0x3C060Cu;
            // 0x3c060c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3C0610u;
        goto label_3c0610;
    }
    ctx->pc = 0x3C0608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C0610u);
        ctx->pc = 0x3C060Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0608u;
            // 0x3c060c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C0610u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C0610u; }
            if (ctx->pc != 0x3C0610u) { return; }
        }
        }
    }
    ctx->pc = 0x3C0610u;
label_3c0610:
    // 0x3c0610: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3c0610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c0614:
    // 0x3c0614: 0xc077568  jal         func_1DD5A0
label_3c0618:
    if (ctx->pc == 0x3C0618u) {
        ctx->pc = 0x3C0618u;
            // 0x3c0618: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x3C061Cu;
        goto label_3c061c;
    }
    ctx->pc = 0x3C0614u;
    SET_GPR_U32(ctx, 31, 0x3C061Cu);
    ctx->pc = 0x3C0618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0614u;
            // 0x3c0618: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5A0u;
    if (runtime->hasFunction(0x1DD5A0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C061Cu; }
        if (ctx->pc != 0x3C061Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5A0_0x1dd5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C061Cu; }
        if (ctx->pc != 0x3C061Cu) { return; }
    }
    ctx->pc = 0x3C061Cu;
label_3c061c:
    // 0x3c061c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3c061cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c0620:
    // 0x3c0620: 0xc0f0e7c  jal         func_3C39F0
label_3c0624:
    if (ctx->pc == 0x3C0624u) {
        ctx->pc = 0x3C0624u;
            // 0x3c0624: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3C0628u;
        goto label_3c0628;
    }
    ctx->pc = 0x3C0620u;
    SET_GPR_U32(ctx, 31, 0x3C0628u);
    ctx->pc = 0x3C0624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0620u;
            // 0x3c0624: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C39F0u;
    if (runtime->hasFunction(0x3C39F0u)) {
        auto targetFn = runtime->lookupFunction(0x3C39F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0628u; }
        if (ctx->pc != 0x3C0628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C39F0_0x3c39f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0628u; }
        if (ctx->pc != 0x3C0628u) { return; }
    }
    ctx->pc = 0x3C0628u;
label_3c0628:
    // 0x3c0628: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3c0628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c062c:
    // 0x3c062c: 0xc0efc58  jal         func_3BF160
label_3c0630:
    if (ctx->pc == 0x3C0630u) {
        ctx->pc = 0x3C0630u;
            // 0x3c0630: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3C0634u;
        goto label_3c0634;
    }
    ctx->pc = 0x3C062Cu;
    SET_GPR_U32(ctx, 31, 0x3C0634u);
    ctx->pc = 0x3C0630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C062Cu;
            // 0x3c0630: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF160u;
    if (runtime->hasFunction(0x3BF160u)) {
        auto targetFn = runtime->lookupFunction(0x3BF160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0634u; }
        if (ctx->pc != 0x3C0634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF160_0x3bf160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0634u; }
        if (ctx->pc != 0x3C0634u) { return; }
    }
    ctx->pc = 0x3C0634u;
label_3c0634:
    // 0x3c0634: 0xc0783ac  jal         func_1E0EB0
label_3c0638:
    if (ctx->pc == 0x3C0638u) {
        ctx->pc = 0x3C0638u;
            // 0x3c0638: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C063Cu;
        goto label_3c063c;
    }
    ctx->pc = 0x3C0634u;
    SET_GPR_U32(ctx, 31, 0x3C063Cu);
    ctx->pc = 0x3C0638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0634u;
            // 0x3c0638: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0EB0u;
    if (runtime->hasFunction(0x1E0EB0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C063Cu; }
        if (ctx->pc != 0x3C063Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0EB0_0x1e0eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C063Cu; }
        if (ctx->pc != 0x3C063Cu) { return; }
    }
    ctx->pc = 0x3C063Cu;
label_3c063c:
    // 0x3c063c: 0x3c023e6d  lui         $v0, 0x3E6D
    ctx->pc = 0x3c063cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15981 << 16));
label_3c0640:
    // 0x3c0640: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x3c0640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_3c0644:
    // 0x3c0644: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3c0644u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c0648:
    // 0x3c0648: 0x0  nop
    ctx->pc = 0x3c0648u;
    // NOP
label_3c064c:
    // 0x3c064c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c064cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c0650:
    // 0x3c0650: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_3c0654:
    if (ctx->pc == 0x3C0654u) {
        ctx->pc = 0x3C0654u;
            // 0x3c0654: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0658u;
        goto label_3c0658;
    }
    ctx->pc = 0x3C0650u;
    {
        const bool branch_taken_0x3c0650 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c0650) {
            ctx->pc = 0x3C0654u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0650u;
            // 0x3c0654: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C066Cu;
            goto label_3c066c;
        }
    }
    ctx->pc = 0x3C0658u;
label_3c0658:
    // 0x3c0658: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3c0658u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c065c:
    // 0x3c065c: 0xc0efe7c  jal         func_3BF9F0
label_3c0660:
    if (ctx->pc == 0x3C0660u) {
        ctx->pc = 0x3C0660u;
            // 0x3c0660: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0664u;
        goto label_3c0664;
    }
    ctx->pc = 0x3C065Cu;
    SET_GPR_U32(ctx, 31, 0x3C0664u);
    ctx->pc = 0x3C0660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C065Cu;
            // 0x3c0660: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF9F0u;
    if (runtime->hasFunction(0x3BF9F0u)) {
        auto targetFn = runtime->lookupFunction(0x3BF9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0664u; }
        if (ctx->pc != 0x3C0664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF9F0_0x3bf9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0664u; }
        if (ctx->pc != 0x3C0664u) { return; }
    }
    ctx->pc = 0x3C0664u;
label_3c0664:
    // 0x3c0664: 0x10000012  b           . + 4 + (0x12 << 2)
label_3c0668:
    if (ctx->pc == 0x3C0668u) {
        ctx->pc = 0x3C0668u;
            // 0x3c0668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C066Cu;
        goto label_3c066c;
    }
    ctx->pc = 0x3C0664u;
    {
        const bool branch_taken_0x3c0664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0664u;
            // 0x3c0668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0664) {
            ctx->pc = 0x3C06B0u;
            goto label_3c06b0;
        }
    }
    ctx->pc = 0x3C066Cu;
label_3c066c:
    // 0x3c066c: 0xc0783ac  jal         func_1E0EB0
label_3c0670:
    if (ctx->pc == 0x3C0670u) {
        ctx->pc = 0x3C0674u;
        goto label_3c0674;
    }
    ctx->pc = 0x3C066Cu;
    SET_GPR_U32(ctx, 31, 0x3C0674u);
    ctx->pc = 0x1E0EB0u;
    if (runtime->hasFunction(0x1E0EB0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0674u; }
        if (ctx->pc != 0x3C0674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0EB0_0x1e0eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0674u; }
        if (ctx->pc != 0x3C0674u) { return; }
    }
    ctx->pc = 0x3C0674u;
label_3c0674:
    // 0x3c0674: 0x3c033e6d  lui         $v1, 0x3E6D
    ctx->pc = 0x3c0674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15981 << 16));
label_3c0678:
    // 0x3c0678: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c0678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3c067c:
    // 0x3c067c: 0x3463097b  ori         $v1, $v1, 0x97B
    ctx->pc = 0x3c067cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2427);
label_3c0680:
    // 0x3c0680: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c0680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c0684:
    // 0x3c0684: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3c0684u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c0688:
    // 0x3c0688: 0x0  nop
    ctx->pc = 0x3c0688u;
    // NOP
label_3c068c:
    // 0x3c068c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3c068cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_3c0690:
    // 0x3c0690: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x3c0690u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_3c0694:
    // 0x3c0694: 0xc4406598  lwc1        $f0, 0x6598($v0)
    ctx->pc = 0x3c0694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 26008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c0698:
    // 0x3c0698: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x3c0698u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
label_3c069c:
    // 0x3c069c: 0x0  nop
    ctx->pc = 0x3c069cu;
    // NOP
label_3c06a0:
    // 0x3c06a0: 0x0  nop
    ctx->pc = 0x3c06a0u;
    // NOP
label_3c06a4:
    // 0x3c06a4: 0xc0efe7c  jal         func_3BF9F0
label_3c06a8:
    if (ctx->pc == 0x3C06A8u) {
        ctx->pc = 0x3C06ACu;
        goto label_3c06ac;
    }
    ctx->pc = 0x3C06A4u;
    SET_GPR_U32(ctx, 31, 0x3C06ACu);
    ctx->pc = 0x3BF9F0u;
    if (runtime->hasFunction(0x3BF9F0u)) {
        auto targetFn = runtime->lookupFunction(0x3BF9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C06ACu; }
        if (ctx->pc != 0x3C06ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF9F0_0x3bf9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C06ACu; }
        if (ctx->pc != 0x3C06ACu) { return; }
    }
    ctx->pc = 0x3C06ACu;
label_3c06ac:
    // 0x3c06ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c06acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c06b0:
    // 0x3c06b0: 0xc0f0e00  jal         func_3C3800
label_3c06b4:
    if (ctx->pc == 0x3C06B4u) {
        ctx->pc = 0x3C06B8u;
        goto label_3c06b8;
    }
    ctx->pc = 0x3C06B0u;
    SET_GPR_U32(ctx, 31, 0x3C06B8u);
    ctx->pc = 0x3C3800u;
    if (runtime->hasFunction(0x3C3800u)) {
        auto targetFn = runtime->lookupFunction(0x3C3800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C06B8u; }
        if (ctx->pc != 0x3C06B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3800_0x3c3800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C06B8u; }
        if (ctx->pc != 0x3C06B8u) { return; }
    }
    ctx->pc = 0x3C06B8u;
label_3c06b8:
    // 0x3c06b8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3c06b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3c06bc:
    // 0x3c06bc: 0xc04cc44  jal         func_133110
label_3c06c0:
    if (ctx->pc == 0x3C06C0u) {
        ctx->pc = 0x3C06C0u;
            // 0x3c06c0: 0x26050150  addiu       $a1, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->pc = 0x3C06C4u;
        goto label_3c06c4;
    }
    ctx->pc = 0x3C06BCu;
    SET_GPR_U32(ctx, 31, 0x3C06C4u);
    ctx->pc = 0x3C06C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C06BCu;
            // 0x3c06c0: 0x26050150  addiu       $a1, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C06C4u; }
        if (ctx->pc != 0x3C06C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C06C4u; }
        if (ctx->pc != 0x3C06C4u) { return; }
    }
    ctx->pc = 0x3C06C4u;
label_3c06c4:
    // 0x3c06c4: 0xc0b6cec  jal         func_2DB3B0
label_3c06c8:
    if (ctx->pc == 0x3C06C8u) {
        ctx->pc = 0x3C06C8u;
            // 0x3c06c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C06CCu;
        goto label_3c06cc;
    }
    ctx->pc = 0x3C06C4u;
    SET_GPR_U32(ctx, 31, 0x3C06CCu);
    ctx->pc = 0x3C06C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C06C4u;
            // 0x3c06c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3B0u;
    if (runtime->hasFunction(0x2DB3B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C06CCu; }
        if (ctx->pc != 0x3C06CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB3B0_0x2db3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C06CCu; }
        if (ctx->pc != 0x3C06CCu) { return; }
    }
    ctx->pc = 0x3C06CCu;
label_3c06cc:
    // 0x3c06cc: 0xc0c1bec  jal         func_306FB0
label_3c06d0:
    if (ctx->pc == 0x3C06D0u) {
        ctx->pc = 0x3C06D0u;
            // 0x3c06d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C06D4u;
        goto label_3c06d4;
    }
    ctx->pc = 0x3C06CCu;
    SET_GPR_U32(ctx, 31, 0x3C06D4u);
    ctx->pc = 0x3C06D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C06CCu;
            // 0x3c06d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306FB0u;
    if (runtime->hasFunction(0x306FB0u)) {
        auto targetFn = runtime->lookupFunction(0x306FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C06D4u; }
        if (ctx->pc != 0x3C06D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306FB0_0x306fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C06D4u; }
        if (ctx->pc != 0x3C06D4u) { return; }
    }
    ctx->pc = 0x3C06D4u;
label_3c06d4:
    // 0x3c06d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3c06d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c06d8:
    // 0x3c06d8: 0xc04cc08  jal         func_133020
label_3c06dc:
    if (ctx->pc == 0x3C06DCu) {
        ctx->pc = 0x3C06DCu;
            // 0x3c06dc: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3C06E0u;
        goto label_3c06e0;
    }
    ctx->pc = 0x3C06D8u;
    SET_GPR_U32(ctx, 31, 0x3C06E0u);
    ctx->pc = 0x3C06DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C06D8u;
            // 0x3c06dc: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C06E0u; }
        if (ctx->pc != 0x3C06E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C06E0u; }
        if (ctx->pc != 0x3C06E0u) { return; }
    }
    ctx->pc = 0x3C06E0u;
label_3c06e0:
    // 0x3c06e0: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x3c06e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
label_3c06e4:
    // 0x3c06e4: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x3c06e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_3c06e8:
    // 0x3c06e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3c06e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c06ec:
    // 0x3c06ec: 0x0  nop
    ctx->pc = 0x3c06ecu;
    // NOP
label_3c06f0:
    // 0x3c06f0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3c06f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c06f4:
    // 0x3c06f4: 0x4503002c  bc1tl       . + 4 + (0x2C << 2)
label_3c06f8:
    if (ctx->pc == 0x3C06F8u) {
        ctx->pc = 0x3C06F8u;
            // 0x3c06f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C06FCu;
        goto label_3c06fc;
    }
    ctx->pc = 0x3C06F4u;
    {
        const bool branch_taken_0x3c06f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c06f4) {
            ctx->pc = 0x3C06F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C06F4u;
            // 0x3c06f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C07A8u;
            goto label_3c07a8;
        }
    }
    ctx->pc = 0x3C06FCu;
label_3c06fc:
    // 0x3c06fc: 0xc077280  jal         func_1DCA00
label_3c0700:
    if (ctx->pc == 0x3C0700u) {
        ctx->pc = 0x3C0700u;
            // 0x3c0700: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0704u;
        goto label_3c0704;
    }
    ctx->pc = 0x3C06FCu;
    SET_GPR_U32(ctx, 31, 0x3C0704u);
    ctx->pc = 0x3C0700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C06FCu;
            // 0x3c0700: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0704u; }
        if (ctx->pc != 0x3C0704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0704u; }
        if (ctx->pc != 0x3C0704u) { return; }
    }
    ctx->pc = 0x3C0704u;
label_3c0704:
    // 0x3c0704: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3c0704u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c0708:
    // 0x3c0708: 0xc0b6cec  jal         func_2DB3B0
label_3c070c:
    if (ctx->pc == 0x3C070Cu) {
        ctx->pc = 0x3C070Cu;
            // 0x3c070c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0710u;
        goto label_3c0710;
    }
    ctx->pc = 0x3C0708u;
    SET_GPR_U32(ctx, 31, 0x3C0710u);
    ctx->pc = 0x3C070Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0708u;
            // 0x3c070c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3B0u;
    if (runtime->hasFunction(0x2DB3B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0710u; }
        if (ctx->pc != 0x3C0710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB3B0_0x2db3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0710u; }
        if (ctx->pc != 0x3C0710u) { return; }
    }
    ctx->pc = 0x3C0710u;
label_3c0710:
    // 0x3c0710: 0xc0c1bfc  jal         func_306FF0
label_3c0714:
    if (ctx->pc == 0x3C0714u) {
        ctx->pc = 0x3C0714u;
            // 0x3c0714: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0718u;
        goto label_3c0718;
    }
    ctx->pc = 0x3C0710u;
    SET_GPR_U32(ctx, 31, 0x3C0718u);
    ctx->pc = 0x3C0714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0710u;
            // 0x3c0714: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306FF0u;
    if (runtime->hasFunction(0x306FF0u)) {
        auto targetFn = runtime->lookupFunction(0x306FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0718u; }
        if (ctx->pc != 0x3C0718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306FF0_0x306ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0718u; }
        if (ctx->pc != 0x3C0718u) { return; }
    }
    ctx->pc = 0x3C0718u;
label_3c0718:
    // 0x3c0718: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c0718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c071c:
    // 0x3c071c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3c071cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c0720:
    // 0x3c0720: 0xc075378  jal         func_1D4DE0
label_3c0724:
    if (ctx->pc == 0x3C0724u) {
        ctx->pc = 0x3C0724u;
            // 0x3c0724: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3C0728u;
        goto label_3c0728;
    }
    ctx->pc = 0x3C0720u;
    SET_GPR_U32(ctx, 31, 0x3C0728u);
    ctx->pc = 0x3C0724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0720u;
            // 0x3c0724: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0728u; }
        if (ctx->pc != 0x3C0728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0728u; }
        if (ctx->pc != 0x3C0728u) { return; }
    }
    ctx->pc = 0x3C0728u;
label_3c0728:
    // 0x3c0728: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3c0728u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3c072c:
    // 0x3c072c: 0xc0b6cec  jal         func_2DB3B0
label_3c0730:
    if (ctx->pc == 0x3C0730u) {
        ctx->pc = 0x3C0730u;
            // 0x3c0730: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0734u;
        goto label_3c0734;
    }
    ctx->pc = 0x3C072Cu;
    SET_GPR_U32(ctx, 31, 0x3C0734u);
    ctx->pc = 0x3C0730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C072Cu;
            // 0x3c0730: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3B0u;
    if (runtime->hasFunction(0x2DB3B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0734u; }
        if (ctx->pc != 0x3C0734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB3B0_0x2db3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0734u; }
        if (ctx->pc != 0x3C0734u) { return; }
    }
    ctx->pc = 0x3C0734u;
label_3c0734:
    // 0x3c0734: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3c0734u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c0738:
    // 0x3c0738: 0xc0b6cec  jal         func_2DB3B0
label_3c073c:
    if (ctx->pc == 0x3C073Cu) {
        ctx->pc = 0x3C073Cu;
            // 0x3c073c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0740u;
        goto label_3c0740;
    }
    ctx->pc = 0x3C0738u;
    SET_GPR_U32(ctx, 31, 0x3C0740u);
    ctx->pc = 0x3C073Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0738u;
            // 0x3c073c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3B0u;
    if (runtime->hasFunction(0x2DB3B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0740u; }
        if (ctx->pc != 0x3C0740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB3B0_0x2db3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0740u; }
        if (ctx->pc != 0x3C0740u) { return; }
    }
    ctx->pc = 0x3C0740u;
label_3c0740:
    // 0x3c0740: 0xc0f0dfc  jal         func_3C37F0
label_3c0744:
    if (ctx->pc == 0x3C0744u) {
        ctx->pc = 0x3C0744u;
            // 0x3c0744: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0748u;
        goto label_3c0748;
    }
    ctx->pc = 0x3C0740u;
    SET_GPR_U32(ctx, 31, 0x3C0748u);
    ctx->pc = 0x3C0744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0740u;
            // 0x3c0744: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C37F0u;
    if (runtime->hasFunction(0x3C37F0u)) {
        auto targetFn = runtime->lookupFunction(0x3C37F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0748u; }
        if (ctx->pc != 0x3C0748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C37F0_0x3c37f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0748u; }
        if (ctx->pc != 0x3C0748u) { return; }
    }
    ctx->pc = 0x3C0748u;
label_3c0748:
    // 0x3c0748: 0x4600a300  add.s       $f12, $f20, $f0
    ctx->pc = 0x3c0748u;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_3c074c:
    // 0x3c074c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c074cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3c0750:
    // 0x3c0750: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x3c0750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
label_3c0754:
    // 0x3c0754: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c0754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c0758:
    // 0x3c0758: 0xc4406598  lwc1        $f0, 0x6598($v0)
    ctx->pc = 0x3c0758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 26008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c075c:
    // 0x3c075c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3c075cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c0760:
    // 0x3c0760: 0xc0efc40  jal         func_3BF100
label_3c0764:
    if (ctx->pc == 0x3C0764u) {
        ctx->pc = 0x3C0764u;
            // 0x3c0764: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3C0768u;
        goto label_3c0768;
    }
    ctx->pc = 0x3C0760u;
    SET_GPR_U32(ctx, 31, 0x3C0768u);
    ctx->pc = 0x3C0764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0760u;
            // 0x3c0764: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF100u;
    if (runtime->hasFunction(0x3BF100u)) {
        auto targetFn = runtime->lookupFunction(0x3BF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0768u; }
        if (ctx->pc != 0x3C0768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF100_0x3bf100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0768u; }
        if (ctx->pc != 0x3C0768u) { return; }
    }
    ctx->pc = 0x3C0768u;
label_3c0768:
    // 0x3c0768: 0xc0c05dc  jal         func_301770
label_3c076c:
    if (ctx->pc == 0x3C076Cu) {
        ctx->pc = 0x3C076Cu;
            // 0x3c076c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0770u;
        goto label_3c0770;
    }
    ctx->pc = 0x3C0768u;
    SET_GPR_U32(ctx, 31, 0x3C0770u);
    ctx->pc = 0x3C076Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0768u;
            // 0x3c076c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301770u;
    if (runtime->hasFunction(0x301770u)) {
        auto targetFn = runtime->lookupFunction(0x301770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0770u; }
        if (ctx->pc != 0x3C0770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301770_0x301770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0770u; }
        if (ctx->pc != 0x3C0770u) { return; }
    }
    ctx->pc = 0x3C0770u;
label_3c0770:
    // 0x3c0770: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3c0770u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c0774:
    // 0x3c0774: 0xc0b6cec  jal         func_2DB3B0
label_3c0778:
    if (ctx->pc == 0x3C0778u) {
        ctx->pc = 0x3C0778u;
            // 0x3c0778: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C077Cu;
        goto label_3c077c;
    }
    ctx->pc = 0x3C0774u;
    SET_GPR_U32(ctx, 31, 0x3C077Cu);
    ctx->pc = 0x3C0778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0774u;
            // 0x3c0778: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3B0u;
    if (runtime->hasFunction(0x2DB3B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C077Cu; }
        if (ctx->pc != 0x3C077Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB3B0_0x2db3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C077Cu; }
        if (ctx->pc != 0x3C077Cu) { return; }
    }
    ctx->pc = 0x3C077Cu;
label_3c077c:
    // 0x3c077c: 0xc0f0dfc  jal         func_3C37F0
label_3c0780:
    if (ctx->pc == 0x3C0780u) {
        ctx->pc = 0x3C0780u;
            // 0x3c0780: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0784u;
        goto label_3c0784;
    }
    ctx->pc = 0x3C077Cu;
    SET_GPR_U32(ctx, 31, 0x3C0784u);
    ctx->pc = 0x3C0780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C077Cu;
            // 0x3c0780: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C37F0u;
    if (runtime->hasFunction(0x3C37F0u)) {
        auto targetFn = runtime->lookupFunction(0x3C37F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0784u; }
        if (ctx->pc != 0x3C0784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C37F0_0x3c37f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0784u; }
        if (ctx->pc != 0x3C0784u) { return; }
    }
    ctx->pc = 0x3C0784u;
label_3c0784:
    // 0x3c0784: 0x4600a300  add.s       $f12, $f20, $f0
    ctx->pc = 0x3c0784u;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_3c0788:
    // 0x3c0788: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c0788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3c078c:
    // 0x3c078c: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x3c078cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
label_3c0790:
    // 0x3c0790: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c0790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c0794:
    // 0x3c0794: 0xc4406598  lwc1        $f0, 0x6598($v0)
    ctx->pc = 0x3c0794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 26008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c0798:
    // 0x3c0798: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3c0798u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c079c:
    // 0x3c079c: 0xc0efc40  jal         func_3BF100
label_3c07a0:
    if (ctx->pc == 0x3C07A0u) {
        ctx->pc = 0x3C07A0u;
            // 0x3c07a0: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3C07A4u;
        goto label_3c07a4;
    }
    ctx->pc = 0x3C079Cu;
    SET_GPR_U32(ctx, 31, 0x3C07A4u);
    ctx->pc = 0x3C07A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C079Cu;
            // 0x3c07a0: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF100u;
    if (runtime->hasFunction(0x3BF100u)) {
        auto targetFn = runtime->lookupFunction(0x3BF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C07A4u; }
        if (ctx->pc != 0x3C07A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF100_0x3bf100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C07A4u; }
        if (ctx->pc != 0x3C07A4u) { return; }
    }
    ctx->pc = 0x3C07A4u;
label_3c07a4:
    // 0x3c07a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c07a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c07a8:
    // 0x3c07a8: 0xc0772e8  jal         func_1DCBA0
label_3c07ac:
    if (ctx->pc == 0x3C07ACu) {
        ctx->pc = 0x3C07B0u;
        goto label_3c07b0;
    }
    ctx->pc = 0x3C07A8u;
    SET_GPR_U32(ctx, 31, 0x3C07B0u);
    ctx->pc = 0x1DCBA0u;
    if (runtime->hasFunction(0x1DCBA0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C07B0u; }
        if (ctx->pc != 0x3C07B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCBA0_0x1dcba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C07B0u; }
        if (ctx->pc != 0x3C07B0u) { return; }
    }
    ctx->pc = 0x3C07B0u;
label_3c07b0:
    // 0x3c07b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3c07b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c07b4:
    // 0x3c07b4: 0xc0772dc  jal         func_1DCB70
label_3c07b8:
    if (ctx->pc == 0x3C07B8u) {
        ctx->pc = 0x3C07B8u;
            // 0x3c07b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C07BCu;
        goto label_3c07bc;
    }
    ctx->pc = 0x3C07B4u;
    SET_GPR_U32(ctx, 31, 0x3C07BCu);
    ctx->pc = 0x3C07B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C07B4u;
            // 0x3c07b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCB70u;
    if (runtime->hasFunction(0x1DCB70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C07BCu; }
        if (ctx->pc != 0x3C07BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCB70_0x1dcb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C07BCu; }
        if (ctx->pc != 0x3C07BCu) { return; }
    }
    ctx->pc = 0x3C07BCu;
label_3c07bc:
    // 0x3c07bc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3c07bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3c07c0:
    // 0x3c07c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c07c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c07c4:
    // 0x3c07c4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3c07c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c07c8:
    // 0x3c07c8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x3c07c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3c07cc:
    // 0x3c07cc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3c07ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c07d0:
    // 0x3c07d0: 0xc0772d4  jal         func_1DCB50
label_3c07d4:
    if (ctx->pc == 0x3C07D4u) {
        ctx->pc = 0x3C07D4u;
            // 0x3c07d4: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x3C07D8u;
        goto label_3c07d8;
    }
    ctx->pc = 0x3C07D0u;
    SET_GPR_U32(ctx, 31, 0x3C07D8u);
    ctx->pc = 0x3C07D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C07D0u;
            // 0x3c07d4: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCB50u;
    if (runtime->hasFunction(0x1DCB50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C07D8u; }
        if (ctx->pc != 0x3C07D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCB50_0x1dcb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C07D8u; }
        if (ctx->pc != 0x3C07D8u) { return; }
    }
    ctx->pc = 0x3C07D8u;
label_3c07d8:
    // 0x3c07d8: 0x8e590058  lw          $t9, 0x58($s2)
    ctx->pc = 0x3c07d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_3c07dc:
    // 0x3c07dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c07dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c07e0:
    // 0x3c07e0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3c07e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3c07e4:
    // 0x3c07e4: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3c07e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3c07e8:
    // 0x3c07e8: 0x320f809  jalr        $t9
label_3c07ec:
    if (ctx->pc == 0x3C07ECu) {
        ctx->pc = 0x3C07ECu;
            // 0x3c07ec: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3C07F0u;
        goto label_3c07f0;
    }
    ctx->pc = 0x3C07E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C07F0u);
        ctx->pc = 0x3C07ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C07E8u;
            // 0x3c07ec: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C07F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C07F0u; }
            if (ctx->pc != 0x3C07F0u) { return; }
        }
        }
    }
    ctx->pc = 0x3C07F0u;
label_3c07f0:
    // 0x3c07f0: 0xc077330  jal         func_1DCCC0
label_3c07f4:
    if (ctx->pc == 0x3C07F4u) {
        ctx->pc = 0x3C07F4u;
            // 0x3c07f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C07F8u;
        goto label_3c07f8;
    }
    ctx->pc = 0x3C07F0u;
    SET_GPR_U32(ctx, 31, 0x3C07F8u);
    ctx->pc = 0x3C07F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C07F0u;
            // 0x3c07f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCCC0u;
    if (runtime->hasFunction(0x1DCCC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C07F8u; }
        if (ctx->pc != 0x3C07F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCCC0_0x1dccc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C07F8u; }
        if (ctx->pc != 0x3C07F8u) { return; }
    }
    ctx->pc = 0x3C07F8u;
label_3c07f8:
    // 0x3c07f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3c07fc:
    if (ctx->pc == 0x3C07FCu) {
        ctx->pc = 0x3C0800u;
        goto label_3c0800;
    }
    ctx->pc = 0x3C07F8u;
    {
        const bool branch_taken_0x3c07f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c07f8) {
            ctx->pc = 0x3C0810u;
            goto label_3c0810;
        }
    }
    ctx->pc = 0x3C0800u;
label_3c0800:
    // 0x3c0800: 0xc07732c  jal         func_1DCCB0
label_3c0804:
    if (ctx->pc == 0x3C0804u) {
        ctx->pc = 0x3C0804u;
            // 0x3c0804: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0808u;
        goto label_3c0808;
    }
    ctx->pc = 0x3C0800u;
    SET_GPR_U32(ctx, 31, 0x3C0808u);
    ctx->pc = 0x3C0804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0800u;
            // 0x3c0804: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCCB0u;
    if (runtime->hasFunction(0x1DCCB0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0808u; }
        if (ctx->pc != 0x3C0808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCCB0_0x1dccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0808u; }
        if (ctx->pc != 0x3C0808u) { return; }
    }
    ctx->pc = 0x3C0808u;
label_3c0808:
    // 0x3c0808: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_3c080c:
    if (ctx->pc == 0x3C080Cu) {
        ctx->pc = 0x3C080Cu;
            // 0x3c080c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0810u;
        goto label_3c0810;
    }
    ctx->pc = 0x3C0808u;
    {
        const bool branch_taken_0x3c0808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c0808) {
            ctx->pc = 0x3C080Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0808u;
            // 0x3c080c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C0838u;
            goto label_3c0838;
        }
    }
    ctx->pc = 0x3C0810u;
label_3c0810:
    // 0x3c0810: 0xc0c05c4  jal         func_301710
label_3c0814:
    if (ctx->pc == 0x3C0814u) {
        ctx->pc = 0x3C0818u;
        goto label_3c0818;
    }
    ctx->pc = 0x3C0810u;
    SET_GPR_U32(ctx, 31, 0x3C0818u);
    ctx->pc = 0x301710u;
    if (runtime->hasFunction(0x301710u)) {
        auto targetFn = runtime->lookupFunction(0x301710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0818u; }
        if (ctx->pc != 0x3C0818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301710_0x301710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0818u; }
        if (ctx->pc != 0x3C0818u) { return; }
    }
    ctx->pc = 0x3C0818u;
label_3c0818:
    // 0x3c0818: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3c0818u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c081c:
    // 0x3c081c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c081cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c0820:
    // 0x3c0820: 0xc0770e0  jal         func_1DC380
label_3c0824:
    if (ctx->pc == 0x3C0824u) {
        ctx->pc = 0x3C0824u;
            // 0x3c0824: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x3C0828u;
        goto label_3c0828;
    }
    ctx->pc = 0x3C0820u;
    SET_GPR_U32(ctx, 31, 0x3C0828u);
    ctx->pc = 0x3C0824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0820u;
            // 0x3c0824: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC380u;
    if (runtime->hasFunction(0x1DC380u)) {
        auto targetFn = runtime->lookupFunction(0x1DC380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0828u; }
        if (ctx->pc != 0x3C0828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC380_0x1dc380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0828u; }
        if (ctx->pc != 0x3C0828u) { return; }
    }
    ctx->pc = 0x3C0828u;
label_3c0828:
    // 0x3c0828: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x3c0828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_3c082c:
    // 0x3c082c: 0xc0de630  jal         func_3798C0
label_3c0830:
    if (ctx->pc == 0x3C0830u) {
        ctx->pc = 0x3C0830u;
            // 0x3c0830: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0834u;
        goto label_3c0834;
    }
    ctx->pc = 0x3C082Cu;
    SET_GPR_U32(ctx, 31, 0x3C0834u);
    ctx->pc = 0x3C0830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C082Cu;
            // 0x3c0830: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3798C0u;
    if (runtime->hasFunction(0x3798C0u)) {
        auto targetFn = runtime->lookupFunction(0x3798C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0834u; }
        if (ctx->pc != 0x3C0834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003798C0_0x3798c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0834u; }
        if (ctx->pc != 0x3C0834u) { return; }
    }
    ctx->pc = 0x3C0834u;
label_3c0834:
    // 0x3c0834: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c0834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c0838:
    // 0x3c0838: 0xc0f0df8  jal         func_3C37E0
label_3c083c:
    if (ctx->pc == 0x3C083Cu) {
        ctx->pc = 0x3C0840u;
        goto label_3c0840;
    }
    ctx->pc = 0x3C0838u;
    SET_GPR_U32(ctx, 31, 0x3C0840u);
    ctx->pc = 0x3C37E0u;
    if (runtime->hasFunction(0x3C37E0u)) {
        auto targetFn = runtime->lookupFunction(0x3C37E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0840u; }
        if (ctx->pc != 0x3C0840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C37E0_0x3c37e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0840u; }
        if (ctx->pc != 0x3C0840u) { return; }
    }
    ctx->pc = 0x3C0840u;
label_3c0840:
    // 0x3c0840: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c0840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c0844:
    // 0x3c0844: 0xc12ca3c  jal         func_4B28F0
label_3c0848:
    if (ctx->pc == 0x3C0848u) {
        ctx->pc = 0x3C0848u;
            // 0x3c0848: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x3C084Cu;
        goto label_3c084c;
    }
    ctx->pc = 0x3C0844u;
    SET_GPR_U32(ctx, 31, 0x3C084Cu);
    ctx->pc = 0x3C0848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0844u;
            // 0x3c0848: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B28F0u;
    if (runtime->hasFunction(0x4B28F0u)) {
        auto targetFn = runtime->lookupFunction(0x4B28F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C084Cu; }
        if (ctx->pc != 0x3C084Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B28F0_0x4b28f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C084Cu; }
        if (ctx->pc != 0x3C084Cu) { return; }
    }
    ctx->pc = 0x3C084Cu;
label_3c084c:
    // 0x3c084c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c084cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3c0850:
    // 0x3c0850: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c0850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c0854:
    // 0x3c0854: 0xc4406598  lwc1        $f0, 0x6598($v0)
    ctx->pc = 0x3c0854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 26008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c0858:
    // 0x3c0858: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3c0858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c085c:
    // 0x3c085c: 0xc0efdd8  jal         func_3BF760
label_3c0860:
    if (ctx->pc == 0x3C0860u) {
        ctx->pc = 0x3C0860u;
            // 0x3c0860: 0xe60001b0  swc1        $f0, 0x1B0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
        ctx->pc = 0x3C0864u;
        goto label_3c0864;
    }
    ctx->pc = 0x3C085Cu;
    SET_GPR_U32(ctx, 31, 0x3C0864u);
    ctx->pc = 0x3C0860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C085Cu;
            // 0x3c0860: 0xe60001b0  swc1        $f0, 0x1B0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF760u;
    if (runtime->hasFunction(0x3BF760u)) {
        auto targetFn = runtime->lookupFunction(0x3BF760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0864u; }
        if (ctx->pc != 0x3C0864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF760_0x3bf760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0864u; }
        if (ctx->pc != 0x3C0864u) { return; }
    }
    ctx->pc = 0x3C0864u;
label_3c0864:
    // 0x3c0864: 0x100006bf  b           . + 4 + (0x6BF << 2)
label_3c0868:
    if (ctx->pc == 0x3C0868u) {
        ctx->pc = 0x3C086Cu;
        goto label_3c086c;
    }
    ctx->pc = 0x3C0864u;
    {
        const bool branch_taken_0x3c0864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c0864) {
            ctx->pc = 0x3C2364u;
            goto label_3c2364;
        }
    }
    ctx->pc = 0x3C086Cu;
label_3c086c:
    // 0x3c086c: 0xc0eea50  jal         func_3BA940
label_3c0870:
    if (ctx->pc == 0x3C0870u) {
        ctx->pc = 0x3C0874u;
        goto label_3c0874;
    }
    ctx->pc = 0x3C086Cu;
    SET_GPR_U32(ctx, 31, 0x3C0874u);
    ctx->pc = 0x3BA940u;
    if (runtime->hasFunction(0x3BA940u)) {
        auto targetFn = runtime->lookupFunction(0x3BA940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0874u; }
        if (ctx->pc != 0x3C0874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BA940_0x3ba940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0874u; }
        if (ctx->pc != 0x3C0874u) { return; }
    }
    ctx->pc = 0x3C0874u;
label_3c0874:
    // 0x3c0874: 0xc0f0e00  jal         func_3C3800
label_3c0878:
    if (ctx->pc == 0x3C0878u) {
        ctx->pc = 0x3C0878u;
            // 0x3c0878: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C087Cu;
        goto label_3c087c;
    }
    ctx->pc = 0x3C0874u;
    SET_GPR_U32(ctx, 31, 0x3C087Cu);
    ctx->pc = 0x3C0878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0874u;
            // 0x3c0878: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3800u;
    if (runtime->hasFunction(0x3C3800u)) {
        auto targetFn = runtime->lookupFunction(0x3C3800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C087Cu; }
        if (ctx->pc != 0x3C087Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3800_0x3c3800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C087Cu; }
        if (ctx->pc != 0x3C087Cu) { return; }
    }
    ctx->pc = 0x3C087Cu;
label_3c087c:
    // 0x3c087c: 0xc0f00c8  jal         func_3C0320
label_3c0880:
    if (ctx->pc == 0x3C0880u) {
        ctx->pc = 0x3C0880u;
            // 0x3c0880: 0x260400d0  addiu       $a0, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->pc = 0x3C0884u;
        goto label_3c0884;
    }
    ctx->pc = 0x3C087Cu;
    SET_GPR_U32(ctx, 31, 0x3C0884u);
    ctx->pc = 0x3C0880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C087Cu;
            // 0x3c0880: 0x260400d0  addiu       $a0, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C0320u;
    if (runtime->hasFunction(0x3C0320u)) {
        auto targetFn = runtime->lookupFunction(0x3C0320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0884u; }
        if (ctx->pc != 0x3C0884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C0320_0x3c0320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0884u; }
        if (ctx->pc != 0x3C0884u) { return; }
    }
    ctx->pc = 0x3C0884u;
label_3c0884:
    // 0x3c0884: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_3c0888:
    if (ctx->pc == 0x3C0888u) {
        ctx->pc = 0x3C088Cu;
        goto label_3c088c;
    }
    ctx->pc = 0x3C0884u;
    {
        const bool branch_taken_0x3c0884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c0884) {
            ctx->pc = 0x3C08B4u;
            goto label_3c08b4;
        }
    }
    ctx->pc = 0x3C088Cu;
label_3c088c:
    // 0x3c088c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3c088cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c0890:
    // 0x3c0890: 0xc0efe7c  jal         func_3BF9F0
label_3c0894:
    if (ctx->pc == 0x3C0894u) {
        ctx->pc = 0x3C0894u;
            // 0x3c0894: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0898u;
        goto label_3c0898;
    }
    ctx->pc = 0x3C0890u;
    SET_GPR_U32(ctx, 31, 0x3C0898u);
    ctx->pc = 0x3C0894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0890u;
            // 0x3c0894: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF9F0u;
    if (runtime->hasFunction(0x3BF9F0u)) {
        auto targetFn = runtime->lookupFunction(0x3BF9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0898u; }
        if (ctx->pc != 0x3C0898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF9F0_0x3bf9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0898u; }
        if (ctx->pc != 0x3C0898u) { return; }
    }
    ctx->pc = 0x3C0898u;
label_3c0898:
    // 0x3c0898: 0x3c023d3d  lui         $v0, 0x3D3D
    ctx->pc = 0x3c0898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15677 << 16));
label_3c089c:
    // 0x3c089c: 0x3442a12f  ori         $v0, $v0, 0xA12F
    ctx->pc = 0x3c089cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41263);
label_3c08a0:
    // 0x3c08a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3c08a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c08a4:
    // 0x3c08a4: 0xc0c1a0c  jal         func_306830
label_3c08a8:
    if (ctx->pc == 0x3C08A8u) {
        ctx->pc = 0x3C08A8u;
            // 0x3c08a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C08ACu;
        goto label_3c08ac;
    }
    ctx->pc = 0x3C08A4u;
    SET_GPR_U32(ctx, 31, 0x3C08ACu);
    ctx->pc = 0x3C08A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C08A4u;
            // 0x3c08a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306830u;
    if (runtime->hasFunction(0x306830u)) {
        auto targetFn = runtime->lookupFunction(0x306830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C08ACu; }
        if (ctx->pc != 0x3C08ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306830_0x306830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C08ACu; }
        if (ctx->pc != 0x3C08ACu) { return; }
    }
    ctx->pc = 0x3C08ACu;
label_3c08ac:
    // 0x3c08ac: 0xc0f0d6c  jal         func_3C35B0
label_3c08b0:
    if (ctx->pc == 0x3C08B0u) {
        ctx->pc = 0x3C08B0u;
            // 0x3c08b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C08B4u;
        goto label_3c08b4;
    }
    ctx->pc = 0x3C08ACu;
    SET_GPR_U32(ctx, 31, 0x3C08B4u);
    ctx->pc = 0x3C08B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C08ACu;
            // 0x3c08b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C35B0u;
    if (runtime->hasFunction(0x3C35B0u)) {
        auto targetFn = runtime->lookupFunction(0x3C35B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C08B4u; }
        if (ctx->pc != 0x3C08B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C35B0_0x3c35b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C08B4u; }
        if (ctx->pc != 0x3C08B4u) { return; }
    }
    ctx->pc = 0x3C08B4u;
label_3c08b4:
    // 0x3c08b4: 0xc0775b8  jal         func_1DD6E0
label_3c08b8:
    if (ctx->pc == 0x3C08B8u) {
        ctx->pc = 0x3C08BCu;
        goto label_3c08bc;
    }
    ctx->pc = 0x3C08B4u;
    SET_GPR_U32(ctx, 31, 0x3C08BCu);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C08BCu; }
        if (ctx->pc != 0x3C08BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C08BCu; }
        if (ctx->pc != 0x3C08BCu) { return; }
    }
    ctx->pc = 0x3C08BCu;
label_3c08bc:
    // 0x3c08bc: 0xc0775b4  jal         func_1DD6D0
label_3c08c0:
    if (ctx->pc == 0x3C08C0u) {
        ctx->pc = 0x3C08C0u;
            // 0x3c08c0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3C08C4u;
        goto label_3c08c4;
    }
    ctx->pc = 0x3C08BCu;
    SET_GPR_U32(ctx, 31, 0x3C08C4u);
    ctx->pc = 0x3C08C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C08BCu;
            // 0x3c08c0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C08C4u; }
        if (ctx->pc != 0x3C08C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C08C4u; }
        if (ctx->pc != 0x3C08C4u) { return; }
    }
    ctx->pc = 0x3C08C4u;
label_3c08c4:
    // 0x3c08c4: 0xc60201b0  lwc1        $f2, 0x1B0($s0)
    ctx->pc = 0x3c08c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c08c8:
    // 0x3c08c8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3c08c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c08cc:
    // 0x3c08cc: 0x0  nop
    ctx->pc = 0x3c08ccu;
    // NOP
label_3c08d0:
    // 0x3c08d0: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x3c08d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_3c08d4:
    // 0x3c08d4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3c08d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c08d8:
    // 0x3c08d8: 0x450006a2  bc1f        . + 4 + (0x6A2 << 2)
label_3c08dc:
    if (ctx->pc == 0x3C08DCu) {
        ctx->pc = 0x3C08DCu;
            // 0x3c08dc: 0xe60001b0  swc1        $f0, 0x1B0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
        ctx->pc = 0x3C08E0u;
        goto label_3c08e0;
    }
    ctx->pc = 0x3C08D8u;
    {
        const bool branch_taken_0x3c08d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C08DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C08D8u;
            // 0x3c08dc: 0xe60001b0  swc1        $f0, 0x1B0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c08d8) {
            ctx->pc = 0x3C2364u;
            goto label_3c2364;
        }
    }
    ctx->pc = 0x3C08E0u;
label_3c08e0:
    // 0x3c08e0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3c08e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c08e4:
    // 0x3c08e4: 0xc0efc58  jal         func_3BF160
label_3c08e8:
    if (ctx->pc == 0x3C08E8u) {
        ctx->pc = 0x3C08E8u;
            // 0x3c08e8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3C08ECu;
        goto label_3c08ec;
    }
    ctx->pc = 0x3C08E4u;
    SET_GPR_U32(ctx, 31, 0x3C08ECu);
    ctx->pc = 0x3C08E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C08E4u;
            // 0x3c08e8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF160u;
    if (runtime->hasFunction(0x3BF160u)) {
        auto targetFn = runtime->lookupFunction(0x3BF160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C08ECu; }
        if (ctx->pc != 0x3C08ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF160_0x3bf160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C08ECu; }
        if (ctx->pc != 0x3C08ECu) { return; }
    }
    ctx->pc = 0x3C08ECu;
label_3c08ec:
    // 0x3c08ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c08ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c08f0:
    // 0x3c08f0: 0xc0f0f84  jal         func_3C3E10
label_3c08f4:
    if (ctx->pc == 0x3C08F4u) {
        ctx->pc = 0x3C08F4u;
            // 0x3c08f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3C08F8u;
        goto label_3c08f8;
    }
    ctx->pc = 0x3C08F0u;
    SET_GPR_U32(ctx, 31, 0x3C08F8u);
    ctx->pc = 0x3C08F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C08F0u;
            // 0x3c08f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3E10u;
    if (runtime->hasFunction(0x3C3E10u)) {
        auto targetFn = runtime->lookupFunction(0x3C3E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C08F8u; }
        if (ctx->pc != 0x3C08F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3E10_0x3c3e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C08F8u; }
        if (ctx->pc != 0x3C08F8u) { return; }
    }
    ctx->pc = 0x3C08F8u;
label_3c08f8:
    // 0x3c08f8: 0x3c023e6d  lui         $v0, 0x3E6D
    ctx->pc = 0x3c08f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15981 << 16));
label_3c08fc:
    // 0x3c08fc: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x3c08fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_3c0900:
    // 0x3c0900: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3c0900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c0904:
    // 0x3c0904: 0xc0c1a0c  jal         func_306830
label_3c0908:
    if (ctx->pc == 0x3C0908u) {
        ctx->pc = 0x3C0908u;
            // 0x3c0908: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C090Cu;
        goto label_3c090c;
    }
    ctx->pc = 0x3C0904u;
    SET_GPR_U32(ctx, 31, 0x3C090Cu);
    ctx->pc = 0x3C0908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0904u;
            // 0x3c0908: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306830u;
    if (runtime->hasFunction(0x306830u)) {
        auto targetFn = runtime->lookupFunction(0x306830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C090Cu; }
        if (ctx->pc != 0x3C090Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306830_0x306830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C090Cu; }
        if (ctx->pc != 0x3C090Cu) { return; }
    }
    ctx->pc = 0x3C090Cu;
label_3c090c:
    // 0x3c090c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3c090cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c0910:
    // 0x3c0910: 0xc0efe7c  jal         func_3BF9F0
label_3c0914:
    if (ctx->pc == 0x3C0914u) {
        ctx->pc = 0x3C0914u;
            // 0x3c0914: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0918u;
        goto label_3c0918;
    }
    ctx->pc = 0x3C0910u;
    SET_GPR_U32(ctx, 31, 0x3C0918u);
    ctx->pc = 0x3C0914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0910u;
            // 0x3c0914: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF9F0u;
    if (runtime->hasFunction(0x3BF9F0u)) {
        auto targetFn = runtime->lookupFunction(0x3BF9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0918u; }
        if (ctx->pc != 0x3C0918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF9F0_0x3bf9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0918u; }
        if (ctx->pc != 0x3C0918u) { return; }
    }
    ctx->pc = 0x3C0918u;
label_3c0918:
    // 0x3c0918: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c0918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c091c:
    // 0x3c091c: 0xc07649c  jal         func_1D9270
label_3c0920:
    if (ctx->pc == 0x3C0920u) {
        ctx->pc = 0x3C0920u;
            // 0x3c0920: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x3C0924u;
        goto label_3c0924;
    }
    ctx->pc = 0x3C091Cu;
    SET_GPR_U32(ctx, 31, 0x3C0924u);
    ctx->pc = 0x3C0920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C091Cu;
            // 0x3c0920: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0924u; }
        if (ctx->pc != 0x3C0924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0924u; }
        if (ctx->pc != 0x3C0924u) { return; }
    }
    ctx->pc = 0x3C0924u;
label_3c0924:
    // 0x3c0924: 0xc0f0df8  jal         func_3C37E0
label_3c0928:
    if (ctx->pc == 0x3C0928u) {
        ctx->pc = 0x3C0928u;
            // 0x3c0928: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C092Cu;
        goto label_3c092c;
    }
    ctx->pc = 0x3C0924u;
    SET_GPR_U32(ctx, 31, 0x3C092Cu);
    ctx->pc = 0x3C0928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0924u;
            // 0x3c0928: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C37E0u;
    if (runtime->hasFunction(0x3C37E0u)) {
        auto targetFn = runtime->lookupFunction(0x3C37E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C092Cu; }
        if (ctx->pc != 0x3C092Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C37E0_0x3c37e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C092Cu; }
        if (ctx->pc != 0x3C092Cu) { return; }
    }
    ctx->pc = 0x3C092Cu;
label_3c092c:
    // 0x3c092c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c092cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c0930:
    // 0x3c0930: 0xc12ca3c  jal         func_4B28F0
label_3c0934:
    if (ctx->pc == 0x3C0934u) {
        ctx->pc = 0x3C0934u;
            // 0x3c0934: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x3C0938u;
        goto label_3c0938;
    }
    ctx->pc = 0x3C0930u;
    SET_GPR_U32(ctx, 31, 0x3C0938u);
    ctx->pc = 0x3C0934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0930u;
            // 0x3c0934: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B28F0u;
    if (runtime->hasFunction(0x4B28F0u)) {
        auto targetFn = runtime->lookupFunction(0x4B28F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0938u; }
        if (ctx->pc != 0x3C0938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B28F0_0x4b28f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0938u; }
        if (ctx->pc != 0x3C0938u) { return; }
    }
    ctx->pc = 0x3C0938u;
label_3c0938:
    // 0x3c0938: 0xc077228  jal         func_1DC8A0
label_3c093c:
    if (ctx->pc == 0x3C093Cu) {
        ctx->pc = 0x3C093Cu;
            // 0x3c093c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0940u;
        goto label_3c0940;
    }
    ctx->pc = 0x3C0938u;
    SET_GPR_U32(ctx, 31, 0x3C0940u);
    ctx->pc = 0x3C093Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0938u;
            // 0x3c093c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC8A0u;
    if (runtime->hasFunction(0x1DC8A0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0940u; }
        if (ctx->pc != 0x3C0940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC8A0_0x1dc8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0940u; }
        if (ctx->pc != 0x3C0940u) { return; }
    }
    ctx->pc = 0x3C0940u;
label_3c0940:
    // 0x3c0940: 0x10400688  beqz        $v0, . + 4 + (0x688 << 2)
label_3c0944:
    if (ctx->pc == 0x3C0944u) {
        ctx->pc = 0x3C0948u;
        goto label_3c0948;
    }
    ctx->pc = 0x3C0940u;
    {
        const bool branch_taken_0x3c0940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c0940) {
            ctx->pc = 0x3C2364u;
            goto label_3c2364;
        }
    }
    ctx->pc = 0x3C0948u;
label_3c0948:
    // 0x3c0948: 0xc0f0e90  jal         func_3C3A40
label_3c094c:
    if (ctx->pc == 0x3C094Cu) {
        ctx->pc = 0x3C0950u;
        goto label_3c0950;
    }
    ctx->pc = 0x3C0948u;
    SET_GPR_U32(ctx, 31, 0x3C0950u);
    ctx->pc = 0x3C3A40u;
    if (runtime->hasFunction(0x3C3A40u)) {
        auto targetFn = runtime->lookupFunction(0x3C3A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0950u; }
        if (ctx->pc != 0x3C0950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3A40_0x3c3a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0950u; }
        if (ctx->pc != 0x3C0950u) { return; }
    }
    ctx->pc = 0x3C0950u;
label_3c0950:
    // 0x3c0950: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c0950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c0954:
    // 0x3c0954: 0xc077320  jal         func_1DCC80
label_3c0958:
    if (ctx->pc == 0x3C0958u) {
        ctx->pc = 0x3C0958u;
            // 0x3c0958: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C095Cu;
        goto label_3c095c;
    }
    ctx->pc = 0x3C0954u;
    SET_GPR_U32(ctx, 31, 0x3C095Cu);
    ctx->pc = 0x3C0958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0954u;
            // 0x3c0958: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC80u;
    if (runtime->hasFunction(0x1DCC80u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C095Cu; }
        if (ctx->pc != 0x3C095Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC80_0x1dcc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C095Cu; }
        if (ctx->pc != 0x3C095Cu) { return; }
    }
    ctx->pc = 0x3C095Cu;
label_3c095c:
    // 0x3c095c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x3c095cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3c0960:
    // 0x3c0960: 0xc0f0d68  jal         func_3C35A0
label_3c0964:
    if (ctx->pc == 0x3C0964u) {
        ctx->pc = 0x3C0964u;
            // 0x3c0964: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0968u;
        goto label_3c0968;
    }
    ctx->pc = 0x3C0960u;
    SET_GPR_U32(ctx, 31, 0x3C0968u);
    ctx->pc = 0x3C0964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0960u;
            // 0x3c0964: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C35A0u;
    if (runtime->hasFunction(0x3C35A0u)) {
        auto targetFn = runtime->lookupFunction(0x3C35A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0968u; }
        if (ctx->pc != 0x3C0968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C35A0_0x3c35a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0968u; }
        if (ctx->pc != 0x3C0968u) { return; }
    }
    ctx->pc = 0x3C0968u;
label_3c0968:
    // 0x3c0968: 0x1000067e  b           . + 4 + (0x67E << 2)
label_3c096c:
    if (ctx->pc == 0x3C096Cu) {
        ctx->pc = 0x3C0970u;
        goto label_3c0970;
    }
    ctx->pc = 0x3C0968u;
    {
        const bool branch_taken_0x3c0968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c0968) {
            ctx->pc = 0x3C2364u;
            goto label_3c2364;
        }
    }
    ctx->pc = 0x3C0970u;
label_3c0970:
    // 0x3c0970: 0xc0efea4  jal         func_3BFA90
label_3c0974:
    if (ctx->pc == 0x3C0974u) {
        ctx->pc = 0x3C0974u;
            // 0x3c0974: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3C0978u;
        goto label_3c0978;
    }
    ctx->pc = 0x3C0970u;
    SET_GPR_U32(ctx, 31, 0x3C0978u);
    ctx->pc = 0x3C0974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0970u;
            // 0x3c0974: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BFA90u;
    if (runtime->hasFunction(0x3BFA90u)) {
        auto targetFn = runtime->lookupFunction(0x3BFA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0978u; }
        if (ctx->pc != 0x3C0978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BFA90_0x3bfa90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0978u; }
        if (ctx->pc != 0x3C0978u) { return; }
    }
    ctx->pc = 0x3C0978u;
label_3c0978:
    // 0x3c0978: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c0978u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c097c:
    // 0x3c097c: 0xc0efea0  jal         func_3BFA80
label_3c0980:
    if (ctx->pc == 0x3C0980u) {
        ctx->pc = 0x3C0980u;
            // 0x3c0980: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0984u;
        goto label_3c0984;
    }
    ctx->pc = 0x3C097Cu;
    SET_GPR_U32(ctx, 31, 0x3C0984u);
    ctx->pc = 0x3C0980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C097Cu;
            // 0x3c0980: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BFA80u;
    if (runtime->hasFunction(0x3BFA80u)) {
        auto targetFn = runtime->lookupFunction(0x3BFA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0984u; }
        if (ctx->pc != 0x3C0984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BFA80_0x3bfa80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0984u; }
        if (ctx->pc != 0x3C0984u) { return; }
    }
    ctx->pc = 0x3C0984u;
label_3c0984:
    // 0x3c0984: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c0984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c0988:
    // 0x3c0988: 0x50430082  beql        $v0, $v1, . + 4 + (0x82 << 2)
label_3c098c:
    if (ctx->pc == 0x3C098Cu) {
        ctx->pc = 0x3C098Cu;
            // 0x3c098c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3C0990u;
        goto label_3c0990;
    }
    ctx->pc = 0x3C0988u;
    {
        const bool branch_taken_0x3c0988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c0988) {
            ctx->pc = 0x3C098Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0988u;
            // 0x3c098c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C0B94u;
            goto label_3c0b94;
        }
    }
    ctx->pc = 0x3C0990u;
label_3c0990:
    // 0x3c0990: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_3c0994:
    if (ctx->pc == 0x3C0994u) {
        ctx->pc = 0x3C0994u;
            // 0x3c0994: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0998u;
        goto label_3c0998;
    }
    ctx->pc = 0x3C0990u;
    {
        const bool branch_taken_0x3c0990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c0990) {
            ctx->pc = 0x3C0994u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0990u;
            // 0x3c0994: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C09A0u;
            goto label_3c09a0;
        }
    }
    ctx->pc = 0x3C0998u;
label_3c0998:
    // 0x3c0998: 0x100001b5  b           . + 4 + (0x1B5 << 2)
label_3c099c:
    if (ctx->pc == 0x3C099Cu) {
        ctx->pc = 0x3C099Cu;
            // 0x3c099c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C09A0u;
        goto label_3c09a0;
    }
    ctx->pc = 0x3C0998u;
    {
        const bool branch_taken_0x3c0998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C099Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0998u;
            // 0x3c099c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0998) {
            ctx->pc = 0x3C1070u;
            goto label_3c1070;
        }
    }
    ctx->pc = 0x3C09A0u;
label_3c09a0:
    // 0x3c09a0: 0xc0f0e98  jal         func_3C3A60
label_3c09a4:
    if (ctx->pc == 0x3C09A4u) {
        ctx->pc = 0x3C09A8u;
        goto label_3c09a8;
    }
    ctx->pc = 0x3C09A0u;
    SET_GPR_U32(ctx, 31, 0x3C09A8u);
    ctx->pc = 0x3C3A60u;
    if (runtime->hasFunction(0x3C3A60u)) {
        auto targetFn = runtime->lookupFunction(0x3C3A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C09A8u; }
        if (ctx->pc != 0x3C09A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3A60_0x3c3a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C09A8u; }
        if (ctx->pc != 0x3C09A8u) { return; }
    }
    ctx->pc = 0x3C09A8u;
label_3c09a8:
    // 0x3c09a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c09a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c09ac:
    // 0x3c09ac: 0xc0e1100  jal         func_384400
label_3c09b0:
    if (ctx->pc == 0x3C09B0u) {
        ctx->pc = 0x3C09B0u;
            // 0x3c09b0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x3C09B4u;
        goto label_3c09b4;
    }
    ctx->pc = 0x3C09ACu;
    SET_GPR_U32(ctx, 31, 0x3C09B4u);
    ctx->pc = 0x3C09B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C09ACu;
            // 0x3c09b0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384400u;
    if (runtime->hasFunction(0x384400u)) {
        auto targetFn = runtime->lookupFunction(0x384400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C09B4u; }
        if (ctx->pc != 0x3C09B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384400_0x384400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C09B4u; }
        if (ctx->pc != 0x3C09B4u) { return; }
    }
    ctx->pc = 0x3C09B4u;
label_3c09b4:
    // 0x3c09b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c09b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c09b8:
    // 0x3c09b8: 0xc0e1104  jal         func_384410
label_3c09bc:
    if (ctx->pc == 0x3C09BCu) {
        ctx->pc = 0x3C09BCu;
            // 0x3c09bc: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x3C09C0u;
        goto label_3c09c0;
    }
    ctx->pc = 0x3C09B8u;
    SET_GPR_U32(ctx, 31, 0x3C09C0u);
    ctx->pc = 0x3C09BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C09B8u;
            // 0x3c09bc: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384410u;
    if (runtime->hasFunction(0x384410u)) {
        auto targetFn = runtime->lookupFunction(0x384410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C09C0u; }
        if (ctx->pc != 0x3C09C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384410_0x384410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C09C0u; }
        if (ctx->pc != 0x3C09C0u) { return; }
    }
    ctx->pc = 0x3C09C0u;
label_3c09c0:
    // 0x3c09c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3c09c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c09c4:
    // 0x3c09c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c09c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c09c8:
    // 0x3c09c8: 0xc0efe80  jal         func_3BFA00
label_3c09cc:
    if (ctx->pc == 0x3C09CCu) {
        ctx->pc = 0x3C09CCu;
            // 0x3c09cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3C09D0u;
        goto label_3c09d0;
    }
    ctx->pc = 0x3C09C8u;
    SET_GPR_U32(ctx, 31, 0x3C09D0u);
    ctx->pc = 0x3C09CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C09C8u;
            // 0x3c09cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BFA00u;
    if (runtime->hasFunction(0x3BFA00u)) {
        auto targetFn = runtime->lookupFunction(0x3BFA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C09D0u; }
        if (ctx->pc != 0x3C09D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BFA00_0x3bfa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C09D0u; }
        if (ctx->pc != 0x3C09D0u) { return; }
    }
    ctx->pc = 0x3C09D0u;
label_3c09d0:
    // 0x3c09d0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3c09d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c09d4:
    // 0x3c09d4: 0xc0f0e7c  jal         func_3C39F0
label_3c09d8:
    if (ctx->pc == 0x3C09D8u) {
        ctx->pc = 0x3C09D8u;
            // 0x3c09d8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3C09DCu;
        goto label_3c09dc;
    }
    ctx->pc = 0x3C09D4u;
    SET_GPR_U32(ctx, 31, 0x3C09DCu);
    ctx->pc = 0x3C09D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C09D4u;
            // 0x3c09d8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C39F0u;
    if (runtime->hasFunction(0x3C39F0u)) {
        auto targetFn = runtime->lookupFunction(0x3C39F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C09DCu; }
        if (ctx->pc != 0x3C09DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C39F0_0x3c39f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C09DCu; }
        if (ctx->pc != 0x3C09DCu) { return; }
    }
    ctx->pc = 0x3C09DCu;
label_3c09dc:
    // 0x3c09dc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3c09dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c09e0:
    // 0x3c09e0: 0xc0efc58  jal         func_3BF160
label_3c09e4:
    if (ctx->pc == 0x3C09E4u) {
        ctx->pc = 0x3C09E4u;
            // 0x3c09e4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3C09E8u;
        goto label_3c09e8;
    }
    ctx->pc = 0x3C09E0u;
    SET_GPR_U32(ctx, 31, 0x3C09E8u);
    ctx->pc = 0x3C09E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C09E0u;
            // 0x3c09e4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF160u;
    if (runtime->hasFunction(0x3BF160u)) {
        auto targetFn = runtime->lookupFunction(0x3BF160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C09E8u; }
        if (ctx->pc != 0x3C09E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF160_0x3bf160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C09E8u; }
        if (ctx->pc != 0x3C09E8u) { return; }
    }
    ctx->pc = 0x3C09E8u;
label_3c09e8:
    // 0x3c09e8: 0xc07731c  jal         func_1DCC70
label_3c09ec:
    if (ctx->pc == 0x3C09ECu) {
        ctx->pc = 0x3C09ECu;
            // 0x3c09ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C09F0u;
        goto label_3c09f0;
    }
    ctx->pc = 0x3C09E8u;
    SET_GPR_U32(ctx, 31, 0x3C09F0u);
    ctx->pc = 0x3C09ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C09E8u;
            // 0x3c09ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC70u;
    if (runtime->hasFunction(0x1DCC70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C09F0u; }
        if (ctx->pc != 0x3C09F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC70_0x1dcc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C09F0u; }
        if (ctx->pc != 0x3C09F0u) { return; }
    }
    ctx->pc = 0x3C09F0u;
label_3c09f0:
    // 0x3c09f0: 0x8c590030  lw          $t9, 0x30($v0)
    ctx->pc = 0x3c09f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_3c09f4:
    // 0x3c09f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c09f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c09f8:
    // 0x3c09f8: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3c09f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3c09fc:
    // 0x3c09fc: 0x320f809  jalr        $t9
label_3c0a00:
    if (ctx->pc == 0x3C0A00u) {
        ctx->pc = 0x3C0A00u;
            // 0x3c0a00: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x3C0A04u;
        goto label_3c0a04;
    }
    ctx->pc = 0x3C09FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C0A04u);
        ctx->pc = 0x3C0A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C09FCu;
            // 0x3c0a00: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C0A04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C0A04u; }
            if (ctx->pc != 0x3C0A04u) { return; }
        }
        }
    }
    ctx->pc = 0x3C0A04u;
label_3c0a04:
    // 0x3c0a04: 0x8e0301ac  lw          $v1, 0x1AC($s0)
    ctx->pc = 0x3c0a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
label_3c0a08:
    // 0x3c0a08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c0a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c0a0c:
    // 0x3c0a0c: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_3c0a10:
    if (ctx->pc == 0x3C0A10u) {
        ctx->pc = 0x3C0A10u;
            // 0x3c0a10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0A14u;
        goto label_3c0a14;
    }
    ctx->pc = 0x3C0A0Cu;
    {
        const bool branch_taken_0x3c0a0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c0a0c) {
            ctx->pc = 0x3C0A10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0A0Cu;
            // 0x3c0a10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C0A24u;
            goto label_3c0a24;
        }
    }
    ctx->pc = 0x3C0A14u;
label_3c0a14:
    // 0x3c0a14: 0x8e0201b8  lw          $v0, 0x1B8($s0)
    ctx->pc = 0x3c0a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
label_3c0a18:
    // 0x3c0a18: 0x34420014  ori         $v0, $v0, 0x14
    ctx->pc = 0x3c0a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
label_3c0a1c:
    // 0x3c0a1c: 0x1000000c  b           . + 4 + (0xC << 2)
label_3c0a20:
    if (ctx->pc == 0x3C0A20u) {
        ctx->pc = 0x3C0A20u;
            // 0x3c0a20: 0xae0201b8  sw          $v0, 0x1B8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 2));
        ctx->pc = 0x3C0A24u;
        goto label_3c0a24;
    }
    ctx->pc = 0x3C0A1Cu;
    {
        const bool branch_taken_0x3c0a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0A1Cu;
            // 0x3c0a20: 0xae0201b8  sw          $v0, 0x1B8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0a1c) {
            ctx->pc = 0x3C0A50u;
            goto label_3c0a50;
        }
    }
    ctx->pc = 0x3C0A24u;
label_3c0a24:
    // 0x3c0a24: 0xc077584  jal         func_1DD610
label_3c0a28:
    if (ctx->pc == 0x3C0A28u) {
        ctx->pc = 0x3C0A2Cu;
        goto label_3c0a2c;
    }
    ctx->pc = 0x3C0A24u;
    SET_GPR_U32(ctx, 31, 0x3C0A2Cu);
    ctx->pc = 0x1DD610u;
    if (runtime->hasFunction(0x1DD610u)) {
        auto targetFn = runtime->lookupFunction(0x1DD610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0A2Cu; }
        if (ctx->pc != 0x3C0A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD610_0x1dd610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0A2Cu; }
        if (ctx->pc != 0x3C0A2Cu) { return; }
    }
    ctx->pc = 0x3C0A2Cu;
label_3c0a2c:
    // 0x3c0a2c: 0xc0754b4  jal         func_1D52D0
label_3c0a30:
    if (ctx->pc == 0x3C0A30u) {
        ctx->pc = 0x3C0A30u;
            // 0x3c0a30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0A34u;
        goto label_3c0a34;
    }
    ctx->pc = 0x3C0A2Cu;
    SET_GPR_U32(ctx, 31, 0x3C0A34u);
    ctx->pc = 0x3C0A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0A2Cu;
            // 0x3c0a30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0A34u; }
        if (ctx->pc != 0x3C0A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0A34u; }
        if (ctx->pc != 0x3C0A34u) { return; }
    }
    ctx->pc = 0x3C0A34u;
label_3c0a34:
    // 0x3c0a34: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3c0a34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c0a38:
    // 0x3c0a38: 0xc0c1a10  jal         func_306840
label_3c0a3c:
    if (ctx->pc == 0x3C0A3Cu) {
        ctx->pc = 0x3C0A3Cu;
            // 0x3c0a3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0A40u;
        goto label_3c0a40;
    }
    ctx->pc = 0x3C0A38u;
    SET_GPR_U32(ctx, 31, 0x3C0A40u);
    ctx->pc = 0x3C0A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0A38u;
            // 0x3c0a3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306840u;
    if (runtime->hasFunction(0x306840u)) {
        auto targetFn = runtime->lookupFunction(0x306840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0A40u; }
        if (ctx->pc != 0x3C0A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306840_0x306840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0A40u; }
        if (ctx->pc != 0x3C0A40u) { return; }
    }
    ctx->pc = 0x3C0A40u;
label_3c0a40:
    // 0x3c0a40: 0xc641003c  lwc1        $f1, 0x3C($s2)
    ctx->pc = 0x3c0a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c0a44:
    // 0x3c0a44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c0a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c0a48:
    // 0x3c0a48: 0xc0f0d64  jal         func_3C3590
label_3c0a4c:
    if (ctx->pc == 0x3C0A4Cu) {
        ctx->pc = 0x3C0A4Cu;
            // 0x3c0a4c: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x3C0A50u;
        goto label_3c0a50;
    }
    ctx->pc = 0x3C0A48u;
    SET_GPR_U32(ctx, 31, 0x3C0A50u);
    ctx->pc = 0x3C0A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0A48u;
            // 0x3c0a4c: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3590u;
    if (runtime->hasFunction(0x3C3590u)) {
        auto targetFn = runtime->lookupFunction(0x3C3590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0A50u; }
        if (ctx->pc != 0x3C0A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3590_0x3c3590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0A50u; }
        if (ctx->pc != 0x3C0A50u) { return; }
    }
    ctx->pc = 0x3C0A50u;
label_3c0a50:
    // 0x3c0a50: 0xc0772e8  jal         func_1DCBA0
label_3c0a54:
    if (ctx->pc == 0x3C0A54u) {
        ctx->pc = 0x3C0A54u;
            // 0x3c0a54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0A58u;
        goto label_3c0a58;
    }
    ctx->pc = 0x3C0A50u;
    SET_GPR_U32(ctx, 31, 0x3C0A58u);
    ctx->pc = 0x3C0A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0A50u;
            // 0x3c0a54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBA0u;
    if (runtime->hasFunction(0x1DCBA0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0A58u; }
        if (ctx->pc != 0x3C0A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCBA0_0x1dcba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0A58u; }
        if (ctx->pc != 0x3C0A58u) { return; }
    }
    ctx->pc = 0x3C0A58u;
label_3c0a58:
    // 0x3c0a58: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3c0a58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c0a5c:
    // 0x3c0a5c: 0xc0772dc  jal         func_1DCB70
label_3c0a60:
    if (ctx->pc == 0x3C0A60u) {
        ctx->pc = 0x3C0A60u;
            // 0x3c0a60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0A64u;
        goto label_3c0a64;
    }
    ctx->pc = 0x3C0A5Cu;
    SET_GPR_U32(ctx, 31, 0x3C0A64u);
    ctx->pc = 0x3C0A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0A5Cu;
            // 0x3c0a60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCB70u;
    if (runtime->hasFunction(0x1DCB70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0A64u; }
        if (ctx->pc != 0x3C0A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCB70_0x1dcb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0A64u; }
        if (ctx->pc != 0x3C0A64u) { return; }
    }
    ctx->pc = 0x3C0A64u;
label_3c0a64:
    // 0x3c0a64: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3c0a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3c0a68:
    // 0x3c0a68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c0a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c0a6c:
    // 0x3c0a6c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3c0a6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c0a70:
    // 0x3c0a70: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x3c0a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_3c0a74:
    // 0x3c0a74: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3c0a74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c0a78:
    // 0x3c0a78: 0xc0772d4  jal         func_1DCB50
label_3c0a7c:
    if (ctx->pc == 0x3C0A7Cu) {
        ctx->pc = 0x3C0A7Cu;
            // 0x3c0a7c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x3C0A80u;
        goto label_3c0a80;
    }
    ctx->pc = 0x3C0A78u;
    SET_GPR_U32(ctx, 31, 0x3C0A80u);
    ctx->pc = 0x3C0A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0A78u;
            // 0x3c0a7c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCB50u;
    if (runtime->hasFunction(0x1DCB50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0A80u; }
        if (ctx->pc != 0x3C0A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCB50_0x1dcb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0A80u; }
        if (ctx->pc != 0x3C0A80u) { return; }
    }
    ctx->pc = 0x3C0A80u;
label_3c0a80:
    // 0x3c0a80: 0x8e590058  lw          $t9, 0x58($s2)
    ctx->pc = 0x3c0a80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_3c0a84:
    // 0x3c0a84: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3c0a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c0a88:
    // 0x3c0a88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c0a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c0a8c:
    // 0x3c0a8c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3c0a8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3c0a90:
    // 0x3c0a90: 0x320f809  jalr        $t9
label_3c0a94:
    if (ctx->pc == 0x3C0A94u) {
        ctx->pc = 0x3C0A94u;
            // 0x3c0a94: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0A98u;
        goto label_3c0a98;
    }
    ctx->pc = 0x3C0A90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C0A98u);
        ctx->pc = 0x3C0A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0A90u;
            // 0x3c0a94: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C0A98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C0A98u; }
            if (ctx->pc != 0x3C0A98u) { return; }
        }
        }
    }
    ctx->pc = 0x3C0A98u;
label_3c0a98:
    // 0x3c0a98: 0xc0f0d1c  jal         func_3C3470
label_3c0a9c:
    if (ctx->pc == 0x3C0A9Cu) {
        ctx->pc = 0x3C0A9Cu;
            // 0x3c0a9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0AA0u;
        goto label_3c0aa0;
    }
    ctx->pc = 0x3C0A98u;
    SET_GPR_U32(ctx, 31, 0x3C0AA0u);
    ctx->pc = 0x3C0A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0A98u;
            // 0x3c0a9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3470u;
    if (runtime->hasFunction(0x3C3470u)) {
        auto targetFn = runtime->lookupFunction(0x3C3470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0AA0u; }
        if (ctx->pc != 0x3C0AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3470_0x3c3470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0AA0u; }
        if (ctx->pc != 0x3C0AA0u) { return; }
    }
    ctx->pc = 0x3C0AA0u;
label_3c0aa0:
    // 0x3c0aa0: 0xc077330  jal         func_1DCCC0
label_3c0aa4:
    if (ctx->pc == 0x3C0AA4u) {
        ctx->pc = 0x3C0AA4u;
            // 0x3c0aa4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0AA8u;
        goto label_3c0aa8;
    }
    ctx->pc = 0x3C0AA0u;
    SET_GPR_U32(ctx, 31, 0x3C0AA8u);
    ctx->pc = 0x3C0AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0AA0u;
            // 0x3c0aa4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCCC0u;
    if (runtime->hasFunction(0x1DCCC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0AA8u; }
        if (ctx->pc != 0x3C0AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCCC0_0x1dccc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0AA8u; }
        if (ctx->pc != 0x3C0AA8u) { return; }
    }
    ctx->pc = 0x3C0AA8u;
label_3c0aa8:
    // 0x3c0aa8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3c0aac:
    if (ctx->pc == 0x3C0AACu) {
        ctx->pc = 0x3C0AB0u;
        goto label_3c0ab0;
    }
    ctx->pc = 0x3C0AA8u;
    {
        const bool branch_taken_0x3c0aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c0aa8) {
            ctx->pc = 0x3C0AC0u;
            goto label_3c0ac0;
        }
    }
    ctx->pc = 0x3C0AB0u;
label_3c0ab0:
    // 0x3c0ab0: 0xc07732c  jal         func_1DCCB0
label_3c0ab4:
    if (ctx->pc == 0x3C0AB4u) {
        ctx->pc = 0x3C0AB4u;
            // 0x3c0ab4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0AB8u;
        goto label_3c0ab8;
    }
    ctx->pc = 0x3C0AB0u;
    SET_GPR_U32(ctx, 31, 0x3C0AB8u);
    ctx->pc = 0x3C0AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0AB0u;
            // 0x3c0ab4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCCB0u;
    if (runtime->hasFunction(0x1DCCB0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0AB8u; }
        if (ctx->pc != 0x3C0AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCCB0_0x1dccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0AB8u; }
        if (ctx->pc != 0x3C0AB8u) { return; }
    }
    ctx->pc = 0x3C0AB8u;
label_3c0ab8:
    // 0x3c0ab8: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_3c0abc:
    if (ctx->pc == 0x3C0ABCu) {
        ctx->pc = 0x3C0AC0u;
        goto label_3c0ac0;
    }
    ctx->pc = 0x3C0AB8u;
    {
        const bool branch_taken_0x3c0ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c0ab8) {
            ctx->pc = 0x3C0B74u;
            goto label_3c0b74;
        }
    }
    ctx->pc = 0x3C0AC0u;
label_3c0ac0:
    // 0x3c0ac0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c0ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3c0ac4:
    // 0x3c0ac4: 0xc0f0d18  jal         func_3C3460
label_3c0ac8:
    if (ctx->pc == 0x3C0AC8u) {
        ctx->pc = 0x3C0AC8u;
            // 0x3c0ac8: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->pc = 0x3C0ACCu;
        goto label_3c0acc;
    }
    ctx->pc = 0x3C0AC4u;
    SET_GPR_U32(ctx, 31, 0x3C0ACCu);
    ctx->pc = 0x3C0AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0AC4u;
            // 0x3c0ac8: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3460u;
    if (runtime->hasFunction(0x3C3460u)) {
        auto targetFn = runtime->lookupFunction(0x3C3460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0ACCu; }
        if (ctx->pc != 0x3C0ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3460_0x3c3460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0ACCu; }
        if (ctx->pc != 0x3C0ACCu) { return; }
    }
    ctx->pc = 0x3C0ACCu;
label_3c0acc:
    // 0x3c0acc: 0x28430003  slti        $v1, $v0, 0x3
    ctx->pc = 0x3c0accu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_3c0ad0:
    // 0x3c0ad0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c0ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3c0ad4:
    // 0x3c0ad4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x3c0ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_3c0ad8:
    // 0x3c0ad8: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x3c0ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3c0adc:
    // 0x3c0adc: 0xc0770e4  jal         func_1DC390
label_3c0ae0:
    if (ctx->pc == 0x3C0AE0u) {
        ctx->pc = 0x3C0AE0u;
            // 0x3c0ae0: 0x307200ff  andi        $s2, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3C0AE4u;
        goto label_3c0ae4;
    }
    ctx->pc = 0x3C0ADCu;
    SET_GPR_U32(ctx, 31, 0x3C0AE4u);
    ctx->pc = 0x3C0AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0ADCu;
            // 0x3c0ae0: 0x307200ff  andi        $s2, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC390u;
    if (runtime->hasFunction(0x1DC390u)) {
        auto targetFn = runtime->lookupFunction(0x1DC390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0AE4u; }
        if (ctx->pc != 0x3C0AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC390_0x1dc390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0AE4u; }
        if (ctx->pc != 0x3C0AE4u) { return; }
    }
    ctx->pc = 0x3C0AE4u;
label_3c0ae4:
    // 0x3c0ae4: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x3c0ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3c0ae8:
    // 0x3c0ae8: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
label_3c0aec:
    if (ctx->pc == 0x3C0AECu) {
        ctx->pc = 0x3C0AF0u;
        goto label_3c0af0;
    }
    ctx->pc = 0x3C0AE8u;
    {
        const bool branch_taken_0x3c0ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3c0ae8) {
            ctx->pc = 0x3C0B1Cu;
            goto label_3c0b1c;
        }
    }
    ctx->pc = 0x3C0AF0u;
label_3c0af0:
    // 0x3c0af0: 0xc077324  jal         func_1DCC90
label_3c0af4:
    if (ctx->pc == 0x3C0AF4u) {
        ctx->pc = 0x3C0AF4u;
            // 0x3c0af4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0AF8u;
        goto label_3c0af8;
    }
    ctx->pc = 0x3C0AF0u;
    SET_GPR_U32(ctx, 31, 0x3C0AF8u);
    ctx->pc = 0x3C0AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0AF0u;
            // 0x3c0af4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC90u;
    if (runtime->hasFunction(0x1DCC90u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0AF8u; }
        if (ctx->pc != 0x3C0AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC90_0x1dcc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0AF8u; }
        if (ctx->pc != 0x3C0AF8u) { return; }
    }
    ctx->pc = 0x3C0AF8u;
label_3c0af8:
    // 0x3c0af8: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x3c0af8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
label_3c0afc:
    // 0x3c0afc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c0afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c0b00:
    // 0x3c0b00: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x3c0b00u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
label_3c0b04:
    // 0x3c0b04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c0b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c0b08:
    // 0x3c0b08: 0x2407003d  addiu       $a3, $zero, 0x3D
    ctx->pc = 0x3c0b08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
label_3c0b0c:
    // 0x3c0b0c: 0xc0762b4  jal         func_1D8AD0
label_3c0b10:
    if (ctx->pc == 0x3C0B10u) {
        ctx->pc = 0x3C0B10u;
            // 0x3c0b10: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3C0B14u;
        goto label_3c0b14;
    }
    ctx->pc = 0x3C0B0Cu;
    SET_GPR_U32(ctx, 31, 0x3C0B14u);
    ctx->pc = 0x3C0B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0B0Cu;
            // 0x3c0b10: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8AD0u;
    if (runtime->hasFunction(0x1D8AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D8AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0B14u; }
        if (ctx->pc != 0x3C0B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8AD0_0x1d8ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0B14u; }
        if (ctx->pc != 0x3C0B14u) { return; }
    }
    ctx->pc = 0x3C0B14u;
label_3c0b14:
    // 0x3c0b14: 0x10000017  b           . + 4 + (0x17 << 2)
label_3c0b18:
    if (ctx->pc == 0x3C0B18u) {
        ctx->pc = 0x3C0B1Cu;
        goto label_3c0b1c;
    }
    ctx->pc = 0x3C0B14u;
    {
        const bool branch_taken_0x3c0b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c0b14) {
            ctx->pc = 0x3C0B74u;
            goto label_3c0b74;
        }
    }
    ctx->pc = 0x3C0B1Cu;
label_3c0b1c:
    // 0x3c0b1c: 0x5640000c  bnel        $s2, $zero, . + 4 + (0xC << 2)
label_3c0b20:
    if (ctx->pc == 0x3C0B20u) {
        ctx->pc = 0x3C0B20u;
            // 0x3c0b20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0B24u;
        goto label_3c0b24;
    }
    ctx->pc = 0x3C0B1Cu;
    {
        const bool branch_taken_0x3c0b1c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c0b1c) {
            ctx->pc = 0x3C0B20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0B1Cu;
            // 0x3c0b20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C0B50u;
            goto label_3c0b50;
        }
    }
    ctx->pc = 0x3C0B24u;
label_3c0b24:
    // 0x3c0b24: 0xc077324  jal         func_1DCC90
label_3c0b28:
    if (ctx->pc == 0x3C0B28u) {
        ctx->pc = 0x3C0B28u;
            // 0x3c0b28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0B2Cu;
        goto label_3c0b2c;
    }
    ctx->pc = 0x3C0B24u;
    SET_GPR_U32(ctx, 31, 0x3C0B2Cu);
    ctx->pc = 0x3C0B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0B24u;
            // 0x3c0b28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC90u;
    if (runtime->hasFunction(0x1DCC90u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0B2Cu; }
        if (ctx->pc != 0x3C0B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC90_0x1dcc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0B2Cu; }
        if (ctx->pc != 0x3C0B2Cu) { return; }
    }
    ctx->pc = 0x3C0B2Cu;
label_3c0b2c:
    // 0x3c0b2c: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x3c0b2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
label_3c0b30:
    // 0x3c0b30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c0b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c0b34:
    // 0x3c0b34: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x3c0b34u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
label_3c0b38:
    // 0x3c0b38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c0b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c0b3c:
    // 0x3c0b3c: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x3c0b3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_3c0b40:
    // 0x3c0b40: 0xc0762b4  jal         func_1D8AD0
label_3c0b44:
    if (ctx->pc == 0x3C0B44u) {
        ctx->pc = 0x3C0B44u;
            // 0x3c0b44: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3C0B48u;
        goto label_3c0b48;
    }
    ctx->pc = 0x3C0B40u;
    SET_GPR_U32(ctx, 31, 0x3C0B48u);
    ctx->pc = 0x3C0B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0B40u;
            // 0x3c0b44: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8AD0u;
    if (runtime->hasFunction(0x1D8AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D8AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0B48u; }
        if (ctx->pc != 0x3C0B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8AD0_0x1d8ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0B48u; }
        if (ctx->pc != 0x3C0B48u) { return; }
    }
    ctx->pc = 0x3C0B48u;
label_3c0b48:
    // 0x3c0b48: 0x1000000a  b           . + 4 + (0xA << 2)
label_3c0b4c:
    if (ctx->pc == 0x3C0B4Cu) {
        ctx->pc = 0x3C0B50u;
        goto label_3c0b50;
    }
    ctx->pc = 0x3C0B48u;
    {
        const bool branch_taken_0x3c0b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c0b48) {
            ctx->pc = 0x3C0B74u;
            goto label_3c0b74;
        }
    }
    ctx->pc = 0x3C0B50u;
label_3c0b50:
    // 0x3c0b50: 0xc077324  jal         func_1DCC90
label_3c0b54:
    if (ctx->pc == 0x3C0B54u) {
        ctx->pc = 0x3C0B58u;
        goto label_3c0b58;
    }
    ctx->pc = 0x3C0B50u;
    SET_GPR_U32(ctx, 31, 0x3C0B58u);
    ctx->pc = 0x1DCC90u;
    if (runtime->hasFunction(0x1DCC90u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0B58u; }
        if (ctx->pc != 0x3C0B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC90_0x1dcc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0B58u; }
        if (ctx->pc != 0x3C0B58u) { return; }
    }
    ctx->pc = 0x3C0B58u;
label_3c0b58:
    // 0x3c0b58: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x3c0b58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
label_3c0b5c:
    // 0x3c0b5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c0b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c0b60:
    // 0x3c0b60: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x3c0b60u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
label_3c0b64:
    // 0x3c0b64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c0b64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c0b68:
    // 0x3c0b68: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x3c0b68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3c0b6c:
    // 0x3c0b6c: 0xc0762b4  jal         func_1D8AD0
label_3c0b70:
    if (ctx->pc == 0x3C0B70u) {
        ctx->pc = 0x3C0B70u;
            // 0x3c0b70: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3C0B74u;
        goto label_3c0b74;
    }
    ctx->pc = 0x3C0B6Cu;
    SET_GPR_U32(ctx, 31, 0x3C0B74u);
    ctx->pc = 0x3C0B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0B6Cu;
            // 0x3c0b70: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8AD0u;
    if (runtime->hasFunction(0x1D8AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D8AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0B74u; }
        if (ctx->pc != 0x3C0B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8AD0_0x1d8ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0B74u; }
        if (ctx->pc != 0x3C0B74u) { return; }
    }
    ctx->pc = 0x3C0B74u;
label_3c0b74:
    // 0x3c0b74: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3c0b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3c0b78:
    // 0x3c0b78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c0b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c0b7c:
    // 0x3c0b7c: 0xc4408448  lwc1        $f0, -0x7BB8($v0)
    ctx->pc = 0x3c0b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294935624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c0b80:
    // 0x3c0b80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3c0b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c0b84:
    // 0x3c0b84: 0xc0efdd8  jal         func_3BF760
label_3c0b88:
    if (ctx->pc == 0x3C0B88u) {
        ctx->pc = 0x3C0B88u;
            // 0x3c0b88: 0xe60001b0  swc1        $f0, 0x1B0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
        ctx->pc = 0x3C0B8Cu;
        goto label_3c0b8c;
    }
    ctx->pc = 0x3C0B84u;
    SET_GPR_U32(ctx, 31, 0x3C0B8Cu);
    ctx->pc = 0x3C0B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0B84u;
            // 0x3c0b88: 0xe60001b0  swc1        $f0, 0x1B0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF760u;
    if (runtime->hasFunction(0x3BF760u)) {
        auto targetFn = runtime->lookupFunction(0x3BF760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0B8Cu; }
        if (ctx->pc != 0x3C0B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF760_0x3bf760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0B8Cu; }
        if (ctx->pc != 0x3C0B8Cu) { return; }
    }
    ctx->pc = 0x3C0B8Cu;
label_3c0b8c:
    // 0x3c0b8c: 0x10000137  b           . + 4 + (0x137 << 2)
label_3c0b90:
    if (ctx->pc == 0x3C0B90u) {
        ctx->pc = 0x3C0B94u;
        goto label_3c0b94;
    }
    ctx->pc = 0x3C0B8Cu;
    {
        const bool branch_taken_0x3c0b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c0b8c) {
            ctx->pc = 0x3C106Cu;
            goto label_3c106c;
        }
    }
    ctx->pc = 0x3C0B94u;
label_3c0b94:
    // 0x3c0b94: 0xc0eea50  jal         func_3BA940
label_3c0b98:
    if (ctx->pc == 0x3C0B98u) {
        ctx->pc = 0x3C0B9Cu;
        goto label_3c0b9c;
    }
    ctx->pc = 0x3C0B94u;
    SET_GPR_U32(ctx, 31, 0x3C0B9Cu);
    ctx->pc = 0x3BA940u;
    if (runtime->hasFunction(0x3BA940u)) {
        auto targetFn = runtime->lookupFunction(0x3BA940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0B9Cu; }
        if (ctx->pc != 0x3C0B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BA940_0x3ba940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0B9Cu; }
        if (ctx->pc != 0x3C0B9Cu) { return; }
    }
    ctx->pc = 0x3C0B9Cu;
label_3c0b9c:
    // 0x3c0b9c: 0x8e0301ac  lw          $v1, 0x1AC($s0)
    ctx->pc = 0x3c0b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
label_3c0ba0:
    // 0x3c0ba0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c0ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c0ba4:
    // 0x3c0ba4: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
label_3c0ba8:
    if (ctx->pc == 0x3C0BA8u) {
        ctx->pc = 0x3C0BA8u;
            // 0x3c0ba8: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x3C0BACu;
        goto label_3c0bac;
    }
    ctx->pc = 0x3C0BA4u;
    {
        const bool branch_taken_0x3c0ba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3c0ba4) {
            ctx->pc = 0x3C0BA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0BA4u;
            // 0x3c0ba8: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C0BC4u;
            goto label_3c0bc4;
        }
    }
    ctx->pc = 0x3C0BACu;
label_3c0bac:
    // 0x3c0bac: 0xc077584  jal         func_1DD610
label_3c0bb0:
    if (ctx->pc == 0x3C0BB0u) {
        ctx->pc = 0x3C0BB0u;
            // 0x3c0bb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0BB4u;
        goto label_3c0bb4;
    }
    ctx->pc = 0x3C0BACu;
    SET_GPR_U32(ctx, 31, 0x3C0BB4u);
    ctx->pc = 0x3C0BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0BACu;
            // 0x3c0bb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD610u;
    if (runtime->hasFunction(0x1DD610u)) {
        auto targetFn = runtime->lookupFunction(0x1DD610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0BB4u; }
        if (ctx->pc != 0x3C0BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD610_0x1dd610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0BB4u; }
        if (ctx->pc != 0x3C0BB4u) { return; }
    }
    ctx->pc = 0x3C0BB4u;
label_3c0bb4:
    // 0x3c0bb4: 0xc0754b4  jal         func_1D52D0
label_3c0bb8:
    if (ctx->pc == 0x3C0BB8u) {
        ctx->pc = 0x3C0BB8u;
            // 0x3c0bb8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0BBCu;
        goto label_3c0bbc;
    }
    ctx->pc = 0x3C0BB4u;
    SET_GPR_U32(ctx, 31, 0x3C0BBCu);
    ctx->pc = 0x3C0BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0BB4u;
            // 0x3c0bb8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0BBCu; }
        if (ctx->pc != 0x3C0BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0BBCu; }
        if (ctx->pc != 0x3C0BBCu) { return; }
    }
    ctx->pc = 0x3C0BBCu;
label_3c0bbc:
    // 0x3c0bbc: 0x10000002  b           . + 4 + (0x2 << 2)
label_3c0bc0:
    if (ctx->pc == 0x3C0BC0u) {
        ctx->pc = 0x3C0BC0u;
            // 0x3c0bc0: 0xc455003c  lwc1        $f21, 0x3C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->pc = 0x3C0BC4u;
        goto label_3c0bc4;
    }
    ctx->pc = 0x3C0BBCu;
    {
        const bool branch_taken_0x3c0bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0BBCu;
            // 0x3c0bc0: 0xc455003c  lwc1        $f21, 0x3C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0bbc) {
            ctx->pc = 0x3C0BC8u;
            goto label_3c0bc8;
        }
    }
    ctx->pc = 0x3C0BC4u;
label_3c0bc4:
    // 0x3c0bc4: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x3c0bc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3c0bc8:
    // 0x3c0bc8: 0xc0783ac  jal         func_1E0EB0
label_3c0bcc:
    if (ctx->pc == 0x3C0BCCu) {
        ctx->pc = 0x3C0BCCu;
            // 0x3c0bcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0BD0u;
        goto label_3c0bd0;
    }
    ctx->pc = 0x3C0BC8u;
    SET_GPR_U32(ctx, 31, 0x3C0BD0u);
    ctx->pc = 0x3C0BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0BC8u;
            // 0x3c0bcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0EB0u;
    if (runtime->hasFunction(0x1E0EB0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0BD0u; }
        if (ctx->pc != 0x3C0BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0EB0_0x1e0eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0BD0u; }
        if (ctx->pc != 0x3C0BD0u) { return; }
    }
    ctx->pc = 0x3C0BD0u;
label_3c0bd0:
    // 0x3c0bd0: 0x3c023f6d  lui         $v0, 0x3F6D
    ctx->pc = 0x3c0bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16237 << 16));
label_3c0bd4:
    // 0x3c0bd4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3c0bd4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3c0bd8:
    // 0x3c0bd8: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x3c0bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_3c0bdc:
    // 0x3c0bdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c0bdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c0be0:
    // 0x3c0be0: 0x0  nop
    ctx->pc = 0x3c0be0u;
    // NOP
label_3c0be4:
    // 0x3c0be4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x3c0be4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_3c0be8:
    // 0x3c0be8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3c0be8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c0bec:
    // 0x3c0bec: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
label_3c0bf0:
    if (ctx->pc == 0x3C0BF0u) {
        ctx->pc = 0x3C0BF0u;
            // 0x3c0bf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0BF4u;
        goto label_3c0bf4;
    }
    ctx->pc = 0x3C0BECu;
    {
        const bool branch_taken_0x3c0bec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c0bec) {
            ctx->pc = 0x3C0BF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0BECu;
            // 0x3c0bf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C0C10u;
            goto label_3c0c10;
        }
    }
    ctx->pc = 0x3C0BF4u;
label_3c0bf4:
    // 0x3c0bf4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3c0bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3c0bf8:
    // 0x3c0bf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c0bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c0bfc:
    // 0x3c0bfc: 0xc4408440  lwc1        $f0, -0x7BC0($v0)
    ctx->pc = 0x3c0bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294935616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c0c00:
    // 0x3c0c00: 0xc0efe7c  jal         func_3BF9F0
label_3c0c04:
    if (ctx->pc == 0x3C0C04u) {
        ctx->pc = 0x3C0C04u;
            // 0x3c0c04: 0x46150302  mul.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->pc = 0x3C0C08u;
        goto label_3c0c08;
    }
    ctx->pc = 0x3C0C00u;
    SET_GPR_U32(ctx, 31, 0x3C0C08u);
    ctx->pc = 0x3C0C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0C00u;
            // 0x3c0c04: 0x46150302  mul.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF9F0u;
    if (runtime->hasFunction(0x3BF9F0u)) {
        auto targetFn = runtime->lookupFunction(0x3BF9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0C08u; }
        if (ctx->pc != 0x3C0C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF9F0_0x3bf9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0C08u; }
        if (ctx->pc != 0x3C0C08u) { return; }
    }
    ctx->pc = 0x3C0C08u;
label_3c0c08:
    // 0x3c0c08: 0x10000012  b           . + 4 + (0x12 << 2)
label_3c0c0c:
    if (ctx->pc == 0x3C0C0Cu) {
        ctx->pc = 0x3C0C0Cu;
            // 0x3c0c0c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3C0C10u;
        goto label_3c0c10;
    }
    ctx->pc = 0x3C0C08u;
    {
        const bool branch_taken_0x3c0c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0C08u;
            // 0x3c0c0c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0c08) {
            ctx->pc = 0x3C0C54u;
            goto label_3c0c54;
        }
    }
    ctx->pc = 0x3C0C10u;
label_3c0c10:
    // 0x3c0c10: 0xc0c1a10  jal         func_306840
label_3c0c14:
    if (ctx->pc == 0x3C0C14u) {
        ctx->pc = 0x3C0C18u;
        goto label_3c0c18;
    }
    ctx->pc = 0x3C0C10u;
    SET_GPR_U32(ctx, 31, 0x3C0C18u);
    ctx->pc = 0x306840u;
    if (runtime->hasFunction(0x306840u)) {
        auto targetFn = runtime->lookupFunction(0x306840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0C18u; }
        if (ctx->pc != 0x3C0C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306840_0x306840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0C18u; }
        if (ctx->pc != 0x3C0C18u) { return; }
    }
    ctx->pc = 0x3C0C18u;
label_3c0c18:
    // 0x3c0c18: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x3c0c18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_3c0c1c:
    // 0x3c0c1c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3c0c1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c0c20:
    // 0x3c0c20: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_3c0c24:
    if (ctx->pc == 0x3C0C24u) {
        ctx->pc = 0x3C0C28u;
        goto label_3c0c28;
    }
    ctx->pc = 0x3C0C20u;
    {
        const bool branch_taken_0x3c0c20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c0c20) {
            ctx->pc = 0x3C0C44u;
            goto label_3c0c44;
        }
    }
    ctx->pc = 0x3C0C28u;
label_3c0c28:
    // 0x3c0c28: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3c0c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3c0c2c:
    // 0x3c0c2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c0c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c0c30:
    // 0x3c0c30: 0xc4408438  lwc1        $f0, -0x7BC8($v0)
    ctx->pc = 0x3c0c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294935608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c0c34:
    // 0x3c0c34: 0xc0efe7c  jal         func_3BF9F0
label_3c0c38:
    if (ctx->pc == 0x3C0C38u) {
        ctx->pc = 0x3C0C38u;
            // 0x3c0c38: 0x46150302  mul.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->pc = 0x3C0C3Cu;
        goto label_3c0c3c;
    }
    ctx->pc = 0x3C0C34u;
    SET_GPR_U32(ctx, 31, 0x3C0C3Cu);
    ctx->pc = 0x3C0C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0C34u;
            // 0x3c0c38: 0x46150302  mul.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF9F0u;
    if (runtime->hasFunction(0x3BF9F0u)) {
        auto targetFn = runtime->lookupFunction(0x3BF9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0C3Cu; }
        if (ctx->pc != 0x3C0C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF9F0_0x3bf9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0C3Cu; }
        if (ctx->pc != 0x3C0C3Cu) { return; }
    }
    ctx->pc = 0x3C0C3Cu;
label_3c0c3c:
    // 0x3c0c3c: 0x10000004  b           . + 4 + (0x4 << 2)
label_3c0c40:
    if (ctx->pc == 0x3C0C40u) {
        ctx->pc = 0x3C0C44u;
        goto label_3c0c44;
    }
    ctx->pc = 0x3C0C3Cu;
    {
        const bool branch_taken_0x3c0c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c0c3c) {
            ctx->pc = 0x3C0C50u;
            goto label_3c0c50;
        }
    }
    ctx->pc = 0x3C0C44u;
label_3c0c44:
    // 0x3c0c44: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3c0c44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c0c48:
    // 0x3c0c48: 0xc0efe7c  jal         func_3BF9F0
label_3c0c4c:
    if (ctx->pc == 0x3C0C4Cu) {
        ctx->pc = 0x3C0C4Cu;
            // 0x3c0c4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0C50u;
        goto label_3c0c50;
    }
    ctx->pc = 0x3C0C48u;
    SET_GPR_U32(ctx, 31, 0x3C0C50u);
    ctx->pc = 0x3C0C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0C48u;
            // 0x3c0c4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF9F0u;
    if (runtime->hasFunction(0x3BF9F0u)) {
        auto targetFn = runtime->lookupFunction(0x3BF9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0C50u; }
        if (ctx->pc != 0x3C0C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF9F0_0x3bf9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0C50u; }
        if (ctx->pc != 0x3C0C50u) { return; }
    }
    ctx->pc = 0x3C0C50u;
label_3c0c50:
    // 0x3c0c50: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3c0c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c0c54:
    // 0x3c0c54: 0xc0efdd0  jal         func_3BF740
label_3c0c58:
    if (ctx->pc == 0x3C0C58u) {
        ctx->pc = 0x3C0C5Cu;
        goto label_3c0c5c;
    }
    ctx->pc = 0x3C0C54u;
    SET_GPR_U32(ctx, 31, 0x3C0C5Cu);
    ctx->pc = 0x3BF740u;
    if (runtime->hasFunction(0x3BF740u)) {
        auto targetFn = runtime->lookupFunction(0x3BF740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0C5Cu; }
        if (ctx->pc != 0x3C0C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF740_0x3bf740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0C5Cu; }
        if (ctx->pc != 0x3C0C5Cu) { return; }
    }
    ctx->pc = 0x3C0C5Cu;
label_3c0c5c:
    // 0x3c0c5c: 0xc0efdcc  jal         func_3BF730
label_3c0c60:
    if (ctx->pc == 0x3C0C60u) {
        ctx->pc = 0x3C0C60u;
            // 0x3c0c60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0C64u;
        goto label_3c0c64;
    }
    ctx->pc = 0x3C0C5Cu;
    SET_GPR_U32(ctx, 31, 0x3C0C64u);
    ctx->pc = 0x3C0C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0C5Cu;
            // 0x3c0c60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF730u;
    if (runtime->hasFunction(0x3BF730u)) {
        auto targetFn = runtime->lookupFunction(0x3BF730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0C64u; }
        if (ctx->pc != 0x3C0C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF730_0x3bf730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0C64u; }
        if (ctx->pc != 0x3C0C64u) { return; }
    }
    ctx->pc = 0x3C0C64u;
label_3c0c64:
    // 0x3c0c64: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3c0c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_3c0c68:
    // 0x3c0c68: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
label_3c0c6c:
    if (ctx->pc == 0x3C0C6Cu) {
        ctx->pc = 0x3C0C6Cu;
            // 0x3c0c6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0C70u;
        goto label_3c0c70;
    }
    ctx->pc = 0x3C0C68u;
    {
        const bool branch_taken_0x3c0c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c0c68) {
            ctx->pc = 0x3C0C6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0C68u;
            // 0x3c0c6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C0CD4u;
            goto label_3c0cd4;
        }
    }
    ctx->pc = 0x3C0C70u;
label_3c0c70:
    // 0x3c0c70: 0xc077584  jal         func_1DD610
label_3c0c74:
    if (ctx->pc == 0x3C0C74u) {
        ctx->pc = 0x3C0C74u;
            // 0x3c0c74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0C78u;
        goto label_3c0c78;
    }
    ctx->pc = 0x3C0C70u;
    SET_GPR_U32(ctx, 31, 0x3C0C78u);
    ctx->pc = 0x3C0C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0C70u;
            // 0x3c0c74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD610u;
    if (runtime->hasFunction(0x1DD610u)) {
        auto targetFn = runtime->lookupFunction(0x1DD610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0C78u; }
        if (ctx->pc != 0x3C0C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD610_0x1dd610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0C78u; }
        if (ctx->pc != 0x3C0C78u) { return; }
    }
    ctx->pc = 0x3C0C78u;
label_3c0c78:
    // 0x3c0c78: 0xc0efdc4  jal         func_3BF710
label_3c0c7c:
    if (ctx->pc == 0x3C0C7Cu) {
        ctx->pc = 0x3C0C7Cu;
            // 0x3c0c7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0C80u;
        goto label_3c0c80;
    }
    ctx->pc = 0x3C0C78u;
    SET_GPR_U32(ctx, 31, 0x3C0C80u);
    ctx->pc = 0x3C0C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0C78u;
            // 0x3c0c7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF710u;
    if (runtime->hasFunction(0x3BF710u)) {
        auto targetFn = runtime->lookupFunction(0x3BF710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0C80u; }
        if (ctx->pc != 0x3C0C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF710_0x3bf710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0C80u; }
        if (ctx->pc != 0x3C0C80u) { return; }
    }
    ctx->pc = 0x3C0C80u;
label_3c0c80:
    // 0x3c0c80: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x3c0c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_3c0c84:
    // 0x3c0c84: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_3c0c88:
    if (ctx->pc == 0x3C0C88u) {
        ctx->pc = 0x3C0C8Cu;
        goto label_3c0c8c;
    }
    ctx->pc = 0x3C0C84u;
    {
        const bool branch_taken_0x3c0c84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c0c84) {
            ctx->pc = 0x3C0CD0u;
            goto label_3c0cd0;
        }
    }
    ctx->pc = 0x3C0C8Cu;
label_3c0c8c:
    // 0x3c0c8c: 0xc0775b8  jal         func_1DD6E0
label_3c0c90:
    if (ctx->pc == 0x3C0C90u) {
        ctx->pc = 0x3C0C94u;
        goto label_3c0c94;
    }
    ctx->pc = 0x3C0C8Cu;
    SET_GPR_U32(ctx, 31, 0x3C0C94u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0C94u; }
        if (ctx->pc != 0x3C0C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0C94u; }
        if (ctx->pc != 0x3C0C94u) { return; }
    }
    ctx->pc = 0x3C0C94u;
label_3c0c94:
    // 0x3c0c94: 0xc0775b4  jal         func_1DD6D0
label_3c0c98:
    if (ctx->pc == 0x3C0C98u) {
        ctx->pc = 0x3C0C98u;
            // 0x3c0c98: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3C0C9Cu;
        goto label_3c0c9c;
    }
    ctx->pc = 0x3C0C94u;
    SET_GPR_U32(ctx, 31, 0x3C0C9Cu);
    ctx->pc = 0x3C0C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0C94u;
            // 0x3c0c98: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0C9Cu; }
        if (ctx->pc != 0x3C0C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0C9Cu; }
        if (ctx->pc != 0x3C0C9Cu) { return; }
    }
    ctx->pc = 0x3C0C9Cu;
label_3c0c9c:
    // 0x3c0c9c: 0xc60101c8  lwc1        $f1, 0x1C8($s0)
    ctx->pc = 0x3c0c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c0ca0:
    // 0x3c0ca0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c0ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c0ca4:
    // 0x3c0ca4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x3c0ca4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_3c0ca8:
    // 0x3c0ca8: 0xc0efd68  jal         func_3BF5A0
label_3c0cac:
    if (ctx->pc == 0x3C0CACu) {
        ctx->pc = 0x3C0CACu;
            // 0x3c0cac: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3C0CB0u;
        goto label_3c0cb0;
    }
    ctx->pc = 0x3C0CA8u;
    SET_GPR_U32(ctx, 31, 0x3C0CB0u);
    ctx->pc = 0x3C0CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0CA8u;
            // 0x3c0cac: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF5A0u;
    if (runtime->hasFunction(0x3BF5A0u)) {
        auto targetFn = runtime->lookupFunction(0x3BF5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0CB0u; }
        if (ctx->pc != 0x3C0CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF5A0_0x3bf5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0CB0u; }
        if (ctx->pc != 0x3C0CB0u) { return; }
    }
    ctx->pc = 0x3C0CB0u;
label_3c0cb0:
    // 0x3c0cb0: 0x8e190014  lw          $t9, 0x14($s0)
    ctx->pc = 0x3c0cb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3c0cb4:
    // 0x3c0cb4: 0x4600a302  mul.s       $f12, $f20, $f0
    ctx->pc = 0x3c0cb4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_3c0cb8:
    // 0x3c0cb8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x3c0cb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_3c0cbc:
    // 0x3c0cbc: 0x320f809  jalr        $t9
label_3c0cc0:
    if (ctx->pc == 0x3C0CC0u) {
        ctx->pc = 0x3C0CC0u;
            // 0x3c0cc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0CC4u;
        goto label_3c0cc4;
    }
    ctx->pc = 0x3C0CBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C0CC4u);
        ctx->pc = 0x3C0CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0CBCu;
            // 0x3c0cc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C0CC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C0CC4u; }
            if (ctx->pc != 0x3C0CC4u) { return; }
        }
        }
    }
    ctx->pc = 0x3C0CC4u;
label_3c0cc4:
    // 0x3c0cc4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3c0cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c0cc8:
    // 0x3c0cc8: 0xc077568  jal         func_1DD5A0
label_3c0ccc:
    if (ctx->pc == 0x3C0CCCu) {
        ctx->pc = 0x3C0CCCu;
            // 0x3c0ccc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x3C0CD0u;
        goto label_3c0cd0;
    }
    ctx->pc = 0x3C0CC8u;
    SET_GPR_U32(ctx, 31, 0x3C0CD0u);
    ctx->pc = 0x3C0CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0CC8u;
            // 0x3c0ccc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5A0u;
    if (runtime->hasFunction(0x1DD5A0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0CD0u; }
        if (ctx->pc != 0x3C0CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5A0_0x1dd5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0CD0u; }
        if (ctx->pc != 0x3C0CD0u) { return; }
    }
    ctx->pc = 0x3C0CD0u;
label_3c0cd0:
    // 0x3c0cd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c0cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c0cd4:
    // 0x3c0cd4: 0xc0f08f8  jal         func_3C23E0
label_3c0cd8:
    if (ctx->pc == 0x3C0CD8u) {
        ctx->pc = 0x3C0CDCu;
        goto label_3c0cdc;
    }
    ctx->pc = 0x3C0CD4u;
    SET_GPR_U32(ctx, 31, 0x3C0CDCu);
    ctx->pc = 0x3C23E0u;
    if (runtime->hasFunction(0x3C23E0u)) {
        auto targetFn = runtime->lookupFunction(0x3C23E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0CDCu; }
        if (ctx->pc != 0x3C0CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C23E0_0x3c23e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0CDCu; }
        if (ctx->pc != 0x3C0CDCu) { return; }
    }
    ctx->pc = 0x3C0CDCu;
label_3c0cdc:
    // 0x3c0cdc: 0xc07731c  jal         func_1DCC70
label_3c0ce0:
    if (ctx->pc == 0x3C0CE0u) {
        ctx->pc = 0x3C0CE0u;
            // 0x3c0ce0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0CE4u;
        goto label_3c0ce4;
    }
    ctx->pc = 0x3C0CDCu;
    SET_GPR_U32(ctx, 31, 0x3C0CE4u);
    ctx->pc = 0x3C0CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0CDCu;
            // 0x3c0ce0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC70u;
    if (runtime->hasFunction(0x1DCC70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0CE4u; }
        if (ctx->pc != 0x3C0CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC70_0x1dcc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0CE4u; }
        if (ctx->pc != 0x3C0CE4u) { return; }
    }
    ctx->pc = 0x3C0CE4u;
label_3c0ce4:
    // 0x3c0ce4: 0xc0efcc8  jal         func_3BF320
label_3c0ce8:
    if (ctx->pc == 0x3C0CE8u) {
        ctx->pc = 0x3C0CE8u;
            // 0x3c0ce8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0CECu;
        goto label_3c0cec;
    }
    ctx->pc = 0x3C0CE4u;
    SET_GPR_U32(ctx, 31, 0x3C0CECu);
    ctx->pc = 0x3C0CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0CE4u;
            // 0x3c0ce8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF320u;
    if (runtime->hasFunction(0x3BF320u)) {
        auto targetFn = runtime->lookupFunction(0x3BF320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0CECu; }
        if (ctx->pc != 0x3C0CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF320_0x3bf320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0CECu; }
        if (ctx->pc != 0x3C0CECu) { return; }
    }
    ctx->pc = 0x3C0CECu;
label_3c0cec:
    // 0x3c0cec: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x3c0cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_3c0cf0:
    // 0x3c0cf0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3c0cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3c0cf4:
    // 0x3c0cf4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_3c0cf8:
    if (ctx->pc == 0x3C0CF8u) {
        ctx->pc = 0x3C0CF8u;
            // 0x3c0cf8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3C0CFCu;
        goto label_3c0cfc;
    }
    ctx->pc = 0x3C0CF4u;
    {
        const bool branch_taken_0x3c0cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c0cf4) {
            ctx->pc = 0x3C0CF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0CF4u;
            // 0x3c0cf8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C0D10u;
            goto label_3c0d10;
        }
    }
    ctx->pc = 0x3C0CFCu;
label_3c0cfc:
    // 0x3c0cfc: 0x8e0201b8  lw          $v0, 0x1B8($s0)
    ctx->pc = 0x3c0cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
label_3c0d00:
    // 0x3c0d00: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3c0d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_3c0d04:
    // 0x3c0d04: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
label_3c0d08:
    if (ctx->pc == 0x3C0D08u) {
        ctx->pc = 0x3C0D08u;
            // 0x3c0d08: 0x260400d0  addiu       $a0, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->pc = 0x3C0D0Cu;
        goto label_3c0d0c;
    }
    ctx->pc = 0x3C0D04u;
    {
        const bool branch_taken_0x3c0d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c0d04) {
            ctx->pc = 0x3C0D08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0D04u;
            // 0x3c0d08: 0x260400d0  addiu       $a0, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C0D8Cu;
            goto label_3c0d8c;
        }
    }
    ctx->pc = 0x3C0D0Cu;
label_3c0d0c:
    // 0x3c0d0c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3c0d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c0d10:
    // 0x3c0d10: 0xc07756c  jal         func_1DD5B0
label_3c0d14:
    if (ctx->pc == 0x3C0D14u) {
        ctx->pc = 0x3C0D18u;
        goto label_3c0d18;
    }
    ctx->pc = 0x3C0D10u;
    SET_GPR_U32(ctx, 31, 0x3C0D18u);
    ctx->pc = 0x1DD5B0u;
    if (runtime->hasFunction(0x1DD5B0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0D18u; }
        if (ctx->pc != 0x3C0D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5B0_0x1dd5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0D18u; }
        if (ctx->pc != 0x3C0D18u) { return; }
    }
    ctx->pc = 0x3C0D18u;
label_3c0d18:
    // 0x3c0d18: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3c0d18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c0d1c:
    // 0x3c0d1c: 0x0  nop
    ctx->pc = 0x3c0d1cu;
    // NOP
label_3c0d20:
    // 0x3c0d20: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x3c0d20u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c0d24:
    // 0x3c0d24: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_3c0d28:
    if (ctx->pc == 0x3C0D28u) {
        ctx->pc = 0x3C0D28u;
            // 0x3c0d28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0D2Cu;
        goto label_3c0d2c;
    }
    ctx->pc = 0x3C0D24u;
    {
        const bool branch_taken_0x3c0d24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c0d24) {
            ctx->pc = 0x3C0D28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0D24u;
            // 0x3c0d28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C0D4Cu;
            goto label_3c0d4c;
        }
    }
    ctx->pc = 0x3C0D2Cu;
label_3c0d2c:
    // 0x3c0d2c: 0xc077584  jal         func_1DD610
label_3c0d30:
    if (ctx->pc == 0x3C0D30u) {
        ctx->pc = 0x3C0D30u;
            // 0x3c0d30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0D34u;
        goto label_3c0d34;
    }
    ctx->pc = 0x3C0D2Cu;
    SET_GPR_U32(ctx, 31, 0x3C0D34u);
    ctx->pc = 0x3C0D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0D2Cu;
            // 0x3c0d30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD610u;
    if (runtime->hasFunction(0x1DD610u)) {
        auto targetFn = runtime->lookupFunction(0x1DD610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0D34u; }
        if (ctx->pc != 0x3C0D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD610_0x1dd610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0D34u; }
        if (ctx->pc != 0x3C0D34u) { return; }
    }
    ctx->pc = 0x3C0D34u;
label_3c0d34:
    // 0x3c0d34: 0xc0efdc4  jal         func_3BF710
label_3c0d38:
    if (ctx->pc == 0x3C0D38u) {
        ctx->pc = 0x3C0D38u;
            // 0x3c0d38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0D3Cu;
        goto label_3c0d3c;
    }
    ctx->pc = 0x3C0D34u;
    SET_GPR_U32(ctx, 31, 0x3C0D3Cu);
    ctx->pc = 0x3C0D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0D34u;
            // 0x3c0d38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF710u;
    if (runtime->hasFunction(0x3BF710u)) {
        auto targetFn = runtime->lookupFunction(0x3BF710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0D3Cu; }
        if (ctx->pc != 0x3C0D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF710_0x3bf710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0D3Cu; }
        if (ctx->pc != 0x3C0D3Cu) { return; }
    }
    ctx->pc = 0x3C0D3Cu;
label_3c0d3c:
    // 0x3c0d3c: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x3c0d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_3c0d40:
    // 0x3c0d40: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_3c0d44:
    if (ctx->pc == 0x3C0D44u) {
        ctx->pc = 0x3C0D48u;
        goto label_3c0d48;
    }
    ctx->pc = 0x3C0D40u;
    {
        const bool branch_taken_0x3c0d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c0d40) {
            ctx->pc = 0x3C0D88u;
            goto label_3c0d88;
        }
    }
    ctx->pc = 0x3C0D48u;
label_3c0d48:
    // 0x3c0d48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c0d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c0d4c:
    // 0x3c0d4c: 0xc0efd64  jal         func_3BF590
label_3c0d50:
    if (ctx->pc == 0x3C0D50u) {
        ctx->pc = 0x3C0D54u;
        goto label_3c0d54;
    }
    ctx->pc = 0x3C0D4Cu;
    SET_GPR_U32(ctx, 31, 0x3C0D54u);
    ctx->pc = 0x3BF590u;
    if (runtime->hasFunction(0x3BF590u)) {
        auto targetFn = runtime->lookupFunction(0x3BF590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0D54u; }
        if (ctx->pc != 0x3C0D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF590_0x3bf590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0D54u; }
        if (ctx->pc != 0x3C0D54u) { return; }
    }
    ctx->pc = 0x3C0D54u;
label_3c0d54:
    // 0x3c0d54: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_3c0d58:
    if (ctx->pc == 0x3C0D58u) {
        ctx->pc = 0x3C0D58u;
            // 0x3c0d58: 0x920301bc  lbu         $v1, 0x1BC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 444)));
        ctx->pc = 0x3C0D5Cu;
        goto label_3c0d5c;
    }
    ctx->pc = 0x3C0D54u;
    {
        const bool branch_taken_0x3c0d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c0d54) {
            ctx->pc = 0x3C0D58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0D54u;
            // 0x3c0d58: 0x920301bc  lbu         $v1, 0x1BC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 444)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C0D7Cu;
            goto label_3c0d7c;
        }
    }
    ctx->pc = 0x3C0D5Cu;
label_3c0d5c:
    // 0x3c0d5c: 0xc077584  jal         func_1DD610
label_3c0d60:
    if (ctx->pc == 0x3C0D60u) {
        ctx->pc = 0x3C0D60u;
            // 0x3c0d60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0D64u;
        goto label_3c0d64;
    }
    ctx->pc = 0x3C0D5Cu;
    SET_GPR_U32(ctx, 31, 0x3C0D64u);
    ctx->pc = 0x3C0D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0D5Cu;
            // 0x3c0d60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD610u;
    if (runtime->hasFunction(0x1DD610u)) {
        auto targetFn = runtime->lookupFunction(0x1DD610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0D64u; }
        if (ctx->pc != 0x3C0D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD610_0x1dd610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0D64u; }
        if (ctx->pc != 0x3C0D64u) { return; }
    }
    ctx->pc = 0x3C0D64u;
label_3c0d64:
    // 0x3c0d64: 0xc0efdc4  jal         func_3BF710
label_3c0d68:
    if (ctx->pc == 0x3C0D68u) {
        ctx->pc = 0x3C0D68u;
            // 0x3c0d68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0D6Cu;
        goto label_3c0d6c;
    }
    ctx->pc = 0x3C0D64u;
    SET_GPR_U32(ctx, 31, 0x3C0D6Cu);
    ctx->pc = 0x3C0D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0D64u;
            // 0x3c0d68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF710u;
    if (runtime->hasFunction(0x3BF710u)) {
        auto targetFn = runtime->lookupFunction(0x3BF710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0D6Cu; }
        if (ctx->pc != 0x3C0D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF710_0x3bf710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0D6Cu; }
        if (ctx->pc != 0x3C0D6Cu) { return; }
    }
    ctx->pc = 0x3C0D6Cu;
label_3c0d6c:
    // 0x3c0d6c: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x3c0d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_3c0d70:
    // 0x3c0d70: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3c0d74:
    if (ctx->pc == 0x3C0D74u) {
        ctx->pc = 0x3C0D78u;
        goto label_3c0d78;
    }
    ctx->pc = 0x3C0D70u;
    {
        const bool branch_taken_0x3c0d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c0d70) {
            ctx->pc = 0x3C0D88u;
            goto label_3c0d88;
        }
    }
    ctx->pc = 0x3C0D78u;
label_3c0d78:
    // 0x3c0d78: 0x920301bc  lbu         $v1, 0x1BC($s0)
    ctx->pc = 0x3c0d78u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 444)));
label_3c0d7c:
    // 0x3c0d7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c0d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c0d80:
    // 0x3c0d80: 0x54620087  bnel        $v1, $v0, . + 4 + (0x87 << 2)
label_3c0d84:
    if (ctx->pc == 0x3C0D84u) {
        ctx->pc = 0x3C0D84u;
            // 0x3c0d84: 0xc60101cc  lwc1        $f1, 0x1CC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x3C0D88u;
        goto label_3c0d88;
    }
    ctx->pc = 0x3C0D80u;
    {
        const bool branch_taken_0x3c0d80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c0d80) {
            ctx->pc = 0x3C0D84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0D80u;
            // 0x3c0d84: 0xc60101cc  lwc1        $f1, 0x1CC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C0FA0u;
            goto label_3c0fa0;
        }
    }
    ctx->pc = 0x3C0D88u;
label_3c0d88:
    // 0x3c0d88: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x3c0d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_3c0d8c:
    // 0x3c0d8c: 0xc0f00c8  jal         func_3C0320
label_3c0d90:
    if (ctx->pc == 0x3C0D90u) {
        ctx->pc = 0x3C0D94u;
        goto label_3c0d94;
    }
    ctx->pc = 0x3C0D8Cu;
    SET_GPR_U32(ctx, 31, 0x3C0D94u);
    ctx->pc = 0x3C0320u;
    if (runtime->hasFunction(0x3C0320u)) {
        auto targetFn = runtime->lookupFunction(0x3C0320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0D94u; }
        if (ctx->pc != 0x3C0D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C0320_0x3c0320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0D94u; }
        if (ctx->pc != 0x3C0D94u) { return; }
    }
    ctx->pc = 0x3C0D94u;
label_3c0d94:
    // 0x3c0d94: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3c0d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_3c0d98:
    // 0x3c0d98: 0x144000b4  bnez        $v0, . + 4 + (0xB4 << 2)
label_3c0d9c:
    if (ctx->pc == 0x3C0D9Cu) {
        ctx->pc = 0x3C0DA0u;
        goto label_3c0da0;
    }
    ctx->pc = 0x3C0D98u;
    {
        const bool branch_taken_0x3c0d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c0d98) {
            ctx->pc = 0x3C106Cu;
            goto label_3c106c;
        }
    }
    ctx->pc = 0x3C0DA0u;
label_3c0da0:
    // 0x3c0da0: 0xc077330  jal         func_1DCCC0
label_3c0da4:
    if (ctx->pc == 0x3C0DA4u) {
        ctx->pc = 0x3C0DA4u;
            // 0x3c0da4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0DA8u;
        goto label_3c0da8;
    }
    ctx->pc = 0x3C0DA0u;
    SET_GPR_U32(ctx, 31, 0x3C0DA8u);
    ctx->pc = 0x3C0DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0DA0u;
            // 0x3c0da4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCCC0u;
    if (runtime->hasFunction(0x1DCCC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0DA8u; }
        if (ctx->pc != 0x3C0DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCCC0_0x1dccc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0DA8u; }
        if (ctx->pc != 0x3C0DA8u) { return; }
    }
    ctx->pc = 0x3C0DA8u;
label_3c0da8:
    // 0x3c0da8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3c0dac:
    if (ctx->pc == 0x3C0DACu) {
        ctx->pc = 0x3C0DB0u;
        goto label_3c0db0;
    }
    ctx->pc = 0x3C0DA8u;
    {
        const bool branch_taken_0x3c0da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c0da8) {
            ctx->pc = 0x3C0DC0u;
            goto label_3c0dc0;
        }
    }
    ctx->pc = 0x3C0DB0u;
label_3c0db0:
    // 0x3c0db0: 0xc07732c  jal         func_1DCCB0
label_3c0db4:
    if (ctx->pc == 0x3C0DB4u) {
        ctx->pc = 0x3C0DB4u;
            // 0x3c0db4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0DB8u;
        goto label_3c0db8;
    }
    ctx->pc = 0x3C0DB0u;
    SET_GPR_U32(ctx, 31, 0x3C0DB8u);
    ctx->pc = 0x3C0DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0DB0u;
            // 0x3c0db4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCCB0u;
    if (runtime->hasFunction(0x1DCCB0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0DB8u; }
        if (ctx->pc != 0x3C0DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCCB0_0x1dccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0DB8u; }
        if (ctx->pc != 0x3C0DB8u) { return; }
    }
    ctx->pc = 0x3C0DB8u;
label_3c0db8:
    // 0x3c0db8: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_3c0dbc:
    if (ctx->pc == 0x3C0DBCu) {
        ctx->pc = 0x3C0DBCu;
            // 0x3c0dbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0DC0u;
        goto label_3c0dc0;
    }
    ctx->pc = 0x3C0DB8u;
    {
        const bool branch_taken_0x3c0db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c0db8) {
            ctx->pc = 0x3C0DBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0DB8u;
            // 0x3c0dbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C0E14u;
            goto label_3c0e14;
        }
    }
    ctx->pc = 0x3C0DC0u;
label_3c0dc0:
    // 0x3c0dc0: 0xc0c05c4  jal         func_301710
label_3c0dc4:
    if (ctx->pc == 0x3C0DC4u) {
        ctx->pc = 0x3C0DC8u;
        goto label_3c0dc8;
    }
    ctx->pc = 0x3C0DC0u;
    SET_GPR_U32(ctx, 31, 0x3C0DC8u);
    ctx->pc = 0x301710u;
    if (runtime->hasFunction(0x301710u)) {
        auto targetFn = runtime->lookupFunction(0x301710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0DC8u; }
        if (ctx->pc != 0x3C0DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301710_0x301710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0DC8u; }
        if (ctx->pc != 0x3C0DC8u) { return; }
    }
    ctx->pc = 0x3C0DC8u;
label_3c0dc8:
    // 0x3c0dc8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3c0dc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c0dcc:
    // 0x3c0dcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c0dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c0dd0:
    // 0x3c0dd0: 0xc0770e0  jal         func_1DC380
label_3c0dd4:
    if (ctx->pc == 0x3C0DD4u) {
        ctx->pc = 0x3C0DD4u;
            // 0x3c0dd4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x3C0DD8u;
        goto label_3c0dd8;
    }
    ctx->pc = 0x3C0DD0u;
    SET_GPR_U32(ctx, 31, 0x3C0DD8u);
    ctx->pc = 0x3C0DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0DD0u;
            // 0x3c0dd4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC380u;
    if (runtime->hasFunction(0x1DC380u)) {
        auto targetFn = runtime->lookupFunction(0x1DC380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0DD8u; }
        if (ctx->pc != 0x3C0DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC380_0x1dc380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0DD8u; }
        if (ctx->pc != 0x3C0DD8u) { return; }
    }
    ctx->pc = 0x3C0DD8u;
label_3c0dd8:
    // 0x3c0dd8: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x3c0dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_3c0ddc:
    // 0x3c0ddc: 0xc0de62c  jal         func_3798B0
label_3c0de0:
    if (ctx->pc == 0x3C0DE0u) {
        ctx->pc = 0x3C0DE0u;
            // 0x3c0de0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0DE4u;
        goto label_3c0de4;
    }
    ctx->pc = 0x3C0DDCu;
    SET_GPR_U32(ctx, 31, 0x3C0DE4u);
    ctx->pc = 0x3C0DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0DDCu;
            // 0x3c0de0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3798B0u;
    if (runtime->hasFunction(0x3798B0u)) {
        auto targetFn = runtime->lookupFunction(0x3798B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0DE4u; }
        if (ctx->pc != 0x3C0DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003798B0_0x3798b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0DE4u; }
        if (ctx->pc != 0x3C0DE4u) { return; }
    }
    ctx->pc = 0x3C0DE4u;
label_3c0de4:
    // 0x3c0de4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_3c0de8:
    if (ctx->pc == 0x3C0DE8u) {
        ctx->pc = 0x3C0DECu;
        goto label_3c0dec;
    }
    ctx->pc = 0x3C0DE4u;
    {
        const bool branch_taken_0x3c0de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c0de4) {
            ctx->pc = 0x3C0E10u;
            goto label_3c0e10;
        }
    }
    ctx->pc = 0x3C0DECu;
label_3c0dec:
    // 0x3c0dec: 0xc0c05c4  jal         func_301710
label_3c0df0:
    if (ctx->pc == 0x3C0DF0u) {
        ctx->pc = 0x3C0DF4u;
        goto label_3c0df4;
    }
    ctx->pc = 0x3C0DECu;
    SET_GPR_U32(ctx, 31, 0x3C0DF4u);
    ctx->pc = 0x301710u;
    if (runtime->hasFunction(0x301710u)) {
        auto targetFn = runtime->lookupFunction(0x301710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0DF4u; }
        if (ctx->pc != 0x3C0DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301710_0x301710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0DF4u; }
        if (ctx->pc != 0x3C0DF4u) { return; }
    }
    ctx->pc = 0x3C0DF4u;
label_3c0df4:
    // 0x3c0df4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3c0df4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c0df8:
    // 0x3c0df8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c0df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c0dfc:
    // 0x3c0dfc: 0xc0770e0  jal         func_1DC380
label_3c0e00:
    if (ctx->pc == 0x3C0E00u) {
        ctx->pc = 0x3C0E00u;
            // 0x3c0e00: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x3C0E04u;
        goto label_3c0e04;
    }
    ctx->pc = 0x3C0DFCu;
    SET_GPR_U32(ctx, 31, 0x3C0E04u);
    ctx->pc = 0x3C0E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0DFCu;
            // 0x3c0e00: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC380u;
    if (runtime->hasFunction(0x1DC380u)) {
        auto targetFn = runtime->lookupFunction(0x1DC380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0E04u; }
        if (ctx->pc != 0x3C0E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC380_0x1dc380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0E04u; }
        if (ctx->pc != 0x3C0E04u) { return; }
    }
    ctx->pc = 0x3C0E04u;
label_3c0e04:
    // 0x3c0e04: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x3c0e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_3c0e08:
    // 0x3c0e08: 0xc0c05c0  jal         func_301700
label_3c0e0c:
    if (ctx->pc == 0x3C0E0Cu) {
        ctx->pc = 0x3C0E0Cu;
            // 0x3c0e0c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0E10u;
        goto label_3c0e10;
    }
    ctx->pc = 0x3C0E08u;
    SET_GPR_U32(ctx, 31, 0x3C0E10u);
    ctx->pc = 0x3C0E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0E08u;
            // 0x3c0e0c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301700u;
    if (runtime->hasFunction(0x301700u)) {
        auto targetFn = runtime->lookupFunction(0x301700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0E10u; }
        if (ctx->pc != 0x3C0E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301700_0x301700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0E10u; }
        if (ctx->pc != 0x3C0E10u) { return; }
    }
    ctx->pc = 0x3C0E10u;
label_3c0e10:
    // 0x3c0e10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c0e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c0e14:
    // 0x3c0e14: 0xc07626c  jal         func_1D89B0
label_3c0e18:
    if (ctx->pc == 0x3C0E18u) {
        ctx->pc = 0x3C0E18u;
            // 0x3c0e18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0E1Cu;
        goto label_3c0e1c;
    }
    ctx->pc = 0x3C0E14u;
    SET_GPR_U32(ctx, 31, 0x3C0E1Cu);
    ctx->pc = 0x3C0E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0E14u;
            // 0x3c0e18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D89B0u;
    if (runtime->hasFunction(0x1D89B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D89B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0E1Cu; }
        if (ctx->pc != 0x3C0E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D89B0_0x1d89b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0E1Cu; }
        if (ctx->pc != 0x3C0E1Cu) { return; }
    }
    ctx->pc = 0x3C0E1Cu;
label_3c0e1c:
    // 0x3c0e1c: 0xc0eeb1c  jal         func_3BAC70
label_3c0e20:
    if (ctx->pc == 0x3C0E20u) {
        ctx->pc = 0x3C0E20u;
            // 0x3c0e20: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3C0E24u;
        goto label_3c0e24;
    }
    ctx->pc = 0x3C0E1Cu;
    SET_GPR_U32(ctx, 31, 0x3C0E24u);
    ctx->pc = 0x3C0E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0E1Cu;
            // 0x3c0e20: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BAC70u;
    if (runtime->hasFunction(0x3BAC70u)) {
        auto targetFn = runtime->lookupFunction(0x3BAC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0E24u; }
        if (ctx->pc != 0x3C0E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BAC70_0x3bac70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0E24u; }
        if (ctx->pc != 0x3C0E24u) { return; }
    }
    ctx->pc = 0x3C0E24u;
label_3c0e24:
    // 0x3c0e24: 0x920201bc  lbu         $v0, 0x1BC($s0)
    ctx->pc = 0x3c0e24u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 444)));
label_3c0e28:
    // 0x3c0e28: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_3c0e2c:
    if (ctx->pc == 0x3C0E2Cu) {
        ctx->pc = 0x3C0E2Cu;
            // 0x3c0e2c: 0x8e0301ac  lw          $v1, 0x1AC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
        ctx->pc = 0x3C0E30u;
        goto label_3c0e30;
    }
    ctx->pc = 0x3C0E28u;
    {
        const bool branch_taken_0x3c0e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c0e28) {
            ctx->pc = 0x3C0E2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0E28u;
            // 0x3c0e2c: 0x8e0301ac  lw          $v1, 0x1AC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C0E44u;
            goto label_3c0e44;
        }
    }
    ctx->pc = 0x3C0E30u;
label_3c0e30:
    // 0x3c0e30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c0e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c0e34:
    // 0x3c0e34: 0xc0f0f84  jal         func_3C3E10
label_3c0e38:
    if (ctx->pc == 0x3C0E38u) {
        ctx->pc = 0x3C0E38u;
            // 0x3c0e38: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x3C0E3Cu;
        goto label_3c0e3c;
    }
    ctx->pc = 0x3C0E34u;
    SET_GPR_U32(ctx, 31, 0x3C0E3Cu);
    ctx->pc = 0x3C0E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0E34u;
            // 0x3c0e38: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3E10u;
    if (runtime->hasFunction(0x3C3E10u)) {
        auto targetFn = runtime->lookupFunction(0x3C3E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0E3Cu; }
        if (ctx->pc != 0x3C0E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3E10_0x3c3e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0E3Cu; }
        if (ctx->pc != 0x3C0E3Cu) { return; }
    }
    ctx->pc = 0x3C0E3Cu;
label_3c0e3c:
    // 0x3c0e3c: 0x10000057  b           . + 4 + (0x57 << 2)
label_3c0e40:
    if (ctx->pc == 0x3C0E40u) {
        ctx->pc = 0x3C0E44u;
        goto label_3c0e44;
    }
    ctx->pc = 0x3C0E3Cu;
    {
        const bool branch_taken_0x3c0e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c0e3c) {
            ctx->pc = 0x3C0F9Cu;
            goto label_3c0f9c;
        }
    }
    ctx->pc = 0x3C0E44u;
label_3c0e44:
    // 0x3c0e44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c0e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c0e48:
    // 0x3c0e48: 0x50620052  beql        $v1, $v0, . + 4 + (0x52 << 2)
label_3c0e4c:
    if (ctx->pc == 0x3C0E4Cu) {
        ctx->pc = 0x3C0E4Cu;
            // 0x3c0e4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0E50u;
        goto label_3c0e50;
    }
    ctx->pc = 0x3C0E48u;
    {
        const bool branch_taken_0x3c0e48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3c0e48) {
            ctx->pc = 0x3C0E4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0E48u;
            // 0x3c0e4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C0F94u;
            goto label_3c0f94;
        }
    }
    ctx->pc = 0x3C0E50u;
label_3c0e50:
    // 0x3c0e50: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3c0e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c0e54:
    // 0x3c0e54: 0x1062004e  beq         $v1, $v0, . + 4 + (0x4E << 2)
label_3c0e58:
    if (ctx->pc == 0x3C0E58u) {
        ctx->pc = 0x3C0E5Cu;
        goto label_3c0e5c;
    }
    ctx->pc = 0x3C0E54u;
    {
        const bool branch_taken_0x3c0e54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3c0e54) {
            ctx->pc = 0x3C0F90u;
            goto label_3c0f90;
        }
    }
    ctx->pc = 0x3C0E5Cu;
label_3c0e5c:
    // 0x3c0e5c: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_3c0e60:
    if (ctx->pc == 0x3C0E60u) {
        ctx->pc = 0x3C0E60u;
            // 0x3c0e60: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x3C0E64u;
        goto label_3c0e64;
    }
    ctx->pc = 0x3C0E5Cu;
    {
        const bool branch_taken_0x3c0e5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c0e5c) {
            ctx->pc = 0x3C0E60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0E5Cu;
            // 0x3c0e60: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C0E6Cu;
            goto label_3c0e6c;
        }
    }
    ctx->pc = 0x3C0E64u;
label_3c0e64:
    // 0x3c0e64: 0x1000004d  b           . + 4 + (0x4D << 2)
label_3c0e68:
    if (ctx->pc == 0x3C0E68u) {
        ctx->pc = 0x3C0E6Cu;
        goto label_3c0e6c;
    }
    ctx->pc = 0x3C0E64u;
    {
        const bool branch_taken_0x3c0e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c0e64) {
            ctx->pc = 0x3C0F9Cu;
            goto label_3c0f9c;
        }
    }
    ctx->pc = 0x3C0E6Cu;
label_3c0e6c:
    // 0x3c0e6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c0e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c0e70:
    // 0x3c0e70: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x3c0e70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_3c0e74:
    // 0x3c0e74: 0x320f809  jalr        $t9
label_3c0e78:
    if (ctx->pc == 0x3C0E78u) {
        ctx->pc = 0x3C0E78u;
            // 0x3c0e78: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x3C0E7Cu;
        goto label_3c0e7c;
    }
    ctx->pc = 0x3C0E74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C0E7Cu);
        ctx->pc = 0x3C0E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0E74u;
            // 0x3c0e78: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C0E7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C0E7Cu; }
            if (ctx->pc != 0x3C0E7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3C0E7Cu;
label_3c0e7c:
    // 0x3c0e7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c0e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c0e80:
    // 0x3c0e80: 0xc0e1100  jal         func_384400
label_3c0e84:
    if (ctx->pc == 0x3C0E84u) {
        ctx->pc = 0x3C0E84u;
            // 0x3c0e84: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x3C0E88u;
        goto label_3c0e88;
    }
    ctx->pc = 0x3C0E80u;
    SET_GPR_U32(ctx, 31, 0x3C0E88u);
    ctx->pc = 0x3C0E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0E80u;
            // 0x3c0e84: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384400u;
    if (runtime->hasFunction(0x384400u)) {
        auto targetFn = runtime->lookupFunction(0x384400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0E88u; }
        if (ctx->pc != 0x3C0E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384400_0x384400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0E88u; }
        if (ctx->pc != 0x3C0E88u) { return; }
    }
    ctx->pc = 0x3C0E88u;
label_3c0e88:
    // 0x3c0e88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c0e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c0e8c:
    // 0x3c0e8c: 0xc0e1104  jal         func_384410
label_3c0e90:
    if (ctx->pc == 0x3C0E90u) {
        ctx->pc = 0x3C0E90u;
            // 0x3c0e90: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x3C0E94u;
        goto label_3c0e94;
    }
    ctx->pc = 0x3C0E8Cu;
    SET_GPR_U32(ctx, 31, 0x3C0E94u);
    ctx->pc = 0x3C0E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0E8Cu;
            // 0x3c0e90: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384410u;
    if (runtime->hasFunction(0x384410u)) {
        auto targetFn = runtime->lookupFunction(0x384410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0E94u; }
        if (ctx->pc != 0x3C0E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384410_0x384410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0E94u; }
        if (ctx->pc != 0x3C0E94u) { return; }
    }
    ctx->pc = 0x3C0E94u;
label_3c0e94:
    // 0x3c0e94: 0xc0e110c  jal         func_384430
label_3c0e98:
    if (ctx->pc == 0x3C0E98u) {
        ctx->pc = 0x3C0E98u;
            // 0x3c0e98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0E9Cu;
        goto label_3c0e9c;
    }
    ctx->pc = 0x3C0E94u;
    SET_GPR_U32(ctx, 31, 0x3C0E9Cu);
    ctx->pc = 0x3C0E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0E94u;
            // 0x3c0e98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384430u;
    if (runtime->hasFunction(0x384430u)) {
        auto targetFn = runtime->lookupFunction(0x384430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0E9Cu; }
        if (ctx->pc != 0x3C0E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384430_0x384430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0E9Cu; }
        if (ctx->pc != 0x3C0E9Cu) { return; }
    }
    ctx->pc = 0x3C0E9Cu;
label_3c0e9c:
    // 0x3c0e9c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3c0e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_3c0ea0:
    // 0x3c0ea0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c0ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c0ea4:
    // 0x3c0ea4: 0xc04cc04  jal         func_133010
label_3c0ea8:
    if (ctx->pc == 0x3C0EA8u) {
        ctx->pc = 0x3C0EA8u;
            // 0x3c0ea8: 0x24a58470  addiu       $a1, $a1, -0x7B90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935664));
        ctx->pc = 0x3C0EACu;
        goto label_3c0eac;
    }
    ctx->pc = 0x3C0EA4u;
    SET_GPR_U32(ctx, 31, 0x3C0EACu);
    ctx->pc = 0x3C0EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0EA4u;
            // 0x3c0ea8: 0x24a58470  addiu       $a1, $a1, -0x7B90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0EACu; }
        if (ctx->pc != 0x3C0EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0EACu; }
        if (ctx->pc != 0x3C0EACu) { return; }
    }
    ctx->pc = 0x3C0EACu;
label_3c0eac:
    // 0x3c0eac: 0xc0775d8  jal         func_1DD760
label_3c0eb0:
    if (ctx->pc == 0x3C0EB0u) {
        ctx->pc = 0x3C0EB0u;
            // 0x3c0eb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0EB4u;
        goto label_3c0eb4;
    }
    ctx->pc = 0x3C0EACu;
    SET_GPR_U32(ctx, 31, 0x3C0EB4u);
    ctx->pc = 0x3C0EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0EACu;
            // 0x3c0eb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD760u;
    if (runtime->hasFunction(0x1DD760u)) {
        auto targetFn = runtime->lookupFunction(0x1DD760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0EB4u; }
        if (ctx->pc != 0x3C0EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD760_0x1dd760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0EB4u; }
        if (ctx->pc != 0x3C0EB4u) { return; }
    }
    ctx->pc = 0x3C0EB4u;
label_3c0eb4:
    // 0x3c0eb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c0eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c0eb8:
    // 0x3c0eb8: 0xc0f08f4  jal         func_3C23D0
label_3c0ebc:
    if (ctx->pc == 0x3C0EBCu) {
        ctx->pc = 0x3C0EBCu;
            // 0x3c0ebc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3C0EC0u;
        goto label_3c0ec0;
    }
    ctx->pc = 0x3C0EB8u;
    SET_GPR_U32(ctx, 31, 0x3C0EC0u);
    ctx->pc = 0x3C0EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0EB8u;
            // 0x3c0ebc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C23D0u;
    if (runtime->hasFunction(0x3C23D0u)) {
        auto targetFn = runtime->lookupFunction(0x3C23D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0EC0u; }
        if (ctx->pc != 0x3C0EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C23D0_0x3c23d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0EC0u; }
        if (ctx->pc != 0x3C0EC0u) { return; }
    }
    ctx->pc = 0x3C0EC0u;
label_3c0ec0:
    // 0x3c0ec0: 0xc0f08f0  jal         func_3C23C0
label_3c0ec4:
    if (ctx->pc == 0x3C0EC4u) {
        ctx->pc = 0x3C0EC4u;
            // 0x3c0ec4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0EC8u;
        goto label_3c0ec8;
    }
    ctx->pc = 0x3C0EC0u;
    SET_GPR_U32(ctx, 31, 0x3C0EC8u);
    ctx->pc = 0x3C0EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0EC0u;
            // 0x3c0ec4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C23C0u;
    if (runtime->hasFunction(0x3C23C0u)) {
        auto targetFn = runtime->lookupFunction(0x3C23C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0EC8u; }
        if (ctx->pc != 0x3C0EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C23C0_0x3c23c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0EC8u; }
        if (ctx->pc != 0x3C0EC8u) { return; }
    }
    ctx->pc = 0x3C0EC8u;
label_3c0ec8:
    // 0x3c0ec8: 0xc04f26c  jal         func_13C9B0
label_3c0ecc:
    if (ctx->pc == 0x3C0ECCu) {
        ctx->pc = 0x3C0ECCu;
            // 0x3c0ecc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0ED0u;
        goto label_3c0ed0;
    }
    ctx->pc = 0x3C0EC8u;
    SET_GPR_U32(ctx, 31, 0x3C0ED0u);
    ctx->pc = 0x3C0ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0EC8u;
            // 0x3c0ecc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0ED0u; }
        if (ctx->pc != 0x3C0ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0ED0u; }
        if (ctx->pc != 0x3C0ED0u) { return; }
    }
    ctx->pc = 0x3C0ED0u;
label_3c0ed0:
    // 0x3c0ed0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3c0ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c0ed4:
    // 0x3c0ed4: 0xc0eec24  jal         func_3BB090
label_3c0ed8:
    if (ctx->pc == 0x3C0ED8u) {
        ctx->pc = 0x3C0ED8u;
            // 0x3c0ed8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0EDCu;
        goto label_3c0edc;
    }
    ctx->pc = 0x3C0ED4u;
    SET_GPR_U32(ctx, 31, 0x3C0EDCu);
    ctx->pc = 0x3C0ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0ED4u;
            // 0x3c0ed8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BB090u;
    if (runtime->hasFunction(0x3BB090u)) {
        auto targetFn = runtime->lookupFunction(0x3BB090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0EDCu; }
        if (ctx->pc != 0x3C0EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BB090_0x3bb090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0EDCu; }
        if (ctx->pc != 0x3C0EDCu) { return; }
    }
    ctx->pc = 0x3C0EDCu;
label_3c0edc:
    // 0x3c0edc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3c0edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c0ee0:
    // 0x3c0ee0: 0xc0efc58  jal         func_3BF160
label_3c0ee4:
    if (ctx->pc == 0x3C0EE4u) {
        ctx->pc = 0x3C0EE4u;
            // 0x3c0ee4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0EE8u;
        goto label_3c0ee8;
    }
    ctx->pc = 0x3C0EE0u;
    SET_GPR_U32(ctx, 31, 0x3C0EE8u);
    ctx->pc = 0x3C0EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0EE0u;
            // 0x3c0ee4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF160u;
    if (runtime->hasFunction(0x3BF160u)) {
        auto targetFn = runtime->lookupFunction(0x3BF160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0EE8u; }
        if (ctx->pc != 0x3C0EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF160_0x3bf160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0EE8u; }
        if (ctx->pc != 0x3C0EE8u) { return; }
    }
    ctx->pc = 0x3C0EE8u;
label_3c0ee8:
    // 0x3c0ee8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3c0ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c0eec:
    // 0x3c0eec: 0xc0f0e7c  jal         func_3C39F0
label_3c0ef0:
    if (ctx->pc == 0x3C0EF0u) {
        ctx->pc = 0x3C0EF0u;
            // 0x3c0ef0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3C0EF4u;
        goto label_3c0ef4;
    }
    ctx->pc = 0x3C0EECu;
    SET_GPR_U32(ctx, 31, 0x3C0EF4u);
    ctx->pc = 0x3C0EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0EECu;
            // 0x3c0ef0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C39F0u;
    if (runtime->hasFunction(0x3C39F0u)) {
        auto targetFn = runtime->lookupFunction(0x3C39F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0EF4u; }
        if (ctx->pc != 0x3C0EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C39F0_0x3c39f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0EF4u; }
        if (ctx->pc != 0x3C0EF4u) { return; }
    }
    ctx->pc = 0x3C0EF4u;
label_3c0ef4:
    // 0x3c0ef4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c0ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c0ef8:
    // 0x3c0ef8: 0xc0772e8  jal         func_1DCBA0
label_3c0efc:
    if (ctx->pc == 0x3C0EFCu) {
        ctx->pc = 0x3C0EFCu;
            // 0x3c0efc: 0xae0001a0  sw          $zero, 0x1A0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 0));
        ctx->pc = 0x3C0F00u;
        goto label_3c0f00;
    }
    ctx->pc = 0x3C0EF8u;
    SET_GPR_U32(ctx, 31, 0x3C0F00u);
    ctx->pc = 0x3C0EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0EF8u;
            // 0x3c0efc: 0xae0001a0  sw          $zero, 0x1A0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBA0u;
    if (runtime->hasFunction(0x1DCBA0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0F00u; }
        if (ctx->pc != 0x3C0F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCBA0_0x1dcba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0F00u; }
        if (ctx->pc != 0x3C0F00u) { return; }
    }
    ctx->pc = 0x3C0F00u;
label_3c0f00:
    // 0x3c0f00: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3c0f00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c0f04:
    // 0x3c0f04: 0xc0772dc  jal         func_1DCB70
label_3c0f08:
    if (ctx->pc == 0x3C0F08u) {
        ctx->pc = 0x3C0F08u;
            // 0x3c0f08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0F0Cu;
        goto label_3c0f0c;
    }
    ctx->pc = 0x3C0F04u;
    SET_GPR_U32(ctx, 31, 0x3C0F0Cu);
    ctx->pc = 0x3C0F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0F04u;
            // 0x3c0f08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCB70u;
    if (runtime->hasFunction(0x1DCB70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0F0Cu; }
        if (ctx->pc != 0x3C0F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCB70_0x1dcb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0F0Cu; }
        if (ctx->pc != 0x3C0F0Cu) { return; }
    }
    ctx->pc = 0x3C0F0Cu;
label_3c0f0c:
    // 0x3c0f0c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3c0f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_3c0f10:
    // 0x3c0f10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c0f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c0f14:
    // 0x3c0f14: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3c0f14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c0f18:
    // 0x3c0f18: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3c0f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3c0f1c:
    // 0x3c0f1c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3c0f1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c0f20:
    // 0x3c0f20: 0xc0772d4  jal         func_1DCB50
label_3c0f24:
    if (ctx->pc == 0x3C0F24u) {
        ctx->pc = 0x3C0F24u;
            // 0x3c0f24: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x3C0F28u;
        goto label_3c0f28;
    }
    ctx->pc = 0x3C0F20u;
    SET_GPR_U32(ctx, 31, 0x3C0F28u);
    ctx->pc = 0x3C0F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0F20u;
            // 0x3c0f24: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCB50u;
    if (runtime->hasFunction(0x1DCB50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0F28u; }
        if (ctx->pc != 0x3C0F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCB50_0x1dcb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0F28u; }
        if (ctx->pc != 0x3C0F28u) { return; }
    }
    ctx->pc = 0x3C0F28u;
label_3c0f28:
    // 0x3c0f28: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3c0f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_3c0f2c:
    // 0x3c0f2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c0f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c0f30:
    // 0x3c0f30: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3c0f30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c0f34:
    // 0x3c0f34: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x3c0f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_3c0f38:
    // 0x3c0f38: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3c0f38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c0f3c:
    // 0x3c0f3c: 0xc0772d4  jal         func_1DCB50
label_3c0f40:
    if (ctx->pc == 0x3C0F40u) {
        ctx->pc = 0x3C0F40u;
            // 0x3c0f40: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x3C0F44u;
        goto label_3c0f44;
    }
    ctx->pc = 0x3C0F3Cu;
    SET_GPR_U32(ctx, 31, 0x3C0F44u);
    ctx->pc = 0x3C0F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0F3Cu;
            // 0x3c0f40: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCB50u;
    if (runtime->hasFunction(0x1DCB50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0F44u; }
        if (ctx->pc != 0x3C0F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCB50_0x1dcb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0F44u; }
        if (ctx->pc != 0x3C0F44u) { return; }
    }
    ctx->pc = 0x3C0F44u;
label_3c0f44:
    // 0x3c0f44: 0x8e590058  lw          $t9, 0x58($s2)
    ctx->pc = 0x3c0f44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_3c0f48:
    // 0x3c0f48: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3c0f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c0f4c:
    // 0x3c0f4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c0f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c0f50:
    // 0x3c0f50: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3c0f50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3c0f54:
    // 0x3c0f54: 0x320f809  jalr        $t9
label_3c0f58:
    if (ctx->pc == 0x3C0F58u) {
        ctx->pc = 0x3C0F58u;
            // 0x3c0f58: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0F5Cu;
        goto label_3c0f5c;
    }
    ctx->pc = 0x3C0F54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C0F5Cu);
        ctx->pc = 0x3C0F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0F54u;
            // 0x3c0f58: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C0F5Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C0F5Cu; }
            if (ctx->pc != 0x3C0F5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3C0F5Cu;
label_3c0f5c:
    // 0x3c0f5c: 0xc0770c0  jal         func_1DC300
label_3c0f60:
    if (ctx->pc == 0x3C0F60u) {
        ctx->pc = 0x3C0F60u;
            // 0x3c0f60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0F64u;
        goto label_3c0f64;
    }
    ctx->pc = 0x3C0F5Cu;
    SET_GPR_U32(ctx, 31, 0x3C0F64u);
    ctx->pc = 0x3C0F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0F5Cu;
            // 0x3c0f60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC300u;
    if (runtime->hasFunction(0x1DC300u)) {
        auto targetFn = runtime->lookupFunction(0x1DC300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0F64u; }
        if (ctx->pc != 0x3C0F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC300_0x1dc300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0F64u; }
        if (ctx->pc != 0x3C0F64u) { return; }
    }
    ctx->pc = 0x3C0F64u;
label_3c0f64:
    // 0x3c0f64: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3c0f64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c0f68:
    // 0x3c0f68: 0xc0efdf0  jal         func_3BF7C0
label_3c0f6c:
    if (ctx->pc == 0x3C0F6Cu) {
        ctx->pc = 0x3C0F6Cu;
            // 0x3c0f6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0F70u;
        goto label_3c0f70;
    }
    ctx->pc = 0x3C0F68u;
    SET_GPR_U32(ctx, 31, 0x3C0F70u);
    ctx->pc = 0x3C0F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0F68u;
            // 0x3c0f6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF7C0u;
    if (runtime->hasFunction(0x3BF7C0u)) {
        auto targetFn = runtime->lookupFunction(0x3BF7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0F70u; }
        if (ctx->pc != 0x3C0F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF7C0_0x3bf7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0F70u; }
        if (ctx->pc != 0x3C0F70u) { return; }
    }
    ctx->pc = 0x3C0F70u;
label_3c0f70:
    // 0x3c0f70: 0xc0770c0  jal         func_1DC300
label_3c0f74:
    if (ctx->pc == 0x3C0F74u) {
        ctx->pc = 0x3C0F74u;
            // 0x3c0f74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0F78u;
        goto label_3c0f78;
    }
    ctx->pc = 0x3C0F70u;
    SET_GPR_U32(ctx, 31, 0x3C0F78u);
    ctx->pc = 0x3C0F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0F70u;
            // 0x3c0f74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC300u;
    if (runtime->hasFunction(0x1DC300u)) {
        auto targetFn = runtime->lookupFunction(0x1DC300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0F78u; }
        if (ctx->pc != 0x3C0F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC300_0x1dc300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0F78u; }
        if (ctx->pc != 0x3C0F78u) { return; }
    }
    ctx->pc = 0x3C0F78u;
label_3c0f78:
    // 0x3c0f78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c0f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c0f7c:
    // 0x3c0f7c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x3c0f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_3c0f80:
    // 0x3c0f80: 0xc0efdec  jal         func_3BF7B0
label_3c0f84:
    if (ctx->pc == 0x3C0F84u) {
        ctx->pc = 0x3C0F84u;
            // 0x3c0f84: 0xc44c1360  lwc1        $f12, 0x1360($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x3C0F88u;
        goto label_3c0f88;
    }
    ctx->pc = 0x3C0F80u;
    SET_GPR_U32(ctx, 31, 0x3C0F88u);
    ctx->pc = 0x3C0F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0F80u;
            // 0x3c0f84: 0xc44c1360  lwc1        $f12, 0x1360($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF7B0u;
    if (runtime->hasFunction(0x3BF7B0u)) {
        auto targetFn = runtime->lookupFunction(0x3BF7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0F88u; }
        if (ctx->pc != 0x3C0F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF7B0_0x3bf7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0F88u; }
        if (ctx->pc != 0x3C0F88u) { return; }
    }
    ctx->pc = 0x3C0F88u;
label_3c0f88:
    // 0x3c0f88: 0x10000004  b           . + 4 + (0x4 << 2)
label_3c0f8c:
    if (ctx->pc == 0x3C0F8Cu) {
        ctx->pc = 0x3C0F90u;
        goto label_3c0f90;
    }
    ctx->pc = 0x3C0F88u;
    {
        const bool branch_taken_0x3c0f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c0f88) {
            ctx->pc = 0x3C0F9Cu;
            goto label_3c0f9c;
        }
    }
    ctx->pc = 0x3C0F90u;
label_3c0f90:
    // 0x3c0f90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c0f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c0f94:
    // 0x3c0f94: 0xc0f0f84  jal         func_3C3E10
label_3c0f98:
    if (ctx->pc == 0x3C0F98u) {
        ctx->pc = 0x3C0F98u;
            // 0x3c0f98: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x3C0F9Cu;
        goto label_3c0f9c;
    }
    ctx->pc = 0x3C0F94u;
    SET_GPR_U32(ctx, 31, 0x3C0F9Cu);
    ctx->pc = 0x3C0F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0F94u;
            // 0x3c0f98: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3E10u;
    if (runtime->hasFunction(0x3C3E10u)) {
        auto targetFn = runtime->lookupFunction(0x3C3E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0F9Cu; }
        if (ctx->pc != 0x3C0F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3E10_0x3c3e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0F9Cu; }
        if (ctx->pc != 0x3C0F9Cu) { return; }
    }
    ctx->pc = 0x3C0F9Cu;
label_3c0f9c:
    // 0x3c0f9c: 0xc60101cc  lwc1        $f1, 0x1CC($s0)
    ctx->pc = 0x3c0f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c0fa0:
    // 0x3c0fa0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c0fa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c0fa4:
    // 0x3c0fa4: 0x0  nop
    ctx->pc = 0x3c0fa4u;
    // NOP
label_3c0fa8:
    // 0x3c0fa8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3c0fa8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c0fac:
    // 0x3c0fac: 0x4501002f  bc1t        . + 4 + (0x2F << 2)
label_3c0fb0:
    if (ctx->pc == 0x3C0FB0u) {
        ctx->pc = 0x3C0FB4u;
        goto label_3c0fb4;
    }
    ctx->pc = 0x3C0FACu;
    {
        const bool branch_taken_0x3c0fac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c0fac) {
            ctx->pc = 0x3C106Cu;
            goto label_3c106c;
        }
    }
    ctx->pc = 0x3C0FB4u;
label_3c0fb4:
    // 0x3c0fb4: 0xc0775b8  jal         func_1DD6E0
label_3c0fb8:
    if (ctx->pc == 0x3C0FB8u) {
        ctx->pc = 0x3C0FBCu;
        goto label_3c0fbc;
    }
    ctx->pc = 0x3C0FB4u;
    SET_GPR_U32(ctx, 31, 0x3C0FBCu);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0FBCu; }
        if (ctx->pc != 0x3C0FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0FBCu; }
        if (ctx->pc != 0x3C0FBCu) { return; }
    }
    ctx->pc = 0x3C0FBCu;
label_3c0fbc:
    // 0x3c0fbc: 0xc0775b4  jal         func_1DD6D0
label_3c0fc0:
    if (ctx->pc == 0x3C0FC0u) {
        ctx->pc = 0x3C0FC0u;
            // 0x3c0fc0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3C0FC4u;
        goto label_3c0fc4;
    }
    ctx->pc = 0x3C0FBCu;
    SET_GPR_U32(ctx, 31, 0x3C0FC4u);
    ctx->pc = 0x3C0FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0FBCu;
            // 0x3c0fc0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0FC4u; }
        if (ctx->pc != 0x3C0FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0FC4u; }
        if (ctx->pc != 0x3C0FC4u) { return; }
    }
    ctx->pc = 0x3C0FC4u;
label_3c0fc4:
    // 0x3c0fc4: 0xc60201cc  lwc1        $f2, 0x1CC($s0)
    ctx->pc = 0x3c0fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c0fc8:
    // 0x3c0fc8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3c0fc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c0fcc:
    // 0x3c0fcc: 0x0  nop
    ctx->pc = 0x3c0fccu;
    // NOP
label_3c0fd0:
    // 0x3c0fd0: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x3c0fd0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_3c0fd4:
    // 0x3c0fd4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3c0fd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c0fd8:
    // 0x3c0fd8: 0x45000024  bc1f        . + 4 + (0x24 << 2)
label_3c0fdc:
    if (ctx->pc == 0x3C0FDCu) {
        ctx->pc = 0x3C0FDCu;
            // 0x3c0fdc: 0xe60001cc  swc1        $f0, 0x1CC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 460), bits); }
        ctx->pc = 0x3C0FE0u;
        goto label_3c0fe0;
    }
    ctx->pc = 0x3C0FD8u;
    {
        const bool branch_taken_0x3c0fd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C0FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0FD8u;
            // 0x3c0fdc: 0xe60001cc  swc1        $f0, 0x1CC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 460), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0fd8) {
            ctx->pc = 0x3C106Cu;
            goto label_3c106c;
        }
    }
    ctx->pc = 0x3C0FE0u;
label_3c0fe0:
    // 0x3c0fe0: 0xc0f0e94  jal         func_3C3A50
label_3c0fe4:
    if (ctx->pc == 0x3C0FE4u) {
        ctx->pc = 0x3C0FE4u;
            // 0x3c0fe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0FE8u;
        goto label_3c0fe8;
    }
    ctx->pc = 0x3C0FE0u;
    SET_GPR_U32(ctx, 31, 0x3C0FE8u);
    ctx->pc = 0x3C0FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0FE0u;
            // 0x3c0fe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3A50u;
    if (runtime->hasFunction(0x3C3A50u)) {
        auto targetFn = runtime->lookupFunction(0x3C3A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0FE8u; }
        if (ctx->pc != 0x3C0FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3A50_0x3c3a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0FE8u; }
        if (ctx->pc != 0x3C0FE8u) { return; }
    }
    ctx->pc = 0x3C0FE8u;
label_3c0fe8:
    // 0x3c0fe8: 0xc0775b0  jal         func_1DD6C0
label_3c0fec:
    if (ctx->pc == 0x3C0FECu) {
        ctx->pc = 0x3C0FF0u;
        goto label_3c0ff0;
    }
    ctx->pc = 0x3C0FE8u;
    SET_GPR_U32(ctx, 31, 0x3C0FF0u);
    ctx->pc = 0x1DD6C0u;
    if (runtime->hasFunction(0x1DD6C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0FF0u; }
        if (ctx->pc != 0x3C0FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6C0_0x1dd6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0FF0u; }
        if (ctx->pc != 0x3C0FF0u) { return; }
    }
    ctx->pc = 0x3C0FF0u;
label_3c0ff0:
    // 0x3c0ff0: 0xc0775ac  jal         func_1DD6B0
label_3c0ff4:
    if (ctx->pc == 0x3C0FF4u) {
        ctx->pc = 0x3C0FF4u;
            // 0x3c0ff4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C0FF8u;
        goto label_3c0ff8;
    }
    ctx->pc = 0x3C0FF0u;
    SET_GPR_U32(ctx, 31, 0x3C0FF8u);
    ctx->pc = 0x3C0FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0FF0u;
            // 0x3c0ff4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6B0u;
    if (runtime->hasFunction(0x1DD6B0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0FF8u; }
        if (ctx->pc != 0x3C0FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6B0_0x1dd6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0FF8u; }
        if (ctx->pc != 0x3C0FF8u) { return; }
    }
    ctx->pc = 0x3C0FF8u;
label_3c0ff8:
    // 0x3c0ff8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3c0ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3c0ffc:
    // 0x3c0ffc: 0x1043001b  beq         $v0, $v1, . + 4 + (0x1B << 2)
label_3c1000:
    if (ctx->pc == 0x3C1000u) {
        ctx->pc = 0x3C1004u;
        goto label_3c1004;
    }
    ctx->pc = 0x3C0FFCu;
    {
        const bool branch_taken_0x3c0ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c0ffc) {
            ctx->pc = 0x3C106Cu;
            goto label_3c106c;
        }
    }
    ctx->pc = 0x3C1004u;
label_3c1004:
    // 0x3c1004: 0xc0775b0  jal         func_1DD6C0
label_3c1008:
    if (ctx->pc == 0x3C1008u) {
        ctx->pc = 0x3C100Cu;
        goto label_3c100c;
    }
    ctx->pc = 0x3C1004u;
    SET_GPR_U32(ctx, 31, 0x3C100Cu);
    ctx->pc = 0x1DD6C0u;
    if (runtime->hasFunction(0x1DD6C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C100Cu; }
        if (ctx->pc != 0x3C100Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6C0_0x1dd6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C100Cu; }
        if (ctx->pc != 0x3C100Cu) { return; }
    }
    ctx->pc = 0x3C100Cu;
label_3c100c:
    // 0x3c100c: 0xc0775ac  jal         func_1DD6B0
label_3c1010:
    if (ctx->pc == 0x3C1010u) {
        ctx->pc = 0x3C1010u;
            // 0x3c1010: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1014u;
        goto label_3c1014;
    }
    ctx->pc = 0x3C100Cu;
    SET_GPR_U32(ctx, 31, 0x3C1014u);
    ctx->pc = 0x3C1010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C100Cu;
            // 0x3c1010: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6B0u;
    if (runtime->hasFunction(0x1DD6B0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1014u; }
        if (ctx->pc != 0x3C1014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6B0_0x1dd6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1014u; }
        if (ctx->pc != 0x3C1014u) { return; }
    }
    ctx->pc = 0x3C1014u;
label_3c1014:
    // 0x3c1014: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x3c1014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_3c1018:
    // 0x3c1018: 0x10430014  beq         $v0, $v1, . + 4 + (0x14 << 2)
label_3c101c:
    if (ctx->pc == 0x3C101Cu) {
        ctx->pc = 0x3C1020u;
        goto label_3c1020;
    }
    ctx->pc = 0x3C1018u;
    {
        const bool branch_taken_0x3c1018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c1018) {
            ctx->pc = 0x3C106Cu;
            goto label_3c106c;
        }
    }
    ctx->pc = 0x3C1020u;
label_3c1020:
    // 0x3c1020: 0xc0f0f8c  jal         func_3C3E30
label_3c1024:
    if (ctx->pc == 0x3C1024u) {
        ctx->pc = 0x3C1028u;
        goto label_3c1028;
    }
    ctx->pc = 0x3C1020u;
    SET_GPR_U32(ctx, 31, 0x3C1028u);
    ctx->pc = 0x3C3E30u;
    if (runtime->hasFunction(0x3C3E30u)) {
        auto targetFn = runtime->lookupFunction(0x3C3E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1028u; }
        if (ctx->pc != 0x3C1028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3E30_0x3c3e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1028u; }
        if (ctx->pc != 0x3C1028u) { return; }
    }
    ctx->pc = 0x3C1028u;
label_3c1028:
    // 0x3c1028: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_3c102c:
    if (ctx->pc == 0x3C102Cu) {
        ctx->pc = 0x3C1030u;
        goto label_3c1030;
    }
    ctx->pc = 0x3C1028u;
    {
        const bool branch_taken_0x3c1028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c1028) {
            ctx->pc = 0x3C106Cu;
            goto label_3c106c;
        }
    }
    ctx->pc = 0x3C1030u;
label_3c1030:
    // 0x3c1030: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c1030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3c1034:
    // 0x3c1034: 0xc0770e4  jal         func_1DC390
label_3c1038:
    if (ctx->pc == 0x3C1038u) {
        ctx->pc = 0x3C1038u;
            // 0x3c1038: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->pc = 0x3C103Cu;
        goto label_3c103c;
    }
    ctx->pc = 0x3C1034u;
    SET_GPR_U32(ctx, 31, 0x3C103Cu);
    ctx->pc = 0x3C1038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1034u;
            // 0x3c1038: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC390u;
    if (runtime->hasFunction(0x1DC390u)) {
        auto targetFn = runtime->lookupFunction(0x1DC390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C103Cu; }
        if (ctx->pc != 0x3C103Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC390_0x1dc390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C103Cu; }
        if (ctx->pc != 0x3C103Cu) { return; }
    }
    ctx->pc = 0x3C103Cu;
label_3c103c:
    // 0x3c103c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x3c103cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3c1040:
    // 0x3c1040: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
label_3c1044:
    if (ctx->pc == 0x3C1044u) {
        ctx->pc = 0x3C1048u;
        goto label_3c1048;
    }
    ctx->pc = 0x3C1040u;
    {
        const bool branch_taken_0x3c1040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c1040) {
            ctx->pc = 0x3C106Cu;
            goto label_3c106c;
        }
    }
    ctx->pc = 0x3C1048u;
label_3c1048:
    // 0x3c1048: 0xc0f0f8c  jal         func_3C3E30
label_3c104c:
    if (ctx->pc == 0x3C104Cu) {
        ctx->pc = 0x3C1050u;
        goto label_3c1050;
    }
    ctx->pc = 0x3C1048u;
    SET_GPR_U32(ctx, 31, 0x3C1050u);
    ctx->pc = 0x3C3E30u;
    if (runtime->hasFunction(0x3C3E30u)) {
        auto targetFn = runtime->lookupFunction(0x3C3E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1050u; }
        if (ctx->pc != 0x3C1050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3E30_0x3c3e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1050u; }
        if (ctx->pc != 0x3C1050u) { return; }
    }
    ctx->pc = 0x3C1050u;
label_3c1050:
    // 0x3c1050: 0xc0f6824  jal         func_3DA090
label_3c1054:
    if (ctx->pc == 0x3C1054u) {
        ctx->pc = 0x3C1054u;
            // 0x3c1054: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1058u;
        goto label_3c1058;
    }
    ctx->pc = 0x3C1050u;
    SET_GPR_U32(ctx, 31, 0x3C1058u);
    ctx->pc = 0x3C1054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1050u;
            // 0x3c1054: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DA090u;
    if (runtime->hasFunction(0x3DA090u)) {
        auto targetFn = runtime->lookupFunction(0x3DA090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1058u; }
        if (ctx->pc != 0x3C1058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DA090_0x3da090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1058u; }
        if (ctx->pc != 0x3C1058u) { return; }
    }
    ctx->pc = 0x3C1058u;
label_3c1058:
    // 0x3c1058: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3c105c:
    if (ctx->pc == 0x3C105Cu) {
        ctx->pc = 0x3C1060u;
        goto label_3c1060;
    }
    ctx->pc = 0x3C1058u;
    {
        const bool branch_taken_0x3c1058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c1058) {
            ctx->pc = 0x3C106Cu;
            goto label_3c106c;
        }
    }
    ctx->pc = 0x3C1060u;
label_3c1060:
    // 0x3c1060: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c1060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c1064:
    // 0x3c1064: 0xc0f6a54  jal         func_3DA950
label_3c1068:
    if (ctx->pc == 0x3C1068u) {
        ctx->pc = 0x3C1068u;
            // 0x3c1068: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C106Cu;
        goto label_3c106c;
    }
    ctx->pc = 0x3C1064u;
    SET_GPR_U32(ctx, 31, 0x3C106Cu);
    ctx->pc = 0x3C1068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1064u;
            // 0x3c1068: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DA950u;
    if (runtime->hasFunction(0x3DA950u)) {
        auto targetFn = runtime->lookupFunction(0x3DA950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C106Cu; }
        if (ctx->pc != 0x3C106Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DA950_0x3da950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C106Cu; }
        if (ctx->pc != 0x3C106Cu) { return; }
    }
    ctx->pc = 0x3C106Cu;
label_3c106c:
    // 0x3c106c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c106cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c1070:
    // 0x3c1070: 0xc07724c  jal         func_1DC930
label_3c1074:
    if (ctx->pc == 0x3C1074u) {
        ctx->pc = 0x3C1078u;
        goto label_3c1078;
    }
    ctx->pc = 0x3C1070u;
    SET_GPR_U32(ctx, 31, 0x3C1078u);
    ctx->pc = 0x1DC930u;
    if (runtime->hasFunction(0x1DC930u)) {
        auto targetFn = runtime->lookupFunction(0x1DC930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1078u; }
        if (ctx->pc != 0x3C1078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC930_0x1dc930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1078u; }
        if (ctx->pc != 0x3C1078u) { return; }
    }
    ctx->pc = 0x3C1078u;
label_3c1078:
    // 0x3c1078: 0xc0783b8  jal         func_1E0EE0
label_3c107c:
    if (ctx->pc == 0x3C107Cu) {
        ctx->pc = 0x3C107Cu;
            // 0x3c107c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1080u;
        goto label_3c1080;
    }
    ctx->pc = 0x3C1078u;
    SET_GPR_U32(ctx, 31, 0x3C1080u);
    ctx->pc = 0x3C107Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1078u;
            // 0x3c107c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0EE0u;
    if (runtime->hasFunction(0x1E0EE0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1080u; }
        if (ctx->pc != 0x3C1080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0EE0_0x1e0ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1080u; }
        if (ctx->pc != 0x3C1080u) { return; }
    }
    ctx->pc = 0x3C1080u;
label_3c1080:
    // 0x3c1080: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3c1080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3c1084:
    // 0x3c1084: 0x106004b7  beqz        $v1, . + 4 + (0x4B7 << 2)
label_3c1088:
    if (ctx->pc == 0x3C1088u) {
        ctx->pc = 0x3C108Cu;
        goto label_3c108c;
    }
    ctx->pc = 0x3C1084u;
    {
        const bool branch_taken_0x3c1084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c1084) {
            ctx->pc = 0x3C2364u;
            goto label_3c2364;
        }
    }
    ctx->pc = 0x3C108Cu;
label_3c108c:
    // 0x3c108c: 0xc07724c  jal         func_1DC930
label_3c1090:
    if (ctx->pc == 0x3C1090u) {
        ctx->pc = 0x3C1090u;
            // 0x3c1090: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1094u;
        goto label_3c1094;
    }
    ctx->pc = 0x3C108Cu;
    SET_GPR_U32(ctx, 31, 0x3C1094u);
    ctx->pc = 0x3C1090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C108Cu;
            // 0x3c1090: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC930u;
    if (runtime->hasFunction(0x1DC930u)) {
        auto targetFn = runtime->lookupFunction(0x1DC930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1094u; }
        if (ctx->pc != 0x3C1094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC930_0x1dc930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1094u; }
        if (ctx->pc != 0x3C1094u) { return; }
    }
    ctx->pc = 0x3C1094u;
label_3c1094:
    // 0x3c1094: 0xc0783b8  jal         func_1E0EE0
label_3c1098:
    if (ctx->pc == 0x3C1098u) {
        ctx->pc = 0x3C1098u;
            // 0x3c1098: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C109Cu;
        goto label_3c109c;
    }
    ctx->pc = 0x3C1094u;
    SET_GPR_U32(ctx, 31, 0x3C109Cu);
    ctx->pc = 0x3C1098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1094u;
            // 0x3c1098: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0EE0u;
    if (runtime->hasFunction(0x1E0EE0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C109Cu; }
        if (ctx->pc != 0x3C109Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0EE0_0x1e0ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C109Cu; }
        if (ctx->pc != 0x3C109Cu) { return; }
    }
    ctx->pc = 0x3C109Cu;
label_3c109c:
    // 0x3c109c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x3c109cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c10a0:
    // 0x3c10a0: 0x3c03477f  lui         $v1, 0x477F
    ctx->pc = 0x3c10a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18303 << 16));
label_3c10a4:
    // 0x3c10a4: 0x3464ff00  ori         $a0, $v1, 0xFF00
    ctx->pc = 0x3c10a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
label_3c10a8:
    // 0x3c10a8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3c10a8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c10ac:
    // 0x3c10ac: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3c10acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3c10b0:
    // 0x3c10b0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3c10b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3c10b4:
    // 0x3c10b4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x3c10b4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_3c10b8:
    // 0x3c10b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c10b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c10bc:
    // 0x3c10bc: 0x0  nop
    ctx->pc = 0x3c10bcu;
    // NOP
label_3c10c0:
    // 0x3c10c0: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x3c10c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_3c10c4:
    // 0x3c10c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c10c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c10c8:
    // 0x3c10c8: 0x450004a6  bc1f        . + 4 + (0x4A6 << 2)
label_3c10cc:
    if (ctx->pc == 0x3C10CCu) {
        ctx->pc = 0x3C10D0u;
        goto label_3c10d0;
    }
    ctx->pc = 0x3C10C8u;
    {
        const bool branch_taken_0x3c10c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c10c8) {
            ctx->pc = 0x3C2364u;
            goto label_3c2364;
        }
    }
    ctx->pc = 0x3C10D0u;
label_3c10d0:
    // 0x3c10d0: 0x3c024588  lui         $v0, 0x4588
    ctx->pc = 0x3c10d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17800 << 16));
label_3c10d4:
    // 0x3c10d4: 0x34428800  ori         $v0, $v0, 0x8800
    ctx->pc = 0x3c10d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34816);
label_3c10d8:
    // 0x3c10d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c10d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c10dc:
    // 0x3c10dc: 0x0  nop
    ctx->pc = 0x3c10dcu;
    // NOP
label_3c10e0:
    // 0x3c10e0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3c10e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3c10e4:
    // 0x3c10e4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c10e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3c10e8:
    // 0x3c10e8: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x3c10e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_3c10ec:
    // 0x3c10ec: 0xc07724c  jal         func_1DC930
label_3c10f0:
    if (ctx->pc == 0x3C10F0u) {
        ctx->pc = 0x3C10F0u;
            // 0x3c10f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C10F4u;
        goto label_3c10f4;
    }
    ctx->pc = 0x3C10ECu;
    SET_GPR_U32(ctx, 31, 0x3C10F4u);
    ctx->pc = 0x3C10F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C10ECu;
            // 0x3c10f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC930u;
    if (runtime->hasFunction(0x1DC930u)) {
        auto targetFn = runtime->lookupFunction(0x1DC930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C10F4u; }
        if (ctx->pc != 0x3C10F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC930_0x1dc930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C10F4u; }
        if (ctx->pc != 0x3C10F4u) { return; }
    }
    ctx->pc = 0x3C10F4u;
label_3c10f4:
    // 0x3c10f4: 0xc0783b4  jal         func_1E0ED0
label_3c10f8:
    if (ctx->pc == 0x3C10F8u) {
        ctx->pc = 0x3C10F8u;
            // 0x3c10f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C10FCu;
        goto label_3c10fc;
    }
    ctx->pc = 0x3C10F4u;
    SET_GPR_U32(ctx, 31, 0x3C10FCu);
    ctx->pc = 0x3C10F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C10F4u;
            // 0x3c10f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0ED0u;
    if (runtime->hasFunction(0x1E0ED0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C10FCu; }
        if (ctx->pc != 0x3C10FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0ED0_0x1e0ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C10FCu; }
        if (ctx->pc != 0x3C10FCu) { return; }
    }
    ctx->pc = 0x3C10FCu;
label_3c10fc:
    // 0x3c10fc: 0x10000499  b           . + 4 + (0x499 << 2)
label_3c1100:
    if (ctx->pc == 0x3C1100u) {
        ctx->pc = 0x3C1100u;
            // 0x3c1100: 0xac500008  sw          $s0, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
        ctx->pc = 0x3C1104u;
        goto label_3c1104;
    }
    ctx->pc = 0x3C10FCu;
    {
        const bool branch_taken_0x3c10fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C10FCu;
            // 0x3c1100: 0xac500008  sw          $s0, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c10fc) {
            ctx->pc = 0x3C2364u;
            goto label_3c2364;
        }
    }
    ctx->pc = 0x3C1104u;
label_3c1104:
    // 0x3c1104: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3c1104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c1108:
    // 0x3c1108: 0xc0eea50  jal         func_3BA940
label_3c110c:
    if (ctx->pc == 0x3C110Cu) {
        ctx->pc = 0x3C110Cu;
            // 0x3c110c: 0x8c910000  lw          $s1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3C1110u;
        goto label_3c1110;
    }
    ctx->pc = 0x3C1108u;
    SET_GPR_U32(ctx, 31, 0x3C1110u);
    ctx->pc = 0x3C110Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1108u;
            // 0x3c110c: 0x8c910000  lw          $s1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BA940u;
    if (runtime->hasFunction(0x3BA940u)) {
        auto targetFn = runtime->lookupFunction(0x3BA940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1110u; }
        if (ctx->pc != 0x3C1110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BA940_0x3ba940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1110u; }
        if (ctx->pc != 0x3C1110u) { return; }
    }
    ctx->pc = 0x3C1110u;
label_3c1110:
    // 0x3c1110: 0x8e0401a0  lw          $a0, 0x1A0($s0)
    ctx->pc = 0x3c1110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
label_3c1114:
    // 0x3c1114: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3c1114u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c1118:
    // 0x3c1118: 0x8f39009c  lw          $t9, 0x9C($t9)
    ctx->pc = 0x3c1118u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 156)));
label_3c111c:
    // 0x3c111c: 0x320f809  jalr        $t9
label_3c1120:
    if (ctx->pc == 0x3C1120u) {
        ctx->pc = 0x3C1120u;
            // 0x3c1120: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1124u;
        goto label_3c1124;
    }
    ctx->pc = 0x3C111Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C1124u);
        ctx->pc = 0x3C1120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C111Cu;
            // 0x3c1120: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C1124u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C1124u; }
            if (ctx->pc != 0x3C1124u) { return; }
        }
        }
    }
    ctx->pc = 0x3C1124u;
label_3c1124:
    // 0x3c1124: 0x26241150  addiu       $a0, $s1, 0x1150
    ctx->pc = 0x3c1124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4432));
label_3c1128:
    // 0x3c1128: 0xc12ca3c  jal         func_4B28F0
label_3c112c:
    if (ctx->pc == 0x3C112Cu) {
        ctx->pc = 0x3C112Cu;
            // 0x3c112c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x3C1130u;
        goto label_3c1130;
    }
    ctx->pc = 0x3C1128u;
    SET_GPR_U32(ctx, 31, 0x3C1130u);
    ctx->pc = 0x3C112Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1128u;
            // 0x3c112c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B28F0u;
    if (runtime->hasFunction(0x4B28F0u)) {
        auto targetFn = runtime->lookupFunction(0x4B28F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1130u; }
        if (ctx->pc != 0x3C1130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B28F0_0x4b28f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1130u; }
        if (ctx->pc != 0x3C1130u) { return; }
    }
    ctx->pc = 0x3C1130u;
label_3c1130:
    // 0x3c1130: 0x1000048c  b           . + 4 + (0x48C << 2)
label_3c1134:
    if (ctx->pc == 0x3C1134u) {
        ctx->pc = 0x3C1138u;
        goto label_3c1138;
    }
    ctx->pc = 0x3C1130u;
    {
        const bool branch_taken_0x3c1130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c1130) {
            ctx->pc = 0x3C2364u;
            goto label_3c2364;
        }
    }
    ctx->pc = 0x3C1138u;
label_3c1138:
    // 0x3c1138: 0xc0efea4  jal         func_3BFA90
label_3c113c:
    if (ctx->pc == 0x3C113Cu) {
        ctx->pc = 0x3C113Cu;
            // 0x3c113c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3C1140u;
        goto label_3c1140;
    }
    ctx->pc = 0x3C1138u;
    SET_GPR_U32(ctx, 31, 0x3C1140u);
    ctx->pc = 0x3C113Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1138u;
            // 0x3c113c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BFA90u;
    if (runtime->hasFunction(0x3BFA90u)) {
        auto targetFn = runtime->lookupFunction(0x3BFA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1140u; }
        if (ctx->pc != 0x3C1140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BFA90_0x3bfa90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1140u; }
        if (ctx->pc != 0x3C1140u) { return; }
    }
    ctx->pc = 0x3C1140u;
label_3c1140:
    // 0x3c1140: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c1140u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c1144:
    // 0x3c1144: 0xc0efea0  jal         func_3BFA80
label_3c1148:
    if (ctx->pc == 0x3C1148u) {
        ctx->pc = 0x3C1148u;
            // 0x3c1148: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C114Cu;
        goto label_3c114c;
    }
    ctx->pc = 0x3C1144u;
    SET_GPR_U32(ctx, 31, 0x3C114Cu);
    ctx->pc = 0x3C1148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1144u;
            // 0x3c1148: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BFA80u;
    if (runtime->hasFunction(0x3BFA80u)) {
        auto targetFn = runtime->lookupFunction(0x3BFA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C114Cu; }
        if (ctx->pc != 0x3C114Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BFA80_0x3bfa80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C114Cu; }
        if (ctx->pc != 0x3C114Cu) { return; }
    }
    ctx->pc = 0x3C114Cu;
label_3c114c:
    // 0x3c114c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c114cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c1150:
    // 0x3c1150: 0x50430078  beql        $v0, $v1, . + 4 + (0x78 << 2)
label_3c1154:
    if (ctx->pc == 0x3C1154u) {
        ctx->pc = 0x3C1154u;
            // 0x3c1154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1158u;
        goto label_3c1158;
    }
    ctx->pc = 0x3C1150u;
    {
        const bool branch_taken_0x3c1150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c1150) {
            ctx->pc = 0x3C1154u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1150u;
            // 0x3c1154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C1334u;
            goto label_3c1334;
        }
    }
    ctx->pc = 0x3C1158u;
label_3c1158:
    // 0x3c1158: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_3c115c:
    if (ctx->pc == 0x3C115Cu) {
        ctx->pc = 0x3C115Cu;
            // 0x3c115c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1160u;
        goto label_3c1160;
    }
    ctx->pc = 0x3C1158u;
    {
        const bool branch_taken_0x3c1158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c1158) {
            ctx->pc = 0x3C115Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1158u;
            // 0x3c115c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C1168u;
            goto label_3c1168;
        }
    }
    ctx->pc = 0x3C1160u;
label_3c1160:
    // 0x3c1160: 0x10000480  b           . + 4 + (0x480 << 2)
label_3c1164:
    if (ctx->pc == 0x3C1164u) {
        ctx->pc = 0x3C1168u;
        goto label_3c1168;
    }
    ctx->pc = 0x3C1160u;
    {
        const bool branch_taken_0x3c1160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c1160) {
            ctx->pc = 0x3C2364u;
            goto label_3c2364;
        }
    }
    ctx->pc = 0x3C1168u;
label_3c1168:
    // 0x3c1168: 0xc077228  jal         func_1DC8A0
label_3c116c:
    if (ctx->pc == 0x3C116Cu) {
        ctx->pc = 0x3C1170u;
        goto label_3c1170;
    }
    ctx->pc = 0x3C1168u;
    SET_GPR_U32(ctx, 31, 0x3C1170u);
    ctx->pc = 0x1DC8A0u;
    if (runtime->hasFunction(0x1DC8A0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1170u; }
        if (ctx->pc != 0x3C1170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC8A0_0x1dc8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1170u; }
        if (ctx->pc != 0x3C1170u) { return; }
    }
    ctx->pc = 0x3C1170u;
label_3c1170:
    // 0x3c1170: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_3c1174:
    if (ctx->pc == 0x3C1174u) {
        ctx->pc = 0x3C1174u;
            // 0x3c1174: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1178u;
        goto label_3c1178;
    }
    ctx->pc = 0x3C1170u;
    {
        const bool branch_taken_0x3c1170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c1170) {
            ctx->pc = 0x3C1174u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1170u;
            // 0x3c1174: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C119Cu;
            goto label_3c119c;
        }
    }
    ctx->pc = 0x3C1178u;
label_3c1178:
    // 0x3c1178: 0xc0f0e90  jal         func_3C3A40
label_3c117c:
    if (ctx->pc == 0x3C117Cu) {
        ctx->pc = 0x3C1180u;
        goto label_3c1180;
    }
    ctx->pc = 0x3C1178u;
    SET_GPR_U32(ctx, 31, 0x3C1180u);
    ctx->pc = 0x3C3A40u;
    if (runtime->hasFunction(0x3C3A40u)) {
        auto targetFn = runtime->lookupFunction(0x3C3A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1180u; }
        if (ctx->pc != 0x3C1180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3A40_0x3c3a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1180u; }
        if (ctx->pc != 0x3C1180u) { return; }
    }
    ctx->pc = 0x3C1180u;
label_3c1180:
    // 0x3c1180: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3c1180u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c1184:
    // 0x3c1184: 0xc077320  jal         func_1DCC80
label_3c1188:
    if (ctx->pc == 0x3C1188u) {
        ctx->pc = 0x3C1188u;
            // 0x3c1188: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C118Cu;
        goto label_3c118c;
    }
    ctx->pc = 0x3C1184u;
    SET_GPR_U32(ctx, 31, 0x3C118Cu);
    ctx->pc = 0x3C1188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1184u;
            // 0x3c1188: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC80u;
    if (runtime->hasFunction(0x1DCC80u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C118Cu; }
        if (ctx->pc != 0x3C118Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC80_0x1dcc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C118Cu; }
        if (ctx->pc != 0x3C118Cu) { return; }
    }
    ctx->pc = 0x3C118Cu;
label_3c118c:
    // 0x3c118c: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x3c118cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_3c1190:
    // 0x3c1190: 0xc0f0d68  jal         func_3C35A0
label_3c1194:
    if (ctx->pc == 0x3C1194u) {
        ctx->pc = 0x3C1194u;
            // 0x3c1194: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1198u;
        goto label_3c1198;
    }
    ctx->pc = 0x3C1190u;
    SET_GPR_U32(ctx, 31, 0x3C1198u);
    ctx->pc = 0x3C1194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1190u;
            // 0x3c1194: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C35A0u;
    if (runtime->hasFunction(0x3C35A0u)) {
        auto targetFn = runtime->lookupFunction(0x3C35A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1198u; }
        if (ctx->pc != 0x3C1198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C35A0_0x3c35a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1198u; }
        if (ctx->pc != 0x3C1198u) { return; }
    }
    ctx->pc = 0x3C1198u;
label_3c1198:
    // 0x3c1198: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c1198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c119c:
    // 0x3c119c: 0xc0f0e98  jal         func_3C3A60
label_3c11a0:
    if (ctx->pc == 0x3C11A0u) {
        ctx->pc = 0x3C11A4u;
        goto label_3c11a4;
    }
    ctx->pc = 0x3C119Cu;
    SET_GPR_U32(ctx, 31, 0x3C11A4u);
    ctx->pc = 0x3C3A60u;
    if (runtime->hasFunction(0x3C3A60u)) {
        auto targetFn = runtime->lookupFunction(0x3C3A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C11A4u; }
        if (ctx->pc != 0x3C11A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3A60_0x3c3a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C11A4u; }
        if (ctx->pc != 0x3C11A4u) { return; }
    }
    ctx->pc = 0x3C11A4u;
label_3c11a4:
    // 0x3c11a4: 0xc0f0e94  jal         func_3C3A50
label_3c11a8:
    if (ctx->pc == 0x3C11A8u) {
        ctx->pc = 0x3C11A8u;
            // 0x3c11a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C11ACu;
        goto label_3c11ac;
    }
    ctx->pc = 0x3C11A4u;
    SET_GPR_U32(ctx, 31, 0x3C11ACu);
    ctx->pc = 0x3C11A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C11A4u;
            // 0x3c11a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3A50u;
    if (runtime->hasFunction(0x3C3A50u)) {
        auto targetFn = runtime->lookupFunction(0x3C3A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C11ACu; }
        if (ctx->pc != 0x3C11ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3A50_0x3c3a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C11ACu; }
        if (ctx->pc != 0x3C11ACu) { return; }
    }
    ctx->pc = 0x3C11ACu;
label_3c11ac:
    // 0x3c11ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c11acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c11b0:
    // 0x3c11b0: 0xc0e1100  jal         func_384400
label_3c11b4:
    if (ctx->pc == 0x3C11B4u) {
        ctx->pc = 0x3C11B4u;
            // 0x3c11b4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x3C11B8u;
        goto label_3c11b8;
    }
    ctx->pc = 0x3C11B0u;
    SET_GPR_U32(ctx, 31, 0x3C11B8u);
    ctx->pc = 0x3C11B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C11B0u;
            // 0x3c11b4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384400u;
    if (runtime->hasFunction(0x384400u)) {
        auto targetFn = runtime->lookupFunction(0x384400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C11B8u; }
        if (ctx->pc != 0x3C11B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384400_0x384400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C11B8u; }
        if (ctx->pc != 0x3C11B8u) { return; }
    }
    ctx->pc = 0x3C11B8u;
label_3c11b8:
    // 0x3c11b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c11b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c11bc:
    // 0x3c11bc: 0xc0e1104  jal         func_384410
label_3c11c0:
    if (ctx->pc == 0x3C11C0u) {
        ctx->pc = 0x3C11C0u;
            // 0x3c11c0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x3C11C4u;
        goto label_3c11c4;
    }
    ctx->pc = 0x3C11BCu;
    SET_GPR_U32(ctx, 31, 0x3C11C4u);
    ctx->pc = 0x3C11C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C11BCu;
            // 0x3c11c0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384410u;
    if (runtime->hasFunction(0x384410u)) {
        auto targetFn = runtime->lookupFunction(0x384410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C11C4u; }
        if (ctx->pc != 0x3C11C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384410_0x384410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C11C4u; }
        if (ctx->pc != 0x3C11C4u) { return; }
    }
    ctx->pc = 0x3C11C4u;
label_3c11c4:
    // 0x3c11c4: 0x3c023fb1  lui         $v0, 0x3FB1
    ctx->pc = 0x3c11c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16305 << 16));
label_3c11c8:
    // 0x3c11c8: 0x3442c71c  ori         $v0, $v0, 0xC71C
    ctx->pc = 0x3c11c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50972);
label_3c11cc:
    // 0x3c11cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3c11ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c11d0:
    // 0x3c11d0: 0xc0c1a0c  jal         func_306830
label_3c11d4:
    if (ctx->pc == 0x3C11D4u) {
        ctx->pc = 0x3C11D4u;
            // 0x3c11d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C11D8u;
        goto label_3c11d8;
    }
    ctx->pc = 0x3C11D0u;
    SET_GPR_U32(ctx, 31, 0x3C11D8u);
    ctx->pc = 0x3C11D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C11D0u;
            // 0x3c11d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306830u;
    if (runtime->hasFunction(0x306830u)) {
        auto targetFn = runtime->lookupFunction(0x306830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C11D8u; }
        if (ctx->pc != 0x3C11D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306830_0x306830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C11D8u; }
        if (ctx->pc != 0x3C11D8u) { return; }
    }
    ctx->pc = 0x3C11D8u;
label_3c11d8:
    // 0x3c11d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3c11d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c11dc:
    // 0x3c11dc: 0xc0efe7c  jal         func_3BF9F0
label_3c11e0:
    if (ctx->pc == 0x3C11E0u) {
        ctx->pc = 0x3C11E0u;
            // 0x3c11e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C11E4u;
        goto label_3c11e4;
    }
    ctx->pc = 0x3C11DCu;
    SET_GPR_U32(ctx, 31, 0x3C11E4u);
    ctx->pc = 0x3C11E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C11DCu;
            // 0x3c11e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF9F0u;
    if (runtime->hasFunction(0x3BF9F0u)) {
        auto targetFn = runtime->lookupFunction(0x3BF9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C11E4u; }
        if (ctx->pc != 0x3C11E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF9F0_0x3bf9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C11E4u; }
        if (ctx->pc != 0x3C11E4u) { return; }
    }
    ctx->pc = 0x3C11E4u;
label_3c11e4:
    // 0x3c11e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c11e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c11e8:
    // 0x3c11e8: 0xc07649c  jal         func_1D9270
label_3c11ec:
    if (ctx->pc == 0x3C11ECu) {
        ctx->pc = 0x3C11ECu;
            // 0x3c11ec: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x3C11F0u;
        goto label_3c11f0;
    }
    ctx->pc = 0x3C11E8u;
    SET_GPR_U32(ctx, 31, 0x3C11F0u);
    ctx->pc = 0x3C11ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C11E8u;
            // 0x3c11ec: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C11F0u; }
        if (ctx->pc != 0x3C11F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C11F0u; }
        if (ctx->pc != 0x3C11F0u) { return; }
    }
    ctx->pc = 0x3C11F0u;
label_3c11f0:
    // 0x3c11f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3c11f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c11f4:
    // 0x3c11f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c11f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c11f8:
    // 0x3c11f8: 0xc0efe80  jal         func_3BFA00
label_3c11fc:
    if (ctx->pc == 0x3C11FCu) {
        ctx->pc = 0x3C11FCu;
            // 0x3c11fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3C1200u;
        goto label_3c1200;
    }
    ctx->pc = 0x3C11F8u;
    SET_GPR_U32(ctx, 31, 0x3C1200u);
    ctx->pc = 0x3C11FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C11F8u;
            // 0x3c11fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BFA00u;
    if (runtime->hasFunction(0x3BFA00u)) {
        auto targetFn = runtime->lookupFunction(0x3BFA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1200u; }
        if (ctx->pc != 0x3C1200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BFA00_0x3bfa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1200u; }
        if (ctx->pc != 0x3C1200u) { return; }
    }
    ctx->pc = 0x3C1200u;
label_3c1200:
    // 0x3c1200: 0xc0f0e80  jal         func_3C3A00
label_3c1204:
    if (ctx->pc == 0x3C1204u) {
        ctx->pc = 0x3C1204u;
            // 0x3c1204: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1208u;
        goto label_3c1208;
    }
    ctx->pc = 0x3C1200u;
    SET_GPR_U32(ctx, 31, 0x3C1208u);
    ctx->pc = 0x3C1204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1200u;
            // 0x3c1204: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3A00u;
    if (runtime->hasFunction(0x3C3A00u)) {
        auto targetFn = runtime->lookupFunction(0x3C3A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1208u; }
        if (ctx->pc != 0x3C1208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3A00_0x3c3a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1208u; }
        if (ctx->pc != 0x3C1208u) { return; }
    }
    ctx->pc = 0x3C1208u;
label_3c1208:
    // 0x3c1208: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3c1208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c120c:
    // 0x3c120c: 0xc0eeb2c  jal         func_3BACB0
label_3c1210:
    if (ctx->pc == 0x3C1210u) {
        ctx->pc = 0x3C1210u;
            // 0x3c1210: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x3C1214u;
        goto label_3c1214;
    }
    ctx->pc = 0x3C120Cu;
    SET_GPR_U32(ctx, 31, 0x3C1214u);
    ctx->pc = 0x3C1210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C120Cu;
            // 0x3c1210: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BACB0u;
    if (runtime->hasFunction(0x3BACB0u)) {
        auto targetFn = runtime->lookupFunction(0x3BACB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1214u; }
        if (ctx->pc != 0x3C1214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BACB0_0x3bacb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1214u; }
        if (ctx->pc != 0x3C1214u) { return; }
    }
    ctx->pc = 0x3C1214u;
label_3c1214:
    // 0x3c1214: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3c1214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c1218:
    // 0x3c1218: 0xc0f0e7c  jal         func_3C39F0
label_3c121c:
    if (ctx->pc == 0x3C121Cu) {
        ctx->pc = 0x3C121Cu;
            // 0x3c121c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3C1220u;
        goto label_3c1220;
    }
    ctx->pc = 0x3C1218u;
    SET_GPR_U32(ctx, 31, 0x3C1220u);
    ctx->pc = 0x3C121Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1218u;
            // 0x3c121c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C39F0u;
    if (runtime->hasFunction(0x3C39F0u)) {
        auto targetFn = runtime->lookupFunction(0x3C39F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1220u; }
        if (ctx->pc != 0x3C1220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C39F0_0x3c39f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1220u; }
        if (ctx->pc != 0x3C1220u) { return; }
    }
    ctx->pc = 0x3C1220u;
label_3c1220:
    // 0x3c1220: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3c1220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c1224:
    // 0x3c1224: 0xc0efc58  jal         func_3BF160
label_3c1228:
    if (ctx->pc == 0x3C1228u) {
        ctx->pc = 0x3C1228u;
            // 0x3c1228: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3C122Cu;
        goto label_3c122c;
    }
    ctx->pc = 0x3C1224u;
    SET_GPR_U32(ctx, 31, 0x3C122Cu);
    ctx->pc = 0x3C1228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1224u;
            // 0x3c1228: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF160u;
    if (runtime->hasFunction(0x3BF160u)) {
        auto targetFn = runtime->lookupFunction(0x3BF160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C122Cu; }
        if (ctx->pc != 0x3C122Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF160_0x3bf160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C122Cu; }
        if (ctx->pc != 0x3C122Cu) { return; }
    }
    ctx->pc = 0x3C122Cu;
label_3c122c:
    // 0x3c122c: 0xc07731c  jal         func_1DCC70
label_3c1230:
    if (ctx->pc == 0x3C1230u) {
        ctx->pc = 0x3C1230u;
            // 0x3c1230: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1234u;
        goto label_3c1234;
    }
    ctx->pc = 0x3C122Cu;
    SET_GPR_U32(ctx, 31, 0x3C1234u);
    ctx->pc = 0x3C1230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C122Cu;
            // 0x3c1230: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC70u;
    if (runtime->hasFunction(0x1DCC70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1234u; }
        if (ctx->pc != 0x3C1234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC70_0x1dcc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1234u; }
        if (ctx->pc != 0x3C1234u) { return; }
    }
    ctx->pc = 0x3C1234u;
label_3c1234:
    // 0x3c1234: 0x8c590030  lw          $t9, 0x30($v0)
    ctx->pc = 0x3c1234u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_3c1238:
    // 0x3c1238: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c1238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c123c:
    // 0x3c123c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3c123cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3c1240:
    // 0x3c1240: 0x320f809  jalr        $t9
label_3c1244:
    if (ctx->pc == 0x3C1244u) {
        ctx->pc = 0x3C1244u;
            // 0x3c1244: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x3C1248u;
        goto label_3c1248;
    }
    ctx->pc = 0x3C1240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C1248u);
        ctx->pc = 0x3C1244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1240u;
            // 0x3c1244: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C1248u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C1248u; }
            if (ctx->pc != 0x3C1248u) { return; }
        }
        }
    }
    ctx->pc = 0x3C1248u;
label_3c1248:
    // 0x3c1248: 0xc07724c  jal         func_1DC930
label_3c124c:
    if (ctx->pc == 0x3C124Cu) {
        ctx->pc = 0x3C124Cu;
            // 0x3c124c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1250u;
        goto label_3c1250;
    }
    ctx->pc = 0x3C1248u;
    SET_GPR_U32(ctx, 31, 0x3C1250u);
    ctx->pc = 0x3C124Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1248u;
            // 0x3c124c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC930u;
    if (runtime->hasFunction(0x1DC930u)) {
        auto targetFn = runtime->lookupFunction(0x1DC930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1250u; }
        if (ctx->pc != 0x3C1250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC930_0x1dc930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1250u; }
        if (ctx->pc != 0x3C1250u) { return; }
    }
    ctx->pc = 0x3C1250u;
label_3c1250:
    // 0x3c1250: 0xc0f08ec  jal         func_3C23B0
label_3c1254:
    if (ctx->pc == 0x3C1254u) {
        ctx->pc = 0x3C1254u;
            // 0x3c1254: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1258u;
        goto label_3c1258;
    }
    ctx->pc = 0x3C1250u;
    SET_GPR_U32(ctx, 31, 0x3C1258u);
    ctx->pc = 0x3C1254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1250u;
            // 0x3c1254: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C23B0u;
    if (runtime->hasFunction(0x3C23B0u)) {
        auto targetFn = runtime->lookupFunction(0x3C23B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1258u; }
        if (ctx->pc != 0x3C1258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C23B0_0x3c23b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1258u; }
        if (ctx->pc != 0x3C1258u) { return; }
    }
    ctx->pc = 0x3C1258u;
label_3c1258:
    // 0x3c1258: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c1258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c125c:
    // 0x3c125c: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x3c125cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_3c1260:
    // 0x3c1260: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3c1260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_3c1264:
    // 0x3c1264: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3c1264u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c1268:
    // 0x3c1268: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3c1268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c126c:
    // 0x3c126c: 0xc04cbd8  jal         func_132F60
label_3c1270:
    if (ctx->pc == 0x3C1270u) {
        ctx->pc = 0x3C1270u;
            // 0x3c1270: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3C1274u;
        goto label_3c1274;
    }
    ctx->pc = 0x3C126Cu;
    SET_GPR_U32(ctx, 31, 0x3C1274u);
    ctx->pc = 0x3C1270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C126Cu;
            // 0x3c1270: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1274u; }
        if (ctx->pc != 0x3C1274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1274u; }
        if (ctx->pc != 0x3C1274u) { return; }
    }
    ctx->pc = 0x3C1274u;
label_3c1274:
    // 0x3c1274: 0xc07724c  jal         func_1DC930
label_3c1278:
    if (ctx->pc == 0x3C1278u) {
        ctx->pc = 0x3C1278u;
            // 0x3c1278: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C127Cu;
        goto label_3c127c;
    }
    ctx->pc = 0x3C1274u;
    SET_GPR_U32(ctx, 31, 0x3C127Cu);
    ctx->pc = 0x3C1278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1274u;
            // 0x3c1278: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC930u;
    if (runtime->hasFunction(0x1DC930u)) {
        auto targetFn = runtime->lookupFunction(0x1DC930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C127Cu; }
        if (ctx->pc != 0x3C127Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC930_0x1dc930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C127Cu; }
        if (ctx->pc != 0x3C127Cu) { return; }
    }
    ctx->pc = 0x3C127Cu;
label_3c127c:
    // 0x3c127c: 0xc0783b8  jal         func_1E0EE0
label_3c1280:
    if (ctx->pc == 0x3C1280u) {
        ctx->pc = 0x3C1280u;
            // 0x3c1280: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1284u;
        goto label_3c1284;
    }
    ctx->pc = 0x3C127Cu;
    SET_GPR_U32(ctx, 31, 0x3C1284u);
    ctx->pc = 0x3C1280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C127Cu;
            // 0x3c1280: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0EE0u;
    if (runtime->hasFunction(0x1E0EE0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1284u; }
        if (ctx->pc != 0x3C1284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0EE0_0x1e0ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1284u; }
        if (ctx->pc != 0x3C1284u) { return; }
    }
    ctx->pc = 0x3C1284u;
label_3c1284:
    // 0x3c1284: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3c1284u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_3c1288:
    // 0x3c1288: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c1288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c128c:
    // 0x3c128c: 0xc07724c  jal         func_1DC930
label_3c1290:
    if (ctx->pc == 0x3C1290u) {
        ctx->pc = 0x3C1290u;
            // 0x3c1290: 0x241200b6  addiu       $s2, $zero, 0xB6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 182));
        ctx->pc = 0x3C1294u;
        goto label_3c1294;
    }
    ctx->pc = 0x3C128Cu;
    SET_GPR_U32(ctx, 31, 0x3C1294u);
    ctx->pc = 0x3C1290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C128Cu;
            // 0x3c1290: 0x241200b6  addiu       $s2, $zero, 0xB6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 182));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC930u;
    if (runtime->hasFunction(0x1DC930u)) {
        auto targetFn = runtime->lookupFunction(0x1DC930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1294u; }
        if (ctx->pc != 0x3C1294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC930_0x1dc930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1294u; }
        if (ctx->pc != 0x3C1294u) { return; }
    }
    ctx->pc = 0x3C1294u;
label_3c1294:
    // 0x3c1294: 0xc0783b4  jal         func_1E0ED0
label_3c1298:
    if (ctx->pc == 0x3C1298u) {
        ctx->pc = 0x3C1298u;
            // 0x3c1298: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C129Cu;
        goto label_3c129c;
    }
    ctx->pc = 0x3C1294u;
    SET_GPR_U32(ctx, 31, 0x3C129Cu);
    ctx->pc = 0x3C1298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1294u;
            // 0x3c1298: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0ED0u;
    if (runtime->hasFunction(0x1E0ED0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C129Cu; }
        if (ctx->pc != 0x3C129Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0ED0_0x1e0ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C129Cu; }
        if (ctx->pc != 0x3C129Cu) { return; }
    }
    ctx->pc = 0x3C129Cu;
label_3c129c:
    // 0x3c129c: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x3c129cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
label_3c12a0:
    // 0x3c12a0: 0xc0772e8  jal         func_1DCBA0
label_3c12a4:
    if (ctx->pc == 0x3C12A4u) {
        ctx->pc = 0x3C12A4u;
            // 0x3c12a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C12A8u;
        goto label_3c12a8;
    }
    ctx->pc = 0x3C12A0u;
    SET_GPR_U32(ctx, 31, 0x3C12A8u);
    ctx->pc = 0x3C12A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C12A0u;
            // 0x3c12a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBA0u;
    if (runtime->hasFunction(0x1DCBA0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C12A8u; }
        if (ctx->pc != 0x3C12A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCBA0_0x1dcba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C12A8u; }
        if (ctx->pc != 0x3C12A8u) { return; }
    }
    ctx->pc = 0x3C12A8u;
label_3c12a8:
    // 0x3c12a8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3c12a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c12ac:
    // 0x3c12ac: 0xc0772dc  jal         func_1DCB70
label_3c12b0:
    if (ctx->pc == 0x3C12B0u) {
        ctx->pc = 0x3C12B0u;
            // 0x3c12b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C12B4u;
        goto label_3c12b4;
    }
    ctx->pc = 0x3C12ACu;
    SET_GPR_U32(ctx, 31, 0x3C12B4u);
    ctx->pc = 0x3C12B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C12ACu;
            // 0x3c12b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCB70u;
    if (runtime->hasFunction(0x1DCB70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C12B4u; }
        if (ctx->pc != 0x3C12B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCB70_0x1dcb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C12B4u; }
        if (ctx->pc != 0x3C12B4u) { return; }
    }
    ctx->pc = 0x3C12B4u;
label_3c12b4:
    // 0x3c12b4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3c12b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3c12b8:
    // 0x3c12b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c12b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c12bc:
    // 0x3c12bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3c12bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c12c0:
    // 0x3c12c0: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x3c12c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_3c12c4:
    // 0x3c12c4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3c12c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c12c8:
    // 0x3c12c8: 0xc0772d4  jal         func_1DCB50
label_3c12cc:
    if (ctx->pc == 0x3C12CCu) {
        ctx->pc = 0x3C12CCu;
            // 0x3c12cc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x3C12D0u;
        goto label_3c12d0;
    }
    ctx->pc = 0x3C12C8u;
    SET_GPR_U32(ctx, 31, 0x3C12D0u);
    ctx->pc = 0x3C12CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C12C8u;
            // 0x3c12cc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCB50u;
    if (runtime->hasFunction(0x1DCB50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C12D0u; }
        if (ctx->pc != 0x3C12D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCB50_0x1dcb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C12D0u; }
        if (ctx->pc != 0x3C12D0u) { return; }
    }
    ctx->pc = 0x3C12D0u;
label_3c12d0:
    // 0x3c12d0: 0x8e590058  lw          $t9, 0x58($s2)
    ctx->pc = 0x3c12d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_3c12d4:
    // 0x3c12d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c12d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c12d8:
    // 0x3c12d8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3c12d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3c12dc:
    // 0x3c12dc: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3c12dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3c12e0:
    // 0x3c12e0: 0x320f809  jalr        $t9
label_3c12e4:
    if (ctx->pc == 0x3C12E4u) {
        ctx->pc = 0x3C12E4u;
            // 0x3c12e4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3C12E8u;
        goto label_3c12e8;
    }
    ctx->pc = 0x3C12E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C12E8u);
        ctx->pc = 0x3C12E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C12E0u;
            // 0x3c12e4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C12E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C12E8u; }
            if (ctx->pc != 0x3C12E8u) { return; }
        }
        }
    }
    ctx->pc = 0x3C12E8u;
label_3c12e8:
    // 0x3c12e8: 0xc0f0d1c  jal         func_3C3470
label_3c12ec:
    if (ctx->pc == 0x3C12ECu) {
        ctx->pc = 0x3C12ECu;
            // 0x3c12ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C12F0u;
        goto label_3c12f0;
    }
    ctx->pc = 0x3C12E8u;
    SET_GPR_U32(ctx, 31, 0x3C12F0u);
    ctx->pc = 0x3C12ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C12E8u;
            // 0x3c12ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3470u;
    if (runtime->hasFunction(0x3C3470u)) {
        auto targetFn = runtime->lookupFunction(0x3C3470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C12F0u; }
        if (ctx->pc != 0x3C12F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3470_0x3c3470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C12F0u; }
        if (ctx->pc != 0x3C12F0u) { return; }
    }
    ctx->pc = 0x3C12F0u;
label_3c12f0:
    // 0x3c12f0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3c12f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3c12f4:
    // 0x3c12f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c12f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c12f8:
    // 0x3c12f8: 0xae0201b0  sw          $v0, 0x1B0($s0)
    ctx->pc = 0x3c12f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 2));
label_3c12fc:
    // 0x3c12fc: 0x8e0201b8  lw          $v0, 0x1B8($s0)
    ctx->pc = 0x3c12fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
label_3c1300:
    // 0x3c1300: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x3c1300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_3c1304:
    // 0x3c1304: 0xc07731c  jal         func_1DCC70
label_3c1308:
    if (ctx->pc == 0x3C1308u) {
        ctx->pc = 0x3C1308u;
            // 0x3c1308: 0xae0201b8  sw          $v0, 0x1B8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 2));
        ctx->pc = 0x3C130Cu;
        goto label_3c130c;
    }
    ctx->pc = 0x3C1304u;
    SET_GPR_U32(ctx, 31, 0x3C130Cu);
    ctx->pc = 0x3C1308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1304u;
            // 0x3c1308: 0xae0201b8  sw          $v0, 0x1B8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC70u;
    if (runtime->hasFunction(0x1DCC70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C130Cu; }
        if (ctx->pc != 0x3C130Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC70_0x1dcc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C130Cu; }
        if (ctx->pc != 0x3C130Cu) { return; }
    }
    ctx->pc = 0x3C130Cu;
label_3c130c:
    // 0x3c130c: 0x8c590030  lw          $t9, 0x30($v0)
    ctx->pc = 0x3c130cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_3c1310:
    // 0x3c1310: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c1310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c1314:
    // 0x3c1314: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3c1314u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3c1318:
    // 0x3c1318: 0x3c020012  lui         $v0, 0x12
    ctx->pc = 0x3c1318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18 << 16));
label_3c131c:
    // 0x3c131c: 0x320f809  jalr        $t9
label_3c1320:
    if (ctx->pc == 0x3C1320u) {
        ctx->pc = 0x3C1320u;
            // 0x3c1320: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x3C1324u;
        goto label_3c1324;
    }
    ctx->pc = 0x3C131Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C1324u);
        ctx->pc = 0x3C1320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C131Cu;
            // 0x3c1320: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C1324u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C1324u; }
            if (ctx->pc != 0x3C1324u) { return; }
        }
        }
    }
    ctx->pc = 0x3C1324u;
label_3c1324:
    // 0x3c1324: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c1324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c1328:
    // 0x3c1328: 0xc0efdd8  jal         func_3BF760
label_3c132c:
    if (ctx->pc == 0x3C132Cu) {
        ctx->pc = 0x3C132Cu;
            // 0x3c132c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3C1330u;
        goto label_3c1330;
    }
    ctx->pc = 0x3C1328u;
    SET_GPR_U32(ctx, 31, 0x3C1330u);
    ctx->pc = 0x3C132Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1328u;
            // 0x3c132c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF760u;
    if (runtime->hasFunction(0x3BF760u)) {
        auto targetFn = runtime->lookupFunction(0x3BF760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1330u; }
        if (ctx->pc != 0x3C1330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF760_0x3bf760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1330u; }
        if (ctx->pc != 0x3C1330u) { return; }
    }
    ctx->pc = 0x3C1330u;
label_3c1330:
    // 0x3c1330: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c1330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c1334:
    // 0x3c1334: 0xc0f08f8  jal         func_3C23E0
label_3c1338:
    if (ctx->pc == 0x3C1338u) {
        ctx->pc = 0x3C133Cu;
        goto label_3c133c;
    }
    ctx->pc = 0x3C1334u;
    SET_GPR_U32(ctx, 31, 0x3C133Cu);
    ctx->pc = 0x3C23E0u;
    if (runtime->hasFunction(0x3C23E0u)) {
        auto targetFn = runtime->lookupFunction(0x3C23E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C133Cu; }
        if (ctx->pc != 0x3C133Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C23E0_0x3c23e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C133Cu; }
        if (ctx->pc != 0x3C133Cu) { return; }
    }
    ctx->pc = 0x3C133Cu;
label_3c133c:
    // 0x3c133c: 0xc60201b0  lwc1        $f2, 0x1B0($s0)
    ctx->pc = 0x3c133cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c1340:
    // 0x3c1340: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3c1340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3c1344:
    // 0x3c1344: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3c1344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3c1348:
    // 0x3c1348: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3c1348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3c134c:
    // 0x3c134c: 0x3c024588  lui         $v0, 0x4588
    ctx->pc = 0x3c134cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17800 << 16));
label_3c1350:
    // 0x3c1350: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x3c1350u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[3];
label_3c1354:
    // 0x3c1354: 0x34428800  ori         $v0, $v0, 0x8800
    ctx->pc = 0x3c1354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34816);
label_3c1358:
    // 0x3c1358: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3c1358u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c135c:
    // 0x3c135c: 0x0  nop
    ctx->pc = 0x3c135cu;
    // NOP
label_3c1360:
    // 0x3c1360: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3c1360u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_3c1364:
    // 0x3c1364: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c1364u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c1368:
    // 0x3c1368: 0x0  nop
    ctx->pc = 0x3c1368u;
    // NOP
label_3c136c:
    // 0x3c136c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3c136cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3c1370:
    // 0x3c1370: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c1370u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3c1374:
    // 0x3c1374: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x3c1374u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
label_3c1378:
    // 0x3c1378: 0xc07724c  jal         func_1DC930
label_3c137c:
    if (ctx->pc == 0x3C137Cu) {
        ctx->pc = 0x3C137Cu;
            // 0x3c137c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1380u;
        goto label_3c1380;
    }
    ctx->pc = 0x3C1378u;
    SET_GPR_U32(ctx, 31, 0x3C1380u);
    ctx->pc = 0x3C137Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1378u;
            // 0x3c137c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC930u;
    if (runtime->hasFunction(0x1DC930u)) {
        auto targetFn = runtime->lookupFunction(0x1DC930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1380u; }
        if (ctx->pc != 0x3C1380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC930_0x1dc930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1380u; }
        if (ctx->pc != 0x3C1380u) { return; }
    }
    ctx->pc = 0x3C1380u;
label_3c1380:
    // 0x3c1380: 0xc0783b4  jal         func_1E0ED0
label_3c1384:
    if (ctx->pc == 0x3C1384u) {
        ctx->pc = 0x3C1384u;
            // 0x3c1384: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1388u;
        goto label_3c1388;
    }
    ctx->pc = 0x3C1380u;
    SET_GPR_U32(ctx, 31, 0x3C1388u);
    ctx->pc = 0x3C1384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1380u;
            // 0x3c1384: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0ED0u;
    if (runtime->hasFunction(0x1E0ED0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1388u; }
        if (ctx->pc != 0x3C1388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0ED0_0x1e0ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1388u; }
        if (ctx->pc != 0x3C1388u) { return; }
    }
    ctx->pc = 0x3C1388u;
label_3c1388:
    // 0x3c1388: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x3c1388u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
label_3c138c:
    // 0x3c138c: 0xc0efdd0  jal         func_3BF740
label_3c1390:
    if (ctx->pc == 0x3C1390u) {
        ctx->pc = 0x3C1390u;
            // 0x3c1390: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3C1394u;
        goto label_3c1394;
    }
    ctx->pc = 0x3C138Cu;
    SET_GPR_U32(ctx, 31, 0x3C1394u);
    ctx->pc = 0x3C1390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C138Cu;
            // 0x3c1390: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF740u;
    if (runtime->hasFunction(0x3BF740u)) {
        auto targetFn = runtime->lookupFunction(0x3BF740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1394u; }
        if (ctx->pc != 0x3C1394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF740_0x3bf740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1394u; }
        if (ctx->pc != 0x3C1394u) { return; }
    }
    ctx->pc = 0x3C1394u;
label_3c1394:
    // 0x3c1394: 0xc0efdcc  jal         func_3BF730
label_3c1398:
    if (ctx->pc == 0x3C1398u) {
        ctx->pc = 0x3C1398u;
            // 0x3c1398: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C139Cu;
        goto label_3c139c;
    }
    ctx->pc = 0x3C1394u;
    SET_GPR_U32(ctx, 31, 0x3C139Cu);
    ctx->pc = 0x3C1398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1394u;
            // 0x3c1398: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF730u;
    if (runtime->hasFunction(0x3BF730u)) {
        auto targetFn = runtime->lookupFunction(0x3BF730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C139Cu; }
        if (ctx->pc != 0x3C139Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF730_0x3bf730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C139Cu; }
        if (ctx->pc != 0x3C139Cu) { return; }
    }
    ctx->pc = 0x3C139Cu;
label_3c139c:
    // 0x3c139c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3c139cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_3c13a0:
    // 0x3c13a0: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_3c13a4:
    if (ctx->pc == 0x3C13A4u) {
        ctx->pc = 0x3C13A8u;
        goto label_3c13a8;
    }
    ctx->pc = 0x3C13A0u;
    {
        const bool branch_taken_0x3c13a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c13a0) {
            ctx->pc = 0x3C1408u;
            goto label_3c1408;
        }
    }
    ctx->pc = 0x3C13A8u;
label_3c13a8:
    // 0x3c13a8: 0xc077584  jal         func_1DD610
label_3c13ac:
    if (ctx->pc == 0x3C13ACu) {
        ctx->pc = 0x3C13ACu;
            // 0x3c13ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C13B0u;
        goto label_3c13b0;
    }
    ctx->pc = 0x3C13A8u;
    SET_GPR_U32(ctx, 31, 0x3C13B0u);
    ctx->pc = 0x3C13ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C13A8u;
            // 0x3c13ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD610u;
    if (runtime->hasFunction(0x1DD610u)) {
        auto targetFn = runtime->lookupFunction(0x1DD610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C13B0u; }
        if (ctx->pc != 0x3C13B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD610_0x1dd610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C13B0u; }
        if (ctx->pc != 0x3C13B0u) { return; }
    }
    ctx->pc = 0x3C13B0u;
label_3c13b0:
    // 0x3c13b0: 0xc0efdc4  jal         func_3BF710
label_3c13b4:
    if (ctx->pc == 0x3C13B4u) {
        ctx->pc = 0x3C13B4u;
            // 0x3c13b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C13B8u;
        goto label_3c13b8;
    }
    ctx->pc = 0x3C13B0u;
    SET_GPR_U32(ctx, 31, 0x3C13B8u);
    ctx->pc = 0x3C13B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C13B0u;
            // 0x3c13b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF710u;
    if (runtime->hasFunction(0x3BF710u)) {
        auto targetFn = runtime->lookupFunction(0x3BF710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C13B8u; }
        if (ctx->pc != 0x3C13B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF710_0x3bf710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C13B8u; }
        if (ctx->pc != 0x3C13B8u) { return; }
    }
    ctx->pc = 0x3C13B8u;
label_3c13b8:
    // 0x3c13b8: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x3c13b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_3c13bc:
    // 0x3c13bc: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_3c13c0:
    if (ctx->pc == 0x3C13C0u) {
        ctx->pc = 0x3C13C4u;
        goto label_3c13c4;
    }
    ctx->pc = 0x3C13BCu;
    {
        const bool branch_taken_0x3c13bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c13bc) {
            ctx->pc = 0x3C1408u;
            goto label_3c1408;
        }
    }
    ctx->pc = 0x3C13C4u;
label_3c13c4:
    // 0x3c13c4: 0xc0775b8  jal         func_1DD6E0
label_3c13c8:
    if (ctx->pc == 0x3C13C8u) {
        ctx->pc = 0x3C13CCu;
        goto label_3c13cc;
    }
    ctx->pc = 0x3C13C4u;
    SET_GPR_U32(ctx, 31, 0x3C13CCu);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C13CCu; }
        if (ctx->pc != 0x3C13CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C13CCu; }
        if (ctx->pc != 0x3C13CCu) { return; }
    }
    ctx->pc = 0x3C13CCu;
label_3c13cc:
    // 0x3c13cc: 0xc0775b4  jal         func_1DD6D0
label_3c13d0:
    if (ctx->pc == 0x3C13D0u) {
        ctx->pc = 0x3C13D0u;
            // 0x3c13d0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3C13D4u;
        goto label_3c13d4;
    }
    ctx->pc = 0x3C13CCu;
    SET_GPR_U32(ctx, 31, 0x3C13D4u);
    ctx->pc = 0x3C13D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C13CCu;
            // 0x3c13d0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C13D4u; }
        if (ctx->pc != 0x3C13D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C13D4u; }
        if (ctx->pc != 0x3C13D4u) { return; }
    }
    ctx->pc = 0x3C13D4u;
label_3c13d4:
    // 0x3c13d4: 0xc60101c8  lwc1        $f1, 0x1C8($s0)
    ctx->pc = 0x3c13d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c13d8:
    // 0x3c13d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c13d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c13dc:
    // 0x3c13dc: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x3c13dcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_3c13e0:
    // 0x3c13e0: 0xc0efd68  jal         func_3BF5A0
label_3c13e4:
    if (ctx->pc == 0x3C13E4u) {
        ctx->pc = 0x3C13E4u;
            // 0x3c13e4: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3C13E8u;
        goto label_3c13e8;
    }
    ctx->pc = 0x3C13E0u;
    SET_GPR_U32(ctx, 31, 0x3C13E8u);
    ctx->pc = 0x3C13E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C13E0u;
            // 0x3c13e4: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF5A0u;
    if (runtime->hasFunction(0x3BF5A0u)) {
        auto targetFn = runtime->lookupFunction(0x3BF5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C13E8u; }
        if (ctx->pc != 0x3C13E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF5A0_0x3bf5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C13E8u; }
        if (ctx->pc != 0x3C13E8u) { return; }
    }
    ctx->pc = 0x3C13E8u;
label_3c13e8:
    // 0x3c13e8: 0x8e190014  lw          $t9, 0x14($s0)
    ctx->pc = 0x3c13e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3c13ec:
    // 0x3c13ec: 0x4600a302  mul.s       $f12, $f20, $f0
    ctx->pc = 0x3c13ecu;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_3c13f0:
    // 0x3c13f0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x3c13f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_3c13f4:
    // 0x3c13f4: 0x320f809  jalr        $t9
label_3c13f8:
    if (ctx->pc == 0x3C13F8u) {
        ctx->pc = 0x3C13F8u;
            // 0x3c13f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C13FCu;
        goto label_3c13fc;
    }
    ctx->pc = 0x3C13F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C13FCu);
        ctx->pc = 0x3C13F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C13F4u;
            // 0x3c13f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C13FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C13FCu; }
            if (ctx->pc != 0x3C13FCu) { return; }
        }
        }
    }
    ctx->pc = 0x3C13FCu;
label_3c13fc:
    // 0x3c13fc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3c13fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c1400:
    // 0x3c1400: 0xc077568  jal         func_1DD5A0
label_3c1404:
    if (ctx->pc == 0x3C1404u) {
        ctx->pc = 0x3C1404u;
            // 0x3c1404: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x3C1408u;
        goto label_3c1408;
    }
    ctx->pc = 0x3C1400u;
    SET_GPR_U32(ctx, 31, 0x3C1408u);
    ctx->pc = 0x3C1404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1400u;
            // 0x3c1404: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5A0u;
    if (runtime->hasFunction(0x1DD5A0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1408u; }
        if (ctx->pc != 0x3C1408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5A0_0x1dd5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1408u; }
        if (ctx->pc != 0x3C1408u) { return; }
    }
    ctx->pc = 0x3C1408u;
label_3c1408:
    // 0x3c1408: 0xc0775b8  jal         func_1DD6E0
label_3c140c:
    if (ctx->pc == 0x3C140Cu) {
        ctx->pc = 0x3C1410u;
        goto label_3c1410;
    }
    ctx->pc = 0x3C1408u;
    SET_GPR_U32(ctx, 31, 0x3C1410u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1410u; }
        if (ctx->pc != 0x3C1410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1410u; }
        if (ctx->pc != 0x3C1410u) { return; }
    }
    ctx->pc = 0x3C1410u;
label_3c1410:
    // 0x3c1410: 0xc0775b4  jal         func_1DD6D0
label_3c1414:
    if (ctx->pc == 0x3C1414u) {
        ctx->pc = 0x3C1414u;
            // 0x3c1414: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3C1418u;
        goto label_3c1418;
    }
    ctx->pc = 0x3C1410u;
    SET_GPR_U32(ctx, 31, 0x3C1418u);
    ctx->pc = 0x3C1414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1410u;
            // 0x3c1414: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1418u; }
        if (ctx->pc != 0x3C1418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1418u; }
        if (ctx->pc != 0x3C1418u) { return; }
    }
    ctx->pc = 0x3C1418u;
label_3c1418:
    // 0x3c1418: 0xc60201b0  lwc1        $f2, 0x1B0($s0)
    ctx->pc = 0x3c1418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c141c:
    // 0x3c141c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3c141cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c1420:
    // 0x3c1420: 0x0  nop
    ctx->pc = 0x3c1420u;
    // NOP
label_3c1424:
    // 0x3c1424: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x3c1424u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_3c1428:
    // 0x3c1428: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c1428u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c142c:
    // 0x3c142c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_3c1430:
    if (ctx->pc == 0x3C1430u) {
        ctx->pc = 0x3C1430u;
            // 0x3c1430: 0xe60001b0  swc1        $f0, 0x1B0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
        ctx->pc = 0x3C1434u;
        goto label_3c1434;
    }
    ctx->pc = 0x3C142Cu;
    {
        const bool branch_taken_0x3c142c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C1430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C142Cu;
            // 0x3c1430: 0xe60001b0  swc1        $f0, 0x1B0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c142c) {
            ctx->pc = 0x3C1440u;
            goto label_3c1440;
        }
    }
    ctx->pc = 0x3C1434u;
label_3c1434:
    // 0x3c1434: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c1434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c1438:
    // 0x3c1438: 0xc0f0f84  jal         func_3C3E10
label_3c143c:
    if (ctx->pc == 0x3C143Cu) {
        ctx->pc = 0x3C143Cu;
            // 0x3c143c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3C1440u;
        goto label_3c1440;
    }
    ctx->pc = 0x3C1438u;
    SET_GPR_U32(ctx, 31, 0x3C1440u);
    ctx->pc = 0x3C143Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1438u;
            // 0x3c143c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3E10u;
    if (runtime->hasFunction(0x3C3E10u)) {
        auto targetFn = runtime->lookupFunction(0x3C3E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1440u; }
        if (ctx->pc != 0x3C1440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3E10_0x3c3e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1440u; }
        if (ctx->pc != 0x3C1440u) { return; }
    }
    ctx->pc = 0x3C1440u;
label_3c1440:
    // 0x3c1440: 0xc0f0df8  jal         func_3C37E0
label_3c1444:
    if (ctx->pc == 0x3C1444u) {
        ctx->pc = 0x3C1444u;
            // 0x3c1444: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1448u;
        goto label_3c1448;
    }
    ctx->pc = 0x3C1440u;
    SET_GPR_U32(ctx, 31, 0x3C1448u);
    ctx->pc = 0x3C1444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1440u;
            // 0x3c1444: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C37E0u;
    if (runtime->hasFunction(0x3C37E0u)) {
        auto targetFn = runtime->lookupFunction(0x3C37E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1448u; }
        if (ctx->pc != 0x3C1448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C37E0_0x3c37e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1448u; }
        if (ctx->pc != 0x3C1448u) { return; }
    }
    ctx->pc = 0x3C1448u;
label_3c1448:
    // 0x3c1448: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c1448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c144c:
    // 0x3c144c: 0xc12ca3c  jal         func_4B28F0
label_3c1450:
    if (ctx->pc == 0x3C1450u) {
        ctx->pc = 0x3C1450u;
            // 0x3c1450: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x3C1454u;
        goto label_3c1454;
    }
    ctx->pc = 0x3C144Cu;
    SET_GPR_U32(ctx, 31, 0x3C1454u);
    ctx->pc = 0x3C1450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C144Cu;
            // 0x3c1450: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B28F0u;
    if (runtime->hasFunction(0x4B28F0u)) {
        auto targetFn = runtime->lookupFunction(0x4B28F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1454u; }
        if (ctx->pc != 0x3C1454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B28F0_0x4b28f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1454u; }
        if (ctx->pc != 0x3C1454u) { return; }
    }
    ctx->pc = 0x3C1454u;
label_3c1454:
    // 0x3c1454: 0x100003c3  b           . + 4 + (0x3C3 << 2)
label_3c1458:
    if (ctx->pc == 0x3C1458u) {
        ctx->pc = 0x3C145Cu;
        goto label_3c145c;
    }
    ctx->pc = 0x3C1454u;
    {
        const bool branch_taken_0x3c1454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c1454) {
            ctx->pc = 0x3C2364u;
            goto label_3c2364;
        }
    }
    ctx->pc = 0x3C145Cu;
label_3c145c:
    // 0x3c145c: 0xc0efea4  jal         func_3BFA90
label_3c1460:
    if (ctx->pc == 0x3C1460u) {
        ctx->pc = 0x3C1460u;
            // 0x3c1460: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3C1464u;
        goto label_3c1464;
    }
    ctx->pc = 0x3C145Cu;
    SET_GPR_U32(ctx, 31, 0x3C1464u);
    ctx->pc = 0x3C1460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C145Cu;
            // 0x3c1460: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BFA90u;
    if (runtime->hasFunction(0x3BFA90u)) {
        auto targetFn = runtime->lookupFunction(0x3BFA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1464u; }
        if (ctx->pc != 0x3C1464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BFA90_0x3bfa90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1464u; }
        if (ctx->pc != 0x3C1464u) { return; }
    }
    ctx->pc = 0x3C1464u;
label_3c1464:
    // 0x3c1464: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c1464u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c1468:
    // 0x3c1468: 0xc0efea0  jal         func_3BFA80
label_3c146c:
    if (ctx->pc == 0x3C146Cu) {
        ctx->pc = 0x3C146Cu;
            // 0x3c146c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1470u;
        goto label_3c1470;
    }
    ctx->pc = 0x3C1468u;
    SET_GPR_U32(ctx, 31, 0x3C1470u);
    ctx->pc = 0x3C146Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1468u;
            // 0x3c146c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BFA80u;
    if (runtime->hasFunction(0x3BFA80u)) {
        auto targetFn = runtime->lookupFunction(0x3BFA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1470u; }
        if (ctx->pc != 0x3C1470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BFA80_0x3bfa80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1470u; }
        if (ctx->pc != 0x3C1470u) { return; }
    }
    ctx->pc = 0x3C1470u;
label_3c1470:
    // 0x3c1470: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c1470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c1474:
    // 0x3c1474: 0x5043001f  beql        $v0, $v1, . + 4 + (0x1F << 2)
label_3c1478:
    if (ctx->pc == 0x3C1478u) {
        ctx->pc = 0x3C1478u;
            // 0x3c1478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C147Cu;
        goto label_3c147c;
    }
    ctx->pc = 0x3C1474u;
    {
        const bool branch_taken_0x3c1474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c1474) {
            ctx->pc = 0x3C1478u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1474u;
            // 0x3c1478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C14F4u;
            goto label_3c14f4;
        }
    }
    ctx->pc = 0x3C147Cu;
label_3c147c:
    // 0x3c147c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_3c1480:
    if (ctx->pc == 0x3C1480u) {
        ctx->pc = 0x3C1480u;
            // 0x3c1480: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1484u;
        goto label_3c1484;
    }
    ctx->pc = 0x3C147Cu;
    {
        const bool branch_taken_0x3c147c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c147c) {
            ctx->pc = 0x3C1480u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C147Cu;
            // 0x3c1480: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C148Cu;
            goto label_3c148c;
        }
    }
    ctx->pc = 0x3C1484u;
label_3c1484:
    // 0x3c1484: 0x100003b7  b           . + 4 + (0x3B7 << 2)
label_3c1488:
    if (ctx->pc == 0x3C1488u) {
        ctx->pc = 0x3C148Cu;
        goto label_3c148c;
    }
    ctx->pc = 0x3C1484u;
    {
        const bool branch_taken_0x3c1484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c1484) {
            ctx->pc = 0x3C2364u;
            goto label_3c2364;
        }
    }
    ctx->pc = 0x3C148Cu;
label_3c148c:
    // 0x3c148c: 0xc0e1100  jal         func_384400
label_3c1490:
    if (ctx->pc == 0x3C1490u) {
        ctx->pc = 0x3C1490u;
            // 0x3c1490: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x3C1494u;
        goto label_3c1494;
    }
    ctx->pc = 0x3C148Cu;
    SET_GPR_U32(ctx, 31, 0x3C1494u);
    ctx->pc = 0x3C1490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C148Cu;
            // 0x3c1490: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384400u;
    if (runtime->hasFunction(0x384400u)) {
        auto targetFn = runtime->lookupFunction(0x384400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1494u; }
        if (ctx->pc != 0x3C1494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384400_0x384400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1494u; }
        if (ctx->pc != 0x3C1494u) { return; }
    }
    ctx->pc = 0x3C1494u;
label_3c1494:
    // 0x3c1494: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c1494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c1498:
    // 0x3c1498: 0xc0e1104  jal         func_384410
label_3c149c:
    if (ctx->pc == 0x3C149Cu) {
        ctx->pc = 0x3C149Cu;
            // 0x3c149c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x3C14A0u;
        goto label_3c14a0;
    }
    ctx->pc = 0x3C1498u;
    SET_GPR_U32(ctx, 31, 0x3C14A0u);
    ctx->pc = 0x3C149Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1498u;
            // 0x3c149c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384410u;
    if (runtime->hasFunction(0x384410u)) {
        auto targetFn = runtime->lookupFunction(0x384410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C14A0u; }
        if (ctx->pc != 0x3C14A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384410_0x384410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C14A0u; }
        if (ctx->pc != 0x3C14A0u) { return; }
    }
    ctx->pc = 0x3C14A0u;
label_3c14a0:
    // 0x3c14a0: 0x3c023fb1  lui         $v0, 0x3FB1
    ctx->pc = 0x3c14a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16305 << 16));
label_3c14a4:
    // 0x3c14a4: 0x3442c71c  ori         $v0, $v0, 0xC71C
    ctx->pc = 0x3c14a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50972);
label_3c14a8:
    // 0x3c14a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3c14a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c14ac:
    // 0x3c14ac: 0xc0c1a0c  jal         func_306830
label_3c14b0:
    if (ctx->pc == 0x3C14B0u) {
        ctx->pc = 0x3C14B0u;
            // 0x3c14b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C14B4u;
        goto label_3c14b4;
    }
    ctx->pc = 0x3C14ACu;
    SET_GPR_U32(ctx, 31, 0x3C14B4u);
    ctx->pc = 0x3C14B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C14ACu;
            // 0x3c14b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306830u;
    if (runtime->hasFunction(0x306830u)) {
        auto targetFn = runtime->lookupFunction(0x306830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C14B4u; }
        if (ctx->pc != 0x3C14B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306830_0x306830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C14B4u; }
        if (ctx->pc != 0x3C14B4u) { return; }
    }
    ctx->pc = 0x3C14B4u;
label_3c14b4:
    // 0x3c14b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3c14b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c14b8:
    // 0x3c14b8: 0xc0efe7c  jal         func_3BF9F0
label_3c14bc:
    if (ctx->pc == 0x3C14BCu) {
        ctx->pc = 0x3C14BCu;
            // 0x3c14bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C14C0u;
        goto label_3c14c0;
    }
    ctx->pc = 0x3C14B8u;
    SET_GPR_U32(ctx, 31, 0x3C14C0u);
    ctx->pc = 0x3C14BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C14B8u;
            // 0x3c14bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF9F0u;
    if (runtime->hasFunction(0x3BF9F0u)) {
        auto targetFn = runtime->lookupFunction(0x3BF9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C14C0u; }
        if (ctx->pc != 0x3C14C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF9F0_0x3bf9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C14C0u; }
        if (ctx->pc != 0x3C14C0u) { return; }
    }
    ctx->pc = 0x3C14C0u;
label_3c14c0:
    // 0x3c14c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c14c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c14c4:
    // 0x3c14c4: 0xc07649c  jal         func_1D9270
label_3c14c8:
    if (ctx->pc == 0x3C14C8u) {
        ctx->pc = 0x3C14C8u;
            // 0x3c14c8: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x3C14CCu;
        goto label_3c14cc;
    }
    ctx->pc = 0x3C14C4u;
    SET_GPR_U32(ctx, 31, 0x3C14CCu);
    ctx->pc = 0x3C14C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C14C4u;
            // 0x3c14c8: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C14CCu; }
        if (ctx->pc != 0x3C14CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C14CCu; }
        if (ctx->pc != 0x3C14CCu) { return; }
    }
    ctx->pc = 0x3C14CCu;
label_3c14cc:
    // 0x3c14cc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3c14ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3c14d0:
    // 0x3c14d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c14d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c14d4:
    // 0x3c14d4: 0xae0201b0  sw          $v0, 0x1B0($s0)
    ctx->pc = 0x3c14d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 2));
label_3c14d8:
    // 0x3c14d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3c14d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c14dc:
    // 0x3c14dc: 0x8e0201b8  lw          $v0, 0x1B8($s0)
    ctx->pc = 0x3c14dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
label_3c14e0:
    // 0x3c14e0: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x3c14e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_3c14e4:
    // 0x3c14e4: 0xc0efdd8  jal         func_3BF760
label_3c14e8:
    if (ctx->pc == 0x3C14E8u) {
        ctx->pc = 0x3C14E8u;
            // 0x3c14e8: 0xae0201b8  sw          $v0, 0x1B8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 2));
        ctx->pc = 0x3C14ECu;
        goto label_3c14ec;
    }
    ctx->pc = 0x3C14E4u;
    SET_GPR_U32(ctx, 31, 0x3C14ECu);
    ctx->pc = 0x3C14E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C14E4u;
            // 0x3c14e8: 0xae0201b8  sw          $v0, 0x1B8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF760u;
    if (runtime->hasFunction(0x3BF760u)) {
        auto targetFn = runtime->lookupFunction(0x3BF760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C14ECu; }
        if (ctx->pc != 0x3C14ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF760_0x3bf760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C14ECu; }
        if (ctx->pc != 0x3C14ECu) { return; }
    }
    ctx->pc = 0x3C14ECu;
label_3c14ec:
    // 0x3c14ec: 0x1000039d  b           . + 4 + (0x39D << 2)
label_3c14f0:
    if (ctx->pc == 0x3C14F0u) {
        ctx->pc = 0x3C14F4u;
        goto label_3c14f4;
    }
    ctx->pc = 0x3C14ECu;
    {
        const bool branch_taken_0x3c14ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c14ec) {
            ctx->pc = 0x3C2364u;
            goto label_3c2364;
        }
    }
    ctx->pc = 0x3C14F4u;
label_3c14f4:
    // 0x3c14f4: 0xc0f08f8  jal         func_3C23E0
label_3c14f8:
    if (ctx->pc == 0x3C14F8u) {
        ctx->pc = 0x3C14FCu;
        goto label_3c14fc;
    }
    ctx->pc = 0x3C14F4u;
    SET_GPR_U32(ctx, 31, 0x3C14FCu);
    ctx->pc = 0x3C23E0u;
    if (runtime->hasFunction(0x3C23E0u)) {
        auto targetFn = runtime->lookupFunction(0x3C23E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C14FCu; }
        if (ctx->pc != 0x3C14FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C23E0_0x3c23e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C14FCu; }
        if (ctx->pc != 0x3C14FCu) { return; }
    }
    ctx->pc = 0x3C14FCu;
label_3c14fc:
    // 0x3c14fc: 0xc0efdd0  jal         func_3BF740
label_3c1500:
    if (ctx->pc == 0x3C1500u) {
        ctx->pc = 0x3C1500u;
            // 0x3c1500: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3C1504u;
        goto label_3c1504;
    }
    ctx->pc = 0x3C14FCu;
    SET_GPR_U32(ctx, 31, 0x3C1504u);
    ctx->pc = 0x3C1500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C14FCu;
            // 0x3c1500: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF740u;
    if (runtime->hasFunction(0x3BF740u)) {
        auto targetFn = runtime->lookupFunction(0x3BF740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1504u; }
        if (ctx->pc != 0x3C1504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF740_0x3bf740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1504u; }
        if (ctx->pc != 0x3C1504u) { return; }
    }
    ctx->pc = 0x3C1504u;
label_3c1504:
    // 0x3c1504: 0xc0efdcc  jal         func_3BF730
label_3c1508:
    if (ctx->pc == 0x3C1508u) {
        ctx->pc = 0x3C1508u;
            // 0x3c1508: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C150Cu;
        goto label_3c150c;
    }
    ctx->pc = 0x3C1504u;
    SET_GPR_U32(ctx, 31, 0x3C150Cu);
    ctx->pc = 0x3C1508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1504u;
            // 0x3c1508: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF730u;
    if (runtime->hasFunction(0x3BF730u)) {
        auto targetFn = runtime->lookupFunction(0x3BF730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C150Cu; }
        if (ctx->pc != 0x3C150Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF730_0x3bf730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C150Cu; }
        if (ctx->pc != 0x3C150Cu) { return; }
    }
    ctx->pc = 0x3C150Cu;
label_3c150c:
    // 0x3c150c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3c150cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_3c1510:
    // 0x3c1510: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_3c1514:
    if (ctx->pc == 0x3C1514u) {
        ctx->pc = 0x3C1518u;
        goto label_3c1518;
    }
    ctx->pc = 0x3C1510u;
    {
        const bool branch_taken_0x3c1510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c1510) {
            ctx->pc = 0x3C1578u;
            goto label_3c1578;
        }
    }
    ctx->pc = 0x3C1518u;
label_3c1518:
    // 0x3c1518: 0xc077584  jal         func_1DD610
label_3c151c:
    if (ctx->pc == 0x3C151Cu) {
        ctx->pc = 0x3C151Cu;
            // 0x3c151c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1520u;
        goto label_3c1520;
    }
    ctx->pc = 0x3C1518u;
    SET_GPR_U32(ctx, 31, 0x3C1520u);
    ctx->pc = 0x3C151Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1518u;
            // 0x3c151c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD610u;
    if (runtime->hasFunction(0x1DD610u)) {
        auto targetFn = runtime->lookupFunction(0x1DD610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1520u; }
        if (ctx->pc != 0x3C1520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD610_0x1dd610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1520u; }
        if (ctx->pc != 0x3C1520u) { return; }
    }
    ctx->pc = 0x3C1520u;
label_3c1520:
    // 0x3c1520: 0xc0efdc4  jal         func_3BF710
label_3c1524:
    if (ctx->pc == 0x3C1524u) {
        ctx->pc = 0x3C1524u;
            // 0x3c1524: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1528u;
        goto label_3c1528;
    }
    ctx->pc = 0x3C1520u;
    SET_GPR_U32(ctx, 31, 0x3C1528u);
    ctx->pc = 0x3C1524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1520u;
            // 0x3c1524: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF710u;
    if (runtime->hasFunction(0x3BF710u)) {
        auto targetFn = runtime->lookupFunction(0x3BF710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1528u; }
        if (ctx->pc != 0x3C1528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF710_0x3bf710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1528u; }
        if (ctx->pc != 0x3C1528u) { return; }
    }
    ctx->pc = 0x3C1528u;
label_3c1528:
    // 0x3c1528: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x3c1528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_3c152c:
    // 0x3c152c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_3c1530:
    if (ctx->pc == 0x3C1530u) {
        ctx->pc = 0x3C1534u;
        goto label_3c1534;
    }
    ctx->pc = 0x3C152Cu;
    {
        const bool branch_taken_0x3c152c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c152c) {
            ctx->pc = 0x3C1578u;
            goto label_3c1578;
        }
    }
    ctx->pc = 0x3C1534u;
label_3c1534:
    // 0x3c1534: 0xc0775b8  jal         func_1DD6E0
label_3c1538:
    if (ctx->pc == 0x3C1538u) {
        ctx->pc = 0x3C153Cu;
        goto label_3c153c;
    }
    ctx->pc = 0x3C1534u;
    SET_GPR_U32(ctx, 31, 0x3C153Cu);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C153Cu; }
        if (ctx->pc != 0x3C153Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C153Cu; }
        if (ctx->pc != 0x3C153Cu) { return; }
    }
    ctx->pc = 0x3C153Cu;
label_3c153c:
    // 0x3c153c: 0xc0775b4  jal         func_1DD6D0
label_3c1540:
    if (ctx->pc == 0x3C1540u) {
        ctx->pc = 0x3C1540u;
            // 0x3c1540: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3C1544u;
        goto label_3c1544;
    }
    ctx->pc = 0x3C153Cu;
    SET_GPR_U32(ctx, 31, 0x3C1544u);
    ctx->pc = 0x3C1540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C153Cu;
            // 0x3c1540: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1544u; }
        if (ctx->pc != 0x3C1544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1544u; }
        if (ctx->pc != 0x3C1544u) { return; }
    }
    ctx->pc = 0x3C1544u;
label_3c1544:
    // 0x3c1544: 0xc60101c8  lwc1        $f1, 0x1C8($s0)
    ctx->pc = 0x3c1544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c1548:
    // 0x3c1548: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c1548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c154c:
    // 0x3c154c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x3c154cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_3c1550:
    // 0x3c1550: 0xc0efd68  jal         func_3BF5A0
label_3c1554:
    if (ctx->pc == 0x3C1554u) {
        ctx->pc = 0x3C1554u;
            // 0x3c1554: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3C1558u;
        goto label_3c1558;
    }
    ctx->pc = 0x3C1550u;
    SET_GPR_U32(ctx, 31, 0x3C1558u);
    ctx->pc = 0x3C1554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1550u;
            // 0x3c1554: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF5A0u;
    if (runtime->hasFunction(0x3BF5A0u)) {
        auto targetFn = runtime->lookupFunction(0x3BF5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1558u; }
        if (ctx->pc != 0x3C1558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF5A0_0x3bf5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1558u; }
        if (ctx->pc != 0x3C1558u) { return; }
    }
    ctx->pc = 0x3C1558u;
label_3c1558:
    // 0x3c1558: 0x8e190014  lw          $t9, 0x14($s0)
    ctx->pc = 0x3c1558u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3c155c:
    // 0x3c155c: 0x4600a302  mul.s       $f12, $f20, $f0
    ctx->pc = 0x3c155cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_3c1560:
    // 0x3c1560: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x3c1560u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_3c1564:
    // 0x3c1564: 0x320f809  jalr        $t9
label_3c1568:
    if (ctx->pc == 0x3C1568u) {
        ctx->pc = 0x3C1568u;
            // 0x3c1568: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C156Cu;
        goto label_3c156c;
    }
    ctx->pc = 0x3C1564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C156Cu);
        ctx->pc = 0x3C1568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1564u;
            // 0x3c1568: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C156Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C156Cu; }
            if (ctx->pc != 0x3C156Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3C156Cu;
label_3c156c:
    // 0x3c156c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3c156cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c1570:
    // 0x3c1570: 0xc077568  jal         func_1DD5A0
label_3c1574:
    if (ctx->pc == 0x3C1574u) {
        ctx->pc = 0x3C1574u;
            // 0x3c1574: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x3C1578u;
        goto label_3c1578;
    }
    ctx->pc = 0x3C1570u;
    SET_GPR_U32(ctx, 31, 0x3C1578u);
    ctx->pc = 0x3C1574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1570u;
            // 0x3c1574: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5A0u;
    if (runtime->hasFunction(0x1DD5A0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1578u; }
        if (ctx->pc != 0x3C1578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5A0_0x1dd5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1578u; }
        if (ctx->pc != 0x3C1578u) { return; }
    }
    ctx->pc = 0x3C1578u;
label_3c1578:
    // 0x3c1578: 0xc0775b8  jal         func_1DD6E0
label_3c157c:
    if (ctx->pc == 0x3C157Cu) {
        ctx->pc = 0x3C1580u;
        goto label_3c1580;
    }
    ctx->pc = 0x3C1578u;
    SET_GPR_U32(ctx, 31, 0x3C1580u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1580u; }
        if (ctx->pc != 0x3C1580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1580u; }
        if (ctx->pc != 0x3C1580u) { return; }
    }
    ctx->pc = 0x3C1580u;
label_3c1580:
    // 0x3c1580: 0xc0775b4  jal         func_1DD6D0
label_3c1584:
    if (ctx->pc == 0x3C1584u) {
        ctx->pc = 0x3C1584u;
            // 0x3c1584: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3C1588u;
        goto label_3c1588;
    }
    ctx->pc = 0x3C1580u;
    SET_GPR_U32(ctx, 31, 0x3C1588u);
    ctx->pc = 0x3C1584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1580u;
            // 0x3c1584: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1588u; }
        if (ctx->pc != 0x3C1588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1588u; }
        if (ctx->pc != 0x3C1588u) { return; }
    }
    ctx->pc = 0x3C1588u;
label_3c1588:
    // 0x3c1588: 0xc60201b0  lwc1        $f2, 0x1B0($s0)
    ctx->pc = 0x3c1588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c158c:
    // 0x3c158c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3c158cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c1590:
    // 0x3c1590: 0x0  nop
    ctx->pc = 0x3c1590u;
    // NOP
label_3c1594:
    // 0x3c1594: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x3c1594u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_3c1598:
    // 0x3c1598: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c1598u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c159c:
    // 0x3c159c: 0x45000371  bc1f        . + 4 + (0x371 << 2)
label_3c15a0:
    if (ctx->pc == 0x3C15A0u) {
        ctx->pc = 0x3C15A0u;
            // 0x3c15a0: 0xe60001b0  swc1        $f0, 0x1B0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
        ctx->pc = 0x3C15A4u;
        goto label_3c15a4;
    }
    ctx->pc = 0x3C159Cu;
    {
        const bool branch_taken_0x3c159c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C15A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C159Cu;
            // 0x3c15a0: 0xe60001b0  swc1        $f0, 0x1B0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c159c) {
            ctx->pc = 0x3C2364u;
            goto label_3c2364;
        }
    }
    ctx->pc = 0x3C15A4u;
label_3c15a4:
    // 0x3c15a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c15a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c15a8:
    // 0x3c15a8: 0xc0f0f84  jal         func_3C3E10
label_3c15ac:
    if (ctx->pc == 0x3C15ACu) {
        ctx->pc = 0x3C15ACu;
            // 0x3c15ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3C15B0u;
        goto label_3c15b0;
    }
    ctx->pc = 0x3C15A8u;
    SET_GPR_U32(ctx, 31, 0x3C15B0u);
    ctx->pc = 0x3C15ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C15A8u;
            // 0x3c15ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3E10u;
    if (runtime->hasFunction(0x3C3E10u)) {
        auto targetFn = runtime->lookupFunction(0x3C3E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C15B0u; }
        if (ctx->pc != 0x3C15B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3E10_0x3c3e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C15B0u; }
        if (ctx->pc != 0x3C15B0u) { return; }
    }
    ctx->pc = 0x3C15B0u;
label_3c15b0:
    // 0x3c15b0: 0x1000036c  b           . + 4 + (0x36C << 2)
label_3c15b4:
    if (ctx->pc == 0x3C15B4u) {
        ctx->pc = 0x3C15B8u;
        goto label_3c15b8;
    }
    ctx->pc = 0x3C15B0u;
    {
        const bool branch_taken_0x3c15b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c15b0) {
            ctx->pc = 0x3C2364u;
            goto label_3c2364;
        }
    }
    ctx->pc = 0x3C15B8u;
label_3c15b8:
    // 0x3c15b8: 0xc0efea4  jal         func_3BFA90
label_3c15bc:
    if (ctx->pc == 0x3C15BCu) {
        ctx->pc = 0x3C15BCu;
            // 0x3c15bc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3C15C0u;
        goto label_3c15c0;
    }
    ctx->pc = 0x3C15B8u;
    SET_GPR_U32(ctx, 31, 0x3C15C0u);
    ctx->pc = 0x3C15BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C15B8u;
            // 0x3c15bc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BFA90u;
    if (runtime->hasFunction(0x3BFA90u)) {
        auto targetFn = runtime->lookupFunction(0x3BFA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C15C0u; }
        if (ctx->pc != 0x3C15C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BFA90_0x3bfa90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C15C0u; }
        if (ctx->pc != 0x3C15C0u) { return; }
    }
    ctx->pc = 0x3C15C0u;
label_3c15c0:
    // 0x3c15c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3c15c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c15c4:
    // 0x3c15c4: 0xc0efea0  jal         func_3BFA80
label_3c15c8:
    if (ctx->pc == 0x3C15C8u) {
        ctx->pc = 0x3C15C8u;
            // 0x3c15c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C15CCu;
        goto label_3c15cc;
    }
    ctx->pc = 0x3C15C4u;
    SET_GPR_U32(ctx, 31, 0x3C15CCu);
    ctx->pc = 0x3C15C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C15C4u;
            // 0x3c15c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BFA80u;
    if (runtime->hasFunction(0x3BFA80u)) {
        auto targetFn = runtime->lookupFunction(0x3BFA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C15CCu; }
        if (ctx->pc != 0x3C15CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BFA80_0x3bfa80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C15CCu; }
        if (ctx->pc != 0x3C15CCu) { return; }
    }
    ctx->pc = 0x3C15CCu;
label_3c15cc:
    // 0x3c15cc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3c15ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c15d0:
    // 0x3c15d0: 0x5043016f  beql        $v0, $v1, . + 4 + (0x16F << 2)
label_3c15d4:
    if (ctx->pc == 0x3C15D4u) {
        ctx->pc = 0x3C15D4u;
            // 0x3c15d4: 0x8e0301ac  lw          $v1, 0x1AC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
        ctx->pc = 0x3C15D8u;
        goto label_3c15d8;
    }
    ctx->pc = 0x3C15D0u;
    {
        const bool branch_taken_0x3c15d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c15d0) {
            ctx->pc = 0x3C15D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C15D0u;
            // 0x3c15d4: 0x8e0301ac  lw          $v1, 0x1AC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C1B90u;
            goto label_3c1b90;
        }
    }
    ctx->pc = 0x3C15D8u;
label_3c15d8:
    // 0x3c15d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c15d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c15dc:
    // 0x3c15dc: 0x5043012e  beql        $v0, $v1, . + 4 + (0x12E << 2)
label_3c15e0:
    if (ctx->pc == 0x3C15E0u) {
        ctx->pc = 0x3C15E0u;
            // 0x3c15e0: 0x8e0201ac  lw          $v0, 0x1AC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
        ctx->pc = 0x3C15E4u;
        goto label_3c15e4;
    }
    ctx->pc = 0x3C15DCu;
    {
        const bool branch_taken_0x3c15dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c15dc) {
            ctx->pc = 0x3C15E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C15DCu;
            // 0x3c15e0: 0x8e0201ac  lw          $v0, 0x1AC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C1A98u;
            goto label_3c1a98;
        }
    }
    ctx->pc = 0x3C15E4u;
label_3c15e4:
    // 0x3c15e4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_3c15e8:
    if (ctx->pc == 0x3C15E8u) {
        ctx->pc = 0x3C15E8u;
            // 0x3c15e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C15ECu;
        goto label_3c15ec;
    }
    ctx->pc = 0x3C15E4u;
    {
        const bool branch_taken_0x3c15e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c15e4) {
            ctx->pc = 0x3C15E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C15E4u;
            // 0x3c15e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C15F4u;
            goto label_3c15f4;
        }
    }
    ctx->pc = 0x3C15ECu;
label_3c15ec:
    // 0x3c15ec: 0x1000035d  b           . + 4 + (0x35D << 2)
label_3c15f0:
    if (ctx->pc == 0x3C15F0u) {
        ctx->pc = 0x3C15F4u;
        goto label_3c15f4;
    }
    ctx->pc = 0x3C15ECu;
    {
        const bool branch_taken_0x3c15ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c15ec) {
            ctx->pc = 0x3C2364u;
            goto label_3c2364;
        }
    }
    ctx->pc = 0x3C15F4u;
label_3c15f4:
    // 0x3c15f4: 0xc0772e8  jal         func_1DCBA0
label_3c15f8:
    if (ctx->pc == 0x3C15F8u) {
        ctx->pc = 0x3C15FCu;
        goto label_3c15fc;
    }
    ctx->pc = 0x3C15F4u;
    SET_GPR_U32(ctx, 31, 0x3C15FCu);
    ctx->pc = 0x1DCBA0u;
    if (runtime->hasFunction(0x1DCBA0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C15FCu; }
        if (ctx->pc != 0x3C15FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCBA0_0x1dcba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C15FCu; }
        if (ctx->pc != 0x3C15FCu) { return; }
    }
    ctx->pc = 0x3C15FCu;
label_3c15fc:
    // 0x3c15fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c15fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c1600:
    // 0x3c1600: 0xc0f0e98  jal         func_3C3A60
label_3c1604:
    if (ctx->pc == 0x3C1604u) {
        ctx->pc = 0x3C1604u;
            // 0x3c1604: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1608u;
        goto label_3c1608;
    }
    ctx->pc = 0x3C1600u;
    SET_GPR_U32(ctx, 31, 0x3C1608u);
    ctx->pc = 0x3C1604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1600u;
            // 0x3c1604: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3A60u;
    if (runtime->hasFunction(0x3C3A60u)) {
        auto targetFn = runtime->lookupFunction(0x3C3A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1608u; }
        if (ctx->pc != 0x3C1608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3A60_0x3c3a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1608u; }
        if (ctx->pc != 0x3C1608u) { return; }
    }
    ctx->pc = 0x3C1608u;
label_3c1608:
    // 0x3c1608: 0xc0f0e94  jal         func_3C3A50
label_3c160c:
    if (ctx->pc == 0x3C160Cu) {
        ctx->pc = 0x3C160Cu;
            // 0x3c160c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1610u;
        goto label_3c1610;
    }
    ctx->pc = 0x3C1608u;
    SET_GPR_U32(ctx, 31, 0x3C1610u);
    ctx->pc = 0x3C160Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1608u;
            // 0x3c160c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3A50u;
    if (runtime->hasFunction(0x3C3A50u)) {
        auto targetFn = runtime->lookupFunction(0x3C3A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1610u; }
        if (ctx->pc != 0x3C1610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3A50_0x3c3a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1610u; }
        if (ctx->pc != 0x3C1610u) { return; }
    }
    ctx->pc = 0x3C1610u;
label_3c1610:
    // 0x3c1610: 0xc0b6cec  jal         func_2DB3B0
label_3c1614:
    if (ctx->pc == 0x3C1614u) {
        ctx->pc = 0x3C1614u;
            // 0x3c1614: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1618u;
        goto label_3c1618;
    }
    ctx->pc = 0x3C1610u;
    SET_GPR_U32(ctx, 31, 0x3C1618u);
    ctx->pc = 0x3C1614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1610u;
            // 0x3c1614: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3B0u;
    if (runtime->hasFunction(0x2DB3B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1618u; }
        if (ctx->pc != 0x3C1618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB3B0_0x2db3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1618u; }
        if (ctx->pc != 0x3C1618u) { return; }
    }
    ctx->pc = 0x3C1618u;
label_3c1618:
    // 0x3c1618: 0xc0b6ce8  jal         func_2DB3A0
label_3c161c:
    if (ctx->pc == 0x3C161Cu) {
        ctx->pc = 0x3C161Cu;
            // 0x3c161c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1620u;
        goto label_3c1620;
    }
    ctx->pc = 0x3C1618u;
    SET_GPR_U32(ctx, 31, 0x3C1620u);
    ctx->pc = 0x3C161Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1618u;
            // 0x3c161c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3A0u;
    if (runtime->hasFunction(0x2DB3A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1620u; }
        if (ctx->pc != 0x3C1620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB3A0_0x2db3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1620u; }
        if (ctx->pc != 0x3C1620u) { return; }
    }
    ctx->pc = 0x3C1620u;
label_3c1620:
    // 0x3c1620: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3c1620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c1624:
    // 0x3c1624: 0xc04cce8  jal         func_1333A0
label_3c1628:
    if (ctx->pc == 0x3C1628u) {
        ctx->pc = 0x3C1628u;
            // 0x3c1628: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x3C162Cu;
        goto label_3c162c;
    }
    ctx->pc = 0x3C1624u;
    SET_GPR_U32(ctx, 31, 0x3C162Cu);
    ctx->pc = 0x3C1628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1624u;
            // 0x3c1628: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C162Cu; }
        if (ctx->pc != 0x3C162Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C162Cu; }
        if (ctx->pc != 0x3C162Cu) { return; }
    }
    ctx->pc = 0x3C162Cu;
label_3c162c:
    // 0x3c162c: 0x3c023d84  lui         $v0, 0x3D84
    ctx->pc = 0x3c162cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15748 << 16));
label_3c1630:
    // 0x3c1630: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c1630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c1634:
    // 0x3c1634: 0x3442bda1  ori         $v0, $v0, 0xBDA1
    ctx->pc = 0x3c1634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48545);
label_3c1638:
    // 0x3c1638: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3c1638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c163c:
    // 0x3c163c: 0xc0efe80  jal         func_3BFA00
label_3c1640:
    if (ctx->pc == 0x3C1640u) {
        ctx->pc = 0x3C1640u;
            // 0x3c1640: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3C1644u;
        goto label_3c1644;
    }
    ctx->pc = 0x3C163Cu;
    SET_GPR_U32(ctx, 31, 0x3C1644u);
    ctx->pc = 0x3C1640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C163Cu;
            // 0x3c1640: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BFA00u;
    if (runtime->hasFunction(0x3BFA00u)) {
        auto targetFn = runtime->lookupFunction(0x3BFA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1644u; }
        if (ctx->pc != 0x3C1644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BFA00_0x3bfa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1644u; }
        if (ctx->pc != 0x3C1644u) { return; }
    }
    ctx->pc = 0x3C1644u;
label_3c1644:
    // 0x3c1644: 0xc07731c  jal         func_1DCC70
label_3c1648:
    if (ctx->pc == 0x3C1648u) {
        ctx->pc = 0x3C1648u;
            // 0x3c1648: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C164Cu;
        goto label_3c164c;
    }
    ctx->pc = 0x3C1644u;
    SET_GPR_U32(ctx, 31, 0x3C164Cu);
    ctx->pc = 0x3C1648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1644u;
            // 0x3c1648: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC70u;
    if (runtime->hasFunction(0x1DCC70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C164Cu; }
        if (ctx->pc != 0x3C164Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC70_0x1dcc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C164Cu; }
        if (ctx->pc != 0x3C164Cu) { return; }
    }
    ctx->pc = 0x3C164Cu;
label_3c164c:
    // 0x3c164c: 0x8c590030  lw          $t9, 0x30($v0)
    ctx->pc = 0x3c164cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_3c1650:
    // 0x3c1650: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c1650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c1654:
    // 0x3c1654: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3c1654u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3c1658:
    // 0x3c1658: 0x320f809  jalr        $t9
label_3c165c:
    if (ctx->pc == 0x3C165Cu) {
        ctx->pc = 0x3C165Cu;
            // 0x3c165c: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x3C1660u;
        goto label_3c1660;
    }
    ctx->pc = 0x3C1658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C1660u);
        ctx->pc = 0x3C165Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1658u;
            // 0x3c165c: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C1660u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C1660u; }
            if (ctx->pc != 0x3C1660u) { return; }
        }
        }
    }
    ctx->pc = 0x3C1660u;
label_3c1660:
    // 0x3c1660: 0xc0783ac  jal         func_1E0EB0
label_3c1664:
    if (ctx->pc == 0x3C1664u) {
        ctx->pc = 0x3C1664u;
            // 0x3c1664: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1668u;
        goto label_3c1668;
    }
    ctx->pc = 0x3C1660u;
    SET_GPR_U32(ctx, 31, 0x3C1668u);
    ctx->pc = 0x3C1664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1660u;
            // 0x3c1664: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0EB0u;
    if (runtime->hasFunction(0x1E0EB0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1668u; }
        if (ctx->pc != 0x3C1668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0EB0_0x1e0eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1668u; }
        if (ctx->pc != 0x3C1668u) { return; }
    }
    ctx->pc = 0x3C1668u;
label_3c1668:
    // 0x3c1668: 0x3c023e6d  lui         $v0, 0x3E6D
    ctx->pc = 0x3c1668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15981 << 16));
label_3c166c:
    // 0x3c166c: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x3c166cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_3c1670:
    // 0x3c1670: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3c1670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c1674:
    // 0x3c1674: 0x0  nop
    ctx->pc = 0x3c1674u;
    // NOP
label_3c1678:
    // 0x3c1678: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c1678u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c167c:
    // 0x3c167c: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_3c1680:
    if (ctx->pc == 0x3C1680u) {
        ctx->pc = 0x3C1680u;
            // 0x3c1680: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1684u;
        goto label_3c1684;
    }
    ctx->pc = 0x3C167Cu;
    {
        const bool branch_taken_0x3c167c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c167c) {
            ctx->pc = 0x3C1680u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C167Cu;
            // 0x3c1680: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C1698u;
            goto label_3c1698;
        }
    }
    ctx->pc = 0x3C1684u;
label_3c1684:
    // 0x3c1684: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3c1684u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c1688:
    // 0x3c1688: 0xc0efe7c  jal         func_3BF9F0
label_3c168c:
    if (ctx->pc == 0x3C168Cu) {
        ctx->pc = 0x3C168Cu;
            // 0x3c168c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1690u;
        goto label_3c1690;
    }
    ctx->pc = 0x3C1688u;
    SET_GPR_U32(ctx, 31, 0x3C1690u);
    ctx->pc = 0x3C168Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1688u;
            // 0x3c168c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF9F0u;
    if (runtime->hasFunction(0x3BF9F0u)) {
        auto targetFn = runtime->lookupFunction(0x3BF9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1690u; }
        if (ctx->pc != 0x3C1690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF9F0_0x3bf9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1690u; }
        if (ctx->pc != 0x3C1690u) { return; }
    }
    ctx->pc = 0x3C1690u;
label_3c1690:
    // 0x3c1690: 0x10000012  b           . + 4 + (0x12 << 2)
label_3c1694:
    if (ctx->pc == 0x3C1694u) {
        ctx->pc = 0x3C1694u;
            // 0x3c1694: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1698u;
        goto label_3c1698;
    }
    ctx->pc = 0x3C1690u;
    {
        const bool branch_taken_0x3c1690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1690u;
            // 0x3c1694: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1690) {
            ctx->pc = 0x3C16DCu;
            goto label_3c16dc;
        }
    }
    ctx->pc = 0x3C1698u;
label_3c1698:
    // 0x3c1698: 0xc0783ac  jal         func_1E0EB0
label_3c169c:
    if (ctx->pc == 0x3C169Cu) {
        ctx->pc = 0x3C16A0u;
        goto label_3c16a0;
    }
    ctx->pc = 0x3C1698u;
    SET_GPR_U32(ctx, 31, 0x3C16A0u);
    ctx->pc = 0x1E0EB0u;
    if (runtime->hasFunction(0x1E0EB0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C16A0u; }
        if (ctx->pc != 0x3C16A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0EB0_0x1e0eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C16A0u; }
        if (ctx->pc != 0x3C16A0u) { return; }
    }
    ctx->pc = 0x3C16A0u;
label_3c16a0:
    // 0x3c16a0: 0x3c033e6d  lui         $v1, 0x3E6D
    ctx->pc = 0x3c16a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15981 << 16));
label_3c16a4:
    // 0x3c16a4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c16a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3c16a8:
    // 0x3c16a8: 0x3463097b  ori         $v1, $v1, 0x97B
    ctx->pc = 0x3c16a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2427);
label_3c16ac:
    // 0x3c16ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c16acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c16b0:
    // 0x3c16b0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3c16b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c16b4:
    // 0x3c16b4: 0x0  nop
    ctx->pc = 0x3c16b4u;
    // NOP
label_3c16b8:
    // 0x3c16b8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3c16b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_3c16bc:
    // 0x3c16bc: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x3c16bcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_3c16c0:
    // 0x3c16c0: 0xc4406598  lwc1        $f0, 0x6598($v0)
    ctx->pc = 0x3c16c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 26008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c16c4:
    // 0x3c16c4: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x3c16c4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
label_3c16c8:
    // 0x3c16c8: 0x0  nop
    ctx->pc = 0x3c16c8u;
    // NOP
label_3c16cc:
    // 0x3c16cc: 0x0  nop
    ctx->pc = 0x3c16ccu;
    // NOP
label_3c16d0:
    // 0x3c16d0: 0xc0efe7c  jal         func_3BF9F0
label_3c16d4:
    if (ctx->pc == 0x3C16D4u) {
        ctx->pc = 0x3C16D8u;
        goto label_3c16d8;
    }
    ctx->pc = 0x3C16D0u;
    SET_GPR_U32(ctx, 31, 0x3C16D8u);
    ctx->pc = 0x3BF9F0u;
    if (runtime->hasFunction(0x3BF9F0u)) {
        auto targetFn = runtime->lookupFunction(0x3BF9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C16D8u; }
        if (ctx->pc != 0x3C16D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF9F0_0x3bf9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C16D8u; }
        if (ctx->pc != 0x3C16D8u) { return; }
    }
    ctx->pc = 0x3C16D8u;
label_3c16d8:
    // 0x3c16d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c16d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c16dc:
    // 0x3c16dc: 0xc0b6d5c  jal         func_2DB570
label_3c16e0:
    if (ctx->pc == 0x3C16E0u) {
        ctx->pc = 0x3C16E4u;
        goto label_3c16e4;
    }
    ctx->pc = 0x3C16DCu;
    SET_GPR_U32(ctx, 31, 0x3C16E4u);
    ctx->pc = 0x2DB570u;
    if (runtime->hasFunction(0x2DB570u)) {
        auto targetFn = runtime->lookupFunction(0x2DB570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C16E4u; }
        if (ctx->pc != 0x3C16E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB570_0x2db570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C16E4u; }
        if (ctx->pc != 0x3C16E4u) { return; }
    }
    ctx->pc = 0x3C16E4u;
label_3c16e4:
    // 0x3c16e4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3c16e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c16e8:
    // 0x3c16e8: 0xc0770c0  jal         func_1DC300
label_3c16ec:
    if (ctx->pc == 0x3C16ECu) {
        ctx->pc = 0x3C16ECu;
            // 0x3c16ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C16F0u;
        goto label_3c16f0;
    }
    ctx->pc = 0x3C16E8u;
    SET_GPR_U32(ctx, 31, 0x3C16F0u);
    ctx->pc = 0x3C16ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C16E8u;
            // 0x3c16ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC300u;
    if (runtime->hasFunction(0x1DC300u)) {
        auto targetFn = runtime->lookupFunction(0x1DC300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C16F0u; }
        if (ctx->pc != 0x3C16F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC300_0x1dc300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C16F0u; }
        if (ctx->pc != 0x3C16F0u) { return; }
    }
    ctx->pc = 0x3C16F0u;
label_3c16f0:
    // 0x3c16f0: 0xc0b6d40  jal         func_2DB500
label_3c16f4:
    if (ctx->pc == 0x3C16F4u) {
        ctx->pc = 0x3C16F4u;
            // 0x3c16f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C16F8u;
        goto label_3c16f8;
    }
    ctx->pc = 0x3C16F0u;
    SET_GPR_U32(ctx, 31, 0x3C16F8u);
    ctx->pc = 0x3C16F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C16F0u;
            // 0x3c16f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB500u;
    if (runtime->hasFunction(0x2DB500u)) {
        auto targetFn = runtime->lookupFunction(0x2DB500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C16F8u; }
        if (ctx->pc != 0x3C16F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB500_0x2db500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C16F8u; }
        if (ctx->pc != 0x3C16F8u) { return; }
    }
    ctx->pc = 0x3C16F8u;
label_3c16f8:
    // 0x3c16f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c16f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c16fc:
    // 0x3c16fc: 0xc04cc04  jal         func_133010
label_3c1700:
    if (ctx->pc == 0x3C1700u) {
        ctx->pc = 0x3C1700u;
            // 0x3c1700: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1704u;
        goto label_3c1704;
    }
    ctx->pc = 0x3C16FCu;
    SET_GPR_U32(ctx, 31, 0x3C1704u);
    ctx->pc = 0x3C1700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C16FCu;
            // 0x3c1700: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1704u; }
        if (ctx->pc != 0x3C1704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1704u; }
        if (ctx->pc != 0x3C1704u) { return; }
    }
    ctx->pc = 0x3C1704u;
label_3c1704:
    // 0x3c1704: 0xc077280  jal         func_1DCA00
label_3c1708:
    if (ctx->pc == 0x3C1708u) {
        ctx->pc = 0x3C1708u;
            // 0x3c1708: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C170Cu;
        goto label_3c170c;
    }
    ctx->pc = 0x3C1704u;
    SET_GPR_U32(ctx, 31, 0x3C170Cu);
    ctx->pc = 0x3C1708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1704u;
            // 0x3c1708: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C170Cu; }
        if (ctx->pc != 0x3C170Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C170Cu; }
        if (ctx->pc != 0x3C170Cu) { return; }
    }
    ctx->pc = 0x3C170Cu;
label_3c170c:
    // 0x3c170c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3c170cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c1710:
    // 0x3c1710: 0xc0b6d5c  jal         func_2DB570
label_3c1714:
    if (ctx->pc == 0x3C1714u) {
        ctx->pc = 0x3C1714u;
            // 0x3c1714: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1718u;
        goto label_3c1718;
    }
    ctx->pc = 0x3C1710u;
    SET_GPR_U32(ctx, 31, 0x3C1718u);
    ctx->pc = 0x3C1714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1710u;
            // 0x3c1714: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB570u;
    if (runtime->hasFunction(0x2DB570u)) {
        auto targetFn = runtime->lookupFunction(0x2DB570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1718u; }
        if (ctx->pc != 0x3C1718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB570_0x2db570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1718u; }
        if (ctx->pc != 0x3C1718u) { return; }
    }
    ctx->pc = 0x3C1718u;
label_3c1718:
    // 0x3c1718: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c1718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c171c:
    // 0x3c171c: 0xc075318  jal         func_1D4C60
label_3c1720:
    if (ctx->pc == 0x3C1720u) {
        ctx->pc = 0x3C1720u;
            // 0x3c1720: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1724u;
        goto label_3c1724;
    }
    ctx->pc = 0x3C171Cu;
    SET_GPR_U32(ctx, 31, 0x3C1724u);
    ctx->pc = 0x3C1720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C171Cu;
            // 0x3c1720: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1724u; }
        if (ctx->pc != 0x3C1724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1724u; }
        if (ctx->pc != 0x3C1724u) { return; }
    }
    ctx->pc = 0x3C1724u;
label_3c1724:
    // 0x3c1724: 0xc0b6cec  jal         func_2DB3B0
label_3c1728:
    if (ctx->pc == 0x3C1728u) {
        ctx->pc = 0x3C1728u;
            // 0x3c1728: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C172Cu;
        goto label_3c172c;
    }
    ctx->pc = 0x3C1724u;
    SET_GPR_U32(ctx, 31, 0x3C172Cu);
    ctx->pc = 0x3C1728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1724u;
            // 0x3c1728: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3B0u;
    if (runtime->hasFunction(0x2DB3B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C172Cu; }
        if (ctx->pc != 0x3C172Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB3B0_0x2db3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C172Cu; }
        if (ctx->pc != 0x3C172Cu) { return; }
    }
    ctx->pc = 0x3C172Cu;
label_3c172c:
    // 0x3c172c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3c172cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c1730:
    // 0x3c1730: 0xc077280  jal         func_1DCA00
label_3c1734:
    if (ctx->pc == 0x3C1734u) {
        ctx->pc = 0x3C1734u;
            // 0x3c1734: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1738u;
        goto label_3c1738;
    }
    ctx->pc = 0x3C1730u;
    SET_GPR_U32(ctx, 31, 0x3C1738u);
    ctx->pc = 0x3C1734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1730u;
            // 0x3c1734: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1738u; }
        if (ctx->pc != 0x3C1738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1738u; }
        if (ctx->pc != 0x3C1738u) { return; }
    }
    ctx->pc = 0x3C1738u;
label_3c1738:
    // 0x3c1738: 0xc07727c  jal         func_1DC9F0
label_3c173c:
    if (ctx->pc == 0x3C173Cu) {
        ctx->pc = 0x3C173Cu;
            // 0x3c173c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1740u;
        goto label_3c1740;
    }
    ctx->pc = 0x3C1738u;
    SET_GPR_U32(ctx, 31, 0x3C1740u);
    ctx->pc = 0x3C173Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1738u;
            // 0x3c173c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC9F0u;
    if (runtime->hasFunction(0x1DC9F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1740u; }
        if (ctx->pc != 0x3C1740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC9F0_0x1dc9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1740u; }
        if (ctx->pc != 0x3C1740u) { return; }
    }
    ctx->pc = 0x3C1740u;
label_3c1740:
    // 0x3c1740: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c1740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c1744:
    // 0x3c1744: 0xc0c05e0  jal         func_301780
label_3c1748:
    if (ctx->pc == 0x3C1748u) {
        ctx->pc = 0x3C1748u;
            // 0x3c1748: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C174Cu;
        goto label_3c174c;
    }
    ctx->pc = 0x3C1744u;
    SET_GPR_U32(ctx, 31, 0x3C174Cu);
    ctx->pc = 0x3C1748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1744u;
            // 0x3c1748: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301780u;
    if (runtime->hasFunction(0x301780u)) {
        auto targetFn = runtime->lookupFunction(0x301780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C174Cu; }
        if (ctx->pc != 0x3C174Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301780_0x301780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C174Cu; }
        if (ctx->pc != 0x3C174Cu) { return; }
    }
    ctx->pc = 0x3C174Cu;
label_3c174c:
    // 0x3c174c: 0xc0c05dc  jal         func_301770
label_3c1750:
    if (ctx->pc == 0x3C1750u) {
        ctx->pc = 0x3C1750u;
            // 0x3c1750: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1754u;
        goto label_3c1754;
    }
    ctx->pc = 0x3C174Cu;
    SET_GPR_U32(ctx, 31, 0x3C1754u);
    ctx->pc = 0x3C1750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C174Cu;
            // 0x3c1750: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301770u;
    if (runtime->hasFunction(0x301770u)) {
        auto targetFn = runtime->lookupFunction(0x301770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1754u; }
        if (ctx->pc != 0x3C1754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301770_0x301770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1754u; }
        if (ctx->pc != 0x3C1754u) { return; }
    }
    ctx->pc = 0x3C1754u;
label_3c1754:
    // 0x3c1754: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3c1754u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c1758:
    // 0x3c1758: 0xc077280  jal         func_1DCA00
label_3c175c:
    if (ctx->pc == 0x3C175Cu) {
        ctx->pc = 0x3C175Cu;
            // 0x3c175c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1760u;
        goto label_3c1760;
    }
    ctx->pc = 0x3C1758u;
    SET_GPR_U32(ctx, 31, 0x3C1760u);
    ctx->pc = 0x3C175Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1758u;
            // 0x3c175c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1760u; }
        if (ctx->pc != 0x3C1760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1760u; }
        if (ctx->pc != 0x3C1760u) { return; }
    }
    ctx->pc = 0x3C1760u;
label_3c1760:
    // 0x3c1760: 0xc07727c  jal         func_1DC9F0
label_3c1764:
    if (ctx->pc == 0x3C1764u) {
        ctx->pc = 0x3C1764u;
            // 0x3c1764: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1768u;
        goto label_3c1768;
    }
    ctx->pc = 0x3C1760u;
    SET_GPR_U32(ctx, 31, 0x3C1768u);
    ctx->pc = 0x3C1764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1760u;
            // 0x3c1764: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC9F0u;
    if (runtime->hasFunction(0x1DC9F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1768u; }
        if (ctx->pc != 0x3C1768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC9F0_0x1dc9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1768u; }
        if (ctx->pc != 0x3C1768u) { return; }
    }
    ctx->pc = 0x3C1768u;
label_3c1768:
    // 0x3c1768: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3c1768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c176c:
    // 0x3c176c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x3c176cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_3c1770:
    // 0x3c1770: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3c1770u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c1774:
    // 0x3c1774: 0xc0c05d4  jal         func_301750
label_3c1778:
    if (ctx->pc == 0x3C1778u) {
        ctx->pc = 0x3C1778u;
            // 0x3c1778: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C177Cu;
        goto label_3c177c;
    }
    ctx->pc = 0x3C1774u;
    SET_GPR_U32(ctx, 31, 0x3C177Cu);
    ctx->pc = 0x3C1778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1774u;
            // 0x3c1778: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301750u;
    if (runtime->hasFunction(0x301750u)) {
        auto targetFn = runtime->lookupFunction(0x301750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C177Cu; }
        if (ctx->pc != 0x3C177Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301750_0x301750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C177Cu; }
        if (ctx->pc != 0x3C177Cu) { return; }
    }
    ctx->pc = 0x3C177Cu;
label_3c177c:
    // 0x3c177c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3c177cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c1780:
    // 0x3c1780: 0xc0efc58  jal         func_3BF160
label_3c1784:
    if (ctx->pc == 0x3C1784u) {
        ctx->pc = 0x3C1784u;
            // 0x3c1784: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3C1788u;
        goto label_3c1788;
    }
    ctx->pc = 0x3C1780u;
    SET_GPR_U32(ctx, 31, 0x3C1788u);
    ctx->pc = 0x3C1784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1780u;
            // 0x3c1784: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF160u;
    if (runtime->hasFunction(0x3BF160u)) {
        auto targetFn = runtime->lookupFunction(0x3BF160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1788u; }
        if (ctx->pc != 0x3C1788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF160_0x3bf160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1788u; }
        if (ctx->pc != 0x3C1788u) { return; }
    }
    ctx->pc = 0x3C1788u;
label_3c1788:
    // 0x3c1788: 0xc0f0e00  jal         func_3C3800
label_3c178c:
    if (ctx->pc == 0x3C178Cu) {
        ctx->pc = 0x3C178Cu;
            // 0x3c178c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1790u;
        goto label_3c1790;
    }
    ctx->pc = 0x3C1788u;
    SET_GPR_U32(ctx, 31, 0x3C1790u);
    ctx->pc = 0x3C178Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1788u;
            // 0x3c178c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3800u;
    if (runtime->hasFunction(0x3C3800u)) {
        auto targetFn = runtime->lookupFunction(0x3C3800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1790u; }
        if (ctx->pc != 0x3C1790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3800_0x3c3800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1790u; }
        if (ctx->pc != 0x3C1790u) { return; }
    }
    ctx->pc = 0x3C1790u;
label_3c1790:
    // 0x3c1790: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3c1790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3c1794:
    // 0x3c1794: 0xc04cc44  jal         func_133110
label_3c1798:
    if (ctx->pc == 0x3C1798u) {
        ctx->pc = 0x3C1798u;
            // 0x3c1798: 0x26050150  addiu       $a1, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->pc = 0x3C179Cu;
        goto label_3c179c;
    }
    ctx->pc = 0x3C1794u;
    SET_GPR_U32(ctx, 31, 0x3C179Cu);
    ctx->pc = 0x3C1798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1794u;
            // 0x3c1798: 0x26050150  addiu       $a1, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C179Cu; }
        if (ctx->pc != 0x3C179Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C179Cu; }
        if (ctx->pc != 0x3C179Cu) { return; }
    }
    ctx->pc = 0x3C179Cu;
label_3c179c:
    // 0x3c179c: 0x8e020194  lw          $v0, 0x194($s0)
    ctx->pc = 0x3c179cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
label_3c17a0:
    // 0x3c17a0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_3c17a4:
    if (ctx->pc == 0x3C17A4u) {
        ctx->pc = 0x3C17A4u;
            // 0x3c17a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C17A8u;
        goto label_3c17a8;
    }
    ctx->pc = 0x3C17A0u;
    {
        const bool branch_taken_0x3c17a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c17a0) {
            ctx->pc = 0x3C17A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C17A0u;
            // 0x3c17a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C17C0u;
            goto label_3c17c0;
        }
    }
    ctx->pc = 0x3C17A8u;
label_3c17a8:
    // 0x3c17a8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3c17a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3c17ac:
    // 0x3c17ac: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3c17acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3c17b0:
    // 0x3c17b0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3c17b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c17b4:
    // 0x3c17b4: 0xc04cc70  jal         func_1331C0
label_3c17b8:
    if (ctx->pc == 0x3C17B8u) {
        ctx->pc = 0x3C17B8u;
            // 0x3c17b8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C17BCu;
        goto label_3c17bc;
    }
    ctx->pc = 0x3C17B4u;
    SET_GPR_U32(ctx, 31, 0x3C17BCu);
    ctx->pc = 0x3C17B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C17B4u;
            // 0x3c17b8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C17BCu; }
        if (ctx->pc != 0x3C17BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C17BCu; }
        if (ctx->pc != 0x3C17BCu) { return; }
    }
    ctx->pc = 0x3C17BCu;
label_3c17bc:
    // 0x3c17bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c17bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c17c0:
    // 0x3c17c0: 0xc077280  jal         func_1DCA00
label_3c17c4:
    if (ctx->pc == 0x3C17C4u) {
        ctx->pc = 0x3C17C8u;
        goto label_3c17c8;
    }
    ctx->pc = 0x3C17C0u;
    SET_GPR_U32(ctx, 31, 0x3C17C8u);
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C17C8u; }
        if (ctx->pc != 0x3C17C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C17C8u; }
        if (ctx->pc != 0x3C17C8u) { return; }
    }
    ctx->pc = 0x3C17C8u;
label_3c17c8:
    // 0x3c17c8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3c17c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c17cc:
    // 0x3c17cc: 0xc0b6cec  jal         func_2DB3B0
label_3c17d0:
    if (ctx->pc == 0x3C17D0u) {
        ctx->pc = 0x3C17D0u;
            // 0x3c17d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C17D4u;
        goto label_3c17d4;
    }
    ctx->pc = 0x3C17CCu;
    SET_GPR_U32(ctx, 31, 0x3C17D4u);
    ctx->pc = 0x3C17D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C17CCu;
            // 0x3c17d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3B0u;
    if (runtime->hasFunction(0x2DB3B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C17D4u; }
        if (ctx->pc != 0x3C17D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB3B0_0x2db3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C17D4u; }
        if (ctx->pc != 0x3C17D4u) { return; }
    }
    ctx->pc = 0x3C17D4u;
label_3c17d4:
    // 0x3c17d4: 0xc0c1bfc  jal         func_306FF0
label_3c17d8:
    if (ctx->pc == 0x3C17D8u) {
        ctx->pc = 0x3C17D8u;
            // 0x3c17d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C17DCu;
        goto label_3c17dc;
    }
    ctx->pc = 0x3C17D4u;
    SET_GPR_U32(ctx, 31, 0x3C17DCu);
    ctx->pc = 0x3C17D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C17D4u;
            // 0x3c17d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306FF0u;
    if (runtime->hasFunction(0x306FF0u)) {
        auto targetFn = runtime->lookupFunction(0x306FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C17DCu; }
        if (ctx->pc != 0x3C17DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306FF0_0x306ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C17DCu; }
        if (ctx->pc != 0x3C17DCu) { return; }
    }
    ctx->pc = 0x3C17DCu;
label_3c17dc:
    // 0x3c17dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c17dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c17e0:
    // 0x3c17e0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3c17e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c17e4:
    // 0x3c17e4: 0xc075378  jal         func_1D4DE0
label_3c17e8:
    if (ctx->pc == 0x3C17E8u) {
        ctx->pc = 0x3C17E8u;
            // 0x3c17e8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3C17ECu;
        goto label_3c17ec;
    }
    ctx->pc = 0x3C17E4u;
    SET_GPR_U32(ctx, 31, 0x3C17ECu);
    ctx->pc = 0x3C17E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C17E4u;
            // 0x3c17e8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C17ECu; }
        if (ctx->pc != 0x3C17ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C17ECu; }
        if (ctx->pc != 0x3C17ECu) { return; }
    }
    ctx->pc = 0x3C17ECu;
label_3c17ec:
    // 0x3c17ec: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3c17ecu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3c17f0:
    // 0x3c17f0: 0xc0b6cec  jal         func_2DB3B0
label_3c17f4:
    if (ctx->pc == 0x3C17F4u) {
        ctx->pc = 0x3C17F4u;
            // 0x3c17f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C17F8u;
        goto label_3c17f8;
    }
    ctx->pc = 0x3C17F0u;
    SET_GPR_U32(ctx, 31, 0x3C17F8u);
    ctx->pc = 0x3C17F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C17F0u;
            // 0x3c17f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3B0u;
    if (runtime->hasFunction(0x2DB3B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C17F8u; }
        if (ctx->pc != 0x3C17F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB3B0_0x2db3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C17F8u; }
        if (ctx->pc != 0x3C17F8u) { return; }
    }
    ctx->pc = 0x3C17F8u;
label_3c17f8:
    // 0x3c17f8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3c17f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c17fc:
    // 0x3c17fc: 0xc0b6cec  jal         func_2DB3B0
label_3c1800:
    if (ctx->pc == 0x3C1800u) {
        ctx->pc = 0x3C1800u;
            // 0x3c1800: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1804u;
        goto label_3c1804;
    }
    ctx->pc = 0x3C17FCu;
    SET_GPR_U32(ctx, 31, 0x3C1804u);
    ctx->pc = 0x3C1800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C17FCu;
            // 0x3c1800: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3B0u;
    if (runtime->hasFunction(0x2DB3B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1804u; }
        if (ctx->pc != 0x3C1804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB3B0_0x2db3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1804u; }
        if (ctx->pc != 0x3C1804u) { return; }
    }
    ctx->pc = 0x3C1804u;
label_3c1804:
    // 0x3c1804: 0xc0f0dfc  jal         func_3C37F0
label_3c1808:
    if (ctx->pc == 0x3C1808u) {
        ctx->pc = 0x3C1808u;
            // 0x3c1808: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C180Cu;
        goto label_3c180c;
    }
    ctx->pc = 0x3C1804u;
    SET_GPR_U32(ctx, 31, 0x3C180Cu);
    ctx->pc = 0x3C1808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1804u;
            // 0x3c1808: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C37F0u;
    if (runtime->hasFunction(0x3C37F0u)) {
        auto targetFn = runtime->lookupFunction(0x3C37F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C180Cu; }
        if (ctx->pc != 0x3C180Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C37F0_0x3c37f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C180Cu; }
        if (ctx->pc != 0x3C180Cu) { return; }
    }
    ctx->pc = 0x3C180Cu;
label_3c180c:
    // 0x3c180c: 0x4600a300  add.s       $f12, $f20, $f0
    ctx->pc = 0x3c180cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_3c1810:
    // 0x3c1810: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c1810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3c1814:
    // 0x3c1814: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x3c1814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
label_3c1818:
    // 0x3c1818: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c1818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c181c:
    // 0x3c181c: 0xc4406598  lwc1        $f0, 0x6598($v0)
    ctx->pc = 0x3c181cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 26008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c1820:
    // 0x3c1820: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3c1820u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c1824:
    // 0x3c1824: 0xc0efc40  jal         func_3BF100
label_3c1828:
    if (ctx->pc == 0x3C1828u) {
        ctx->pc = 0x3C1828u;
            // 0x3c1828: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3C182Cu;
        goto label_3c182c;
    }
    ctx->pc = 0x3C1824u;
    SET_GPR_U32(ctx, 31, 0x3C182Cu);
    ctx->pc = 0x3C1828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1824u;
            // 0x3c1828: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF100u;
    if (runtime->hasFunction(0x3BF100u)) {
        auto targetFn = runtime->lookupFunction(0x3BF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C182Cu; }
        if (ctx->pc != 0x3C182Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF100_0x3bf100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C182Cu; }
        if (ctx->pc != 0x3C182Cu) { return; }
    }
    ctx->pc = 0x3C182Cu;
label_3c182c:
    // 0x3c182c: 0xc0c05dc  jal         func_301770
label_3c1830:
    if (ctx->pc == 0x3C1830u) {
        ctx->pc = 0x3C1830u;
            // 0x3c1830: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1834u;
        goto label_3c1834;
    }
    ctx->pc = 0x3C182Cu;
    SET_GPR_U32(ctx, 31, 0x3C1834u);
    ctx->pc = 0x3C1830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C182Cu;
            // 0x3c1830: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301770u;
    if (runtime->hasFunction(0x301770u)) {
        auto targetFn = runtime->lookupFunction(0x301770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1834u; }
        if (ctx->pc != 0x3C1834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301770_0x301770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1834u; }
        if (ctx->pc != 0x3C1834u) { return; }
    }
    ctx->pc = 0x3C1834u;
label_3c1834:
    // 0x3c1834: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3c1834u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c1838:
    // 0x3c1838: 0xc0b6cec  jal         func_2DB3B0
label_3c183c:
    if (ctx->pc == 0x3C183Cu) {
        ctx->pc = 0x3C183Cu;
            // 0x3c183c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1840u;
        goto label_3c1840;
    }
    ctx->pc = 0x3C1838u;
    SET_GPR_U32(ctx, 31, 0x3C1840u);
    ctx->pc = 0x3C183Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1838u;
            // 0x3c183c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3B0u;
    if (runtime->hasFunction(0x2DB3B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1840u; }
        if (ctx->pc != 0x3C1840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB3B0_0x2db3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1840u; }
        if (ctx->pc != 0x3C1840u) { return; }
    }
    ctx->pc = 0x3C1840u;
label_3c1840:
    // 0x3c1840: 0xc0f0dfc  jal         func_3C37F0
label_3c1844:
    if (ctx->pc == 0x3C1844u) {
        ctx->pc = 0x3C1844u;
            // 0x3c1844: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1848u;
        goto label_3c1848;
    }
    ctx->pc = 0x3C1840u;
    SET_GPR_U32(ctx, 31, 0x3C1848u);
    ctx->pc = 0x3C1844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1840u;
            // 0x3c1844: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C37F0u;
    if (runtime->hasFunction(0x3C37F0u)) {
        auto targetFn = runtime->lookupFunction(0x3C37F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1848u; }
        if (ctx->pc != 0x3C1848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C37F0_0x3c37f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1848u; }
        if (ctx->pc != 0x3C1848u) { return; }
    }
    ctx->pc = 0x3C1848u;
label_3c1848:
    // 0x3c1848: 0x4600a300  add.s       $f12, $f20, $f0
    ctx->pc = 0x3c1848u;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_3c184c:
    // 0x3c184c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c184cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3c1850:
    // 0x3c1850: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x3c1850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
label_3c1854:
    // 0x3c1854: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c1854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c1858:
    // 0x3c1858: 0xc4406598  lwc1        $f0, 0x6598($v0)
    ctx->pc = 0x3c1858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 26008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c185c:
    // 0x3c185c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3c185cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c1860:
    // 0x3c1860: 0xc0efc40  jal         func_3BF100
label_3c1864:
    if (ctx->pc == 0x3C1864u) {
        ctx->pc = 0x3C1864u;
            // 0x3c1864: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3C1868u;
        goto label_3c1868;
    }
    ctx->pc = 0x3C1860u;
    SET_GPR_U32(ctx, 31, 0x3C1868u);
    ctx->pc = 0x3C1864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1860u;
            // 0x3c1864: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF100u;
    if (runtime->hasFunction(0x3BF100u)) {
        auto targetFn = runtime->lookupFunction(0x3BF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1868u; }
        if (ctx->pc != 0x3C1868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF100_0x3bf100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1868u; }
        if (ctx->pc != 0x3C1868u) { return; }
    }
    ctx->pc = 0x3C1868u;
label_3c1868:
    // 0x3c1868: 0xc0775b8  jal         func_1DD6E0
label_3c186c:
    if (ctx->pc == 0x3C186Cu) {
        ctx->pc = 0x3C1870u;
        goto label_3c1870;
    }
    ctx->pc = 0x3C1868u;
    SET_GPR_U32(ctx, 31, 0x3C1870u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1870u; }
        if (ctx->pc != 0x3C1870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1870u; }
        if (ctx->pc != 0x3C1870u) { return; }
    }
    ctx->pc = 0x3C1870u;
label_3c1870:
    // 0x3c1870: 0xc0775b4  jal         func_1DD6D0
label_3c1874:
    if (ctx->pc == 0x3C1874u) {
        ctx->pc = 0x3C1874u;
            // 0x3c1874: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3C1878u;
        goto label_3c1878;
    }
    ctx->pc = 0x3C1870u;
    SET_GPR_U32(ctx, 31, 0x3C1878u);
    ctx->pc = 0x3C1874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1870u;
            // 0x3c1874: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1878u; }
        if (ctx->pc != 0x3C1878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1878u; }
        if (ctx->pc != 0x3C1878u) { return; }
    }
    ctx->pc = 0x3C1878u;
label_3c1878:
    // 0x3c1878: 0xc60101c8  lwc1        $f1, 0x1C8($s0)
    ctx->pc = 0x3c1878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c187c:
    // 0x3c187c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c187cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c1880:
    // 0x3c1880: 0xc0efd68  jal         func_3BF5A0
label_3c1884:
    if (ctx->pc == 0x3C1884u) {
        ctx->pc = 0x3C1884u;
            // 0x3c1884: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3C1888u;
        goto label_3c1888;
    }
    ctx->pc = 0x3C1880u;
    SET_GPR_U32(ctx, 31, 0x3C1888u);
    ctx->pc = 0x3C1884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1880u;
            // 0x3c1884: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF5A0u;
    if (runtime->hasFunction(0x3BF5A0u)) {
        auto targetFn = runtime->lookupFunction(0x3BF5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1888u; }
        if (ctx->pc != 0x3C1888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF5A0_0x3bf5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1888u; }
        if (ctx->pc != 0x3C1888u) { return; }
    }
    ctx->pc = 0x3C1888u;
label_3c1888:
    // 0x3c1888: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3c1888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c188c:
    // 0x3c188c: 0xc07756c  jal         func_1DD5B0
label_3c1890:
    if (ctx->pc == 0x3C1890u) {
        ctx->pc = 0x3C1890u;
            // 0x3c1890: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x3C1894u;
        goto label_3c1894;
    }
    ctx->pc = 0x3C188Cu;
    SET_GPR_U32(ctx, 31, 0x3C1894u);
    ctx->pc = 0x3C1890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C188Cu;
            // 0x3c1890: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5B0u;
    if (runtime->hasFunction(0x1DD5B0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1894u; }
        if (ctx->pc != 0x3C1894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5B0_0x1dd5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1894u; }
        if (ctx->pc != 0x3C1894u) { return; }
    }
    ctx->pc = 0x3C1894u;
label_3c1894:
    // 0x3c1894: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x3c1894u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c1898:
    // 0x3c1898: 0x45030049  bc1tl       . + 4 + (0x49 << 2)
label_3c189c:
    if (ctx->pc == 0x3C189Cu) {
        ctx->pc = 0x3C189Cu;
            // 0x3c189c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C18A0u;
        goto label_3c18a0;
    }
    ctx->pc = 0x3C1898u;
    {
        const bool branch_taken_0x3c1898 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c1898) {
            ctx->pc = 0x3C189Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1898u;
            // 0x3c189c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C19C0u;
            goto label_3c19c0;
        }
    }
    ctx->pc = 0x3C18A0u;
label_3c18a0:
    // 0x3c18a0: 0xc0772dc  jal         func_1DCB70
label_3c18a4:
    if (ctx->pc == 0x3C18A4u) {
        ctx->pc = 0x3C18A4u;
            // 0x3c18a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C18A8u;
        goto label_3c18a8;
    }
    ctx->pc = 0x3C18A0u;
    SET_GPR_U32(ctx, 31, 0x3C18A8u);
    ctx->pc = 0x3C18A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C18A0u;
            // 0x3c18a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCB70u;
    if (runtime->hasFunction(0x1DCB70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C18A8u; }
        if (ctx->pc != 0x3C18A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCB70_0x1dcb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C18A8u; }
        if (ctx->pc != 0x3C18A8u) { return; }
    }
    ctx->pc = 0x3C18A8u;
label_3c18a8:
    // 0x3c18a8: 0x8e0301a8  lw          $v1, 0x1A8($s0)
    ctx->pc = 0x3c18a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
label_3c18ac:
    // 0x3c18ac: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3c18acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3c18b0:
    // 0x3c18b0: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
label_3c18b4:
    if (ctx->pc == 0x3C18B4u) {
        ctx->pc = 0x3C18B4u;
            // 0x3c18b4: 0x3c024120  lui         $v0, 0x4120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
        ctx->pc = 0x3C18B8u;
        goto label_3c18b8;
    }
    ctx->pc = 0x3C18B0u;
    {
        const bool branch_taken_0x3c18b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c18b0) {
            ctx->pc = 0x3C18B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C18B0u;
            // 0x3c18b4: 0x3c024120  lui         $v0, 0x4120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C18DCu;
            goto label_3c18dc;
        }
    }
    ctx->pc = 0x3C18B8u;
label_3c18b8:
    // 0x3c18b8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3c18b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3c18bc:
    // 0x3c18bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c18bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c18c0:
    // 0x3c18c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3c18c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c18c4:
    // 0x3c18c4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x3c18c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3c18c8:
    // 0x3c18c8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3c18c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c18cc:
    // 0x3c18cc: 0xc0772d4  jal         func_1DCB50
label_3c18d0:
    if (ctx->pc == 0x3C18D0u) {
        ctx->pc = 0x3C18D0u;
            // 0x3c18d0: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x3C18D4u;
        goto label_3c18d4;
    }
    ctx->pc = 0x3C18CCu;
    SET_GPR_U32(ctx, 31, 0x3C18D4u);
    ctx->pc = 0x3C18D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C18CCu;
            // 0x3c18d0: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCB50u;
    if (runtime->hasFunction(0x1DCB50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C18D4u; }
        if (ctx->pc != 0x3C18D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCB50_0x1dcb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C18D4u; }
        if (ctx->pc != 0x3C18D4u) { return; }
    }
    ctx->pc = 0x3C18D4u;
label_3c18d4:
    // 0x3c18d4: 0x10000008  b           . + 4 + (0x8 << 2)
label_3c18d8:
    if (ctx->pc == 0x3C18D8u) {
        ctx->pc = 0x3C18D8u;
            // 0x3c18d8: 0x8e390058  lw          $t9, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->pc = 0x3C18DCu;
        goto label_3c18dc;
    }
    ctx->pc = 0x3C18D4u;
    {
        const bool branch_taken_0x3c18d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C18D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C18D4u;
            // 0x3c18d8: 0x8e390058  lw          $t9, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c18d4) {
            ctx->pc = 0x3C18F8u;
            goto label_3c18f8;
        }
    }
    ctx->pc = 0x3C18DCu;
label_3c18dc:
    // 0x3c18dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c18dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c18e0:
    // 0x3c18e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3c18e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c18e4:
    // 0x3c18e4: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x3c18e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_3c18e8:
    // 0x3c18e8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3c18e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c18ec:
    // 0x3c18ec: 0xc0772d4  jal         func_1DCB50
label_3c18f0:
    if (ctx->pc == 0x3C18F0u) {
        ctx->pc = 0x3C18F0u;
            // 0x3c18f0: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x3C18F4u;
        goto label_3c18f4;
    }
    ctx->pc = 0x3C18ECu;
    SET_GPR_U32(ctx, 31, 0x3C18F4u);
    ctx->pc = 0x3C18F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C18ECu;
            // 0x3c18f0: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCB50u;
    if (runtime->hasFunction(0x1DCB50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C18F4u; }
        if (ctx->pc != 0x3C18F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCB50_0x1dcb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C18F4u; }
        if (ctx->pc != 0x3C18F4u) { return; }
    }
    ctx->pc = 0x3C18F4u;
label_3c18f4:
    // 0x3c18f4: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x3c18f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_3c18f8:
    // 0x3c18f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c18f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c18fc:
    // 0x3c18fc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3c18fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3c1900:
    // 0x3c1900: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3c1900u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3c1904:
    // 0x3c1904: 0x320f809  jalr        $t9
label_3c1908:
    if (ctx->pc == 0x3C1908u) {
        ctx->pc = 0x3C1908u;
            // 0x3c1908: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3C190Cu;
        goto label_3c190c;
    }
    ctx->pc = 0x3C1904u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C190Cu);
        ctx->pc = 0x3C1908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1904u;
            // 0x3c1908: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C190Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C190Cu; }
            if (ctx->pc != 0x3C190Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3C190Cu;
label_3c190c:
    // 0x3c190c: 0xc0f0e80  jal         func_3C3A00
label_3c1910:
    if (ctx->pc == 0x3C1910u) {
        ctx->pc = 0x3C1910u;
            // 0x3c1910: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1914u;
        goto label_3c1914;
    }
    ctx->pc = 0x3C190Cu;
    SET_GPR_U32(ctx, 31, 0x3C1914u);
    ctx->pc = 0x3C1910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C190Cu;
            // 0x3c1910: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3A00u;
    if (runtime->hasFunction(0x3C3A00u)) {
        auto targetFn = runtime->lookupFunction(0x3C3A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1914u; }
        if (ctx->pc != 0x3C1914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3A00_0x3c3a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1914u; }
        if (ctx->pc != 0x3C1914u) { return; }
    }
    ctx->pc = 0x3C1914u;
label_3c1914:
    // 0x3c1914: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3c1914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c1918:
    // 0x3c1918: 0xc0eeb2c  jal         func_3BACB0
label_3c191c:
    if (ctx->pc == 0x3C191Cu) {
        ctx->pc = 0x3C191Cu;
            // 0x3c191c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x3C1920u;
        goto label_3c1920;
    }
    ctx->pc = 0x3C1918u;
    SET_GPR_U32(ctx, 31, 0x3C1920u);
    ctx->pc = 0x3C191Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1918u;
            // 0x3c191c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BACB0u;
    if (runtime->hasFunction(0x3BACB0u)) {
        auto targetFn = runtime->lookupFunction(0x3BACB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1920u; }
        if (ctx->pc != 0x3C1920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BACB0_0x3bacb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1920u; }
        if (ctx->pc != 0x3C1920u) { return; }
    }
    ctx->pc = 0x3C1920u;
label_3c1920:
    // 0x3c1920: 0xc0775b8  jal         func_1DD6E0
label_3c1924:
    if (ctx->pc == 0x3C1924u) {
        ctx->pc = 0x3C1928u;
        goto label_3c1928;
    }
    ctx->pc = 0x3C1920u;
    SET_GPR_U32(ctx, 31, 0x3C1928u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1928u; }
        if (ctx->pc != 0x3C1928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1928u; }
        if (ctx->pc != 0x3C1928u) { return; }
    }
    ctx->pc = 0x3C1928u;
label_3c1928:
    // 0x3c1928: 0xc0775b4  jal         func_1DD6D0
label_3c192c:
    if (ctx->pc == 0x3C192Cu) {
        ctx->pc = 0x3C192Cu;
            // 0x3c192c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3C1930u;
        goto label_3c1930;
    }
    ctx->pc = 0x3C1928u;
    SET_GPR_U32(ctx, 31, 0x3C1930u);
    ctx->pc = 0x3C192Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1928u;
            // 0x3c192c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1930u; }
        if (ctx->pc != 0x3C1930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1930u; }
        if (ctx->pc != 0x3C1930u) { return; }
    }
    ctx->pc = 0x3C1930u;
label_3c1930:
    // 0x3c1930: 0xc60101c8  lwc1        $f1, 0x1C8($s0)
    ctx->pc = 0x3c1930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c1934:
    // 0x3c1934: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c1934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c1938:
    // 0x3c1938: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x3c1938u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_3c193c:
    // 0x3c193c: 0xc0efd68  jal         func_3BF5A0
label_3c1940:
    if (ctx->pc == 0x3C1940u) {
        ctx->pc = 0x3C1940u;
            // 0x3c1940: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3C1944u;
        goto label_3c1944;
    }
    ctx->pc = 0x3C193Cu;
    SET_GPR_U32(ctx, 31, 0x3C1944u);
    ctx->pc = 0x3C1940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C193Cu;
            // 0x3c1940: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF5A0u;
    if (runtime->hasFunction(0x3BF5A0u)) {
        auto targetFn = runtime->lookupFunction(0x3BF5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1944u; }
        if (ctx->pc != 0x3C1944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF5A0_0x3bf5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1944u; }
        if (ctx->pc != 0x3C1944u) { return; }
    }
    ctx->pc = 0x3C1944u;
label_3c1944:
    // 0x3c1944: 0x8e190014  lw          $t9, 0x14($s0)
    ctx->pc = 0x3c1944u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3c1948:
    // 0x3c1948: 0x4600a302  mul.s       $f12, $f20, $f0
    ctx->pc = 0x3c1948u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_3c194c:
    // 0x3c194c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x3c194cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_3c1950:
    // 0x3c1950: 0x320f809  jalr        $t9
label_3c1954:
    if (ctx->pc == 0x3C1954u) {
        ctx->pc = 0x3C1954u;
            // 0x3c1954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1958u;
        goto label_3c1958;
    }
    ctx->pc = 0x3C1950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C1958u);
        ctx->pc = 0x3C1954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1950u;
            // 0x3c1954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C1958u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C1958u; }
            if (ctx->pc != 0x3C1958u) { return; }
        }
        }
    }
    ctx->pc = 0x3C1958u;
label_3c1958:
    // 0x3c1958: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3c1958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c195c:
    // 0x3c195c: 0xc077568  jal         func_1DD5A0
label_3c1960:
    if (ctx->pc == 0x3C1960u) {
        ctx->pc = 0x3C1960u;
            // 0x3c1960: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x3C1964u;
        goto label_3c1964;
    }
    ctx->pc = 0x3C195Cu;
    SET_GPR_U32(ctx, 31, 0x3C1964u);
    ctx->pc = 0x3C1960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C195Cu;
            // 0x3c1960: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5A0u;
    if (runtime->hasFunction(0x1DD5A0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1964u; }
        if (ctx->pc != 0x3C1964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5A0_0x1dd5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1964u; }
        if (ctx->pc != 0x3C1964u) { return; }
    }
    ctx->pc = 0x3C1964u;
label_3c1964:
    // 0x3c1964: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c1964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c1968:
    // 0x3c1968: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3c1968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3c196c:
    // 0x3c196c: 0xae0301ac  sw          $v1, 0x1AC($s0)
    ctx->pc = 0x3c196cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 3));
label_3c1970:
    // 0x3c1970: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c1970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c1974:
    // 0x3c1974: 0xc077330  jal         func_1DCCC0
label_3c1978:
    if (ctx->pc == 0x3C1978u) {
        ctx->pc = 0x3C1978u;
            // 0x3c1978: 0xae0201b8  sw          $v0, 0x1B8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 2));
        ctx->pc = 0x3C197Cu;
        goto label_3c197c;
    }
    ctx->pc = 0x3C1974u;
    SET_GPR_U32(ctx, 31, 0x3C197Cu);
    ctx->pc = 0x3C1978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1974u;
            // 0x3c1978: 0xae0201b8  sw          $v0, 0x1B8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCCC0u;
    if (runtime->hasFunction(0x1DCCC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C197Cu; }
        if (ctx->pc != 0x3C197Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCCC0_0x1dccc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C197Cu; }
        if (ctx->pc != 0x3C197Cu) { return; }
    }
    ctx->pc = 0x3C197Cu;
label_3c197c:
    // 0x3c197c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3c1980:
    if (ctx->pc == 0x3C1980u) {
        ctx->pc = 0x3C1984u;
        goto label_3c1984;
    }
    ctx->pc = 0x3C197Cu;
    {
        const bool branch_taken_0x3c197c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c197c) {
            ctx->pc = 0x3C1994u;
            goto label_3c1994;
        }
    }
    ctx->pc = 0x3C1984u;
label_3c1984:
    // 0x3c1984: 0xc07732c  jal         func_1DCCB0
label_3c1988:
    if (ctx->pc == 0x3C1988u) {
        ctx->pc = 0x3C1988u;
            // 0x3c1988: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C198Cu;
        goto label_3c198c;
    }
    ctx->pc = 0x3C1984u;
    SET_GPR_U32(ctx, 31, 0x3C198Cu);
    ctx->pc = 0x3C1988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1984u;
            // 0x3c1988: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCCB0u;
    if (runtime->hasFunction(0x1DCCB0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C198Cu; }
        if (ctx->pc != 0x3C198Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCCB0_0x1dccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C198Cu; }
        if (ctx->pc != 0x3C198Cu) { return; }
    }
    ctx->pc = 0x3C198Cu;
label_3c198c:
    // 0x3c198c: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
label_3c1990:
    if (ctx->pc == 0x3C1990u) {
        ctx->pc = 0x3C1990u;
            // 0x3c1990: 0x8e0301a8  lw          $v1, 0x1A8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
        ctx->pc = 0x3C1994u;
        goto label_3c1994;
    }
    ctx->pc = 0x3C198Cu;
    {
        const bool branch_taken_0x3c198c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c198c) {
            ctx->pc = 0x3C1990u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C198Cu;
            // 0x3c1990: 0x8e0301a8  lw          $v1, 0x1A8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C1A10u;
            goto label_3c1a10;
        }
    }
    ctx->pc = 0x3C1994u;
label_3c1994:
    // 0x3c1994: 0xc0c05c4  jal         func_301710
label_3c1998:
    if (ctx->pc == 0x3C1998u) {
        ctx->pc = 0x3C199Cu;
        goto label_3c199c;
    }
    ctx->pc = 0x3C1994u;
    SET_GPR_U32(ctx, 31, 0x3C199Cu);
    ctx->pc = 0x301710u;
    if (runtime->hasFunction(0x301710u)) {
        auto targetFn = runtime->lookupFunction(0x301710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C199Cu; }
        if (ctx->pc != 0x3C199Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301710_0x301710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C199Cu; }
        if (ctx->pc != 0x3C199Cu) { return; }
    }
    ctx->pc = 0x3C199Cu;
label_3c199c:
    // 0x3c199c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c199cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c19a0:
    // 0x3c19a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c19a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c19a4:
    // 0x3c19a4: 0xc0770e0  jal         func_1DC380
label_3c19a8:
    if (ctx->pc == 0x3C19A8u) {
        ctx->pc = 0x3C19A8u;
            // 0x3c19a8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x3C19ACu;
        goto label_3c19ac;
    }
    ctx->pc = 0x3C19A4u;
    SET_GPR_U32(ctx, 31, 0x3C19ACu);
    ctx->pc = 0x3C19A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C19A4u;
            // 0x3c19a8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC380u;
    if (runtime->hasFunction(0x1DC380u)) {
        auto targetFn = runtime->lookupFunction(0x1DC380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C19ACu; }
        if (ctx->pc != 0x3C19ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC380_0x1dc380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C19ACu; }
        if (ctx->pc != 0x3C19ACu) { return; }
    }
    ctx->pc = 0x3C19ACu;
label_3c19ac:
    // 0x3c19ac: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x3c19acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_3c19b0:
    // 0x3c19b0: 0xc0de630  jal         func_3798C0
label_3c19b4:
    if (ctx->pc == 0x3C19B4u) {
        ctx->pc = 0x3C19B4u;
            // 0x3c19b4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C19B8u;
        goto label_3c19b8;
    }
    ctx->pc = 0x3C19B0u;
    SET_GPR_U32(ctx, 31, 0x3C19B8u);
    ctx->pc = 0x3C19B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C19B0u;
            // 0x3c19b4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3798C0u;
    if (runtime->hasFunction(0x3798C0u)) {
        auto targetFn = runtime->lookupFunction(0x3798C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C19B8u; }
        if (ctx->pc != 0x3C19B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003798C0_0x3798c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C19B8u; }
        if (ctx->pc != 0x3C19B8u) { return; }
    }
    ctx->pc = 0x3C19B8u;
label_3c19b8:
    // 0x3c19b8: 0x10000014  b           . + 4 + (0x14 << 2)
label_3c19bc:
    if (ctx->pc == 0x3C19BCu) {
        ctx->pc = 0x3C19C0u;
        goto label_3c19c0;
    }
    ctx->pc = 0x3C19B8u;
    {
        const bool branch_taken_0x3c19b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c19b8) {
            ctx->pc = 0x3C1A0Cu;
            goto label_3c1a0c;
        }
    }
    ctx->pc = 0x3C19C0u;
label_3c19c0:
    // 0x3c19c0: 0xc0772dc  jal         func_1DCB70
label_3c19c4:
    if (ctx->pc == 0x3C19C4u) {
        ctx->pc = 0x3C19C8u;
        goto label_3c19c8;
    }
    ctx->pc = 0x3C19C0u;
    SET_GPR_U32(ctx, 31, 0x3C19C8u);
    ctx->pc = 0x1DCB70u;
    if (runtime->hasFunction(0x1DCB70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C19C8u; }
        if (ctx->pc != 0x3C19C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCB70_0x1dcb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C19C8u; }
        if (ctx->pc != 0x3C19C8u) { return; }
    }
    ctx->pc = 0x3C19C8u;
label_3c19c8:
    // 0x3c19c8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3c19c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3c19cc:
    // 0x3c19cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c19ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c19d0:
    // 0x3c19d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3c19d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c19d4:
    // 0x3c19d4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3c19d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3c19d8:
    // 0x3c19d8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3c19d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c19dc:
    // 0x3c19dc: 0xc0772d4  jal         func_1DCB50
label_3c19e0:
    if (ctx->pc == 0x3C19E0u) {
        ctx->pc = 0x3C19E0u;
            // 0x3c19e0: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x3C19E4u;
        goto label_3c19e4;
    }
    ctx->pc = 0x3C19DCu;
    SET_GPR_U32(ctx, 31, 0x3C19E4u);
    ctx->pc = 0x3C19E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C19DCu;
            // 0x3c19e0: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCB50u;
    if (runtime->hasFunction(0x1DCB50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C19E4u; }
        if (ctx->pc != 0x3C19E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCB50_0x1dcb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C19E4u; }
        if (ctx->pc != 0x3C19E4u) { return; }
    }
    ctx->pc = 0x3C19E4u;
label_3c19e4:
    // 0x3c19e4: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x3c19e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_3c19e8:
    // 0x3c19e8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3c19e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c19ec:
    // 0x3c19ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c19ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c19f0:
    // 0x3c19f0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3c19f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3c19f4:
    // 0x3c19f4: 0x320f809  jalr        $t9
label_3c19f8:
    if (ctx->pc == 0x3C19F8u) {
        ctx->pc = 0x3C19F8u;
            // 0x3c19f8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C19FCu;
        goto label_3c19fc;
    }
    ctx->pc = 0x3C19F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C19FCu);
        ctx->pc = 0x3C19F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C19F4u;
            // 0x3c19f8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C19FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C19FCu; }
            if (ctx->pc != 0x3C19FCu) { return; }
        }
        }
    }
    ctx->pc = 0x3C19FCu;
label_3c19fc:
    // 0x3c19fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3c19fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c1a00:
    // 0x3c1a00: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x3c1a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_3c1a04:
    // 0x3c1a04: 0xae0301ac  sw          $v1, 0x1AC($s0)
    ctx->pc = 0x3c1a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 3));
label_3c1a08:
    // 0x3c1a08: 0xae0201b8  sw          $v0, 0x1B8($s0)
    ctx->pc = 0x3c1a08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 2));
label_3c1a0c:
    // 0x3c1a0c: 0x8e0301a8  lw          $v1, 0x1A8($s0)
    ctx->pc = 0x3c1a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
label_3c1a10:
    // 0x3c1a10: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3c1a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3c1a14:
    // 0x3c1a14: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_3c1a18:
    if (ctx->pc == 0x3C1A18u) {
        ctx->pc = 0x3C1A1Cu;
        goto label_3c1a1c;
    }
    ctx->pc = 0x3C1A14u;
    {
        const bool branch_taken_0x3c1a14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c1a14) {
            ctx->pc = 0x3C1A3Cu;
            goto label_3c1a3c;
        }
    }
    ctx->pc = 0x3C1A1Cu;
label_3c1a1c:
    // 0x3c1a1c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c1a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3c1a20:
    // 0x3c1a20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c1a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c1a24:
    // 0x3c1a24: 0xc4406598  lwc1        $f0, 0x6598($v0)
    ctx->pc = 0x3c1a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 26008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c1a28:
    // 0x3c1a28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3c1a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c1a2c:
    // 0x3c1a2c: 0xc0efdd8  jal         func_3BF760
label_3c1a30:
    if (ctx->pc == 0x3C1A30u) {
        ctx->pc = 0x3C1A30u;
            // 0x3c1a30: 0xe60001b0  swc1        $f0, 0x1B0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
        ctx->pc = 0x3C1A34u;
        goto label_3c1a34;
    }
    ctx->pc = 0x3C1A2Cu;
    SET_GPR_U32(ctx, 31, 0x3C1A34u);
    ctx->pc = 0x3C1A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1A2Cu;
            // 0x3c1a30: 0xe60001b0  swc1        $f0, 0x1B0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF760u;
    if (runtime->hasFunction(0x3BF760u)) {
        auto targetFn = runtime->lookupFunction(0x3BF760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1A34u; }
        if (ctx->pc != 0x3C1A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF760_0x3bf760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1A34u; }
        if (ctx->pc != 0x3C1A34u) { return; }
    }
    ctx->pc = 0x3C1A34u;
label_3c1a34:
    // 0x3c1a34: 0x1000024b  b           . + 4 + (0x24B << 2)
label_3c1a38:
    if (ctx->pc == 0x3C1A38u) {
        ctx->pc = 0x3C1A3Cu;
        goto label_3c1a3c;
    }
    ctx->pc = 0x3C1A34u;
    {
        const bool branch_taken_0x3c1a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c1a34) {
            ctx->pc = 0x3C2364u;
            goto label_3c2364;
        }
    }
    ctx->pc = 0x3C1A3Cu;
label_3c1a3c:
    // 0x3c1a3c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c1a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3c1a40:
    // 0x3c1a40: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x3c1a40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_3c1a44:
    // 0x3c1a44: 0xc4406598  lwc1        $f0, 0x6598($v0)
    ctx->pc = 0x3c1a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 26008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c1a48:
    // 0x3c1a48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c1a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c1a4c:
    // 0x3c1a4c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3c1a4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c1a50:
    // 0x3c1a50: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3c1a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c1a54:
    // 0x3c1a54: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3c1a54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3c1a58:
    // 0x3c1a58: 0xc0efdd8  jal         func_3BF760
label_3c1a5c:
    if (ctx->pc == 0x3C1A5Cu) {
        ctx->pc = 0x3C1A5Cu;
            // 0x3c1a5c: 0xe60001b0  swc1        $f0, 0x1B0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
        ctx->pc = 0x3C1A60u;
        goto label_3c1a60;
    }
    ctx->pc = 0x3C1A58u;
    SET_GPR_U32(ctx, 31, 0x3C1A60u);
    ctx->pc = 0x3C1A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1A58u;
            // 0x3c1a5c: 0xe60001b0  swc1        $f0, 0x1B0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF760u;
    if (runtime->hasFunction(0x3BF760u)) {
        auto targetFn = runtime->lookupFunction(0x3BF760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1A60u; }
        if (ctx->pc != 0x3C1A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF760_0x3bf760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1A60u; }
        if (ctx->pc != 0x3C1A60u) { return; }
    }
    ctx->pc = 0x3C1A60u;
label_3c1a60:
    // 0x3c1a60: 0x8e0401ac  lw          $a0, 0x1AC($s0)
    ctx->pc = 0x3c1a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
label_3c1a64:
    // 0x3c1a64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c1a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c1a68:
    // 0x3c1a68: 0x1483023e  bne         $a0, $v1, . + 4 + (0x23E << 2)
label_3c1a6c:
    if (ctx->pc == 0x3C1A6Cu) {
        ctx->pc = 0x3C1A70u;
        goto label_3c1a70;
    }
    ctx->pc = 0x3C1A68u;
    {
        const bool branch_taken_0x3c1a68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3c1a68) {
            ctx->pc = 0x3C2364u;
            goto label_3c2364;
        }
    }
    ctx->pc = 0x3C1A70u;
label_3c1a70:
    // 0x3c1a70: 0xc0c1a10  jal         func_306840
label_3c1a74:
    if (ctx->pc == 0x3C1A74u) {
        ctx->pc = 0x3C1A74u;
            // 0x3c1a74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1A78u;
        goto label_3c1a78;
    }
    ctx->pc = 0x3C1A70u;
    SET_GPR_U32(ctx, 31, 0x3C1A78u);
    ctx->pc = 0x3C1A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1A70u;
            // 0x3c1a74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306840u;
    if (runtime->hasFunction(0x306840u)) {
        auto targetFn = runtime->lookupFunction(0x306840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1A78u; }
        if (ctx->pc != 0x3C1A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306840_0x306840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1A78u; }
        if (ctx->pc != 0x3C1A78u) { return; }
    }
    ctx->pc = 0x3C1A78u;
label_3c1a78:
    // 0x3c1a78: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3c1a78u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3c1a7c:
    // 0x3c1a7c: 0xc0c1a0c  jal         func_306830
label_3c1a80:
    if (ctx->pc == 0x3C1A80u) {
        ctx->pc = 0x3C1A80u;
            // 0x3c1a80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1A84u;
        goto label_3c1a84;
    }
    ctx->pc = 0x3C1A7Cu;
    SET_GPR_U32(ctx, 31, 0x3C1A84u);
    ctx->pc = 0x3C1A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1A7Cu;
            // 0x3c1a80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306830u;
    if (runtime->hasFunction(0x306830u)) {
        auto targetFn = runtime->lookupFunction(0x306830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1A84u; }
        if (ctx->pc != 0x3C1A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306830_0x306830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1A84u; }
        if (ctx->pc != 0x3C1A84u) { return; }
    }
    ctx->pc = 0x3C1A84u;
label_3c1a84:
    // 0x3c1a84: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3c1a84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c1a88:
    // 0x3c1a88: 0xc0efe7c  jal         func_3BF9F0
label_3c1a8c:
    if (ctx->pc == 0x3C1A8Cu) {
        ctx->pc = 0x3C1A8Cu;
            // 0x3c1a8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1A90u;
        goto label_3c1a90;
    }
    ctx->pc = 0x3C1A88u;
    SET_GPR_U32(ctx, 31, 0x3C1A90u);
    ctx->pc = 0x3C1A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1A88u;
            // 0x3c1a8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF9F0u;
    if (runtime->hasFunction(0x3BF9F0u)) {
        auto targetFn = runtime->lookupFunction(0x3BF9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1A90u; }
        if (ctx->pc != 0x3C1A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF9F0_0x3bf9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1A90u; }
        if (ctx->pc != 0x3C1A90u) { return; }
    }
    ctx->pc = 0x3C1A90u;
label_3c1a90:
    // 0x3c1a90: 0x10000234  b           . + 4 + (0x234 << 2)
label_3c1a94:
    if (ctx->pc == 0x3C1A94u) {
        ctx->pc = 0x3C1A98u;
        goto label_3c1a98;
    }
    ctx->pc = 0x3C1A90u;
    {
        const bool branch_taken_0x3c1a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c1a90) {
            ctx->pc = 0x3C2364u;
            goto label_3c2364;
        }
    }
    ctx->pc = 0x3C1A98u;
label_3c1a98:
    // 0x3c1a98: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_3c1a9c:
    if (ctx->pc == 0x3C1A9Cu) {
        ctx->pc = 0x3C1A9Cu;
            // 0x3c1a9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1AA0u;
        goto label_3c1aa0;
    }
    ctx->pc = 0x3C1A98u;
    {
        const bool branch_taken_0x3c1a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3c1a98) {
            ctx->pc = 0x3C1A9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1A98u;
            // 0x3c1a9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C1AACu;
            goto label_3c1aac;
        }
    }
    ctx->pc = 0x3C1AA0u;
label_3c1aa0:
    // 0x3c1aa0: 0xc0eea50  jal         func_3BA940
label_3c1aa4:
    if (ctx->pc == 0x3C1AA4u) {
        ctx->pc = 0x3C1AA4u;
            // 0x3c1aa4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3C1AA8u;
        goto label_3c1aa8;
    }
    ctx->pc = 0x3C1AA0u;
    SET_GPR_U32(ctx, 31, 0x3C1AA8u);
    ctx->pc = 0x3C1AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1AA0u;
            // 0x3c1aa4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BA940u;
    if (runtime->hasFunction(0x3BA940u)) {
        auto targetFn = runtime->lookupFunction(0x3BA940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1AA8u; }
        if (ctx->pc != 0x3C1AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BA940_0x3ba940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1AA8u; }
        if (ctx->pc != 0x3C1AA8u) { return; }
    }
    ctx->pc = 0x3C1AA8u;
label_3c1aa8:
    // 0x3c1aa8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c1aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c1aac:
    // 0x3c1aac: 0xc0783ac  jal         func_1E0EB0
label_3c1ab0:
    if (ctx->pc == 0x3C1AB0u) {
        ctx->pc = 0x3C1AB4u;
        goto label_3c1ab4;
    }
    ctx->pc = 0x3C1AACu;
    SET_GPR_U32(ctx, 31, 0x3C1AB4u);
    ctx->pc = 0x1E0EB0u;
    if (runtime->hasFunction(0x1E0EB0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1AB4u; }
        if (ctx->pc != 0x3C1AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0EB0_0x1e0eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1AB4u; }
        if (ctx->pc != 0x3C1AB4u) { return; }
    }
    ctx->pc = 0x3C1AB4u;
label_3c1ab4:
    // 0x3c1ab4: 0x3c023e6d  lui         $v0, 0x3E6D
    ctx->pc = 0x3c1ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15981 << 16));
label_3c1ab8:
    // 0x3c1ab8: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x3c1ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_3c1abc:
    // 0x3c1abc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3c1abcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c1ac0:
    // 0x3c1ac0: 0x0  nop
    ctx->pc = 0x3c1ac0u;
    // NOP
label_3c1ac4:
    // 0x3c1ac4: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x3c1ac4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c1ac8:
    // 0x3c1ac8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_3c1acc:
    if (ctx->pc == 0x3C1ACCu) {
        ctx->pc = 0x3C1AD0u;
        goto label_3c1ad0;
    }
    ctx->pc = 0x3C1AC8u;
    {
        const bool branch_taken_0x3c1ac8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c1ac8) {
            ctx->pc = 0x3C1AE4u;
            goto label_3c1ae4;
        }
    }
    ctx->pc = 0x3C1AD0u;
label_3c1ad0:
    // 0x3c1ad0: 0xc0c1a0c  jal         func_306830
label_3c1ad4:
    if (ctx->pc == 0x3C1AD4u) {
        ctx->pc = 0x3C1AD4u;
            // 0x3c1ad4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1AD8u;
        goto label_3c1ad8;
    }
    ctx->pc = 0x3C1AD0u;
    SET_GPR_U32(ctx, 31, 0x3C1AD8u);
    ctx->pc = 0x3C1AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1AD0u;
            // 0x3c1ad4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306830u;
    if (runtime->hasFunction(0x306830u)) {
        auto targetFn = runtime->lookupFunction(0x306830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1AD8u; }
        if (ctx->pc != 0x3C1AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306830_0x306830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1AD8u; }
        if (ctx->pc != 0x3C1AD8u) { return; }
    }
    ctx->pc = 0x3C1AD8u;
label_3c1ad8:
    // 0x3c1ad8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3c1ad8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c1adc:
    // 0x3c1adc: 0xc0efe7c  jal         func_3BF9F0
label_3c1ae0:
    if (ctx->pc == 0x3C1AE0u) {
        ctx->pc = 0x3C1AE0u;
            // 0x3c1ae0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1AE4u;
        goto label_3c1ae4;
    }
    ctx->pc = 0x3C1ADCu;
    SET_GPR_U32(ctx, 31, 0x3C1AE4u);
    ctx->pc = 0x3C1AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1ADCu;
            // 0x3c1ae0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF9F0u;
    if (runtime->hasFunction(0x3BF9F0u)) {
        auto targetFn = runtime->lookupFunction(0x3BF9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1AE4u; }
        if (ctx->pc != 0x3C1AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF9F0_0x3bf9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1AE4u; }
        if (ctx->pc != 0x3C1AE4u) { return; }
    }
    ctx->pc = 0x3C1AE4u;
label_3c1ae4:
    // 0x3c1ae4: 0xc0775b8  jal         func_1DD6E0
label_3c1ae8:
    if (ctx->pc == 0x3C1AE8u) {
        ctx->pc = 0x3C1AECu;
        goto label_3c1aec;
    }
    ctx->pc = 0x3C1AE4u;
    SET_GPR_U32(ctx, 31, 0x3C1AECu);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1AECu; }
        if (ctx->pc != 0x3C1AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1AECu; }
        if (ctx->pc != 0x3C1AECu) { return; }
    }
    ctx->pc = 0x3C1AECu;
label_3c1aec:
    // 0x3c1aec: 0xc0775b4  jal         func_1DD6D0
label_3c1af0:
    if (ctx->pc == 0x3C1AF0u) {
        ctx->pc = 0x3C1AF0u;
            // 0x3c1af0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3C1AF4u;
        goto label_3c1af4;
    }
    ctx->pc = 0x3C1AECu;
    SET_GPR_U32(ctx, 31, 0x3C1AF4u);
    ctx->pc = 0x3C1AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1AECu;
            // 0x3c1af0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1AF4u; }
        if (ctx->pc != 0x3C1AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1AF4u; }
        if (ctx->pc != 0x3C1AF4u) { return; }
    }
    ctx->pc = 0x3C1AF4u;
label_3c1af4:
    // 0x3c1af4: 0xc60201b0  lwc1        $f2, 0x1B0($s0)
    ctx->pc = 0x3c1af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c1af8:
    // 0x3c1af8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3c1af8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c1afc:
    // 0x3c1afc: 0x0  nop
    ctx->pc = 0x3c1afcu;
    // NOP
label_3c1b00:
    // 0x3c1b00: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x3c1b00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_3c1b04:
    // 0x3c1b04: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3c1b04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c1b08:
    // 0x3c1b08: 0x45000216  bc1f        . + 4 + (0x216 << 2)
label_3c1b0c:
    if (ctx->pc == 0x3C1B0Cu) {
        ctx->pc = 0x3C1B0Cu;
            // 0x3c1b0c: 0xe60001b0  swc1        $f0, 0x1B0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
        ctx->pc = 0x3C1B10u;
        goto label_3c1b10;
    }
    ctx->pc = 0x3C1B08u;
    {
        const bool branch_taken_0x3c1b08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C1B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1B08u;
            // 0x3c1b0c: 0xe60001b0  swc1        $f0, 0x1B0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1b08) {
            ctx->pc = 0x3C2364u;
            goto label_3c2364;
        }
    }
    ctx->pc = 0x3C1B10u;
label_3c1b10:
    // 0x3c1b10: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3c1b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c1b14:
    // 0x3c1b14: 0xc0efc58  jal         func_3BF160
label_3c1b18:
    if (ctx->pc == 0x3C1B18u) {
        ctx->pc = 0x3C1B18u;
            // 0x3c1b18: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3C1B1Cu;
        goto label_3c1b1c;
    }
    ctx->pc = 0x3C1B14u;
    SET_GPR_U32(ctx, 31, 0x3C1B1Cu);
    ctx->pc = 0x3C1B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1B14u;
            // 0x3c1b18: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF160u;
    if (runtime->hasFunction(0x3BF160u)) {
        auto targetFn = runtime->lookupFunction(0x3BF160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1B1Cu; }
        if (ctx->pc != 0x3C1B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF160_0x3bf160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1B1Cu; }
        if (ctx->pc != 0x3C1B1Cu) { return; }
    }
    ctx->pc = 0x3C1B1Cu;
label_3c1b1c:
    // 0x3c1b1c: 0x8e0301ac  lw          $v1, 0x1AC($s0)
    ctx->pc = 0x3c1b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
label_3c1b20:
    // 0x3c1b20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c1b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c1b24:
    // 0x3c1b24: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
label_3c1b28:
    if (ctx->pc == 0x3C1B28u) {
        ctx->pc = 0x3C1B28u;
            // 0x3c1b28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1B2Cu;
        goto label_3c1b2c;
    }
    ctx->pc = 0x3C1B24u;
    {
        const bool branch_taken_0x3c1b24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c1b24) {
            ctx->pc = 0x3C1B28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1B24u;
            // 0x3c1b28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C1B54u;
            goto label_3c1b54;
        }
    }
    ctx->pc = 0x3C1B2Cu;
label_3c1b2c:
    // 0x3c1b2c: 0xc0c1a10  jal         func_306840
label_3c1b30:
    if (ctx->pc == 0x3C1B30u) {
        ctx->pc = 0x3C1B30u;
            // 0x3c1b30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1B34u;
        goto label_3c1b34;
    }
    ctx->pc = 0x3C1B2Cu;
    SET_GPR_U32(ctx, 31, 0x3C1B34u);
    ctx->pc = 0x3C1B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1B2Cu;
            // 0x3c1b30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306840u;
    if (runtime->hasFunction(0x306840u)) {
        auto targetFn = runtime->lookupFunction(0x306840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1B34u; }
        if (ctx->pc != 0x3C1B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306840_0x306840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1B34u; }
        if (ctx->pc != 0x3C1B34u) { return; }
    }
    ctx->pc = 0x3C1B34u;
label_3c1b34:
    // 0x3c1b34: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3c1b34u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3c1b38:
    // 0x3c1b38: 0xc0c1a0c  jal         func_306830
label_3c1b3c:
    if (ctx->pc == 0x3C1B3Cu) {
        ctx->pc = 0x3C1B3Cu;
            // 0x3c1b3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1B40u;
        goto label_3c1b40;
    }
    ctx->pc = 0x3C1B38u;
    SET_GPR_U32(ctx, 31, 0x3C1B40u);
    ctx->pc = 0x3C1B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1B38u;
            // 0x3c1b3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306830u;
    if (runtime->hasFunction(0x306830u)) {
        auto targetFn = runtime->lookupFunction(0x306830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1B40u; }
        if (ctx->pc != 0x3C1B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306830_0x306830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1B40u; }
        if (ctx->pc != 0x3C1B40u) { return; }
    }
    ctx->pc = 0x3C1B40u;
label_3c1b40:
    // 0x3c1b40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c1b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c1b44:
    // 0x3c1b44: 0xc0f0f84  jal         func_3C3E10
label_3c1b48:
    if (ctx->pc == 0x3C1B48u) {
        ctx->pc = 0x3C1B48u;
            // 0x3c1b48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3C1B4Cu;
        goto label_3c1b4c;
    }
    ctx->pc = 0x3C1B44u;
    SET_GPR_U32(ctx, 31, 0x3C1B4Cu);
    ctx->pc = 0x3C1B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1B44u;
            // 0x3c1b48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3E10u;
    if (runtime->hasFunction(0x3C3E10u)) {
        auto targetFn = runtime->lookupFunction(0x3C3E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1B4Cu; }
        if (ctx->pc != 0x3C1B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3E10_0x3c3e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1B4Cu; }
        if (ctx->pc != 0x3C1B4Cu) { return; }
    }
    ctx->pc = 0x3C1B4Cu;
label_3c1b4c:
    // 0x3c1b4c: 0x10000004  b           . + 4 + (0x4 << 2)
label_3c1b50:
    if (ctx->pc == 0x3C1B50u) {
        ctx->pc = 0x3C1B50u;
            // 0x3c1b50: 0x3c023e6d  lui         $v0, 0x3E6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15981 << 16));
        ctx->pc = 0x3C1B54u;
        goto label_3c1b54;
    }
    ctx->pc = 0x3C1B4Cu;
    {
        const bool branch_taken_0x3c1b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1B4Cu;
            // 0x3c1b50: 0x3c023e6d  lui         $v0, 0x3E6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15981 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1b4c) {
            ctx->pc = 0x3C1B60u;
            goto label_3c1b60;
        }
    }
    ctx->pc = 0x3C1B54u;
label_3c1b54:
    // 0x3c1b54: 0xc0f0f84  jal         func_3C3E10
label_3c1b58:
    if (ctx->pc == 0x3C1B58u) {
        ctx->pc = 0x3C1B58u;
            // 0x3c1b58: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x3C1B5Cu;
        goto label_3c1b5c;
    }
    ctx->pc = 0x3C1B54u;
    SET_GPR_U32(ctx, 31, 0x3C1B5Cu);
    ctx->pc = 0x3C1B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1B54u;
            // 0x3c1b58: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3E10u;
    if (runtime->hasFunction(0x3C3E10u)) {
        auto targetFn = runtime->lookupFunction(0x3C3E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1B5Cu; }
        if (ctx->pc != 0x3C1B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3E10_0x3c3e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1B5Cu; }
        if (ctx->pc != 0x3C1B5Cu) { return; }
    }
    ctx->pc = 0x3C1B5Cu;
label_3c1b5c:
    // 0x3c1b5c: 0x3c023e6d  lui         $v0, 0x3E6D
    ctx->pc = 0x3c1b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15981 << 16));
label_3c1b60:
    // 0x3c1b60: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x3c1b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_3c1b64:
    // 0x3c1b64: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3c1b64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c1b68:
    // 0x3c1b68: 0xc0c1a0c  jal         func_306830
label_3c1b6c:
    if (ctx->pc == 0x3C1B6Cu) {
        ctx->pc = 0x3C1B6Cu;
            // 0x3c1b6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1B70u;
        goto label_3c1b70;
    }
    ctx->pc = 0x3C1B68u;
    SET_GPR_U32(ctx, 31, 0x3C1B70u);
    ctx->pc = 0x3C1B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1B68u;
            // 0x3c1b6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306830u;
    if (runtime->hasFunction(0x306830u)) {
        auto targetFn = runtime->lookupFunction(0x306830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1B70u; }
        if (ctx->pc != 0x3C1B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306830_0x306830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1B70u; }
        if (ctx->pc != 0x3C1B70u) { return; }
    }
    ctx->pc = 0x3C1B70u;
label_3c1b70:
    // 0x3c1b70: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3c1b70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c1b74:
    // 0x3c1b74: 0xc0efe7c  jal         func_3BF9F0
label_3c1b78:
    if (ctx->pc == 0x3C1B78u) {
        ctx->pc = 0x3C1B78u;
            // 0x3c1b78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1B7Cu;
        goto label_3c1b7c;
    }
    ctx->pc = 0x3C1B74u;
    SET_GPR_U32(ctx, 31, 0x3C1B7Cu);
    ctx->pc = 0x3C1B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1B74u;
            // 0x3c1b78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF9F0u;
    if (runtime->hasFunction(0x3BF9F0u)) {
        auto targetFn = runtime->lookupFunction(0x3BF9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1B7Cu; }
        if (ctx->pc != 0x3C1B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF9F0_0x3bf9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1B7Cu; }
        if (ctx->pc != 0x3C1B7Cu) { return; }
    }
    ctx->pc = 0x3C1B7Cu;
label_3c1b7c:
    // 0x3c1b7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c1b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c1b80:
    // 0x3c1b80: 0xc07649c  jal         func_1D9270
label_3c1b84:
    if (ctx->pc == 0x3C1B84u) {
        ctx->pc = 0x3C1B84u;
            // 0x3c1b84: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x3C1B88u;
        goto label_3c1b88;
    }
    ctx->pc = 0x3C1B80u;
    SET_GPR_U32(ctx, 31, 0x3C1B88u);
    ctx->pc = 0x3C1B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1B80u;
            // 0x3c1b84: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1B88u; }
        if (ctx->pc != 0x3C1B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1B88u; }
        if (ctx->pc != 0x3C1B88u) { return; }
    }
    ctx->pc = 0x3C1B88u;
label_3c1b88:
    // 0x3c1b88: 0x100001f6  b           . + 4 + (0x1F6 << 2)
label_3c1b8c:
    if (ctx->pc == 0x3C1B8Cu) {
        ctx->pc = 0x3C1B90u;
        goto label_3c1b90;
    }
    ctx->pc = 0x3C1B88u;
    {
        const bool branch_taken_0x3c1b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c1b88) {
            ctx->pc = 0x3C2364u;
            goto label_3c2364;
        }
    }
    ctx->pc = 0x3C1B90u;
label_3c1b90:
    // 0x3c1b90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c1b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c1b94:
    // 0x3c1b94: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_3c1b98:
    if (ctx->pc == 0x3C1B98u) {
        ctx->pc = 0x3C1B98u;
            // 0x3c1b98: 0x8e0301ac  lw          $v1, 0x1AC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
        ctx->pc = 0x3C1B9Cu;
        goto label_3c1b9c;
    }
    ctx->pc = 0x3C1B94u;
    {
        const bool branch_taken_0x3c1b94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c1b94) {
            ctx->pc = 0x3C1B98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1B94u;
            // 0x3c1b98: 0x8e0301ac  lw          $v1, 0x1AC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C1BA8u;
            goto label_3c1ba8;
        }
    }
    ctx->pc = 0x3C1B9Cu;
label_3c1b9c:
    // 0x3c1b9c: 0xc0eea50  jal         func_3BA940
label_3c1ba0:
    if (ctx->pc == 0x3C1BA0u) {
        ctx->pc = 0x3C1BA0u;
            // 0x3c1ba0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3C1BA4u;
        goto label_3c1ba4;
    }
    ctx->pc = 0x3C1B9Cu;
    SET_GPR_U32(ctx, 31, 0x3C1BA4u);
    ctx->pc = 0x3C1BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1B9Cu;
            // 0x3c1ba0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BA940u;
    if (runtime->hasFunction(0x3BA940u)) {
        auto targetFn = runtime->lookupFunction(0x3BA940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1BA4u; }
        if (ctx->pc != 0x3C1BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BA940_0x3ba940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1BA4u; }
        if (ctx->pc != 0x3C1BA4u) { return; }
    }
    ctx->pc = 0x3C1BA4u;
label_3c1ba4:
    // 0x3c1ba4: 0x8e0301ac  lw          $v1, 0x1AC($s0)
    ctx->pc = 0x3c1ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
label_3c1ba8:
    // 0x3c1ba8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3c1ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c1bac:
    // 0x3c1bac: 0x54620018  bnel        $v1, $v0, . + 4 + (0x18 << 2)
label_3c1bb0:
    if (ctx->pc == 0x3C1BB0u) {
        ctx->pc = 0x3C1BB0u;
            // 0x3c1bb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1BB4u;
        goto label_3c1bb4;
    }
    ctx->pc = 0x3C1BACu;
    {
        const bool branch_taken_0x3c1bac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c1bac) {
            ctx->pc = 0x3C1BB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1BACu;
            // 0x3c1bb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C1C10u;
            goto label_3c1c10;
        }
    }
    ctx->pc = 0x3C1BB4u;
label_3c1bb4:
    // 0x3c1bb4: 0xc07724c  jal         func_1DC930
label_3c1bb8:
    if (ctx->pc == 0x3C1BB8u) {
        ctx->pc = 0x3C1BB8u;
            // 0x3c1bb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1BBCu;
        goto label_3c1bbc;
    }
    ctx->pc = 0x3C1BB4u;
    SET_GPR_U32(ctx, 31, 0x3C1BBCu);
    ctx->pc = 0x3C1BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1BB4u;
            // 0x3c1bb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC930u;
    if (runtime->hasFunction(0x1DC930u)) {
        auto targetFn = runtime->lookupFunction(0x1DC930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1BBCu; }
        if (ctx->pc != 0x3C1BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC930_0x1dc930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1BBCu; }
        if (ctx->pc != 0x3C1BBCu) { return; }
    }
    ctx->pc = 0x3C1BBCu;
label_3c1bbc:
    // 0x3c1bbc: 0xc0783b8  jal         func_1E0EE0
label_3c1bc0:
    if (ctx->pc == 0x3C1BC0u) {
        ctx->pc = 0x3C1BC0u;
            // 0x3c1bc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1BC4u;
        goto label_3c1bc4;
    }
    ctx->pc = 0x3C1BBCu;
    SET_GPR_U32(ctx, 31, 0x3C1BC4u);
    ctx->pc = 0x3C1BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1BBCu;
            // 0x3c1bc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0EE0u;
    if (runtime->hasFunction(0x1E0EE0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1BC4u; }
        if (ctx->pc != 0x3C1BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0EE0_0x1e0ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1BC4u; }
        if (ctx->pc != 0x3C1BC4u) { return; }
    }
    ctx->pc = 0x3C1BC4u;
label_3c1bc4:
    // 0x3c1bc4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3c1bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3c1bc8:
    // 0x3c1bc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c1bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c1bcc:
    // 0x3c1bcc: 0x2463038e  addiu       $v1, $v1, 0x38E
    ctx->pc = 0x3c1bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 910));
label_3c1bd0:
    // 0x3c1bd0: 0xc07724c  jal         func_1DC930
label_3c1bd4:
    if (ctx->pc == 0x3C1BD4u) {
        ctx->pc = 0x3C1BD4u;
            // 0x3c1bd4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x3C1BD8u;
        goto label_3c1bd8;
    }
    ctx->pc = 0x3C1BD0u;
    SET_GPR_U32(ctx, 31, 0x3C1BD8u);
    ctx->pc = 0x3C1BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1BD0u;
            // 0x3c1bd4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC930u;
    if (runtime->hasFunction(0x1DC930u)) {
        auto targetFn = runtime->lookupFunction(0x1DC930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1BD8u; }
        if (ctx->pc != 0x3C1BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC930_0x1dc930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1BD8u; }
        if (ctx->pc != 0x3C1BD8u) { return; }
    }
    ctx->pc = 0x3C1BD8u;
label_3c1bd8:
    // 0x3c1bd8: 0xc0783b8  jal         func_1E0EE0
label_3c1bdc:
    if (ctx->pc == 0x3C1BDCu) {
        ctx->pc = 0x3C1BDCu;
            // 0x3c1bdc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1BE0u;
        goto label_3c1be0;
    }
    ctx->pc = 0x3C1BD8u;
    SET_GPR_U32(ctx, 31, 0x3C1BE0u);
    ctx->pc = 0x3C1BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1BD8u;
            // 0x3c1bdc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0EE0u;
    if (runtime->hasFunction(0x1E0EE0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1BE0u; }
        if (ctx->pc != 0x3C1BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0EE0_0x1e0ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1BE0u; }
        if (ctx->pc != 0x3C1BE0u) { return; }
    }
    ctx->pc = 0x3C1BE0u;
label_3c1be0:
    // 0x3c1be0: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x3c1be0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
label_3c1be4:
    // 0x3c1be4: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x3c1be4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3c1be8:
    // 0x3c1be8: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x3c1be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_3c1bec:
    // 0x3c1bec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c1becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c1bf0:
    // 0x3c1bf0: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x3c1bf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3c1bf4:
    // 0x3c1bf4: 0x24a3016c  addiu       $v1, $a1, 0x16C
    ctx->pc = 0x3c1bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 364));
label_3c1bf8:
    // 0x3c1bf8: 0xc07724c  jal         func_1DC930
label_3c1bfc:
    if (ctx->pc == 0x3C1BFCu) {
        ctx->pc = 0x3C1BFCu;
            // 0x3c1bfc: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
        ctx->pc = 0x3C1C00u;
        goto label_3c1c00;
    }
    ctx->pc = 0x3C1BF8u;
    SET_GPR_U32(ctx, 31, 0x3C1C00u);
    ctx->pc = 0x3C1BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1BF8u;
            // 0x3c1bfc: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC930u;
    if (runtime->hasFunction(0x1DC930u)) {
        auto targetFn = runtime->lookupFunction(0x1DC930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1C00u; }
        if (ctx->pc != 0x3C1C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC930_0x1dc930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1C00u; }
        if (ctx->pc != 0x3C1C00u) { return; }
    }
    ctx->pc = 0x3C1C00u;
label_3c1c00:
    // 0x3c1c00: 0xc0f08ec  jal         func_3C23B0
label_3c1c04:
    if (ctx->pc == 0x3C1C04u) {
        ctx->pc = 0x3C1C04u;
            // 0x3c1c04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1C08u;
        goto label_3c1c08;
    }
    ctx->pc = 0x3C1C00u;
    SET_GPR_U32(ctx, 31, 0x3C1C08u);
    ctx->pc = 0x3C1C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1C00u;
            // 0x3c1c04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C23B0u;
    if (runtime->hasFunction(0x3C23B0u)) {
        auto targetFn = runtime->lookupFunction(0x3C23B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1C08u; }
        if (ctx->pc != 0x3C1C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C23B0_0x3c23b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1C08u; }
        if (ctx->pc != 0x3C1C08u) { return; }
    }
    ctx->pc = 0x3C1C08u;
label_3c1c08:
    // 0x3c1c08: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x3c1c08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_3c1c0c:
    // 0x3c1c0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c1c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c1c10:
    // 0x3c1c10: 0xc0783ac  jal         func_1E0EB0
label_3c1c14:
    if (ctx->pc == 0x3C1C14u) {
        ctx->pc = 0x3C1C18u;
        goto label_3c1c18;
    }
    ctx->pc = 0x3C1C10u;
    SET_GPR_U32(ctx, 31, 0x3C1C18u);
    ctx->pc = 0x1E0EB0u;
    if (runtime->hasFunction(0x1E0EB0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1C18u; }
        if (ctx->pc != 0x3C1C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0EB0_0x1e0eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1C18u; }
        if (ctx->pc != 0x3C1C18u) { return; }
    }
    ctx->pc = 0x3C1C18u;
label_3c1c18:
    // 0x3c1c18: 0x3c023f6d  lui         $v0, 0x3F6D
    ctx->pc = 0x3c1c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16237 << 16));
label_3c1c1c:
    // 0x3c1c1c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3c1c1cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3c1c20:
    // 0x3c1c20: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x3c1c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_3c1c24:
    // 0x3c1c24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c1c24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c1c28:
    // 0x3c1c28: 0x0  nop
    ctx->pc = 0x3c1c28u;
    // NOP
label_3c1c2c:
    // 0x3c1c2c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3c1c2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c1c30:
    // 0x3c1c30: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_3c1c34:
    if (ctx->pc == 0x3C1C34u) {
        ctx->pc = 0x3C1C34u;
            // 0x3c1c34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1C38u;
        goto label_3c1c38;
    }
    ctx->pc = 0x3C1C30u;
    {
        const bool branch_taken_0x3c1c30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c1c30) {
            ctx->pc = 0x3C1C34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1C30u;
            // 0x3c1c34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C1C50u;
            goto label_3c1c50;
        }
    }
    ctx->pc = 0x3C1C38u;
label_3c1c38:
    // 0x3c1c38: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3c1c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3c1c3c:
    // 0x3c1c3c: 0xc44c8440  lwc1        $f12, -0x7BC0($v0)
    ctx->pc = 0x3c1c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294935616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3c1c40:
    // 0x3c1c40: 0xc0efe7c  jal         func_3BF9F0
label_3c1c44:
    if (ctx->pc == 0x3C1C44u) {
        ctx->pc = 0x3C1C44u;
            // 0x3c1c44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1C48u;
        goto label_3c1c48;
    }
    ctx->pc = 0x3C1C40u;
    SET_GPR_U32(ctx, 31, 0x3C1C48u);
    ctx->pc = 0x3C1C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1C40u;
            // 0x3c1c44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF9F0u;
    if (runtime->hasFunction(0x3BF9F0u)) {
        auto targetFn = runtime->lookupFunction(0x3BF9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1C48u; }
        if (ctx->pc != 0x3C1C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF9F0_0x3bf9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1C48u; }
        if (ctx->pc != 0x3C1C48u) { return; }
    }
    ctx->pc = 0x3C1C48u;
label_3c1c48:
    // 0x3c1c48: 0x10000028  b           . + 4 + (0x28 << 2)
label_3c1c4c:
    if (ctx->pc == 0x3C1C4Cu) {
        ctx->pc = 0x3C1C4Cu;
            // 0x3c1c4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1C50u;
        goto label_3c1c50;
    }
    ctx->pc = 0x3C1C48u;
    {
        const bool branch_taken_0x3c1c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1C48u;
            // 0x3c1c4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1c48) {
            ctx->pc = 0x3C1CECu;
            goto label_3c1cec;
        }
    }
    ctx->pc = 0x3C1C50u;
label_3c1c50:
    // 0x3c1c50: 0xc0c1a10  jal         func_306840
label_3c1c54:
    if (ctx->pc == 0x3C1C54u) {
        ctx->pc = 0x3C1C58u;
        goto label_3c1c58;
    }
    ctx->pc = 0x3C1C50u;
    SET_GPR_U32(ctx, 31, 0x3C1C58u);
    ctx->pc = 0x306840u;
    if (runtime->hasFunction(0x306840u)) {
        auto targetFn = runtime->lookupFunction(0x306840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1C58u; }
        if (ctx->pc != 0x3C1C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306840_0x306840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1C58u; }
        if (ctx->pc != 0x3C1C58u) { return; }
    }
    ctx->pc = 0x3C1C58u;
label_3c1c58:
    // 0x3c1c58: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3c1c58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c1c5c:
    // 0x3c1c5c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_3c1c60:
    if (ctx->pc == 0x3C1C60u) {
        ctx->pc = 0x3C1C64u;
        goto label_3c1c64;
    }
    ctx->pc = 0x3C1C5Cu;
    {
        const bool branch_taken_0x3c1c5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c1c5c) {
            ctx->pc = 0x3C1C7Cu;
            goto label_3c1c7c;
        }
    }
    ctx->pc = 0x3C1C64u;
label_3c1c64:
    // 0x3c1c64: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3c1c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3c1c68:
    // 0x3c1c68: 0xc44c8438  lwc1        $f12, -0x7BC8($v0)
    ctx->pc = 0x3c1c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294935608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3c1c6c:
    // 0x3c1c6c: 0xc0efe7c  jal         func_3BF9F0
label_3c1c70:
    if (ctx->pc == 0x3C1C70u) {
        ctx->pc = 0x3C1C70u;
            // 0x3c1c70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1C74u;
        goto label_3c1c74;
    }
    ctx->pc = 0x3C1C6Cu;
    SET_GPR_U32(ctx, 31, 0x3C1C74u);
    ctx->pc = 0x3C1C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1C6Cu;
            // 0x3c1c70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF9F0u;
    if (runtime->hasFunction(0x3BF9F0u)) {
        auto targetFn = runtime->lookupFunction(0x3BF9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1C74u; }
        if (ctx->pc != 0x3C1C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF9F0_0x3bf9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1C74u; }
        if (ctx->pc != 0x3C1C74u) { return; }
    }
    ctx->pc = 0x3C1C74u;
label_3c1c74:
    // 0x3c1c74: 0x1000001c  b           . + 4 + (0x1C << 2)
label_3c1c78:
    if (ctx->pc == 0x3C1C78u) {
        ctx->pc = 0x3C1C7Cu;
        goto label_3c1c7c;
    }
    ctx->pc = 0x3C1C74u;
    {
        const bool branch_taken_0x3c1c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c1c74) {
            ctx->pc = 0x3C1CE8u;
            goto label_3c1ce8;
        }
    }
    ctx->pc = 0x3C1C7Cu;
label_3c1c7c:
    // 0x3c1c7c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3c1c7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c1c80:
    // 0x3c1c80: 0xc0efe7c  jal         func_3BF9F0
label_3c1c84:
    if (ctx->pc == 0x3C1C84u) {
        ctx->pc = 0x3C1C84u;
            // 0x3c1c84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1C88u;
        goto label_3c1c88;
    }
    ctx->pc = 0x3C1C80u;
    SET_GPR_U32(ctx, 31, 0x3C1C88u);
    ctx->pc = 0x3C1C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1C80u;
            // 0x3c1c84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF9F0u;
    if (runtime->hasFunction(0x3BF9F0u)) {
        auto targetFn = runtime->lookupFunction(0x3BF9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1C88u; }
        if (ctx->pc != 0x3C1C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF9F0_0x3bf9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1C88u; }
        if (ctx->pc != 0x3C1C88u) { return; }
    }
    ctx->pc = 0x3C1C88u;
label_3c1c88:
    // 0x3c1c88: 0xc0efdd0  jal         func_3BF740
label_3c1c8c:
    if (ctx->pc == 0x3C1C8Cu) {
        ctx->pc = 0x3C1C8Cu;
            // 0x3c1c8c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3C1C90u;
        goto label_3c1c90;
    }
    ctx->pc = 0x3C1C88u;
    SET_GPR_U32(ctx, 31, 0x3C1C90u);
    ctx->pc = 0x3C1C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1C88u;
            // 0x3c1c8c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF740u;
    if (runtime->hasFunction(0x3BF740u)) {
        auto targetFn = runtime->lookupFunction(0x3BF740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1C90u; }
        if (ctx->pc != 0x3C1C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF740_0x3bf740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1C90u; }
        if (ctx->pc != 0x3C1C90u) { return; }
    }
    ctx->pc = 0x3C1C90u;
label_3c1c90:
    // 0x3c1c90: 0xc0efdcc  jal         func_3BF730
label_3c1c94:
    if (ctx->pc == 0x3C1C94u) {
        ctx->pc = 0x3C1C94u;
            // 0x3c1c94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1C98u;
        goto label_3c1c98;
    }
    ctx->pc = 0x3C1C90u;
    SET_GPR_U32(ctx, 31, 0x3C1C98u);
    ctx->pc = 0x3C1C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1C90u;
            // 0x3c1c94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF730u;
    if (runtime->hasFunction(0x3BF730u)) {
        auto targetFn = runtime->lookupFunction(0x3BF730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1C98u; }
        if (ctx->pc != 0x3C1C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF730_0x3bf730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1C98u; }
        if (ctx->pc != 0x3C1C98u) { return; }
    }
    ctx->pc = 0x3C1C98u;
label_3c1c98:
    // 0x3c1c98: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3c1c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_3c1c9c:
    // 0x3c1c9c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_3c1ca0:
    if (ctx->pc == 0x3C1CA0u) {
        ctx->pc = 0x3C1CA4u;
        goto label_3c1ca4;
    }
    ctx->pc = 0x3C1C9Cu;
    {
        const bool branch_taken_0x3c1c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c1c9c) {
            ctx->pc = 0x3C1CE8u;
            goto label_3c1ce8;
        }
    }
    ctx->pc = 0x3C1CA4u;
label_3c1ca4:
    // 0x3c1ca4: 0xc0775b8  jal         func_1DD6E0
label_3c1ca8:
    if (ctx->pc == 0x3C1CA8u) {
        ctx->pc = 0x3C1CACu;
        goto label_3c1cac;
    }
    ctx->pc = 0x3C1CA4u;
    SET_GPR_U32(ctx, 31, 0x3C1CACu);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1CACu; }
        if (ctx->pc != 0x3C1CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1CACu; }
        if (ctx->pc != 0x3C1CACu) { return; }
    }
    ctx->pc = 0x3C1CACu;
label_3c1cac:
    // 0x3c1cac: 0xc0775b4  jal         func_1DD6D0
label_3c1cb0:
    if (ctx->pc == 0x3C1CB0u) {
        ctx->pc = 0x3C1CB0u;
            // 0x3c1cb0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3C1CB4u;
        goto label_3c1cb4;
    }
    ctx->pc = 0x3C1CACu;
    SET_GPR_U32(ctx, 31, 0x3C1CB4u);
    ctx->pc = 0x3C1CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1CACu;
            // 0x3c1cb0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1CB4u; }
        if (ctx->pc != 0x3C1CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1CB4u; }
        if (ctx->pc != 0x3C1CB4u) { return; }
    }
    ctx->pc = 0x3C1CB4u;
label_3c1cb4:
    // 0x3c1cb4: 0xc60101c8  lwc1        $f1, 0x1C8($s0)
    ctx->pc = 0x3c1cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c1cb8:
    // 0x3c1cb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c1cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c1cbc:
    // 0x3c1cbc: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x3c1cbcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_3c1cc0:
    // 0x3c1cc0: 0xc0efd68  jal         func_3BF5A0
label_3c1cc4:
    if (ctx->pc == 0x3C1CC4u) {
        ctx->pc = 0x3C1CC4u;
            // 0x3c1cc4: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3C1CC8u;
        goto label_3c1cc8;
    }
    ctx->pc = 0x3C1CC0u;
    SET_GPR_U32(ctx, 31, 0x3C1CC8u);
    ctx->pc = 0x3C1CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1CC0u;
            // 0x3c1cc4: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF5A0u;
    if (runtime->hasFunction(0x3BF5A0u)) {
        auto targetFn = runtime->lookupFunction(0x3BF5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1CC8u; }
        if (ctx->pc != 0x3C1CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF5A0_0x3bf5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1CC8u; }
        if (ctx->pc != 0x3C1CC8u) { return; }
    }
    ctx->pc = 0x3C1CC8u;
label_3c1cc8:
    // 0x3c1cc8: 0x8e190014  lw          $t9, 0x14($s0)
    ctx->pc = 0x3c1cc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3c1ccc:
    // 0x3c1ccc: 0x4600a302  mul.s       $f12, $f20, $f0
    ctx->pc = 0x3c1cccu;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_3c1cd0:
    // 0x3c1cd0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x3c1cd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_3c1cd4:
    // 0x3c1cd4: 0x320f809  jalr        $t9
label_3c1cd8:
    if (ctx->pc == 0x3C1CD8u) {
        ctx->pc = 0x3C1CD8u;
            // 0x3c1cd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1CDCu;
        goto label_3c1cdc;
    }
    ctx->pc = 0x3C1CD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C1CDCu);
        ctx->pc = 0x3C1CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1CD4u;
            // 0x3c1cd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C1CDCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C1CDCu; }
            if (ctx->pc != 0x3C1CDCu) { return; }
        }
        }
    }
    ctx->pc = 0x3C1CDCu;
label_3c1cdc:
    // 0x3c1cdc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3c1cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c1ce0:
    // 0x3c1ce0: 0xc077568  jal         func_1DD5A0
label_3c1ce4:
    if (ctx->pc == 0x3C1CE4u) {
        ctx->pc = 0x3C1CE4u;
            // 0x3c1ce4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x3C1CE8u;
        goto label_3c1ce8;
    }
    ctx->pc = 0x3C1CE0u;
    SET_GPR_U32(ctx, 31, 0x3C1CE8u);
    ctx->pc = 0x3C1CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1CE0u;
            // 0x3c1ce4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5A0u;
    if (runtime->hasFunction(0x1DD5A0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1CE8u; }
        if (ctx->pc != 0x3C1CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5A0_0x1dd5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1CE8u; }
        if (ctx->pc != 0x3C1CE8u) { return; }
    }
    ctx->pc = 0x3C1CE8u;
label_3c1ce8:
    // 0x3c1ce8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c1ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c1cec:
    // 0x3c1cec: 0xc0f08f8  jal         func_3C23E0
label_3c1cf0:
    if (ctx->pc == 0x3C1CF0u) {
        ctx->pc = 0x3C1CF4u;
        goto label_3c1cf4;
    }
    ctx->pc = 0x3C1CECu;
    SET_GPR_U32(ctx, 31, 0x3C1CF4u);
    ctx->pc = 0x3C23E0u;
    if (runtime->hasFunction(0x3C23E0u)) {
        auto targetFn = runtime->lookupFunction(0x3C23E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1CF4u; }
        if (ctx->pc != 0x3C1CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C23E0_0x3c23e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1CF4u; }
        if (ctx->pc != 0x3C1CF4u) { return; }
    }
    ctx->pc = 0x3C1CF4u;
label_3c1cf4:
    // 0x3c1cf4: 0xc0775b8  jal         func_1DD6E0
label_3c1cf8:
    if (ctx->pc == 0x3C1CF8u) {
        ctx->pc = 0x3C1CFCu;
        goto label_3c1cfc;
    }
    ctx->pc = 0x3C1CF4u;
    SET_GPR_U32(ctx, 31, 0x3C1CFCu);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1CFCu; }
        if (ctx->pc != 0x3C1CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1CFCu; }
        if (ctx->pc != 0x3C1CFCu) { return; }
    }
    ctx->pc = 0x3C1CFCu;
label_3c1cfc:
    // 0x3c1cfc: 0xc0775b4  jal         func_1DD6D0
label_3c1d00:
    if (ctx->pc == 0x3C1D00u) {
        ctx->pc = 0x3C1D00u;
            // 0x3c1d00: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3C1D04u;
        goto label_3c1d04;
    }
    ctx->pc = 0x3C1CFCu;
    SET_GPR_U32(ctx, 31, 0x3C1D04u);
    ctx->pc = 0x3C1D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1CFCu;
            // 0x3c1d00: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1D04u; }
        if (ctx->pc != 0x3C1D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1D04u; }
        if (ctx->pc != 0x3C1D04u) { return; }
    }
    ctx->pc = 0x3C1D04u;
label_3c1d04:
    // 0x3c1d04: 0xc60201b0  lwc1        $f2, 0x1B0($s0)
    ctx->pc = 0x3c1d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c1d08:
    // 0x3c1d08: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3c1d08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c1d0c:
    // 0x3c1d0c: 0x0  nop
    ctx->pc = 0x3c1d0cu;
    // NOP
label_3c1d10:
    // 0x3c1d10: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x3c1d10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_3c1d14:
    // 0x3c1d14: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3c1d14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c1d18:
    // 0x3c1d18: 0x45000192  bc1f        . + 4 + (0x192 << 2)
label_3c1d1c:
    if (ctx->pc == 0x3C1D1Cu) {
        ctx->pc = 0x3C1D1Cu;
            // 0x3c1d1c: 0xe60001b0  swc1        $f0, 0x1B0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
        ctx->pc = 0x3C1D20u;
        goto label_3c1d20;
    }
    ctx->pc = 0x3C1D18u;
    {
        const bool branch_taken_0x3c1d18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C1D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1D18u;
            // 0x3c1d1c: 0xe60001b0  swc1        $f0, 0x1B0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1d18) {
            ctx->pc = 0x3C2364u;
            goto label_3c2364;
        }
    }
    ctx->pc = 0x3C1D20u;
label_3c1d20:
    // 0x3c1d20: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3c1d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c1d24:
    // 0x3c1d24: 0xc0efc58  jal         func_3BF160
label_3c1d28:
    if (ctx->pc == 0x3C1D28u) {
        ctx->pc = 0x3C1D28u;
            // 0x3c1d28: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3C1D2Cu;
        goto label_3c1d2c;
    }
    ctx->pc = 0x3C1D24u;
    SET_GPR_U32(ctx, 31, 0x3C1D2Cu);
    ctx->pc = 0x3C1D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1D24u;
            // 0x3c1d28: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF160u;
    if (runtime->hasFunction(0x3BF160u)) {
        auto targetFn = runtime->lookupFunction(0x3BF160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1D2Cu; }
        if (ctx->pc != 0x3C1D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF160_0x3bf160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1D2Cu; }
        if (ctx->pc != 0x3C1D2Cu) { return; }
    }
    ctx->pc = 0x3C1D2Cu;
label_3c1d2c:
    // 0x3c1d2c: 0xc0775b8  jal         func_1DD6E0
label_3c1d30:
    if (ctx->pc == 0x3C1D30u) {
        ctx->pc = 0x3C1D34u;
        goto label_3c1d34;
    }
    ctx->pc = 0x3C1D2Cu;
    SET_GPR_U32(ctx, 31, 0x3C1D34u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1D34u; }
        if (ctx->pc != 0x3C1D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1D34u; }
        if (ctx->pc != 0x3C1D34u) { return; }
    }
    ctx->pc = 0x3C1D34u;
label_3c1d34:
    // 0x3c1d34: 0xc0775b4  jal         func_1DD6D0
label_3c1d38:
    if (ctx->pc == 0x3C1D38u) {
        ctx->pc = 0x3C1D38u;
            // 0x3c1d38: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3C1D3Cu;
        goto label_3c1d3c;
    }
    ctx->pc = 0x3C1D34u;
    SET_GPR_U32(ctx, 31, 0x3C1D3Cu);
    ctx->pc = 0x3C1D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1D34u;
            // 0x3c1d38: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1D3Cu; }
        if (ctx->pc != 0x3C1D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1D3Cu; }
        if (ctx->pc != 0x3C1D3Cu) { return; }
    }
    ctx->pc = 0x3C1D3Cu;
label_3c1d3c:
    // 0x3c1d3c: 0xc60101c8  lwc1        $f1, 0x1C8($s0)
    ctx->pc = 0x3c1d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c1d40:
    // 0x3c1d40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c1d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c1d44:
    // 0x3c1d44: 0xc0efd68  jal         func_3BF5A0
label_3c1d48:
    if (ctx->pc == 0x3C1D48u) {
        ctx->pc = 0x3C1D48u;
            // 0x3c1d48: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3C1D4Cu;
        goto label_3c1d4c;
    }
    ctx->pc = 0x3C1D44u;
    SET_GPR_U32(ctx, 31, 0x3C1D4Cu);
    ctx->pc = 0x3C1D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1D44u;
            // 0x3c1d48: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF5A0u;
    if (runtime->hasFunction(0x3BF5A0u)) {
        auto targetFn = runtime->lookupFunction(0x3BF5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1D4Cu; }
        if (ctx->pc != 0x3C1D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF5A0_0x3bf5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1D4Cu; }
        if (ctx->pc != 0x3C1D4Cu) { return; }
    }
    ctx->pc = 0x3C1D4Cu;
label_3c1d4c:
    // 0x3c1d4c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3c1d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c1d50:
    // 0x3c1d50: 0xc07756c  jal         func_1DD5B0
label_3c1d54:
    if (ctx->pc == 0x3C1D54u) {
        ctx->pc = 0x3C1D54u;
            // 0x3c1d54: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x3C1D58u;
        goto label_3c1d58;
    }
    ctx->pc = 0x3C1D50u;
    SET_GPR_U32(ctx, 31, 0x3C1D58u);
    ctx->pc = 0x3C1D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1D50u;
            // 0x3c1d54: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5B0u;
    if (runtime->hasFunction(0x1DD5B0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1D58u; }
        if (ctx->pc != 0x3C1D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5B0_0x1dd5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1D58u; }
        if (ctx->pc != 0x3C1D58u) { return; }
    }
    ctx->pc = 0x3C1D58u;
label_3c1d58:
    // 0x3c1d58: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x3c1d58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c1d5c:
    // 0x3c1d5c: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_3c1d60:
    if (ctx->pc == 0x3C1D60u) {
        ctx->pc = 0x3C1D60u;
            // 0x3c1d60: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3C1D64u;
        goto label_3c1d64;
    }
    ctx->pc = 0x3C1D5Cu;
    {
        const bool branch_taken_0x3c1d5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c1d5c) {
            ctx->pc = 0x3C1D60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1D5Cu;
            // 0x3c1d60: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C1D78u;
            goto label_3c1d78;
        }
    }
    ctx->pc = 0x3C1D64u;
label_3c1d64:
    // 0x3c1d64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c1d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c1d68:
    // 0x3c1d68: 0xc0f0f84  jal         func_3C3E10
label_3c1d6c:
    if (ctx->pc == 0x3C1D6Cu) {
        ctx->pc = 0x3C1D6Cu;
            // 0x3c1d6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3C1D70u;
        goto label_3c1d70;
    }
    ctx->pc = 0x3C1D68u;
    SET_GPR_U32(ctx, 31, 0x3C1D70u);
    ctx->pc = 0x3C1D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1D68u;
            // 0x3c1d6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3E10u;
    if (runtime->hasFunction(0x3C3E10u)) {
        auto targetFn = runtime->lookupFunction(0x3C3E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1D70u; }
        if (ctx->pc != 0x3C1D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3E10_0x3c3e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1D70u; }
        if (ctx->pc != 0x3C1D70u) { return; }
    }
    ctx->pc = 0x3C1D70u;
label_3c1d70:
    // 0x3c1d70: 0x10000008  b           . + 4 + (0x8 << 2)
label_3c1d74:
    if (ctx->pc == 0x3C1D74u) {
        ctx->pc = 0x3C1D74u;
            // 0x3c1d74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1D78u;
        goto label_3c1d78;
    }
    ctx->pc = 0x3C1D70u;
    {
        const bool branch_taken_0x3c1d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1D70u;
            // 0x3c1d74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1d70) {
            ctx->pc = 0x3C1D94u;
            goto label_3c1d94;
        }
    }
    ctx->pc = 0x3C1D78u;
label_3c1d78:
    // 0x3c1d78: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x3c1d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_3c1d7c:
    // 0x3c1d7c: 0xae0301ac  sw          $v1, 0x1AC($s0)
    ctx->pc = 0x3c1d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 3));
label_3c1d80:
    // 0x3c1d80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c1d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c1d84:
    // 0x3c1d84: 0xae0201b8  sw          $v0, 0x1B8($s0)
    ctx->pc = 0x3c1d84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 2));
label_3c1d88:
    // 0x3c1d88: 0xc0f0f84  jal         func_3C3E10
label_3c1d8c:
    if (ctx->pc == 0x3C1D8Cu) {
        ctx->pc = 0x3C1D8Cu;
            // 0x3c1d8c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x3C1D90u;
        goto label_3c1d90;
    }
    ctx->pc = 0x3C1D88u;
    SET_GPR_U32(ctx, 31, 0x3C1D90u);
    ctx->pc = 0x3C1D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1D88u;
            // 0x3c1d8c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3E10u;
    if (runtime->hasFunction(0x3C3E10u)) {
        auto targetFn = runtime->lookupFunction(0x3C3E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1D90u; }
        if (ctx->pc != 0x3C1D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3E10_0x3c3e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1D90u; }
        if (ctx->pc != 0x3C1D90u) { return; }
    }
    ctx->pc = 0x3C1D90u;
label_3c1d90:
    // 0x3c1d90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c1d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c1d94:
    // 0x3c1d94: 0xc07649c  jal         func_1D9270
label_3c1d98:
    if (ctx->pc == 0x3C1D98u) {
        ctx->pc = 0x3C1D98u;
            // 0x3c1d98: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x3C1D9Cu;
        goto label_3c1d9c;
    }
    ctx->pc = 0x3C1D94u;
    SET_GPR_U32(ctx, 31, 0x3C1D9Cu);
    ctx->pc = 0x3C1D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1D94u;
            // 0x3c1d98: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1D9Cu; }
        if (ctx->pc != 0x3C1D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1D9Cu; }
        if (ctx->pc != 0x3C1D9Cu) { return; }
    }
    ctx->pc = 0x3C1D9Cu;
label_3c1d9c:
    // 0x3c1d9c: 0x10000171  b           . + 4 + (0x171 << 2)
label_3c1da0:
    if (ctx->pc == 0x3C1DA0u) {
        ctx->pc = 0x3C1DA4u;
        goto label_3c1da4;
    }
    ctx->pc = 0x3C1D9Cu;
    {
        const bool branch_taken_0x3c1d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c1d9c) {
            ctx->pc = 0x3C2364u;
            goto label_3c2364;
        }
    }
    ctx->pc = 0x3C1DA4u;
label_3c1da4:
    // 0x3c1da4: 0xc0efea4  jal         func_3BFA90
label_3c1da8:
    if (ctx->pc == 0x3C1DA8u) {
        ctx->pc = 0x3C1DA8u;
            // 0x3c1da8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3C1DACu;
        goto label_3c1dac;
    }
    ctx->pc = 0x3C1DA4u;
    SET_GPR_U32(ctx, 31, 0x3C1DACu);
    ctx->pc = 0x3C1DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1DA4u;
            // 0x3c1da8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BFA90u;
    if (runtime->hasFunction(0x3BFA90u)) {
        auto targetFn = runtime->lookupFunction(0x3BFA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1DACu; }
        if (ctx->pc != 0x3C1DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BFA90_0x3bfa90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1DACu; }
        if (ctx->pc != 0x3C1DACu) { return; }
    }
    ctx->pc = 0x3C1DACu;
label_3c1dac:
    // 0x3c1dac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c1dacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c1db0:
    // 0x3c1db0: 0xc0efea0  jal         func_3BFA80
label_3c1db4:
    if (ctx->pc == 0x3C1DB4u) {
        ctx->pc = 0x3C1DB4u;
            // 0x3c1db4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1DB8u;
        goto label_3c1db8;
    }
    ctx->pc = 0x3C1DB0u;
    SET_GPR_U32(ctx, 31, 0x3C1DB8u);
    ctx->pc = 0x3C1DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1DB0u;
            // 0x3c1db4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BFA80u;
    if (runtime->hasFunction(0x3BFA80u)) {
        auto targetFn = runtime->lookupFunction(0x3BFA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1DB8u; }
        if (ctx->pc != 0x3C1DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BFA80_0x3bfa80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1DB8u; }
        if (ctx->pc != 0x3C1DB8u) { return; }
    }
    ctx->pc = 0x3C1DB8u;
label_3c1db8:
    // 0x3c1db8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c1db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c1dbc:
    // 0x3c1dbc: 0x50430047  beql        $v0, $v1, . + 4 + (0x47 << 2)
label_3c1dc0:
    if (ctx->pc == 0x3C1DC0u) {
        ctx->pc = 0x3C1DC0u;
            // 0x3c1dc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1DC4u;
        goto label_3c1dc4;
    }
    ctx->pc = 0x3C1DBCu;
    {
        const bool branch_taken_0x3c1dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c1dbc) {
            ctx->pc = 0x3C1DC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1DBCu;
            // 0x3c1dc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C1EDCu;
            goto label_3c1edc;
        }
    }
    ctx->pc = 0x3C1DC4u;
label_3c1dc4:
    // 0x3c1dc4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_3c1dc8:
    if (ctx->pc == 0x3C1DC8u) {
        ctx->pc = 0x3C1DC8u;
            // 0x3c1dc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1DCCu;
        goto label_3c1dcc;
    }
    ctx->pc = 0x3C1DC4u;
    {
        const bool branch_taken_0x3c1dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c1dc4) {
            ctx->pc = 0x3C1DC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1DC4u;
            // 0x3c1dc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C1DD4u;
            goto label_3c1dd4;
        }
    }
    ctx->pc = 0x3C1DCCu;
label_3c1dcc:
    // 0x3c1dcc: 0x10000165  b           . + 4 + (0x165 << 2)
label_3c1dd0:
    if (ctx->pc == 0x3C1DD0u) {
        ctx->pc = 0x3C1DD4u;
        goto label_3c1dd4;
    }
    ctx->pc = 0x3C1DCCu;
    {
        const bool branch_taken_0x3c1dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c1dcc) {
            ctx->pc = 0x3C2364u;
            goto label_3c2364;
        }
    }
    ctx->pc = 0x3C1DD4u;
label_3c1dd4:
    // 0x3c1dd4: 0xc0f0e98  jal         func_3C3A60
label_3c1dd8:
    if (ctx->pc == 0x3C1DD8u) {
        ctx->pc = 0x3C1DDCu;
        goto label_3c1ddc;
    }
    ctx->pc = 0x3C1DD4u;
    SET_GPR_U32(ctx, 31, 0x3C1DDCu);
    ctx->pc = 0x3C3A60u;
    if (runtime->hasFunction(0x3C3A60u)) {
        auto targetFn = runtime->lookupFunction(0x3C3A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1DDCu; }
        if (ctx->pc != 0x3C1DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3A60_0x3c3a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1DDCu; }
        if (ctx->pc != 0x3C1DDCu) { return; }
    }
    ctx->pc = 0x3C1DDCu;
label_3c1ddc:
    // 0x3c1ddc: 0xc0f0e94  jal         func_3C3A50
label_3c1de0:
    if (ctx->pc == 0x3C1DE0u) {
        ctx->pc = 0x3C1DE0u;
            // 0x3c1de0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1DE4u;
        goto label_3c1de4;
    }
    ctx->pc = 0x3C1DDCu;
    SET_GPR_U32(ctx, 31, 0x3C1DE4u);
    ctx->pc = 0x3C1DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1DDCu;
            // 0x3c1de0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3A50u;
    if (runtime->hasFunction(0x3C3A50u)) {
        auto targetFn = runtime->lookupFunction(0x3C3A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1DE4u; }
        if (ctx->pc != 0x3C1DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3A50_0x3c3a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1DE4u; }
        if (ctx->pc != 0x3C1DE4u) { return; }
    }
    ctx->pc = 0x3C1DE4u;
label_3c1de4:
    // 0x3c1de4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c1de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c1de8:
    // 0x3c1de8: 0xc0e1100  jal         func_384400
label_3c1dec:
    if (ctx->pc == 0x3C1DECu) {
        ctx->pc = 0x3C1DECu;
            // 0x3c1dec: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x3C1DF0u;
        goto label_3c1df0;
    }
    ctx->pc = 0x3C1DE8u;
    SET_GPR_U32(ctx, 31, 0x3C1DF0u);
    ctx->pc = 0x3C1DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1DE8u;
            // 0x3c1dec: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384400u;
    if (runtime->hasFunction(0x384400u)) {
        auto targetFn = runtime->lookupFunction(0x384400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1DF0u; }
        if (ctx->pc != 0x3C1DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384400_0x384400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1DF0u; }
        if (ctx->pc != 0x3C1DF0u) { return; }
    }
    ctx->pc = 0x3C1DF0u;
label_3c1df0:
    // 0x3c1df0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c1df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c1df4:
    // 0x3c1df4: 0xc0e1104  jal         func_384410
label_3c1df8:
    if (ctx->pc == 0x3C1DF8u) {
        ctx->pc = 0x3C1DF8u;
            // 0x3c1df8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x3C1DFCu;
        goto label_3c1dfc;
    }
    ctx->pc = 0x3C1DF4u;
    SET_GPR_U32(ctx, 31, 0x3C1DFCu);
    ctx->pc = 0x3C1DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1DF4u;
            // 0x3c1df8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384410u;
    if (runtime->hasFunction(0x384410u)) {
        auto targetFn = runtime->lookupFunction(0x384410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1DFCu; }
        if (ctx->pc != 0x3C1DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384410_0x384410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1DFCu; }
        if (ctx->pc != 0x3C1DFCu) { return; }
    }
    ctx->pc = 0x3C1DFCu;
label_3c1dfc:
    // 0x3c1dfc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3c1dfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c1e00:
    // 0x3c1e00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c1e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c1e04:
    // 0x3c1e04: 0xc0efe80  jal         func_3BFA00
label_3c1e08:
    if (ctx->pc == 0x3C1E08u) {
        ctx->pc = 0x3C1E08u;
            // 0x3c1e08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3C1E0Cu;
        goto label_3c1e0c;
    }
    ctx->pc = 0x3C1E04u;
    SET_GPR_U32(ctx, 31, 0x3C1E0Cu);
    ctx->pc = 0x3C1E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1E04u;
            // 0x3c1e08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BFA00u;
    if (runtime->hasFunction(0x3BFA00u)) {
        auto targetFn = runtime->lookupFunction(0x3BFA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1E0Cu; }
        if (ctx->pc != 0x3C1E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BFA00_0x3bfa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1E0Cu; }
        if (ctx->pc != 0x3C1E0Cu) { return; }
    }
    ctx->pc = 0x3C1E0Cu;
label_3c1e0c:
    // 0x3c1e0c: 0xc07731c  jal         func_1DCC70
label_3c1e10:
    if (ctx->pc == 0x3C1E10u) {
        ctx->pc = 0x3C1E10u;
            // 0x3c1e10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1E14u;
        goto label_3c1e14;
    }
    ctx->pc = 0x3C1E0Cu;
    SET_GPR_U32(ctx, 31, 0x3C1E14u);
    ctx->pc = 0x3C1E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1E0Cu;
            // 0x3c1e10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC70u;
    if (runtime->hasFunction(0x1DCC70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1E14u; }
        if (ctx->pc != 0x3C1E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC70_0x1dcc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1E14u; }
        if (ctx->pc != 0x3C1E14u) { return; }
    }
    ctx->pc = 0x3C1E14u;
label_3c1e14:
    // 0x3c1e14: 0x8c590030  lw          $t9, 0x30($v0)
    ctx->pc = 0x3c1e14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_3c1e18:
    // 0x3c1e18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c1e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c1e1c:
    // 0x3c1e1c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3c1e1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3c1e20:
    // 0x3c1e20: 0x320f809  jalr        $t9
label_3c1e24:
    if (ctx->pc == 0x3C1E24u) {
        ctx->pc = 0x3C1E24u;
            // 0x3c1e24: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x3C1E28u;
        goto label_3c1e28;
    }
    ctx->pc = 0x3C1E20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C1E28u);
        ctx->pc = 0x3C1E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1E20u;
            // 0x3c1e24: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C1E28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C1E28u; }
            if (ctx->pc != 0x3C1E28u) { return; }
        }
        }
    }
    ctx->pc = 0x3C1E28u;
label_3c1e28:
    // 0x3c1e28: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3c1e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c1e2c:
    // 0x3c1e2c: 0xc0f0e7c  jal         func_3C39F0
label_3c1e30:
    if (ctx->pc == 0x3C1E30u) {
        ctx->pc = 0x3C1E30u;
            // 0x3c1e30: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3C1E34u;
        goto label_3c1e34;
    }
    ctx->pc = 0x3C1E2Cu;
    SET_GPR_U32(ctx, 31, 0x3C1E34u);
    ctx->pc = 0x3C1E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1E2Cu;
            // 0x3c1e30: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C39F0u;
    if (runtime->hasFunction(0x3C39F0u)) {
        auto targetFn = runtime->lookupFunction(0x3C39F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1E34u; }
        if (ctx->pc != 0x3C1E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C39F0_0x3c39f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1E34u; }
        if (ctx->pc != 0x3C1E34u) { return; }
    }
    ctx->pc = 0x3C1E34u;
label_3c1e34:
    // 0x3c1e34: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3c1e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c1e38:
    // 0x3c1e38: 0xc0efc58  jal         func_3BF160
label_3c1e3c:
    if (ctx->pc == 0x3C1E3Cu) {
        ctx->pc = 0x3C1E3Cu;
            // 0x3c1e3c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3C1E40u;
        goto label_3c1e40;
    }
    ctx->pc = 0x3C1E38u;
    SET_GPR_U32(ctx, 31, 0x3C1E40u);
    ctx->pc = 0x3C1E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1E38u;
            // 0x3c1e3c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF160u;
    if (runtime->hasFunction(0x3BF160u)) {
        auto targetFn = runtime->lookupFunction(0x3BF160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1E40u; }
        if (ctx->pc != 0x3C1E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF160_0x3bf160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1E40u; }
        if (ctx->pc != 0x3C1E40u) { return; }
    }
    ctx->pc = 0x3C1E40u;
label_3c1e40:
    // 0x3c1e40: 0xc07731c  jal         func_1DCC70
label_3c1e44:
    if (ctx->pc == 0x3C1E44u) {
        ctx->pc = 0x3C1E44u;
            // 0x3c1e44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1E48u;
        goto label_3c1e48;
    }
    ctx->pc = 0x3C1E40u;
    SET_GPR_U32(ctx, 31, 0x3C1E48u);
    ctx->pc = 0x3C1E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1E40u;
            // 0x3c1e44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC70u;
    if (runtime->hasFunction(0x1DCC70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1E48u; }
        if (ctx->pc != 0x3C1E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC70_0x1dcc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1E48u; }
        if (ctx->pc != 0x3C1E48u) { return; }
    }
    ctx->pc = 0x3C1E48u;
label_3c1e48:
    // 0x3c1e48: 0x8c590030  lw          $t9, 0x30($v0)
    ctx->pc = 0x3c1e48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_3c1e4c:
    // 0x3c1e4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c1e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c1e50:
    // 0x3c1e50: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3c1e50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3c1e54:
    // 0x3c1e54: 0x320f809  jalr        $t9
label_3c1e58:
    if (ctx->pc == 0x3C1E58u) {
        ctx->pc = 0x3C1E58u;
            // 0x3c1e58: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x3C1E5Cu;
        goto label_3c1e5c;
    }
    ctx->pc = 0x3C1E54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C1E5Cu);
        ctx->pc = 0x3C1E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1E54u;
            // 0x3c1e58: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C1E5Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C1E5Cu; }
            if (ctx->pc != 0x3C1E5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3C1E5Cu;
label_3c1e5c:
    // 0x3c1e5c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3c1e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c1e60:
    // 0x3c1e60: 0x24020056  addiu       $v0, $zero, 0x56
    ctx->pc = 0x3c1e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
label_3c1e64:
    // 0x3c1e64: 0xae0301ac  sw          $v1, 0x1AC($s0)
    ctx->pc = 0x3c1e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 3));
label_3c1e68:
    // 0x3c1e68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c1e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c1e6c:
    // 0x3c1e6c: 0xc0772e8  jal         func_1DCBA0
label_3c1e70:
    if (ctx->pc == 0x3C1E70u) {
        ctx->pc = 0x3C1E70u;
            // 0x3c1e70: 0xae0201b8  sw          $v0, 0x1B8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 2));
        ctx->pc = 0x3C1E74u;
        goto label_3c1e74;
    }
    ctx->pc = 0x3C1E6Cu;
    SET_GPR_U32(ctx, 31, 0x3C1E74u);
    ctx->pc = 0x3C1E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1E6Cu;
            // 0x3c1e70: 0xae0201b8  sw          $v0, 0x1B8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBA0u;
    if (runtime->hasFunction(0x1DCBA0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1E74u; }
        if (ctx->pc != 0x3C1E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCBA0_0x1dcba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1E74u; }
        if (ctx->pc != 0x3C1E74u) { return; }
    }
    ctx->pc = 0x3C1E74u;
label_3c1e74:
    // 0x3c1e74: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3c1e74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c1e78:
    // 0x3c1e78: 0xc0772dc  jal         func_1DCB70
label_3c1e7c:
    if (ctx->pc == 0x3C1E7Cu) {
        ctx->pc = 0x3C1E7Cu;
            // 0x3c1e7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1E80u;
        goto label_3c1e80;
    }
    ctx->pc = 0x3C1E78u;
    SET_GPR_U32(ctx, 31, 0x3C1E80u);
    ctx->pc = 0x3C1E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1E78u;
            // 0x3c1e7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCB70u;
    if (runtime->hasFunction(0x1DCB70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1E80u; }
        if (ctx->pc != 0x3C1E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCB70_0x1dcb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1E80u; }
        if (ctx->pc != 0x3C1E80u) { return; }
    }
    ctx->pc = 0x3C1E80u;
label_3c1e80:
    // 0x3c1e80: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3c1e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3c1e84:
    // 0x3c1e84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c1e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c1e88:
    // 0x3c1e88: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3c1e88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c1e8c:
    // 0x3c1e8c: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x3c1e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_3c1e90:
    // 0x3c1e90: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3c1e90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c1e94:
    // 0x3c1e94: 0xc0772d4  jal         func_1DCB50
label_3c1e98:
    if (ctx->pc == 0x3C1E98u) {
        ctx->pc = 0x3C1E98u;
            // 0x3c1e98: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x3C1E9Cu;
        goto label_3c1e9c;
    }
    ctx->pc = 0x3C1E94u;
    SET_GPR_U32(ctx, 31, 0x3C1E9Cu);
    ctx->pc = 0x3C1E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1E94u;
            // 0x3c1e98: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCB50u;
    if (runtime->hasFunction(0x1DCB50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1E9Cu; }
        if (ctx->pc != 0x3C1E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCB50_0x1dcb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1E9Cu; }
        if (ctx->pc != 0x3C1E9Cu) { return; }
    }
    ctx->pc = 0x3C1E9Cu;
label_3c1e9c:
    // 0x3c1e9c: 0x8e590058  lw          $t9, 0x58($s2)
    ctx->pc = 0x3c1e9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_3c1ea0:
    // 0x3c1ea0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3c1ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c1ea4:
    // 0x3c1ea4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c1ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c1ea8:
    // 0x3c1ea8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3c1ea8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3c1eac:
    // 0x3c1eac: 0x320f809  jalr        $t9
label_3c1eb0:
    if (ctx->pc == 0x3C1EB0u) {
        ctx->pc = 0x3C1EB0u;
            // 0x3c1eb0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1EB4u;
        goto label_3c1eb4;
    }
    ctx->pc = 0x3C1EACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C1EB4u);
        ctx->pc = 0x3C1EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1EACu;
            // 0x3c1eb0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C1EB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C1EB4u; }
            if (ctx->pc != 0x3C1EB4u) { return; }
        }
        }
    }
    ctx->pc = 0x3C1EB4u;
label_3c1eb4:
    // 0x3c1eb4: 0xc0f0d1c  jal         func_3C3470
label_3c1eb8:
    if (ctx->pc == 0x3C1EB8u) {
        ctx->pc = 0x3C1EB8u;
            // 0x3c1eb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1EBCu;
        goto label_3c1ebc;
    }
    ctx->pc = 0x3C1EB4u;
    SET_GPR_U32(ctx, 31, 0x3C1EBCu);
    ctx->pc = 0x3C1EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1EB4u;
            // 0x3c1eb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3470u;
    if (runtime->hasFunction(0x3C3470u)) {
        auto targetFn = runtime->lookupFunction(0x3C3470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1EBCu; }
        if (ctx->pc != 0x3C1EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3470_0x3c3470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1EBCu; }
        if (ctx->pc != 0x3C1EBCu) { return; }
    }
    ctx->pc = 0x3C1EBCu;
label_3c1ebc:
    // 0x3c1ebc: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3c1ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3c1ec0:
    // 0x3c1ec0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c1ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c1ec4:
    // 0x3c1ec4: 0xc4408448  lwc1        $f0, -0x7BB8($v0)
    ctx->pc = 0x3c1ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294935624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c1ec8:
    // 0x3c1ec8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3c1ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c1ecc:
    // 0x3c1ecc: 0xc0efdd8  jal         func_3BF760
label_3c1ed0:
    if (ctx->pc == 0x3C1ED0u) {
        ctx->pc = 0x3C1ED0u;
            // 0x3c1ed0: 0xe60001b0  swc1        $f0, 0x1B0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
        ctx->pc = 0x3C1ED4u;
        goto label_3c1ed4;
    }
    ctx->pc = 0x3C1ECCu;
    SET_GPR_U32(ctx, 31, 0x3C1ED4u);
    ctx->pc = 0x3C1ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1ECCu;
            // 0x3c1ed0: 0xe60001b0  swc1        $f0, 0x1B0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF760u;
    if (runtime->hasFunction(0x3BF760u)) {
        auto targetFn = runtime->lookupFunction(0x3BF760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1ED4u; }
        if (ctx->pc != 0x3C1ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF760_0x3bf760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1ED4u; }
        if (ctx->pc != 0x3C1ED4u) { return; }
    }
    ctx->pc = 0x3C1ED4u;
label_3c1ed4:
    // 0x3c1ed4: 0x10000123  b           . + 4 + (0x123 << 2)
label_3c1ed8:
    if (ctx->pc == 0x3C1ED8u) {
        ctx->pc = 0x3C1EDCu;
        goto label_3c1edc;
    }
    ctx->pc = 0x3C1ED4u;
    {
        const bool branch_taken_0x3c1ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c1ed4) {
            ctx->pc = 0x3C2364u;
            goto label_3c2364;
        }
    }
    ctx->pc = 0x3C1EDCu;
label_3c1edc:
    // 0x3c1edc: 0xc07724c  jal         func_1DC930
label_3c1ee0:
    if (ctx->pc == 0x3C1EE0u) {
        ctx->pc = 0x3C1EE4u;
        goto label_3c1ee4;
    }
    ctx->pc = 0x3C1EDCu;
    SET_GPR_U32(ctx, 31, 0x3C1EE4u);
    ctx->pc = 0x1DC930u;
    if (runtime->hasFunction(0x1DC930u)) {
        auto targetFn = runtime->lookupFunction(0x1DC930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1EE4u; }
        if (ctx->pc != 0x3C1EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC930_0x1dc930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1EE4u; }
        if (ctx->pc != 0x3C1EE4u) { return; }
    }
    ctx->pc = 0x3C1EE4u;
label_3c1ee4:
    // 0x3c1ee4: 0xc0783b8  jal         func_1E0EE0
label_3c1ee8:
    if (ctx->pc == 0x3C1EE8u) {
        ctx->pc = 0x3C1EE8u;
            // 0x3c1ee8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1EECu;
        goto label_3c1eec;
    }
    ctx->pc = 0x3C1EE4u;
    SET_GPR_U32(ctx, 31, 0x3C1EECu);
    ctx->pc = 0x3C1EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1EE4u;
            // 0x3c1ee8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0EE0u;
    if (runtime->hasFunction(0x1E0EE0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1EECu; }
        if (ctx->pc != 0x3C1EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0EE0_0x1e0ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1EECu; }
        if (ctx->pc != 0x3C1EECu) { return; }
    }
    ctx->pc = 0x3C1EECu;
label_3c1eec:
    // 0x3c1eec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3c1eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3c1ef0:
    // 0x3c1ef0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c1ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c1ef4:
    // 0x3c1ef4: 0x2463038e  addiu       $v1, $v1, 0x38E
    ctx->pc = 0x3c1ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 910));
label_3c1ef8:
    // 0x3c1ef8: 0xc07724c  jal         func_1DC930
label_3c1efc:
    if (ctx->pc == 0x3C1EFCu) {
        ctx->pc = 0x3C1EFCu;
            // 0x3c1efc: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x3C1F00u;
        goto label_3c1f00;
    }
    ctx->pc = 0x3C1EF8u;
    SET_GPR_U32(ctx, 31, 0x3C1F00u);
    ctx->pc = 0x3C1EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1EF8u;
            // 0x3c1efc: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC930u;
    if (runtime->hasFunction(0x1DC930u)) {
        auto targetFn = runtime->lookupFunction(0x1DC930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1F00u; }
        if (ctx->pc != 0x3C1F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC930_0x1dc930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1F00u; }
        if (ctx->pc != 0x3C1F00u) { return; }
    }
    ctx->pc = 0x3C1F00u;
label_3c1f00:
    // 0x3c1f00: 0xc0783b8  jal         func_1E0EE0
label_3c1f04:
    if (ctx->pc == 0x3C1F04u) {
        ctx->pc = 0x3C1F04u;
            // 0x3c1f04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1F08u;
        goto label_3c1f08;
    }
    ctx->pc = 0x3C1F00u;
    SET_GPR_U32(ctx, 31, 0x3C1F08u);
    ctx->pc = 0x3C1F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1F00u;
            // 0x3c1f04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0EE0u;
    if (runtime->hasFunction(0x1E0EE0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1F08u; }
        if (ctx->pc != 0x3C1F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0EE0_0x1e0ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1F08u; }
        if (ctx->pc != 0x3C1F08u) { return; }
    }
    ctx->pc = 0x3C1F08u;
label_3c1f08:
    // 0x3c1f08: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x3c1f08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
label_3c1f0c:
    // 0x3c1f0c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x3c1f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3c1f10:
    // 0x3c1f10: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x3c1f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_3c1f14:
    // 0x3c1f14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c1f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c1f18:
    // 0x3c1f18: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x3c1f18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3c1f1c:
    // 0x3c1f1c: 0x24a3016c  addiu       $v1, $a1, 0x16C
    ctx->pc = 0x3c1f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 364));
label_3c1f20:
    // 0x3c1f20: 0xc07724c  jal         func_1DC930
label_3c1f24:
    if (ctx->pc == 0x3C1F24u) {
        ctx->pc = 0x3C1F24u;
            // 0x3c1f24: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
        ctx->pc = 0x3C1F28u;
        goto label_3c1f28;
    }
    ctx->pc = 0x3C1F20u;
    SET_GPR_U32(ctx, 31, 0x3C1F28u);
    ctx->pc = 0x3C1F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1F20u;
            // 0x3c1f24: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC930u;
    if (runtime->hasFunction(0x1DC930u)) {
        auto targetFn = runtime->lookupFunction(0x1DC930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1F28u; }
        if (ctx->pc != 0x3C1F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC930_0x1dc930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1F28u; }
        if (ctx->pc != 0x3C1F28u) { return; }
    }
    ctx->pc = 0x3C1F28u;
label_3c1f28:
    // 0x3c1f28: 0xc0f08ec  jal         func_3C23B0
label_3c1f2c:
    if (ctx->pc == 0x3C1F2Cu) {
        ctx->pc = 0x3C1F2Cu;
            // 0x3c1f2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1F30u;
        goto label_3c1f30;
    }
    ctx->pc = 0x3C1F28u;
    SET_GPR_U32(ctx, 31, 0x3C1F30u);
    ctx->pc = 0x3C1F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1F28u;
            // 0x3c1f2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C23B0u;
    if (runtime->hasFunction(0x3C23B0u)) {
        auto targetFn = runtime->lookupFunction(0x3C23B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1F30u; }
        if (ctx->pc != 0x3C1F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C23B0_0x3c23b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1F30u; }
        if (ctx->pc != 0x3C1F30u) { return; }
    }
    ctx->pc = 0x3C1F30u;
label_3c1f30:
    // 0x3c1f30: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x3c1f30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_3c1f34:
    // 0x3c1f34: 0xc0783ac  jal         func_1E0EB0
label_3c1f38:
    if (ctx->pc == 0x3C1F38u) {
        ctx->pc = 0x3C1F38u;
            // 0x3c1f38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1F3Cu;
        goto label_3c1f3c;
    }
    ctx->pc = 0x3C1F34u;
    SET_GPR_U32(ctx, 31, 0x3C1F3Cu);
    ctx->pc = 0x3C1F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1F34u;
            // 0x3c1f38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0EB0u;
    if (runtime->hasFunction(0x1E0EB0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1F3Cu; }
        if (ctx->pc != 0x3C1F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0EB0_0x1e0eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1F3Cu; }
        if (ctx->pc != 0x3C1F3Cu) { return; }
    }
    ctx->pc = 0x3C1F3Cu;
label_3c1f3c:
    // 0x3c1f3c: 0x3c023f6d  lui         $v0, 0x3F6D
    ctx->pc = 0x3c1f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16237 << 16));
label_3c1f40:
    // 0x3c1f40: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x3c1f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_3c1f44:
    // 0x3c1f44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3c1f44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c1f48:
    // 0x3c1f48: 0x0  nop
    ctx->pc = 0x3c1f48u;
    // NOP
label_3c1f4c:
    // 0x3c1f4c: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x3c1f4cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3c1f50:
    // 0x3c1f50: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3c1f50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3c1f54:
    // 0x3c1f54: 0x0  nop
    ctx->pc = 0x3c1f54u;
    // NOP
label_3c1f58:
    // 0x3c1f58: 0x46026036  c.le.s      $f12, $f2
    ctx->pc = 0x3c1f58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c1f5c:
    // 0x3c1f5c: 0x45010011  bc1t        . + 4 + (0x11 << 2)
label_3c1f60:
    if (ctx->pc == 0x3C1F60u) {
        ctx->pc = 0x3C1F64u;
        goto label_3c1f64;
    }
    ctx->pc = 0x3C1F5Cu;
    {
        const bool branch_taken_0x3c1f5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c1f5c) {
            ctx->pc = 0x3C1FA4u;
            goto label_3c1fa4;
        }
    }
    ctx->pc = 0x3C1F64u;
label_3c1f64:
    // 0x3c1f64: 0x3c023b97  lui         $v0, 0x3B97
    ctx->pc = 0x3c1f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15255 << 16));
label_3c1f68:
    // 0x3c1f68: 0x3442b426  ori         $v0, $v0, 0xB426
    ctx->pc = 0x3c1f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46118);
label_3c1f6c:
    // 0x3c1f6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3c1f6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c1f70:
    // 0x3c1f70: 0x0  nop
    ctx->pc = 0x3c1f70u;
    // NOP
label_3c1f74:
    // 0x3c1f74: 0x46016001  sub.s       $f0, $f12, $f1
    ctx->pc = 0x3c1f74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
label_3c1f78:
    // 0x3c1f78: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x3c1f78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c1f7c:
    // 0x3c1f7c: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_3c1f80:
    if (ctx->pc == 0x3C1F80u) {
        ctx->pc = 0x3C1F80u;
            // 0x3c1f80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1F84u;
        goto label_3c1f84;
    }
    ctx->pc = 0x3C1F7Cu;
    {
        const bool branch_taken_0x3c1f7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c1f7c) {
            ctx->pc = 0x3C1F80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1F7Cu;
            // 0x3c1f80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C1F94u;
            goto label_3c1f94;
        }
    }
    ctx->pc = 0x3C1F84u;
label_3c1f84:
    // 0x3c1f84: 0xc0efe7c  jal         func_3BF9F0
label_3c1f88:
    if (ctx->pc == 0x3C1F88u) {
        ctx->pc = 0x3C1F88u;
            // 0x3c1f88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1F8Cu;
        goto label_3c1f8c;
    }
    ctx->pc = 0x3C1F84u;
    SET_GPR_U32(ctx, 31, 0x3C1F8Cu);
    ctx->pc = 0x3C1F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1F84u;
            // 0x3c1f88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF9F0u;
    if (runtime->hasFunction(0x3BF9F0u)) {
        auto targetFn = runtime->lookupFunction(0x3BF9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1F8Cu; }
        if (ctx->pc != 0x3C1F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF9F0_0x3bf9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1F8Cu; }
        if (ctx->pc != 0x3C1F8Cu) { return; }
    }
    ctx->pc = 0x3C1F8Cu;
label_3c1f8c:
    // 0x3c1f8c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_3c1f90:
    if (ctx->pc == 0x3C1F90u) {
        ctx->pc = 0x3C1F94u;
        goto label_3c1f94;
    }
    ctx->pc = 0x3C1F8Cu;
    {
        const bool branch_taken_0x3c1f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c1f8c) {
            ctx->pc = 0x3C1FF8u;
            goto label_3c1ff8;
        }
    }
    ctx->pc = 0x3C1F94u;
label_3c1f94:
    // 0x3c1f94: 0xc0efe7c  jal         func_3BF9F0
label_3c1f98:
    if (ctx->pc == 0x3C1F98u) {
        ctx->pc = 0x3C1F98u;
            // 0x3c1f98: 0x46000b06  mov.s       $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x3C1F9Cu;
        goto label_3c1f9c;
    }
    ctx->pc = 0x3C1F94u;
    SET_GPR_U32(ctx, 31, 0x3C1F9Cu);
    ctx->pc = 0x3C1F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1F94u;
            // 0x3c1f98: 0x46000b06  mov.s       $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF9F0u;
    if (runtime->hasFunction(0x3BF9F0u)) {
        auto targetFn = runtime->lookupFunction(0x3BF9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1F9Cu; }
        if (ctx->pc != 0x3C1F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF9F0_0x3bf9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1F9Cu; }
        if (ctx->pc != 0x3C1F9Cu) { return; }
    }
    ctx->pc = 0x3C1F9Cu;
label_3c1f9c:
    // 0x3c1f9c: 0x10000016  b           . + 4 + (0x16 << 2)
label_3c1fa0:
    if (ctx->pc == 0x3C1FA0u) {
        ctx->pc = 0x3C1FA4u;
        goto label_3c1fa4;
    }
    ctx->pc = 0x3C1F9Cu;
    {
        const bool branch_taken_0x3c1f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c1f9c) {
            ctx->pc = 0x3C1FF8u;
            goto label_3c1ff8;
        }
    }
    ctx->pc = 0x3C1FA4u;
label_3c1fa4:
    // 0x3c1fa4: 0x46026034  c.lt.s      $f12, $f2
    ctx->pc = 0x3c1fa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c1fa8:
    // 0x3c1fa8: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
label_3c1fac:
    if (ctx->pc == 0x3C1FACu) {
        ctx->pc = 0x3C1FACu;
            // 0x3c1fac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1FB0u;
        goto label_3c1fb0;
    }
    ctx->pc = 0x3C1FA8u;
    {
        const bool branch_taken_0x3c1fa8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c1fa8) {
            ctx->pc = 0x3C1FACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1FA8u;
            // 0x3c1fac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C1FF0u;
            goto label_3c1ff0;
        }
    }
    ctx->pc = 0x3C1FB0u;
label_3c1fb0:
    // 0x3c1fb0: 0x3c02bb97  lui         $v0, 0xBB97
    ctx->pc = 0x3c1fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48023 << 16));
label_3c1fb4:
    // 0x3c1fb4: 0x3442b426  ori         $v0, $v0, 0xB426
    ctx->pc = 0x3c1fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46118);
label_3c1fb8:
    // 0x3c1fb8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3c1fb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c1fbc:
    // 0x3c1fbc: 0x0  nop
    ctx->pc = 0x3c1fbcu;
    // NOP
label_3c1fc0:
    // 0x3c1fc0: 0x46016001  sub.s       $f0, $f12, $f1
    ctx->pc = 0x3c1fc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
label_3c1fc4:
    // 0x3c1fc4: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x3c1fc4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c1fc8:
    // 0x3c1fc8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_3c1fcc:
    if (ctx->pc == 0x3C1FCCu) {
        ctx->pc = 0x3C1FCCu;
            // 0x3c1fcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1FD0u;
        goto label_3c1fd0;
    }
    ctx->pc = 0x3C1FC8u;
    {
        const bool branch_taken_0x3c1fc8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c1fc8) {
            ctx->pc = 0x3C1FCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1FC8u;
            // 0x3c1fcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C1FE0u;
            goto label_3c1fe0;
        }
    }
    ctx->pc = 0x3C1FD0u;
label_3c1fd0:
    // 0x3c1fd0: 0xc0efe7c  jal         func_3BF9F0
label_3c1fd4:
    if (ctx->pc == 0x3C1FD4u) {
        ctx->pc = 0x3C1FD4u;
            // 0x3c1fd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C1FD8u;
        goto label_3c1fd8;
    }
    ctx->pc = 0x3C1FD0u;
    SET_GPR_U32(ctx, 31, 0x3C1FD8u);
    ctx->pc = 0x3C1FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1FD0u;
            // 0x3c1fd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF9F0u;
    if (runtime->hasFunction(0x3BF9F0u)) {
        auto targetFn = runtime->lookupFunction(0x3BF9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1FD8u; }
        if (ctx->pc != 0x3C1FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF9F0_0x3bf9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1FD8u; }
        if (ctx->pc != 0x3C1FD8u) { return; }
    }
    ctx->pc = 0x3C1FD8u;
label_3c1fd8:
    // 0x3c1fd8: 0x10000007  b           . + 4 + (0x7 << 2)
label_3c1fdc:
    if (ctx->pc == 0x3C1FDCu) {
        ctx->pc = 0x3C1FE0u;
        goto label_3c1fe0;
    }
    ctx->pc = 0x3C1FD8u;
    {
        const bool branch_taken_0x3c1fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c1fd8) {
            ctx->pc = 0x3C1FF8u;
            goto label_3c1ff8;
        }
    }
    ctx->pc = 0x3C1FE0u;
label_3c1fe0:
    // 0x3c1fe0: 0xc0efe7c  jal         func_3BF9F0
label_3c1fe4:
    if (ctx->pc == 0x3C1FE4u) {
        ctx->pc = 0x3C1FE4u;
            // 0x3c1fe4: 0x46000b06  mov.s       $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x3C1FE8u;
        goto label_3c1fe8;
    }
    ctx->pc = 0x3C1FE0u;
    SET_GPR_U32(ctx, 31, 0x3C1FE8u);
    ctx->pc = 0x3C1FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1FE0u;
            // 0x3c1fe4: 0x46000b06  mov.s       $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF9F0u;
    if (runtime->hasFunction(0x3BF9F0u)) {
        auto targetFn = runtime->lookupFunction(0x3BF9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1FE8u; }
        if (ctx->pc != 0x3C1FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF9F0_0x3bf9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1FE8u; }
        if (ctx->pc != 0x3C1FE8u) { return; }
    }
    ctx->pc = 0x3C1FE8u;
label_3c1fe8:
    // 0x3c1fe8: 0x10000003  b           . + 4 + (0x3 << 2)
label_3c1fec:
    if (ctx->pc == 0x3C1FECu) {
        ctx->pc = 0x3C1FF0u;
        goto label_3c1ff0;
    }
    ctx->pc = 0x3C1FE8u;
    {
        const bool branch_taken_0x3c1fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c1fe8) {
            ctx->pc = 0x3C1FF8u;
            goto label_3c1ff8;
        }
    }
    ctx->pc = 0x3C1FF0u;
label_3c1ff0:
    // 0x3c1ff0: 0xc0efe7c  jal         func_3BF9F0
label_3c1ff4:
    if (ctx->pc == 0x3C1FF4u) {
        ctx->pc = 0x3C1FF4u;
            // 0x3c1ff4: 0x46001306  mov.s       $f12, $f2 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[2]);
        ctx->pc = 0x3C1FF8u;
        goto label_3c1ff8;
    }
    ctx->pc = 0x3C1FF0u;
    SET_GPR_U32(ctx, 31, 0x3C1FF8u);
    ctx->pc = 0x3C1FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C1FF0u;
            // 0x3c1ff4: 0x46001306  mov.s       $f12, $f2 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF9F0u;
    if (runtime->hasFunction(0x3BF9F0u)) {
        auto targetFn = runtime->lookupFunction(0x3BF9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1FF8u; }
        if (ctx->pc != 0x3C1FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF9F0_0x3bf9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C1FF8u; }
        if (ctx->pc != 0x3C1FF8u) { return; }
    }
    ctx->pc = 0x3C1FF8u;
label_3c1ff8:
    // 0x3c1ff8: 0xc0775b8  jal         func_1DD6E0
label_3c1ffc:
    if (ctx->pc == 0x3C1FFCu) {
        ctx->pc = 0x3C2000u;
        goto label_3c2000;
    }
    ctx->pc = 0x3C1FF8u;
    SET_GPR_U32(ctx, 31, 0x3C2000u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2000u; }
        if (ctx->pc != 0x3C2000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2000u; }
        if (ctx->pc != 0x3C2000u) { return; }
    }
    ctx->pc = 0x3C2000u;
label_3c2000:
    // 0x3c2000: 0xc0775b4  jal         func_1DD6D0
label_3c2004:
    if (ctx->pc == 0x3C2004u) {
        ctx->pc = 0x3C2004u;
            // 0x3c2004: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3C2008u;
        goto label_3c2008;
    }
    ctx->pc = 0x3C2000u;
    SET_GPR_U32(ctx, 31, 0x3C2008u);
    ctx->pc = 0x3C2004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2000u;
            // 0x3c2004: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2008u; }
        if (ctx->pc != 0x3C2008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2008u; }
        if (ctx->pc != 0x3C2008u) { return; }
    }
    ctx->pc = 0x3C2008u;
label_3c2008:
    // 0x3c2008: 0xc60201b0  lwc1        $f2, 0x1B0($s0)
    ctx->pc = 0x3c2008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c200c:
    // 0x3c200c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3c200cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c2010:
    // 0x3c2010: 0x0  nop
    ctx->pc = 0x3c2010u;
    // NOP
label_3c2014:
    // 0x3c2014: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x3c2014u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_3c2018:
    // 0x3c2018: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c2018u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c201c:
    // 0x3c201c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_3c2020:
    if (ctx->pc == 0x3C2020u) {
        ctx->pc = 0x3C2020u;
            // 0x3c2020: 0xe60001b0  swc1        $f0, 0x1B0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
        ctx->pc = 0x3C2024u;
        goto label_3c2024;
    }
    ctx->pc = 0x3C201Cu;
    {
        const bool branch_taken_0x3c201c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C2020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C201Cu;
            // 0x3c2020: 0xe60001b0  swc1        $f0, 0x1B0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c201c) {
            ctx->pc = 0x3C2038u;
            goto label_3c2038;
        }
    }
    ctx->pc = 0x3C2024u;
label_3c2024:
    // 0x3c2024: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3c2024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3c2028:
    // 0x3c2028: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c2028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c202c:
    // 0x3c202c: 0xc4408448  lwc1        $f0, -0x7BB8($v0)
    ctx->pc = 0x3c202cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294935624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c2030:
    // 0x3c2030: 0xc0f0d1c  jal         func_3C3470
label_3c2034:
    if (ctx->pc == 0x3C2034u) {
        ctx->pc = 0x3C2034u;
            // 0x3c2034: 0xe60001b0  swc1        $f0, 0x1B0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
        ctx->pc = 0x3C2038u;
        goto label_3c2038;
    }
    ctx->pc = 0x3C2030u;
    SET_GPR_U32(ctx, 31, 0x3C2038u);
    ctx->pc = 0x3C2034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2030u;
            // 0x3c2034: 0xe60001b0  swc1        $f0, 0x1B0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3470u;
    if (runtime->hasFunction(0x3C3470u)) {
        auto targetFn = runtime->lookupFunction(0x3C3470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2038u; }
        if (ctx->pc != 0x3C2038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3470_0x3c3470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2038u; }
        if (ctx->pc != 0x3C2038u) { return; }
    }
    ctx->pc = 0x3C2038u;
label_3c2038:
    // 0x3c2038: 0xc0f08f8  jal         func_3C23E0
label_3c203c:
    if (ctx->pc == 0x3C203Cu) {
        ctx->pc = 0x3C203Cu;
            // 0x3c203c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C2040u;
        goto label_3c2040;
    }
    ctx->pc = 0x3C2038u;
    SET_GPR_U32(ctx, 31, 0x3C2040u);
    ctx->pc = 0x3C203Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2038u;
            // 0x3c203c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C23E0u;
    if (runtime->hasFunction(0x3C23E0u)) {
        auto targetFn = runtime->lookupFunction(0x3C23E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2040u; }
        if (ctx->pc != 0x3C2040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C23E0_0x3c23e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2040u; }
        if (ctx->pc != 0x3C2040u) { return; }
    }
    ctx->pc = 0x3C2040u;
label_3c2040:
    // 0x3c2040: 0x920301bc  lbu         $v1, 0x1BC($s0)
    ctx->pc = 0x3c2040u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 444)));
label_3c2044:
    // 0x3c2044: 0x106000c7  beqz        $v1, . + 4 + (0xC7 << 2)
label_3c2048:
    if (ctx->pc == 0x3C2048u) {
        ctx->pc = 0x3C204Cu;
        goto label_3c204c;
    }
    ctx->pc = 0x3C2044u;
    {
        const bool branch_taken_0x3c2044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c2044) {
            ctx->pc = 0x3C2364u;
            goto label_3c2364;
        }
    }
    ctx->pc = 0x3C204Cu;
label_3c204c:
    // 0x3c204c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c204cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c2050:
    // 0x3c2050: 0xc0f0f84  jal         func_3C3E10
label_3c2054:
    if (ctx->pc == 0x3C2054u) {
        ctx->pc = 0x3C2054u;
            // 0x3c2054: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x3C2058u;
        goto label_3c2058;
    }
    ctx->pc = 0x3C2050u;
    SET_GPR_U32(ctx, 31, 0x3C2058u);
    ctx->pc = 0x3C2054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2050u;
            // 0x3c2054: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3E10u;
    if (runtime->hasFunction(0x3C3E10u)) {
        auto targetFn = runtime->lookupFunction(0x3C3E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2058u; }
        if (ctx->pc != 0x3C2058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3E10_0x3c3e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2058u; }
        if (ctx->pc != 0x3C2058u) { return; }
    }
    ctx->pc = 0x3C2058u;
label_3c2058:
    // 0x3c2058: 0x100000c2  b           . + 4 + (0xC2 << 2)
label_3c205c:
    if (ctx->pc == 0x3C205Cu) {
        ctx->pc = 0x3C2060u;
        goto label_3c2060;
    }
    ctx->pc = 0x3C2058u;
    {
        const bool branch_taken_0x3c2058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c2058) {
            ctx->pc = 0x3C2364u;
            goto label_3c2364;
        }
    }
    ctx->pc = 0x3C2060u;
label_3c2060:
    // 0x3c2060: 0xc0efea4  jal         func_3BFA90
label_3c2064:
    if (ctx->pc == 0x3C2064u) {
        ctx->pc = 0x3C2064u;
            // 0x3c2064: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3C2068u;
        goto label_3c2068;
    }
    ctx->pc = 0x3C2060u;
    SET_GPR_U32(ctx, 31, 0x3C2068u);
    ctx->pc = 0x3C2064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2060u;
            // 0x3c2064: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BFA90u;
    if (runtime->hasFunction(0x3BFA90u)) {
        auto targetFn = runtime->lookupFunction(0x3BFA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2068u; }
        if (ctx->pc != 0x3C2068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BFA90_0x3bfa90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2068u; }
        if (ctx->pc != 0x3C2068u) { return; }
    }
    ctx->pc = 0x3C2068u;
label_3c2068:
    // 0x3c2068: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3c2068u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c206c:
    // 0x3c206c: 0xc07731c  jal         func_1DCC70
label_3c2070:
    if (ctx->pc == 0x3C2070u) {
        ctx->pc = 0x3C2070u;
            // 0x3c2070: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C2074u;
        goto label_3c2074;
    }
    ctx->pc = 0x3C206Cu;
    SET_GPR_U32(ctx, 31, 0x3C2074u);
    ctx->pc = 0x3C2070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C206Cu;
            // 0x3c2070: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC70u;
    if (runtime->hasFunction(0x1DCC70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2074u; }
        if (ctx->pc != 0x3C2074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC70_0x1dcc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2074u; }
        if (ctx->pc != 0x3C2074u) { return; }
    }
    ctx->pc = 0x3C2074u;
label_3c2074:
    // 0x3c2074: 0xc0772e8  jal         func_1DCBA0
label_3c2078:
    if (ctx->pc == 0x3C2078u) {
        ctx->pc = 0x3C2078u;
            // 0x3c2078: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C207Cu;
        goto label_3c207c;
    }
    ctx->pc = 0x3C2074u;
    SET_GPR_U32(ctx, 31, 0x3C207Cu);
    ctx->pc = 0x3C2078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2074u;
            // 0x3c2078: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBA0u;
    if (runtime->hasFunction(0x1DCBA0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C207Cu; }
        if (ctx->pc != 0x3C207Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCBA0_0x1dcba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C207Cu; }
        if (ctx->pc != 0x3C207Cu) { return; }
    }
    ctx->pc = 0x3C207Cu;
label_3c207c:
    // 0x3c207c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c207cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c2080:
    // 0x3c2080: 0xc0efea0  jal         func_3BFA80
label_3c2084:
    if (ctx->pc == 0x3C2084u) {
        ctx->pc = 0x3C2084u;
            // 0x3c2084: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C2088u;
        goto label_3c2088;
    }
    ctx->pc = 0x3C2080u;
    SET_GPR_U32(ctx, 31, 0x3C2088u);
    ctx->pc = 0x3C2084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2080u;
            // 0x3c2084: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BFA80u;
    if (runtime->hasFunction(0x3BFA80u)) {
        auto targetFn = runtime->lookupFunction(0x3BFA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2088u; }
        if (ctx->pc != 0x3C2088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BFA80_0x3bfa80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2088u; }
        if (ctx->pc != 0x3C2088u) { return; }
    }
    ctx->pc = 0x3C2088u;
label_3c2088:
    // 0x3c2088: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c2088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c208c:
    // 0x3c208c: 0x50430073  beql        $v0, $v1, . + 4 + (0x73 << 2)
label_3c2090:
    if (ctx->pc == 0x3C2090u) {
        ctx->pc = 0x3C2090u;
            // 0x3c2090: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C2094u;
        goto label_3c2094;
    }
    ctx->pc = 0x3C208Cu;
    {
        const bool branch_taken_0x3c208c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c208c) {
            ctx->pc = 0x3C2090u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C208Cu;
            // 0x3c2090: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C225Cu;
            goto label_3c225c;
        }
    }
    ctx->pc = 0x3C2094u;
label_3c2094:
    // 0x3c2094: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_3c2098:
    if (ctx->pc == 0x3C2098u) {
        ctx->pc = 0x3C2098u;
            // 0x3c2098: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C209Cu;
        goto label_3c209c;
    }
    ctx->pc = 0x3C2094u;
    {
        const bool branch_taken_0x3c2094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c2094) {
            ctx->pc = 0x3C2098u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2094u;
            // 0x3c2098: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C20A4u;
            goto label_3c20a4;
        }
    }
    ctx->pc = 0x3C209Cu;
label_3c209c:
    // 0x3c209c: 0x100000b1  b           . + 4 + (0xB1 << 2)
label_3c20a0:
    if (ctx->pc == 0x3C20A0u) {
        ctx->pc = 0x3C20A4u;
        goto label_3c20a4;
    }
    ctx->pc = 0x3C209Cu;
    {
        const bool branch_taken_0x3c209c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c209c) {
            ctx->pc = 0x3C2364u;
            goto label_3c2364;
        }
    }
    ctx->pc = 0x3C20A4u;
label_3c20a4:
    // 0x3c20a4: 0xc077584  jal         func_1DD610
label_3c20a8:
    if (ctx->pc == 0x3C20A8u) {
        ctx->pc = 0x3C20ACu;
        goto label_3c20ac;
    }
    ctx->pc = 0x3C20A4u;
    SET_GPR_U32(ctx, 31, 0x3C20ACu);
    ctx->pc = 0x1DD610u;
    if (runtime->hasFunction(0x1DD610u)) {
        auto targetFn = runtime->lookupFunction(0x1DD610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C20ACu; }
        if (ctx->pc != 0x3C20ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD610_0x1dd610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C20ACu; }
        if (ctx->pc != 0x3C20ACu) { return; }
    }
    ctx->pc = 0x3C20ACu;
label_3c20ac:
    // 0x3c20ac: 0xc0754b4  jal         func_1D52D0
label_3c20b0:
    if (ctx->pc == 0x3C20B0u) {
        ctx->pc = 0x3C20B0u;
            // 0x3c20b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C20B4u;
        goto label_3c20b4;
    }
    ctx->pc = 0x3C20ACu;
    SET_GPR_U32(ctx, 31, 0x3C20B4u);
    ctx->pc = 0x3C20B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C20ACu;
            // 0x3c20b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C20B4u; }
        if (ctx->pc != 0x3C20B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C20B4u; }
        if (ctx->pc != 0x3C20B4u) { return; }
    }
    ctx->pc = 0x3C20B4u;
label_3c20b4:
    // 0x3c20b4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3c20b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c20b8:
    // 0x3c20b8: 0xc0eeb1c  jal         func_3BAC70
label_3c20bc:
    if (ctx->pc == 0x3C20BCu) {
        ctx->pc = 0x3C20BCu;
            // 0x3c20bc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C20C0u;
        goto label_3c20c0;
    }
    ctx->pc = 0x3C20B8u;
    SET_GPR_U32(ctx, 31, 0x3C20C0u);
    ctx->pc = 0x3C20BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C20B8u;
            // 0x3c20bc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BAC70u;
    if (runtime->hasFunction(0x3BAC70u)) {
        auto targetFn = runtime->lookupFunction(0x3BAC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C20C0u; }
        if (ctx->pc != 0x3C20C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BAC70_0x3bac70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C20C0u; }
        if (ctx->pc != 0x3C20C0u) { return; }
    }
    ctx->pc = 0x3C20C0u;
label_3c20c0:
    // 0x3c20c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c20c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c20c4:
    // 0x3c20c4: 0xc0e1100  jal         func_384400
label_3c20c8:
    if (ctx->pc == 0x3C20C8u) {
        ctx->pc = 0x3C20C8u;
            // 0x3c20c8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x3C20CCu;
        goto label_3c20cc;
    }
    ctx->pc = 0x3C20C4u;
    SET_GPR_U32(ctx, 31, 0x3C20CCu);
    ctx->pc = 0x3C20C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C20C4u;
            // 0x3c20c8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384400u;
    if (runtime->hasFunction(0x384400u)) {
        auto targetFn = runtime->lookupFunction(0x384400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C20CCu; }
        if (ctx->pc != 0x3C20CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384400_0x384400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C20CCu; }
        if (ctx->pc != 0x3C20CCu) { return; }
    }
    ctx->pc = 0x3C20CCu;
label_3c20cc:
    // 0x3c20cc: 0xc0775d8  jal         func_1DD760
label_3c20d0:
    if (ctx->pc == 0x3C20D0u) {
        ctx->pc = 0x3C20D0u;
            // 0x3c20d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C20D4u;
        goto label_3c20d4;
    }
    ctx->pc = 0x3C20CCu;
    SET_GPR_U32(ctx, 31, 0x3C20D4u);
    ctx->pc = 0x3C20D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C20CCu;
            // 0x3c20d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD760u;
    if (runtime->hasFunction(0x1DD760u)) {
        auto targetFn = runtime->lookupFunction(0x1DD760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C20D4u; }
        if (ctx->pc != 0x3C20D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD760_0x1dd760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C20D4u; }
        if (ctx->pc != 0x3C20D4u) { return; }
    }
    ctx->pc = 0x3C20D4u;
label_3c20d4:
    // 0x3c20d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c20d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c20d8:
    // 0x3c20d8: 0xc077590  jal         func_1DD640
label_3c20dc:
    if (ctx->pc == 0x3C20DCu) {
        ctx->pc = 0x3C20DCu;
            // 0x3c20dc: 0x3c050020  lui         $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
        ctx->pc = 0x3C20E0u;
        goto label_3c20e0;
    }
    ctx->pc = 0x3C20D8u;
    SET_GPR_U32(ctx, 31, 0x3C20E0u);
    ctx->pc = 0x3C20DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C20D8u;
            // 0x3c20dc: 0x3c050020  lui         $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD640u;
    if (runtime->hasFunction(0x1DD640u)) {
        auto targetFn = runtime->lookupFunction(0x1DD640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C20E0u; }
        if (ctx->pc != 0x3C20E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD640_0x1dd640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C20E0u; }
        if (ctx->pc != 0x3C20E0u) { return; }
    }
    ctx->pc = 0x3C20E0u;
label_3c20e0:
    // 0x3c20e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c20e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c20e4:
    // 0x3c20e4: 0xc0c05cc  jal         func_301730
label_3c20e8:
    if (ctx->pc == 0x3C20E8u) {
        ctx->pc = 0x3C20E8u;
            // 0x3c20e8: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x3C20ECu;
        goto label_3c20ec;
    }
    ctx->pc = 0x3C20E4u;
    SET_GPR_U32(ctx, 31, 0x3C20ECu);
    ctx->pc = 0x3C20E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C20E4u;
            // 0x3c20e8: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301730u;
    if (runtime->hasFunction(0x301730u)) {
        auto targetFn = runtime->lookupFunction(0x301730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C20ECu; }
        if (ctx->pc != 0x3C20ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301730_0x301730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C20ECu; }
        if (ctx->pc != 0x3C20ECu) { return; }
    }
    ctx->pc = 0x3C20ECu;
label_3c20ec:
    // 0x3c20ec: 0xc0770c0  jal         func_1DC300
label_3c20f0:
    if (ctx->pc == 0x3C20F0u) {
        ctx->pc = 0x3C20F0u;
            // 0x3c20f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C20F4u;
        goto label_3c20f4;
    }
    ctx->pc = 0x3C20ECu;
    SET_GPR_U32(ctx, 31, 0x3C20F4u);
    ctx->pc = 0x3C20F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C20ECu;
            // 0x3c20f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC300u;
    if (runtime->hasFunction(0x1DC300u)) {
        auto targetFn = runtime->lookupFunction(0x1DC300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C20F4u; }
        if (ctx->pc != 0x3C20F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC300_0x1dc300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C20F4u; }
        if (ctx->pc != 0x3C20F4u) { return; }
    }
    ctx->pc = 0x3C20F4u;
label_3c20f4:
    // 0x3c20f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c20f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c20f8:
    // 0x3c20f8: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x3c20f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_3c20fc:
    // 0x3c20fc: 0xc0efdec  jal         func_3BF7B0
label_3c2100:
    if (ctx->pc == 0x3C2100u) {
        ctx->pc = 0x3C2100u;
            // 0x3c2100: 0xc44c1360  lwc1        $f12, 0x1360($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x3C2104u;
        goto label_3c2104;
    }
    ctx->pc = 0x3C20FCu;
    SET_GPR_U32(ctx, 31, 0x3C2104u);
    ctx->pc = 0x3C2100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C20FCu;
            // 0x3c2100: 0xc44c1360  lwc1        $f12, 0x1360($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF7B0u;
    if (runtime->hasFunction(0x3BF7B0u)) {
        auto targetFn = runtime->lookupFunction(0x3BF7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2104u; }
        if (ctx->pc != 0x3C2104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF7B0_0x3bf7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2104u; }
        if (ctx->pc != 0x3C2104u) { return; }
    }
    ctx->pc = 0x3C2104u;
label_3c2104:
    // 0x3c2104: 0xc0770c0  jal         func_1DC300
label_3c2108:
    if (ctx->pc == 0x3C2108u) {
        ctx->pc = 0x3C2108u;
            // 0x3c2108: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C210Cu;
        goto label_3c210c;
    }
    ctx->pc = 0x3C2104u;
    SET_GPR_U32(ctx, 31, 0x3C210Cu);
    ctx->pc = 0x3C2108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2104u;
            // 0x3c2108: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC300u;
    if (runtime->hasFunction(0x1DC300u)) {
        auto targetFn = runtime->lookupFunction(0x1DC300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C210Cu; }
        if (ctx->pc != 0x3C210Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC300_0x1dc300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C210Cu; }
        if (ctx->pc != 0x3C210Cu) { return; }
    }
    ctx->pc = 0x3C210Cu;
label_3c210c:
    // 0x3c210c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c210cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c2110:
    // 0x3c2110: 0xc0e1218  jal         func_384860
label_3c2114:
    if (ctx->pc == 0x3C2114u) {
        ctx->pc = 0x3C2114u;
            // 0x3c2114: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C2118u;
        goto label_3c2118;
    }
    ctx->pc = 0x3C2110u;
    SET_GPR_U32(ctx, 31, 0x3C2118u);
    ctx->pc = 0x3C2114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2110u;
            // 0x3c2114: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384860u;
    if (runtime->hasFunction(0x384860u)) {
        auto targetFn = runtime->lookupFunction(0x384860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2118u; }
        if (ctx->pc != 0x3C2118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384860_0x384860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2118u; }
        if (ctx->pc != 0x3C2118u) { return; }
    }
    ctx->pc = 0x3C2118u;
label_3c2118:
    // 0x3c2118: 0xc0775d8  jal         func_1DD760
label_3c211c:
    if (ctx->pc == 0x3C211Cu) {
        ctx->pc = 0x3C211Cu;
            // 0x3c211c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C2120u;
        goto label_3c2120;
    }
    ctx->pc = 0x3C2118u;
    SET_GPR_U32(ctx, 31, 0x3C2120u);
    ctx->pc = 0x3C211Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2118u;
            // 0x3c211c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD760u;
    if (runtime->hasFunction(0x1DD760u)) {
        auto targetFn = runtime->lookupFunction(0x1DD760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2120u; }
        if (ctx->pc != 0x3C2120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD760_0x1dd760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2120u; }
        if (ctx->pc != 0x3C2120u) { return; }
    }
    ctx->pc = 0x3C2120u;
label_3c2120:
    // 0x3c2120: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c2120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c2124:
    // 0x3c2124: 0xc0f08f4  jal         func_3C23D0
label_3c2128:
    if (ctx->pc == 0x3C2128u) {
        ctx->pc = 0x3C2128u;
            // 0x3c2128: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3C212Cu;
        goto label_3c212c;
    }
    ctx->pc = 0x3C2124u;
    SET_GPR_U32(ctx, 31, 0x3C212Cu);
    ctx->pc = 0x3C2128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2124u;
            // 0x3c2128: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C23D0u;
    if (runtime->hasFunction(0x3C23D0u)) {
        auto targetFn = runtime->lookupFunction(0x3C23D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C212Cu; }
        if (ctx->pc != 0x3C212Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C23D0_0x3c23d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C212Cu; }
        if (ctx->pc != 0x3C212Cu) { return; }
    }
    ctx->pc = 0x3C212Cu;
label_3c212c:
    // 0x3c212c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c212cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c2130:
    // 0x3c2130: 0xc077fb0  jal         func_1DFEC0
label_3c2134:
    if (ctx->pc == 0x3C2134u) {
        ctx->pc = 0x3C2134u;
            // 0x3c2134: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3C2138u;
        goto label_3c2138;
    }
    ctx->pc = 0x3C2130u;
    SET_GPR_U32(ctx, 31, 0x3C2138u);
    ctx->pc = 0x3C2134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2130u;
            // 0x3c2134: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFEC0u;
    if (runtime->hasFunction(0x1DFEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DFEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2138u; }
        if (ctx->pc != 0x3C2138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFEC0_0x1dfec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2138u; }
        if (ctx->pc != 0x3C2138u) { return; }
    }
    ctx->pc = 0x3C2138u;
label_3c2138:
    // 0x3c2138: 0xc66c0008  lwc1        $f12, 0x8($s3)
    ctx->pc = 0x3c2138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3c213c:
    // 0x3c213c: 0xc0f0d64  jal         func_3C3590
label_3c2140:
    if (ctx->pc == 0x3C2140u) {
        ctx->pc = 0x3C2140u;
            // 0x3c2140: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C2144u;
        goto label_3c2144;
    }
    ctx->pc = 0x3C213Cu;
    SET_GPR_U32(ctx, 31, 0x3C2144u);
    ctx->pc = 0x3C2140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C213Cu;
            // 0x3c2140: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3590u;
    if (runtime->hasFunction(0x3C3590u)) {
        auto targetFn = runtime->lookupFunction(0x3C3590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2144u; }
        if (ctx->pc != 0x3C2144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3590_0x3c3590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2144u; }
        if (ctx->pc != 0x3C2144u) { return; }
    }
    ctx->pc = 0x3C2144u;
label_3c2144:
    // 0x3c2144: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3c2144u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c2148:
    // 0x3c2148: 0xc0efe7c  jal         func_3BF9F0
label_3c214c:
    if (ctx->pc == 0x3C214Cu) {
        ctx->pc = 0x3C214Cu;
            // 0x3c214c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C2150u;
        goto label_3c2150;
    }
    ctx->pc = 0x3C2148u;
    SET_GPR_U32(ctx, 31, 0x3C2150u);
    ctx->pc = 0x3C214Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2148u;
            // 0x3c214c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF9F0u;
    if (runtime->hasFunction(0x3BF9F0u)) {
        auto targetFn = runtime->lookupFunction(0x3BF9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2150u; }
        if (ctx->pc != 0x3C2150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF9F0_0x3bf9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2150u; }
        if (ctx->pc != 0x3C2150u) { return; }
    }
    ctx->pc = 0x3C2150u;
label_3c2150:
    // 0x3c2150: 0xc0e110c  jal         func_384430
label_3c2154:
    if (ctx->pc == 0x3C2154u) {
        ctx->pc = 0x3C2154u;
            // 0x3c2154: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C2158u;
        goto label_3c2158;
    }
    ctx->pc = 0x3C2150u;
    SET_GPR_U32(ctx, 31, 0x3C2158u);
    ctx->pc = 0x3C2154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2150u;
            // 0x3c2154: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384430u;
    if (runtime->hasFunction(0x384430u)) {
        auto targetFn = runtime->lookupFunction(0x384430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2158u; }
        if (ctx->pc != 0x3C2158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384430_0x384430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2158u; }
        if (ctx->pc != 0x3C2158u) { return; }
    }
    ctx->pc = 0x3C2158u;
label_3c2158:
    // 0x3c2158: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3c2158u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_3c215c:
    // 0x3c215c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c215cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c2160:
    // 0x3c2160: 0xc04cc04  jal         func_133010
label_3c2164:
    if (ctx->pc == 0x3C2164u) {
        ctx->pc = 0x3C2164u;
            // 0x3c2164: 0x24a58470  addiu       $a1, $a1, -0x7B90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935664));
        ctx->pc = 0x3C2168u;
        goto label_3c2168;
    }
    ctx->pc = 0x3C2160u;
    SET_GPR_U32(ctx, 31, 0x3C2168u);
    ctx->pc = 0x3C2164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2160u;
            // 0x3c2164: 0x24a58470  addiu       $a1, $a1, -0x7B90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2168u; }
        if (ctx->pc != 0x3C2168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2168u; }
        if (ctx->pc != 0x3C2168u) { return; }
    }
    ctx->pc = 0x3C2168u;
label_3c2168:
    // 0x3c2168: 0xc0772dc  jal         func_1DCB70
label_3c216c:
    if (ctx->pc == 0x3C216Cu) {
        ctx->pc = 0x3C216Cu;
            // 0x3c216c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C2170u;
        goto label_3c2170;
    }
    ctx->pc = 0x3C2168u;
    SET_GPR_U32(ctx, 31, 0x3C2170u);
    ctx->pc = 0x3C216Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2168u;
            // 0x3c216c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCB70u;
    if (runtime->hasFunction(0x1DCB70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2170u; }
        if (ctx->pc != 0x3C2170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCB70_0x1dcb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2170u; }
        if (ctx->pc != 0x3C2170u) { return; }
    }
    ctx->pc = 0x3C2170u;
label_3c2170:
    // 0x3c2170: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x3c2170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_3c2174:
    // 0x3c2174: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c2174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c2178:
    // 0x3c2178: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3c2178u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c217c:
    // 0x3c217c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3c217cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3c2180:
    // 0x3c2180: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3c2180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c2184:
    // 0x3c2184: 0xc0772d4  jal         func_1DCB50
label_3c2188:
    if (ctx->pc == 0x3C2188u) {
        ctx->pc = 0x3C2188u;
            // 0x3c2188: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x3C218Cu;
        goto label_3c218c;
    }
    ctx->pc = 0x3C2184u;
    SET_GPR_U32(ctx, 31, 0x3C218Cu);
    ctx->pc = 0x3C2188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2184u;
            // 0x3c2188: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCB50u;
    if (runtime->hasFunction(0x1DCB50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C218Cu; }
        if (ctx->pc != 0x3C218Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCB50_0x1dcb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C218Cu; }
        if (ctx->pc != 0x3C218Cu) { return; }
    }
    ctx->pc = 0x3C218Cu;
label_3c218c:
    // 0x3c218c: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x3c218cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_3c2190:
    // 0x3c2190: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3c2190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c2194:
    // 0x3c2194: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c2194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c2198:
    // 0x3c2198: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3c2198u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3c219c:
    // 0x3c219c: 0x320f809  jalr        $t9
label_3c21a0:
    if (ctx->pc == 0x3C21A0u) {
        ctx->pc = 0x3C21A0u;
            // 0x3c21a0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C21A4u;
        goto label_3c21a4;
    }
    ctx->pc = 0x3C219Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C21A4u);
        ctx->pc = 0x3C21A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C219Cu;
            // 0x3c21a0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C21A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C21A4u; }
            if (ctx->pc != 0x3C21A4u) { return; }
        }
        }
    }
    ctx->pc = 0x3C21A4u;
label_3c21a4:
    // 0x3c21a4: 0xc07724c  jal         func_1DC930
label_3c21a8:
    if (ctx->pc == 0x3C21A8u) {
        ctx->pc = 0x3C21A8u;
            // 0x3c21a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C21ACu;
        goto label_3c21ac;
    }
    ctx->pc = 0x3C21A4u;
    SET_GPR_U32(ctx, 31, 0x3C21ACu);
    ctx->pc = 0x3C21A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C21A4u;
            // 0x3c21a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC930u;
    if (runtime->hasFunction(0x1DC930u)) {
        auto targetFn = runtime->lookupFunction(0x1DC930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C21ACu; }
        if (ctx->pc != 0x3C21ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC930_0x1dc930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C21ACu; }
        if (ctx->pc != 0x3C21ACu) { return; }
    }
    ctx->pc = 0x3C21ACu;
label_3c21ac:
    // 0x3c21ac: 0xc0783b8  jal         func_1E0EE0
label_3c21b0:
    if (ctx->pc == 0x3C21B0u) {
        ctx->pc = 0x3C21B0u;
            // 0x3c21b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C21B4u;
        goto label_3c21b4;
    }
    ctx->pc = 0x3C21ACu;
    SET_GPR_U32(ctx, 31, 0x3C21B4u);
    ctx->pc = 0x3C21B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C21ACu;
            // 0x3c21b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0EE0u;
    if (runtime->hasFunction(0x1E0EE0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C21B4u; }
        if (ctx->pc != 0x3C21B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0EE0_0x1e0ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C21B4u; }
        if (ctx->pc != 0x3C21B4u) { return; }
    }
    ctx->pc = 0x3C21B4u;
label_3c21b4:
    // 0x3c21b4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3c21b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c21b8:
    // 0x3c21b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c21b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c21bc:
    // 0x3c21bc: 0x0  nop
    ctx->pc = 0x3c21bcu;
    // NOP
label_3c21c0:
    // 0x3c21c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3c21c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3c21c4:
    // 0x3c21c4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3c21c4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c21c8:
    // 0x3c21c8: 0x4503000f  bc1tl       . + 4 + (0xF << 2)
label_3c21cc:
    if (ctx->pc == 0x3C21CCu) {
        ctx->pc = 0x3C21CCu;
            // 0x3c21cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C21D0u;
        goto label_3c21d0;
    }
    ctx->pc = 0x3C21C8u;
    {
        const bool branch_taken_0x3c21c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c21c8) {
            ctx->pc = 0x3C21CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C21C8u;
            // 0x3c21cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C2208u;
            goto label_3c2208;
        }
    }
    ctx->pc = 0x3C21D0u;
label_3c21d0:
    // 0x3c21d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c21d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c21d4:
    // 0x3c21d4: 0xc07724c  jal         func_1DC930
label_3c21d8:
    if (ctx->pc == 0x3C21D8u) {
        ctx->pc = 0x3C21D8u;
            // 0x3c21d8: 0x241304fa  addiu       $s3, $zero, 0x4FA (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1274));
        ctx->pc = 0x3C21DCu;
        goto label_3c21dc;
    }
    ctx->pc = 0x3C21D4u;
    SET_GPR_U32(ctx, 31, 0x3C21DCu);
    ctx->pc = 0x3C21D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C21D4u;
            // 0x3c21d8: 0x241304fa  addiu       $s3, $zero, 0x4FA (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1274));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC930u;
    if (runtime->hasFunction(0x1DC930u)) {
        auto targetFn = runtime->lookupFunction(0x1DC930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C21DCu; }
        if (ctx->pc != 0x3C21DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC930_0x1dc930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C21DCu; }
        if (ctx->pc != 0x3C21DCu) { return; }
    }
    ctx->pc = 0x3C21DCu;
label_3c21dc:
    // 0x3c21dc: 0xc0783b4  jal         func_1E0ED0
label_3c21e0:
    if (ctx->pc == 0x3C21E0u) {
        ctx->pc = 0x3C21E0u;
            // 0x3c21e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C21E4u;
        goto label_3c21e4;
    }
    ctx->pc = 0x3C21DCu;
    SET_GPR_U32(ctx, 31, 0x3C21E4u);
    ctx->pc = 0x3C21E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C21DCu;
            // 0x3c21e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0ED0u;
    if (runtime->hasFunction(0x1E0ED0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C21E4u; }
        if (ctx->pc != 0x3C21E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0ED0_0x1e0ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C21E4u; }
        if (ctx->pc != 0x3C21E4u) { return; }
    }
    ctx->pc = 0x3C21E4u;
label_3c21e4:
    // 0x3c21e4: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x3c21e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
label_3c21e8:
    // 0x3c21e8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3c21e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_3c21ec:
    // 0x3c21ec: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x3c21ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3c21f0:
    // 0x3c21f0: 0xc07724c  jal         func_1DC930
label_3c21f4:
    if (ctx->pc == 0x3C21F4u) {
        ctx->pc = 0x3C21F4u;
            // 0x3c21f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C21F8u;
        goto label_3c21f8;
    }
    ctx->pc = 0x3C21F0u;
    SET_GPR_U32(ctx, 31, 0x3C21F8u);
    ctx->pc = 0x3C21F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C21F0u;
            // 0x3c21f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC930u;
    if (runtime->hasFunction(0x1DC930u)) {
        auto targetFn = runtime->lookupFunction(0x1DC930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C21F8u; }
        if (ctx->pc != 0x3C21F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC930_0x1dc930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C21F8u; }
        if (ctx->pc != 0x3C21F8u) { return; }
    }
    ctx->pc = 0x3C21F8u;
label_3c21f8:
    // 0x3c21f8: 0xc0f08ec  jal         func_3C23B0
label_3c21fc:
    if (ctx->pc == 0x3C21FCu) {
        ctx->pc = 0x3C21FCu;
            // 0x3c21fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C2200u;
        goto label_3c2200;
    }
    ctx->pc = 0x3C21F8u;
    SET_GPR_U32(ctx, 31, 0x3C2200u);
    ctx->pc = 0x3C21FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C21F8u;
            // 0x3c21fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C23B0u;
    if (runtime->hasFunction(0x3C23B0u)) {
        auto targetFn = runtime->lookupFunction(0x3C23B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2200u; }
        if (ctx->pc != 0x3C2200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C23B0_0x3c23b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2200u; }
        if (ctx->pc != 0x3C2200u) { return; }
    }
    ctx->pc = 0x3C2200u;
label_3c2200:
    // 0x3c2200: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x3c2200u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_3c2204:
    // 0x3c2204: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c2204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c2208:
    // 0x3c2208: 0xc07724c  jal         func_1DC930
label_3c220c:
    if (ctx->pc == 0x3C220Cu) {
        ctx->pc = 0x3C2210u;
        goto label_3c2210;
    }
    ctx->pc = 0x3C2208u;
    SET_GPR_U32(ctx, 31, 0x3C2210u);
    ctx->pc = 0x1DC930u;
    if (runtime->hasFunction(0x1DC930u)) {
        auto targetFn = runtime->lookupFunction(0x1DC930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2210u; }
        if (ctx->pc != 0x3C2210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC930_0x1dc930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2210u; }
        if (ctx->pc != 0x3C2210u) { return; }
    }
    ctx->pc = 0x3C2210u;
label_3c2210:
    // 0x3c2210: 0xc0783b8  jal         func_1E0EE0
label_3c2214:
    if (ctx->pc == 0x3C2214u) {
        ctx->pc = 0x3C2214u;
            // 0x3c2214: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C2218u;
        goto label_3c2218;
    }
    ctx->pc = 0x3C2210u;
    SET_GPR_U32(ctx, 31, 0x3C2218u);
    ctx->pc = 0x3C2214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2210u;
            // 0x3c2214: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0EE0u;
    if (runtime->hasFunction(0x1E0EE0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2218u; }
        if (ctx->pc != 0x3C2218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0EE0_0x1e0ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2218u; }
        if (ctx->pc != 0x3C2218u) { return; }
    }
    ctx->pc = 0x3C2218u;
label_3c2218:
    // 0x3c2218: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x3c2218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c221c:
    // 0x3c221c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c221cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c2220:
    // 0x3c2220: 0x0  nop
    ctx->pc = 0x3c2220u;
    // NOP
label_3c2224:
    // 0x3c2224: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3c2224u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3c2228:
    // 0x3c2228: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3c2228u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c222c:
    // 0x3c222c: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
label_3c2230:
    if (ctx->pc == 0x3C2230u) {
        ctx->pc = 0x3C2230u;
            // 0x3c2230: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C2234u;
        goto label_3c2234;
    }
    ctx->pc = 0x3C222Cu;
    {
        const bool branch_taken_0x3c222c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c222c) {
            ctx->pc = 0x3C2230u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C222Cu;
            // 0x3c2230: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C2250u;
            goto label_3c2250;
        }
    }
    ctx->pc = 0x3C2234u;
label_3c2234:
    // 0x3c2234: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c2234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c2238:
    // 0x3c2238: 0xc07724c  jal         func_1DC930
label_3c223c:
    if (ctx->pc == 0x3C223Cu) {
        ctx->pc = 0x3C223Cu;
            // 0x3c223c: 0x241304fa  addiu       $s3, $zero, 0x4FA (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1274));
        ctx->pc = 0x3C2240u;
        goto label_3c2240;
    }
    ctx->pc = 0x3C2238u;
    SET_GPR_U32(ctx, 31, 0x3C2240u);
    ctx->pc = 0x3C223Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2238u;
            // 0x3c223c: 0x241304fa  addiu       $s3, $zero, 0x4FA (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1274));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC930u;
    if (runtime->hasFunction(0x1DC930u)) {
        auto targetFn = runtime->lookupFunction(0x1DC930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2240u; }
        if (ctx->pc != 0x3C2240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC930_0x1dc930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2240u; }
        if (ctx->pc != 0x3C2240u) { return; }
    }
    ctx->pc = 0x3C2240u;
label_3c2240:
    // 0x3c2240: 0xc0783b4  jal         func_1E0ED0
label_3c2244:
    if (ctx->pc == 0x3C2244u) {
        ctx->pc = 0x3C2244u;
            // 0x3c2244: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C2248u;
        goto label_3c2248;
    }
    ctx->pc = 0x3C2240u;
    SET_GPR_U32(ctx, 31, 0x3C2248u);
    ctx->pc = 0x3C2244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2240u;
            // 0x3c2244: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0ED0u;
    if (runtime->hasFunction(0x1E0ED0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2248u; }
        if (ctx->pc != 0x3C2248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0ED0_0x1e0ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2248u; }
        if (ctx->pc != 0x3C2248u) { return; }
    }
    ctx->pc = 0x3C2248u;
label_3c2248:
    // 0x3c2248: 0xac530008  sw          $s3, 0x8($v0)
    ctx->pc = 0x3c2248u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 19));
label_3c224c:
    // 0x3c224c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c224cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c2250:
    // 0x3c2250: 0xc0efdd8  jal         func_3BF760
label_3c2254:
    if (ctx->pc == 0x3C2254u) {
        ctx->pc = 0x3C2254u;
            // 0x3c2254: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3C2258u;
        goto label_3c2258;
    }
    ctx->pc = 0x3C2250u;
    SET_GPR_U32(ctx, 31, 0x3C2258u);
    ctx->pc = 0x3C2254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2250u;
            // 0x3c2254: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF760u;
    if (runtime->hasFunction(0x3BF760u)) {
        auto targetFn = runtime->lookupFunction(0x3BF760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2258u; }
        if (ctx->pc != 0x3C2258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF760_0x3bf760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2258u; }
        if (ctx->pc != 0x3C2258u) { return; }
    }
    ctx->pc = 0x3C2258u;
label_3c2258:
    // 0x3c2258: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c2258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c225c:
    // 0x3c225c: 0xc0772f0  jal         func_1DCBC0
label_3c2260:
    if (ctx->pc == 0x3C2260u) {
        ctx->pc = 0x3C2264u;
        goto label_3c2264;
    }
    ctx->pc = 0x3C225Cu;
    SET_GPR_U32(ctx, 31, 0x3C2264u);
    ctx->pc = 0x1DCBC0u;
    if (runtime->hasFunction(0x1DCBC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2264u; }
        if (ctx->pc != 0x3C2264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCBC0_0x1dcbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2264u; }
        if (ctx->pc != 0x3C2264u) { return; }
    }
    ctx->pc = 0x3C2264u;
label_3c2264:
    // 0x3c2264: 0xc0be258  jal         func_2F8960
label_3c2268:
    if (ctx->pc == 0x3C2268u) {
        ctx->pc = 0x3C2268u;
            // 0x3c2268: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C226Cu;
        goto label_3c226c;
    }
    ctx->pc = 0x3C2264u;
    SET_GPR_U32(ctx, 31, 0x3C226Cu);
    ctx->pc = 0x3C2268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2264u;
            // 0x3c2268: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F8960u;
    if (runtime->hasFunction(0x2F8960u)) {
        auto targetFn = runtime->lookupFunction(0x2F8960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C226Cu; }
        if (ctx->pc != 0x3C226Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F8960_0x2f8960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C226Cu; }
        if (ctx->pc != 0x3C226Cu) { return; }
    }
    ctx->pc = 0x3C226Cu;
label_3c226c:
    // 0x3c226c: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x3c226cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3c2270:
    // 0x3c2270: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x3c2270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
label_3c2274:
    // 0x3c2274: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3c2274u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c2278:
    // 0x3c2278: 0x8f390068  lw          $t9, 0x68($t9)
    ctx->pc = 0x3c2278u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 104)));
label_3c227c:
    // 0x3c227c: 0x320f809  jalr        $t9
label_3c2280:
    if (ctx->pc == 0x3C2280u) {
        ctx->pc = 0x3C2280u;
            // 0x3c2280: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C2284u;
        goto label_3c2284;
    }
    ctx->pc = 0x3C227Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C2284u);
        ctx->pc = 0x3C2280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C227Cu;
            // 0x3c2280: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C2284u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C2284u; }
            if (ctx->pc != 0x3C2284u) { return; }
        }
        }
    }
    ctx->pc = 0x3C2284u;
label_3c2284:
    // 0x3c2284: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c2284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c2288:
    // 0x3c2288: 0xc0efdd8  jal         func_3BF760
label_3c228c:
    if (ctx->pc == 0x3C228Cu) {
        ctx->pc = 0x3C228Cu;
            // 0x3c228c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3C2290u;
        goto label_3c2290;
    }
    ctx->pc = 0x3C2288u;
    SET_GPR_U32(ctx, 31, 0x3C2290u);
    ctx->pc = 0x3C228Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2288u;
            // 0x3c228c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF760u;
    if (runtime->hasFunction(0x3BF760u)) {
        auto targetFn = runtime->lookupFunction(0x3BF760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2290u; }
        if (ctx->pc != 0x3C2290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF760_0x3bf760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2290u; }
        if (ctx->pc != 0x3C2290u) { return; }
    }
    ctx->pc = 0x3C2290u;
label_3c2290:
    // 0x3c2290: 0xc0c1560  jal         func_305580
label_3c2294:
    if (ctx->pc == 0x3C2294u) {
        ctx->pc = 0x3C2294u;
            // 0x3c2294: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C2298u;
        goto label_3c2298;
    }
    ctx->pc = 0x3C2290u;
    SET_GPR_U32(ctx, 31, 0x3C2298u);
    ctx->pc = 0x3C2294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2290u;
            // 0x3c2294: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305580u;
    if (runtime->hasFunction(0x305580u)) {
        auto targetFn = runtime->lookupFunction(0x305580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2298u; }
        if (ctx->pc != 0x3C2298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305580_0x305580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2298u; }
        if (ctx->pc != 0x3C2298u) { return; }
    }
    ctx->pc = 0x3C2298u;
label_3c2298:
    // 0x3c2298: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x3c2298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_3c229c:
    // 0x3c229c: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x3c229cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
label_3c22a0:
    // 0x3c22a0: 0xc4401360  lwc1        $f0, 0x1360($v0)
    ctx->pc = 0x3c22a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c22a4:
    // 0x3c22a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c22a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c22a8:
    // 0x3c22a8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3c22a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c22ac:
    // 0x3c22ac: 0xc0c1540  jal         func_305500
label_3c22b0:
    if (ctx->pc == 0x3C22B0u) {
        ctx->pc = 0x3C22B0u;
            // 0x3c22b0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3C22B4u;
        goto label_3c22b4;
    }
    ctx->pc = 0x3C22ACu;
    SET_GPR_U32(ctx, 31, 0x3C22B4u);
    ctx->pc = 0x3C22B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C22ACu;
            // 0x3c22b0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x305500u;
    if (runtime->hasFunction(0x305500u)) {
        auto targetFn = runtime->lookupFunction(0x305500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C22B4u; }
        if (ctx->pc != 0x3C22B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305500_0x305500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C22B4u; }
        if (ctx->pc != 0x3C22B4u) { return; }
    }
    ctx->pc = 0x3C22B4u;
label_3c22b4:
    // 0x3c22b4: 0xc077588  jal         func_1DD620
label_3c22b8:
    if (ctx->pc == 0x3C22B8u) {
        ctx->pc = 0x3C22B8u;
            // 0x3c22b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C22BCu;
        goto label_3c22bc;
    }
    ctx->pc = 0x3C22B4u;
    SET_GPR_U32(ctx, 31, 0x3C22BCu);
    ctx->pc = 0x3C22B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C22B4u;
            // 0x3c22b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD620u;
    if (runtime->hasFunction(0x1DD620u)) {
        auto targetFn = runtime->lookupFunction(0x1DD620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C22BCu; }
        if (ctx->pc != 0x3C22BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD620_0x1dd620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C22BCu; }
        if (ctx->pc != 0x3C22BCu) { return; }
    }
    ctx->pc = 0x3C22BCu;
label_3c22bc:
    // 0x3c22bc: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x3c22bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3c22c0:
    // 0x3c22c0: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
label_3c22c4:
    if (ctx->pc == 0x3C22C4u) {
        ctx->pc = 0x3C22C8u;
        goto label_3c22c8;
    }
    ctx->pc = 0x3C22C0u;
    {
        const bool branch_taken_0x3c22c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c22c0) {
            ctx->pc = 0x3C2364u;
            goto label_3c2364;
        }
    }
    ctx->pc = 0x3C22C8u;
label_3c22c8:
    // 0x3c22c8: 0xc0f08e4  jal         func_3C2390
label_3c22cc:
    if (ctx->pc == 0x3C22CCu) {
        ctx->pc = 0x3C22CCu;
            // 0x3c22cc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3C22D0u;
        goto label_3c22d0;
    }
    ctx->pc = 0x3C22C8u;
    SET_GPR_U32(ctx, 31, 0x3C22D0u);
    ctx->pc = 0x3C22CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C22C8u;
            // 0x3c22cc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C2390u;
    if (runtime->hasFunction(0x3C2390u)) {
        auto targetFn = runtime->lookupFunction(0x3C2390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C22D0u; }
        if (ctx->pc != 0x3C22D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C2390_0x3c2390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C22D0u; }
        if (ctx->pc != 0x3C22D0u) { return; }
    }
    ctx->pc = 0x3C22D0u;
label_3c22d0:
    // 0x3c22d0: 0xc0772dc  jal         func_1DCB70
label_3c22d4:
    if (ctx->pc == 0x3C22D4u) {
        ctx->pc = 0x3C22D4u;
            // 0x3c22d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C22D8u;
        goto label_3c22d8;
    }
    ctx->pc = 0x3C22D0u;
    SET_GPR_U32(ctx, 31, 0x3C22D8u);
    ctx->pc = 0x3C22D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C22D0u;
            // 0x3c22d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCB70u;
    if (runtime->hasFunction(0x1DCB70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C22D8u; }
        if (ctx->pc != 0x3C22D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCB70_0x1dcb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C22D8u; }
        if (ctx->pc != 0x3C22D8u) { return; }
    }
    ctx->pc = 0x3C22D8u;
label_3c22d8:
    // 0x3c22d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3c22d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3c22dc:
    // 0x3c22dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c22dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c22e0:
    // 0x3c22e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3c22e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c22e4:
    // 0x3c22e4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3c22e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3c22e8:
    // 0x3c22e8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3c22e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c22ec:
    // 0x3c22ec: 0xc0772d4  jal         func_1DCB50
label_3c22f0:
    if (ctx->pc == 0x3C22F0u) {
        ctx->pc = 0x3C22F0u;
            // 0x3c22f0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x3C22F4u;
        goto label_3c22f4;
    }
    ctx->pc = 0x3C22ECu;
    SET_GPR_U32(ctx, 31, 0x3C22F4u);
    ctx->pc = 0x3C22F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C22ECu;
            // 0x3c22f0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCB50u;
    if (runtime->hasFunction(0x1DCB50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C22F4u; }
        if (ctx->pc != 0x3C22F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCB50_0x1dcb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C22F4u; }
        if (ctx->pc != 0x3C22F4u) { return; }
    }
    ctx->pc = 0x3C22F4u;
label_3c22f4:
    // 0x3c22f4: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x3c22f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_3c22f8:
    // 0x3c22f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c22f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c22fc:
    // 0x3c22fc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3c22fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c2300:
    // 0x3c2300: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3c2300u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3c2304:
    // 0x3c2304: 0x320f809  jalr        $t9
label_3c2308:
    if (ctx->pc == 0x3C2308u) {
        ctx->pc = 0x3C2308u;
            // 0x3c2308: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x3C230Cu;
        goto label_3c230c;
    }
    ctx->pc = 0x3C2304u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C230Cu);
        ctx->pc = 0x3C2308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2304u;
            // 0x3c2308: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C230Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C230Cu; }
            if (ctx->pc != 0x3C230Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3C230Cu;
label_3c230c:
    // 0x3c230c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3c230cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c2310:
    // 0x3c2310: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c2310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c2314:
    // 0x3c2314: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x3c2314u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_3c2318:
    // 0x3c2318: 0x320f809  jalr        $t9
label_3c231c:
    if (ctx->pc == 0x3C231Cu) {
        ctx->pc = 0x3C231Cu;
            // 0x3c231c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x3C2320u;
        goto label_3c2320;
    }
    ctx->pc = 0x3C2318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C2320u);
        ctx->pc = 0x3C231Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2318u;
            // 0x3c231c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C2320u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C2320u; }
            if (ctx->pc != 0x3C2320u) { return; }
        }
        }
    }
    ctx->pc = 0x3C2320u;
label_3c2320:
    // 0x3c2320: 0xc0c1590  jal         func_305640
label_3c2324:
    if (ctx->pc == 0x3C2324u) {
        ctx->pc = 0x3C2324u;
            // 0x3c2324: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C2328u;
        goto label_3c2328;
    }
    ctx->pc = 0x3C2320u;
    SET_GPR_U32(ctx, 31, 0x3C2328u);
    ctx->pc = 0x3C2324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2320u;
            // 0x3c2324: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305640u;
    if (runtime->hasFunction(0x305640u)) {
        auto targetFn = runtime->lookupFunction(0x305640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2328u; }
        if (ctx->pc != 0x3C2328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305640_0x305640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2328u; }
        if (ctx->pc != 0x3C2328u) { return; }
    }
    ctx->pc = 0x3C2328u;
label_3c2328:
    // 0x3c2328: 0xc07731c  jal         func_1DCC70
label_3c232c:
    if (ctx->pc == 0x3C232Cu) {
        ctx->pc = 0x3C232Cu;
            // 0x3c232c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C2330u;
        goto label_3c2330;
    }
    ctx->pc = 0x3C2328u;
    SET_GPR_U32(ctx, 31, 0x3C2330u);
    ctx->pc = 0x3C232Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2328u;
            // 0x3c232c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC70u;
    if (runtime->hasFunction(0x1DCC70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2330u; }
        if (ctx->pc != 0x3C2330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC70_0x1dcc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2330u; }
        if (ctx->pc != 0x3C2330u) { return; }
    }
    ctx->pc = 0x3C2330u;
label_3c2330:
    // 0x3c2330: 0x8c590030  lw          $t9, 0x30($v0)
    ctx->pc = 0x3c2330u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_3c2334:
    // 0x3c2334: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c2334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c2338:
    // 0x3c2338: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3c2338u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3c233c:
    // 0x3c233c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3c233cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_3c2340:
    // 0x3c2340: 0x320f809  jalr        $t9
label_3c2344:
    if (ctx->pc == 0x3C2344u) {
        ctx->pc = 0x3C2344u;
            // 0x3c2344: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x3C2348u;
        goto label_3c2348;
    }
    ctx->pc = 0x3C2340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C2348u);
        ctx->pc = 0x3C2344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2340u;
            // 0x3c2344: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C2348u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C2348u; }
            if (ctx->pc != 0x3C2348u) { return; }
        }
        }
    }
    ctx->pc = 0x3C2348u;
label_3c2348:
    // 0x3c2348: 0xc07731c  jal         func_1DCC70
label_3c234c:
    if (ctx->pc == 0x3C234Cu) {
        ctx->pc = 0x3C234Cu;
            // 0x3c234c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C2350u;
        goto label_3c2350;
    }
    ctx->pc = 0x3C2348u;
    SET_GPR_U32(ctx, 31, 0x3C2350u);
    ctx->pc = 0x3C234Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2348u;
            // 0x3c234c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC70u;
    if (runtime->hasFunction(0x1DCC70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2350u; }
        if (ctx->pc != 0x3C2350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC70_0x1dcc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2350u; }
        if (ctx->pc != 0x3C2350u) { return; }
    }
    ctx->pc = 0x3C2350u;
label_3c2350:
    // 0x3c2350: 0x8c590030  lw          $t9, 0x30($v0)
    ctx->pc = 0x3c2350u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_3c2354:
    // 0x3c2354: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c2354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c2358:
    // 0x3c2358: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3c2358u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3c235c:
    // 0x3c235c: 0x320f809  jalr        $t9
label_3c2360:
    if (ctx->pc == 0x3C2360u) {
        ctx->pc = 0x3C2360u;
            // 0x3c2360: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3C2364u;
        goto label_3c2364;
    }
    ctx->pc = 0x3C235Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C2364u);
        ctx->pc = 0x3C2360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C235Cu;
            // 0x3c2360: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C2364u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C2364u; }
            if (ctx->pc != 0x3C2364u) { return; }
        }
        }
    }
    ctx->pc = 0x3C2364u;
label_3c2364:
    // 0x3c2364: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3c2364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3c2368:
    // 0x3c2368: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3c2368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3c236c:
    // 0x3c236c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3c236cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c2370:
    // 0x3c2370: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3c2370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3c2374:
    // 0x3c2374: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3c2374u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c2378:
    // 0x3c2378: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3c2378u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c237c:
    // 0x3c237c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3c237cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c2380:
    // 0x3c2380: 0x3e00008  jr          $ra
label_3c2384:
    if (ctx->pc == 0x3C2384u) {
        ctx->pc = 0x3C2384u;
            // 0x3c2384: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3C2388u;
        goto label_3c2388;
    }
    ctx->pc = 0x3C2380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C2384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2380u;
            // 0x3c2384: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C2388u;
label_3c2388:
    // 0x3c2388: 0x0  nop
    ctx->pc = 0x3c2388u;
    // NOP
label_3c238c:
    // 0x3c238c: 0x0  nop
    ctx->pc = 0x3c238cu;
    // NOP
}
