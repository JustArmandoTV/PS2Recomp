#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004524D0
// Address: 0x4524d0 - 0x452e80
void sub_004524D0_0x4524d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004524D0_0x4524d0");
#endif

    switch (ctx->pc) {
        case 0x4524d0u: goto label_4524d0;
        case 0x4524d4u: goto label_4524d4;
        case 0x4524d8u: goto label_4524d8;
        case 0x4524dcu: goto label_4524dc;
        case 0x4524e0u: goto label_4524e0;
        case 0x4524e4u: goto label_4524e4;
        case 0x4524e8u: goto label_4524e8;
        case 0x4524ecu: goto label_4524ec;
        case 0x4524f0u: goto label_4524f0;
        case 0x4524f4u: goto label_4524f4;
        case 0x4524f8u: goto label_4524f8;
        case 0x4524fcu: goto label_4524fc;
        case 0x452500u: goto label_452500;
        case 0x452504u: goto label_452504;
        case 0x452508u: goto label_452508;
        case 0x45250cu: goto label_45250c;
        case 0x452510u: goto label_452510;
        case 0x452514u: goto label_452514;
        case 0x452518u: goto label_452518;
        case 0x45251cu: goto label_45251c;
        case 0x452520u: goto label_452520;
        case 0x452524u: goto label_452524;
        case 0x452528u: goto label_452528;
        case 0x45252cu: goto label_45252c;
        case 0x452530u: goto label_452530;
        case 0x452534u: goto label_452534;
        case 0x452538u: goto label_452538;
        case 0x45253cu: goto label_45253c;
        case 0x452540u: goto label_452540;
        case 0x452544u: goto label_452544;
        case 0x452548u: goto label_452548;
        case 0x45254cu: goto label_45254c;
        case 0x452550u: goto label_452550;
        case 0x452554u: goto label_452554;
        case 0x452558u: goto label_452558;
        case 0x45255cu: goto label_45255c;
        case 0x452560u: goto label_452560;
        case 0x452564u: goto label_452564;
        case 0x452568u: goto label_452568;
        case 0x45256cu: goto label_45256c;
        case 0x452570u: goto label_452570;
        case 0x452574u: goto label_452574;
        case 0x452578u: goto label_452578;
        case 0x45257cu: goto label_45257c;
        case 0x452580u: goto label_452580;
        case 0x452584u: goto label_452584;
        case 0x452588u: goto label_452588;
        case 0x45258cu: goto label_45258c;
        case 0x452590u: goto label_452590;
        case 0x452594u: goto label_452594;
        case 0x452598u: goto label_452598;
        case 0x45259cu: goto label_45259c;
        case 0x4525a0u: goto label_4525a0;
        case 0x4525a4u: goto label_4525a4;
        case 0x4525a8u: goto label_4525a8;
        case 0x4525acu: goto label_4525ac;
        case 0x4525b0u: goto label_4525b0;
        case 0x4525b4u: goto label_4525b4;
        case 0x4525b8u: goto label_4525b8;
        case 0x4525bcu: goto label_4525bc;
        case 0x4525c0u: goto label_4525c0;
        case 0x4525c4u: goto label_4525c4;
        case 0x4525c8u: goto label_4525c8;
        case 0x4525ccu: goto label_4525cc;
        case 0x4525d0u: goto label_4525d0;
        case 0x4525d4u: goto label_4525d4;
        case 0x4525d8u: goto label_4525d8;
        case 0x4525dcu: goto label_4525dc;
        case 0x4525e0u: goto label_4525e0;
        case 0x4525e4u: goto label_4525e4;
        case 0x4525e8u: goto label_4525e8;
        case 0x4525ecu: goto label_4525ec;
        case 0x4525f0u: goto label_4525f0;
        case 0x4525f4u: goto label_4525f4;
        case 0x4525f8u: goto label_4525f8;
        case 0x4525fcu: goto label_4525fc;
        case 0x452600u: goto label_452600;
        case 0x452604u: goto label_452604;
        case 0x452608u: goto label_452608;
        case 0x45260cu: goto label_45260c;
        case 0x452610u: goto label_452610;
        case 0x452614u: goto label_452614;
        case 0x452618u: goto label_452618;
        case 0x45261cu: goto label_45261c;
        case 0x452620u: goto label_452620;
        case 0x452624u: goto label_452624;
        case 0x452628u: goto label_452628;
        case 0x45262cu: goto label_45262c;
        case 0x452630u: goto label_452630;
        case 0x452634u: goto label_452634;
        case 0x452638u: goto label_452638;
        case 0x45263cu: goto label_45263c;
        case 0x452640u: goto label_452640;
        case 0x452644u: goto label_452644;
        case 0x452648u: goto label_452648;
        case 0x45264cu: goto label_45264c;
        case 0x452650u: goto label_452650;
        case 0x452654u: goto label_452654;
        case 0x452658u: goto label_452658;
        case 0x45265cu: goto label_45265c;
        case 0x452660u: goto label_452660;
        case 0x452664u: goto label_452664;
        case 0x452668u: goto label_452668;
        case 0x45266cu: goto label_45266c;
        case 0x452670u: goto label_452670;
        case 0x452674u: goto label_452674;
        case 0x452678u: goto label_452678;
        case 0x45267cu: goto label_45267c;
        case 0x452680u: goto label_452680;
        case 0x452684u: goto label_452684;
        case 0x452688u: goto label_452688;
        case 0x45268cu: goto label_45268c;
        case 0x452690u: goto label_452690;
        case 0x452694u: goto label_452694;
        case 0x452698u: goto label_452698;
        case 0x45269cu: goto label_45269c;
        case 0x4526a0u: goto label_4526a0;
        case 0x4526a4u: goto label_4526a4;
        case 0x4526a8u: goto label_4526a8;
        case 0x4526acu: goto label_4526ac;
        case 0x4526b0u: goto label_4526b0;
        case 0x4526b4u: goto label_4526b4;
        case 0x4526b8u: goto label_4526b8;
        case 0x4526bcu: goto label_4526bc;
        case 0x4526c0u: goto label_4526c0;
        case 0x4526c4u: goto label_4526c4;
        case 0x4526c8u: goto label_4526c8;
        case 0x4526ccu: goto label_4526cc;
        case 0x4526d0u: goto label_4526d0;
        case 0x4526d4u: goto label_4526d4;
        case 0x4526d8u: goto label_4526d8;
        case 0x4526dcu: goto label_4526dc;
        case 0x4526e0u: goto label_4526e0;
        case 0x4526e4u: goto label_4526e4;
        case 0x4526e8u: goto label_4526e8;
        case 0x4526ecu: goto label_4526ec;
        case 0x4526f0u: goto label_4526f0;
        case 0x4526f4u: goto label_4526f4;
        case 0x4526f8u: goto label_4526f8;
        case 0x4526fcu: goto label_4526fc;
        case 0x452700u: goto label_452700;
        case 0x452704u: goto label_452704;
        case 0x452708u: goto label_452708;
        case 0x45270cu: goto label_45270c;
        case 0x452710u: goto label_452710;
        case 0x452714u: goto label_452714;
        case 0x452718u: goto label_452718;
        case 0x45271cu: goto label_45271c;
        case 0x452720u: goto label_452720;
        case 0x452724u: goto label_452724;
        case 0x452728u: goto label_452728;
        case 0x45272cu: goto label_45272c;
        case 0x452730u: goto label_452730;
        case 0x452734u: goto label_452734;
        case 0x452738u: goto label_452738;
        case 0x45273cu: goto label_45273c;
        case 0x452740u: goto label_452740;
        case 0x452744u: goto label_452744;
        case 0x452748u: goto label_452748;
        case 0x45274cu: goto label_45274c;
        case 0x452750u: goto label_452750;
        case 0x452754u: goto label_452754;
        case 0x452758u: goto label_452758;
        case 0x45275cu: goto label_45275c;
        case 0x452760u: goto label_452760;
        case 0x452764u: goto label_452764;
        case 0x452768u: goto label_452768;
        case 0x45276cu: goto label_45276c;
        case 0x452770u: goto label_452770;
        case 0x452774u: goto label_452774;
        case 0x452778u: goto label_452778;
        case 0x45277cu: goto label_45277c;
        case 0x452780u: goto label_452780;
        case 0x452784u: goto label_452784;
        case 0x452788u: goto label_452788;
        case 0x45278cu: goto label_45278c;
        case 0x452790u: goto label_452790;
        case 0x452794u: goto label_452794;
        case 0x452798u: goto label_452798;
        case 0x45279cu: goto label_45279c;
        case 0x4527a0u: goto label_4527a0;
        case 0x4527a4u: goto label_4527a4;
        case 0x4527a8u: goto label_4527a8;
        case 0x4527acu: goto label_4527ac;
        case 0x4527b0u: goto label_4527b0;
        case 0x4527b4u: goto label_4527b4;
        case 0x4527b8u: goto label_4527b8;
        case 0x4527bcu: goto label_4527bc;
        case 0x4527c0u: goto label_4527c0;
        case 0x4527c4u: goto label_4527c4;
        case 0x4527c8u: goto label_4527c8;
        case 0x4527ccu: goto label_4527cc;
        case 0x4527d0u: goto label_4527d0;
        case 0x4527d4u: goto label_4527d4;
        case 0x4527d8u: goto label_4527d8;
        case 0x4527dcu: goto label_4527dc;
        case 0x4527e0u: goto label_4527e0;
        case 0x4527e4u: goto label_4527e4;
        case 0x4527e8u: goto label_4527e8;
        case 0x4527ecu: goto label_4527ec;
        case 0x4527f0u: goto label_4527f0;
        case 0x4527f4u: goto label_4527f4;
        case 0x4527f8u: goto label_4527f8;
        case 0x4527fcu: goto label_4527fc;
        case 0x452800u: goto label_452800;
        case 0x452804u: goto label_452804;
        case 0x452808u: goto label_452808;
        case 0x45280cu: goto label_45280c;
        case 0x452810u: goto label_452810;
        case 0x452814u: goto label_452814;
        case 0x452818u: goto label_452818;
        case 0x45281cu: goto label_45281c;
        case 0x452820u: goto label_452820;
        case 0x452824u: goto label_452824;
        case 0x452828u: goto label_452828;
        case 0x45282cu: goto label_45282c;
        case 0x452830u: goto label_452830;
        case 0x452834u: goto label_452834;
        case 0x452838u: goto label_452838;
        case 0x45283cu: goto label_45283c;
        case 0x452840u: goto label_452840;
        case 0x452844u: goto label_452844;
        case 0x452848u: goto label_452848;
        case 0x45284cu: goto label_45284c;
        case 0x452850u: goto label_452850;
        case 0x452854u: goto label_452854;
        case 0x452858u: goto label_452858;
        case 0x45285cu: goto label_45285c;
        case 0x452860u: goto label_452860;
        case 0x452864u: goto label_452864;
        case 0x452868u: goto label_452868;
        case 0x45286cu: goto label_45286c;
        case 0x452870u: goto label_452870;
        case 0x452874u: goto label_452874;
        case 0x452878u: goto label_452878;
        case 0x45287cu: goto label_45287c;
        case 0x452880u: goto label_452880;
        case 0x452884u: goto label_452884;
        case 0x452888u: goto label_452888;
        case 0x45288cu: goto label_45288c;
        case 0x452890u: goto label_452890;
        case 0x452894u: goto label_452894;
        case 0x452898u: goto label_452898;
        case 0x45289cu: goto label_45289c;
        case 0x4528a0u: goto label_4528a0;
        case 0x4528a4u: goto label_4528a4;
        case 0x4528a8u: goto label_4528a8;
        case 0x4528acu: goto label_4528ac;
        case 0x4528b0u: goto label_4528b0;
        case 0x4528b4u: goto label_4528b4;
        case 0x4528b8u: goto label_4528b8;
        case 0x4528bcu: goto label_4528bc;
        case 0x4528c0u: goto label_4528c0;
        case 0x4528c4u: goto label_4528c4;
        case 0x4528c8u: goto label_4528c8;
        case 0x4528ccu: goto label_4528cc;
        case 0x4528d0u: goto label_4528d0;
        case 0x4528d4u: goto label_4528d4;
        case 0x4528d8u: goto label_4528d8;
        case 0x4528dcu: goto label_4528dc;
        case 0x4528e0u: goto label_4528e0;
        case 0x4528e4u: goto label_4528e4;
        case 0x4528e8u: goto label_4528e8;
        case 0x4528ecu: goto label_4528ec;
        case 0x4528f0u: goto label_4528f0;
        case 0x4528f4u: goto label_4528f4;
        case 0x4528f8u: goto label_4528f8;
        case 0x4528fcu: goto label_4528fc;
        case 0x452900u: goto label_452900;
        case 0x452904u: goto label_452904;
        case 0x452908u: goto label_452908;
        case 0x45290cu: goto label_45290c;
        case 0x452910u: goto label_452910;
        case 0x452914u: goto label_452914;
        case 0x452918u: goto label_452918;
        case 0x45291cu: goto label_45291c;
        case 0x452920u: goto label_452920;
        case 0x452924u: goto label_452924;
        case 0x452928u: goto label_452928;
        case 0x45292cu: goto label_45292c;
        case 0x452930u: goto label_452930;
        case 0x452934u: goto label_452934;
        case 0x452938u: goto label_452938;
        case 0x45293cu: goto label_45293c;
        case 0x452940u: goto label_452940;
        case 0x452944u: goto label_452944;
        case 0x452948u: goto label_452948;
        case 0x45294cu: goto label_45294c;
        case 0x452950u: goto label_452950;
        case 0x452954u: goto label_452954;
        case 0x452958u: goto label_452958;
        case 0x45295cu: goto label_45295c;
        case 0x452960u: goto label_452960;
        case 0x452964u: goto label_452964;
        case 0x452968u: goto label_452968;
        case 0x45296cu: goto label_45296c;
        case 0x452970u: goto label_452970;
        case 0x452974u: goto label_452974;
        case 0x452978u: goto label_452978;
        case 0x45297cu: goto label_45297c;
        case 0x452980u: goto label_452980;
        case 0x452984u: goto label_452984;
        case 0x452988u: goto label_452988;
        case 0x45298cu: goto label_45298c;
        case 0x452990u: goto label_452990;
        case 0x452994u: goto label_452994;
        case 0x452998u: goto label_452998;
        case 0x45299cu: goto label_45299c;
        case 0x4529a0u: goto label_4529a0;
        case 0x4529a4u: goto label_4529a4;
        case 0x4529a8u: goto label_4529a8;
        case 0x4529acu: goto label_4529ac;
        case 0x4529b0u: goto label_4529b0;
        case 0x4529b4u: goto label_4529b4;
        case 0x4529b8u: goto label_4529b8;
        case 0x4529bcu: goto label_4529bc;
        case 0x4529c0u: goto label_4529c0;
        case 0x4529c4u: goto label_4529c4;
        case 0x4529c8u: goto label_4529c8;
        case 0x4529ccu: goto label_4529cc;
        case 0x4529d0u: goto label_4529d0;
        case 0x4529d4u: goto label_4529d4;
        case 0x4529d8u: goto label_4529d8;
        case 0x4529dcu: goto label_4529dc;
        case 0x4529e0u: goto label_4529e0;
        case 0x4529e4u: goto label_4529e4;
        case 0x4529e8u: goto label_4529e8;
        case 0x4529ecu: goto label_4529ec;
        case 0x4529f0u: goto label_4529f0;
        case 0x4529f4u: goto label_4529f4;
        case 0x4529f8u: goto label_4529f8;
        case 0x4529fcu: goto label_4529fc;
        case 0x452a00u: goto label_452a00;
        case 0x452a04u: goto label_452a04;
        case 0x452a08u: goto label_452a08;
        case 0x452a0cu: goto label_452a0c;
        case 0x452a10u: goto label_452a10;
        case 0x452a14u: goto label_452a14;
        case 0x452a18u: goto label_452a18;
        case 0x452a1cu: goto label_452a1c;
        case 0x452a20u: goto label_452a20;
        case 0x452a24u: goto label_452a24;
        case 0x452a28u: goto label_452a28;
        case 0x452a2cu: goto label_452a2c;
        case 0x452a30u: goto label_452a30;
        case 0x452a34u: goto label_452a34;
        case 0x452a38u: goto label_452a38;
        case 0x452a3cu: goto label_452a3c;
        case 0x452a40u: goto label_452a40;
        case 0x452a44u: goto label_452a44;
        case 0x452a48u: goto label_452a48;
        case 0x452a4cu: goto label_452a4c;
        case 0x452a50u: goto label_452a50;
        case 0x452a54u: goto label_452a54;
        case 0x452a58u: goto label_452a58;
        case 0x452a5cu: goto label_452a5c;
        case 0x452a60u: goto label_452a60;
        case 0x452a64u: goto label_452a64;
        case 0x452a68u: goto label_452a68;
        case 0x452a6cu: goto label_452a6c;
        case 0x452a70u: goto label_452a70;
        case 0x452a74u: goto label_452a74;
        case 0x452a78u: goto label_452a78;
        case 0x452a7cu: goto label_452a7c;
        case 0x452a80u: goto label_452a80;
        case 0x452a84u: goto label_452a84;
        case 0x452a88u: goto label_452a88;
        case 0x452a8cu: goto label_452a8c;
        case 0x452a90u: goto label_452a90;
        case 0x452a94u: goto label_452a94;
        case 0x452a98u: goto label_452a98;
        case 0x452a9cu: goto label_452a9c;
        case 0x452aa0u: goto label_452aa0;
        case 0x452aa4u: goto label_452aa4;
        case 0x452aa8u: goto label_452aa8;
        case 0x452aacu: goto label_452aac;
        case 0x452ab0u: goto label_452ab0;
        case 0x452ab4u: goto label_452ab4;
        case 0x452ab8u: goto label_452ab8;
        case 0x452abcu: goto label_452abc;
        case 0x452ac0u: goto label_452ac0;
        case 0x452ac4u: goto label_452ac4;
        case 0x452ac8u: goto label_452ac8;
        case 0x452accu: goto label_452acc;
        case 0x452ad0u: goto label_452ad0;
        case 0x452ad4u: goto label_452ad4;
        case 0x452ad8u: goto label_452ad8;
        case 0x452adcu: goto label_452adc;
        case 0x452ae0u: goto label_452ae0;
        case 0x452ae4u: goto label_452ae4;
        case 0x452ae8u: goto label_452ae8;
        case 0x452aecu: goto label_452aec;
        case 0x452af0u: goto label_452af0;
        case 0x452af4u: goto label_452af4;
        case 0x452af8u: goto label_452af8;
        case 0x452afcu: goto label_452afc;
        case 0x452b00u: goto label_452b00;
        case 0x452b04u: goto label_452b04;
        case 0x452b08u: goto label_452b08;
        case 0x452b0cu: goto label_452b0c;
        case 0x452b10u: goto label_452b10;
        case 0x452b14u: goto label_452b14;
        case 0x452b18u: goto label_452b18;
        case 0x452b1cu: goto label_452b1c;
        case 0x452b20u: goto label_452b20;
        case 0x452b24u: goto label_452b24;
        case 0x452b28u: goto label_452b28;
        case 0x452b2cu: goto label_452b2c;
        case 0x452b30u: goto label_452b30;
        case 0x452b34u: goto label_452b34;
        case 0x452b38u: goto label_452b38;
        case 0x452b3cu: goto label_452b3c;
        case 0x452b40u: goto label_452b40;
        case 0x452b44u: goto label_452b44;
        case 0x452b48u: goto label_452b48;
        case 0x452b4cu: goto label_452b4c;
        case 0x452b50u: goto label_452b50;
        case 0x452b54u: goto label_452b54;
        case 0x452b58u: goto label_452b58;
        case 0x452b5cu: goto label_452b5c;
        case 0x452b60u: goto label_452b60;
        case 0x452b64u: goto label_452b64;
        case 0x452b68u: goto label_452b68;
        case 0x452b6cu: goto label_452b6c;
        case 0x452b70u: goto label_452b70;
        case 0x452b74u: goto label_452b74;
        case 0x452b78u: goto label_452b78;
        case 0x452b7cu: goto label_452b7c;
        case 0x452b80u: goto label_452b80;
        case 0x452b84u: goto label_452b84;
        case 0x452b88u: goto label_452b88;
        case 0x452b8cu: goto label_452b8c;
        case 0x452b90u: goto label_452b90;
        case 0x452b94u: goto label_452b94;
        case 0x452b98u: goto label_452b98;
        case 0x452b9cu: goto label_452b9c;
        case 0x452ba0u: goto label_452ba0;
        case 0x452ba4u: goto label_452ba4;
        case 0x452ba8u: goto label_452ba8;
        case 0x452bacu: goto label_452bac;
        case 0x452bb0u: goto label_452bb0;
        case 0x452bb4u: goto label_452bb4;
        case 0x452bb8u: goto label_452bb8;
        case 0x452bbcu: goto label_452bbc;
        case 0x452bc0u: goto label_452bc0;
        case 0x452bc4u: goto label_452bc4;
        case 0x452bc8u: goto label_452bc8;
        case 0x452bccu: goto label_452bcc;
        case 0x452bd0u: goto label_452bd0;
        case 0x452bd4u: goto label_452bd4;
        case 0x452bd8u: goto label_452bd8;
        case 0x452bdcu: goto label_452bdc;
        case 0x452be0u: goto label_452be0;
        case 0x452be4u: goto label_452be4;
        case 0x452be8u: goto label_452be8;
        case 0x452becu: goto label_452bec;
        case 0x452bf0u: goto label_452bf0;
        case 0x452bf4u: goto label_452bf4;
        case 0x452bf8u: goto label_452bf8;
        case 0x452bfcu: goto label_452bfc;
        case 0x452c00u: goto label_452c00;
        case 0x452c04u: goto label_452c04;
        case 0x452c08u: goto label_452c08;
        case 0x452c0cu: goto label_452c0c;
        case 0x452c10u: goto label_452c10;
        case 0x452c14u: goto label_452c14;
        case 0x452c18u: goto label_452c18;
        case 0x452c1cu: goto label_452c1c;
        case 0x452c20u: goto label_452c20;
        case 0x452c24u: goto label_452c24;
        case 0x452c28u: goto label_452c28;
        case 0x452c2cu: goto label_452c2c;
        case 0x452c30u: goto label_452c30;
        case 0x452c34u: goto label_452c34;
        case 0x452c38u: goto label_452c38;
        case 0x452c3cu: goto label_452c3c;
        case 0x452c40u: goto label_452c40;
        case 0x452c44u: goto label_452c44;
        case 0x452c48u: goto label_452c48;
        case 0x452c4cu: goto label_452c4c;
        case 0x452c50u: goto label_452c50;
        case 0x452c54u: goto label_452c54;
        case 0x452c58u: goto label_452c58;
        case 0x452c5cu: goto label_452c5c;
        case 0x452c60u: goto label_452c60;
        case 0x452c64u: goto label_452c64;
        case 0x452c68u: goto label_452c68;
        case 0x452c6cu: goto label_452c6c;
        case 0x452c70u: goto label_452c70;
        case 0x452c74u: goto label_452c74;
        case 0x452c78u: goto label_452c78;
        case 0x452c7cu: goto label_452c7c;
        case 0x452c80u: goto label_452c80;
        case 0x452c84u: goto label_452c84;
        case 0x452c88u: goto label_452c88;
        case 0x452c8cu: goto label_452c8c;
        case 0x452c90u: goto label_452c90;
        case 0x452c94u: goto label_452c94;
        case 0x452c98u: goto label_452c98;
        case 0x452c9cu: goto label_452c9c;
        case 0x452ca0u: goto label_452ca0;
        case 0x452ca4u: goto label_452ca4;
        case 0x452ca8u: goto label_452ca8;
        case 0x452cacu: goto label_452cac;
        case 0x452cb0u: goto label_452cb0;
        case 0x452cb4u: goto label_452cb4;
        case 0x452cb8u: goto label_452cb8;
        case 0x452cbcu: goto label_452cbc;
        case 0x452cc0u: goto label_452cc0;
        case 0x452cc4u: goto label_452cc4;
        case 0x452cc8u: goto label_452cc8;
        case 0x452cccu: goto label_452ccc;
        case 0x452cd0u: goto label_452cd0;
        case 0x452cd4u: goto label_452cd4;
        case 0x452cd8u: goto label_452cd8;
        case 0x452cdcu: goto label_452cdc;
        case 0x452ce0u: goto label_452ce0;
        case 0x452ce4u: goto label_452ce4;
        case 0x452ce8u: goto label_452ce8;
        case 0x452cecu: goto label_452cec;
        case 0x452cf0u: goto label_452cf0;
        case 0x452cf4u: goto label_452cf4;
        case 0x452cf8u: goto label_452cf8;
        case 0x452cfcu: goto label_452cfc;
        case 0x452d00u: goto label_452d00;
        case 0x452d04u: goto label_452d04;
        case 0x452d08u: goto label_452d08;
        case 0x452d0cu: goto label_452d0c;
        case 0x452d10u: goto label_452d10;
        case 0x452d14u: goto label_452d14;
        case 0x452d18u: goto label_452d18;
        case 0x452d1cu: goto label_452d1c;
        case 0x452d20u: goto label_452d20;
        case 0x452d24u: goto label_452d24;
        case 0x452d28u: goto label_452d28;
        case 0x452d2cu: goto label_452d2c;
        case 0x452d30u: goto label_452d30;
        case 0x452d34u: goto label_452d34;
        case 0x452d38u: goto label_452d38;
        case 0x452d3cu: goto label_452d3c;
        case 0x452d40u: goto label_452d40;
        case 0x452d44u: goto label_452d44;
        case 0x452d48u: goto label_452d48;
        case 0x452d4cu: goto label_452d4c;
        case 0x452d50u: goto label_452d50;
        case 0x452d54u: goto label_452d54;
        case 0x452d58u: goto label_452d58;
        case 0x452d5cu: goto label_452d5c;
        case 0x452d60u: goto label_452d60;
        case 0x452d64u: goto label_452d64;
        case 0x452d68u: goto label_452d68;
        case 0x452d6cu: goto label_452d6c;
        case 0x452d70u: goto label_452d70;
        case 0x452d74u: goto label_452d74;
        case 0x452d78u: goto label_452d78;
        case 0x452d7cu: goto label_452d7c;
        case 0x452d80u: goto label_452d80;
        case 0x452d84u: goto label_452d84;
        case 0x452d88u: goto label_452d88;
        case 0x452d8cu: goto label_452d8c;
        case 0x452d90u: goto label_452d90;
        case 0x452d94u: goto label_452d94;
        case 0x452d98u: goto label_452d98;
        case 0x452d9cu: goto label_452d9c;
        case 0x452da0u: goto label_452da0;
        case 0x452da4u: goto label_452da4;
        case 0x452da8u: goto label_452da8;
        case 0x452dacu: goto label_452dac;
        case 0x452db0u: goto label_452db0;
        case 0x452db4u: goto label_452db4;
        case 0x452db8u: goto label_452db8;
        case 0x452dbcu: goto label_452dbc;
        case 0x452dc0u: goto label_452dc0;
        case 0x452dc4u: goto label_452dc4;
        case 0x452dc8u: goto label_452dc8;
        case 0x452dccu: goto label_452dcc;
        case 0x452dd0u: goto label_452dd0;
        case 0x452dd4u: goto label_452dd4;
        case 0x452dd8u: goto label_452dd8;
        case 0x452ddcu: goto label_452ddc;
        case 0x452de0u: goto label_452de0;
        case 0x452de4u: goto label_452de4;
        case 0x452de8u: goto label_452de8;
        case 0x452decu: goto label_452dec;
        case 0x452df0u: goto label_452df0;
        case 0x452df4u: goto label_452df4;
        case 0x452df8u: goto label_452df8;
        case 0x452dfcu: goto label_452dfc;
        case 0x452e00u: goto label_452e00;
        case 0x452e04u: goto label_452e04;
        case 0x452e08u: goto label_452e08;
        case 0x452e0cu: goto label_452e0c;
        case 0x452e10u: goto label_452e10;
        case 0x452e14u: goto label_452e14;
        case 0x452e18u: goto label_452e18;
        case 0x452e1cu: goto label_452e1c;
        case 0x452e20u: goto label_452e20;
        case 0x452e24u: goto label_452e24;
        case 0x452e28u: goto label_452e28;
        case 0x452e2cu: goto label_452e2c;
        case 0x452e30u: goto label_452e30;
        case 0x452e34u: goto label_452e34;
        case 0x452e38u: goto label_452e38;
        case 0x452e3cu: goto label_452e3c;
        case 0x452e40u: goto label_452e40;
        case 0x452e44u: goto label_452e44;
        case 0x452e48u: goto label_452e48;
        case 0x452e4cu: goto label_452e4c;
        case 0x452e50u: goto label_452e50;
        case 0x452e54u: goto label_452e54;
        case 0x452e58u: goto label_452e58;
        case 0x452e5cu: goto label_452e5c;
        case 0x452e60u: goto label_452e60;
        case 0x452e64u: goto label_452e64;
        case 0x452e68u: goto label_452e68;
        case 0x452e6cu: goto label_452e6c;
        case 0x452e70u: goto label_452e70;
        case 0x452e74u: goto label_452e74;
        case 0x452e78u: goto label_452e78;
        case 0x452e7cu: goto label_452e7c;
        default: break;
    }

    ctx->pc = 0x4524d0u;

label_4524d0:
    // 0x4524d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4524d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4524d4:
    // 0x4524d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4524d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4524d8:
    // 0x4524d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4524d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4524dc:
    // 0x4524dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4524dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4524e0:
    // 0x4524e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4524e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4524e4:
    // 0x4524e4: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_4524e8:
    if (ctx->pc == 0x4524E8u) {
        ctx->pc = 0x4524E8u;
            // 0x4524e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4524ECu;
        goto label_4524ec;
    }
    ctx->pc = 0x4524E4u;
    {
        const bool branch_taken_0x4524e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4524E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4524E4u;
            // 0x4524e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4524e4) {
            ctx->pc = 0x452514u;
            goto label_452514;
        }
    }
    ctx->pc = 0x4524ECu;
label_4524ec:
    // 0x4524ec: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
label_4524f0:
    if (ctx->pc == 0x4524F0u) {
        ctx->pc = 0x4524F0u;
            // 0x4524f0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4524F4u;
        goto label_4524f4;
    }
    ctx->pc = 0x4524ECu;
    {
        const bool branch_taken_0x4524ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4524ec) {
            ctx->pc = 0x4524F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4524ECu;
            // 0x4524f0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x452500u;
            goto label_452500;
        }
    }
    ctx->pc = 0x4524F4u;
label_4524f4:
    // 0x4524f4: 0xc07507c  jal         func_1D41F0
label_4524f8:
    if (ctx->pc == 0x4524F8u) {
        ctx->pc = 0x4524F8u;
            // 0x4524f8: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x4524FCu;
        goto label_4524fc;
    }
    ctx->pc = 0x4524F4u;
    SET_GPR_U32(ctx, 31, 0x4524FCu);
    ctx->pc = 0x4524F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4524F4u;
            // 0x4524f8: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4524FCu; }
        if (ctx->pc != 0x4524FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4524FCu; }
        if (ctx->pc != 0x4524FCu) { return; }
    }
    ctx->pc = 0x4524FCu;
label_4524fc:
    // 0x4524fc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4524fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_452500:
    // 0x452500: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x452500u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_452504:
    // 0x452504: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_452508:
    if (ctx->pc == 0x452508u) {
        ctx->pc = 0x452508u;
            // 0x452508: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45250Cu;
        goto label_45250c;
    }
    ctx->pc = 0x452504u;
    {
        const bool branch_taken_0x452504 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x452504) {
            ctx->pc = 0x452508u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x452504u;
            // 0x452508: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x452518u;
            goto label_452518;
        }
    }
    ctx->pc = 0x45250Cu;
label_45250c:
    // 0x45250c: 0xc0400a8  jal         func_1002A0
label_452510:
    if (ctx->pc == 0x452510u) {
        ctx->pc = 0x452510u;
            // 0x452510: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x452514u;
        goto label_452514;
    }
    ctx->pc = 0x45250Cu;
    SET_GPR_U32(ctx, 31, 0x452514u);
    ctx->pc = 0x452510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45250Cu;
            // 0x452510: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452514u; }
        if (ctx->pc != 0x452514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452514u; }
        if (ctx->pc != 0x452514u) { return; }
    }
    ctx->pc = 0x452514u;
label_452514:
    // 0x452514: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x452514u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_452518:
    // 0x452518: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x452518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_45251c:
    // 0x45251c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45251cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_452520:
    // 0x452520: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x452520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_452524:
    // 0x452524: 0x3e00008  jr          $ra
label_452528:
    if (ctx->pc == 0x452528u) {
        ctx->pc = 0x452528u;
            // 0x452528: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x45252Cu;
        goto label_45252c;
    }
    ctx->pc = 0x452524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x452528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x452524u;
            // 0x452528: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x45252Cu;
label_45252c:
    // 0x45252c: 0x0  nop
    ctx->pc = 0x45252cu;
    // NOP
label_452530:
    // 0x452530: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x452530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_452534:
    // 0x452534: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x452534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_452538:
    // 0x452538: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x452538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_45253c:
    // 0x45253c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45253cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_452540:
    // 0x452540: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x452540u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_452544:
    // 0x452544: 0x12200032  beqz        $s1, . + 4 + (0x32 << 2)
label_452548:
    if (ctx->pc == 0x452548u) {
        ctx->pc = 0x452548u;
            // 0x452548: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45254Cu;
        goto label_45254c;
    }
    ctx->pc = 0x452544u;
    {
        const bool branch_taken_0x452544 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x452548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x452544u;
            // 0x452548: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x452544) {
            ctx->pc = 0x452610u;
            goto label_452610;
        }
    }
    ctx->pc = 0x45254Cu;
label_45254c:
    // 0x45254c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x45254cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_452550:
    // 0x452550: 0x2442dfa0  addiu       $v0, $v0, -0x2060
    ctx->pc = 0x452550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959008));
label_452554:
    // 0x452554: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x452554u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_452558:
    // 0x452558: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x452558u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_45255c:
    // 0x45255c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x45255cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_452560:
    // 0x452560: 0x320f809  jalr        $t9
label_452564:
    if (ctx->pc == 0x452564u) {
        ctx->pc = 0x452568u;
        goto label_452568;
    }
    ctx->pc = 0x452560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x452568u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x452568u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x452568u; }
            if (ctx->pc != 0x452568u) { return; }
        }
        }
    }
    ctx->pc = 0x452568u;
label_452568:
    // 0x452568: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x452568u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_45256c:
    // 0x45256c: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x45256cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_452570:
    // 0x452570: 0x24a52630  addiu       $a1, $a1, 0x2630
    ctx->pc = 0x452570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9776));
label_452574:
    // 0x452574: 0x24060150  addiu       $a2, $zero, 0x150
    ctx->pc = 0x452574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_452578:
    // 0x452578: 0xc0407e8  jal         func_101FA0
label_45257c:
    if (ctx->pc == 0x45257Cu) {
        ctx->pc = 0x45257Cu;
            // 0x45257c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x452580u;
        goto label_452580;
    }
    ctx->pc = 0x452578u;
    SET_GPR_U32(ctx, 31, 0x452580u);
    ctx->pc = 0x45257Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452578u;
            // 0x45257c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452580u; }
        if (ctx->pc != 0x452580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452580u; }
        if (ctx->pc != 0x452580u) { return; }
    }
    ctx->pc = 0x452580u;
label_452580:
    // 0x452580: 0x26240054  addiu       $a0, $s1, 0x54
    ctx->pc = 0x452580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
label_452584:
    // 0x452584: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_452588:
    if (ctx->pc == 0x452588u) {
        ctx->pc = 0x45258Cu;
        goto label_45258c;
    }
    ctx->pc = 0x452584u;
    {
        const bool branch_taken_0x452584 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x452584) {
            ctx->pc = 0x4525D4u;
            goto label_4525d4;
        }
    }
    ctx->pc = 0x45258Cu;
label_45258c:
    // 0x45258c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x45258cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_452590:
    // 0x452590: 0x2442dfe0  addiu       $v0, $v0, -0x2020
    ctx->pc = 0x452590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959072));
label_452594:
    // 0x452594: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_452598:
    if (ctx->pc == 0x452598u) {
        ctx->pc = 0x452598u;
            // 0x452598: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x45259Cu;
        goto label_45259c;
    }
    ctx->pc = 0x452594u;
    {
        const bool branch_taken_0x452594 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x452598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x452594u;
            // 0x452598: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x452594) {
            ctx->pc = 0x4525D4u;
            goto label_4525d4;
        }
    }
    ctx->pc = 0x45259Cu;
label_45259c:
    // 0x45259c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x45259cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4525a0:
    // 0x4525a0: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x4525a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_4525a4:
    // 0x4525a4: 0xc0d37dc  jal         func_34DF70
label_4525a8:
    if (ctx->pc == 0x4525A8u) {
        ctx->pc = 0x4525A8u;
            // 0x4525a8: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x4525ACu;
        goto label_4525ac;
    }
    ctx->pc = 0x4525A4u;
    SET_GPR_U32(ctx, 31, 0x4525ACu);
    ctx->pc = 0x4525A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4525A4u;
            // 0x4525a8: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4525ACu; }
        if (ctx->pc != 0x4525ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4525ACu; }
        if (ctx->pc != 0x4525ACu) { return; }
    }
    ctx->pc = 0x4525ACu;
label_4525ac:
    // 0x4525ac: 0x26230054  addiu       $v1, $s1, 0x54
    ctx->pc = 0x4525acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
label_4525b0:
    // 0x4525b0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_4525b4:
    if (ctx->pc == 0x4525B4u) {
        ctx->pc = 0x4525B8u;
        goto label_4525b8;
    }
    ctx->pc = 0x4525B0u;
    {
        const bool branch_taken_0x4525b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4525b0) {
            ctx->pc = 0x4525D4u;
            goto label_4525d4;
        }
    }
    ctx->pc = 0x4525B8u;
label_4525b8:
    // 0x4525b8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4525b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4525bc:
    // 0x4525bc: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x4525bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_4525c0:
    // 0x4525c0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_4525c4:
    if (ctx->pc == 0x4525C4u) {
        ctx->pc = 0x4525C4u;
            // 0x4525c4: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x4525C8u;
        goto label_4525c8;
    }
    ctx->pc = 0x4525C0u;
    {
        const bool branch_taken_0x4525c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4525C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4525C0u;
            // 0x4525c4: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4525c0) {
            ctx->pc = 0x4525D4u;
            goto label_4525d4;
        }
    }
    ctx->pc = 0x4525C8u;
label_4525c8:
    // 0x4525c8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4525c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4525cc:
    // 0x4525cc: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x4525ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_4525d0:
    // 0x4525d0: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x4525d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_4525d4:
    // 0x4525d4: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_4525d8:
    if (ctx->pc == 0x4525D8u) {
        ctx->pc = 0x4525D8u;
            // 0x4525d8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4525DCu;
        goto label_4525dc;
    }
    ctx->pc = 0x4525D4u;
    {
        const bool branch_taken_0x4525d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4525d4) {
            ctx->pc = 0x4525D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4525D4u;
            // 0x4525d8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4525FCu;
            goto label_4525fc;
        }
    }
    ctx->pc = 0x4525DCu;
label_4525dc:
    // 0x4525dc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4525dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4525e0:
    // 0x4525e0: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x4525e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_4525e4:
    // 0x4525e4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_4525e8:
    if (ctx->pc == 0x4525E8u) {
        ctx->pc = 0x4525E8u;
            // 0x4525e8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4525ECu;
        goto label_4525ec;
    }
    ctx->pc = 0x4525E4u;
    {
        const bool branch_taken_0x4525e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4525E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4525E4u;
            // 0x4525e8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4525e4) {
            ctx->pc = 0x4525F8u;
            goto label_4525f8;
        }
    }
    ctx->pc = 0x4525ECu;
label_4525ec:
    // 0x4525ec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4525ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4525f0:
    // 0x4525f0: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x4525f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_4525f4:
    // 0x4525f4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4525f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4525f8:
    // 0x4525f8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4525f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4525fc:
    // 0x4525fc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4525fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_452600:
    // 0x452600: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_452604:
    if (ctx->pc == 0x452604u) {
        ctx->pc = 0x452604u;
            // 0x452604: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x452608u;
        goto label_452608;
    }
    ctx->pc = 0x452600u;
    {
        const bool branch_taken_0x452600 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x452600) {
            ctx->pc = 0x452604u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x452600u;
            // 0x452604: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x452614u;
            goto label_452614;
        }
    }
    ctx->pc = 0x452608u;
label_452608:
    // 0x452608: 0xc0400a8  jal         func_1002A0
label_45260c:
    if (ctx->pc == 0x45260Cu) {
        ctx->pc = 0x45260Cu;
            // 0x45260c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x452610u;
        goto label_452610;
    }
    ctx->pc = 0x452608u;
    SET_GPR_U32(ctx, 31, 0x452610u);
    ctx->pc = 0x45260Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452608u;
            // 0x45260c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452610u; }
        if (ctx->pc != 0x452610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452610u; }
        if (ctx->pc != 0x452610u) { return; }
    }
    ctx->pc = 0x452610u;
label_452610:
    // 0x452610: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x452610u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_452614:
    // 0x452614: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x452614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_452618:
    // 0x452618: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x452618u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_45261c:
    // 0x45261c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45261cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_452620:
    // 0x452620: 0x3e00008  jr          $ra
label_452624:
    if (ctx->pc == 0x452624u) {
        ctx->pc = 0x452624u;
            // 0x452624: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x452628u;
        goto label_452628;
    }
    ctx->pc = 0x452620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x452624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x452620u;
            // 0x452624: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x452628u;
label_452628:
    // 0x452628: 0x0  nop
    ctx->pc = 0x452628u;
    // NOP
label_45262c:
    // 0x45262c: 0x0  nop
    ctx->pc = 0x45262cu;
    // NOP
label_452630:
    // 0x452630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x452630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_452634:
    // 0x452634: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x452634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_452638:
    // 0x452638: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x452638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_45263c:
    // 0x45263c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45263cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_452640:
    // 0x452640: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x452640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_452644:
    // 0x452644: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_452648:
    if (ctx->pc == 0x452648u) {
        ctx->pc = 0x452648u;
            // 0x452648: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45264Cu;
        goto label_45264c;
    }
    ctx->pc = 0x452644u;
    {
        const bool branch_taken_0x452644 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x452648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x452644u;
            // 0x452648: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x452644) {
            ctx->pc = 0x45270Cu;
            goto label_45270c;
        }
    }
    ctx->pc = 0x45264Cu;
label_45264c:
    // 0x45264c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x45264cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_452650:
    // 0x452650: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x452650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_452654:
    // 0x452654: 0x2463dea0  addiu       $v1, $v1, -0x2160
    ctx->pc = 0x452654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958752));
label_452658:
    // 0x452658: 0x2442dee0  addiu       $v0, $v0, -0x2120
    ctx->pc = 0x452658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958816));
label_45265c:
    // 0x45265c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x45265cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_452660:
    // 0x452660: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x452660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_452664:
    // 0x452664: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x452664u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_452668:
    // 0x452668: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x452668u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_45266c:
    // 0x45266c: 0x320f809  jalr        $t9
label_452670:
    if (ctx->pc == 0x452670u) {
        ctx->pc = 0x452674u;
        goto label_452674;
    }
    ctx->pc = 0x45266Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x452674u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x452674u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x452674u; }
            if (ctx->pc != 0x452674u) { return; }
        }
        }
    }
    ctx->pc = 0x452674u;
label_452674:
    // 0x452674: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_452678:
    if (ctx->pc == 0x452678u) {
        ctx->pc = 0x452678u;
            // 0x452678: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x45267Cu;
        goto label_45267c;
    }
    ctx->pc = 0x452674u;
    {
        const bool branch_taken_0x452674 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x452674) {
            ctx->pc = 0x452678u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x452674u;
            // 0x452678: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4526F8u;
            goto label_4526f8;
        }
    }
    ctx->pc = 0x45267Cu;
label_45267c:
    // 0x45267c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x45267cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_452680:
    // 0x452680: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x452680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_452684:
    // 0x452684: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x452684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_452688:
    // 0x452688: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x452688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_45268c:
    // 0x45268c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x45268cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_452690:
    // 0x452690: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x452690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_452694:
    // 0x452694: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x452694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_452698:
    // 0x452698: 0xc0aecc4  jal         func_2BB310
label_45269c:
    if (ctx->pc == 0x45269Cu) {
        ctx->pc = 0x45269Cu;
            // 0x45269c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4526A0u;
        goto label_4526a0;
    }
    ctx->pc = 0x452698u;
    SET_GPR_U32(ctx, 31, 0x4526A0u);
    ctx->pc = 0x45269Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452698u;
            // 0x45269c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4526A0u; }
        if (ctx->pc != 0x4526A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4526A0u; }
        if (ctx->pc != 0x4526A0u) { return; }
    }
    ctx->pc = 0x4526A0u;
label_4526a0:
    // 0x4526a0: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x4526a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_4526a4:
    // 0x4526a4: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x4526a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4526a8:
    // 0x4526a8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4526ac:
    if (ctx->pc == 0x4526ACu) {
        ctx->pc = 0x4526ACu;
            // 0x4526ac: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x4526B0u;
        goto label_4526b0;
    }
    ctx->pc = 0x4526A8u;
    {
        const bool branch_taken_0x4526a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4526a8) {
            ctx->pc = 0x4526ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4526A8u;
            // 0x4526ac: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4526C4u;
            goto label_4526c4;
        }
    }
    ctx->pc = 0x4526B0u;
label_4526b0:
    // 0x4526b0: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x4526b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_4526b4:
    // 0x4526b4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4526b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4526b8:
    // 0x4526b8: 0x320f809  jalr        $t9
label_4526bc:
    if (ctx->pc == 0x4526BCu) {
        ctx->pc = 0x4526BCu;
            // 0x4526bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4526C0u;
        goto label_4526c0;
    }
    ctx->pc = 0x4526B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4526C0u);
        ctx->pc = 0x4526BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4526B8u;
            // 0x4526bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4526C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4526C0u; }
            if (ctx->pc != 0x4526C0u) { return; }
        }
        }
    }
    ctx->pc = 0x4526C0u;
label_4526c0:
    // 0x4526c0: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4526c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_4526c4:
    // 0x4526c4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4526c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4526c8:
    // 0x4526c8: 0xc0aec9c  jal         func_2BB270
label_4526cc:
    if (ctx->pc == 0x4526CCu) {
        ctx->pc = 0x4526CCu;
            // 0x4526cc: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x4526D0u;
        goto label_4526d0;
    }
    ctx->pc = 0x4526C8u;
    SET_GPR_U32(ctx, 31, 0x4526D0u);
    ctx->pc = 0x4526CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4526C8u;
            // 0x4526cc: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4526D0u; }
        if (ctx->pc != 0x4526D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4526D0u; }
        if (ctx->pc != 0x4526D0u) { return; }
    }
    ctx->pc = 0x4526D0u;
label_4526d0:
    // 0x4526d0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x4526d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_4526d4:
    // 0x4526d4: 0xc0aec88  jal         func_2BB220
label_4526d8:
    if (ctx->pc == 0x4526D8u) {
        ctx->pc = 0x4526D8u;
            // 0x4526d8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4526DCu;
        goto label_4526dc;
    }
    ctx->pc = 0x4526D4u;
    SET_GPR_U32(ctx, 31, 0x4526DCu);
    ctx->pc = 0x4526D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4526D4u;
            // 0x4526d8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4526DCu; }
        if (ctx->pc != 0x4526DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4526DCu; }
        if (ctx->pc != 0x4526DCu) { return; }
    }
    ctx->pc = 0x4526DCu;
label_4526dc:
    // 0x4526dc: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x4526dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_4526e0:
    // 0x4526e0: 0xc0aec0c  jal         func_2BB030
label_4526e4:
    if (ctx->pc == 0x4526E4u) {
        ctx->pc = 0x4526E4u;
            // 0x4526e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4526E8u;
        goto label_4526e8;
    }
    ctx->pc = 0x4526E0u;
    SET_GPR_U32(ctx, 31, 0x4526E8u);
    ctx->pc = 0x4526E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4526E0u;
            // 0x4526e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4526E8u; }
        if (ctx->pc != 0x4526E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4526E8u; }
        if (ctx->pc != 0x4526E8u) { return; }
    }
    ctx->pc = 0x4526E8u;
label_4526e8:
    // 0x4526e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4526e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4526ec:
    // 0x4526ec: 0xc0aeaa8  jal         func_2BAAA0
label_4526f0:
    if (ctx->pc == 0x4526F0u) {
        ctx->pc = 0x4526F0u;
            // 0x4526f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4526F4u;
        goto label_4526f4;
    }
    ctx->pc = 0x4526ECu;
    SET_GPR_U32(ctx, 31, 0x4526F4u);
    ctx->pc = 0x4526F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4526ECu;
            // 0x4526f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4526F4u; }
        if (ctx->pc != 0x4526F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4526F4u; }
        if (ctx->pc != 0x4526F4u) { return; }
    }
    ctx->pc = 0x4526F4u;
label_4526f4:
    // 0x4526f4: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4526f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4526f8:
    // 0x4526f8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4526f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4526fc:
    // 0x4526fc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_452700:
    if (ctx->pc == 0x452700u) {
        ctx->pc = 0x452700u;
            // 0x452700: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x452704u;
        goto label_452704;
    }
    ctx->pc = 0x4526FCu;
    {
        const bool branch_taken_0x4526fc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4526fc) {
            ctx->pc = 0x452700u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4526FCu;
            // 0x452700: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x452710u;
            goto label_452710;
        }
    }
    ctx->pc = 0x452704u;
label_452704:
    // 0x452704: 0xc0400a8  jal         func_1002A0
label_452708:
    if (ctx->pc == 0x452708u) {
        ctx->pc = 0x452708u;
            // 0x452708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45270Cu;
        goto label_45270c;
    }
    ctx->pc = 0x452704u;
    SET_GPR_U32(ctx, 31, 0x45270Cu);
    ctx->pc = 0x452708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452704u;
            // 0x452708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45270Cu; }
        if (ctx->pc != 0x45270Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45270Cu; }
        if (ctx->pc != 0x45270Cu) { return; }
    }
    ctx->pc = 0x45270Cu;
label_45270c:
    // 0x45270c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x45270cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_452710:
    // 0x452710: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x452710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_452714:
    // 0x452714: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x452714u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_452718:
    // 0x452718: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x452718u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_45271c:
    // 0x45271c: 0x3e00008  jr          $ra
label_452720:
    if (ctx->pc == 0x452720u) {
        ctx->pc = 0x452720u;
            // 0x452720: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x452724u;
        goto label_452724;
    }
    ctx->pc = 0x45271Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x452720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45271Cu;
            // 0x452720: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x452724u;
label_452724:
    // 0x452724: 0x0  nop
    ctx->pc = 0x452724u;
    // NOP
label_452728:
    // 0x452728: 0x0  nop
    ctx->pc = 0x452728u;
    // NOP
label_45272c:
    // 0x45272c: 0x0  nop
    ctx->pc = 0x45272cu;
    // NOP
label_452730:
    // 0x452730: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x452730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_452734:
    // 0x452734: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x452734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_452738:
    // 0x452738: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x452738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_45273c:
    // 0x45273c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x45273cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_452740:
    // 0x452740: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x452740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_452744:
    // 0x452744: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x452744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_452748:
    // 0x452748: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x452748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_45274c:
    // 0x45274c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x45274cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_452750:
    // 0x452750: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x452750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_452754:
    // 0x452754: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x452754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_452758:
    // 0x452758: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x452758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_45275c:
    // 0x45275c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45275cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_452760:
    // 0x452760: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x452760u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_452764:
    // 0x452764: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_452768:
    if (ctx->pc == 0x452768u) {
        ctx->pc = 0x452768u;
            // 0x452768: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45276Cu;
        goto label_45276c;
    }
    ctx->pc = 0x452764u;
    {
        const bool branch_taken_0x452764 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x452768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x452764u;
            // 0x452768: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x452764) {
            ctx->pc = 0x4527B4u;
            goto label_4527b4;
        }
    }
    ctx->pc = 0x45276Cu;
label_45276c:
    // 0x45276c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x45276cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_452770:
    // 0x452770: 0x10a30033  beq         $a1, $v1, . + 4 + (0x33 << 2)
label_452774:
    if (ctx->pc == 0x452774u) {
        ctx->pc = 0x452778u;
        goto label_452778;
    }
    ctx->pc = 0x452770u;
    {
        const bool branch_taken_0x452770 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x452770) {
            ctx->pc = 0x452840u;
            goto label_452840;
        }
    }
    ctx->pc = 0x452778u;
label_452778:
    // 0x452778: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x452778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_45277c:
    // 0x45277c: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_452780:
    if (ctx->pc == 0x452780u) {
        ctx->pc = 0x452784u;
        goto label_452784;
    }
    ctx->pc = 0x45277Cu;
    {
        const bool branch_taken_0x45277c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x45277c) {
            ctx->pc = 0x45278Cu;
            goto label_45278c;
        }
    }
    ctx->pc = 0x452784u;
label_452784:
    // 0x452784: 0x1000002e  b           . + 4 + (0x2E << 2)
label_452788:
    if (ctx->pc == 0x452788u) {
        ctx->pc = 0x45278Cu;
        goto label_45278c;
    }
    ctx->pc = 0x452784u;
    {
        const bool branch_taken_0x452784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x452784) {
            ctx->pc = 0x452840u;
            goto label_452840;
        }
    }
    ctx->pc = 0x45278Cu;
label_45278c:
    // 0x45278c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x45278cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_452790:
    // 0x452790: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x452790u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_452794:
    // 0x452794: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x452794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_452798:
    // 0x452798: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x452798u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_45279c:
    // 0x45279c: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x45279cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_4527a0:
    // 0x4527a0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4527a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4527a4:
    // 0x4527a4: 0x320f809  jalr        $t9
label_4527a8:
    if (ctx->pc == 0x4527A8u) {
        ctx->pc = 0x4527A8u;
            // 0x4527a8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x4527ACu;
        goto label_4527ac;
    }
    ctx->pc = 0x4527A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4527ACu);
        ctx->pc = 0x4527A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4527A4u;
            // 0x4527a8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4527ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4527ACu; }
            if (ctx->pc != 0x4527ACu) { return; }
        }
        }
    }
    ctx->pc = 0x4527ACu;
label_4527ac:
    // 0x4527ac: 0x10000024  b           . + 4 + (0x24 << 2)
label_4527b0:
    if (ctx->pc == 0x4527B0u) {
        ctx->pc = 0x4527B4u;
        goto label_4527b4;
    }
    ctx->pc = 0x4527ACu;
    {
        const bool branch_taken_0x4527ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4527ac) {
            ctx->pc = 0x452840u;
            goto label_452840;
        }
    }
    ctx->pc = 0x4527B4u;
label_4527b4:
    // 0x4527b4: 0x8e530070  lw          $s3, 0x70($s2)
    ctx->pc = 0x4527b4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_4527b8:
    // 0x4527b8: 0x12600021  beqz        $s3, . + 4 + (0x21 << 2)
label_4527bc:
    if (ctx->pc == 0x4527BCu) {
        ctx->pc = 0x4527C0u;
        goto label_4527c0;
    }
    ctx->pc = 0x4527B8u;
    {
        const bool branch_taken_0x4527b8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x4527b8) {
            ctx->pc = 0x452840u;
            goto label_452840;
        }
    }
    ctx->pc = 0x4527C0u;
label_4527c0:
    // 0x4527c0: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4527c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4527c4:
    // 0x4527c4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4527c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4527c8:
    // 0x4527c8: 0x8c64d130  lw          $a0, -0x2ED0($v1)
    ctx->pc = 0x4527c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_4527cc:
    // 0x4527cc: 0x265e0084  addiu       $fp, $s2, 0x84
    ctx->pc = 0x4527ccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 132));
label_4527d0:
    // 0x4527d0: 0x8c50e378  lw          $s0, -0x1C88($v0)
    ctx->pc = 0x4527d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_4527d4:
    // 0x4527d4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4527d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4527d8:
    // 0x4527d8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4527d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4527dc:
    // 0x4527dc: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4527dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4527e0:
    // 0x4527e0: 0x8c910130  lw          $s1, 0x130($a0)
    ctx->pc = 0x4527e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_4527e4:
    // 0x4527e4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4527e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4527e8:
    // 0x4527e8: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x4527e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_4527ec:
    // 0x4527ec: 0x8c57e370  lw          $s7, -0x1C90($v0)
    ctx->pc = 0x4527ecu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_4527f0:
    // 0x4527f0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x4527f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4527f4:
    // 0x4527f4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x4527f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_4527f8:
    // 0x4527f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4527f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4527fc:
    // 0x4527fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4527fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_452800:
    // 0x452800: 0x24560010  addiu       $s6, $v0, 0x10
    ctx->pc = 0x452800u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_452804:
    // 0x452804: 0x8e420074  lw          $v0, 0x74($s2)
    ctx->pc = 0x452804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
label_452808:
    // 0x452808: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x452808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_45280c:
    // 0x45280c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x45280cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_452810:
    // 0x452810: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x452810u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_452814:
    // 0x452814: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x452814u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_452818:
    // 0x452818: 0x27a900a0  addiu       $t1, $sp, 0xA0
    ctx->pc = 0x452818u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_45281c:
    // 0x45281c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x45281cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_452820:
    // 0x452820: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x452820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_452824:
    // 0x452824: 0xc114dbc  jal         func_4536F0
label_452828:
    if (ctx->pc == 0x452828u) {
        ctx->pc = 0x452828u;
            // 0x452828: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45282Cu;
        goto label_45282c;
    }
    ctx->pc = 0x452824u;
    SET_GPR_U32(ctx, 31, 0x45282Cu);
    ctx->pc = 0x452828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452824u;
            // 0x452828: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4536F0u;
    if (runtime->hasFunction(0x4536F0u)) {
        auto targetFn = runtime->lookupFunction(0x4536F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45282Cu; }
        if (ctx->pc != 0x45282Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004536F0_0x4536f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45282Cu; }
        if (ctx->pc != 0x45282Cu) { return; }
    }
    ctx->pc = 0x45282Cu;
label_45282c:
    // 0x45282c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x45282cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_452830:
    // 0x452830: 0x2b3182b  sltu        $v1, $s5, $s3
    ctx->pc = 0x452830u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_452834:
    // 0x452834: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_452838:
    if (ctx->pc == 0x452838u) {
        ctx->pc = 0x452838u;
            // 0x452838: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x45283Cu;
        goto label_45283c;
    }
    ctx->pc = 0x452834u;
    {
        const bool branch_taken_0x452834 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x452838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x452834u;
            // 0x452838: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x452834) {
            ctx->pc = 0x452804u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_452804;
        }
    }
    ctx->pc = 0x45283Cu;
label_45283c:
    // 0x45283c: 0x0  nop
    ctx->pc = 0x45283cu;
    // NOP
label_452840:
    // 0x452840: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x452840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_452844:
    // 0x452844: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x452844u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_452848:
    // 0x452848: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x452848u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_45284c:
    // 0x45284c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x45284cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_452850:
    // 0x452850: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x452850u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_452854:
    // 0x452854: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x452854u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_452858:
    // 0x452858: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x452858u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_45285c:
    // 0x45285c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x45285cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_452860:
    // 0x452860: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x452860u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_452864:
    // 0x452864: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x452864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_452868:
    // 0x452868: 0x3e00008  jr          $ra
label_45286c:
    if (ctx->pc == 0x45286Cu) {
        ctx->pc = 0x45286Cu;
            // 0x45286c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x452870u;
        goto label_452870;
    }
    ctx->pc = 0x452868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45286Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x452868u;
            // 0x45286c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x452870u;
label_452870:
    // 0x452870: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x452870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_452874:
    // 0x452874: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x452874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_452878:
    // 0x452878: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x452878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_45287c:
    // 0x45287c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x45287cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_452880:
    // 0x452880: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x452880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_452884:
    // 0x452884: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x452884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_452888:
    // 0x452888: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x452888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_45288c:
    // 0x45288c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x45288cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_452890:
    // 0x452890: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x452890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_452894:
    // 0x452894: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x452894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_452898:
    // 0x452898: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x452898u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_45289c:
    // 0x45289c: 0x10a30039  beq         $a1, $v1, . + 4 + (0x39 << 2)
label_4528a0:
    if (ctx->pc == 0x4528A0u) {
        ctx->pc = 0x4528A0u;
            // 0x4528a0: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4528A4u;
        goto label_4528a4;
    }
    ctx->pc = 0x45289Cu;
    {
        const bool branch_taken_0x45289c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4528A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45289Cu;
            // 0x4528a0: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45289c) {
            ctx->pc = 0x452984u;
            goto label_452984;
        }
    }
    ctx->pc = 0x4528A4u;
label_4528a4:
    // 0x4528a4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4528a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4528a8:
    // 0x4528a8: 0x50a30033  beql        $a1, $v1, . + 4 + (0x33 << 2)
label_4528ac:
    if (ctx->pc == 0x4528ACu) {
        ctx->pc = 0x4528ACu;
            // 0x4528ac: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4528B0u;
        goto label_4528b0;
    }
    ctx->pc = 0x4528A8u;
    {
        const bool branch_taken_0x4528a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4528a8) {
            ctx->pc = 0x4528ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4528A8u;
            // 0x4528ac: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x452978u;
            goto label_452978;
        }
    }
    ctx->pc = 0x4528B0u;
label_4528b0:
    // 0x4528b0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4528b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4528b4:
    // 0x4528b4: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_4528b8:
    if (ctx->pc == 0x4528B8u) {
        ctx->pc = 0x4528BCu;
        goto label_4528bc;
    }
    ctx->pc = 0x4528B4u;
    {
        const bool branch_taken_0x4528b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4528b4) {
            ctx->pc = 0x4528C4u;
            goto label_4528c4;
        }
    }
    ctx->pc = 0x4528BCu;
label_4528bc:
    // 0x4528bc: 0x10000056  b           . + 4 + (0x56 << 2)
label_4528c0:
    if (ctx->pc == 0x4528C0u) {
        ctx->pc = 0x4528C4u;
        goto label_4528c4;
    }
    ctx->pc = 0x4528BCu;
    {
        const bool branch_taken_0x4528bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4528bc) {
            ctx->pc = 0x452A18u;
            goto label_452a18;
        }
    }
    ctx->pc = 0x4528C4u;
label_4528c4:
    // 0x4528c4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4528c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4528c8:
    // 0x4528c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4528c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4528cc:
    // 0x4528cc: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x4528ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4528d0:
    // 0x4528d0: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x4528d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_4528d4:
    // 0x4528d4: 0x10640050  beq         $v1, $a0, . + 4 + (0x50 << 2)
label_4528d8:
    if (ctx->pc == 0x4528D8u) {
        ctx->pc = 0x4528DCu;
        goto label_4528dc;
    }
    ctx->pc = 0x4528D4u;
    {
        const bool branch_taken_0x4528d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x4528d4) {
            ctx->pc = 0x452A18u;
            goto label_452a18;
        }
    }
    ctx->pc = 0x4528DCu;
label_4528dc:
    // 0x4528dc: 0x8eb60070  lw          $s6, 0x70($s5)
    ctx->pc = 0x4528dcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_4528e0:
    // 0x4528e0: 0x12c0001f  beqz        $s6, . + 4 + (0x1F << 2)
label_4528e4:
    if (ctx->pc == 0x4528E4u) {
        ctx->pc = 0x4528E4u;
            // 0x4528e4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4528E8u;
        goto label_4528e8;
    }
    ctx->pc = 0x4528E0u;
    {
        const bool branch_taken_0x4528e0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x4528E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4528E0u;
            // 0x4528e4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4528e0) {
            ctx->pc = 0x452960u;
            goto label_452960;
        }
    }
    ctx->pc = 0x4528E8u;
label_4528e8:
    // 0x4528e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4528e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4528ec:
    // 0x4528ec: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x4528ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_4528f0:
    // 0x4528f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4528f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4528f4:
    // 0x4528f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4528f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4528f8:
    // 0x4528f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4528f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4528fc:
    // 0x4528fc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4528fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_452900:
    // 0x452900: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x452900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_452904:
    // 0x452904: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x452904u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_452908:
    // 0x452908: 0xc04ca18  jal         func_132860
label_45290c:
    if (ctx->pc == 0x45290Cu) {
        ctx->pc = 0x45290Cu;
            // 0x45290c: 0x26440140  addiu       $a0, $s2, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 320));
        ctx->pc = 0x452910u;
        goto label_452910;
    }
    ctx->pc = 0x452908u;
    SET_GPR_U32(ctx, 31, 0x452910u);
    ctx->pc = 0x45290Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452908u;
            // 0x45290c: 0x26440140  addiu       $a0, $s2, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452910u; }
        if (ctx->pc != 0x452910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452910u; }
        if (ctx->pc != 0x452910u) { return; }
    }
    ctx->pc = 0x452910u;
label_452910:
    // 0x452910: 0x26440290  addiu       $a0, $s2, 0x290
    ctx->pc = 0x452910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 656));
label_452914:
    // 0x452914: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x452914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_452918:
    // 0x452918: 0x24067fff  addiu       $a2, $zero, 0x7FFF
    ctx->pc = 0x452918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
label_45291c:
    // 0x45291c: 0xc04ca18  jal         func_132860
label_452920:
    if (ctx->pc == 0x452920u) {
        ctx->pc = 0x452920u;
            // 0x452920: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x452924u;
        goto label_452924;
    }
    ctx->pc = 0x45291Cu;
    SET_GPR_U32(ctx, 31, 0x452924u);
    ctx->pc = 0x452920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45291Cu;
            // 0x452920: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452924u; }
        if (ctx->pc != 0x452924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452924u; }
        if (ctx->pc != 0x452924u) { return; }
    }
    ctx->pc = 0x452924u;
label_452924:
    // 0x452924: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x452924u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_452928:
    // 0x452928: 0xae320130  sw          $s2, 0x130($s1)
    ctx->pc = 0x452928u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 18));
label_45292c:
    // 0x45292c: 0x8e390060  lw          $t9, 0x60($s1)
    ctx->pc = 0x45292cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_452930:
    // 0x452930: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x452930u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_452934:
    // 0x452934: 0x320f809  jalr        $t9
label_452938:
    if (ctx->pc == 0x452938u) {
        ctx->pc = 0x452938u;
            // 0x452938: 0x26240060  addiu       $a0, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->pc = 0x45293Cu;
        goto label_45293c;
    }
    ctx->pc = 0x452934u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x45293Cu);
        ctx->pc = 0x452938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x452934u;
            // 0x452938: 0x26240060  addiu       $a0, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x45293Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x45293Cu; }
            if (ctx->pc != 0x45293Cu) { return; }
        }
        }
    }
    ctx->pc = 0x45293Cu;
label_45293c:
    // 0x45293c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x45293cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_452940:
    // 0x452940: 0x2e620002  sltiu       $v0, $s3, 0x2
    ctx->pc = 0x452940u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_452944:
    // 0x452944: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_452948:
    if (ctx->pc == 0x452948u) {
        ctx->pc = 0x452948u;
            // 0x452948: 0x26310150  addiu       $s1, $s1, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
        ctx->pc = 0x45294Cu;
        goto label_45294c;
    }
    ctx->pc = 0x452944u;
    {
        const bool branch_taken_0x452944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x452948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x452944u;
            // 0x452948: 0x26310150  addiu       $s1, $s1, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x452944) {
            ctx->pc = 0x452928u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_452928;
        }
    }
    ctx->pc = 0x45294Cu;
label_45294c:
    // 0x45294c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x45294cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_452950:
    // 0x452950: 0x296102b  sltu        $v0, $s4, $s6
    ctx->pc = 0x452950u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_452954:
    // 0x452954: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_452958:
    if (ctx->pc == 0x452958u) {
        ctx->pc = 0x452958u;
            // 0x452958: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x45295Cu;
        goto label_45295c;
    }
    ctx->pc = 0x452954u;
    {
        const bool branch_taken_0x452954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x452958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x452954u;
            // 0x452958: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x452954) {
            ctx->pc = 0x4528ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4528ec;
        }
    }
    ctx->pc = 0x45295Cu;
label_45295c:
    // 0x45295c: 0x0  nop
    ctx->pc = 0x45295cu;
    // NOP
label_452960:
    // 0x452960: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x452960u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_452964:
    // 0x452964: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x452964u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_452968:
    // 0x452968: 0x320f809  jalr        $t9
label_45296c:
    if (ctx->pc == 0x45296Cu) {
        ctx->pc = 0x45296Cu;
            // 0x45296c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x452970u;
        goto label_452970;
    }
    ctx->pc = 0x452968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x452970u);
        ctx->pc = 0x45296Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x452968u;
            // 0x45296c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x452970u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x452970u; }
            if (ctx->pc != 0x452970u) { return; }
        }
        }
    }
    ctx->pc = 0x452970u;
label_452970:
    // 0x452970: 0x10000029  b           . + 4 + (0x29 << 2)
label_452974:
    if (ctx->pc == 0x452974u) {
        ctx->pc = 0x452978u;
        goto label_452978;
    }
    ctx->pc = 0x452970u;
    {
        const bool branch_taken_0x452970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x452970) {
            ctx->pc = 0x452A18u;
            goto label_452a18;
        }
    }
    ctx->pc = 0x452978u;
label_452978:
    // 0x452978: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x452978u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_45297c:
    // 0x45297c: 0x320f809  jalr        $t9
label_452980:
    if (ctx->pc == 0x452980u) {
        ctx->pc = 0x452984u;
        goto label_452984;
    }
    ctx->pc = 0x45297Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x452984u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x452984u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x452984u; }
            if (ctx->pc != 0x452984u) { return; }
        }
        }
    }
    ctx->pc = 0x452984u;
label_452984:
    // 0x452984: 0x8eb20070  lw          $s2, 0x70($s5)
    ctx->pc = 0x452984u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_452988:
    // 0x452988: 0x12400023  beqz        $s2, . + 4 + (0x23 << 2)
label_45298c:
    if (ctx->pc == 0x45298Cu) {
        ctx->pc = 0x452990u;
        goto label_452990;
    }
    ctx->pc = 0x452988u;
    {
        const bool branch_taken_0x452988 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x452988) {
            ctx->pc = 0x452A18u;
            goto label_452a18;
        }
    }
    ctx->pc = 0x452990u;
label_452990:
    // 0x452990: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x452990u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_452994:
    // 0x452994: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x452994u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_452998:
    // 0x452998: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x452998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_45299c:
    // 0x45299c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x45299cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_4529a0:
    // 0x4529a0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x4529a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4529a4:
    // 0x4529a4: 0x26300060  addiu       $s0, $s1, 0x60
    ctx->pc = 0x4529a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_4529a8:
    // 0x4529a8: 0xc0e3658  jal         func_38D960
label_4529ac:
    if (ctx->pc == 0x4529ACu) {
        ctx->pc = 0x4529ACu;
            // 0x4529ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4529B0u;
        goto label_4529b0;
    }
    ctx->pc = 0x4529A8u;
    SET_GPR_U32(ctx, 31, 0x4529B0u);
    ctx->pc = 0x4529ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4529A8u;
            // 0x4529ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4529B0u; }
        if (ctx->pc != 0x4529B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4529B0u; }
        if (ctx->pc != 0x4529B0u) { return; }
    }
    ctx->pc = 0x4529B0u;
label_4529b0:
    // 0x4529b0: 0xc0e3658  jal         func_38D960
label_4529b4:
    if (ctx->pc == 0x4529B4u) {
        ctx->pc = 0x4529B4u;
            // 0x4529b4: 0x26040150  addiu       $a0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->pc = 0x4529B8u;
        goto label_4529b8;
    }
    ctx->pc = 0x4529B0u;
    SET_GPR_U32(ctx, 31, 0x4529B8u);
    ctx->pc = 0x4529B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4529B0u;
            // 0x4529b4: 0x26040150  addiu       $a0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4529B8u; }
        if (ctx->pc != 0x4529B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4529B8u; }
        if (ctx->pc != 0x4529B8u) { return; }
    }
    ctx->pc = 0x4529B8u;
label_4529b8:
    // 0x4529b8: 0x92240308  lbu         $a0, 0x308($s1)
    ctx->pc = 0x4529b8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 776)));
label_4529bc:
    // 0x4529bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4529bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4529c0:
    // 0x4529c0: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
label_4529c4:
    if (ctx->pc == 0x4529C4u) {
        ctx->pc = 0x4529C8u;
        goto label_4529c8;
    }
    ctx->pc = 0x4529C0u;
    {
        const bool branch_taken_0x4529c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4529c0) {
            ctx->pc = 0x452A08u;
            goto label_452a08;
        }
    }
    ctx->pc = 0x4529C8u;
label_4529c8:
    // 0x4529c8: 0x92230309  lbu         $v1, 0x309($s1)
    ctx->pc = 0x4529c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 777)));
label_4529cc:
    // 0x4529cc: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_4529d0:
    if (ctx->pc == 0x4529D0u) {
        ctx->pc = 0x4529D4u;
        goto label_4529d4;
    }
    ctx->pc = 0x4529CCu;
    {
        const bool branch_taken_0x4529cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4529cc) {
            ctx->pc = 0x452A08u;
            goto label_452a08;
        }
    }
    ctx->pc = 0x4529D4u;
label_4529d4:
    // 0x4529d4: 0xc6010280  lwc1        $f1, 0x280($s0)
    ctx->pc = 0x4529d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4529d8:
    // 0x4529d8: 0x3c0342ca  lui         $v1, 0x42CA
    ctx->pc = 0x4529d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17098 << 16));
label_4529dc:
    // 0x4529dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4529dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4529e0:
    // 0x4529e0: 0x0  nop
    ctx->pc = 0x4529e0u;
    // NOP
label_4529e4:
    // 0x4529e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4529e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4529e8:
    // 0x4529e8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_4529ec:
    if (ctx->pc == 0x4529ECu) {
        ctx->pc = 0x4529F0u;
        goto label_4529f0;
    }
    ctx->pc = 0x4529E8u;
    {
        const bool branch_taken_0x4529e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4529e8) {
            ctx->pc = 0x452A08u;
            goto label_452a08;
        }
    }
    ctx->pc = 0x4529F0u;
label_4529f0:
    // 0x4529f0: 0x8e240304  lw          $a0, 0x304($s1)
    ctx->pc = 0x4529f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_4529f4:
    // 0x4529f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4529f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4529f8:
    // 0x4529f8: 0xc122d2c  jal         func_48B4B0
label_4529fc:
    if (ctx->pc == 0x4529FCu) {
        ctx->pc = 0x4529FCu;
            // 0x4529fc: 0x26260010  addiu       $a2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x452A00u;
        goto label_452a00;
    }
    ctx->pc = 0x4529F8u;
    SET_GPR_U32(ctx, 31, 0x452A00u);
    ctx->pc = 0x4529FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4529F8u;
            // 0x4529fc: 0x26260010  addiu       $a2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452A00u; }
        if (ctx->pc != 0x452A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452A00u; }
        if (ctx->pc != 0x452A00u) { return; }
    }
    ctx->pc = 0x452A00u;
label_452a00:
    // 0x452a00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x452a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_452a04:
    // 0x452a04: 0xa2230309  sb          $v1, 0x309($s1)
    ctx->pc = 0x452a04u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 777), (uint8_t)GPR_U32(ctx, 3));
label_452a08:
    // 0x452a08: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x452a08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_452a0c:
    // 0x452a0c: 0x292182b  sltu        $v1, $s4, $s2
    ctx->pc = 0x452a0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_452a10:
    // 0x452a10: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
label_452a14:
    if (ctx->pc == 0x452A14u) {
        ctx->pc = 0x452A14u;
            // 0x452a14: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x452A18u;
        goto label_452a18;
    }
    ctx->pc = 0x452A10u;
    {
        const bool branch_taken_0x452a10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x452A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x452A10u;
            // 0x452a14: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x452a10) {
            ctx->pc = 0x452998u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_452998;
        }
    }
    ctx->pc = 0x452A18u;
label_452a18:
    // 0x452a18: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x452a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_452a1c:
    // 0x452a1c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x452a1cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_452a20:
    // 0x452a20: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x452a20u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_452a24:
    // 0x452a24: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x452a24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_452a28:
    // 0x452a28: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x452a28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_452a2c:
    // 0x452a2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x452a2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_452a30:
    // 0x452a30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x452a30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_452a34:
    // 0x452a34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x452a34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_452a38:
    // 0x452a38: 0x3e00008  jr          $ra
label_452a3c:
    if (ctx->pc == 0x452A3Cu) {
        ctx->pc = 0x452A3Cu;
            // 0x452a3c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x452A40u;
        goto label_452a40;
    }
    ctx->pc = 0x452A38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x452A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x452A38u;
            // 0x452a3c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x452A40u;
label_452a40:
    // 0x452a40: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x452a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_452a44:
    // 0x452a44: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x452a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_452a48:
    // 0x452a48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x452a48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_452a4c:
    // 0x452a4c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x452a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_452a50:
    // 0x452a50: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x452a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_452a54:
    // 0x452a54: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x452a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_452a58:
    // 0x452a58: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x452a58u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_452a5c:
    // 0x452a5c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x452a5cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_452a60:
    // 0x452a60: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x452a60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_452a64:
    // 0x452a64: 0x8c8200d0  lw          $v0, 0xD0($a0)
    ctx->pc = 0x452a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_452a68:
    // 0x452a68: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x452a68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_452a6c:
    // 0x452a6c: 0x24510020  addiu       $s1, $v0, 0x20
    ctx->pc = 0x452a6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_452a70:
    // 0x452a70: 0x9042004c  lbu         $v0, 0x4C($v0)
    ctx->pc = 0x452a70u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 76)));
label_452a74:
    // 0x452a74: 0xa082004c  sb          $v0, 0x4C($a0)
    ctx->pc = 0x452a74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 76), (uint8_t)GPR_U32(ctx, 2));
label_452a78:
    // 0x452a78: 0xc48100e4  lwc1        $f1, 0xE4($a0)
    ctx->pc = 0x452a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_452a7c:
    // 0x452a7c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x452a7cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_452a80:
    // 0x452a80: 0x45010045  bc1t        . + 4 + (0x45 << 2)
label_452a84:
    if (ctx->pc == 0x452A84u) {
        ctx->pc = 0x452A84u;
            // 0x452a84: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x452A88u;
        goto label_452a88;
    }
    ctx->pc = 0x452A80u;
    {
        const bool branch_taken_0x452a80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x452A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x452A80u;
            // 0x452a84: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x452a80) {
            ctx->pc = 0x452B98u;
            goto label_452b98;
        }
    }
    ctx->pc = 0x452A88u;
label_452a88:
    // 0x452a88: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x452a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_452a8c:
    // 0x452a8c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x452a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_452a90:
    // 0x452a90: 0xc455dac4  lwc1        $f21, -0x253C($v0)
    ctx->pc = 0x452a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_452a94:
    // 0x452a94: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x452a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_452a98:
    // 0x452a98: 0xc456dac8  lwc1        $f22, -0x2538($v0)
    ctx->pc = 0x452a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_452a9c:
    // 0x452a9c: 0xc04f26c  jal         func_13C9B0
label_452aa0:
    if (ctx->pc == 0x452AA0u) {
        ctx->pc = 0x452AA0u;
            // 0x452aa0: 0xa2400140  sb          $zero, 0x140($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 320), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x452AA4u;
        goto label_452aa4;
    }
    ctx->pc = 0x452A9Cu;
    SET_GPR_U32(ctx, 31, 0x452AA4u);
    ctx->pc = 0x452AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452A9Cu;
            // 0x452aa0: 0xa2400140  sb          $zero, 0x140($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 320), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452AA4u; }
        if (ctx->pc != 0x452AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452AA4u; }
        if (ctx->pc != 0x452AA4u) { return; }
    }
    ctx->pc = 0x452AA4u;
label_452aa4:
    // 0x452aa4: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x452aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_452aa8:
    // 0x452aa8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x452aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_452aac:
    // 0x452aac: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x452aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_452ab0:
    // 0x452ab0: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x452ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_452ab4:
    // 0x452ab4: 0xc04ce64  jal         func_133990
label_452ab8:
    if (ctx->pc == 0x452AB8u) {
        ctx->pc = 0x452AB8u;
            // 0x452ab8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x452ABCu;
        goto label_452abc;
    }
    ctx->pc = 0x452AB4u;
    SET_GPR_U32(ctx, 31, 0x452ABCu);
    ctx->pc = 0x452AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452AB4u;
            // 0x452ab8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452ABCu; }
        if (ctx->pc != 0x452ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452ABCu; }
        if (ctx->pc != 0x452ABCu) { return; }
    }
    ctx->pc = 0x452ABCu;
label_452abc:
    // 0x452abc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x452abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_452ac0:
    // 0x452ac0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x452ac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_452ac4:
    // 0x452ac4: 0xc04cd80  jal         func_133600
label_452ac8:
    if (ctx->pc == 0x452AC8u) {
        ctx->pc = 0x452AC8u;
            // 0x452ac8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x452ACCu;
        goto label_452acc;
    }
    ctx->pc = 0x452AC4u;
    SET_GPR_U32(ctx, 31, 0x452ACCu);
    ctx->pc = 0x452AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452AC4u;
            // 0x452ac8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133600u;
    if (runtime->hasFunction(0x133600u)) {
        auto targetFn = runtime->lookupFunction(0x133600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452ACCu; }
        if (ctx->pc != 0x452ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133600_0x133600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452ACCu; }
        if (ctx->pc != 0x452ACCu) { return; }
    }
    ctx->pc = 0x452ACCu;
label_452acc:
    // 0x452acc: 0x26440100  addiu       $a0, $s2, 0x100
    ctx->pc = 0x452accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
label_452ad0:
    // 0x452ad0: 0xc04cce4  jal         func_133390
label_452ad4:
    if (ctx->pc == 0x452AD4u) {
        ctx->pc = 0x452AD4u;
            // 0x452ad4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x452AD8u;
        goto label_452ad8;
    }
    ctx->pc = 0x452AD0u;
    SET_GPR_U32(ctx, 31, 0x452AD8u);
    ctx->pc = 0x452AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452AD0u;
            // 0x452ad4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133390u;
    if (runtime->hasFunction(0x133390u)) {
        auto targetFn = runtime->lookupFunction(0x133390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452AD8u; }
        if (ctx->pc != 0x452AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133390_0x133390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452AD8u; }
        if (ctx->pc != 0x452AD8u) { return; }
    }
    ctx->pc = 0x452AD8u;
label_452ad8:
    // 0x452ad8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x452ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_452adc:
    // 0x452adc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x452adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_452ae0:
    // 0x452ae0: 0xc454dac0  lwc1        $f20, -0x2540($v0)
    ctx->pc = 0x452ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_452ae4:
    // 0x452ae4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x452ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_452ae8:
    // 0x452ae8: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x452ae8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_452aec:
    // 0x452aec: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x452aecu;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
label_452af0:
    // 0x452af0: 0xc04ce64  jal         func_133990
label_452af4:
    if (ctx->pc == 0x452AF4u) {
        ctx->pc = 0x452AF4u;
            // 0x452af4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x452AF8u;
        goto label_452af8;
    }
    ctx->pc = 0x452AF0u;
    SET_GPR_U32(ctx, 31, 0x452AF8u);
    ctx->pc = 0x452AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452AF0u;
            // 0x452af4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452AF8u; }
        if (ctx->pc != 0x452AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452AF8u; }
        if (ctx->pc != 0x452AF8u) { return; }
    }
    ctx->pc = 0x452AF8u;
label_452af8:
    // 0x452af8: 0x26440110  addiu       $a0, $s2, 0x110
    ctx->pc = 0x452af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
label_452afc:
    // 0x452afc: 0xc04cce4  jal         func_133390
label_452b00:
    if (ctx->pc == 0x452B00u) {
        ctx->pc = 0x452B00u;
            // 0x452b00: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x452B04u;
        goto label_452b04;
    }
    ctx->pc = 0x452AFCu;
    SET_GPR_U32(ctx, 31, 0x452B04u);
    ctx->pc = 0x452B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452AFCu;
            // 0x452b00: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133390u;
    if (runtime->hasFunction(0x133390u)) {
        auto targetFn = runtime->lookupFunction(0x133390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452B04u; }
        if (ctx->pc != 0x452B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133390_0x133390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452B04u; }
        if (ctx->pc != 0x452B04u) { return; }
    }
    ctx->pc = 0x452B04u;
label_452b04:
    // 0x452b04: 0x264400f0  addiu       $a0, $s2, 0xF0
    ctx->pc = 0x452b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
label_452b08:
    // 0x452b08: 0xc04c994  jal         func_132650
label_452b0c:
    if (ctx->pc == 0x452B0Cu) {
        ctx->pc = 0x452B0Cu;
            // 0x452b0c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x452B10u;
        goto label_452b10;
    }
    ctx->pc = 0x452B08u;
    SET_GPR_U32(ctx, 31, 0x452B10u);
    ctx->pc = 0x452B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452B08u;
            // 0x452b0c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132650u;
    if (runtime->hasFunction(0x132650u)) {
        auto targetFn = runtime->lookupFunction(0x132650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452B10u; }
        if (ctx->pc != 0x452B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132650_0x132650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452B10u; }
        if (ctx->pc != 0x452B10u) { return; }
    }
    ctx->pc = 0x452B10u;
label_452b10:
    // 0x452b10: 0x264400f0  addiu       $a0, $s2, 0xF0
    ctx->pc = 0x452b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
label_452b14:
    // 0x452b14: 0xc04c74c  jal         func_131D30
label_452b18:
    if (ctx->pc == 0x452B18u) {
        ctx->pc = 0x452B18u;
            // 0x452b18: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x452B1Cu;
        goto label_452b1c;
    }
    ctx->pc = 0x452B14u;
    SET_GPR_U32(ctx, 31, 0x452B1Cu);
    ctx->pc = 0x452B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452B14u;
            // 0x452b18: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452B1Cu; }
        if (ctx->pc != 0x452B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452B1Cu; }
        if (ctx->pc != 0x452B1Cu) { return; }
    }
    ctx->pc = 0x452B1Cu;
label_452b1c:
    // 0x452b1c: 0xc04f26c  jal         func_13C9B0
label_452b20:
    if (ctx->pc == 0x452B20u) {
        ctx->pc = 0x452B20u;
            // 0x452b20: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x452B24u;
        goto label_452b24;
    }
    ctx->pc = 0x452B1Cu;
    SET_GPR_U32(ctx, 31, 0x452B24u);
    ctx->pc = 0x452B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452B1Cu;
            // 0x452b20: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452B24u; }
        if (ctx->pc != 0x452B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452B24u; }
        if (ctx->pc != 0x452B24u) { return; }
    }
    ctx->pc = 0x452B24u;
label_452b24:
    // 0x452b24: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x452b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_452b28:
    // 0x452b28: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x452b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_452b2c:
    // 0x452b2c: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x452b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_452b30:
    // 0x452b30: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x452b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_452b34:
    // 0x452b34: 0xc04ce64  jal         func_133990
label_452b38:
    if (ctx->pc == 0x452B38u) {
        ctx->pc = 0x452B38u;
            // 0x452b38: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x452B3Cu;
        goto label_452b3c;
    }
    ctx->pc = 0x452B34u;
    SET_GPR_U32(ctx, 31, 0x452B3Cu);
    ctx->pc = 0x452B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452B34u;
            // 0x452b38: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452B3Cu; }
        if (ctx->pc != 0x452B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452B3Cu; }
        if (ctx->pc != 0x452B3Cu) { return; }
    }
    ctx->pc = 0x452B3Cu;
label_452b3c:
    // 0x452b3c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x452b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_452b40:
    // 0x452b40: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x452b40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_452b44:
    // 0x452b44: 0xc04cd80  jal         func_133600
label_452b48:
    if (ctx->pc == 0x452B48u) {
        ctx->pc = 0x452B48u;
            // 0x452b48: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x452B4Cu;
        goto label_452b4c;
    }
    ctx->pc = 0x452B44u;
    SET_GPR_U32(ctx, 31, 0x452B4Cu);
    ctx->pc = 0x452B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452B44u;
            // 0x452b48: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133600u;
    if (runtime->hasFunction(0x133600u)) {
        auto targetFn = runtime->lookupFunction(0x133600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452B4Cu; }
        if (ctx->pc != 0x452B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133600_0x133600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452B4Cu; }
        if (ctx->pc != 0x452B4Cu) { return; }
    }
    ctx->pc = 0x452B4Cu;
label_452b4c:
    // 0x452b4c: 0x3c023e72  lui         $v0, 0x3E72
    ctx->pc = 0x452b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15986 << 16));
label_452b50:
    // 0x452b50: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x452b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_452b54:
    // 0x452b54: 0x344286bd  ori         $v0, $v0, 0x86BD
    ctx->pc = 0x452b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34493);
label_452b58:
    // 0x452b58: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x452b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_452b5c:
    // 0x452b5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x452b5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_452b60:
    // 0x452b60: 0x0  nop
    ctx->pc = 0x452b60u;
    // NOP
label_452b64:
    // 0x452b64: 0x46160380  add.s       $f14, $f0, $f22
    ctx->pc = 0x452b64u;
    ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_452b68:
    // 0x452b68: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x452b68u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_452b6c:
    // 0x452b6c: 0xc04ce64  jal         func_133990
label_452b70:
    if (ctx->pc == 0x452B70u) {
        ctx->pc = 0x452B70u;
            // 0x452b70: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x452B74u;
        goto label_452b74;
    }
    ctx->pc = 0x452B6Cu;
    SET_GPR_U32(ctx, 31, 0x452B74u);
    ctx->pc = 0x452B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452B6Cu;
            // 0x452b70: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452B74u; }
        if (ctx->pc != 0x452B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452B74u; }
        if (ctx->pc != 0x452B74u) { return; }
    }
    ctx->pc = 0x452B74u;
label_452b74:
    // 0x452b74: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x452b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_452b78:
    // 0x452b78: 0xc04cce4  jal         func_133390
label_452b7c:
    if (ctx->pc == 0x452B7Cu) {
        ctx->pc = 0x452B7Cu;
            // 0x452b7c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x452B80u;
        goto label_452b80;
    }
    ctx->pc = 0x452B78u;
    SET_GPR_U32(ctx, 31, 0x452B80u);
    ctx->pc = 0x452B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452B78u;
            // 0x452b7c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133390u;
    if (runtime->hasFunction(0x133390u)) {
        auto targetFn = runtime->lookupFunction(0x133390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452B80u; }
        if (ctx->pc != 0x452B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133390_0x133390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452B80u; }
        if (ctx->pc != 0x452B80u) { return; }
    }
    ctx->pc = 0x452B80u;
label_452b80:
    // 0x452b80: 0x26440120  addiu       $a0, $s2, 0x120
    ctx->pc = 0x452b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
label_452b84:
    // 0x452b84: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x452b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_452b88:
    // 0x452b88: 0xc04cc90  jal         func_133240
label_452b8c:
    if (ctx->pc == 0x452B8Cu) {
        ctx->pc = 0x452B8Cu;
            // 0x452b8c: 0x26460110  addiu       $a2, $s2, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
        ctx->pc = 0x452B90u;
        goto label_452b90;
    }
    ctx->pc = 0x452B88u;
    SET_GPR_U32(ctx, 31, 0x452B90u);
    ctx->pc = 0x452B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452B88u;
            // 0x452b8c: 0x26460110  addiu       $a2, $s2, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452B90u; }
        if (ctx->pc != 0x452B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452B90u; }
        if (ctx->pc != 0x452B90u) { return; }
    }
    ctx->pc = 0x452B90u;
label_452b90:
    // 0x452b90: 0x10000051  b           . + 4 + (0x51 << 2)
label_452b94:
    if (ctx->pc == 0x452B94u) {
        ctx->pc = 0x452B94u;
            // 0x452b94: 0xc64c0100  lwc1        $f12, 0x100($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x452B98u;
        goto label_452b98;
    }
    ctx->pc = 0x452B90u;
    {
        const bool branch_taken_0x452b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x452B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x452B90u;
            // 0x452b94: 0xc64c0100  lwc1        $f12, 0x100($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x452b90) {
            ctx->pc = 0x452CD8u;
            goto label_452cd8;
        }
    }
    ctx->pc = 0x452B98u;
label_452b98:
    // 0x452b98: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x452b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_452b9c:
    // 0x452b9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x452b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_452ba0:
    // 0x452ba0: 0xc440dac0  lwc1        $f0, -0x2540($v0)
    ctx->pc = 0x452ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_452ba4:
    // 0x452ba4: 0xa2430140  sb          $v1, 0x140($s2)
    ctx->pc = 0x452ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 320), (uint8_t)GPR_U32(ctx, 3));
label_452ba8:
    // 0x452ba8: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x452ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_452bac:
    // 0x452bac: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x452bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_452bb0:
    // 0x452bb0: 0xc461dac4  lwc1        $f1, -0x253C($v1)
    ctx->pc = 0x452bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294957764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_452bb4:
    // 0x452bb4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x452bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_452bb8:
    // 0x452bb8: 0x46000507  neg.s       $f20, $f0
    ctx->pc = 0x452bb8u;
    ctx->f[20] = FPU_NEG_S(ctx->f[0]);
label_452bbc:
    // 0x452bbc: 0xc440dac8  lwc1        $f0, -0x2538($v0)
    ctx->pc = 0x452bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_452bc0:
    // 0x452bc0: 0x46000d47  neg.s       $f21, $f1
    ctx->pc = 0x452bc0u;
    ctx->f[21] = FPU_NEG_S(ctx->f[1]);
label_452bc4:
    // 0x452bc4: 0xc04f26c  jal         func_13C9B0
label_452bc8:
    if (ctx->pc == 0x452BC8u) {
        ctx->pc = 0x452BC8u;
            // 0x452bc8: 0x46000587  neg.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_NEG_S(ctx->f[0]);
        ctx->pc = 0x452BCCu;
        goto label_452bcc;
    }
    ctx->pc = 0x452BC4u;
    SET_GPR_U32(ctx, 31, 0x452BCCu);
    ctx->pc = 0x452BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452BC4u;
            // 0x452bc8: 0x46000587  neg.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452BCCu; }
        if (ctx->pc != 0x452BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452BCCu; }
        if (ctx->pc != 0x452BCCu) { return; }
    }
    ctx->pc = 0x452BCCu;
label_452bcc:
    // 0x452bcc: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x452bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_452bd0:
    // 0x452bd0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x452bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_452bd4:
    // 0x452bd4: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x452bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_452bd8:
    // 0x452bd8: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x452bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_452bdc:
    // 0x452bdc: 0xc04ce64  jal         func_133990
label_452be0:
    if (ctx->pc == 0x452BE0u) {
        ctx->pc = 0x452BE0u;
            // 0x452be0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x452BE4u;
        goto label_452be4;
    }
    ctx->pc = 0x452BDCu;
    SET_GPR_U32(ctx, 31, 0x452BE4u);
    ctx->pc = 0x452BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452BDCu;
            // 0x452be0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452BE4u; }
        if (ctx->pc != 0x452BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452BE4u; }
        if (ctx->pc != 0x452BE4u) { return; }
    }
    ctx->pc = 0x452BE4u;
label_452be4:
    // 0x452be4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x452be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_452be8:
    // 0x452be8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x452be8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_452bec:
    // 0x452bec: 0xc04cd80  jal         func_133600
label_452bf0:
    if (ctx->pc == 0x452BF0u) {
        ctx->pc = 0x452BF0u;
            // 0x452bf0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x452BF4u;
        goto label_452bf4;
    }
    ctx->pc = 0x452BECu;
    SET_GPR_U32(ctx, 31, 0x452BF4u);
    ctx->pc = 0x452BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452BECu;
            // 0x452bf0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133600u;
    if (runtime->hasFunction(0x133600u)) {
        auto targetFn = runtime->lookupFunction(0x133600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452BF4u; }
        if (ctx->pc != 0x452BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133600_0x133600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452BF4u; }
        if (ctx->pc != 0x452BF4u) { return; }
    }
    ctx->pc = 0x452BF4u;
label_452bf4:
    // 0x452bf4: 0x26440100  addiu       $a0, $s2, 0x100
    ctx->pc = 0x452bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
label_452bf8:
    // 0x452bf8: 0xc04cce4  jal         func_133390
label_452bfc:
    if (ctx->pc == 0x452BFCu) {
        ctx->pc = 0x452BFCu;
            // 0x452bfc: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x452C00u;
        goto label_452c00;
    }
    ctx->pc = 0x452BF8u;
    SET_GPR_U32(ctx, 31, 0x452C00u);
    ctx->pc = 0x452BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452BF8u;
            // 0x452bfc: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133390u;
    if (runtime->hasFunction(0x133390u)) {
        auto targetFn = runtime->lookupFunction(0x133390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452C00u; }
        if (ctx->pc != 0x452C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133390_0x133390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452C00u; }
        if (ctx->pc != 0x452C00u) { return; }
    }
    ctx->pc = 0x452C00u;
label_452c00:
    // 0x452c00: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x452c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_452c04:
    // 0x452c04: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x452c04u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_452c08:
    // 0x452c08: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x452c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_452c0c:
    // 0x452c0c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x452c0cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_452c10:
    // 0x452c10: 0xc04ce64  jal         func_133990
label_452c14:
    if (ctx->pc == 0x452C14u) {
        ctx->pc = 0x452C14u;
            // 0x452c14: 0x4600b386  mov.s       $f14, $f22 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[22]);
        ctx->pc = 0x452C18u;
        goto label_452c18;
    }
    ctx->pc = 0x452C10u;
    SET_GPR_U32(ctx, 31, 0x452C18u);
    ctx->pc = 0x452C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452C10u;
            // 0x452c14: 0x4600b386  mov.s       $f14, $f22 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452C18u; }
        if (ctx->pc != 0x452C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452C18u; }
        if (ctx->pc != 0x452C18u) { return; }
    }
    ctx->pc = 0x452C18u;
label_452c18:
    // 0x452c18: 0x26440110  addiu       $a0, $s2, 0x110
    ctx->pc = 0x452c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
label_452c1c:
    // 0x452c1c: 0xc04cce4  jal         func_133390
label_452c20:
    if (ctx->pc == 0x452C20u) {
        ctx->pc = 0x452C20u;
            // 0x452c20: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x452C24u;
        goto label_452c24;
    }
    ctx->pc = 0x452C1Cu;
    SET_GPR_U32(ctx, 31, 0x452C24u);
    ctx->pc = 0x452C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452C1Cu;
            // 0x452c20: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133390u;
    if (runtime->hasFunction(0x133390u)) {
        auto targetFn = runtime->lookupFunction(0x133390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452C24u; }
        if (ctx->pc != 0x452C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133390_0x133390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452C24u; }
        if (ctx->pc != 0x452C24u) { return; }
    }
    ctx->pc = 0x452C24u;
label_452c24:
    // 0x452c24: 0x264400f0  addiu       $a0, $s2, 0xF0
    ctx->pc = 0x452c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
label_452c28:
    // 0x452c28: 0xc04c994  jal         func_132650
label_452c2c:
    if (ctx->pc == 0x452C2Cu) {
        ctx->pc = 0x452C2Cu;
            // 0x452c2c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x452C30u;
        goto label_452c30;
    }
    ctx->pc = 0x452C28u;
    SET_GPR_U32(ctx, 31, 0x452C30u);
    ctx->pc = 0x452C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452C28u;
            // 0x452c2c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132650u;
    if (runtime->hasFunction(0x132650u)) {
        auto targetFn = runtime->lookupFunction(0x132650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452C30u; }
        if (ctx->pc != 0x452C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132650_0x132650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452C30u; }
        if (ctx->pc != 0x452C30u) { return; }
    }
    ctx->pc = 0x452C30u;
label_452c30:
    // 0x452c30: 0x264400f0  addiu       $a0, $s2, 0xF0
    ctx->pc = 0x452c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
label_452c34:
    // 0x452c34: 0xc04c74c  jal         func_131D30
label_452c38:
    if (ctx->pc == 0x452C38u) {
        ctx->pc = 0x452C38u;
            // 0x452c38: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x452C3Cu;
        goto label_452c3c;
    }
    ctx->pc = 0x452C34u;
    SET_GPR_U32(ctx, 31, 0x452C3Cu);
    ctx->pc = 0x452C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452C34u;
            // 0x452c38: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452C3Cu; }
        if (ctx->pc != 0x452C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452C3Cu; }
        if (ctx->pc != 0x452C3Cu) { return; }
    }
    ctx->pc = 0x452C3Cu;
label_452c3c:
    // 0x452c3c: 0xc04f26c  jal         func_13C9B0
label_452c40:
    if (ctx->pc == 0x452C40u) {
        ctx->pc = 0x452C40u;
            // 0x452c40: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x452C44u;
        goto label_452c44;
    }
    ctx->pc = 0x452C3Cu;
    SET_GPR_U32(ctx, 31, 0x452C44u);
    ctx->pc = 0x452C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452C3Cu;
            // 0x452c40: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452C44u; }
        if (ctx->pc != 0x452C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452C44u; }
        if (ctx->pc != 0x452C44u) { return; }
    }
    ctx->pc = 0x452C44u;
label_452c44:
    // 0x452c44: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x452c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_452c48:
    // 0x452c48: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x452c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_452c4c:
    // 0x452c4c: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x452c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_452c50:
    // 0x452c50: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x452c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_452c54:
    // 0x452c54: 0xc04ce64  jal         func_133990
label_452c58:
    if (ctx->pc == 0x452C58u) {
        ctx->pc = 0x452C58u;
            // 0x452c58: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x452C5Cu;
        goto label_452c5c;
    }
    ctx->pc = 0x452C54u;
    SET_GPR_U32(ctx, 31, 0x452C5Cu);
    ctx->pc = 0x452C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452C54u;
            // 0x452c58: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452C5Cu; }
        if (ctx->pc != 0x452C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452C5Cu; }
        if (ctx->pc != 0x452C5Cu) { return; }
    }
    ctx->pc = 0x452C5Cu;
label_452c5c:
    // 0x452c5c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x452c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_452c60:
    // 0x452c60: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x452c60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_452c64:
    // 0x452c64: 0xc04cd80  jal         func_133600
label_452c68:
    if (ctx->pc == 0x452C68u) {
        ctx->pc = 0x452C68u;
            // 0x452c68: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x452C6Cu;
        goto label_452c6c;
    }
    ctx->pc = 0x452C64u;
    SET_GPR_U32(ctx, 31, 0x452C6Cu);
    ctx->pc = 0x452C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452C64u;
            // 0x452c68: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133600u;
    if (runtime->hasFunction(0x133600u)) {
        auto targetFn = runtime->lookupFunction(0x133600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452C6Cu; }
        if (ctx->pc != 0x452C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133600_0x133600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452C6Cu; }
        if (ctx->pc != 0x452C6Cu) { return; }
    }
    ctx->pc = 0x452C6Cu;
label_452c6c:
    // 0x452c6c: 0x3c023e72  lui         $v0, 0x3E72
    ctx->pc = 0x452c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15986 << 16));
label_452c70:
    // 0x452c70: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x452c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_452c74:
    // 0x452c74: 0x344286bd  ori         $v0, $v0, 0x86BD
    ctx->pc = 0x452c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34493);
label_452c78:
    // 0x452c78: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x452c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_452c7c:
    // 0x452c7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x452c7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_452c80:
    // 0x452c80: 0x0  nop
    ctx->pc = 0x452c80u;
    // NOP
label_452c84:
    // 0x452c84: 0x46160380  add.s       $f14, $f0, $f22
    ctx->pc = 0x452c84u;
    ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_452c88:
    // 0x452c88: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x452c88u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_452c8c:
    // 0x452c8c: 0xc04ce64  jal         func_133990
label_452c90:
    if (ctx->pc == 0x452C90u) {
        ctx->pc = 0x452C90u;
            // 0x452c90: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x452C94u;
        goto label_452c94;
    }
    ctx->pc = 0x452C8Cu;
    SET_GPR_U32(ctx, 31, 0x452C94u);
    ctx->pc = 0x452C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452C8Cu;
            // 0x452c90: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452C94u; }
        if (ctx->pc != 0x452C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452C94u; }
        if (ctx->pc != 0x452C94u) { return; }
    }
    ctx->pc = 0x452C94u;
label_452c94:
    // 0x452c94: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x452c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_452c98:
    // 0x452c98: 0xc04cce4  jal         func_133390
label_452c9c:
    if (ctx->pc == 0x452C9Cu) {
        ctx->pc = 0x452C9Cu;
            // 0x452c9c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x452CA0u;
        goto label_452ca0;
    }
    ctx->pc = 0x452C98u;
    SET_GPR_U32(ctx, 31, 0x452CA0u);
    ctx->pc = 0x452C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452C98u;
            // 0x452c9c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133390u;
    if (runtime->hasFunction(0x133390u)) {
        auto targetFn = runtime->lookupFunction(0x133390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452CA0u; }
        if (ctx->pc != 0x452CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133390_0x133390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452CA0u; }
        if (ctx->pc != 0x452CA0u) { return; }
    }
    ctx->pc = 0x452CA0u;
label_452ca0:
    // 0x452ca0: 0x26440120  addiu       $a0, $s2, 0x120
    ctx->pc = 0x452ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
label_452ca4:
    // 0x452ca4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x452ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_452ca8:
    // 0x452ca8: 0xc04cc90  jal         func_133240
label_452cac:
    if (ctx->pc == 0x452CACu) {
        ctx->pc = 0x452CACu;
            // 0x452cac: 0x26460110  addiu       $a2, $s2, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
        ctx->pc = 0x452CB0u;
        goto label_452cb0;
    }
    ctx->pc = 0x452CA8u;
    SET_GPR_U32(ctx, 31, 0x452CB0u);
    ctx->pc = 0x452CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452CA8u;
            // 0x452cac: 0x26460110  addiu       $a2, $s2, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452CB0u; }
        if (ctx->pc != 0x452CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452CB0u; }
        if (ctx->pc != 0x452CB0u) { return; }
    }
    ctx->pc = 0x452CB0u;
label_452cb0:
    // 0x452cb0: 0xc6400120  lwc1        $f0, 0x120($s2)
    ctx->pc = 0x452cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_452cb4:
    // 0x452cb4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x452cb4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_452cb8:
    // 0x452cb8: 0xe6400120  swc1        $f0, 0x120($s2)
    ctx->pc = 0x452cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 288), bits); }
label_452cbc:
    // 0x452cbc: 0xc6400124  lwc1        $f0, 0x124($s2)
    ctx->pc = 0x452cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_452cc0:
    // 0x452cc0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x452cc0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_452cc4:
    // 0x452cc4: 0xe6400124  swc1        $f0, 0x124($s2)
    ctx->pc = 0x452cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 292), bits); }
label_452cc8:
    // 0x452cc8: 0xc6400128  lwc1        $f0, 0x128($s2)
    ctx->pc = 0x452cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_452ccc:
    // 0x452ccc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x452cccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_452cd0:
    // 0x452cd0: 0xe6400128  swc1        $f0, 0x128($s2)
    ctx->pc = 0x452cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 296), bits); }
label_452cd4:
    // 0x452cd4: 0xc64c0100  lwc1        $f12, 0x100($s2)
    ctx->pc = 0x452cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_452cd8:
    // 0x452cd8: 0xc64d0104  lwc1        $f13, 0x104($s2)
    ctx->pc = 0x452cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_452cdc:
    // 0x452cdc: 0xc64e0108  lwc1        $f14, 0x108($s2)
    ctx->pc = 0x452cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_452ce0:
    // 0x452ce0: 0xc04cbd8  jal         func_132F60
label_452ce4:
    if (ctx->pc == 0x452CE4u) {
        ctx->pc = 0x452CE4u;
            // 0x452ce4: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x452CE8u;
        goto label_452ce8;
    }
    ctx->pc = 0x452CE0u;
    SET_GPR_U32(ctx, 31, 0x452CE8u);
    ctx->pc = 0x452CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452CE0u;
            // 0x452ce4: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452CE8u; }
        if (ctx->pc != 0x452CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452CE8u; }
        if (ctx->pc != 0x452CE8u) { return; }
    }
    ctx->pc = 0x452CE8u;
label_452ce8:
    // 0x452ce8: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x452ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_452cec:
    // 0x452cec: 0xc04c720  jal         func_131C80
label_452cf0:
    if (ctx->pc == 0x452CF0u) {
        ctx->pc = 0x452CF0u;
            // 0x452cf0: 0x264500f0  addiu       $a1, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->pc = 0x452CF4u;
        goto label_452cf4;
    }
    ctx->pc = 0x452CECu;
    SET_GPR_U32(ctx, 31, 0x452CF4u);
    ctx->pc = 0x452CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452CECu;
            // 0x452cf0: 0x264500f0  addiu       $a1, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452CF4u; }
        if (ctx->pc != 0x452CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452CF4u; }
        if (ctx->pc != 0x452CF4u) { return; }
    }
    ctx->pc = 0x452CF4u;
label_452cf4:
    // 0x452cf4: 0xc0e39b4  jal         func_38E6D0
label_452cf8:
    if (ctx->pc == 0x452CF8u) {
        ctx->pc = 0x452CF8u;
            // 0x452cf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x452CFCu;
        goto label_452cfc;
    }
    ctx->pc = 0x452CF4u;
    SET_GPR_U32(ctx, 31, 0x452CFCu);
    ctx->pc = 0x452CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452CF4u;
            // 0x452cf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E6D0u;
    if (runtime->hasFunction(0x38E6D0u)) {
        auto targetFn = runtime->lookupFunction(0x38E6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452CFCu; }
        if (ctx->pc != 0x452CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E6D0_0x38e6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452CFCu; }
        if (ctx->pc != 0x452CFCu) { return; }
    }
    ctx->pc = 0x452CFCu;
label_452cfc:
    // 0x452cfc: 0xc64c0100  lwc1        $f12, 0x100($s2)
    ctx->pc = 0x452cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_452d00:
    // 0x452d00: 0xc64d0104  lwc1        $f13, 0x104($s2)
    ctx->pc = 0x452d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_452d04:
    // 0x452d04: 0xc64e0108  lwc1        $f14, 0x108($s2)
    ctx->pc = 0x452d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_452d08:
    // 0x452d08: 0xc0d3f08  jal         func_34FC20
label_452d0c:
    if (ctx->pc == 0x452D0Cu) {
        ctx->pc = 0x452D0Cu;
            // 0x452d0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x452D10u;
        goto label_452d10;
    }
    ctx->pc = 0x452D08u;
    SET_GPR_U32(ctx, 31, 0x452D10u);
    ctx->pc = 0x452D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452D08u;
            // 0x452d0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34FC20u;
    if (runtime->hasFunction(0x34FC20u)) {
        auto targetFn = runtime->lookupFunction(0x34FC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452D10u; }
        if (ctx->pc != 0x452D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034FC20_0x34fc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452D10u; }
        if (ctx->pc != 0x452D10u) { return; }
    }
    ctx->pc = 0x452D10u;
label_452d10:
    // 0x452d10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x452d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_452d14:
    // 0x452d14: 0xc0e1b28  jal         func_386CA0
label_452d18:
    if (ctx->pc == 0x452D18u) {
        ctx->pc = 0x452D18u;
            // 0x452d18: 0x264500f0  addiu       $a1, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->pc = 0x452D1Cu;
        goto label_452d1c;
    }
    ctx->pc = 0x452D14u;
    SET_GPR_U32(ctx, 31, 0x452D1Cu);
    ctx->pc = 0x452D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452D14u;
            // 0x452d18: 0x264500f0  addiu       $a1, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386CA0u;
    if (runtime->hasFunction(0x386CA0u)) {
        auto targetFn = runtime->lookupFunction(0x386CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452D1Cu; }
        if (ctx->pc != 0x452D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386CA0_0x386ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452D1Cu; }
        if (ctx->pc != 0x452D1Cu) { return; }
    }
    ctx->pc = 0x452D1Cu;
label_452d1c:
    // 0x452d1c: 0xc114bb0  jal         func_452EC0
label_452d20:
    if (ctx->pc == 0x452D20u) {
        ctx->pc = 0x452D24u;
        goto label_452d24;
    }
    ctx->pc = 0x452D1Cu;
    SET_GPR_U32(ctx, 31, 0x452D24u);
    ctx->pc = 0x452EC0u;
    if (runtime->hasFunction(0x452EC0u)) {
        auto targetFn = runtime->lookupFunction(0x452EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452D24u; }
        if (ctx->pc != 0x452D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00452EC0_0x452ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452D24u; }
        if (ctx->pc != 0x452D24u) { return; }
    }
    ctx->pc = 0x452D24u;
label_452d24:
    // 0x452d24: 0xc114bac  jal         func_452EB0
label_452d28:
    if (ctx->pc == 0x452D28u) {
        ctx->pc = 0x452D28u;
            // 0x452d28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x452D2Cu;
        goto label_452d2c;
    }
    ctx->pc = 0x452D24u;
    SET_GPR_U32(ctx, 31, 0x452D2Cu);
    ctx->pc = 0x452D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452D24u;
            // 0x452d28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x452EB0u;
    if (runtime->hasFunction(0x452EB0u)) {
        auto targetFn = runtime->lookupFunction(0x452EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452D2Cu; }
        if (ctx->pc != 0x452D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00452EB0_0x452eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452D2Cu; }
        if (ctx->pc != 0x452D2Cu) { return; }
    }
    ctx->pc = 0x452D2Cu;
label_452d2c:
    // 0x452d2c: 0xc114bb0  jal         func_452EC0
label_452d30:
    if (ctx->pc == 0x452D30u) {
        ctx->pc = 0x452D30u;
            // 0x452d30: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x452D34u;
        goto label_452d34;
    }
    ctx->pc = 0x452D2Cu;
    SET_GPR_U32(ctx, 31, 0x452D34u);
    ctx->pc = 0x452D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452D2Cu;
            // 0x452d30: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x452EC0u;
    if (runtime->hasFunction(0x452EC0u)) {
        auto targetFn = runtime->lookupFunction(0x452EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452D34u; }
        if (ctx->pc != 0x452D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00452EC0_0x452ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452D34u; }
        if (ctx->pc != 0x452D34u) { return; }
    }
    ctx->pc = 0x452D34u;
label_452d34:
    // 0x452d34: 0xc114ba8  jal         func_452EA0
label_452d38:
    if (ctx->pc == 0x452D38u) {
        ctx->pc = 0x452D38u;
            // 0x452d38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x452D3Cu;
        goto label_452d3c;
    }
    ctx->pc = 0x452D34u;
    SET_GPR_U32(ctx, 31, 0x452D3Cu);
    ctx->pc = 0x452D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452D34u;
            // 0x452d38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x452EA0u;
    if (runtime->hasFunction(0x452EA0u)) {
        auto targetFn = runtime->lookupFunction(0x452EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452D3Cu; }
        if (ctx->pc != 0x452D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00452EA0_0x452ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452D3Cu; }
        if (ctx->pc != 0x452D3Cu) { return; }
    }
    ctx->pc = 0x452D3Cu;
label_452d3c:
    // 0x452d3c: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x452d3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_452d40:
    // 0x452d40: 0xc0775b8  jal         func_1DD6E0
label_452d44:
    if (ctx->pc == 0x452D44u) {
        ctx->pc = 0x452D44u;
            // 0x452d44: 0xe6400138  swc1        $f0, 0x138($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 312), bits); }
        ctx->pc = 0x452D48u;
        goto label_452d48;
    }
    ctx->pc = 0x452D40u;
    SET_GPR_U32(ctx, 31, 0x452D48u);
    ctx->pc = 0x452D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452D40u;
            // 0x452d44: 0xe6400138  swc1        $f0, 0x138($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 312), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452D48u; }
        if (ctx->pc != 0x452D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452D48u; }
        if (ctx->pc != 0x452D48u) { return; }
    }
    ctx->pc = 0x452D48u;
label_452d48:
    // 0x452d48: 0xc0775b4  jal         func_1DD6D0
label_452d4c:
    if (ctx->pc == 0x452D4Cu) {
        ctx->pc = 0x452D4Cu;
            // 0x452d4c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x452D50u;
        goto label_452d50;
    }
    ctx->pc = 0x452D48u;
    SET_GPR_U32(ctx, 31, 0x452D50u);
    ctx->pc = 0x452D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452D48u;
            // 0x452d4c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452D50u; }
        if (ctx->pc != 0x452D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452D50u; }
        if (ctx->pc != 0x452D50u) { return; }
    }
    ctx->pc = 0x452D50u;
label_452d50:
    // 0x452d50: 0xe640013c  swc1        $f0, 0x13C($s2)
    ctx->pc = 0x452d50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 316), bits); }
label_452d54:
    // 0x452d54: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x452d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_452d58:
    // 0x452d58: 0xae4200d8  sw          $v0, 0xD8($s2)
    ctx->pc = 0x452d58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 2));
label_452d5c:
    // 0x452d5c: 0xc114bb0  jal         func_452EC0
label_452d60:
    if (ctx->pc == 0x452D60u) {
        ctx->pc = 0x452D60u;
            // 0x452d60: 0xae4000dc  sw          $zero, 0xDC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 0));
        ctx->pc = 0x452D64u;
        goto label_452d64;
    }
    ctx->pc = 0x452D5Cu;
    SET_GPR_U32(ctx, 31, 0x452D64u);
    ctx->pc = 0x452D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452D5Cu;
            // 0x452d60: 0xae4000dc  sw          $zero, 0xDC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x452EC0u;
    if (runtime->hasFunction(0x452EC0u)) {
        auto targetFn = runtime->lookupFunction(0x452EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452D64u; }
        if (ctx->pc != 0x452D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00452EC0_0x452ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452D64u; }
        if (ctx->pc != 0x452D64u) { return; }
    }
    ctx->pc = 0x452D64u;
label_452d64:
    // 0x452d64: 0xc114ba8  jal         func_452EA0
label_452d68:
    if (ctx->pc == 0x452D68u) {
        ctx->pc = 0x452D68u;
            // 0x452d68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x452D6Cu;
        goto label_452d6c;
    }
    ctx->pc = 0x452D64u;
    SET_GPR_U32(ctx, 31, 0x452D6Cu);
    ctx->pc = 0x452D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452D64u;
            // 0x452d68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x452EA0u;
    if (runtime->hasFunction(0x452EA0u)) {
        auto targetFn = runtime->lookupFunction(0x452EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452D6Cu; }
        if (ctx->pc != 0x452D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00452EA0_0x452ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452D6Cu; }
        if (ctx->pc != 0x452D6Cu) { return; }
    }
    ctx->pc = 0x452D6Cu;
label_452d6c:
    // 0x452d6c: 0xe6400130  swc1        $f0, 0x130($s2)
    ctx->pc = 0x452d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 304), bits); }
label_452d70:
    // 0x452d70: 0x3c020125  lui         $v0, 0x125
    ctx->pc = 0x452d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)293 << 16));
label_452d74:
    // 0x452d74: 0xae400134  sw          $zero, 0x134($s2)
    ctx->pc = 0x452d74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 308), GPR_U32(ctx, 0));
label_452d78:
    // 0x452d78: 0x34450060  ori         $a1, $v0, 0x60
    ctx->pc = 0x452d78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
label_452d7c:
    // 0x452d7c: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x452d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_452d80:
    // 0x452d80: 0xc0e080c  jal         func_382030
label_452d84:
    if (ctx->pc == 0x452D84u) {
        ctx->pc = 0x452D84u;
            // 0x452d84: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x452D88u;
        goto label_452d88;
    }
    ctx->pc = 0x452D80u;
    SET_GPR_U32(ctx, 31, 0x452D88u);
    ctx->pc = 0x452D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452D80u;
            // 0x452d84: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382030u;
    if (runtime->hasFunction(0x382030u)) {
        auto targetFn = runtime->lookupFunction(0x382030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452D88u; }
        if (ctx->pc != 0x452D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382030_0x382030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452D88u; }
        if (ctx->pc != 0x452D88u) { return; }
    }
    ctx->pc = 0x452D88u;
label_452d88:
    // 0x452d88: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x452d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_452d8c:
    // 0x452d8c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x452d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_452d90:
    // 0x452d90: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x452d90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_452d94:
    // 0x452d94: 0xc08914c  jal         func_224530
label_452d98:
    if (ctx->pc == 0x452D98u) {
        ctx->pc = 0x452D98u;
            // 0x452d98: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x452D9Cu;
        goto label_452d9c;
    }
    ctx->pc = 0x452D94u;
    SET_GPR_U32(ctx, 31, 0x452D9Cu);
    ctx->pc = 0x452D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452D94u;
            // 0x452d98: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452D9Cu; }
        if (ctx->pc != 0x452D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452D9Cu; }
        if (ctx->pc != 0x452D9Cu) { return; }
    }
    ctx->pc = 0x452D9Cu;
label_452d9c:
    // 0x452d9c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x452d9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_452da0:
    // 0x452da0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x452da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_452da4:
    // 0x452da4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x452da4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_452da8:
    // 0x452da8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x452da8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_452dac:
    // 0x452dac: 0xc0b6df0  jal         func_2DB7C0
label_452db0:
    if (ctx->pc == 0x452DB0u) {
        ctx->pc = 0x452DB0u;
            // 0x452db0: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x452DB4u;
        goto label_452db4;
    }
    ctx->pc = 0x452DACu;
    SET_GPR_U32(ctx, 31, 0x452DB4u);
    ctx->pc = 0x452DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452DACu;
            // 0x452db0: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452DB4u; }
        if (ctx->pc != 0x452DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452DB4u; }
        if (ctx->pc != 0x452DB4u) { return; }
    }
    ctx->pc = 0x452DB4u;
label_452db4:
    // 0x452db4: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x452db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_452db8:
    // 0x452db8: 0xc0e07f8  jal         func_381FE0
label_452dbc:
    if (ctx->pc == 0x452DBCu) {
        ctx->pc = 0x452DBCu;
            // 0x452dbc: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x452DC0u;
        goto label_452dc0;
    }
    ctx->pc = 0x452DB8u;
    SET_GPR_U32(ctx, 31, 0x452DC0u);
    ctx->pc = 0x452DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452DB8u;
            // 0x452dbc: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381FE0u;
    if (runtime->hasFunction(0x381FE0u)) {
        auto targetFn = runtime->lookupFunction(0x381FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452DC0u; }
        if (ctx->pc != 0x452DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381FE0_0x381fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452DC0u; }
        if (ctx->pc != 0x452DC0u) { return; }
    }
    ctx->pc = 0x452DC0u;
label_452dc0:
    // 0x452dc0: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x452dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_452dc4:
    // 0x452dc4: 0xc0dc3f4  jal         func_370FD0
label_452dc8:
    if (ctx->pc == 0x452DC8u) {
        ctx->pc = 0x452DC8u;
            // 0x452dc8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x452DCCu;
        goto label_452dcc;
    }
    ctx->pc = 0x452DC4u;
    SET_GPR_U32(ctx, 31, 0x452DCCu);
    ctx->pc = 0x452DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452DC4u;
            // 0x452dc8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370FD0u;
    if (runtime->hasFunction(0x370FD0u)) {
        auto targetFn = runtime->lookupFunction(0x370FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452DCCu; }
        if (ctx->pc != 0x452DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370FD0_0x370fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452DCCu; }
        if (ctx->pc != 0x452DCCu) { return; }
    }
    ctx->pc = 0x452DCCu;
label_452dcc:
    // 0x452dcc: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x452dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_452dd0:
    // 0x452dd0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x452dd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_452dd4:
    // 0x452dd4: 0xc0e1b08  jal         func_386C20
label_452dd8:
    if (ctx->pc == 0x452DD8u) {
        ctx->pc = 0x452DD8u;
            // 0x452dd8: 0x8e440050  lw          $a0, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->pc = 0x452DDCu;
        goto label_452ddc;
    }
    ctx->pc = 0x452DD4u;
    SET_GPR_U32(ctx, 31, 0x452DDCu);
    ctx->pc = 0x452DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452DD4u;
            // 0x452dd8: 0x8e440050  lw          $a0, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C20u;
    if (runtime->hasFunction(0x386C20u)) {
        auto targetFn = runtime->lookupFunction(0x386C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452DDCu; }
        if (ctx->pc != 0x452DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C20_0x386c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452DDCu; }
        if (ctx->pc != 0x452DDCu) { return; }
    }
    ctx->pc = 0x452DDCu;
label_452ddc:
    // 0x452ddc: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x452ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_452de0:
    // 0x452de0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x452de0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_452de4:
    // 0x452de4: 0xc0e1b04  jal         func_386C10
label_452de8:
    if (ctx->pc == 0x452DE8u) {
        ctx->pc = 0x452DE8u;
            // 0x452de8: 0x8e440050  lw          $a0, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->pc = 0x452DECu;
        goto label_452dec;
    }
    ctx->pc = 0x452DE4u;
    SET_GPR_U32(ctx, 31, 0x452DECu);
    ctx->pc = 0x452DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452DE4u;
            // 0x452de8: 0x8e440050  lw          $a0, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C10u;
    if (runtime->hasFunction(0x386C10u)) {
        auto targetFn = runtime->lookupFunction(0x386C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452DECu; }
        if (ctx->pc != 0x452DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C10_0x386c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452DECu; }
        if (ctx->pc != 0x452DECu) { return; }
    }
    ctx->pc = 0x452DECu;
label_452dec:
    // 0x452dec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x452decu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_452df0:
    // 0x452df0: 0xc0e1b00  jal         func_386C00
label_452df4:
    if (ctx->pc == 0x452DF4u) {
        ctx->pc = 0x452DF4u;
            // 0x452df4: 0x8e440050  lw          $a0, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->pc = 0x452DF8u;
        goto label_452df8;
    }
    ctx->pc = 0x452DF0u;
    SET_GPR_U32(ctx, 31, 0x452DF8u);
    ctx->pc = 0x452DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452DF0u;
            // 0x452df4: 0x8e440050  lw          $a0, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C00u;
    if (runtime->hasFunction(0x386C00u)) {
        auto targetFn = runtime->lookupFunction(0x386C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452DF8u; }
        if (ctx->pc != 0x452DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C00_0x386c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452DF8u; }
        if (ctx->pc != 0x452DF8u) { return; }
    }
    ctx->pc = 0x452DF8u;
label_452df8:
    // 0x452df8: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x452df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_452dfc:
    // 0x452dfc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x452dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_452e00:
    // 0x452e00: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x452e00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_452e04:
    // 0x452e04: 0xc0e1afc  jal         func_386BF0
label_452e08:
    if (ctx->pc == 0x452E08u) {
        ctx->pc = 0x452E08u;
            // 0x452e08: 0x8e440050  lw          $a0, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->pc = 0x452E0Cu;
        goto label_452e0c;
    }
    ctx->pc = 0x452E04u;
    SET_GPR_U32(ctx, 31, 0x452E0Cu);
    ctx->pc = 0x452E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452E04u;
            // 0x452e08: 0x8e440050  lw          $a0, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386BF0u;
    if (runtime->hasFunction(0x386BF0u)) {
        auto targetFn = runtime->lookupFunction(0x386BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452E0Cu; }
        if (ctx->pc != 0x452E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386BF0_0x386bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452E0Cu; }
        if (ctx->pc != 0x452E0Cu) { return; }
    }
    ctx->pc = 0x452E0Cu;
label_452e0c:
    // 0x452e0c: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x452e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_452e10:
    // 0x452e10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x452e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_452e14:
    // 0x452e14: 0xc0e1af4  jal         func_386BD0
label_452e18:
    if (ctx->pc == 0x452E18u) {
        ctx->pc = 0x452E18u;
            // 0x452e18: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x452E1Cu;
        goto label_452e1c;
    }
    ctx->pc = 0x452E14u;
    SET_GPR_U32(ctx, 31, 0x452E1Cu);
    ctx->pc = 0x452E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452E14u;
            // 0x452e18: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386BD0u;
    if (runtime->hasFunction(0x386BD0u)) {
        auto targetFn = runtime->lookupFunction(0x386BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452E1Cu; }
        if (ctx->pc != 0x452E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386BD0_0x386bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452E1Cu; }
        if (ctx->pc != 0x452E1Cu) { return; }
    }
    ctx->pc = 0x452E1Cu;
label_452e1c:
    // 0x452e1c: 0x24050600  addiu       $a1, $zero, 0x600
    ctx->pc = 0x452e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
label_452e20:
    // 0x452e20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x452e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_452e24:
    // 0x452e24: 0xc0e1aec  jal         func_386BB0
label_452e28:
    if (ctx->pc == 0x452E28u) {
        ctx->pc = 0x452E28u;
            // 0x452e28: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x452E2Cu;
        goto label_452e2c;
    }
    ctx->pc = 0x452E24u;
    SET_GPR_U32(ctx, 31, 0x452E2Cu);
    ctx->pc = 0x452E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452E24u;
            // 0x452e28: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386BB0u;
    if (runtime->hasFunction(0x386BB0u)) {
        auto targetFn = runtime->lookupFunction(0x386BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452E2Cu; }
        if (ctx->pc != 0x452E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386BB0_0x386bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452E2Cu; }
        if (ctx->pc != 0x452E2Cu) { return; }
    }
    ctx->pc = 0x452E2Cu;
label_452e2c:
    // 0x452e2c: 0xc0dc408  jal         func_371020
label_452e30:
    if (ctx->pc == 0x452E30u) {
        ctx->pc = 0x452E30u;
            // 0x452e30: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->pc = 0x452E34u;
        goto label_452e34;
    }
    ctx->pc = 0x452E2Cu;
    SET_GPR_U32(ctx, 31, 0x452E34u);
    ctx->pc = 0x452E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452E2Cu;
            // 0x452e30: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452E34u; }
        if (ctx->pc != 0x452E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452E34u; }
        if (ctx->pc != 0x452E34u) { return; }
    }
    ctx->pc = 0x452E34u;
label_452e34:
    // 0x452e34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x452e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_452e38:
    // 0x452e38: 0x26450110  addiu       $a1, $s2, 0x110
    ctx->pc = 0x452e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
label_452e3c:
    // 0x452e3c: 0xc0e1ad4  jal         func_386B50
label_452e40:
    if (ctx->pc == 0x452E40u) {
        ctx->pc = 0x452E40u;
            // 0x452e40: 0x264600f0  addiu       $a2, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->pc = 0x452E44u;
        goto label_452e44;
    }
    ctx->pc = 0x452E3Cu;
    SET_GPR_U32(ctx, 31, 0x452E44u);
    ctx->pc = 0x452E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452E3Cu;
            // 0x452e40: 0x264600f0  addiu       $a2, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386B50u;
    if (runtime->hasFunction(0x386B50u)) {
        auto targetFn = runtime->lookupFunction(0x386B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452E44u; }
        if (ctx->pc != 0x452E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386B50_0x386b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452E44u; }
        if (ctx->pc != 0x452E44u) { return; }
    }
    ctx->pc = 0x452E44u;
label_452e44:
    // 0x452e44: 0x8e4400d0  lw          $a0, 0xD0($s2)
    ctx->pc = 0x452e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_452e48:
    // 0x452e48: 0xc114ba4  jal         func_452E90
label_452e4c:
    if (ctx->pc == 0x452E4Cu) {
        ctx->pc = 0x452E4Cu;
            // 0x452e4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x452E50u;
        goto label_452e50;
    }
    ctx->pc = 0x452E48u;
    SET_GPR_U32(ctx, 31, 0x452E50u);
    ctx->pc = 0x452E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452E48u;
            // 0x452e4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x452E90u;
    if (runtime->hasFunction(0x452E90u)) {
        auto targetFn = runtime->lookupFunction(0x452E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452E50u; }
        if (ctx->pc != 0x452E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00452E90_0x452e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452E50u; }
        if (ctx->pc != 0x452E50u) { return; }
    }
    ctx->pc = 0x452E50u;
label_452e50:
    // 0x452e50: 0x8e4400d0  lw          $a0, 0xD0($s2)
    ctx->pc = 0x452e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_452e54:
    // 0x452e54: 0xc114ba0  jal         func_452E80
label_452e58:
    if (ctx->pc == 0x452E58u) {
        ctx->pc = 0x452E58u;
            // 0x452e58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x452E5Cu;
        goto label_452e5c;
    }
    ctx->pc = 0x452E54u;
    SET_GPR_U32(ctx, 31, 0x452E5Cu);
    ctx->pc = 0x452E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452E54u;
            // 0x452e58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x452E80u;
    if (runtime->hasFunction(0x452E80u)) {
        auto targetFn = runtime->lookupFunction(0x452E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452E5Cu; }
        if (ctx->pc != 0x452E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00452E80_0x452e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452E5Cu; }
        if (ctx->pc != 0x452E5Cu) { return; }
    }
    ctx->pc = 0x452E5Cu;
label_452e5c:
    // 0x452e5c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x452e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_452e60:
    // 0x452e60: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x452e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_452e64:
    // 0x452e64: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x452e64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_452e68:
    // 0x452e68: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x452e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_452e6c:
    // 0x452e6c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x452e6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_452e70:
    // 0x452e70: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x452e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_452e74:
    // 0x452e74: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x452e74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_452e78:
    // 0x452e78: 0x3e00008  jr          $ra
label_452e7c:
    if (ctx->pc == 0x452E7Cu) {
        ctx->pc = 0x452E7Cu;
            // 0x452e7c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x452E80u;
        goto label_fallthrough_0x452e78;
    }
    ctx->pc = 0x452E78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x452E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x452E78u;
            // 0x452e7c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x452e78:
    ctx->pc = 0x452E80u;
}
