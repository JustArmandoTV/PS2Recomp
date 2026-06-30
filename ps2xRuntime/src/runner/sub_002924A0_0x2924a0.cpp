#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002924A0
// Address: 0x2924a0 - 0x2933f0
void sub_002924A0_0x2924a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002924A0_0x2924a0");
#endif

    switch (ctx->pc) {
        case 0x2924a0u: goto label_2924a0;
        case 0x2924a4u: goto label_2924a4;
        case 0x2924a8u: goto label_2924a8;
        case 0x2924acu: goto label_2924ac;
        case 0x2924b0u: goto label_2924b0;
        case 0x2924b4u: goto label_2924b4;
        case 0x2924b8u: goto label_2924b8;
        case 0x2924bcu: goto label_2924bc;
        case 0x2924c0u: goto label_2924c0;
        case 0x2924c4u: goto label_2924c4;
        case 0x2924c8u: goto label_2924c8;
        case 0x2924ccu: goto label_2924cc;
        case 0x2924d0u: goto label_2924d0;
        case 0x2924d4u: goto label_2924d4;
        case 0x2924d8u: goto label_2924d8;
        case 0x2924dcu: goto label_2924dc;
        case 0x2924e0u: goto label_2924e0;
        case 0x2924e4u: goto label_2924e4;
        case 0x2924e8u: goto label_2924e8;
        case 0x2924ecu: goto label_2924ec;
        case 0x2924f0u: goto label_2924f0;
        case 0x2924f4u: goto label_2924f4;
        case 0x2924f8u: goto label_2924f8;
        case 0x2924fcu: goto label_2924fc;
        case 0x292500u: goto label_292500;
        case 0x292504u: goto label_292504;
        case 0x292508u: goto label_292508;
        case 0x29250cu: goto label_29250c;
        case 0x292510u: goto label_292510;
        case 0x292514u: goto label_292514;
        case 0x292518u: goto label_292518;
        case 0x29251cu: goto label_29251c;
        case 0x292520u: goto label_292520;
        case 0x292524u: goto label_292524;
        case 0x292528u: goto label_292528;
        case 0x29252cu: goto label_29252c;
        case 0x292530u: goto label_292530;
        case 0x292534u: goto label_292534;
        case 0x292538u: goto label_292538;
        case 0x29253cu: goto label_29253c;
        case 0x292540u: goto label_292540;
        case 0x292544u: goto label_292544;
        case 0x292548u: goto label_292548;
        case 0x29254cu: goto label_29254c;
        case 0x292550u: goto label_292550;
        case 0x292554u: goto label_292554;
        case 0x292558u: goto label_292558;
        case 0x29255cu: goto label_29255c;
        case 0x292560u: goto label_292560;
        case 0x292564u: goto label_292564;
        case 0x292568u: goto label_292568;
        case 0x29256cu: goto label_29256c;
        case 0x292570u: goto label_292570;
        case 0x292574u: goto label_292574;
        case 0x292578u: goto label_292578;
        case 0x29257cu: goto label_29257c;
        case 0x292580u: goto label_292580;
        case 0x292584u: goto label_292584;
        case 0x292588u: goto label_292588;
        case 0x29258cu: goto label_29258c;
        case 0x292590u: goto label_292590;
        case 0x292594u: goto label_292594;
        case 0x292598u: goto label_292598;
        case 0x29259cu: goto label_29259c;
        case 0x2925a0u: goto label_2925a0;
        case 0x2925a4u: goto label_2925a4;
        case 0x2925a8u: goto label_2925a8;
        case 0x2925acu: goto label_2925ac;
        case 0x2925b0u: goto label_2925b0;
        case 0x2925b4u: goto label_2925b4;
        case 0x2925b8u: goto label_2925b8;
        case 0x2925bcu: goto label_2925bc;
        case 0x2925c0u: goto label_2925c0;
        case 0x2925c4u: goto label_2925c4;
        case 0x2925c8u: goto label_2925c8;
        case 0x2925ccu: goto label_2925cc;
        case 0x2925d0u: goto label_2925d0;
        case 0x2925d4u: goto label_2925d4;
        case 0x2925d8u: goto label_2925d8;
        case 0x2925dcu: goto label_2925dc;
        case 0x2925e0u: goto label_2925e0;
        case 0x2925e4u: goto label_2925e4;
        case 0x2925e8u: goto label_2925e8;
        case 0x2925ecu: goto label_2925ec;
        case 0x2925f0u: goto label_2925f0;
        case 0x2925f4u: goto label_2925f4;
        case 0x2925f8u: goto label_2925f8;
        case 0x2925fcu: goto label_2925fc;
        case 0x292600u: goto label_292600;
        case 0x292604u: goto label_292604;
        case 0x292608u: goto label_292608;
        case 0x29260cu: goto label_29260c;
        case 0x292610u: goto label_292610;
        case 0x292614u: goto label_292614;
        case 0x292618u: goto label_292618;
        case 0x29261cu: goto label_29261c;
        case 0x292620u: goto label_292620;
        case 0x292624u: goto label_292624;
        case 0x292628u: goto label_292628;
        case 0x29262cu: goto label_29262c;
        case 0x292630u: goto label_292630;
        case 0x292634u: goto label_292634;
        case 0x292638u: goto label_292638;
        case 0x29263cu: goto label_29263c;
        case 0x292640u: goto label_292640;
        case 0x292644u: goto label_292644;
        case 0x292648u: goto label_292648;
        case 0x29264cu: goto label_29264c;
        case 0x292650u: goto label_292650;
        case 0x292654u: goto label_292654;
        case 0x292658u: goto label_292658;
        case 0x29265cu: goto label_29265c;
        case 0x292660u: goto label_292660;
        case 0x292664u: goto label_292664;
        case 0x292668u: goto label_292668;
        case 0x29266cu: goto label_29266c;
        case 0x292670u: goto label_292670;
        case 0x292674u: goto label_292674;
        case 0x292678u: goto label_292678;
        case 0x29267cu: goto label_29267c;
        case 0x292680u: goto label_292680;
        case 0x292684u: goto label_292684;
        case 0x292688u: goto label_292688;
        case 0x29268cu: goto label_29268c;
        case 0x292690u: goto label_292690;
        case 0x292694u: goto label_292694;
        case 0x292698u: goto label_292698;
        case 0x29269cu: goto label_29269c;
        case 0x2926a0u: goto label_2926a0;
        case 0x2926a4u: goto label_2926a4;
        case 0x2926a8u: goto label_2926a8;
        case 0x2926acu: goto label_2926ac;
        case 0x2926b0u: goto label_2926b0;
        case 0x2926b4u: goto label_2926b4;
        case 0x2926b8u: goto label_2926b8;
        case 0x2926bcu: goto label_2926bc;
        case 0x2926c0u: goto label_2926c0;
        case 0x2926c4u: goto label_2926c4;
        case 0x2926c8u: goto label_2926c8;
        case 0x2926ccu: goto label_2926cc;
        case 0x2926d0u: goto label_2926d0;
        case 0x2926d4u: goto label_2926d4;
        case 0x2926d8u: goto label_2926d8;
        case 0x2926dcu: goto label_2926dc;
        case 0x2926e0u: goto label_2926e0;
        case 0x2926e4u: goto label_2926e4;
        case 0x2926e8u: goto label_2926e8;
        case 0x2926ecu: goto label_2926ec;
        case 0x2926f0u: goto label_2926f0;
        case 0x2926f4u: goto label_2926f4;
        case 0x2926f8u: goto label_2926f8;
        case 0x2926fcu: goto label_2926fc;
        case 0x292700u: goto label_292700;
        case 0x292704u: goto label_292704;
        case 0x292708u: goto label_292708;
        case 0x29270cu: goto label_29270c;
        case 0x292710u: goto label_292710;
        case 0x292714u: goto label_292714;
        case 0x292718u: goto label_292718;
        case 0x29271cu: goto label_29271c;
        case 0x292720u: goto label_292720;
        case 0x292724u: goto label_292724;
        case 0x292728u: goto label_292728;
        case 0x29272cu: goto label_29272c;
        case 0x292730u: goto label_292730;
        case 0x292734u: goto label_292734;
        case 0x292738u: goto label_292738;
        case 0x29273cu: goto label_29273c;
        case 0x292740u: goto label_292740;
        case 0x292744u: goto label_292744;
        case 0x292748u: goto label_292748;
        case 0x29274cu: goto label_29274c;
        case 0x292750u: goto label_292750;
        case 0x292754u: goto label_292754;
        case 0x292758u: goto label_292758;
        case 0x29275cu: goto label_29275c;
        case 0x292760u: goto label_292760;
        case 0x292764u: goto label_292764;
        case 0x292768u: goto label_292768;
        case 0x29276cu: goto label_29276c;
        case 0x292770u: goto label_292770;
        case 0x292774u: goto label_292774;
        case 0x292778u: goto label_292778;
        case 0x29277cu: goto label_29277c;
        case 0x292780u: goto label_292780;
        case 0x292784u: goto label_292784;
        case 0x292788u: goto label_292788;
        case 0x29278cu: goto label_29278c;
        case 0x292790u: goto label_292790;
        case 0x292794u: goto label_292794;
        case 0x292798u: goto label_292798;
        case 0x29279cu: goto label_29279c;
        case 0x2927a0u: goto label_2927a0;
        case 0x2927a4u: goto label_2927a4;
        case 0x2927a8u: goto label_2927a8;
        case 0x2927acu: goto label_2927ac;
        case 0x2927b0u: goto label_2927b0;
        case 0x2927b4u: goto label_2927b4;
        case 0x2927b8u: goto label_2927b8;
        case 0x2927bcu: goto label_2927bc;
        case 0x2927c0u: goto label_2927c0;
        case 0x2927c4u: goto label_2927c4;
        case 0x2927c8u: goto label_2927c8;
        case 0x2927ccu: goto label_2927cc;
        case 0x2927d0u: goto label_2927d0;
        case 0x2927d4u: goto label_2927d4;
        case 0x2927d8u: goto label_2927d8;
        case 0x2927dcu: goto label_2927dc;
        case 0x2927e0u: goto label_2927e0;
        case 0x2927e4u: goto label_2927e4;
        case 0x2927e8u: goto label_2927e8;
        case 0x2927ecu: goto label_2927ec;
        case 0x2927f0u: goto label_2927f0;
        case 0x2927f4u: goto label_2927f4;
        case 0x2927f8u: goto label_2927f8;
        case 0x2927fcu: goto label_2927fc;
        case 0x292800u: goto label_292800;
        case 0x292804u: goto label_292804;
        case 0x292808u: goto label_292808;
        case 0x29280cu: goto label_29280c;
        case 0x292810u: goto label_292810;
        case 0x292814u: goto label_292814;
        case 0x292818u: goto label_292818;
        case 0x29281cu: goto label_29281c;
        case 0x292820u: goto label_292820;
        case 0x292824u: goto label_292824;
        case 0x292828u: goto label_292828;
        case 0x29282cu: goto label_29282c;
        case 0x292830u: goto label_292830;
        case 0x292834u: goto label_292834;
        case 0x292838u: goto label_292838;
        case 0x29283cu: goto label_29283c;
        case 0x292840u: goto label_292840;
        case 0x292844u: goto label_292844;
        case 0x292848u: goto label_292848;
        case 0x29284cu: goto label_29284c;
        case 0x292850u: goto label_292850;
        case 0x292854u: goto label_292854;
        case 0x292858u: goto label_292858;
        case 0x29285cu: goto label_29285c;
        case 0x292860u: goto label_292860;
        case 0x292864u: goto label_292864;
        case 0x292868u: goto label_292868;
        case 0x29286cu: goto label_29286c;
        case 0x292870u: goto label_292870;
        case 0x292874u: goto label_292874;
        case 0x292878u: goto label_292878;
        case 0x29287cu: goto label_29287c;
        case 0x292880u: goto label_292880;
        case 0x292884u: goto label_292884;
        case 0x292888u: goto label_292888;
        case 0x29288cu: goto label_29288c;
        case 0x292890u: goto label_292890;
        case 0x292894u: goto label_292894;
        case 0x292898u: goto label_292898;
        case 0x29289cu: goto label_29289c;
        case 0x2928a0u: goto label_2928a0;
        case 0x2928a4u: goto label_2928a4;
        case 0x2928a8u: goto label_2928a8;
        case 0x2928acu: goto label_2928ac;
        case 0x2928b0u: goto label_2928b0;
        case 0x2928b4u: goto label_2928b4;
        case 0x2928b8u: goto label_2928b8;
        case 0x2928bcu: goto label_2928bc;
        case 0x2928c0u: goto label_2928c0;
        case 0x2928c4u: goto label_2928c4;
        case 0x2928c8u: goto label_2928c8;
        case 0x2928ccu: goto label_2928cc;
        case 0x2928d0u: goto label_2928d0;
        case 0x2928d4u: goto label_2928d4;
        case 0x2928d8u: goto label_2928d8;
        case 0x2928dcu: goto label_2928dc;
        case 0x2928e0u: goto label_2928e0;
        case 0x2928e4u: goto label_2928e4;
        case 0x2928e8u: goto label_2928e8;
        case 0x2928ecu: goto label_2928ec;
        case 0x2928f0u: goto label_2928f0;
        case 0x2928f4u: goto label_2928f4;
        case 0x2928f8u: goto label_2928f8;
        case 0x2928fcu: goto label_2928fc;
        case 0x292900u: goto label_292900;
        case 0x292904u: goto label_292904;
        case 0x292908u: goto label_292908;
        case 0x29290cu: goto label_29290c;
        case 0x292910u: goto label_292910;
        case 0x292914u: goto label_292914;
        case 0x292918u: goto label_292918;
        case 0x29291cu: goto label_29291c;
        case 0x292920u: goto label_292920;
        case 0x292924u: goto label_292924;
        case 0x292928u: goto label_292928;
        case 0x29292cu: goto label_29292c;
        case 0x292930u: goto label_292930;
        case 0x292934u: goto label_292934;
        case 0x292938u: goto label_292938;
        case 0x29293cu: goto label_29293c;
        case 0x292940u: goto label_292940;
        case 0x292944u: goto label_292944;
        case 0x292948u: goto label_292948;
        case 0x29294cu: goto label_29294c;
        case 0x292950u: goto label_292950;
        case 0x292954u: goto label_292954;
        case 0x292958u: goto label_292958;
        case 0x29295cu: goto label_29295c;
        case 0x292960u: goto label_292960;
        case 0x292964u: goto label_292964;
        case 0x292968u: goto label_292968;
        case 0x29296cu: goto label_29296c;
        case 0x292970u: goto label_292970;
        case 0x292974u: goto label_292974;
        case 0x292978u: goto label_292978;
        case 0x29297cu: goto label_29297c;
        case 0x292980u: goto label_292980;
        case 0x292984u: goto label_292984;
        case 0x292988u: goto label_292988;
        case 0x29298cu: goto label_29298c;
        case 0x292990u: goto label_292990;
        case 0x292994u: goto label_292994;
        case 0x292998u: goto label_292998;
        case 0x29299cu: goto label_29299c;
        case 0x2929a0u: goto label_2929a0;
        case 0x2929a4u: goto label_2929a4;
        case 0x2929a8u: goto label_2929a8;
        case 0x2929acu: goto label_2929ac;
        case 0x2929b0u: goto label_2929b0;
        case 0x2929b4u: goto label_2929b4;
        case 0x2929b8u: goto label_2929b8;
        case 0x2929bcu: goto label_2929bc;
        case 0x2929c0u: goto label_2929c0;
        case 0x2929c4u: goto label_2929c4;
        case 0x2929c8u: goto label_2929c8;
        case 0x2929ccu: goto label_2929cc;
        case 0x2929d0u: goto label_2929d0;
        case 0x2929d4u: goto label_2929d4;
        case 0x2929d8u: goto label_2929d8;
        case 0x2929dcu: goto label_2929dc;
        case 0x2929e0u: goto label_2929e0;
        case 0x2929e4u: goto label_2929e4;
        case 0x2929e8u: goto label_2929e8;
        case 0x2929ecu: goto label_2929ec;
        case 0x2929f0u: goto label_2929f0;
        case 0x2929f4u: goto label_2929f4;
        case 0x2929f8u: goto label_2929f8;
        case 0x2929fcu: goto label_2929fc;
        case 0x292a00u: goto label_292a00;
        case 0x292a04u: goto label_292a04;
        case 0x292a08u: goto label_292a08;
        case 0x292a0cu: goto label_292a0c;
        case 0x292a10u: goto label_292a10;
        case 0x292a14u: goto label_292a14;
        case 0x292a18u: goto label_292a18;
        case 0x292a1cu: goto label_292a1c;
        case 0x292a20u: goto label_292a20;
        case 0x292a24u: goto label_292a24;
        case 0x292a28u: goto label_292a28;
        case 0x292a2cu: goto label_292a2c;
        case 0x292a30u: goto label_292a30;
        case 0x292a34u: goto label_292a34;
        case 0x292a38u: goto label_292a38;
        case 0x292a3cu: goto label_292a3c;
        case 0x292a40u: goto label_292a40;
        case 0x292a44u: goto label_292a44;
        case 0x292a48u: goto label_292a48;
        case 0x292a4cu: goto label_292a4c;
        case 0x292a50u: goto label_292a50;
        case 0x292a54u: goto label_292a54;
        case 0x292a58u: goto label_292a58;
        case 0x292a5cu: goto label_292a5c;
        case 0x292a60u: goto label_292a60;
        case 0x292a64u: goto label_292a64;
        case 0x292a68u: goto label_292a68;
        case 0x292a6cu: goto label_292a6c;
        case 0x292a70u: goto label_292a70;
        case 0x292a74u: goto label_292a74;
        case 0x292a78u: goto label_292a78;
        case 0x292a7cu: goto label_292a7c;
        case 0x292a80u: goto label_292a80;
        case 0x292a84u: goto label_292a84;
        case 0x292a88u: goto label_292a88;
        case 0x292a8cu: goto label_292a8c;
        case 0x292a90u: goto label_292a90;
        case 0x292a94u: goto label_292a94;
        case 0x292a98u: goto label_292a98;
        case 0x292a9cu: goto label_292a9c;
        case 0x292aa0u: goto label_292aa0;
        case 0x292aa4u: goto label_292aa4;
        case 0x292aa8u: goto label_292aa8;
        case 0x292aacu: goto label_292aac;
        case 0x292ab0u: goto label_292ab0;
        case 0x292ab4u: goto label_292ab4;
        case 0x292ab8u: goto label_292ab8;
        case 0x292abcu: goto label_292abc;
        case 0x292ac0u: goto label_292ac0;
        case 0x292ac4u: goto label_292ac4;
        case 0x292ac8u: goto label_292ac8;
        case 0x292accu: goto label_292acc;
        case 0x292ad0u: goto label_292ad0;
        case 0x292ad4u: goto label_292ad4;
        case 0x292ad8u: goto label_292ad8;
        case 0x292adcu: goto label_292adc;
        case 0x292ae0u: goto label_292ae0;
        case 0x292ae4u: goto label_292ae4;
        case 0x292ae8u: goto label_292ae8;
        case 0x292aecu: goto label_292aec;
        case 0x292af0u: goto label_292af0;
        case 0x292af4u: goto label_292af4;
        case 0x292af8u: goto label_292af8;
        case 0x292afcu: goto label_292afc;
        case 0x292b00u: goto label_292b00;
        case 0x292b04u: goto label_292b04;
        case 0x292b08u: goto label_292b08;
        case 0x292b0cu: goto label_292b0c;
        case 0x292b10u: goto label_292b10;
        case 0x292b14u: goto label_292b14;
        case 0x292b18u: goto label_292b18;
        case 0x292b1cu: goto label_292b1c;
        case 0x292b20u: goto label_292b20;
        case 0x292b24u: goto label_292b24;
        case 0x292b28u: goto label_292b28;
        case 0x292b2cu: goto label_292b2c;
        case 0x292b30u: goto label_292b30;
        case 0x292b34u: goto label_292b34;
        case 0x292b38u: goto label_292b38;
        case 0x292b3cu: goto label_292b3c;
        case 0x292b40u: goto label_292b40;
        case 0x292b44u: goto label_292b44;
        case 0x292b48u: goto label_292b48;
        case 0x292b4cu: goto label_292b4c;
        case 0x292b50u: goto label_292b50;
        case 0x292b54u: goto label_292b54;
        case 0x292b58u: goto label_292b58;
        case 0x292b5cu: goto label_292b5c;
        case 0x292b60u: goto label_292b60;
        case 0x292b64u: goto label_292b64;
        case 0x292b68u: goto label_292b68;
        case 0x292b6cu: goto label_292b6c;
        case 0x292b70u: goto label_292b70;
        case 0x292b74u: goto label_292b74;
        case 0x292b78u: goto label_292b78;
        case 0x292b7cu: goto label_292b7c;
        case 0x292b80u: goto label_292b80;
        case 0x292b84u: goto label_292b84;
        case 0x292b88u: goto label_292b88;
        case 0x292b8cu: goto label_292b8c;
        case 0x292b90u: goto label_292b90;
        case 0x292b94u: goto label_292b94;
        case 0x292b98u: goto label_292b98;
        case 0x292b9cu: goto label_292b9c;
        case 0x292ba0u: goto label_292ba0;
        case 0x292ba4u: goto label_292ba4;
        case 0x292ba8u: goto label_292ba8;
        case 0x292bacu: goto label_292bac;
        case 0x292bb0u: goto label_292bb0;
        case 0x292bb4u: goto label_292bb4;
        case 0x292bb8u: goto label_292bb8;
        case 0x292bbcu: goto label_292bbc;
        case 0x292bc0u: goto label_292bc0;
        case 0x292bc4u: goto label_292bc4;
        case 0x292bc8u: goto label_292bc8;
        case 0x292bccu: goto label_292bcc;
        case 0x292bd0u: goto label_292bd0;
        case 0x292bd4u: goto label_292bd4;
        case 0x292bd8u: goto label_292bd8;
        case 0x292bdcu: goto label_292bdc;
        case 0x292be0u: goto label_292be0;
        case 0x292be4u: goto label_292be4;
        case 0x292be8u: goto label_292be8;
        case 0x292becu: goto label_292bec;
        case 0x292bf0u: goto label_292bf0;
        case 0x292bf4u: goto label_292bf4;
        case 0x292bf8u: goto label_292bf8;
        case 0x292bfcu: goto label_292bfc;
        case 0x292c00u: goto label_292c00;
        case 0x292c04u: goto label_292c04;
        case 0x292c08u: goto label_292c08;
        case 0x292c0cu: goto label_292c0c;
        case 0x292c10u: goto label_292c10;
        case 0x292c14u: goto label_292c14;
        case 0x292c18u: goto label_292c18;
        case 0x292c1cu: goto label_292c1c;
        case 0x292c20u: goto label_292c20;
        case 0x292c24u: goto label_292c24;
        case 0x292c28u: goto label_292c28;
        case 0x292c2cu: goto label_292c2c;
        case 0x292c30u: goto label_292c30;
        case 0x292c34u: goto label_292c34;
        case 0x292c38u: goto label_292c38;
        case 0x292c3cu: goto label_292c3c;
        case 0x292c40u: goto label_292c40;
        case 0x292c44u: goto label_292c44;
        case 0x292c48u: goto label_292c48;
        case 0x292c4cu: goto label_292c4c;
        case 0x292c50u: goto label_292c50;
        case 0x292c54u: goto label_292c54;
        case 0x292c58u: goto label_292c58;
        case 0x292c5cu: goto label_292c5c;
        case 0x292c60u: goto label_292c60;
        case 0x292c64u: goto label_292c64;
        case 0x292c68u: goto label_292c68;
        case 0x292c6cu: goto label_292c6c;
        case 0x292c70u: goto label_292c70;
        case 0x292c74u: goto label_292c74;
        case 0x292c78u: goto label_292c78;
        case 0x292c7cu: goto label_292c7c;
        case 0x292c80u: goto label_292c80;
        case 0x292c84u: goto label_292c84;
        case 0x292c88u: goto label_292c88;
        case 0x292c8cu: goto label_292c8c;
        case 0x292c90u: goto label_292c90;
        case 0x292c94u: goto label_292c94;
        case 0x292c98u: goto label_292c98;
        case 0x292c9cu: goto label_292c9c;
        case 0x292ca0u: goto label_292ca0;
        case 0x292ca4u: goto label_292ca4;
        case 0x292ca8u: goto label_292ca8;
        case 0x292cacu: goto label_292cac;
        case 0x292cb0u: goto label_292cb0;
        case 0x292cb4u: goto label_292cb4;
        case 0x292cb8u: goto label_292cb8;
        case 0x292cbcu: goto label_292cbc;
        case 0x292cc0u: goto label_292cc0;
        case 0x292cc4u: goto label_292cc4;
        case 0x292cc8u: goto label_292cc8;
        case 0x292cccu: goto label_292ccc;
        case 0x292cd0u: goto label_292cd0;
        case 0x292cd4u: goto label_292cd4;
        case 0x292cd8u: goto label_292cd8;
        case 0x292cdcu: goto label_292cdc;
        case 0x292ce0u: goto label_292ce0;
        case 0x292ce4u: goto label_292ce4;
        case 0x292ce8u: goto label_292ce8;
        case 0x292cecu: goto label_292cec;
        case 0x292cf0u: goto label_292cf0;
        case 0x292cf4u: goto label_292cf4;
        case 0x292cf8u: goto label_292cf8;
        case 0x292cfcu: goto label_292cfc;
        case 0x292d00u: goto label_292d00;
        case 0x292d04u: goto label_292d04;
        case 0x292d08u: goto label_292d08;
        case 0x292d0cu: goto label_292d0c;
        case 0x292d10u: goto label_292d10;
        case 0x292d14u: goto label_292d14;
        case 0x292d18u: goto label_292d18;
        case 0x292d1cu: goto label_292d1c;
        case 0x292d20u: goto label_292d20;
        case 0x292d24u: goto label_292d24;
        case 0x292d28u: goto label_292d28;
        case 0x292d2cu: goto label_292d2c;
        case 0x292d30u: goto label_292d30;
        case 0x292d34u: goto label_292d34;
        case 0x292d38u: goto label_292d38;
        case 0x292d3cu: goto label_292d3c;
        case 0x292d40u: goto label_292d40;
        case 0x292d44u: goto label_292d44;
        case 0x292d48u: goto label_292d48;
        case 0x292d4cu: goto label_292d4c;
        case 0x292d50u: goto label_292d50;
        case 0x292d54u: goto label_292d54;
        case 0x292d58u: goto label_292d58;
        case 0x292d5cu: goto label_292d5c;
        case 0x292d60u: goto label_292d60;
        case 0x292d64u: goto label_292d64;
        case 0x292d68u: goto label_292d68;
        case 0x292d6cu: goto label_292d6c;
        case 0x292d70u: goto label_292d70;
        case 0x292d74u: goto label_292d74;
        case 0x292d78u: goto label_292d78;
        case 0x292d7cu: goto label_292d7c;
        case 0x292d80u: goto label_292d80;
        case 0x292d84u: goto label_292d84;
        case 0x292d88u: goto label_292d88;
        case 0x292d8cu: goto label_292d8c;
        case 0x292d90u: goto label_292d90;
        case 0x292d94u: goto label_292d94;
        case 0x292d98u: goto label_292d98;
        case 0x292d9cu: goto label_292d9c;
        case 0x292da0u: goto label_292da0;
        case 0x292da4u: goto label_292da4;
        case 0x292da8u: goto label_292da8;
        case 0x292dacu: goto label_292dac;
        case 0x292db0u: goto label_292db0;
        case 0x292db4u: goto label_292db4;
        case 0x292db8u: goto label_292db8;
        case 0x292dbcu: goto label_292dbc;
        case 0x292dc0u: goto label_292dc0;
        case 0x292dc4u: goto label_292dc4;
        case 0x292dc8u: goto label_292dc8;
        case 0x292dccu: goto label_292dcc;
        case 0x292dd0u: goto label_292dd0;
        case 0x292dd4u: goto label_292dd4;
        case 0x292dd8u: goto label_292dd8;
        case 0x292ddcu: goto label_292ddc;
        case 0x292de0u: goto label_292de0;
        case 0x292de4u: goto label_292de4;
        case 0x292de8u: goto label_292de8;
        case 0x292decu: goto label_292dec;
        case 0x292df0u: goto label_292df0;
        case 0x292df4u: goto label_292df4;
        case 0x292df8u: goto label_292df8;
        case 0x292dfcu: goto label_292dfc;
        case 0x292e00u: goto label_292e00;
        case 0x292e04u: goto label_292e04;
        case 0x292e08u: goto label_292e08;
        case 0x292e0cu: goto label_292e0c;
        case 0x292e10u: goto label_292e10;
        case 0x292e14u: goto label_292e14;
        case 0x292e18u: goto label_292e18;
        case 0x292e1cu: goto label_292e1c;
        case 0x292e20u: goto label_292e20;
        case 0x292e24u: goto label_292e24;
        case 0x292e28u: goto label_292e28;
        case 0x292e2cu: goto label_292e2c;
        case 0x292e30u: goto label_292e30;
        case 0x292e34u: goto label_292e34;
        case 0x292e38u: goto label_292e38;
        case 0x292e3cu: goto label_292e3c;
        case 0x292e40u: goto label_292e40;
        case 0x292e44u: goto label_292e44;
        case 0x292e48u: goto label_292e48;
        case 0x292e4cu: goto label_292e4c;
        case 0x292e50u: goto label_292e50;
        case 0x292e54u: goto label_292e54;
        case 0x292e58u: goto label_292e58;
        case 0x292e5cu: goto label_292e5c;
        case 0x292e60u: goto label_292e60;
        case 0x292e64u: goto label_292e64;
        case 0x292e68u: goto label_292e68;
        case 0x292e6cu: goto label_292e6c;
        case 0x292e70u: goto label_292e70;
        case 0x292e74u: goto label_292e74;
        case 0x292e78u: goto label_292e78;
        case 0x292e7cu: goto label_292e7c;
        case 0x292e80u: goto label_292e80;
        case 0x292e84u: goto label_292e84;
        case 0x292e88u: goto label_292e88;
        case 0x292e8cu: goto label_292e8c;
        case 0x292e90u: goto label_292e90;
        case 0x292e94u: goto label_292e94;
        case 0x292e98u: goto label_292e98;
        case 0x292e9cu: goto label_292e9c;
        case 0x292ea0u: goto label_292ea0;
        case 0x292ea4u: goto label_292ea4;
        case 0x292ea8u: goto label_292ea8;
        case 0x292eacu: goto label_292eac;
        case 0x292eb0u: goto label_292eb0;
        case 0x292eb4u: goto label_292eb4;
        case 0x292eb8u: goto label_292eb8;
        case 0x292ebcu: goto label_292ebc;
        case 0x292ec0u: goto label_292ec0;
        case 0x292ec4u: goto label_292ec4;
        case 0x292ec8u: goto label_292ec8;
        case 0x292eccu: goto label_292ecc;
        case 0x292ed0u: goto label_292ed0;
        case 0x292ed4u: goto label_292ed4;
        case 0x292ed8u: goto label_292ed8;
        case 0x292edcu: goto label_292edc;
        case 0x292ee0u: goto label_292ee0;
        case 0x292ee4u: goto label_292ee4;
        case 0x292ee8u: goto label_292ee8;
        case 0x292eecu: goto label_292eec;
        case 0x292ef0u: goto label_292ef0;
        case 0x292ef4u: goto label_292ef4;
        case 0x292ef8u: goto label_292ef8;
        case 0x292efcu: goto label_292efc;
        case 0x292f00u: goto label_292f00;
        case 0x292f04u: goto label_292f04;
        case 0x292f08u: goto label_292f08;
        case 0x292f0cu: goto label_292f0c;
        case 0x292f10u: goto label_292f10;
        case 0x292f14u: goto label_292f14;
        case 0x292f18u: goto label_292f18;
        case 0x292f1cu: goto label_292f1c;
        case 0x292f20u: goto label_292f20;
        case 0x292f24u: goto label_292f24;
        case 0x292f28u: goto label_292f28;
        case 0x292f2cu: goto label_292f2c;
        case 0x292f30u: goto label_292f30;
        case 0x292f34u: goto label_292f34;
        case 0x292f38u: goto label_292f38;
        case 0x292f3cu: goto label_292f3c;
        case 0x292f40u: goto label_292f40;
        case 0x292f44u: goto label_292f44;
        case 0x292f48u: goto label_292f48;
        case 0x292f4cu: goto label_292f4c;
        case 0x292f50u: goto label_292f50;
        case 0x292f54u: goto label_292f54;
        case 0x292f58u: goto label_292f58;
        case 0x292f5cu: goto label_292f5c;
        case 0x292f60u: goto label_292f60;
        case 0x292f64u: goto label_292f64;
        case 0x292f68u: goto label_292f68;
        case 0x292f6cu: goto label_292f6c;
        case 0x292f70u: goto label_292f70;
        case 0x292f74u: goto label_292f74;
        case 0x292f78u: goto label_292f78;
        case 0x292f7cu: goto label_292f7c;
        case 0x292f80u: goto label_292f80;
        case 0x292f84u: goto label_292f84;
        case 0x292f88u: goto label_292f88;
        case 0x292f8cu: goto label_292f8c;
        case 0x292f90u: goto label_292f90;
        case 0x292f94u: goto label_292f94;
        case 0x292f98u: goto label_292f98;
        case 0x292f9cu: goto label_292f9c;
        case 0x292fa0u: goto label_292fa0;
        case 0x292fa4u: goto label_292fa4;
        case 0x292fa8u: goto label_292fa8;
        case 0x292facu: goto label_292fac;
        case 0x292fb0u: goto label_292fb0;
        case 0x292fb4u: goto label_292fb4;
        case 0x292fb8u: goto label_292fb8;
        case 0x292fbcu: goto label_292fbc;
        case 0x292fc0u: goto label_292fc0;
        case 0x292fc4u: goto label_292fc4;
        case 0x292fc8u: goto label_292fc8;
        case 0x292fccu: goto label_292fcc;
        case 0x292fd0u: goto label_292fd0;
        case 0x292fd4u: goto label_292fd4;
        case 0x292fd8u: goto label_292fd8;
        case 0x292fdcu: goto label_292fdc;
        case 0x292fe0u: goto label_292fe0;
        case 0x292fe4u: goto label_292fe4;
        case 0x292fe8u: goto label_292fe8;
        case 0x292fecu: goto label_292fec;
        case 0x292ff0u: goto label_292ff0;
        case 0x292ff4u: goto label_292ff4;
        case 0x292ff8u: goto label_292ff8;
        case 0x292ffcu: goto label_292ffc;
        case 0x293000u: goto label_293000;
        case 0x293004u: goto label_293004;
        case 0x293008u: goto label_293008;
        case 0x29300cu: goto label_29300c;
        case 0x293010u: goto label_293010;
        case 0x293014u: goto label_293014;
        case 0x293018u: goto label_293018;
        case 0x29301cu: goto label_29301c;
        case 0x293020u: goto label_293020;
        case 0x293024u: goto label_293024;
        case 0x293028u: goto label_293028;
        case 0x29302cu: goto label_29302c;
        case 0x293030u: goto label_293030;
        case 0x293034u: goto label_293034;
        case 0x293038u: goto label_293038;
        case 0x29303cu: goto label_29303c;
        case 0x293040u: goto label_293040;
        case 0x293044u: goto label_293044;
        case 0x293048u: goto label_293048;
        case 0x29304cu: goto label_29304c;
        case 0x293050u: goto label_293050;
        case 0x293054u: goto label_293054;
        case 0x293058u: goto label_293058;
        case 0x29305cu: goto label_29305c;
        case 0x293060u: goto label_293060;
        case 0x293064u: goto label_293064;
        case 0x293068u: goto label_293068;
        case 0x29306cu: goto label_29306c;
        case 0x293070u: goto label_293070;
        case 0x293074u: goto label_293074;
        case 0x293078u: goto label_293078;
        case 0x29307cu: goto label_29307c;
        case 0x293080u: goto label_293080;
        case 0x293084u: goto label_293084;
        case 0x293088u: goto label_293088;
        case 0x29308cu: goto label_29308c;
        case 0x293090u: goto label_293090;
        case 0x293094u: goto label_293094;
        case 0x293098u: goto label_293098;
        case 0x29309cu: goto label_29309c;
        case 0x2930a0u: goto label_2930a0;
        case 0x2930a4u: goto label_2930a4;
        case 0x2930a8u: goto label_2930a8;
        case 0x2930acu: goto label_2930ac;
        case 0x2930b0u: goto label_2930b0;
        case 0x2930b4u: goto label_2930b4;
        case 0x2930b8u: goto label_2930b8;
        case 0x2930bcu: goto label_2930bc;
        case 0x2930c0u: goto label_2930c0;
        case 0x2930c4u: goto label_2930c4;
        case 0x2930c8u: goto label_2930c8;
        case 0x2930ccu: goto label_2930cc;
        case 0x2930d0u: goto label_2930d0;
        case 0x2930d4u: goto label_2930d4;
        case 0x2930d8u: goto label_2930d8;
        case 0x2930dcu: goto label_2930dc;
        case 0x2930e0u: goto label_2930e0;
        case 0x2930e4u: goto label_2930e4;
        case 0x2930e8u: goto label_2930e8;
        case 0x2930ecu: goto label_2930ec;
        case 0x2930f0u: goto label_2930f0;
        case 0x2930f4u: goto label_2930f4;
        case 0x2930f8u: goto label_2930f8;
        case 0x2930fcu: goto label_2930fc;
        case 0x293100u: goto label_293100;
        case 0x293104u: goto label_293104;
        case 0x293108u: goto label_293108;
        case 0x29310cu: goto label_29310c;
        case 0x293110u: goto label_293110;
        case 0x293114u: goto label_293114;
        case 0x293118u: goto label_293118;
        case 0x29311cu: goto label_29311c;
        case 0x293120u: goto label_293120;
        case 0x293124u: goto label_293124;
        case 0x293128u: goto label_293128;
        case 0x29312cu: goto label_29312c;
        case 0x293130u: goto label_293130;
        case 0x293134u: goto label_293134;
        case 0x293138u: goto label_293138;
        case 0x29313cu: goto label_29313c;
        case 0x293140u: goto label_293140;
        case 0x293144u: goto label_293144;
        case 0x293148u: goto label_293148;
        case 0x29314cu: goto label_29314c;
        case 0x293150u: goto label_293150;
        case 0x293154u: goto label_293154;
        case 0x293158u: goto label_293158;
        case 0x29315cu: goto label_29315c;
        case 0x293160u: goto label_293160;
        case 0x293164u: goto label_293164;
        case 0x293168u: goto label_293168;
        case 0x29316cu: goto label_29316c;
        case 0x293170u: goto label_293170;
        case 0x293174u: goto label_293174;
        case 0x293178u: goto label_293178;
        case 0x29317cu: goto label_29317c;
        case 0x293180u: goto label_293180;
        case 0x293184u: goto label_293184;
        case 0x293188u: goto label_293188;
        case 0x29318cu: goto label_29318c;
        case 0x293190u: goto label_293190;
        case 0x293194u: goto label_293194;
        case 0x293198u: goto label_293198;
        case 0x29319cu: goto label_29319c;
        case 0x2931a0u: goto label_2931a0;
        case 0x2931a4u: goto label_2931a4;
        case 0x2931a8u: goto label_2931a8;
        case 0x2931acu: goto label_2931ac;
        case 0x2931b0u: goto label_2931b0;
        case 0x2931b4u: goto label_2931b4;
        case 0x2931b8u: goto label_2931b8;
        case 0x2931bcu: goto label_2931bc;
        case 0x2931c0u: goto label_2931c0;
        case 0x2931c4u: goto label_2931c4;
        case 0x2931c8u: goto label_2931c8;
        case 0x2931ccu: goto label_2931cc;
        case 0x2931d0u: goto label_2931d0;
        case 0x2931d4u: goto label_2931d4;
        case 0x2931d8u: goto label_2931d8;
        case 0x2931dcu: goto label_2931dc;
        case 0x2931e0u: goto label_2931e0;
        case 0x2931e4u: goto label_2931e4;
        case 0x2931e8u: goto label_2931e8;
        case 0x2931ecu: goto label_2931ec;
        case 0x2931f0u: goto label_2931f0;
        case 0x2931f4u: goto label_2931f4;
        case 0x2931f8u: goto label_2931f8;
        case 0x2931fcu: goto label_2931fc;
        case 0x293200u: goto label_293200;
        case 0x293204u: goto label_293204;
        case 0x293208u: goto label_293208;
        case 0x29320cu: goto label_29320c;
        case 0x293210u: goto label_293210;
        case 0x293214u: goto label_293214;
        case 0x293218u: goto label_293218;
        case 0x29321cu: goto label_29321c;
        case 0x293220u: goto label_293220;
        case 0x293224u: goto label_293224;
        case 0x293228u: goto label_293228;
        case 0x29322cu: goto label_29322c;
        case 0x293230u: goto label_293230;
        case 0x293234u: goto label_293234;
        case 0x293238u: goto label_293238;
        case 0x29323cu: goto label_29323c;
        case 0x293240u: goto label_293240;
        case 0x293244u: goto label_293244;
        case 0x293248u: goto label_293248;
        case 0x29324cu: goto label_29324c;
        case 0x293250u: goto label_293250;
        case 0x293254u: goto label_293254;
        case 0x293258u: goto label_293258;
        case 0x29325cu: goto label_29325c;
        case 0x293260u: goto label_293260;
        case 0x293264u: goto label_293264;
        case 0x293268u: goto label_293268;
        case 0x29326cu: goto label_29326c;
        case 0x293270u: goto label_293270;
        case 0x293274u: goto label_293274;
        case 0x293278u: goto label_293278;
        case 0x29327cu: goto label_29327c;
        case 0x293280u: goto label_293280;
        case 0x293284u: goto label_293284;
        case 0x293288u: goto label_293288;
        case 0x29328cu: goto label_29328c;
        case 0x293290u: goto label_293290;
        case 0x293294u: goto label_293294;
        case 0x293298u: goto label_293298;
        case 0x29329cu: goto label_29329c;
        case 0x2932a0u: goto label_2932a0;
        case 0x2932a4u: goto label_2932a4;
        case 0x2932a8u: goto label_2932a8;
        case 0x2932acu: goto label_2932ac;
        case 0x2932b0u: goto label_2932b0;
        case 0x2932b4u: goto label_2932b4;
        case 0x2932b8u: goto label_2932b8;
        case 0x2932bcu: goto label_2932bc;
        case 0x2932c0u: goto label_2932c0;
        case 0x2932c4u: goto label_2932c4;
        case 0x2932c8u: goto label_2932c8;
        case 0x2932ccu: goto label_2932cc;
        case 0x2932d0u: goto label_2932d0;
        case 0x2932d4u: goto label_2932d4;
        case 0x2932d8u: goto label_2932d8;
        case 0x2932dcu: goto label_2932dc;
        case 0x2932e0u: goto label_2932e0;
        case 0x2932e4u: goto label_2932e4;
        case 0x2932e8u: goto label_2932e8;
        case 0x2932ecu: goto label_2932ec;
        case 0x2932f0u: goto label_2932f0;
        case 0x2932f4u: goto label_2932f4;
        case 0x2932f8u: goto label_2932f8;
        case 0x2932fcu: goto label_2932fc;
        case 0x293300u: goto label_293300;
        case 0x293304u: goto label_293304;
        case 0x293308u: goto label_293308;
        case 0x29330cu: goto label_29330c;
        case 0x293310u: goto label_293310;
        case 0x293314u: goto label_293314;
        case 0x293318u: goto label_293318;
        case 0x29331cu: goto label_29331c;
        case 0x293320u: goto label_293320;
        case 0x293324u: goto label_293324;
        case 0x293328u: goto label_293328;
        case 0x29332cu: goto label_29332c;
        case 0x293330u: goto label_293330;
        case 0x293334u: goto label_293334;
        case 0x293338u: goto label_293338;
        case 0x29333cu: goto label_29333c;
        case 0x293340u: goto label_293340;
        case 0x293344u: goto label_293344;
        case 0x293348u: goto label_293348;
        case 0x29334cu: goto label_29334c;
        case 0x293350u: goto label_293350;
        case 0x293354u: goto label_293354;
        case 0x293358u: goto label_293358;
        case 0x29335cu: goto label_29335c;
        case 0x293360u: goto label_293360;
        case 0x293364u: goto label_293364;
        case 0x293368u: goto label_293368;
        case 0x29336cu: goto label_29336c;
        case 0x293370u: goto label_293370;
        case 0x293374u: goto label_293374;
        case 0x293378u: goto label_293378;
        case 0x29337cu: goto label_29337c;
        case 0x293380u: goto label_293380;
        case 0x293384u: goto label_293384;
        case 0x293388u: goto label_293388;
        case 0x29338cu: goto label_29338c;
        case 0x293390u: goto label_293390;
        case 0x293394u: goto label_293394;
        case 0x293398u: goto label_293398;
        case 0x29339cu: goto label_29339c;
        case 0x2933a0u: goto label_2933a0;
        case 0x2933a4u: goto label_2933a4;
        case 0x2933a8u: goto label_2933a8;
        case 0x2933acu: goto label_2933ac;
        case 0x2933b0u: goto label_2933b0;
        case 0x2933b4u: goto label_2933b4;
        case 0x2933b8u: goto label_2933b8;
        case 0x2933bcu: goto label_2933bc;
        case 0x2933c0u: goto label_2933c0;
        case 0x2933c4u: goto label_2933c4;
        case 0x2933c8u: goto label_2933c8;
        case 0x2933ccu: goto label_2933cc;
        case 0x2933d0u: goto label_2933d0;
        case 0x2933d4u: goto label_2933d4;
        case 0x2933d8u: goto label_2933d8;
        case 0x2933dcu: goto label_2933dc;
        case 0x2933e0u: goto label_2933e0;
        case 0x2933e4u: goto label_2933e4;
        case 0x2933e8u: goto label_2933e8;
        case 0x2933ecu: goto label_2933ec;
        default: break;
    }

    ctx->pc = 0x2924a0u;

label_2924a0:
    // 0x2924a0: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x2924a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
label_2924a4:
    // 0x2924a4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2924a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_2924a8:
    // 0x2924a8: 0x27a301cc  addiu       $v1, $sp, 0x1CC
    ctx->pc = 0x2924a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 460));
label_2924ac:
    // 0x2924ac: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2924acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_2924b0:
    // 0x2924b0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2924b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_2924b4:
    // 0x2924b4: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x2924b4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2924b8:
    // 0x2924b8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2924b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_2924bc:
    // 0x2924bc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2924bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2924c0:
    // 0x2924c0: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2924c0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2924c4:
    // 0x2924c4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2924c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2924c8:
    // 0x2924c8: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x2924c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_2924cc:
    // 0x2924cc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2924ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2924d0:
    // 0x2924d0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2924d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2924d4:
    // 0x2924d4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2924d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2924d8:
    // 0x2924d8: 0x24a5ea60  addiu       $a1, $a1, -0x15A0
    ctx->pc = 0x2924d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
label_2924dc:
    // 0x2924dc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2924dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2924e0:
    // 0x2924e0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2924e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2924e4:
    // 0x2924e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2924e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2924e8:
    // 0x2924e8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2924e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2924ec:
    // 0x2924ec: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x2924ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_2924f0:
    // 0x2924f0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2924f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2924f4:
    // 0x2924f4: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2924f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2924f8:
    // 0x2924f8: 0xa3a201cc  sb          $v0, 0x1CC($sp)
    ctx->pc = 0x2924f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 460), (uint8_t)GPR_U32(ctx, 2));
label_2924fc:
    // 0x2924fc: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2924fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_292500:
    // 0x292500: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_292504:
    if (ctx->pc == 0x292504u) {
        ctx->pc = 0x292504u;
            // 0x292504: 0x100902d  daddu       $s2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x292508u;
        goto label_292508;
    }
    ctx->pc = 0x292500u;
    {
        const bool branch_taken_0x292500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292500u;
            // 0x292504: 0x100902d  daddu       $s2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292500) {
            ctx->pc = 0x292540u;
            goto label_292540;
        }
    }
    ctx->pc = 0x292508u;
label_292508:
    // 0x292508: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x292508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_29250c:
    // 0x29250c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x29250cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_292510:
    // 0x292510: 0x2463d730  addiu       $v1, $v1, -0x28D0
    ctx->pc = 0x292510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956848));
label_292514:
    // 0x292514: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x292514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_292518:
    // 0x292518: 0x2442d748  addiu       $v0, $v0, -0x28B8
    ctx->pc = 0x292518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956872));
label_29251c:
    // 0x29251c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x29251cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_292520:
    // 0x292520: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x292520u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_292524:
    // 0x292524: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x292524u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_292528:
    // 0x292528: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x292528u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_29252c:
    // 0x29252c: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x29252cu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_292530:
    // 0x292530: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x292530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_292534:
    // 0x292534: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x292534u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_292538:
    // 0x292538: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x292538u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_29253c:
    // 0x29253c: 0x0  nop
    ctx->pc = 0x29253cu;
    // NOP
label_292540:
    // 0x292540: 0xc0a5440  jal         func_295100
label_292544:
    if (ctx->pc == 0x292544u) {
        ctx->pc = 0x292544u;
            // 0x292544: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x292548u;
        goto label_292548;
    }
    ctx->pc = 0x292540u;
    SET_GPR_U32(ctx, 31, 0x292548u);
    ctx->pc = 0x292544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292540u;
            // 0x292544: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295100u;
    if (runtime->hasFunction(0x295100u)) {
        auto targetFn = runtime->lookupFunction(0x295100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292548u; }
        if (ctx->pc != 0x292548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295100_0x295100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292548u; }
        if (ctx->pc != 0x292548u) { return; }
    }
    ctx->pc = 0x292548u;
label_292548:
    // 0x292548: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x292548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29254c:
    // 0x29254c: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x29254cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
label_292550:
    // 0x292550: 0x3c043400  lui         $a0, 0x3400
    ctx->pc = 0x292550u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)13312 << 16));
label_292554:
    // 0x292554: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x292554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_292558:
    // 0x292558: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x292558u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29255c:
    // 0x29255c: 0xe7a00190  swc1        $f0, 0x190($sp)
    ctx->pc = 0x29255cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_292560:
    // 0x292560: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x292560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_292564:
    // 0x292564: 0xe7a00194  swc1        $f0, 0x194($sp)
    ctx->pc = 0x292564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
label_292568:
    // 0x292568: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x292568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29256c:
    // 0x29256c: 0xe7a00198  swc1        $f0, 0x198($sp)
    ctx->pc = 0x29256cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_292570:
    // 0x292570: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x292570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_292574:
    // 0x292574: 0xe7a0019c  swc1        $f0, 0x19C($sp)
    ctx->pc = 0x292574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
label_292578:
    // 0x292578: 0xc6d40008  lwc1        $f20, 0x8($s6)
    ctx->pc = 0x292578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_29257c:
    // 0x29257c: 0xafa40180  sw          $a0, 0x180($sp)
    ctx->pc = 0x29257cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 4));
label_292580:
    // 0x292580: 0xafa40184  sw          $a0, 0x184($sp)
    ctx->pc = 0x292580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 4));
label_292584:
    // 0x292584: 0xc6810058  lwc1        $f1, 0x58($s4)
    ctx->pc = 0x292584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_292588:
    // 0x292588: 0xc680005c  lwc1        $f0, 0x5C($s4)
    ctx->pc = 0x292588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29258c:
    // 0x29258c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x29258cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_292590:
    // 0x292590: 0xafa30180  sw          $v1, 0x180($sp)
    ctx->pc = 0x292590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 3));
label_292594:
    // 0x292594: 0x1000035e  b           . + 4 + (0x35E << 2)
label_292598:
    if (ctx->pc == 0x292598u) {
        ctx->pc = 0x292598u;
            // 0x292598: 0xe7a00184  swc1        $f0, 0x184($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
        ctx->pc = 0x29259Cu;
        goto label_29259c;
    }
    ctx->pc = 0x292594u;
    {
        const bool branch_taken_0x292594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292594u;
            // 0x292598: 0xe7a00184  swc1        $f0, 0x184($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292594) {
            ctx->pc = 0x293310u;
            goto label_293310;
        }
    }
    ctx->pc = 0x29259Cu;
label_29259c:
    // 0x29259c: 0x0  nop
    ctx->pc = 0x29259cu;
    // NOP
label_2925a0:
    // 0x2925a0: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x2925a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_2925a4:
    // 0x2925a4: 0x24a5ea60  addiu       $a1, $a1, -0x15A0
    ctx->pc = 0x2925a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
label_2925a8:
    // 0x2925a8: 0x27a301c8  addiu       $v1, $sp, 0x1C8
    ctx->pc = 0x2925a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
label_2925ac:
    // 0x2925ac: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x2925acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_2925b0:
    // 0x2925b0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2925b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2925b4:
    // 0x2925b4: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2925b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2925b8:
    // 0x2925b8: 0xa3a201c8  sb          $v0, 0x1C8($sp)
    ctx->pc = 0x2925b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 456), (uint8_t)GPR_U32(ctx, 2));
label_2925bc:
    // 0x2925bc: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2925bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2925c0:
    // 0x2925c0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2925c4:
    if (ctx->pc == 0x2925C4u) {
        ctx->pc = 0x2925C8u;
        goto label_2925c8;
    }
    ctx->pc = 0x2925C0u;
    {
        const bool branch_taken_0x2925c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2925c0) {
            ctx->pc = 0x2925F0u;
            goto label_2925f0;
        }
    }
    ctx->pc = 0x2925C8u;
label_2925c8:
    // 0x2925c8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2925c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2925cc:
    // 0x2925cc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2925ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2925d0:
    // 0x2925d0: 0x2442d750  addiu       $v0, $v0, -0x28B0
    ctx->pc = 0x2925d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956880));
label_2925d4:
    // 0x2925d4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2925d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2925d8:
    // 0x2925d8: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2925d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_2925dc:
    // 0x2925dc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2925dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_2925e0:
    // 0x2925e0: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2925e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_2925e4:
    // 0x2925e4: 0x2482000c  addiu       $v0, $a0, 0xC
    ctx->pc = 0x2925e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_2925e8:
    // 0x2925e8: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2925e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_2925ec:
    // 0x2925ec: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2925ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_2925f0:
    // 0x2925f0: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x2925f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_2925f4:
    // 0x2925f4: 0xc6840020  lwc1        $f4, 0x20($s4)
    ctx->pc = 0x2925f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2925f8:
    // 0x2925f8: 0x3442ffee  ori         $v0, $v0, 0xFFEE
    ctx->pc = 0x2925f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_2925fc:
    // 0x2925fc: 0xc7a30190  lwc1        $f3, 0x190($sp)
    ctx->pc = 0x2925fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_292600:
    // 0x292600: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x292600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_292604:
    // 0x292604: 0xc7a20194  lwc1        $f2, 0x194($sp)
    ctx->pc = 0x292604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_292608:
    // 0x292608: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x292608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_29260c:
    // 0x29260c: 0xc7a10198  lwc1        $f1, 0x198($sp)
    ctx->pc = 0x29260cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_292610:
    // 0x292610: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x292610u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_292614:
    // 0x292614: 0xc7a0019c  lwc1        $f0, 0x19C($sp)
    ctx->pc = 0x292614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_292618:
    // 0x292618: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x292618u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_29261c:
    // 0x29261c: 0xe7a30170  swc1        $f3, 0x170($sp)
    ctx->pc = 0x29261cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_292620:
    // 0x292620: 0xc6830024  lwc1        $f3, 0x24($s4)
    ctx->pc = 0x292620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_292624:
    // 0x292624: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x292624u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_292628:
    // 0x292628: 0xe7a20174  swc1        $f2, 0x174($sp)
    ctx->pc = 0x292628u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
label_29262c:
    // 0x29262c: 0xc6820028  lwc1        $f2, 0x28($s4)
    ctx->pc = 0x29262cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_292630:
    // 0x292630: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x292630u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_292634:
    // 0x292634: 0xe7a10178  swc1        $f1, 0x178($sp)
    ctx->pc = 0x292634u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_292638:
    // 0x292638: 0xc681002c  lwc1        $f1, 0x2C($s4)
    ctx->pc = 0x292638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29263c:
    // 0x29263c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x29263cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_292640:
    // 0x292640: 0xe7a0017c  swc1        $f0, 0x17C($sp)
    ctx->pc = 0x292640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
label_292644:
    // 0x292644: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x292644u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_292648:
    // 0x292648: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x292648u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_29264c:
    // 0x29264c: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x29264cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_292650:
    // 0x292650: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x292650u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_292654:
    // 0x292654: 0x8e840030  lw          $a0, 0x30($s4)
    ctx->pc = 0x292654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_292658:
    // 0x292658: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x292658u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29265c:
    // 0x29265c: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x29265cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_292660:
    // 0x292660: 0x320f809  jalr        $t9
label_292664:
    if (ctx->pc == 0x292664u) {
        ctx->pc = 0x292664u;
            // 0x292664: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x292668u;
        goto label_292668;
    }
    ctx->pc = 0x292660u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x292668u);
        ctx->pc = 0x292664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292660u;
            // 0x292664: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x292668u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x292668u; }
            if (ctx->pc != 0x292668u) { return; }
        }
        }
    }
    ctx->pc = 0x292668u;
label_292668:
    // 0x292668: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x292668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_29266c:
    // 0x29266c: 0x27a301c4  addiu       $v1, $sp, 0x1C4
    ctx->pc = 0x29266cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 452));
label_292670:
    // 0x292670: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x292670u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_292674:
    // 0x292674: 0xa3a201c4  sb          $v0, 0x1C4($sp)
    ctx->pc = 0x292674u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 452), (uint8_t)GPR_U32(ctx, 2));
label_292678:
    // 0x292678: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x292678u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_29267c:
    // 0x29267c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_292680:
    if (ctx->pc == 0x292680u) {
        ctx->pc = 0x292680u;
            // 0x292680: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x292684u;
        goto label_292684;
    }
    ctx->pc = 0x29267Cu;
    {
        const bool branch_taken_0x29267c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29267Cu;
            // 0x292680: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29267c) {
            ctx->pc = 0x2926F0u;
            goto label_2926f0;
        }
    }
    ctx->pc = 0x292684u;
label_292684:
    // 0x292684: 0xc07f828  jal         func_1FE0A0
label_292688:
    if (ctx->pc == 0x292688u) {
        ctx->pc = 0x29268Cu;
        goto label_29268c;
    }
    ctx->pc = 0x292684u;
    SET_GPR_U32(ctx, 31, 0x29268Cu);
    ctx->pc = 0x1FE0A0u;
    if (runtime->hasFunction(0x1FE0A0u)) {
        auto targetFn = runtime->lookupFunction(0x1FE0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29268Cu; }
        if (ctx->pc != 0x29268Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FE0A0_0x1fe0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29268Cu; }
        if (ctx->pc != 0x29268Cu) { return; }
    }
    ctx->pc = 0x29268Cu;
label_29268c:
    // 0x29268c: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x29268cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_292690:
    // 0x292690: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x292690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_292694:
    // 0x292694: 0x10000014  b           . + 4 + (0x14 << 2)
label_292698:
    if (ctx->pc == 0x292698u) {
        ctx->pc = 0x292698u;
            // 0x292698: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->pc = 0x29269Cu;
        goto label_29269c;
    }
    ctx->pc = 0x292694u;
    {
        const bool branch_taken_0x292694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292694u;
            // 0x292698: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292694) {
            ctx->pc = 0x2926E8u;
            goto label_2926e8;
        }
    }
    ctx->pc = 0x29269Cu;
label_29269c:
    // 0x29269c: 0x0  nop
    ctx->pc = 0x29269cu;
    // NOP
label_2926a0:
    // 0x2926a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2926a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2926a4:
    // 0x2926a4: 0xc466001c  lwc1        $f6, 0x1C($v1)
    ctx->pc = 0x2926a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2926a8:
    // 0x2926a8: 0xe466000c  swc1        $f6, 0xC($v1)
    ctx->pc = 0x2926a8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_2926ac:
    // 0x2926ac: 0xc6850020  lwc1        $f5, 0x20($s4)
    ctx->pc = 0x2926acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2926b0:
    // 0x2926b0: 0xc4640010  lwc1        $f4, 0x10($v1)
    ctx->pc = 0x2926b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2926b4:
    // 0x2926b4: 0xc6830024  lwc1        $f3, 0x24($s4)
    ctx->pc = 0x2926b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2926b8:
    // 0x2926b8: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x2926b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2926bc:
    // 0x2926bc: 0xc6810028  lwc1        $f1, 0x28($s4)
    ctx->pc = 0x2926bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2926c0:
    // 0x2926c0: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x2926c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2926c4:
    // 0x2926c4: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x2926c4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_2926c8:
    // 0x2926c8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2926c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_2926cc:
    // 0x2926cc: 0x46022018  adda.s      $f4, $f2
    ctx->pc = 0x2926ccu;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
label_2926d0:
    // 0x2926d0: 0x4600081c  madd.s      $f0, $f1, $f0
    ctx->pc = 0x2926d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
label_2926d4:
    // 0x2926d4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2926d4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2926d8:
    // 0x2926d8: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x2926d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_2926dc:
    // 0x2926dc: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x2926dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
label_2926e0:
    // 0x2926e0: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x2926e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_2926e4:
    // 0x2926e4: 0x0  nop
    ctx->pc = 0x2926e4u;
    // NOP
label_2926e8:
    // 0x2926e8: 0x441ffed  bgez        $v0, . + 4 + (-0x13 << 2)
label_2926ec:
    if (ctx->pc == 0x2926ECu) {
        ctx->pc = 0x2926F0u;
        goto label_2926f0;
    }
    ctx->pc = 0x2926E8u;
    {
        const bool branch_taken_0x2926e8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2926e8) {
            ctx->pc = 0x2926A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2926a0;
        }
    }
    ctx->pc = 0x2926F0u;
label_2926f0:
    // 0x2926f0: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x2926f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_2926f4:
    // 0x2926f4: 0x24a5ea60  addiu       $a1, $a1, -0x15A0
    ctx->pc = 0x2926f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
label_2926f8:
    // 0x2926f8: 0x27a301c0  addiu       $v1, $sp, 0x1C0
    ctx->pc = 0x2926f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_2926fc:
    // 0x2926fc: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x2926fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_292700:
    // 0x292700: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x292700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_292704:
    // 0x292704: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x292704u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_292708:
    // 0x292708: 0xa3a201c0  sb          $v0, 0x1C0($sp)
    ctx->pc = 0x292708u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 448), (uint8_t)GPR_U32(ctx, 2));
label_29270c:
    // 0x29270c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x29270cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_292710:
    // 0x292710: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_292714:
    if (ctx->pc == 0x292714u) {
        ctx->pc = 0x292718u;
        goto label_292718;
    }
    ctx->pc = 0x292710u;
    {
        const bool branch_taken_0x292710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292710) {
            ctx->pc = 0x292740u;
            goto label_292740;
        }
    }
    ctx->pc = 0x292718u;
label_292718:
    // 0x292718: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x292718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_29271c:
    // 0x29271c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x29271cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_292720:
    // 0x292720: 0x2442d760  addiu       $v0, $v0, -0x28A0
    ctx->pc = 0x292720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956896));
label_292724:
    // 0x292724: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x292724u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_292728:
    // 0x292728: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x292728u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_29272c:
    // 0x29272c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x29272cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_292730:
    // 0x292730: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x292730u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_292734:
    // 0x292734: 0x2482000c  addiu       $v0, $a0, 0xC
    ctx->pc = 0x292734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_292738:
    // 0x292738: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x292738u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_29273c:
    // 0x29273c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x29273cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_292740:
    // 0x292740: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x292740u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_292744:
    // 0x292744: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x292744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_292748:
    // 0x292748: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x292748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29274c:
    // 0x29274c: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x29274cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_292750:
    // 0x292750: 0x320f809  jalr        $t9
label_292754:
    if (ctx->pc == 0x292754u) {
        ctx->pc = 0x292754u;
            // 0x292754: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x292758u;
        goto label_292758;
    }
    ctx->pc = 0x292750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x292758u);
        ctx->pc = 0x292754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292750u;
            // 0x292754: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x292758u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x292758u; }
            if (ctx->pc != 0x292758u) { return; }
        }
        }
    }
    ctx->pc = 0x292758u;
label_292758:
    // 0x292758: 0x8e850078  lw          $a1, 0x78($s4)
    ctx->pc = 0x292758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
label_29275c:
    // 0x29275c: 0x27b00130  addiu       $s0, $sp, 0x130
    ctx->pc = 0x29275cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_292760:
    // 0x292760: 0x8e840064  lw          $a0, 0x64($s4)
    ctx->pc = 0x292760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
label_292764:
    // 0x292764: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x292764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_292768:
    // 0x292768: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x292768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_29276c:
    // 0x29276c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x29276cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_292770:
    // 0x292770: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x292770u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_292774:
    // 0x292774: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x292774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_292778:
    // 0x292778: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x292778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_29277c:
    // 0x29277c: 0x2495000a  addiu       $s5, $a0, 0xA
    ctx->pc = 0x29277cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 10));
label_292780:
    // 0x292780: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x292780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_292784:
    // 0x292784: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x292784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_292788:
    // 0x292788: 0x151980  sll         $v1, $s5, 6
    ctx->pc = 0x292788u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
label_29278c:
    // 0x29278c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x29278cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_292790:
    // 0x292790: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x292790u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_292794:
    // 0x292794: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x292794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_292798:
    // 0x292798: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x292798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_29279c:
    // 0x29279c: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x29279cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2927a0:
    // 0x2927a0: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x2927a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_2927a4:
    // 0x2927a4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_2927a8:
    if (ctx->pc == 0x2927A8u) {
        ctx->pc = 0x2927ACu;
        goto label_2927ac;
    }
    ctx->pc = 0x2927A4u;
    {
        const bool branch_taken_0x2927a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2927a4) {
            ctx->pc = 0x2927B8u;
            goto label_2927b8;
        }
    }
    ctx->pc = 0x2927ACu;
label_2927ac:
    // 0x2927ac: 0x10000006  b           . + 4 + (0x6 << 2)
label_2927b0:
    if (ctx->pc == 0x2927B0u) {
        ctx->pc = 0x2927B0u;
            // 0x2927b0: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x2927B4u;
        goto label_2927b4;
    }
    ctx->pc = 0x2927ACu;
    {
        const bool branch_taken_0x2927ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2927B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2927ACu;
            // 0x2927b0: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2927ac) {
            ctx->pc = 0x2927C8u;
            goto label_2927c8;
        }
    }
    ctx->pc = 0x2927B4u;
label_2927b4:
    // 0x2927b4: 0x0  nop
    ctx->pc = 0x2927b4u;
    // NOP
label_2927b8:
    // 0x2927b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2927b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2927bc:
    // 0x2927bc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2927bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2927c0:
    // 0x2927c0: 0x320f809  jalr        $t9
label_2927c4:
    if (ctx->pc == 0x2927C4u) {
        ctx->pc = 0x2927C8u;
        goto label_2927c8;
    }
    ctx->pc = 0x2927C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2927C8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2927C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2927C8u; }
            if (ctx->pc != 0x2927C8u) { return; }
        }
        }
    }
    ctx->pc = 0x2927C8u;
label_2927c8:
    // 0x2927c8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2927c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2927cc:
    // 0x2927cc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2927ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2927d0:
    // 0x2927d0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2927d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2927d4:
    // 0x2927d4: 0x2a21025  or          $v0, $s5, $v0
    ctx->pc = 0x2927d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
label_2927d8:
    // 0x2927d8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2927d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2927dc:
    // 0x2927dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2927dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2927e0:
    // 0x2927e0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2927e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_2927e4:
    // 0x2927e4: 0x8e820078  lw          $v0, 0x78($s4)
    ctx->pc = 0x2927e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
label_2927e8:
    // 0x2927e8: 0x10000015  b           . + 4 + (0x15 << 2)
label_2927ec:
    if (ctx->pc == 0x2927ECu) {
        ctx->pc = 0x2927ECu;
            // 0x2927ec: 0xafa20134  sw          $v0, 0x134($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 2));
        ctx->pc = 0x2927F0u;
        goto label_2927f0;
    }
    ctx->pc = 0x2927E8u;
    {
        const bool branch_taken_0x2927e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2927ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2927E8u;
            // 0x2927ec: 0xafa20134  sw          $v0, 0x134($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2927e8) {
            ctx->pc = 0x292840u;
            goto label_292840;
        }
    }
    ctx->pc = 0x2927F0u;
label_2927f0:
    // 0x2927f0: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x2927f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2927f4:
    // 0x2927f4: 0xc6c00008  lwc1        $f0, 0x8($s6)
    ctx->pc = 0x2927f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2927f8:
    // 0x2927f8: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x2927f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_2927fc:
    // 0x2927fc: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2927fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_292800:
    // 0x292800: 0x8fa50130  lw          $a1, 0x130($sp)
    ctx->pc = 0x292800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_292804:
    // 0x292804: 0x113180  sll         $a2, $s1, 6
    ctx->pc = 0x292804u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
label_292808:
    // 0x292808: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x292808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_29280c:
    // 0x29280c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29280cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_292810:
    // 0x292810: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x292810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_292814:
    // 0x292814: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x292814u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_292818:
    // 0x292818: 0x46140301  sub.s       $f12, $f0, $f20
    ctx->pc = 0x292818u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_29281c:
    // 0x29281c: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x29281cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_292820:
    // 0x292820: 0x320f809  jalr        $t9
label_292824:
    if (ctx->pc == 0x292824u) {
        ctx->pc = 0x292824u;
            // 0x292824: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x292828u;
        goto label_292828;
    }
    ctx->pc = 0x292820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x292828u);
        ctx->pc = 0x292824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292820u;
            // 0x292824: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x292828u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x292828u; }
            if (ctx->pc != 0x292828u) { return; }
        }
        }
    }
    ctx->pc = 0x292828u;
label_292828:
    // 0x292828: 0xc68c00a4  lwc1        $f12, 0xA4($s4)
    ctx->pc = 0x292828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_29282c:
    // 0x29282c: 0x26840040  addiu       $a0, $s4, 0x40
    ctx->pc = 0x29282cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
label_292830:
    // 0x292830: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x292830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_292834:
    // 0x292834: 0xc0a48a0  jal         func_292280
label_292838:
    if (ctx->pc == 0x292838u) {
        ctx->pc = 0x292838u;
            // 0x292838: 0x27a60130  addiu       $a2, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x29283Cu;
        goto label_29283c;
    }
    ctx->pc = 0x292834u;
    SET_GPR_U32(ctx, 31, 0x29283Cu);
    ctx->pc = 0x292838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292834u;
            // 0x292838: 0x27a60130  addiu       $a2, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292280u;
    if (runtime->hasFunction(0x292280u)) {
        auto targetFn = runtime->lookupFunction(0x292280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29283Cu; }
        if (ctx->pc != 0x29283Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00292280_0x292280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29283Cu; }
        if (ctx->pc != 0x29283Cu) { return; }
    }
    ctx->pc = 0x29283Cu;
label_29283c:
    // 0x29283c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29283cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_292840:
    // 0x292840: 0x8e820078  lw          $v0, 0x78($s4)
    ctx->pc = 0x292840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
label_292844:
    // 0x292844: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x292844u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_292848:
    // 0x292848: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_29284c:
    if (ctx->pc == 0x29284Cu) {
        ctx->pc = 0x292850u;
        goto label_292850;
    }
    ctx->pc = 0x292848u;
    {
        const bool branch_taken_0x292848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292848) {
            ctx->pc = 0x2927F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2927f0;
        }
    }
    ctx->pc = 0x292850u;
label_292850:
    // 0x292850: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x292850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_292854:
    // 0x292854: 0x8fa50134  lw          $a1, 0x134($sp)
    ctx->pc = 0x292854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_292858:
    // 0x292858: 0x8e820064  lw          $v0, 0x64($s4)
    ctx->pc = 0x292858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
label_29285c:
    // 0x29285c: 0x320bc  dsll32      $a0, $v1, 2
    ctx->pc = 0x29285cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 2));
label_292860:
    // 0x292860: 0x420be  dsrl32      $a0, $a0, 2
    ctx->pc = 0x292860u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 2));
label_292864:
    // 0x292864: 0x851823  subu        $v1, $a0, $a1
    ctx->pc = 0x292864u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_292868:
    // 0x292868: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x292868u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_29286c:
    // 0x29286c: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
label_292870:
    if (ctx->pc == 0x292870u) {
        ctx->pc = 0x292874u;
        goto label_292874;
    }
    ctx->pc = 0x29286Cu;
    {
        const bool branch_taken_0x29286c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29286c) {
            ctx->pc = 0x2928B8u;
            goto label_2928b8;
        }
    }
    ctx->pc = 0x292874u;
label_292874:
    // 0x292874: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x292874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_292878:
    // 0x292878: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x292878u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_29287c:
    // 0x29287c: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_292880:
    if (ctx->pc == 0x292880u) {
        ctx->pc = 0x292884u;
        goto label_292884;
    }
    ctx->pc = 0x29287Cu;
    {
        const bool branch_taken_0x29287c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29287c) {
            ctx->pc = 0x2928B8u;
            goto label_2928b8;
        }
    }
    ctx->pc = 0x292884u;
label_292884:
    // 0x292884: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x292884u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_292888:
    // 0x292888: 0x45082a  slt         $at, $v0, $a1
    ctx->pc = 0x292888u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_29288c:
    // 0x29288c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_292890:
    if (ctx->pc == 0x292890u) {
        ctx->pc = 0x292894u;
        goto label_292894;
    }
    ctx->pc = 0x29288Cu;
    {
        const bool branch_taken_0x29288c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29288c) {
            ctx->pc = 0x2928A0u;
            goto label_2928a0;
        }
    }
    ctx->pc = 0x292894u;
label_292894:
    // 0x292894: 0x10000004  b           . + 4 + (0x4 << 2)
label_292898:
    if (ctx->pc == 0x292898u) {
        ctx->pc = 0x29289Cu;
        goto label_29289c;
    }
    ctx->pc = 0x292894u;
    {
        const bool branch_taken_0x292894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292894) {
            ctx->pc = 0x2928A8u;
            goto label_2928a8;
        }
    }
    ctx->pc = 0x29289Cu;
label_29289c:
    // 0x29289c: 0x0  nop
    ctx->pc = 0x29289cu;
    // NOP
label_2928a0:
    // 0x2928a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2928a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2928a4:
    // 0x2928a4: 0x0  nop
    ctx->pc = 0x2928a4u;
    // NOP
label_2928a8:
    // 0x2928a8: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2928a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_2928ac:
    // 0x2928ac: 0xc0a725c  jal         func_29C970
label_2928b0:
    if (ctx->pc == 0x2928B0u) {
        ctx->pc = 0x2928B0u;
            // 0x2928b0: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x2928B4u;
        goto label_2928b4;
    }
    ctx->pc = 0x2928ACu;
    SET_GPR_U32(ctx, 31, 0x2928B4u);
    ctx->pc = 0x2928B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2928ACu;
            // 0x2928b0: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2928B4u; }
        if (ctx->pc != 0x2928B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2928B4u; }
        if (ctx->pc != 0x2928B4u) { return; }
    }
    ctx->pc = 0x2928B4u;
label_2928b4:
    // 0x2928b4: 0x0  nop
    ctx->pc = 0x2928b4u;
    // NOP
label_2928b8:
    // 0x2928b8: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x2928b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_2928bc:
    // 0x2928bc: 0x24a5ea60  addiu       $a1, $a1, -0x15A0
    ctx->pc = 0x2928bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
label_2928c0:
    // 0x2928c0: 0x27a301bc  addiu       $v1, $sp, 0x1BC
    ctx->pc = 0x2928c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
label_2928c4:
    // 0x2928c4: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x2928c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_2928c8:
    // 0x2928c8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2928c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2928cc:
    // 0x2928cc: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2928ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2928d0:
    // 0x2928d0: 0xa3a201bc  sb          $v0, 0x1BC($sp)
    ctx->pc = 0x2928d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 444), (uint8_t)GPR_U32(ctx, 2));
label_2928d4:
    // 0x2928d4: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2928d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2928d8:
    // 0x2928d8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2928dc:
    if (ctx->pc == 0x2928DCu) {
        ctx->pc = 0x2928E0u;
        goto label_2928e0;
    }
    ctx->pc = 0x2928D8u;
    {
        const bool branch_taken_0x2928d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2928d8) {
            ctx->pc = 0x292908u;
            goto label_292908;
        }
    }
    ctx->pc = 0x2928E0u;
label_2928e0:
    // 0x2928e0: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2928e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2928e4:
    // 0x2928e4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2928e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2928e8:
    // 0x2928e8: 0x2442d778  addiu       $v0, $v0, -0x2888
    ctx->pc = 0x2928e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956920));
label_2928ec:
    // 0x2928ec: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2928ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2928f0:
    // 0x2928f0: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2928f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_2928f4:
    // 0x2928f4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2928f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_2928f8:
    // 0x2928f8: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2928f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_2928fc:
    // 0x2928fc: 0x2482000c  addiu       $v0, $a0, 0xC
    ctx->pc = 0x2928fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_292900:
    // 0x292900: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x292900u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_292904:
    // 0x292904: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x292904u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_292908:
    // 0x292908: 0x3c033400  lui         $v1, 0x3400
    ctx->pc = 0x292908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13312 << 16));
label_29290c:
    // 0x29290c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29290cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_292910:
    // 0x292910: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x292910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
label_292914:
    // 0x292914: 0xafa20114  sw          $v0, 0x114($sp)
    ctx->pc = 0x292914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
label_292918:
    // 0x292918: 0x27b000d0  addiu       $s0, $sp, 0xD0
    ctx->pc = 0x292918u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_29291c:
    // 0x29291c: 0xafa00118  sw          $zero, 0x118($sp)
    ctx->pc = 0x29291cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
label_292920:
    // 0x292920: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x292920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_292924:
    // 0x292924: 0xafa0011c  sw          $zero, 0x11C($sp)
    ctx->pc = 0x292924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 0));
label_292928:
    // 0x292928: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x292928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_29292c:
    // 0x29292c: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x29292cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
label_292930:
    // 0x292930: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x292930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_292934:
    // 0x292934: 0xafa30104  sw          $v1, 0x104($sp)
    ctx->pc = 0x292934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 3));
label_292938:
    // 0x292938: 0xafa30108  sw          $v1, 0x108($sp)
    ctx->pc = 0x292938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 3));
label_29293c:
    // 0x29293c: 0xafa3010c  sw          $v1, 0x10C($sp)
    ctx->pc = 0x29293cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 3));
label_292940:
    // 0x292940: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x292940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
label_292944:
    // 0x292944: 0xafa000e8  sw          $zero, 0xE8($sp)
    ctx->pc = 0x292944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 0));
label_292948:
    // 0x292948: 0xafa000e4  sw          $zero, 0xE4($sp)
    ctx->pc = 0x292948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
label_29294c:
    // 0x29294c: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x29294cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
label_292950:
    // 0x292950: 0x8fa50134  lw          $a1, 0x134($sp)
    ctx->pc = 0x292950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_292954:
    // 0x292954: 0x8e830064  lw          $v1, 0x64($s4)
    ctx->pc = 0x292954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
label_292958:
    // 0x292958: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x292958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_29295c:
    // 0x29295c: 0x658821  addu        $s1, $v1, $a1
    ctx->pc = 0x29295cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_292960:
    // 0x292960: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x292960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_292964:
    // 0x292964: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x292964u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_292968:
    // 0x292968: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x292968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
label_29296c:
    // 0x29296c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x29296cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_292970:
    // 0x292970: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x292970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_292974:
    // 0x292974: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x292974u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_292978:
    // 0x292978: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x292978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_29297c:
    // 0x29297c: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x29297cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_292980:
    // 0x292980: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x292980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_292984:
    // 0x292984: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x292984u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_292988:
    // 0x292988: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_29298c:
    if (ctx->pc == 0x29298Cu) {
        ctx->pc = 0x292990u;
        goto label_292990;
    }
    ctx->pc = 0x292988u;
    {
        const bool branch_taken_0x292988 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x292988) {
            ctx->pc = 0x292998u;
            goto label_292998;
        }
    }
    ctx->pc = 0x292990u;
label_292990:
    // 0x292990: 0x10000005  b           . + 4 + (0x5 << 2)
label_292994:
    if (ctx->pc == 0x292994u) {
        ctx->pc = 0x292994u;
            // 0x292994: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x292998u;
        goto label_292998;
    }
    ctx->pc = 0x292990u;
    {
        const bool branch_taken_0x292990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292990u;
            // 0x292994: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292990) {
            ctx->pc = 0x2929A8u;
            goto label_2929a8;
        }
    }
    ctx->pc = 0x292998u;
label_292998:
    // 0x292998: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x292998u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29299c:
    // 0x29299c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x29299cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2929a0:
    // 0x2929a0: 0x320f809  jalr        $t9
label_2929a4:
    if (ctx->pc == 0x2929A4u) {
        ctx->pc = 0x2929A8u;
        goto label_2929a8;
    }
    ctx->pc = 0x2929A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2929A8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2929A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2929A8u; }
            if (ctx->pc != 0x2929A8u) { return; }
        }
        }
    }
    ctx->pc = 0x2929A8u;
label_2929a8:
    // 0x2929a8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2929a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2929ac:
    // 0x2929ac: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2929acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2929b0:
    // 0x2929b0: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x2929b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_2929b4:
    // 0x2929b4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2929b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2929b8:
    // 0x2929b8: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2929b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2929bc:
    // 0x2929bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2929bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2929c0:
    // 0x2929c0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2929c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_2929c4:
    // 0x2929c4: 0x8fa40134  lw          $a0, 0x134($sp)
    ctx->pc = 0x2929c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_2929c8:
    // 0x2929c8: 0x8e820064  lw          $v0, 0x64($s4)
    ctx->pc = 0x2929c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
label_2929cc:
    // 0x2929cc: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x2929ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_2929d0:
    // 0x2929d0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2929d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2929d4:
    // 0x2929d4: 0xafa4012c  sw          $a0, 0x12C($sp)
    ctx->pc = 0x2929d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 4));
label_2929d8:
    // 0x2929d8: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x2929d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
label_2929dc:
    // 0x2929dc: 0xafa30128  sw          $v1, 0x128($sp)
    ctx->pc = 0x2929dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 3));
label_2929e0:
    // 0x2929e0: 0xc6800010  lwc1        $f0, 0x10($s4)
    ctx->pc = 0x2929e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2929e4:
    // 0x2929e4: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x2929e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_2929e8:
    // 0x2929e8: 0xc6800014  lwc1        $f0, 0x14($s4)
    ctx->pc = 0x2929e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2929ec:
    // 0x2929ec: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x2929ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_2929f0:
    // 0x2929f0: 0xc6800018  lwc1        $f0, 0x18($s4)
    ctx->pc = 0x2929f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2929f4:
    // 0x2929f4: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x2929f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_2929f8:
    // 0x2929f8: 0xc680001c  lwc1        $f0, 0x1C($s4)
    ctx->pc = 0x2929f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2929fc:
    // 0x2929fc: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x2929fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_292a00:
    // 0x292a00: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x292a00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_292a04:
    // 0x292a04: 0xc6820010  lwc1        $f2, 0x10($s4)
    ctx->pc = 0x292a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_292a08:
    // 0x292a08: 0xc6810014  lwc1        $f1, 0x14($s4)
    ctx->pc = 0x292a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_292a0c:
    // 0x292a0c: 0xc6800018  lwc1        $f0, 0x18($s4)
    ctx->pc = 0x292a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_292a10:
    // 0x292a10: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x292a10u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_292a14:
    // 0x292a14: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x292a14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_292a18:
    // 0x292a18: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x292a18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_292a1c:
    // 0x292a1c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x292a1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_292a20:
    // 0x292a20: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x292a20u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_292a24:
    // 0x292a24: 0x46011832  c.eq.s      $f3, $f1
    ctx->pc = 0x292a24u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_292a28:
    // 0x292a28: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_292a2c:
    if (ctx->pc == 0x292A2Cu) {
        ctx->pc = 0x292A30u;
        goto label_292a30;
    }
    ctx->pc = 0x292A28u;
    {
        const bool branch_taken_0x292a28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x292a28) {
            ctx->pc = 0x292A38u;
            goto label_292a38;
        }
    }
    ctx->pc = 0x292A30u;
label_292a30:
    // 0x292a30: 0x10000011  b           . + 4 + (0x11 << 2)
label_292a34:
    if (ctx->pc == 0x292A34u) {
        ctx->pc = 0x292A34u;
            // 0x292a34: 0xe7a30124  swc1        $f3, 0x124($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
        ctx->pc = 0x292A38u;
        goto label_292a38;
    }
    ctx->pc = 0x292A30u;
    {
        const bool branch_taken_0x292a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292A30u;
            // 0x292a34: 0xe7a30124  swc1        $f3, 0x124($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292a30) {
            ctx->pc = 0x292A78u;
            goto label_292a78;
        }
    }
    ctx->pc = 0x292A38u;
label_292a38:
    // 0x292a38: 0x46030832  c.eq.s      $f1, $f3
    ctx->pc = 0x292a38u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_292a3c:
    // 0x292a3c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_292a40:
    if (ctx->pc == 0x292A40u) {
        ctx->pc = 0x292A40u;
            // 0x292a40: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x292A44u;
        goto label_292a44;
    }
    ctx->pc = 0x292A3Cu;
    {
        const bool branch_taken_0x292a3c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x292A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292A3Cu;
            // 0x292a40: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292a3c) {
            ctx->pc = 0x292A58u;
            goto label_292a58;
        }
    }
    ctx->pc = 0x292A44u;
label_292a44:
    // 0x292a44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x292a44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_292a48:
    // 0x292a48: 0x0  nop
    ctx->pc = 0x292a48u;
    // NOP
label_292a4c:
    // 0x292a4c: 0x460100d6  rsqrt.s     $f3, $f0, $f1
    ctx->pc = 0x292a4cu;
    ctx->f[3] = 1.0f / sqrtf(ctx->f[0]);
label_292a50:
    // 0x292a50: 0x10000001  b           . + 4 + (0x1 << 2)
label_292a54:
    if (ctx->pc == 0x292A54u) {
        ctx->pc = 0x292A58u;
        goto label_292a58;
    }
    ctx->pc = 0x292A50u;
    {
        const bool branch_taken_0x292a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292a50) {
            ctx->pc = 0x292A58u;
            goto label_292a58;
        }
    }
    ctx->pc = 0x292A58u;
label_292a58:
    // 0x292a58: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x292a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_292a5c:
    // 0x292a5c: 0xc6810058  lwc1        $f1, 0x58($s4)
    ctx->pc = 0x292a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_292a60:
    // 0x292a60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x292a60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_292a64:
    // 0x292a64: 0x0  nop
    ctx->pc = 0x292a64u;
    // NOP
label_292a68:
    // 0x292a68: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x292a68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_292a6c:
    // 0x292a6c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x292a6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_292a70:
    // 0x292a70: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x292a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_292a74:
    // 0x292a74: 0x0  nop
    ctx->pc = 0x292a74u;
    // NOP
label_292a78:
    // 0x292a78: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x292a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
label_292a7c:
    // 0x292a7c: 0xafa000e8  sw          $zero, 0xE8($sp)
    ctx->pc = 0x292a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 0));
label_292a80:
    // 0x292a80: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x292a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_292a84:
    // 0x292a84: 0xafa000e4  sw          $zero, 0xE4($sp)
    ctx->pc = 0x292a84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
label_292a88:
    // 0x292a88: 0x26850074  addiu       $a1, $s4, 0x74
    ctx->pc = 0x292a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 116));
label_292a8c:
    // 0x292a8c: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x292a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
label_292a90:
    // 0x292a90: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x292a90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_292a94:
    // 0x292a94: 0xc6800040  lwc1        $f0, 0x40($s4)
    ctx->pc = 0x292a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_292a98:
    // 0x292a98: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x292a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_292a9c:
    // 0x292a9c: 0xc6800044  lwc1        $f0, 0x44($s4)
    ctx->pc = 0x292a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_292aa0:
    // 0x292aa0: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x292aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_292aa4:
    // 0x292aa4: 0xc6800048  lwc1        $f0, 0x48($s4)
    ctx->pc = 0x292aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_292aa8:
    // 0x292aa8: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x292aa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_292aac:
    // 0x292aac: 0xc680004c  lwc1        $f0, 0x4C($s4)
    ctx->pc = 0x292aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_292ab0:
    // 0x292ab0: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x292ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_292ab4:
    // 0x292ab4: 0xc6800068  lwc1        $f0, 0x68($s4)
    ctx->pc = 0x292ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_292ab8:
    // 0x292ab8: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x292ab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_292abc:
    // 0x292abc: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x292abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_292ac0:
    // 0x292ac0: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x292ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_292ac4:
    // 0x292ac4: 0xc0a5460  jal         func_295180
label_292ac8:
    if (ctx->pc == 0x292AC8u) {
        ctx->pc = 0x292AC8u;
            // 0x292ac8: 0xe7a0010c  swc1        $f0, 0x10C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
        ctx->pc = 0x292ACCu;
        goto label_292acc;
    }
    ctx->pc = 0x292AC4u;
    SET_GPR_U32(ctx, 31, 0x292ACCu);
    ctx->pc = 0x292AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292AC4u;
            // 0x292ac8: 0xe7a0010c  swc1        $f0, 0x10C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x295180u;
    if (runtime->hasFunction(0x295180u)) {
        auto targetFn = runtime->lookupFunction(0x295180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292ACCu; }
        if (ctx->pc != 0x292ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295180_0x295180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292ACCu; }
        if (ctx->pc != 0x292ACCu) { return; }
    }
    ctx->pc = 0x292ACCu;
label_292acc:
    // 0x292acc: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x292accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_292ad0:
    // 0x292ad0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x292ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_292ad4:
    // 0x292ad4: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x292ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_292ad8:
    // 0x292ad8: 0xc084ece  jal         func_213B38
label_292adc:
    if (ctx->pc == 0x292ADCu) {
        ctx->pc = 0x292ADCu;
            // 0x292adc: 0xafa20164  sw          $v0, 0x164($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
        ctx->pc = 0x292AE0u;
        goto label_292ae0;
    }
    ctx->pc = 0x292AD8u;
    SET_GPR_U32(ctx, 31, 0x292AE0u);
    ctx->pc = 0x292ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292AD8u;
            // 0x292adc: 0xafa20164  sw          $v0, 0x164($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x213B38u;
    if (runtime->hasFunction(0x213B38u)) {
        auto targetFn = runtime->lookupFunction(0x213B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292AE0u; }
        if (ctx->pc != 0x292AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00213B38_0x213b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292AE0u; }
        if (ctx->pc != 0x292AE0u) { return; }
    }
    ctx->pc = 0x292AE0u;
label_292ae0:
    // 0x292ae0: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x292ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_292ae4:
    // 0x292ae4: 0x27a301b8  addiu       $v1, $sp, 0x1B8
    ctx->pc = 0x292ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
label_292ae8:
    // 0x292ae8: 0x24a5ea60  addiu       $a1, $a1, -0x15A0
    ctx->pc = 0x292ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
label_292aec:
    // 0x292aec: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x292aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_292af0:
    // 0x292af0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x292af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_292af4:
    // 0x292af4: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x292af4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_292af8:
    // 0x292af8: 0xa3a201b8  sb          $v0, 0x1B8($sp)
    ctx->pc = 0x292af8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 440), (uint8_t)GPR_U32(ctx, 2));
label_292afc:
    // 0x292afc: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x292afcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_292b00:
    // 0x292b00: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_292b04:
    if (ctx->pc == 0x292B04u) {
        ctx->pc = 0x292B08u;
        goto label_292b08;
    }
    ctx->pc = 0x292B00u;
    {
        const bool branch_taken_0x292b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292b00) {
            ctx->pc = 0x292B30u;
            goto label_292b30;
        }
    }
    ctx->pc = 0x292B08u;
label_292b08:
    // 0x292b08: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x292b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_292b0c:
    // 0x292b0c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x292b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_292b10:
    // 0x292b10: 0x2442d788  addiu       $v0, $v0, -0x2878
    ctx->pc = 0x292b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956936));
label_292b14:
    // 0x292b14: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x292b14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_292b18:
    // 0x292b18: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x292b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_292b1c:
    // 0x292b1c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x292b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_292b20:
    // 0x292b20: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x292b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_292b24:
    // 0x292b24: 0x2482000c  addiu       $v0, $a0, 0xC
    ctx->pc = 0x292b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_292b28:
    // 0x292b28: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x292b28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_292b2c:
    // 0x292b2c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x292b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_292b30:
    // 0x292b30: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x292b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_292b34:
    // 0x292b34: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x292b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_292b38:
    // 0x292b38: 0xc0a5280  jal         func_294A00
label_292b3c:
    if (ctx->pc == 0x292B3Cu) {
        ctx->pc = 0x292B3Cu;
            // 0x292b3c: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x292B40u;
        goto label_292b40;
    }
    ctx->pc = 0x292B38u;
    SET_GPR_U32(ctx, 31, 0x292B40u);
    ctx->pc = 0x292B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292B38u;
            // 0x292b3c: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294A00u;
    if (runtime->hasFunction(0x294A00u)) {
        auto targetFn = runtime->lookupFunction(0x294A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292B40u; }
        if (ctx->pc != 0x292B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00294A00_0x294a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292B40u; }
        if (ctx->pc != 0x292B40u) { return; }
    }
    ctx->pc = 0x292B40u;
label_292b40:
    // 0x292b40: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x292b40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_292b44:
    // 0x292b44: 0x27a301b4  addiu       $v1, $sp, 0x1B4
    ctx->pc = 0x292b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
label_292b48:
    // 0x292b48: 0x24a5ea60  addiu       $a1, $a1, -0x15A0
    ctx->pc = 0x292b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
label_292b4c:
    // 0x292b4c: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x292b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_292b50:
    // 0x292b50: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x292b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_292b54:
    // 0x292b54: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x292b54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_292b58:
    // 0x292b58: 0xa3a201b4  sb          $v0, 0x1B4($sp)
    ctx->pc = 0x292b58u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 436), (uint8_t)GPR_U32(ctx, 2));
label_292b5c:
    // 0x292b5c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x292b5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_292b60:
    // 0x292b60: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_292b64:
    if (ctx->pc == 0x292B64u) {
        ctx->pc = 0x292B68u;
        goto label_292b68;
    }
    ctx->pc = 0x292B60u;
    {
        const bool branch_taken_0x292b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292b60) {
            ctx->pc = 0x292B90u;
            goto label_292b90;
        }
    }
    ctx->pc = 0x292B68u;
label_292b68:
    // 0x292b68: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x292b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_292b6c:
    // 0x292b6c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x292b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_292b70:
    // 0x292b70: 0x2442d798  addiu       $v0, $v0, -0x2868
    ctx->pc = 0x292b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956952));
label_292b74:
    // 0x292b74: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x292b74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_292b78:
    // 0x292b78: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x292b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_292b7c:
    // 0x292b7c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x292b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_292b80:
    // 0x292b80: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x292b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_292b84:
    // 0x292b84: 0x2482000c  addiu       $v0, $a0, 0xC
    ctx->pc = 0x292b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_292b88:
    // 0x292b88: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x292b88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_292b8c:
    // 0x292b8c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x292b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_292b90:
    // 0x292b90: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x292b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
label_292b94:
    // 0x292b94: 0xc6810020  lwc1        $f1, 0x20($s4)
    ctx->pc = 0x292b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_292b98:
    // 0x292b98: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x292b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
label_292b9c:
    // 0x292b9c: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x292b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_292ba0:
    // 0x292ba0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x292ba0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_292ba4:
    // 0x292ba4: 0xc7a60144  lwc1        $f6, 0x144($sp)
    ctx->pc = 0x292ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_292ba8:
    // 0x292ba8: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x292ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
label_292bac:
    // 0x292bac: 0x3443126f  ori         $v1, $v0, 0x126F
    ctx->pc = 0x292bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
label_292bb0:
    // 0x292bb0: 0xc7a50148  lwc1        $f5, 0x148($sp)
    ctx->pc = 0x292bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_292bb4:
    // 0x292bb4: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x292bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
label_292bb8:
    // 0x292bb8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x292bb8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_292bbc:
    // 0x292bbc: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x292bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_292bc0:
    // 0x292bc0: 0xc6870024  lwc1        $f7, 0x24($s4)
    ctx->pc = 0x292bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_292bc4:
    // 0x292bc4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x292bc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_292bc8:
    // 0x292bc8: 0xc7a800c0  lwc1        $f8, 0xC0($sp)
    ctx->pc = 0x292bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_292bcc:
    // 0x292bcc: 0x3443126f  ori         $v1, $v0, 0x126F
    ctx->pc = 0x292bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
label_292bd0:
    // 0x292bd0: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x292bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
label_292bd4:
    // 0x292bd4: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x292bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
label_292bd8:
    // 0x292bd8: 0x46063981  sub.s       $f6, $f7, $f6
    ctx->pc = 0x292bd8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
label_292bdc:
    // 0x292bdc: 0xe7a600c4  swc1        $f6, 0xC4($sp)
    ctx->pc = 0x292bdcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_292be0:
    // 0x292be0: 0xc6860028  lwc1        $f6, 0x28($s4)
    ctx->pc = 0x292be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_292be4:
    // 0x292be4: 0xc7a700c4  lwc1        $f7, 0xC4($sp)
    ctx->pc = 0x292be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_292be8:
    // 0x292be8: 0xc7a4014c  lwc1        $f4, 0x14C($sp)
    ctx->pc = 0x292be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_292bec:
    // 0x292bec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x292becu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_292bf0:
    // 0x292bf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x292bf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_292bf4:
    // 0x292bf4: 0x46004205  abs.s       $f8, $f8
    ctx->pc = 0x292bf4u;
    ctx->f[8] = FPU_ABS_S(ctx->f[8]);
label_292bf8:
    // 0x292bf8: 0x46053141  sub.s       $f5, $f6, $f5
    ctx->pc = 0x292bf8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
label_292bfc:
    // 0x292bfc: 0xe7a500c8  swc1        $f5, 0xC8($sp)
    ctx->pc = 0x292bfcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_292c00:
    // 0x292c00: 0xc685002c  lwc1        $f5, 0x2C($s4)
    ctx->pc = 0x292c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_292c04:
    // 0x292c04: 0x460039c5  abs.s       $f7, $f7
    ctx->pc = 0x292c04u;
    ctx->f[7] = FPU_ABS_S(ctx->f[7]);
label_292c08:
    // 0x292c08: 0xc7a600c8  lwc1        $f6, 0xC8($sp)
    ctx->pc = 0x292c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_292c0c:
    // 0x292c0c: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x292c0cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_292c10:
    // 0x292c10: 0xe7a400cc  swc1        $f4, 0xCC($sp)
    ctx->pc = 0x292c10u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_292c14:
    // 0x292c14: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x292c14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_292c18:
    // 0x292c18: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x292c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_292c1c:
    // 0x292c1c: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x292c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_292c20:
    // 0x292c20: 0xe7a200b4  swc1        $f2, 0xB4($sp)
    ctx->pc = 0x292c20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_292c24:
    // 0x292c24: 0x46003085  abs.s       $f2, $f6
    ctx->pc = 0x292c24u;
    ctx->f[2] = FPU_ABS_S(ctx->f[6]);
label_292c28:
    // 0x292c28: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x292c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_292c2c:
    // 0x292c2c: 0xe7a800c0  swc1        $f8, 0xC0($sp)
    ctx->pc = 0x292c2cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_292c30:
    // 0x292c30: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x292c30u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
label_292c34:
    // 0x292c34: 0xe7a100cc  swc1        $f1, 0xCC($sp)
    ctx->pc = 0x292c34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_292c38:
    // 0x292c38: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x292c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_292c3c:
    // 0x292c3c: 0xe7a700c4  swc1        $f7, 0xC4($sp)
    ctx->pc = 0x292c3cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_292c40:
    // 0x292c40: 0xe7a300b0  swc1        $f3, 0xB0($sp)
    ctx->pc = 0x292c40u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_292c44:
    // 0x292c44: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x292c44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_292c48:
    // 0x292c48: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_292c4c:
    if (ctx->pc == 0x292C4Cu) {
        ctx->pc = 0x292C4Cu;
            // 0x292c4c: 0xe7a200c8  swc1        $f2, 0xC8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->pc = 0x292C50u;
        goto label_292c50;
    }
    ctx->pc = 0x292C48u;
    {
        const bool branch_taken_0x292c48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x292C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292C48u;
            // 0x292c4c: 0xe7a200c8  swc1        $f2, 0xC8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292c48) {
            ctx->pc = 0x292C58u;
            goto label_292c58;
        }
    }
    ctx->pc = 0x292C50u;
label_292c50:
    // 0x292c50: 0x10000003  b           . + 4 + (0x3 << 2)
label_292c54:
    if (ctx->pc == 0x292C54u) {
        ctx->pc = 0x292C54u;
            // 0x292c54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x292C58u;
        goto label_292c58;
    }
    ctx->pc = 0x292C50u;
    {
        const bool branch_taken_0x292c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292C50u;
            // 0x292c54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292c50) {
            ctx->pc = 0x292C60u;
            goto label_292c60;
        }
    }
    ctx->pc = 0x292C58u;
label_292c58:
    // 0x292c58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x292c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_292c5c:
    // 0x292c5c: 0x0  nop
    ctx->pc = 0x292c5cu;
    // NOP
label_292c60:
    // 0x292c60: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x292c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_292c64:
    // 0x292c64: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x292c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_292c68:
    // 0x292c68: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x292c68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_292c6c:
    // 0x292c6c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_292c70:
    if (ctx->pc == 0x292C70u) {
        ctx->pc = 0x292C70u;
            // 0x292c70: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x292C74u;
        goto label_292c74;
    }
    ctx->pc = 0x292C6Cu;
    {
        const bool branch_taken_0x292c6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x292C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292C6Cu;
            // 0x292c70: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292c6c) {
            ctx->pc = 0x292C80u;
            goto label_292c80;
        }
    }
    ctx->pc = 0x292C74u;
label_292c74:
    // 0x292c74: 0x10000004  b           . + 4 + (0x4 << 2)
label_292c78:
    if (ctx->pc == 0x292C78u) {
        ctx->pc = 0x292C7Cu;
        goto label_292c7c;
    }
    ctx->pc = 0x292C74u;
    {
        const bool branch_taken_0x292c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292c74) {
            ctx->pc = 0x292C88u;
            goto label_292c88;
        }
    }
    ctx->pc = 0x292C7Cu;
label_292c7c:
    // 0x292c7c: 0x0  nop
    ctx->pc = 0x292c7cu;
    // NOP
label_292c80:
    // 0x292c80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x292c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_292c84:
    // 0x292c84: 0x0  nop
    ctx->pc = 0x292c84u;
    // NOP
label_292c88:
    // 0x292c88: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x292c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_292c8c:
    // 0x292c8c: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x292c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_292c90:
    // 0x292c90: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x292c90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_292c94:
    // 0x292c94: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_292c98:
    if (ctx->pc == 0x292C98u) {
        ctx->pc = 0x292C98u;
            // 0x292c98: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x292C9Cu;
        goto label_292c9c;
    }
    ctx->pc = 0x292C94u;
    {
        const bool branch_taken_0x292c94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x292C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292C94u;
            // 0x292c98: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292c94) {
            ctx->pc = 0x292CA8u;
            goto label_292ca8;
        }
    }
    ctx->pc = 0x292C9Cu;
label_292c9c:
    // 0x292c9c: 0x10000004  b           . + 4 + (0x4 << 2)
label_292ca0:
    if (ctx->pc == 0x292CA0u) {
        ctx->pc = 0x292CA4u;
        goto label_292ca4;
    }
    ctx->pc = 0x292C9Cu;
    {
        const bool branch_taken_0x292c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292c9c) {
            ctx->pc = 0x292CB0u;
            goto label_292cb0;
        }
    }
    ctx->pc = 0x292CA4u;
label_292ca4:
    // 0x292ca4: 0x0  nop
    ctx->pc = 0x292ca4u;
    // NOP
label_292ca8:
    // 0x292ca8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x292ca8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_292cac:
    // 0x292cac: 0x0  nop
    ctx->pc = 0x292cacu;
    // NOP
label_292cb0:
    // 0x292cb0: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x292cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_292cb4:
    // 0x292cb4: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x292cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_292cb8:
    // 0x292cb8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x292cb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_292cbc:
    // 0x292cbc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_292cc0:
    if (ctx->pc == 0x292CC0u) {
        ctx->pc = 0x292CC0u;
            // 0x292cc0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x292CC4u;
        goto label_292cc4;
    }
    ctx->pc = 0x292CBCu;
    {
        const bool branch_taken_0x292cbc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x292CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292CBCu;
            // 0x292cc0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292cbc) {
            ctx->pc = 0x292CD0u;
            goto label_292cd0;
        }
    }
    ctx->pc = 0x292CC4u;
label_292cc4:
    // 0x292cc4: 0x10000004  b           . + 4 + (0x4 << 2)
label_292cc8:
    if (ctx->pc == 0x292CC8u) {
        ctx->pc = 0x292CCCu;
        goto label_292ccc;
    }
    ctx->pc = 0x292CC4u;
    {
        const bool branch_taken_0x292cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292cc4) {
            ctx->pc = 0x292CD8u;
            goto label_292cd8;
        }
    }
    ctx->pc = 0x292CCCu;
label_292ccc:
    // 0x292ccc: 0x0  nop
    ctx->pc = 0x292cccu;
    // NOP
label_292cd0:
    // 0x292cd0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x292cd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_292cd4:
    // 0x292cd4: 0x0  nop
    ctx->pc = 0x292cd4u;
    // NOP
label_292cd8:
    // 0x292cd8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x292cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_292cdc:
    // 0x292cdc: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x292cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_292ce0:
    // 0x292ce0: 0x27a301a0  addiu       $v1, $sp, 0x1A0
    ctx->pc = 0x292ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_292ce4:
    // 0x292ce4: 0xa22025  or          $a0, $a1, $v0
    ctx->pc = 0x292ce4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_292ce8:
    // 0x292ce8: 0xafa401a0  sw          $a0, 0x1A0($sp)
    ctx->pc = 0x292ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 4));
label_292cec:
    // 0x292cec: 0x27a201a4  addiu       $v0, $sp, 0x1A4
    ctx->pc = 0x292cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 420));
label_292cf0:
    // 0x292cf0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x292cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_292cf4:
    // 0x292cf4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x292cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_292cf8:
    // 0x292cf8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x292cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_292cfc:
    // 0x292cfc: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x292cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
label_292d00:
    // 0x292d00: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x292d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
label_292d04:
    // 0x292d04: 0x2c550001  sltiu       $s5, $v0, 0x1
    ctx->pc = 0x292d04u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_292d08:
    // 0x292d08: 0x16a00125  bnez        $s5, . + 4 + (0x125 << 2)
label_292d0c:
    if (ctx->pc == 0x292D0Cu) {
        ctx->pc = 0x292D10u;
        goto label_292d10;
    }
    ctx->pc = 0x292D08u;
    {
        const bool branch_taken_0x292d08 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x292d08) {
            ctx->pc = 0x2931A0u;
            goto label_2931a0;
        }
    }
    ctx->pc = 0x292D10u;
label_292d10:
    // 0x292d10: 0xc7a60190  lwc1        $f6, 0x190($sp)
    ctx->pc = 0x292d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_292d14:
    // 0x292d14: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x292d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_292d18:
    // 0x292d18: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x292d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_292d1c:
    // 0x292d1c: 0x3442ffee  ori         $v0, $v0, 0xFFEE
    ctx->pc = 0x292d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_292d20:
    // 0x292d20: 0xc7a50194  lwc1        $f5, 0x194($sp)
    ctx->pc = 0x292d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_292d24:
    // 0x292d24: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x292d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_292d28:
    // 0x292d28: 0xc7a40144  lwc1        $f4, 0x144($sp)
    ctx->pc = 0x292d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_292d2c:
    // 0x292d2c: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x292d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_292d30:
    // 0x292d30: 0xc7a30198  lwc1        $f3, 0x198($sp)
    ctx->pc = 0x292d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_292d34:
    // 0x292d34: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x292d34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_292d38:
    // 0x292d38: 0xc7a20148  lwc1        $f2, 0x148($sp)
    ctx->pc = 0x292d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_292d3c:
    // 0x292d3c: 0xc7a1019c  lwc1        $f1, 0x19C($sp)
    ctx->pc = 0x292d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_292d40:
    // 0x292d40: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x292d40u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
label_292d44:
    // 0x292d44: 0xc7a0014c  lwc1        $f0, 0x14C($sp)
    ctx->pc = 0x292d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_292d48:
    // 0x292d48: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x292d48u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
label_292d4c:
    // 0x292d4c: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x292d4cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_292d50:
    // 0x292d50: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x292d50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_292d54:
    // 0x292d54: 0xe7a60170  swc1        $f6, 0x170($sp)
    ctx->pc = 0x292d54u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_292d58:
    // 0x292d58: 0xe7a40174  swc1        $f4, 0x174($sp)
    ctx->pc = 0x292d58u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
label_292d5c:
    // 0x292d5c: 0xe7a20178  swc1        $f2, 0x178($sp)
    ctx->pc = 0x292d5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_292d60:
    // 0x292d60: 0xe7a0017c  swc1        $f0, 0x17C($sp)
    ctx->pc = 0x292d60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
label_292d64:
    // 0x292d64: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x292d64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_292d68:
    // 0x292d68: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x292d68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_292d6c:
    // 0x292d6c: 0x8e840030  lw          $a0, 0x30($s4)
    ctx->pc = 0x292d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_292d70:
    // 0x292d70: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x292d70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_292d74:
    // 0x292d74: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x292d74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_292d78:
    // 0x292d78: 0x320f809  jalr        $t9
label_292d7c:
    if (ctx->pc == 0x292D7Cu) {
        ctx->pc = 0x292D7Cu;
            // 0x292d7c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x292D80u;
        goto label_292d80;
    }
    ctx->pc = 0x292D78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x292D80u);
        ctx->pc = 0x292D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292D78u;
            // 0x292d7c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x292D80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x292D80u; }
            if (ctx->pc != 0x292D80u) { return; }
        }
        }
    }
    ctx->pc = 0x292D80u;
label_292d80:
    // 0x292d80: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x292d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_292d84:
    // 0x292d84: 0x27a301b0  addiu       $v1, $sp, 0x1B0
    ctx->pc = 0x292d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_292d88:
    // 0x292d88: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x292d88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_292d8c:
    // 0x292d8c: 0xa3a201b0  sb          $v0, 0x1B0($sp)
    ctx->pc = 0x292d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 432), (uint8_t)GPR_U32(ctx, 2));
label_292d90:
    // 0x292d90: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x292d90u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_292d94:
    // 0x292d94: 0x10400100  beqz        $v0, . + 4 + (0x100 << 2)
label_292d98:
    if (ctx->pc == 0x292D98u) {
        ctx->pc = 0x292D98u;
            // 0x292d98: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x292D9Cu;
        goto label_292d9c;
    }
    ctx->pc = 0x292D94u;
    {
        const bool branch_taken_0x292d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292D94u;
            // 0x292d98: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292d94) {
            ctx->pc = 0x293198u;
            goto label_293198;
        }
    }
    ctx->pc = 0x292D9Cu;
label_292d9c:
    // 0x292d9c: 0xc07f828  jal         func_1FE0A0
label_292da0:
    if (ctx->pc == 0x292DA0u) {
        ctx->pc = 0x292DA4u;
        goto label_292da4;
    }
    ctx->pc = 0x292D9Cu;
    SET_GPR_U32(ctx, 31, 0x292DA4u);
    ctx->pc = 0x1FE0A0u;
    if (runtime->hasFunction(0x1FE0A0u)) {
        auto targetFn = runtime->lookupFunction(0x1FE0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292DA4u; }
        if (ctx->pc != 0x292DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FE0A0_0x1fe0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292DA4u; }
        if (ctx->pc != 0x292DA4u) { return; }
    }
    ctx->pc = 0x292DA4u;
label_292da4:
    // 0x292da4: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x292da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_292da8:
    // 0x292da8: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x292da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_292dac:
    // 0x292dac: 0x10000014  b           . + 4 + (0x14 << 2)
label_292db0:
    if (ctx->pc == 0x292DB0u) {
        ctx->pc = 0x292DB0u;
            // 0x292db0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->pc = 0x292DB4u;
        goto label_292db4;
    }
    ctx->pc = 0x292DACu;
    {
        const bool branch_taken_0x292dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292DACu;
            // 0x292db0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292dac) {
            ctx->pc = 0x292E00u;
            goto label_292e00;
        }
    }
    ctx->pc = 0x292DB4u;
label_292db4:
    // 0x292db4: 0x0  nop
    ctx->pc = 0x292db4u;
    // NOP
label_292db8:
    // 0x292db8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x292db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_292dbc:
    // 0x292dbc: 0xc466001c  lwc1        $f6, 0x1C($v1)
    ctx->pc = 0x292dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_292dc0:
    // 0x292dc0: 0xe466000c  swc1        $f6, 0xC($v1)
    ctx->pc = 0x292dc0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_292dc4:
    // 0x292dc4: 0xc7a50140  lwc1        $f5, 0x140($sp)
    ctx->pc = 0x292dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_292dc8:
    // 0x292dc8: 0xc4640010  lwc1        $f4, 0x10($v1)
    ctx->pc = 0x292dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_292dcc:
    // 0x292dcc: 0xc7a30144  lwc1        $f3, 0x144($sp)
    ctx->pc = 0x292dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_292dd0:
    // 0x292dd0: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x292dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_292dd4:
    // 0x292dd4: 0xc7a10148  lwc1        $f1, 0x148($sp)
    ctx->pc = 0x292dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_292dd8:
    // 0x292dd8: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x292dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_292ddc:
    // 0x292ddc: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x292ddcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_292de0:
    // 0x292de0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x292de0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_292de4:
    // 0x292de4: 0x46022018  adda.s      $f4, $f2
    ctx->pc = 0x292de4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
label_292de8:
    // 0x292de8: 0x4600081c  madd.s      $f0, $f1, $f0
    ctx->pc = 0x292de8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
label_292dec:
    // 0x292dec: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x292decu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_292df0:
    // 0x292df0: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x292df0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_292df4:
    // 0x292df4: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x292df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
label_292df8:
    // 0x292df8: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x292df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_292dfc:
    // 0x292dfc: 0x0  nop
    ctx->pc = 0x292dfcu;
    // NOP
label_292e00:
    // 0x292e00: 0x441ffed  bgez        $v0, . + 4 + (-0x13 << 2)
label_292e04:
    if (ctx->pc == 0x292E04u) {
        ctx->pc = 0x292E08u;
        goto label_292e08;
    }
    ctx->pc = 0x292E00u;
    {
        const bool branch_taken_0x292e00 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x292e00) {
            ctx->pc = 0x292DB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_292db8;
        }
    }
    ctx->pc = 0x292E08u;
label_292e08:
    // 0x292e08: 0x10000039  b           . + 4 + (0x39 << 2)
label_292e0c:
    if (ctx->pc == 0x292E0Cu) {
        ctx->pc = 0x292E10u;
        goto label_292e10;
    }
    ctx->pc = 0x292E08u;
    {
        const bool branch_taken_0x292e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292e08) {
            ctx->pc = 0x292EF0u;
            goto label_292ef0;
        }
    }
    ctx->pc = 0x292E10u;
label_292e10:
    // 0x292e10: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x292e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_292e14:
    // 0x292e14: 0x26630010  addiu       $v1, $s3, 0x10
    ctx->pc = 0x292e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_292e18:
    // 0x292e18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x292e18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_292e1c:
    // 0x292e1c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x292e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_292e20:
    // 0x292e20: 0x10000025  b           . + 4 + (0x25 << 2)
label_292e24:
    if (ctx->pc == 0x292E24u) {
        ctx->pc = 0x292E24u;
            // 0x292e24: 0xae640014  sw          $a0, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 4));
        ctx->pc = 0x292E28u;
        goto label_292e28;
    }
    ctx->pc = 0x292E20u;
    {
        const bool branch_taken_0x292e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292E20u;
            // 0x292e24: 0xae640014  sw          $a0, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292e20) {
            ctx->pc = 0x292EB8u;
            goto label_292eb8;
        }
    }
    ctx->pc = 0x292E28u;
label_292e28:
    // 0x292e28: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x292e28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_292e2c:
    // 0x292e2c: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x292e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_292e30:
    // 0x292e30: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x292e30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_292e34:
    // 0x292e34: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x292e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_292e38:
    // 0x292e38: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x292e38u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_292e3c:
    // 0x292e3c: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x292e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_292e40:
    // 0x292e40: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x292e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_292e44:
    // 0x292e44: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x292e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_292e48:
    // 0x292e48: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x292e48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_292e4c:
    // 0x292e4c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x292e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_292e50:
    // 0x292e50: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x292e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_292e54:
    // 0x292e54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x292e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_292e58:
    // 0x292e58: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x292e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_292e5c:
    // 0x292e5c: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x292e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_292e60:
    // 0x292e60: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x292e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_292e64:
    // 0x292e64: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x292e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_292e68:
    // 0x292e68: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x292e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_292e6c:
    // 0x292e6c: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x292e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_292e70:
    // 0x292e70: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x292e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_292e74:
    // 0x292e74: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x292e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_292e78:
    // 0x292e78: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x292e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
label_292e7c:
    // 0x292e7c: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x292e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_292e80:
    // 0x292e80: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x292e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
label_292e84:
    // 0x292e84: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x292e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_292e88:
    // 0x292e88: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x292e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
label_292e8c:
    // 0x292e8c: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x292e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_292e90:
    // 0x292e90: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x292e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
label_292e94:
    // 0x292e94: 0x8cc40020  lw          $a0, 0x20($a2)
    ctx->pc = 0x292e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_292e98:
    // 0x292e98: 0xaca40020  sw          $a0, 0x20($a1)
    ctx->pc = 0x292e98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 4));
label_292e9c:
    // 0x292e9c: 0x8cc40024  lw          $a0, 0x24($a2)
    ctx->pc = 0x292e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_292ea0:
    // 0x292ea0: 0xaca40024  sw          $a0, 0x24($a1)
    ctx->pc = 0x292ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 4));
label_292ea4:
    // 0x292ea4: 0x8cc40028  lw          $a0, 0x28($a2)
    ctx->pc = 0x292ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_292ea8:
    // 0x292ea8: 0xaca40028  sw          $a0, 0x28($a1)
    ctx->pc = 0x292ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 4));
label_292eac:
    // 0x292eac: 0x8cc4002c  lw          $a0, 0x2C($a2)
    ctx->pc = 0x292eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
label_292eb0:
    // 0x292eb0: 0xaca4002c  sw          $a0, 0x2C($a1)
    ctx->pc = 0x292eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 4));
label_292eb4:
    // 0x292eb4: 0x0  nop
    ctx->pc = 0x292eb4u;
    // NOP
label_292eb8:
    // 0x292eb8: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x292eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_292ebc:
    // 0x292ebc: 0x44202a  slt         $a0, $v0, $a0
    ctx->pc = 0x292ebcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_292ec0:
    // 0x292ec0: 0x1480ffd9  bnez        $a0, . + 4 + (-0x27 << 2)
label_292ec4:
    if (ctx->pc == 0x292EC4u) {
        ctx->pc = 0x292EC8u;
        goto label_292ec8;
    }
    ctx->pc = 0x292EC0u;
    {
        const bool branch_taken_0x292ec0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x292ec0) {
            ctx->pc = 0x292E28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_292e28;
        }
    }
    ctx->pc = 0x292EC8u;
label_292ec8:
    // 0x292ec8: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x292ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_292ecc:
    // 0x292ecc: 0x27a301ac  addiu       $v1, $sp, 0x1AC
    ctx->pc = 0x292eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 428));
label_292ed0:
    // 0x292ed0: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x292ed0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_292ed4:
    // 0x292ed4: 0xa3a201ac  sb          $v0, 0x1AC($sp)
    ctx->pc = 0x292ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 428), (uint8_t)GPR_U32(ctx, 2));
label_292ed8:
    // 0x292ed8: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x292ed8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_292edc:
    // 0x292edc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_292ee0:
    if (ctx->pc == 0x292EE0u) {
        ctx->pc = 0x292EE4u;
        goto label_292ee4;
    }
    ctx->pc = 0x292EDCu;
    {
        const bool branch_taken_0x292edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292edc) {
            ctx->pc = 0x292EF0u;
            goto label_292ef0;
        }
    }
    ctx->pc = 0x292EE4u;
label_292ee4:
    // 0x292ee4: 0x10000008  b           . + 4 + (0x8 << 2)
label_292ee8:
    if (ctx->pc == 0x292EE8u) {
        ctx->pc = 0x292EE8u;
            // 0x292ee8: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x292EECu;
        goto label_292eec;
    }
    ctx->pc = 0x292EE4u;
    {
        const bool branch_taken_0x292ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292EE4u;
            // 0x292ee8: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292ee4) {
            ctx->pc = 0x292F08u;
            goto label_292f08;
        }
    }
    ctx->pc = 0x292EECu;
label_292eec:
    // 0x292eec: 0x0  nop
    ctx->pc = 0x292eecu;
    // NOP
label_292ef0:
    // 0x292ef0: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x292ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_292ef4:
    // 0x292ef4: 0xc0a4e5c  jal         func_293970
label_292ef8:
    if (ctx->pc == 0x292EF8u) {
        ctx->pc = 0x292EF8u;
            // 0x292ef8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x292EFCu;
        goto label_292efc;
    }
    ctx->pc = 0x292EF4u;
    SET_GPR_U32(ctx, 31, 0x292EFCu);
    ctx->pc = 0x292EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292EF4u;
            // 0x292ef8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293970u;
    if (runtime->hasFunction(0x293970u)) {
        auto targetFn = runtime->lookupFunction(0x293970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292EFCu; }
        if (ctx->pc != 0x292EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00293970_0x293970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292EFCu; }
        if (ctx->pc != 0x292EFCu) { return; }
    }
    ctx->pc = 0x292EFCu;
label_292efc:
    // 0x292efc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x292efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_292f00:
    // 0x292f00: 0x1443ffc3  bne         $v0, $v1, . + 4 + (-0x3D << 2)
label_292f04:
    if (ctx->pc == 0x292F04u) {
        ctx->pc = 0x292F08u;
        goto label_292f08;
    }
    ctx->pc = 0x292F00u;
    {
        const bool branch_taken_0x292f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x292f00) {
            ctx->pc = 0x292E10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_292e10;
        }
    }
    ctx->pc = 0x292F08u;
label_292f08:
    // 0x292f08: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x292f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_292f0c:
    // 0x292f0c: 0x184000a4  blez        $v0, . + 4 + (0xA4 << 2)
label_292f10:
    if (ctx->pc == 0x292F10u) {
        ctx->pc = 0x292F10u;
            // 0x292f10: 0x26630010  addiu       $v1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x292F14u;
        goto label_292f14;
    }
    ctx->pc = 0x292F0Cu;
    {
        const bool branch_taken_0x292f0c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x292F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292F0Cu;
            // 0x292f10: 0x26630010  addiu       $v1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292f0c) {
            ctx->pc = 0x2931A0u;
            goto label_2931a0;
        }
    }
    ctx->pc = 0x292F14u;
label_292f14:
    // 0x292f14: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x292f14u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_292f18:
    // 0x292f18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x292f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_292f1c:
    // 0x292f1c: 0xc0a5484  jal         func_295210
label_292f20:
    if (ctx->pc == 0x292F20u) {
        ctx->pc = 0x292F20u;
            // 0x292f20: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x292F24u;
        goto label_292f24;
    }
    ctx->pc = 0x292F1Cu;
    SET_GPR_U32(ctx, 31, 0x292F24u);
    ctx->pc = 0x292F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292F1Cu;
            // 0x292f20: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295210u;
    if (runtime->hasFunction(0x295210u)) {
        auto targetFn = runtime->lookupFunction(0x295210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292F24u; }
        if (ctx->pc != 0x292F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295210_0x295210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292F24u; }
        if (ctx->pc != 0x292F24u) { return; }
    }
    ctx->pc = 0x292F24u;
label_292f24:
    // 0x292f24: 0x8e83007c  lw          $v1, 0x7C($s4)
    ctx->pc = 0x292f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 124)));
label_292f28:
    // 0x292f28: 0x8e820078  lw          $v0, 0x78($s4)
    ctx->pc = 0x292f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
label_292f2c:
    // 0x292f2c: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x292f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_292f30:
    // 0x292f30: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x292f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_292f34:
    // 0x292f34: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_292f38:
    if (ctx->pc == 0x292F38u) {
        ctx->pc = 0x292F38u;
            // 0x292f38: 0x26840074  addiu       $a0, $s4, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 116));
        ctx->pc = 0x292F3Cu;
        goto label_292f3c;
    }
    ctx->pc = 0x292F34u;
    {
        const bool branch_taken_0x292f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x292F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292F34u;
            // 0x292f38: 0x26840074  addiu       $a0, $s4, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292f34) {
            ctx->pc = 0x292F48u;
            goto label_292f48;
        }
    }
    ctx->pc = 0x292F3Cu;
label_292f3c:
    // 0x292f3c: 0xc0a728c  jal         func_29CA30
label_292f40:
    if (ctx->pc == 0x292F40u) {
        ctx->pc = 0x292F40u;
            // 0x292f40: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x292F44u;
        goto label_292f44;
    }
    ctx->pc = 0x292F3Cu;
    SET_GPR_U32(ctx, 31, 0x292F44u);
    ctx->pc = 0x292F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292F3Cu;
            // 0x292f40: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292F44u; }
        if (ctx->pc != 0x292F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292F44u; }
        if (ctx->pc != 0x292F44u) { return; }
    }
    ctx->pc = 0x292F44u;
label_292f44:
    // 0x292f44: 0x0  nop
    ctx->pc = 0x292f44u;
    // NOP
label_292f48:
    // 0x292f48: 0x8e840078  lw          $a0, 0x78($s4)
    ctx->pc = 0x292f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
label_292f4c:
    // 0x292f4c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x292f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_292f50:
    // 0x292f50: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x292f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_292f54:
    // 0x292f54: 0xae830078  sw          $v1, 0x78($s4)
    ctx->pc = 0x292f54u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 120), GPR_U32(ctx, 3));
label_292f58:
    // 0x292f58: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x292f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_292f5c:
    // 0x292f5c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x292f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_292f60:
    // 0x292f60: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x292f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_292f64:
    // 0x292f64: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x292f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_292f68:
    // 0x292f68: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x292f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_292f6c:
    // 0x292f6c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x292f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_292f70:
    // 0x292f70: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x292f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_292f74:
    // 0x292f74: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x292f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_292f78:
    // 0x292f78: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x292f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_292f7c:
    // 0x292f7c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x292f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_292f80:
    // 0x292f80: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x292f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_292f84:
    // 0x292f84: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x292f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_292f88:
    // 0x292f88: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x292f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_292f8c:
    // 0x292f8c: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x292f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_292f90:
    // 0x292f90: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x292f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_292f94:
    // 0x292f94: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x292f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_292f98:
    // 0x292f98: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x292f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_292f9c:
    // 0x292f9c: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x292f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_292fa0:
    // 0x292fa0: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x292fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_292fa4:
    // 0x292fa4: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x292fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
label_292fa8:
    // 0x292fa8: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x292fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_292fac:
    // 0x292fac: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x292facu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
label_292fb0:
    // 0x292fb0: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x292fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_292fb4:
    // 0x292fb4: 0xac620024  sw          $v0, 0x24($v1)
    ctx->pc = 0x292fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
label_292fb8:
    // 0x292fb8: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x292fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_292fbc:
    // 0x292fbc: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x292fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
label_292fc0:
    // 0x292fc0: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x292fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_292fc4:
    // 0x292fc4: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x292fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
label_292fc8:
    // 0x292fc8: 0x928200b0  lbu         $v0, 0xB0($s4)
    ctx->pc = 0x292fc8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 176)));
label_292fcc:
    // 0x292fcc: 0x14400074  bnez        $v0, . + 4 + (0x74 << 2)
label_292fd0:
    if (ctx->pc == 0x292FD0u) {
        ctx->pc = 0x292FD4u;
        goto label_292fd4;
    }
    ctx->pc = 0x292FCCu;
    {
        const bool branch_taken_0x292fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292fcc) {
            ctx->pc = 0x2931A0u;
            goto label_2931a0;
        }
    }
    ctx->pc = 0x292FD4u;
label_292fd4:
    // 0x292fd4: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x292fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_292fd8:
    // 0x292fd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x292fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_292fdc:
    // 0x292fdc: 0x80830018  lb          $v1, 0x18($a0)
    ctx->pc = 0x292fdcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
label_292fe0:
    // 0x292fe0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_292fe4:
    if (ctx->pc == 0x292FE4u) {
        ctx->pc = 0x292FE8u;
        goto label_292fe8;
    }
    ctx->pc = 0x292FE0u;
    {
        const bool branch_taken_0x292fe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x292fe0) {
            ctx->pc = 0x292FF8u;
            goto label_292ff8;
        }
    }
    ctx->pc = 0x292FE8u;
label_292fe8:
    // 0x292fe8: 0x80820010  lb          $v0, 0x10($a0)
    ctx->pc = 0x292fe8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_292fec:
    // 0x292fec: 0x10000004  b           . + 4 + (0x4 << 2)
label_292ff0:
    if (ctx->pc == 0x292FF0u) {
        ctx->pc = 0x292FF0u;
            // 0x292ff0: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->pc = 0x292FF4u;
        goto label_292ff4;
    }
    ctx->pc = 0x292FECu;
    {
        const bool branch_taken_0x292fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292FECu;
            // 0x292ff0: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292fec) {
            ctx->pc = 0x293000u;
            goto label_293000;
        }
    }
    ctx->pc = 0x292FF4u;
label_292ff4:
    // 0x292ff4: 0x0  nop
    ctx->pc = 0x292ff4u;
    // NOP
label_292ff8:
    // 0x292ff8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x292ff8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_292ffc:
    // 0x292ffc: 0x0  nop
    ctx->pc = 0x292ffcu;
    // NOP
label_293000:
    // 0x293000: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
label_293004:
    if (ctx->pc == 0x293004u) {
        ctx->pc = 0x293008u;
        goto label_293008;
    }
    ctx->pc = 0x293000u;
    {
        const bool branch_taken_0x293000 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x293000) {
            ctx->pc = 0x2930B8u;
            goto label_2930b8;
        }
    }
    ctx->pc = 0x293008u;
label_293008:
    // 0x293008: 0x8e830090  lw          $v1, 0x90($s4)
    ctx->pc = 0x293008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
label_29300c:
    // 0x29300c: 0x1000000c  b           . + 4 + (0xC << 2)
label_293010:
    if (ctx->pc == 0x293010u) {
        ctx->pc = 0x293010u;
            // 0x293010: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x293014u;
        goto label_293014;
    }
    ctx->pc = 0x29300Cu;
    {
        const bool branch_taken_0x29300c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29300Cu;
            // 0x293010: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29300c) {
            ctx->pc = 0x293040u;
            goto label_293040;
        }
    }
    ctx->pc = 0x293014u;
label_293014:
    // 0x293014: 0x0  nop
    ctx->pc = 0x293014u;
    // NOP
label_293018:
    // 0x293018: 0x8e82008c  lw          $v0, 0x8C($s4)
    ctx->pc = 0x293018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
label_29301c:
    // 0x29301c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x29301cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_293020:
    // 0x293020: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x293020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_293024:
    // 0x293024: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x293024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_293028:
    // 0x293028: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
label_29302c:
    if (ctx->pc == 0x29302Cu) {
        ctx->pc = 0x293030u;
        goto label_293030;
    }
    ctx->pc = 0x293028u;
    {
        const bool branch_taken_0x293028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x293028) {
            ctx->pc = 0x293038u;
            goto label_293038;
        }
    }
    ctx->pc = 0x293030u;
label_293030:
    // 0x293030: 0x10000007  b           . + 4 + (0x7 << 2)
label_293034:
    if (ctx->pc == 0x293034u) {
        ctx->pc = 0x293038u;
        goto label_293038;
    }
    ctx->pc = 0x293030u;
    {
        const bool branch_taken_0x293030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x293030) {
            ctx->pc = 0x293050u;
            goto label_293050;
        }
    }
    ctx->pc = 0x293038u;
label_293038:
    // 0x293038: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x293038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_29303c:
    // 0x29303c: 0x0  nop
    ctx->pc = 0x29303cu;
    // NOP
label_293040:
    // 0x293040: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x293040u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_293044:
    // 0x293044: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_293048:
    if (ctx->pc == 0x293048u) {
        ctx->pc = 0x29304Cu;
        goto label_29304c;
    }
    ctx->pc = 0x293044u;
    {
        const bool branch_taken_0x293044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x293044) {
            ctx->pc = 0x293018u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_293018;
        }
    }
    ctx->pc = 0x29304Cu;
label_29304c:
    // 0x29304c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x29304cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_293050:
    // 0x293050: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x293050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_293054:
    // 0x293054: 0x14a20018  bne         $a1, $v0, . + 4 + (0x18 << 2)
label_293058:
    if (ctx->pc == 0x293058u) {
        ctx->pc = 0x29305Cu;
        goto label_29305c;
    }
    ctx->pc = 0x293054u;
    {
        const bool branch_taken_0x293054 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x293054) {
            ctx->pc = 0x2930B8u;
            goto label_2930b8;
        }
    }
    ctx->pc = 0x29305Cu;
label_29305c:
    // 0x29305c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x29305cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_293060:
    // 0x293060: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_293064:
    if (ctx->pc == 0x293064u) {
        ctx->pc = 0x293068u;
        goto label_293068;
    }
    ctx->pc = 0x293060u;
    {
        const bool branch_taken_0x293060 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x293060) {
            ctx->pc = 0x293070u;
            goto label_293070;
        }
    }
    ctx->pc = 0x293068u;
label_293068:
    // 0x293068: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x293068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_29306c:
    // 0x29306c: 0x0  nop
    ctx->pc = 0x29306cu;
    // NOP
label_293070:
    // 0x293070: 0xc088af4  jal         func_222BD0
label_293074:
    if (ctx->pc == 0x293074u) {
        ctx->pc = 0x293074u;
            // 0x293074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x293078u;
        goto label_293078;
    }
    ctx->pc = 0x293070u;
    SET_GPR_U32(ctx, 31, 0x293078u);
    ctx->pc = 0x293074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293070u;
            // 0x293074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222BD0u;
    if (runtime->hasFunction(0x222BD0u)) {
        auto targetFn = runtime->lookupFunction(0x222BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293078u; }
        if (ctx->pc != 0x293078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222BD0_0x222bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293078u; }
        if (ctx->pc != 0x293078u) { return; }
    }
    ctx->pc = 0x293078u;
label_293078:
    // 0x293078: 0x8e830094  lw          $v1, 0x94($s4)
    ctx->pc = 0x293078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 148)));
label_29307c:
    // 0x29307c: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x29307cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
label_293080:
    // 0x293080: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x293080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_293084:
    // 0x293084: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x293084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_293088:
    // 0x293088: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_29308c:
    if (ctx->pc == 0x29308Cu) {
        ctx->pc = 0x29308Cu;
            // 0x29308c: 0x2684008c  addiu       $a0, $s4, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 140));
        ctx->pc = 0x293090u;
        goto label_293090;
    }
    ctx->pc = 0x293088u;
    {
        const bool branch_taken_0x293088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x29308Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293088u;
            // 0x29308c: 0x2684008c  addiu       $a0, $s4, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293088) {
            ctx->pc = 0x293098u;
            goto label_293098;
        }
    }
    ctx->pc = 0x293090u;
label_293090:
    // 0x293090: 0xc0a728c  jal         func_29CA30
label_293094:
    if (ctx->pc == 0x293094u) {
        ctx->pc = 0x293094u;
            // 0x293094: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x293098u;
        goto label_293098;
    }
    ctx->pc = 0x293090u;
    SET_GPR_U32(ctx, 31, 0x293098u);
    ctx->pc = 0x293094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293090u;
            // 0x293094: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293098u; }
        if (ctx->pc != 0x293098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293098u; }
        if (ctx->pc != 0x293098u) { return; }
    }
    ctx->pc = 0x293098u;
label_293098:
    // 0x293098: 0x8e830090  lw          $v1, 0x90($s4)
    ctx->pc = 0x293098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
label_29309c:
    // 0x29309c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x29309cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2930a0:
    // 0x2930a0: 0xae820090  sw          $v0, 0x90($s4)
    ctx->pc = 0x2930a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 144), GPR_U32(ctx, 2));
label_2930a4:
    // 0x2930a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2930a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2930a8:
    // 0x2930a8: 0x8e82008c  lw          $v0, 0x8C($s4)
    ctx->pc = 0x2930a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
label_2930ac:
    // 0x2930ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2930acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2930b0:
    // 0x2930b0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2930b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_2930b4:
    // 0x2930b4: 0x0  nop
    ctx->pc = 0x2930b4u;
    // NOP
label_2930b8:
    // 0x2930b8: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x2930b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2930bc:
    // 0x2930bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2930bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2930c0:
    // 0x2930c0: 0x80830018  lb          $v1, 0x18($a0)
    ctx->pc = 0x2930c0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
label_2930c4:
    // 0x2930c4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_2930c8:
    if (ctx->pc == 0x2930C8u) {
        ctx->pc = 0x2930CCu;
        goto label_2930cc;
    }
    ctx->pc = 0x2930C4u;
    {
        const bool branch_taken_0x2930c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2930c4) {
            ctx->pc = 0x2930D8u;
            goto label_2930d8;
        }
    }
    ctx->pc = 0x2930CCu;
label_2930cc:
    // 0x2930cc: 0x80820010  lb          $v0, 0x10($a0)
    ctx->pc = 0x2930ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_2930d0:
    // 0x2930d0: 0x10000003  b           . + 4 + (0x3 << 2)
label_2930d4:
    if (ctx->pc == 0x2930D4u) {
        ctx->pc = 0x2930D4u;
            // 0x2930d4: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->pc = 0x2930D8u;
        goto label_2930d8;
    }
    ctx->pc = 0x2930D0u;
    {
        const bool branch_taken_0x2930d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2930D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2930D0u;
            // 0x2930d4: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2930d0) {
            ctx->pc = 0x2930E0u;
            goto label_2930e0;
        }
    }
    ctx->pc = 0x2930D8u;
label_2930d8:
    // 0x2930d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2930d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2930dc:
    // 0x2930dc: 0x0  nop
    ctx->pc = 0x2930dcu;
    // NOP
label_2930e0:
    // 0x2930e0: 0x1200002f  beqz        $s0, . + 4 + (0x2F << 2)
label_2930e4:
    if (ctx->pc == 0x2930E4u) {
        ctx->pc = 0x2930E8u;
        goto label_2930e8;
    }
    ctx->pc = 0x2930E0u;
    {
        const bool branch_taken_0x2930e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2930e0) {
            ctx->pc = 0x2931A0u;
            goto label_2931a0;
        }
    }
    ctx->pc = 0x2930E8u;
label_2930e8:
    // 0x2930e8: 0x8e83009c  lw          $v1, 0x9C($s4)
    ctx->pc = 0x2930e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
label_2930ec:
    // 0x2930ec: 0x1000000c  b           . + 4 + (0xC << 2)
label_2930f0:
    if (ctx->pc == 0x2930F0u) {
        ctx->pc = 0x2930F0u;
            // 0x2930f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2930F4u;
        goto label_2930f4;
    }
    ctx->pc = 0x2930ECu;
    {
        const bool branch_taken_0x2930ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2930F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2930ECu;
            // 0x2930f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2930ec) {
            ctx->pc = 0x293120u;
            goto label_293120;
        }
    }
    ctx->pc = 0x2930F4u;
label_2930f4:
    // 0x2930f4: 0x0  nop
    ctx->pc = 0x2930f4u;
    // NOP
label_2930f8:
    // 0x2930f8: 0x8e820098  lw          $v0, 0x98($s4)
    ctx->pc = 0x2930f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 152)));
label_2930fc:
    // 0x2930fc: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x2930fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_293100:
    // 0x293100: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x293100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_293104:
    // 0x293104: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x293104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_293108:
    // 0x293108: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
label_29310c:
    if (ctx->pc == 0x29310Cu) {
        ctx->pc = 0x293110u;
        goto label_293110;
    }
    ctx->pc = 0x293108u;
    {
        const bool branch_taken_0x293108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x293108) {
            ctx->pc = 0x293118u;
            goto label_293118;
        }
    }
    ctx->pc = 0x293110u;
label_293110:
    // 0x293110: 0x10000007  b           . + 4 + (0x7 << 2)
label_293114:
    if (ctx->pc == 0x293114u) {
        ctx->pc = 0x293118u;
        goto label_293118;
    }
    ctx->pc = 0x293110u;
    {
        const bool branch_taken_0x293110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x293110) {
            ctx->pc = 0x293130u;
            goto label_293130;
        }
    }
    ctx->pc = 0x293118u;
label_293118:
    // 0x293118: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x293118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_29311c:
    // 0x29311c: 0x0  nop
    ctx->pc = 0x29311cu;
    // NOP
label_293120:
    // 0x293120: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x293120u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_293124:
    // 0x293124: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_293128:
    if (ctx->pc == 0x293128u) {
        ctx->pc = 0x29312Cu;
        goto label_29312c;
    }
    ctx->pc = 0x293124u;
    {
        const bool branch_taken_0x293124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x293124) {
            ctx->pc = 0x2930F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2930f8;
        }
    }
    ctx->pc = 0x29312Cu;
label_29312c:
    // 0x29312c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x29312cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_293130:
    // 0x293130: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x293130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_293134:
    // 0x293134: 0x14a2001a  bne         $a1, $v0, . + 4 + (0x1A << 2)
label_293138:
    if (ctx->pc == 0x293138u) {
        ctx->pc = 0x29313Cu;
        goto label_29313c;
    }
    ctx->pc = 0x293134u;
    {
        const bool branch_taken_0x293134 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x293134) {
            ctx->pc = 0x2931A0u;
            goto label_2931a0;
        }
    }
    ctx->pc = 0x29313Cu;
label_29313c:
    // 0x29313c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x29313cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_293140:
    // 0x293140: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_293144:
    if (ctx->pc == 0x293144u) {
        ctx->pc = 0x293148u;
        goto label_293148;
    }
    ctx->pc = 0x293140u;
    {
        const bool branch_taken_0x293140 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x293140) {
            ctx->pc = 0x293150u;
            goto label_293150;
        }
    }
    ctx->pc = 0x293148u;
label_293148:
    // 0x293148: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x293148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_29314c:
    // 0x29314c: 0x0  nop
    ctx->pc = 0x29314cu;
    // NOP
label_293150:
    // 0x293150: 0xc08acdc  jal         func_22B370
label_293154:
    if (ctx->pc == 0x293154u) {
        ctx->pc = 0x293154u;
            // 0x293154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x293158u;
        goto label_293158;
    }
    ctx->pc = 0x293150u;
    SET_GPR_U32(ctx, 31, 0x293158u);
    ctx->pc = 0x293154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293150u;
            // 0x293154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B370u;
    if (runtime->hasFunction(0x22B370u)) {
        auto targetFn = runtime->lookupFunction(0x22B370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293158u; }
        if (ctx->pc != 0x293158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022B370_0x22b370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293158u; }
        if (ctx->pc != 0x293158u) { return; }
    }
    ctx->pc = 0x293158u;
label_293158:
    // 0x293158: 0x8e8300a0  lw          $v1, 0xA0($s4)
    ctx->pc = 0x293158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 160)));
label_29315c:
    // 0x29315c: 0x8e82009c  lw          $v0, 0x9C($s4)
    ctx->pc = 0x29315cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
label_293160:
    // 0x293160: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x293160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_293164:
    // 0x293164: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x293164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_293168:
    // 0x293168: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_29316c:
    if (ctx->pc == 0x29316Cu) {
        ctx->pc = 0x29316Cu;
            // 0x29316c: 0x26840098  addiu       $a0, $s4, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 152));
        ctx->pc = 0x293170u;
        goto label_293170;
    }
    ctx->pc = 0x293168u;
    {
        const bool branch_taken_0x293168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x29316Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293168u;
            // 0x29316c: 0x26840098  addiu       $a0, $s4, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293168) {
            ctx->pc = 0x293178u;
            goto label_293178;
        }
    }
    ctx->pc = 0x293170u;
label_293170:
    // 0x293170: 0xc0a728c  jal         func_29CA30
label_293174:
    if (ctx->pc == 0x293174u) {
        ctx->pc = 0x293174u;
            // 0x293174: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x293178u;
        goto label_293178;
    }
    ctx->pc = 0x293170u;
    SET_GPR_U32(ctx, 31, 0x293178u);
    ctx->pc = 0x293174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293170u;
            // 0x293174: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293178u; }
        if (ctx->pc != 0x293178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293178u; }
        if (ctx->pc != 0x293178u) { return; }
    }
    ctx->pc = 0x293178u;
label_293178:
    // 0x293178: 0x8e83009c  lw          $v1, 0x9C($s4)
    ctx->pc = 0x293178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
label_29317c:
    // 0x29317c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x29317cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_293180:
    // 0x293180: 0xae82009c  sw          $v0, 0x9C($s4)
    ctx->pc = 0x293180u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 156), GPR_U32(ctx, 2));
label_293184:
    // 0x293184: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x293184u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_293188:
    // 0x293188: 0x8e820098  lw          $v0, 0x98($s4)
    ctx->pc = 0x293188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 152)));
label_29318c:
    // 0x29318c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29318cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_293190:
    // 0x293190: 0x10000003  b           . + 4 + (0x3 << 2)
label_293194:
    if (ctx->pc == 0x293194u) {
        ctx->pc = 0x293194u;
            // 0x293194: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->pc = 0x293198u;
        goto label_293198;
    }
    ctx->pc = 0x293190u;
    {
        const bool branch_taken_0x293190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293190u;
            // 0x293194: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293190) {
            ctx->pc = 0x2931A0u;
            goto label_2931a0;
        }
    }
    ctx->pc = 0x293198u;
label_293198:
    // 0x293198: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x293198u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29319c:
    // 0x29319c: 0x0  nop
    ctx->pc = 0x29319cu;
    // NOP
label_2931a0:
    // 0x2931a0: 0x12a00015  beqz        $s5, . + 4 + (0x15 << 2)
label_2931a4:
    if (ctx->pc == 0x2931A4u) {
        ctx->pc = 0x2931A8u;
        goto label_2931a8;
    }
    ctx->pc = 0x2931A0u;
    {
        const bool branch_taken_0x2931a0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2931a0) {
            ctx->pc = 0x2931F8u;
            goto label_2931f8;
        }
    }
    ctx->pc = 0x2931A8u;
label_2931a8:
    // 0x2931a8: 0xc7a10190  lwc1        $f1, 0x190($sp)
    ctx->pc = 0x2931a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2931ac:
    // 0x2931ac: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x2931acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2931b0:
    // 0x2931b0: 0xc7a60194  lwc1        $f6, 0x194($sp)
    ctx->pc = 0x2931b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2931b4:
    // 0x2931b4: 0xc7a50144  lwc1        $f5, 0x144($sp)
    ctx->pc = 0x2931b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2931b8:
    // 0x2931b8: 0xc7a40198  lwc1        $f4, 0x198($sp)
    ctx->pc = 0x2931b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2931bc:
    // 0x2931bc: 0xc7a30148  lwc1        $f3, 0x148($sp)
    ctx->pc = 0x2931bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2931c0:
    // 0x2931c0: 0xc7a2019c  lwc1        $f2, 0x19C($sp)
    ctx->pc = 0x2931c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2931c4:
    // 0x2931c4: 0x460009c0  add.s       $f7, $f1, $f0
    ctx->pc = 0x2931c4u;
    ctx->f[7] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2931c8:
    // 0x2931c8: 0xc7a1014c  lwc1        $f1, 0x14C($sp)
    ctx->pc = 0x2931c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2931cc:
    // 0x2931cc: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x2931ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2931d0:
    // 0x2931d0: 0x46053140  add.s       $f5, $f6, $f5
    ctx->pc = 0x2931d0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
label_2931d4:
    // 0x2931d4: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x2931d4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
label_2931d8:
    // 0x2931d8: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x2931d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_2931dc:
    // 0x2931dc: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x2931dcu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_2931e0:
    // 0x2931e0: 0xe7a70190  swc1        $f7, 0x190($sp)
    ctx->pc = 0x2931e0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_2931e4:
    // 0x2931e4: 0xe7a50194  swc1        $f5, 0x194($sp)
    ctx->pc = 0x2931e4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
label_2931e8:
    // 0x2931e8: 0xe7a30198  swc1        $f3, 0x198($sp)
    ctx->pc = 0x2931e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_2931ec:
    // 0x2931ec: 0x1000000a  b           . + 4 + (0xA << 2)
label_2931f0:
    if (ctx->pc == 0x2931F0u) {
        ctx->pc = 0x2931F0u;
            // 0x2931f0: 0xe7a1019c  swc1        $f1, 0x19C($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
        ctx->pc = 0x2931F4u;
        goto label_2931f4;
    }
    ctx->pc = 0x2931ECu;
    {
        const bool branch_taken_0x2931ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2931F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2931ECu;
            // 0x2931f0: 0xe7a1019c  swc1        $f1, 0x19C($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2931ec) {
            ctx->pc = 0x293218u;
            goto label_293218;
        }
    }
    ctx->pc = 0x2931F4u;
label_2931f4:
    // 0x2931f4: 0x0  nop
    ctx->pc = 0x2931f4u;
    // NOP
label_2931f8:
    // 0x2931f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2931f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2931fc:
    // 0x2931fc: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x2931fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_293200:
    // 0x293200: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x293200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_293204:
    // 0x293204: 0x27a70170  addiu       $a3, $sp, 0x170
    ctx->pc = 0x293204u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_293208:
    // 0x293208: 0xc0a4cfc  jal         func_2933F0
label_29320c:
    if (ctx->pc == 0x29320Cu) {
        ctx->pc = 0x29320Cu;
            // 0x29320c: 0x27a80190  addiu       $t0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x293210u;
        goto label_293210;
    }
    ctx->pc = 0x293208u;
    SET_GPR_U32(ctx, 31, 0x293210u);
    ctx->pc = 0x29320Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293208u;
            // 0x29320c: 0x27a80190  addiu       $t0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2933F0u;
    if (runtime->hasFunction(0x2933F0u)) {
        auto targetFn = runtime->lookupFunction(0x2933F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293210u; }
        if (ctx->pc != 0x293210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002933F0_0x2933f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293210u; }
        if (ctx->pc != 0x293210u) { return; }
    }
    ctx->pc = 0x293210u;
label_293210:
    // 0x293210: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x293210u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_293214:
    // 0x293214: 0x0  nop
    ctx->pc = 0x293214u;
    // NOP
label_293218:
    // 0x293218: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x293218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_29321c:
    // 0x29321c: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x29321cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_293220:
    // 0x293220: 0xe6800020  swc1        $f0, 0x20($s4)
    ctx->pc = 0x293220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
label_293224:
    // 0x293224: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x293224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_293228:
    // 0x293228: 0xe6800024  swc1        $f0, 0x24($s4)
    ctx->pc = 0x293228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
label_29322c:
    // 0x29322c: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x29322cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_293230:
    // 0x293230: 0xe6800028  swc1        $f0, 0x28($s4)
    ctx->pc = 0x293230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 40), bits); }
label_293234:
    // 0x293234: 0xc7a0014c  lwc1        $f0, 0x14C($sp)
    ctx->pc = 0x293234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_293238:
    // 0x293238: 0xe680002c  swc1        $f0, 0x2C($s4)
    ctx->pc = 0x293238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 44), bits); }
label_29323c:
    // 0x29323c: 0x8fa500dc  lw          $a1, 0xDC($sp)
    ctx->pc = 0x29323cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_293240:
    // 0x293240: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x293240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_293244:
    // 0x293244: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x293244u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_293248:
    // 0x293248: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x293248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_29324c:
    // 0x29324c: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
label_293250:
    if (ctx->pc == 0x293250u) {
        ctx->pc = 0x293254u;
        goto label_293254;
    }
    ctx->pc = 0x29324Cu;
    {
        const bool branch_taken_0x29324c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x29324c) {
            ctx->pc = 0x293268u;
            goto label_293268;
        }
    }
    ctx->pc = 0x293254u;
label_293254:
    // 0x293254: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x293254u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_293258:
    // 0x293258: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x293258u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_29325c:
    // 0x29325c: 0x320f809  jalr        $t9
label_293260:
    if (ctx->pc == 0x293260u) {
        ctx->pc = 0x293264u;
        goto label_293264;
    }
    ctx->pc = 0x29325Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x293264u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x293264u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x293264u; }
            if (ctx->pc != 0x293264u) { return; }
        }
        }
    }
    ctx->pc = 0x293264u;
label_293264:
    // 0x293264: 0x0  nop
    ctx->pc = 0x293264u;
    // NOP
label_293268:
    // 0x293268: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x293268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_29326c:
    // 0x29326c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x29326cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_293270:
    // 0x293270: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x293270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_293274:
    // 0x293274: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_293278:
    if (ctx->pc == 0x293278u) {
        ctx->pc = 0x29327Cu;
        goto label_29327c;
    }
    ctx->pc = 0x293274u;
    {
        const bool branch_taken_0x293274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x293274) {
            ctx->pc = 0x2932A0u;
            goto label_2932a0;
        }
    }
    ctx->pc = 0x29327Cu;
label_29327c:
    // 0x29327c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x29327cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_293280:
    // 0x293280: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x293280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_293284:
    // 0x293284: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x293284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_293288:
    // 0x293288: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x293288u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_29328c:
    // 0x29328c: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x29328cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_293290:
    // 0x293290: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x293290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_293294:
    // 0x293294: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x293294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_293298:
    // 0x293298: 0xc0a7ab4  jal         func_29EAD0
label_29329c:
    if (ctx->pc == 0x29329Cu) {
        ctx->pc = 0x29329Cu;
            // 0x29329c: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x2932A0u;
        goto label_2932a0;
    }
    ctx->pc = 0x293298u;
    SET_GPR_U32(ctx, 31, 0x2932A0u);
    ctx->pc = 0x29329Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293298u;
            // 0x29329c: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2932A0u; }
        if (ctx->pc != 0x2932A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2932A0u; }
        if (ctx->pc != 0x2932A0u) { return; }
    }
    ctx->pc = 0x2932A0u;
label_2932a0:
    // 0x2932a0: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x2932a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_2932a4:
    // 0x2932a4: 0x8fa5013c  lw          $a1, 0x13C($sp)
    ctx->pc = 0x2932a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_2932a8:
    // 0x2932a8: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x2932a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_2932ac:
    // 0x2932ac: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x2932acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_2932b0:
    // 0x2932b0: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x2932b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2932b4:
    // 0x2932b4: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
label_2932b8:
    if (ctx->pc == 0x2932B8u) {
        ctx->pc = 0x2932BCu;
        goto label_2932bc;
    }
    ctx->pc = 0x2932B4u;
    {
        const bool branch_taken_0x2932b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2932b4) {
            ctx->pc = 0x2932D0u;
            goto label_2932d0;
        }
    }
    ctx->pc = 0x2932BCu;
label_2932bc:
    // 0x2932bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2932bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2932c0:
    // 0x2932c0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2932c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2932c4:
    // 0x2932c4: 0x320f809  jalr        $t9
label_2932c8:
    if (ctx->pc == 0x2932C8u) {
        ctx->pc = 0x2932CCu;
        goto label_2932cc;
    }
    ctx->pc = 0x2932C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2932CCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2932CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2932CCu; }
            if (ctx->pc != 0x2932CCu) { return; }
        }
        }
    }
    ctx->pc = 0x2932CCu;
label_2932cc:
    // 0x2932cc: 0x0  nop
    ctx->pc = 0x2932ccu;
    // NOP
label_2932d0:
    // 0x2932d0: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2932d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2932d4:
    // 0x2932d4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2932d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2932d8:
    // 0x2932d8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2932d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2932dc:
    // 0x2932dc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_2932e0:
    if (ctx->pc == 0x2932E0u) {
        ctx->pc = 0x2932E4u;
        goto label_2932e4;
    }
    ctx->pc = 0x2932DCu;
    {
        const bool branch_taken_0x2932dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2932dc) {
            ctx->pc = 0x293308u;
            goto label_293308;
        }
    }
    ctx->pc = 0x2932E4u;
label_2932e4:
    // 0x2932e4: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2932e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2932e8:
    // 0x2932e8: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x2932e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_2932ec:
    // 0x2932ec: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x2932ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_2932f0:
    // 0x2932f0: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2932f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_2932f4:
    // 0x2932f4: 0x8fa50130  lw          $a1, 0x130($sp)
    ctx->pc = 0x2932f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_2932f8:
    // 0x2932f8: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x2932f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_2932fc:
    // 0x2932fc: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x2932fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_293300:
    // 0x293300: 0xc0a7ab4  jal         func_29EAD0
label_293304:
    if (ctx->pc == 0x293304u) {
        ctx->pc = 0x293304u;
            // 0x293304: 0x23180  sll         $a2, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->pc = 0x293308u;
        goto label_293308;
    }
    ctx->pc = 0x293300u;
    SET_GPR_U32(ctx, 31, 0x293308u);
    ctx->pc = 0x293304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293300u;
            // 0x293304: 0x23180  sll         $a2, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293308u; }
        if (ctx->pc != 0x293308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293308u; }
        if (ctx->pc != 0x293308u) { return; }
    }
    ctx->pc = 0x293308u;
label_293308:
    // 0x293308: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x293308u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_29330c:
    // 0x29330c: 0x0  nop
    ctx->pc = 0x29330cu;
    // NOP
label_293310:
    // 0x293310: 0x3c023400  lui         $v0, 0x3400
    ctx->pc = 0x293310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13312 << 16));
label_293314:
    // 0x293314: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x293314u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_293318:
    // 0x293318: 0x0  nop
    ctx->pc = 0x293318u;
    // NOP
label_29331c:
    // 0x29331c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x29331cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_293320:
    // 0x293320: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_293324:
    if (ctx->pc == 0x293324u) {
        ctx->pc = 0x293328u;
        goto label_293328;
    }
    ctx->pc = 0x293320u;
    {
        const bool branch_taken_0x293320 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x293320) {
            ctx->pc = 0x293338u;
            goto label_293338;
        }
    }
    ctx->pc = 0x293328u;
label_293328:
    // 0x293328: 0x8e8200ac  lw          $v0, 0xAC($s4)
    ctx->pc = 0x293328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 172)));
label_29332c:
    // 0x29332c: 0x2e2102a  slt         $v0, $s7, $v0
    ctx->pc = 0x29332cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_293330:
    // 0x293330: 0x1440fc9b  bnez        $v0, . + 4 + (-0x365 << 2)
label_293334:
    if (ctx->pc == 0x293334u) {
        ctx->pc = 0x293338u;
        goto label_293338;
    }
    ctx->pc = 0x293330u;
    {
        const bool branch_taken_0x293330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x293330) {
            ctx->pc = 0x2925A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2925a0;
        }
    }
    ctx->pc = 0x293338u;
label_293338:
    // 0x293338: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x293338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29333c:
    // 0x29333c: 0xe6800010  swc1        $f0, 0x10($s4)
    ctx->pc = 0x29333cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
label_293340:
    // 0x293340: 0xc7a00154  lwc1        $f0, 0x154($sp)
    ctx->pc = 0x293340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_293344:
    // 0x293344: 0xe6800014  swc1        $f0, 0x14($s4)
    ctx->pc = 0x293344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 20), bits); }
label_293348:
    // 0x293348: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x293348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29334c:
    // 0x29334c: 0xe6800018  swc1        $f0, 0x18($s4)
    ctx->pc = 0x29334cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 24), bits); }
label_293350:
    // 0x293350: 0xc7a0015c  lwc1        $f0, 0x15C($sp)
    ctx->pc = 0x293350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_293354:
    // 0x293354: 0xe680001c  swc1        $f0, 0x1C($s4)
    ctx->pc = 0x293354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 28), bits); }
label_293358:
    // 0x293358: 0x8e840030  lw          $a0, 0x30($s4)
    ctx->pc = 0x293358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_29335c:
    // 0x29335c: 0xc7ac0184  lwc1        $f12, 0x184($sp)
    ctx->pc = 0x29335cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_293360:
    // 0x293360: 0xc08af48  jal         func_22BD20
label_293364:
    if (ctx->pc == 0x293364u) {
        ctx->pc = 0x293364u;
            // 0x293364: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x293368u;
        goto label_293368;
    }
    ctx->pc = 0x293360u;
    SET_GPR_U32(ctx, 31, 0x293368u);
    ctx->pc = 0x293364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293360u;
            // 0x293364: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BD20u;
    if (runtime->hasFunction(0x22BD20u)) {
        auto targetFn = runtime->lookupFunction(0x22BD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293368u; }
        if (ctx->pc != 0x293368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BD20_0x22bd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293368u; }
        if (ctx->pc != 0x293368u) { return; }
    }
    ctx->pc = 0x293368u;
label_293368:
    // 0x293368: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x293368u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_29336c:
    // 0x29336c: 0x27a401a8  addiu       $a0, $sp, 0x1A8
    ctx->pc = 0x29336cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
label_293370:
    // 0x293370: 0x24c6ea60  addiu       $a2, $a2, -0x15A0
    ctx->pc = 0x293370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
label_293374:
    // 0x293374: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x293374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_293378:
    // 0x293378: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x293378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_29337c:
    // 0x29337c: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x29337cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_293380:
    // 0x293380: 0xa3a301a8  sb          $v1, 0x1A8($sp)
    ctx->pc = 0x293380u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 424), (uint8_t)GPR_U32(ctx, 3));
label_293384:
    // 0x293384: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x293384u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_293388:
    // 0x293388: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_29338c:
    if (ctx->pc == 0x29338Cu) {
        ctx->pc = 0x293390u;
        goto label_293390;
    }
    ctx->pc = 0x293388u;
    {
        const bool branch_taken_0x293388 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x293388) {
            ctx->pc = 0x2933B8u;
            goto label_2933b8;
        }
    }
    ctx->pc = 0x293390u;
label_293390:
    // 0x293390: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x293390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_293394:
    // 0x293394: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x293394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_293398:
    // 0x293398: 0x2463d7a8  addiu       $v1, $v1, -0x2858
    ctx->pc = 0x293398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956968));
label_29339c:
    // 0x29339c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x29339cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_2933a0:
    // 0x2933a0: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2933a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_2933a4:
    // 0x2933a4: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x2933a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_2933a8:
    // 0x2933a8: 0x4004c803  .word       0x4004C803                   # mfc0        $a0, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2933a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_perf);
label_2933ac:
    // 0x2933ac: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x2933acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_2933b0:
    // 0x2933b0: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x2933b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
label_2933b4:
    // 0x2933b4: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x2933b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_2933b8:
    // 0x2933b8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2933b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2933bc:
    // 0x2933bc: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2933bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2933c0:
    // 0x2933c0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2933c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2933c4:
    // 0x2933c4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2933c4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2933c8:
    // 0x2933c8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2933c8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2933cc:
    // 0x2933cc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2933ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2933d0:
    // 0x2933d0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2933d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2933d4:
    // 0x2933d4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2933d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2933d8:
    // 0x2933d8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2933d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2933dc:
    // 0x2933dc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2933dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2933e0:
    // 0x2933e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2933e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2933e4:
    // 0x2933e4: 0x3e00008  jr          $ra
label_2933e8:
    if (ctx->pc == 0x2933E8u) {
        ctx->pc = 0x2933E8u;
            // 0x2933e8: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x2933ECu;
        goto label_2933ec;
    }
    ctx->pc = 0x2933E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2933E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2933E4u;
            // 0x2933e8: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2933ECu;
label_2933ec:
    // 0x2933ec: 0x0  nop
    ctx->pc = 0x2933ecu;
    // NOP
}
