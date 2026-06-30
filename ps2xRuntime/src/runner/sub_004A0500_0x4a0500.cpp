#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A0500
// Address: 0x4a0500 - 0x4a0bf0
void sub_004A0500_0x4a0500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A0500_0x4a0500");
#endif

    switch (ctx->pc) {
        case 0x4a0500u: goto label_4a0500;
        case 0x4a0504u: goto label_4a0504;
        case 0x4a0508u: goto label_4a0508;
        case 0x4a050cu: goto label_4a050c;
        case 0x4a0510u: goto label_4a0510;
        case 0x4a0514u: goto label_4a0514;
        case 0x4a0518u: goto label_4a0518;
        case 0x4a051cu: goto label_4a051c;
        case 0x4a0520u: goto label_4a0520;
        case 0x4a0524u: goto label_4a0524;
        case 0x4a0528u: goto label_4a0528;
        case 0x4a052cu: goto label_4a052c;
        case 0x4a0530u: goto label_4a0530;
        case 0x4a0534u: goto label_4a0534;
        case 0x4a0538u: goto label_4a0538;
        case 0x4a053cu: goto label_4a053c;
        case 0x4a0540u: goto label_4a0540;
        case 0x4a0544u: goto label_4a0544;
        case 0x4a0548u: goto label_4a0548;
        case 0x4a054cu: goto label_4a054c;
        case 0x4a0550u: goto label_4a0550;
        case 0x4a0554u: goto label_4a0554;
        case 0x4a0558u: goto label_4a0558;
        case 0x4a055cu: goto label_4a055c;
        case 0x4a0560u: goto label_4a0560;
        case 0x4a0564u: goto label_4a0564;
        case 0x4a0568u: goto label_4a0568;
        case 0x4a056cu: goto label_4a056c;
        case 0x4a0570u: goto label_4a0570;
        case 0x4a0574u: goto label_4a0574;
        case 0x4a0578u: goto label_4a0578;
        case 0x4a057cu: goto label_4a057c;
        case 0x4a0580u: goto label_4a0580;
        case 0x4a0584u: goto label_4a0584;
        case 0x4a0588u: goto label_4a0588;
        case 0x4a058cu: goto label_4a058c;
        case 0x4a0590u: goto label_4a0590;
        case 0x4a0594u: goto label_4a0594;
        case 0x4a0598u: goto label_4a0598;
        case 0x4a059cu: goto label_4a059c;
        case 0x4a05a0u: goto label_4a05a0;
        case 0x4a05a4u: goto label_4a05a4;
        case 0x4a05a8u: goto label_4a05a8;
        case 0x4a05acu: goto label_4a05ac;
        case 0x4a05b0u: goto label_4a05b0;
        case 0x4a05b4u: goto label_4a05b4;
        case 0x4a05b8u: goto label_4a05b8;
        case 0x4a05bcu: goto label_4a05bc;
        case 0x4a05c0u: goto label_4a05c0;
        case 0x4a05c4u: goto label_4a05c4;
        case 0x4a05c8u: goto label_4a05c8;
        case 0x4a05ccu: goto label_4a05cc;
        case 0x4a05d0u: goto label_4a05d0;
        case 0x4a05d4u: goto label_4a05d4;
        case 0x4a05d8u: goto label_4a05d8;
        case 0x4a05dcu: goto label_4a05dc;
        case 0x4a05e0u: goto label_4a05e0;
        case 0x4a05e4u: goto label_4a05e4;
        case 0x4a05e8u: goto label_4a05e8;
        case 0x4a05ecu: goto label_4a05ec;
        case 0x4a05f0u: goto label_4a05f0;
        case 0x4a05f4u: goto label_4a05f4;
        case 0x4a05f8u: goto label_4a05f8;
        case 0x4a05fcu: goto label_4a05fc;
        case 0x4a0600u: goto label_4a0600;
        case 0x4a0604u: goto label_4a0604;
        case 0x4a0608u: goto label_4a0608;
        case 0x4a060cu: goto label_4a060c;
        case 0x4a0610u: goto label_4a0610;
        case 0x4a0614u: goto label_4a0614;
        case 0x4a0618u: goto label_4a0618;
        case 0x4a061cu: goto label_4a061c;
        case 0x4a0620u: goto label_4a0620;
        case 0x4a0624u: goto label_4a0624;
        case 0x4a0628u: goto label_4a0628;
        case 0x4a062cu: goto label_4a062c;
        case 0x4a0630u: goto label_4a0630;
        case 0x4a0634u: goto label_4a0634;
        case 0x4a0638u: goto label_4a0638;
        case 0x4a063cu: goto label_4a063c;
        case 0x4a0640u: goto label_4a0640;
        case 0x4a0644u: goto label_4a0644;
        case 0x4a0648u: goto label_4a0648;
        case 0x4a064cu: goto label_4a064c;
        case 0x4a0650u: goto label_4a0650;
        case 0x4a0654u: goto label_4a0654;
        case 0x4a0658u: goto label_4a0658;
        case 0x4a065cu: goto label_4a065c;
        case 0x4a0660u: goto label_4a0660;
        case 0x4a0664u: goto label_4a0664;
        case 0x4a0668u: goto label_4a0668;
        case 0x4a066cu: goto label_4a066c;
        case 0x4a0670u: goto label_4a0670;
        case 0x4a0674u: goto label_4a0674;
        case 0x4a0678u: goto label_4a0678;
        case 0x4a067cu: goto label_4a067c;
        case 0x4a0680u: goto label_4a0680;
        case 0x4a0684u: goto label_4a0684;
        case 0x4a0688u: goto label_4a0688;
        case 0x4a068cu: goto label_4a068c;
        case 0x4a0690u: goto label_4a0690;
        case 0x4a0694u: goto label_4a0694;
        case 0x4a0698u: goto label_4a0698;
        case 0x4a069cu: goto label_4a069c;
        case 0x4a06a0u: goto label_4a06a0;
        case 0x4a06a4u: goto label_4a06a4;
        case 0x4a06a8u: goto label_4a06a8;
        case 0x4a06acu: goto label_4a06ac;
        case 0x4a06b0u: goto label_4a06b0;
        case 0x4a06b4u: goto label_4a06b4;
        case 0x4a06b8u: goto label_4a06b8;
        case 0x4a06bcu: goto label_4a06bc;
        case 0x4a06c0u: goto label_4a06c0;
        case 0x4a06c4u: goto label_4a06c4;
        case 0x4a06c8u: goto label_4a06c8;
        case 0x4a06ccu: goto label_4a06cc;
        case 0x4a06d0u: goto label_4a06d0;
        case 0x4a06d4u: goto label_4a06d4;
        case 0x4a06d8u: goto label_4a06d8;
        case 0x4a06dcu: goto label_4a06dc;
        case 0x4a06e0u: goto label_4a06e0;
        case 0x4a06e4u: goto label_4a06e4;
        case 0x4a06e8u: goto label_4a06e8;
        case 0x4a06ecu: goto label_4a06ec;
        case 0x4a06f0u: goto label_4a06f0;
        case 0x4a06f4u: goto label_4a06f4;
        case 0x4a06f8u: goto label_4a06f8;
        case 0x4a06fcu: goto label_4a06fc;
        case 0x4a0700u: goto label_4a0700;
        case 0x4a0704u: goto label_4a0704;
        case 0x4a0708u: goto label_4a0708;
        case 0x4a070cu: goto label_4a070c;
        case 0x4a0710u: goto label_4a0710;
        case 0x4a0714u: goto label_4a0714;
        case 0x4a0718u: goto label_4a0718;
        case 0x4a071cu: goto label_4a071c;
        case 0x4a0720u: goto label_4a0720;
        case 0x4a0724u: goto label_4a0724;
        case 0x4a0728u: goto label_4a0728;
        case 0x4a072cu: goto label_4a072c;
        case 0x4a0730u: goto label_4a0730;
        case 0x4a0734u: goto label_4a0734;
        case 0x4a0738u: goto label_4a0738;
        case 0x4a073cu: goto label_4a073c;
        case 0x4a0740u: goto label_4a0740;
        case 0x4a0744u: goto label_4a0744;
        case 0x4a0748u: goto label_4a0748;
        case 0x4a074cu: goto label_4a074c;
        case 0x4a0750u: goto label_4a0750;
        case 0x4a0754u: goto label_4a0754;
        case 0x4a0758u: goto label_4a0758;
        case 0x4a075cu: goto label_4a075c;
        case 0x4a0760u: goto label_4a0760;
        case 0x4a0764u: goto label_4a0764;
        case 0x4a0768u: goto label_4a0768;
        case 0x4a076cu: goto label_4a076c;
        case 0x4a0770u: goto label_4a0770;
        case 0x4a0774u: goto label_4a0774;
        case 0x4a0778u: goto label_4a0778;
        case 0x4a077cu: goto label_4a077c;
        case 0x4a0780u: goto label_4a0780;
        case 0x4a0784u: goto label_4a0784;
        case 0x4a0788u: goto label_4a0788;
        case 0x4a078cu: goto label_4a078c;
        case 0x4a0790u: goto label_4a0790;
        case 0x4a0794u: goto label_4a0794;
        case 0x4a0798u: goto label_4a0798;
        case 0x4a079cu: goto label_4a079c;
        case 0x4a07a0u: goto label_4a07a0;
        case 0x4a07a4u: goto label_4a07a4;
        case 0x4a07a8u: goto label_4a07a8;
        case 0x4a07acu: goto label_4a07ac;
        case 0x4a07b0u: goto label_4a07b0;
        case 0x4a07b4u: goto label_4a07b4;
        case 0x4a07b8u: goto label_4a07b8;
        case 0x4a07bcu: goto label_4a07bc;
        case 0x4a07c0u: goto label_4a07c0;
        case 0x4a07c4u: goto label_4a07c4;
        case 0x4a07c8u: goto label_4a07c8;
        case 0x4a07ccu: goto label_4a07cc;
        case 0x4a07d0u: goto label_4a07d0;
        case 0x4a07d4u: goto label_4a07d4;
        case 0x4a07d8u: goto label_4a07d8;
        case 0x4a07dcu: goto label_4a07dc;
        case 0x4a07e0u: goto label_4a07e0;
        case 0x4a07e4u: goto label_4a07e4;
        case 0x4a07e8u: goto label_4a07e8;
        case 0x4a07ecu: goto label_4a07ec;
        case 0x4a07f0u: goto label_4a07f0;
        case 0x4a07f4u: goto label_4a07f4;
        case 0x4a07f8u: goto label_4a07f8;
        case 0x4a07fcu: goto label_4a07fc;
        case 0x4a0800u: goto label_4a0800;
        case 0x4a0804u: goto label_4a0804;
        case 0x4a0808u: goto label_4a0808;
        case 0x4a080cu: goto label_4a080c;
        case 0x4a0810u: goto label_4a0810;
        case 0x4a0814u: goto label_4a0814;
        case 0x4a0818u: goto label_4a0818;
        case 0x4a081cu: goto label_4a081c;
        case 0x4a0820u: goto label_4a0820;
        case 0x4a0824u: goto label_4a0824;
        case 0x4a0828u: goto label_4a0828;
        case 0x4a082cu: goto label_4a082c;
        case 0x4a0830u: goto label_4a0830;
        case 0x4a0834u: goto label_4a0834;
        case 0x4a0838u: goto label_4a0838;
        case 0x4a083cu: goto label_4a083c;
        case 0x4a0840u: goto label_4a0840;
        case 0x4a0844u: goto label_4a0844;
        case 0x4a0848u: goto label_4a0848;
        case 0x4a084cu: goto label_4a084c;
        case 0x4a0850u: goto label_4a0850;
        case 0x4a0854u: goto label_4a0854;
        case 0x4a0858u: goto label_4a0858;
        case 0x4a085cu: goto label_4a085c;
        case 0x4a0860u: goto label_4a0860;
        case 0x4a0864u: goto label_4a0864;
        case 0x4a0868u: goto label_4a0868;
        case 0x4a086cu: goto label_4a086c;
        case 0x4a0870u: goto label_4a0870;
        case 0x4a0874u: goto label_4a0874;
        case 0x4a0878u: goto label_4a0878;
        case 0x4a087cu: goto label_4a087c;
        case 0x4a0880u: goto label_4a0880;
        case 0x4a0884u: goto label_4a0884;
        case 0x4a0888u: goto label_4a0888;
        case 0x4a088cu: goto label_4a088c;
        case 0x4a0890u: goto label_4a0890;
        case 0x4a0894u: goto label_4a0894;
        case 0x4a0898u: goto label_4a0898;
        case 0x4a089cu: goto label_4a089c;
        case 0x4a08a0u: goto label_4a08a0;
        case 0x4a08a4u: goto label_4a08a4;
        case 0x4a08a8u: goto label_4a08a8;
        case 0x4a08acu: goto label_4a08ac;
        case 0x4a08b0u: goto label_4a08b0;
        case 0x4a08b4u: goto label_4a08b4;
        case 0x4a08b8u: goto label_4a08b8;
        case 0x4a08bcu: goto label_4a08bc;
        case 0x4a08c0u: goto label_4a08c0;
        case 0x4a08c4u: goto label_4a08c4;
        case 0x4a08c8u: goto label_4a08c8;
        case 0x4a08ccu: goto label_4a08cc;
        case 0x4a08d0u: goto label_4a08d0;
        case 0x4a08d4u: goto label_4a08d4;
        case 0x4a08d8u: goto label_4a08d8;
        case 0x4a08dcu: goto label_4a08dc;
        case 0x4a08e0u: goto label_4a08e0;
        case 0x4a08e4u: goto label_4a08e4;
        case 0x4a08e8u: goto label_4a08e8;
        case 0x4a08ecu: goto label_4a08ec;
        case 0x4a08f0u: goto label_4a08f0;
        case 0x4a08f4u: goto label_4a08f4;
        case 0x4a08f8u: goto label_4a08f8;
        case 0x4a08fcu: goto label_4a08fc;
        case 0x4a0900u: goto label_4a0900;
        case 0x4a0904u: goto label_4a0904;
        case 0x4a0908u: goto label_4a0908;
        case 0x4a090cu: goto label_4a090c;
        case 0x4a0910u: goto label_4a0910;
        case 0x4a0914u: goto label_4a0914;
        case 0x4a0918u: goto label_4a0918;
        case 0x4a091cu: goto label_4a091c;
        case 0x4a0920u: goto label_4a0920;
        case 0x4a0924u: goto label_4a0924;
        case 0x4a0928u: goto label_4a0928;
        case 0x4a092cu: goto label_4a092c;
        case 0x4a0930u: goto label_4a0930;
        case 0x4a0934u: goto label_4a0934;
        case 0x4a0938u: goto label_4a0938;
        case 0x4a093cu: goto label_4a093c;
        case 0x4a0940u: goto label_4a0940;
        case 0x4a0944u: goto label_4a0944;
        case 0x4a0948u: goto label_4a0948;
        case 0x4a094cu: goto label_4a094c;
        case 0x4a0950u: goto label_4a0950;
        case 0x4a0954u: goto label_4a0954;
        case 0x4a0958u: goto label_4a0958;
        case 0x4a095cu: goto label_4a095c;
        case 0x4a0960u: goto label_4a0960;
        case 0x4a0964u: goto label_4a0964;
        case 0x4a0968u: goto label_4a0968;
        case 0x4a096cu: goto label_4a096c;
        case 0x4a0970u: goto label_4a0970;
        case 0x4a0974u: goto label_4a0974;
        case 0x4a0978u: goto label_4a0978;
        case 0x4a097cu: goto label_4a097c;
        case 0x4a0980u: goto label_4a0980;
        case 0x4a0984u: goto label_4a0984;
        case 0x4a0988u: goto label_4a0988;
        case 0x4a098cu: goto label_4a098c;
        case 0x4a0990u: goto label_4a0990;
        case 0x4a0994u: goto label_4a0994;
        case 0x4a0998u: goto label_4a0998;
        case 0x4a099cu: goto label_4a099c;
        case 0x4a09a0u: goto label_4a09a0;
        case 0x4a09a4u: goto label_4a09a4;
        case 0x4a09a8u: goto label_4a09a8;
        case 0x4a09acu: goto label_4a09ac;
        case 0x4a09b0u: goto label_4a09b0;
        case 0x4a09b4u: goto label_4a09b4;
        case 0x4a09b8u: goto label_4a09b8;
        case 0x4a09bcu: goto label_4a09bc;
        case 0x4a09c0u: goto label_4a09c0;
        case 0x4a09c4u: goto label_4a09c4;
        case 0x4a09c8u: goto label_4a09c8;
        case 0x4a09ccu: goto label_4a09cc;
        case 0x4a09d0u: goto label_4a09d0;
        case 0x4a09d4u: goto label_4a09d4;
        case 0x4a09d8u: goto label_4a09d8;
        case 0x4a09dcu: goto label_4a09dc;
        case 0x4a09e0u: goto label_4a09e0;
        case 0x4a09e4u: goto label_4a09e4;
        case 0x4a09e8u: goto label_4a09e8;
        case 0x4a09ecu: goto label_4a09ec;
        case 0x4a09f0u: goto label_4a09f0;
        case 0x4a09f4u: goto label_4a09f4;
        case 0x4a09f8u: goto label_4a09f8;
        case 0x4a09fcu: goto label_4a09fc;
        case 0x4a0a00u: goto label_4a0a00;
        case 0x4a0a04u: goto label_4a0a04;
        case 0x4a0a08u: goto label_4a0a08;
        case 0x4a0a0cu: goto label_4a0a0c;
        case 0x4a0a10u: goto label_4a0a10;
        case 0x4a0a14u: goto label_4a0a14;
        case 0x4a0a18u: goto label_4a0a18;
        case 0x4a0a1cu: goto label_4a0a1c;
        case 0x4a0a20u: goto label_4a0a20;
        case 0x4a0a24u: goto label_4a0a24;
        case 0x4a0a28u: goto label_4a0a28;
        case 0x4a0a2cu: goto label_4a0a2c;
        case 0x4a0a30u: goto label_4a0a30;
        case 0x4a0a34u: goto label_4a0a34;
        case 0x4a0a38u: goto label_4a0a38;
        case 0x4a0a3cu: goto label_4a0a3c;
        case 0x4a0a40u: goto label_4a0a40;
        case 0x4a0a44u: goto label_4a0a44;
        case 0x4a0a48u: goto label_4a0a48;
        case 0x4a0a4cu: goto label_4a0a4c;
        case 0x4a0a50u: goto label_4a0a50;
        case 0x4a0a54u: goto label_4a0a54;
        case 0x4a0a58u: goto label_4a0a58;
        case 0x4a0a5cu: goto label_4a0a5c;
        case 0x4a0a60u: goto label_4a0a60;
        case 0x4a0a64u: goto label_4a0a64;
        case 0x4a0a68u: goto label_4a0a68;
        case 0x4a0a6cu: goto label_4a0a6c;
        case 0x4a0a70u: goto label_4a0a70;
        case 0x4a0a74u: goto label_4a0a74;
        case 0x4a0a78u: goto label_4a0a78;
        case 0x4a0a7cu: goto label_4a0a7c;
        case 0x4a0a80u: goto label_4a0a80;
        case 0x4a0a84u: goto label_4a0a84;
        case 0x4a0a88u: goto label_4a0a88;
        case 0x4a0a8cu: goto label_4a0a8c;
        case 0x4a0a90u: goto label_4a0a90;
        case 0x4a0a94u: goto label_4a0a94;
        case 0x4a0a98u: goto label_4a0a98;
        case 0x4a0a9cu: goto label_4a0a9c;
        case 0x4a0aa0u: goto label_4a0aa0;
        case 0x4a0aa4u: goto label_4a0aa4;
        case 0x4a0aa8u: goto label_4a0aa8;
        case 0x4a0aacu: goto label_4a0aac;
        case 0x4a0ab0u: goto label_4a0ab0;
        case 0x4a0ab4u: goto label_4a0ab4;
        case 0x4a0ab8u: goto label_4a0ab8;
        case 0x4a0abcu: goto label_4a0abc;
        case 0x4a0ac0u: goto label_4a0ac0;
        case 0x4a0ac4u: goto label_4a0ac4;
        case 0x4a0ac8u: goto label_4a0ac8;
        case 0x4a0accu: goto label_4a0acc;
        case 0x4a0ad0u: goto label_4a0ad0;
        case 0x4a0ad4u: goto label_4a0ad4;
        case 0x4a0ad8u: goto label_4a0ad8;
        case 0x4a0adcu: goto label_4a0adc;
        case 0x4a0ae0u: goto label_4a0ae0;
        case 0x4a0ae4u: goto label_4a0ae4;
        case 0x4a0ae8u: goto label_4a0ae8;
        case 0x4a0aecu: goto label_4a0aec;
        case 0x4a0af0u: goto label_4a0af0;
        case 0x4a0af4u: goto label_4a0af4;
        case 0x4a0af8u: goto label_4a0af8;
        case 0x4a0afcu: goto label_4a0afc;
        case 0x4a0b00u: goto label_4a0b00;
        case 0x4a0b04u: goto label_4a0b04;
        case 0x4a0b08u: goto label_4a0b08;
        case 0x4a0b0cu: goto label_4a0b0c;
        case 0x4a0b10u: goto label_4a0b10;
        case 0x4a0b14u: goto label_4a0b14;
        case 0x4a0b18u: goto label_4a0b18;
        case 0x4a0b1cu: goto label_4a0b1c;
        case 0x4a0b20u: goto label_4a0b20;
        case 0x4a0b24u: goto label_4a0b24;
        case 0x4a0b28u: goto label_4a0b28;
        case 0x4a0b2cu: goto label_4a0b2c;
        case 0x4a0b30u: goto label_4a0b30;
        case 0x4a0b34u: goto label_4a0b34;
        case 0x4a0b38u: goto label_4a0b38;
        case 0x4a0b3cu: goto label_4a0b3c;
        case 0x4a0b40u: goto label_4a0b40;
        case 0x4a0b44u: goto label_4a0b44;
        case 0x4a0b48u: goto label_4a0b48;
        case 0x4a0b4cu: goto label_4a0b4c;
        case 0x4a0b50u: goto label_4a0b50;
        case 0x4a0b54u: goto label_4a0b54;
        case 0x4a0b58u: goto label_4a0b58;
        case 0x4a0b5cu: goto label_4a0b5c;
        case 0x4a0b60u: goto label_4a0b60;
        case 0x4a0b64u: goto label_4a0b64;
        case 0x4a0b68u: goto label_4a0b68;
        case 0x4a0b6cu: goto label_4a0b6c;
        case 0x4a0b70u: goto label_4a0b70;
        case 0x4a0b74u: goto label_4a0b74;
        case 0x4a0b78u: goto label_4a0b78;
        case 0x4a0b7cu: goto label_4a0b7c;
        case 0x4a0b80u: goto label_4a0b80;
        case 0x4a0b84u: goto label_4a0b84;
        case 0x4a0b88u: goto label_4a0b88;
        case 0x4a0b8cu: goto label_4a0b8c;
        case 0x4a0b90u: goto label_4a0b90;
        case 0x4a0b94u: goto label_4a0b94;
        case 0x4a0b98u: goto label_4a0b98;
        case 0x4a0b9cu: goto label_4a0b9c;
        case 0x4a0ba0u: goto label_4a0ba0;
        case 0x4a0ba4u: goto label_4a0ba4;
        case 0x4a0ba8u: goto label_4a0ba8;
        case 0x4a0bacu: goto label_4a0bac;
        case 0x4a0bb0u: goto label_4a0bb0;
        case 0x4a0bb4u: goto label_4a0bb4;
        case 0x4a0bb8u: goto label_4a0bb8;
        case 0x4a0bbcu: goto label_4a0bbc;
        case 0x4a0bc0u: goto label_4a0bc0;
        case 0x4a0bc4u: goto label_4a0bc4;
        case 0x4a0bc8u: goto label_4a0bc8;
        case 0x4a0bccu: goto label_4a0bcc;
        case 0x4a0bd0u: goto label_4a0bd0;
        case 0x4a0bd4u: goto label_4a0bd4;
        case 0x4a0bd8u: goto label_4a0bd8;
        case 0x4a0bdcu: goto label_4a0bdc;
        case 0x4a0be0u: goto label_4a0be0;
        case 0x4a0be4u: goto label_4a0be4;
        case 0x4a0be8u: goto label_4a0be8;
        case 0x4a0becu: goto label_4a0bec;
        default: break;
    }

    ctx->pc = 0x4a0500u;

label_4a0500:
    // 0x4a0500: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4a0500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4a0504:
    // 0x4a0504: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4a0504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4a0508:
    // 0x4a0508: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4a0508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4a050c:
    // 0x4a050c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4a050cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4a0510:
    // 0x4a0510: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a0510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4a0514:
    // 0x4a0514: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4a0514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4a0518:
    // 0x4a0518: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x4a0518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_4a051c:
    // 0x4a051c: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
label_4a0520:
    if (ctx->pc == 0x4A0520u) {
        ctx->pc = 0x4A0520u;
            // 0x4a0520: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A0524u;
        goto label_4a0524;
    }
    ctx->pc = 0x4A051Cu;
    {
        const bool branch_taken_0x4a051c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A051Cu;
            // 0x4a0520: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a051c) {
            ctx->pc = 0x4A05F8u;
            goto label_4a05f8;
        }
    }
    ctx->pc = 0x4A0524u;
label_4a0524:
    // 0x4a0524: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4a0524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4a0528:
    // 0x4a0528: 0x8c637c28  lw          $v1, 0x7C28($v1)
    ctx->pc = 0x4a0528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31784)));
label_4a052c:
    // 0x4a052c: 0x8c670070  lw          $a3, 0x70($v1)
    ctx->pc = 0x4a052cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_4a0530:
    // 0x4a0530: 0x10e0001b  beqz        $a3, . + 4 + (0x1B << 2)
label_4a0534:
    if (ctx->pc == 0x4A0534u) {
        ctx->pc = 0x4A0538u;
        goto label_4a0538;
    }
    ctx->pc = 0x4A0530u;
    {
        const bool branch_taken_0x4a0530 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a0530) {
            ctx->pc = 0x4A05A0u;
            goto label_4a05a0;
        }
    }
    ctx->pc = 0x4A0538u;
label_4a0538:
    // 0x4a0538: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4a0538u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a053c:
    // 0x4a053c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4a053cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a0540:
    // 0x4a0540: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4a0540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a0544:
    // 0x4a0544: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4a0544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4a0548:
    // 0x4a0548: 0x8c647c28  lw          $a0, 0x7C28($v1)
    ctx->pc = 0x4a0548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31784)));
label_4a054c:
    // 0x4a054c: 0x8c840074  lw          $a0, 0x74($a0)
    ctx->pc = 0x4a054cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_4a0550:
    // 0x4a0550: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x4a0550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_4a0554:
    // 0x4a0554: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x4a0554u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4a0558:
    // 0x4a0558: 0x8cc40058  lw          $a0, 0x58($a2)
    ctx->pc = 0x4a0558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
label_4a055c:
    // 0x4a055c: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
label_4a0560:
    if (ctx->pc == 0x4A0560u) {
        ctx->pc = 0x4A0560u;
            // 0x4a0560: 0xc6610080  lwc1        $f1, 0x80($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x4A0564u;
        goto label_4a0564;
    }
    ctx->pc = 0x4A055Cu;
    {
        const bool branch_taken_0x4a055c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A0560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A055Cu;
            // 0x4a0560: 0xc6610080  lwc1        $f1, 0x80($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a055c) {
            ctx->pc = 0x4A0590u;
            goto label_4a0590;
        }
    }
    ctx->pc = 0x4A0564u;
label_4a0564:
    // 0x4a0564: 0xc4c00080  lwc1        $f0, 0x80($a2)
    ctx->pc = 0x4a0564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a0568:
    // 0x4a0568: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x4a0568u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4a056c:
    // 0x4a056c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_4a0570:
    if (ctx->pc == 0x4A0570u) {
        ctx->pc = 0x4A0574u;
        goto label_4a0574;
    }
    ctx->pc = 0x4A056Cu;
    {
        const bool branch_taken_0x4a056c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4a056c) {
            ctx->pc = 0x4A0590u;
            goto label_4a0590;
        }
    }
    ctx->pc = 0x4A0574u;
label_4a0574:
    // 0x4a0574: 0x8cc40054  lw          $a0, 0x54($a2)
    ctx->pc = 0x4a0574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
label_4a0578:
    // 0x4a0578: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_4a057c:
    if (ctx->pc == 0x4A057Cu) {
        ctx->pc = 0x4A0580u;
        goto label_4a0580;
    }
    ctx->pc = 0x4A0578u;
    {
        const bool branch_taken_0x4a0578 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a0578) {
            ctx->pc = 0x4A0590u;
            goto label_4a0590;
        }
    }
    ctx->pc = 0x4A0580u;
label_4a0580:
    // 0x4a0580: 0xc4c00084  lwc1        $f0, 0x84($a2)
    ctx->pc = 0x4a0580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a0584:
    // 0x4a0584: 0xe4c0008c  swc1        $f0, 0x8C($a2)
    ctx->pc = 0x4a0584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 140), bits); }
label_4a0588:
    // 0x4a0588: 0xacc50054  sw          $a1, 0x54($a2)
    ctx->pc = 0x4a0588u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 84), GPR_U32(ctx, 5));
label_4a058c:
    // 0x4a058c: 0x0  nop
    ctx->pc = 0x4a058cu;
    // NOP
label_4a0590:
    // 0x4a0590: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4a0590u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_4a0594:
    // 0x4a0594: 0x127202b  sltu        $a0, $t1, $a3
    ctx->pc = 0x4a0594u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_4a0598:
    // 0x4a0598: 0x1480ffeb  bnez        $a0, . + 4 + (-0x15 << 2)
label_4a059c:
    if (ctx->pc == 0x4A059Cu) {
        ctx->pc = 0x4A059Cu;
            // 0x4a059c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->pc = 0x4A05A0u;
        goto label_4a05a0;
    }
    ctx->pc = 0x4A0598u;
    {
        const bool branch_taken_0x4a0598 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A059Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0598u;
            // 0x4a059c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0598) {
            ctx->pc = 0x4A0548u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4a0548;
        }
    }
    ctx->pc = 0x4A05A0u;
label_4a05a0:
    // 0x4a05a0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4a05a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4a05a4:
    // 0x4a05a4: 0x8c637c20  lw          $v1, 0x7C20($v1)
    ctx->pc = 0x4a05a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31776)));
label_4a05a8:
    // 0x4a05a8: 0x8c700070  lw          $s0, 0x70($v1)
    ctx->pc = 0x4a05a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_4a05ac:
    // 0x4a05ac: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_4a05b0:
    if (ctx->pc == 0x4A05B0u) {
        ctx->pc = 0x4A05B4u;
        goto label_4a05b4;
    }
    ctx->pc = 0x4A05ACu;
    {
        const bool branch_taken_0x4a05ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a05ac) {
            ctx->pc = 0x4A05E8u;
            goto label_4a05e8;
        }
    }
    ctx->pc = 0x4A05B4u;
label_4a05b4:
    // 0x4a05b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4a05b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a05b8:
    // 0x4a05b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4a05b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a05bc:
    // 0x4a05bc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4a05bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4a05c0:
    // 0x4a05c0: 0x8c427c20  lw          $v0, 0x7C20($v0)
    ctx->pc = 0x4a05c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31776)));
label_4a05c4:
    // 0x4a05c4: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x4a05c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_4a05c8:
    // 0x4a05c8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4a05c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4a05cc:
    // 0x4a05cc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4a05ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4a05d0:
    // 0x4a05d0: 0xc12860c  jal         func_4A1830
label_4a05d4:
    if (ctx->pc == 0x4A05D4u) {
        ctx->pc = 0x4A05D4u;
            // 0x4a05d4: 0xc66c0080  lwc1        $f12, 0x80($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x4A05D8u;
        goto label_4a05d8;
    }
    ctx->pc = 0x4A05D0u;
    SET_GPR_U32(ctx, 31, 0x4A05D8u);
    ctx->pc = 0x4A05D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A05D0u;
            // 0x4a05d4: 0xc66c0080  lwc1        $f12, 0x80($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A1830u;
    if (runtime->hasFunction(0x4A1830u)) {
        auto targetFn = runtime->lookupFunction(0x4A1830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A05D8u; }
        if (ctx->pc != 0x4A05D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A1830_0x4a1830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A05D8u; }
        if (ctx->pc != 0x4A05D8u) { return; }
    }
    ctx->pc = 0x4A05D8u;
label_4a05d8:
    // 0x4a05d8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4a05d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4a05dc:
    // 0x4a05dc: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x4a05dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4a05e0:
    // 0x4a05e0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_4a05e4:
    if (ctx->pc == 0x4A05E4u) {
        ctx->pc = 0x4A05E4u;
            // 0x4a05e4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4A05E8u;
        goto label_4a05e8;
    }
    ctx->pc = 0x4A05E0u;
    {
        const bool branch_taken_0x4a05e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A05E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A05E0u;
            // 0x4a05e4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a05e0) {
            ctx->pc = 0x4A05BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4a05bc;
        }
    }
    ctx->pc = 0x4A05E8u;
label_4a05e8:
    // 0x4a05e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4a05e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a05ec:
    // 0x4a05ec: 0xc6600084  lwc1        $f0, 0x84($s3)
    ctx->pc = 0x4a05ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a05f0:
    // 0x4a05f0: 0xe660008c  swc1        $f0, 0x8C($s3)
    ctx->pc = 0x4a05f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 140), bits); }
label_4a05f4:
    // 0x4a05f4: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x4a05f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_4a05f8:
    // 0x4a05f8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4a05f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4a05fc:
    // 0x4a05fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4a05fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a0600:
    // 0x4a0600: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4a0600u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a0604:
    // 0x4a0604: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a0604u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a0608:
    // 0x4a0608: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4a0608u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4a060c:
    // 0x4a060c: 0x3e00008  jr          $ra
label_4a0610:
    if (ctx->pc == 0x4A0610u) {
        ctx->pc = 0x4A0610u;
            // 0x4a0610: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4A0614u;
        goto label_4a0614;
    }
    ctx->pc = 0x4A060Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A0610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A060Cu;
            // 0x4a0610: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A0614u;
label_4a0614:
    // 0x4a0614: 0x0  nop
    ctx->pc = 0x4a0614u;
    // NOP
label_4a0618:
    // 0x4a0618: 0x0  nop
    ctx->pc = 0x4a0618u;
    // NOP
label_4a061c:
    // 0x4a061c: 0x0  nop
    ctx->pc = 0x4a061cu;
    // NOP
label_4a0620:
    // 0x4a0620: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a0620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4a0624:
    // 0x4a0624: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a0624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4a0628:
    // 0x4a0628: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4a0628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4a062c:
    // 0x4a062c: 0x84830098  lh          $v1, 0x98($a0)
    ctx->pc = 0x4a062cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 152)));
label_4a0630:
    // 0x4a0630: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_4a0634:
    if (ctx->pc == 0x4A0634u) {
        ctx->pc = 0x4A0634u;
            // 0x4a0634: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A0638u;
        goto label_4a0638;
    }
    ctx->pc = 0x4A0630u;
    {
        const bool branch_taken_0x4a0630 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A0634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0630u;
            // 0x4a0634: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0630) {
            ctx->pc = 0x4A064Cu;
            goto label_4a064c;
        }
    }
    ctx->pc = 0x4A0638u;
label_4a0638:
    // 0x4a0638: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x4a0638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_4a063c:
    // 0x4a063c: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_4a0640:
    if (ctx->pc == 0x4A0640u) {
        ctx->pc = 0x4A0640u;
            // 0x4a0640: 0x86030098  lh          $v1, 0x98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 152)));
        ctx->pc = 0x4A0644u;
        goto label_4a0644;
    }
    ctx->pc = 0x4A063Cu;
    {
        const bool branch_taken_0x4a063c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a063c) {
            ctx->pc = 0x4A0640u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A063Cu;
            // 0x4a0640: 0x86030098  lh          $v1, 0x98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 152)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A0650u;
            goto label_4a0650;
        }
    }
    ctx->pc = 0x4A0644u;
label_4a0644:
    // 0x4a0644: 0xc128140  jal         func_4A0500
label_4a0648:
    if (ctx->pc == 0x4A0648u) {
        ctx->pc = 0x4A064Cu;
        goto label_4a064c;
    }
    ctx->pc = 0x4A0644u;
    SET_GPR_U32(ctx, 31, 0x4A064Cu);
    ctx->pc = 0x4A0500u;
    goto label_4a0500;
    ctx->pc = 0x4A064Cu;
label_4a064c:
    // 0x4a064c: 0x86030098  lh          $v1, 0x98($s0)
    ctx->pc = 0x4a064cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 152)));
label_4a0650:
    // 0x4a0650: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4a0650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4a0654:
    // 0x4a0654: 0xa6030098  sh          $v1, 0x98($s0)
    ctx->pc = 0x4a0654u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 3));
label_4a0658:
    // 0x4a0658: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a0658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4a065c:
    // 0x4a065c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4a065cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4a0660:
    // 0x4a0660: 0x3e00008  jr          $ra
label_4a0664:
    if (ctx->pc == 0x4A0664u) {
        ctx->pc = 0x4A0664u;
            // 0x4a0664: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4A0668u;
        goto label_4a0668;
    }
    ctx->pc = 0x4A0660u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A0664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0660u;
            // 0x4a0664: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A0668u;
label_4a0668:
    // 0x4a0668: 0x0  nop
    ctx->pc = 0x4a0668u;
    // NOP
label_4a066c:
    // 0x4a066c: 0x0  nop
    ctx->pc = 0x4a066cu;
    // NOP
label_4a0670:
    // 0x4a0670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a0670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4a0674:
    // 0x4a0674: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a0674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4a0678:
    // 0x4a0678: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4a0678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4a067c:
    // 0x4a067c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a067cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a0680:
    // 0x4a0680: 0x8c840058  lw          $a0, 0x58($a0)
    ctx->pc = 0x4a0680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_4a0684:
    // 0x4a0684: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4a0688:
    if (ctx->pc == 0x4A0688u) {
        ctx->pc = 0x4A0688u;
            // 0x4a0688: 0xae000058  sw          $zero, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
        ctx->pc = 0x4A068Cu;
        goto label_4a068c;
    }
    ctx->pc = 0x4A0684u;
    {
        const bool branch_taken_0x4a0684 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a0684) {
            ctx->pc = 0x4A0688u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0684u;
            // 0x4a0688: 0xae000058  sw          $zero, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A06A0u;
            goto label_4a06a0;
        }
    }
    ctx->pc = 0x4A068Cu;
label_4a068c:
    // 0x4a068c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4a068cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4a0690:
    // 0x4a0690: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4a0690u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4a0694:
    // 0x4a0694: 0x320f809  jalr        $t9
label_4a0698:
    if (ctx->pc == 0x4A0698u) {
        ctx->pc = 0x4A0698u;
            // 0x4a0698: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4A069Cu;
        goto label_4a069c;
    }
    ctx->pc = 0x4A0694u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A069Cu);
        ctx->pc = 0x4A0698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0694u;
            // 0x4a0698: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A069Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A069Cu; }
            if (ctx->pc != 0x4A069Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4A069Cu;
label_4a069c:
    // 0x4a069c: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x4a069cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_4a06a0:
    // 0x4a06a0: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x4a06a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_4a06a4:
    // 0x4a06a4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4a06a8:
    if (ctx->pc == 0x4A06A8u) {
        ctx->pc = 0x4A06A8u;
            // 0x4a06a8: 0xae00005c  sw          $zero, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
        ctx->pc = 0x4A06ACu;
        goto label_4a06ac;
    }
    ctx->pc = 0x4A06A4u;
    {
        const bool branch_taken_0x4a06a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a06a4) {
            ctx->pc = 0x4A06A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A06A4u;
            // 0x4a06a8: 0xae00005c  sw          $zero, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A06C0u;
            goto label_4a06c0;
        }
    }
    ctx->pc = 0x4A06ACu;
label_4a06ac:
    // 0x4a06ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4a06acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4a06b0:
    // 0x4a06b0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4a06b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4a06b4:
    // 0x4a06b4: 0x320f809  jalr        $t9
label_4a06b8:
    if (ctx->pc == 0x4A06B8u) {
        ctx->pc = 0x4A06B8u;
            // 0x4a06b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4A06BCu;
        goto label_4a06bc;
    }
    ctx->pc = 0x4A06B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A06BCu);
        ctx->pc = 0x4A06B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A06B4u;
            // 0x4a06b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A06BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A06BCu; }
            if (ctx->pc != 0x4A06BCu) { return; }
        }
        }
    }
    ctx->pc = 0x4A06BCu;
label_4a06bc:
    // 0x4a06bc: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x4a06bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
label_4a06c0:
    // 0x4a06c0: 0x8e0400e0  lw          $a0, 0xE0($s0)
    ctx->pc = 0x4a06c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_4a06c4:
    // 0x4a06c4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4a06c8:
    if (ctx->pc == 0x4A06C8u) {
        ctx->pc = 0x4A06C8u;
            // 0x4a06c8: 0xae0000e0  sw          $zero, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
        ctx->pc = 0x4A06CCu;
        goto label_4a06cc;
    }
    ctx->pc = 0x4A06C4u;
    {
        const bool branch_taken_0x4a06c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a06c4) {
            ctx->pc = 0x4A06C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A06C4u;
            // 0x4a06c8: 0xae0000e0  sw          $zero, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A06E0u;
            goto label_4a06e0;
        }
    }
    ctx->pc = 0x4A06CCu;
label_4a06cc:
    // 0x4a06cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4a06ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4a06d0:
    // 0x4a06d0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4a06d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4a06d4:
    // 0x4a06d4: 0x320f809  jalr        $t9
label_4a06d8:
    if (ctx->pc == 0x4A06D8u) {
        ctx->pc = 0x4A06D8u;
            // 0x4a06d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4A06DCu;
        goto label_4a06dc;
    }
    ctx->pc = 0x4A06D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A06DCu);
        ctx->pc = 0x4A06D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A06D4u;
            // 0x4a06d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A06DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A06DCu; }
            if (ctx->pc != 0x4A06DCu) { return; }
        }
        }
    }
    ctx->pc = 0x4A06DCu;
label_4a06dc:
    // 0x4a06dc: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x4a06dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
label_4a06e0:
    // 0x4a06e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a06e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4a06e4:
    // 0x4a06e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4a06e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4a06e8:
    // 0x4a06e8: 0x3e00008  jr          $ra
label_4a06ec:
    if (ctx->pc == 0x4A06ECu) {
        ctx->pc = 0x4A06ECu;
            // 0x4a06ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4A06F0u;
        goto label_4a06f0;
    }
    ctx->pc = 0x4A06E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A06ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A06E8u;
            // 0x4a06ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A06F0u;
label_4a06f0:
    // 0x4a06f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a06f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4a06f4:
    // 0x4a06f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4a06f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4a06f8:
    // 0x4a06f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a06f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4a06fc:
    // 0x4a06fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4a06fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4a0700:
    // 0x4a0700: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a0700u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a0704:
    // 0x4a0704: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_4a0708:
    if (ctx->pc == 0x4A0708u) {
        ctx->pc = 0x4A0708u;
            // 0x4a0708: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A070Cu;
        goto label_4a070c;
    }
    ctx->pc = 0x4A0704u;
    {
        const bool branch_taken_0x4a0704 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0704u;
            // 0x4a0708: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0704) {
            ctx->pc = 0x4A0768u;
            goto label_4a0768;
        }
    }
    ctx->pc = 0x4A070Cu;
label_4a070c:
    // 0x4a070c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4a070cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4a0710:
    // 0x4a0710: 0x244201a0  addiu       $v0, $v0, 0x1A0
    ctx->pc = 0x4a0710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
label_4a0714:
    // 0x4a0714: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_4a0718:
    if (ctx->pc == 0x4A0718u) {
        ctx->pc = 0x4A0718u;
            // 0x4a0718: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4A071Cu;
        goto label_4a071c;
    }
    ctx->pc = 0x4A0714u;
    {
        const bool branch_taken_0x4a0714 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0714u;
            // 0x4a0718: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0714) {
            ctx->pc = 0x4A0750u;
            goto label_4a0750;
        }
    }
    ctx->pc = 0x4A071Cu;
label_4a071c:
    // 0x4a071c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4a071cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4a0720:
    // 0x4a0720: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x4a0720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_4a0724:
    // 0x4a0724: 0xc0d37dc  jal         func_34DF70
label_4a0728:
    if (ctx->pc == 0x4A0728u) {
        ctx->pc = 0x4A0728u;
            // 0x4a0728: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4A072Cu;
        goto label_4a072c;
    }
    ctx->pc = 0x4A0724u;
    SET_GPR_U32(ctx, 31, 0x4A072Cu);
    ctx->pc = 0x4A0728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0724u;
            // 0x4a0728: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A072Cu; }
        if (ctx->pc != 0x4A072Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A072Cu; }
        if (ctx->pc != 0x4A072Cu) { return; }
    }
    ctx->pc = 0x4A072Cu;
label_4a072c:
    // 0x4a072c: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
label_4a0730:
    if (ctx->pc == 0x4A0730u) {
        ctx->pc = 0x4A0730u;
            // 0x4a0730: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x4A0734u;
        goto label_4a0734;
    }
    ctx->pc = 0x4A072Cu;
    {
        const bool branch_taken_0x4a072c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a072c) {
            ctx->pc = 0x4A0730u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A072Cu;
            // 0x4a0730: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A0754u;
            goto label_4a0754;
        }
    }
    ctx->pc = 0x4A0734u;
label_4a0734:
    // 0x4a0734: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4a0734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4a0738:
    // 0x4a0738: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x4a0738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_4a073c:
    // 0x4a073c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_4a0740:
    if (ctx->pc == 0x4A0740u) {
        ctx->pc = 0x4A0740u;
            // 0x4a0740: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4A0744u;
        goto label_4a0744;
    }
    ctx->pc = 0x4A073Cu;
    {
        const bool branch_taken_0x4a073c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A073Cu;
            // 0x4a0740: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a073c) {
            ctx->pc = 0x4A0750u;
            goto label_4a0750;
        }
    }
    ctx->pc = 0x4A0744u;
label_4a0744:
    // 0x4a0744: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4a0744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4a0748:
    // 0x4a0748: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x4a0748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_4a074c:
    // 0x4a074c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4a074cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4a0750:
    // 0x4a0750: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4a0750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4a0754:
    // 0x4a0754: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4a0754u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4a0758:
    // 0x4a0758: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4a075c:
    if (ctx->pc == 0x4A075Cu) {
        ctx->pc = 0x4A075Cu;
            // 0x4a075c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A0760u;
        goto label_4a0760;
    }
    ctx->pc = 0x4A0758u;
    {
        const bool branch_taken_0x4a0758 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4a0758) {
            ctx->pc = 0x4A075Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0758u;
            // 0x4a075c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A076Cu;
            goto label_4a076c;
        }
    }
    ctx->pc = 0x4A0760u;
label_4a0760:
    // 0x4a0760: 0xc0400a8  jal         func_1002A0
label_4a0764:
    if (ctx->pc == 0x4A0764u) {
        ctx->pc = 0x4A0764u;
            // 0x4a0764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A0768u;
        goto label_4a0768;
    }
    ctx->pc = 0x4A0760u;
    SET_GPR_U32(ctx, 31, 0x4A0768u);
    ctx->pc = 0x4A0764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0760u;
            // 0x4a0764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0768u; }
        if (ctx->pc != 0x4A0768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0768u; }
        if (ctx->pc != 0x4A0768u) { return; }
    }
    ctx->pc = 0x4A0768u;
label_4a0768:
    // 0x4a0768: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4a0768u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a076c:
    // 0x4a076c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4a076cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4a0770:
    // 0x4a0770: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a0770u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a0774:
    // 0x4a0774: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4a0774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4a0778:
    // 0x4a0778: 0x3e00008  jr          $ra
label_4a077c:
    if (ctx->pc == 0x4A077Cu) {
        ctx->pc = 0x4A077Cu;
            // 0x4a077c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4A0780u;
        goto label_4a0780;
    }
    ctx->pc = 0x4A0778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A077Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0778u;
            // 0x4a077c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A0780u;
label_4a0780:
    // 0x4a0780: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a0780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4a0784:
    // 0x4a0784: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4a0784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4a0788:
    // 0x4a0788: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4a0788u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a078c:
    // 0x4a078c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a078cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4a0790:
    // 0x4a0790: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4a0790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4a0794:
    // 0x4a0794: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x4a0794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4a0798:
    // 0x4a0798: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4a0798u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4a079c:
    // 0x4a079c: 0x45010029  bc1t        . + 4 + (0x29 << 2)
label_4a07a0:
    if (ctx->pc == 0x4A07A0u) {
        ctx->pc = 0x4A07A0u;
            // 0x4a07a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A07A4u;
        goto label_4a07a4;
    }
    ctx->pc = 0x4A079Cu;
    {
        const bool branch_taken_0x4a079c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4A07A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A079Cu;
            // 0x4a07a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a079c) {
            ctx->pc = 0x4A0844u;
            goto label_4a0844;
        }
    }
    ctx->pc = 0x4A07A4u;
label_4a07a4:
    // 0x4a07a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4a07a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4a07a8:
    // 0x4a07a8: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x4a07a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_4a07ac:
    // 0x4a07ac: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4a07acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4a07b0:
    // 0x4a07b0: 0xc0a7a88  jal         func_29EA20
label_4a07b4:
    if (ctx->pc == 0x4A07B4u) {
        ctx->pc = 0x4A07B4u;
            // 0x4a07b4: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x4A07B8u;
        goto label_4a07b8;
    }
    ctx->pc = 0x4A07B0u;
    SET_GPR_U32(ctx, 31, 0x4A07B8u);
    ctx->pc = 0x4A07B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A07B0u;
            // 0x4a07b4: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A07B8u; }
        if (ctx->pc != 0x4A07B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A07B8u; }
        if (ctx->pc != 0x4A07B8u) { return; }
    }
    ctx->pc = 0x4A07B8u;
label_4a07b8:
    // 0x4a07b8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x4a07b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_4a07bc:
    // 0x4a07bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4a07bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a07c0:
    // 0x4a07c0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_4a07c4:
    if (ctx->pc == 0x4A07C4u) {
        ctx->pc = 0x4A07C4u;
            // 0x4a07c4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4A07C8u;
        goto label_4a07c8;
    }
    ctx->pc = 0x4A07C0u;
    {
        const bool branch_taken_0x4a07c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A07C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A07C0u;
            // 0x4a07c4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a07c0) {
            ctx->pc = 0x4A07DCu;
            goto label_4a07dc;
        }
    }
    ctx->pc = 0x4A07C8u;
label_4a07c8:
    // 0x4a07c8: 0x3c024307  lui         $v0, 0x4307
    ctx->pc = 0x4a07c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17159 << 16));
label_4a07cc:
    // 0x4a07cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4a07ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a07d0:
    // 0x4a07d0: 0xc0827ac  jal         func_209EB0
label_4a07d4:
    if (ctx->pc == 0x4A07D4u) {
        ctx->pc = 0x4A07D8u;
        goto label_4a07d8;
    }
    ctx->pc = 0x4A07D0u;
    SET_GPR_U32(ctx, 31, 0x4A07D8u);
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A07D8u; }
        if (ctx->pc != 0x4A07D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A07D8u; }
        if (ctx->pc != 0x4A07D8u) { return; }
    }
    ctx->pc = 0x4A07D8u;
label_4a07d8:
    // 0x4a07d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4a07d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a07dc:
    // 0x4a07dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4a07dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a07e0:
    // 0x4a07e0: 0xc040180  jal         func_100600
label_4a07e4:
    if (ctx->pc == 0x4A07E4u) {
        ctx->pc = 0x4A07E4u;
            // 0x4a07e4: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x4A07E8u;
        goto label_4a07e8;
    }
    ctx->pc = 0x4A07E0u;
    SET_GPR_U32(ctx, 31, 0x4A07E8u);
    ctx->pc = 0x4A07E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A07E0u;
            // 0x4a07e4: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A07E8u; }
        if (ctx->pc != 0x4A07E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A07E8u; }
        if (ctx->pc != 0x4A07E8u) { return; }
    }
    ctx->pc = 0x4A07E8u;
label_4a07e8:
    // 0x4a07e8: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_4a07ec:
    if (ctx->pc == 0x4A07ECu) {
        ctx->pc = 0x4A07ECu;
            // 0x4a07ec: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->pc = 0x4A07F0u;
        goto label_4a07f0;
    }
    ctx->pc = 0x4A07E8u;
    {
        const bool branch_taken_0x4a07e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a07e8) {
            ctx->pc = 0x4A07ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A07E8u;
            // 0x4a07ec: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A082Cu;
            goto label_4a082c;
        }
    }
    ctx->pc = 0x4A07F0u;
label_4a07f0:
    // 0x4a07f0: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x4a07f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_4a07f4:
    // 0x4a07f4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4a07f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4a07f8:
    // 0x4a07f8: 0x2484cfe0  addiu       $a0, $a0, -0x3020
    ctx->pc = 0x4a07f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954976));
label_4a07fc:
    // 0x4a07fc: 0x246324a0  addiu       $v1, $v1, 0x24A0
    ctx->pc = 0x4a07fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9376));
label_4a0800:
    // 0x4a0800: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4a0800u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_4a0804:
    // 0x4a0804: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x4a0804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_4a0808:
    // 0x4a0808: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4a0808u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_4a080c:
    // 0x4a080c: 0x24842460  addiu       $a0, $a0, 0x2460
    ctx->pc = 0x4a080cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9312));
label_4a0810:
    // 0x4a0810: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4a0810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4a0814:
    // 0x4a0814: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4a0814u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_4a0818:
    // 0x4a0818: 0x246301a0  addiu       $v1, $v1, 0x1A0
    ctx->pc = 0x4a0818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 416));
label_4a081c:
    // 0x4a081c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x4a081cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_4a0820:
    // 0x4a0820: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4a0820u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_4a0824:
    // 0x4a0824: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x4a0824u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
label_4a0828:
    // 0x4a0828: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x4a0828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
label_4a082c:
    // 0x4a082c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4a082cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a0830:
    // 0x4a0830: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x4a0830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_4a0834:
    // 0x4a0834: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x4a0834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_4a0838:
    // 0x4a0838: 0xc0d37ec  jal         func_34DFB0
label_4a083c:
    if (ctx->pc == 0x4A083Cu) {
        ctx->pc = 0x4A083Cu;
            // 0x4a083c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A0840u;
        goto label_4a0840;
    }
    ctx->pc = 0x4A0838u;
    SET_GPR_U32(ctx, 31, 0x4A0840u);
    ctx->pc = 0x4A083Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0838u;
            // 0x4a083c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DFB0u;
    if (runtime->hasFunction(0x34DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x34DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0840u; }
        if (ctx->pc != 0x4A0840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DFB0_0x34dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0840u; }
        if (ctx->pc != 0x4A0840u) { return; }
    }
    ctx->pc = 0x4A0840u;
label_4a0840:
    // 0x4a0840: 0xae11005c  sw          $s1, 0x5C($s0)
    ctx->pc = 0x4a0840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 17));
label_4a0844:
    // 0x4a0844: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x4a0844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4a0848:
    // 0x4a0848: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4a0848u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a084c:
    // 0x4a084c: 0x0  nop
    ctx->pc = 0x4a084cu;
    // NOP
label_4a0850:
    // 0x4a0850: 0xe6010084  swc1        $f1, 0x84($s0)
    ctx->pc = 0x4a0850u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
label_4a0854:
    // 0x4a0854: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x4a0854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4a0858:
    // 0x4a0858: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4a0858u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4a085c:
    // 0x4a085c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_4a0860:
    if (ctx->pc == 0x4A0860u) {
        ctx->pc = 0x4A0860u;
            // 0x4a0860: 0xe6010080  swc1        $f1, 0x80($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
        ctx->pc = 0x4A0864u;
        goto label_4a0864;
    }
    ctx->pc = 0x4A085Cu;
    {
        const bool branch_taken_0x4a085c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4A0860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A085Cu;
            // 0x4a0860: 0xe6010080  swc1        $f1, 0x80($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a085c) {
            ctx->pc = 0x4A0878u;
            goto label_4a0878;
        }
    }
    ctx->pc = 0x4A0864u;
label_4a0864:
    // 0x4a0864: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a0864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4a0868:
    // 0x4a0868: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a0868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a086c:
    // 0x4a086c: 0x0  nop
    ctx->pc = 0x4a086cu;
    // NOP
label_4a0870:
    // 0x4a0870: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4a0870u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4a0874:
    // 0x4a0874: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x4a0874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
label_4a0878:
    // 0x4a0878: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x4a0878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_4a087c:
    // 0x4a087c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x4a087cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4a0880:
    // 0x4a0880: 0xc040180  jal         func_100600
label_4a0884:
    if (ctx->pc == 0x4A0884u) {
        ctx->pc = 0x4A0884u;
            // 0x4a0884: 0xa6000098  sh          $zero, 0x98($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4A0888u;
        goto label_4a0888;
    }
    ctx->pc = 0x4A0880u;
    SET_GPR_U32(ctx, 31, 0x4A0888u);
    ctx->pc = 0x4A0884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0880u;
            // 0x4a0884: 0xa6000098  sh          $zero, 0x98($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0888u; }
        if (ctx->pc != 0x4A0888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0888u; }
        if (ctx->pc != 0x4A0888u) { return; }
    }
    ctx->pc = 0x4A0888u;
label_4a0888:
    // 0x4a0888: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4a0888u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a088c:
    // 0x4a088c: 0x5220000f  beql        $s1, $zero, . + 4 + (0xF << 2)
label_4a0890:
    if (ctx->pc == 0x4A0890u) {
        ctx->pc = 0x4A0890u;
            // 0x4a0890: 0x3c023f66  lui         $v0, 0x3F66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
        ctx->pc = 0x4A0894u;
        goto label_4a0894;
    }
    ctx->pc = 0x4A088Cu;
    {
        const bool branch_taken_0x4a088c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a088c) {
            ctx->pc = 0x4A0890u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A088Cu;
            // 0x4a0890: 0x3c023f66  lui         $v0, 0x3F66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A08CCu;
            goto label_4a08cc;
        }
    }
    ctx->pc = 0x4A0894u;
label_4a0894:
    // 0x4a0894: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4a0894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4a0898:
    // 0x4a0898: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4a0898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4a089c:
    // 0x4a089c: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x4a089cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_4a08a0:
    // 0x4a08a0: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x4a08a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_4a08a4:
    // 0x4a08a4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4a08a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4a08a8:
    // 0x4a08a8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x4a08a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_4a08ac:
    // 0x4a08ac: 0xc040138  jal         func_1004E0
label_4a08b0:
    if (ctx->pc == 0x4A08B0u) {
        ctx->pc = 0x4A08B0u;
            // 0x4a08b0: 0xa2220008  sb          $v0, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4A08B4u;
        goto label_4a08b4;
    }
    ctx->pc = 0x4A08ACu;
    SET_GPR_U32(ctx, 31, 0x4A08B4u);
    ctx->pc = 0x4A08B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A08ACu;
            // 0x4a08b0: 0xa2220008  sb          $v0, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A08B4u; }
        if (ctx->pc != 0x4A08B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A08B4u; }
        if (ctx->pc != 0x4A08B4u) { return; }
    }
    ctx->pc = 0x4A08B4u;
label_4a08b4:
    // 0x4a08b4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x4a08b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_4a08b8:
    // 0x4a08b8: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x4a08b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_4a08bc:
    // 0x4a08bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a08bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a08c0:
    // 0x4a08c0: 0xc04a576  jal         func_1295D8
label_4a08c4:
    if (ctx->pc == 0x4A08C4u) {
        ctx->pc = 0x4A08C4u;
            // 0x4a08c4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x4A08C8u;
        goto label_4a08c8;
    }
    ctx->pc = 0x4A08C0u;
    SET_GPR_U32(ctx, 31, 0x4A08C8u);
    ctx->pc = 0x4A08C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A08C0u;
            // 0x4a08c4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A08C8u; }
        if (ctx->pc != 0x4A08C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A08C8u; }
        if (ctx->pc != 0x4A08C8u) { return; }
    }
    ctx->pc = 0x4A08C8u;
label_4a08c8:
    // 0x4a08c8: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x4a08c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
label_4a08cc:
    // 0x4a08cc: 0x3c0346af  lui         $v1, 0x46AF
    ctx->pc = 0x4a08ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18095 << 16));
label_4a08d0:
    // 0x4a08d0: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x4a08d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_4a08d4:
    // 0x4a08d4: 0x3463c800  ori         $v1, $v1, 0xC800
    ctx->pc = 0x4a08d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51200);
label_4a08d8:
    // 0x4a08d8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4a08d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4a08dc:
    // 0x4a08dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a08dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a08e0:
    // 0x4a08e0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x4a08e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_4a08e4:
    // 0x4a08e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a08e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a08e8:
    // 0x4a08e8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x4a08e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a08ec:
    // 0x4a08ec: 0x344616ae  ori         $a2, $v0, 0x16AE
    ctx->pc = 0x4a08ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5806);
label_4a08f0:
    // 0x4a08f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a08f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a08f4:
    // 0x4a08f4: 0xc122cd8  jal         func_48B360
label_4a08f8:
    if (ctx->pc == 0x4A08F8u) {
        ctx->pc = 0x4A08F8u;
            // 0x4a08f8: 0xae1100e0  sw          $s1, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 17));
        ctx->pc = 0x4A08FCu;
        goto label_4a08fc;
    }
    ctx->pc = 0x4A08F4u;
    SET_GPR_U32(ctx, 31, 0x4A08FCu);
    ctx->pc = 0x4A08F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A08F4u;
            // 0x4a08f8: 0xae1100e0  sw          $s1, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A08FCu; }
        if (ctx->pc != 0x4A08FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A08FCu; }
        if (ctx->pc != 0x4A08FCu) { return; }
    }
    ctx->pc = 0x4A08FCu;
label_4a08fc:
    // 0x4a08fc: 0x3c0246af  lui         $v0, 0x46AF
    ctx->pc = 0x4a08fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18095 << 16));
label_4a0900:
    // 0x4a0900: 0x8e0400e0  lw          $a0, 0xE0($s0)
    ctx->pc = 0x4a0900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_4a0904:
    // 0x4a0904: 0x3443c800  ori         $v1, $v0, 0xC800
    ctx->pc = 0x4a0904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51200);
label_4a0908:
    // 0x4a0908: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4a0908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a090c:
    // 0x4a090c: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x4a090cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
label_4a0910:
    // 0x4a0910: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a0910u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a0914:
    // 0x4a0914: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x4a0914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_4a0918:
    // 0x4a0918: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4a0918u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4a091c:
    // 0x4a091c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x4a091cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_4a0920:
    // 0x4a0920: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x4a0920u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a0924:
    // 0x4a0924: 0xc122cd8  jal         func_48B360
label_4a0928:
    if (ctx->pc == 0x4A0928u) {
        ctx->pc = 0x4A0928u;
            // 0x4a0928: 0x344616ae  ori         $a2, $v0, 0x16AE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5806);
        ctx->pc = 0x4A092Cu;
        goto label_4a092c;
    }
    ctx->pc = 0x4A0924u;
    SET_GPR_U32(ctx, 31, 0x4A092Cu);
    ctx->pc = 0x4A0928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0924u;
            // 0x4a0928: 0x344616ae  ori         $a2, $v0, 0x16AE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5806);
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A092Cu; }
        if (ctx->pc != 0x4A092Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A092Cu; }
        if (ctx->pc != 0x4A092Cu) { return; }
    }
    ctx->pc = 0x4A092Cu;
label_4a092c:
    // 0x4a092c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4a092cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4a0930:
    // 0x4a0930: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a0930u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a0934:
    // 0x4a0934: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4a0934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4a0938:
    // 0x4a0938: 0x3e00008  jr          $ra
label_4a093c:
    if (ctx->pc == 0x4A093Cu) {
        ctx->pc = 0x4A093Cu;
            // 0x4a093c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4A0940u;
        goto label_4a0940;
    }
    ctx->pc = 0x4A0938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A093Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0938u;
            // 0x4a093c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A0940u;
label_4a0940:
    // 0x4a0940: 0x3e00008  jr          $ra
label_4a0944:
    if (ctx->pc == 0x4A0944u) {
        ctx->pc = 0x4A0948u;
        goto label_4a0948;
    }
    ctx->pc = 0x4A0940u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A0948u;
label_4a0948:
    // 0x4a0948: 0x0  nop
    ctx->pc = 0x4a0948u;
    // NOP
label_4a094c:
    // 0x4a094c: 0x0  nop
    ctx->pc = 0x4a094cu;
    // NOP
label_4a0950:
    // 0x4a0950: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x4a0950u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
label_4a0954:
    // 0x4a0954: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x4a0954u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
label_4a0958:
    // 0x4a0958: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x4a0958u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
label_4a095c:
    // 0x4a095c: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x4a095cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a0960:
    // 0x4a0960: 0xe4800084  swc1        $f0, 0x84($a0)
    ctx->pc = 0x4a0960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
label_4a0964:
    // 0x4a0964: 0xa4800098  sh          $zero, 0x98($a0)
    ctx->pc = 0x4a0964u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 152), (uint16_t)GPR_U32(ctx, 0));
label_4a0968:
    // 0x4a0968: 0xac80008c  sw          $zero, 0x8C($a0)
    ctx->pc = 0x4a0968u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 0));
label_4a096c:
    // 0x4a096c: 0x3e00008  jr          $ra
label_4a0970:
    if (ctx->pc == 0x4A0970u) {
        ctx->pc = 0x4A0970u;
            // 0x4a0970: 0xac800090  sw          $zero, 0x90($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
        ctx->pc = 0x4A0974u;
        goto label_4a0974;
    }
    ctx->pc = 0x4A096Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A0970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A096Cu;
            // 0x4a0970: 0xac800090  sw          $zero, 0x90($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A0974u;
label_4a0974:
    // 0x4a0974: 0x0  nop
    ctx->pc = 0x4a0974u;
    // NOP
label_4a0978:
    // 0x4a0978: 0x0  nop
    ctx->pc = 0x4a0978u;
    // NOP
label_4a097c:
    // 0x4a097c: 0x0  nop
    ctx->pc = 0x4a097cu;
    // NOP
label_4a0980:
    // 0x4a0980: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x4a0980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4a0984:
    // 0x4a0984: 0x84830098  lh          $v1, 0x98($a0)
    ctx->pc = 0x4a0984u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 152)));
label_4a0988:
    // 0x4a0988: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4a0988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4a098c:
    // 0x4a098c: 0x3e00008  jr          $ra
label_4a0990:
    if (ctx->pc == 0x4A0990u) {
        ctx->pc = 0x4A0990u;
            // 0x4a0990: 0xa4830098  sh          $v1, 0x98($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 152), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4A0994u;
        goto label_4a0994;
    }
    ctx->pc = 0x4A098Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A0990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A098Cu;
            // 0x4a0990: 0xa4830098  sh          $v1, 0x98($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 152), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A0994u;
label_4a0994:
    // 0x4a0994: 0x0  nop
    ctx->pc = 0x4a0994u;
    // NOP
label_4a0998:
    // 0x4a0998: 0x0  nop
    ctx->pc = 0x4a0998u;
    // NOP
label_4a099c:
    // 0x4a099c: 0x0  nop
    ctx->pc = 0x4a099cu;
    // NOP
label_4a09a0:
    // 0x4a09a0: 0x8128188  j           func_4A0620
label_4a09a4:
    if (ctx->pc == 0x4A09A4u) {
        ctx->pc = 0x4A09A4u;
            // 0x4a09a4: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->pc = 0x4A09A8u;
        goto label_4a09a8;
    }
    ctx->pc = 0x4A09A0u;
    ctx->pc = 0x4A09A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A09A0u;
            // 0x4a09a4: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A0620u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_4a0620;
    ctx->pc = 0x4A09A8u;
label_4a09a8:
    // 0x4a09a8: 0x0  nop
    ctx->pc = 0x4a09a8u;
    // NOP
label_4a09ac:
    // 0x4a09ac: 0x0  nop
    ctx->pc = 0x4a09acu;
    // NOP
label_4a09b0:
    // 0x4a09b0: 0x3e00008  jr          $ra
label_4a09b4:
    if (ctx->pc == 0x4A09B4u) {
        ctx->pc = 0x4A09B4u;
            // 0x4a09b4: 0x24025a1e  addiu       $v0, $zero, 0x5A1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23070));
        ctx->pc = 0x4A09B8u;
        goto label_4a09b8;
    }
    ctx->pc = 0x4A09B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A09B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A09B0u;
            // 0x4a09b4: 0x24025a1e  addiu       $v0, $zero, 0x5A1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23070));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A09B8u;
label_4a09b8:
    // 0x4a09b8: 0x0  nop
    ctx->pc = 0x4a09b8u;
    // NOP
label_4a09bc:
    // 0x4a09bc: 0x0  nop
    ctx->pc = 0x4a09bcu;
    // NOP
label_4a09c0:
    // 0x4a09c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4a09c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4a09c4:
    // 0x4a09c4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4a09c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4a09c8:
    // 0x4a09c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4a09c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4a09cc:
    // 0x4a09cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4a09ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4a09d0:
    // 0x4a09d0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4a09d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a09d4:
    // 0x4a09d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4a09d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4a09d8:
    // 0x4a09d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a09d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4a09dc:
    // 0x4a09dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4a09dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4a09e0:
    // 0x4a09e0: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x4a09e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4a09e4:
    // 0x4a09e4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_4a09e8:
    if (ctx->pc == 0x4A09E8u) {
        ctx->pc = 0x4A09E8u;
            // 0x4a09e8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A09ECu;
        goto label_4a09ec;
    }
    ctx->pc = 0x4A09E4u;
    {
        const bool branch_taken_0x4a09e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A09E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A09E4u;
            // 0x4a09e8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a09e4) {
            ctx->pc = 0x4A0A28u;
            goto label_4a0a28;
        }
    }
    ctx->pc = 0x4A09ECu;
label_4a09ec:
    // 0x4a09ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4a09ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a09f0:
    // 0x4a09f0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4a09f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a09f4:
    // 0x4a09f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4a09f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a09f8:
    // 0x4a09f8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x4a09f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_4a09fc:
    // 0x4a09fc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4a09fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4a0a00:
    // 0x4a0a00: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4a0a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4a0a04:
    // 0x4a0a04: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4a0a04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4a0a08:
    // 0x4a0a08: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4a0a08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4a0a0c:
    // 0x4a0a0c: 0x320f809  jalr        $t9
label_4a0a10:
    if (ctx->pc == 0x4A0A10u) {
        ctx->pc = 0x4A0A14u;
        goto label_4a0a14;
    }
    ctx->pc = 0x4A0A0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A0A14u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A0A14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A0A14u; }
            if (ctx->pc != 0x4A0A14u) { return; }
        }
        }
    }
    ctx->pc = 0x4A0A14u;
label_4a0a14:
    // 0x4a0a14: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x4a0a14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4a0a18:
    // 0x4a0a18: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4a0a18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4a0a1c:
    // 0x4a0a1c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x4a0a1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4a0a20:
    // 0x4a0a20: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_4a0a24:
    if (ctx->pc == 0x4A0A24u) {
        ctx->pc = 0x4A0A24u;
            // 0x4a0a24: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4A0A28u;
        goto label_4a0a28;
    }
    ctx->pc = 0x4A0A20u;
    {
        const bool branch_taken_0x4a0a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A0A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0A20u;
            // 0x4a0a24: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0a20) {
            ctx->pc = 0x4A09F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4a09f8;
        }
    }
    ctx->pc = 0x4A0A28u;
label_4a0a28:
    // 0x4a0a28: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4a0a28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a0a2c:
    // 0x4a0a2c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4a0a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4a0a30:
    // 0x4a0a30: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4a0a30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a0a34:
    // 0x4a0a34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4a0a34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a0a38:
    // 0x4a0a38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4a0a38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a0a3c:
    // 0x4a0a3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a0a3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a0a40:
    // 0x4a0a40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4a0a40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4a0a44:
    // 0x4a0a44: 0x3e00008  jr          $ra
label_4a0a48:
    if (ctx->pc == 0x4A0A48u) {
        ctx->pc = 0x4A0A48u;
            // 0x4a0a48: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4A0A4Cu;
        goto label_4a0a4c;
    }
    ctx->pc = 0x4A0A44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A0A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0A44u;
            // 0x4a0a48: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A0A4Cu;
label_4a0a4c:
    // 0x4a0a4c: 0x0  nop
    ctx->pc = 0x4a0a4cu;
    // NOP
label_4a0a50:
    // 0x4a0a50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a0a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4a0a54:
    // 0x4a0a54: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4a0a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a0a58:
    // 0x4a0a58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a0a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4a0a5c:
    // 0x4a0a5c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x4a0a5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_4a0a60:
    // 0x4a0a60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4a0a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4a0a64:
    // 0x4a0a64: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x4a0a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4a0a68:
    // 0x4a0a68: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4a0a68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a0a6c:
    // 0x4a0a6c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x4a0a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_4a0a70:
    // 0x4a0a70: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4a0a70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4a0a74:
    // 0x4a0a74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a0a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4a0a78:
    // 0x4a0a78: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4a0a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_4a0a7c:
    // 0x4a0a7c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x4a0a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a0a80:
    // 0x4a0a80: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4a0a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4a0a84:
    // 0x4a0a84: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4a0a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4a0a88:
    // 0x4a0a88: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x4a0a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_4a0a8c:
    // 0x4a0a8c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x4a0a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_4a0a90:
    // 0x4a0a90: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x4a0a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4a0a94:
    // 0x4a0a94: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4a0a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4a0a98:
    // 0x4a0a98: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x4a0a98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_4a0a9c:
    // 0x4a0a9c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x4a0a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4a0aa0:
    // 0x4a0aa0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x4a0aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_4a0aa4:
    // 0x4a0aa4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4a0aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4a0aa8:
    // 0x4a0aa8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x4a0aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4a0aac:
    // 0x4a0aac: 0xc0a997c  jal         func_2A65F0
label_4a0ab0:
    if (ctx->pc == 0x4A0AB0u) {
        ctx->pc = 0x4A0AB0u;
            // 0x4a0ab0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x4A0AB4u;
        goto label_4a0ab4;
    }
    ctx->pc = 0x4A0AACu;
    SET_GPR_U32(ctx, 31, 0x4A0AB4u);
    ctx->pc = 0x4A0AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0AACu;
            // 0x4a0ab0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0AB4u; }
        if (ctx->pc != 0x4A0AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0AB4u; }
        if (ctx->pc != 0x4A0AB4u) { return; }
    }
    ctx->pc = 0x4A0AB4u;
label_4a0ab4:
    // 0x4a0ab4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x4a0ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_4a0ab8:
    // 0x4a0ab8: 0xc0d879c  jal         func_361E70
label_4a0abc:
    if (ctx->pc == 0x4A0ABCu) {
        ctx->pc = 0x4A0ABCu;
            // 0x4a0abc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A0AC0u;
        goto label_4a0ac0;
    }
    ctx->pc = 0x4A0AB8u;
    SET_GPR_U32(ctx, 31, 0x4A0AC0u);
    ctx->pc = 0x4A0ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0AB8u;
            // 0x4a0abc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0AC0u; }
        if (ctx->pc != 0x4A0AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0AC0u; }
        if (ctx->pc != 0x4A0AC0u) { return; }
    }
    ctx->pc = 0x4A0AC0u;
label_4a0ac0:
    // 0x4a0ac0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a0ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4a0ac4:
    // 0x4a0ac4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4a0ac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4a0ac8:
    // 0x4a0ac8: 0x3e00008  jr          $ra
label_4a0acc:
    if (ctx->pc == 0x4A0ACCu) {
        ctx->pc = 0x4A0ACCu;
            // 0x4a0acc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4A0AD0u;
        goto label_4a0ad0;
    }
    ctx->pc = 0x4A0AC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A0ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0AC8u;
            // 0x4a0acc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A0AD0u;
label_4a0ad0:
    // 0x4a0ad0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a0ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4a0ad4:
    // 0x4a0ad4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4a0ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4a0ad8:
    // 0x4a0ad8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a0ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4a0adc:
    // 0x4a0adc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4a0adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4a0ae0:
    // 0x4a0ae0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4a0ae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a0ae4:
    // 0x4a0ae4: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x4a0ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_4a0ae8:
    // 0x4a0ae8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_4a0aec:
    if (ctx->pc == 0x4A0AECu) {
        ctx->pc = 0x4A0AECu;
            // 0x4a0aec: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A0AF0u;
        goto label_4a0af0;
    }
    ctx->pc = 0x4A0AE8u;
    {
        const bool branch_taken_0x4a0ae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0AE8u;
            // 0x4a0aec: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0ae8) {
            ctx->pc = 0x4A0B18u;
            goto label_4a0b18;
        }
    }
    ctx->pc = 0x4A0AF0u;
label_4a0af0:
    // 0x4a0af0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4a0af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4a0af4:
    // 0x4a0af4: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x4a0af4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_4a0af8:
    // 0x4a0af8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4a0af8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4a0afc:
    // 0x4a0afc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4a0afcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4a0b00:
    // 0x4a0b00: 0x320f809  jalr        $t9
label_4a0b04:
    if (ctx->pc == 0x4A0B04u) {
        ctx->pc = 0x4A0B08u;
        goto label_4a0b08;
    }
    ctx->pc = 0x4A0B00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A0B08u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A0B08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A0B08u; }
            if (ctx->pc != 0x4A0B08u) { return; }
        }
        }
    }
    ctx->pc = 0x4A0B08u;
label_4a0b08:
    // 0x4a0b08: 0x26240084  addiu       $a0, $s1, 0x84
    ctx->pc = 0x4a0b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_4a0b0c:
    // 0x4a0b0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4a0b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a0b10:
    // 0x4a0b10: 0xc0d86a0  jal         func_361A80
label_4a0b14:
    if (ctx->pc == 0x4A0B14u) {
        ctx->pc = 0x4A0B14u;
            // 0x4a0b14: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A0B18u;
        goto label_4a0b18;
    }
    ctx->pc = 0x4A0B10u;
    SET_GPR_U32(ctx, 31, 0x4A0B18u);
    ctx->pc = 0x4A0B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0B10u;
            // 0x4a0b14: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361A80u;
    if (runtime->hasFunction(0x361A80u)) {
        auto targetFn = runtime->lookupFunction(0x361A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0B18u; }
        if (ctx->pc != 0x4A0B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361A80_0x361a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0B18u; }
        if (ctx->pc != 0x4A0B18u) { return; }
    }
    ctx->pc = 0x4A0B18u;
label_4a0b18:
    // 0x4a0b18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4a0b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4a0b1c:
    // 0x4a0b1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a0b1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a0b20:
    // 0x4a0b20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4a0b20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4a0b24:
    // 0x4a0b24: 0x3e00008  jr          $ra
label_4a0b28:
    if (ctx->pc == 0x4A0B28u) {
        ctx->pc = 0x4A0B28u;
            // 0x4a0b28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4A0B2Cu;
        goto label_4a0b2c;
    }
    ctx->pc = 0x4A0B24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A0B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0B24u;
            // 0x4a0b28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A0B2Cu;
label_4a0b2c:
    // 0x4a0b2c: 0x0  nop
    ctx->pc = 0x4a0b2cu;
    // NOP
label_4a0b30:
    // 0x4a0b30: 0x8128000  j           func_4A0000
label_4a0b34:
    if (ctx->pc == 0x4A0B34u) {
        ctx->pc = 0x4A0B34u;
            // 0x4a0b34: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4A0B38u;
        goto label_4a0b38;
    }
    ctx->pc = 0x4A0B30u;
    ctx->pc = 0x4A0B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0B30u;
            // 0x4a0b34: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A0000u;
    {
        auto targetFn = runtime->lookupFunction(0x4A0000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4A0B38u;
label_4a0b38:
    // 0x4a0b38: 0x0  nop
    ctx->pc = 0x4a0b38u;
    // NOP
label_4a0b3c:
    // 0x4a0b3c: 0x0  nop
    ctx->pc = 0x4a0b3cu;
    // NOP
label_4a0b40:
    // 0x4a0b40: 0x8127cb8  j           func_49F2E0
label_4a0b44:
    if (ctx->pc == 0x4A0B44u) {
        ctx->pc = 0x4A0B44u;
            // 0x4a0b44: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4A0B48u;
        goto label_4a0b48;
    }
    ctx->pc = 0x4A0B40u;
    ctx->pc = 0x4A0B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0B40u;
            // 0x4a0b44: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49F2E0u;
    if (runtime->hasFunction(0x49F2E0u)) {
        auto targetFn = runtime->lookupFunction(0x49F2E0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0049F2E0_0x49f2e0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4A0B48u;
label_4a0b48:
    // 0x4a0b48: 0x0  nop
    ctx->pc = 0x4a0b48u;
    // NOP
label_4a0b4c:
    // 0x4a0b4c: 0x0  nop
    ctx->pc = 0x4a0b4cu;
    // NOP
label_4a0b50:
    // 0x4a0b50: 0x8127c90  j           func_49F240
label_4a0b54:
    if (ctx->pc == 0x4A0B54u) {
        ctx->pc = 0x4A0B54u;
            // 0x4a0b54: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4A0B58u;
        goto label_4a0b58;
    }
    ctx->pc = 0x4A0B50u;
    ctx->pc = 0x4A0B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0B50u;
            // 0x4a0b54: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49F240u;
    {
        auto targetFn = runtime->lookupFunction(0x49F240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4A0B58u;
label_4a0b58:
    // 0x4a0b58: 0x0  nop
    ctx->pc = 0x4a0b58u;
    // NOP
label_4a0b5c:
    // 0x4a0b5c: 0x0  nop
    ctx->pc = 0x4a0b5cu;
    // NOP
label_4a0b60:
    // 0x4a0b60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a0b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4a0b64:
    // 0x4a0b64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4a0b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4a0b68:
    // 0x4a0b68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a0b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4a0b6c:
    // 0x4a0b6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4a0b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4a0b70:
    // 0x4a0b70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a0b70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a0b74:
    // 0x4a0b74: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_4a0b78:
    if (ctx->pc == 0x4A0B78u) {
        ctx->pc = 0x4A0B78u;
            // 0x4a0b78: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A0B7Cu;
        goto label_4a0b7c;
    }
    ctx->pc = 0x4A0B74u;
    {
        const bool branch_taken_0x4a0b74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0B74u;
            // 0x4a0b78: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0b74) {
            ctx->pc = 0x4A0BD0u;
            goto label_4a0bd0;
        }
    }
    ctx->pc = 0x4A0B7Cu;
label_4a0b7c:
    // 0x4a0b7c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4a0b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4a0b80:
    // 0x4a0b80: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4a0b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4a0b84:
    // 0x4a0b84: 0x246301e0  addiu       $v1, $v1, 0x1E0
    ctx->pc = 0x4a0b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 480));
label_4a0b88:
    // 0x4a0b88: 0x24420218  addiu       $v0, $v0, 0x218
    ctx->pc = 0x4a0b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 536));
label_4a0b8c:
    // 0x4a0b8c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a0b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4a0b90:
    // 0x4a0b90: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_4a0b94:
    if (ctx->pc == 0x4A0B94u) {
        ctx->pc = 0x4A0B94u;
            // 0x4a0b94: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4A0B98u;
        goto label_4a0b98;
    }
    ctx->pc = 0x4A0B90u;
    {
        const bool branch_taken_0x4a0b90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0B90u;
            // 0x4a0b94: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0b90) {
            ctx->pc = 0x4A0BB8u;
            goto label_4a0bb8;
        }
    }
    ctx->pc = 0x4A0B98u;
label_4a0b98:
    // 0x4a0b98: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4a0b98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4a0b9c:
    // 0x4a0b9c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4a0b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4a0ba0:
    // 0x4a0ba0: 0x24630330  addiu       $v1, $v1, 0x330
    ctx->pc = 0x4a0ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 816));
label_4a0ba4:
    // 0x4a0ba4: 0x24420368  addiu       $v0, $v0, 0x368
    ctx->pc = 0x4a0ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 872));
label_4a0ba8:
    // 0x4a0ba8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a0ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4a0bac:
    // 0x4a0bac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a0bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a0bb0:
    // 0x4a0bb0: 0xc1282fc  jal         func_4A0BF0
label_4a0bb4:
    if (ctx->pc == 0x4A0BB4u) {
        ctx->pc = 0x4A0BB4u;
            // 0x4a0bb4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4A0BB8u;
        goto label_4a0bb8;
    }
    ctx->pc = 0x4A0BB0u;
    SET_GPR_U32(ctx, 31, 0x4A0BB8u);
    ctx->pc = 0x4A0BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0BB0u;
            // 0x4a0bb4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A0BF0u;
    if (runtime->hasFunction(0x4A0BF0u)) {
        auto targetFn = runtime->lookupFunction(0x4A0BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0BB8u; }
        if (ctx->pc != 0x4A0BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A0BF0_0x4a0bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0BB8u; }
        if (ctx->pc != 0x4A0BB8u) { return; }
    }
    ctx->pc = 0x4A0BB8u;
label_4a0bb8:
    // 0x4a0bb8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4a0bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4a0bbc:
    // 0x4a0bbc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4a0bbcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4a0bc0:
    // 0x4a0bc0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4a0bc4:
    if (ctx->pc == 0x4A0BC4u) {
        ctx->pc = 0x4A0BC4u;
            // 0x4a0bc4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A0BC8u;
        goto label_4a0bc8;
    }
    ctx->pc = 0x4A0BC0u;
    {
        const bool branch_taken_0x4a0bc0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4a0bc0) {
            ctx->pc = 0x4A0BC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0BC0u;
            // 0x4a0bc4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A0BD4u;
            goto label_4a0bd4;
        }
    }
    ctx->pc = 0x4A0BC8u;
label_4a0bc8:
    // 0x4a0bc8: 0xc0400a8  jal         func_1002A0
label_4a0bcc:
    if (ctx->pc == 0x4A0BCCu) {
        ctx->pc = 0x4A0BCCu;
            // 0x4a0bcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A0BD0u;
        goto label_4a0bd0;
    }
    ctx->pc = 0x4A0BC8u;
    SET_GPR_U32(ctx, 31, 0x4A0BD0u);
    ctx->pc = 0x4A0BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0BC8u;
            // 0x4a0bcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0BD0u; }
        if (ctx->pc != 0x4A0BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0BD0u; }
        if (ctx->pc != 0x4A0BD0u) { return; }
    }
    ctx->pc = 0x4A0BD0u;
label_4a0bd0:
    // 0x4a0bd0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4a0bd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a0bd4:
    // 0x4a0bd4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4a0bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4a0bd8:
    // 0x4a0bd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a0bd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a0bdc:
    // 0x4a0bdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4a0bdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4a0be0:
    // 0x4a0be0: 0x3e00008  jr          $ra
label_4a0be4:
    if (ctx->pc == 0x4A0BE4u) {
        ctx->pc = 0x4A0BE4u;
            // 0x4a0be4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4A0BE8u;
        goto label_4a0be8;
    }
    ctx->pc = 0x4A0BE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A0BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0BE0u;
            // 0x4a0be4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A0BE8u;
label_4a0be8:
    // 0x4a0be8: 0x0  nop
    ctx->pc = 0x4a0be8u;
    // NOP
label_4a0bec:
    // 0x4a0bec: 0x0  nop
    ctx->pc = 0x4a0becu;
    // NOP
}
