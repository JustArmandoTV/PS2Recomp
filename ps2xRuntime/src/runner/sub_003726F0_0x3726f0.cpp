#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003726F0
// Address: 0x3726f0 - 0x373090
void sub_003726F0_0x3726f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003726F0_0x3726f0");
#endif

    switch (ctx->pc) {
        case 0x3726f0u: goto label_3726f0;
        case 0x3726f4u: goto label_3726f4;
        case 0x3726f8u: goto label_3726f8;
        case 0x3726fcu: goto label_3726fc;
        case 0x372700u: goto label_372700;
        case 0x372704u: goto label_372704;
        case 0x372708u: goto label_372708;
        case 0x37270cu: goto label_37270c;
        case 0x372710u: goto label_372710;
        case 0x372714u: goto label_372714;
        case 0x372718u: goto label_372718;
        case 0x37271cu: goto label_37271c;
        case 0x372720u: goto label_372720;
        case 0x372724u: goto label_372724;
        case 0x372728u: goto label_372728;
        case 0x37272cu: goto label_37272c;
        case 0x372730u: goto label_372730;
        case 0x372734u: goto label_372734;
        case 0x372738u: goto label_372738;
        case 0x37273cu: goto label_37273c;
        case 0x372740u: goto label_372740;
        case 0x372744u: goto label_372744;
        case 0x372748u: goto label_372748;
        case 0x37274cu: goto label_37274c;
        case 0x372750u: goto label_372750;
        case 0x372754u: goto label_372754;
        case 0x372758u: goto label_372758;
        case 0x37275cu: goto label_37275c;
        case 0x372760u: goto label_372760;
        case 0x372764u: goto label_372764;
        case 0x372768u: goto label_372768;
        case 0x37276cu: goto label_37276c;
        case 0x372770u: goto label_372770;
        case 0x372774u: goto label_372774;
        case 0x372778u: goto label_372778;
        case 0x37277cu: goto label_37277c;
        case 0x372780u: goto label_372780;
        case 0x372784u: goto label_372784;
        case 0x372788u: goto label_372788;
        case 0x37278cu: goto label_37278c;
        case 0x372790u: goto label_372790;
        case 0x372794u: goto label_372794;
        case 0x372798u: goto label_372798;
        case 0x37279cu: goto label_37279c;
        case 0x3727a0u: goto label_3727a0;
        case 0x3727a4u: goto label_3727a4;
        case 0x3727a8u: goto label_3727a8;
        case 0x3727acu: goto label_3727ac;
        case 0x3727b0u: goto label_3727b0;
        case 0x3727b4u: goto label_3727b4;
        case 0x3727b8u: goto label_3727b8;
        case 0x3727bcu: goto label_3727bc;
        case 0x3727c0u: goto label_3727c0;
        case 0x3727c4u: goto label_3727c4;
        case 0x3727c8u: goto label_3727c8;
        case 0x3727ccu: goto label_3727cc;
        case 0x3727d0u: goto label_3727d0;
        case 0x3727d4u: goto label_3727d4;
        case 0x3727d8u: goto label_3727d8;
        case 0x3727dcu: goto label_3727dc;
        case 0x3727e0u: goto label_3727e0;
        case 0x3727e4u: goto label_3727e4;
        case 0x3727e8u: goto label_3727e8;
        case 0x3727ecu: goto label_3727ec;
        case 0x3727f0u: goto label_3727f0;
        case 0x3727f4u: goto label_3727f4;
        case 0x3727f8u: goto label_3727f8;
        case 0x3727fcu: goto label_3727fc;
        case 0x372800u: goto label_372800;
        case 0x372804u: goto label_372804;
        case 0x372808u: goto label_372808;
        case 0x37280cu: goto label_37280c;
        case 0x372810u: goto label_372810;
        case 0x372814u: goto label_372814;
        case 0x372818u: goto label_372818;
        case 0x37281cu: goto label_37281c;
        case 0x372820u: goto label_372820;
        case 0x372824u: goto label_372824;
        case 0x372828u: goto label_372828;
        case 0x37282cu: goto label_37282c;
        case 0x372830u: goto label_372830;
        case 0x372834u: goto label_372834;
        case 0x372838u: goto label_372838;
        case 0x37283cu: goto label_37283c;
        case 0x372840u: goto label_372840;
        case 0x372844u: goto label_372844;
        case 0x372848u: goto label_372848;
        case 0x37284cu: goto label_37284c;
        case 0x372850u: goto label_372850;
        case 0x372854u: goto label_372854;
        case 0x372858u: goto label_372858;
        case 0x37285cu: goto label_37285c;
        case 0x372860u: goto label_372860;
        case 0x372864u: goto label_372864;
        case 0x372868u: goto label_372868;
        case 0x37286cu: goto label_37286c;
        case 0x372870u: goto label_372870;
        case 0x372874u: goto label_372874;
        case 0x372878u: goto label_372878;
        case 0x37287cu: goto label_37287c;
        case 0x372880u: goto label_372880;
        case 0x372884u: goto label_372884;
        case 0x372888u: goto label_372888;
        case 0x37288cu: goto label_37288c;
        case 0x372890u: goto label_372890;
        case 0x372894u: goto label_372894;
        case 0x372898u: goto label_372898;
        case 0x37289cu: goto label_37289c;
        case 0x3728a0u: goto label_3728a0;
        case 0x3728a4u: goto label_3728a4;
        case 0x3728a8u: goto label_3728a8;
        case 0x3728acu: goto label_3728ac;
        case 0x3728b0u: goto label_3728b0;
        case 0x3728b4u: goto label_3728b4;
        case 0x3728b8u: goto label_3728b8;
        case 0x3728bcu: goto label_3728bc;
        case 0x3728c0u: goto label_3728c0;
        case 0x3728c4u: goto label_3728c4;
        case 0x3728c8u: goto label_3728c8;
        case 0x3728ccu: goto label_3728cc;
        case 0x3728d0u: goto label_3728d0;
        case 0x3728d4u: goto label_3728d4;
        case 0x3728d8u: goto label_3728d8;
        case 0x3728dcu: goto label_3728dc;
        case 0x3728e0u: goto label_3728e0;
        case 0x3728e4u: goto label_3728e4;
        case 0x3728e8u: goto label_3728e8;
        case 0x3728ecu: goto label_3728ec;
        case 0x3728f0u: goto label_3728f0;
        case 0x3728f4u: goto label_3728f4;
        case 0x3728f8u: goto label_3728f8;
        case 0x3728fcu: goto label_3728fc;
        case 0x372900u: goto label_372900;
        case 0x372904u: goto label_372904;
        case 0x372908u: goto label_372908;
        case 0x37290cu: goto label_37290c;
        case 0x372910u: goto label_372910;
        case 0x372914u: goto label_372914;
        case 0x372918u: goto label_372918;
        case 0x37291cu: goto label_37291c;
        case 0x372920u: goto label_372920;
        case 0x372924u: goto label_372924;
        case 0x372928u: goto label_372928;
        case 0x37292cu: goto label_37292c;
        case 0x372930u: goto label_372930;
        case 0x372934u: goto label_372934;
        case 0x372938u: goto label_372938;
        case 0x37293cu: goto label_37293c;
        case 0x372940u: goto label_372940;
        case 0x372944u: goto label_372944;
        case 0x372948u: goto label_372948;
        case 0x37294cu: goto label_37294c;
        case 0x372950u: goto label_372950;
        case 0x372954u: goto label_372954;
        case 0x372958u: goto label_372958;
        case 0x37295cu: goto label_37295c;
        case 0x372960u: goto label_372960;
        case 0x372964u: goto label_372964;
        case 0x372968u: goto label_372968;
        case 0x37296cu: goto label_37296c;
        case 0x372970u: goto label_372970;
        case 0x372974u: goto label_372974;
        case 0x372978u: goto label_372978;
        case 0x37297cu: goto label_37297c;
        case 0x372980u: goto label_372980;
        case 0x372984u: goto label_372984;
        case 0x372988u: goto label_372988;
        case 0x37298cu: goto label_37298c;
        case 0x372990u: goto label_372990;
        case 0x372994u: goto label_372994;
        case 0x372998u: goto label_372998;
        case 0x37299cu: goto label_37299c;
        case 0x3729a0u: goto label_3729a0;
        case 0x3729a4u: goto label_3729a4;
        case 0x3729a8u: goto label_3729a8;
        case 0x3729acu: goto label_3729ac;
        case 0x3729b0u: goto label_3729b0;
        case 0x3729b4u: goto label_3729b4;
        case 0x3729b8u: goto label_3729b8;
        case 0x3729bcu: goto label_3729bc;
        case 0x3729c0u: goto label_3729c0;
        case 0x3729c4u: goto label_3729c4;
        case 0x3729c8u: goto label_3729c8;
        case 0x3729ccu: goto label_3729cc;
        case 0x3729d0u: goto label_3729d0;
        case 0x3729d4u: goto label_3729d4;
        case 0x3729d8u: goto label_3729d8;
        case 0x3729dcu: goto label_3729dc;
        case 0x3729e0u: goto label_3729e0;
        case 0x3729e4u: goto label_3729e4;
        case 0x3729e8u: goto label_3729e8;
        case 0x3729ecu: goto label_3729ec;
        case 0x3729f0u: goto label_3729f0;
        case 0x3729f4u: goto label_3729f4;
        case 0x3729f8u: goto label_3729f8;
        case 0x3729fcu: goto label_3729fc;
        case 0x372a00u: goto label_372a00;
        case 0x372a04u: goto label_372a04;
        case 0x372a08u: goto label_372a08;
        case 0x372a0cu: goto label_372a0c;
        case 0x372a10u: goto label_372a10;
        case 0x372a14u: goto label_372a14;
        case 0x372a18u: goto label_372a18;
        case 0x372a1cu: goto label_372a1c;
        case 0x372a20u: goto label_372a20;
        case 0x372a24u: goto label_372a24;
        case 0x372a28u: goto label_372a28;
        case 0x372a2cu: goto label_372a2c;
        case 0x372a30u: goto label_372a30;
        case 0x372a34u: goto label_372a34;
        case 0x372a38u: goto label_372a38;
        case 0x372a3cu: goto label_372a3c;
        case 0x372a40u: goto label_372a40;
        case 0x372a44u: goto label_372a44;
        case 0x372a48u: goto label_372a48;
        case 0x372a4cu: goto label_372a4c;
        case 0x372a50u: goto label_372a50;
        case 0x372a54u: goto label_372a54;
        case 0x372a58u: goto label_372a58;
        case 0x372a5cu: goto label_372a5c;
        case 0x372a60u: goto label_372a60;
        case 0x372a64u: goto label_372a64;
        case 0x372a68u: goto label_372a68;
        case 0x372a6cu: goto label_372a6c;
        case 0x372a70u: goto label_372a70;
        case 0x372a74u: goto label_372a74;
        case 0x372a78u: goto label_372a78;
        case 0x372a7cu: goto label_372a7c;
        case 0x372a80u: goto label_372a80;
        case 0x372a84u: goto label_372a84;
        case 0x372a88u: goto label_372a88;
        case 0x372a8cu: goto label_372a8c;
        case 0x372a90u: goto label_372a90;
        case 0x372a94u: goto label_372a94;
        case 0x372a98u: goto label_372a98;
        case 0x372a9cu: goto label_372a9c;
        case 0x372aa0u: goto label_372aa0;
        case 0x372aa4u: goto label_372aa4;
        case 0x372aa8u: goto label_372aa8;
        case 0x372aacu: goto label_372aac;
        case 0x372ab0u: goto label_372ab0;
        case 0x372ab4u: goto label_372ab4;
        case 0x372ab8u: goto label_372ab8;
        case 0x372abcu: goto label_372abc;
        case 0x372ac0u: goto label_372ac0;
        case 0x372ac4u: goto label_372ac4;
        case 0x372ac8u: goto label_372ac8;
        case 0x372accu: goto label_372acc;
        case 0x372ad0u: goto label_372ad0;
        case 0x372ad4u: goto label_372ad4;
        case 0x372ad8u: goto label_372ad8;
        case 0x372adcu: goto label_372adc;
        case 0x372ae0u: goto label_372ae0;
        case 0x372ae4u: goto label_372ae4;
        case 0x372ae8u: goto label_372ae8;
        case 0x372aecu: goto label_372aec;
        case 0x372af0u: goto label_372af0;
        case 0x372af4u: goto label_372af4;
        case 0x372af8u: goto label_372af8;
        case 0x372afcu: goto label_372afc;
        case 0x372b00u: goto label_372b00;
        case 0x372b04u: goto label_372b04;
        case 0x372b08u: goto label_372b08;
        case 0x372b0cu: goto label_372b0c;
        case 0x372b10u: goto label_372b10;
        case 0x372b14u: goto label_372b14;
        case 0x372b18u: goto label_372b18;
        case 0x372b1cu: goto label_372b1c;
        case 0x372b20u: goto label_372b20;
        case 0x372b24u: goto label_372b24;
        case 0x372b28u: goto label_372b28;
        case 0x372b2cu: goto label_372b2c;
        case 0x372b30u: goto label_372b30;
        case 0x372b34u: goto label_372b34;
        case 0x372b38u: goto label_372b38;
        case 0x372b3cu: goto label_372b3c;
        case 0x372b40u: goto label_372b40;
        case 0x372b44u: goto label_372b44;
        case 0x372b48u: goto label_372b48;
        case 0x372b4cu: goto label_372b4c;
        case 0x372b50u: goto label_372b50;
        case 0x372b54u: goto label_372b54;
        case 0x372b58u: goto label_372b58;
        case 0x372b5cu: goto label_372b5c;
        case 0x372b60u: goto label_372b60;
        case 0x372b64u: goto label_372b64;
        case 0x372b68u: goto label_372b68;
        case 0x372b6cu: goto label_372b6c;
        case 0x372b70u: goto label_372b70;
        case 0x372b74u: goto label_372b74;
        case 0x372b78u: goto label_372b78;
        case 0x372b7cu: goto label_372b7c;
        case 0x372b80u: goto label_372b80;
        case 0x372b84u: goto label_372b84;
        case 0x372b88u: goto label_372b88;
        case 0x372b8cu: goto label_372b8c;
        case 0x372b90u: goto label_372b90;
        case 0x372b94u: goto label_372b94;
        case 0x372b98u: goto label_372b98;
        case 0x372b9cu: goto label_372b9c;
        case 0x372ba0u: goto label_372ba0;
        case 0x372ba4u: goto label_372ba4;
        case 0x372ba8u: goto label_372ba8;
        case 0x372bacu: goto label_372bac;
        case 0x372bb0u: goto label_372bb0;
        case 0x372bb4u: goto label_372bb4;
        case 0x372bb8u: goto label_372bb8;
        case 0x372bbcu: goto label_372bbc;
        case 0x372bc0u: goto label_372bc0;
        case 0x372bc4u: goto label_372bc4;
        case 0x372bc8u: goto label_372bc8;
        case 0x372bccu: goto label_372bcc;
        case 0x372bd0u: goto label_372bd0;
        case 0x372bd4u: goto label_372bd4;
        case 0x372bd8u: goto label_372bd8;
        case 0x372bdcu: goto label_372bdc;
        case 0x372be0u: goto label_372be0;
        case 0x372be4u: goto label_372be4;
        case 0x372be8u: goto label_372be8;
        case 0x372becu: goto label_372bec;
        case 0x372bf0u: goto label_372bf0;
        case 0x372bf4u: goto label_372bf4;
        case 0x372bf8u: goto label_372bf8;
        case 0x372bfcu: goto label_372bfc;
        case 0x372c00u: goto label_372c00;
        case 0x372c04u: goto label_372c04;
        case 0x372c08u: goto label_372c08;
        case 0x372c0cu: goto label_372c0c;
        case 0x372c10u: goto label_372c10;
        case 0x372c14u: goto label_372c14;
        case 0x372c18u: goto label_372c18;
        case 0x372c1cu: goto label_372c1c;
        case 0x372c20u: goto label_372c20;
        case 0x372c24u: goto label_372c24;
        case 0x372c28u: goto label_372c28;
        case 0x372c2cu: goto label_372c2c;
        case 0x372c30u: goto label_372c30;
        case 0x372c34u: goto label_372c34;
        case 0x372c38u: goto label_372c38;
        case 0x372c3cu: goto label_372c3c;
        case 0x372c40u: goto label_372c40;
        case 0x372c44u: goto label_372c44;
        case 0x372c48u: goto label_372c48;
        case 0x372c4cu: goto label_372c4c;
        case 0x372c50u: goto label_372c50;
        case 0x372c54u: goto label_372c54;
        case 0x372c58u: goto label_372c58;
        case 0x372c5cu: goto label_372c5c;
        case 0x372c60u: goto label_372c60;
        case 0x372c64u: goto label_372c64;
        case 0x372c68u: goto label_372c68;
        case 0x372c6cu: goto label_372c6c;
        case 0x372c70u: goto label_372c70;
        case 0x372c74u: goto label_372c74;
        case 0x372c78u: goto label_372c78;
        case 0x372c7cu: goto label_372c7c;
        case 0x372c80u: goto label_372c80;
        case 0x372c84u: goto label_372c84;
        case 0x372c88u: goto label_372c88;
        case 0x372c8cu: goto label_372c8c;
        case 0x372c90u: goto label_372c90;
        case 0x372c94u: goto label_372c94;
        case 0x372c98u: goto label_372c98;
        case 0x372c9cu: goto label_372c9c;
        case 0x372ca0u: goto label_372ca0;
        case 0x372ca4u: goto label_372ca4;
        case 0x372ca8u: goto label_372ca8;
        case 0x372cacu: goto label_372cac;
        case 0x372cb0u: goto label_372cb0;
        case 0x372cb4u: goto label_372cb4;
        case 0x372cb8u: goto label_372cb8;
        case 0x372cbcu: goto label_372cbc;
        case 0x372cc0u: goto label_372cc0;
        case 0x372cc4u: goto label_372cc4;
        case 0x372cc8u: goto label_372cc8;
        case 0x372cccu: goto label_372ccc;
        case 0x372cd0u: goto label_372cd0;
        case 0x372cd4u: goto label_372cd4;
        case 0x372cd8u: goto label_372cd8;
        case 0x372cdcu: goto label_372cdc;
        case 0x372ce0u: goto label_372ce0;
        case 0x372ce4u: goto label_372ce4;
        case 0x372ce8u: goto label_372ce8;
        case 0x372cecu: goto label_372cec;
        case 0x372cf0u: goto label_372cf0;
        case 0x372cf4u: goto label_372cf4;
        case 0x372cf8u: goto label_372cf8;
        case 0x372cfcu: goto label_372cfc;
        case 0x372d00u: goto label_372d00;
        case 0x372d04u: goto label_372d04;
        case 0x372d08u: goto label_372d08;
        case 0x372d0cu: goto label_372d0c;
        case 0x372d10u: goto label_372d10;
        case 0x372d14u: goto label_372d14;
        case 0x372d18u: goto label_372d18;
        case 0x372d1cu: goto label_372d1c;
        case 0x372d20u: goto label_372d20;
        case 0x372d24u: goto label_372d24;
        case 0x372d28u: goto label_372d28;
        case 0x372d2cu: goto label_372d2c;
        case 0x372d30u: goto label_372d30;
        case 0x372d34u: goto label_372d34;
        case 0x372d38u: goto label_372d38;
        case 0x372d3cu: goto label_372d3c;
        case 0x372d40u: goto label_372d40;
        case 0x372d44u: goto label_372d44;
        case 0x372d48u: goto label_372d48;
        case 0x372d4cu: goto label_372d4c;
        case 0x372d50u: goto label_372d50;
        case 0x372d54u: goto label_372d54;
        case 0x372d58u: goto label_372d58;
        case 0x372d5cu: goto label_372d5c;
        case 0x372d60u: goto label_372d60;
        case 0x372d64u: goto label_372d64;
        case 0x372d68u: goto label_372d68;
        case 0x372d6cu: goto label_372d6c;
        case 0x372d70u: goto label_372d70;
        case 0x372d74u: goto label_372d74;
        case 0x372d78u: goto label_372d78;
        case 0x372d7cu: goto label_372d7c;
        case 0x372d80u: goto label_372d80;
        case 0x372d84u: goto label_372d84;
        case 0x372d88u: goto label_372d88;
        case 0x372d8cu: goto label_372d8c;
        case 0x372d90u: goto label_372d90;
        case 0x372d94u: goto label_372d94;
        case 0x372d98u: goto label_372d98;
        case 0x372d9cu: goto label_372d9c;
        case 0x372da0u: goto label_372da0;
        case 0x372da4u: goto label_372da4;
        case 0x372da8u: goto label_372da8;
        case 0x372dacu: goto label_372dac;
        case 0x372db0u: goto label_372db0;
        case 0x372db4u: goto label_372db4;
        case 0x372db8u: goto label_372db8;
        case 0x372dbcu: goto label_372dbc;
        case 0x372dc0u: goto label_372dc0;
        case 0x372dc4u: goto label_372dc4;
        case 0x372dc8u: goto label_372dc8;
        case 0x372dccu: goto label_372dcc;
        case 0x372dd0u: goto label_372dd0;
        case 0x372dd4u: goto label_372dd4;
        case 0x372dd8u: goto label_372dd8;
        case 0x372ddcu: goto label_372ddc;
        case 0x372de0u: goto label_372de0;
        case 0x372de4u: goto label_372de4;
        case 0x372de8u: goto label_372de8;
        case 0x372decu: goto label_372dec;
        case 0x372df0u: goto label_372df0;
        case 0x372df4u: goto label_372df4;
        case 0x372df8u: goto label_372df8;
        case 0x372dfcu: goto label_372dfc;
        case 0x372e00u: goto label_372e00;
        case 0x372e04u: goto label_372e04;
        case 0x372e08u: goto label_372e08;
        case 0x372e0cu: goto label_372e0c;
        case 0x372e10u: goto label_372e10;
        case 0x372e14u: goto label_372e14;
        case 0x372e18u: goto label_372e18;
        case 0x372e1cu: goto label_372e1c;
        case 0x372e20u: goto label_372e20;
        case 0x372e24u: goto label_372e24;
        case 0x372e28u: goto label_372e28;
        case 0x372e2cu: goto label_372e2c;
        case 0x372e30u: goto label_372e30;
        case 0x372e34u: goto label_372e34;
        case 0x372e38u: goto label_372e38;
        case 0x372e3cu: goto label_372e3c;
        case 0x372e40u: goto label_372e40;
        case 0x372e44u: goto label_372e44;
        case 0x372e48u: goto label_372e48;
        case 0x372e4cu: goto label_372e4c;
        case 0x372e50u: goto label_372e50;
        case 0x372e54u: goto label_372e54;
        case 0x372e58u: goto label_372e58;
        case 0x372e5cu: goto label_372e5c;
        case 0x372e60u: goto label_372e60;
        case 0x372e64u: goto label_372e64;
        case 0x372e68u: goto label_372e68;
        case 0x372e6cu: goto label_372e6c;
        case 0x372e70u: goto label_372e70;
        case 0x372e74u: goto label_372e74;
        case 0x372e78u: goto label_372e78;
        case 0x372e7cu: goto label_372e7c;
        case 0x372e80u: goto label_372e80;
        case 0x372e84u: goto label_372e84;
        case 0x372e88u: goto label_372e88;
        case 0x372e8cu: goto label_372e8c;
        case 0x372e90u: goto label_372e90;
        case 0x372e94u: goto label_372e94;
        case 0x372e98u: goto label_372e98;
        case 0x372e9cu: goto label_372e9c;
        case 0x372ea0u: goto label_372ea0;
        case 0x372ea4u: goto label_372ea4;
        case 0x372ea8u: goto label_372ea8;
        case 0x372eacu: goto label_372eac;
        case 0x372eb0u: goto label_372eb0;
        case 0x372eb4u: goto label_372eb4;
        case 0x372eb8u: goto label_372eb8;
        case 0x372ebcu: goto label_372ebc;
        case 0x372ec0u: goto label_372ec0;
        case 0x372ec4u: goto label_372ec4;
        case 0x372ec8u: goto label_372ec8;
        case 0x372eccu: goto label_372ecc;
        case 0x372ed0u: goto label_372ed0;
        case 0x372ed4u: goto label_372ed4;
        case 0x372ed8u: goto label_372ed8;
        case 0x372edcu: goto label_372edc;
        case 0x372ee0u: goto label_372ee0;
        case 0x372ee4u: goto label_372ee4;
        case 0x372ee8u: goto label_372ee8;
        case 0x372eecu: goto label_372eec;
        case 0x372ef0u: goto label_372ef0;
        case 0x372ef4u: goto label_372ef4;
        case 0x372ef8u: goto label_372ef8;
        case 0x372efcu: goto label_372efc;
        case 0x372f00u: goto label_372f00;
        case 0x372f04u: goto label_372f04;
        case 0x372f08u: goto label_372f08;
        case 0x372f0cu: goto label_372f0c;
        case 0x372f10u: goto label_372f10;
        case 0x372f14u: goto label_372f14;
        case 0x372f18u: goto label_372f18;
        case 0x372f1cu: goto label_372f1c;
        case 0x372f20u: goto label_372f20;
        case 0x372f24u: goto label_372f24;
        case 0x372f28u: goto label_372f28;
        case 0x372f2cu: goto label_372f2c;
        case 0x372f30u: goto label_372f30;
        case 0x372f34u: goto label_372f34;
        case 0x372f38u: goto label_372f38;
        case 0x372f3cu: goto label_372f3c;
        case 0x372f40u: goto label_372f40;
        case 0x372f44u: goto label_372f44;
        case 0x372f48u: goto label_372f48;
        case 0x372f4cu: goto label_372f4c;
        case 0x372f50u: goto label_372f50;
        case 0x372f54u: goto label_372f54;
        case 0x372f58u: goto label_372f58;
        case 0x372f5cu: goto label_372f5c;
        case 0x372f60u: goto label_372f60;
        case 0x372f64u: goto label_372f64;
        case 0x372f68u: goto label_372f68;
        case 0x372f6cu: goto label_372f6c;
        case 0x372f70u: goto label_372f70;
        case 0x372f74u: goto label_372f74;
        case 0x372f78u: goto label_372f78;
        case 0x372f7cu: goto label_372f7c;
        case 0x372f80u: goto label_372f80;
        case 0x372f84u: goto label_372f84;
        case 0x372f88u: goto label_372f88;
        case 0x372f8cu: goto label_372f8c;
        case 0x372f90u: goto label_372f90;
        case 0x372f94u: goto label_372f94;
        case 0x372f98u: goto label_372f98;
        case 0x372f9cu: goto label_372f9c;
        case 0x372fa0u: goto label_372fa0;
        case 0x372fa4u: goto label_372fa4;
        case 0x372fa8u: goto label_372fa8;
        case 0x372facu: goto label_372fac;
        case 0x372fb0u: goto label_372fb0;
        case 0x372fb4u: goto label_372fb4;
        case 0x372fb8u: goto label_372fb8;
        case 0x372fbcu: goto label_372fbc;
        case 0x372fc0u: goto label_372fc0;
        case 0x372fc4u: goto label_372fc4;
        case 0x372fc8u: goto label_372fc8;
        case 0x372fccu: goto label_372fcc;
        case 0x372fd0u: goto label_372fd0;
        case 0x372fd4u: goto label_372fd4;
        case 0x372fd8u: goto label_372fd8;
        case 0x372fdcu: goto label_372fdc;
        case 0x372fe0u: goto label_372fe0;
        case 0x372fe4u: goto label_372fe4;
        case 0x372fe8u: goto label_372fe8;
        case 0x372fecu: goto label_372fec;
        case 0x372ff0u: goto label_372ff0;
        case 0x372ff4u: goto label_372ff4;
        case 0x372ff8u: goto label_372ff8;
        case 0x372ffcu: goto label_372ffc;
        case 0x373000u: goto label_373000;
        case 0x373004u: goto label_373004;
        case 0x373008u: goto label_373008;
        case 0x37300cu: goto label_37300c;
        case 0x373010u: goto label_373010;
        case 0x373014u: goto label_373014;
        case 0x373018u: goto label_373018;
        case 0x37301cu: goto label_37301c;
        case 0x373020u: goto label_373020;
        case 0x373024u: goto label_373024;
        case 0x373028u: goto label_373028;
        case 0x37302cu: goto label_37302c;
        case 0x373030u: goto label_373030;
        case 0x373034u: goto label_373034;
        case 0x373038u: goto label_373038;
        case 0x37303cu: goto label_37303c;
        case 0x373040u: goto label_373040;
        case 0x373044u: goto label_373044;
        case 0x373048u: goto label_373048;
        case 0x37304cu: goto label_37304c;
        case 0x373050u: goto label_373050;
        case 0x373054u: goto label_373054;
        case 0x373058u: goto label_373058;
        case 0x37305cu: goto label_37305c;
        case 0x373060u: goto label_373060;
        case 0x373064u: goto label_373064;
        case 0x373068u: goto label_373068;
        case 0x37306cu: goto label_37306c;
        case 0x373070u: goto label_373070;
        case 0x373074u: goto label_373074;
        case 0x373078u: goto label_373078;
        case 0x37307cu: goto label_37307c;
        case 0x373080u: goto label_373080;
        case 0x373084u: goto label_373084;
        case 0x373088u: goto label_373088;
        case 0x37308cu: goto label_37308c;
        default: break;
    }

    ctx->pc = 0x3726f0u;

label_3726f0:
    // 0x3726f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3726f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3726f4:
    // 0x3726f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3726f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3726f8:
    // 0x3726f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3726f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3726fc:
    // 0x3726fc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3726fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_372700:
    // 0x372700: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x372700u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_372704:
    // 0x372704: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x372704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_372708:
    // 0x372708: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x372708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_37270c:
    // 0x37270c: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x37270cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_372710:
    // 0x372710: 0xc089688  jal         func_225A20
label_372714:
    if (ctx->pc == 0x372714u) {
        ctx->pc = 0x372714u;
            // 0x372714: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
        ctx->pc = 0x372718u;
        goto label_372718;
    }
    ctx->pc = 0x372710u;
    SET_GPR_U32(ctx, 31, 0x372718u);
    ctx->pc = 0x372714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x372710u;
            // 0x372714: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A20u;
    if (runtime->hasFunction(0x225A20u)) {
        auto targetFn = runtime->lookupFunction(0x225A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372718u; }
        if (ctx->pc != 0x372718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225A20_0x225a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372718u; }
        if (ctx->pc != 0x372718u) { return; }
    }
    ctx->pc = 0x372718u;
label_372718:
    // 0x372718: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x372718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_37271c:
    // 0x37271c: 0xc7ad0054  lwc1        $f13, 0x54($sp)
    ctx->pc = 0x37271cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_372720:
    // 0x372720: 0xc7ae0058  lwc1        $f14, 0x58($sp)
    ctx->pc = 0x372720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_372724:
    // 0x372724: 0xc04cbd8  jal         func_132F60
label_372728:
    if (ctx->pc == 0x372728u) {
        ctx->pc = 0x372728u;
            // 0x372728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37272Cu;
        goto label_37272c;
    }
    ctx->pc = 0x372724u;
    SET_GPR_U32(ctx, 31, 0x37272Cu);
    ctx->pc = 0x372728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x372724u;
            // 0x372728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37272Cu; }
        if (ctx->pc != 0x37272Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37272Cu; }
        if (ctx->pc != 0x37272Cu) { return; }
    }
    ctx->pc = 0x37272Cu;
label_37272c:
    // 0x37272c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37272cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_372730:
    // 0x372730: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x372730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_372734:
    // 0x372734: 0x3e00008  jr          $ra
label_372738:
    if (ctx->pc == 0x372738u) {
        ctx->pc = 0x372738u;
            // 0x372738: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x37273Cu;
        goto label_37273c;
    }
    ctx->pc = 0x372734u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x372734u;
            // 0x372738: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37273Cu;
label_37273c:
    // 0x37273c: 0x0  nop
    ctx->pc = 0x37273cu;
    // NOP
label_372740:
    // 0x372740: 0x3e00008  jr          $ra
label_372744:
    if (ctx->pc == 0x372744u) {
        ctx->pc = 0x372748u;
        goto label_372748;
    }
    ctx->pc = 0x372740u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x372748u;
label_372748:
    // 0x372748: 0x0  nop
    ctx->pc = 0x372748u;
    // NOP
label_37274c:
    // 0x37274c: 0x0  nop
    ctx->pc = 0x37274cu;
    // NOP
label_372750:
    // 0x372750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x372750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_372754:
    // 0x372754: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x372754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_372758:
    // 0x372758: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x372758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_37275c:
    // 0x37275c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37275cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_372760:
    // 0x372760: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x372760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_372764:
    // 0x372764: 0xc0baaa0  jal         func_2EAA80
label_372768:
    if (ctx->pc == 0x372768u) {
        ctx->pc = 0x372768u;
            // 0x372768: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x37276Cu;
        goto label_37276c;
    }
    ctx->pc = 0x372764u;
    SET_GPR_U32(ctx, 31, 0x37276Cu);
    ctx->pc = 0x372768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x372764u;
            // 0x372768: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EAA80u;
    if (runtime->hasFunction(0x2EAA80u)) {
        auto targetFn = runtime->lookupFunction(0x2EAA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37276Cu; }
        if (ctx->pc != 0x37276Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EAA80_0x2eaa80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37276Cu; }
        if (ctx->pc != 0x37276Cu) { return; }
    }
    ctx->pc = 0x37276Cu;
label_37276c:
    // 0x37276c: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x37276cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_372770:
    // 0x372770: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x372770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_372774:
    // 0x372774: 0x8c440bc0  lw          $a0, 0xBC0($v0)
    ctx->pc = 0x372774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3008)));
label_372778:
    // 0x372778: 0xc122d2c  jal         func_48B4B0
label_37277c:
    if (ctx->pc == 0x37277Cu) {
        ctx->pc = 0x37277Cu;
            // 0x37277c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x372780u;
        goto label_372780;
    }
    ctx->pc = 0x372778u;
    SET_GPR_U32(ctx, 31, 0x372780u);
    ctx->pc = 0x37277Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x372778u;
            // 0x37277c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372780u; }
        if (ctx->pc != 0x372780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372780u; }
        if (ctx->pc != 0x372780u) { return; }
    }
    ctx->pc = 0x372780u;
label_372780:
    // 0x372780: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x372780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_372784:
    // 0x372784: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x372784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_372788:
    // 0x372788: 0x3e00008  jr          $ra
label_37278c:
    if (ctx->pc == 0x37278Cu) {
        ctx->pc = 0x37278Cu;
            // 0x37278c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x372790u;
        goto label_372790;
    }
    ctx->pc = 0x372788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37278Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x372788u;
            // 0x37278c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x372790u;
label_372790:
    // 0x372790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x372790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_372794:
    // 0x372794: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x372794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_372798:
    // 0x372798: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x372798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_37279c:
    // 0x37279c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37279cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3727a0:
    // 0x3727a0: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x3727a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_3727a4:
    // 0x3727a4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3727a8:
    if (ctx->pc == 0x3727A8u) {
        ctx->pc = 0x3727A8u;
            // 0x3727a8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x3727ACu;
        goto label_3727ac;
    }
    ctx->pc = 0x3727A4u;
    {
        const bool branch_taken_0x3727a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3727a4) {
            ctx->pc = 0x3727A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3727A4u;
            // 0x3727a8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3727C0u;
            goto label_3727c0;
        }
    }
    ctx->pc = 0x3727ACu;
label_3727ac:
    // 0x3727ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3727acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3727b0:
    // 0x3727b0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3727b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3727b4:
    // 0x3727b4: 0x320f809  jalr        $t9
label_3727b8:
    if (ctx->pc == 0x3727B8u) {
        ctx->pc = 0x3727B8u;
            // 0x3727b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3727BCu;
        goto label_3727bc;
    }
    ctx->pc = 0x3727B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3727BCu);
        ctx->pc = 0x3727B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3727B4u;
            // 0x3727b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3727BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3727BCu; }
            if (ctx->pc != 0x3727BCu) { return; }
        }
        }
    }
    ctx->pc = 0x3727BCu;
label_3727bc:
    // 0x3727bc: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x3727bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_3727c0:
    // 0x3727c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3727c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3727c4:
    // 0x3727c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3727c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3727c8:
    // 0x3727c8: 0x3e00008  jr          $ra
label_3727cc:
    if (ctx->pc == 0x3727CCu) {
        ctx->pc = 0x3727CCu;
            // 0x3727cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3727D0u;
        goto label_3727d0;
    }
    ctx->pc = 0x3727C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3727CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3727C8u;
            // 0x3727cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3727D0u;
label_3727d0:
    // 0x3727d0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x3727d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_3727d4:
    // 0x3727d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3727d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3727d8:
    // 0x3727d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3727d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3727dc:
    // 0x3727dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3727dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3727e0:
    // 0x3727e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3727e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3727e4:
    // 0x3727e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3727e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3727e8:
    // 0x3727e8: 0xc0892d0  jal         func_224B40
label_3727ec:
    if (ctx->pc == 0x3727ECu) {
        ctx->pc = 0x3727ECu;
            // 0x3727ec: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x3727F0u;
        goto label_3727f0;
    }
    ctx->pc = 0x3727E8u;
    SET_GPR_U32(ctx, 31, 0x3727F0u);
    ctx->pc = 0x3727ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3727E8u;
            // 0x3727ec: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3727F0u; }
        if (ctx->pc != 0x3727F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3727F0u; }
        if (ctx->pc != 0x3727F0u) { return; }
    }
    ctx->pc = 0x3727F0u;
label_3727f0:
    // 0x3727f0: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x3727f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_3727f4:
    // 0x3727f4: 0x546000be  bnel        $v1, $zero, . + 4 + (0xBE << 2)
label_3727f8:
    if (ctx->pc == 0x3727F8u) {
        ctx->pc = 0x3727F8u;
            // 0x3727f8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x3727FCu;
        goto label_3727fc;
    }
    ctx->pc = 0x3727F4u;
    {
        const bool branch_taken_0x3727f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3727f4) {
            ctx->pc = 0x3727F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3727F4u;
            // 0x3727f8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x372AF0u;
            goto label_372af0;
        }
    }
    ctx->pc = 0x3727FCu;
label_3727fc:
    // 0x3727fc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3727fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_372800:
    // 0x372800: 0x8e2300d8  lw          $v1, 0xD8($s1)
    ctx->pc = 0x372800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_372804:
    // 0x372804: 0x8c426050  lw          $v0, 0x6050($v0)
    ctx->pc = 0x372804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24656)));
label_372808:
    // 0x372808: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x372808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_37280c:
    // 0x37280c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x37280cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_372810:
    // 0x372810: 0x8c420114  lw          $v0, 0x114($v0)
    ctx->pc = 0x372810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 276)));
label_372814:
    // 0x372814: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x372814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_372818:
    // 0x372818: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x372818u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_37281c:
    // 0x37281c: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x37281cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_372820:
    // 0x372820: 0xc0b6e68  jal         func_2DB9A0
label_372824:
    if (ctx->pc == 0x372824u) {
        ctx->pc = 0x372824u;
            // 0x372824: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x372828u;
        goto label_372828;
    }
    ctx->pc = 0x372820u;
    SET_GPR_U32(ctx, 31, 0x372828u);
    ctx->pc = 0x372824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x372820u;
            // 0x372824: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372828u; }
        if (ctx->pc != 0x372828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372828u; }
        if (ctx->pc != 0x372828u) { return; }
    }
    ctx->pc = 0x372828u;
label_372828:
    // 0x372828: 0xc0b6dac  jal         func_2DB6B0
label_37282c:
    if (ctx->pc == 0x37282Cu) {
        ctx->pc = 0x37282Cu;
            // 0x37282c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x372830u;
        goto label_372830;
    }
    ctx->pc = 0x372828u;
    SET_GPR_U32(ctx, 31, 0x372830u);
    ctx->pc = 0x37282Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x372828u;
            // 0x37282c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372830u; }
        if (ctx->pc != 0x372830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372830u; }
        if (ctx->pc != 0x372830u) { return; }
    }
    ctx->pc = 0x372830u;
label_372830:
    // 0x372830: 0xc0cac94  jal         func_32B250
label_372834:
    if (ctx->pc == 0x372834u) {
        ctx->pc = 0x372834u;
            // 0x372834: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x372838u;
        goto label_372838;
    }
    ctx->pc = 0x372830u;
    SET_GPR_U32(ctx, 31, 0x372838u);
    ctx->pc = 0x372834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x372830u;
            // 0x372834: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372838u; }
        if (ctx->pc != 0x372838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372838u; }
        if (ctx->pc != 0x372838u) { return; }
    }
    ctx->pc = 0x372838u;
label_372838:
    // 0x372838: 0xc0cac84  jal         func_32B210
label_37283c:
    if (ctx->pc == 0x37283Cu) {
        ctx->pc = 0x37283Cu;
            // 0x37283c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x372840u;
        goto label_372840;
    }
    ctx->pc = 0x372838u;
    SET_GPR_U32(ctx, 31, 0x372840u);
    ctx->pc = 0x37283Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x372838u;
            // 0x37283c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372840u; }
        if (ctx->pc != 0x372840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372840u; }
        if (ctx->pc != 0x372840u) { return; }
    }
    ctx->pc = 0x372840u;
label_372840:
    // 0x372840: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x372840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_372844:
    // 0x372844: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x372844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_372848:
    // 0x372848: 0xc44cc910  lwc1        $f12, -0x36F0($v0)
    ctx->pc = 0x372848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_37284c:
    // 0x37284c: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x37284cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
label_372850:
    // 0x372850: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x372850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_372854:
    // 0x372854: 0xafa30064  sw          $v1, 0x64($sp)
    ctx->pc = 0x372854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 3));
label_372858:
    // 0x372858: 0xafa30068  sw          $v1, 0x68($sp)
    ctx->pc = 0x372858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
label_37285c:
    // 0x37285c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x37285cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_372860:
    // 0x372860: 0xc0a5a68  jal         func_2969A0
label_372864:
    if (ctx->pc == 0x372864u) {
        ctx->pc = 0x372864u;
            // 0x372864: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x372868u;
        goto label_372868;
    }
    ctx->pc = 0x372860u;
    SET_GPR_U32(ctx, 31, 0x372868u);
    ctx->pc = 0x372864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x372860u;
            // 0x372864: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372868u; }
        if (ctx->pc != 0x372868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372868u; }
        if (ctx->pc != 0x372868u) { return; }
    }
    ctx->pc = 0x372868u;
label_372868:
    // 0x372868: 0xafb000c4  sw          $s0, 0xC4($sp)
    ctx->pc = 0x372868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 16));
label_37286c:
    // 0x37286c: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x37286cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_372870:
    // 0x372870: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x372870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_372874:
    // 0x372874: 0x3448999a  ori         $t0, $v0, 0x999A
    ctx->pc = 0x372874u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_372878:
    // 0x372878: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x372878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37287c:
    // 0x37287c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x37287cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_372880:
    // 0x372880: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x372880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_372884:
    // 0x372884: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x372884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_372888:
    // 0x372888: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x372888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_37288c:
    // 0x37288c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x37288cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_372890:
    // 0x372890: 0xc7a90090  lwc1        $f9, 0x90($sp)
    ctx->pc = 0x372890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_372894:
    // 0x372894: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x372894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_372898:
    // 0x372898: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x372898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_37289c:
    // 0x37289c: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x37289cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_3728a0:
    // 0x3728a0: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x3728a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_3728a4:
    // 0x3728a4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x3728a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3728a8:
    // 0x3728a8: 0xe7a200d8  swc1        $f2, 0xD8($sp)
    ctx->pc = 0x3728a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_3728ac:
    // 0x3728ac: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x3728acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_3728b0:
    // 0x3728b0: 0xc62d002c  lwc1        $f13, 0x2C($s1)
    ctx->pc = 0x3728b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3728b4:
    // 0x3728b4: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x3728b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_3728b8:
    // 0x3728b8: 0xc62c0028  lwc1        $f12, 0x28($s1)
    ctx->pc = 0x3728b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3728bc:
    // 0x3728bc: 0xc62b0024  lwc1        $f11, 0x24($s1)
    ctx->pc = 0x3728bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_3728c0:
    // 0x3728c0: 0xc62a0020  lwc1        $f10, 0x20($s1)
    ctx->pc = 0x3728c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_3728c4:
    // 0x3728c4: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x3728c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3728c8:
    // 0x3728c8: 0xc7a200ac  lwc1        $f2, 0xAC($sp)
    ctx->pc = 0x3728c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3728cc:
    // 0x3728cc: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x3728ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3728d0:
    // 0x3728d0: 0xa3a90170  sb          $t1, 0x170($sp)
    ctx->pc = 0x3728d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 9));
label_3728d4:
    // 0x3728d4: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x3728d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_3728d8:
    // 0x3728d8: 0xafa8016c  sw          $t0, 0x16C($sp)
    ctx->pc = 0x3728d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 8));
label_3728dc:
    // 0x3728dc: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x3728dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3728e0:
    // 0x3728e0: 0xa3a70172  sb          $a3, 0x172($sp)
    ctx->pc = 0x3728e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 370), (uint8_t)GPR_U32(ctx, 7));
label_3728e4:
    // 0x3728e4: 0xe7a2012c  swc1        $f2, 0x12C($sp)
    ctx->pc = 0x3728e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_3728e8:
    // 0x3728e8: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x3728e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_3728ec:
    // 0x3728ec: 0xe7a10130  swc1        $f1, 0x130($sp)
    ctx->pc = 0x3728ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_3728f0:
    // 0x3728f0: 0xafa00158  sw          $zero, 0x158($sp)
    ctx->pc = 0x3728f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 0));
label_3728f4:
    // 0x3728f4: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x3728f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_3728f8:
    // 0x3728f8: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x3728f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3728fc:
    // 0x3728fc: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x3728fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_372900:
    // 0x372900: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x372900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_372904:
    // 0x372904: 0xe7a20138  swc1        $f2, 0x138($sp)
    ctx->pc = 0x372904u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_372908:
    // 0x372908: 0xe7a1013c  swc1        $f1, 0x13C($sp)
    ctx->pc = 0x372908u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_37290c:
    // 0x37290c: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x37290cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_372910:
    // 0x372910: 0xc7a80094  lwc1        $f8, 0x94($sp)
    ctx->pc = 0x372910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_372914:
    // 0x372914: 0xc7a70098  lwc1        $f7, 0x98($sp)
    ctx->pc = 0x372914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_372918:
    // 0x372918: 0xc7a6009c  lwc1        $f6, 0x9C($sp)
    ctx->pc = 0x372918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_37291c:
    // 0x37291c: 0xc7a500a0  lwc1        $f5, 0xA0($sp)
    ctx->pc = 0x37291cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_372920:
    // 0x372920: 0xc7a400a4  lwc1        $f4, 0xA4($sp)
    ctx->pc = 0x372920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_372924:
    // 0x372924: 0xc7a300a8  lwc1        $f3, 0xA8($sp)
    ctx->pc = 0x372924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_372928:
    // 0x372928: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x372928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37292c:
    // 0x37292c: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x37292cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_372930:
    // 0x372930: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x372930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_372934:
    // 0x372934: 0xe7aa00e0  swc1        $f10, 0xE0($sp)
    ctx->pc = 0x372934u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_372938:
    // 0x372938: 0xe7ab00e4  swc1        $f11, 0xE4($sp)
    ctx->pc = 0x372938u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_37293c:
    // 0x37293c: 0xe7ac00e8  swc1        $f12, 0xE8($sp)
    ctx->pc = 0x37293cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_372940:
    // 0x372940: 0xe7ad00ec  swc1        $f13, 0xEC($sp)
    ctx->pc = 0x372940u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_372944:
    // 0x372944: 0xe7a90110  swc1        $f9, 0x110($sp)
    ctx->pc = 0x372944u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_372948:
    // 0x372948: 0xe7a80114  swc1        $f8, 0x114($sp)
    ctx->pc = 0x372948u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_37294c:
    // 0x37294c: 0xe7a70118  swc1        $f7, 0x118($sp)
    ctx->pc = 0x37294cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_372950:
    // 0x372950: 0xe7a6011c  swc1        $f6, 0x11C($sp)
    ctx->pc = 0x372950u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_372954:
    // 0x372954: 0xe7a50120  swc1        $f5, 0x120($sp)
    ctx->pc = 0x372954u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_372958:
    // 0x372958: 0xe7a40124  swc1        $f4, 0x124($sp)
    ctx->pc = 0x372958u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_37295c:
    // 0x37295c: 0xe7a30128  swc1        $f3, 0x128($sp)
    ctx->pc = 0x37295cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_372960:
    // 0x372960: 0xe7a20144  swc1        $f2, 0x144($sp)
    ctx->pc = 0x372960u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_372964:
    // 0x372964: 0xe7a10148  swc1        $f1, 0x148($sp)
    ctx->pc = 0x372964u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_372968:
    // 0x372968: 0xc0a7a88  jal         func_29EA20
label_37296c:
    if (ctx->pc == 0x37296Cu) {
        ctx->pc = 0x37296Cu;
            // 0x37296c: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x372970u;
        goto label_372970;
    }
    ctx->pc = 0x372968u;
    SET_GPR_U32(ctx, 31, 0x372970u);
    ctx->pc = 0x37296Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x372968u;
            // 0x37296c: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372970u; }
        if (ctx->pc != 0x372970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372970u; }
        if (ctx->pc != 0x372970u) { return; }
    }
    ctx->pc = 0x372970u;
label_372970:
    // 0x372970: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x372970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_372974:
    // 0x372974: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x372974u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_372978:
    // 0x372978: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_37297c:
    if (ctx->pc == 0x37297Cu) {
        ctx->pc = 0x37297Cu;
            // 0x37297c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x372980u;
        goto label_372980;
    }
    ctx->pc = 0x372978u;
    {
        const bool branch_taken_0x372978 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x37297Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x372978u;
            // 0x37297c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372978) {
            ctx->pc = 0x3729C8u;
            goto label_3729c8;
        }
    }
    ctx->pc = 0x372980u;
label_372980:
    // 0x372980: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x372980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_372984:
    // 0x372984: 0xc088ef4  jal         func_223BD0
label_372988:
    if (ctx->pc == 0x372988u) {
        ctx->pc = 0x372988u;
            // 0x372988: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x37298Cu;
        goto label_37298c;
    }
    ctx->pc = 0x372984u;
    SET_GPR_U32(ctx, 31, 0x37298Cu);
    ctx->pc = 0x372988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x372984u;
            // 0x372988: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37298Cu; }
        if (ctx->pc != 0x37298Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37298Cu; }
        if (ctx->pc != 0x37298Cu) { return; }
    }
    ctx->pc = 0x37298Cu;
label_37298c:
    // 0x37298c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37298cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_372990:
    // 0x372990: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x372990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_372994:
    // 0x372994: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x372994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_372998:
    // 0x372998: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x372998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_37299c:
    // 0x37299c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x37299cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3729a0:
    // 0x3729a0: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x3729a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_3729a4:
    // 0x3729a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3729a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3729a8:
    // 0x3729a8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3729a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3729ac:
    // 0x3729ac: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x3729acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_3729b0:
    // 0x3729b0: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x3729b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_3729b4:
    // 0x3729b4: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x3729b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_3729b8:
    // 0x3729b8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3729b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3729bc:
    // 0x3729bc: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x3729bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3729c0:
    // 0x3729c0: 0xc088b38  jal         func_222CE0
label_3729c4:
    if (ctx->pc == 0x3729C4u) {
        ctx->pc = 0x3729C4u;
            // 0x3729c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3729C8u;
        goto label_3729c8;
    }
    ctx->pc = 0x3729C0u;
    SET_GPR_U32(ctx, 31, 0x3729C8u);
    ctx->pc = 0x3729C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3729C0u;
            // 0x3729c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3729C8u; }
        if (ctx->pc != 0x3729C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3729C8u; }
        if (ctx->pc != 0x3729C8u) { return; }
    }
    ctx->pc = 0x3729C8u;
label_3729c8:
    // 0x3729c8: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x3729c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_3729cc:
    // 0x3729cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3729ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3729d0:
    // 0x3729d0: 0x244221a0  addiu       $v0, $v0, 0x21A0
    ctx->pc = 0x3729d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8608));
label_3729d4:
    // 0x3729d4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3729d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3729d8:
    // 0x3729d8: 0xae020200  sw          $v0, 0x200($s0)
    ctx->pc = 0x3729d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 2));
label_3729dc:
    // 0x3729dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3729dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3729e0:
    // 0x3729e0: 0xc08914c  jal         func_224530
label_3729e4:
    if (ctx->pc == 0x3729E4u) {
        ctx->pc = 0x3729E4u;
            // 0x3729e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3729E8u;
        goto label_3729e8;
    }
    ctx->pc = 0x3729E0u;
    SET_GPR_U32(ctx, 31, 0x3729E8u);
    ctx->pc = 0x3729E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3729E0u;
            // 0x3729e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3729E8u; }
        if (ctx->pc != 0x3729E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3729E8u; }
        if (ctx->pc != 0x3729E8u) { return; }
    }
    ctx->pc = 0x3729E8u;
label_3729e8:
    // 0x3729e8: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x3729e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3729ec:
    // 0x3729ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3729ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3729f0:
    // 0x3729f0: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x3729f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3729f4:
    // 0x3729f4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3729f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3729f8:
    // 0x3729f8: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x3729f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3729fc:
    // 0x3729fc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3729fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_372a00:
    // 0x372a00: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x372a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_372a04:
    // 0x372a04: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x372a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_372a08:
    // 0x372a08: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x372a08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_372a0c:
    // 0x372a0c: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x372a0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_372a10:
    // 0x372a10: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x372a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_372a14:
    // 0x372a14: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x372a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_372a18:
    // 0x372a18: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x372a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_372a1c:
    // 0x372a1c: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x372a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_372a20:
    // 0x372a20: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x372a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_372a24:
    // 0x372a24: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x372a24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_372a28:
    // 0x372a28: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x372a28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_372a2c:
    // 0x372a2c: 0xc0892b0  jal         func_224AC0
label_372a30:
    if (ctx->pc == 0x372A30u) {
        ctx->pc = 0x372A30u;
            // 0x372a30: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x372A34u;
        goto label_372a34;
    }
    ctx->pc = 0x372A2Cu;
    SET_GPR_U32(ctx, 31, 0x372A34u);
    ctx->pc = 0x372A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x372A2Cu;
            // 0x372a30: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372A34u; }
        if (ctx->pc != 0x372A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372A34u; }
        if (ctx->pc != 0x372A34u) { return; }
    }
    ctx->pc = 0x372A34u;
label_372a34:
    // 0x372a34: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x372a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_372a38:
    // 0x372a38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x372a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_372a3c:
    // 0x372a3c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x372a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_372a40:
    // 0x372a40: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x372a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_372a44:
    // 0x372a44: 0xc08c164  jal         func_230590
label_372a48:
    if (ctx->pc == 0x372A48u) {
        ctx->pc = 0x372A48u;
            // 0x372a48: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x372A4Cu;
        goto label_372a4c;
    }
    ctx->pc = 0x372A44u;
    SET_GPR_U32(ctx, 31, 0x372A4Cu);
    ctx->pc = 0x372A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x372A44u;
            // 0x372a48: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372A4Cu; }
        if (ctx->pc != 0x372A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372A4Cu; }
        if (ctx->pc != 0x372A4Cu) { return; }
    }
    ctx->pc = 0x372A4Cu;
label_372a4c:
    // 0x372a4c: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x372a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_372a50:
    // 0x372a50: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x372a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_372a54:
    // 0x372a54: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x372a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_372a58:
    // 0x372a58: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x372a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_372a5c:
    // 0x372a5c: 0xc0a7a88  jal         func_29EA20
label_372a60:
    if (ctx->pc == 0x372A60u) {
        ctx->pc = 0x372A60u;
            // 0x372a60: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x372A64u;
        goto label_372a64;
    }
    ctx->pc = 0x372A5Cu;
    SET_GPR_U32(ctx, 31, 0x372A64u);
    ctx->pc = 0x372A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x372A5Cu;
            // 0x372a60: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372A64u; }
        if (ctx->pc != 0x372A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372A64u; }
        if (ctx->pc != 0x372A64u) { return; }
    }
    ctx->pc = 0x372A64u;
label_372a64:
    // 0x372a64: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x372a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_372a68:
    // 0x372a68: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x372a68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_372a6c:
    // 0x372a6c: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_372a70:
    if (ctx->pc == 0x372A70u) {
        ctx->pc = 0x372A70u;
            // 0x372a70: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x372A74u;
        goto label_372a74;
    }
    ctx->pc = 0x372A6Cu;
    {
        const bool branch_taken_0x372a6c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x372A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x372A6Cu;
            // 0x372a70: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372a6c) {
            ctx->pc = 0x372A90u;
            goto label_372a90;
        }
    }
    ctx->pc = 0x372A74u;
label_372a74:
    // 0x372a74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x372a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_372a78:
    // 0x372a78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x372a78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_372a7c:
    // 0x372a7c: 0xc0869d0  jal         func_21A740
label_372a80:
    if (ctx->pc == 0x372A80u) {
        ctx->pc = 0x372A80u;
            // 0x372a80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x372A84u;
        goto label_372a84;
    }
    ctx->pc = 0x372A7Cu;
    SET_GPR_U32(ctx, 31, 0x372A84u);
    ctx->pc = 0x372A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x372A7Cu;
            // 0x372a80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372A84u; }
        if (ctx->pc != 0x372A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372A84u; }
        if (ctx->pc != 0x372A84u) { return; }
    }
    ctx->pc = 0x372A84u;
label_372a84:
    // 0x372a84: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x372a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_372a88:
    // 0x372a88: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x372a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_372a8c:
    // 0x372a8c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x372a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_372a90:
    // 0x372a90: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x372a90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_372a94:
    // 0x372a94: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x372a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_372a98:
    // 0x372a98: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x372a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_372a9c:
    // 0x372a9c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x372a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_372aa0:
    // 0x372aa0: 0xc08c650  jal         func_231940
label_372aa4:
    if (ctx->pc == 0x372AA4u) {
        ctx->pc = 0x372AA4u;
            // 0x372aa4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x372AA8u;
        goto label_372aa8;
    }
    ctx->pc = 0x372AA0u;
    SET_GPR_U32(ctx, 31, 0x372AA8u);
    ctx->pc = 0x372AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x372AA0u;
            // 0x372aa4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372AA8u; }
        if (ctx->pc != 0x372AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372AA8u; }
        if (ctx->pc != 0x372AA8u) { return; }
    }
    ctx->pc = 0x372AA8u;
label_372aa8:
    // 0x372aa8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x372aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_372aac:
    // 0x372aac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x372aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_372ab0:
    // 0x372ab0: 0xa2260064  sb          $a2, 0x64($s1)
    ctx->pc = 0x372ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 100), (uint8_t)GPR_U32(ctx, 6));
label_372ab4:
    // 0x372ab4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x372ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_372ab8:
    // 0x372ab8: 0xa2260065  sb          $a2, 0x65($s1)
    ctx->pc = 0x372ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 101), (uint8_t)GPR_U32(ctx, 6));
label_372abc:
    // 0x372abc: 0x3c0441f0  lui         $a0, 0x41F0
    ctx->pc = 0x372abcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
label_372ac0:
    // 0x372ac0: 0xa2230066  sb          $v1, 0x66($s1)
    ctx->pc = 0x372ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 102), (uint8_t)GPR_U32(ctx, 3));
label_372ac4:
    // 0x372ac4: 0xa2260067  sb          $a2, 0x67($s1)
    ctx->pc = 0x372ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 103), (uint8_t)GPR_U32(ctx, 6));
label_372ac8:
    // 0x372ac8: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x372ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_372acc:
    // 0x372acc: 0xa2250068  sb          $a1, 0x68($s1)
    ctx->pc = 0x372accu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 104), (uint8_t)GPR_U32(ctx, 5));
label_372ad0:
    // 0x372ad0: 0xa2260069  sb          $a2, 0x69($s1)
    ctx->pc = 0x372ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 105), (uint8_t)GPR_U32(ctx, 6));
label_372ad4:
    // 0x372ad4: 0xa225006a  sb          $a1, 0x6A($s1)
    ctx->pc = 0x372ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 106), (uint8_t)GPR_U32(ctx, 5));
label_372ad8:
    // 0x372ad8: 0xa225006b  sb          $a1, 0x6B($s1)
    ctx->pc = 0x372ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 107), (uint8_t)GPR_U32(ctx, 5));
label_372adc:
    // 0x372adc: 0xae26008c  sw          $a2, 0x8C($s1)
    ctx->pc = 0x372adcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 6));
label_372ae0:
    // 0x372ae0: 0xae240070  sw          $a0, 0x70($s1)
    ctx->pc = 0x372ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 4));
label_372ae4:
    // 0x372ae4: 0xae240078  sw          $a0, 0x78($s1)
    ctx->pc = 0x372ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 4));
label_372ae8:
    // 0x372ae8: 0xae230080  sw          $v1, 0x80($s1)
    ctx->pc = 0x372ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 3));
label_372aec:
    // 0x372aec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x372aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_372af0:
    // 0x372af0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x372af0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_372af4:
    // 0x372af4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x372af4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_372af8:
    // 0x372af8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x372af8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_372afc:
    // 0x372afc: 0x3e00008  jr          $ra
label_372b00:
    if (ctx->pc == 0x372B00u) {
        ctx->pc = 0x372B00u;
            // 0x372b00: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x372B04u;
        goto label_372b04;
    }
    ctx->pc = 0x372AFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x372AFCu;
            // 0x372b00: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x372B04u;
label_372b04:
    // 0x372b04: 0x0  nop
    ctx->pc = 0x372b04u;
    // NOP
label_372b08:
    // 0x372b08: 0x0  nop
    ctx->pc = 0x372b08u;
    // NOP
label_372b0c:
    // 0x372b0c: 0x0  nop
    ctx->pc = 0x372b0cu;
    // NOP
label_372b10:
    // 0x372b10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x372b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_372b14:
    // 0x372b14: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x372b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_372b18:
    // 0x372b18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x372b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_372b1c:
    // 0x372b1c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x372b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_372b20:
    // 0x372b20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x372b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_372b24:
    // 0x372b24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x372b24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_372b28:
    // 0x372b28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x372b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_372b2c:
    // 0x372b2c: 0x8c910050  lw          $s1, 0x50($a0)
    ctx->pc = 0x372b2cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_372b30:
    // 0x372b30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x372b30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_372b34:
    // 0x372b34: 0xc08914c  jal         func_224530
label_372b38:
    if (ctx->pc == 0x372B38u) {
        ctx->pc = 0x372B38u;
            // 0x372b38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x372B3Cu;
        goto label_372b3c;
    }
    ctx->pc = 0x372B34u;
    SET_GPR_U32(ctx, 31, 0x372B3Cu);
    ctx->pc = 0x372B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x372B34u;
            // 0x372b38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372B3Cu; }
        if (ctx->pc != 0x372B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372B3Cu; }
        if (ctx->pc != 0x372B3Cu) { return; }
    }
    ctx->pc = 0x372B3Cu;
label_372b3c:
    // 0x372b3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x372b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_372b40:
    // 0x372b40: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x372b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_372b44:
    // 0x372b44: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x372b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_372b48:
    // 0x372b48: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x372b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_372b4c:
    // 0x372b4c: 0xc088b74  jal         func_222DD0
label_372b50:
    if (ctx->pc == 0x372B50u) {
        ctx->pc = 0x372B50u;
            // 0x372b50: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x372B54u;
        goto label_372b54;
    }
    ctx->pc = 0x372B4Cu;
    SET_GPR_U32(ctx, 31, 0x372B54u);
    ctx->pc = 0x372B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x372B4Cu;
            // 0x372b50: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372B54u; }
        if (ctx->pc != 0x372B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372B54u; }
        if (ctx->pc != 0x372B54u) { return; }
    }
    ctx->pc = 0x372B54u;
label_372b54:
    // 0x372b54: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x372b54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_372b58:
    // 0x372b58: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x372b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_372b5c:
    // 0x372b5c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x372b5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_372b60:
    // 0x372b60: 0x320f809  jalr        $t9
label_372b64:
    if (ctx->pc == 0x372B64u) {
        ctx->pc = 0x372B64u;
            // 0x372b64: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x372B68u;
        goto label_372b68;
    }
    ctx->pc = 0x372B60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x372B68u);
        ctx->pc = 0x372B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x372B60u;
            // 0x372b64: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x372B68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x372B68u; }
            if (ctx->pc != 0x372B68u) { return; }
        }
        }
    }
    ctx->pc = 0x372B68u;
label_372b68:
    // 0x372b68: 0xc088b74  jal         func_222DD0
label_372b6c:
    if (ctx->pc == 0x372B6Cu) {
        ctx->pc = 0x372B6Cu;
            // 0x372b6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x372B70u;
        goto label_372b70;
    }
    ctx->pc = 0x372B68u;
    SET_GPR_U32(ctx, 31, 0x372B70u);
    ctx->pc = 0x372B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x372B68u;
            // 0x372b6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372B70u; }
        if (ctx->pc != 0x372B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372B70u; }
        if (ctx->pc != 0x372B70u) { return; }
    }
    ctx->pc = 0x372B70u;
label_372b70:
    // 0x372b70: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x372b70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_372b74:
    // 0x372b74: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x372b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_372b78:
    // 0x372b78: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x372b78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_372b7c:
    // 0x372b7c: 0x320f809  jalr        $t9
label_372b80:
    if (ctx->pc == 0x372B80u) {
        ctx->pc = 0x372B80u;
            // 0x372b80: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x372B84u;
        goto label_372b84;
    }
    ctx->pc = 0x372B7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x372B84u);
        ctx->pc = 0x372B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x372B7Cu;
            // 0x372b80: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x372B84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x372B84u; }
            if (ctx->pc != 0x372B84u) { return; }
        }
        }
    }
    ctx->pc = 0x372B84u;
label_372b84:
    // 0x372b84: 0xc0e39b4  jal         func_38E6D0
label_372b88:
    if (ctx->pc == 0x372B88u) {
        ctx->pc = 0x372B88u;
            // 0x372b88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x372B8Cu;
        goto label_372b8c;
    }
    ctx->pc = 0x372B84u;
    SET_GPR_U32(ctx, 31, 0x372B8Cu);
    ctx->pc = 0x372B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x372B84u;
            // 0x372b88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E6D0u;
    if (runtime->hasFunction(0x38E6D0u)) {
        auto targetFn = runtime->lookupFunction(0x38E6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372B8Cu; }
        if (ctx->pc != 0x372B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E6D0_0x38e6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372B8Cu; }
        if (ctx->pc != 0x372B8Cu) { return; }
    }
    ctx->pc = 0x372B8Cu;
label_372b8c:
    // 0x372b8c: 0x8e1000d4  lw          $s0, 0xD4($s0)
    ctx->pc = 0x372b8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_372b90:
    // 0x372b90: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x372b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_372b94:
    // 0x372b94: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x372b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_372b98:
    // 0x372b98: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x372b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_372b9c:
    // 0x372b9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x372b9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_372ba0:
    // 0x372ba0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x372ba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_372ba4:
    // 0x372ba4: 0xc6010064  lwc1        $f1, 0x64($s0)
    ctx->pc = 0x372ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_372ba8:
    // 0x372ba8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x372ba8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_372bac:
    // 0x372bac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x372bacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_372bb0:
    // 0x372bb0: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x372bb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_372bb4:
    // 0x372bb4: 0xc04ca18  jal         func_132860
label_372bb8:
    if (ctx->pc == 0x372BB8u) {
        ctx->pc = 0x372BB8u;
            // 0x372bb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x372BBCu;
        goto label_372bbc;
    }
    ctx->pc = 0x372BB4u;
    SET_GPR_U32(ctx, 31, 0x372BBCu);
    ctx->pc = 0x372BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x372BB4u;
            // 0x372bb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372BBCu; }
        if (ctx->pc != 0x372BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372BBCu; }
        if (ctx->pc != 0x372BBCu) { return; }
    }
    ctx->pc = 0x372BBCu;
label_372bbc:
    // 0x372bbc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x372bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_372bc0:
    // 0x372bc0: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x372bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_372bc4:
    // 0x372bc4: 0xc04c72c  jal         func_131CB0
label_372bc8:
    if (ctx->pc == 0x372BC8u) {
        ctx->pc = 0x372BC8u;
            // 0x372bc8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x372BCCu;
        goto label_372bcc;
    }
    ctx->pc = 0x372BC4u;
    SET_GPR_U32(ctx, 31, 0x372BCCu);
    ctx->pc = 0x372BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x372BC4u;
            // 0x372bc8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372BCCu; }
        if (ctx->pc != 0x372BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372BCCu; }
        if (ctx->pc != 0x372BCCu) { return; }
    }
    ctx->pc = 0x372BCCu;
label_372bcc:
    // 0x372bcc: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x372bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_372bd0:
    // 0x372bd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x372bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_372bd4:
    // 0x372bd4: 0xc6060018  lwc1        $f6, 0x18($s0)
    ctx->pc = 0x372bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_372bd8:
    // 0x372bd8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x372bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_372bdc:
    // 0x372bdc: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x372bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_372be0:
    // 0x372be0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x372be0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_372be4:
    // 0x372be4: 0xc6050014  lwc1        $f5, 0x14($s0)
    ctx->pc = 0x372be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_372be8:
    // 0x372be8: 0xc6040010  lwc1        $f4, 0x10($s0)
    ctx->pc = 0x372be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_372bec:
    // 0x372bec: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x372becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_372bf0:
    // 0x372bf0: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x372bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_372bf4:
    // 0x372bf4: 0xe7a40040  swc1        $f4, 0x40($sp)
    ctx->pc = 0x372bf4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_372bf8:
    // 0x372bf8: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x372bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_372bfc:
    // 0x372bfc: 0xe7a50044  swc1        $f5, 0x44($sp)
    ctx->pc = 0x372bfcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_372c00:
    // 0x372c00: 0xe7a60048  swc1        $f6, 0x48($sp)
    ctx->pc = 0x372c00u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_372c04:
    // 0x372c04: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x372c04u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_372c08:
    // 0x372c08: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x372c08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_372c0c:
    // 0x372c0c: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x372c0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_372c10:
    // 0x372c10: 0xc0892b0  jal         func_224AC0
label_372c14:
    if (ctx->pc == 0x372C14u) {
        ctx->pc = 0x372C14u;
            // 0x372c14: 0xe7a0003c  swc1        $f0, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->pc = 0x372C18u;
        goto label_372c18;
    }
    ctx->pc = 0x372C10u;
    SET_GPR_U32(ctx, 31, 0x372C18u);
    ctx->pc = 0x372C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x372C10u;
            // 0x372c14: 0xe7a0003c  swc1        $f0, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372C18u; }
        if (ctx->pc != 0x372C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372C18u; }
        if (ctx->pc != 0x372C18u) { return; }
    }
    ctx->pc = 0x372C18u;
label_372c18:
    // 0x372c18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x372c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_372c1c:
    // 0x372c1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x372c1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_372c20:
    // 0x372c20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x372c20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_372c24:
    // 0x372c24: 0x3e00008  jr          $ra
label_372c28:
    if (ctx->pc == 0x372C28u) {
        ctx->pc = 0x372C28u;
            // 0x372c28: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x372C2Cu;
        goto label_372c2c;
    }
    ctx->pc = 0x372C24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x372C24u;
            // 0x372c28: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x372C2Cu;
label_372c2c:
    // 0x372c2c: 0x0  nop
    ctx->pc = 0x372c2cu;
    // NOP
label_372c30:
    // 0x372c30: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x372c30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_372c34:
    // 0x372c34: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x372c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_372c38:
    // 0x372c38: 0x10c30041  beq         $a2, $v1, . + 4 + (0x41 << 2)
label_372c3c:
    if (ctx->pc == 0x372C3Cu) {
        ctx->pc = 0x372C40u;
        goto label_372c40;
    }
    ctx->pc = 0x372C38u;
    {
        const bool branch_taken_0x372c38 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x372c38) {
            ctx->pc = 0x372D40u;
            goto label_372d40;
        }
    }
    ctx->pc = 0x372C40u;
label_372c40:
    // 0x372c40: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x372c40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_372c44:
    // 0x372c44: 0x10c8003e  beq         $a2, $t0, . + 4 + (0x3E << 2)
label_372c48:
    if (ctx->pc == 0x372C48u) {
        ctx->pc = 0x372C4Cu;
        goto label_372c4c;
    }
    ctx->pc = 0x372C44u;
    {
        const bool branch_taken_0x372c44 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 8));
        if (branch_taken_0x372c44) {
            ctx->pc = 0x372D40u;
            goto label_372d40;
        }
    }
    ctx->pc = 0x372C4Cu;
label_372c4c:
    // 0x372c4c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x372c4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_372c50:
    // 0x372c50: 0x50c70020  beql        $a2, $a3, . + 4 + (0x20 << 2)
label_372c54:
    if (ctx->pc == 0x372C54u) {
        ctx->pc = 0x372C54u;
            // 0x372c54: 0x8c86000c  lw          $a2, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->pc = 0x372C58u;
        goto label_372c58;
    }
    ctx->pc = 0x372C50u;
    {
        const bool branch_taken_0x372c50 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x372c50) {
            ctx->pc = 0x372C54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x372C50u;
            // 0x372c54: 0x8c86000c  lw          $a2, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x372CD4u;
            goto label_372cd4;
        }
    }
    ctx->pc = 0x372C58u;
label_372c58:
    // 0x372c58: 0x50c00003  beql        $a2, $zero, . + 4 + (0x3 << 2)
label_372c5c:
    if (ctx->pc == 0x372C5Cu) {
        ctx->pc = 0x372C5Cu;
            // 0x372c5c: 0x8c86000c  lw          $a2, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->pc = 0x372C60u;
        goto label_372c60;
    }
    ctx->pc = 0x372C58u;
    {
        const bool branch_taken_0x372c58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x372c58) {
            ctx->pc = 0x372C5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x372C58u;
            // 0x372c5c: 0x8c86000c  lw          $a2, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x372C68u;
            goto label_372c68;
        }
    }
    ctx->pc = 0x372C60u;
label_372c60:
    // 0x372c60: 0x10000037  b           . + 4 + (0x37 << 2)
label_372c64:
    if (ctx->pc == 0x372C64u) {
        ctx->pc = 0x372C68u;
        goto label_372c68;
    }
    ctx->pc = 0x372C60u;
    {
        const bool branch_taken_0x372c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x372c60) {
            ctx->pc = 0x372D40u;
            goto label_372d40;
        }
    }
    ctx->pc = 0x372C68u;
label_372c68:
    // 0x372c68: 0x8ca40d98  lw          $a0, 0xD98($a1)
    ctx->pc = 0x372c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3480)));
label_372c6c:
    // 0x372c6c: 0x8cc3010c  lw          $v1, 0x10C($a2)
    ctx->pc = 0x372c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 268)));
label_372c70:
    // 0x372c70: 0x872004  sllv        $a0, $a3, $a0
    ctx->pc = 0x372c70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
label_372c74:
    // 0x372c74: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x372c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_372c78:
    // 0x372c78: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
label_372c7c:
    if (ctx->pc == 0x372C7Cu) {
        ctx->pc = 0x372C80u;
        goto label_372c80;
    }
    ctx->pc = 0x372C78u;
    {
        const bool branch_taken_0x372c78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x372c78) {
            ctx->pc = 0x372D40u;
            goto label_372d40;
        }
    }
    ctx->pc = 0x372C80u;
label_372c80:
    // 0x372c80: 0x8cc3010c  lw          $v1, 0x10C($a2)
    ctx->pc = 0x372c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 268)));
label_372c84:
    // 0x372c84: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x372c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_372c88:
    // 0x372c88: 0xacc3010c  sw          $v1, 0x10C($a2)
    ctx->pc = 0x372c88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 268), GPR_U32(ctx, 3));
label_372c8c:
    // 0x372c8c: 0x8cc30108  lw          $v1, 0x108($a2)
    ctx->pc = 0x372c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 264)));
label_372c90:
    // 0x372c90: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
label_372c94:
    if (ctx->pc == 0x372C94u) {
        ctx->pc = 0x372C98u;
        goto label_372c98;
    }
    ctx->pc = 0x372C90u;
    {
        const bool branch_taken_0x372c90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x372c90) {
            ctx->pc = 0x372D40u;
            goto label_372d40;
        }
    }
    ctx->pc = 0x372C98u;
label_372c98:
    // 0x372c98: 0xacc00108  sw          $zero, 0x108($a2)
    ctx->pc = 0x372c98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 264), GPR_U32(ctx, 0));
label_372c9c:
    // 0x372c9c: 0x8cc50070  lw          $a1, 0x70($a2)
    ctx->pc = 0x372c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 112)));
label_372ca0:
    // 0x372ca0: 0x10a00027  beqz        $a1, . + 4 + (0x27 << 2)
label_372ca4:
    if (ctx->pc == 0x372CA4u) {
        ctx->pc = 0x372CA4u;
            // 0x372ca4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x372CA8u;
        goto label_372ca8;
    }
    ctx->pc = 0x372CA0u;
    {
        const bool branch_taken_0x372ca0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x372CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x372CA0u;
            // 0x372ca4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372ca0) {
            ctx->pc = 0x372D40u;
            goto label_372d40;
        }
    }
    ctx->pc = 0x372CA8u;
label_372ca8:
    // 0x372ca8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x372ca8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_372cac:
    // 0x372cac: 0x8cc40074  lw          $a0, 0x74($a2)
    ctx->pc = 0x372cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_372cb0:
    // 0x372cb0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x372cb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_372cb4:
    // 0x372cb4: 0x105182b  sltu        $v1, $t0, $a1
    ctx->pc = 0x372cb4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_372cb8:
    // 0x372cb8: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x372cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_372cbc:
    // 0x372cbc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x372cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_372cc0:
    // 0x372cc0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x372cc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_372cc4:
    // 0x372cc4: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_372cc8:
    if (ctx->pc == 0x372CC8u) {
        ctx->pc = 0x372CC8u;
            // 0x372cc8: 0xac800054  sw          $zero, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
        ctx->pc = 0x372CCCu;
        goto label_372ccc;
    }
    ctx->pc = 0x372CC4u;
    {
        const bool branch_taken_0x372cc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x372CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x372CC4u;
            // 0x372cc8: 0xac800054  sw          $zero, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372cc4) {
            ctx->pc = 0x372CACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_372cac;
        }
    }
    ctx->pc = 0x372CCCu;
label_372ccc:
    // 0x372ccc: 0x1000001c  b           . + 4 + (0x1C << 2)
label_372cd0:
    if (ctx->pc == 0x372CD0u) {
        ctx->pc = 0x372CD4u;
        goto label_372cd4;
    }
    ctx->pc = 0x372CCCu;
    {
        const bool branch_taken_0x372ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x372ccc) {
            ctx->pc = 0x372D40u;
            goto label_372d40;
        }
    }
    ctx->pc = 0x372CD4u;
label_372cd4:
    // 0x372cd4: 0x8ca40d98  lw          $a0, 0xD98($a1)
    ctx->pc = 0x372cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3480)));
label_372cd8:
    // 0x372cd8: 0x8cc3010c  lw          $v1, 0x10C($a2)
    ctx->pc = 0x372cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 268)));
label_372cdc:
    // 0x372cdc: 0x872004  sllv        $a0, $a3, $a0
    ctx->pc = 0x372cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
label_372ce0:
    // 0x372ce0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x372ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_372ce4:
    // 0x372ce4: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_372ce8:
    if (ctx->pc == 0x372CE8u) {
        ctx->pc = 0x372CECu;
        goto label_372cec;
    }
    ctx->pc = 0x372CE4u;
    {
        const bool branch_taken_0x372ce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x372ce4) {
            ctx->pc = 0x372D40u;
            goto label_372d40;
        }
    }
    ctx->pc = 0x372CECu;
label_372cec:
    // 0x372cec: 0x8cc3010c  lw          $v1, 0x10C($a2)
    ctx->pc = 0x372cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 268)));
label_372cf0:
    // 0x372cf0: 0x802027  not         $a0, $a0
    ctx->pc = 0x372cf0u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
label_372cf4:
    // 0x372cf4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x372cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_372cf8:
    // 0x372cf8: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
label_372cfc:
    if (ctx->pc == 0x372CFCu) {
        ctx->pc = 0x372CFCu;
            // 0x372cfc: 0xacc3010c  sw          $v1, 0x10C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 268), GPR_U32(ctx, 3));
        ctx->pc = 0x372D00u;
        goto label_372d00;
    }
    ctx->pc = 0x372CF8u;
    {
        const bool branch_taken_0x372cf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x372CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x372CF8u;
            // 0x372cfc: 0xacc3010c  sw          $v1, 0x10C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 268), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372cf8) {
            ctx->pc = 0x372D40u;
            goto label_372d40;
        }
    }
    ctx->pc = 0x372D00u;
label_372d00:
    // 0x372d00: 0x8cc30108  lw          $v1, 0x108($a2)
    ctx->pc = 0x372d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 264)));
label_372d04:
    // 0x372d04: 0x1067000e  beq         $v1, $a3, . + 4 + (0xE << 2)
label_372d08:
    if (ctx->pc == 0x372D08u) {
        ctx->pc = 0x372D0Cu;
        goto label_372d0c;
    }
    ctx->pc = 0x372D04u;
    {
        const bool branch_taken_0x372d04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x372d04) {
            ctx->pc = 0x372D40u;
            goto label_372d40;
        }
    }
    ctx->pc = 0x372D0Cu;
label_372d0c:
    // 0x372d0c: 0xacc70108  sw          $a3, 0x108($a2)
    ctx->pc = 0x372d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 264), GPR_U32(ctx, 7));
label_372d10:
    // 0x372d10: 0x8cc50070  lw          $a1, 0x70($a2)
    ctx->pc = 0x372d10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 112)));
label_372d14:
    // 0x372d14: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_372d18:
    if (ctx->pc == 0x372D18u) {
        ctx->pc = 0x372D18u;
            // 0x372d18: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x372D1Cu;
        goto label_372d1c;
    }
    ctx->pc = 0x372D14u;
    {
        const bool branch_taken_0x372d14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x372D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x372D14u;
            // 0x372d18: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372d14) {
            ctx->pc = 0x372D40u;
            goto label_372d40;
        }
    }
    ctx->pc = 0x372D1Cu;
label_372d1c:
    // 0x372d1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x372d1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_372d20:
    // 0x372d20: 0x8cc40074  lw          $a0, 0x74($a2)
    ctx->pc = 0x372d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_372d24:
    // 0x372d24: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x372d24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_372d28:
    // 0x372d28: 0x125182b  sltu        $v1, $t1, $a1
    ctx->pc = 0x372d28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_372d2c:
    // 0x372d2c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x372d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_372d30:
    // 0x372d30: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x372d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_372d34:
    // 0x372d34: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x372d34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_372d38:
    // 0x372d38: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_372d3c:
    if (ctx->pc == 0x372D3Cu) {
        ctx->pc = 0x372D3Cu;
            // 0x372d3c: 0xac880054  sw          $t0, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 8));
        ctx->pc = 0x372D40u;
        goto label_372d40;
    }
    ctx->pc = 0x372D38u;
    {
        const bool branch_taken_0x372d38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x372D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x372D38u;
            // 0x372d3c: 0xac880054  sw          $t0, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372d38) {
            ctx->pc = 0x372D20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_372d20;
        }
    }
    ctx->pc = 0x372D40u;
label_372d40:
    // 0x372d40: 0x3e00008  jr          $ra
label_372d44:
    if (ctx->pc == 0x372D44u) {
        ctx->pc = 0x372D48u;
        goto label_372d48;
    }
    ctx->pc = 0x372D40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x372D48u;
label_372d48:
    // 0x372d48: 0x0  nop
    ctx->pc = 0x372d48u;
    // NOP
label_372d4c:
    // 0x372d4c: 0x0  nop
    ctx->pc = 0x372d4cu;
    // NOP
label_372d50:
    // 0x372d50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x372d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_372d54:
    // 0x372d54: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x372d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_372d58:
    // 0x372d58: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x372d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_372d5c:
    // 0x372d5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x372d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_372d60:
    // 0x372d60: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x372d60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_372d64:
    // 0x372d64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x372d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_372d68:
    // 0x372d68: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x372d68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_372d6c:
    // 0x372d6c: 0x12600090  beqz        $s3, . + 4 + (0x90 << 2)
label_372d70:
    if (ctx->pc == 0x372D70u) {
        ctx->pc = 0x372D70u;
            // 0x372d70: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x372D74u;
        goto label_372d74;
    }
    ctx->pc = 0x372D6Cu;
    {
        const bool branch_taken_0x372d6c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x372D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x372D6Cu;
            // 0x372d70: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372d6c) {
            ctx->pc = 0x372FB0u;
            goto label_372fb0;
        }
    }
    ctx->pc = 0x372D74u;
label_372d74:
    // 0x372d74: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x372d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_372d78:
    // 0x372d78: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x372d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_372d7c:
    // 0x372d7c: 0x24636df0  addiu       $v1, $v1, 0x6DF0
    ctx->pc = 0x372d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28144));
label_372d80:
    // 0x372d80: 0x24426e28  addiu       $v0, $v0, 0x6E28
    ctx->pc = 0x372d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28200));
label_372d84:
    // 0x372d84: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x372d84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_372d88:
    // 0x372d88: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x372d88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_372d8c:
    // 0x372d8c: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x372d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_372d90:
    // 0x372d90: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x372d90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_372d94:
    // 0x372d94: 0xc0d37dc  jal         func_34DF70
label_372d98:
    if (ctx->pc == 0x372D98u) {
        ctx->pc = 0x372D98u;
            // 0x372d98: 0x260400a4  addiu       $a0, $s0, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 164));
        ctx->pc = 0x372D9Cu;
        goto label_372d9c;
    }
    ctx->pc = 0x372D94u;
    SET_GPR_U32(ctx, 31, 0x372D9Cu);
    ctx->pc = 0x372D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x372D94u;
            // 0x372d98: 0x260400a4  addiu       $a0, $s0, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 164));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372D9Cu; }
        if (ctx->pc != 0x372D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372D9Cu; }
        if (ctx->pc != 0x372D9Cu) { return; }
    }
    ctx->pc = 0x372D9Cu;
label_372d9c:
    // 0x372d9c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x372d9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_372da0:
    // 0x372da0: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x372da0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_372da4:
    // 0x372da4: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x372da4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_372da8:
    // 0x372da8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_372dac:
    if (ctx->pc == 0x372DACu) {
        ctx->pc = 0x372DB0u;
        goto label_372db0;
    }
    ctx->pc = 0x372DA8u;
    {
        const bool branch_taken_0x372da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x372da8) {
            ctx->pc = 0x372D94u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_372d94;
        }
    }
    ctx->pc = 0x372DB0u;
label_372db0:
    // 0x372db0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x372db0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_372db4:
    // 0x372db4: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x372db4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_372db8:
    // 0x372db8: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x372db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_372dbc:
    // 0x372dbc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_372dc0:
    if (ctx->pc == 0x372DC0u) {
        ctx->pc = 0x372DC4u;
        goto label_372dc4;
    }
    ctx->pc = 0x372DBCu;
    {
        const bool branch_taken_0x372dbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x372dbc) {
            ctx->pc = 0x372DD8u;
            goto label_372dd8;
        }
    }
    ctx->pc = 0x372DC4u;
label_372dc4:
    // 0x372dc4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x372dc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_372dc8:
    // 0x372dc8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x372dc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_372dcc:
    // 0x372dcc: 0x320f809  jalr        $t9
label_372dd0:
    if (ctx->pc == 0x372DD0u) {
        ctx->pc = 0x372DD0u;
            // 0x372dd0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x372DD4u;
        goto label_372dd4;
    }
    ctx->pc = 0x372DCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x372DD4u);
        ctx->pc = 0x372DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x372DCCu;
            // 0x372dd0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x372DD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x372DD4u; }
            if (ctx->pc != 0x372DD4u) { return; }
        }
        }
    }
    ctx->pc = 0x372DD4u;
label_372dd4:
    // 0x372dd4: 0x0  nop
    ctx->pc = 0x372dd4u;
    // NOP
label_372dd8:
    // 0x372dd8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x372dd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_372ddc:
    // 0x372ddc: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x372ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_372de0:
    // 0x372de0: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x372de0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_372de4:
    // 0x372de4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_372de8:
    if (ctx->pc == 0x372DE8u) {
        ctx->pc = 0x372DE8u;
            // 0x372de8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x372DECu;
        goto label_372dec;
    }
    ctx->pc = 0x372DE4u;
    {
        const bool branch_taken_0x372de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x372DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x372DE4u;
            // 0x372de8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372de4) {
            ctx->pc = 0x372DB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_372db8;
        }
    }
    ctx->pc = 0x372DECu;
label_372dec:
    // 0x372dec: 0x8e700114  lw          $s0, 0x114($s3)
    ctx->pc = 0x372decu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 276)));
label_372df0:
    // 0x372df0: 0x5200001a  beql        $s0, $zero, . + 4 + (0x1A << 2)
label_372df4:
    if (ctx->pc == 0x372DF4u) {
        ctx->pc = 0x372DF4u;
            // 0x372df4: 0x8e62012c  lw          $v0, 0x12C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 300)));
        ctx->pc = 0x372DF8u;
        goto label_372df8;
    }
    ctx->pc = 0x372DF0u;
    {
        const bool branch_taken_0x372df0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x372df0) {
            ctx->pc = 0x372DF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x372DF0u;
            // 0x372df4: 0x8e62012c  lw          $v0, 0x12C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 300)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x372E5Cu;
            goto label_372e5c;
        }
    }
    ctx->pc = 0x372DF8u;
label_372df8:
    // 0x372df8: 0x8e710110  lw          $s1, 0x110($s3)
    ctx->pc = 0x372df8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
label_372dfc:
    // 0x372dfc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x372dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_372e00:
    // 0x372e00: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x372e00u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_372e04:
    // 0x372e04: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_372e08:
    if (ctx->pc == 0x372E08u) {
        ctx->pc = 0x372E0Cu;
        goto label_372e0c;
    }
    ctx->pc = 0x372E04u;
    {
        const bool branch_taken_0x372e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x372e04) {
            ctx->pc = 0x372E40u;
            goto label_372e40;
        }
    }
    ctx->pc = 0x372E0Cu;
label_372e0c:
    // 0x372e0c: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x372e0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_372e10:
    // 0x372e10: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x372e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_372e14:
    // 0x372e14: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x372e14u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_372e18:
    // 0x372e18: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x372e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_372e1c:
    // 0x372e1c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x372e1cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_372e20:
    // 0x372e20: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_372e24:
    if (ctx->pc == 0x372E24u) {
        ctx->pc = 0x372E28u;
        goto label_372e28;
    }
    ctx->pc = 0x372E20u;
    {
        const bool branch_taken_0x372e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x372e20) {
            ctx->pc = 0x372E40u;
            goto label_372e40;
        }
    }
    ctx->pc = 0x372E28u;
label_372e28:
    // 0x372e28: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_372e2c:
    if (ctx->pc == 0x372E2Cu) {
        ctx->pc = 0x372E30u;
        goto label_372e30;
    }
    ctx->pc = 0x372E28u;
    {
        const bool branch_taken_0x372e28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x372e28) {
            ctx->pc = 0x372E40u;
            goto label_372e40;
        }
    }
    ctx->pc = 0x372E30u;
label_372e30:
    // 0x372e30: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x372e30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_372e34:
    // 0x372e34: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x372e34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_372e38:
    // 0x372e38: 0x320f809  jalr        $t9
label_372e3c:
    if (ctx->pc == 0x372E3Cu) {
        ctx->pc = 0x372E3Cu;
            // 0x372e3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x372E40u;
        goto label_372e40;
    }
    ctx->pc = 0x372E38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x372E40u);
        ctx->pc = 0x372E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x372E38u;
            // 0x372e3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x372E40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x372E40u; }
            if (ctx->pc != 0x372E40u) { return; }
        }
        }
    }
    ctx->pc = 0x372E40u;
label_372e40:
    // 0x372e40: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x372e40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_372e44:
    // 0x372e44: 0x1e20ffed  bgtz        $s1, . + 4 + (-0x13 << 2)
label_372e48:
    if (ctx->pc == 0x372E48u) {
        ctx->pc = 0x372E48u;
            // 0x372e48: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->pc = 0x372E4Cu;
        goto label_372e4c;
    }
    ctx->pc = 0x372E44u;
    {
        const bool branch_taken_0x372e44 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x372E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x372E44u;
            // 0x372e48: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372e44) {
            ctx->pc = 0x372DFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_372dfc;
        }
    }
    ctx->pc = 0x372E4Cu;
label_372e4c:
    // 0x372e4c: 0xc0400a8  jal         func_1002A0
label_372e50:
    if (ctx->pc == 0x372E50u) {
        ctx->pc = 0x372E50u;
            // 0x372e50: 0x8e640114  lw          $a0, 0x114($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 276)));
        ctx->pc = 0x372E54u;
        goto label_372e54;
    }
    ctx->pc = 0x372E4Cu;
    SET_GPR_U32(ctx, 31, 0x372E54u);
    ctx->pc = 0x372E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x372E4Cu;
            // 0x372e50: 0x8e640114  lw          $a0, 0x114($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 276)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372E54u; }
        if (ctx->pc != 0x372E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372E54u; }
        if (ctx->pc != 0x372E54u) { return; }
    }
    ctx->pc = 0x372E54u;
label_372e54:
    // 0x372e54: 0xae600114  sw          $zero, 0x114($s3)
    ctx->pc = 0x372e54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 276), GPR_U32(ctx, 0));
label_372e58:
    // 0x372e58: 0x8e62012c  lw          $v0, 0x12C($s3)
    ctx->pc = 0x372e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 300)));
label_372e5c:
    // 0x372e5c: 0x1840001c  blez        $v0, . + 4 + (0x1C << 2)
label_372e60:
    if (ctx->pc == 0x372E60u) {
        ctx->pc = 0x372E60u;
            // 0x372e60: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x372E64u;
        goto label_372e64;
    }
    ctx->pc = 0x372E5Cu;
    {
        const bool branch_taken_0x372e5c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x372E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x372E5Cu;
            // 0x372e60: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372e5c) {
            ctx->pc = 0x372ED0u;
            goto label_372ed0;
        }
    }
    ctx->pc = 0x372E64u;
label_372e64:
    // 0x372e64: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x372e64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_372e68:
    // 0x372e68: 0x8e620128  lw          $v0, 0x128($s3)
    ctx->pc = 0x372e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 296)));
label_372e6c:
    // 0x372e6c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x372e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_372e70:
    // 0x372e70: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x372e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_372e74:
    // 0x372e74: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x372e74u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_372e78:
    // 0x372e78: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_372e7c:
    if (ctx->pc == 0x372E7Cu) {
        ctx->pc = 0x372E80u;
        goto label_372e80;
    }
    ctx->pc = 0x372E78u;
    {
        const bool branch_taken_0x372e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x372e78) {
            ctx->pc = 0x372EB8u;
            goto label_372eb8;
        }
    }
    ctx->pc = 0x372E80u;
label_372e80:
    // 0x372e80: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x372e80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_372e84:
    // 0x372e84: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x372e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_372e88:
    // 0x372e88: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x372e88u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_372e8c:
    // 0x372e8c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x372e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_372e90:
    // 0x372e90: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x372e90u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_372e94:
    // 0x372e94: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_372e98:
    if (ctx->pc == 0x372E98u) {
        ctx->pc = 0x372E9Cu;
        goto label_372e9c;
    }
    ctx->pc = 0x372E94u;
    {
        const bool branch_taken_0x372e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x372e94) {
            ctx->pc = 0x372EB8u;
            goto label_372eb8;
        }
    }
    ctx->pc = 0x372E9Cu;
label_372e9c:
    // 0x372e9c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_372ea0:
    if (ctx->pc == 0x372EA0u) {
        ctx->pc = 0x372EA4u;
        goto label_372ea4;
    }
    ctx->pc = 0x372E9Cu;
    {
        const bool branch_taken_0x372e9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x372e9c) {
            ctx->pc = 0x372EB8u;
            goto label_372eb8;
        }
    }
    ctx->pc = 0x372EA4u;
label_372ea4:
    // 0x372ea4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x372ea4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_372ea8:
    // 0x372ea8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x372ea8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_372eac:
    // 0x372eac: 0x320f809  jalr        $t9
label_372eb0:
    if (ctx->pc == 0x372EB0u) {
        ctx->pc = 0x372EB0u;
            // 0x372eb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x372EB4u;
        goto label_372eb4;
    }
    ctx->pc = 0x372EACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x372EB4u);
        ctx->pc = 0x372EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x372EACu;
            // 0x372eb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x372EB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x372EB4u; }
            if (ctx->pc != 0x372EB4u) { return; }
        }
        }
    }
    ctx->pc = 0x372EB4u;
label_372eb4:
    // 0x372eb4: 0x0  nop
    ctx->pc = 0x372eb4u;
    // NOP
label_372eb8:
    // 0x372eb8: 0x8e62012c  lw          $v0, 0x12C($s3)
    ctx->pc = 0x372eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 300)));
label_372ebc:
    // 0x372ebc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x372ebcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_372ec0:
    // 0x372ec0: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x372ec0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_372ec4:
    // 0x372ec4: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_372ec8:
    if (ctx->pc == 0x372EC8u) {
        ctx->pc = 0x372EC8u;
            // 0x372ec8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x372ECCu;
        goto label_372ecc;
    }
    ctx->pc = 0x372EC4u;
    {
        const bool branch_taken_0x372ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x372EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x372EC4u;
            // 0x372ec8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372ec4) {
            ctx->pc = 0x372E68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_372e68;
        }
    }
    ctx->pc = 0x372ECCu;
label_372ecc:
    // 0x372ecc: 0x0  nop
    ctx->pc = 0x372eccu;
    // NOP
label_372ed0:
    // 0x372ed0: 0x26640128  addiu       $a0, $s3, 0x128
    ctx->pc = 0x372ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 296));
label_372ed4:
    // 0x372ed4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_372ed8:
    if (ctx->pc == 0x372ED8u) {
        ctx->pc = 0x372ED8u;
            // 0x372ed8: 0x2662011c  addiu       $v0, $s3, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 284));
        ctx->pc = 0x372EDCu;
        goto label_372edc;
    }
    ctx->pc = 0x372ED4u;
    {
        const bool branch_taken_0x372ed4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x372ed4) {
            ctx->pc = 0x372ED8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x372ED4u;
            // 0x372ed8: 0x2662011c  addiu       $v0, $s3, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 284));
        ctx->in_delay_slot = false;
            ctx->pc = 0x372EE8u;
            goto label_372ee8;
        }
    }
    ctx->pc = 0x372EDCu;
label_372edc:
    // 0x372edc: 0xc0dc5d4  jal         func_371750
label_372ee0:
    if (ctx->pc == 0x372EE0u) {
        ctx->pc = 0x372EE4u;
        goto label_372ee4;
    }
    ctx->pc = 0x372EDCu;
    SET_GPR_U32(ctx, 31, 0x372EE4u);
    ctx->pc = 0x371750u;
    if (runtime->hasFunction(0x371750u)) {
        auto targetFn = runtime->lookupFunction(0x371750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372EE4u; }
        if (ctx->pc != 0x372EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371750_0x371750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372EE4u; }
        if (ctx->pc != 0x372EE4u) { return; }
    }
    ctx->pc = 0x372EE4u;
label_372ee4:
    // 0x372ee4: 0x2662011c  addiu       $v0, $s3, 0x11C
    ctx->pc = 0x372ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 284));
label_372ee8:
    // 0x372ee8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_372eec:
    if (ctx->pc == 0x372EECu) {
        ctx->pc = 0x372EF0u;
        goto label_372ef0;
    }
    ctx->pc = 0x372EE8u;
    {
        const bool branch_taken_0x372ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x372ee8) {
            ctx->pc = 0x372F14u;
            goto label_372f14;
        }
    }
    ctx->pc = 0x372EF0u;
label_372ef0:
    // 0x372ef0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_372ef4:
    if (ctx->pc == 0x372EF4u) {
        ctx->pc = 0x372EF8u;
        goto label_372ef8;
    }
    ctx->pc = 0x372EF0u;
    {
        const bool branch_taken_0x372ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x372ef0) {
            ctx->pc = 0x372F14u;
            goto label_372f14;
        }
    }
    ctx->pc = 0x372EF8u;
label_372ef8:
    // 0x372ef8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_372efc:
    if (ctx->pc == 0x372EFCu) {
        ctx->pc = 0x372F00u;
        goto label_372f00;
    }
    ctx->pc = 0x372EF8u;
    {
        const bool branch_taken_0x372ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x372ef8) {
            ctx->pc = 0x372F14u;
            goto label_372f14;
        }
    }
    ctx->pc = 0x372F00u;
label_372f00:
    // 0x372f00: 0x8e640124  lw          $a0, 0x124($s3)
    ctx->pc = 0x372f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 292)));
label_372f04:
    // 0x372f04: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_372f08:
    if (ctx->pc == 0x372F08u) {
        ctx->pc = 0x372F0Cu;
        goto label_372f0c;
    }
    ctx->pc = 0x372F04u;
    {
        const bool branch_taken_0x372f04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x372f04) {
            ctx->pc = 0x372F14u;
            goto label_372f14;
        }
    }
    ctx->pc = 0x372F0Cu;
label_372f0c:
    // 0x372f0c: 0xc0400a8  jal         func_1002A0
label_372f10:
    if (ctx->pc == 0x372F10u) {
        ctx->pc = 0x372F14u;
        goto label_372f14;
    }
    ctx->pc = 0x372F0Cu;
    SET_GPR_U32(ctx, 31, 0x372F14u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372F14u; }
        if (ctx->pc != 0x372F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372F14u; }
        if (ctx->pc != 0x372F14u) { return; }
    }
    ctx->pc = 0x372F14u;
label_372f14:
    // 0x372f14: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x372f14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_372f18:
    // 0x372f18: 0x266400a4  addiu       $a0, $s3, 0xA4
    ctx->pc = 0x372f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 164));
label_372f1c:
    // 0x372f1c: 0x24a51ff0  addiu       $a1, $a1, 0x1FF0
    ctx->pc = 0x372f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8176));
label_372f20:
    // 0x372f20: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x372f20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_372f24:
    // 0x372f24: 0xc0407e8  jal         func_101FA0
label_372f28:
    if (ctx->pc == 0x372F28u) {
        ctx->pc = 0x372F28u;
            // 0x372f28: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x372F2Cu;
        goto label_372f2c;
    }
    ctx->pc = 0x372F24u;
    SET_GPR_U32(ctx, 31, 0x372F2Cu);
    ctx->pc = 0x372F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x372F24u;
            // 0x372f28: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372F2Cu; }
        if (ctx->pc != 0x372F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372F2Cu; }
        if (ctx->pc != 0x372F2Cu) { return; }
    }
    ctx->pc = 0x372F2Cu;
label_372f2c:
    // 0x372f2c: 0x5260001b  beql        $s3, $zero, . + 4 + (0x1B << 2)
label_372f30:
    if (ctx->pc == 0x372F30u) {
        ctx->pc = 0x372F30u;
            // 0x372f30: 0x12143c  dsll32      $v0, $s2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
        ctx->pc = 0x372F34u;
        goto label_372f34;
    }
    ctx->pc = 0x372F2Cu;
    {
        const bool branch_taken_0x372f2c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x372f2c) {
            ctx->pc = 0x372F30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x372F2Cu;
            // 0x372f30: 0x12143c  dsll32      $v0, $s2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x372F9Cu;
            goto label_372f9c;
        }
    }
    ctx->pc = 0x372F34u;
label_372f34:
    // 0x372f34: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x372f34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_372f38:
    // 0x372f38: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x372f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_372f3c:
    // 0x372f3c: 0x24636e40  addiu       $v1, $v1, 0x6E40
    ctx->pc = 0x372f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28224));
label_372f40:
    // 0x372f40: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x372f40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_372f44:
    // 0x372f44: 0x24426e78  addiu       $v0, $v0, 0x6E78
    ctx->pc = 0x372f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28280));
label_372f48:
    // 0x372f48: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x372f48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_372f4c:
    // 0x372f4c: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x372f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_372f50:
    // 0x372f50: 0x8e640068  lw          $a0, 0x68($s3)
    ctx->pc = 0x372f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
label_372f54:
    // 0x372f54: 0xc0407c0  jal         func_101F00
label_372f58:
    if (ctx->pc == 0x372F58u) {
        ctx->pc = 0x372F58u;
            // 0x372f58: 0x24a50350  addiu       $a1, $a1, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 848));
        ctx->pc = 0x372F5Cu;
        goto label_372f5c;
    }
    ctx->pc = 0x372F54u;
    SET_GPR_U32(ctx, 31, 0x372F5Cu);
    ctx->pc = 0x372F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x372F54u;
            // 0x372f58: 0x24a50350  addiu       $a1, $a1, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372F5Cu; }
        if (ctx->pc != 0x372F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372F5Cu; }
        if (ctx->pc != 0x372F5Cu) { return; }
    }
    ctx->pc = 0x372F5Cu;
label_372f5c:
    // 0x372f5c: 0x26640084  addiu       $a0, $s3, 0x84
    ctx->pc = 0x372f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 132));
label_372f60:
    // 0x372f60: 0xc0dc7b0  jal         func_371EC0
label_372f64:
    if (ctx->pc == 0x372F64u) {
        ctx->pc = 0x372F64u;
            // 0x372f64: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x372F68u;
        goto label_372f68;
    }
    ctx->pc = 0x372F60u;
    SET_GPR_U32(ctx, 31, 0x372F68u);
    ctx->pc = 0x372F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x372F60u;
            // 0x372f64: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371EC0u;
    if (runtime->hasFunction(0x371EC0u)) {
        auto targetFn = runtime->lookupFunction(0x371EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372F68u; }
        if (ctx->pc != 0x372F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371EC0_0x371ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372F68u; }
        if (ctx->pc != 0x372F68u) { return; }
    }
    ctx->pc = 0x372F68u;
label_372f68:
    // 0x372f68: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x372f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_372f6c:
    // 0x372f6c: 0xc0dc7c8  jal         func_371F20
label_372f70:
    if (ctx->pc == 0x372F70u) {
        ctx->pc = 0x372F70u;
            // 0x372f70: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x372F74u;
        goto label_372f74;
    }
    ctx->pc = 0x372F6Cu;
    SET_GPR_U32(ctx, 31, 0x372F74u);
    ctx->pc = 0x372F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x372F6Cu;
            // 0x372f70: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371F20u;
    if (runtime->hasFunction(0x371F20u)) {
        auto targetFn = runtime->lookupFunction(0x371F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372F74u; }
        if (ctx->pc != 0x372F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371F20_0x371f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372F74u; }
        if (ctx->pc != 0x372F74u) { return; }
    }
    ctx->pc = 0x372F74u;
label_372f74:
    // 0x372f74: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x372f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_372f78:
    // 0x372f78: 0xc0dc7c8  jal         func_371F20
label_372f7c:
    if (ctx->pc == 0x372F7Cu) {
        ctx->pc = 0x372F7Cu;
            // 0x372f7c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x372F80u;
        goto label_372f80;
    }
    ctx->pc = 0x372F78u;
    SET_GPR_U32(ctx, 31, 0x372F80u);
    ctx->pc = 0x372F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x372F78u;
            // 0x372f7c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371F20u;
    if (runtime->hasFunction(0x371F20u)) {
        auto targetFn = runtime->lookupFunction(0x371F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372F80u; }
        if (ctx->pc != 0x372F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371F20_0x371f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372F80u; }
        if (ctx->pc != 0x372F80u) { return; }
    }
    ctx->pc = 0x372F80u;
label_372f80:
    // 0x372f80: 0x26640064  addiu       $a0, $s3, 0x64
    ctx->pc = 0x372f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_372f84:
    // 0x372f84: 0xc0dc7e4  jal         func_371F90
label_372f88:
    if (ctx->pc == 0x372F88u) {
        ctx->pc = 0x372F88u;
            // 0x372f88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x372F8Cu;
        goto label_372f8c;
    }
    ctx->pc = 0x372F84u;
    SET_GPR_U32(ctx, 31, 0x372F8Cu);
    ctx->pc = 0x372F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x372F84u;
            // 0x372f88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371F90u;
    if (runtime->hasFunction(0x371F90u)) {
        auto targetFn = runtime->lookupFunction(0x371F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372F8Cu; }
        if (ctx->pc != 0x372F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371F90_0x371f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372F8Cu; }
        if (ctx->pc != 0x372F8Cu) { return; }
    }
    ctx->pc = 0x372F8Cu;
label_372f8c:
    // 0x372f8c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x372f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_372f90:
    // 0x372f90: 0xc0ae1c0  jal         func_2B8700
label_372f94:
    if (ctx->pc == 0x372F94u) {
        ctx->pc = 0x372F94u;
            // 0x372f94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x372F98u;
        goto label_372f98;
    }
    ctx->pc = 0x372F90u;
    SET_GPR_U32(ctx, 31, 0x372F98u);
    ctx->pc = 0x372F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x372F90u;
            // 0x372f94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372F98u; }
        if (ctx->pc != 0x372F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372F98u; }
        if (ctx->pc != 0x372F98u) { return; }
    }
    ctx->pc = 0x372F98u;
label_372f98:
    // 0x372f98: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x372f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
label_372f9c:
    // 0x372f9c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x372f9cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_372fa0:
    // 0x372fa0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_372fa4:
    if (ctx->pc == 0x372FA4u) {
        ctx->pc = 0x372FA4u;
            // 0x372fa4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x372FA8u;
        goto label_372fa8;
    }
    ctx->pc = 0x372FA0u;
    {
        const bool branch_taken_0x372fa0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x372fa0) {
            ctx->pc = 0x372FA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x372FA0u;
            // 0x372fa4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x372FB4u;
            goto label_372fb4;
        }
    }
    ctx->pc = 0x372FA8u;
label_372fa8:
    // 0x372fa8: 0xc0400a8  jal         func_1002A0
label_372fac:
    if (ctx->pc == 0x372FACu) {
        ctx->pc = 0x372FACu;
            // 0x372fac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x372FB0u;
        goto label_372fb0;
    }
    ctx->pc = 0x372FA8u;
    SET_GPR_U32(ctx, 31, 0x372FB0u);
    ctx->pc = 0x372FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x372FA8u;
            // 0x372fac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372FB0u; }
        if (ctx->pc != 0x372FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372FB0u; }
        if (ctx->pc != 0x372FB0u) { return; }
    }
    ctx->pc = 0x372FB0u;
label_372fb0:
    // 0x372fb0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x372fb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_372fb4:
    // 0x372fb4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x372fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_372fb8:
    // 0x372fb8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x372fb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_372fbc:
    // 0x372fbc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x372fbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_372fc0:
    // 0x372fc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x372fc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_372fc4:
    // 0x372fc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x372fc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_372fc8:
    // 0x372fc8: 0x3e00008  jr          $ra
label_372fcc:
    if (ctx->pc == 0x372FCCu) {
        ctx->pc = 0x372FCCu;
            // 0x372fcc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x372FD0u;
        goto label_372fd0;
    }
    ctx->pc = 0x372FC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x372FC8u;
            // 0x372fcc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x372FD0u;
label_372fd0:
    // 0x372fd0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x372fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_372fd4:
    // 0x372fd4: 0x3e00008  jr          $ra
label_372fd8:
    if (ctx->pc == 0x372FD8u) {
        ctx->pc = 0x372FD8u;
            // 0x372fd8: 0xac8300d0  sw          $v1, 0xD0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 3));
        ctx->pc = 0x372FDCu;
        goto label_372fdc;
    }
    ctx->pc = 0x372FD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x372FD4u;
            // 0x372fd8: 0xac8300d0  sw          $v1, 0xD0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x372FDCu;
label_372fdc:
    // 0x372fdc: 0x0  nop
    ctx->pc = 0x372fdcu;
    // NOP
label_372fe0:
    // 0x372fe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x372fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_372fe4:
    // 0x372fe4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x372fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_372fe8:
    // 0x372fe8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x372fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_372fec:
    // 0x372fec: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x372fecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_372ff0:
    // 0x372ff0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x372ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_372ff4:
    // 0x372ff4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x372ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_372ff8:
    // 0x372ff8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x372ff8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_372ffc:
    // 0x372ffc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x372ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_373000:
    // 0x373000: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x373000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_373004:
    // 0x373004: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_373008:
    // 0x373008: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x373008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_37300c:
    // 0x37300c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x37300cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_373010:
    // 0x373010: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x373010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_373014:
    // 0x373014: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x373014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_373018:
    // 0x373018: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x373018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_37301c:
    // 0x37301c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x37301cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_373020:
    // 0x373020: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x373020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_373024:
    // 0x373024: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x373024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_373028:
    // 0x373028: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x373028u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_37302c:
    // 0x37302c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x37302cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_373030:
    // 0x373030: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x373030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_373034:
    // 0x373034: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x373034u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_373038:
    // 0x373038: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x373038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_37303c:
    // 0x37303c: 0xc0a997c  jal         func_2A65F0
label_373040:
    if (ctx->pc == 0x373040u) {
        ctx->pc = 0x373040u;
            // 0x373040: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x373044u;
        goto label_373044;
    }
    ctx->pc = 0x37303Cu;
    SET_GPR_U32(ctx, 31, 0x373044u);
    ctx->pc = 0x373040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37303Cu;
            // 0x373040: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373044u; }
        if (ctx->pc != 0x373044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373044u; }
        if (ctx->pc != 0x373044u) { return; }
    }
    ctx->pc = 0x373044u;
label_373044:
    // 0x373044: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x373044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_373048:
    // 0x373048: 0xc0d879c  jal         func_361E70
label_37304c:
    if (ctx->pc == 0x37304Cu) {
        ctx->pc = 0x37304Cu;
            // 0x37304c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x373050u;
        goto label_373050;
    }
    ctx->pc = 0x373048u;
    SET_GPR_U32(ctx, 31, 0x373050u);
    ctx->pc = 0x37304Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373048u;
            // 0x37304c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373050u; }
        if (ctx->pc != 0x373050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373050u; }
        if (ctx->pc != 0x373050u) { return; }
    }
    ctx->pc = 0x373050u;
label_373050:
    // 0x373050: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x373050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_373054:
    // 0x373054: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x373054u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_373058:
    // 0x373058: 0x3e00008  jr          $ra
label_37305c:
    if (ctx->pc == 0x37305Cu) {
        ctx->pc = 0x37305Cu;
            // 0x37305c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x373060u;
        goto label_373060;
    }
    ctx->pc = 0x373058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37305Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x373058u;
            // 0x37305c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x373060u;
label_373060:
    // 0x373060: 0x80dc100  j           func_370400
label_373064:
    if (ctx->pc == 0x373064u) {
        ctx->pc = 0x373064u;
            // 0x373064: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x373068u;
        goto label_373068;
    }
    ctx->pc = 0x373060u;
    ctx->pc = 0x373064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373060u;
            // 0x373064: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370400u;
    {
        auto targetFn = runtime->lookupFunction(0x370400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x373068u;
label_373068:
    // 0x373068: 0x0  nop
    ctx->pc = 0x373068u;
    // NOP
label_37306c:
    // 0x37306c: 0x0  nop
    ctx->pc = 0x37306cu;
    // NOP
label_373070:
    // 0x373070: 0x80dc754  j           func_371D50
label_373074:
    if (ctx->pc == 0x373074u) {
        ctx->pc = 0x373074u;
            // 0x373074: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x373078u;
        goto label_373078;
    }
    ctx->pc = 0x373070u;
    ctx->pc = 0x373074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373070u;
            // 0x373074: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371D50u;
    {
        auto targetFn = runtime->lookupFunction(0x371D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x373078u;
label_373078:
    // 0x373078: 0x0  nop
    ctx->pc = 0x373078u;
    // NOP
label_37307c:
    // 0x37307c: 0x0  nop
    ctx->pc = 0x37307cu;
    // NOP
label_373080:
    // 0x373080: 0x80dcb54  j           func_372D50
label_373084:
    if (ctx->pc == 0x373084u) {
        ctx->pc = 0x373084u;
            // 0x373084: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x373088u;
        goto label_373088;
    }
    ctx->pc = 0x373080u;
    ctx->pc = 0x373084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373080u;
            // 0x373084: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x372D50u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_372d50;
    ctx->pc = 0x373088u;
label_373088:
    // 0x373088: 0x0  nop
    ctx->pc = 0x373088u;
    // NOP
label_37308c:
    // 0x37308c: 0x0  nop
    ctx->pc = 0x37308cu;
    // NOP
}
