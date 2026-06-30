#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001834A8
// Address: 0x1834a8 - 0x183e68
void sub_001834A8_0x1834a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001834A8_0x1834a8");
#endif

    switch (ctx->pc) {
        case 0x1834a8u: goto label_1834a8;
        case 0x1834acu: goto label_1834ac;
        case 0x1834b0u: goto label_1834b0;
        case 0x1834b4u: goto label_1834b4;
        case 0x1834b8u: goto label_1834b8;
        case 0x1834bcu: goto label_1834bc;
        case 0x1834c0u: goto label_1834c0;
        case 0x1834c4u: goto label_1834c4;
        case 0x1834c8u: goto label_1834c8;
        case 0x1834ccu: goto label_1834cc;
        case 0x1834d0u: goto label_1834d0;
        case 0x1834d4u: goto label_1834d4;
        case 0x1834d8u: goto label_1834d8;
        case 0x1834dcu: goto label_1834dc;
        case 0x1834e0u: goto label_1834e0;
        case 0x1834e4u: goto label_1834e4;
        case 0x1834e8u: goto label_1834e8;
        case 0x1834ecu: goto label_1834ec;
        case 0x1834f0u: goto label_1834f0;
        case 0x1834f4u: goto label_1834f4;
        case 0x1834f8u: goto label_1834f8;
        case 0x1834fcu: goto label_1834fc;
        case 0x183500u: goto label_183500;
        case 0x183504u: goto label_183504;
        case 0x183508u: goto label_183508;
        case 0x18350cu: goto label_18350c;
        case 0x183510u: goto label_183510;
        case 0x183514u: goto label_183514;
        case 0x183518u: goto label_183518;
        case 0x18351cu: goto label_18351c;
        case 0x183520u: goto label_183520;
        case 0x183524u: goto label_183524;
        case 0x183528u: goto label_183528;
        case 0x18352cu: goto label_18352c;
        case 0x183530u: goto label_183530;
        case 0x183534u: goto label_183534;
        case 0x183538u: goto label_183538;
        case 0x18353cu: goto label_18353c;
        case 0x183540u: goto label_183540;
        case 0x183544u: goto label_183544;
        case 0x183548u: goto label_183548;
        case 0x18354cu: goto label_18354c;
        case 0x183550u: goto label_183550;
        case 0x183554u: goto label_183554;
        case 0x183558u: goto label_183558;
        case 0x18355cu: goto label_18355c;
        case 0x183560u: goto label_183560;
        case 0x183564u: goto label_183564;
        case 0x183568u: goto label_183568;
        case 0x18356cu: goto label_18356c;
        case 0x183570u: goto label_183570;
        case 0x183574u: goto label_183574;
        case 0x183578u: goto label_183578;
        case 0x18357cu: goto label_18357c;
        case 0x183580u: goto label_183580;
        case 0x183584u: goto label_183584;
        case 0x183588u: goto label_183588;
        case 0x18358cu: goto label_18358c;
        case 0x183590u: goto label_183590;
        case 0x183594u: goto label_183594;
        case 0x183598u: goto label_183598;
        case 0x18359cu: goto label_18359c;
        case 0x1835a0u: goto label_1835a0;
        case 0x1835a4u: goto label_1835a4;
        case 0x1835a8u: goto label_1835a8;
        case 0x1835acu: goto label_1835ac;
        case 0x1835b0u: goto label_1835b0;
        case 0x1835b4u: goto label_1835b4;
        case 0x1835b8u: goto label_1835b8;
        case 0x1835bcu: goto label_1835bc;
        case 0x1835c0u: goto label_1835c0;
        case 0x1835c4u: goto label_1835c4;
        case 0x1835c8u: goto label_1835c8;
        case 0x1835ccu: goto label_1835cc;
        case 0x1835d0u: goto label_1835d0;
        case 0x1835d4u: goto label_1835d4;
        case 0x1835d8u: goto label_1835d8;
        case 0x1835dcu: goto label_1835dc;
        case 0x1835e0u: goto label_1835e0;
        case 0x1835e4u: goto label_1835e4;
        case 0x1835e8u: goto label_1835e8;
        case 0x1835ecu: goto label_1835ec;
        case 0x1835f0u: goto label_1835f0;
        case 0x1835f4u: goto label_1835f4;
        case 0x1835f8u: goto label_1835f8;
        case 0x1835fcu: goto label_1835fc;
        case 0x183600u: goto label_183600;
        case 0x183604u: goto label_183604;
        case 0x183608u: goto label_183608;
        case 0x18360cu: goto label_18360c;
        case 0x183610u: goto label_183610;
        case 0x183614u: goto label_183614;
        case 0x183618u: goto label_183618;
        case 0x18361cu: goto label_18361c;
        case 0x183620u: goto label_183620;
        case 0x183624u: goto label_183624;
        case 0x183628u: goto label_183628;
        case 0x18362cu: goto label_18362c;
        case 0x183630u: goto label_183630;
        case 0x183634u: goto label_183634;
        case 0x183638u: goto label_183638;
        case 0x18363cu: goto label_18363c;
        case 0x183640u: goto label_183640;
        case 0x183644u: goto label_183644;
        case 0x183648u: goto label_183648;
        case 0x18364cu: goto label_18364c;
        case 0x183650u: goto label_183650;
        case 0x183654u: goto label_183654;
        case 0x183658u: goto label_183658;
        case 0x18365cu: goto label_18365c;
        case 0x183660u: goto label_183660;
        case 0x183664u: goto label_183664;
        case 0x183668u: goto label_183668;
        case 0x18366cu: goto label_18366c;
        case 0x183670u: goto label_183670;
        case 0x183674u: goto label_183674;
        case 0x183678u: goto label_183678;
        case 0x18367cu: goto label_18367c;
        case 0x183680u: goto label_183680;
        case 0x183684u: goto label_183684;
        case 0x183688u: goto label_183688;
        case 0x18368cu: goto label_18368c;
        case 0x183690u: goto label_183690;
        case 0x183694u: goto label_183694;
        case 0x183698u: goto label_183698;
        case 0x18369cu: goto label_18369c;
        case 0x1836a0u: goto label_1836a0;
        case 0x1836a4u: goto label_1836a4;
        case 0x1836a8u: goto label_1836a8;
        case 0x1836acu: goto label_1836ac;
        case 0x1836b0u: goto label_1836b0;
        case 0x1836b4u: goto label_1836b4;
        case 0x1836b8u: goto label_1836b8;
        case 0x1836bcu: goto label_1836bc;
        case 0x1836c0u: goto label_1836c0;
        case 0x1836c4u: goto label_1836c4;
        case 0x1836c8u: goto label_1836c8;
        case 0x1836ccu: goto label_1836cc;
        case 0x1836d0u: goto label_1836d0;
        case 0x1836d4u: goto label_1836d4;
        case 0x1836d8u: goto label_1836d8;
        case 0x1836dcu: goto label_1836dc;
        case 0x1836e0u: goto label_1836e0;
        case 0x1836e4u: goto label_1836e4;
        case 0x1836e8u: goto label_1836e8;
        case 0x1836ecu: goto label_1836ec;
        case 0x1836f0u: goto label_1836f0;
        case 0x1836f4u: goto label_1836f4;
        case 0x1836f8u: goto label_1836f8;
        case 0x1836fcu: goto label_1836fc;
        case 0x183700u: goto label_183700;
        case 0x183704u: goto label_183704;
        case 0x183708u: goto label_183708;
        case 0x18370cu: goto label_18370c;
        case 0x183710u: goto label_183710;
        case 0x183714u: goto label_183714;
        case 0x183718u: goto label_183718;
        case 0x18371cu: goto label_18371c;
        case 0x183720u: goto label_183720;
        case 0x183724u: goto label_183724;
        case 0x183728u: goto label_183728;
        case 0x18372cu: goto label_18372c;
        case 0x183730u: goto label_183730;
        case 0x183734u: goto label_183734;
        case 0x183738u: goto label_183738;
        case 0x18373cu: goto label_18373c;
        case 0x183740u: goto label_183740;
        case 0x183744u: goto label_183744;
        case 0x183748u: goto label_183748;
        case 0x18374cu: goto label_18374c;
        case 0x183750u: goto label_183750;
        case 0x183754u: goto label_183754;
        case 0x183758u: goto label_183758;
        case 0x18375cu: goto label_18375c;
        case 0x183760u: goto label_183760;
        case 0x183764u: goto label_183764;
        case 0x183768u: goto label_183768;
        case 0x18376cu: goto label_18376c;
        case 0x183770u: goto label_183770;
        case 0x183774u: goto label_183774;
        case 0x183778u: goto label_183778;
        case 0x18377cu: goto label_18377c;
        case 0x183780u: goto label_183780;
        case 0x183784u: goto label_183784;
        case 0x183788u: goto label_183788;
        case 0x18378cu: goto label_18378c;
        case 0x183790u: goto label_183790;
        case 0x183794u: goto label_183794;
        case 0x183798u: goto label_183798;
        case 0x18379cu: goto label_18379c;
        case 0x1837a0u: goto label_1837a0;
        case 0x1837a4u: goto label_1837a4;
        case 0x1837a8u: goto label_1837a8;
        case 0x1837acu: goto label_1837ac;
        case 0x1837b0u: goto label_1837b0;
        case 0x1837b4u: goto label_1837b4;
        case 0x1837b8u: goto label_1837b8;
        case 0x1837bcu: goto label_1837bc;
        case 0x1837c0u: goto label_1837c0;
        case 0x1837c4u: goto label_1837c4;
        case 0x1837c8u: goto label_1837c8;
        case 0x1837ccu: goto label_1837cc;
        case 0x1837d0u: goto label_1837d0;
        case 0x1837d4u: goto label_1837d4;
        case 0x1837d8u: goto label_1837d8;
        case 0x1837dcu: goto label_1837dc;
        case 0x1837e0u: goto label_1837e0;
        case 0x1837e4u: goto label_1837e4;
        case 0x1837e8u: goto label_1837e8;
        case 0x1837ecu: goto label_1837ec;
        case 0x1837f0u: goto label_1837f0;
        case 0x1837f4u: goto label_1837f4;
        case 0x1837f8u: goto label_1837f8;
        case 0x1837fcu: goto label_1837fc;
        case 0x183800u: goto label_183800;
        case 0x183804u: goto label_183804;
        case 0x183808u: goto label_183808;
        case 0x18380cu: goto label_18380c;
        case 0x183810u: goto label_183810;
        case 0x183814u: goto label_183814;
        case 0x183818u: goto label_183818;
        case 0x18381cu: goto label_18381c;
        case 0x183820u: goto label_183820;
        case 0x183824u: goto label_183824;
        case 0x183828u: goto label_183828;
        case 0x18382cu: goto label_18382c;
        case 0x183830u: goto label_183830;
        case 0x183834u: goto label_183834;
        case 0x183838u: goto label_183838;
        case 0x18383cu: goto label_18383c;
        case 0x183840u: goto label_183840;
        case 0x183844u: goto label_183844;
        case 0x183848u: goto label_183848;
        case 0x18384cu: goto label_18384c;
        case 0x183850u: goto label_183850;
        case 0x183854u: goto label_183854;
        case 0x183858u: goto label_183858;
        case 0x18385cu: goto label_18385c;
        case 0x183860u: goto label_183860;
        case 0x183864u: goto label_183864;
        case 0x183868u: goto label_183868;
        case 0x18386cu: goto label_18386c;
        case 0x183870u: goto label_183870;
        case 0x183874u: goto label_183874;
        case 0x183878u: goto label_183878;
        case 0x18387cu: goto label_18387c;
        case 0x183880u: goto label_183880;
        case 0x183884u: goto label_183884;
        case 0x183888u: goto label_183888;
        case 0x18388cu: goto label_18388c;
        case 0x183890u: goto label_183890;
        case 0x183894u: goto label_183894;
        case 0x183898u: goto label_183898;
        case 0x18389cu: goto label_18389c;
        case 0x1838a0u: goto label_1838a0;
        case 0x1838a4u: goto label_1838a4;
        case 0x1838a8u: goto label_1838a8;
        case 0x1838acu: goto label_1838ac;
        case 0x1838b0u: goto label_1838b0;
        case 0x1838b4u: goto label_1838b4;
        case 0x1838b8u: goto label_1838b8;
        case 0x1838bcu: goto label_1838bc;
        case 0x1838c0u: goto label_1838c0;
        case 0x1838c4u: goto label_1838c4;
        case 0x1838c8u: goto label_1838c8;
        case 0x1838ccu: goto label_1838cc;
        case 0x1838d0u: goto label_1838d0;
        case 0x1838d4u: goto label_1838d4;
        case 0x1838d8u: goto label_1838d8;
        case 0x1838dcu: goto label_1838dc;
        case 0x1838e0u: goto label_1838e0;
        case 0x1838e4u: goto label_1838e4;
        case 0x1838e8u: goto label_1838e8;
        case 0x1838ecu: goto label_1838ec;
        case 0x1838f0u: goto label_1838f0;
        case 0x1838f4u: goto label_1838f4;
        case 0x1838f8u: goto label_1838f8;
        case 0x1838fcu: goto label_1838fc;
        case 0x183900u: goto label_183900;
        case 0x183904u: goto label_183904;
        case 0x183908u: goto label_183908;
        case 0x18390cu: goto label_18390c;
        case 0x183910u: goto label_183910;
        case 0x183914u: goto label_183914;
        case 0x183918u: goto label_183918;
        case 0x18391cu: goto label_18391c;
        case 0x183920u: goto label_183920;
        case 0x183924u: goto label_183924;
        case 0x183928u: goto label_183928;
        case 0x18392cu: goto label_18392c;
        case 0x183930u: goto label_183930;
        case 0x183934u: goto label_183934;
        case 0x183938u: goto label_183938;
        case 0x18393cu: goto label_18393c;
        case 0x183940u: goto label_183940;
        case 0x183944u: goto label_183944;
        case 0x183948u: goto label_183948;
        case 0x18394cu: goto label_18394c;
        case 0x183950u: goto label_183950;
        case 0x183954u: goto label_183954;
        case 0x183958u: goto label_183958;
        case 0x18395cu: goto label_18395c;
        case 0x183960u: goto label_183960;
        case 0x183964u: goto label_183964;
        case 0x183968u: goto label_183968;
        case 0x18396cu: goto label_18396c;
        case 0x183970u: goto label_183970;
        case 0x183974u: goto label_183974;
        case 0x183978u: goto label_183978;
        case 0x18397cu: goto label_18397c;
        case 0x183980u: goto label_183980;
        case 0x183984u: goto label_183984;
        case 0x183988u: goto label_183988;
        case 0x18398cu: goto label_18398c;
        case 0x183990u: goto label_183990;
        case 0x183994u: goto label_183994;
        case 0x183998u: goto label_183998;
        case 0x18399cu: goto label_18399c;
        case 0x1839a0u: goto label_1839a0;
        case 0x1839a4u: goto label_1839a4;
        case 0x1839a8u: goto label_1839a8;
        case 0x1839acu: goto label_1839ac;
        case 0x1839b0u: goto label_1839b0;
        case 0x1839b4u: goto label_1839b4;
        case 0x1839b8u: goto label_1839b8;
        case 0x1839bcu: goto label_1839bc;
        case 0x1839c0u: goto label_1839c0;
        case 0x1839c4u: goto label_1839c4;
        case 0x1839c8u: goto label_1839c8;
        case 0x1839ccu: goto label_1839cc;
        case 0x1839d0u: goto label_1839d0;
        case 0x1839d4u: goto label_1839d4;
        case 0x1839d8u: goto label_1839d8;
        case 0x1839dcu: goto label_1839dc;
        case 0x1839e0u: goto label_1839e0;
        case 0x1839e4u: goto label_1839e4;
        case 0x1839e8u: goto label_1839e8;
        case 0x1839ecu: goto label_1839ec;
        case 0x1839f0u: goto label_1839f0;
        case 0x1839f4u: goto label_1839f4;
        case 0x1839f8u: goto label_1839f8;
        case 0x1839fcu: goto label_1839fc;
        case 0x183a00u: goto label_183a00;
        case 0x183a04u: goto label_183a04;
        case 0x183a08u: goto label_183a08;
        case 0x183a0cu: goto label_183a0c;
        case 0x183a10u: goto label_183a10;
        case 0x183a14u: goto label_183a14;
        case 0x183a18u: goto label_183a18;
        case 0x183a1cu: goto label_183a1c;
        case 0x183a20u: goto label_183a20;
        case 0x183a24u: goto label_183a24;
        case 0x183a28u: goto label_183a28;
        case 0x183a2cu: goto label_183a2c;
        case 0x183a30u: goto label_183a30;
        case 0x183a34u: goto label_183a34;
        case 0x183a38u: goto label_183a38;
        case 0x183a3cu: goto label_183a3c;
        case 0x183a40u: goto label_183a40;
        case 0x183a44u: goto label_183a44;
        case 0x183a48u: goto label_183a48;
        case 0x183a4cu: goto label_183a4c;
        case 0x183a50u: goto label_183a50;
        case 0x183a54u: goto label_183a54;
        case 0x183a58u: goto label_183a58;
        case 0x183a5cu: goto label_183a5c;
        case 0x183a60u: goto label_183a60;
        case 0x183a64u: goto label_183a64;
        case 0x183a68u: goto label_183a68;
        case 0x183a6cu: goto label_183a6c;
        case 0x183a70u: goto label_183a70;
        case 0x183a74u: goto label_183a74;
        case 0x183a78u: goto label_183a78;
        case 0x183a7cu: goto label_183a7c;
        case 0x183a80u: goto label_183a80;
        case 0x183a84u: goto label_183a84;
        case 0x183a88u: goto label_183a88;
        case 0x183a8cu: goto label_183a8c;
        case 0x183a90u: goto label_183a90;
        case 0x183a94u: goto label_183a94;
        case 0x183a98u: goto label_183a98;
        case 0x183a9cu: goto label_183a9c;
        case 0x183aa0u: goto label_183aa0;
        case 0x183aa4u: goto label_183aa4;
        case 0x183aa8u: goto label_183aa8;
        case 0x183aacu: goto label_183aac;
        case 0x183ab0u: goto label_183ab0;
        case 0x183ab4u: goto label_183ab4;
        case 0x183ab8u: goto label_183ab8;
        case 0x183abcu: goto label_183abc;
        case 0x183ac0u: goto label_183ac0;
        case 0x183ac4u: goto label_183ac4;
        case 0x183ac8u: goto label_183ac8;
        case 0x183accu: goto label_183acc;
        case 0x183ad0u: goto label_183ad0;
        case 0x183ad4u: goto label_183ad4;
        case 0x183ad8u: goto label_183ad8;
        case 0x183adcu: goto label_183adc;
        case 0x183ae0u: goto label_183ae0;
        case 0x183ae4u: goto label_183ae4;
        case 0x183ae8u: goto label_183ae8;
        case 0x183aecu: goto label_183aec;
        case 0x183af0u: goto label_183af0;
        case 0x183af4u: goto label_183af4;
        case 0x183af8u: goto label_183af8;
        case 0x183afcu: goto label_183afc;
        case 0x183b00u: goto label_183b00;
        case 0x183b04u: goto label_183b04;
        case 0x183b08u: goto label_183b08;
        case 0x183b0cu: goto label_183b0c;
        case 0x183b10u: goto label_183b10;
        case 0x183b14u: goto label_183b14;
        case 0x183b18u: goto label_183b18;
        case 0x183b1cu: goto label_183b1c;
        case 0x183b20u: goto label_183b20;
        case 0x183b24u: goto label_183b24;
        case 0x183b28u: goto label_183b28;
        case 0x183b2cu: goto label_183b2c;
        case 0x183b30u: goto label_183b30;
        case 0x183b34u: goto label_183b34;
        case 0x183b38u: goto label_183b38;
        case 0x183b3cu: goto label_183b3c;
        case 0x183b40u: goto label_183b40;
        case 0x183b44u: goto label_183b44;
        case 0x183b48u: goto label_183b48;
        case 0x183b4cu: goto label_183b4c;
        case 0x183b50u: goto label_183b50;
        case 0x183b54u: goto label_183b54;
        case 0x183b58u: goto label_183b58;
        case 0x183b5cu: goto label_183b5c;
        case 0x183b60u: goto label_183b60;
        case 0x183b64u: goto label_183b64;
        case 0x183b68u: goto label_183b68;
        case 0x183b6cu: goto label_183b6c;
        case 0x183b70u: goto label_183b70;
        case 0x183b74u: goto label_183b74;
        case 0x183b78u: goto label_183b78;
        case 0x183b7cu: goto label_183b7c;
        case 0x183b80u: goto label_183b80;
        case 0x183b84u: goto label_183b84;
        case 0x183b88u: goto label_183b88;
        case 0x183b8cu: goto label_183b8c;
        case 0x183b90u: goto label_183b90;
        case 0x183b94u: goto label_183b94;
        case 0x183b98u: goto label_183b98;
        case 0x183b9cu: goto label_183b9c;
        case 0x183ba0u: goto label_183ba0;
        case 0x183ba4u: goto label_183ba4;
        case 0x183ba8u: goto label_183ba8;
        case 0x183bacu: goto label_183bac;
        case 0x183bb0u: goto label_183bb0;
        case 0x183bb4u: goto label_183bb4;
        case 0x183bb8u: goto label_183bb8;
        case 0x183bbcu: goto label_183bbc;
        case 0x183bc0u: goto label_183bc0;
        case 0x183bc4u: goto label_183bc4;
        case 0x183bc8u: goto label_183bc8;
        case 0x183bccu: goto label_183bcc;
        case 0x183bd0u: goto label_183bd0;
        case 0x183bd4u: goto label_183bd4;
        case 0x183bd8u: goto label_183bd8;
        case 0x183bdcu: goto label_183bdc;
        case 0x183be0u: goto label_183be0;
        case 0x183be4u: goto label_183be4;
        case 0x183be8u: goto label_183be8;
        case 0x183becu: goto label_183bec;
        case 0x183bf0u: goto label_183bf0;
        case 0x183bf4u: goto label_183bf4;
        case 0x183bf8u: goto label_183bf8;
        case 0x183bfcu: goto label_183bfc;
        case 0x183c00u: goto label_183c00;
        case 0x183c04u: goto label_183c04;
        case 0x183c08u: goto label_183c08;
        case 0x183c0cu: goto label_183c0c;
        case 0x183c10u: goto label_183c10;
        case 0x183c14u: goto label_183c14;
        case 0x183c18u: goto label_183c18;
        case 0x183c1cu: goto label_183c1c;
        case 0x183c20u: goto label_183c20;
        case 0x183c24u: goto label_183c24;
        case 0x183c28u: goto label_183c28;
        case 0x183c2cu: goto label_183c2c;
        case 0x183c30u: goto label_183c30;
        case 0x183c34u: goto label_183c34;
        case 0x183c38u: goto label_183c38;
        case 0x183c3cu: goto label_183c3c;
        case 0x183c40u: goto label_183c40;
        case 0x183c44u: goto label_183c44;
        case 0x183c48u: goto label_183c48;
        case 0x183c4cu: goto label_183c4c;
        case 0x183c50u: goto label_183c50;
        case 0x183c54u: goto label_183c54;
        case 0x183c58u: goto label_183c58;
        case 0x183c5cu: goto label_183c5c;
        case 0x183c60u: goto label_183c60;
        case 0x183c64u: goto label_183c64;
        case 0x183c68u: goto label_183c68;
        case 0x183c6cu: goto label_183c6c;
        case 0x183c70u: goto label_183c70;
        case 0x183c74u: goto label_183c74;
        case 0x183c78u: goto label_183c78;
        case 0x183c7cu: goto label_183c7c;
        case 0x183c80u: goto label_183c80;
        case 0x183c84u: goto label_183c84;
        case 0x183c88u: goto label_183c88;
        case 0x183c8cu: goto label_183c8c;
        case 0x183c90u: goto label_183c90;
        case 0x183c94u: goto label_183c94;
        case 0x183c98u: goto label_183c98;
        case 0x183c9cu: goto label_183c9c;
        case 0x183ca0u: goto label_183ca0;
        case 0x183ca4u: goto label_183ca4;
        case 0x183ca8u: goto label_183ca8;
        case 0x183cacu: goto label_183cac;
        case 0x183cb0u: goto label_183cb0;
        case 0x183cb4u: goto label_183cb4;
        case 0x183cb8u: goto label_183cb8;
        case 0x183cbcu: goto label_183cbc;
        case 0x183cc0u: goto label_183cc0;
        case 0x183cc4u: goto label_183cc4;
        case 0x183cc8u: goto label_183cc8;
        case 0x183cccu: goto label_183ccc;
        case 0x183cd0u: goto label_183cd0;
        case 0x183cd4u: goto label_183cd4;
        case 0x183cd8u: goto label_183cd8;
        case 0x183cdcu: goto label_183cdc;
        case 0x183ce0u: goto label_183ce0;
        case 0x183ce4u: goto label_183ce4;
        case 0x183ce8u: goto label_183ce8;
        case 0x183cecu: goto label_183cec;
        case 0x183cf0u: goto label_183cf0;
        case 0x183cf4u: goto label_183cf4;
        case 0x183cf8u: goto label_183cf8;
        case 0x183cfcu: goto label_183cfc;
        case 0x183d00u: goto label_183d00;
        case 0x183d04u: goto label_183d04;
        case 0x183d08u: goto label_183d08;
        case 0x183d0cu: goto label_183d0c;
        case 0x183d10u: goto label_183d10;
        case 0x183d14u: goto label_183d14;
        case 0x183d18u: goto label_183d18;
        case 0x183d1cu: goto label_183d1c;
        case 0x183d20u: goto label_183d20;
        case 0x183d24u: goto label_183d24;
        case 0x183d28u: goto label_183d28;
        case 0x183d2cu: goto label_183d2c;
        case 0x183d30u: goto label_183d30;
        case 0x183d34u: goto label_183d34;
        case 0x183d38u: goto label_183d38;
        case 0x183d3cu: goto label_183d3c;
        case 0x183d40u: goto label_183d40;
        case 0x183d44u: goto label_183d44;
        case 0x183d48u: goto label_183d48;
        case 0x183d4cu: goto label_183d4c;
        case 0x183d50u: goto label_183d50;
        case 0x183d54u: goto label_183d54;
        case 0x183d58u: goto label_183d58;
        case 0x183d5cu: goto label_183d5c;
        case 0x183d60u: goto label_183d60;
        case 0x183d64u: goto label_183d64;
        case 0x183d68u: goto label_183d68;
        case 0x183d6cu: goto label_183d6c;
        case 0x183d70u: goto label_183d70;
        case 0x183d74u: goto label_183d74;
        case 0x183d78u: goto label_183d78;
        case 0x183d7cu: goto label_183d7c;
        case 0x183d80u: goto label_183d80;
        case 0x183d84u: goto label_183d84;
        case 0x183d88u: goto label_183d88;
        case 0x183d8cu: goto label_183d8c;
        case 0x183d90u: goto label_183d90;
        case 0x183d94u: goto label_183d94;
        case 0x183d98u: goto label_183d98;
        case 0x183d9cu: goto label_183d9c;
        case 0x183da0u: goto label_183da0;
        case 0x183da4u: goto label_183da4;
        case 0x183da8u: goto label_183da8;
        case 0x183dacu: goto label_183dac;
        case 0x183db0u: goto label_183db0;
        case 0x183db4u: goto label_183db4;
        case 0x183db8u: goto label_183db8;
        case 0x183dbcu: goto label_183dbc;
        case 0x183dc0u: goto label_183dc0;
        case 0x183dc4u: goto label_183dc4;
        case 0x183dc8u: goto label_183dc8;
        case 0x183dccu: goto label_183dcc;
        case 0x183dd0u: goto label_183dd0;
        case 0x183dd4u: goto label_183dd4;
        case 0x183dd8u: goto label_183dd8;
        case 0x183ddcu: goto label_183ddc;
        case 0x183de0u: goto label_183de0;
        case 0x183de4u: goto label_183de4;
        case 0x183de8u: goto label_183de8;
        case 0x183decu: goto label_183dec;
        case 0x183df0u: goto label_183df0;
        case 0x183df4u: goto label_183df4;
        case 0x183df8u: goto label_183df8;
        case 0x183dfcu: goto label_183dfc;
        case 0x183e00u: goto label_183e00;
        case 0x183e04u: goto label_183e04;
        case 0x183e08u: goto label_183e08;
        case 0x183e0cu: goto label_183e0c;
        case 0x183e10u: goto label_183e10;
        case 0x183e14u: goto label_183e14;
        case 0x183e18u: goto label_183e18;
        case 0x183e1cu: goto label_183e1c;
        case 0x183e20u: goto label_183e20;
        case 0x183e24u: goto label_183e24;
        case 0x183e28u: goto label_183e28;
        case 0x183e2cu: goto label_183e2c;
        case 0x183e30u: goto label_183e30;
        case 0x183e34u: goto label_183e34;
        case 0x183e38u: goto label_183e38;
        case 0x183e3cu: goto label_183e3c;
        case 0x183e40u: goto label_183e40;
        case 0x183e44u: goto label_183e44;
        case 0x183e48u: goto label_183e48;
        case 0x183e4cu: goto label_183e4c;
        case 0x183e50u: goto label_183e50;
        case 0x183e54u: goto label_183e54;
        case 0x183e58u: goto label_183e58;
        case 0x183e5cu: goto label_183e5c;
        case 0x183e60u: goto label_183e60;
        case 0x183e64u: goto label_183e64;
        default: break;
    }

    ctx->pc = 0x1834a8u;

label_1834a8:
    // 0x1834a8: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x1834a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_1834ac:
    // 0x1834ac: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1834acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1834b0:
    // 0x1834b0: 0x8c43ced8  lw          $v1, -0x3128($v0)
    ctx->pc = 0x1834b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954712)));
label_1834b4:
    // 0x1834b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1834b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1834b8:
    // 0x1834b8: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_1834bc:
    if (ctx->pc == 0x1834BCu) {
        ctx->pc = 0x1834BCu;
            // 0x1834bc: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->pc = 0x1834C0u;
        goto label_1834c0;
    }
    ctx->pc = 0x1834B8u;
    {
        const bool branch_taken_0x1834b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1834BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1834B8u;
            // 0x1834bc: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1834b8) {
            ctx->pc = 0x1834D0u;
            goto label_1834d0;
        }
    }
    ctx->pc = 0x1834C0u;
label_1834c0:
    // 0x1834c0: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x1834c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_1834c4:
    // 0x1834c4: 0x8c43ced0  lw          $v1, -0x3130($v0)
    ctx->pc = 0x1834c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954704)));
label_1834c8:
    // 0x1834c8: 0x5860000e  blezl       $v1, . + 4 + (0xE << 2)
label_1834cc:
    if (ctx->pc == 0x1834CCu) {
        ctx->pc = 0x1834CCu;
            // 0x1834cc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x1834D0u;
        goto label_1834d0;
    }
    ctx->pc = 0x1834C8u;
    {
        const bool branch_taken_0x1834c8 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1834c8) {
            ctx->pc = 0x1834CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1834C8u;
            // 0x1834cc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x183504u;
            goto label_183504;
        }
    }
    ctx->pc = 0x1834D0u;
label_1834d0:
    // 0x1834d0: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x1834d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1834d4:
    // 0x1834d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1834d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1834d8:
    // 0x1834d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1834d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1834dc:
    // 0x1834dc: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1834dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1834e0:
    // 0x1834e0: 0xc05f1dc  jal         func_17C770
label_1834e4:
    if (ctx->pc == 0x1834E4u) {
        ctx->pc = 0x1834E4u;
            // 0x1834e4: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1834E8u;
        goto label_1834e8;
    }
    ctx->pc = 0x1834E0u;
    SET_GPR_U32(ctx, 31, 0x1834E8u);
    ctx->pc = 0x1834E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1834E0u;
            // 0x1834e4: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C770u;
    if (runtime->hasFunction(0x17C770u)) {
        auto targetFn = runtime->lookupFunction(0x17C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1834E8u; }
        if (ctx->pc != 0x1834E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C770_0x17c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1834E8u; }
        if (ctx->pc != 0x1834E8u) { return; }
    }
    ctx->pc = 0x1834E8u;
label_1834e8:
    // 0x1834e8: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x1834e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
label_1834ec:
    // 0x1834ec: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1834ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1834f0:
    // 0x1834f0: 0x2463cf10  addiu       $v1, $v1, -0x30F0
    ctx->pc = 0x1834f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954768));
label_1834f4:
    // 0x1834f4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1834f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1834f8:
    // 0x1834f8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1834f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1834fc:
    // 0x1834fc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1834fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_183500:
    // 0x183500: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x183500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_183504:
    // 0x183504: 0x3e00008  jr          $ra
label_183508:
    if (ctx->pc == 0x183508u) {
        ctx->pc = 0x183508u;
            // 0x183508: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x18350Cu;
        goto label_18350c;
    }
    ctx->pc = 0x183504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183504u;
            // 0x183508: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18350Cu;
label_18350c:
    // 0x18350c: 0x0  nop
    ctx->pc = 0x18350cu;
    // NOP
label_183510:
    // 0x183510: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x183510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_183514:
    // 0x183514: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x183514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_183518:
    // 0x183518: 0x8c43ced8  lw          $v1, -0x3128($v0)
    ctx->pc = 0x183518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954712)));
label_18351c:
    // 0x18351c: 0x54660006  bnel        $v1, $a2, . + 4 + (0x6 << 2)
label_183520:
    if (ctx->pc == 0x183520u) {
        ctx->pc = 0x183520u;
            // 0x183520: 0x80820054  lb          $v0, 0x54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 84)));
        ctx->pc = 0x183524u;
        goto label_183524;
    }
    ctx->pc = 0x18351Cu;
    {
        const bool branch_taken_0x18351c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x18351c) {
            ctx->pc = 0x183520u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18351Cu;
            // 0x183520: 0x80820054  lb          $v0, 0x54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x183538u;
            goto label_183538;
        }
    }
    ctx->pc = 0x183524u;
label_183524:
    // 0x183524: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x183524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_183528:
    // 0x183528: 0x8c43ced0  lw          $v1, -0x3130($v0)
    ctx->pc = 0x183528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954704)));
label_18352c:
    // 0x18352c: 0x18600009  blez        $v1, . + 4 + (0x9 << 2)
label_183530:
    if (ctx->pc == 0x183530u) {
        ctx->pc = 0x183534u;
        goto label_183534;
    }
    ctx->pc = 0x18352Cu;
    {
        const bool branch_taken_0x18352c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x18352c) {
            ctx->pc = 0x183554u;
            goto label_183554;
        }
    }
    ctx->pc = 0x183534u;
label_183534:
    // 0x183534: 0x80820054  lb          $v0, 0x54($a0)
    ctx->pc = 0x183534u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 84)));
label_183538:
    // 0x183538: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
label_18353c:
    if (ctx->pc == 0x18353Cu) {
        ctx->pc = 0x18353Cu;
            // 0x18353c: 0x3c02005f  lui         $v0, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
        ctx->pc = 0x183540u;
        goto label_183540;
    }
    ctx->pc = 0x183538u;
    {
        const bool branch_taken_0x183538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x18353Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183538u;
            // 0x18353c: 0x3c02005f  lui         $v0, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183538) {
            ctx->pc = 0x183554u;
            goto label_183554;
        }
    }
    ctx->pc = 0x183540u;
label_183540:
    // 0x183540: 0x8c43cf00  lw          $v1, -0x3100($v0)
    ctx->pc = 0x183540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954752)));
label_183544:
    // 0x183544: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
label_183548:
    if (ctx->pc == 0x183548u) {
        ctx->pc = 0x183548u;
            // 0x183548: 0xa0850054  sb          $a1, 0x54($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 84), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = 0x18354Cu;
        goto label_18354c;
    }
    ctx->pc = 0x183544u;
    {
        const bool branch_taken_0x183544 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x183544) {
            ctx->pc = 0x183548u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x183544u;
            // 0x183548: 0xa0850054  sb          $a1, 0x54($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 84), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x183554u;
            goto label_183554;
        }
    }
    ctx->pc = 0x18354Cu;
label_18354c:
    // 0x18354c: 0x54a60001  bnel        $a1, $a2, . + 4 + (0x1 << 2)
label_183550:
    if (ctx->pc == 0x183550u) {
        ctx->pc = 0x183550u;
            // 0x183550: 0xa0850054  sb          $a1, 0x54($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 84), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = 0x183554u;
        goto label_183554;
    }
    ctx->pc = 0x18354Cu;
    {
        const bool branch_taken_0x18354c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x18354c) {
            ctx->pc = 0x183550u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18354Cu;
            // 0x183550: 0xa0850054  sb          $a1, 0x54($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 84), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x183554u;
            goto label_183554;
        }
    }
    ctx->pc = 0x183554u;
label_183554:
    // 0x183554: 0x3e00008  jr          $ra
label_183558:
    if (ctx->pc == 0x183558u) {
        ctx->pc = 0x18355Cu;
        goto label_18355c;
    }
    ctx->pc = 0x183554u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18355Cu;
label_18355c:
    // 0x18355c: 0x0  nop
    ctx->pc = 0x18355cu;
    // NOP
label_183560:
    // 0x183560: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x183560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_183564:
    // 0x183564: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x183564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_183568:
    // 0x183568: 0x8c43ced8  lw          $v1, -0x3128($v0)
    ctx->pc = 0x183568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954712)));
label_18356c:
    // 0x18356c: 0x14660005  bne         $v1, $a2, . + 4 + (0x5 << 2)
label_183570:
    if (ctx->pc == 0x183570u) {
        ctx->pc = 0x183570u;
            // 0x183570: 0x2ca70002  sltiu       $a3, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->pc = 0x183574u;
        goto label_183574;
    }
    ctx->pc = 0x18356Cu;
    {
        const bool branch_taken_0x18356c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x183570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18356Cu;
            // 0x183570: 0x2ca70002  sltiu       $a3, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18356c) {
            ctx->pc = 0x183584u;
            goto label_183584;
        }
    }
    ctx->pc = 0x183574u;
label_183574:
    // 0x183574: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x183574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_183578:
    // 0x183578: 0x8c43ced0  lw          $v1, -0x3130($v0)
    ctx->pc = 0x183578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954704)));
label_18357c:
    // 0x18357c: 0x18600008  blez        $v1, . + 4 + (0x8 << 2)
label_183580:
    if (ctx->pc == 0x183580u) {
        ctx->pc = 0x183584u;
        goto label_183584;
    }
    ctx->pc = 0x18357Cu;
    {
        const bool branch_taken_0x18357c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x18357c) {
            ctx->pc = 0x1835A0u;
            goto label_1835a0;
        }
    }
    ctx->pc = 0x183584u;
label_183584:
    // 0x183584: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
label_183588:
    if (ctx->pc == 0x183588u) {
        ctx->pc = 0x18358Cu;
        goto label_18358c;
    }
    ctx->pc = 0x183584u;
    {
        const bool branch_taken_0x183584 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x183584) {
            ctx->pc = 0x1835A0u;
            goto label_1835a0;
        }
    }
    ctx->pc = 0x18358Cu;
label_18358c:
    // 0x18358c: 0x80820056  lb          $v0, 0x56($a0)
    ctx->pc = 0x18358cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 86)));
label_183590:
    // 0x183590: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
label_183594:
    if (ctx->pc == 0x183594u) {
        ctx->pc = 0x183594u;
            // 0x183594: 0x90830056  lbu         $v1, 0x56($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 86)));
        ctx->pc = 0x183598u;
        goto label_183598;
    }
    ctx->pc = 0x183590u;
    {
        const bool branch_taken_0x183590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x183594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183590u;
            // 0x183594: 0x90830056  lbu         $v1, 0x56($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 86)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183590) {
            ctx->pc = 0x1835A0u;
            goto label_1835a0;
        }
    }
    ctx->pc = 0x183598u;
label_183598:
    // 0x183598: 0xa0850056  sb          $a1, 0x56($a0)
    ctx->pc = 0x183598u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 86), (uint8_t)GPR_U32(ctx, 5));
label_18359c:
    // 0x18359c: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x18359cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
label_1835a0:
    // 0x1835a0: 0x3e00008  jr          $ra
label_1835a4:
    if (ctx->pc == 0x1835A4u) {
        ctx->pc = 0x1835A8u;
        goto label_1835a8;
    }
    ctx->pc = 0x1835A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1835A8u;
label_1835a8:
    // 0x1835a8: 0x3e00008  jr          $ra
label_1835ac:
    if (ctx->pc == 0x1835ACu) {
        ctx->pc = 0x1835ACu;
            // 0x1835ac: 0x80820057  lb          $v0, 0x57($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 87)));
        ctx->pc = 0x1835B0u;
        goto label_1835b0;
    }
    ctx->pc = 0x1835A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1835ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1835A8u;
            // 0x1835ac: 0x80820057  lb          $v0, 0x57($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 87)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1835B0u;
label_1835b0:
    // 0x1835b0: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x1835b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_1835b4:
    // 0x1835b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1835b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1835b8:
    // 0x1835b8: 0x8c43ced8  lw          $v1, -0x3128($v0)
    ctx->pc = 0x1835b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954712)));
label_1835bc:
    // 0x1835bc: 0x54650006  bnel        $v1, $a1, . + 4 + (0x6 << 2)
label_1835c0:
    if (ctx->pc == 0x1835C0u) {
        ctx->pc = 0x1835C0u;
            // 0x1835c0: 0x90820001  lbu         $v0, 0x1($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
        ctx->pc = 0x1835C4u;
        goto label_1835c4;
    }
    ctx->pc = 0x1835BCu;
    {
        const bool branch_taken_0x1835bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1835bc) {
            ctx->pc = 0x1835C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1835BCu;
            // 0x1835c0: 0x90820001  lbu         $v0, 0x1($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1835D8u;
            goto label_1835d8;
        }
    }
    ctx->pc = 0x1835C4u;
label_1835c4:
    // 0x1835c4: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x1835c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_1835c8:
    // 0x1835c8: 0x8c43ced0  lw          $v1, -0x3130($v0)
    ctx->pc = 0x1835c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954704)));
label_1835cc:
    // 0x1835cc: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
label_1835d0:
    if (ctx->pc == 0x1835D0u) {
        ctx->pc = 0x1835D4u;
        goto label_1835d4;
    }
    ctx->pc = 0x1835CCu;
    {
        const bool branch_taken_0x1835cc = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1835cc) {
            ctx->pc = 0x1835DCu;
            goto label_1835dc;
        }
    }
    ctx->pc = 0x1835D4u;
label_1835d4:
    // 0x1835d4: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x1835d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_1835d8:
    // 0x1835d8: 0xa0820056  sb          $v0, 0x56($a0)
    ctx->pc = 0x1835d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 86), (uint8_t)GPR_U32(ctx, 2));
label_1835dc:
    // 0x1835dc: 0x3e00008  jr          $ra
label_1835e0:
    if (ctx->pc == 0x1835E0u) {
        ctx->pc = 0x1835E4u;
        goto label_1835e4;
    }
    ctx->pc = 0x1835DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1835E4u;
label_1835e4:
    // 0x1835e4: 0x0  nop
    ctx->pc = 0x1835e4u;
    // NOP
label_1835e8:
    // 0x1835e8: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x1835e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
label_1835ec:
    // 0x1835ec: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1835ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1835f0:
    // 0x1835f0: 0x8c62ced8  lw          $v0, -0x3128($v1)
    ctx->pc = 0x1835f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954712)));
label_1835f4:
    // 0x1835f4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1835f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1835f8:
    // 0x1835f8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1835f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1835fc:
    // 0x1835fc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1835fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_183600:
    // 0x183600: 0x14500005  bne         $v0, $s0, . + 4 + (0x5 << 2)
label_183604:
    if (ctx->pc == 0x183604u) {
        ctx->pc = 0x183604u;
            // 0x183604: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->pc = 0x183608u;
        goto label_183608;
    }
    ctx->pc = 0x183600u;
    {
        const bool branch_taken_0x183600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x183604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183600u;
            // 0x183604: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183600) {
            ctx->pc = 0x183618u;
            goto label_183618;
        }
    }
    ctx->pc = 0x183608u;
label_183608:
    // 0x183608: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x183608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_18360c:
    // 0x18360c: 0x8c43ced0  lw          $v1, -0x3130($v0)
    ctx->pc = 0x18360cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954704)));
label_183610:
    // 0x183610: 0x58600013  blezl       $v1, . + 4 + (0x13 << 2)
label_183614:
    if (ctx->pc == 0x183614u) {
        ctx->pc = 0x183614u;
            // 0x183614: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x183618u;
        goto label_183618;
    }
    ctx->pc = 0x183610u;
    {
        const bool branch_taken_0x183610 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x183610) {
            ctx->pc = 0x183614u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x183610u;
            // 0x183614: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x183660u;
            goto label_183660;
        }
    }
    ctx->pc = 0x183618u;
label_183618:
    // 0x183618: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x183618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_18361c:
    // 0x18361c: 0x2451cf00  addiu       $s1, $v0, -0x3100
    ctx->pc = 0x18361cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954752));
label_183620:
    // 0x183620: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x183620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_183624:
    // 0x183624: 0x1070000d  beq         $v1, $s0, . + 4 + (0xD << 2)
label_183628:
    if (ctx->pc == 0x183628u) {
        ctx->pc = 0x183628u;
            // 0x183628: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x18362Cu;
        goto label_18362c;
    }
    ctx->pc = 0x183624u;
    {
        const bool branch_taken_0x183624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x183628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183624u;
            // 0x183628: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183624) {
            ctx->pc = 0x18365Cu;
            goto label_18365c;
        }
    }
    ctx->pc = 0x18362Cu;
label_18362c:
    // 0x18362c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18362cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_183630:
    // 0x183630: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x183630u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_183634:
    // 0x183634: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x183634u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_183638:
    // 0x183638: 0xc05f1dc  jal         func_17C770
label_18363c:
    if (ctx->pc == 0x18363Cu) {
        ctx->pc = 0x18363Cu;
            // 0x18363c: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x183640u;
        goto label_183640;
    }
    ctx->pc = 0x183638u;
    SET_GPR_U32(ctx, 31, 0x183640u);
    ctx->pc = 0x18363Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183638u;
            // 0x18363c: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C770u;
    if (runtime->hasFunction(0x17C770u)) {
        auto targetFn = runtime->lookupFunction(0x17C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183640u; }
        if (ctx->pc != 0x183640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C770_0x17c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183640u; }
        if (ctx->pc != 0x183640u) { return; }
    }
    ctx->pc = 0x183640u;
label_183640:
    // 0x183640: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x183640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
label_183644:
    // 0x183644: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x183644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_183648:
    // 0x183648: 0x2463cf10  addiu       $v1, $v1, -0x30F0
    ctx->pc = 0x183648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954768));
label_18364c:
    // 0x18364c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x18364cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_183650:
    // 0x183650: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x183650u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_183654:
    // 0x183654: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x183654u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_183658:
    // 0x183658: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x183658u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_18365c:
    // 0x18365c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x18365cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_183660:
    // 0x183660: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x183660u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_183664:
    // 0x183664: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x183664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_183668:
    // 0x183668: 0x3e00008  jr          $ra
label_18366c:
    if (ctx->pc == 0x18366Cu) {
        ctx->pc = 0x18366Cu;
            // 0x18366c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x183670u;
        goto label_183670;
    }
    ctx->pc = 0x183668u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18366Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183668u;
            // 0x18366c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x183670u;
label_183670:
    // 0x183670: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x183670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_183674:
    // 0x183674: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x183674u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_183678:
    // 0x183678: 0x8c43ced8  lw          $v1, -0x3128($v0)
    ctx->pc = 0x183678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954712)));
label_18367c:
    // 0x18367c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18367cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_183680:
    // 0x183680: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x183680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_183684:
    // 0x183684: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_183688:
    if (ctx->pc == 0x183688u) {
        ctx->pc = 0x183688u;
            // 0x183688: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->pc = 0x18368Cu;
        goto label_18368c;
    }
    ctx->pc = 0x183684u;
    {
        const bool branch_taken_0x183684 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x183688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183684u;
            // 0x183688: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183684) {
            ctx->pc = 0x18369Cu;
            goto label_18369c;
        }
    }
    ctx->pc = 0x18368Cu;
label_18368c:
    // 0x18368c: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x18368cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_183690:
    // 0x183690: 0x8c43ced0  lw          $v1, -0x3130($v0)
    ctx->pc = 0x183690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954704)));
label_183694:
    // 0x183694: 0x18600013  blez        $v1, . + 4 + (0x13 << 2)
label_183698:
    if (ctx->pc == 0x183698u) {
        ctx->pc = 0x183698u;
            // 0x183698: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x18369Cu;
        goto label_18369c;
    }
    ctx->pc = 0x183694u;
    {
        const bool branch_taken_0x183694 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x183698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183694u;
            // 0x183698: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183694) {
            ctx->pc = 0x1836E4u;
            goto label_1836e4;
        }
    }
    ctx->pc = 0x18369Cu;
label_18369c:
    // 0x18369c: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x18369cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_1836a0:
    // 0x1836a0: 0x2450cf00  addiu       $s0, $v0, -0x3100
    ctx->pc = 0x1836a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954752));
label_1836a4:
    // 0x1836a4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1836a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1836a8:
    // 0x1836a8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_1836ac:
    if (ctx->pc == 0x1836ACu) {
        ctx->pc = 0x1836ACu;
            // 0x1836ac: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x1836B0u;
        goto label_1836b0;
    }
    ctx->pc = 0x1836A8u;
    {
        const bool branch_taken_0x1836a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1836ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1836A8u;
            // 0x1836ac: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1836a8) {
            ctx->pc = 0x1836E0u;
            goto label_1836e0;
        }
    }
    ctx->pc = 0x1836B0u;
label_1836b0:
    // 0x1836b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1836b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1836b4:
    // 0x1836b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1836b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1836b8:
    // 0x1836b8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1836b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1836bc:
    // 0x1836bc: 0xc05f1dc  jal         func_17C770
label_1836c0:
    if (ctx->pc == 0x1836C0u) {
        ctx->pc = 0x1836C0u;
            // 0x1836c0: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1836C4u;
        goto label_1836c4;
    }
    ctx->pc = 0x1836BCu;
    SET_GPR_U32(ctx, 31, 0x1836C4u);
    ctx->pc = 0x1836C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1836BCu;
            // 0x1836c0: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C770u;
    if (runtime->hasFunction(0x17C770u)) {
        auto targetFn = runtime->lookupFunction(0x17C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1836C4u; }
        if (ctx->pc != 0x1836C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C770_0x17c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1836C4u; }
        if (ctx->pc != 0x1836C4u) { return; }
    }
    ctx->pc = 0x1836C4u;
label_1836c4:
    // 0x1836c4: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x1836c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
label_1836c8:
    // 0x1836c8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1836c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1836cc:
    // 0x1836cc: 0x2463cf10  addiu       $v1, $v1, -0x30F0
    ctx->pc = 0x1836ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954768));
label_1836d0:
    // 0x1836d0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1836d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1836d4:
    // 0x1836d4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1836d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1836d8:
    // 0x1836d8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1836d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1836dc:
    // 0x1836dc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1836dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1836e0:
    // 0x1836e0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1836e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1836e4:
    // 0x1836e4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1836e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1836e8:
    // 0x1836e8: 0x3e00008  jr          $ra
label_1836ec:
    if (ctx->pc == 0x1836ECu) {
        ctx->pc = 0x1836ECu;
            // 0x1836ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1836F0u;
        goto label_1836f0;
    }
    ctx->pc = 0x1836E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1836ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1836E8u;
            // 0x1836ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1836F0u;
label_1836f0:
    // 0x1836f0: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x1836f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_1836f4:
    // 0x1836f4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1836f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1836f8:
    // 0x1836f8: 0x8c43ced8  lw          $v1, -0x3128($v0)
    ctx->pc = 0x1836f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954712)));
label_1836fc:
    // 0x1836fc: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1836fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_183700:
    // 0x183700: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x183700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_183704:
    // 0x183704: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x183704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_183708:
    // 0x183708: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x183708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_18370c:
    // 0x18370c: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
label_183710:
    if (ctx->pc == 0x183710u) {
        ctx->pc = 0x183710u;
            // 0x183710: 0x2d240002  sltiu       $a0, $t1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->pc = 0x183714u;
        goto label_183714;
    }
    ctx->pc = 0x18370Cu;
    {
        const bool branch_taken_0x18370c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x183710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18370Cu;
            // 0x183710: 0x2d240002  sltiu       $a0, $t1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18370c) {
            ctx->pc = 0x183724u;
            goto label_183724;
        }
    }
    ctx->pc = 0x183714u;
label_183714:
    // 0x183714: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x183714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_183718:
    // 0x183718: 0x8c43ced0  lw          $v1, -0x3130($v0)
    ctx->pc = 0x183718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954704)));
label_18371c:
    // 0x18371c: 0x18600015  blez        $v1, . + 4 + (0x15 << 2)
label_183720:
    if (ctx->pc == 0x183720u) {
        ctx->pc = 0x183720u;
            // 0x183720: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x183724u;
        goto label_183724;
    }
    ctx->pc = 0x18371Cu;
    {
        const bool branch_taken_0x18371c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x183720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18371Cu;
            // 0x183720: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18371c) {
            ctx->pc = 0x183774u;
            goto label_183774;
        }
    }
    ctx->pc = 0x183724u;
label_183724:
    // 0x183724: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_183728:
    if (ctx->pc == 0x183728u) {
        ctx->pc = 0x183728u;
            // 0x183728: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x18372Cu;
        goto label_18372c;
    }
    ctx->pc = 0x183724u;
    {
        const bool branch_taken_0x183724 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x183728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183724u;
            // 0x183728: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183724) {
            ctx->pc = 0x183774u;
            goto label_183774;
        }
    }
    ctx->pc = 0x18372Cu;
label_18372c:
    // 0x18372c: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x18372cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_183730:
    // 0x183730: 0x8c43cf04  lw          $v1, -0x30FC($v0)
    ctx->pc = 0x183730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954756)));
label_183734:
    // 0x183734: 0x1065000f  beq         $v1, $a1, . + 4 + (0xF << 2)
label_183738:
    if (ctx->pc == 0x183738u) {
        ctx->pc = 0x183738u;
            // 0x183738: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->pc = 0x18373Cu;
        goto label_18373c;
    }
    ctx->pc = 0x183734u;
    {
        const bool branch_taken_0x183734 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x183738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183734u;
            // 0x183738: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183734) {
            ctx->pc = 0x183774u;
            goto label_183774;
        }
    }
    ctx->pc = 0x18373Cu;
label_18373c:
    // 0x18373c: 0x3c10005f  lui         $s0, 0x5F
    ctx->pc = 0x18373cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)95 << 16));
label_183740:
    // 0x183740: 0x2610cf10  addiu       $s0, $s0, -0x30F0
    ctx->pc = 0x183740u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954768));
label_183744:
    // 0x183744: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x183744u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_183748:
    // 0x183748: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x183748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18374c:
    // 0x18374c: 0x10650008  beq         $v1, $a1, . + 4 + (0x8 << 2)
label_183750:
    if (ctx->pc == 0x183750u) {
        ctx->pc = 0x183750u;
            // 0x183750: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x183754u;
        goto label_183754;
    }
    ctx->pc = 0x18374Cu;
    {
        const bool branch_taken_0x18374c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x183750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18374Cu;
            // 0x183750: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18374c) {
            ctx->pc = 0x183770u;
            goto label_183770;
        }
    }
    ctx->pc = 0x183754u;
label_183754:
    // 0x183754: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x183754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_183758:
    // 0x183758: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x183758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18375c:
    // 0x18375c: 0x27a70004  addiu       $a3, $sp, 0x4
    ctx->pc = 0x18375cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_183760:
    // 0x183760: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x183760u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_183764:
    // 0x183764: 0xc05f1dc  jal         func_17C770
label_183768:
    if (ctx->pc == 0x183768u) {
        ctx->pc = 0x183768u;
            // 0x183768: 0xafa90000  sw          $t1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
        ctx->pc = 0x18376Cu;
        goto label_18376c;
    }
    ctx->pc = 0x183764u;
    SET_GPR_U32(ctx, 31, 0x18376Cu);
    ctx->pc = 0x183768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183764u;
            // 0x183768: 0xafa90000  sw          $t1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C770u;
    if (runtime->hasFunction(0x17C770u)) {
        auto targetFn = runtime->lookupFunction(0x17C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18376Cu; }
        if (ctx->pc != 0x18376Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C770_0x17c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18376Cu; }
        if (ctx->pc != 0x18376Cu) { return; }
    }
    ctx->pc = 0x18376Cu;
label_18376c:
    // 0x18376c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x18376cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_183770:
    // 0x183770: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x183770u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_183774:
    // 0x183774: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x183774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_183778:
    // 0x183778: 0x3e00008  jr          $ra
label_18377c:
    if (ctx->pc == 0x18377Cu) {
        ctx->pc = 0x18377Cu;
            // 0x18377c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x183780u;
        goto label_183780;
    }
    ctx->pc = 0x183778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18377Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183778u;
            // 0x18377c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x183780u;
label_183780:
    // 0x183780: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x183780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_183784:
    // 0x183784: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x183784u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_183788:
    // 0x183788: 0x8c43ced8  lw          $v1, -0x3128($v0)
    ctx->pc = 0x183788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954712)));
label_18378c:
    // 0x18378c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x18378cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_183790:
    // 0x183790: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x183790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_183794:
    // 0x183794: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x183794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_183798:
    // 0x183798: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x183798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_18379c:
    // 0x18379c: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
label_1837a0:
    if (ctx->pc == 0x1837A0u) {
        ctx->pc = 0x1837A0u;
            // 0x1837a0: 0x2d240002  sltiu       $a0, $t1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->pc = 0x1837A4u;
        goto label_1837a4;
    }
    ctx->pc = 0x18379Cu;
    {
        const bool branch_taken_0x18379c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1837A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18379Cu;
            // 0x1837a0: 0x2d240002  sltiu       $a0, $t1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18379c) {
            ctx->pc = 0x1837B4u;
            goto label_1837b4;
        }
    }
    ctx->pc = 0x1837A4u;
label_1837a4:
    // 0x1837a4: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x1837a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_1837a8:
    // 0x1837a8: 0x8c43ced0  lw          $v1, -0x3130($v0)
    ctx->pc = 0x1837a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954704)));
label_1837ac:
    // 0x1837ac: 0x18600012  blez        $v1, . + 4 + (0x12 << 2)
label_1837b0:
    if (ctx->pc == 0x1837B0u) {
        ctx->pc = 0x1837B0u;
            // 0x1837b0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x1837B4u;
        goto label_1837b4;
    }
    ctx->pc = 0x1837ACu;
    {
        const bool branch_taken_0x1837ac = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1837B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1837ACu;
            // 0x1837b0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1837ac) {
            ctx->pc = 0x1837F8u;
            goto label_1837f8;
        }
    }
    ctx->pc = 0x1837B4u;
label_1837b4:
    // 0x1837b4: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_1837b8:
    if (ctx->pc == 0x1837B8u) {
        ctx->pc = 0x1837B8u;
            // 0x1837b8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x1837BCu;
        goto label_1837bc;
    }
    ctx->pc = 0x1837B4u;
    {
        const bool branch_taken_0x1837b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1837B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1837B4u;
            // 0x1837b8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1837b4) {
            ctx->pc = 0x1837F8u;
            goto label_1837f8;
        }
    }
    ctx->pc = 0x1837BCu;
label_1837bc:
    // 0x1837bc: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x1837bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_1837c0:
    // 0x1837c0: 0x3c10005f  lui         $s0, 0x5F
    ctx->pc = 0x1837c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)95 << 16));
label_1837c4:
    // 0x1837c4: 0x2610cf10  addiu       $s0, $s0, -0x30F0
    ctx->pc = 0x1837c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954768));
label_1837c8:
    // 0x1837c8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1837c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1837cc:
    // 0x1837cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1837ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1837d0:
    // 0x1837d0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_1837d4:
    if (ctx->pc == 0x1837D4u) {
        ctx->pc = 0x1837D4u;
            // 0x1837d4: 0x24040011  addiu       $a0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->pc = 0x1837D8u;
        goto label_1837d8;
    }
    ctx->pc = 0x1837D0u;
    {
        const bool branch_taken_0x1837d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1837D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1837D0u;
            // 0x1837d4: 0x24040011  addiu       $a0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1837d0) {
            ctx->pc = 0x1837F4u;
            goto label_1837f4;
        }
    }
    ctx->pc = 0x1837D8u;
label_1837d8:
    // 0x1837d8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1837d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1837dc:
    // 0x1837dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1837dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1837e0:
    // 0x1837e0: 0x27a70004  addiu       $a3, $sp, 0x4
    ctx->pc = 0x1837e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_1837e4:
    // 0x1837e4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1837e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1837e8:
    // 0x1837e8: 0xc05f1dc  jal         func_17C770
label_1837ec:
    if (ctx->pc == 0x1837ECu) {
        ctx->pc = 0x1837ECu;
            // 0x1837ec: 0xafa90000  sw          $t1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
        ctx->pc = 0x1837F0u;
        goto label_1837f0;
    }
    ctx->pc = 0x1837E8u;
    SET_GPR_U32(ctx, 31, 0x1837F0u);
    ctx->pc = 0x1837ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1837E8u;
            // 0x1837ec: 0xafa90000  sw          $t1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C770u;
    if (runtime->hasFunction(0x17C770u)) {
        auto targetFn = runtime->lookupFunction(0x17C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1837F0u; }
        if (ctx->pc != 0x1837F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C770_0x17c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1837F0u; }
        if (ctx->pc != 0x1837F0u) { return; }
    }
    ctx->pc = 0x1837F0u;
label_1837f0:
    // 0x1837f0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1837f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1837f4:
    // 0x1837f4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1837f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1837f8:
    // 0x1837f8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1837f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1837fc:
    // 0x1837fc: 0x3e00008  jr          $ra
label_183800:
    if (ctx->pc == 0x183800u) {
        ctx->pc = 0x183800u;
            // 0x183800: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x183804u;
        goto label_183804;
    }
    ctx->pc = 0x1837FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1837FCu;
            // 0x183800: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x183804u;
label_183804:
    // 0x183804: 0x0  nop
    ctx->pc = 0x183804u;
    // NOP
label_183808:
    // 0x183808: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x183808u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_18380c:
    // 0x18380c: 0x2c840002  sltiu       $a0, $a0, 0x2
    ctx->pc = 0x18380cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_183810:
    // 0x183810: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_183814:
    if (ctx->pc == 0x183814u) {
        ctx->pc = 0x183814u;
            // 0x183814: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x183818u;
        goto label_183818;
    }
    ctx->pc = 0x183810u;
    {
        const bool branch_taken_0x183810 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x183814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183810u;
            // 0x183814: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183810) {
            ctx->pc = 0x183824u;
            goto label_183824;
        }
    }
    ctx->pc = 0x183818u;
label_183818:
    // 0x183818: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x183818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_18381c:
    // 0x18381c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18381cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_183820:
    // 0x183820: 0x8c42cf10  lw          $v0, -0x30F0($v0)
    ctx->pc = 0x183820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954768)));
label_183824:
    // 0x183824: 0x3e00008  jr          $ra
label_183828:
    if (ctx->pc == 0x183828u) {
        ctx->pc = 0x18382Cu;
        goto label_18382c;
    }
    ctx->pc = 0x183824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18382Cu;
label_18382c:
    // 0x18382c: 0x0  nop
    ctx->pc = 0x18382cu;
    // NOP
label_183830:
    // 0x183830: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x183830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_183834:
    // 0x183834: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x183834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
label_183838:
    // 0x183838: 0xa444cf2c  sh          $a0, -0x30D4($v0)
    ctx->pc = 0x183838u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294954796), (uint16_t)GPR_U32(ctx, 4));
label_18383c:
    // 0x18383c: 0x3e00008  jr          $ra
label_183840:
    if (ctx->pc == 0x183840u) {
        ctx->pc = 0x183840u;
            // 0x183840: 0xa465cf2e  sh          $a1, -0x30D2($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294954798), (uint16_t)GPR_U32(ctx, 5));
        ctx->pc = 0x183844u;
        goto label_183844;
    }
    ctx->pc = 0x18383Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18383Cu;
            // 0x183840: 0xa465cf2e  sh          $a1, -0x30D2($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294954798), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x183844u;
label_183844:
    // 0x183844: 0x0  nop
    ctx->pc = 0x183844u;
    // NOP
label_183848:
    // 0x183848: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x183848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_18384c:
    // 0x18384c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18384cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_183850:
    // 0x183850: 0x8c43ced8  lw          $v1, -0x3128($v0)
    ctx->pc = 0x183850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954712)));
label_183854:
    // 0x183854: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x183854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_183858:
    // 0x183858: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x183858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_18385c:
    // 0x18385c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18385cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_183860:
    // 0x183860: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_183864:
    if (ctx->pc == 0x183864u) {
        ctx->pc = 0x183864u;
            // 0x183864: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->pc = 0x183868u;
        goto label_183868;
    }
    ctx->pc = 0x183860u;
    {
        const bool branch_taken_0x183860 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x183864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183860u;
            // 0x183864: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183860) {
            ctx->pc = 0x183878u;
            goto label_183878;
        }
    }
    ctx->pc = 0x183868u;
label_183868:
    // 0x183868: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x183868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_18386c:
    // 0x18386c: 0x8c43ced0  lw          $v1, -0x3130($v0)
    ctx->pc = 0x18386cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954704)));
label_183870:
    // 0x183870: 0x18600020  blez        $v1, . + 4 + (0x20 << 2)
label_183874:
    if (ctx->pc == 0x183874u) {
        ctx->pc = 0x183874u;
            // 0x183874: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x183878u;
        goto label_183878;
    }
    ctx->pc = 0x183870u;
    {
        const bool branch_taken_0x183870 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x183874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183870u;
            // 0x183874: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183870) {
            ctx->pc = 0x1838F4u;
            goto label_1838f4;
        }
    }
    ctx->pc = 0x183878u;
label_183878:
    // 0x183878: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x183878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
label_18387c:
    // 0x18387c: 0x2463cf1c  addiu       $v1, $v1, -0x30E4
    ctx->pc = 0x18387cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954780));
label_183880:
    // 0x183880: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x183880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_183884:
    // 0x183884: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x183884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_183888:
    // 0x183888: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_18388c:
    if (ctx->pc == 0x18388Cu) {
        ctx->pc = 0x18388Cu;
            // 0x18388c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x183890u;
        goto label_183890;
    }
    ctx->pc = 0x183888u;
    {
        const bool branch_taken_0x183888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18388Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183888u;
            // 0x18388c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183888) {
            ctx->pc = 0x1838F0u;
            goto label_1838f0;
        }
    }
    ctx->pc = 0x183890u;
label_183890:
    // 0x183890: 0x3c10005f  lui         $s0, 0x5F
    ctx->pc = 0x183890u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)95 << 16));
label_183894:
    // 0x183894: 0x3c11005f  lui         $s1, 0x5F
    ctx->pc = 0x183894u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)95 << 16));
label_183898:
    // 0x183898: 0x2610ceec  addiu       $s0, $s0, -0x3114
    ctx->pc = 0x183898u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954732));
label_18389c:
    // 0x18389c: 0x2631f970  addiu       $s1, $s1, -0x690
    ctx->pc = 0x18389cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294965616));
label_1838a0:
    // 0x1838a0: 0xc045262  jal         func_114988
label_1838a4:
    if (ctx->pc == 0x1838A4u) {
        ctx->pc = 0x1838A4u;
            // 0x1838a4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1838A8u;
        goto label_1838a8;
    }
    ctx->pc = 0x1838A0u;
    SET_GPR_U32(ctx, 31, 0x1838A8u);
    ctx->pc = 0x1838A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1838A0u;
            // 0x1838a4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114988u;
    if (runtime->hasFunction(0x114988u)) {
        auto targetFn = runtime->lookupFunction(0x114988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1838A8u; }
        if (ctx->pc != 0x1838A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00114988_0x114988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1838A8u; }
        if (ctx->pc != 0x1838A8u) { return; }
    }
    ctx->pc = 0x1838A8u;
label_1838a8:
    // 0x1838a8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1838a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1838ac:
    // 0x1838ac: 0x3c10005f  lui         $s0, 0x5F
    ctx->pc = 0x1838acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)95 << 16));
label_1838b0:
    // 0x1838b0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1838b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1838b4:
    // 0x1838b4: 0xc05f104  jal         func_17C410
label_1838b8:
    if (ctx->pc == 0x1838B8u) {
        ctx->pc = 0x1838B8u;
            // 0x1838b8: 0x2610cf24  addiu       $s0, $s0, -0x30DC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954788));
        ctx->pc = 0x1838BCu;
        goto label_1838bc;
    }
    ctx->pc = 0x1838B4u;
    SET_GPR_U32(ctx, 31, 0x1838BCu);
    ctx->pc = 0x1838B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1838B4u;
            // 0x1838b8: 0x2610cf24  addiu       $s0, $s0, -0x30DC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954788));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C410u;
    if (runtime->hasFunction(0x17C410u)) {
        auto targetFn = runtime->lookupFunction(0x17C410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1838BCu; }
        if (ctx->pc != 0x1838BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C410_0x17c410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1838BCu; }
        if (ctx->pc != 0x1838BCu) { return; }
    }
    ctx->pc = 0x1838BCu;
label_1838bc:
    // 0x1838bc: 0x0  nop
    ctx->pc = 0x1838bcu;
    // NOP
label_1838c0:
    // 0x1838c0: 0xc045262  jal         func_114988
label_1838c4:
    if (ctx->pc == 0x1838C4u) {
        ctx->pc = 0x1838C4u;
            // 0x1838c4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1838C8u;
        goto label_1838c8;
    }
    ctx->pc = 0x1838C0u;
    SET_GPR_U32(ctx, 31, 0x1838C8u);
    ctx->pc = 0x1838C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1838C0u;
            // 0x1838c4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114988u;
    if (runtime->hasFunction(0x114988u)) {
        auto targetFn = runtime->lookupFunction(0x114988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1838C8u; }
        if (ctx->pc != 0x1838C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00114988_0x114988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1838C8u; }
        if (ctx->pc != 0x1838C8u) { return; }
    }
    ctx->pc = 0x1838C8u;
label_1838c8:
    // 0x1838c8: 0xc060af4  jal         func_182BD0
label_1838cc:
    if (ctx->pc == 0x1838CCu) {
        ctx->pc = 0x1838D0u;
        goto label_1838d0;
    }
    ctx->pc = 0x1838C8u;
    SET_GPR_U32(ctx, 31, 0x1838D0u);
    ctx->pc = 0x182BD0u;
    if (runtime->hasFunction(0x182BD0u)) {
        auto targetFn = runtime->lookupFunction(0x182BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1838D0u; }
        if (ctx->pc != 0x1838D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD0_0x182bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1838D0u; }
        if (ctx->pc != 0x1838D0u) { return; }
    }
    ctx->pc = 0x1838D0u;
label_1838d0:
    // 0x1838d0: 0xc060d2a  jal         func_1834A8
label_1838d4:
    if (ctx->pc == 0x1838D4u) {
        ctx->pc = 0x1838D8u;
        goto label_1838d8;
    }
    ctx->pc = 0x1838D0u;
    SET_GPR_U32(ctx, 31, 0x1838D8u);
    ctx->pc = 0x1834A8u;
    goto label_1834a8;
    ctx->pc = 0x1838D8u;
label_1838d8:
    // 0x1838d8: 0xc05f1be  jal         func_17C6F8
label_1838dc:
    if (ctx->pc == 0x1838DCu) {
        ctx->pc = 0x1838E0u;
        goto label_1838e0;
    }
    ctx->pc = 0x1838D8u;
    SET_GPR_U32(ctx, 31, 0x1838E0u);
    ctx->pc = 0x17C6F8u;
    if (runtime->hasFunction(0x17C6F8u)) {
        auto targetFn = runtime->lookupFunction(0x17C6F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1838E0u; }
        if (ctx->pc != 0x1838E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C6F8_0x17c6f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1838E0u; }
        if (ctx->pc != 0x1838E0u) { return; }
    }
    ctx->pc = 0x1838E0u;
label_1838e0:
    // 0x1838e0: 0xc061ec6  jal         func_187B18
label_1838e4:
    if (ctx->pc == 0x1838E4u) {
        ctx->pc = 0x1838E8u;
        goto label_1838e8;
    }
    ctx->pc = 0x1838E0u;
    SET_GPR_U32(ctx, 31, 0x1838E8u);
    ctx->pc = 0x187B18u;
    if (runtime->hasFunction(0x187B18u)) {
        auto targetFn = runtime->lookupFunction(0x187B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1838E8u; }
        if (ctx->pc != 0x1838E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187B18_0x187b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1838E8u; }
        if (ctx->pc != 0x1838E8u) { return; }
    }
    ctx->pc = 0x1838E8u;
label_1838e8:
    // 0x1838e8: 0xc061dde  jal         func_187778
label_1838ec:
    if (ctx->pc == 0x1838ECu) {
        ctx->pc = 0x1838F0u;
        goto label_1838f0;
    }
    ctx->pc = 0x1838E8u;
    SET_GPR_U32(ctx, 31, 0x1838F0u);
    ctx->pc = 0x187778u;
    if (runtime->hasFunction(0x187778u)) {
        auto targetFn = runtime->lookupFunction(0x187778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1838F0u; }
        if (ctx->pc != 0x1838F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187778_0x187778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1838F0u; }
        if (ctx->pc != 0x1838F0u) { return; }
    }
    ctx->pc = 0x1838F0u;
label_1838f0:
    // 0x1838f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1838f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1838f4:
    // 0x1838f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1838f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1838f8:
    // 0x1838f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1838f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1838fc:
    // 0x1838fc: 0x3e00008  jr          $ra
label_183900:
    if (ctx->pc == 0x183900u) {
        ctx->pc = 0x183900u;
            // 0x183900: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x183904u;
        goto label_183904;
    }
    ctx->pc = 0x1838FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1838FCu;
            // 0x183900: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x183904u;
label_183904:
    // 0x183904: 0x0  nop
    ctx->pc = 0x183904u;
    // NOP
label_183908:
    // 0x183908: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x183908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_18390c:
    // 0x18390c: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x18390cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_183910:
    // 0x183910: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x183910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_183914:
    // 0x183914: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x183914u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_183918:
    // 0x183918: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x183918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_18391c:
    // 0x18391c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x18391cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_183920:
    // 0x183920: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x183920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_183924:
    // 0x183924: 0x2453f330  addiu       $s3, $v0, -0xCD0
    ctx->pc = 0x183924u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964016));
label_183928:
    // 0x183928: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x183928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_18392c:
    // 0x18392c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x18392cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_183930:
    // 0x183930: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x183930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_183934:
    // 0x183934: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x183934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_183938:
    // 0x183938: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x183938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_18393c:
    // 0x18393c: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x18393cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_183940:
    // 0x183940: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_183944:
    if (ctx->pc == 0x183944u) {
        ctx->pc = 0x183944u;
            // 0x183944: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x183948u;
        goto label_183948;
    }
    ctx->pc = 0x183940u;
    {
        const bool branch_taken_0x183940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183940u;
            // 0x183944: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183940) {
            ctx->pc = 0x183974u;
            goto label_183974;
        }
    }
    ctx->pc = 0x183948u;
label_183948:
    // 0x183948: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x183948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18394c:
    // 0x18394c: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x18394cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_183950:
    // 0x183950: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x183950u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_183954:
    // 0x183954: 0x24840064  addiu       $a0, $a0, 0x64
    ctx->pc = 0x183954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
label_183958:
    // 0x183958: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x183958u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
label_18395c:
    // 0x18395c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_183960:
    if (ctx->pc == 0x183960u) {
        ctx->pc = 0x183960u;
            // 0x183960: 0x24630064  addiu       $v1, $v1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
        ctx->pc = 0x183964u;
        goto label_183964;
    }
    ctx->pc = 0x18395Cu;
    {
        const bool branch_taken_0x18395c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18395Cu;
            // 0x183960: 0x24630064  addiu       $v1, $v1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18395c) {
            ctx->pc = 0x183974u;
            goto label_183974;
        }
    }
    ctx->pc = 0x183964u;
label_183964:
    // 0x183964: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x183964u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_183968:
    // 0x183968: 0x0  nop
    ctx->pc = 0x183968u;
    // NOP
label_18396c:
    // 0x18396c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_183970:
    if (ctx->pc == 0x183970u) {
        ctx->pc = 0x183970u;
            // 0x183970: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x183974u;
        goto label_183974;
    }
    ctx->pc = 0x18396Cu;
    {
        const bool branch_taken_0x18396c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18396Cu;
            // 0x183970: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18396c) {
            ctx->pc = 0x183950u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_183950;
        }
    }
    ctx->pc = 0x183974u;
label_183974:
    // 0x183974: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x183974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_183978:
    // 0x183978: 0x122300cd  beq         $s1, $v1, . + 4 + (0xCD << 2)
label_18397c:
    if (ctx->pc == 0x18397Cu) {
        ctx->pc = 0x18397Cu;
            // 0x18397c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x183980u;
        goto label_183980;
    }
    ctx->pc = 0x183978u;
    {
        const bool branch_taken_0x183978 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x18397Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183978u;
            // 0x18397c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183978) {
            ctx->pc = 0x183CB0u;
            goto label_183cb0;
        }
    }
    ctx->pc = 0x183980u;
label_183980:
    // 0x183980: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x183980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_183984:
    // 0x183984: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x183984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_183988:
    // 0x183988: 0x8c44ced8  lw          $a0, -0x3128($v0)
    ctx->pc = 0x183988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954712)));
label_18398c:
    // 0x18398c: 0x54830008  bnel        $a0, $v1, . + 4 + (0x8 << 2)
label_183990:
    if (ctx->pc == 0x183990u) {
        ctx->pc = 0x183990u;
            // 0x183990: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x183994u;
        goto label_183994;
    }
    ctx->pc = 0x18398Cu;
    {
        const bool branch_taken_0x18398c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x18398c) {
            ctx->pc = 0x183990u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18398Cu;
            // 0x183990: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1839B0u;
            goto label_1839b0;
        }
    }
    ctx->pc = 0x183994u;
label_183994:
    // 0x183994: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x183994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_183998:
    // 0x183998: 0x8c43ced0  lw          $v1, -0x3130($v0)
    ctx->pc = 0x183998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954704)));
label_18399c:
    // 0x18399c: 0x5c600004  bgtzl       $v1, . + 4 + (0x4 << 2)
label_1839a0:
    if (ctx->pc == 0x1839A0u) {
        ctx->pc = 0x1839A0u;
            // 0x1839a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1839A4u;
        goto label_1839a4;
    }
    ctx->pc = 0x18399Cu;
    {
        const bool branch_taken_0x18399c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x18399c) {
            ctx->pc = 0x1839A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18399Cu;
            // 0x1839a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1839B0u;
            goto label_1839b0;
        }
    }
    ctx->pc = 0x1839A4u;
label_1839a4:
    // 0x1839a4: 0xa2640000  sb          $a0, 0x0($s3)
    ctx->pc = 0x1839a4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 4));
label_1839a8:
    // 0x1839a8: 0x100000c1  b           . + 4 + (0xC1 << 2)
label_1839ac:
    if (ctx->pc == 0x1839ACu) {
        ctx->pc = 0x1839ACu;
            // 0x1839ac: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1839B0u;
        goto label_1839b0;
    }
    ctx->pc = 0x1839A8u;
    {
        const bool branch_taken_0x1839a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1839ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1839A8u;
            // 0x1839ac: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1839a8) {
            ctx->pc = 0x183CB0u;
            goto label_183cb0;
        }
    }
    ctx->pc = 0x1839B0u;
label_1839b0:
    // 0x1839b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1839b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1839b4:
    // 0x1839b4: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x1839b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1839b8:
    // 0x1839b8: 0xc04a576  jal         func_1295D8
label_1839bc:
    if (ctx->pc == 0x1839BCu) {
        ctx->pc = 0x1839BCu;
            // 0x1839bc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1839C0u;
        goto label_1839c0;
    }
    ctx->pc = 0x1839B8u;
    SET_GPR_U32(ctx, 31, 0x1839C0u);
    ctx->pc = 0x1839BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1839B8u;
            // 0x1839bc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1839C0u; }
        if (ctx->pc != 0x1839C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1839C0u; }
        if (ctx->pc != 0x1839C0u) { return; }
    }
    ctx->pc = 0x1839C0u;
label_1839c0:
    // 0x1839c0: 0x1a40001f  blez        $s2, . + 4 + (0x1F << 2)
label_1839c4:
    if (ctx->pc == 0x1839C4u) {
        ctx->pc = 0x1839C4u;
            // 0x1839c4: 0xae720004  sw          $s2, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
        ctx->pc = 0x1839C8u;
        goto label_1839c8;
    }
    ctx->pc = 0x1839C0u;
    {
        const bool branch_taken_0x1839c0 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1839C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1839C0u;
            // 0x1839c4: 0xae720004  sw          $s2, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1839c0) {
            ctx->pc = 0x183A40u;
            goto label_183a40;
        }
    }
    ctx->pc = 0x1839C8u;
label_1839c8:
    // 0x1839c8: 0x26740008  addiu       $s4, $s3, 0x8
    ctx->pc = 0x1839c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1839cc:
    // 0x1839cc: 0x3c150063  lui         $s5, 0x63
    ctx->pc = 0x1839ccu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)99 << 16));
label_1839d0:
    // 0x1839d0: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x1839d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1839d4:
    // 0x1839d4: 0x0  nop
    ctx->pc = 0x1839d4u;
    // NOP
label_1839d8:
    // 0x1839d8: 0xc060b2c  jal         func_182CB0
label_1839dc:
    if (ctx->pc == 0x1839DCu) {
        ctx->pc = 0x1839E0u;
        goto label_1839e0;
    }
    ctx->pc = 0x1839D8u;
    SET_GPR_U32(ctx, 31, 0x1839E0u);
    ctx->pc = 0x182CB0u;
    if (runtime->hasFunction(0x182CB0u)) {
        auto targetFn = runtime->lookupFunction(0x182CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1839E0u; }
        if (ctx->pc != 0x1839E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182CB0_0x182cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1839E0u; }
        if (ctx->pc != 0x1839E0u) { return; }
    }
    ctx->pc = 0x1839E0u;
label_1839e0:
    // 0x1839e0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1839e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1839e4:
    // 0x1839e4: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_1839e8:
    if (ctx->pc == 0x1839E8u) {
        ctx->pc = 0x1839E8u;
            // 0x1839e8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x1839ECu;
        goto label_1839ec;
    }
    ctx->pc = 0x1839E4u;
    {
        const bool branch_taken_0x1839e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1839E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1839E4u;
            // 0x1839e8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1839e4) {
            ctx->pc = 0x183A30u;
            goto label_183a30;
        }
    }
    ctx->pc = 0x1839ECu;
label_1839ec:
    // 0x1839ec: 0xc05b99c  jal         func_16E670
label_1839f0:
    if (ctx->pc == 0x1839F0u) {
        ctx->pc = 0x1839F0u;
            // 0x1839f0: 0x26a476e0  addiu       $a0, $s5, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 30432));
        ctx->pc = 0x1839F4u;
        goto label_1839f4;
    }
    ctx->pc = 0x1839ECu;
    SET_GPR_U32(ctx, 31, 0x1839F4u);
    ctx->pc = 0x1839F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1839ECu;
            // 0x1839f0: 0x26a476e0  addiu       $a0, $s5, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1839F4u; }
        if (ctx->pc != 0x1839F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E670_0x16e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1839F4u; }
        if (ctx->pc != 0x1839F4u) { return; }
    }
    ctx->pc = 0x1839F4u;
label_1839f4:
    // 0x1839f4: 0x1a4000ae  blez        $s2, . + 4 + (0xAE << 2)
label_1839f8:
    if (ctx->pc == 0x1839F8u) {
        ctx->pc = 0x1839F8u;
            // 0x1839f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1839FCu;
        goto label_1839fc;
    }
    ctx->pc = 0x1839F4u;
    {
        const bool branch_taken_0x1839f4 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1839F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1839F4u;
            // 0x1839f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1839f4) {
            ctx->pc = 0x183CB0u;
            goto label_183cb0;
        }
    }
    ctx->pc = 0x1839FCu;
label_1839fc:
    // 0x1839fc: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x1839fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_183a00:
    // 0x183a00: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x183a00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_183a04:
    // 0x183a04: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x183a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_183a08:
    // 0x183a08: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x183a08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_183a0c:
    // 0x183a0c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_183a10:
    if (ctx->pc == 0x183A10u) {
        ctx->pc = 0x183A10u;
            // 0x183a10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x183A14u;
        goto label_183a14;
    }
    ctx->pc = 0x183A0Cu;
    {
        const bool branch_taken_0x183a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183A0Cu;
            // 0x183a10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183a0c) {
            ctx->pc = 0x183A1Cu;
            goto label_183a1c;
        }
    }
    ctx->pc = 0x183A14u;
label_183a14:
    // 0x183a14: 0xc060b4a  jal         func_182D28
label_183a18:
    if (ctx->pc == 0x183A18u) {
        ctx->pc = 0x183A1Cu;
        goto label_183a1c;
    }
    ctx->pc = 0x183A14u;
    SET_GPR_U32(ctx, 31, 0x183A1Cu);
    ctx->pc = 0x182D28u;
    if (runtime->hasFunction(0x182D28u)) {
        auto targetFn = runtime->lookupFunction(0x182D28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183A1Cu; }
        if (ctx->pc != 0x183A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182D28_0x182d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183A1Cu; }
        if (ctx->pc != 0x183A1Cu) { return; }
    }
    ctx->pc = 0x183A1Cu;
label_183a1c:
    // 0x183a1c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x183a1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_183a20:
    // 0x183a20: 0x5600fff9  bnel        $s0, $zero, . + 4 + (-0x7 << 2)
label_183a24:
    if (ctx->pc == 0x183A24u) {
        ctx->pc = 0x183A24u;
            // 0x183a24: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x183A28u;
        goto label_183a28;
    }
    ctx->pc = 0x183A20u;
    {
        const bool branch_taken_0x183a20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x183a20) {
            ctx->pc = 0x183A24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x183A20u;
            // 0x183a24: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x183A08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_183a08;
        }
    }
    ctx->pc = 0x183A28u;
label_183a28:
    // 0x183a28: 0x100000a1  b           . + 4 + (0xA1 << 2)
label_183a2c:
    if (ctx->pc == 0x183A2Cu) {
        ctx->pc = 0x183A2Cu;
            // 0x183a2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x183A30u;
        goto label_183a30;
    }
    ctx->pc = 0x183A28u;
    {
        const bool branch_taken_0x183a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183A28u;
            // 0x183a2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183a28) {
            ctx->pc = 0x183CB0u;
            goto label_183cb0;
        }
    }
    ctx->pc = 0x183A30u;
label_183a30:
    // 0x183a30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x183a30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_183a34:
    // 0x183a34: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x183a34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_183a38:
    // 0x183a38: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_183a3c:
    if (ctx->pc == 0x183A3Cu) {
        ctx->pc = 0x183A40u;
        goto label_183a40;
    }
    ctx->pc = 0x183A38u;
    {
        const bool branch_taken_0x183a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x183a38) {
            ctx->pc = 0x1839D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1839d8;
        }
    }
    ctx->pc = 0x183A40u;
label_183a40:
    // 0x183a40: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x183a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_183a44:
    // 0x183a44: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x183a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
label_183a48:
    // 0x183a48: 0x2446cf18  addiu       $a2, $v0, -0x30E8
    ctx->pc = 0x183a48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954776));
label_183a4c:
    // 0x183a4c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x183a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_183a50:
    // 0x183a50: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x183a50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_183a54:
    // 0x183a54: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
label_183a58:
    if (ctx->pc == 0x183A58u) {
        ctx->pc = 0x183A58u;
            // 0x183a58: 0x3c02005f  lui         $v0, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
        ctx->pc = 0x183A5Cu;
        goto label_183a5c;
    }
    ctx->pc = 0x183A54u;
    {
        const bool branch_taken_0x183a54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x183A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183A54u;
            // 0x183a58: 0x3c02005f  lui         $v0, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183a54) {
            ctx->pc = 0x183A6Cu;
            goto label_183a6c;
        }
    }
    ctx->pc = 0x183A5Cu;
label_183a5c:
    // 0x183a5c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x183a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_183a60:
    // 0x183a60: 0x8c43cf00  lw          $v1, -0x3100($v0)
    ctx->pc = 0x183a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954752)));
label_183a64:
    // 0x183a64: 0x54640006  bnel        $v1, $a0, . + 4 + (0x6 << 2)
label_183a68:
    if (ctx->pc == 0x183A68u) {
        ctx->pc = 0x183A68u;
            // 0x183a68: 0x90c30000  lbu         $v1, 0x0($a2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->pc = 0x183A6Cu;
        goto label_183a6c;
    }
    ctx->pc = 0x183A64u;
    {
        const bool branch_taken_0x183a64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x183a64) {
            ctx->pc = 0x183A68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x183A64u;
            // 0x183a68: 0x90c30000  lbu         $v1, 0x0($a2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x183A80u;
            goto label_183a80;
        }
    }
    ctx->pc = 0x183A6Cu;
label_183a6c:
    // 0x183a6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x183a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_183a70:
    // 0x183a70: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x183a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_183a74:
    // 0x183a74: 0xa2620057  sb          $v0, 0x57($s3)
    ctx->pc = 0x183a74u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 87), (uint8_t)GPR_U32(ctx, 2));
label_183a78:
    // 0x183a78: 0x10000005  b           . + 4 + (0x5 << 2)
label_183a7c:
    if (ctx->pc == 0x183A7Cu) {
        ctx->pc = 0x183A7Cu;
            // 0x183a7c: 0xa2620056  sb          $v0, 0x56($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 86), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x183A80u;
        goto label_183a80;
    }
    ctx->pc = 0x183A78u;
    {
        const bool branch_taken_0x183a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183A78u;
            // 0x183a7c: 0xa2620056  sb          $v0, 0x56($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 86), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183a78) {
            ctx->pc = 0x183A90u;
            goto label_183a90;
        }
    }
    ctx->pc = 0x183A80u;
label_183a80:
    // 0x183a80: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x183a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
label_183a84:
    // 0x183a84: 0xa2630056  sb          $v1, 0x56($s3)
    ctx->pc = 0x183a84u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 86), (uint8_t)GPR_U32(ctx, 3));
label_183a88:
    // 0x183a88: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x183a88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_183a8c:
    // 0x183a8c: 0xa2620057  sb          $v0, 0x57($s3)
    ctx->pc = 0x183a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 87), (uint8_t)GPR_U32(ctx, 2));
label_183a90:
    // 0x183a90: 0x1a40000b  blez        $s2, . + 4 + (0xB << 2)
label_183a94:
    if (ctx->pc == 0x183A94u) {
        ctx->pc = 0x183A94u;
            // 0x183a94: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x183A98u;
        goto label_183a98;
    }
    ctx->pc = 0x183A90u;
    {
        const bool branch_taken_0x183a90 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x183A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183A90u;
            // 0x183a94: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183a90) {
            ctx->pc = 0x183AC0u;
            goto label_183ac0;
        }
    }
    ctx->pc = 0x183A98u;
label_183a98:
    // 0x183a98: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x183a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_183a9c:
    // 0x183a9c: 0x26650008  addiu       $a1, $s3, 0x8
    ctx->pc = 0x183a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_183aa0:
    // 0x183aa0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x183aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_183aa4:
    // 0x183aa4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x183aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_183aa8:
    // 0x183aa8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x183aa8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_183aac:
    // 0x183aac: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x183aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_183ab0:
    // 0x183ab0: 0x232202a  slt         $a0, $s1, $s2
    ctx->pc = 0x183ab0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_183ab4:
    // 0x183ab4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x183ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_183ab8:
    // 0x183ab8: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
label_183abc:
    if (ctx->pc == 0x183ABCu) {
        ctx->pc = 0x183ABCu;
            // 0x183abc: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->pc = 0x183AC0u;
        goto label_183ac0;
    }
    ctx->pc = 0x183AB8u;
    {
        const bool branch_taken_0x183ab8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x183ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183AB8u;
            // 0x183abc: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183ab8) {
            ctx->pc = 0x183AA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_183aa0;
        }
    }
    ctx->pc = 0x183AC0u;
label_183ac0:
    // 0x183ac0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x183ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_183ac4:
    // 0x183ac4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x183ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_183ac8:
    // 0x183ac8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x183ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_183acc:
    // 0x183acc: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x183accu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_183ad0:
    // 0x183ad0: 0xc05f1dc  jal         func_17C770
label_183ad4:
    if (ctx->pc == 0x183AD4u) {
        ctx->pc = 0x183AD4u;
            // 0x183ad4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x183AD8u;
        goto label_183ad8;
    }
    ctx->pc = 0x183AD0u;
    SET_GPR_U32(ctx, 31, 0x183AD8u);
    ctx->pc = 0x183AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183AD0u;
            // 0x183ad4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C770u;
    if (runtime->hasFunction(0x17C770u)) {
        auto targetFn = runtime->lookupFunction(0x17C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183AD8u; }
        if (ctx->pc != 0x183AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C770_0x17c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183AD8u; }
        if (ctx->pc != 0x183AD8u) { return; }
    }
    ctx->pc = 0x183AD8u;
label_183ad8:
    // 0x183ad8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_183adc:
    if (ctx->pc == 0x183ADCu) {
        ctx->pc = 0x183ADCu;
            // 0x183adc: 0xae620020  sw          $v0, 0x20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
        ctx->pc = 0x183AE0u;
        goto label_183ae0;
    }
    ctx->pc = 0x183AD8u;
    {
        const bool branch_taken_0x183ad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183AD8u;
            // 0x183adc: 0xae620020  sw          $v0, 0x20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183ad8) {
            ctx->pc = 0x183AF8u;
            goto label_183af8;
        }
    }
    ctx->pc = 0x183AE0u;
label_183ae0:
    // 0x183ae0: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x183ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_183ae4:
    // 0x183ae4: 0xc05b99c  jal         func_16E670
label_183ae8:
    if (ctx->pc == 0x183AE8u) {
        ctx->pc = 0x183AE8u;
            // 0x183ae8: 0x24847708  addiu       $a0, $a0, 0x7708 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30472));
        ctx->pc = 0x183AECu;
        goto label_183aec;
    }
    ctx->pc = 0x183AE4u;
    SET_GPR_U32(ctx, 31, 0x183AECu);
    ctx->pc = 0x183AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183AE4u;
            // 0x183ae8: 0x24847708  addiu       $a0, $a0, 0x7708 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183AECu; }
        if (ctx->pc != 0x183AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E670_0x16e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183AECu; }
        if (ctx->pc != 0x183AECu) { return; }
    }
    ctx->pc = 0x183AECu;
label_183aec:
    // 0x183aec: 0x10000070  b           . + 4 + (0x70 << 2)
label_183af0:
    if (ctx->pc == 0x183AF0u) {
        ctx->pc = 0x183AF0u;
            // 0x183af0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x183AF4u;
        goto label_183af4;
    }
    ctx->pc = 0x183AECu;
    {
        const bool branch_taken_0x183aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183AECu;
            // 0x183af0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183aec) {
            ctx->pc = 0x183CB0u;
            goto label_183cb0;
        }
    }
    ctx->pc = 0x183AF4u;
label_183af4:
    // 0x183af4: 0x0  nop
    ctx->pc = 0x183af4u;
    // NOP
label_183af8:
    // 0x183af8: 0x1a400035  blez        $s2, . + 4 + (0x35 << 2)
label_183afc:
    if (ctx->pc == 0x183AFCu) {
        ctx->pc = 0x183AFCu;
            // 0x183afc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x183B00u;
        goto label_183b00;
    }
    ctx->pc = 0x183AF8u;
    {
        const bool branch_taken_0x183af8 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x183AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183AF8u;
            // 0x183afc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183af8) {
            ctx->pc = 0x183BD0u;
            goto label_183bd0;
        }
    }
    ctx->pc = 0x183B00u;
label_183b00:
    // 0x183b00: 0x26740008  addiu       $s4, $s3, 0x8
    ctx->pc = 0x183b00u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_183b04:
    // 0x183b04: 0x3c150063  lui         $s5, 0x63
    ctx->pc = 0x183b04u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)99 << 16));
label_183b08:
    // 0x183b08: 0x26700010  addiu       $s0, $s3, 0x10
    ctx->pc = 0x183b08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_183b0c:
    // 0x183b0c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x183b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_183b10:
    // 0x183b10: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x183b10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_183b14:
    // 0x183b14: 0x2821821  addu        $v1, $s4, $v0
    ctx->pc = 0x183b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_183b18:
    // 0x183b18: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x183b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_183b1c:
    // 0x183b1c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x183b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_183b20:
    // 0x183b20: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x183b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_183b24:
    // 0x183b24: 0xc05ef78  jal         func_17BDE0
label_183b28:
    if (ctx->pc == 0x183B28u) {
        ctx->pc = 0x183B28u;
            // 0x183b28: 0x8cc50008  lw          $a1, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->pc = 0x183B2Cu;
        goto label_183b2c;
    }
    ctx->pc = 0x183B24u;
    SET_GPR_U32(ctx, 31, 0x183B2Cu);
    ctx->pc = 0x183B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183B24u;
            // 0x183b28: 0x8cc50008  lw          $a1, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17BDE0u;
    if (runtime->hasFunction(0x17BDE0u)) {
        auto targetFn = runtime->lookupFunction(0x17BDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183B2Cu; }
        if (ctx->pc != 0x183B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017BDE0_0x17bde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183B2Cu; }
        if (ctx->pc != 0x183B2Cu) { return; }
    }
    ctx->pc = 0x183B2Cu;
label_183b2c:
    // 0x183b2c: 0x232182a  slt         $v1, $s1, $s2
    ctx->pc = 0x183b2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_183b30:
    // 0x183b30: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x183b30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_183b34:
    // 0x183b34: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
label_183b38:
    if (ctx->pc == 0x183B38u) {
        ctx->pc = 0x183B38u;
            // 0x183b38: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x183B3Cu;
        goto label_183b3c;
    }
    ctx->pc = 0x183B34u;
    {
        const bool branch_taken_0x183b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183B34u;
            // 0x183b38: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183b34) {
            ctx->pc = 0x183BC8u;
            goto label_183bc8;
        }
    }
    ctx->pc = 0x183B3Cu;
label_183b3c:
    // 0x183b3c: 0x26a47730  addiu       $a0, $s5, 0x7730
    ctx->pc = 0x183b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 30512));
label_183b40:
    // 0x183b40: 0xc05b99c  jal         func_16E670
label_183b44:
    if (ctx->pc == 0x183B44u) {
        ctx->pc = 0x183B44u;
            // 0x183b44: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x183B48u;
        goto label_183b48;
    }
    ctx->pc = 0x183B40u;
    SET_GPR_U32(ctx, 31, 0x183B48u);
    ctx->pc = 0x183B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183B40u;
            // 0x183b44: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183B48u; }
        if (ctx->pc != 0x183B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E670_0x16e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183B48u; }
        if (ctx->pc != 0x183B48u) { return; }
    }
    ctx->pc = 0x183B48u;
label_183b48:
    // 0x183b48: 0x1a400059  blez        $s2, . + 4 + (0x59 << 2)
label_183b4c:
    if (ctx->pc == 0x183B4Cu) {
        ctx->pc = 0x183B4Cu;
            // 0x183b4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x183B50u;
        goto label_183b50;
    }
    ctx->pc = 0x183B48u;
    {
        const bool branch_taken_0x183b48 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x183B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183B48u;
            // 0x183b4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183b48) {
            ctx->pc = 0x183CB0u;
            goto label_183cb0;
        }
    }
    ctx->pc = 0x183B50u;
label_183b50:
    // 0x183b50: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x183b50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_183b54:
    // 0x183b54: 0x26700010  addiu       $s0, $s3, 0x10
    ctx->pc = 0x183b54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_183b58:
    // 0x183b58: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x183b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_183b5c:
    // 0x183b5c: 0x0  nop
    ctx->pc = 0x183b5cu;
    // NOP
label_183b60:
    // 0x183b60: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x183b60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_183b64:
    // 0x183b64: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_183b68:
    if (ctx->pc == 0x183B68u) {
        ctx->pc = 0x183B68u;
            // 0x183b68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x183B6Cu;
        goto label_183b6c;
    }
    ctx->pc = 0x183B64u;
    {
        const bool branch_taken_0x183b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183B64u;
            // 0x183b68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183b64) {
            ctx->pc = 0x183B74u;
            goto label_183b74;
        }
    }
    ctx->pc = 0x183B6Cu;
label_183b6c:
    // 0x183b6c: 0xc05efb4  jal         func_17BED0
label_183b70:
    if (ctx->pc == 0x183B70u) {
        ctx->pc = 0x183B74u;
        goto label_183b74;
    }
    ctx->pc = 0x183B6Cu;
    SET_GPR_U32(ctx, 31, 0x183B74u);
    ctx->pc = 0x17BED0u;
    if (runtime->hasFunction(0x17BED0u)) {
        auto targetFn = runtime->lookupFunction(0x17BED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183B74u; }
        if (ctx->pc != 0x183B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017BED0_0x17bed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183B74u; }
        if (ctx->pc != 0x183B74u) { return; }
    }
    ctx->pc = 0x183B74u;
label_183b74:
    // 0x183b74: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x183b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_183b78:
    // 0x183b78: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_183b7c:
    if (ctx->pc == 0x183B7Cu) {
        ctx->pc = 0x183B7Cu;
            // 0x183b7c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x183B80u;
        goto label_183b80;
    }
    ctx->pc = 0x183B78u;
    {
        const bool branch_taken_0x183b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183B78u;
            // 0x183b7c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183b78) {
            ctx->pc = 0x183B98u;
            goto label_183b98;
        }
    }
    ctx->pc = 0x183B80u;
label_183b80:
    // 0x183b80: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x183b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_183b84:
    // 0x183b84: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x183b84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_183b88:
    // 0x183b88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x183b88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_183b8c:
    // 0x183b8c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x183b8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_183b90:
    // 0x183b90: 0xc05f1dc  jal         func_17C770
label_183b94:
    if (ctx->pc == 0x183B94u) {
        ctx->pc = 0x183B94u;
            // 0x183b94: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x183B98u;
        goto label_183b98;
    }
    ctx->pc = 0x183B90u;
    SET_GPR_U32(ctx, 31, 0x183B98u);
    ctx->pc = 0x183B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183B90u;
            // 0x183b94: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C770u;
    if (runtime->hasFunction(0x17C770u)) {
        auto targetFn = runtime->lookupFunction(0x17C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183B98u; }
        if (ctx->pc != 0x183B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C770_0x17c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183B98u; }
        if (ctx->pc != 0x183B98u) { return; }
    }
    ctx->pc = 0x183B98u;
label_183b98:
    // 0x183b98: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x183b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_183b9c:
    // 0x183b9c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_183ba0:
    if (ctx->pc == 0x183BA0u) {
        ctx->pc = 0x183BA0u;
            // 0x183ba0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x183BA4u;
        goto label_183ba4;
    }
    ctx->pc = 0x183B9Cu;
    {
        const bool branch_taken_0x183b9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x183BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183B9Cu;
            // 0x183ba0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183b9c) {
            ctx->pc = 0x183BACu;
            goto label_183bac;
        }
    }
    ctx->pc = 0x183BA4u;
label_183ba4:
    // 0x183ba4: 0xc060b4a  jal         func_182D28
label_183ba8:
    if (ctx->pc == 0x183BA8u) {
        ctx->pc = 0x183BACu;
        goto label_183bac;
    }
    ctx->pc = 0x183BA4u;
    SET_GPR_U32(ctx, 31, 0x183BACu);
    ctx->pc = 0x182D28u;
    if (runtime->hasFunction(0x182D28u)) {
        auto targetFn = runtime->lookupFunction(0x182D28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183BACu; }
        if (ctx->pc != 0x183BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182D28_0x182d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183BACu; }
        if (ctx->pc != 0x183BACu) { return; }
    }
    ctx->pc = 0x183BACu;
label_183bac:
    // 0x183bac: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x183bacu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_183bb0:
    // 0x183bb0: 0x2b2102a  slt         $v0, $s5, $s2
    ctx->pc = 0x183bb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_183bb4:
    // 0x183bb4: 0x5440ffea  bnel        $v0, $zero, . + 4 + (-0x16 << 2)
label_183bb8:
    if (ctx->pc == 0x183BB8u) {
        ctx->pc = 0x183BB8u;
            // 0x183bb8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x183BBCu;
        goto label_183bbc;
    }
    ctx->pc = 0x183BB4u;
    {
        const bool branch_taken_0x183bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x183bb4) {
            ctx->pc = 0x183BB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x183BB4u;
            // 0x183bb8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x183B60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_183b60;
        }
    }
    ctx->pc = 0x183BBCu;
label_183bbc:
    // 0x183bbc: 0x1000003c  b           . + 4 + (0x3C << 2)
label_183bc0:
    if (ctx->pc == 0x183BC0u) {
        ctx->pc = 0x183BC0u;
            // 0x183bc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x183BC4u;
        goto label_183bc4;
    }
    ctx->pc = 0x183BBCu;
    {
        const bool branch_taken_0x183bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183BBCu;
            // 0x183bc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183bbc) {
            ctx->pc = 0x183CB0u;
            goto label_183cb0;
        }
    }
    ctx->pc = 0x183BC4u;
label_183bc4:
    // 0x183bc4: 0x0  nop
    ctx->pc = 0x183bc4u;
    // NOP
label_183bc8:
    // 0x183bc8: 0x1460ffd1  bnez        $v1, . + 4 + (-0x2F << 2)
label_183bcc:
    if (ctx->pc == 0x183BCCu) {
        ctx->pc = 0x183BCCu;
            // 0x183bcc: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->pc = 0x183BD0u;
        goto label_183bd0;
    }
    ctx->pc = 0x183BC8u;
    {
        const bool branch_taken_0x183bc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x183BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183BC8u;
            // 0x183bcc: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183bc8) {
            ctx->pc = 0x183B10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_183b10;
        }
    }
    ctx->pc = 0x183BD0u;
label_183bd0:
    // 0x183bd0: 0x1a40000a  blez        $s2, . + 4 + (0xA << 2)
label_183bd4:
    if (ctx->pc == 0x183BD4u) {
        ctx->pc = 0x183BD4u;
            // 0x183bd4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x183BD8u;
        goto label_183bd8;
    }
    ctx->pc = 0x183BD0u;
    {
        const bool branch_taken_0x183bd0 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x183BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183BD0u;
            // 0x183bd4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183bd0) {
            ctx->pc = 0x183BFCu;
            goto label_183bfc;
        }
    }
    ctx->pc = 0x183BD8u;
label_183bd8:
    // 0x183bd8: 0x26650018  addiu       $a1, $s3, 0x18
    ctx->pc = 0x183bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_183bdc:
    // 0x183bdc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x183bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_183be0:
    // 0x183be0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x183be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_183be4:
    // 0x183be4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x183be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_183be8:
    // 0x183be8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x183be8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_183bec:
    // 0x183bec: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x183becu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_183bf0:
    // 0x183bf0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x183bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_183bf4:
    // 0x183bf4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_183bf8:
    if (ctx->pc == 0x183BF8u) {
        ctx->pc = 0x183BF8u;
            // 0x183bf8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x183BFCu;
        goto label_183bfc;
    }
    ctx->pc = 0x183BF4u;
    {
        const bool branch_taken_0x183bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183BF4u;
            // 0x183bf8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183bf4) {
            ctx->pc = 0x183BE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_183be0;
        }
    }
    ctx->pc = 0x183BFCu;
label_183bfc:
    // 0x183bfc: 0xa2600050  sb          $zero, 0x50($s3)
    ctx->pc = 0x183bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 80), (uint8_t)GPR_U32(ctx, 0));
label_183c00:
    // 0x183c00: 0xa2600051  sb          $zero, 0x51($s3)
    ctx->pc = 0x183c00u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 81), (uint8_t)GPR_U32(ctx, 0));
label_183c04:
    // 0x183c04: 0xa2720052  sb          $s2, 0x52($s3)
    ctx->pc = 0x183c04u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 82), (uint8_t)GPR_U32(ctx, 18));
label_183c08:
    // 0x183c08: 0xa2720053  sb          $s2, 0x53($s3)
    ctx->pc = 0x183c08u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 83), (uint8_t)GPR_U32(ctx, 18));
label_183c0c:
    // 0x183c0c: 0xae600038  sw          $zero, 0x38($s3)
    ctx->pc = 0x183c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 0));
label_183c10:
    // 0x183c10: 0xae60003c  sw          $zero, 0x3C($s3)
    ctx->pc = 0x183c10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 0));
label_183c14:
    // 0x183c14: 0xa2600054  sb          $zero, 0x54($s3)
    ctx->pc = 0x183c14u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 84), (uint8_t)GPR_U32(ctx, 0));
label_183c18:
    // 0x183c18: 0xa2600055  sb          $zero, 0x55($s3)
    ctx->pc = 0x183c18u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 85), (uint8_t)GPR_U32(ctx, 0));
label_183c1c:
    // 0x183c1c: 0xa260005b  sb          $zero, 0x5B($s3)
    ctx->pc = 0x183c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 91), (uint8_t)GPR_U32(ctx, 0));
label_183c20:
    // 0x183c20: 0x1a40000c  blez        $s2, . + 4 + (0xC << 2)
label_183c24:
    if (ctx->pc == 0x183C24u) {
        ctx->pc = 0x183C24u;
            // 0x183c24: 0xa260005a  sb          $zero, 0x5A($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 90), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x183C28u;
        goto label_183c28;
    }
    ctx->pc = 0x183C20u;
    {
        const bool branch_taken_0x183c20 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x183C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183C20u;
            // 0x183c24: 0xa260005a  sb          $zero, 0x5A($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 90), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183c20) {
            ctx->pc = 0x183C54u;
            goto label_183c54;
        }
    }
    ctx->pc = 0x183C28u;
label_183c28:
    // 0x183c28: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x183c28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_183c2c:
    // 0x183c2c: 0x26650008  addiu       $a1, $s3, 0x8
    ctx->pc = 0x183c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_183c30:
    // 0x183c30: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x183c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_183c34:
    // 0x183c34: 0x0  nop
    ctx->pc = 0x183c34u;
    // NOP
label_183c38:
    // 0x183c38: 0x2641021  addu        $v0, $s3, $a0
    ctx->pc = 0x183c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_183c3c:
    // 0x183c3c: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x183c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_183c40:
    // 0x183c40: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x183c40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_183c44:
    // 0x183c44: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x183c44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_183c48:
    // 0x183c48: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x183c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_183c4c:
    // 0x183c4c: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
label_183c50:
    if (ctx->pc == 0x183C50u) {
        ctx->pc = 0x183C50u;
            // 0x183c50: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x183C54u;
        goto label_183c54;
    }
    ctx->pc = 0x183C4Cu;
    {
        const bool branch_taken_0x183c4c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x183C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183C4Cu;
            // 0x183c50: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183c4c) {
            ctx->pc = 0x183C38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_183c38;
        }
    }
    ctx->pc = 0x183C54u;
label_183c54:
    // 0x183c54: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x183c54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_183c58:
    // 0x183c58: 0xa2600058  sb          $zero, 0x58($s3)
    ctx->pc = 0x183c58u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 88), (uint8_t)GPR_U32(ctx, 0));
label_183c5c:
    // 0x183c5c: 0xa2710059  sb          $s1, 0x59($s3)
    ctx->pc = 0x183c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 89), (uint8_t)GPR_U32(ctx, 17));
label_183c60:
    // 0x183c60: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x183c60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_183c64:
    // 0x183c64: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x183c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_183c68:
    // 0x183c68: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x183c68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_183c6c:
    // 0x183c6c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x183c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_183c70:
    // 0x183c70: 0xae600024  sw          $zero, 0x24($s3)
    ctx->pc = 0x183c70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
label_183c74:
    // 0x183c74: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x183c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_183c78:
    // 0x183c78: 0x40f809  jalr        $v0
label_183c7c:
    if (ctx->pc == 0x183C7Cu) {
        ctx->pc = 0x183C7Cu;
            // 0x183c7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x183C80u;
        goto label_183c80;
    }
    ctx->pc = 0x183C78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x183C80u);
        ctx->pc = 0x183C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183C78u;
            // 0x183c7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x183C80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x183C80u; }
            if (ctx->pc != 0x183C80u) { return; }
        }
        }
    }
    ctx->pc = 0x183C80u;
label_183c80:
    // 0x183c80: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x183c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_183c84:
    // 0x183c84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x183c84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_183c88:
    // 0x183c88: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x183c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_183c8c:
    // 0x183c8c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x183c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_183c90:
    // 0x183c90: 0x40f809  jalr        $v0
label_183c94:
    if (ctx->pc == 0x183C94u) {
        ctx->pc = 0x183C94u;
            // 0x183c94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x183C98u;
        goto label_183c98;
    }
    ctx->pc = 0x183C90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x183C98u);
        ctx->pc = 0x183C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183C90u;
            // 0x183c94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x183C98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x183C98u; }
            if (ctx->pc != 0x183C98u) { return; }
        }
        }
    }
    ctx->pc = 0x183C98u;
label_183c98:
    // 0x183c98: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x183c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_183c9c:
    // 0x183c9c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x183c9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_183ca0:
    // 0x183ca0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x183ca0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_183ca4:
    // 0x183ca4: 0xae700028  sw          $s0, 0x28($s3)
    ctx->pc = 0x183ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 16));
label_183ca8:
    // 0x183ca8: 0xae63002c  sw          $v1, 0x2C($s3)
    ctx->pc = 0x183ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 3));
label_183cac:
    // 0x183cac: 0xa2710000  sb          $s1, 0x0($s3)
    ctx->pc = 0x183cacu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 17));
label_183cb0:
    // 0x183cb0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x183cb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_183cb4:
    // 0x183cb4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x183cb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_183cb8:
    // 0x183cb8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x183cb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_183cbc:
    // 0x183cbc: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x183cbcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_183cc0:
    // 0x183cc0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x183cc0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_183cc4:
    // 0x183cc4: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x183cc4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_183cc8:
    // 0x183cc8: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x183cc8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_183ccc:
    // 0x183ccc: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x183cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_183cd0:
    // 0x183cd0: 0x3e00008  jr          $ra
label_183cd4:
    if (ctx->pc == 0x183CD4u) {
        ctx->pc = 0x183CD4u;
            // 0x183cd4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x183CD8u;
        goto label_183cd8;
    }
    ctx->pc = 0x183CD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183CD0u;
            // 0x183cd4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x183CD8u;
label_183cd8:
    // 0x183cd8: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x183cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_183cdc:
    // 0x183cdc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x183cdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_183ce0:
    // 0x183ce0: 0x8c43ced8  lw          $v1, -0x3128($v0)
    ctx->pc = 0x183ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954712)));
label_183ce4:
    // 0x183ce4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x183ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_183ce8:
    // 0x183ce8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x183ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_183cec:
    // 0x183cec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x183cecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_183cf0:
    // 0x183cf0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x183cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_183cf4:
    // 0x183cf4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x183cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_183cf8:
    // 0x183cf8: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
label_183cfc:
    if (ctx->pc == 0x183CFCu) {
        ctx->pc = 0x183CFCu;
            // 0x183cfc: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->pc = 0x183D00u;
        goto label_183d00;
    }
    ctx->pc = 0x183CF8u;
    {
        const bool branch_taken_0x183cf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x183CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183CF8u;
            // 0x183cfc: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183cf8) {
            ctx->pc = 0x183D10u;
            goto label_183d10;
        }
    }
    ctx->pc = 0x183D00u;
label_183d00:
    // 0x183d00: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x183d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_183d04:
    // 0x183d04: 0x8c43ced0  lw          $v1, -0x3130($v0)
    ctx->pc = 0x183d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954704)));
label_183d08:
    // 0x183d08: 0x58600027  blezl       $v1, . + 4 + (0x27 << 2)
label_183d0c:
    if (ctx->pc == 0x183D0Cu) {
        ctx->pc = 0x183D0Cu;
            // 0x183d0c: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x183D10u;
        goto label_183d10;
    }
    ctx->pc = 0x183D08u;
    {
        const bool branch_taken_0x183d08 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x183d08) {
            ctx->pc = 0x183D0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x183D08u;
            // 0x183d0c: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x183DA8u;
            goto label_183da8;
        }
    }
    ctx->pc = 0x183D10u;
label_183d10:
    // 0x183d10: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x183d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_183d14:
    // 0x183d14: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
label_183d18:
    if (ctx->pc == 0x183D18u) {
        ctx->pc = 0x183D18u;
            // 0x183d18: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x183D1Cu;
        goto label_183d1c;
    }
    ctx->pc = 0x183D14u;
    {
        const bool branch_taken_0x183d14 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x183D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183D14u;
            // 0x183d18: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183d14) {
            ctx->pc = 0x183D4Cu;
            goto label_183d4c;
        }
    }
    ctx->pc = 0x183D1Cu;
label_183d1c:
    // 0x183d1c: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x183d1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_183d20:
    // 0x183d20: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x183d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_183d24:
    // 0x183d24: 0x0  nop
    ctx->pc = 0x183d24u;
    // NOP
label_183d28:
    // 0x183d28: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_183d2c:
    if (ctx->pc == 0x183D2Cu) {
        ctx->pc = 0x183D2Cu;
            // 0x183d2c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x183D30u;
        goto label_183d30;
    }
    ctx->pc = 0x183D28u;
    {
        const bool branch_taken_0x183d28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x183D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183D28u;
            // 0x183d2c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183d28) {
            ctx->pc = 0x183D3Cu;
            goto label_183d3c;
        }
    }
    ctx->pc = 0x183D30u;
label_183d30:
    // 0x183d30: 0xc05efb4  jal         func_17BED0
label_183d34:
    if (ctx->pc == 0x183D34u) {
        ctx->pc = 0x183D38u;
        goto label_183d38;
    }
    ctx->pc = 0x183D30u;
    SET_GPR_U32(ctx, 31, 0x183D38u);
    ctx->pc = 0x17BED0u;
    if (runtime->hasFunction(0x17BED0u)) {
        auto targetFn = runtime->lookupFunction(0x17BED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183D38u; }
        if (ctx->pc != 0x183D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017BED0_0x17bed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183D38u; }
        if (ctx->pc != 0x183D38u) { return; }
    }
    ctx->pc = 0x183D38u;
label_183d38:
    // 0x183d38: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x183d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_183d3c:
    // 0x183d3c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x183d3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_183d40:
    // 0x183d40: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x183d40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_183d44:
    // 0x183d44: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_183d48:
    if (ctx->pc == 0x183D48u) {
        ctx->pc = 0x183D48u;
            // 0x183d48: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x183D4Cu;
        goto label_183d4c;
    }
    ctx->pc = 0x183D44u;
    {
        const bool branch_taken_0x183d44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x183d44) {
            ctx->pc = 0x183D48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x183D44u;
            // 0x183d48: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x183D28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_183d28;
        }
    }
    ctx->pc = 0x183D4Cu;
label_183d4c:
    // 0x183d4c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x183d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_183d50:
    // 0x183d50: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x183d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_183d54:
    // 0x183d54: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x183d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_183d58:
    // 0x183d58: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x183d58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_183d5c:
    // 0x183d5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x183d5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_183d60:
    // 0x183d60: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x183d60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_183d64:
    // 0x183d64: 0xc05f1dc  jal         func_17C770
label_183d68:
    if (ctx->pc == 0x183D68u) {
        ctx->pc = 0x183D68u;
            // 0x183d68: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x183D6Cu;
        goto label_183d6c;
    }
    ctx->pc = 0x183D64u;
    SET_GPR_U32(ctx, 31, 0x183D6Cu);
    ctx->pc = 0x183D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183D64u;
            // 0x183d68: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C770u;
    if (runtime->hasFunction(0x17C770u)) {
        auto targetFn = runtime->lookupFunction(0x17C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183D6Cu; }
        if (ctx->pc != 0x183D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C770_0x17c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183D6Cu; }
        if (ctx->pc != 0x183D6Cu) { return; }
    }
    ctx->pc = 0x183D6Cu;
label_183d6c:
    // 0x183d6c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x183d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_183d70:
    // 0x183d70: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
label_183d74:
    if (ctx->pc == 0x183D74u) {
        ctx->pc = 0x183D74u;
            // 0x183d74: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x183D78u;
        goto label_183d78;
    }
    ctx->pc = 0x183D70u;
    {
        const bool branch_taken_0x183d70 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x183D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183D70u;
            // 0x183d74: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183d70) {
            ctx->pc = 0x183DA4u;
            goto label_183da4;
        }
    }
    ctx->pc = 0x183D78u;
label_183d78:
    // 0x183d78: 0x26300008  addiu       $s0, $s1, 0x8
    ctx->pc = 0x183d78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_183d7c:
    // 0x183d7c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x183d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_183d80:
    // 0x183d80: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_183d84:
    if (ctx->pc == 0x183D84u) {
        ctx->pc = 0x183D84u;
            // 0x183d84: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x183D88u;
        goto label_183d88;
    }
    ctx->pc = 0x183D80u;
    {
        const bool branch_taken_0x183d80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x183D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183D80u;
            // 0x183d84: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183d80) {
            ctx->pc = 0x183D94u;
            goto label_183d94;
        }
    }
    ctx->pc = 0x183D88u;
label_183d88:
    // 0x183d88: 0xc060b4a  jal         func_182D28
label_183d8c:
    if (ctx->pc == 0x183D8Cu) {
        ctx->pc = 0x183D90u;
        goto label_183d90;
    }
    ctx->pc = 0x183D88u;
    SET_GPR_U32(ctx, 31, 0x183D90u);
    ctx->pc = 0x182D28u;
    if (runtime->hasFunction(0x182D28u)) {
        auto targetFn = runtime->lookupFunction(0x182D28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183D90u; }
        if (ctx->pc != 0x183D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182D28_0x182d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183D90u; }
        if (ctx->pc != 0x183D90u) { return; }
    }
    ctx->pc = 0x183D90u;
label_183d90:
    // 0x183d90: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x183d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_183d94:
    // 0x183d94: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x183d94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_183d98:
    // 0x183d98: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x183d98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_183d9c:
    // 0x183d9c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_183da0:
    if (ctx->pc == 0x183DA0u) {
        ctx->pc = 0x183DA0u;
            // 0x183da0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x183DA4u;
        goto label_183da4;
    }
    ctx->pc = 0x183D9Cu;
    {
        const bool branch_taken_0x183d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x183d9c) {
            ctx->pc = 0x183DA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x183D9Cu;
            // 0x183da0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x183D80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_183d80;
        }
    }
    ctx->pc = 0x183DA4u;
label_183da4:
    // 0x183da4: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x183da4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_183da8:
    // 0x183da8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x183da8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_183dac:
    // 0x183dac: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x183dacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_183db0:
    // 0x183db0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x183db0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_183db4:
    // 0x183db4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x183db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_183db8:
    // 0x183db8: 0x3e00008  jr          $ra
label_183dbc:
    if (ctx->pc == 0x183DBCu) {
        ctx->pc = 0x183DBCu;
            // 0x183dbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x183DC0u;
        goto label_183dc0;
    }
    ctx->pc = 0x183DB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183DB8u;
            // 0x183dbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x183DC0u;
label_183dc0:
    // 0x183dc0: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x183dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_183dc4:
    // 0x183dc4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x183dc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_183dc8:
    // 0x183dc8: 0x8c43ced8  lw          $v1, -0x3128($v0)
    ctx->pc = 0x183dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954712)));
label_183dcc:
    // 0x183dcc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x183dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_183dd0:
    // 0x183dd0: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_183dd4:
    if (ctx->pc == 0x183DD4u) {
        ctx->pc = 0x183DD4u;
            // 0x183dd4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x183DD8u;
        goto label_183dd8;
    }
    ctx->pc = 0x183DD0u;
    {
        const bool branch_taken_0x183dd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x183DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183DD0u;
            // 0x183dd4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183dd0) {
            ctx->pc = 0x183DE8u;
            goto label_183de8;
        }
    }
    ctx->pc = 0x183DD8u;
label_183dd8:
    // 0x183dd8: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x183dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_183ddc:
    // 0x183ddc: 0x8c43ced0  lw          $v1, -0x3130($v0)
    ctx->pc = 0x183ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954704)));
label_183de0:
    // 0x183de0: 0x18600007  blez        $v1, . + 4 + (0x7 << 2)
label_183de4:
    if (ctx->pc == 0x183DE4u) {
        ctx->pc = 0x183DE4u;
            // 0x183de4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x183DE8u;
        goto label_183de8;
    }
    ctx->pc = 0x183DE0u;
    {
        const bool branch_taken_0x183de0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x183DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183DE0u;
            // 0x183de4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183de0) {
            ctx->pc = 0x183E00u;
            goto label_183e00;
        }
    }
    ctx->pc = 0x183DE8u;
label_183de8:
    // 0x183de8: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x183de8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_183dec:
    // 0x183dec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x183decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_183df0:
    // 0x183df0: 0x24847758  addiu       $a0, $a0, 0x7758
    ctx->pc = 0x183df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30552));
label_183df4:
    // 0x183df4: 0x805b99c  j           func_16E670
label_183df8:
    if (ctx->pc == 0x183DF8u) {
        ctx->pc = 0x183DF8u;
            // 0x183df8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x183DFCu;
        goto label_183dfc;
    }
    ctx->pc = 0x183DF4u;
    ctx->pc = 0x183DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183DF4u;
            // 0x183df8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0016E670_0x16e670(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x183DFCu;
label_183dfc:
    // 0x183dfc: 0x0  nop
    ctx->pc = 0x183dfcu;
    // NOP
label_183e00:
    // 0x183e00: 0x3e00008  jr          $ra
label_183e04:
    if (ctx->pc == 0x183E04u) {
        ctx->pc = 0x183E04u;
            // 0x183e04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x183E08u;
        goto label_183e08;
    }
    ctx->pc = 0x183E00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183E00u;
            // 0x183e04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x183E08u;
label_183e08:
    // 0x183e08: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x183e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_183e0c:
    // 0x183e0c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x183e0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_183e10:
    // 0x183e10: 0x8c43ced8  lw          $v1, -0x3128($v0)
    ctx->pc = 0x183e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954712)));
label_183e14:
    // 0x183e14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x183e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_183e18:
    // 0x183e18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x183e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_183e1c:
    // 0x183e1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x183e1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_183e20:
    // 0x183e20: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
label_183e24:
    if (ctx->pc == 0x183E24u) {
        ctx->pc = 0x183E24u;
            // 0x183e24: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->pc = 0x183E28u;
        goto label_183e28;
    }
    ctx->pc = 0x183E20u;
    {
        const bool branch_taken_0x183e20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x183E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183E20u;
            // 0x183e24: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183e20) {
            ctx->pc = 0x183E38u;
            goto label_183e38;
        }
    }
    ctx->pc = 0x183E28u;
label_183e28:
    // 0x183e28: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x183e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_183e2c:
    // 0x183e2c: 0x8c43ced0  lw          $v1, -0x3130($v0)
    ctx->pc = 0x183e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954704)));
label_183e30:
    // 0x183e30: 0x58600009  blezl       $v1, . + 4 + (0x9 << 2)
label_183e34:
    if (ctx->pc == 0x183E34u) {
        ctx->pc = 0x183E34u;
            // 0x183e34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x183E38u;
        goto label_183e38;
    }
    ctx->pc = 0x183E30u;
    {
        const bool branch_taken_0x183e30 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x183e30) {
            ctx->pc = 0x183E34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x183E30u;
            // 0x183e34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x183E58u;
            goto label_183e58;
        }
    }
    ctx->pc = 0x183E38u;
label_183e38:
    // 0x183e38: 0xc060f9a  jal         func_183E68
label_183e3c:
    if (ctx->pc == 0x183E3Cu) {
        ctx->pc = 0x183E3Cu;
            // 0x183e3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x183E40u;
        goto label_183e40;
    }
    ctx->pc = 0x183E38u;
    SET_GPR_U32(ctx, 31, 0x183E40u);
    ctx->pc = 0x183E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183E38u;
            // 0x183e3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183E68u;
    if (runtime->hasFunction(0x183E68u)) {
        auto targetFn = runtime->lookupFunction(0x183E68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183E40u; }
        if (ctx->pc != 0x183E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183E68_0x183e68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183E40u; }
        if (ctx->pc != 0x183E40u) { return; }
    }
    ctx->pc = 0x183E40u;
label_183e40:
    // 0x183e40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_183e44:
    // 0x183e44: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x183e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_183e48:
    // 0x183e48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x183e48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_183e4c:
    // 0x183e4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x183e4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_183e50:
    // 0x183e50: 0x8060fc0  j           func_183F00
label_183e54:
    if (ctx->pc == 0x183E54u) {
        ctx->pc = 0x183E54u;
            // 0x183e54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x183E58u;
        goto label_183e58;
    }
    ctx->pc = 0x183E50u;
    ctx->pc = 0x183E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183E50u;
            // 0x183e54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183F00u;
    if (runtime->hasFunction(0x183F00u)) {
        auto targetFn = runtime->lookupFunction(0x183F00u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00183F00_0x183f00(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x183E58u;
label_183e58:
    // 0x183e58: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x183e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_183e5c:
    // 0x183e5c: 0x3e00008  jr          $ra
label_183e60:
    if (ctx->pc == 0x183E60u) {
        ctx->pc = 0x183E60u;
            // 0x183e60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x183E64u;
        goto label_183e64;
    }
    ctx->pc = 0x183E5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183E5Cu;
            // 0x183e60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x183E64u;
label_183e64:
    // 0x183e64: 0x0  nop
    ctx->pc = 0x183e64u;
    // NOP
}
