#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00472680
// Address: 0x472680 - 0x4732a0
void sub_00472680_0x472680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00472680_0x472680");
#endif

    switch (ctx->pc) {
        case 0x472680u: goto label_472680;
        case 0x472684u: goto label_472684;
        case 0x472688u: goto label_472688;
        case 0x47268cu: goto label_47268c;
        case 0x472690u: goto label_472690;
        case 0x472694u: goto label_472694;
        case 0x472698u: goto label_472698;
        case 0x47269cu: goto label_47269c;
        case 0x4726a0u: goto label_4726a0;
        case 0x4726a4u: goto label_4726a4;
        case 0x4726a8u: goto label_4726a8;
        case 0x4726acu: goto label_4726ac;
        case 0x4726b0u: goto label_4726b0;
        case 0x4726b4u: goto label_4726b4;
        case 0x4726b8u: goto label_4726b8;
        case 0x4726bcu: goto label_4726bc;
        case 0x4726c0u: goto label_4726c0;
        case 0x4726c4u: goto label_4726c4;
        case 0x4726c8u: goto label_4726c8;
        case 0x4726ccu: goto label_4726cc;
        case 0x4726d0u: goto label_4726d0;
        case 0x4726d4u: goto label_4726d4;
        case 0x4726d8u: goto label_4726d8;
        case 0x4726dcu: goto label_4726dc;
        case 0x4726e0u: goto label_4726e0;
        case 0x4726e4u: goto label_4726e4;
        case 0x4726e8u: goto label_4726e8;
        case 0x4726ecu: goto label_4726ec;
        case 0x4726f0u: goto label_4726f0;
        case 0x4726f4u: goto label_4726f4;
        case 0x4726f8u: goto label_4726f8;
        case 0x4726fcu: goto label_4726fc;
        case 0x472700u: goto label_472700;
        case 0x472704u: goto label_472704;
        case 0x472708u: goto label_472708;
        case 0x47270cu: goto label_47270c;
        case 0x472710u: goto label_472710;
        case 0x472714u: goto label_472714;
        case 0x472718u: goto label_472718;
        case 0x47271cu: goto label_47271c;
        case 0x472720u: goto label_472720;
        case 0x472724u: goto label_472724;
        case 0x472728u: goto label_472728;
        case 0x47272cu: goto label_47272c;
        case 0x472730u: goto label_472730;
        case 0x472734u: goto label_472734;
        case 0x472738u: goto label_472738;
        case 0x47273cu: goto label_47273c;
        case 0x472740u: goto label_472740;
        case 0x472744u: goto label_472744;
        case 0x472748u: goto label_472748;
        case 0x47274cu: goto label_47274c;
        case 0x472750u: goto label_472750;
        case 0x472754u: goto label_472754;
        case 0x472758u: goto label_472758;
        case 0x47275cu: goto label_47275c;
        case 0x472760u: goto label_472760;
        case 0x472764u: goto label_472764;
        case 0x472768u: goto label_472768;
        case 0x47276cu: goto label_47276c;
        case 0x472770u: goto label_472770;
        case 0x472774u: goto label_472774;
        case 0x472778u: goto label_472778;
        case 0x47277cu: goto label_47277c;
        case 0x472780u: goto label_472780;
        case 0x472784u: goto label_472784;
        case 0x472788u: goto label_472788;
        case 0x47278cu: goto label_47278c;
        case 0x472790u: goto label_472790;
        case 0x472794u: goto label_472794;
        case 0x472798u: goto label_472798;
        case 0x47279cu: goto label_47279c;
        case 0x4727a0u: goto label_4727a0;
        case 0x4727a4u: goto label_4727a4;
        case 0x4727a8u: goto label_4727a8;
        case 0x4727acu: goto label_4727ac;
        case 0x4727b0u: goto label_4727b0;
        case 0x4727b4u: goto label_4727b4;
        case 0x4727b8u: goto label_4727b8;
        case 0x4727bcu: goto label_4727bc;
        case 0x4727c0u: goto label_4727c0;
        case 0x4727c4u: goto label_4727c4;
        case 0x4727c8u: goto label_4727c8;
        case 0x4727ccu: goto label_4727cc;
        case 0x4727d0u: goto label_4727d0;
        case 0x4727d4u: goto label_4727d4;
        case 0x4727d8u: goto label_4727d8;
        case 0x4727dcu: goto label_4727dc;
        case 0x4727e0u: goto label_4727e0;
        case 0x4727e4u: goto label_4727e4;
        case 0x4727e8u: goto label_4727e8;
        case 0x4727ecu: goto label_4727ec;
        case 0x4727f0u: goto label_4727f0;
        case 0x4727f4u: goto label_4727f4;
        case 0x4727f8u: goto label_4727f8;
        case 0x4727fcu: goto label_4727fc;
        case 0x472800u: goto label_472800;
        case 0x472804u: goto label_472804;
        case 0x472808u: goto label_472808;
        case 0x47280cu: goto label_47280c;
        case 0x472810u: goto label_472810;
        case 0x472814u: goto label_472814;
        case 0x472818u: goto label_472818;
        case 0x47281cu: goto label_47281c;
        case 0x472820u: goto label_472820;
        case 0x472824u: goto label_472824;
        case 0x472828u: goto label_472828;
        case 0x47282cu: goto label_47282c;
        case 0x472830u: goto label_472830;
        case 0x472834u: goto label_472834;
        case 0x472838u: goto label_472838;
        case 0x47283cu: goto label_47283c;
        case 0x472840u: goto label_472840;
        case 0x472844u: goto label_472844;
        case 0x472848u: goto label_472848;
        case 0x47284cu: goto label_47284c;
        case 0x472850u: goto label_472850;
        case 0x472854u: goto label_472854;
        case 0x472858u: goto label_472858;
        case 0x47285cu: goto label_47285c;
        case 0x472860u: goto label_472860;
        case 0x472864u: goto label_472864;
        case 0x472868u: goto label_472868;
        case 0x47286cu: goto label_47286c;
        case 0x472870u: goto label_472870;
        case 0x472874u: goto label_472874;
        case 0x472878u: goto label_472878;
        case 0x47287cu: goto label_47287c;
        case 0x472880u: goto label_472880;
        case 0x472884u: goto label_472884;
        case 0x472888u: goto label_472888;
        case 0x47288cu: goto label_47288c;
        case 0x472890u: goto label_472890;
        case 0x472894u: goto label_472894;
        case 0x472898u: goto label_472898;
        case 0x47289cu: goto label_47289c;
        case 0x4728a0u: goto label_4728a0;
        case 0x4728a4u: goto label_4728a4;
        case 0x4728a8u: goto label_4728a8;
        case 0x4728acu: goto label_4728ac;
        case 0x4728b0u: goto label_4728b0;
        case 0x4728b4u: goto label_4728b4;
        case 0x4728b8u: goto label_4728b8;
        case 0x4728bcu: goto label_4728bc;
        case 0x4728c0u: goto label_4728c0;
        case 0x4728c4u: goto label_4728c4;
        case 0x4728c8u: goto label_4728c8;
        case 0x4728ccu: goto label_4728cc;
        case 0x4728d0u: goto label_4728d0;
        case 0x4728d4u: goto label_4728d4;
        case 0x4728d8u: goto label_4728d8;
        case 0x4728dcu: goto label_4728dc;
        case 0x4728e0u: goto label_4728e0;
        case 0x4728e4u: goto label_4728e4;
        case 0x4728e8u: goto label_4728e8;
        case 0x4728ecu: goto label_4728ec;
        case 0x4728f0u: goto label_4728f0;
        case 0x4728f4u: goto label_4728f4;
        case 0x4728f8u: goto label_4728f8;
        case 0x4728fcu: goto label_4728fc;
        case 0x472900u: goto label_472900;
        case 0x472904u: goto label_472904;
        case 0x472908u: goto label_472908;
        case 0x47290cu: goto label_47290c;
        case 0x472910u: goto label_472910;
        case 0x472914u: goto label_472914;
        case 0x472918u: goto label_472918;
        case 0x47291cu: goto label_47291c;
        case 0x472920u: goto label_472920;
        case 0x472924u: goto label_472924;
        case 0x472928u: goto label_472928;
        case 0x47292cu: goto label_47292c;
        case 0x472930u: goto label_472930;
        case 0x472934u: goto label_472934;
        case 0x472938u: goto label_472938;
        case 0x47293cu: goto label_47293c;
        case 0x472940u: goto label_472940;
        case 0x472944u: goto label_472944;
        case 0x472948u: goto label_472948;
        case 0x47294cu: goto label_47294c;
        case 0x472950u: goto label_472950;
        case 0x472954u: goto label_472954;
        case 0x472958u: goto label_472958;
        case 0x47295cu: goto label_47295c;
        case 0x472960u: goto label_472960;
        case 0x472964u: goto label_472964;
        case 0x472968u: goto label_472968;
        case 0x47296cu: goto label_47296c;
        case 0x472970u: goto label_472970;
        case 0x472974u: goto label_472974;
        case 0x472978u: goto label_472978;
        case 0x47297cu: goto label_47297c;
        case 0x472980u: goto label_472980;
        case 0x472984u: goto label_472984;
        case 0x472988u: goto label_472988;
        case 0x47298cu: goto label_47298c;
        case 0x472990u: goto label_472990;
        case 0x472994u: goto label_472994;
        case 0x472998u: goto label_472998;
        case 0x47299cu: goto label_47299c;
        case 0x4729a0u: goto label_4729a0;
        case 0x4729a4u: goto label_4729a4;
        case 0x4729a8u: goto label_4729a8;
        case 0x4729acu: goto label_4729ac;
        case 0x4729b0u: goto label_4729b0;
        case 0x4729b4u: goto label_4729b4;
        case 0x4729b8u: goto label_4729b8;
        case 0x4729bcu: goto label_4729bc;
        case 0x4729c0u: goto label_4729c0;
        case 0x4729c4u: goto label_4729c4;
        case 0x4729c8u: goto label_4729c8;
        case 0x4729ccu: goto label_4729cc;
        case 0x4729d0u: goto label_4729d0;
        case 0x4729d4u: goto label_4729d4;
        case 0x4729d8u: goto label_4729d8;
        case 0x4729dcu: goto label_4729dc;
        case 0x4729e0u: goto label_4729e0;
        case 0x4729e4u: goto label_4729e4;
        case 0x4729e8u: goto label_4729e8;
        case 0x4729ecu: goto label_4729ec;
        case 0x4729f0u: goto label_4729f0;
        case 0x4729f4u: goto label_4729f4;
        case 0x4729f8u: goto label_4729f8;
        case 0x4729fcu: goto label_4729fc;
        case 0x472a00u: goto label_472a00;
        case 0x472a04u: goto label_472a04;
        case 0x472a08u: goto label_472a08;
        case 0x472a0cu: goto label_472a0c;
        case 0x472a10u: goto label_472a10;
        case 0x472a14u: goto label_472a14;
        case 0x472a18u: goto label_472a18;
        case 0x472a1cu: goto label_472a1c;
        case 0x472a20u: goto label_472a20;
        case 0x472a24u: goto label_472a24;
        case 0x472a28u: goto label_472a28;
        case 0x472a2cu: goto label_472a2c;
        case 0x472a30u: goto label_472a30;
        case 0x472a34u: goto label_472a34;
        case 0x472a38u: goto label_472a38;
        case 0x472a3cu: goto label_472a3c;
        case 0x472a40u: goto label_472a40;
        case 0x472a44u: goto label_472a44;
        case 0x472a48u: goto label_472a48;
        case 0x472a4cu: goto label_472a4c;
        case 0x472a50u: goto label_472a50;
        case 0x472a54u: goto label_472a54;
        case 0x472a58u: goto label_472a58;
        case 0x472a5cu: goto label_472a5c;
        case 0x472a60u: goto label_472a60;
        case 0x472a64u: goto label_472a64;
        case 0x472a68u: goto label_472a68;
        case 0x472a6cu: goto label_472a6c;
        case 0x472a70u: goto label_472a70;
        case 0x472a74u: goto label_472a74;
        case 0x472a78u: goto label_472a78;
        case 0x472a7cu: goto label_472a7c;
        case 0x472a80u: goto label_472a80;
        case 0x472a84u: goto label_472a84;
        case 0x472a88u: goto label_472a88;
        case 0x472a8cu: goto label_472a8c;
        case 0x472a90u: goto label_472a90;
        case 0x472a94u: goto label_472a94;
        case 0x472a98u: goto label_472a98;
        case 0x472a9cu: goto label_472a9c;
        case 0x472aa0u: goto label_472aa0;
        case 0x472aa4u: goto label_472aa4;
        case 0x472aa8u: goto label_472aa8;
        case 0x472aacu: goto label_472aac;
        case 0x472ab0u: goto label_472ab0;
        case 0x472ab4u: goto label_472ab4;
        case 0x472ab8u: goto label_472ab8;
        case 0x472abcu: goto label_472abc;
        case 0x472ac0u: goto label_472ac0;
        case 0x472ac4u: goto label_472ac4;
        case 0x472ac8u: goto label_472ac8;
        case 0x472accu: goto label_472acc;
        case 0x472ad0u: goto label_472ad0;
        case 0x472ad4u: goto label_472ad4;
        case 0x472ad8u: goto label_472ad8;
        case 0x472adcu: goto label_472adc;
        case 0x472ae0u: goto label_472ae0;
        case 0x472ae4u: goto label_472ae4;
        case 0x472ae8u: goto label_472ae8;
        case 0x472aecu: goto label_472aec;
        case 0x472af0u: goto label_472af0;
        case 0x472af4u: goto label_472af4;
        case 0x472af8u: goto label_472af8;
        case 0x472afcu: goto label_472afc;
        case 0x472b00u: goto label_472b00;
        case 0x472b04u: goto label_472b04;
        case 0x472b08u: goto label_472b08;
        case 0x472b0cu: goto label_472b0c;
        case 0x472b10u: goto label_472b10;
        case 0x472b14u: goto label_472b14;
        case 0x472b18u: goto label_472b18;
        case 0x472b1cu: goto label_472b1c;
        case 0x472b20u: goto label_472b20;
        case 0x472b24u: goto label_472b24;
        case 0x472b28u: goto label_472b28;
        case 0x472b2cu: goto label_472b2c;
        case 0x472b30u: goto label_472b30;
        case 0x472b34u: goto label_472b34;
        case 0x472b38u: goto label_472b38;
        case 0x472b3cu: goto label_472b3c;
        case 0x472b40u: goto label_472b40;
        case 0x472b44u: goto label_472b44;
        case 0x472b48u: goto label_472b48;
        case 0x472b4cu: goto label_472b4c;
        case 0x472b50u: goto label_472b50;
        case 0x472b54u: goto label_472b54;
        case 0x472b58u: goto label_472b58;
        case 0x472b5cu: goto label_472b5c;
        case 0x472b60u: goto label_472b60;
        case 0x472b64u: goto label_472b64;
        case 0x472b68u: goto label_472b68;
        case 0x472b6cu: goto label_472b6c;
        case 0x472b70u: goto label_472b70;
        case 0x472b74u: goto label_472b74;
        case 0x472b78u: goto label_472b78;
        case 0x472b7cu: goto label_472b7c;
        case 0x472b80u: goto label_472b80;
        case 0x472b84u: goto label_472b84;
        case 0x472b88u: goto label_472b88;
        case 0x472b8cu: goto label_472b8c;
        case 0x472b90u: goto label_472b90;
        case 0x472b94u: goto label_472b94;
        case 0x472b98u: goto label_472b98;
        case 0x472b9cu: goto label_472b9c;
        case 0x472ba0u: goto label_472ba0;
        case 0x472ba4u: goto label_472ba4;
        case 0x472ba8u: goto label_472ba8;
        case 0x472bacu: goto label_472bac;
        case 0x472bb0u: goto label_472bb0;
        case 0x472bb4u: goto label_472bb4;
        case 0x472bb8u: goto label_472bb8;
        case 0x472bbcu: goto label_472bbc;
        case 0x472bc0u: goto label_472bc0;
        case 0x472bc4u: goto label_472bc4;
        case 0x472bc8u: goto label_472bc8;
        case 0x472bccu: goto label_472bcc;
        case 0x472bd0u: goto label_472bd0;
        case 0x472bd4u: goto label_472bd4;
        case 0x472bd8u: goto label_472bd8;
        case 0x472bdcu: goto label_472bdc;
        case 0x472be0u: goto label_472be0;
        case 0x472be4u: goto label_472be4;
        case 0x472be8u: goto label_472be8;
        case 0x472becu: goto label_472bec;
        case 0x472bf0u: goto label_472bf0;
        case 0x472bf4u: goto label_472bf4;
        case 0x472bf8u: goto label_472bf8;
        case 0x472bfcu: goto label_472bfc;
        case 0x472c00u: goto label_472c00;
        case 0x472c04u: goto label_472c04;
        case 0x472c08u: goto label_472c08;
        case 0x472c0cu: goto label_472c0c;
        case 0x472c10u: goto label_472c10;
        case 0x472c14u: goto label_472c14;
        case 0x472c18u: goto label_472c18;
        case 0x472c1cu: goto label_472c1c;
        case 0x472c20u: goto label_472c20;
        case 0x472c24u: goto label_472c24;
        case 0x472c28u: goto label_472c28;
        case 0x472c2cu: goto label_472c2c;
        case 0x472c30u: goto label_472c30;
        case 0x472c34u: goto label_472c34;
        case 0x472c38u: goto label_472c38;
        case 0x472c3cu: goto label_472c3c;
        case 0x472c40u: goto label_472c40;
        case 0x472c44u: goto label_472c44;
        case 0x472c48u: goto label_472c48;
        case 0x472c4cu: goto label_472c4c;
        case 0x472c50u: goto label_472c50;
        case 0x472c54u: goto label_472c54;
        case 0x472c58u: goto label_472c58;
        case 0x472c5cu: goto label_472c5c;
        case 0x472c60u: goto label_472c60;
        case 0x472c64u: goto label_472c64;
        case 0x472c68u: goto label_472c68;
        case 0x472c6cu: goto label_472c6c;
        case 0x472c70u: goto label_472c70;
        case 0x472c74u: goto label_472c74;
        case 0x472c78u: goto label_472c78;
        case 0x472c7cu: goto label_472c7c;
        case 0x472c80u: goto label_472c80;
        case 0x472c84u: goto label_472c84;
        case 0x472c88u: goto label_472c88;
        case 0x472c8cu: goto label_472c8c;
        case 0x472c90u: goto label_472c90;
        case 0x472c94u: goto label_472c94;
        case 0x472c98u: goto label_472c98;
        case 0x472c9cu: goto label_472c9c;
        case 0x472ca0u: goto label_472ca0;
        case 0x472ca4u: goto label_472ca4;
        case 0x472ca8u: goto label_472ca8;
        case 0x472cacu: goto label_472cac;
        case 0x472cb0u: goto label_472cb0;
        case 0x472cb4u: goto label_472cb4;
        case 0x472cb8u: goto label_472cb8;
        case 0x472cbcu: goto label_472cbc;
        case 0x472cc0u: goto label_472cc0;
        case 0x472cc4u: goto label_472cc4;
        case 0x472cc8u: goto label_472cc8;
        case 0x472cccu: goto label_472ccc;
        case 0x472cd0u: goto label_472cd0;
        case 0x472cd4u: goto label_472cd4;
        case 0x472cd8u: goto label_472cd8;
        case 0x472cdcu: goto label_472cdc;
        case 0x472ce0u: goto label_472ce0;
        case 0x472ce4u: goto label_472ce4;
        case 0x472ce8u: goto label_472ce8;
        case 0x472cecu: goto label_472cec;
        case 0x472cf0u: goto label_472cf0;
        case 0x472cf4u: goto label_472cf4;
        case 0x472cf8u: goto label_472cf8;
        case 0x472cfcu: goto label_472cfc;
        case 0x472d00u: goto label_472d00;
        case 0x472d04u: goto label_472d04;
        case 0x472d08u: goto label_472d08;
        case 0x472d0cu: goto label_472d0c;
        case 0x472d10u: goto label_472d10;
        case 0x472d14u: goto label_472d14;
        case 0x472d18u: goto label_472d18;
        case 0x472d1cu: goto label_472d1c;
        case 0x472d20u: goto label_472d20;
        case 0x472d24u: goto label_472d24;
        case 0x472d28u: goto label_472d28;
        case 0x472d2cu: goto label_472d2c;
        case 0x472d30u: goto label_472d30;
        case 0x472d34u: goto label_472d34;
        case 0x472d38u: goto label_472d38;
        case 0x472d3cu: goto label_472d3c;
        case 0x472d40u: goto label_472d40;
        case 0x472d44u: goto label_472d44;
        case 0x472d48u: goto label_472d48;
        case 0x472d4cu: goto label_472d4c;
        case 0x472d50u: goto label_472d50;
        case 0x472d54u: goto label_472d54;
        case 0x472d58u: goto label_472d58;
        case 0x472d5cu: goto label_472d5c;
        case 0x472d60u: goto label_472d60;
        case 0x472d64u: goto label_472d64;
        case 0x472d68u: goto label_472d68;
        case 0x472d6cu: goto label_472d6c;
        case 0x472d70u: goto label_472d70;
        case 0x472d74u: goto label_472d74;
        case 0x472d78u: goto label_472d78;
        case 0x472d7cu: goto label_472d7c;
        case 0x472d80u: goto label_472d80;
        case 0x472d84u: goto label_472d84;
        case 0x472d88u: goto label_472d88;
        case 0x472d8cu: goto label_472d8c;
        case 0x472d90u: goto label_472d90;
        case 0x472d94u: goto label_472d94;
        case 0x472d98u: goto label_472d98;
        case 0x472d9cu: goto label_472d9c;
        case 0x472da0u: goto label_472da0;
        case 0x472da4u: goto label_472da4;
        case 0x472da8u: goto label_472da8;
        case 0x472dacu: goto label_472dac;
        case 0x472db0u: goto label_472db0;
        case 0x472db4u: goto label_472db4;
        case 0x472db8u: goto label_472db8;
        case 0x472dbcu: goto label_472dbc;
        case 0x472dc0u: goto label_472dc0;
        case 0x472dc4u: goto label_472dc4;
        case 0x472dc8u: goto label_472dc8;
        case 0x472dccu: goto label_472dcc;
        case 0x472dd0u: goto label_472dd0;
        case 0x472dd4u: goto label_472dd4;
        case 0x472dd8u: goto label_472dd8;
        case 0x472ddcu: goto label_472ddc;
        case 0x472de0u: goto label_472de0;
        case 0x472de4u: goto label_472de4;
        case 0x472de8u: goto label_472de8;
        case 0x472decu: goto label_472dec;
        case 0x472df0u: goto label_472df0;
        case 0x472df4u: goto label_472df4;
        case 0x472df8u: goto label_472df8;
        case 0x472dfcu: goto label_472dfc;
        case 0x472e00u: goto label_472e00;
        case 0x472e04u: goto label_472e04;
        case 0x472e08u: goto label_472e08;
        case 0x472e0cu: goto label_472e0c;
        case 0x472e10u: goto label_472e10;
        case 0x472e14u: goto label_472e14;
        case 0x472e18u: goto label_472e18;
        case 0x472e1cu: goto label_472e1c;
        case 0x472e20u: goto label_472e20;
        case 0x472e24u: goto label_472e24;
        case 0x472e28u: goto label_472e28;
        case 0x472e2cu: goto label_472e2c;
        case 0x472e30u: goto label_472e30;
        case 0x472e34u: goto label_472e34;
        case 0x472e38u: goto label_472e38;
        case 0x472e3cu: goto label_472e3c;
        case 0x472e40u: goto label_472e40;
        case 0x472e44u: goto label_472e44;
        case 0x472e48u: goto label_472e48;
        case 0x472e4cu: goto label_472e4c;
        case 0x472e50u: goto label_472e50;
        case 0x472e54u: goto label_472e54;
        case 0x472e58u: goto label_472e58;
        case 0x472e5cu: goto label_472e5c;
        case 0x472e60u: goto label_472e60;
        case 0x472e64u: goto label_472e64;
        case 0x472e68u: goto label_472e68;
        case 0x472e6cu: goto label_472e6c;
        case 0x472e70u: goto label_472e70;
        case 0x472e74u: goto label_472e74;
        case 0x472e78u: goto label_472e78;
        case 0x472e7cu: goto label_472e7c;
        case 0x472e80u: goto label_472e80;
        case 0x472e84u: goto label_472e84;
        case 0x472e88u: goto label_472e88;
        case 0x472e8cu: goto label_472e8c;
        case 0x472e90u: goto label_472e90;
        case 0x472e94u: goto label_472e94;
        case 0x472e98u: goto label_472e98;
        case 0x472e9cu: goto label_472e9c;
        case 0x472ea0u: goto label_472ea0;
        case 0x472ea4u: goto label_472ea4;
        case 0x472ea8u: goto label_472ea8;
        case 0x472eacu: goto label_472eac;
        case 0x472eb0u: goto label_472eb0;
        case 0x472eb4u: goto label_472eb4;
        case 0x472eb8u: goto label_472eb8;
        case 0x472ebcu: goto label_472ebc;
        case 0x472ec0u: goto label_472ec0;
        case 0x472ec4u: goto label_472ec4;
        case 0x472ec8u: goto label_472ec8;
        case 0x472eccu: goto label_472ecc;
        case 0x472ed0u: goto label_472ed0;
        case 0x472ed4u: goto label_472ed4;
        case 0x472ed8u: goto label_472ed8;
        case 0x472edcu: goto label_472edc;
        case 0x472ee0u: goto label_472ee0;
        case 0x472ee4u: goto label_472ee4;
        case 0x472ee8u: goto label_472ee8;
        case 0x472eecu: goto label_472eec;
        case 0x472ef0u: goto label_472ef0;
        case 0x472ef4u: goto label_472ef4;
        case 0x472ef8u: goto label_472ef8;
        case 0x472efcu: goto label_472efc;
        case 0x472f00u: goto label_472f00;
        case 0x472f04u: goto label_472f04;
        case 0x472f08u: goto label_472f08;
        case 0x472f0cu: goto label_472f0c;
        case 0x472f10u: goto label_472f10;
        case 0x472f14u: goto label_472f14;
        case 0x472f18u: goto label_472f18;
        case 0x472f1cu: goto label_472f1c;
        case 0x472f20u: goto label_472f20;
        case 0x472f24u: goto label_472f24;
        case 0x472f28u: goto label_472f28;
        case 0x472f2cu: goto label_472f2c;
        case 0x472f30u: goto label_472f30;
        case 0x472f34u: goto label_472f34;
        case 0x472f38u: goto label_472f38;
        case 0x472f3cu: goto label_472f3c;
        case 0x472f40u: goto label_472f40;
        case 0x472f44u: goto label_472f44;
        case 0x472f48u: goto label_472f48;
        case 0x472f4cu: goto label_472f4c;
        case 0x472f50u: goto label_472f50;
        case 0x472f54u: goto label_472f54;
        case 0x472f58u: goto label_472f58;
        case 0x472f5cu: goto label_472f5c;
        case 0x472f60u: goto label_472f60;
        case 0x472f64u: goto label_472f64;
        case 0x472f68u: goto label_472f68;
        case 0x472f6cu: goto label_472f6c;
        case 0x472f70u: goto label_472f70;
        case 0x472f74u: goto label_472f74;
        case 0x472f78u: goto label_472f78;
        case 0x472f7cu: goto label_472f7c;
        case 0x472f80u: goto label_472f80;
        case 0x472f84u: goto label_472f84;
        case 0x472f88u: goto label_472f88;
        case 0x472f8cu: goto label_472f8c;
        case 0x472f90u: goto label_472f90;
        case 0x472f94u: goto label_472f94;
        case 0x472f98u: goto label_472f98;
        case 0x472f9cu: goto label_472f9c;
        case 0x472fa0u: goto label_472fa0;
        case 0x472fa4u: goto label_472fa4;
        case 0x472fa8u: goto label_472fa8;
        case 0x472facu: goto label_472fac;
        case 0x472fb0u: goto label_472fb0;
        case 0x472fb4u: goto label_472fb4;
        case 0x472fb8u: goto label_472fb8;
        case 0x472fbcu: goto label_472fbc;
        case 0x472fc0u: goto label_472fc0;
        case 0x472fc4u: goto label_472fc4;
        case 0x472fc8u: goto label_472fc8;
        case 0x472fccu: goto label_472fcc;
        case 0x472fd0u: goto label_472fd0;
        case 0x472fd4u: goto label_472fd4;
        case 0x472fd8u: goto label_472fd8;
        case 0x472fdcu: goto label_472fdc;
        case 0x472fe0u: goto label_472fe0;
        case 0x472fe4u: goto label_472fe4;
        case 0x472fe8u: goto label_472fe8;
        case 0x472fecu: goto label_472fec;
        case 0x472ff0u: goto label_472ff0;
        case 0x472ff4u: goto label_472ff4;
        case 0x472ff8u: goto label_472ff8;
        case 0x472ffcu: goto label_472ffc;
        case 0x473000u: goto label_473000;
        case 0x473004u: goto label_473004;
        case 0x473008u: goto label_473008;
        case 0x47300cu: goto label_47300c;
        case 0x473010u: goto label_473010;
        case 0x473014u: goto label_473014;
        case 0x473018u: goto label_473018;
        case 0x47301cu: goto label_47301c;
        case 0x473020u: goto label_473020;
        case 0x473024u: goto label_473024;
        case 0x473028u: goto label_473028;
        case 0x47302cu: goto label_47302c;
        case 0x473030u: goto label_473030;
        case 0x473034u: goto label_473034;
        case 0x473038u: goto label_473038;
        case 0x47303cu: goto label_47303c;
        case 0x473040u: goto label_473040;
        case 0x473044u: goto label_473044;
        case 0x473048u: goto label_473048;
        case 0x47304cu: goto label_47304c;
        case 0x473050u: goto label_473050;
        case 0x473054u: goto label_473054;
        case 0x473058u: goto label_473058;
        case 0x47305cu: goto label_47305c;
        case 0x473060u: goto label_473060;
        case 0x473064u: goto label_473064;
        case 0x473068u: goto label_473068;
        case 0x47306cu: goto label_47306c;
        case 0x473070u: goto label_473070;
        case 0x473074u: goto label_473074;
        case 0x473078u: goto label_473078;
        case 0x47307cu: goto label_47307c;
        case 0x473080u: goto label_473080;
        case 0x473084u: goto label_473084;
        case 0x473088u: goto label_473088;
        case 0x47308cu: goto label_47308c;
        case 0x473090u: goto label_473090;
        case 0x473094u: goto label_473094;
        case 0x473098u: goto label_473098;
        case 0x47309cu: goto label_47309c;
        case 0x4730a0u: goto label_4730a0;
        case 0x4730a4u: goto label_4730a4;
        case 0x4730a8u: goto label_4730a8;
        case 0x4730acu: goto label_4730ac;
        case 0x4730b0u: goto label_4730b0;
        case 0x4730b4u: goto label_4730b4;
        case 0x4730b8u: goto label_4730b8;
        case 0x4730bcu: goto label_4730bc;
        case 0x4730c0u: goto label_4730c0;
        case 0x4730c4u: goto label_4730c4;
        case 0x4730c8u: goto label_4730c8;
        case 0x4730ccu: goto label_4730cc;
        case 0x4730d0u: goto label_4730d0;
        case 0x4730d4u: goto label_4730d4;
        case 0x4730d8u: goto label_4730d8;
        case 0x4730dcu: goto label_4730dc;
        case 0x4730e0u: goto label_4730e0;
        case 0x4730e4u: goto label_4730e4;
        case 0x4730e8u: goto label_4730e8;
        case 0x4730ecu: goto label_4730ec;
        case 0x4730f0u: goto label_4730f0;
        case 0x4730f4u: goto label_4730f4;
        case 0x4730f8u: goto label_4730f8;
        case 0x4730fcu: goto label_4730fc;
        case 0x473100u: goto label_473100;
        case 0x473104u: goto label_473104;
        case 0x473108u: goto label_473108;
        case 0x47310cu: goto label_47310c;
        case 0x473110u: goto label_473110;
        case 0x473114u: goto label_473114;
        case 0x473118u: goto label_473118;
        case 0x47311cu: goto label_47311c;
        case 0x473120u: goto label_473120;
        case 0x473124u: goto label_473124;
        case 0x473128u: goto label_473128;
        case 0x47312cu: goto label_47312c;
        case 0x473130u: goto label_473130;
        case 0x473134u: goto label_473134;
        case 0x473138u: goto label_473138;
        case 0x47313cu: goto label_47313c;
        case 0x473140u: goto label_473140;
        case 0x473144u: goto label_473144;
        case 0x473148u: goto label_473148;
        case 0x47314cu: goto label_47314c;
        case 0x473150u: goto label_473150;
        case 0x473154u: goto label_473154;
        case 0x473158u: goto label_473158;
        case 0x47315cu: goto label_47315c;
        case 0x473160u: goto label_473160;
        case 0x473164u: goto label_473164;
        case 0x473168u: goto label_473168;
        case 0x47316cu: goto label_47316c;
        case 0x473170u: goto label_473170;
        case 0x473174u: goto label_473174;
        case 0x473178u: goto label_473178;
        case 0x47317cu: goto label_47317c;
        case 0x473180u: goto label_473180;
        case 0x473184u: goto label_473184;
        case 0x473188u: goto label_473188;
        case 0x47318cu: goto label_47318c;
        case 0x473190u: goto label_473190;
        case 0x473194u: goto label_473194;
        case 0x473198u: goto label_473198;
        case 0x47319cu: goto label_47319c;
        case 0x4731a0u: goto label_4731a0;
        case 0x4731a4u: goto label_4731a4;
        case 0x4731a8u: goto label_4731a8;
        case 0x4731acu: goto label_4731ac;
        case 0x4731b0u: goto label_4731b0;
        case 0x4731b4u: goto label_4731b4;
        case 0x4731b8u: goto label_4731b8;
        case 0x4731bcu: goto label_4731bc;
        case 0x4731c0u: goto label_4731c0;
        case 0x4731c4u: goto label_4731c4;
        case 0x4731c8u: goto label_4731c8;
        case 0x4731ccu: goto label_4731cc;
        case 0x4731d0u: goto label_4731d0;
        case 0x4731d4u: goto label_4731d4;
        case 0x4731d8u: goto label_4731d8;
        case 0x4731dcu: goto label_4731dc;
        case 0x4731e0u: goto label_4731e0;
        case 0x4731e4u: goto label_4731e4;
        case 0x4731e8u: goto label_4731e8;
        case 0x4731ecu: goto label_4731ec;
        case 0x4731f0u: goto label_4731f0;
        case 0x4731f4u: goto label_4731f4;
        case 0x4731f8u: goto label_4731f8;
        case 0x4731fcu: goto label_4731fc;
        case 0x473200u: goto label_473200;
        case 0x473204u: goto label_473204;
        case 0x473208u: goto label_473208;
        case 0x47320cu: goto label_47320c;
        case 0x473210u: goto label_473210;
        case 0x473214u: goto label_473214;
        case 0x473218u: goto label_473218;
        case 0x47321cu: goto label_47321c;
        case 0x473220u: goto label_473220;
        case 0x473224u: goto label_473224;
        case 0x473228u: goto label_473228;
        case 0x47322cu: goto label_47322c;
        case 0x473230u: goto label_473230;
        case 0x473234u: goto label_473234;
        case 0x473238u: goto label_473238;
        case 0x47323cu: goto label_47323c;
        case 0x473240u: goto label_473240;
        case 0x473244u: goto label_473244;
        case 0x473248u: goto label_473248;
        case 0x47324cu: goto label_47324c;
        case 0x473250u: goto label_473250;
        case 0x473254u: goto label_473254;
        case 0x473258u: goto label_473258;
        case 0x47325cu: goto label_47325c;
        case 0x473260u: goto label_473260;
        case 0x473264u: goto label_473264;
        case 0x473268u: goto label_473268;
        case 0x47326cu: goto label_47326c;
        case 0x473270u: goto label_473270;
        case 0x473274u: goto label_473274;
        case 0x473278u: goto label_473278;
        case 0x47327cu: goto label_47327c;
        case 0x473280u: goto label_473280;
        case 0x473284u: goto label_473284;
        case 0x473288u: goto label_473288;
        case 0x47328cu: goto label_47328c;
        case 0x473290u: goto label_473290;
        case 0x473294u: goto label_473294;
        case 0x473298u: goto label_473298;
        case 0x47329cu: goto label_47329c;
        default: break;
    }

    ctx->pc = 0x472680u;

label_472680:
    // 0x472680: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x472680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_472684:
    // 0x472684: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x472684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_472688:
    // 0x472688: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x472688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_47268c:
    // 0x47268c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x47268cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_472690:
    // 0x472690: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x472690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_472694:
    // 0x472694: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x472694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_472698:
    // 0x472698: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x472698u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47269c:
    // 0x47269c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x47269cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4726a0:
    // 0x4726a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4726a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4726a4:
    // 0x4726a4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4726a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4726a8:
    // 0x4726a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4726a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4726ac:
    // 0x4726ac: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4726acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4726b0:
    // 0x4726b0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x4726b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4726b4:
    // 0x4726b4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4726b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4726b8:
    // 0x4726b8: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x4726b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4726bc:
    // 0x4726bc: 0xc10ca68  jal         func_4329A0
label_4726c0:
    if (ctx->pc == 0x4726C0u) {
        ctx->pc = 0x4726C0u;
            // 0x4726c0: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4726C4u;
        goto label_4726c4;
    }
    ctx->pc = 0x4726BCu;
    SET_GPR_U32(ctx, 31, 0x4726C4u);
    ctx->pc = 0x4726C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4726BCu;
            // 0x4726c0: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4726C4u; }
        if (ctx->pc != 0x4726C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4726C4u; }
        if (ctx->pc != 0x4726C4u) { return; }
    }
    ctx->pc = 0x4726C4u;
label_4726c4:
    // 0x4726c4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4726c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4726c8:
    // 0x4726c8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4726c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4726cc:
    // 0x4726cc: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x4726ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_4726d0:
    // 0x4726d0: 0x2463e9e0  addiu       $v1, $v1, -0x1620
    ctx->pc = 0x4726d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961632));
label_4726d4:
    // 0x4726d4: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x4726d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_4726d8:
    // 0x4726d8: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4726d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_4726dc:
    // 0x4726dc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4726dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4726e0:
    // 0x4726e0: 0xae910054  sw          $s1, 0x54($s4)
    ctx->pc = 0x4726e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 17));
label_4726e4:
    // 0x4726e4: 0xae900058  sw          $s0, 0x58($s4)
    ctx->pc = 0x4726e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 16));
label_4726e8:
    // 0x4726e8: 0xae80005c  sw          $zero, 0x5C($s4)
    ctx->pc = 0x4726e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 0));
label_4726ec:
    // 0x4726ec: 0xae820060  sw          $v0, 0x60($s4)
    ctx->pc = 0x4726ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 96), GPR_U32(ctx, 2));
label_4726f0:
    // 0x4726f0: 0xae800064  sw          $zero, 0x64($s4)
    ctx->pc = 0x4726f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 0));
label_4726f4:
    // 0x4726f4: 0xae920068  sw          $s2, 0x68($s4)
    ctx->pc = 0x4726f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 104), GPR_U32(ctx, 18));
label_4726f8:
    // 0x4726f8: 0xae80006c  sw          $zero, 0x6C($s4)
    ctx->pc = 0x4726f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 108), GPR_U32(ctx, 0));
label_4726fc:
    // 0x4726fc: 0xae8001e0  sw          $zero, 0x1E0($s4)
    ctx->pc = 0x4726fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 480), GPR_U32(ctx, 0));
label_472700:
    // 0x472700: 0xae8001e4  sw          $zero, 0x1E4($s4)
    ctx->pc = 0x472700u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 484), GPR_U32(ctx, 0));
label_472704:
    // 0x472704: 0x8e840068  lw          $a0, 0x68($s4)
    ctx->pc = 0x472704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 104)));
label_472708:
    // 0x472708: 0xc0c9a58  jal         func_326960
label_47270c:
    if (ctx->pc == 0x47270Cu) {
        ctx->pc = 0x47270Cu;
            // 0x47270c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x472710u;
        goto label_472710;
    }
    ctx->pc = 0x472708u;
    SET_GPR_U32(ctx, 31, 0x472710u);
    ctx->pc = 0x47270Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x472708u;
            // 0x47270c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472710u; }
        if (ctx->pc != 0x472710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472710u; }
        if (ctx->pc != 0x472710u) { return; }
    }
    ctx->pc = 0x472710u;
label_472710:
    // 0x472710: 0xae82006c  sw          $v0, 0x6C($s4)
    ctx->pc = 0x472710u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 108), GPR_U32(ctx, 2));
label_472714:
    // 0x472714: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x472714u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_472718:
    // 0x472718: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x472718u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47271c:
    // 0x47271c: 0x2901021  addu        $v0, $s4, $s0
    ctx->pc = 0x47271cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_472720:
    // 0x472720: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x472720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_472724:
    // 0x472724: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x472724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_472728:
    // 0x472728: 0xc04a576  jal         func_1295D8
label_47272c:
    if (ctx->pc == 0x47272Cu) {
        ctx->pc = 0x47272Cu;
            // 0x47272c: 0x2406005c  addiu       $a2, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->pc = 0x472730u;
        goto label_472730;
    }
    ctx->pc = 0x472728u;
    SET_GPR_U32(ctx, 31, 0x472730u);
    ctx->pc = 0x47272Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x472728u;
            // 0x47272c: 0x2406005c  addiu       $a2, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472730u; }
        if (ctx->pc != 0x472730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472730u; }
        if (ctx->pc != 0x472730u) { return; }
    }
    ctx->pc = 0x472730u;
label_472730:
    // 0x472730: 0x2901021  addu        $v0, $s4, $s0
    ctx->pc = 0x472730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_472734:
    // 0x472734: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x472734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_472738:
    // 0x472738: 0xa4430076  sh          $v1, 0x76($v0)
    ctx->pc = 0x472738u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 118), (uint16_t)GPR_U32(ctx, 3));
label_47273c:
    // 0x47273c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x47273cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_472740:
    // 0x472740: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x472740u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_472744:
    // 0x472744: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_472748:
    if (ctx->pc == 0x472748u) {
        ctx->pc = 0x472748u;
            // 0x472748: 0x2610005c  addiu       $s0, $s0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
        ctx->pc = 0x47274Cu;
        goto label_47274c;
    }
    ctx->pc = 0x472744u;
    {
        const bool branch_taken_0x472744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x472748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x472744u;
            // 0x472748: 0x2610005c  addiu       $s0, $s0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x472744) {
            ctx->pc = 0x47271Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_47271c;
        }
    }
    ctx->pc = 0x47274Cu;
label_47274c:
    // 0x47274c: 0x8e840068  lw          $a0, 0x68($s4)
    ctx->pc = 0x47274cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 104)));
label_472750:
    // 0x472750: 0x307300ff  andi        $s3, $v1, 0xFF
    ctx->pc = 0x472750u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_472754:
    // 0x472754: 0xc11cca8  jal         func_4732A0
label_472758:
    if (ctx->pc == 0x472758u) {
        ctx->pc = 0x472758u;
            // 0x472758: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47275Cu;
        goto label_47275c;
    }
    ctx->pc = 0x472754u;
    SET_GPR_U32(ctx, 31, 0x47275Cu);
    ctx->pc = 0x472758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x472754u;
            // 0x472758: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4732A0u;
    if (runtime->hasFunction(0x4732A0u)) {
        auto targetFn = runtime->lookupFunction(0x4732A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47275Cu; }
        if (ctx->pc != 0x47275Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004732A0_0x4732a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47275Cu; }
        if (ctx->pc != 0x47275Cu) { return; }
    }
    ctx->pc = 0x47275Cu;
label_47275c:
    // 0x47275c: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x47275cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
label_472760:
    // 0x472760: 0x2c410009  sltiu       $at, $v0, 0x9
    ctx->pc = 0x472760u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_472764:
    // 0x472764: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
label_472768:
    if (ctx->pc == 0x472768u) {
        ctx->pc = 0x47276Cu;
        goto label_47276c;
    }
    ctx->pc = 0x472764u;
    {
        const bool branch_taken_0x472764 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x472764) {
            ctx->pc = 0x4727BCu;
            goto label_4727bc;
        }
    }
    ctx->pc = 0x47276Cu;
label_47276c:
    // 0x47276c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x47276cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_472770:
    // 0x472770: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x472770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_472774:
    // 0x472774: 0x2463f170  addiu       $v1, $v1, -0xE90
    ctx->pc = 0x472774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963568));
label_472778:
    // 0x472778: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x472778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47277c:
    // 0x47277c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x47277cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_472780:
    // 0x472780: 0x400008  jr          $v0
label_472784:
    if (ctx->pc == 0x472784u) {
        ctx->pc = 0x472788u;
        goto label_472788;
    }
    ctx->pc = 0x472780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x472788u: goto label_472788;
            case 0x472790u: goto label_472790;
            case 0x472798u: goto label_472798;
            case 0x4727A0u: goto label_4727a0;
            case 0x4727A8u: goto label_4727a8;
            case 0x4727B4u: goto label_4727b4;
            case 0x4727BCu: goto label_4727bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x472788u;
label_472788:
    // 0x472788: 0x1000000c  b           . + 4 + (0xC << 2)
label_47278c:
    if (ctx->pc == 0x47278Cu) {
        ctx->pc = 0x472790u;
        goto label_472790;
    }
    ctx->pc = 0x472788u;
    {
        const bool branch_taken_0x472788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x472788) {
            ctx->pc = 0x4727BCu;
            goto label_4727bc;
        }
    }
    ctx->pc = 0x472790u;
label_472790:
    // 0x472790: 0x1000000a  b           . + 4 + (0xA << 2)
label_472794:
    if (ctx->pc == 0x472794u) {
        ctx->pc = 0x472794u;
            // 0x472794: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x472798u;
        goto label_472798;
    }
    ctx->pc = 0x472790u;
    {
        const bool branch_taken_0x472790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x472794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x472790u;
            // 0x472794: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x472790) {
            ctx->pc = 0x4727BCu;
            goto label_4727bc;
        }
    }
    ctx->pc = 0x472798u;
label_472798:
    // 0x472798: 0x10000008  b           . + 4 + (0x8 << 2)
label_47279c:
    if (ctx->pc == 0x47279Cu) {
        ctx->pc = 0x47279Cu;
            // 0x47279c: 0x24150002  addiu       $s5, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4727A0u;
        goto label_4727a0;
    }
    ctx->pc = 0x472798u;
    {
        const bool branch_taken_0x472798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47279Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x472798u;
            // 0x47279c: 0x24150002  addiu       $s5, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x472798) {
            ctx->pc = 0x4727BCu;
            goto label_4727bc;
        }
    }
    ctx->pc = 0x4727A0u;
label_4727a0:
    // 0x4727a0: 0x10000006  b           . + 4 + (0x6 << 2)
label_4727a4:
    if (ctx->pc == 0x4727A4u) {
        ctx->pc = 0x4727A4u;
            // 0x4727a4: 0x24150003  addiu       $s5, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4727A8u;
        goto label_4727a8;
    }
    ctx->pc = 0x4727A0u;
    {
        const bool branch_taken_0x4727a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4727A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4727A0u;
            // 0x4727a4: 0x24150003  addiu       $s5, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4727a0) {
            ctx->pc = 0x4727BCu;
            goto label_4727bc;
        }
    }
    ctx->pc = 0x4727A8u;
label_4727a8:
    // 0x4727a8: 0x24150004  addiu       $s5, $zero, 0x4
    ctx->pc = 0x4727a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4727ac:
    // 0x4727ac: 0x10000003  b           . + 4 + (0x3 << 2)
label_4727b0:
    if (ctx->pc == 0x4727B0u) {
        ctx->pc = 0x4727B0u;
            // 0x4727b0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4727B4u;
        goto label_4727b4;
    }
    ctx->pc = 0x4727ACu;
    {
        const bool branch_taken_0x4727ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4727B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4727ACu;
            // 0x4727b0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4727ac) {
            ctx->pc = 0x4727BCu;
            goto label_4727bc;
        }
    }
    ctx->pc = 0x4727B4u;
label_4727b4:
    // 0x4727b4: 0x24150005  addiu       $s5, $zero, 0x5
    ctx->pc = 0x4727b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4727b8:
    // 0x4727b8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4727b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4727bc:
    // 0x4727bc: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x4727bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_4727c0:
    // 0x4727c0: 0x1510c0  sll         $v0, $s5, 3
    ctx->pc = 0x4727c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_4727c4:
    // 0x4727c4: 0x246306d0  addiu       $v1, $v1, 0x6D0
    ctx->pc = 0x4727c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1744));
label_4727c8:
    // 0x4727c8: 0x3c110061  lui         $s1, 0x61
    ctx->pc = 0x4727c8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)97 << 16));
label_4727cc:
    // 0x4727cc: 0x758021  addu        $s0, $v1, $s5
    ctx->pc = 0x4727ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_4727d0:
    // 0x4727d0: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x4727d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_4727d4:
    // 0x4727d4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x4727d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4727d8:
    // 0x4727d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4727d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4727dc:
    // 0x4727dc: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x4727dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_4727e0:
    // 0x4727e0: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x4727e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_4727e4:
    // 0x4727e4: 0x244206f0  addiu       $v0, $v0, 0x6F0
    ctx->pc = 0x4727e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1776));
label_4727e8:
    // 0x4727e8: 0x26310820  addiu       $s1, $s1, 0x820
    ctx->pc = 0x4727e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2080));
label_4727ec:
    // 0x4727ec: 0x43a821  addu        $s5, $v0, $v1
    ctx->pc = 0x4727ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4727f0:
    // 0x4727f0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x4727f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_4727f4:
    // 0x4727f4: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x4727f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
label_4727f8:
    // 0x4727f8: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x4727f8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_4727fc:
    // 0x4727fc: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x4727fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_472800:
    // 0x472800: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x472800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_472804:
    // 0x472804: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x472804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_472808:
    // 0x472808: 0xc11bb74  jal         func_46EDD0
label_47280c:
    if (ctx->pc == 0x47280Cu) {
        ctx->pc = 0x47280Cu;
            // 0x47280c: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x472810u;
        goto label_472810;
    }
    ctx->pc = 0x472808u;
    SET_GPR_U32(ctx, 31, 0x472810u);
    ctx->pc = 0x47280Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x472808u;
            // 0x47280c: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46EDD0u;
    if (runtime->hasFunction(0x46EDD0u)) {
        auto targetFn = runtime->lookupFunction(0x46EDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472810u; }
        if (ctx->pc != 0x472810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046EDD0_0x46edd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472810u; }
        if (ctx->pc != 0x472810u) { return; }
    }
    ctx->pc = 0x472810u;
label_472810:
    // 0x472810: 0xc11bb70  jal         func_46EDC0
label_472814:
    if (ctx->pc == 0x472814u) {
        ctx->pc = 0x472814u;
            // 0x472814: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x472818u;
        goto label_472818;
    }
    ctx->pc = 0x472810u;
    SET_GPR_U32(ctx, 31, 0x472818u);
    ctx->pc = 0x472814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x472810u;
            // 0x472814: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46EDC0u;
    if (runtime->hasFunction(0x46EDC0u)) {
        auto targetFn = runtime->lookupFunction(0x46EDC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472818u; }
        if (ctx->pc != 0x472818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046EDC0_0x46edc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472818u; }
        if (ctx->pc != 0x472818u) { return; }
    }
    ctx->pc = 0x472818u;
label_472818:
    // 0x472818: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x472818u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_47281c:
    // 0x47281c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x47281cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_472820:
    // 0x472820: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x472820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_472824:
    // 0x472824: 0x2463fff9  addiu       $v1, $v1, -0x7
    ctx->pc = 0x472824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967289));
label_472828:
    // 0x472828: 0x2c61000b  sltiu       $at, $v1, 0xB
    ctx->pc = 0x472828u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_47282c:
    // 0x47282c: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
label_472830:
    if (ctx->pc == 0x472830u) {
        ctx->pc = 0x472830u;
            // 0x472830: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x472834u;
        goto label_472834;
    }
    ctx->pc = 0x47282Cu;
    {
        const bool branch_taken_0x47282c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x472830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47282Cu;
            // 0x472830: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x47282c) {
            ctx->pc = 0x4728A0u;
            goto label_4728a0;
        }
    }
    ctx->pc = 0x472834u;
label_472834:
    // 0x472834: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x472834u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_472838:
    // 0x472838: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x472838u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_47283c:
    // 0x47283c: 0x2484f140  addiu       $a0, $a0, -0xEC0
    ctx->pc = 0x47283cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963520));
label_472840:
    // 0x472840: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x472840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_472844:
    // 0x472844: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x472844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_472848:
    // 0x472848: 0x600008  jr          $v1
label_47284c:
    if (ctx->pc == 0x47284Cu) {
        ctx->pc = 0x472850u;
        goto label_472850;
    }
    ctx->pc = 0x472848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x472850u: goto label_472850;
            case 0x472868u: goto label_472868;
            case 0x472878u: goto label_472878;
            case 0x472890u: goto label_472890;
            default: break;
        }
        return;
    }
    ctx->pc = 0x472850u;
label_472850:
    // 0x472850: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x472850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_472854:
    // 0x472854: 0xc11c418  jal         func_471060
label_472858:
    if (ctx->pc == 0x472858u) {
        ctx->pc = 0x472858u;
            // 0x472858: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47285Cu;
        goto label_47285c;
    }
    ctx->pc = 0x472854u;
    SET_GPR_U32(ctx, 31, 0x47285Cu);
    ctx->pc = 0x472858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x472854u;
            // 0x472858: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x471060u;
    if (runtime->hasFunction(0x471060u)) {
        auto targetFn = runtime->lookupFunction(0x471060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47285Cu; }
        if (ctx->pc != 0x47285Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00471060_0x471060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47285Cu; }
        if (ctx->pc != 0x47285Cu) { return; }
    }
    ctx->pc = 0x47285Cu;
label_47285c:
    // 0x47285c: 0x10000010  b           . + 4 + (0x10 << 2)
label_472860:
    if (ctx->pc == 0x472860u) {
        ctx->pc = 0x472860u;
            // 0x472860: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x472864u;
        goto label_472864;
    }
    ctx->pc = 0x47285Cu;
    {
        const bool branch_taken_0x47285c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x472860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47285Cu;
            // 0x472860: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x47285c) {
            ctx->pc = 0x4728A0u;
            goto label_4728a0;
        }
    }
    ctx->pc = 0x472864u;
label_472864:
    // 0x472864: 0x0  nop
    ctx->pc = 0x472864u;
    // NOP
label_472868:
    // 0x472868: 0xc11c418  jal         func_471060
label_47286c:
    if (ctx->pc == 0x47286Cu) {
        ctx->pc = 0x47286Cu;
            // 0x47286c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x472870u;
        goto label_472870;
    }
    ctx->pc = 0x472868u;
    SET_GPR_U32(ctx, 31, 0x472870u);
    ctx->pc = 0x47286Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x472868u;
            // 0x47286c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x471060u;
    if (runtime->hasFunction(0x471060u)) {
        auto targetFn = runtime->lookupFunction(0x471060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472870u; }
        if (ctx->pc != 0x472870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00471060_0x471060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472870u; }
        if (ctx->pc != 0x472870u) { return; }
    }
    ctx->pc = 0x472870u;
label_472870:
    // 0x472870: 0x1000000b  b           . + 4 + (0xB << 2)
label_472874:
    if (ctx->pc == 0x472874u) {
        ctx->pc = 0x472874u;
            // 0x472874: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x472878u;
        goto label_472878;
    }
    ctx->pc = 0x472870u;
    {
        const bool branch_taken_0x472870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x472874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x472870u;
            // 0x472874: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x472870) {
            ctx->pc = 0x4728A0u;
            goto label_4728a0;
        }
    }
    ctx->pc = 0x472878u;
label_472878:
    // 0x472878: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x472878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47287c:
    // 0x47287c: 0xc11c418  jal         func_471060
label_472880:
    if (ctx->pc == 0x472880u) {
        ctx->pc = 0x472880u;
            // 0x472880: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x472884u;
        goto label_472884;
    }
    ctx->pc = 0x47287Cu;
    SET_GPR_U32(ctx, 31, 0x472884u);
    ctx->pc = 0x472880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47287Cu;
            // 0x472880: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x471060u;
    if (runtime->hasFunction(0x471060u)) {
        auto targetFn = runtime->lookupFunction(0x471060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472884u; }
        if (ctx->pc != 0x472884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00471060_0x471060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472884u; }
        if (ctx->pc != 0x472884u) { return; }
    }
    ctx->pc = 0x472884u;
label_472884:
    // 0x472884: 0x10000006  b           . + 4 + (0x6 << 2)
label_472888:
    if (ctx->pc == 0x472888u) {
        ctx->pc = 0x472888u;
            // 0x472888: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x47288Cu;
        goto label_47288c;
    }
    ctx->pc = 0x472884u;
    {
        const bool branch_taken_0x472884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x472888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x472884u;
            // 0x472888: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x472884) {
            ctx->pc = 0x4728A0u;
            goto label_4728a0;
        }
    }
    ctx->pc = 0x47288Cu;
label_47288c:
    // 0x47288c: 0x0  nop
    ctx->pc = 0x47288cu;
    // NOP
label_472890:
    // 0x472890: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x472890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_472894:
    // 0x472894: 0xc11c418  jal         func_471060
label_472898:
    if (ctx->pc == 0x472898u) {
        ctx->pc = 0x472898u;
            // 0x472898: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x47289Cu;
        goto label_47289c;
    }
    ctx->pc = 0x472894u;
    SET_GPR_U32(ctx, 31, 0x47289Cu);
    ctx->pc = 0x472898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x472894u;
            // 0x472898: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x471060u;
    if (runtime->hasFunction(0x471060u)) {
        auto targetFn = runtime->lookupFunction(0x471060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47289Cu; }
        if (ctx->pc != 0x47289Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00471060_0x471060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47289Cu; }
        if (ctx->pc != 0x47289Cu) { return; }
    }
    ctx->pc = 0x47289Cu;
label_47289c:
    // 0x47289c: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x47289cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4728a0:
    // 0x4728a0: 0x14c0001b  bnez        $a2, . + 4 + (0x1B << 2)
label_4728a4:
    if (ctx->pc == 0x4728A4u) {
        ctx->pc = 0x4728A8u;
        goto label_4728a8;
    }
    ctx->pc = 0x4728A0u;
    {
        const bool branch_taken_0x4728a0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x4728a0) {
            ctx->pc = 0x472910u;
            goto label_472910;
        }
    }
    ctx->pc = 0x4728A8u;
label_4728a8:
    // 0x4728a8: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x4728a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_4728ac:
    // 0x4728ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4728acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4728b0:
    // 0x4728b0: 0x2405ffe0  addiu       $a1, $zero, -0x20
    ctx->pc = 0x4728b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
label_4728b4:
    // 0x4728b4: 0x24840820  addiu       $a0, $a0, 0x820
    ctx->pc = 0x4728b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2080));
label_4728b8:
    // 0x4728b8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x4728b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_4728bc:
    // 0x4728bc: 0x3103001f  andi        $v1, $t0, 0x1F
    ctx->pc = 0x4728bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)31);
label_4728c0:
    // 0x4728c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4728c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4728c4:
    // 0x4728c4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4728c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4728c8:
    // 0x4728c8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4728c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_4728cc:
    // 0x4728cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4728ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4728d0:
    // 0x4728d0: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x4728d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_4728d4:
    // 0x4728d4: 0x0  nop
    ctx->pc = 0x4728d4u;
    // NOP
label_4728d8:
    // 0x4728d8: 0x10f20009  beq         $a3, $s2, . + 4 + (0x9 << 2)
label_4728dc:
    if (ctx->pc == 0x4728DCu) {
        ctx->pc = 0x4728E0u;
        goto label_4728e0;
    }
    ctx->pc = 0x4728D8u;
    {
        const bool branch_taken_0x4728d8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 18));
        if (branch_taken_0x4728d8) {
            ctx->pc = 0x472900u;
            goto label_472900;
        }
    }
    ctx->pc = 0x4728E0u;
label_4728e0:
    // 0x4728e0: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x4728e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_4728e4:
    // 0x4728e4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x4728e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_4728e8:
    // 0x4728e8: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x4728e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_4728ec:
    // 0x4728ec: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x4728ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_4728f0:
    // 0x4728f0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_4728f4:
    if (ctx->pc == 0x4728F4u) {
        ctx->pc = 0x4728F8u;
        goto label_4728f8;
    }
    ctx->pc = 0x4728F0u;
    {
        const bool branch_taken_0x4728f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4728f0) {
            ctx->pc = 0x472900u;
            goto label_472900;
        }
    }
    ctx->pc = 0x4728F8u;
label_4728f8:
    // 0x4728f8: 0x1000ffef  b           . + 4 + (-0x11 << 2)
label_4728fc:
    if (ctx->pc == 0x4728FCu) {
        ctx->pc = 0x4728FCu;
            // 0x4728fc: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->pc = 0x472900u;
        goto label_472900;
    }
    ctx->pc = 0x4728F8u;
    {
        const bool branch_taken_0x4728f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4728FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4728F8u;
            // 0x4728fc: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4728f8) {
            ctx->pc = 0x4728B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4728b8;
        }
    }
    ctx->pc = 0x472900u;
label_472900:
    // 0x472900: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x472900u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_472904:
    // 0x472904: 0x28e20004  slti        $v0, $a3, 0x4
    ctx->pc = 0x472904u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
label_472908:
    // 0x472908: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_47290c:
    if (ctx->pc == 0x47290Cu) {
        ctx->pc = 0x47290Cu;
            // 0x47290c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->pc = 0x472910u;
        goto label_472910;
    }
    ctx->pc = 0x472908u;
    {
        const bool branch_taken_0x472908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47290Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x472908u;
            // 0x47290c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x472908) {
            ctx->pc = 0x4728D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4728d8;
        }
    }
    ctx->pc = 0x472910u;
label_472910:
    // 0x472910: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x472910u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_472914:
    // 0x472914: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x472914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_472918:
    // 0x472918: 0x12600015  beqz        $s3, . + 4 + (0x15 << 2)
label_47291c:
    if (ctx->pc == 0x47291Cu) {
        ctx->pc = 0x47291Cu;
            // 0x47291c: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x472920u;
        goto label_472920;
    }
    ctx->pc = 0x472918u;
    {
        const bool branch_taken_0x472918 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x47291Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x472918u;
            // 0x47291c: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x472918) {
            ctx->pc = 0x472970u;
            goto label_472970;
        }
    }
    ctx->pc = 0x472920u;
label_472920:
    // 0x472920: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x472920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_472924:
    // 0x472924: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x472924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_472928:
    // 0x472928: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_47292c:
    if (ctx->pc == 0x47292Cu) {
        ctx->pc = 0x472930u;
        goto label_472930;
    }
    ctx->pc = 0x472928u;
    {
        const bool branch_taken_0x472928 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x472928) {
            ctx->pc = 0x472938u;
            goto label_472938;
        }
    }
    ctx->pc = 0x472930u;
label_472930:
    // 0x472930: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x472930u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_472934:
    // 0x472934: 0x0  nop
    ctx->pc = 0x472934u;
    // NOP
label_472938:
    // 0x472938: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x472938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_47293c:
    // 0x47293c: 0x2a2b021  addu        $s6, $s5, $v0
    ctx->pc = 0x47293cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_472940:
    // 0x472940: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x472940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_472944:
    // 0x472944: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x472944u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_472948:
    // 0x472948: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x472948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47294c:
    // 0x47294c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x47294cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_472950:
    // 0x472950: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x472950u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_472954:
    // 0x472954: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x472954u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_472958:
    // 0x472958: 0xc11c370  jal         func_470DC0
label_47295c:
    if (ctx->pc == 0x47295Cu) {
        ctx->pc = 0x47295Cu;
            // 0x47295c: 0xa2220001  sb          $v0, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x472960u;
        goto label_472960;
    }
    ctx->pc = 0x472958u;
    SET_GPR_U32(ctx, 31, 0x472960u);
    ctx->pc = 0x47295Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x472958u;
            // 0x47295c: 0xa2220001  sb          $v0, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x470DC0u;
    if (runtime->hasFunction(0x470DC0u)) {
        auto targetFn = runtime->lookupFunction(0x470DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472960u; }
        if (ctx->pc != 0x472960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00470DC0_0x470dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472960u; }
        if (ctx->pc != 0x472960u) { return; }
    }
    ctx->pc = 0x472960u;
label_472960:
    // 0x472960: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x472960u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_472964:
    // 0x472964: 0x10000004  b           . + 4 + (0x4 << 2)
label_472968:
    if (ctx->pc == 0x472968u) {
        ctx->pc = 0x472968u;
            // 0x472968: 0xa2c20000  sb          $v0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x47296Cu;
        goto label_47296c;
    }
    ctx->pc = 0x472964u;
    {
        const bool branch_taken_0x472964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x472968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x472964u;
            // 0x472968: 0xa2c20000  sb          $v0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x472964) {
            ctx->pc = 0x472978u;
            goto label_472978;
        }
    }
    ctx->pc = 0x47296Cu;
label_47296c:
    // 0x47296c: 0x0  nop
    ctx->pc = 0x47296cu;
    // NOP
label_472970:
    // 0x472970: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x472970u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
label_472974:
    // 0x472974: 0x0  nop
    ctx->pc = 0x472974u;
    // NOP
label_472978:
    // 0x472978: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x472978u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_47297c:
    // 0x47297c: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x47297cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
label_472980:
    // 0x472980: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x472980u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_472984:
    // 0x472984: 0x26100006  addiu       $s0, $s0, 0x6
    ctx->pc = 0x472984u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
label_472988:
    // 0x472988: 0x1440ff99  bnez        $v0, . + 4 + (-0x67 << 2)
label_47298c:
    if (ctx->pc == 0x47298Cu) {
        ctx->pc = 0x47298Cu;
            // 0x47298c: 0x26b5004c  addiu       $s5, $s5, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 76));
        ctx->pc = 0x472990u;
        goto label_472990;
    }
    ctx->pc = 0x472988u;
    {
        const bool branch_taken_0x472988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47298Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x472988u;
            // 0x47298c: 0x26b5004c  addiu       $s5, $s5, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x472988) {
            ctx->pc = 0x4727F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4727f0;
        }
    }
    ctx->pc = 0x472990u;
label_472990:
    // 0x472990: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x472990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_472994:
    // 0x472994: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x472994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_472998:
    // 0x472998: 0x504000fe  beql        $v0, $zero, . + 4 + (0xFE << 2)
label_47299c:
    if (ctx->pc == 0x47299Cu) {
        ctx->pc = 0x47299Cu;
            // 0x47299c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4729A0u;
        goto label_4729a0;
    }
    ctx->pc = 0x472998u;
    {
        const bool branch_taken_0x472998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x472998) {
            ctx->pc = 0x47299Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x472998u;
            // 0x47299c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x472D94u;
            goto label_472d94;
        }
    }
    ctx->pc = 0x4729A0u;
label_4729a0:
    // 0x4729a0: 0x3c130061  lui         $s3, 0x61
    ctx->pc = 0x4729a0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)97 << 16));
label_4729a4:
    // 0x4729a4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x4729a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4729a8:
    // 0x4729a8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4729a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4729ac:
    // 0x4729ac: 0x26730820  addiu       $s3, $s3, 0x820
    ctx->pc = 0x4729acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2080));
label_4729b0:
    // 0x4729b0: 0x2952021  addu        $a0, $s4, $s5
    ctx->pc = 0x4729b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
label_4729b4:
    // 0x4729b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4729b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4729b8:
    // 0x4729b8: 0xa0820070  sb          $v0, 0x70($a0)
    ctx->pc = 0x4729b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 112), (uint8_t)GPR_U32(ctx, 2));
label_4729bc:
    // 0x4729bc: 0x24920070  addiu       $s2, $a0, 0x70
    ctx->pc = 0x4729bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_4729c0:
    // 0x4729c0: 0x94830072  lhu         $v1, 0x72($a0)
    ctx->pc = 0x4729c0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 114)));
label_4729c4:
    // 0x4729c4: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x4729c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_4729c8:
    // 0x4729c8: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x4729c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
label_4729cc:
    // 0x4729cc: 0xa4830072  sh          $v1, 0x72($a0)
    ctx->pc = 0x4729ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 114), (uint16_t)GPR_U32(ctx, 3));
label_4729d0:
    // 0x4729d0: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x4729d0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_4729d4:
    // 0x4729d4: 0x3083001f  andi        $v1, $a0, 0x1F
    ctx->pc = 0x4729d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
label_4729d8:
    // 0x4729d8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_4729dc:
    if (ctx->pc == 0x4729DCu) {
        ctx->pc = 0x4729DCu;
            // 0x4729dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4729E0u;
        goto label_4729e0;
    }
    ctx->pc = 0x4729D8u;
    {
        const bool branch_taken_0x4729d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4729DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4729D8u;
            // 0x4729dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4729d8) {
            ctx->pc = 0x4729F8u;
            goto label_4729f8;
        }
    }
    ctx->pc = 0x4729E0u;
label_4729e0:
    // 0x4729e0: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x4729e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
label_4729e4:
    // 0x4729e4: 0x3003001f  andi        $v1, $zero, 0x1F
    ctx->pc = 0x4729e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)31);
label_4729e8:
    // 0x4729e8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x4729e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_4729ec:
    // 0x4729ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4729ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4729f0:
    // 0x4729f0: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x4729f0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_4729f4:
    // 0x4729f4: 0x0  nop
    ctx->pc = 0x4729f4u;
    // NOP
label_4729f8:
    // 0x4729f8: 0x3c070061  lui         $a3, 0x61
    ctx->pc = 0x4729f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)97 << 16));
label_4729fc:
    // 0x4729fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4729fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_472a00:
    // 0x472a00: 0x24e70820  addiu       $a3, $a3, 0x820
    ctx->pc = 0x472a00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2080));
label_472a04:
    // 0x472a04: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x472a04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_472a08:
    // 0x472a08: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x472a08u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_472a0c:
    // 0x472a0c: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x472a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_472a10:
    // 0x472a10: 0x90c20070  lbu         $v0, 0x70($a2)
    ctx->pc = 0x472a10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 112)));
label_472a14:
    // 0x472a14: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_472a18:
    if (ctx->pc == 0x472A18u) {
        ctx->pc = 0x472A1Cu;
        goto label_472a1c;
    }
    ctx->pc = 0x472A14u;
    {
        const bool branch_taken_0x472a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x472a14) {
            ctx->pc = 0x472A58u;
            goto label_472a58;
        }
    }
    ctx->pc = 0x472A1Cu;
label_472a1c:
    // 0x472a1c: 0x1267000e  beq         $s3, $a3, . + 4 + (0xE << 2)
label_472a20:
    if (ctx->pc == 0x472A20u) {
        ctx->pc = 0x472A24u;
        goto label_472a24;
    }
    ctx->pc = 0x472A1Cu;
    {
        const bool branch_taken_0x472a1c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 7));
        if (branch_taken_0x472a1c) {
            ctx->pc = 0x472A58u;
            goto label_472a58;
        }
    }
    ctx->pc = 0x472A24u;
label_472a24:
    // 0x472a24: 0x90e50000  lbu         $a1, 0x0($a3)
    ctx->pc = 0x472a24u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_472a28:
    // 0x472a28: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x472a28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_472a2c:
    // 0x472a2c: 0x30a5001f  andi        $a1, $a1, 0x1F
    ctx->pc = 0x472a2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
label_472a30:
    // 0x472a30: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x472a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_472a34:
    // 0x472a34: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
label_472a38:
    if (ctx->pc == 0x472A38u) {
        ctx->pc = 0x472A3Cu;
        goto label_472a3c;
    }
    ctx->pc = 0x472A34u;
    {
        const bool branch_taken_0x472a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x472a34) {
            ctx->pc = 0x472A40u;
            goto label_472a40;
        }
    }
    ctx->pc = 0x472A3Cu;
label_472a3c:
    // 0x472a3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x472a3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_472a40:
    // 0x472a40: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
label_472a44:
    if (ctx->pc == 0x472A44u) {
        ctx->pc = 0x472A48u;
        goto label_472a48;
    }
    ctx->pc = 0x472A40u;
    {
        const bool branch_taken_0x472a40 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x472a40) {
            ctx->pc = 0x472A58u;
            goto label_472a58;
        }
    }
    ctx->pc = 0x472A48u;
label_472a48:
    // 0x472a48: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_472a4c:
    if (ctx->pc == 0x472A4Cu) {
        ctx->pc = 0x472A50u;
        goto label_472a50;
    }
    ctx->pc = 0x472A48u;
    {
        const bool branch_taken_0x472a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x472a48) {
            ctx->pc = 0x472A58u;
            goto label_472a58;
        }
    }
    ctx->pc = 0x472A50u;
label_472a50:
    // 0x472a50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x472a50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_472a54:
    // 0x472a54: 0x0  nop
    ctx->pc = 0x472a54u;
    // NOP
label_472a58:
    // 0x472a58: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x472a58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_472a5c:
    // 0x472a5c: 0x29020004  slti        $v0, $t0, 0x4
    ctx->pc = 0x472a5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4) ? 1 : 0);
label_472a60:
    // 0x472a60: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x472a60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_472a64:
    // 0x472a64: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_472a68:
    if (ctx->pc == 0x472A68u) {
        ctx->pc = 0x472A68u;
            // 0x472a68: 0x24c6005c  addiu       $a2, $a2, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 92));
        ctx->pc = 0x472A6Cu;
        goto label_472a6c;
    }
    ctx->pc = 0x472A64u;
    {
        const bool branch_taken_0x472a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x472A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x472A64u;
            // 0x472a68: 0x24c6005c  addiu       $a2, $a2, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x472a64) {
            ctx->pc = 0x472A10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_472a10;
        }
    }
    ctx->pc = 0x472A6Cu;
label_472a6c:
    // 0x472a6c: 0x16000038  bnez        $s0, . + 4 + (0x38 << 2)
label_472a70:
    if (ctx->pc == 0x472A70u) {
        ctx->pc = 0x472A74u;
        goto label_472a74;
    }
    ctx->pc = 0x472A6Cu;
    {
        const bool branch_taken_0x472a6c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x472a6c) {
            ctx->pc = 0x472B50u;
            goto label_472b50;
        }
    }
    ctx->pc = 0x472A74u;
label_472a74:
    // 0x472a74: 0xc11bb74  jal         func_46EDD0
label_472a78:
    if (ctx->pc == 0x472A78u) {
        ctx->pc = 0x472A7Cu;
        goto label_472a7c;
    }
    ctx->pc = 0x472A74u;
    SET_GPR_U32(ctx, 31, 0x472A7Cu);
    ctx->pc = 0x46EDD0u;
    if (runtime->hasFunction(0x46EDD0u)) {
        auto targetFn = runtime->lookupFunction(0x46EDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472A7Cu; }
        if (ctx->pc != 0x472A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046EDD0_0x46edd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472A7Cu; }
        if (ctx->pc != 0x472A7Cu) { return; }
    }
    ctx->pc = 0x472A7Cu;
label_472a7c:
    // 0x472a7c: 0xc11bb70  jal         func_46EDC0
label_472a80:
    if (ctx->pc == 0x472A80u) {
        ctx->pc = 0x472A80u;
            // 0x472a80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x472A84u;
        goto label_472a84;
    }
    ctx->pc = 0x472A7Cu;
    SET_GPR_U32(ctx, 31, 0x472A84u);
    ctx->pc = 0x472A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x472A7Cu;
            // 0x472a80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46EDC0u;
    if (runtime->hasFunction(0x46EDC0u)) {
        auto targetFn = runtime->lookupFunction(0x46EDC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472A84u; }
        if (ctx->pc != 0x472A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046EDC0_0x46edc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472A84u; }
        if (ctx->pc != 0x472A84u) { return; }
    }
    ctx->pc = 0x472A84u;
label_472a84:
    // 0x472a84: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x472a84u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_472a88:
    // 0x472a88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x472a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_472a8c:
    // 0x472a8c: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x472a8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_472a90:
    // 0x472a90: 0x2463fff9  addiu       $v1, $v1, -0x7
    ctx->pc = 0x472a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967289));
label_472a94:
    // 0x472a94: 0x2c61000b  sltiu       $at, $v1, 0xB
    ctx->pc = 0x472a94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_472a98:
    // 0x472a98: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
label_472a9c:
    if (ctx->pc == 0x472A9Cu) {
        ctx->pc = 0x472A9Cu;
            // 0x472a9c: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x472AA0u;
        goto label_472aa0;
    }
    ctx->pc = 0x472A98u;
    {
        const bool branch_taken_0x472a98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x472A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x472A98u;
            // 0x472a9c: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x472a98) {
            ctx->pc = 0x472B40u;
            goto label_472b40;
        }
    }
    ctx->pc = 0x472AA0u;
label_472aa0:
    // 0x472aa0: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x472aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_472aa4:
    // 0x472aa4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x472aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_472aa8:
    // 0x472aa8: 0x2484f110  addiu       $a0, $a0, -0xEF0
    ctx->pc = 0x472aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963472));
label_472aac:
    // 0x472aac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x472aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_472ab0:
    // 0x472ab0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x472ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_472ab4:
    // 0x472ab4: 0x600008  jr          $v1
label_472ab8:
    if (ctx->pc == 0x472AB8u) {
        ctx->pc = 0x472ABCu;
        goto label_472abc;
    }
    ctx->pc = 0x472AB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x472AC0u: goto label_472ac0;
            case 0x472AD8u: goto label_472ad8;
            case 0x472AE8u: goto label_472ae8;
            case 0x472AF8u: goto label_472af8;
            case 0x472B08u: goto label_472b08;
            case 0x472B18u: goto label_472b18;
            case 0x472B30u: goto label_472b30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x472ABCu;
label_472abc:
    // 0x472abc: 0x0  nop
    ctx->pc = 0x472abcu;
    // NOP
label_472ac0:
    // 0x472ac0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x472ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_472ac4:
    // 0x472ac4: 0xc11c418  jal         func_471060
label_472ac8:
    if (ctx->pc == 0x472AC8u) {
        ctx->pc = 0x472AC8u;
            // 0x472ac8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x472ACCu;
        goto label_472acc;
    }
    ctx->pc = 0x472AC4u;
    SET_GPR_U32(ctx, 31, 0x472ACCu);
    ctx->pc = 0x472AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x472AC4u;
            // 0x472ac8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x471060u;
    if (runtime->hasFunction(0x471060u)) {
        auto targetFn = runtime->lookupFunction(0x471060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472ACCu; }
        if (ctx->pc != 0x472ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00471060_0x471060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472ACCu; }
        if (ctx->pc != 0x472ACCu) { return; }
    }
    ctx->pc = 0x472ACCu;
label_472acc:
    // 0x472acc: 0x1000001c  b           . + 4 + (0x1C << 2)
label_472ad0:
    if (ctx->pc == 0x472AD0u) {
        ctx->pc = 0x472AD0u;
            // 0x472ad0: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x472AD4u;
        goto label_472ad4;
    }
    ctx->pc = 0x472ACCu;
    {
        const bool branch_taken_0x472acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x472AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x472ACCu;
            // 0x472ad0: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x472acc) {
            ctx->pc = 0x472B40u;
            goto label_472b40;
        }
    }
    ctx->pc = 0x472AD4u;
label_472ad4:
    // 0x472ad4: 0x0  nop
    ctx->pc = 0x472ad4u;
    // NOP
label_472ad8:
    // 0x472ad8: 0xc11c418  jal         func_471060
label_472adc:
    if (ctx->pc == 0x472ADCu) {
        ctx->pc = 0x472ADCu;
            // 0x472adc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x472AE0u;
        goto label_472ae0;
    }
    ctx->pc = 0x472AD8u;
    SET_GPR_U32(ctx, 31, 0x472AE0u);
    ctx->pc = 0x472ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x472AD8u;
            // 0x472adc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x471060u;
    if (runtime->hasFunction(0x471060u)) {
        auto targetFn = runtime->lookupFunction(0x471060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472AE0u; }
        if (ctx->pc != 0x472AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00471060_0x471060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472AE0u; }
        if (ctx->pc != 0x472AE0u) { return; }
    }
    ctx->pc = 0x472AE0u;
label_472ae0:
    // 0x472ae0: 0x10000017  b           . + 4 + (0x17 << 2)
label_472ae4:
    if (ctx->pc == 0x472AE4u) {
        ctx->pc = 0x472AE4u;
            // 0x472ae4: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x472AE8u;
        goto label_472ae8;
    }
    ctx->pc = 0x472AE0u;
    {
        const bool branch_taken_0x472ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x472AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x472AE0u;
            // 0x472ae4: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x472ae0) {
            ctx->pc = 0x472B40u;
            goto label_472b40;
        }
    }
    ctx->pc = 0x472AE8u;
label_472ae8:
    // 0x472ae8: 0xc11c418  jal         func_471060
label_472aec:
    if (ctx->pc == 0x472AECu) {
        ctx->pc = 0x472AECu;
            // 0x472aec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x472AF0u;
        goto label_472af0;
    }
    ctx->pc = 0x472AE8u;
    SET_GPR_U32(ctx, 31, 0x472AF0u);
    ctx->pc = 0x472AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x472AE8u;
            // 0x472aec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x471060u;
    if (runtime->hasFunction(0x471060u)) {
        auto targetFn = runtime->lookupFunction(0x471060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472AF0u; }
        if (ctx->pc != 0x472AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00471060_0x471060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472AF0u; }
        if (ctx->pc != 0x472AF0u) { return; }
    }
    ctx->pc = 0x472AF0u;
label_472af0:
    // 0x472af0: 0x10000013  b           . + 4 + (0x13 << 2)
label_472af4:
    if (ctx->pc == 0x472AF4u) {
        ctx->pc = 0x472AF4u;
            // 0x472af4: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x472AF8u;
        goto label_472af8;
    }
    ctx->pc = 0x472AF0u;
    {
        const bool branch_taken_0x472af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x472AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x472AF0u;
            // 0x472af4: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x472af0) {
            ctx->pc = 0x472B40u;
            goto label_472b40;
        }
    }
    ctx->pc = 0x472AF8u;
label_472af8:
    // 0x472af8: 0xc11c418  jal         func_471060
label_472afc:
    if (ctx->pc == 0x472AFCu) {
        ctx->pc = 0x472AFCu;
            // 0x472afc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x472B00u;
        goto label_472b00;
    }
    ctx->pc = 0x472AF8u;
    SET_GPR_U32(ctx, 31, 0x472B00u);
    ctx->pc = 0x472AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x472AF8u;
            // 0x472afc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x471060u;
    if (runtime->hasFunction(0x471060u)) {
        auto targetFn = runtime->lookupFunction(0x471060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472B00u; }
        if (ctx->pc != 0x472B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00471060_0x471060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472B00u; }
        if (ctx->pc != 0x472B00u) { return; }
    }
    ctx->pc = 0x472B00u;
label_472b00:
    // 0x472b00: 0x1000000f  b           . + 4 + (0xF << 2)
label_472b04:
    if (ctx->pc == 0x472B04u) {
        ctx->pc = 0x472B04u;
            // 0x472b04: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x472B08u;
        goto label_472b08;
    }
    ctx->pc = 0x472B00u;
    {
        const bool branch_taken_0x472b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x472B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x472B00u;
            // 0x472b04: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x472b00) {
            ctx->pc = 0x472B40u;
            goto label_472b40;
        }
    }
    ctx->pc = 0x472B08u;
label_472b08:
    // 0x472b08: 0xc11c418  jal         func_471060
label_472b0c:
    if (ctx->pc == 0x472B0Cu) {
        ctx->pc = 0x472B0Cu;
            // 0x472b0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x472B10u;
        goto label_472b10;
    }
    ctx->pc = 0x472B08u;
    SET_GPR_U32(ctx, 31, 0x472B10u);
    ctx->pc = 0x472B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x472B08u;
            // 0x472b0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x471060u;
    if (runtime->hasFunction(0x471060u)) {
        auto targetFn = runtime->lookupFunction(0x471060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472B10u; }
        if (ctx->pc != 0x472B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00471060_0x471060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472B10u; }
        if (ctx->pc != 0x472B10u) { return; }
    }
    ctx->pc = 0x472B10u;
label_472b10:
    // 0x472b10: 0x1000000b  b           . + 4 + (0xB << 2)
label_472b14:
    if (ctx->pc == 0x472B14u) {
        ctx->pc = 0x472B14u;
            // 0x472b14: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x472B18u;
        goto label_472b18;
    }
    ctx->pc = 0x472B10u;
    {
        const bool branch_taken_0x472b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x472B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x472B10u;
            // 0x472b14: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x472b10) {
            ctx->pc = 0x472B40u;
            goto label_472b40;
        }
    }
    ctx->pc = 0x472B18u;
label_472b18:
    // 0x472b18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x472b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_472b1c:
    // 0x472b1c: 0xc11c418  jal         func_471060
label_472b20:
    if (ctx->pc == 0x472B20u) {
        ctx->pc = 0x472B20u;
            // 0x472b20: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x472B24u;
        goto label_472b24;
    }
    ctx->pc = 0x472B1Cu;
    SET_GPR_U32(ctx, 31, 0x472B24u);
    ctx->pc = 0x472B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x472B1Cu;
            // 0x472b20: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x471060u;
    if (runtime->hasFunction(0x471060u)) {
        auto targetFn = runtime->lookupFunction(0x471060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472B24u; }
        if (ctx->pc != 0x472B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00471060_0x471060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472B24u; }
        if (ctx->pc != 0x472B24u) { return; }
    }
    ctx->pc = 0x472B24u;
label_472b24:
    // 0x472b24: 0x10000006  b           . + 4 + (0x6 << 2)
label_472b28:
    if (ctx->pc == 0x472B28u) {
        ctx->pc = 0x472B28u;
            // 0x472b28: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x472B2Cu;
        goto label_472b2c;
    }
    ctx->pc = 0x472B24u;
    {
        const bool branch_taken_0x472b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x472B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x472B24u;
            // 0x472b28: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x472b24) {
            ctx->pc = 0x472B40u;
            goto label_472b40;
        }
    }
    ctx->pc = 0x472B2Cu;
label_472b2c:
    // 0x472b2c: 0x0  nop
    ctx->pc = 0x472b2cu;
    // NOP
label_472b30:
    // 0x472b30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x472b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_472b34:
    // 0x472b34: 0xc11c418  jal         func_471060
label_472b38:
    if (ctx->pc == 0x472B38u) {
        ctx->pc = 0x472B38u;
            // 0x472b38: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x472B3Cu;
        goto label_472b3c;
    }
    ctx->pc = 0x472B34u;
    SET_GPR_U32(ctx, 31, 0x472B3Cu);
    ctx->pc = 0x472B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x472B34u;
            // 0x472b38: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x471060u;
    if (runtime->hasFunction(0x471060u)) {
        auto targetFn = runtime->lookupFunction(0x471060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472B3Cu; }
        if (ctx->pc != 0x472B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00471060_0x471060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472B3Cu; }
        if (ctx->pc != 0x472B3Cu) { return; }
    }
    ctx->pc = 0x472B3Cu;
label_472b3c:
    // 0x472b3c: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x472b3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_472b40:
    // 0x472b40: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
label_472b44:
    if (ctx->pc == 0x472B44u) {
        ctx->pc = 0x472B48u;
        goto label_472b48;
    }
    ctx->pc = 0x472B40u;
    {
        const bool branch_taken_0x472b40 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x472b40) {
            ctx->pc = 0x472B50u;
            goto label_472b50;
        }
    }
    ctx->pc = 0x472B48u;
label_472b48:
    // 0x472b48: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x472b48u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_472b4c:
    // 0x472b4c: 0x0  nop
    ctx->pc = 0x472b4cu;
    // NOP
label_472b50:
    // 0x472b50: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x472b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_472b54:
    // 0x472b54: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x472b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_472b58:
    // 0x472b58: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_472b5c:
    if (ctx->pc == 0x472B5Cu) {
        ctx->pc = 0x472B60u;
        goto label_472b60;
    }
    ctx->pc = 0x472B58u;
    {
        const bool branch_taken_0x472b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x472b58) {
            ctx->pc = 0x472B90u;
            goto label_472b90;
        }
    }
    ctx->pc = 0x472B60u;
label_472b60:
    // 0x472b60: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x472b60u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_472b64:
    // 0x472b64: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x472b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_472b68:
    // 0x472b68: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x472b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_472b6c:
    // 0x472b6c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_472b70:
    if (ctx->pc == 0x472B70u) {
        ctx->pc = 0x472B74u;
        goto label_472b74;
    }
    ctx->pc = 0x472B6Cu;
    {
        const bool branch_taken_0x472b6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x472b6c) {
            ctx->pc = 0x472B88u;
            goto label_472b88;
        }
    }
    ctx->pc = 0x472B74u;
label_472b74:
    // 0x472b74: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x472b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_472b78:
    // 0x472b78: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_472b7c:
    if (ctx->pc == 0x472B7Cu) {
        ctx->pc = 0x472B80u;
        goto label_472b80;
    }
    ctx->pc = 0x472B78u;
    {
        const bool branch_taken_0x472b78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x472b78) {
            ctx->pc = 0x472B88u;
            goto label_472b88;
        }
    }
    ctx->pc = 0x472B80u;
label_472b80:
    // 0x472b80: 0x10000003  b           . + 4 + (0x3 << 2)
label_472b84:
    if (ctx->pc == 0x472B84u) {
        ctx->pc = 0x472B88u;
        goto label_472b88;
    }
    ctx->pc = 0x472B80u;
    {
        const bool branch_taken_0x472b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x472b80) {
            ctx->pc = 0x472B90u;
            goto label_472b90;
        }
    }
    ctx->pc = 0x472B88u;
label_472b88:
    // 0x472b88: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x472b88u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_472b8c:
    // 0x472b8c: 0x0  nop
    ctx->pc = 0x472b8cu;
    // NOP
label_472b90:
    // 0x472b90: 0x16000013  bnez        $s0, . + 4 + (0x13 << 2)
label_472b94:
    if (ctx->pc == 0x472B94u) {
        ctx->pc = 0x472B98u;
        goto label_472b98;
    }
    ctx->pc = 0x472B90u;
    {
        const bool branch_taken_0x472b90 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x472b90) {
            ctx->pc = 0x472BE0u;
            goto label_472be0;
        }
    }
    ctx->pc = 0x472B98u;
label_472b98:
    // 0x472b98: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x472b98u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_472b9c:
    // 0x472b9c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x472b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_472ba0:
    // 0x472ba0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x472ba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_472ba4:
    // 0x472ba4: 0x2484e990  addiu       $a0, $a0, -0x1670
    ctx->pc = 0x472ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961552));
label_472ba8:
    // 0x472ba8: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x472ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_472bac:
    // 0x472bac: 0x0  nop
    ctx->pc = 0x472bacu;
    // NOP
label_472bb0:
    // 0x472bb0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x472bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_472bb4:
    // 0x472bb4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_472bb8:
    if (ctx->pc == 0x472BB8u) {
        ctx->pc = 0x472BBCu;
        goto label_472bbc;
    }
    ctx->pc = 0x472BB4u;
    {
        const bool branch_taken_0x472bb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x472bb4) {
            ctx->pc = 0x472BC8u;
            goto label_472bc8;
        }
    }
    ctx->pc = 0x472BBCu;
label_472bbc:
    // 0x472bbc: 0x1000003e  b           . + 4 + (0x3E << 2)
label_472bc0:
    if (ctx->pc == 0x472BC0u) {
        ctx->pc = 0x472BC0u;
            // 0x472bc0: 0xa2450001  sb          $a1, 0x1($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = 0x472BC4u;
        goto label_472bc4;
    }
    ctx->pc = 0x472BBCu;
    {
        const bool branch_taken_0x472bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x472BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x472BBCu;
            // 0x472bc0: 0xa2450001  sb          $a1, 0x1($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x472bbc) {
            ctx->pc = 0x472CB8u;
            goto label_472cb8;
        }
    }
    ctx->pc = 0x472BC4u;
label_472bc4:
    // 0x472bc4: 0x0  nop
    ctx->pc = 0x472bc4u;
    // NOP
label_472bc8:
    // 0x472bc8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x472bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_472bcc:
    // 0x472bcc: 0x28a20013  slti        $v0, $a1, 0x13
    ctx->pc = 0x472bccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)19) ? 1 : 0);
label_472bd0:
    // 0x472bd0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_472bd4:
    if (ctx->pc == 0x472BD4u) {
        ctx->pc = 0x472BD4u;
            // 0x472bd4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x472BD8u;
        goto label_472bd8;
    }
    ctx->pc = 0x472BD0u;
    {
        const bool branch_taken_0x472bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x472BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x472BD0u;
            // 0x472bd4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x472bd0) {
            ctx->pc = 0x472BB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_472bb0;
        }
    }
    ctx->pc = 0x472BD8u;
label_472bd8:
    // 0x472bd8: 0x10000037  b           . + 4 + (0x37 << 2)
label_472bdc:
    if (ctx->pc == 0x472BDCu) {
        ctx->pc = 0x472BE0u;
        goto label_472be0;
    }
    ctx->pc = 0x472BD8u;
    {
        const bool branch_taken_0x472bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x472bd8) {
            ctx->pc = 0x472CB8u;
            goto label_472cb8;
        }
    }
    ctx->pc = 0x472BE0u;
label_472be0:
    // 0x472be0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x472be0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_472be4:
    // 0x472be4: 0x3c0c0061  lui         $t4, 0x61
    ctx->pc = 0x472be4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)97 << 16));
label_472be8:
    // 0x472be8: 0x240a0012  addiu       $t2, $zero, 0x12
    ctx->pc = 0x472be8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_472bec:
    // 0x472bec: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x472becu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_472bf0:
    // 0x472bf0: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x472bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
label_472bf4:
    // 0x472bf4: 0x258c0820  addiu       $t4, $t4, 0x820
    ctx->pc = 0x472bf4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2080));
label_472bf8:
    // 0x472bf8: 0x92690000  lbu         $t1, 0x0($s3)
    ctx->pc = 0x472bf8u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_472bfc:
    // 0x472bfc: 0x30eb001f  andi        $t3, $a3, 0x1F
    ctx->pc = 0x472bfcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)31);
label_472c00:
    // 0x472c00: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x472c00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_472c04:
    // 0x472c04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x472c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_472c08:
    // 0x472c08: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x472c08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_472c0c:
    // 0x472c0c: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x472c0cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
label_472c10:
    // 0x472c10: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x472c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_472c14:
    // 0x472c14: 0x12b4825  or          $t1, $t1, $t3
    ctx->pc = 0x472c14u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
label_472c18:
    // 0x472c18: 0xa2690000  sb          $t1, 0x0($s3)
    ctx->pc = 0x472c18u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 9));
label_472c1c:
    // 0x472c1c: 0xa2470001  sb          $a3, 0x1($s2)
    ctx->pc = 0x472c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 7));
label_472c20:
    // 0x472c20: 0x90c90070  lbu         $t1, 0x70($a2)
    ctx->pc = 0x472c20u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 112)));
label_472c24:
    // 0x472c24: 0x11200010  beqz        $t1, . + 4 + (0x10 << 2)
label_472c28:
    if (ctx->pc == 0x472C28u) {
        ctx->pc = 0x472C2Cu;
        goto label_472c2c;
    }
    ctx->pc = 0x472C24u;
    {
        const bool branch_taken_0x472c24 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x472c24) {
            ctx->pc = 0x472C68u;
            goto label_472c68;
        }
    }
    ctx->pc = 0x472C2Cu;
label_472c2c:
    // 0x472c2c: 0x1265000e  beq         $s3, $a1, . + 4 + (0xE << 2)
label_472c30:
    if (ctx->pc == 0x472C30u) {
        ctx->pc = 0x472C34u;
        goto label_472c34;
    }
    ctx->pc = 0x472C2Cu;
    {
        const bool branch_taken_0x472c2c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 5));
        if (branch_taken_0x472c2c) {
            ctx->pc = 0x472C68u;
            goto label_472c68;
        }
    }
    ctx->pc = 0x472C34u;
label_472c34:
    // 0x472c34: 0x90ab0000  lbu         $t3, 0x0($a1)
    ctx->pc = 0x472c34u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_472c38:
    // 0x472c38: 0x92690000  lbu         $t1, 0x0($s3)
    ctx->pc = 0x472c38u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_472c3c:
    // 0x472c3c: 0x316b001f  andi        $t3, $t3, 0x1F
    ctx->pc = 0x472c3cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)31);
label_472c40:
    // 0x472c40: 0x3129001f  andi        $t1, $t1, 0x1F
    ctx->pc = 0x472c40u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)31);
label_472c44:
    // 0x472c44: 0x152b0002  bne         $t1, $t3, . + 4 + (0x2 << 2)
label_472c48:
    if (ctx->pc == 0x472C48u) {
        ctx->pc = 0x472C4Cu;
        goto label_472c4c;
    }
    ctx->pc = 0x472C44u;
    {
        const bool branch_taken_0x472c44 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 11));
        if (branch_taken_0x472c44) {
            ctx->pc = 0x472C50u;
            goto label_472c50;
        }
    }
    ctx->pc = 0x472C4Cu;
label_472c4c:
    // 0x472c4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x472c4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_472c50:
    // 0x472c50: 0x156a0005  bne         $t3, $t2, . + 4 + (0x5 << 2)
label_472c54:
    if (ctx->pc == 0x472C54u) {
        ctx->pc = 0x472C58u;
        goto label_472c58;
    }
    ctx->pc = 0x472C50u;
    {
        const bool branch_taken_0x472c50 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 10));
        if (branch_taken_0x472c50) {
            ctx->pc = 0x472C68u;
            goto label_472c68;
        }
    }
    ctx->pc = 0x472C58u;
label_472c58:
    // 0x472c58: 0x15200003  bnez        $t1, . + 4 + (0x3 << 2)
label_472c5c:
    if (ctx->pc == 0x472C5Cu) {
        ctx->pc = 0x472C60u;
        goto label_472c60;
    }
    ctx->pc = 0x472C58u;
    {
        const bool branch_taken_0x472c58 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x472c58) {
            ctx->pc = 0x472C68u;
            goto label_472c68;
        }
    }
    ctx->pc = 0x472C60u;
label_472c60:
    // 0x472c60: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x472c60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_472c64:
    // 0x472c64: 0x0  nop
    ctx->pc = 0x472c64u;
    // NOP
label_472c68:
    // 0x472c68: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x472c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_472c6c:
    // 0x472c6c: 0x28890004  slti        $t1, $a0, 0x4
    ctx->pc = 0x472c6cu;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
label_472c70:
    // 0x472c70: 0x24c6005c  addiu       $a2, $a2, 0x5C
    ctx->pc = 0x472c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 92));
label_472c74:
    // 0x472c74: 0x1520ffea  bnez        $t1, . + 4 + (-0x16 << 2)
label_472c78:
    if (ctx->pc == 0x472C78u) {
        ctx->pc = 0x472C78u;
            // 0x472c78: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x472C7Cu;
        goto label_472c7c;
    }
    ctx->pc = 0x472C74u;
    {
        const bool branch_taken_0x472c74 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x472C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x472C74u;
            // 0x472c78: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x472c74) {
            ctx->pc = 0x472C20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_472c20;
        }
    }
    ctx->pc = 0x472C7Cu;
label_472c7c:
    // 0x472c7c: 0x15000006  bnez        $t0, . + 4 + (0x6 << 2)
label_472c80:
    if (ctx->pc == 0x472C80u) {
        ctx->pc = 0x472C84u;
        goto label_472c84;
    }
    ctx->pc = 0x472C7Cu;
    {
        const bool branch_taken_0x472c7c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x472c7c) {
            ctx->pc = 0x472C98u;
            goto label_472c98;
        }
    }
    ctx->pc = 0x472C84u;
label_472c84:
    // 0x472c84: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x472c84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_472c88:
    // 0x472c88: 0x28e40004  slti        $a0, $a3, 0x4
    ctx->pc = 0x472c88u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
label_472c8c:
    // 0x472c8c: 0x1480ffda  bnez        $a0, . + 4 + (-0x26 << 2)
label_472c90:
    if (ctx->pc == 0x472C90u) {
        ctx->pc = 0x472C94u;
        goto label_472c94;
    }
    ctx->pc = 0x472C8Cu;
    {
        const bool branch_taken_0x472c8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x472c8c) {
            ctx->pc = 0x472BF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_472bf8;
        }
    }
    ctx->pc = 0x472C94u;
label_472c94:
    // 0x472c94: 0x0  nop
    ctx->pc = 0x472c94u;
    // NOP
label_472c98:
    // 0x472c98: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x472c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_472c9c:
    // 0x472c9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x472c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_472ca0:
    // 0x472ca0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x472ca0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_472ca4:
    // 0x472ca4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x472ca4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_472ca8:
    // 0x472ca8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x472ca8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_472cac:
    // 0x472cac: 0xc11c370  jal         func_470DC0
label_472cb0:
    if (ctx->pc == 0x472CB0u) {
        ctx->pc = 0x472CB0u;
            // 0x472cb0: 0xa2600001  sb          $zero, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x472CB4u;
        goto label_472cb4;
    }
    ctx->pc = 0x472CACu;
    SET_GPR_U32(ctx, 31, 0x472CB4u);
    ctx->pc = 0x472CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x472CACu;
            // 0x472cb0: 0xa2600001  sb          $zero, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x470DC0u;
    if (runtime->hasFunction(0x470DC0u)) {
        auto targetFn = runtime->lookupFunction(0x470DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472CB4u; }
        if (ctx->pc != 0x472CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00470DC0_0x470dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472CB4u; }
        if (ctx->pc != 0x472CB4u) { return; }
    }
    ctx->pc = 0x472CB4u;
label_472cb4:
    // 0x472cb4: 0x0  nop
    ctx->pc = 0x472cb4u;
    // NOP
label_472cb8:
    // 0x472cb8: 0x8e83006c  lw          $v1, 0x6C($s4)
    ctx->pc = 0x472cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_472cbc:
    // 0x472cbc: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x472cbcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_472cc0:
    // 0x472cc0: 0x8c710004  lw          $s1, 0x4($v1)
    ctx->pc = 0x472cc0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_472cc4:
    // 0x472cc4: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x472cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_472cc8:
    // 0x472cc8: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x472cc8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_472ccc:
    // 0x472ccc: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x472cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_472cd0:
    // 0x472cd0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x472cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_472cd4:
    // 0x472cd4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x472cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_472cd8:
    // 0x472cd8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x472cd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_472cdc:
    // 0x472cdc: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x472cdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_472ce0:
    // 0x472ce0: 0x320f809  jalr        $t9
label_472ce4:
    if (ctx->pc == 0x472CE4u) {
        ctx->pc = 0x472CE4u;
            // 0x472ce4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x472CE8u;
        goto label_472ce8;
    }
    ctx->pc = 0x472CE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x472CE8u);
        ctx->pc = 0x472CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x472CE0u;
            // 0x472ce4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x472CE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x472CE8u; }
            if (ctx->pc != 0x472CE8u) { return; }
        }
        }
    }
    ctx->pc = 0x472CE8u;
label_472ce8:
    // 0x472ce8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x472ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_472cec:
    // 0x472cec: 0xa222007c  sb          $v0, 0x7C($s1)
    ctx->pc = 0x472cecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 124), (uint8_t)GPR_U32(ctx, 2));
label_472cf0:
    // 0x472cf0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x472cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_472cf4:
    // 0x472cf4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x472cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_472cf8:
    // 0x472cf8: 0xc123848  jal         func_48E120
label_472cfc:
    if (ctx->pc == 0x472CFCu) {
        ctx->pc = 0x472CFCu;
            // 0x472cfc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x472D00u;
        goto label_472d00;
    }
    ctx->pc = 0x472CF8u;
    SET_GPR_U32(ctx, 31, 0x472D00u);
    ctx->pc = 0x472CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x472CF8u;
            // 0x472cfc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E120u;
    if (runtime->hasFunction(0x48E120u)) {
        auto targetFn = runtime->lookupFunction(0x48E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472D00u; }
        if (ctx->pc != 0x472D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E120_0x48e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472D00u; }
        if (ctx->pc != 0x472D00u) { return; }
    }
    ctx->pc = 0x472D00u;
label_472d00:
    // 0x472d00: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x472d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_472d04:
    // 0x472d04: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x472d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_472d08:
    // 0x472d08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x472d08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_472d0c:
    // 0x472d0c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x472d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_472d10:
    // 0x472d10: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x472d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_472d14:
    // 0x472d14: 0xa4430046  sh          $v1, 0x46($v0)
    ctx->pc = 0x472d14u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 3));
label_472d18:
    // 0x472d18: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x472d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_472d1c:
    // 0x472d1c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x472d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_472d20:
    // 0x472d20: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x472d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_472d24:
    // 0x472d24: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x472d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_472d28:
    // 0x472d28: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x472d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_472d2c:
    // 0x472d2c: 0xa4400046  sh          $zero, 0x46($v0)
    ctx->pc = 0x472d2cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
label_472d30:
    // 0x472d30: 0x8e83006c  lw          $v1, 0x6C($s4)
    ctx->pc = 0x472d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_472d34:
    // 0x472d34: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x472d34u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_472d38:
    // 0x472d38: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x472d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_472d3c:
    // 0x472d3c: 0xc12326c  jal         func_48C9B0
label_472d40:
    if (ctx->pc == 0x472D40u) {
        ctx->pc = 0x472D40u;
            // 0x472d40: 0x24450028  addiu       $a1, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x472D44u;
        goto label_472d44;
    }
    ctx->pc = 0x472D3Cu;
    SET_GPR_U32(ctx, 31, 0x472D44u);
    ctx->pc = 0x472D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x472D3Cu;
            // 0x472d40: 0x24450028  addiu       $a1, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C9B0u;
    if (runtime->hasFunction(0x48C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x48C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472D44u; }
        if (ctx->pc != 0x472D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C9B0_0x48c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472D44u; }
        if (ctx->pc != 0x472D44u) { return; }
    }
    ctx->pc = 0x472D44u;
label_472d44:
    // 0x472d44: 0x8e83006c  lw          $v1, 0x6C($s4)
    ctx->pc = 0x472d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_472d48:
    // 0x472d48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x472d48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_472d4c:
    // 0x472d4c: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x472d4cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_472d50:
    // 0x472d50: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x472d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_472d54:
    // 0x472d54: 0xc1232ac  jal         func_48CAB0
label_472d58:
    if (ctx->pc == 0x472D58u) {
        ctx->pc = 0x472D58u;
            // 0x472d58: 0x24450028  addiu       $a1, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x472D5Cu;
        goto label_472d5c;
    }
    ctx->pc = 0x472D54u;
    SET_GPR_U32(ctx, 31, 0x472D5Cu);
    ctx->pc = 0x472D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x472D54u;
            // 0x472d58: 0x24450028  addiu       $a1, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CAB0u;
    if (runtime->hasFunction(0x48CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x48CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472D5Cu; }
        if (ctx->pc != 0x472D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CAB0_0x48cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472D5Cu; }
        if (ctx->pc != 0x472D5Cu) { return; }
    }
    ctx->pc = 0x472D5Cu;
label_472d5c:
    // 0x472d5c: 0xa6400004  sh          $zero, 0x4($s2)
    ctx->pc = 0x472d5cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 0));
label_472d60:
    // 0x472d60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x472d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_472d64:
    // 0x472d64: 0xa6420006  sh          $v0, 0x6($s2)
    ctx->pc = 0x472d64u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 2));
label_472d68:
    // 0x472d68: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x472d68u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_472d6c:
    // 0x472d6c: 0x8e82005c  lw          $v0, 0x5C($s4)
    ctx->pc = 0x472d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
label_472d70:
    // 0x472d70: 0x26b5005c  addiu       $s5, $s5, 0x5C
    ctx->pc = 0x472d70u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 92));
label_472d74:
    // 0x472d74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x472d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_472d78:
    // 0x472d78: 0xae82005c  sw          $v0, 0x5C($s4)
    ctx->pc = 0x472d78u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 2));
label_472d7c:
    // 0x472d7c: 0x8e830058  lw          $v1, 0x58($s4)
    ctx->pc = 0x472d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
label_472d80:
    // 0x472d80: 0x2c3102b  sltu        $v0, $s6, $v1
    ctx->pc = 0x472d80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_472d84:
    // 0x472d84: 0x1440ff0a  bnez        $v0, . + 4 + (-0xF6 << 2)
label_472d88:
    if (ctx->pc == 0x472D88u) {
        ctx->pc = 0x472D88u;
            // 0x472d88: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x472D8Cu;
        goto label_472d8c;
    }
    ctx->pc = 0x472D84u;
    {
        const bool branch_taken_0x472d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x472D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x472D84u;
            // 0x472d88: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x472d84) {
            ctx->pc = 0x4729B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4729b0;
        }
    }
    ctx->pc = 0x472D8Cu;
label_472d8c:
    // 0x472d8c: 0x100000f7  b           . + 4 + (0xF7 << 2)
label_472d90:
    if (ctx->pc == 0x472D90u) {
        ctx->pc = 0x472D90u;
            // 0x472d90: 0xae830060  sw          $v1, 0x60($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 96), GPR_U32(ctx, 3));
        ctx->pc = 0x472D94u;
        goto label_472d94;
    }
    ctx->pc = 0x472D8Cu;
    {
        const bool branch_taken_0x472d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x472D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x472D8Cu;
            // 0x472d90: 0xae830060  sw          $v1, 0x60($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x472d8c) {
            ctx->pc = 0x47316Cu;
            goto label_47316c;
        }
    }
    ctx->pc = 0x472D94u;
label_472d94:
    // 0x472d94: 0x3c110061  lui         $s1, 0x61
    ctx->pc = 0x472d94u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)97 << 16));
label_472d98:
    // 0x472d98: 0xa2820070  sb          $v0, 0x70($s4)
    ctx->pc = 0x472d98u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 112), (uint8_t)GPR_U32(ctx, 2));
label_472d9c:
    // 0x472d9c: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x472d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_472da0:
    // 0x472da0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x472da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_472da4:
    // 0x472da4: 0x26310820  addiu       $s1, $s1, 0x820
    ctx->pc = 0x472da4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2080));
label_472da8:
    // 0x472da8: 0x90420820  lbu         $v0, 0x820($v0)
    ctx->pc = 0x472da8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2080)));
label_472dac:
    // 0x472dac: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x472dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_472db0:
    // 0x472db0: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_472db4:
    if (ctx->pc == 0x472DB4u) {
        ctx->pc = 0x472DB4u;
            // 0x472db4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x472DB8u;
        goto label_472db8;
    }
    ctx->pc = 0x472DB0u;
    {
        const bool branch_taken_0x472db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x472DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x472DB0u;
            // 0x472db4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x472db0) {
            ctx->pc = 0x472DD0u;
            goto label_472dd0;
        }
    }
    ctx->pc = 0x472DB8u;
label_472db8:
    // 0x472db8: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x472db8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_472dbc:
    // 0x472dbc: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x472dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
label_472dc0:
    // 0x472dc0: 0x3003001f  andi        $v1, $zero, 0x1F
    ctx->pc = 0x472dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)31);
label_472dc4:
    // 0x472dc4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x472dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_472dc8:
    // 0x472dc8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x472dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_472dcc:
    // 0x472dcc: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x472dccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_472dd0:
    // 0x472dd0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x472dd0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_472dd4:
    // 0x472dd4: 0x3c070061  lui         $a3, 0x61
    ctx->pc = 0x472dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)97 << 16));
label_472dd8:
    // 0x472dd8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x472dd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_472ddc:
    // 0x472ddc: 0x24e70820  addiu       $a3, $a3, 0x820
    ctx->pc = 0x472ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2080));
label_472de0:
    // 0x472de0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x472de0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_472de4:
    // 0x472de4: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x472de4u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_472de8:
    // 0x472de8: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x472de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_472dec:
    // 0x472dec: 0x3045001f  andi        $a1, $v0, 0x1F
    ctx->pc = 0x472decu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_472df0:
    // 0x472df0: 0x90c20070  lbu         $v0, 0x70($a2)
    ctx->pc = 0x472df0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 112)));
label_472df4:
    // 0x472df4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_472df8:
    if (ctx->pc == 0x472DF8u) {
        ctx->pc = 0x472DFCu;
        goto label_472dfc;
    }
    ctx->pc = 0x472DF4u;
    {
        const bool branch_taken_0x472df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x472df4) {
            ctx->pc = 0x472E30u;
            goto label_472e30;
        }
    }
    ctx->pc = 0x472DFCu;
label_472dfc:
    // 0x472dfc: 0x1227000c  beq         $s1, $a3, . + 4 + (0xC << 2)
label_472e00:
    if (ctx->pc == 0x472E00u) {
        ctx->pc = 0x472E04u;
        goto label_472e04;
    }
    ctx->pc = 0x472DFCu;
    {
        const bool branch_taken_0x472dfc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 7));
        if (branch_taken_0x472dfc) {
            ctx->pc = 0x472E30u;
            goto label_472e30;
        }
    }
    ctx->pc = 0x472E04u;
label_472e04:
    // 0x472e04: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x472e04u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_472e08:
    // 0x472e08: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x472e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_472e0c:
    // 0x472e0c: 0x14a20002  bne         $a1, $v0, . + 4 + (0x2 << 2)
label_472e10:
    if (ctx->pc == 0x472E10u) {
        ctx->pc = 0x472E14u;
        goto label_472e14;
    }
    ctx->pc = 0x472E0Cu;
    {
        const bool branch_taken_0x472e0c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x472e0c) {
            ctx->pc = 0x472E18u;
            goto label_472e18;
        }
    }
    ctx->pc = 0x472E14u;
label_472e14:
    // 0x472e14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x472e14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_472e18:
    // 0x472e18: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_472e1c:
    if (ctx->pc == 0x472E1Cu) {
        ctx->pc = 0x472E20u;
        goto label_472e20;
    }
    ctx->pc = 0x472E18u;
    {
        const bool branch_taken_0x472e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x472e18) {
            ctx->pc = 0x472E30u;
            goto label_472e30;
        }
    }
    ctx->pc = 0x472E20u;
label_472e20:
    // 0x472e20: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
label_472e24:
    if (ctx->pc == 0x472E24u) {
        ctx->pc = 0x472E28u;
        goto label_472e28;
    }
    ctx->pc = 0x472E20u;
    {
        const bool branch_taken_0x472e20 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x472e20) {
            ctx->pc = 0x472E30u;
            goto label_472e30;
        }
    }
    ctx->pc = 0x472E28u;
label_472e28:
    // 0x472e28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x472e28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_472e2c:
    // 0x472e2c: 0x0  nop
    ctx->pc = 0x472e2cu;
    // NOP
label_472e30:
    // 0x472e30: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x472e30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_472e34:
    // 0x472e34: 0x29020004  slti        $v0, $t0, 0x4
    ctx->pc = 0x472e34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4) ? 1 : 0);
label_472e38:
    // 0x472e38: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x472e38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_472e3c:
    // 0x472e3c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_472e40:
    if (ctx->pc == 0x472E40u) {
        ctx->pc = 0x472E40u;
            // 0x472e40: 0x24c6005c  addiu       $a2, $a2, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 92));
        ctx->pc = 0x472E44u;
        goto label_472e44;
    }
    ctx->pc = 0x472E3Cu;
    {
        const bool branch_taken_0x472e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x472E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x472E3Cu;
            // 0x472e40: 0x24c6005c  addiu       $a2, $a2, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x472e3c) {
            ctx->pc = 0x472DF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_472df0;
        }
    }
    ctx->pc = 0x472E44u;
label_472e44:
    // 0x472e44: 0x56000035  bnel        $s0, $zero, . + 4 + (0x35 << 2)
label_472e48:
    if (ctx->pc == 0x472E48u) {
        ctx->pc = 0x472E48u;
            // 0x472e48: 0x8e820054  lw          $v0, 0x54($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
        ctx->pc = 0x472E4Cu;
        goto label_472e4c;
    }
    ctx->pc = 0x472E44u;
    {
        const bool branch_taken_0x472e44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x472e44) {
            ctx->pc = 0x472E48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x472E44u;
            // 0x472e48: 0x8e820054  lw          $v0, 0x54($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x472F1Cu;
            goto label_472f1c;
        }
    }
    ctx->pc = 0x472E4Cu;
label_472e4c:
    // 0x472e4c: 0xc11bb74  jal         func_46EDD0
label_472e50:
    if (ctx->pc == 0x472E50u) {
        ctx->pc = 0x472E54u;
        goto label_472e54;
    }
    ctx->pc = 0x472E4Cu;
    SET_GPR_U32(ctx, 31, 0x472E54u);
    ctx->pc = 0x46EDD0u;
    if (runtime->hasFunction(0x46EDD0u)) {
        auto targetFn = runtime->lookupFunction(0x46EDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472E54u; }
        if (ctx->pc != 0x472E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046EDD0_0x46edd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472E54u; }
        if (ctx->pc != 0x472E54u) { return; }
    }
    ctx->pc = 0x472E54u;
label_472e54:
    // 0x472e54: 0xc11bb70  jal         func_46EDC0
label_472e58:
    if (ctx->pc == 0x472E58u) {
        ctx->pc = 0x472E58u;
            // 0x472e58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x472E5Cu;
        goto label_472e5c;
    }
    ctx->pc = 0x472E54u;
    SET_GPR_U32(ctx, 31, 0x472E5Cu);
    ctx->pc = 0x472E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x472E54u;
            // 0x472e58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46EDC0u;
    if (runtime->hasFunction(0x46EDC0u)) {
        auto targetFn = runtime->lookupFunction(0x46EDC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472E5Cu; }
        if (ctx->pc != 0x472E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046EDC0_0x46edc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472E5Cu; }
        if (ctx->pc != 0x472E5Cu) { return; }
    }
    ctx->pc = 0x472E5Cu;
label_472e5c:
    // 0x472e5c: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x472e5cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_472e60:
    // 0x472e60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x472e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_472e64:
    // 0x472e64: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x472e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_472e68:
    // 0x472e68: 0x2463fff9  addiu       $v1, $v1, -0x7
    ctx->pc = 0x472e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967289));
label_472e6c:
    // 0x472e6c: 0x2c61000b  sltiu       $at, $v1, 0xB
    ctx->pc = 0x472e6cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_472e70:
    // 0x472e70: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
label_472e74:
    if (ctx->pc == 0x472E74u) {
        ctx->pc = 0x472E74u;
            // 0x472e74: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x472E78u;
        goto label_472e78;
    }
    ctx->pc = 0x472E70u;
    {
        const bool branch_taken_0x472e70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x472E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x472E70u;
            // 0x472e74: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x472e70) {
            ctx->pc = 0x472F0Cu;
            goto label_472f0c;
        }
    }
    ctx->pc = 0x472E78u;
label_472e78:
    // 0x472e78: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x472e78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_472e7c:
    // 0x472e7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x472e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_472e80:
    // 0x472e80: 0x2484f0e0  addiu       $a0, $a0, -0xF20
    ctx->pc = 0x472e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963424));
label_472e84:
    // 0x472e84: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x472e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_472e88:
    // 0x472e88: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x472e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_472e8c:
    // 0x472e8c: 0x600008  jr          $v1
label_472e90:
    if (ctx->pc == 0x472E90u) {
        ctx->pc = 0x472E94u;
        goto label_472e94;
    }
    ctx->pc = 0x472E8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x472E94u: goto label_472e94;
            case 0x472EA8u: goto label_472ea8;
            case 0x472EB8u: goto label_472eb8;
            case 0x472EC8u: goto label_472ec8;
            case 0x472ED8u: goto label_472ed8;
            case 0x472EE8u: goto label_472ee8;
            case 0x472EFCu: goto label_472efc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x472E94u;
label_472e94:
    // 0x472e94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x472e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_472e98:
    // 0x472e98: 0xc11c418  jal         func_471060
label_472e9c:
    if (ctx->pc == 0x472E9Cu) {
        ctx->pc = 0x472E9Cu;
            // 0x472e9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x472EA0u;
        goto label_472ea0;
    }
    ctx->pc = 0x472E98u;
    SET_GPR_U32(ctx, 31, 0x472EA0u);
    ctx->pc = 0x472E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x472E98u;
            // 0x472e9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x471060u;
    if (runtime->hasFunction(0x471060u)) {
        auto targetFn = runtime->lookupFunction(0x471060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472EA0u; }
        if (ctx->pc != 0x472EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00471060_0x471060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472EA0u; }
        if (ctx->pc != 0x472EA0u) { return; }
    }
    ctx->pc = 0x472EA0u;
label_472ea0:
    // 0x472ea0: 0x1000001a  b           . + 4 + (0x1A << 2)
label_472ea4:
    if (ctx->pc == 0x472EA4u) {
        ctx->pc = 0x472EA4u;
            // 0x472ea4: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x472EA8u;
        goto label_472ea8;
    }
    ctx->pc = 0x472EA0u;
    {
        const bool branch_taken_0x472ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x472EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x472EA0u;
            // 0x472ea4: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x472ea0) {
            ctx->pc = 0x472F0Cu;
            goto label_472f0c;
        }
    }
    ctx->pc = 0x472EA8u;
label_472ea8:
    // 0x472ea8: 0xc11c418  jal         func_471060
label_472eac:
    if (ctx->pc == 0x472EACu) {
        ctx->pc = 0x472EACu;
            // 0x472eac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x472EB0u;
        goto label_472eb0;
    }
    ctx->pc = 0x472EA8u;
    SET_GPR_U32(ctx, 31, 0x472EB0u);
    ctx->pc = 0x472EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x472EA8u;
            // 0x472eac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x471060u;
    if (runtime->hasFunction(0x471060u)) {
        auto targetFn = runtime->lookupFunction(0x471060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472EB0u; }
        if (ctx->pc != 0x472EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00471060_0x471060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472EB0u; }
        if (ctx->pc != 0x472EB0u) { return; }
    }
    ctx->pc = 0x472EB0u;
label_472eb0:
    // 0x472eb0: 0x10000016  b           . + 4 + (0x16 << 2)
label_472eb4:
    if (ctx->pc == 0x472EB4u) {
        ctx->pc = 0x472EB4u;
            // 0x472eb4: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x472EB8u;
        goto label_472eb8;
    }
    ctx->pc = 0x472EB0u;
    {
        const bool branch_taken_0x472eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x472EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x472EB0u;
            // 0x472eb4: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x472eb0) {
            ctx->pc = 0x472F0Cu;
            goto label_472f0c;
        }
    }
    ctx->pc = 0x472EB8u;
label_472eb8:
    // 0x472eb8: 0xc11c418  jal         func_471060
label_472ebc:
    if (ctx->pc == 0x472EBCu) {
        ctx->pc = 0x472EBCu;
            // 0x472ebc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x472EC0u;
        goto label_472ec0;
    }
    ctx->pc = 0x472EB8u;
    SET_GPR_U32(ctx, 31, 0x472EC0u);
    ctx->pc = 0x472EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x472EB8u;
            // 0x472ebc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x471060u;
    if (runtime->hasFunction(0x471060u)) {
        auto targetFn = runtime->lookupFunction(0x471060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472EC0u; }
        if (ctx->pc != 0x472EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00471060_0x471060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472EC0u; }
        if (ctx->pc != 0x472EC0u) { return; }
    }
    ctx->pc = 0x472EC0u;
label_472ec0:
    // 0x472ec0: 0x10000012  b           . + 4 + (0x12 << 2)
label_472ec4:
    if (ctx->pc == 0x472EC4u) {
        ctx->pc = 0x472EC4u;
            // 0x472ec4: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x472EC8u;
        goto label_472ec8;
    }
    ctx->pc = 0x472EC0u;
    {
        const bool branch_taken_0x472ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x472EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x472EC0u;
            // 0x472ec4: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x472ec0) {
            ctx->pc = 0x472F0Cu;
            goto label_472f0c;
        }
    }
    ctx->pc = 0x472EC8u;
label_472ec8:
    // 0x472ec8: 0xc11c418  jal         func_471060
label_472ecc:
    if (ctx->pc == 0x472ECCu) {
        ctx->pc = 0x472ECCu;
            // 0x472ecc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x472ED0u;
        goto label_472ed0;
    }
    ctx->pc = 0x472EC8u;
    SET_GPR_U32(ctx, 31, 0x472ED0u);
    ctx->pc = 0x472ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x472EC8u;
            // 0x472ecc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x471060u;
    if (runtime->hasFunction(0x471060u)) {
        auto targetFn = runtime->lookupFunction(0x471060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472ED0u; }
        if (ctx->pc != 0x472ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00471060_0x471060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472ED0u; }
        if (ctx->pc != 0x472ED0u) { return; }
    }
    ctx->pc = 0x472ED0u;
label_472ed0:
    // 0x472ed0: 0x1000000e  b           . + 4 + (0xE << 2)
label_472ed4:
    if (ctx->pc == 0x472ED4u) {
        ctx->pc = 0x472ED4u;
            // 0x472ed4: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x472ED8u;
        goto label_472ed8;
    }
    ctx->pc = 0x472ED0u;
    {
        const bool branch_taken_0x472ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x472ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x472ED0u;
            // 0x472ed4: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x472ed0) {
            ctx->pc = 0x472F0Cu;
            goto label_472f0c;
        }
    }
    ctx->pc = 0x472ED8u;
label_472ed8:
    // 0x472ed8: 0xc11c418  jal         func_471060
label_472edc:
    if (ctx->pc == 0x472EDCu) {
        ctx->pc = 0x472EDCu;
            // 0x472edc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x472EE0u;
        goto label_472ee0;
    }
    ctx->pc = 0x472ED8u;
    SET_GPR_U32(ctx, 31, 0x472EE0u);
    ctx->pc = 0x472EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x472ED8u;
            // 0x472edc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x471060u;
    if (runtime->hasFunction(0x471060u)) {
        auto targetFn = runtime->lookupFunction(0x471060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472EE0u; }
        if (ctx->pc != 0x472EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00471060_0x471060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472EE0u; }
        if (ctx->pc != 0x472EE0u) { return; }
    }
    ctx->pc = 0x472EE0u;
label_472ee0:
    // 0x472ee0: 0x1000000a  b           . + 4 + (0xA << 2)
label_472ee4:
    if (ctx->pc == 0x472EE4u) {
        ctx->pc = 0x472EE4u;
            // 0x472ee4: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x472EE8u;
        goto label_472ee8;
    }
    ctx->pc = 0x472EE0u;
    {
        const bool branch_taken_0x472ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x472EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x472EE0u;
            // 0x472ee4: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x472ee0) {
            ctx->pc = 0x472F0Cu;
            goto label_472f0c;
        }
    }
    ctx->pc = 0x472EE8u;
label_472ee8:
    // 0x472ee8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x472ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_472eec:
    // 0x472eec: 0xc11c418  jal         func_471060
label_472ef0:
    if (ctx->pc == 0x472EF0u) {
        ctx->pc = 0x472EF0u;
            // 0x472ef0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x472EF4u;
        goto label_472ef4;
    }
    ctx->pc = 0x472EECu;
    SET_GPR_U32(ctx, 31, 0x472EF4u);
    ctx->pc = 0x472EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x472EECu;
            // 0x472ef0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x471060u;
    if (runtime->hasFunction(0x471060u)) {
        auto targetFn = runtime->lookupFunction(0x471060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472EF4u; }
        if (ctx->pc != 0x472EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00471060_0x471060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472EF4u; }
        if (ctx->pc != 0x472EF4u) { return; }
    }
    ctx->pc = 0x472EF4u;
label_472ef4:
    // 0x472ef4: 0x10000005  b           . + 4 + (0x5 << 2)
label_472ef8:
    if (ctx->pc == 0x472EF8u) {
        ctx->pc = 0x472EF8u;
            // 0x472ef8: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x472EFCu;
        goto label_472efc;
    }
    ctx->pc = 0x472EF4u;
    {
        const bool branch_taken_0x472ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x472EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x472EF4u;
            // 0x472ef8: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x472ef4) {
            ctx->pc = 0x472F0Cu;
            goto label_472f0c;
        }
    }
    ctx->pc = 0x472EFCu;
label_472efc:
    // 0x472efc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x472efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_472f00:
    // 0x472f00: 0xc11c418  jal         func_471060
label_472f04:
    if (ctx->pc == 0x472F04u) {
        ctx->pc = 0x472F04u;
            // 0x472f04: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x472F08u;
        goto label_472f08;
    }
    ctx->pc = 0x472F00u;
    SET_GPR_U32(ctx, 31, 0x472F08u);
    ctx->pc = 0x472F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x472F00u;
            // 0x472f04: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x471060u;
    if (runtime->hasFunction(0x471060u)) {
        auto targetFn = runtime->lookupFunction(0x471060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472F08u; }
        if (ctx->pc != 0x472F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00471060_0x471060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472F08u; }
        if (ctx->pc != 0x472F08u) { return; }
    }
    ctx->pc = 0x472F08u;
label_472f08:
    // 0x472f08: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x472f08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_472f0c:
    // 0x472f0c: 0x14c00002  bnez        $a2, . + 4 + (0x2 << 2)
label_472f10:
    if (ctx->pc == 0x472F10u) {
        ctx->pc = 0x472F14u;
        goto label_472f14;
    }
    ctx->pc = 0x472F0Cu;
    {
        const bool branch_taken_0x472f0c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x472f0c) {
            ctx->pc = 0x472F18u;
            goto label_472f18;
        }
    }
    ctx->pc = 0x472F14u;
label_472f14:
    // 0x472f14: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x472f14u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_472f18:
    // 0x472f18: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x472f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_472f1c:
    // 0x472f1c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x472f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_472f20:
    // 0x472f20: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_472f24:
    if (ctx->pc == 0x472F24u) {
        ctx->pc = 0x472F28u;
        goto label_472f28;
    }
    ctx->pc = 0x472F20u;
    {
        const bool branch_taken_0x472f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x472f20) {
            ctx->pc = 0x472F54u;
            goto label_472f54;
        }
    }
    ctx->pc = 0x472F28u;
label_472f28:
    // 0x472f28: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x472f28u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_472f2c:
    // 0x472f2c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x472f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_472f30:
    // 0x472f30: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x472f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_472f34:
    // 0x472f34: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
label_472f38:
    if (ctx->pc == 0x472F38u) {
        ctx->pc = 0x472F38u;
            // 0x472f38: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x472F3Cu;
        goto label_472f3c;
    }
    ctx->pc = 0x472F34u;
    {
        const bool branch_taken_0x472f34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x472f34) {
            ctx->pc = 0x472F38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x472F34u;
            // 0x472f38: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x472F54u;
            goto label_472f54;
        }
    }
    ctx->pc = 0x472F3Cu;
label_472f3c:
    // 0x472f3c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x472f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_472f40:
    // 0x472f40: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_472f44:
    if (ctx->pc == 0x472F44u) {
        ctx->pc = 0x472F48u;
        goto label_472f48;
    }
    ctx->pc = 0x472F40u;
    {
        const bool branch_taken_0x472f40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x472f40) {
            ctx->pc = 0x472F50u;
            goto label_472f50;
        }
    }
    ctx->pc = 0x472F48u;
label_472f48:
    // 0x472f48: 0x10000002  b           . + 4 + (0x2 << 2)
label_472f4c:
    if (ctx->pc == 0x472F4Cu) {
        ctx->pc = 0x472F50u;
        goto label_472f50;
    }
    ctx->pc = 0x472F48u;
    {
        const bool branch_taken_0x472f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x472f48) {
            ctx->pc = 0x472F54u;
            goto label_472f54;
        }
    }
    ctx->pc = 0x472F50u;
label_472f50:
    // 0x472f50: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x472f50u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_472f54:
    // 0x472f54: 0x16000010  bnez        $s0, . + 4 + (0x10 << 2)
label_472f58:
    if (ctx->pc == 0x472F58u) {
        ctx->pc = 0x472F5Cu;
        goto label_472f5c;
    }
    ctx->pc = 0x472F54u;
    {
        const bool branch_taken_0x472f54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x472f54) {
            ctx->pc = 0x472F98u;
            goto label_472f98;
        }
    }
    ctx->pc = 0x472F5Cu;
label_472f5c:
    // 0x472f5c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x472f5cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_472f60:
    // 0x472f60: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x472f60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_472f64:
    // 0x472f64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x472f64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_472f68:
    // 0x472f68: 0x2484e990  addiu       $a0, $a0, -0x1670
    ctx->pc = 0x472f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961552));
label_472f6c:
    // 0x472f6c: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x472f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_472f70:
    // 0x472f70: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x472f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_472f74:
    // 0x472f74: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
label_472f78:
    if (ctx->pc == 0x472F78u) {
        ctx->pc = 0x472F78u;
            // 0x472f78: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x472F7Cu;
        goto label_472f7c;
    }
    ctx->pc = 0x472F74u;
    {
        const bool branch_taken_0x472f74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x472f74) {
            ctx->pc = 0x472F78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x472F74u;
            // 0x472f78: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x472F84u;
            goto label_472f84;
        }
    }
    ctx->pc = 0x472F7Cu;
label_472f7c:
    // 0x472f7c: 0x1000003b  b           . + 4 + (0x3B << 2)
label_472f80:
    if (ctx->pc == 0x472F80u) {
        ctx->pc = 0x472F80u;
            // 0x472f80: 0xa2850071  sb          $a1, 0x71($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 113), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = 0x472F84u;
        goto label_472f84;
    }
    ctx->pc = 0x472F7Cu;
    {
        const bool branch_taken_0x472f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x472F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x472F7Cu;
            // 0x472f80: 0xa2850071  sb          $a1, 0x71($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 113), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x472f7c) {
            ctx->pc = 0x47306Cu;
            goto label_47306c;
        }
    }
    ctx->pc = 0x472F84u;
label_472f84:
    // 0x472f84: 0x28a20013  slti        $v0, $a1, 0x13
    ctx->pc = 0x472f84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)19) ? 1 : 0);
label_472f88:
    // 0x472f88: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_472f8c:
    if (ctx->pc == 0x472F8Cu) {
        ctx->pc = 0x472F8Cu;
            // 0x472f8c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x472F90u;
        goto label_472f90;
    }
    ctx->pc = 0x472F88u;
    {
        const bool branch_taken_0x472f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x472F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x472F88u;
            // 0x472f8c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x472f88) {
            ctx->pc = 0x472F70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_472f70;
        }
    }
    ctx->pc = 0x472F90u;
label_472f90:
    // 0x472f90: 0x10000037  b           . + 4 + (0x37 << 2)
label_472f94:
    if (ctx->pc == 0x472F94u) {
        ctx->pc = 0x472F94u;
            // 0x472f94: 0x8e83006c  lw          $v1, 0x6C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
        ctx->pc = 0x472F98u;
        goto label_472f98;
    }
    ctx->pc = 0x472F90u;
    {
        const bool branch_taken_0x472f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x472F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x472F90u;
            // 0x472f94: 0x8e83006c  lw          $v1, 0x6C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x472f90) {
            ctx->pc = 0x473070u;
            goto label_473070;
        }
    }
    ctx->pc = 0x472F98u;
label_472f98:
    // 0x472f98: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x472f98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_472f9c:
    // 0x472f9c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x472f9cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_472fa0:
    // 0x472fa0: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x472fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_472fa4:
    // 0x472fa4: 0x64070001  daddiu      $a3, $zero, 0x1
    ctx->pc = 0x472fa4u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_472fa8:
    // 0x472fa8: 0x2406ffe0  addiu       $a2, $zero, -0x20
    ctx->pc = 0x472fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
label_472fac:
    // 0x472fac: 0x24a50820  addiu       $a1, $a1, 0x820
    ctx->pc = 0x472facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2080));
label_472fb0:
    // 0x472fb0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x472fb0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_472fb4:
    // 0x472fb4: 0x3164001f  andi        $a0, $t3, 0x1F
    ctx->pc = 0x472fb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)31);
label_472fb8:
    // 0x472fb8: 0xe0602d  daddu       $t4, $a3, $zero
    ctx->pc = 0x472fb8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_472fbc:
    // 0x472fbc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x472fbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_472fc0:
    // 0x472fc0: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x472fc0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_472fc4:
    // 0x472fc4: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x472fc4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_472fc8:
    // 0x472fc8: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x472fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_472fcc:
    // 0x472fcc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x472fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_472fd0:
    // 0x472fd0: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x472fd0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_472fd4:
    // 0x472fd4: 0xa28b0071  sb          $t3, 0x71($s4)
    ctx->pc = 0x472fd4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 113), (uint8_t)GPR_U32(ctx, 11));
label_472fd8:
    // 0x472fd8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x472fd8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_472fdc:
    // 0x472fdc: 0x3044001f  andi        $a0, $v0, 0x1F
    ctx->pc = 0x472fdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_472fe0:
    // 0x472fe0: 0x91420070  lbu         $v0, 0x70($t2)
    ctx->pc = 0x472fe0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 112)));
label_472fe4:
    // 0x472fe4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_472fe8:
    if (ctx->pc == 0x472FE8u) {
        ctx->pc = 0x472FECu;
        goto label_472fec;
    }
    ctx->pc = 0x472FE4u;
    {
        const bool branch_taken_0x472fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x472fe4) {
            ctx->pc = 0x473020u;
            goto label_473020;
        }
    }
    ctx->pc = 0x472FECu;
label_472fec:
    // 0x472fec: 0x1229000c  beq         $s1, $t1, . + 4 + (0xC << 2)
label_472ff0:
    if (ctx->pc == 0x472FF0u) {
        ctx->pc = 0x472FF4u;
        goto label_472ff4;
    }
    ctx->pc = 0x472FECu;
    {
        const bool branch_taken_0x472fec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 9));
        if (branch_taken_0x472fec) {
            ctx->pc = 0x473020u;
            goto label_473020;
        }
    }
    ctx->pc = 0x472FF4u;
label_472ff4:
    // 0x472ff4: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x472ff4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_472ff8:
    // 0x472ff8: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x472ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_472ffc:
    // 0x472ffc: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
label_473000:
    if (ctx->pc == 0x473000u) {
        ctx->pc = 0x473004u;
        goto label_473004;
    }
    ctx->pc = 0x472FFCu;
    {
        const bool branch_taken_0x472ffc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x472ffc) {
            ctx->pc = 0x473008u;
            goto label_473008;
        }
    }
    ctx->pc = 0x473004u;
label_473004:
    // 0x473004: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x473004u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_473008:
    // 0x473008: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_47300c:
    if (ctx->pc == 0x47300Cu) {
        ctx->pc = 0x473010u;
        goto label_473010;
    }
    ctx->pc = 0x473008u;
    {
        const bool branch_taken_0x473008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x473008) {
            ctx->pc = 0x473020u;
            goto label_473020;
        }
    }
    ctx->pc = 0x473010u;
label_473010:
    // 0x473010: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_473014:
    if (ctx->pc == 0x473014u) {
        ctx->pc = 0x473018u;
        goto label_473018;
    }
    ctx->pc = 0x473010u;
    {
        const bool branch_taken_0x473010 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x473010) {
            ctx->pc = 0x473020u;
            goto label_473020;
        }
    }
    ctx->pc = 0x473018u;
label_473018:
    // 0x473018: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x473018u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47301c:
    // 0x47301c: 0x0  nop
    ctx->pc = 0x47301cu;
    // NOP
label_473020:
    // 0x473020: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x473020u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_473024:
    // 0x473024: 0x29020004  slti        $v0, $t0, 0x4
    ctx->pc = 0x473024u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4) ? 1 : 0);
label_473028:
    // 0x473028: 0x254a005c  addiu       $t2, $t2, 0x5C
    ctx->pc = 0x473028u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 92));
label_47302c:
    // 0x47302c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_473030:
    if (ctx->pc == 0x473030u) {
        ctx->pc = 0x473030u;
            // 0x473030: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->pc = 0x473034u;
        goto label_473034;
    }
    ctx->pc = 0x47302Cu;
    {
        const bool branch_taken_0x47302c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x473030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47302Cu;
            // 0x473030: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47302c) {
            ctx->pc = 0x472FE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_472fe0;
        }
    }
    ctx->pc = 0x473034u;
label_473034:
    // 0x473034: 0x15800006  bnez        $t4, . + 4 + (0x6 << 2)
label_473038:
    if (ctx->pc == 0x473038u) {
        ctx->pc = 0x47303Cu;
        goto label_47303c;
    }
    ctx->pc = 0x473034u;
    {
        const bool branch_taken_0x473034 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x473034) {
            ctx->pc = 0x473050u;
            goto label_473050;
        }
    }
    ctx->pc = 0x47303Cu;
label_47303c:
    // 0x47303c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x47303cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_473040:
    // 0x473040: 0x29620004  slti        $v0, $t3, 0x4
    ctx->pc = 0x473040u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)4) ? 1 : 0);
label_473044:
    // 0x473044: 0x5440ffdb  bnel        $v0, $zero, . + 4 + (-0x25 << 2)
label_473048:
    if (ctx->pc == 0x473048u) {
        ctx->pc = 0x473048u;
            // 0x473048: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x47304Cu;
        goto label_47304c;
    }
    ctx->pc = 0x473044u;
    {
        const bool branch_taken_0x473044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x473044) {
            ctx->pc = 0x473048u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x473044u;
            // 0x473048: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x472FB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_472fb4;
        }
    }
    ctx->pc = 0x47304Cu;
label_47304c:
    // 0x47304c: 0x0  nop
    ctx->pc = 0x47304cu;
    // NOP
label_473050:
    // 0x473050: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x473050u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_473054:
    // 0x473054: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x473054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_473058:
    // 0x473058: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x473058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47305c:
    // 0x47305c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x47305cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_473060:
    // 0x473060: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x473060u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_473064:
    // 0x473064: 0xc11c370  jal         func_470DC0
label_473068:
    if (ctx->pc == 0x473068u) {
        ctx->pc = 0x473068u;
            // 0x473068: 0xa2200001  sb          $zero, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x47306Cu;
        goto label_47306c;
    }
    ctx->pc = 0x473064u;
    SET_GPR_U32(ctx, 31, 0x47306Cu);
    ctx->pc = 0x473068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x473064u;
            // 0x473068: 0xa2200001  sb          $zero, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x470DC0u;
    if (runtime->hasFunction(0x470DC0u)) {
        auto targetFn = runtime->lookupFunction(0x470DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47306Cu; }
        if (ctx->pc != 0x47306Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00470DC0_0x470dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47306Cu; }
        if (ctx->pc != 0x47306Cu) { return; }
    }
    ctx->pc = 0x47306Cu;
label_47306c:
    // 0x47306c: 0x8e83006c  lw          $v1, 0x6C($s4)
    ctx->pc = 0x47306cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_473070:
    // 0x473070: 0x92820071  lbu         $v0, 0x71($s4)
    ctx->pc = 0x473070u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 113)));
label_473074:
    // 0x473074: 0x8c710004  lw          $s1, 0x4($v1)
    ctx->pc = 0x473074u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_473078:
    // 0x473078: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x473078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_47307c:
    // 0x47307c: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x47307cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_473080:
    // 0x473080: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x473080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_473084:
    // 0x473084: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x473084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_473088:
    // 0x473088: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x473088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_47308c:
    // 0x47308c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x47308cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_473090:
    // 0x473090: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x473090u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_473094:
    // 0x473094: 0x320f809  jalr        $t9
label_473098:
    if (ctx->pc == 0x473098u) {
        ctx->pc = 0x473098u;
            // 0x473098: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47309Cu;
        goto label_47309c;
    }
    ctx->pc = 0x473094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47309Cu);
        ctx->pc = 0x473098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x473094u;
            // 0x473098: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47309Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47309Cu; }
            if (ctx->pc != 0x47309Cu) { return; }
        }
        }
    }
    ctx->pc = 0x47309Cu;
label_47309c:
    // 0x47309c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47309cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4730a0:
    // 0x4730a0: 0xa222007c  sb          $v0, 0x7C($s1)
    ctx->pc = 0x4730a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 124), (uint8_t)GPR_U32(ctx, 2));
label_4730a4:
    // 0x4730a4: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x4730a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_4730a8:
    // 0x4730a8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4730a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4730ac:
    // 0x4730ac: 0xc123848  jal         func_48E120
label_4730b0:
    if (ctx->pc == 0x4730B0u) {
        ctx->pc = 0x4730B0u;
            // 0x4730b0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4730B4u;
        goto label_4730b4;
    }
    ctx->pc = 0x4730ACu;
    SET_GPR_U32(ctx, 31, 0x4730B4u);
    ctx->pc = 0x4730B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4730ACu;
            // 0x4730b0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E120u;
    if (runtime->hasFunction(0x48E120u)) {
        auto targetFn = runtime->lookupFunction(0x48E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4730B4u; }
        if (ctx->pc != 0x4730B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E120_0x48e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4730B4u; }
        if (ctx->pc != 0x4730B4u) { return; }
    }
    ctx->pc = 0x4730B4u;
label_4730b4:
    // 0x4730b4: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x4730b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_4730b8:
    // 0x4730b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4730b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4730bc:
    // 0x4730bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4730bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4730c0:
    // 0x4730c0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4730c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4730c4:
    // 0x4730c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4730c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4730c8:
    // 0x4730c8: 0xa4430046  sh          $v1, 0x46($v0)
    ctx->pc = 0x4730c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 3));
label_4730cc:
    // 0x4730cc: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x4730ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_4730d0:
    // 0x4730d0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x4730d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4730d4:
    // 0x4730d4: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x4730d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_4730d8:
    // 0x4730d8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4730d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4730dc:
    // 0x4730dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4730dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4730e0:
    // 0x4730e0: 0xa4400046  sh          $zero, 0x46($v0)
    ctx->pc = 0x4730e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
label_4730e4:
    // 0x4730e4: 0x8e83006c  lw          $v1, 0x6C($s4)
    ctx->pc = 0x4730e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_4730e8:
    // 0x4730e8: 0x92820071  lbu         $v0, 0x71($s4)
    ctx->pc = 0x4730e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 113)));
label_4730ec:
    // 0x4730ec: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x4730ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4730f0:
    // 0x4730f0: 0xc12326c  jal         func_48C9B0
label_4730f4:
    if (ctx->pc == 0x4730F4u) {
        ctx->pc = 0x4730F4u;
            // 0x4730f4: 0x24450028  addiu       $a1, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x4730F8u;
        goto label_4730f8;
    }
    ctx->pc = 0x4730F0u;
    SET_GPR_U32(ctx, 31, 0x4730F8u);
    ctx->pc = 0x4730F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4730F0u;
            // 0x4730f4: 0x24450028  addiu       $a1, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C9B0u;
    if (runtime->hasFunction(0x48C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x48C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4730F8u; }
        if (ctx->pc != 0x4730F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C9B0_0x48c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4730F8u; }
        if (ctx->pc != 0x4730F8u) { return; }
    }
    ctx->pc = 0x4730F8u;
label_4730f8:
    // 0x4730f8: 0x8e83006c  lw          $v1, 0x6C($s4)
    ctx->pc = 0x4730f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_4730fc:
    // 0x4730fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4730fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_473100:
    // 0x473100: 0x92820071  lbu         $v0, 0x71($s4)
    ctx->pc = 0x473100u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 113)));
label_473104:
    // 0x473104: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x473104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_473108:
    // 0x473108: 0xc1232ac  jal         func_48CAB0
label_47310c:
    if (ctx->pc == 0x47310Cu) {
        ctx->pc = 0x47310Cu;
            // 0x47310c: 0x24450028  addiu       $a1, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x473110u;
        goto label_473110;
    }
    ctx->pc = 0x473108u;
    SET_GPR_U32(ctx, 31, 0x473110u);
    ctx->pc = 0x47310Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x473108u;
            // 0x47310c: 0x24450028  addiu       $a1, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CAB0u;
    if (runtime->hasFunction(0x48CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x48CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473110u; }
        if (ctx->pc != 0x473110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CAB0_0x48cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473110u; }
        if (ctx->pc != 0x473110u) { return; }
    }
    ctx->pc = 0x473110u;
label_473110:
    // 0x473110: 0xa6800074  sh          $zero, 0x74($s4)
    ctx->pc = 0x473110u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 116), (uint16_t)GPR_U32(ctx, 0));
label_473114:
    // 0x473114: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x473114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_473118:
    // 0x473118: 0xa6850076  sh          $a1, 0x76($s4)
    ctx->pc = 0x473118u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 118), (uint16_t)GPR_U32(ctx, 5));
label_47311c:
    // 0x47311c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x47311cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_473120:
    // 0x473120: 0x8e84005c  lw          $a0, 0x5C($s4)
    ctx->pc = 0x473120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
label_473124:
    // 0x473124: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x473124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_473128:
    // 0x473128: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x473128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_47312c:
    // 0x47312c: 0xae84005c  sw          $a0, 0x5C($s4)
    ctx->pc = 0x47312cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 4));
label_473130:
    // 0x473130: 0x8c443e30  lw          $a0, 0x3E30($v0)
    ctx->pc = 0x473130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15920)));
label_473134:
    // 0x473134: 0x50830006  beql        $a0, $v1, . + 4 + (0x6 << 2)
label_473138:
    if (ctx->pc == 0x473138u) {
        ctx->pc = 0x473138u;
            // 0x473138: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x47313Cu;
        goto label_47313c;
    }
    ctx->pc = 0x473134u;
    {
        const bool branch_taken_0x473134 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x473134) {
            ctx->pc = 0x473138u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x473134u;
            // 0x473138: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x473150u;
            goto label_473150;
        }
    }
    ctx->pc = 0x47313Cu;
label_47313c:
    // 0x47313c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x47313cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_473140:
    // 0x473140: 0x5082000a  beql        $a0, $v0, . + 4 + (0xA << 2)
label_473144:
    if (ctx->pc == 0x473144u) {
        ctx->pc = 0x473144u;
            // 0x473144: 0xae850060  sw          $a1, 0x60($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 96), GPR_U32(ctx, 5));
        ctx->pc = 0x473148u;
        goto label_473148;
    }
    ctx->pc = 0x473140u;
    {
        const bool branch_taken_0x473140 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x473140) {
            ctx->pc = 0x473144u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x473140u;
            // 0x473144: 0xae850060  sw          $a1, 0x60($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 96), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47316Cu;
            goto label_47316c;
        }
    }
    ctx->pc = 0x473148u;
label_473148:
    // 0x473148: 0x10000009  b           . + 4 + (0x9 << 2)
label_47314c:
    if (ctx->pc == 0x47314Cu) {
        ctx->pc = 0x47314Cu;
            // 0x47314c: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->pc = 0x473150u;
        goto label_473150;
    }
    ctx->pc = 0x473148u;
    {
        const bool branch_taken_0x473148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47314Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x473148u;
            // 0x47314c: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x473148) {
            ctx->pc = 0x473170u;
            goto label_473170;
        }
    }
    ctx->pc = 0x473150u;
label_473150:
    // 0x473150: 0xae820060  sw          $v0, 0x60($s4)
    ctx->pc = 0x473150u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 96), GPR_U32(ctx, 2));
label_473154:
    // 0x473154: 0x9682012a  lhu         $v0, 0x12A($s4)
    ctx->pc = 0x473154u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 298)));
label_473158:
    // 0x473158: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x473158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
label_47315c:
    // 0x47315c: 0xa682012a  sh          $v0, 0x12A($s4)
    ctx->pc = 0x47315cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 298), (uint16_t)GPR_U32(ctx, 2));
label_473160:
    // 0x473160: 0x96820186  lhu         $v0, 0x186($s4)
    ctx->pc = 0x473160u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 390)));
label_473164:
    // 0x473164: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x473164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
label_473168:
    // 0x473168: 0xa6820186  sh          $v0, 0x186($s4)
    ctx->pc = 0x473168u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 390), (uint16_t)GPR_U32(ctx, 2));
label_47316c:
    // 0x47316c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x47316cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_473170:
    // 0x473170: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x473170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_473174:
    // 0x473174: 0xafa3008c  sw          $v1, 0x8C($sp)
    ctx->pc = 0x473174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 3));
label_473178:
    // 0x473178: 0x2404008c  addiu       $a0, $zero, 0x8C
    ctx->pc = 0x473178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_47317c:
    // 0x47317c: 0x8c4989f0  lw          $t1, -0x7610($v0)
    ctx->pc = 0x47317cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_473180:
    // 0x473180: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x473180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_473184:
    // 0x473184: 0x93a8008c  lbu         $t0, 0x8C($sp)
    ctx->pc = 0x473184u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 140)));
label_473188:
    // 0x473188: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x473188u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
label_47318c:
    // 0x47318c: 0x93a7008d  lbu         $a3, 0x8D($sp)
    ctx->pc = 0x47318cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 141)));
label_473190:
    // 0x473190: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x473190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_473194:
    // 0x473194: 0x93a6008e  lbu         $a2, 0x8E($sp)
    ctx->pc = 0x473194u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 142)));
label_473198:
    // 0x473198: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x473198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_47319c:
    // 0x47319c: 0xa128003c  sb          $t0, 0x3C($t1)
    ctx->pc = 0x47319cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 60), (uint8_t)GPR_U32(ctx, 8));
label_4731a0:
    // 0x4731a0: 0xa127003d  sb          $a3, 0x3D($t1)
    ctx->pc = 0x4731a0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 61), (uint8_t)GPR_U32(ctx, 7));
label_4731a4:
    // 0x4731a4: 0xa126003e  sb          $a2, 0x3E($t1)
    ctx->pc = 0x4731a4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 62), (uint8_t)GPR_U32(ctx, 6));
label_4731a8:
    // 0x4731a8: 0x93a6008f  lbu         $a2, 0x8F($sp)
    ctx->pc = 0x4731a8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 143)));
label_4731ac:
    // 0x4731ac: 0xa126003f  sb          $a2, 0x3F($t1)
    ctx->pc = 0x4731acu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 63), (uint8_t)GPR_U32(ctx, 6));
label_4731b0:
    // 0x4731b0: 0x9127003e  lbu         $a3, 0x3E($t1)
    ctx->pc = 0x4731b0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 62)));
label_4731b4:
    // 0x4731b4: 0x9126003d  lbu         $a2, 0x3D($t1)
    ctx->pc = 0x4731b4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 61)));
label_4731b8:
    // 0x4731b8: 0x9128003f  lbu         $t0, 0x3F($t1)
    ctx->pc = 0x4731b8u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 63)));
label_4731bc:
    // 0x4731bc: 0x73a38  dsll        $a3, $a3, 8
    ctx->pc = 0x4731bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 8);
label_4731c0:
    // 0x4731c0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x4731c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
label_4731c4:
    // 0x4731c4: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x4731c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
label_4731c8:
    // 0x4731c8: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x4731c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_4731cc:
    // 0x4731cc: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x4731ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_4731d0:
    // 0x4731d0: 0xfc65ec90  sd          $a1, -0x1370($v1)
    ctx->pc = 0x4731d0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294962320), GPR_U64(ctx, 5));
label_4731d4:
    // 0x4731d4: 0xc040180  jal         func_100600
label_4731d8:
    if (ctx->pc == 0x4731D8u) {
        ctx->pc = 0x4731D8u;
            // 0x4731d8: 0xfc45ee00  sd          $a1, -0x1200($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 4294962688), GPR_U64(ctx, 5));
        ctx->pc = 0x4731DCu;
        goto label_4731dc;
    }
    ctx->pc = 0x4731D4u;
    SET_GPR_U32(ctx, 31, 0x4731DCu);
    ctx->pc = 0x4731D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4731D4u;
            // 0x4731d8: 0xfc45ee00  sd          $a1, -0x1200($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 4294962688), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4731DCu; }
        if (ctx->pc != 0x4731DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4731DCu; }
        if (ctx->pc != 0x4731DCu) { return; }
    }
    ctx->pc = 0x4731DCu;
label_4731dc:
    // 0x4731dc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_4731e0:
    if (ctx->pc == 0x4731E0u) {
        ctx->pc = 0x4731E0u;
            // 0x4731e0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4731E4u;
        goto label_4731e4;
    }
    ctx->pc = 0x4731DCu;
    {
        const bool branch_taken_0x4731dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4731E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4731DCu;
            // 0x4731e0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4731dc) {
            ctx->pc = 0x473238u;
            goto label_473238;
        }
    }
    ctx->pc = 0x4731E4u;
label_4731e4:
    // 0x4731e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4731e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4731e8:
    // 0x4731e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4731e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4731ec:
    // 0x4731ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4731ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4731f0:
    // 0x4731f0: 0xc10ca68  jal         func_4329A0
label_4731f4:
    if (ctx->pc == 0x4731F4u) {
        ctx->pc = 0x4731F4u;
            // 0x4731f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4731F8u;
        goto label_4731f8;
    }
    ctx->pc = 0x4731F0u;
    SET_GPR_U32(ctx, 31, 0x4731F8u);
    ctx->pc = 0x4731F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4731F0u;
            // 0x4731f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4731F8u; }
        if (ctx->pc != 0x4731F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4731F8u; }
        if (ctx->pc != 0x4731F8u) { return; }
    }
    ctx->pc = 0x4731F8u;
label_4731f8:
    // 0x4731f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4731f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4731fc:
    // 0x4731fc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4731fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_473200:
    // 0x473200: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x473200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_473204:
    // 0x473204: 0x246331f0  addiu       $v1, $v1, 0x31F0
    ctx->pc = 0x473204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12784));
label_473208:
    // 0x473208: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x473208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_47320c:
    // 0x47320c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x47320cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_473210:
    // 0x473210: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x473210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_473214:
    // 0x473214: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x473214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
label_473218:
    // 0x473218: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x473218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
label_47321c:
    // 0x47321c: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x47321cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_473220:
    // 0x473220: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x473220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
label_473224:
    // 0x473224: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x473224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
label_473228:
    // 0x473228: 0xa2000057  sb          $zero, 0x57($s0)
    ctx->pc = 0x473228u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 87), (uint8_t)GPR_U32(ctx, 0));
label_47322c:
    // 0x47322c: 0xa2000056  sb          $zero, 0x56($s0)
    ctx->pc = 0x47322cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 86), (uint8_t)GPR_U32(ctx, 0));
label_473230:
    // 0x473230: 0xa2000055  sb          $zero, 0x55($s0)
    ctx->pc = 0x473230u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 85), (uint8_t)GPR_U32(ctx, 0));
label_473234:
    // 0x473234: 0xa2000054  sb          $zero, 0x54($s0)
    ctx->pc = 0x473234u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 0));
label_473238:
    // 0x473238: 0xae9001e4  sw          $s0, 0x1E4($s4)
    ctx->pc = 0x473238u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 484), GPR_U32(ctx, 16));
label_47323c:
    // 0x47323c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x47323cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_473240:
    // 0x473240: 0x8c44e3e8  lw          $a0, -0x1C18($v0)
    ctx->pc = 0x473240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_473244:
    // 0x473244: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x473244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
label_473248:
    // 0x473248: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x473248u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_47324c:
    // 0x47324c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x47324cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_473250:
    // 0x473250: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x473250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_473254:
    // 0x473254: 0xa0800013  sb          $zero, 0x13($a0)
    ctx->pc = 0x473254u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 19), (uint8_t)GPR_U32(ctx, 0));
label_473258:
    // 0x473258: 0x8c42e408  lw          $v0, -0x1BF8($v0)
    ctx->pc = 0x473258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960136)));
label_47325c:
    // 0x47325c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x47325cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_473260:
    // 0x473260: 0xc052774  jal         func_149DD0
label_473264:
    if (ctx->pc == 0x473264u) {
        ctx->pc = 0x473264u;
            // 0x473264: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
        ctx->pc = 0x473268u;
        goto label_473268;
    }
    ctx->pc = 0x473260u;
    SET_GPR_U32(ctx, 31, 0x473268u);
    ctx->pc = 0x473264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x473260u;
            // 0x473264: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149DD0u;
    if (runtime->hasFunction(0x149DD0u)) {
        auto targetFn = runtime->lookupFunction(0x149DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473268u; }
        if (ctx->pc != 0x473268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00149DD0_0x149dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473268u; }
        if (ctx->pc != 0x473268u) { return; }
    }
    ctx->pc = 0x473268u;
label_473268:
    // 0x473268: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x473268u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_47326c:
    // 0x47326c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x47326cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_473270:
    // 0x473270: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x473270u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_473274:
    // 0x473274: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x473274u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_473278:
    // 0x473278: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x473278u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_47327c:
    // 0x47327c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x47327cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_473280:
    // 0x473280: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x473280u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_473284:
    // 0x473284: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x473284u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_473288:
    // 0x473288: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x473288u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47328c:
    // 0x47328c: 0x3e00008  jr          $ra
label_473290:
    if (ctx->pc == 0x473290u) {
        ctx->pc = 0x473290u;
            // 0x473290: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x473294u;
        goto label_473294;
    }
    ctx->pc = 0x47328Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x473290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47328Cu;
            // 0x473290: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x473294u;
label_473294:
    // 0x473294: 0x0  nop
    ctx->pc = 0x473294u;
    // NOP
label_473298:
    // 0x473298: 0x0  nop
    ctx->pc = 0x473298u;
    // NOP
label_47329c:
    // 0x47329c: 0x0  nop
    ctx->pc = 0x47329cu;
    // NOP
}
